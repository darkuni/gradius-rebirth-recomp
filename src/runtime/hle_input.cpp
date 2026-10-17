// Wii Remote replacement. KPADRead is answered from host input (keyboard/gamepad via
// the platform layer) or from a script (AUTOPRESS) for automated runs.
//
// Two layouts, matching the grips the game offers (config: controls = sideways|nunchuk):
//   sideways: the remote's d-pad is rotated 90 degrees, so screen directions are mapped
//             to the remote buttons the game expects (screen up = remote RIGHT, ...).
//             Gamepad: A = 2, B = 1, X = A, Y = B. Keyboard: X = 2, Z = 1, A = A, S = B.
//   nunchuk:  left stick (or keyboard arrows) = Nunchuk stick, d-pad = remote d-pad.
//             Gamepad: A = A, B = B, X = 1, Y = 2, LB/LT = Z, RB/RT = C.
//             Keyboard: X = A, Z = B, Shift(L2) = Z, C(R1) = C, I/J/K/L = d-pad.
//   classic:  Classic Controller (the game reads it as WPAD_DEV_CLASSIC). Buttons by label:
//             Gamepad A/B/X/Y = A/B/X/Y, LB/RB = L/R, LT/RT = ZL/ZR, both sticks, d-pad.
//             Keyboard: arrows = d-pad, X = A, Z = B, S = X, A = Y, Q/W = L/R, 1/2 = ZL/ZR,
//             I/J/K/L = right stick.
//   Both: Start/Enter = +, Back/Backspace = -, Guide/H = HOME.
#include "hle.h"
#include "hostinput.h"
#include "config.h"
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>

extern uint64_t g_vi_count;
HostInput g_host_input;
uint32_t g_host_buttons = 0;   // legacy raw remote mask (unused by the SDL layer now)

enum : uint32_t { W_LEFT = 0x0001, W_RIGHT = 0x0002, W_DOWN = 0x0004, W_UP = 0x0008, W_PLUS = 0x0010, W_2 = 0x0100,
                  W_1 = 0x0200, W_B = 0x0400, W_A = 0x0800, W_MINUS = 0x1000, W_Z = 0x2000, W_C = 0x4000, W_HOME = 0x8000 };

static const std::map<std::string, uint32_t> kButtons = {
    {"LEFT", W_LEFT}, {"RIGHT", W_RIGHT}, {"DOWN", W_DOWN}, {"UP", W_UP}, {"PLUS", W_PLUS}, {"2", W_2}, {"1", W_1},
    {"B", W_B}, {"A", W_A}, {"MINUS", W_MINUS}, {"Z", W_Z}, {"C", W_C}, {"HOME", W_HOME}};

struct Press { uint32_t mask; uint64_t from, to; };
static std::vector<Press> g_script;
static bool g_script_loaded = false;

static void load_script() {
    g_script_loaded = true;
    const char* s = getenv("AUTOPRESS");
    if (!s) return;
    std::string all = s;
    size_t pos = 0;
    while (pos < all.size()) {
        size_t comma = all.find(',', pos);
        std::string item = all.substr(pos, comma == std::string::npos ? std::string::npos : comma - pos);
        pos = comma == std::string::npos ? all.size() : comma + 1;
        size_t at = item.find('@'), dash = item.find('-', at);
        if (at == std::string::npos) continue;
        auto it = kButtons.find(item.substr(0, at));
        if (it == kButtons.end()) continue;
        uint64_t a = std::stoull(item.substr(at + 1, dash - at - 1));
        uint64_t b = dash == std::string::npos ? a + 6 : std::stoull(item.substr(dash + 1));
        g_script.push_back({it->second, a, b});
    }
}

static bool nunchuk_mode() { return g_cfg.controls == "nunchuk"; }
static bool classic_mode() { return g_cfg.controls == "classic"; }

