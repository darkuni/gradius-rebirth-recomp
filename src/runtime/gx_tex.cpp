// GX texture decoding (all tiled formats + palettes) to RGBA8.
#include "gx_tex.h"
#include "ppc.h"
#include <cstring>
#include <algorithm>

uint8_t g_tmem[0x100000];   // TMEM (TLUTs live in the upper half)

static inline uint32_t rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    return (uint32_t)r | ((uint32_t)g << 8) | ((uint32_t)b << 16) | ((uint32_t)a << 24);
}
static inline uint8_t x5(uint32_t v) { return (uint8_t)((v << 3) | (v >> 2)); }
static inline uint8_t x6(uint32_t v) { return (uint8_t)((v << 2) | (v >> 4)); }
static inline uint8_t x4(uint32_t v) { return (uint8_t)((v << 4) | v); }
static inline uint8_t x3(uint32_t v) { return (uint8_t)((v << 5) | (v << 2) | (v >> 1)); }

static inline uint32_t dec565(uint16_t v) { return rgba(x5(v >> 11), x6((v >> 5) & 63), x5(v & 31), 255); }
static inline uint32_t dec5a3(uint16_t v) {
    if (v & 0x8000) return rgba(x5((v >> 10) & 31), x5((v >> 5) & 31), x5(v & 31), 255);
    return rgba(x4((v >> 8) & 15), x4((v >> 4) & 15), x4(v & 15), x3((v >> 12) & 7));
}
static inline uint32_t decIA8(uint16_t v) { uint8_t i = v & 0xFF, a = v >> 8; return rgba(i, i, i, a); }

static uint32_t tlut_color(uint32_t tlut_addr, int fmt, uint32_t idx) {
    uint32_t o = (tlut_addr + idx * 2) & (sizeof(g_tmem) - 2);
    uint16_t v = (uint16_t)((g_tmem[o] << 8) | g_tmem[o + 1]);
    return fmt == 0 ? decIA8(v) : fmt == 1 ? dec565(v) : dec5a3(v);
}

int tex_block_w(int fmt) {
    switch (fmt) { case 0: case 8: case 14: return 8; case 1: case 2: case 9: return 8; default: return 4; }
}
int tex_block_h(int fmt) {
    switch (fmt) { case 0: case 8: case 14: return 8; case 1: case 2: case 9: return 4; default: return 4; }
}
// Size in bytes of a w x h texture (rounded up to whole blocks).
uint32_t tex_size_bytes(int fmt, int w, int h) {
    int bw = tex_block_w(fmt), bh = tex_block_h(fmt);
    uint32_t bx = (w + bw - 1) / bw, by = (h + bh - 1) / bh;
    uint32_t block = fmt == 6 ? 64 : 32;
    return bx * by * block;
}

static void dxt1_block(const uint8_t* s, uint32_t* dst, int stride) {
    uint16_t c0 = (s[0] << 8) | s[1], c1 = (s[2] << 8) | s[3];
    uint32_t p[4];
    p[0] = dec565(c0); p[1] = dec565(c1);
    auto ch = [](uint32_t c, int sh) { return (int)((c >> sh) & 0xFF); };
    if (c0 > c1) {
        uint8_t r2 = (2 * ch(p[0], 0) + ch(p[1], 0)) / 3, g2 = (2 * ch(p[0], 8) + ch(p[1], 8)) / 3, b2 = (2 * ch(p[0], 16) + ch(p[1], 16)) / 3;
        uint8_t r3 = (ch(p[0], 0) + 2 * ch(p[1], 0)) / 3, g3 = (ch(p[0], 8) + 2 * ch(p[1], 8)) / 3, b3 = (ch(p[0], 16) + 2 * ch(p[1], 16)) / 3;
        p[2] = rgba(r2, g2, b2, 255); p[3] = rgba(r3, g3, b3, 255);
    } else {
        p[2] = rgba((ch(p[0], 0) + ch(p[1], 0)) / 2, (ch(p[0], 8) + ch(p[1], 8)) / 2, (ch(p[0], 16) + ch(p[1], 16)) / 2, 255);
        p[3] = rgba((ch(p[0], 0) + ch(p[1], 0)) / 2, (ch(p[0], 8) + ch(p[1], 8)) / 2, (ch(p[0], 16) + ch(p[1], 16)) / 2, 0);
    }
    for (int y = 0; y < 4; y++) {
        uint8_t bits = s[4 + y];
        for (int x = 0; x < 4; x++) dst[y * stride + x] = p[(bits >> (6 - 2 * x)) & 3];
    }
}

