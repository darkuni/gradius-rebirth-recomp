#include <mutex>
// Host runtime for the recompiled main.dol
#include "ppc.h"
#include "table.h"
#include "funcs.h"
#include "hle.h"
#include "game.h"
#include "gx_state.h"
#include "config.h"
#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <vector>
#include <unordered_map>
#include <string>
#include <csignal>
#include <algorithm>
#ifdef _WIN32
#include <windows.h>
#include <mmsystem.h>
#else
#include <sys/mman.h>
#include <unistd.h>
#endif

static void dump_mmio_summary();
static void dump_ring();
FILE* g_log = stderr;
#define LOG g_log
static std::chrono::steady_clock::time_point T0;

// ---------------------------------------------------------------- memory
static void map_rw(uint32_t addr, uint32_t size) {
#ifdef _WIN32
    if (!VirtualAlloc(MEM + addr, size, MEM_COMMIT, PAGE_READWRITE)) { fprintf(stderr, "commit failed %08X\n", addr); exit(1); }
#else
    if (mprotect(MEM + addr, size, PROT_READ | PROT_WRITE)) { perror("mprotect"); exit(1); }
#endif
}
static void reserve_guest() {
#ifdef _WIN32
    void* p = VirtualAlloc(MEM, 0x100000000ull, MEM_RESERVE, PAGE_NOACCESS);
    if (p != MEM) {
        MessageBoxA(nullptr, "Could not reserve the emulated Wii memory (4 GB of address space at a fixed location).", GAME_NAME, MB_ICONERROR);
        exit(1);
    }
#else
    void* p = mmap(MEM, 0x100000000ull, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE | MAP_FIXED_NOREPLACE, -1, 0);
    if (p != MEM) { fprintf(stderr, "cannot reserve 4 GiB at %llx\n", GUEST_BASE); exit(1); }
#endif
    map_rw(0x80000000u, 0x01800000u);   // MEM1 24 MiB
    map_rw(0x90000000u, 0x04000000u);   // MEM2 64 MiB
    map_rw(0xE0000000u, 0x00010000u);   // locked L1 cache
}

static std::vector<uint8_t> readfile(const char* p) {
    FILE* f = fopen(p, "rb");
    if (!f) { fprintf(stderr, "cannot open %s\n", p); exit(1); }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    std::vector<uint8_t> v(n); if (fread(v.data(), 1, n, f) != (size_t)n) exit(1); fclose(f);
    return v;
}
static uint32_t be32(const uint8_t* p) { return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]; }

static uint32_t load_dol(const char* path) {
    auto d = readfile(path);
    for (int i = 0; i < 18; i++) {
        uint32_t off = be32(&d[i * 4]), addr = be32(&d[0x48 + i * 4]), sz = be32(&d[0x90 + i * 4]);
        if (sz) memcpy(MEM + addr, &d[off], sz);
    }
    uint32_t bss = be32(&d[0xD8]), bsz = be32(&d[0xDC]);
    memset(MEM + bss, 0, bsz);   // sections inside bss were already copied; __init_data handles them
    for (int i = 0; i < 18; i++) {  // re-copy data sections that live inside bss
        uint32_t off = be32(&d[i * 4]), addr = be32(&d[0x48 + i * 4]), sz = be32(&d[0x90 + i * 4]);
        if (sz) memcpy(MEM + addr, &d[off], sz);
    }
    return be32(&d[0xE0]);
}

