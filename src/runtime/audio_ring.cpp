#include "audio_ring.h"
#include <mutex>
#include <vector>
#include <cstring>

static const int kRate = 32000;
static const int kTarget = kRate * 60 / 1000;    // 60 ms before (re)starting
static const int kMax = kRate * 200 / 1000;      // 200 ms cap
static std::mutex g_mx;
static std::vector<int16_t> g_buf(kMax * 2 * 2); // ring of stereo frames
static size_t g_rd = 0, g_n = 0;                 // read index, frames buffered (in frames)
static bool g_playing = false;
static AudioStats g_st = {};

void audio_ring_push(const int16_t* lr, int frames) {
    std::lock_guard<std::mutex> g(g_mx);
    size_t cap = g_buf.size() / 2;
    g_st.pushed_frames += frames;
    for (int i = 0; i < frames; i++) {
        if (g_n >= (size_t)kMax) { g_st.dropped_frames += frames - i; break; }
        size_t w = (g_rd + g_n) % cap;
        g_buf[2 * w] = lr[2 * i]; g_buf[2 * w + 1] = lr[2 * i + 1];
        g_n++;
    }
    if (!g_playing && g_n >= (size_t)kTarget) g_playing = true;
}

void audio_ring_pull(int16_t* lr, int frames) {
    std::lock_guard<std::mutex> g(g_mx);
    size_t cap = g_buf.size() / 2;
    int i = 0;
    if (g_playing) {
        for (; i < frames && g_n; i++) {
            lr[2 * i] = g_buf[2 * g_rd]; lr[2 * i + 1] = g_buf[2 * g_rd + 1];
            g_rd = (g_rd + 1) % cap; g_n--;
        }
        if (i < frames) { g_playing = false; g_st.underruns++; }   // ran dry: refill before resuming
    }
    if (i < frames) memset(lr + 2 * i, 0, (size_t)(frames - i) * 4);
}

AudioStats audio_ring_stats() {
    std::lock_guard<std::mutex> g(g_mx);
    AudioStats s = g_st;
    s.buffered_ms = (int)(g_n * 1000 / kRate);
    return s;
}