// Classic Controller button bits (KPAD ex_status.cl.hold)
enum : uint32_t { CL_UP = 0x0001, CL_LEFT = 0x0002, CL_ZR = 0x0004, CL_X = 0x0008, CL_A = 0x0010, CL_Y = 0x0020, CL_B = 0x0040,
                  CL_ZL = 0x0080, CL_R = 0x0200, CL_PLUS = 0x0400, CL_HOME = 0x0800, CL_MINUS = 0x1000, CL_L = 0x2000,
                  CL_DOWN = 0x4000, CL_RIGHT = 0x8000 };
static uint32_t classic_buttons() {
    if (!g_script_loaded) load_script();
    const HostInput& in = g_host_input;
    uint32_t b = in.buttons, m = 0;
    if (b & (IN_UP | IN_ALT_UP)) m |= CL_UP;
    if (b & (IN_DOWN | IN_ALT_DOWN)) m |= CL_DOWN;
    if (b & (IN_LEFT | IN_ALT_LEFT)) m |= CL_LEFT;
    if (b & (IN_RIGHT | IN_ALT_RIGHT)) m |= CL_RIGHT;
    if (b & IN_SOUTH) m |= CL_A;
    if (b & IN_EAST) m |= CL_B;
    if (b & IN_WEST) m |= CL_X;
    if (b & IN_NORTH) m |= CL_Y;
    if (b & IN_L1) m |= CL_L;
    if (b & IN_R1) m |= CL_R;
    if (b & IN_L2) m |= CL_ZL;
    if (b & IN_R2) m |= CL_ZR;
    if (b & IN_START) m |= CL_PLUS;
    if (b & IN_BACK) m |= CL_MINUS;
    if (b & IN_GUIDE) m |= CL_HOME;
    // scripted presses (AUTOPRESS) use remote names; map the common ones
    for (auto& p : g_script) if (g_vi_count >= p.from && g_vi_count <= p.to) {
        if (p.mask & W_A) m |= CL_A;
        if (p.mask & W_B) m |= CL_B;
        if (p.mask & W_PLUS) m |= CL_PLUS;
    }
    return m;
}

// Build the Wii Remote button mask and nunchuk stick from host input.
static uint32_t remote_buttons(float& sx, float& sy) {
    if (!g_script_loaded) load_script();
    const HostInput& in = g_host_input;
    uint32_t b = in.buttons, m = g_host_buttons;
    sx = 0; sy = 0;
    if (!nunchuk_mode()) {
        // directions: d-pad, arrows, or left stick
        bool up = (b & IN_UP) || in.ly > 0.5f, down = (b & IN_DOWN) || in.ly < -0.5f;
        bool left = (b & IN_LEFT) || in.lx < -0.5f, right = (b & IN_RIGHT) || in.lx > 0.5f;
        if (up) m |= W_RIGHT;
        if (down) m |= W_LEFT;
        if (left) m |= W_UP;
        if (right) m |= W_DOWN;
        if (b & IN_SOUTH) m |= W_2;
        if (b & IN_EAST) m |= W_1;
        if (b & IN_WEST) m |= W_A;
        if (b & IN_NORTH) m |= W_B;
    } else {
        sx = in.lx; sy = in.ly;
        if (b & IN_KB_ARROWS) {     // keyboard arrows drive the stick
            if (b & IN_LEFT) sx = -1; if (b & IN_RIGHT) sx = 1;
            if (b & IN_UP) sy = 1; if (b & IN_DOWN) sy = -1;
        } else {
            if (b & IN_UP) m |= W_UP;
            if (b & IN_DOWN) m |= W_DOWN;
            if (b & IN_LEFT) m |= W_LEFT;
            if (b & IN_RIGHT) m |= W_RIGHT;
        }
        if (b & IN_ALT_UP) m |= W_UP;
        if (b & IN_ALT_DOWN) m |= W_DOWN;
        if (b & IN_ALT_LEFT) m |= W_LEFT;
        if (b & IN_ALT_RIGHT) m |= W_RIGHT;
        if (b & IN_SOUTH) m |= W_A;
        if (b & IN_EAST) m |= W_B;
        if (b & IN_WEST) m |= W_1;
        if (b & IN_NORTH) m |= W_2;
        if (b & (IN_L1 | IN_L2)) m |= W_Z;
        if (b & (IN_R1 | IN_R2)) m |= W_C;
    }
    if (b & IN_START) m |= W_PLUS;
    if (b & IN_BACK) m |= W_MINUS;
    if (b & IN_GUIDE) m |= W_HOME;
    for (auto& p : g_script) if (g_vi_count >= p.from && g_vi_count <= p.to) m |= p.mask;
    float len = std::sqrt(sx * sx + sy * sy);
    if (len > 1) { sx /= len; sy /= len; }
    return m;
}