#include "title.h"
static void low_mem() {
    // WiiWare: no disc. Game code = low 4 bytes of the title ID, maker = TMD group ID.
    uint32_t code = (uint32_t)g_title.title_id;
    W32(0x80000000u, code);
    W16(0x80000004u, g_title.group_id);
    W32(0x80000018u, 0x5D1C9EA3u);
    W32(0x80000020u, 0x0D15EA5Eu);
    W32(0x80000024u, 1);
    W32(0x80000028u, 0x01800000u);
    W32(0x8000002Cu, 0x00000023u);                            // retail Wii
    W32(0x80000030u, 0);
    W32(0x80000034u, 0x817FE8C0u);
    W32(0x800000CCu, 0);                                      // NTSC
    W32(0x800000F0u, 0x01800000u);
    W32(0x800000F8u, 0x0E7BE2C0u);                            // bus 243 MHz
    W32(0x800000FCu, 0x2B73A840u);                            // cpu 729 MHz
    W32(0x80003100u, 0x01800000u);
    W32(0x80003104u, 0x01800000u);
    W32(0x8000310Cu, 0);
    W32(0x80003110u, 0x817FE8C0u);
    W32(0x80003118u, 0x04000000u);
    W32(0x8000311Cu, 0x04000000u);
    W32(0x80003120u, 0x93400000u);
    W32(0x80003124u, 0x90000800u);
    W32(0x80003128u, 0x933E0000u);
    W32(0x80003130u, 0x933E0000u);
    W32(0x80003134u, 0x93400000u);
    W32(0x80003138u, 0x00000011u);
    uint32_t ios = (uint32_t)(g_title.ios_id & 0xFFFF);      // IOS from the TMD (IOS53 for WKTE)
    W32(0x80003140u, (ios << 16) | 0x161Fu);
    W32(0x80003188u, (ios << 16) | 0x161Fu);
    W32(0x800030E4u, 0);
}

// ---------------------------------------------------------------- MMIO
struct MmioStat { uint32_t reads = 0, writes = 0; };
static std::unordered_map<uint32_t, MmioStat> mmio_stats;
static std::unordered_map<uint32_t, uint32_t> mmio_regs;
static bool verbose_mmio = getenv("MMIO_LOG") != nullptr;
uint64_t fifo_bytes = 0;



// the GX thread pokes PE registers, so the register map is shared
static std::recursive_mutex g_mmio_mx;
void mmio_poke(uint32_t a, uint32_t v) { std::lock_guard<std::recursive_mutex> g(g_mmio_mx); mmio_regs[a] = v; }
uint32_t mmio_peek(uint32_t a) { std::lock_guard<std::recursive_mutex> g(g_mmio_mx); return mmio_regs.count(a) ? mmio_regs[a] : 0; }
uint32_t mmio_read(uint32_t a, int size) {
    std::lock_guard<std::recursive_mutex> g(g_mmio_mx);
    auto& s = mmio_stats[a];
    if (verbose_mmio && s.reads < 4) fprintf(LOG, "[mmio] R%d %08X\n", size * 8, a);
    s.reads++;
    uint32_t v = mmio_regs.count(a) ? mmio_regs[a] : 0;
    // EXI channel control: transfers complete immediately
    if (a >= 0xCD006800u && a < 0xCD006840u && ((a - 0xCD006800u) % 0x14) == 0x0C) v &= ~1u;
    if (a >= 0xCD006800u && a < 0xCD006840u && ((a - 0xCD006800u) % 0x14) == 0x10) v = 0;
    return v;
}
void mmio_write(uint32_t a, uint32_t v, int size) {
    if ((a & 0xFFFFFFF0u) == 0xCC008000u) { fifo_write(v, size); return; }
    std::lock_guard<std::recursive_mutex> g(g_mmio_mx);
    auto& s = mmio_stats[a];
    if (verbose_mmio && s.writes < 4) fprintf(LOG, "[mmio] W%d %08X = %08X\n", size * 8, a, v);
    s.writes++;
    mmio_regs[a] = v;
}

// ---------------------------------------------------------------- FP
uint32_t fctiw(Ctx* c, double v, bool trunc) {
    (void)c;
    if (std::isnan(v)) return 0x80000000u;
    double r = trunc ? std::trunc(v) : std::nearbyint(v);
    if (r >= 2147483647.0) return 0x7FFFFFFFu;
    if (r <= -2147483648.0) return 0x80000000u;
    return (uint32_t)(int32_t)r;
}
double fres(double v) { return (double)(1.0f / (float)v); }
double frsqrte(double v) { return 1.0 / std::sqrt(v); }

