#include "game.h"
#include "config.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>

Config g_cfg;
static std::string g_ini_path = GAME_INI;

static void set(const std::string& k, const std::string& v) {
    auto b = [&] { return v == "1" || v == "true" || v == "yes" || v == "on"; };
    if (k == "resolution_scale") g_cfg.resolution_scale = std::max(1, std::min(8, atoi(v.c_str())));
    else if (k == "vsync") g_cfg.vsync = b();
    else if (k == "widescreen") g_cfg.widescreen = b();
    else if (k == "fullscreen") g_cfg.fullscreen = b();
    else if (k == "window_scale") g_cfg.window_scale = std::max(1, atoi(v.c_str()));
    else if (k == "controls") g_cfg.controls = v;
    else if (k == "show_perf") g_cfg.show_perf = b();
    else if (k == "anisotropy") { int a = atoi(v.c_str()); g_cfg.anisotropy = a >= 16 ? 16 : a >= 8 ? 8 : a >= 4 ? 4 : a >= 2 ? 2 : 1; }
    else if (k == "swap_ab_xy") g_cfg.swap_ab_xy = b();
    else if (k == "speed") { int a = atoi(v.c_str()); g_cfg.speed = a < 1 ? 1 : a > 8 ? 8 : a; }
    else if (k == "smooth_textures") g_cfg.smooth_textures = b();
    else if (k == "msaa") { int a = atoi(v.c_str()); g_cfg.msaa = a >= 8 ? 8 : a >= 4 ? 4 : a >= 2 ? 2 : 1; }
}

static std::string trim(std::string s) {
    while (!s.empty() && strchr(" \t\r\n", s.back())) s.pop_back();
    while (!s.empty() && strchr(" \t", s[0])) s.erase(0, 1);
    return s;
}

void config_load(const char* exe_path) {
    std::string dir = exe_path ? exe_path : "";
    size_t slash = dir.find_last_of("/\\");
    dir = slash == std::string::npos ? "" : dir.substr(0, slash + 1);
    std::string paths[2] = {GAME_INI, dir + GAME_INI};
    FILE* f = nullptr;
    for (auto& p : paths) if ((f = fopen(p.c_str(), "r"))) { g_ini_path = p; break; }
    bool write_defaults = !f;
    if (!f) g_ini_path = dir + GAME_INI;
    if (f) {
        char line[512];
        while (fgets(line, sizeof line, f)) {
            std::string l = trim(line);
            if (l.empty() || l[0] == ';' || l[0] == '#' || l[0] == '[') continue;
            size_t eq = l.find('=');
            if (eq == std::string::npos) continue;
            set(trim(l.substr(0, eq)), trim(l.substr(eq + 1)));
        }
        fclose(f);
    }
    const char* keys[] = {"resolution_scale", "vsync", "widescreen", "fullscreen", "window_scale", "controls", "show_perf",
                          "anisotropy", "smooth_textures", "msaa", "speed", "swap_ab_xy"};
    for (const char* k : keys) {
        std::string env = k;
        std::transform(env.begin(), env.end(), env.begin(), ::toupper);
        if (const char* v = getenv(env.c_str())) set(k, v);
    }
    fprintf(stderr, "[config] resolution x%d, %s, vsync %d, controls %s\n", g_cfg.resolution_scale,
            g_cfg.widescreen ? "16:9" : "4:3", g_cfg.vsync, g_cfg.controls.c_str());
    if (write_defaults) config_save();
}

void config_save() {
    FILE* w = fopen(g_ini_path.c_str(), "w");
    if (!w) return;
    fprintf(w,
        "; " GAME_NAME " native port settings (also editable in-game: F1 or Esc, or Start+Back on a controller)\n\n"
        "; Internal rendering resolution: 1 = original 640x528, 2 = 1280x1056, 3 = 1920x1584, 4 = 2560x2112\n"
        "resolution_scale = %d\n"
        "; Present 16:9 (the game is told the TV is widescreen). 0 = original 4:3\n"
        "widescreen = %d\n"
        "; Wait for the monitor refresh when presenting (smoother cut-scenes)\n"
        "vsync = %d\n"
        "fullscreen = %d\n"
        "window_scale = %d\n"
        "; Controls: sideways (Wii Remote held sideways), nunchuk (Wii Remote + Nunchuk) or classic (Classic Controller).\n"
        "; Pick the same grip in the game's menu.\n"
        "controls = %s\n"
        "; Gamepad: swap A<->B and X<->Y (use the buttons by position, Nintendo style)\n"
        "swap_ab_xy = %d\n"
        "; Show frame rate in the corner of the screen and the console\n"
        "show_perf = %d\n"
        "; Anisotropic texture filtering (sharper floors and walls at an angle): 1 = off, 2, 4, 8, 16\n"
        "anisotropy = %d\n"
        "; Smooth textures: trilinear mipmapping, generated for textures the game ships without mipmaps\n"
        "smooth_textures = %d\n"
        "; Anti-aliasing (MSAA samples): 1 = off, 2, 4, 8\n"
        "msaa = %d\n"
        "; Game speed: 1 = normal ... 8 = eight times (as far as the PC keeps up).\n"
        "; The game logic is tied to its frame rate, so this is fast-forward. Hold Tab (or click the right stick) for 4x (or double the set speed, up to 8x).\n"
        "speed = %d\n",
        g_cfg.resolution_scale, g_cfg.widescreen, g_cfg.vsync, g_cfg.fullscreen, g_cfg.window_scale,
        g_cfg.controls.c_str(), g_cfg.swap_ab_xy, g_cfg.show_perf, g_cfg.anisotropy, g_cfg.smooth_textures, g_cfg.msaa, g_cfg.speed);
    fclose(w);
}
