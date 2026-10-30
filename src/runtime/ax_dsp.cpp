// AX DSP microcode replacement (Wii AX command list + voice mixer).
//
// PB layout (u16 indices, 0x140 bytes) as observed in this game's AX library:
//   0-1 next PB, 2-3 this PB, 4 src type, 5 coef select, 6-7 mixer control, 8 running, 9 is_stream,
//   10-33 mixer (L,Lramp,R,Rramp, auxA L/R, auxB L/R, auxC L/R, S,Sramp, aux S...),
//   34-40 initial time delay, 41-52 dpop, 53-54 volume envelope (cur, delta),
//   55-62 audio addr (loop flag, format, loop, end, cur), 63-82 ADPCM (coefs[16], gain, ps, yn1, yn2),
//   83-89 SRC (ratio hi/lo, frac, last[4]), 90-92 ADPCM loop (ps, yn1, yn2), 93-96 LPF (on, yn1, a0, b0)
#include "hle.h"
#include "ax.h"
#include <algorithm>

static const int N = 96;                       // samples per 3 ms frame at 32 kHz
static int32_t g_l[N], g_r[N], g_s[N];

enum { P_NEXT = 0, P_SRCTYPE = 4, P_MIXCTRL = 6, P_RUNNING = 8, P_STREAM = 9, P_MIX = 10,
       P_VOL = 53, P_ADDR = 55, P_ADPCM = 63, P_SRC = 83, P_LOOPINFO = 90, P_LPF = 93, P_WORDS = 160 };

struct Voice {
    uint16_t w[P_WORDS];
    uint32_t u32(int i) const { return ((uint32_t)w[i] << 16) | w[i + 1]; }
    void set32(int i, uint32_t v) { w[i] = v >> 16; w[i + 1] = v & 0xFFFF; }
};

static inline int16_t clamp16(int32_t v) { return (int16_t)std::min(32767, std::max(-32768, v)); }

// Fetch the next input sample, advancing the voice's address.
static int16_t fetch(Voice& v, bool& stopped) {
    if (stopped) return 0;
    int fmt = v.w[P_ADDR + 1];
    uint32_t loop = v.u32(P_ADDR + 2), end = v.u32(P_ADDR + 4), cur = v.u32(P_ADDR + 6);
    int16_t s = 0;
    if (fmt == 0x00) {   // ADPCM: nibble addresses, 8-byte frames with a header byte
        if ((cur & 15) == 0) {
            v.w[P_ADPCM + 17] = R8(0x80000000u | (cur >> 1));   // pred/scale
            cur += 2;
        }
        uint8_t byte = R8(0x80000000u | (cur >> 1));
        int nib = (cur & 1) ? (byte & 15) : (byte >> 4);
        if (nib >= 8) nib -= 16;
        int ps = v.w[P_ADPCM + 17];
        int16_t c1 = (int16_t)v.w[P_ADPCM + (ps >> 4) * 2], c2 = (int16_t)v.w[P_ADPCM + (ps >> 4) * 2 + 1];
        int16_t yn1 = (int16_t)v.w[P_ADPCM + 18], yn2 = (int16_t)v.w[P_ADPCM + 19];
        int32_t val = ((nib * (1 << (ps & 15))) << 11) + c1 * yn1 + c2 * yn2;
        s = clamp16((val + 1024) >> 11);
        v.w[P_ADPCM + 19] = (uint16_t)yn1;
        v.w[P_ADPCM + 18] = (uint16_t)s;
    } else if (fmt == 0x0A) {   // PCM16: sample addresses
        s = (int16_t)R16(0x80000000u | (cur << 1));
        s = clamp16((s * (int32_t)v.w[P_ADPCM + 16]) >> 11);
    } else if (fmt == 0x19) {   // PCM8: byte addresses
        s = (int16_t)((int8_t)R8(0x80000000u | cur) << 8);
        s = clamp16((s * (int32_t)v.w[P_ADPCM + 16]) >> 11);
    }
    if (cur == end) {
        if (v.w[P_ADDR]) {
            cur = loop;
            if (fmt == 0x00 && !v.w[P_STREAM]) {
                v.w[P_ADPCM + 17] = v.w[P_LOOPINFO];
                v.w[P_ADPCM + 18] = v.w[P_LOOPINFO + 1];
                v.w[P_ADPCM + 19] = v.w[P_LOOPINFO + 2];
            }
        } else {
            stopped = true;
            v.w[P_RUNNING] = 0;
        }
    } else {
        cur++;
    }
    v.set32(P_ADDR + 6, cur);
    return s;
}