static inline double dequant(uint32_t raw, int type, int scale) {
    double f = std::ldexp(1.0, -scale);
    switch (type) {
        case 4: return (uint8_t)raw * f;
        case 5: return (uint16_t)raw * f;
        case 6: return (int8_t)raw * f;
        case 7: return (int16_t)raw * f;
        default: return (double)u2f(raw);
    }
}
static inline uint32_t quant(double v, int type, int scale) {
    double x = v * std::ldexp(1.0, scale);
    auto clamp = [](double x, double lo, double hi) { return x < lo ? lo : x > hi ? hi : x; };
    switch (type) {
        case 4: return (uint32_t)(uint8_t)clamp(x, 0, 255);
        case 5: return (uint32_t)(uint16_t)clamp(x, 0, 65535);
        case 6: return (uint32_t)(uint8_t)(int8_t)clamp(x, -128, 127);
        case 7: return (uint32_t)(uint16_t)(int16_t)clamp(x, -32768, 32767);
        default: return f2u((float)v);
    }
}
static inline int sscale(uint32_t s) { return (int)((s & 0x20) ? (int)s - 64 : (int)s); }

void psq_load_slow(Ctx* c, int d, uint32_t ea, int w, int i) {
    uint32_t g = c->gqr[i];
    int type = (g >> 16) & 7, scale = sscale((g >> 24) & 63);
    int sz = type == 4 || type == 6 ? 1 : type == 5 || type == 7 ? 2 : 4;
    auto rd = [&](uint32_t a) -> uint32_t { return sz == 1 ? R8(a) : sz == 2 ? R16(a) : R32(a); };
    c->f[d] = dequant(rd(ea), type, scale);
    c->ps1[d] = w ? 1.0 : dequant(rd(ea + sz), type, scale);
}
void psq_store_slow(Ctx* c, int s, uint32_t ea, int w, int i) {
    uint32_t g = c->gqr[i];
    int type = g & 7, scale = sscale((g >> 8) & 63);
    int sz = type == 4 || type == 6 ? 1 : type == 5 || type == 7 ? 2 : 4;
    auto wr = [&](uint32_t a, uint32_t v) { if (sz == 1) W8(a, (uint8_t)v); else if (sz == 2) W16(a, (uint16_t)v); else W32(a, v); };
    wr(ea, quant(c->f[s], type, scale));
    if (!w) wr(ea + sz, quant(c->ps1[s], type, scale));
}

// ---------------------------------------------------------------- SPR
uint32_t mfspr(Ctx* c, int spr) {
    if (spr == 1) return (c->xer_so << 31) | (c->xer_ov << 30) | (c->xer_ca << 29) | (c->spr[1] & 0x7F);
    if (spr >= 912 && spr <= 919) return c->gqr[spr - 912];
    if (spr == 268 || spr == 269) return mftb(c, spr);
    if (spr == 22) { extern uint32_t dec_read(); return dec_read(); }
    return c->spr[spr];
}
void mtspr(Ctx* c, int spr, uint32_t v) {
    if (spr == 1) { c->xer_so = v >> 31; c->xer_ov = (v >> 30) & 1; c->xer_ca = (v >> 29) & 1; c->spr[1] = v & 0x7F; return; }
    if (spr >= 912 && spr <= 919) { c->gqr[spr - 912] = v; return; }
    if (spr == 22) { extern void dec_write(uint32_t); dec_write(v); return; }
    if (spr == 923 && (v & 2)) {
        // locked-cache DMA (DMA_U = spr 922, DMA_L = spr 923); done immediately
        uint32_t u = c->spr[922];
        uint32_t mem = (u & ~31u), lc = (v & ~31u);
        uint32_t blocks = ((u & 31) << 2) | ((v >> 2) & 3);
        if (!blocks) blocks = 128;
        uint32_t memg = (mem & 0x3FFFFFFFu) | 0x80000000u;
        uint32_t lcg = 0xE0000000u | (lc & 0x0FFFFFFFu);
        if (v & 0x10) memcpy(MEM + xl(lcg), MEM + xl(memg), blocks * 32);   // load: RAM -> LC
        else memcpy(MEM + xl(memg), MEM + xl(lcg), blocks * 32);            // store: LC -> RAM
        c->spr[923] = v & ~2u;
        return;
    }
    c->spr[spr] = v;
}
uint32_t mftb(Ctx* c, int which) {
    (void)c;
    // Wii timebase = bus clock / 4 = 60.75 MHz
    uint64_t ns = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - T0).count();
    uint64_t tb = ns * 6075 / 100000;
    return which == 269 ? (uint32_t)(tb >> 32) : (uint32_t)tb;
}
void dcbz(uint32_t ea) {
    ea &= ~31u;
    for (int i = 0; i < 32; i += 4) W32(ea + i, 0);
}
void sc(Ctx* c, uint32_t pc) { (void)c; (void)pc; }
void unimpl(Ctx* c, uint32_t pc, const char* what) {
    fprintf(LOG, "[unimpl] %s at %08X lr=%08X\n", what, pc, c->lr);
}

