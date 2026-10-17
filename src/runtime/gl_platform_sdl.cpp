// Windowed platform layer (Windows, or Linux with -DUSE_SDL): SDL2 window with an
// OpenGL 3.3 core context, audio output and keyboard/gamepad input.
#if defined(_WIN32) || defined(USE_SDL)
#ifdef _WIN32
#include "game.h"
#include "glad.h"
#else
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#endif
#include <SDL2/SDL.h>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include "gx_render.h"
#include "config.h"
#include "hostinput.h"
#include "overlay.h"
#include "audio_ring.h"
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>

static SDL_Window* g_win = nullptr;
static SDL_GLContext g_glc = nullptr;
static SDL_AudioDeviceID g_audio = 0;
static SDL_GameController* g_pad = nullptr;
static GLuint g_present_fbo = 0;
// Presentation runs on its own thread with a second (shared) GL context, so waiting for
// vsync never blocks the emulated CPU (which must keep servicing 3 ms audio interrupts).
static SDL_GLContext g_present_ctx = nullptr;
struct Slot { GLuint tex = 0; int w = 0, h = 0; GLsync fence = nullptr; };
static Slot g_slots[3];
static int g_ready = -1, g_showing = -1;
static std::mutex g_pm;
static std::condition_variable g_pcv;
static void present_thread();
static thread_local bool t_current = false;

