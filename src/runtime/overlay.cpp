// In-game settings menu and frame-rate overlay (windowed builds).
// Open/close: F1 or Esc on the keyboard, Start+Back together on a controller.
// UI state is changed on the emulation thread (input); drawing happens on the
// presentation thread after the game frame is blitted.
#if defined(_WIN32) || defined(USE_SDL)
#ifdef _WIN32
#include "game.h"
#include "glad.h"
#else
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#endif
#include "overlay.h"
#include "config.h"
#include "font_atlas.h"
#include <mutex>
#include <string>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

static std::mutex g_ui_mx;
static bool g_open = false;
static int g_sel = 0;
static bool g_quit_armed = false;

struct Item {
    const char* label;
    std::vector<const char*> opts;
    const char* note;
};
static const std::vector<Item>& items() {
    static std::vector<Item> v = {
        {"Resolution", {"1x  640x528 (Wii)", "2x  1280x1056", "3x  1920x1584", "4x  2560x2112"}, nullptr},
        {"Aspect ratio", {"4:3", "16:9 widescreen"}, "The game's own layout switches after a restart."},
        {"VSync", {"Off", "On"}, nullptr},
        {"Fullscreen", {"Off", "On"}, nullptr},
        {"Controls", {"Wii Remote sideways", "Wii Remote + Nunchuk", "Classic Controller"}, "Choose the same grip in the game's grip menu."},
        {"Swap A/B and X/Y", {"Off", "On"}, "Gamepad: use the face buttons by position (Nintendo style)."},
        {"Frame rate display", {"Off", "On"}, nullptr},
        {"Anti-aliasing", {"Off", "2x MSAA", "4x MSAA", "8x MSAA"}, "Smooths jagged edges of 3D models."},
        {"Texture smoothing", {"Off (original)", "On (trilinear)"}, "Mipmaps: removes shimmer on distant textures."},
        {"Game speed", {"Normal", "2x", "3x", "4x", "5x", "6x", "7x", "8x"}, "Fast-forward. Hold Tab or click the right stick for a burst."},
        {"Anisotropic filter", {"Off", "2x", "4x", "8x", "16x"}, "Sharper floors and walls seen at an angle."},
        {"Close menu", {}, nullptr},
        {"Quit game", {}, nullptr},
    };
    return v;
}
static int get_value(int i) {
    switch (i) {
        case 0: return g_cfg.resolution_scale - 1;
        case 1: return g_cfg.widescreen ? 1 : 0;
        case 2: return g_cfg.vsync ? 1 : 0;
        case 3: return g_cfg.fullscreen ? 1 : 0;
        case 4: return g_cfg.controls == "nunchuk" ? 1 : g_cfg.controls == "classic" ? 2 : 0;
        case 5: return g_cfg.swap_ab_xy ? 1 : 0;
        case 6: return g_cfg.show_perf ? 1 : 0;
        case 7: return g_cfg.msaa >= 8 ? 3 : g_cfg.msaa >= 4 ? 2 : g_cfg.msaa >= 2 ? 1 : 0;
        case 8: return g_cfg.smooth_textures ? 1 : 0;
        case 9: return std::max(1, std::min(8, g_cfg.speed)) - 1;
        case 10: return g_cfg.anisotropy >= 16 ? 4 : g_cfg.anisotropy >= 8 ? 3 : g_cfg.anisotropy >= 4 ? 2 : g_cfg.anisotropy >= 2 ? 1 : 0;
    }
    return 0;
}
static void set_value(int i, int v) {
    switch (i) {
        case 0: g_cfg.resolution_scale = v + 1; break;
        case 1: g_cfg.widescreen = v; break;
        case 2: g_cfg.vsync = v; break;
        case 3: g_cfg.fullscreen = v; break;
        case 4: g_cfg.controls = v == 2 ? "classic" : v ? "nunchuk" : "sideways"; break;
        case 5: g_cfg.swap_ab_xy = v; break;
        case 6: g_cfg.show_perf = v; break;
        case 7: g_cfg.msaa = v ? 1 << v : 1; break;
        case 8: g_cfg.smooth_textures = v; break;
        case 9: g_cfg.speed = v + 1; break;
        case 10: g_cfg.anisotropy = v ? 1 << v : 1; break;
    }
    config_save();
}

