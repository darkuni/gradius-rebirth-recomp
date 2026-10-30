// GX command processor: parses the FIFO stream written by the game/SDK to
// 0xCC008000, tracks CP/XF/BP state, and raises PE (draw done / token)
// interrupts. Rendering hooks in at gx_draw().
#include "hle.h"
#include "gx_state.h"
#include "gx_render.h"
void gx_cp_written();
#include <vector>
#include <atomic>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <chrono>
#include <algorithm>
void gx_flush_idle();

GXState g_gx;
static std::vector<uint8_t> g_fifo;    // pending, unparsed bytes
static size_t g_rd = 0;
void raise_interrupt(Ctx* c, int n);
void mmio_poke(uint32_t a, uint32_t v);
uint32_t mmio_peek(uint32_t a);

static const int kFmtSize[8] = {1, 1, 2, 2, 4, 0, 0, 0};
static const int kClrSize[8] = {2, 3, 4, 2, 3, 4, 0, 0};

int gx_vertex_size(int vat) {
    const uint32_t lo = g_gx.cp[0x50], hi = g_gx.cp[0x60];
    const uint32_t A = g_gx.cp[0x70 + vat], B = g_gx.cp[0x80 + vat], C = g_gx.cp[0x90 + vat];
    int size = 0;
    auto idx = [](int t) { return t == 2 ? 1 : t == 3 ? 2 : 0; };
    if (lo & 1) size++;                                     // PNMTXIDX
    for (int i = 0; i < 8; i++) if (lo & (2 << i)) size++;  // TEXnMTXIDX
    int pos = (lo >> 9) & 3;
    if (pos == 1) size += (((A >> 0) & 1) ? 3 : 2) * kFmtSize[(A >> 1) & 7]; else size += idx(pos);
    int nrm = (lo >> 11) & 3;
    if (nrm == 1) size += (((A >> 9) & 1) ? 9 : 3) * kFmtSize[(A >> 10) & 7];
    else if (nrm) size += idx(nrm) * ((((A >> 9) & 1) && ((A >> 31) & 1)) ? 3 : 1);
    for (int k = 0; k < 2; k++) {
        int t = (lo >> (13 + 2 * k)) & 3;
        int fmt = (A >> (14 + 4 * k)) & 7;
        size += t == 1 ? kClrSize[fmt] : idx(t);
    }
    // texcoord count/format bits
    int tcnt[8] = {(int)((A >> 21) & 1), (int)(B & 1), (int)((B >> 9) & 1), (int)((B >> 18) & 1), (int)((B >> 27) & 1),
                   (int)((C >> 5) & 1), (int)((C >> 14) & 1), (int)((C >> 23) & 1)};
    int tfmt[8] = {(int)((A >> 22) & 7), (int)((B >> 1) & 7), (int)((B >> 10) & 7), (int)((B >> 19) & 7), (int)((B >> 28) & 7),
                   (int)((C >> 6) & 7), (int)((C >> 15) & 7), (int)((C >> 24) & 7)};
    for (int i = 0; i < 8; i++) {
        int t = (hi >> (2 * i)) & 3;
        size += t == 1 ? (tcnt[i] ? 2 : 1) * kFmtSize[tfmt[i]] : idx(t);
    }
    return size;
}

static void bp_write(uint32_t v) {
    uint32_t reg = v >> 24, val = v & 0xFFFFFF;
    // BP mask register (0xFE) applies to the next write
    if (reg != 0xFE) {
        uint32_t m = g_gx.bp_mask;
        uint32_t nv = (g_gx.bp[reg] & ~m) | (val & m);
        if (nv != g_gx.bp[reg] || reg == 0x64 || reg == 0x65) gx_state_changing();
        g_gx.bp[reg] = nv;
        g_gx.bp_mask = 0xFFFFFF;
    } else {
        g_gx.bp_mask = val;
        return;
    }
    gx_bp_hook(reg, g_gx.bp[reg]);
    if (reg == 0x45) {                // PE_DONE: draw done
        g_gx.stats.draw_done++;
        post_irq([](Ctx* c) {
            mmio_poke(0xCC00100Au, mmio_peek(0xCC00100Au) | 0x8);
            raise_interrupt(c, 19);   // PI_PE_FINISH
        });
    } else if (reg == 0x47 || reg == 0x48) {   // PE token (0x47 = with interrupt)
        uint32_t tok = val & 0xFFFF;
        mmio_poke(0xCC00100Eu, tok);
        g_gx.stats.tokens++;
        if (reg == 0x47)
            post_irq([](Ctx* c) {
                mmio_poke(0xCC00100Au, mmio_peek(0xCC00100Au) | 0x4);
                raise_interrupt(c, 18);   // PI_PE_TOKEN
            });
    }
}

