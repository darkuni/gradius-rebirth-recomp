// Guest threads on host threads.
//
// Every guest OSThread runs on its own host thread, but only one of them
// executes guest code at a time (g_big). The SDK's own scheduler code runs
// recompiled; only the context primitives are replaced:
//   OSSaveContext  - records which host thread owns the context, returns 0
//   OSLoadContext  - hands execution to the host thread owning the context
//                    (creating it on first use) and blocks until resumed.
// When a blocked host thread is resumed, OSLoadContext simply returns, which
// unwinds SelectThread exactly like the real "OSSaveContext returned 1" path.
#include "hle.h"
#include "game.h"
#include <mutex>
#include <condition_variable>
#include <thread>
#include <chrono>
#include <unordered_map>
#include <deque>
#include <vector>
#include <memory>

static std::mutex g_big;
static bool g_dbg = getenv("TDEBUG") != nullptr;
std::atomic<unsigned long> g_irq_posted{0}, g_irq_done{0}, g_switches{0};
struct HThread {
    Ctx ctx;
    std::condition_variable cv;
    bool go = false;
    uint32_t guest_ctx = 0;
    std::thread th;
};
static thread_local HThread* t_self = nullptr;
static thread_local std::unique_lock<std::mutex>* t_lock = nullptr;
static std::unordered_map<uint32_t, HThread*> g_owner;   // guest OSContext -> host thread
static thread_local bool t_in_irq = false;
static thread_local uint32_t t_irq_ctx = 0;              // context interrupted by the current irq
static std::vector<std::unique_ptr<HThread>> g_threads;

void threads_init_main(Ctx* c) {
    static HThread main_ht;
    static std::unique_lock<std::mutex> lk(g_big);
    t_self = &main_ht;
    t_lock = &lk;
    (void)c;
}

// ---------------------------------------------------------------- context layout
enum { CTX_GPR = 0x0, CTX_CR = 0x80, CTX_LR = 0x84, CTX_CTR = 0x88, CTX_XER = 0x8C, CTX_FPR = 0x90,
       CTX_FPSCR = 0x194, CTX_SRR0 = 0x198, CTX_SRR1 = 0x19C, CTX_GQR = 0x1A4, CTX_PS1 = 0x1C8 };

static void save_ctx(Ctx* c, uint32_t g) {
    for (int i = 0; i < 32; i++) W32(g + CTX_GPR + 4 * i, c->r[i]);
    W32(g + CTX_CR, c->cr); W32(g + CTX_LR, c->lr); W32(g + CTX_CTR, c->ctr); W32(g + CTX_XER, mfspr(c, 1));
    for (int i = 0; i < 32; i++) { WF64(g + CTX_FPR + 8 * i, c->f[i]); WF64(g + CTX_PS1 + 8 * i, c->ps1[i]); }
    W32(g + CTX_FPSCR, c->fpscr);
    W32(g + CTX_SRR0, c->lr); W32(g + CTX_SRR1, c->msr);
    for (int i = 1; i < 8; i++) W32(g + CTX_GQR + 4 * i, c->gqr[i]);
}
static void load_ctx(Ctx* c, uint32_t g) {
    for (int i = 0; i < 32; i++) c->r[i] = R32(g + CTX_GPR + 4 * i);
    c->cr = R32(g + CTX_CR); c->lr = R32(g + CTX_LR); c->ctr = R32(g + CTX_CTR); mtspr(c, 1, R32(g + CTX_XER));
    for (int i = 0; i < 32; i++) { c->f[i] = RF64(g + CTX_FPR + 8 * i); c->ps1[i] = RF64(g + CTX_PS1 + 8 * i); }
    c->fpscr = R32(g + CTX_FPSCR);
    c->msr = R32(g + CTX_SRR1) | 0x8000;
    for (int i = 1; i < 8; i++) c->gqr[i] = R32(g + CTX_GQR + 4 * i);
}

void hle_OSSaveContext(Ctx* c) {
    uint32_t g = c->r[3];
    save_ctx(c, g);
    g_owner[g] = t_self;
    t_self->guest_ctx = g;
    c->r[3] = 0;
}

void gl_platform_release();
static void switch_to(HThread* next) {
    HThread* me = t_self;
    if (next == me) return;
    gl_platform_release();   // the next thread may do GX work (the GL context is one thread's at a time)
    g_switches++;
    if (g_dbg) fprintf(g_log, "[sched] %08X -> %08X\n", me->guest_ctx, next->guest_ctx);
    next->go = true;
    next->cv.notify_one();
    me->go = false;
    while (!me->go) me->cv.wait(*t_lock);
}

static void thread_main(HThread* ht, uint32_t entry) {
    std::unique_lock<std::mutex> lk(g_big);
    t_self = ht;
    t_lock = &lk;
    while (!ht->go) ht->cv.wait(lk);
    Ctx* c = &ht->ctx;
    dispatch(c, entry);
    // returning from the thread function == OSExitThread(retval)
    extern void G_FN_OS_EXIT_THREAD(Ctx*);
    G_FN_OS_EXIT_THREAD(c);
    fprintf(g_log, "[thread] OSExitThread returned on %08X\n", ht->guest_ctx);
    for (;;) { ht->go = false; while (!ht->go) ht->cv.wait(lk); }
}