// ---------------------------------------------------------------- dispatch / trace
static const FnEntry* find_fn(uint32_t a) {
    unsigned lo = 0, hi = FN_COUNT;
    while (lo < hi) {
        unsigned mid = (lo + hi) / 2;
        if (FN_TABLE[mid].addr < a) lo = mid + 1; else hi = mid;
    }
    return lo < FN_COUNT && FN_TABLE[lo].addr == a ? &FN_TABLE[lo] : nullptr;
}
static const FnEntry* containing(uint32_t a) {
    unsigned lo = 0, hi = FN_COUNT;
    while (lo < hi) {
        unsigned mid = (lo + hi) / 2;
        if (FN_TABLE[mid].addr <= a) lo = mid + 1; else hi = mid;
    }
    return lo ? &FN_TABLE[lo - 1] : nullptr;
}
GuestFn lookup(uint32_t t) { auto e = find_fn(t); return e ? e->fn : nullptr; }

void dispatch(Ctx* c, uint32_t t) {
    auto e = find_fn(t);
    if (!e) {
        auto k = containing(t);
        fprintf(LOG, "[dispatch] no function at %08X (inside %s) lr=%08X\n", t, k ? k->name : "?", c->lr);
        fflush(LOG);
        exit(2);
    }
    e->fn(c);
}

std::atomic<int> g_irq_pending{0};

static std::unordered_map<uint32_t, uint32_t> stub_counts;
static const FnEntry* find_fn(uint32_t a);
void stub_log(uint32_t a) {
    if (++stub_counts[a] <= 2) { auto e = find_fn(a); fprintf(LOG, "[stub] %08X %s\n", a, e ? e->name : "?"); }
}
static std::unordered_map<uint32_t, uint32_t> trace_counts;
static unsigned long trace_seq = 0;
static uint32_t ring[64]; static unsigned ring_i = 0;
static void dump_ring() {
    fprintf(LOG, "--- last traced calls (oldest first) ---\n");
    for (unsigned k = 0; k < 64; k++) {
        uint32_t a = ring[(ring_i + k) & 63];
        if (!a) continue;
        auto e = find_fn(a);
        fprintf(LOG, "  %08X %s\n", a, e ? e->name : "?");
    }
}
void trace_call(uint32_t a) {
    ring[ring_i++ & 63] = a;
    static bool tracing = getenv("TRACE") != nullptr;
    if (!tracing) return;
    uint32_t n = ++trace_counts[a];
    if (n <= 3) {
        auto e = find_fn(a);
        double t = std::chrono::duration<double>(std::chrono::steady_clock::now() - T0).count();
        fprintf(LOG, "[call %6lu %8.3fs] %08X %s%s\n", ++trace_seq, t, a, e ? e->name : "?", n == 3 ? "  (further calls not logged)" : "");
    }
}

