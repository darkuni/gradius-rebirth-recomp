#pragma once
#include <cstdint>
// Jitter buffer between the emulated audio interface (pushes 3 ms blocks whenever the
// game services its audio interrupt) and the host sound device (pulls at its own pace).
// Playback starts once `target` ms are buffered; if the buffer runs dry it outputs
// silence and refills to the target before resuming, so a late burst becomes one short
// gap instead of continuous crackle. Overflow beyond `max` ms drops the newest input.
void audio_ring_push(const int16_t* lr, int frames);
void audio_ring_pull(int16_t* lr, int frames);   // called by the device
struct AudioStats { uint64_t underruns, dropped_frames, pushed_frames; int buffered_ms; };
AudioStats audio_ring_stats();
