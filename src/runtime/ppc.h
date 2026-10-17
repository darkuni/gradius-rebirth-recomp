// Runtime for recompiled Gekko/Broadway code.
#pragma once
#include <cstdint>
#include <cstring>
#include <cmath>
#include <cstdlib>

struct Ctx {
    uint32_t r[32];
    double f[32];      // ps0
    double ps1[32];    // ps1
    uint32_t cr;
    uint32_t lr, ctr;
    uint32_t xer_so, xer_ov, xer_ca;
    uint32_t gqr[8];
    uint32_t fpscr;
    uint32_t msr;
    uint32_t spr[1024];
};

// 4 GiB reservation at a fixed host address; guest address == offset. A constant base
// lets the compiler fold it into addressing instead of reloading a global after every store.
#define GUEST_BASE 0x10000000000ull
#define MEM ((uint8_t*)GUEST_BASE)

// ---------------- memory ----------------
uint32_t mmio_read(uint32_t a, int size);
void mmio_write(uint32_t a, uint32_t v, int size);
void fifo_write(uint32_t v, int size);

static inline bool is_mmio(uint32_t a) { return (a & 0xFE000000u) == 0xCC000000u; }
static inline uint32_t xl(uint32_t a) {
    // 0xC0000000-0xDFFFFFFF are uncached mirrors of 0x80000000-0x9FFFFFFF
    if ((a & 0xE0000000u) == 0xC0000000u) return a - 0x40000000u;
    return a;
}
static inline uint8_t R8(uint32_t a) { if (is_mmio(a)) return (uint8_t)mmio_read(a, 1); return MEM[xl(a)]; }
static inline uint16_t R16(uint32_t a) { if (is_mmio(a)) return (uint16_t)mmio_read(a, 2); uint16_t v; memcpy(&v, MEM + xl(a), 2); return __builtin_bswap16(v); }
static inline uint32_t R32(uint32_t a) { if (is_mmio(a)) return mmio_read(a, 4); uint32_t v; memcpy(&v, MEM + xl(a), 4); return __builtin_bswap32(v); }
static inline uint64_t R64(uint32_t a) { uint64_t v; memcpy(&v, MEM + xl(a), 8); return __builtin_bswap64(v); }
static inline void W8(uint32_t a, uint8_t v) { if (is_mmio(a)) { mmio_write(a, v, 1); return; } MEM[xl(a)] = v; }
static inline void W16(uint32_t a, uint16_t v) { if (is_mmio(a)) { mmio_write(a, v, 2); return; } v = __builtin_bswap16(v); memcpy(MEM + xl(a), &v, 2); }
static inline void W32(uint32_t a, uint32_t v) { if (is_mmio(a)) { mmio_write(a, v, 4); return; } v = __builtin_bswap32(v); memcpy(MEM + xl(a), &v, 4); }
static inline void W64(uint32_t a, uint64_t v) { v = __builtin_bswap64(v); memcpy(MEM + xl(a), &v, 8); }

static inline float u2f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline double u2d(uint64_t u) { double d; memcpy(&d, &u, 8); return d; }
static inline uint64_t d2u(double d) { uint64_t u; memcpy(&u, &d, 8); return u; }
static inline double RF32(uint32_t a) { return (double)u2f(R32(a)); }
static inline double RF64(uint32_t a) { return u2d(R64(a)); }
static inline void WF32(uint32_t a, double v) { W32(a, f2u((float)v)); }
static inline void WF64(uint32_t a, double v) { W64(a, d2u(v)); }
static inline double S(double v) { return (double)(float)v; }   // round to single

// ---------------- CR ----------------
static inline void setcr(Ctx* c, int fld, uint32_t bits) {
    int sh = 28 - 4 * fld;
    c->cr = (c->cr & ~(0xFu << sh)) | ((bits & 0xF) << sh);
}
static inline void cmps(Ctx* c, int fld, int32_t a, int32_t b) {
    setcr(c, fld, (a < b ? 8 : a > b ? 4 : 2) | c->xer_so);
}
static inline void cmpu(Ctx* c, int fld, uint32_t a, uint32_t b) {
    setcr(c, fld, (a < b ? 8 : a > b ? 4 : 2) | c->xer_so);
}
static inline void cr0(Ctx* c, uint32_t v) { cmps(c, 0, (int32_t)v, 0); }
static inline void fcmp(Ctx* c, int fld, double a, double b) {
    uint32_t bits = (std::isnan(a) || std::isnan(b)) ? 1 : a < b ? 8 : a > b ? 4 : 2;
    setcr(c, fld, bits);
    c->fpscr = (c->fpscr & ~0xF000u) | (bits << 12);
}
static inline int crb(Ctx* c, int bit) { return (c->cr >> (31 - bit)) & 1; }
static inline void setcrb(Ctx* c, int bit, int v) {
    if (v) c->cr |= 1u << (31 - bit); else c->cr &= ~(1u << (31 - bit));
}