#ifndef _WIN32
static void prof_dump();
#endif
static void on_signal(int sig) {
#ifndef _WIN32
    if (getenv("PROFILE")) prof_dump();
#endif
    fprintf(LOG, "\n*** signal %d\n", sig);
    extern void thread_status(); thread_status();
    extern uint64_t g_vi_count; fprintf(LOG, "[status] VI retraces %llu\n", (unsigned long long)g_vi_count);
    dump_ring();
    dump_mmio_summary();
    fflush(LOG);
    _Exit(3);
}
#ifndef _WIN32
#include <execinfo.h>
#include <sys/time.h>
#include <ucontext.h>
// PROFILE=file: sample the program counter 1000x/s (all threads), write raw addresses on exit
static uint64_t g_prof_buf[1 << 20];
static std::atomic<uint32_t> g_prof_n{0};
static void on_prof(int, siginfo_t*, void* uc) {
    uint32_t i = g_prof_n.fetch_add(1);
    if (i < (1u << 20)) g_prof_buf[i] = (uint64_t)((ucontext_t*)uc)->uc_mcontext.gregs[REG_RIP];
}
static void prof_dump() {
    const char* f = getenv("PROFILE");
    FILE* o = fopen(f, "w");
    if (!o) return;
    uint32_t n = std::min<uint32_t>(g_prof_n.load(), 1u << 20);
    extern char __executable_start;
    fprintf(o, "base %llx\n", (unsigned long long)(uintptr_t)&__executable_start);
    for (uint32_t i = 0; i < n; i++) fprintf(o, "%llx\n", (unsigned long long)g_prof_buf[i]);
    fclose(o);
}
static void prof_start() {
    if (!getenv("PROFILE")) return;
    struct sigaction sa = {}; sa.sa_sigaction = on_prof; sa.sa_flags = SA_SIGINFO | SA_RESTART;
    sigaction(SIGPROF, &sa, nullptr);
    itimerval tv = {{0, 1000}, {0, 1000}};
    setitimer(ITIMER_PROF, &tv, nullptr);
    atexit(prof_dump);
}
static void on_segv(int sig, siginfo_t* si, void*) {
    uintptr_t fa = (uintptr_t)si->si_addr;
    if (fa >= (uintptr_t)MEM && fa < (uintptr_t)MEM + 0x100000000ull)
        fprintf(LOG, "\n*** guest fault at %08X\n", (uint32_t)(fa - (uintptr_t)MEM));
    else
        fprintf(LOG, "\n*** host fault at %p\n", si->si_addr);
    dump_ring();
    void* bt[32]; int n = backtrace(bt, 32); backtrace_symbols_fd(bt, n, 2);
    (void)sig; fflush(LOG); _Exit(3);
}
#endif

static void dump_mmio_summary();
static void dump_mmio() { dump_mmio_summary(); }
static void dump_mmio_summary() {
    auto& st = g_gx.stats;
    fprintf(LOG, "\n--- GX: fifo %llu bytes, %llu prims, %llu verts, %llu display lists, %llu EFB copies, %llu draw-done, %llu tokens, %llu bad ---\n",
        (unsigned long long)st.fifo_bytes, (unsigned long long)st.prims, (unsigned long long)st.verts, (unsigned long long)st.dl_calls,
        (unsigned long long)st.copies, (unsigned long long)st.draw_done, (unsigned long long)st.tokens, (unsigned long long)st.bad);
    if (!getenv("MMIO_SUMMARY")) return;
    fprintf(LOG, "--- MMIO summary (%zu addresses) ---\n", mmio_stats.size());
    std::vector<std::pair<uint32_t, MmioStat>> v(mmio_stats.begin(), mmio_stats.end());
    std::sort(v.begin(), v.end(), [](auto& a, auto& b) { return a.first < b.first; });
    for (auto& [a, s] : v) fprintf(LOG, "  %08X  R:%u W:%u\n", a, s.reads, s.writes);
}

static std::string exe_path(const char* argv0) {
#ifdef _WIN32
    char buf[4096];
    DWORD n = GetModuleFileNameA(nullptr, buf, sizeof buf);
    if (n > 0 && n < sizeof buf) return std::string(buf, n);
#else
    char buf[4096];
    ssize_t n = readlink("/proc/self/exe", buf, sizeof buf - 1);
    if (n > 0) return std::string(buf, n);
#endif
    return argv0 ? argv0 : "";
}