bool gl_platform_init(int w, int h) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) {
        fprintf(stderr, "[sdl] init failed: %s\n", SDL_GetError());
        return false;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    int scale = g_cfg.window_scale;
    int ww = (g_cfg.widescreen ? 854 : 640) * scale, wh = 480 * scale;
    Uint32 flags = SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI;
    if (g_cfg.fullscreen) flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
    g_win = SDL_CreateWindow(GAME_NAME " (native)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                             ww, wh, flags);
    if (!g_win) { fprintf(stderr, "[sdl] window failed: %s\n", SDL_GetError()); return false; }
    g_present_ctx = SDL_GL_CreateContext(g_win);              // presenter
    if (!g_present_ctx) { fprintf(stderr, "[sdl] GL context failed: %s\n", SDL_GetError()); return false; }
    SDL_GL_SetAttribute(SDL_GL_SHARE_WITH_CURRENT_CONTEXT, 1);
    g_glc = SDL_GL_CreateContext(g_win);                      // renderer (shares textures/syncs)
    if (!g_glc) { fprintf(stderr, "[sdl] GL context failed: %s\n", SDL_GetError()); return false; }
    SDL_GL_MakeCurrent(g_win, g_glc);
    t_current = true;
#ifdef _WIN32
    if (!gl_load(SDL_GL_GetProcAddress)) return false;
#endif
    SDL_GL_SetSwapInterval(0);
    std::thread(present_thread).detach();
    fprintf(stderr, "[gl] %s | %s\n", glGetString(GL_RENDERER), glGetString(GL_VERSION));
    // audio: 32 kHz stereo s16, fed from the AX output
    SDL_AudioSpec want = {}, have = {};
    want.freq = 32000; want.format = AUDIO_S16SYS; want.channels = 2; want.samples = 512;
    want.callback = [](void*, Uint8* stream, int len) { audio_ring_pull((int16_t*)stream, len / 4); };
    g_audio = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
    if (g_audio) SDL_PauseAudioDevice(g_audio, 0);
    for (int i = 0; i < SDL_NumJoysticks(); i++)
        if (SDL_IsGameController(i)) { g_pad = SDL_GameControllerOpen(i); break; }
    if (g_pad) fprintf(stderr, "[input] controller: %s\n", SDL_GameControllerName(g_pad));
    else fprintf(stderr, "[input] no controller found (keyboard active; controllers can be plugged in any time)\n");
    (void)w; (void)h;
    return true;
}

void gl_platform_make_current() {
    if (t_current) return;
    SDL_GL_MakeCurrent(g_win, g_glc);
    t_current = true;
}

void platform_audio_push(const int16_t* lr, int frames) {
    if (g_audio) audio_ring_push(lr, frames);
}

static void update_input() {
    const Uint8* k = SDL_GetKeyboardState(nullptr);
    uint32_t b = 0;
    float lx = 0, ly = 0;
    if (k[SDL_SCANCODE_UP] || k[SDL_SCANCODE_DOWN] || k[SDL_SCANCODE_LEFT] || k[SDL_SCANCODE_RIGHT]) b |= IN_KB_ARROWS;
    if (k[SDL_SCANCODE_UP]) b |= IN_UP;
    if (k[SDL_SCANCODE_DOWN]) b |= IN_DOWN;
    if (k[SDL_SCANCODE_LEFT]) b |= IN_LEFT;
    if (k[SDL_SCANCODE_RIGHT]) b |= IN_RIGHT;
    if (k[SDL_SCANCODE_I]) b |= IN_ALT_UP;
    if (k[SDL_SCANCODE_K]) b |= IN_ALT_DOWN;
    if (k[SDL_SCANCODE_J]) b |= IN_ALT_LEFT;
    if (k[SDL_SCANCODE_L]) b |= IN_ALT_RIGHT;
    if (k[SDL_SCANCODE_X]) b |= IN_SOUTH;
    if (k[SDL_SCANCODE_Z]) b |= IN_EAST;
    if (k[SDL_SCANCODE_A]) b |= IN_WEST;
    if (k[SDL_SCANCODE_S]) b |= IN_NORTH;
    if (k[SDL_SCANCODE_LSHIFT] || k[SDL_SCANCODE_RSHIFT]) b |= IN_L2;
    if (k[SDL_SCANCODE_C]) b |= IN_R1;
    if (k[SDL_SCANCODE_RETURN]) b |= IN_START;
    if (k[SDL_SCANCODE_BACKSPACE]) b |= IN_BACK;
    if (k[SDL_SCANCODE_H]) b |= IN_GUIDE;
    if (k[SDL_SCANCODE_Q]) b |= IN_L1;
    if (k[SDL_SCANCODE_W]) b |= IN_R1;
    if (k[SDL_SCANCODE_1]) b |= IN_L2;
    if (k[SDL_SCANCODE_2]) b |= IN_R2;
    if (k[SDL_SCANCODE_TAB]) b |= IN_TURBO;
    float rx = 0, ry = 0, lt = 0, rt = 0;
    if (k[SDL_SCANCODE_J]) rx = -1; if (k[SDL_SCANCODE_L]) rx = 1;
    if (k[SDL_SCANCODE_I]) ry = 1; if (k[SDL_SCANCODE_K]) ry = -1;
    if (g_pad) {
        auto btn = [&](SDL_GameControllerButton x) { return SDL_GameControllerGetButton(g_pad, x) != 0; };
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_UP)) b |= IN_UP;
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_DOWN)) b |= IN_DOWN;
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_LEFT)) b |= IN_LEFT;
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) b |= IN_RIGHT;
        const bool sw = g_cfg.swap_ab_xy;
        if (btn(SDL_CONTROLLER_BUTTON_A)) b |= sw ? IN_EAST : IN_SOUTH;
        if (btn(SDL_CONTROLLER_BUTTON_B)) b |= sw ? IN_SOUTH : IN_EAST;
        if (btn(SDL_CONTROLLER_BUTTON_X)) b |= sw ? IN_NORTH : IN_WEST;
        if (btn(SDL_CONTROLLER_BUTTON_Y)) b |= sw ? IN_WEST : IN_NORTH;
        if (btn(SDL_CONTROLLER_BUTTON_LEFTSHOULDER)) b |= IN_L1;
        if (btn(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)) b |= IN_R1;
        if (SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 16000) b |= IN_L2;
        if (SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 16000) b |= IN_R2;
        if (btn(SDL_CONTROLLER_BUTTON_START)) b |= IN_START;
        if (btn(SDL_CONTROLLER_BUTTON_BACK)) b |= IN_BACK;
        if (btn(SDL_CONTROLLER_BUTTON_GUIDE)) b |= IN_GUIDE;
        if (btn(SDL_CONTROLLER_BUTTON_RIGHTSTICK)) b |= IN_TURBO;
        auto axis = [&](SDL_GameControllerAxis a) {
            float v = SDL_GameControllerGetAxis(g_pad, a) / 32767.f;
            const float dz = 0.2f;   // dead zone
            if (std::fabs(v) < dz) return 0.f;
            return (v > 0 ? v - dz : v + dz) / (1 - dz);
        };
        lx = axis(SDL_CONTROLLER_AXIS_LEFTX);
        ly = -axis(SDL_CONTROLLER_AXIS_LEFTY);
        float px = axis(SDL_CONTROLLER_AXIS_RIGHTX), py = -axis(SDL_CONTROLLER_AXIS_RIGHTY);
        if (px || py) { rx = px; ry = py; }
        lt = std::max(lt, SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) / 32767.f);
        rt = std::max(rt, SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) / 32767.f);
    }
    if (b & IN_L2) lt = 1;
    if (b & IN_R2) rt = 1;
    if (overlay_open()) { b = 0; lx = ly = rx = ry = lt = rt = 0; }   // the menu owns the controls while open
    g_host_input.rx = std::max(-1.f, std::min(1.f, rx));
    g_host_input.ry = std::max(-1.f, std::min(1.f, ry));
    g_host_input.lt = std::max(0.f, std::min(1.f, lt));
    g_host_input.rt = std::max(0.f, std::min(1.f, rt));
    g_host_input.buttons = b;
    g_host_input.lx = std::max(-1.f, std::min(1.f, lx));
    g_host_input.ly = std::max(-1.f, std::min(1.f, ly));
}