// ---------------- integer helpers ----------------
static inline uint32_t rotl(uint32_t v, int n) { n &= 31; return n ? (v << n) | (v >> (32 - n)) : v; }
static inline uint32_t mask(int mb, int me) {
    uint32_t m1 = 0xFFFFFFFFu >> mb, m2 = me == 31 ? 0xFFFFFFFFu : ~(0xFFFFFFFFu >> (me + 1));
    return mb <= me ? (m1 & m2) : (m1 | m2);
}
static inline uint32_t addc(Ctx* c, uint32_t a, uint32_t b, uint32_t ci) {
    uint64_t s = (uint64_t)a + b + ci; c->xer_ca = (uint32_t)(s >> 32); return (uint32_t)s;
}
static inline uint32_t sraw(Ctx* c, uint32_t v, uint32_t n) {
    int32_t s = (int32_t)v;
    if (n & 0x20) { c->xer_ca = s < 0; return s < 0 ? 0xFFFFFFFFu : 0; }
    n &= 31;
    uint32_t r = (uint32_t)(s >> n);
    c->xer_ca = (s < 0) && n && (v & ((1u << n) - 1));
    return r;
}
static inline uint32_t divw(int32_t a, int32_t b) {
    if (b == 0 || (a == INT32_MIN && b == -1)) return a < 0 ? 0xFFFFFFFFu : 0;
    return (uint32_t)(a / b);
}
static inline uint32_t divwu(uint32_t a, uint32_t b) { return b ? a / b : 0; }
static inline uint32_t cntlz(uint32_t v) { return v ? __builtin_clz(v) : 32; }

// ---------------- FP helpers ----------------
uint32_t fctiw(Ctx* c, double v, bool trunc);
double fres(double v);
double frsqrte(double v);
static inline uint32_t fbits_lo(double d) { return (uint32_t)d2u(d); }

// paired-single quantized load/store
void psq_load_slow(Ctx* c, int frd, uint32_t ea, int w, int i);
void psq_store_slow(Ctx* c, int frs, uint32_t ea, int w, int i);
// fast path: GQR set to plain float (type 0, scale 0), the common case for matrix code
static inline void psq_load(Ctx* c, int d, uint32_t ea, int w, int i) {
    if (((c->gqr[i] >> 16) & 0x3F07) == 0) {
        c->f[d] = (double)u2f(R32(ea));
        c->ps1[d] = w ? 1.0 : (double)u2f(R32(ea + 4));
    } else psq_load_slow(c, d, ea, w, i);
}
static inline void psq_store(Ctx* c, int s, uint32_t ea, int w, int i) {
    if ((c->gqr[i] & 0x3F07) == 0) {
        W32(ea, f2u((float)c->f[s]));
        if (!w) W32(ea + 4, f2u((float)c->ps1[s]));
    } else psq_store_slow(c, s, ea, w, i);
}

// ---------------- SPR / misc ----------------
uint32_t mfspr(Ctx* c, int spr);
void mtspr(Ctx* c, int spr, uint32_t v);
uint32_t mftb(Ctx* c, int which);
void dcbz(uint32_t ea);
void sc(Ctx* c, uint32_t pc);
void unimpl(Ctx* c, uint32_t pc, const char* what);

// ---------------- control flow ----------------
typedef void (*GuestFn)(Ctx*);
void dispatch(Ctx* c, uint32_t target);           // indirect call
GuestFn lookup(uint32_t target);
void trace_call(uint32_t addr);
void stub_log(uint32_t addr);
#include <atomic>
extern std::atomic<int> g_irq_pending;
void irq_check(Ctx* c);
#define IRQCHK(c) do { if (g_irq_pending.load(std::memory_order_relaxed)) irq_check(c); } while (0)
void idle_wait();   // block briefly until an interrupt is posted
#define IDLEWAIT(c) do { if (g_irq_pending.load(std::memory_order_relaxed)) irq_check(c); else idle_wait(); } while (0)