#include "game_setup.h"
#ifndef GAME_SETUP_DISC
#define GAME_SETUP_DISC 0
#endif
#ifndef GAME_SETUP_WHAT
#define GAME_SETUP_WHAT "Gradius ReBirth WAD"
#endif
int main(int argc, char** argv) {
    // game data: argument, or a "game" folder next to / above the executable holding
    // main.dol, tmd.bin, ticket.bin and content/<index>.app (see tools/prepare_wad.py)
    std::string exe = exe_path(argv[0]);
    std::string exedir = exe.substr(0, exe.find_last_of("/\\") + 1);
    std::string rootstr;
    if (argc > 1) rootstr = argv[1];
    else {
        const char* cands[] = {"game", "../game", "../../game", "../../../game"};
        rootstr = exedir + "game";
        bool found = false;
        for (const std::string& base : {exedir, std::string()}) {
            for (const char* cnd : cands) {
                std::string t = base + cnd + "/tmd.bin";
                if (FILE* f = fopen(t.c_str(), "rb")) { fclose(f); rootstr = base + cnd; found = true; break; }
            }
            if (found) break;
        }
        if (!found) {
            // first start: make the game folder from the player's own WAD / disc image next to the exe
            std::string err, used;
            int r = game_setup_auto(exedir, exedir + "game", GAME_SETUP_DISC != 0, err, used);
            if (r > 0) { rootstr = exedir + "game"; fprintf(stderr, "[setup] done\n"); }
            else {
                std::string msg = r < 0 ? "Could not set up the game from " + used + ":\n" + err
                    : std::string("Game files not found.\n\nPut your own " GAME_SETUP_WHAT " in the same folder as " GAME_EXE
                                  ".exe and start it again: the game folder is made from it on the first start.\n\n"
                                  "(Or start it as: " GAME_EXE ".exe <path to game folder>)");
                fprintf(stderr, "%s\n", msg.c_str());
#ifdef _WIN32
                MessageBoxA(nullptr, msg.c_str(), GAME_NAME, MB_ICONERROR);
#endif
                return 1;
            }
        }
    }
    const char* root = rootstr.c_str();
#ifdef _WIN32
    {   // log to <game>.log next to the exe (falls back to %TEMP%); the console only gets a few lines
        std::string lp = exedir + GAME_EXE ".log";
        FILE* lf = fopen(lp.c_str(), "w");
        if (!lf) { const char* tmp = getenv("TEMP"); if (tmp) { lp = std::string(tmp) + "\\" GAME_EXE ".log"; lf = fopen(lp.c_str(), "w"); } }
        if (lf) { setvbuf(lf, nullptr, _IOLBF, 4096); g_log = lf; fprintf(stderr, "log: %s\n", lp.c_str()); }
        HANDLE in = GetStdHandle(STD_INPUT_HANDLE);   // QuickEdit selection in the console would block log writes
        DWORD mode = 0;
        if (in != INVALID_HANDLE_VALUE && GetConsoleMode(in, &mode))
            SetConsoleMode(in, (mode & ~ENABLE_QUICK_EDIT_MODE) | ENABLE_EXTENDED_FLAGS);
    }
#endif
    T0 = std::chrono::steady_clock::now();
    config_load(exe.c_str());
    reserve_guest();
    if (!title_init(root)) { fprintf(stderr, "no tmd.bin in %s\n", root); return 1; }
    uint32_t entry = load_dol((std::string(root) + "/main.dol").c_str());
    low_mem();
    extern void nand_init(const char*); nand_init(root);
    signal(SIGABRT, on_signal);
#ifndef _WIN32
    signal(SIGALRM, on_signal);
    alarm(getenv("TIMEOUT") ? atoi(getenv("TIMEOUT")) : 15);
#endif
#ifndef _WIN32
    struct sigaction sa = {}; sa.sa_sigaction = on_segv; sa.sa_flags = SA_SIGINFO;
    sigaction(SIGSEGV, &sa, nullptr); sigaction(SIGBUS, &sa, nullptr);
#endif
    atexit(dump_mmio);
#ifndef _WIN32
    prof_start();
#endif
    static Ctx ctx;
    memset(&ctx, 0, sizeof ctx);
    ctx.msr = 0x00002032;
#ifdef _WIN32
    timeBeginPeriod(1);   // 1 ms scheduler granularity for condition-variable waits (alarms)
#endif
    threads_init_main(&ctx);
    extern void devices_start(); devices_start();
    fprintf(LOG, "entry %08X\n", entry);
    dispatch(&ctx, entry);
    fprintf(LOG, "__start returned\n");
    return 0;
}