bool overlay_open() { return g_open; }
void overlay_toggle() {
    std::lock_guard<std::mutex> g(g_ui_mx);
    g_open = !g_open;
    g_quit_armed = false;
}

// returns an action the platform layer must carry out
int overlay_input(int key) {
    std::lock_guard<std::mutex> g(g_ui_mx);
    if (!g_open) return OV_NONE;
    const auto& it = items();
    int n = (int)it.size();
    if (key == OV_KEY_UP) { g_sel = (g_sel + n - 1) % n; g_quit_armed = false; }
    else if (key == OV_KEY_DOWN) { g_sel = (g_sel + 1) % n; g_quit_armed = false; }
    else if (key == OV_KEY_BACK) { g_open = false; }
    else if (key == OV_KEY_LEFT || key == OV_KEY_RIGHT || key == OV_KEY_OK) {
        const Item& m = it[g_sel];
        if (m.opts.empty()) {
            if (key != OV_KEY_OK) return OV_NONE;
            if (g_sel == n - 2) { g_open = false; return OV_NONE; }
            if (g_sel == n - 1) {
                if (g_quit_armed) return OV_QUIT;
                g_quit_armed = true;
            }
            return OV_NONE;
        }
        int cnt = (int)m.opts.size(), v = get_value(g_sel);
        v = key == OV_KEY_LEFT ? (v + cnt - 1) % cnt : (v + 1) % cnt;
        set_value(g_sel, v);
        if (g_sel == 3) return OV_FULLSCREEN;
        if (g_sel == 2) return OV_VSYNC;
    }
    return OV_NONE;
}

// ---------------------------------------------------------------- drawing (presentation thread)
static GLuint g_prog = 0, g_vao = 0, g_vbo = 0, g_font = 0;
static GLint g_u_screen = -1, g_u_tex = -1;
struct V { float x, y, u, v, r, g, b, a; };
static std::vector<V> g_verts;

static GLuint sh(GLenum t, const char* src) {
    GLuint s = glCreateShader(t);
    glShaderSource(s, 1, &src, nullptr);
    glCompileShader(s);
    return s;
}
static void init_gl() {
    const char* vs = "#version 330 core\nlayout(location=0) in vec2 p; layout(location=1) in vec2 t; layout(location=2) in vec4 c;\n"
                     "uniform vec2 u_screen; out vec2 vt; out vec4 vc;\n"
                     "void main(){ gl_Position = vec4(p.x / u_screen.x * 2.0 - 1.0, 1.0 - p.y / u_screen.y * 2.0, 0.0, 1.0); vt = t; vc = c; }\n";
    const char* fs = "#version 330 core\nin vec2 vt; in vec4 vc; uniform sampler2D u_tex; out vec4 o;\n"
                     "void main(){ float a = vt.x < 0.0 ? 1.0 : texture(u_tex, vt).r; o = vec4(vc.rgb, vc.a * a); }\n";
    g_prog = glCreateProgram();
    glAttachShader(g_prog, sh(GL_VERTEX_SHADER, vs));
    glAttachShader(g_prog, sh(GL_FRAGMENT_SHADER, fs));
    glLinkProgram(g_prog);
    g_u_screen = glGetUniformLocation(g_prog, "u_screen");
    g_u_tex = glGetUniformLocation(g_prog, "u_tex");
    glGenVertexArrays(1, &g_vao);
    glBindVertexArray(g_vao);
    glGenBuffers(1, &g_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, g_vbo);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(V), (void*)0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(V), (void*)8);
    glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, sizeof(V), (void*)16);
    glEnableVertexAttribArray(0); glEnableVertexAttribArray(1); glEnableVertexAttribArray(2);
    glGenTextures(1, &g_font);
    glBindTexture(GL_TEXTURE_2D, g_font);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, FONT_W, FONT_H, 0, GL_RED, GL_UNSIGNED_BYTE, FONT_PIXELS);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
}

