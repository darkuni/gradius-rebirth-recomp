// Precise host sleeping. Windows' default timer granularity (15.6 ms) is far too
// coarse for the 3 ms audio and 16.7 ms video interrupts, so use high-resolution
// waitable timers there (with a short spin for the last fraction of a millisecond).
#pragma once
#include <chrono>
#include <thread>
#ifdef _WIN32
#include <windows.h>
#endif

inline void precise_sleep_until(std::chrono::steady_clock::time_point t) {
    using namespace std::chrono;
#ifdef _WIN32
    static thread_local HANDLE timer = [] {
        HANDLE h = CreateWaitableTimerExW(nullptr, nullptr, 0x00000002 /*HIGH_RESOLUTION*/, TIMER_ALL_ACCESS);
        if (!h) h = CreateWaitableTimerExW(nullptr, nullptr, 0, TIMER_ALL_ACCESS);
        return h;
    }();
    auto now = steady_clock::now();
    auto coarse = t - microseconds(300);
    if (coarse > now && timer) {
        LARGE_INTEGER due;
        due.QuadPart = -(LONGLONG)(duration_cast<nanoseconds>(coarse - now).count() / 100);
        if (SetWaitableTimer(timer, &due, 0, nullptr, nullptr, FALSE)) WaitForSingleObject(timer, INFINITE);
    }
    while (steady_clock::now() < t) std::this_thread::yield();
#else
    std::this_thread::sleep_until(t);
#endif
}
