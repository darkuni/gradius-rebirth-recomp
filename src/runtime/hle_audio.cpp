// Audio: AI DMA timing + AX DSP microcode replacement.
//
// The AX library runs recompiled. Every 3 ms the AI "DMA done" callback fires
// (__AXOutAiCallback); AX then mails a command list to the DSP. Instead of a
// DSP, ax_process() walks the command list, mixes the voice parameter blocks
// (PBs) on the host and signals completion through the task's resume callback.
#include "hle.h"
#include "game.h"
#include "hostclock.h"
#include "ax.h"
#include <thread>
#include <chrono>
#include <atomic>
#include <vector>
#include <mutex>
#include <cstdlib>

static uint32_t g_ai_cb = 0;           // guest AI DMA callback
static uint32_t g_ai_buf = 0, g_ai_len = 0;
static std::atomic<bool> g_ai_running{false};
static std::atomic<int> g_ai_inflight{0};
static std::vector<uint32_t> g_mail;
static FILE* g_wav = nullptr;
static uint32_t g_wav_bytes = 0;
uint64_t g_ax_frames = 0;
uint64_t g_ai_skipped = 0;   // AI periods dropped because the game had not serviced earlier ones
static int g_ai_limit = getenv("AI_LIMIT") ? atoi(getenv("AI_LIMIT")) : 16;   // up to 48 ms of backlog is caught up

void audio_out(const int16_t* lr, int frames);   // host output (platform)

void hle_AIRegisterDMACallback(Ctx* c) { uint32_t old = g_ai_cb; g_ai_cb = c->r[3]; c->r[3] = old; }
void hle_AIInitDMA(Ctx* c) { g_ai_buf = c->r[3]; g_ai_len = c->r[4]; }

static void ai_thread() {
    using clk = std::chrono::steady_clock;
    auto next = clk::now();
    const auto period = std::chrono::microseconds(3000);
    for (;;) {
        next += period;
        precise_sleep_until(next);
        if (clk::now() - next > std::chrono::milliseconds(100)) next = clk::now();   // don't spiral after stalls
        if (g_ai_inflight.load() > g_ai_limit) { g_ai_skipped++; continue; }
        g_ai_inflight++;
        post_irq([](Ctx* c) {
            // the buffer that just "played" - only for games that don't mix through AX: AX frames go
            // to the host straight from the mixer (ax_dsp.cpp), because reading the AI buffer here
            // races the next mix (repeated, skipped or half-written 3 ms blocks = clicks)
            if (g_ax_frames == 0 && g_ai_buf && g_ai_len) {
                std::vector<int16_t> s(g_ai_len / 2);
                for (uint32_t i = 0; i < g_ai_len / 2; i++) s[i] = (int16_t)R16(g_ai_buf + 2 * i);
                audio_out(s.data(), (int)(g_ai_len / 4));
            }
            if (g_ai_cb) guest_call(c, g_ai_cb, {});
            g_ai_inflight--;
        });
    }
}
void hle_AIStartDMA(Ctx* c) {
    (void)c;
    if (!g_ai_running.exchange(true)) std::thread(ai_thread).detach();
}

void hle_DSPCheckMailToDSP(Ctx* c) { c->r[3] = 0; }
void hle_DSPCheckMailFromDSP(Ctx* c) { c->r[3] = 0; }
void hle_DSPAssertTask(Ctx* c) { (void)c; }

void hle_DSPSendMailToDSP(Ctx* c) {
    uint32_t m = c->r[3];
    g_mail.push_back(m);
    if (g_mail.size() >= 2 && (g_mail[g_mail.size() - 2] & 0xFFFF0000u) == 0xBABE0000u) {
        uint32_t list = g_mail.back();
        uint32_t words = g_mail[g_mail.size() - 2] & 0xFFFF;
        g_mail.clear();
        ax_process(phys_to_guest(list), words);
        g_ax_frames++;
        // DSP finished the frame -> AX task resume callback
        post_irq_front([](Ctx* ic) { guest_call(ic, G_AX_RESUME_CB, {}); });   // before any queued AI periods
    }
    if (g_mail.size() > 16) g_mail.clear();
}

// ---------------------------------------------------------------- host output (WAV dump on Linux)
static std::mutex g_out_mx;
void platform_audio_push(const int16_t* lr, int frames);
void audio_out(const int16_t* lr, int frames) {
    platform_audio_push(lr, frames);
    static const char* path = getenv("AUDIO_WAV");
    if (!path) return;
    std::lock_guard<std::mutex> g(g_out_mx);
    if (!g_wav) {
        g_wav = fopen(path, "wb");
        if (!g_wav) return;
        uint8_t hdr[44] = {'R', 'I', 'F', 'F', 0, 0, 0, 0, 'W', 'A', 'V', 'E', 'f', 'm', 't', ' ', 16, 0, 0, 0, 1, 0, 2, 0,
                           0x00, 0x7D, 0, 0, 0x00, 0xF4, 1, 0, 4, 0, 16, 0, 'd', 'a', 't', 'a', 0, 0, 0, 0};
        fwrite(hdr, 1, 44, g_wav);
    }
    fwrite(lr, 4, frames, g_wav);
    g_wav_bytes += frames * 4;
    uint32_t riff = 36 + g_wav_bytes;
    long pos = ftell(g_wav);
    fseek(g_wav, 4, SEEK_SET); fwrite(&riff, 4, 1, g_wav);
    fseek(g_wav, 40, SEEK_SET); fwrite(&g_wav_bytes, 4, 1, g_wav);
    fseek(g_wav, pos, SEEK_SET);
}