// Decode a texture from guest memory into out (w*h RGBA8).
void tex_decode(const uint8_t* src, int fmt, int w, int h, uint32_t tlut_addr, int tlut_fmt, std::vector<uint32_t>& out) {
    int bw = tex_block_w(fmt), bh = tex_block_h(fmt);
    int pw = (w + bw - 1) / bw * bw, ph = (h + bh - 1) / bh * bh;
    std::vector<uint32_t> full((size_t)pw * ph);
    const uint8_t* s = src;
    for (int by = 0; by < ph; by += bh) {
        for (int bx = 0; bx < pw; bx += bw) {
            uint32_t* d = &full[(size_t)by * pw + bx];
            switch (fmt) {
                case 0:   // I4
                    for (int y = 0; y < 8; y++) for (int x = 0; x < 8; x += 2) {
                        uint8_t v = *s++; uint8_t a = x4(v >> 4), b = x4(v & 15);
                        d[y * pw + x] = rgba(a, a, a, a); d[y * pw + x + 1] = rgba(b, b, b, b);
                    }
                    break;
                case 1:   // I8
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 8; x++) { uint8_t v = *s++; d[y * pw + x] = rgba(v, v, v, v); }
                    break;
                case 2:   // IA4
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 8; x++) { uint8_t v = *s++; uint8_t i = x4(v & 15); d[y * pw + x] = rgba(i, i, i, x4(v >> 4)); }
                    break;
                case 3:   // IA8
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 4; x++, s += 2) d[y * pw + x] = decIA8((s[0] << 8) | s[1]);
                    break;
                case 4:   // RGB565
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 4; x++, s += 2) d[y * pw + x] = dec565((s[0] << 8) | s[1]);
                    break;
                case 5:   // RGB5A3
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 4; x++, s += 2) d[y * pw + x] = dec5a3((s[0] << 8) | s[1]);
                    break;
                case 6:   // RGBA8: AR plane then GB plane
                    for (int i = 0; i < 16; i++) {
                        int x = i & 3, y = i >> 2;
                        d[y * pw + x] = rgba(s[2 * i + 1], s[32 + 2 * i], s[32 + 2 * i + 1], s[2 * i]);
                    }
                    s += 64;
                    break;
                case 8:   // C4
                    for (int y = 0; y < 8; y++) for (int x = 0; x < 8; x += 2) {
                        uint8_t v = *s++;
                        d[y * pw + x] = tlut_color(tlut_addr, tlut_fmt, v >> 4);
                        d[y * pw + x + 1] = tlut_color(tlut_addr, tlut_fmt, v & 15);
                    }
                    break;
                case 9:   // C8
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 8; x++) d[y * pw + x] = tlut_color(tlut_addr, tlut_fmt, *s++);
                    break;
                case 10:  // C14X2
                    for (int y = 0; y < 4; y++) for (int x = 0; x < 4; x++, s += 2) d[y * pw + x] = tlut_color(tlut_addr, tlut_fmt, ((s[0] << 8) | s[1]) & 0x3FFF);
                    break;
                case 14:  // CMPR: 2x2 DXT1 sub-blocks
                    for (int sy = 0; sy < 2; sy++) for (int sx = 0; sx < 2; sx++) { dxt1_block(s, d + sy * 4 * pw + sx * 4, pw); s += 8; }
                    break;
                default:
                    for (int y = 0; y < bh; y++) for (int x = 0; x < bw; x++) d[y * pw + x] = rgba(255, 0, 255, 255);
                    s += 32;
            }
        }
    }
    out.resize((size_t)w * h);
    for (int y = 0; y < h; y++) memcpy(&out[(size_t)y * w], &full[(size_t)y * pw], w * 4);
}