static void process_voice(Voice& v) {
    int16_t in[N];
    bool stopped = false;
    // sample rate conversion (linear interpolation; ratio is 16.16)
    uint32_t ratio = v.u32(P_SRC);
    if (v.w[P_SRCTYPE] == 2 || ratio == 0) ratio = 0x10000;
    uint32_t frac = v.w[P_SRC + 2];
    int16_t* last = (int16_t*)&v.w[P_SRC + 3];   // last[3] newest
    for (int i = 0; i < N; i++) {
        int32_t a = last[2], b = last[3];
        in[i] = (int16_t)(a + (((b - a) * (int32_t)frac) >> 16));
        frac += ratio;
        while (frac >= 0x10000) {
            frac -= 0x10000;
            last[0] = last[1]; last[1] = last[2]; last[2] = last[3];
            last[3] = fetch(v, stopped);
        }
    }
    v.w[P_SRC + 2] = (uint16_t)frac;
    // volume envelope
    int32_t vol = v.w[P_VOL];
    int16_t dvol = (int16_t)v.w[P_VOL + 1];
    int32_t smp[N];
    for (int i = 0; i < N; i++) { smp[i] = (in[i] * vol) >> 15; vol += dvol; vol = std::max(0, std::min(0x7FFF, vol)); }
    v.w[P_VOL] = (uint16_t)vol;
    // low-pass filter
    if (v.w[P_LPF]) {
        int32_t y = (int16_t)v.w[P_LPF + 1], a0 = v.w[P_LPF + 2], b0 = v.w[P_LPF + 3];
        for (int i = 0; i < N; i++) { y = (a0 * smp[i] + b0 * y) >> 15; smp[i] = y; }
        v.w[P_LPF + 1] = (uint16_t)(int16_t)y;
    }
    // mix into main L/R/S
    uint32_t ctrl = v.u32(P_MIXCTRL);
    bool ramp = ctrl & 4;
    auto mix = [&](int32_t* dst, int vi) {
        int32_t vv = v.w[P_MIX + vi];
        int16_t dv = ramp ? (int16_t)v.w[P_MIX + vi + 1] : 0;
        for (int i = 0; i < N; i++) { dst[i] += (smp[i] * vv) >> 15; vv += dv; vv = std::max(0, std::min(0xFFFF, vv)); }
        v.w[P_MIX + vi] = (uint16_t)vv;
    };
    if (ctrl & 1) mix(g_l, 0);
    if (ctrl & 2) mix(g_r, 2);
    if (ctrl & 8) mix(g_s, 16);
}

static void process_pbs(uint32_t pb) {
    for (int n = 0; pb && n < 256; n++) {
        uint32_t a = pb | 0x80000000u;
        Voice v;
        for (int i = 0; i < P_WORDS; i++) v.w[i] = R16(a + 2 * i);
        if (v.w[P_RUNNING]) {
            process_voice(v);
            // write back the state the DSP owns
            for (int i = P_MIX; i < P_MIX + 24; i++) W16(a + 2 * i, v.w[i]);
            W16(a + 2 * P_RUNNING, v.w[P_RUNNING]);
            for (int i = P_VOL; i < P_VOL + 2; i++) W16(a + 2 * i, v.w[i]);
            for (int i = P_ADDR + 6; i < P_ADDR + 8; i++) W16(a + 2 * i, v.w[i]);
            for (int i = P_ADPCM + 17; i < P_ADPCM + 20; i++) W16(a + 2 * i, v.w[i]);
            for (int i = P_SRC + 2; i < P_SRC + 7; i++) W16(a + 2 * i, v.w[i]);
            W16(a + 2 * (P_LPF + 1), v.w[P_LPF + 1]);
        }
        pb = v.u32(P_NEXT);
    }
}

static void output(uint16_t volume, uint32_t lr) {
    lr |= 0x80000000u;
    for (int i = 0; i < N; i++) {
        int32_t s = g_s[i] / 2;
        int32_t l = ((int64_t)(g_l[i] + s) * volume) >> 15, r = ((int64_t)(g_r[i] + s) * volume) >> 15;
        W16(lr + 4 * i, (uint16_t)clamp16(l));
        W16(lr + 4 * i + 2, (uint16_t)clamp16(r));
    }
    // hand the mixed frame to the host in mixing order (see hle_audio.cpp)
    int16_t out[N * 2];
    for (int i = 0; i < N; i++) { out[2 * i] = (int16_t)R16(lr + 4 * i); out[2 * i + 1] = (int16_t)R16(lr + 4 * i + 2); }
    void audio_out(const int16_t* lr, int frames);
    audio_out(out, N);
}

void ax_process(uint32_t list, uint32_t words) {
    (void)words;
    std::fill(g_l, g_l + N, 0); std::fill(g_r, g_r + N, 0); std::fill(g_s, g_s + N, 0);
    uint32_t i = 0;
    auto arg32 = [&](int k) { return ((uint32_t)R16(list + 2 * (i + k)) << 16) | R16(list + 2 * (i + k + 1)); };
    for (int guard = 0; guard < 64; guard++) {
        uint16_t cmd = R16(list + 2 * i);
        static const int len[16] = {2, 2, 2, 2, 2, 5, 5, 5, 4, 4, 4, 5, 5, 8, 0, 0};
        if (cmd >= 0x0E) break;
        switch (cmd) {
            case 0x04: process_pbs(arg32(1)); break;
            case 0x0B: output(R16(list + 2 * (i + 1)), arg32(4)); break;
            default: break;
        }
        i += 1 + len[cmd];
    }
}
