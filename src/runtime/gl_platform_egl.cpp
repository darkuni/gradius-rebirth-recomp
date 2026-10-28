// Headless OpenGL 3.3 core context via EGL (Linux). Used for automated runs
// and screenshots; the Windows build uses SDL2 instead (gl_platform_sdl.cpp).
#if !defined(_WIN32) && !defined(USE_SDL)
#define GL_GLEXT_PROTOTYPES
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GL/gl.h>
#include <cstdio>
#include <cstdint>
#include "gx_render.h"

static EGLDisplay g_dpy;
static EGLContext g_ctx;

bool gl_platform_init(int, int) {
    auto getPlat = (PFNEGLGETPLATFORMDISPLAYEXTPROC)eglGetProcAddress("eglGetPlatformDisplayEXT");
    g_dpy = getPlat ? getPlat(EGL_PLATFORM_SURFACELESS_MESA, EGL_DEFAULT_DISPLAY, nullptr) : eglGetDisplay(EGL_DEFAULT_DISPLAY);
    EGLint ma, mi;
    if (!eglInitialize(g_dpy, &ma, &mi)) { fprintf(stderr, "[gl] eglInitialize failed\n"); return false; }
    eglBindAPI(EGL_OPENGL_API);
    EGLint ca[] = {EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT, EGL_NONE};
    EGLConfig cfg; EGLint n = 0;
    eglChooseConfig(g_dpy, ca, &cfg, 1, &n);
    EGLint cx[] = {EGL_CONTEXT_MAJOR_VERSION, 3, EGL_CONTEXT_MINOR_VERSION, 3,
                   EGL_CONTEXT_OPENGL_PROFILE_MASK, EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT, EGL_NONE};
    g_ctx = eglCreateContext(g_dpy, n ? cfg : nullptr, EGL_NO_CONTEXT, cx);
    if (!g_ctx) { fprintf(stderr, "[gl] eglCreateContext failed\n"); return false; }
    gl_platform_make_current();
    fprintf(stderr, "[gl] %s | %s\n", glGetString(GL_RENDERER), glGetString(GL_VERSION));
    return true;
}
static thread_local bool t_current = false;
void gl_platform_make_current() {
    if (t_current) return;
    if (!eglMakeCurrent(g_dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, g_ctx)) {
        static int n = 0;
        if (n++ < 5) fprintf(stderr, "[gl] eglMakeCurrent failed (%x): context still current on another thread\n", eglGetError());
        return;
    }
    t_current = true;
}
// Called before this host thread hands the emulated CPU to another one (GX work can then run there).
void gl_platform_release() {
    if (!t_current) return;
    eglMakeCurrent(g_dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    t_current = false;
}
// Simulated sound device for headless runs: pulls 32 kHz audio in real time from the
// jitter buffer so dropouts can be counted (see the [audio] line in the perf log).
#include "audio_ring.h"
#include "hostclock.h"
#include <thread>
#include <chrono>
void platform_audio_push(const int16_t* lr, int frames) {
    static bool started = false;
    if (!started) {
        started = true;
        std::thread([] {
            int16_t buf[512 * 2];
            auto next = std::chrono::steady_clock::now();
            for (;;) { next += std::chrono::microseconds(16000); precise_sleep_until(next); audio_ring_pull(buf, 512); }
        }).detach();
    }
    audio_ring_push(lr, frames);
}
void gl_platform_present(unsigned, int, int) {}
bool gl_platform_poll() { return true; }
#endif