void hle_WPADProbe(Ctx* c) {
    uint32_t chan = c->r[3], type = c->r[4];
    if (chan == 0) { if (type) W32(type, classic_mode() ? 2 : nunchuk_mode() ? 1 : 0); c->r[3] = 0; }   // WPAD_DEV_CORE / FREESTYLE / CLASSIC
    else c->r[3] = (uint32_t)-1;                                                    // WPAD_ERR_NO_CONTROLLER
}

// s32 KPADRead(s32 chan, KPADStatus* samples, u32 length)
void hle_KPADRead(Ctx* c) {
    uint32_t chan = c->r[3], buf = c->r[4], len = c->r[5];
    if (chan != 0 || !buf || !len) { c->r[3] = 0; return; }
    static uint32_t prev = 0, cprev = 0;
    float sx, sy;
    bool cl = classic_mode();
    uint32_t hold = cl ? 0 : remote_buttons(sx, sy);
    bool nun = !cl && nunchuk_mode();
    for (uint32_t i = 0; i < 0x84; i++) W8(buf + i, 0);
    W32(buf + 0x00, hold);
    W32(buf + 0x04, hold & ~prev);
    W32(buf + 0x08, prev & ~hold);
    WF32(buf + 0x0C, 0.0); WF32(buf + 0x10, -1.0); WF32(buf + 0x14, 0.0);   // acc: resting
    WF32(buf + 0x18, 1.0);
    WF32(buf + 0x34, 1.0);                                                     // horizon
    WF32(buf + 0x58, -1.0);
    W8(buf + 0x5C, cl ? 2 : nun ? 1 : 0);   // dev_type
    W8(buf + 0x5D, 0);                       // WPAD_ERR_NONE
    W8(buf + 0x5E, 0);                       // no pointer
    W8(buf + 0x5F, cl ? 7 : nun ? 4 : 1);    // data format
    if (cl) {                                // ex_status.cl
        const HostInput& in = g_host_input;
        uint32_t ch = classic_buttons();
        W32(buf + 0x60, ch); W32(buf + 0x64, ch & ~cprev); W32(buf + 0x68, cprev & ~ch);
        auto clampv = [](float& x, float& y) { float l = std::sqrt(x * x + y * y); if (l > 1) { x /= l; y /= l; } };
        float lx = in.lx, ly = in.ly, rx = in.rx, ry = in.ry;
        clampv(lx, ly); clampv(rx, ry);
        WF32(buf + 0x6C, lx); WF32(buf + 0x70, ly);
        WF32(buf + 0x74, rx); WF32(buf + 0x78, ry);
        WF32(buf + 0x7C, (ch & CL_L) ? 1.f : 0.f);   // L/R: analog shoulders, driven by LB/RB
        WF32(buf + 0x80, (ch & CL_R) ? 1.f : 0.f);
        cprev = ch;
    }
    if (nun) {                     // ex_status.fs
        WF32(buf + 0x60, sx); WF32(buf + 0x64, sy);
        WF32(buf + 0x68, 0.0); WF32(buf + 0x6C, -1.0); WF32(buf + 0x70, 0.0);
        WF32(buf + 0x74, 1.0);
    }
    prev = hold;
    c->r[3] = 1;
}

void hle_SCGetAspectRatio(Ctx* c) { c->r[3] = g_cfg.widescreen ? 1 : 0; }

// 2009 KPAD: KPADReadEx(chan, samples, len, s32* err) -> same as KPADRead, plus error code.
void hle_KPADReadEx(Ctx* c) {
    uint32_t err = c->r[6];
    hle_KPADRead(c);
    if (err) W32(err, 0);   // KPAD_READ_ERR_NONE
}
