#pragma once
#include <string>

// Settings from the .ini file (next to the executable or in the working folder).
// Every key can also be overridden with an environment variable of the same name in
// upper case (e.g. RESOLUTION_SCALE=3).
struct Config {
    int resolution_scale = 2;          // internal render resolution = 640x528 * scale
    bool vsync = true;
    bool widescreen = true;            // tell the game the TV is 16:9 and present at 16:9
    bool fullscreen = false;
    int window_scale = 2;              // initial window size = 640x480 * window_scale (or 854x480 widescreen)
    std::string controls = "sideways"; // "sideways", "nunchuk" or "classic" (Classic Controller)
    bool show_perf = true;
    int anisotropy = 16;               // anisotropic texture filtering: 1 (off), 2, 4, 8, 16
    bool smooth_textures = true;       // trilinear mipmaps (generated when the game has none)
    bool swap_ab_xy = false;           // gamepad: swap A<->B and X<->Y (Nintendo-style positions)
    int speed = 1;                     // game speed multiplier 1..8 (fast-forward)
    int msaa = 4;                      // anti-aliasing samples: 1 (off), 2, 4, 8
};
extern Config g_cfg;
void config_load(const char* exe_path);
void config_save();