static std::atomic<bool> g_vsync_dirty{false};

static void apply_action(int a) {
    if (a == OV_FULLSCREEN) SDL_SetWindowFullscreen(g_win, g_cfg.fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
    else if (a == OV_VSYNC) g_vsync_dirty = true;
    else if (a == OV_QUIT) exit(0);
}

bool gl_platform_poll() {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) exit(0);
        if (e.type == SDL_KEYDOWN) {
            SDL_Keycode k = e.key.keysym.sym;
            if (k == SDLK_F1 || k == SDLK_ESCAPE) {
                if (overlay_open() && k == SDLK_ESCAPE) overlay_input(OV_KEY_BACK);
                else overlay_toggle();
            } else if (k == SDLK_F11 || (k == SDLK_RETURN && (e.key.keysym.mod & KMOD_ALT))) {
                g_cfg.fullscreen = !g_cfg.fullscreen;
                config_save();
                apply_action(OV_FULLSCREEN);
            } else if (overlay_open()) {
                int key = -1;
                if (k == SDLK_UP) key = OV_KEY_UP;
                else if (k == SDLK_DOWN) key = OV_KEY_DOWN;
                else if (k == SDLK_LEFT) key = OV_KEY_LEFT;
                else if (k == SDLK_RIGHT) key = OV_KEY_RIGHT;
                else if (k == SDLK_RETURN || k == SDLK_SPACE || k == SDLK_x) key = OV_KEY_OK;
                else if (k == SDLK_BACKSPACE || k == SDLK_z) key = OV_KEY_BACK;
                if (key >= 0) apply_action(overlay_input(key));
            }
        }
        if (e.type == SDL_CONTROLLERBUTTONDOWN && g_pad) {
            int btn = e.cbutton.button;
            bool start = SDL_GameControllerGetButton(g_pad, SDL_CONTROLLER_BUTTON_START);
            bool back = SDL_GameControllerGetButton(g_pad, SDL_CONTROLLER_BUTTON_BACK);
            if ((btn == SDL_CONTROLLER_BUTTON_START && back) || (btn == SDL_CONTROLLER_BUTTON_BACK && start)) overlay_toggle();
            else if (overlay_open()) {
                int key = -1;
                if (btn == SDL_CONTROLLER_BUTTON_DPAD_UP) key = OV_KEY_UP;
                else if (btn == SDL_CONTROLLER_BUTTON_DPAD_DOWN) key = OV_KEY_DOWN;
                else if (btn == SDL_CONTROLLER_BUTTON_DPAD_LEFT) key = OV_KEY_LEFT;
                else if (btn == SDL_CONTROLLER_BUTTON_DPAD_RIGHT) key = OV_KEY_RIGHT;
                else if (btn == SDL_CONTROLLER_BUTTON_A) key = g_cfg.swap_ab_xy ? OV_KEY_BACK : OV_KEY_OK;
                else if (btn == SDL_CONTROLLER_BUTTON_B) key = g_cfg.swap_ab_xy ? OV_KEY_OK : OV_KEY_BACK;
                if (key >= 0) apply_action(overlay_input(key));
            }
        }
        if (e.type == SDL_CONTROLLERDEVICEADDED && !g_pad) {
            g_pad = SDL_GameControllerOpen(e.cdevice.which);
            if (g_pad) fprintf(stderr, "[input] controller: %s\n", SDL_GameControllerName(g_pad));
        }
        if (e.type == SDL_CONTROLLERDEVICEREMOVED && g_pad &&
            e.cdevice.which == SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(g_pad))) {
            SDL_GameControllerClose(g_pad); g_pad = nullptr;
        }
    }
    update_input();
    return true;
}