static inline uint16_t rd16(const uint8_t* p) { return (p[0] << 8) | p[1]; }
static inline uint32_t rd32(const uint8_t* p) { return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]; }

// Parse one command at p (n bytes available). Returns bytes consumed, 0 if incomplete, -1 on error.
static long parse_cmd(const uint8_t* p, size_t n, bool in_dl);

static void run_display_list(uint32_t addr, uint32_t size) {
    g_gx.stats.dl_calls++;
    std::vector<uint8_t> buf(size);
    for (uint32_t i = 0; i < size; i++) buf[i] = R8(addr + i);
    size_t pos = 0;
    while (pos < size) {
        long k = parse_cmd(buf.data() + pos, size - pos, true);
        if (k <= 0) break;
        pos += k;
    }
}

static long parse_cmd(const uint8_t* p, size_t n, bool in_dl) {
    if (n < 1) return 0;
    uint8_t op = p[0];
    switch (op) {
        case 0x00: return 1;                                   // NOP
        case 0x08:                                             // load CP
            if (n < 6) return 0;
            g_gx.cp[p[1]] = rd32(p + 2); gx_cp_written();
            return 6;
        case 0x10: {                                           // load XF
            if (n < 5) return 0;
            uint32_t cnt = rd16(p + 1) + 1, addr = rd16(p + 3);
            if (n < 5 + 4 * cnt) return 0;
            for (uint32_t i = 0; i < cnt; i++) gx_xf_write(addr + i, rd32(p + 5 + 4 * i));
            return 5 + 4 * cnt;
        }
        case 0x20: case 0x28: case 0x30: case 0x38:           // indexed XF loads
            if (n < 5) return 0;
            gx_xf_indexed(op, rd32(p + 1));
            return 5;
        case 0x40:                                             // call display list
            if (n < 9) return 0;
            if (!in_dl) run_display_list(rd32(p + 1), rd32(p + 5));
            return 9;
        case 0x44: case 0x48: return 1;                        // invalidate vertex cache
        case 0x61:                                             // load BP
            if (n < 5) return 0;
            bp_write(rd32(p + 1));
            return 5;
        default:
            if (op >= 0x80 && op < 0xC0) {                     // draw primitive
                if (n < 3) return 0;
                int vat = op & 7;
                uint32_t count = rd16(p + 1);
                int vs = gx_vertex_size(vat);
                size_t need = 3 + (size_t)count * vs;
                if (n < need) return 0;
                g_gx.stats.prims++;
                g_gx.stats.verts += count;
                gx_draw(op & 0xF8, vat, count, p + 3, vs);
                return (long)need;
            }
            g_gx.stats.bad++;
            if (g_gx.stats.bad < 20) fprintf(g_log, "[gx] unknown FIFO opcode %02X\n", op);
            return -1;
    }
}

// The FIFO is parsed and rendered on a GX thread of its own (like the real GPU working beside the
// CPU): the game's FIFO writes only append to a ring buffer. The game still syncs with the GPU the
// way it does on hardware, through draw-done / token interrupts, which the GX thread raises when it
// reaches them. GX_SYNC=1 parses on the writing thread instead (the old behaviour).
static void parse_pending() {
    for (;;) {
        long k = parse_cmd(g_fifo.data() + g_rd, g_fifo.size() - g_rd, false);
        if (k == 0) break;
        if (k < 0) { g_rd++; continue; }                       // resync on garbage
        g_rd += k;
    }
    if (g_rd > 65536) { g_fifo.erase(g_fifo.begin(), g_fifo.begin() + g_rd); g_rd = 0; }
}