static void quad(float x, float y, float w, float h, float u0, float v0, float u1, float v1, const float* c) {
    V a{x, y, u0, v0, c[0], c[1], c[2], c[3]}, b{x + w, y, u1, v0, c[0], c[1], c[2], c[3]};
    V d{x, y + h, u0, v1, c[0], c[1], c[2], c[3]}, e{x + w, y + h, u1, v1, c[0], c[1], c[2], c[3]};
    g_verts.insert(g_verts.end(), {a, b, d, b, e, d});
}
static void rect(float x, float y, float w, float h, const float* c) { quad(x, y, w, h, -1, 0, -1, 0, c); }
static float text(float x, float y, float s, const char* str, const float* c) {
    for (const char* p = str; *p; p++) {
        int ch = (unsigned char)*p;
        if (ch < 32 || ch > 127) ch = '?';
        int i = ch - 32;
        float u0 = (i % 16) * FONT_CW / (float)FONT_W, v0 = (i / 16) * FONT_CH / (float)FONT_H;
        float u1 = u0 + FONT_CW / (float)FONT_W, v1 = v0 + FONT_CH / (float)FONT_H;
        quad(x, y, FONT_CW * s, FONT_CH * s, u0, v0, u1, v1, c);
        x += FONT_CW * s;
    }
    return x;
}

void overlay_draw(int ww, int wh) {
    bool open;
    int sel;
    bool armed;
    {
        std::lock_guard<std::mutex> g(g_ui_mx);
        open = g_open; sel = g_sel; armed = g_quit_armed;
    }
    if (!open && !(g_cfg.show_perf && g_perf_text[0])) return;
    if (!g_prog) init_gl();
    g_verts.clear();
    float s = wh / 900.0f;
    if (s < 0.6f) s = 0.6f;
    static const float white[4] = {1, 1, 1, 1}, grey[4] = {0.7f, 0.7f, 0.75f, 1}, gold[4] = {1.0f, 0.85f, 0.3f, 1},
                       panel[4] = {0.05f, 0.07f, 0.15f, 0.88f}, hl[4] = {0.25f, 0.35f, 0.7f, 0.9f}, shade[4] = {0, 0, 0, 0.45f};
    if (g_cfg.show_perf && g_perf_text[0]) {
        float tw = strlen(g_perf_text) * FONT_CW * s * 0.8f;
        rect(ww - tw - 16 * s, 8 * s, tw + 12 * s, FONT_CH * s * 0.8f + 6 * s, shade);
        text(ww - tw - 10 * s, 11 * s, s * 0.8f, g_perf_text, white);
    }
    if (open) {
        const auto& it = items();
        float lh = FONT_CH * s * 1.35f;
        float pw = 46 * FONT_CW * s, ph = (it.size() + 4.5f) * lh;
        float px = (ww - pw) / 2, py = (wh - ph) / 2;
        rect(0, 0, (float)ww, (float)wh, shade);
        rect(px, py, pw, ph, panel);
        text(px + 20 * s, py + 14 * s, s, "SETTINGS", gold);
        float y = py + 14 * s + lh * 1.4f;
        for (size_t i = 0; i < it.size(); i++) {
            if ((int)i == sel) rect(px + 8 * s, y - 4 * s, pw - 16 * s, lh, hl);
            text(px + 20 * s, y, s, it[i].label, (int)i == sel ? white : grey);
            if (!it[i].opts.empty()) {
                char buf[96];
                snprintf(buf, sizeof buf, "< %s >", it[i].opts[get_value((int)i)]);
                text(px + 20 * s + 20 * FONT_CW * s, y, s, buf, white);
            } else if ((int)i == sel && armed) {
                text(px + 20 * s + 20 * FONT_CW * s, y, s, "press again to quit", gold);
            }
            y += lh;
        }
        const char* note = it[sel].note ? it[sel].note : "Up/Down select, Left/Right change. Saved to the .ini file.";
        text(px + 20 * s, y + lh * 0.4f, s * 0.75f, note, grey);
        text(px + 20 * s, y + lh * 1.3f, s * 0.75f, "F1 / Esc / Start+Back: close", grey);
    }
    glViewport(0, 0, ww, wh);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_SCISSOR_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glUseProgram(g_prog);
    glUniform2f(g_u_screen, (float)ww, (float)wh);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, g_font);
    const GLint unit0 = 0;
    glUniform1iv(g_u_tex, 1, &unit0);
    glBindVertexArray(g_vao);
    glBindBuffer(GL_ARRAY_BUFFER, g_vbo);
    glBufferData(GL_ARRAY_BUFFER, g_verts.size() * sizeof(V), g_verts.data(), GL_STREAM_DRAW);
    glDrawArrays(GL_TRIANGLES, 0, (GLsizei)g_verts.size());
    glDisable(GL_BLEND);
}
#endif