// Called on the emulation thread with the finished frame (top-down texture rows).
void gl_platform_present(unsigned tex, int w, int h) {
    if (!g_present_fbo) glGenFramebuffers(1, &g_present_fbo);
    static GLuint dst_fbo = 0;
    if (!dst_fbo) glGenFramebuffers(1, &dst_fbo);
    int s;
    {
        std::lock_guard<std::mutex> g(g_pm);
        for (s = 0; s < 3; s++) if (s != g_ready && s != g_showing) break;
    }
    Slot& sl = g_slots[s];
    if (!sl.tex || sl.w != w || sl.h != h) {
        if (!sl.tex) glGenTextures(1, &sl.tex);
        glBindTexture(GL_TEXTURE_2D, sl.tex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        sl.w = w; sl.h = h;
    }
    glBindFramebuffer(GL_READ_FRAMEBUFFER, g_present_fbo);
    glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, tex, 0);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, dst_fbo);
    glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, sl.tex, 0);
    glDisable(GL_SCISSOR_TEST);
    glBlitFramebuffer(0, 0, w, h, 0, 0, w, h, GL_COLOR_BUFFER_BIT, GL_NEAREST);
    GLsync f = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
    glFlush();
    {
        std::lock_guard<std::mutex> g(g_pm);
        if (g_ready >= 0 && g_slots[g_ready].fence) { glDeleteSync(g_slots[g_ready].fence); g_slots[g_ready].fence = nullptr; }
        sl.fence = f;
        g_ready = s;
    }
    g_pcv.notify_one();
    gl_platform_poll();
}