static const size_t kRing = 32u << 20;                      // 32 MiB of commands in flight at most
static const size_t kMaxAhead = 12u << 20;                   // the CPU waits when the GPU is this far behind
static uint8_t* g_ring = nullptr;
static std::atomic<uint64_t> g_wpos{0}, g_rpos{0};
static uint64_t g_wlocal = 0;
static std::atomic<bool> g_gx_sleeping{false};
static std::mutex g_gx_mx;
static std::condition_variable g_gx_cv;
static int g_threaded = -1;
std::atomic<uint64_t> g_gx_busy_ns{0};

static void gx_thread() {
    for (;;) {
        uint64_t r = g_rpos.load(std::memory_order_relaxed), w = g_wpos.load(std::memory_order_acquire);
        if (r == w) {
            // spin briefly (the next burst usually follows within microseconds), then sleep
            int spins = 0;
            while (r == (w = g_wpos.load(std::memory_order_acquire)) && spins < 2000) { spins++; std::this_thread::yield(); }
            if (r == w) {
                gx_flush_idle();
                std::unique_lock<std::mutex> lk(g_gx_mx);
                g_gx_sleeping.store(true);
                g_gx_cv.wait_for(lk, std::chrono::milliseconds(1), [&] { return g_wpos.load(std::memory_order_acquire) != r; });
                g_gx_sleeping.store(false);
                continue;
            }
        }
        size_t n = (size_t)std::min<uint64_t>(w - r, 1u << 20);
        size_t off = (size_t)(r % kRing), first = std::min(n, kRing - off);
        g_fifo.insert(g_fifo.end(), g_ring + off, g_ring + off + first);
        if (first < n) g_fifo.insert(g_fifo.end(), g_ring, g_ring + (n - first));
        g_rpos.store(r + n, std::memory_order_release);
        auto t0 = std::chrono::steady_clock::now();
        parse_pending();
        g_gx_busy_ns += (uint64_t)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - t0).count();
    }
}

void fifo_write(uint32_t v, int size) {
    g_gx.stats.fifo_bytes += size;
    if (g_threaded < 0) {
        g_threaded = getenv("GX_SYNC") ? 0 : 1;
        if (g_threaded) { g_ring = new uint8_t[kRing]; std::thread(gx_thread).detach(); }
    }
    if (!g_threaded) {
        if (size == 4) { g_fifo.push_back(v >> 24); g_fifo.push_back(v >> 16); g_fifo.push_back(v >> 8); g_fifo.push_back(v); }
        else if (size == 2) { g_fifo.push_back(v >> 8); g_fifo.push_back(v); }
        else g_fifo.push_back(v);
        parse_pending();
        return;
    }
    if (g_wlocal - g_rpos.load(std::memory_order_acquire) > kMaxAhead) {
        while (g_wlocal - g_rpos.load(std::memory_order_acquire) > kMaxAhead / 2) {
            if (g_gx_sleeping.load()) g_gx_cv.notify_one();
            std::this_thread::yield();
        }
    }
    uint8_t b[4]; int k = 0;
    if (size == 4) { b[0] = v >> 24; b[1] = v >> 16; b[2] = v >> 8; b[3] = v; k = 4; }
    else if (size == 2) { b[0] = v >> 8; b[1] = v; k = 2; }
    else { b[0] = v; k = 1; }
    for (int i = 0; i < k; i++) g_ring[(g_wlocal + i) % kRing] = b[i];
    g_wlocal += k;
    g_wpos.store(g_wlocal, std::memory_order_release);
    if (g_gx_sleeping.load(std::memory_order_relaxed)) { std::lock_guard<std::mutex> lk(g_gx_mx); g_gx_cv.notify_one(); }
}