void hle_OSLoadContext(Ctx* c) {
    uint32_t g = c->r[3];
    if (t_in_irq && g == t_irq_ctx) return;      // exception return to the interrupted context
    auto it = g_owner.find(g);
    if (it != g_owner.end()) {
        if (it->second == t_self) return;          // resuming ourselves (e.g. after an interrupt)
        switch_to(it->second);
        return;
    }
    // First run of a freshly created thread
    auto ht = std::make_unique<HThread>();
    HThread* h = ht.get();
    h->guest_ctx = g;
    load_ctx(&h->ctx, g);
    uint32_t entry = R32(g + CTX_SRR0);
    g_owner[g] = h;
    fprintf(g_log, "[thread] start context %08X entry %08X sp %08X\n", g, entry, h->ctx.r[1]);
    h->th = std::thread(thread_main, h, entry);
    h->th.detach();
    g_threads.push_back(std::move(ht));
    switch_to(h);
}

// OSSwitchFiber(pc, newsp): run pc on another stack, return when it returns
void hle_OSSwitchFiber(Ctx* c) {
    uint32_t pc = c->r[3], sp = c->r[4], old = c->r[1], lr = c->lr;
    c->r[1] = sp - 8;
    dispatch(c, pc);
    c->r[1] = old; c->lr = lr;
}
// OSSwitchFiberEx(a0,a1,a2,a3,pc,newsp)
void hle_OSSwitchFiberEx(Ctx* c) {
    uint32_t pc = c->r[7], sp = c->r[8], old = c->r[1], lr = c->lr;
    c->r[1] = sp - 8;
    dispatch(c, pc);
    c->r[1] = old; c->lr = lr;
}

// ---------------------------------------------------------------- interrupts
static std::mutex g_qmx;
static std::condition_variable g_irq_cv;
static std::deque<std::function<void(Ctx*)>> g_irq_q;


// Queue an interrupt ahead of everything already pending (an event the hardware would
// raise before the queued ones, e.g. the DSP finishing a frame within the current period).
void post_irq_front(std::function<void(Ctx*)> fn) {
    std::lock_guard<std::mutex> g(g_qmx);
    g_irq_q.push_front(std::move(fn));
    g_irq_posted++;
    g_irq_pending.store(1);
    g_irq_cv.notify_all();
}

void post_irq(std::function<void(Ctx*)> fn) {
    std::lock_guard<std::mutex> g(g_qmx);
    g_irq_q.push_back(std::move(fn));
    g_irq_posted++;
    g_irq_pending.store(1);
    g_irq_cv.notify_all();
}

std::atomic<uint64_t> g_idle_ns{0};   // time the emulated CPU spent idle (for the load readout)
void idle_wait() {
    auto t0 = std::chrono::steady_clock::now();
    {
        std::unique_lock<std::mutex> g(g_qmx);
        g_irq_cv.wait_for(g, std::chrono::milliseconds(2), [] { return g_irq_pending.load() != 0; });
    }
    g_idle_ns += (uint64_t)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - t0).count();
}

void irq_check(Ctx* c) {
    if (!(c->msr & 0x8000) || t_in_irq) return;
    t_in_irq = true;
    uint32_t saved_irq_ctx = t_irq_ctx;
    t_irq_ctx = R32(0x800000D4u);
    for (;;) {
        std::function<void(Ctx*)> fn;
        {
            std::lock_guard<std::mutex> g(g_qmx);
            if (g_irq_q.empty()) { g_irq_pending.store(0); break; }
            fn = std::move(g_irq_q.front());
            g_irq_q.pop_front();
        }
        static Ctx* tmp = nullptr;
        Ctx* ic = new Ctx(*c);
        ic->msr &= ~0x8000u;
        ic->r[1] = (c->r[1] - 0x400) & ~15u;
        fn(ic);
        g_irq_done++;
        delete ic;
        (void)tmp;
    }
    t_irq_ctx = saved_irq_ctx;
    t_in_irq = false;
}

void thread_status() {
    fprintf(g_log, "[status] irq posted %lu delivered %lu, switches %lu, host threads %zu, current ctx %08X\n",
            g_irq_posted.load(), g_irq_done.load(), g_switches.load(), g_threads.size() + 1, R32(0x800000D4u));
}

void hle_OSDisableInterrupts(Ctx* c) { c->r[3] = (c->msr >> 15) & 1; c->msr &= ~0x8000u; }
void hle_OSEnableInterrupts(Ctx* c) { c->r[3] = (c->msr >> 15) & 1; c->msr |= 0x8000u; IRQCHK(c); }
void hle_OSRestoreInterrupts(Ctx* c) {
    uint32_t old = (c->msr >> 15) & 1;
    if (c->r[3]) c->msr |= 0x8000u; else c->msr &= ~0x8000u;
    c->r[3] = old;
    if (c->msr & 0x8000u) IRQCHK(c);
}

uint32_t guest_call(Ctx* c, uint32_t fn, std::initializer_list<uint32_t> args) {
    Ctx* t = new Ctx(*c);
    int i = 3;
    for (uint32_t a : args) t->r[i++] = a;
    t->r[1] = (c->r[1] - 0x100) & ~15u;
    dispatch(t, fn);
    uint32_t r = t->r[3];
    delete t;
    return r;
}