// Final scaling of the frame to the window. Downscaling (internal resolution above the
// window size) averages a grid of bilinear taps across each window pixel's footprint
// so the extra resolution becomes anti-aliasing instead of shimmer; upscaling is bilinear.
static GLuint g_scale_prog = 0, g_scale_vao = 0;
static GLint g_u_src = -1, g_u_scale = -1, g_u_rect = -1;
static void init_scaler() {
    const char* vs = "#version 330 core\nuniform vec4 u_rect; out vec2 uv;\n"
        "void main(){ vec2 p = vec2(gl_VertexID & 1, gl_VertexID >> 1); uv = vec2(p.x, p.y);\n"
        " vec2 q = u_rect.xy + p * u_rect.zw; gl_Position = vec4(q.x * 2.0 - 1.0, 1.0 - q.y * 2.0, 0.0, 1.0); }\n";
    const char* fs = "#version 330 core\nin vec2 uv; uniform sampler2D u_src; uniform vec2 u_scale; out vec4 o;\n"
        "void main(){\n"
        " vec2 ts = vec2(textureSize(u_src, 0));\n"
        " vec2 n = clamp(ceil(u_scale), vec2(1.0), vec2(4.0));\n"   // taps per axis
        " vec2 fp = u_scale / ts;\n"                                  // footprint in uv
        " vec4 acc = vec4(0.0);\n"
        " for (int j = 0; j < 4; j++) for (int i = 0; i < 4; i++) {\n"
        "  if (float(i) >= n.x || float(j) >= n.y) continue;\n"
        "  vec2 off = (vec2(i, j) + 0.5) / n - 0.5;\n"
        "  acc += texture(u_src, uv + off * fp);\n"
        " }\n"
        " o = vec4(acc.rgb / (n.x * n.y), 1.0); }\n";
    auto sh = [](GLenum t, const char* src) { GLuint s = glCreateShader(t); glShaderSource(s, 1, &src, nullptr); glCompileShader(s); return s; };
    g_scale_prog = glCreateProgram();
    glAttachShader(g_scale_prog, sh(GL_VERTEX_SHADER, vs));
    glAttachShader(g_scale_prog, sh(GL_FRAGMENT_SHADER, fs));
    glLinkProgram(g_scale_prog);
    g_u_src = glGetUniformLocation(g_scale_prog, "u_src");
    g_u_scale = glGetUniformLocation(g_scale_prog, "u_scale");
    g_u_rect = glGetUniformLocation(g_scale_prog, "u_rect");
    glGenVertexArrays(1, &g_scale_vao);
}

static void present_thread() {
    SDL_GL_MakeCurrent(g_win, g_present_ctx);
    if (g_cfg.vsync) { if (SDL_GL_SetSwapInterval(-1) != 0) SDL_GL_SetSwapInterval(1); }
    else SDL_GL_SetSwapInterval(0);
    GLuint fbo = 0;
    glGenFramebuffers(1, &fbo);
    for (;;) {
        int s;
        GLsync f;
        {
            std::unique_lock<std::mutex> lk(g_pm);
            g_pcv.wait(lk, [] { return g_ready >= 0; });
            s = g_ready; g_ready = -1; g_showing = s;
            f = g_slots[s].fence; g_slots[s].fence = nullptr;
        }
        if (f) { glWaitSync(f, 0, GL_TIMEOUT_IGNORED); glDeleteSync(f); }
        Slot& sl = g_slots[s];
        int ww, wh;
        SDL_GL_GetDrawableSize(g_win, &ww, &wh);
        const int an = g_cfg.widescreen ? 16 : 4, ad = g_cfg.widescreen ? 9 : 3;
        int dw = ww, dh = ww * ad / an;
        if (dh > wh) { dh = wh; dw = wh * an / ad; }
        int dx = (ww - dw) / 2, dy = (wh - dh) / 2;
        glBindFramebuffer(GL_READ_FRAMEBUFFER, fbo);
        glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, sl.tex, 0);
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
        glViewport(0, 0, ww, wh);
        glDisable(GL_SCISSOR_TEST);
        glClearColor(0, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT);
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        if (!g_scale_prog) init_scaler();
        glDisable(GL_BLEND); glDisable(GL_DEPTH_TEST); glDisable(GL_CULL_FACE);
        glUseProgram(g_scale_prog);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, sl.tex);
        glUniform1i(g_u_src, 0);
        glUniform2f(g_u_scale, (float)sl.w / dw, (float)sl.h / dh);
        glUniform4f(g_u_rect, (float)dx / ww, (float)dy / wh, (float)dw / ww, (float)dh / wh);
        glBindVertexArray(g_scale_vao);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        overlay_draw(ww, wh);
        if (g_vsync_dirty.exchange(false)) {
            if (g_cfg.vsync) { if (SDL_GL_SetSwapInterval(-1) != 0) SDL_GL_SetSwapInterval(1); }
            else SDL_GL_SetSwapInterval(0);
        }
        SDL_GL_SwapWindow(g_win);
        { std::lock_guard<std::mutex> g(g_pm); g_showing = -1; }
    }
}
#endif
