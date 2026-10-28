// OpenGL 3.3 backend for the GX command stream.
//   - vertices are decoded and transformed on the CPU (XF: matrices, lighting, texgen)
//   - TEV stages become generated GLSL fragment shaders (gx_shader.cpp)
//   - the EFB is a 640x528 FBO; EFB->texture copies are kept as GL textures keyed by
//     their destination address; EFB->XFB copies are the finished frames.
#ifndef _WIN32
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#else
#include "glad.h"
#endif
#include "hle.h"
#include "gx_state.h"
#include "gx_tex.h"
#include "gx_render.h"
#include "config.h"
#include "audio_ring.h"
#include <vector>
#include <unordered_map>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <atomic>

static const int EFB_W = 640, EFB_H = 528;   // logical EFB size
static int RS = 1, PW = 640, PH = 528;           // render scale and physical EFB size
static bool g_ok = false, g_tried = false;
static GLuint g_fbo, g_efb_color, g_efb_depth, g_vao, g_vbo, g_vs;
static GLuint g_xfb_tex;            // last presented frame
static int g_xfb_w = 640, g_xfb_h = 480;
static uint64_t g_frame = 0;
static uint64_t g_tex_epoch = 1;   // bumps each frame and on TLUT loads: texture cache re-validates
char g_perf_text[128] = "";
#include <chrono>
static uint64_t g_ns_draw = 0, g_ns_copy = 0;
static uint64_t g_batches = 0, g_draw_calls_in = 0;
static inline uint64_t now_ns_r();
struct ScopeNs { uint64_t& acc; uint64_t t; ScopeNs(uint64_t& a) : acc(a), t(now_ns_r()) {} ~ScopeNs() { acc += now_ns_r() - t; } };
static inline uint64_t now_ns_r() { return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count(); }
static bool g_gxdbg = getenv("GXDEBUG") != nullptr;
static long g_fdump = getenv("FRAMEDUMP") ? atol(getenv("FRAMEDUMP")) : -1;
static int g_frame_draws = 0;
static std::string g_frame_tex;

struct Vtx { float pos[4]; float c0[4]; float c1[4]; float tc[8][3]; };

// TEV register / konst values (BP 0xE0-0xE7 share addresses; bit 23 selects konst)
static float g_tevreg[4][4] = {{0}}, g_konst[4][4] = {{0}};

// ---------------------------------------------------------------- GL helpers
static GLuint compile(GLenum type, const std::string& src) {
    GLuint s = glCreateShader(type);
    const char* p = src.c_str();
    glShaderSource(s, 1, &p, nullptr);
    glCompileShader(s);
    GLint ok; glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[4096]; glGetShaderInfoLog(s, sizeof log, nullptr, log);
        fprintf(g_log, "[gl] shader error: %s\n%s\n", log, src.c_str());
    }
    return s;
}

static const char* kVS =
    "#version 330 core\n"
    "layout(location=0) in vec4 a_pos; layout(location=1) in vec4 a_c0; layout(location=2) in vec4 a_c1;\n"
    "layout(location=3) in vec3 a_tc0; layout(location=4) in vec3 a_tc1; layout(location=5) in vec3 a_tc2; layout(location=6) in vec3 a_tc3;\n"
    "layout(location=7) in vec3 a_tc4; layout(location=8) in vec3 a_tc5; layout(location=9) in vec3 a_tc6; layout(location=10) in vec3 a_tc7;\n"
    "out vec4 v_c0; out vec4 v_c1; out vec3 v_tc[8];\n"
    "void main(){ gl_Position=a_pos; v_c0=a_c0; v_c1=a_c1;\n"
    " v_tc[0]=a_tc0; v_tc[1]=a_tc1; v_tc[2]=a_tc2; v_tc[3]=a_tc3; v_tc[4]=a_tc4; v_tc[5]=a_tc5; v_tc[6]=a_tc6; v_tc[7]=a_tc7; }\n";

struct Prog { GLuint p; GLint u_reg, u_konst, u_aref, u_tex; };
static std::unordered_map<uint64_t, Prog> g_progs;

static Prog& get_prog() {
    uint64_t key = tev_shader_key(g_gx.bp);
    auto it = g_progs.find(key);
    if (it != g_progs.end()) return it->second;
    Prog pr;
    pr.p = glCreateProgram();
    glAttachShader(pr.p, g_vs);
    glAttachShader(pr.p, compile(GL_FRAGMENT_SHADER, tev_shader_source(g_gx.bp)));
    glLinkProgram(pr.p);
    GLint ok; glGetProgramiv(pr.p, GL_LINK_STATUS, &ok);
    if (!ok) { char log[2048]; glGetProgramInfoLog(pr.p, sizeof log, nullptr, log); fprintf(g_log, "[gl] link error: %s\n", log); }
    pr.u_reg = glGetUniformLocation(pr.p, "u_reg");
    pr.u_konst = glGetUniformLocation(pr.p, "u_konst");
    pr.u_aref = glGetUniformLocation(pr.p, "u_aref");
    pr.u_tex = glGetUniformLocation(pr.p, "u_tex");
    glUseProgram(pr.p);
    GLint units[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    glUniform1iv(pr.u_tex, 8, units);
    return g_progs[key] = pr;
}

// The EFB: g_fbo is rendered to. With MSAA it holds multisampled renderbuffers and
// is resolved into g_rfbo (texture g_efb_color) whenever the game copies out of the EFB.
static GLuint g_rfbo = 0, g_efb_msc = 0;
static int g_cfg_msaa_seen = -1;
static int g_msaa = 1;
static GLuint g_efb_dtex = 0;   // single-sample depth as a texture (for Z copies)
static void create_efb() {
    if (!g_fbo) glGenFramebuffers(1, &g_fbo);
    if (!g_rfbo) glGenFramebuffers(1, &g_rfbo);
    if (!g_efb_color) glGenTextures(1, &g_efb_color);
    if (!g_efb_depth) glGenRenderbuffers(1, &g_efb_depth);
    if (!g_efb_msc) glGenRenderbuffers(1, &g_efb_msc);
    if (!g_efb_dtex) glGenTextures(1, &g_efb_dtex);
    GLint maxs = 1;
    glGetIntegerv(GL_MAX_SAMPLES, &maxs);
    g_msaa = std::max(1, std::min(g_cfg.msaa, (int)maxs));
    glBindTexture(GL_TEXTURE_2D, g_efb_color);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, PW, PH, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glBindTexture(GL_TEXTURE_2D, g_efb_dtex);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT24, PW, PH, 0, GL_DEPTH_COMPONENT, GL_UNSIGNED_INT, nullptr);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_NONE);
    glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
    if (g_msaa > 1) {
        glBindRenderbuffer(GL_RENDERBUFFER, g_efb_depth);
        glRenderbufferStorageMultisample(GL_RENDERBUFFER, g_msaa, GL_DEPTH_COMPONENT24, PW, PH);
        glBindRenderbuffer(GL_RENDERBUFFER, g_efb_msc);
        glRenderbufferStorageMultisample(GL_RENDERBUFFER, g_msaa, GL_RGBA8, PW, PH);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, 0, 0);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, 0, 0);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, g_efb_msc);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, g_efb_depth);
        glBindFramebuffer(GL_FRAMEBUFFER, g_rfbo);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, g_efb_color, 0);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, g_efb_dtex, 0);
        glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
    } else {
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, 0);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, 0);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, g_efb_color, 0);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, g_efb_dtex, 0);
    }
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) fprintf(g_log, "[gl] EFB incomplete (MSAA %d)\n", g_msaa);
}
// framebuffer to read EFB contents from (resolving MSAA first)
static GLuint efb_read_fbo() {
    if (g_msaa <= 1) return g_fbo;
    glBindFramebuffer(GL_READ_FRAMEBUFFER, g_fbo);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, g_rfbo);
    glDisable(GL_SCISSOR_TEST);
    glBlitFramebuffer(0, 0, PW, PH, 0, 0, PW, PH, GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT, GL_NEAREST);
    return g_rfbo;
}

static bool ensure_gl() {
    if (g_ok) { gl_platform_make_current(); return true; }
    if (g_tried) return false;
    g_tried = true;
    if (getenv("NO_GL") || !gl_platform_init(EFB_W, EFB_H)) return false;
    RS = g_cfg.resolution_scale; PW = EFB_W * RS; PH = EFB_H * RS;
    g_cfg_msaa_seen = g_cfg.msaa;
    create_efb();
    glViewport(0, 0, PW, PH);
    glClearColor(0, 0, 0, 1); glClearDepth(1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_CLAMP);
    g_vs = compile(GL_VERTEX_SHADER, kVS);
    glGenVertexArrays(1, &g_vao);
    glBindVertexArray(g_vao);
    glGenBuffers(1, &g_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, g_vbo);
    glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void*)offsetof(Vtx, pos));
    glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void*)offsetof(Vtx, c0));
    glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void*)offsetof(Vtx, c1));
    for (int i = 0; i < 8; i++) glVertexAttribPointer(3 + i, 3, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void*)(offsetof(Vtx, tc) + 12 * i));
    for (int i = 0; i < 11; i++) glEnableVertexAttribArray(i);
    glGenTextures(1, &g_xfb_tex);
    g_ok = true;
    return true;
}

// ---------------------------------------------------------------- XF helpers
static inline float xff(uint32_t addr) { return u2f(addr < 0x1000 ? g_gx.xf_mem[addr] : g_gx.xf_reg[addr - 0x1000]); }
static inline void col_u32(uint32_t v, float* o) { o[0] = (v >> 24) / 255.f; o[1] = ((v >> 16) & 255) / 255.f; o[2] = ((v >> 8) & 255) / 255.f; o[3] = (v & 255) / 255.f; }

// ---------------------------------------------------------------- vertex decode
struct RawVtx {
    float pos[3] = {0, 0, 0};
    float nrm[9] = {0, 0, 1, 0, 0, 0, 0, 0, 0};
    float col[2][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}};
    float tex[8][2] = {{0}};
    int pnidx;
    int texidx[8];
    bool has_nrm = false, has_col[2] = {false, false};
};

// Vertex processing is done per draw in two parts: everything that depends only on
// CP/XF register state (vertex format, matrices' locations, lighting setup, texgen
// configuration, projection/viewport) is unpacked once into DrawSetup, then each
// vertex is decoded and transformed with plain loops over that.
static inline float read_comp(int fmt, float scale, const uint8_t*& p) {
    switch (fmt) {
        case 0: return *p++ * scale;
        case 1: return (int8_t)*p++ * scale;
        case 2: { uint16_t v = (uint16_t)(p[0] << 8 | p[1]); p += 2; return v * scale; }
        case 3: { int16_t v = (int16_t)(p[0] << 8 | p[1]); p += 2; return v * scale; }
        default: { uint32_t v = (uint32_t)p[0] << 24 | p[1] << 16 | p[2] << 8 | p[3]; p += 4; return u2f(v); }
    }
}
static inline void read_color(int fmt, const uint8_t*& p, float* o) {
    uint32_t v;
    switch (fmt) {
        case 0: v = p[0] << 8 | p[1]; p += 2; o[0] = ((v >> 11) & 31) / 31.f; o[1] = ((v >> 5) & 63) / 63.f; o[2] = (v & 31) / 31.f; o[3] = 1; break;
        case 1: o[0] = p[0] / 255.f; o[1] = p[1] / 255.f; o[2] = p[2] / 255.f; o[3] = 1; p += 3; break;
        case 2: o[0] = p[0] / 255.f; o[1] = p[1] / 255.f; o[2] = p[2] / 255.f; o[3] = 1; p += 4; break;
        case 3: v = p[0] << 8 | p[1]; p += 2; o[0] = ((v >> 12) & 15) / 15.f; o[1] = ((v >> 8) & 15) / 15.f; o[2] = ((v >> 4) & 15) / 15.f; o[3] = (v & 15) / 15.f; break;
        case 4: v = p[0] << 16 | p[1] << 8 | p[2]; p += 3; o[0] = ((v >> 18) & 63) / 63.f; o[1] = ((v >> 12) & 63) / 63.f; o[2] = ((v >> 6) & 63) / 63.f; o[3] = (v & 63) / 63.f; break;
        default: o[0] = p[0] / 255.f; o[1] = p[1] / 255.f; o[2] = p[2] / 255.f; o[3] = p[3] / 255.f; p += 4; break;
    }
}

struct LightP { float col[4]; float a0, a1, a2, k0, k1, k2; float lp[3], ld[3]; };
struct ChanP {
    bool light, mat_vtx, amb_vtx, attn, spot;
    int dfn, nl;
    uint8_t li[8];
    float mat[4], amb[4];
};
struct DrawSetup {
    // vertex format
    bool pn_direct; bool tex_direct[8];
    int pt, pcnt, pfmt; float pscale;
    int nt, nfmt, nn; bool idx3; float nscale; int nsize;
    int ct[2], cfmt[2];
    int tt[8], tcnt[8], tfmt[8]; float tscale[8];
    int def_pn, def_tex[8];
    uint32_t abase[16], astride[16];
    // transform
    float P[6]; bool ortho;
    float vx0, vx1, vy0, vy1, vz0, vz1;   // clip-space viewport mapping
    int ncol, ntg; bool dual;
    uint32_t tginfo[8], pinfo[8];
    ChanP ch[2][2];   // [channel][0 = color, 1 = alpha]
    LightP lights[8];
};
static DrawSetup g_ds;

static void setup_vertex_pipeline(int vat) {
    DrawSetup& d = g_ds;
    const uint32_t lo = g_gx.cp[0x50], hi = g_gx.cp[0x60];
    const uint32_t A = g_gx.cp[0x70 + vat], B = g_gx.cp[0x80 + vat], C = g_gx.cp[0x90 + vat];
    uint32_t mA = g_gx.cp[0x30], mB = g_gx.cp[0x40];
    d.def_pn = mA & 63;
    for (int i = 0; i < 4; i++) d.def_tex[i] = (mA >> (6 + 6 * i)) & 63;
    for (int i = 0; i < 4; i++) d.def_tex[4 + i] = (mB >> (6 * i)) & 63;
    d.pn_direct = lo & 1;
    for (int i = 0; i < 8; i++) d.tex_direct[i] = lo & (2 << i);
    for (int i = 0; i < 16; i++) { d.abase[i] = g_gx.cp[0xA0 + i]; d.astride[i] = g_gx.cp[0xB0 + i] & 0xFF; }
    d.pt = (lo >> 9) & 3; d.pcnt = (A & 1) ? 3 : 2; d.pfmt = (A >> 1) & 7; d.pscale = 1.0f / (float)(1 << ((A >> 4) & 31));
    d.nt = (lo >> 11) & 3; d.nfmt = (A >> 10) & 7; d.nn = ((A >> 9) & 1) ? 3 : 1; d.idx3 = (A >> 31) & 1;
    d.nscale = 1.0f / (float)(1 << (d.nfmt == 1 ? 6 : d.nfmt == 3 ? 14 : 0));
    d.nsize = d.nfmt == 4 ? 4 : d.nfmt >= 2 ? 2 : 1;
    for (int k = 0; k < 2; k++) { d.ct[k] = (lo >> (13 + 2 * k)) & 3; d.cfmt[k] = (A >> (14 + 4 * k)) & 7; }
    const int tcnt[8] = {(int)((A >> 21) & 1), (int)(B & 1), (int)((B >> 9) & 1), (int)((B >> 18) & 1), (int)((B >> 27) & 1),
                         (int)((C >> 5) & 1), (int)((C >> 14) & 1), (int)((C >> 23) & 1)};
    const int tfmt[8] = {(int)((A >> 22) & 7), (int)((B >> 1) & 7), (int)((B >> 10) & 7), (int)((B >> 19) & 7), (int)((B >> 28) & 7),
                         (int)((C >> 6) & 7), (int)((C >> 15) & 7), (int)((C >> 24) & 7)};
    const int tfrac[8] = {(int)((A >> 25) & 31), (int)((B >> 4) & 31), (int)((B >> 13) & 31), (int)((B >> 22) & 31), (int)(C & 31),
                          (int)((C >> 9) & 31), (int)((C >> 18) & 31), (int)((C >> 27) & 31)};
    for (int i = 0; i < 8; i++) { d.tt[i] = (hi >> (2 * i)) & 3; d.tcnt[i] = tcnt[i]; d.tfmt[i] = tfmt[i]; d.tscale[i] = 1.0f / (float)(1 << tfrac[i]); }
    // projection / viewport
    for (int i = 0; i < 6; i++) d.P[i] = xff(0x1020 + i);
    d.ortho = g_gx.xf_reg[0x26] != 0;
    float wd = xff(0x101A), ht = xff(0x101B), zr = xff(0x101C), xo = xff(0x101D), yo = xff(0x101E), fz = xff(0x101F);
    const float S = 16777216.f;
    d.vx0 = (xo - 342.f) / (EFB_W / 2.f) - 1.f; d.vx1 = wd / (EFB_W / 2.f);
    d.vy0 = 1.f - (yo - 342.f) / (EFB_H / 2.f); d.vy1 = -(ht / (EFB_H / 2.f));
    d.vz0 = 2.f * fz / S - 1.f; d.vz1 = 2.f * zr / S;
    d.ncol = g_gx.xf_reg[0x09] & 3;
    d.ntg = g_gx.xf_reg[0x3F] & 15;
    d.dual = g_gx.xf_reg[0x12] & 1;
    for (int i = 0; i < 8; i++) { d.tginfo[i] = g_gx.xf_reg[0x40 + i]; d.pinfo[i] = g_gx.xf_reg[0x50 + i]; }
    // lighting
    bool any_light = false;
    for (int c = 0; c < 2; c++) for (int al = 0; al < 2; al++) {
        uint32_t ctrl = g_gx.xf_reg[(al ? 0x10 : 0x0E) + c];
        ChanP& cp = d.ch[c][al];
        cp.mat_vtx = ctrl & 1; cp.light = ctrl & 2; cp.amb_vtx = ctrl & 0x40;
        col_u32(g_gx.xf_reg[0x0C + c], cp.mat);
        col_u32(g_gx.xf_reg[0x0A + c], cp.amb);
        uint32_t mask = ((ctrl >> 2) & 15) | (((ctrl >> 11) & 15) << 4);
        cp.dfn = (ctrl >> 7) & 3; cp.attn = (ctrl >> 9) & 1; cp.spot = (ctrl >> 10) & 1;
        cp.nl = 0;
        if (cp.light) for (int l = 0; l < 8; l++) if (mask & (1 << l)) { cp.li[cp.nl++] = (uint8_t)l; any_light = true; }
    }
    if (any_light) for (int l = 0; l < 8; l++) {
        uint32_t base = 0x600 + l * 16;
        LightP& L = d.lights[l];
        col_u32(g_gx.xf_mem[base + 3], L.col);
        L.a0 = xff(base + 4); L.a1 = xff(base + 5); L.a2 = xff(base + 6);
        L.k0 = xff(base + 7); L.k1 = xff(base + 8); L.k2 = xff(base + 9);
        for (int i = 0; i < 3; i++) { L.lp[i] = xff(base + 10 + i); L.ld[i] = xff(base + 13 + i); }
    }
}

static inline const uint8_t* index_ptr(const uint8_t*& p, int type, int arr) {
    uint32_t idx;
    if (type == 2) idx = *p++;
    else { idx = (uint32_t)(p[0] << 8 | p[1]); p += 2; }
    uint32_t a = ((g_ds.abase[arr] + idx * g_ds.astride[arr]) & 0x3FFFFFFF) | 0x80000000u;
    return MEM + xl(a);
}

static void decode_vertex(const uint8_t*& p, RawVtx& v) {
    const DrawSetup& d = g_ds;
    v.pnidx = d.pn_direct ? (*p++ & 63) : d.def_pn;
    for (int i = 0; i < 8; i++) v.texidx[i] = d.tex_direct[i] ? (*p++ & 63) : d.def_tex[i];
    if (d.pt) {
        const uint8_t* q = d.pt >= 2 ? index_ptr(p, d.pt, 0) : nullptr;
        const uint8_t*& r = q ? q : p;
        for (int i = 0; i < d.pcnt; i++) v.pos[i] = read_comp(d.pfmt, d.pscale, r);
    }
    if (d.nt) {
        if (d.nt >= 2) {
            const uint8_t* q = index_ptr(p, d.nt, 1);
            for (int k = 0; k < d.nn; k++) {
                if (k && d.idx3) q = index_ptr(p, d.nt, 1) + k * 3 * d.nsize;
                for (int i = 0; i < 3; i++) v.nrm[3 * k + i] = read_comp(d.nfmt, d.nscale, q);
            }
        } else {
            for (int k = 0; k < d.nn; k++) for (int i = 0; i < 3; i++) v.nrm[3 * k + i] = read_comp(d.nfmt, d.nscale, p);
        }
        v.has_nrm = true;
    }
    for (int k = 0; k < 2; k++) {
        if (!d.ct[k]) continue;
        if (d.ct[k] >= 2) { const uint8_t* q = index_ptr(p, d.ct[k], 2 + k); read_color(d.cfmt[k], q, v.col[k]); }
        else read_color(d.cfmt[k], p, v.col[k]);
        v.has_col[k] = true;
    }
    for (int i = 0; i < 8; i++) {
        int t = d.tt[i];
        if (!t) continue;
        const uint8_t* q = t >= 2 ? index_ptr(p, t, 4 + i) : nullptr;
        const uint8_t*& r = q ? q : p;
        v.tex[i][0] = read_comp(d.tfmt[i], d.tscale[i], r);
        if (d.tcnt[i]) v.tex[i][1] = read_comp(d.tfmt[i], d.tscale[i], r);
    }
}

// ---------------------------------------------------------------- lighting
static inline void light_channel(const ChanP& cp, bool alpha, const float* vpos, const float* n, const float* vcol, float* out) {
    const float* mat = cp.mat_vtx ? vcol : cp.mat;
    if (!cp.light) {        // lighting disabled
        if (alpha) out[3] = mat[3]; else { out[0] = mat[0]; out[1] = mat[1]; out[2] = mat[2]; }
        return;
    }
    const float* amb = cp.amb_vtx ? vcol : cp.amb;
    float lit[4] = {amb[0], amb[1], amb[2], amb[3]};
    for (int j = 0; j < cp.nl; j++) {
        const LightP& Lp = g_ds.lights[cp.li[j]];
        float L[3] = {Lp.lp[0] - vpos[0], Lp.lp[1] - vpos[1], Lp.lp[2] - vpos[2]};
        float dist2 = L[0] * L[0] + L[1] * L[1] + L[2] * L[2], dist = std::sqrt(dist2);
        if (dist > 0) { float inv = 1.f / dist; L[0] *= inv; L[1] *= inv; L[2] *= inv; }
        float ndl = n[0] * L[0] + n[1] * L[1] + n[2] * L[2];
        float diff = cp.dfn == 0 ? 1.f : cp.dfn == 1 ? ndl : std::max(ndl, 0.f);
        float att = 1.f;
        if (cp.attn) {
            if (cp.spot) {
                float cs = std::max(0.f, -(L[0] * Lp.ld[0] + L[1] * Lp.ld[1] + L[2] * Lp.ld[2]));
                float num = std::max(0.f, Lp.a0 + Lp.a1 * cs + Lp.a2 * cs * cs);
                float den = Lp.k0 + Lp.k1 * dist + Lp.k2 * dist2;
                att = den != 0 ? num / den : 0;
            } else {   // specular
                float ndh = n[0] * Lp.ld[0] + n[1] * Lp.ld[1] + n[2] * Lp.ld[2];
                float s = ndl > 0 ? std::max(0.f, ndh) : 0.f;
                float num = std::max(0.f, Lp.a0 + Lp.a1 * s + Lp.a2 * s * s);
                float den = Lp.k0 + Lp.k1 * s + Lp.k2 * s * s;
                att = den != 0 ? num / den : 0;
            }
        }
        float f = diff * att;
        for (int i = 0; i < 4; i++) lit[i] += f * Lp.col[i];
    }
    for (int i = 0; i < 4; i++) lit[i] = std::min(1.f, std::max(0.f, lit[i]));
    if (alpha) out[3] = mat[3] * lit[3];
    else for (int i = 0; i < 3; i++) out[i] = mat[i] * lit[i];
}

// ---------------------------------------------------------------- transform
static void transform(const RawVtx& r, Vtx& o) {
    const DrawSetup& d = g_ds;
    const uint32_t m = r.pnidx * 4;
    const uint32_t* xm = g_gx.xf_mem;
    float mv[12];
    for (int i = 0; i < 12; i++) mv[i] = u2f(xm[m + i]);
    float p[3];
    for (int i = 0; i < 3; i++) p[i] = mv[4 * i] * r.pos[0] + mv[4 * i + 1] * r.pos[1] + mv[4 * i + 2] * r.pos[2] + mv[4 * i + 3];
    // normal
    float n[3] = {0, 0, 1};
    if (r.has_nrm) {
        uint32_t nb = 0x400 + (r.pnidx & 31) * 3;
        for (int i = 0; i < 3; i++) n[i] = u2f(xm[nb + 3 * i]) * r.nrm[0] + u2f(xm[nb + 3 * i + 1]) * r.nrm[1] + u2f(xm[nb + 3 * i + 2]) * r.nrm[2];
        float l = std::sqrt(n[0] * n[0] + n[1] * n[1] + n[2] * n[2]);
        if (l > 0) { float inv = 1.f / l; n[0] *= inv; n[1] *= inv; n[2] *= inv; }
    }
    // projection
    const float* P = d.P;
    float X, Y, Z, W;
    if (!d.ortho) { X = P[0] * p[0] + P[1] * p[2]; Y = P[2] * p[1] + P[3] * p[2]; Z = P[4] * p[2] + P[5]; W = -p[2]; }
    else { X = P[0] * p[0] + P[1]; Y = P[2] * p[1] + P[3]; Z = P[4] * p[2] + P[5]; W = 1; }
    // viewport -> GL clip space covering the 640x528 EFB
    o.pos[0] = d.vx0 * W + d.vx1 * X;
    o.pos[1] = d.vy0 * W + d.vy1 * Y;
    o.pos[2] = d.vz0 * W + d.vz1 * Z;
    o.pos[3] = W;
    // colors
    for (int k = 0; k < 2; k++) {
        float* out = k == 0 ? o.c0 : o.c1;
        if (k >= d.ncol) { out[0] = out[1] = out[2] = out[3] = 0; continue; }
        const float* vc = r.col[k];
        light_channel(d.ch[k][0], false, p, n, vc, out);
        light_channel(d.ch[k][1], true, p, n, vc, out);
    }
    // texgen
    for (int i = 0; i < 8; i++) {
        float* t = o.tc[i];
        if (i >= d.ntg) { t[0] = r.tex[i][0]; t[1] = r.tex[i][1]; t[2] = 1; continue; }
        uint32_t info = d.tginfo[i];
        bool stq = (info >> 1) & 1, abc1 = (info >> 2) & 1;
        int type = (info >> 4) & 7, src = (info >> 7) & 31;
        float in[4] = {0, 0, 1, 1};
        if (src == 0) { in[0] = r.pos[0]; in[1] = r.pos[1]; in[2] = r.pos[2]; }
        else if (src == 1) { in[0] = r.nrm[0]; in[1] = r.nrm[1]; in[2] = r.nrm[2]; }
        else if (src == 2) { in[0] = r.col[0][0]; in[1] = r.col[0][1]; in[2] = r.col[0][2]; }
        else if (src == 3) { in[0] = r.nrm[3]; in[1] = r.nrm[4]; in[2] = r.nrm[5]; }
        else if (src == 4) { in[0] = r.nrm[6]; in[1] = r.nrm[7]; in[2] = r.nrm[8]; }
        else if (src >= 5 && src <= 12) { in[0] = r.tex[src - 5][0]; in[1] = r.tex[src - 5][1]; in[2] = 1; }
        if (!abc1) in[2] = 1;
        float s, tt, q = 1;
        if (type == 0) {
            const uint32_t* mb = xm + r.texidx[i] * 4;
            s = u2f(mb[0]) * in[0] + u2f(mb[1]) * in[1] + u2f(mb[2]) * in[2] + u2f(mb[3]) * in[3];
            tt = u2f(mb[4]) * in[0] + u2f(mb[5]) * in[1] + u2f(mb[6]) * in[2] + u2f(mb[7]) * in[3];
            if (stq) q = u2f(mb[8]) * in[0] + u2f(mb[9]) * in[1] + u2f(mb[10]) * in[2] + u2f(mb[11]) * in[3];
        } else if (type == 2 || type == 3) {
            const float* c = type == 2 ? o.c0 : o.c1;
            s = c[0]; tt = c[1];
        } else {   // emboss: reuse source coordinates
            int es = (info >> 12) & 7;
            s = o.tc[es][0]; tt = o.tc[es][1]; q = o.tc[es][2];
        }
        if (d.dual && type == 0) {
            uint32_t pinfo = d.pinfo[i];
            const uint32_t* pb = xm + 0x500 + (pinfo & 63) * 4;
            float v0 = s, v1 = tt, v2 = q;
            if ((pinfo >> 8) & 1) { float l = std::sqrt(v0 * v0 + v1 * v1 + v2 * v2); if (l > 0) { v0 /= l; v1 /= l; v2 /= l; } }
            s = u2f(pb[0]) * v0 + u2f(pb[1]) * v1 + u2f(pb[2]) * v2 + u2f(pb[3]);
            tt = u2f(pb[4]) * v0 + u2f(pb[5]) * v1 + u2f(pb[6]) * v2 + u2f(pb[7]);
            q = u2f(pb[8]) * v0 + u2f(pb[9]) * v1 + u2f(pb[10]) * v2 + u2f(pb[11]);
        }
        t[0] = s; t[1] = tt; t[2] = q;
    }
}

// ---------------------------------------------------------------- textures
struct TexEntry { GLuint tex = 0; uint64_t hash = 0; uint64_t checked = ~0ull; int w = 0, h = 0, levels = 1; bool gen = false; };
static std::unordered_map<uint64_t, TexEntry> g_texcache;
// EFB copy kept on the GPU. Games often sample a copy through a larger power-of-two texture
// (Contra ReBirth: 320x240 copy read as 512x256); `pad` holds the copy in the top-left of a
// texture of the sampled size, rebuilt when the copy changes.
struct CopyEntry { GLuint tex = 0; int w = 0, h = 0; uint64_t frame = 0, gen = 0;
                   GLuint pad = 0; int pw = 0, ph = 0, prs = 0; uint64_t pgen = ~0ull; };
static std::unordered_map<uint32_t, CopyEntry> g_copies;   // EFB copies by destination address

static uint64_t hash_mem(uint32_t addr, uint32_t n) {
    uint64_t h = 1469598103934665603ull;
    const uint8_t* p = MEM + (addr & 0x9FFFFFFFu);
    for (uint32_t i = 0; i + 8 <= n; i += 8) { uint64_t v; memcpy(&v, p + i, 8); h = (h ^ v) * 1099511628211ull; }
    return h;
}

#ifndef GL_TEXTURE_MAX_ANISOTROPY_EXT
#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#endif
// Sampler objects, keyed by the GX filter/wrap state, the texture's level count and
// the user's filtering settings.
static GLuint get_sampler(uint32_t mode0, uint32_t mode1, int levels) {
    static std::unordered_map<uint64_t, GLuint> cache;
    static int cfg_aniso = -1; static bool cfg_smooth = false;
    if (cfg_aniso != g_cfg.anisotropy || cfg_smooth != g_cfg.smooth_textures) {   // settings changed in the menu
        cache.clear(); cfg_aniso = g_cfg.anisotropy; cfg_smooth = g_cfg.smooth_textures;
    }
    uint64_t key = (uint64_t)(mode0 & 0x1FFFFF) | (uint64_t)(mode1 & 0xFFFF) << 21 | (uint64_t)levels << 40;
    auto it = cache.find(key);
    if (it != cache.end()) return it->second;
    GLuint smp;
    glGenSamplers(1, &smp);
    static const GLenum wrap[4] = {GL_CLAMP_TO_EDGE, GL_REPEAT, GL_MIRRORED_REPEAT, GL_REPEAT};
    glSamplerParameteri(smp, GL_TEXTURE_WRAP_S, wrap[mode0 & 3]);
    glSamplerParameteri(smp, GL_TEXTURE_WRAP_T, wrap[(mode0 >> 2) & 3]);
    glSamplerParameteri(smp, GL_TEXTURE_MAG_FILTER, (mode0 >> 4) & 1 ? GL_LINEAR : GL_NEAREST);
    int minf = (mode0 >> 5) & 7;          // bit 2: linear base filter, bits 0-1: mip filter (0 none, 1 nearest, 2 linear)
    bool lin = minf & 4;
    int mip = minf & 3;
    if (levels > 1 && g_cfg.smooth_textures) mip = 2;            // trilinear
    if (levels <= 1) mip = 0;
    GLenum mf = !mip ? (lin ? GL_LINEAR : GL_NEAREST)
              : mip == 1 ? (lin ? GL_LINEAR_MIPMAP_NEAREST : GL_NEAREST_MIPMAP_NEAREST)
                         : (lin ? GL_LINEAR_MIPMAP_LINEAR : GL_NEAREST_MIPMAP_LINEAR);
    glSamplerParameteri(smp, GL_TEXTURE_MIN_FILTER, mf);
    if (mip) {
        int bias = (int)((mode0 >> 9) & 0xFF); if (bias & 0x80) bias -= 0x100;   // s2.5
        glSamplerParameterf(smp, GL_TEXTURE_LOD_BIAS, bias / 32.0f);
        glSamplerParameterf(smp, GL_TEXTURE_MIN_LOD, (mode1 & 0xFF) / 16.0f);
        // textures that had mipmaps generated go to their last level; game mip chains stop at max_lod
        float maxl = ((mode1 >> 8) & 0xFF) / 16.0f;
        glSamplerParameterf(smp, GL_TEXTURE_MAX_LOD, maxl > 0 ? maxl : 1000.0f);
        if (lin && g_cfg.anisotropy > 1) glSamplerParameterf(smp, GL_TEXTURE_MAX_ANISOTROPY_EXT, (float)g_cfg.anisotropy);
    }
    cache[key] = smp;
    return smp;
}

static void bind_texmap(int m) {
    uint32_t base = m < 4 ? 0x80 + m : 0xA0 + (m - 4);
    uint32_t mode0 = g_gx.bp[base], mode1 = g_gx.bp[base + 4], img0 = g_gx.bp[base + 8], img3 = g_gx.bp[base + 0x14], tlut = g_gx.bp[base + 0x18];
    int w = (img0 & 1023) + 1, h = ((img0 >> 10) & 1023) + 1, fmt = (img0 >> 20) & 15;
    uint32_t addr = ((img3 & 0xFFFFFF) << 5) | 0x80000000u;
    if (g_gxdbg && g_frame_tex.size() < 400) { char b[64]; snprintf(b, sizeof b, " t%d:%08X/%d/%dx%d", m, addr, fmt, w, h); g_frame_tex += b; }
    if (addr >= 0x81800000u && addr < 0x90000000u) addr = (addr & 0x0FFFFFFF) | 0x80000000u;
    glActiveTexture(GL_TEXTURE0 + m);
    GLuint tex = 0;
    int levels = 1;
    auto cp = g_copies.find(addr);
    {
        static bool flog = getenv("FRAMELOG") != nullptr;
        static uint64_t lastf = ~0ull; static int n = 0;
        if (lastf != g_frame) { lastf = g_frame; n = 0; }
        if (flog && g_frame % 50 == 0 && n++ < 60) fprintf(g_log, "[tex] f%llu map%d %08X fmt %d %dx%d copyhit %d%s\n", (unsigned long long)g_frame, m, addr, fmt, w, h,
            cp != g_copies.end(), cp != g_copies.end() ? (cp->second.w == w && cp->second.h == h ? "" : " SIZE MISMATCH") : "");
    }
    if (cp != g_copies.end() && cp->second.w == w && cp->second.h == h) {
        tex = cp->second.tex;
    } else if (cp != g_copies.end() && cp->second.w <= w && cp->second.h <= h && cp->second.tex) {
        CopyEntry& e = cp->second;
        if (!e.pad) glGenTextures(1, &e.pad);
        if (e.pw != w || e.ph != h || e.prs != RS) {
            glBindTexture(GL_TEXTURE_2D, e.pad);
            std::vector<uint8_t> zero((size_t)w * RS * h * RS * 4, 0);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w * RS, h * RS, 0, GL_RGBA, GL_UNSIGNED_BYTE, zero.data());
            e.pw = w; e.ph = h; e.prs = RS; e.pgen = ~0ull;
        }
        if (e.pgen != e.gen) {
            static GLuint rfbo = 0, dfbo = 0;
            if (!rfbo) { glGenFramebuffers(1, &rfbo); glGenFramebuffers(1, &dfbo); }
            GLint prev_draw = 0, prev_read = 0;
            glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING, &prev_draw);
            glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING, &prev_read);
            glDisable(GL_SCISSOR_TEST);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, rfbo);
            glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, e.tex, 0);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, dfbo);
            glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, e.pad, 0);
            glBlitFramebuffer(0, 0, e.w * RS, e.h * RS, 0, 0, e.w * RS, e.h * RS, GL_COLOR_BUFFER_BIT, GL_NEAREST);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, prev_draw);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, prev_read);
            glEnable(GL_SCISSOR_TEST);   // only reached from draw setup, where the scissor is on
            e.pgen = e.gen;
        }
        tex = e.pad;
    } else {
        uint32_t tlut_addr = (tlut & 1023) << 9;
        int tlut_fmt = (tlut >> 10) & 3;
        // mip levels stored by the game: max_lod (u4.4) when a mip filter is selected
        int game_levels = 1;
        if (((mode0 >> 5) & 3) != 0) {
            game_levels = (int)(((mode1 >> 8) & 0xFF) + 15) / 16 + 1;
            int maxl = 1; while ((w >> maxl) >= 1 && (h >> maxl) >= 1 && maxl < 11) maxl++;
            if (game_levels > maxl) game_levels = maxl;
        }
        uint64_t key = (uint64_t)addr << 32 ^ (uint64_t)fmt << 24 ^ (uint64_t)w << 12 ^ h ^ (uint64_t)game_levels << 56;
        if (fmt >= 8 && fmt <= 10) key ^= (uint64_t)tlut << 40;
        TexEntry& e = g_texcache[key];
        bool want_gen = g_cfg.smooth_textures && game_levels == 1 && ((mode0 >> 5) & 4) && w >= 16 && h >= 16;
        if (e.checked != g_tex_epoch || e.gen != want_gen) {
            uint32_t sz = 0;
            for (int l = 0; l < game_levels; l++) sz += tex_size_bytes(fmt, std::max(1, w >> l), std::max(1, h >> l));
            uint64_t hsh = hash_mem(addr, sz);
            if (fmt >= 8 && fmt <= 10) for (int i = 0; i < 512; i++) hsh = (hsh ^ g_tmem[(tlut_addr + i) & 0xFFFFF]) * 1099511628211ull;
            if (!e.tex || hsh != e.hash || e.gen != want_gen) {
                std::vector<uint32_t> px;
                if (!e.tex) glGenTextures(1, &e.tex);
                glBindTexture(GL_TEXTURE_2D, e.tex);
                glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
                uint32_t off = 0;
                for (int l = 0; l < game_levels; l++) {
                    int lw = std::max(1, w >> l), lh = std::max(1, h >> l);
                    tex_decode(MEM + ((addr + off) & 0x9FFFFFFFu), fmt, lw, lh, tlut_addr, tlut_fmt, px);
                    glTexImage2D(GL_TEXTURE_2D, l, GL_RGBA8, lw, lh, 0, GL_RGBA, GL_UNSIGNED_BYTE, px.data());
                    off += tex_size_bytes(fmt, lw, lh);
                    if (l == 0) {
                        static uint32_t dump_addr = getenv("TEXDUMP") ? (uint32_t)strtoul(getenv("TEXDUMP"), nullptr, 16) : 0;
                        static int dumps = 0;
                        if (addr == dump_addr && (dumps++ % 120) == 0 && dumps < 600) {
                            char path[256]; snprintf(path, sizeof path, "/tmp/tex_%08X_%04d.ppm", addr, dumps);
                            std::vector<uint8_t> b(px.size() * 4); memcpy(b.data(), px.data(), b.size());
                            void save_ppm_ext(const char*, const std::vector<uint8_t>&, int, int); save_ppm_ext(path, b, w, h);
                        }
                    }
                }
                int nl = game_levels;
                if (want_gen) {
                    glGenerateMipmap(GL_TEXTURE_2D);
                    nl = 1; while ((w >> nl) >= 1 || (h >> nl) >= 1) nl++;
                }
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, nl - 1);
                e.hash = hsh; e.w = w; e.h = h; e.levels = nl; e.gen = want_gen;
            }
            e.checked = g_tex_epoch;
        }
        tex = e.tex;
        levels = e.levels;
    }
    glBindTexture(GL_TEXTURE_2D, tex);
    // game-stored mip chains honour the game's LOD range; generated chains use all levels
    glBindSampler(m, get_sampler(mode0, levels > 1 && !(((mode0 >> 5) & 3) != 0) ? (mode1 & 0xFF) : mode1, levels));
}

// ---------------------------------------------------------------- pixel state
static void apply_state() {
    const uint32_t* bp = g_gx.bp;
    // depth
    uint32_t zm = bp[0x40];
    if (zm & 1) { glEnable(GL_DEPTH_TEST); glDepthFunc(GL_NEVER + ((zm >> 1) & 7)); }
    else glDisable(GL_DEPTH_TEST);
    glDepthMask((zm >> 4) & 1);
    // cull
    int cull = (bp[0x00] >> 14) & 3;
    glFrontFace(GL_CW);    // GX front faces are clockwise as seen on screen
    if (cull == 0) glDisable(GL_CULL_FACE);
    else { glEnable(GL_CULL_FACE); glCullFace(cull == 1 ? GL_BACK : cull == 2 ? GL_FRONT : GL_FRONT_AND_BACK); }
    // blend / logic op
    uint32_t cm = bp[0x41];
    int pixfmt = bp[0x43] & 7;
    bool has_alpha = pixfmt == 1;
    glColorMask((cm >> 3) & 1, (cm >> 3) & 1, (cm >> 3) & 1, has_alpha && ((cm >> 4) & 1));
    static const GLenum sf[8] = {GL_ZERO, GL_ONE, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA};
    static const GLenum df[8] = {GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA};
    if ((cm >> 11) & 1) {
        glEnable(GL_BLEND); glBlendEquation(GL_FUNC_REVERSE_SUBTRACT); glBlendFunc(GL_ONE, GL_ONE);
    } else if (cm & 1) {
        GLenum s = sf[(cm >> 8) & 7], d = df[(cm >> 5) & 7];
        if (!has_alpha) {   // no destination alpha: reads as 1.0
            if (s == GL_DST_ALPHA) s = GL_ONE; else if (s == GL_ONE_MINUS_DST_ALPHA) s = GL_ZERO;
            if (d == GL_DST_ALPHA) d = GL_ONE; else if (d == GL_ONE_MINUS_DST_ALPHA) d = GL_ZERO;
        }
        glEnable(GL_BLEND); glBlendEquation(GL_FUNC_ADD); glBlendFunc(s, d);
    } else glDisable(GL_BLEND);
    if ((cm >> 1) & 1 && !(cm & 1)) {
        static const GLenum lo[16] = {GL_CLEAR, GL_AND, GL_AND_REVERSE, GL_COPY, GL_AND_INVERTED, GL_NOOP, GL_XOR, GL_OR,
                                      GL_NOR, GL_EQUIV, GL_INVERT, GL_OR_REVERSE, GL_COPY_INVERTED, GL_OR_INVERTED, GL_NAND, GL_SET};
        glEnable(GL_COLOR_LOGIC_OP); glLogicOp(lo[(cm >> 12) & 15]);
    } else glDisable(GL_COLOR_LOGIC_OP);
    // scissor
    int xoff = (bp[0x59] & 1023) * 2, yoff = ((bp[0x59] >> 10) & 1023) * 2;
    int x0 = ((bp[0x20] >> 12) & 2047) - xoff, y0 = (bp[0x20] & 2047) - yoff;
    int x1 = ((bp[0x21] >> 12) & 2047) - xoff + 1, y1 = (bp[0x21] & 2047) - yoff + 1;
    x0 = std::max(0, x0); y0 = std::max(0, y0); x1 = std::min(EFB_W, x1); y1 = std::min(EFB_H, y1);
    glEnable(GL_SCISSOR_TEST);
    glScissor(x0 * RS, (EFB_H - y1) * RS, std::max(0, x1 - x0) * RS, std::max(0, y1 - y0) * RS);
}

// ---------------------------------------------------------------- hooks
void gx_xf_write(uint32_t addr, uint32_t val) {
    static long fd = getenv("FRAMEDUMP") ? atol(getenv("FRAMEDUMP")) : -1;
    if ((long)g_frame == fd && addr < 0x0C) fprintf(g_log, "[xf] %03X = %08X (%f)\n", addr, val, u2f(val));
    if (addr < 0x1000) g_gx.xf_mem[addr] = val;
    else if (addr < 0x1100) g_gx.xf_reg[addr - 0x1000] = val;
}
void gx_xf_indexed(uint8_t op, uint32_t arg) {
    static long fd = getenv("FRAMEDUMP") ? atol(getenv("FRAMEDUMP")) : -1;
    if ((long)g_frame == fd) { uint32_t b = (g_gx.cp[0xA0 + 12 + ((op - 0x20) >> 3)] & 0x3FFFFFFF) | 0x80000000u; int nz = 0; for (int k = 0; k < 0x400; k++) nz += R32(b + 4 * k) != 0; fprintf(g_log, "[xfidx] nonzero %d first %08X %08X ", nz, R32(b), R32(b+0x30*56)); }
    if ((long)g_frame == fd) fprintf(g_log, "[xfidx] op %02X arg %08X base %08X stride %08X\n", op, arg, g_gx.cp[0xA0 + 12 + ((op - 0x20) >> 3)], g_gx.cp[0xB0 + 12 + ((op - 0x20) >> 3)]);
    int arr = 12 + ((op - 0x20) >> 3);
    uint32_t base = g_gx.cp[0xA0 + arr], stride = g_gx.cp[0xB0 + arr] & 0xFF;
    uint32_t index = arg >> 16, len = ((arg >> 12) & 0xF) + 1, addr = arg & 0xFFF;
    uint32_t src = (base & 0x3FFFFFFF) | 0x80000000u;
    for (uint32_t i = 0; i < len; i++) gx_xf_write(addr + i, R32(src + index * stride + 4 * i));
}

static void save_ppm(const char* path, const std::vector<uint8_t>& rgba, int w, int h) {
    FILE* f = fopen(path, "wb");
    if (!f) return;
    fprintf(f, "P6\n%d %d\n255\n", w, h);
    for (int y = 0; y < h; y++)
        for (int x = 0; x < w; x++) fwrite(&rgba[((size_t)y * w + x) * 4], 1, 3, f);
    fclose(f);
}

void save_ppm_ext(const char* p, const std::vector<uint8_t>& b, int w, int h) { save_ppm(p, b, w, h); }
static void resize_efb(int scale) {
    RS = scale; PW = EFB_W * RS; PH = EFB_H * RS;
    create_efb();
    // EFB copies made at the old scale are re-created on their next copy
    for (auto& kv : g_copies) kv.second.w = kv.second.h = -1;
    glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
    glViewport(0, 0, PW, PH);
    glClearColor(0, 0, 0, 1); glClearDepth(1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    fprintf(g_log, "[gl] internal resolution now %dx%d, MSAA %dx\n", PW, PH, g_msaa);
}
// EFB -> texture copies in the requested format. The copy texture is sampled directly
// (no decode), so it holds what the TEV would read from that format: single-channel
// formats in all four channels, IA/RA formats as (I,I,I,A), depth formats from the Z buffer.
static GLuint g_copy_prog = 0, g_copy_vao = 0;
static GLint g_cu_mode = -1, g_cu_rect = -1, g_cu_col = -1, g_cu_dep = -1, g_cu_half = -1;
static void copy_convert(GLuint dst_tex, int sx, int sy, int w, int h, int tw, int th, int fmt, bool intensity, bool depth) {
    if (!g_copy_prog) {
        const char* vs = "#version 330 core\nvoid main(){ vec2 p = vec2(gl_VertexID & 1, gl_VertexID >> 1) * 2.0 - 1.0; gl_Position = vec4(p, 0.0, 1.0); }\n";
        const char* fs =
            "#version 330 core\n"
            "uniform sampler2D u_col; uniform sampler2D u_dep; uniform int u_mode; uniform vec4 u_rect; uniform int u_half; out vec4 o;\n"
            "vec4 fetch(vec2 px) { return texture(u_col, px / vec2(textureSize(u_col, 0))); }\n"
            "void main(){\n"
            " vec2 px = vec2(u_rect.x + gl_FragCoord.x * u_rect.z, u_rect.y - gl_FragCoord.y * u_rect.w);\n"
            " int m = u_mode & 15; bool inten = (u_mode & 16) != 0; bool dep = (u_mode & 32) != 0;\n"
            " if (dep) {\n"
            "  float d = texelFetch(u_dep, ivec2(px), 0).r;\n"
            "  float z = floor(clamp(d, 0.0, 1.0) * 16777215.0 + 0.5);\n"
            "  float hi = floor(z / 65536.0), mid = mod(floor(z / 256.0), 256.0), lo = mod(z, 256.0);\n"
            "  vec4 c;\n"
            "  if (m == 9) c = vec4(mid / 255.0);\n"                           // Z8M
            "  else if (m == 10) c = vec4(lo / 255.0);\n"                      // Z8L
            "  else if (m == 3 || m == 11) c = vec4(vec3(hi / 255.0), mid / 255.0);\n"   // Z16 (hi,mid)
            "  else if (m == 12) c = vec4(vec3(mid / 255.0), lo / 255.0);\n"   // Z16L
            "  else if (m == 6) c = vec4(hi / 255.0, mid / 255.0, lo / 255.0, 1.0);\n"   // Z24X8
            "  else c = vec4(hi / 255.0);\n"                                   // Z4 / Z8 (high byte)
            "  o = c; return;\n"
            " }\n"
            " vec4 c = fetch(px);\n"
            " float Y = clamp(dot(c.rgb, vec3(0.257, 0.504, 0.098)) + 16.0 / 255.0, 0.0, 1.0);\n"
            " if (m == 0 || m == 1 || m == 8) o = inten ? vec4(Y) : vec4(c.r);\n"   // I4/I8 or R4/R8
            " else if (m == 2 || m == 3) o = inten ? vec4(vec3(Y), c.a) : vec4(vec3(c.r), c.a);\n"   // IA4/IA8 or RA
            " else if (m == 4) o = vec4(c.rgb, 1.0);\n"                        // RGB565
            " else if (m == 7) o = vec4(c.a);\n"                               // A8
            " else if (m == 9) o = vec4(c.g);\n"                               // G8
            " else if (m == 10) o = vec4(c.b);\n"                              // B8
            " else if (m == 11) o = vec4(vec3(c.r), c.g);\n"                  // RG8
            " else if (m == 12) o = vec4(vec3(c.g), c.b);\n"                  // GB8
            " else o = c;\n"                                                   // RGB5A3 / RGBA8
            "}\n";
        g_copy_prog = glCreateProgram();
        glAttachShader(g_copy_prog, compile(GL_VERTEX_SHADER, vs));
        glAttachShader(g_copy_prog, compile(GL_FRAGMENT_SHADER, fs));
        glLinkProgram(g_copy_prog);
        g_cu_mode = glGetUniformLocation(g_copy_prog, "u_mode");
        g_cu_rect = glGetUniformLocation(g_copy_prog, "u_rect");
        g_cu_col = glGetUniformLocation(g_copy_prog, "u_col");
        g_cu_dep = glGetUniformLocation(g_copy_prog, "u_dep");
        g_cu_half = glGetUniformLocation(g_copy_prog, "u_half");
        glGenVertexArrays(1, &g_copy_vao);
    }
    static GLuint fbo = 0;
    if (!fbo) glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, dst_tex, 0);
    glViewport(0, 0, tw * RS, th * RS);
    glDisable(GL_SCISSOR_TEST); glDisable(GL_BLEND); glDisable(GL_DEPTH_TEST); glDisable(GL_CULL_FACE);
    glDisable(GL_COLOR_LOGIC_OP);
    glColorMask(1, 1, 1, 1);
    glUseProgram(g_copy_prog);
    glActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, g_efb_color); glBindSampler(0, 0);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glActiveTexture(GL_TEXTURE1); glBindTexture(GL_TEXTURE_2D, g_efb_dtex); glBindSampler(1, 0);
    glUniform1i(g_cu_col, 0); glUniform1i(g_cu_dep, 1);
    glUniform1i(g_cu_mode, fmt | (intensity ? 16 : 0) | (depth ? 32 : 0));
    glUniform1i(g_cu_half, 0);
    glUniform4f(g_cu_rect, (float)(sx * RS), (float)((EFB_H - sy) * RS), (float)w / tw, (float)h / th);
    glBindVertexArray(g_copy_vao);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    glActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, g_efb_color);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
    glViewport(0, 0, PW, PH);
}

static void efb_copy_impl(uint32_t val);
static void efb_copy(uint32_t val) { gx_flush(); ScopeNs _sc(g_ns_copy); efb_copy_impl(val); }
static void efb_copy_impl(uint32_t val) {
    const uint32_t* bp = g_gx.bp;
    int sx = bp[0x49] & 1023, sy = (bp[0x49] >> 10) & 1023;
    int w = (bp[0x4A] & 1023) + 1, h = ((bp[0x4A] >> 10) & 1023) + 1;
    uint32_t dst = ((bp[0x4B] & 0xFFFFFF) << 5) | 0x80000000u;
    bool to_xfb = (val >> 14) & 1, clear = (val >> 11) & 1, half = (val >> 9) & 1;
    g_gx.stats.copies++;
    GLuint src_fbo = efb_read_fbo();
    if (to_xfb) {
        // finished frame
        {
            static bool flog = getenv("FRAMELOG") != nullptr;
            static uint64_t lp = 0, lc = 0;
            if (flog && g_frame % 50 == 0) fprintf(g_log, "[frame] %llu prims %llu copies %llu xfb %08X %dx%d src %d,%d\n",
                (unsigned long long)g_frame, (unsigned long long)(g_gx.stats.prims - lp), (unsigned long long)(g_gx.stats.copies - lc), dst, w, h, sx, sy);
            lp = g_gx.stats.prims; lc = g_gx.stats.copies;
        }
        g_frame++;
        g_tex_epoch++;
        {
            static uint64_t t0 = now_ns_r(), f0 = 0;
#ifdef _WIN32
            static bool perf = g_cfg.show_perf;
#else
            static bool perf = getenv("PERF") != nullptr;
#endif
            extern uint64_t g_vi_count, g_ax_frames;
            static uint64_t vi0 = 0, ax0 = 0;
            uint64_t t = now_ns_r();
            static uint64_t pt0 = t, pf0 = 0;
            extern std::atomic<uint64_t> g_idle_ns;
            static uint64_t pidle0 = 0;
            if (t - pt0 > 500000000ull) {   // on-screen counter, twice a second
                uint64_t idle = g_idle_ns.load();
                double load = 100.0 * (1.0 - (double)(idle - pidle0) / (double)(t - pt0));
                snprintf(g_perf_text, sizeof g_perf_text, "%.0f fps  %dx  CPU %.0f%%", (g_frame - pf0) / ((t - pt0) / 1e9), RS, load < 0 ? 0 : load);
                pt0 = t; pf0 = g_frame; pidle0 = idle;
            }
            if (perf && t - t0 > 5000000000ull && g_perf_text[0]) {
                fprintf(g_log, "[perf] %s\n", g_perf_text);
                double sec = (t - t0) / 1e9;
                { extern uint64_t g_ai_skipped; AudioStats a = audio_ring_stats();
                  static uint64_t u0 = 0, d0 = 0, k0 = 0;
                  fprintf(g_log, "[audio] underruns %llu, dropped %llu frames, AI periods skipped %llu, buffered %d ms\n",
                          (unsigned long long)(a.underruns - u0), (unsigned long long)(a.dropped_frames - d0), (unsigned long long)(g_ai_skipped - k0), a.buffered_ms);
                  u0 = a.underruns; d0 = a.dropped_frames; k0 = g_ai_skipped; }
                fprintf(g_log, "[perf] %.1f fps | VI %.1f/s (want 59.9) | audio %.0f/s (want 333) | GPU draw %.0f%%, copies %.0f%% of time | %.0f draws -> %.0f GL calls per frame\n",
                        (g_frame - f0) / sec, (g_vi_count - vi0) / sec, (g_ax_frames - ax0) / sec, g_ns_draw / 1e7 / sec, g_ns_copy / 1e7 / sec,
                        (double)g_draw_calls_in / std::max<uint64_t>(1, g_frame - f0), (double)g_batches / std::max<uint64_t>(1, g_frame - f0));
                g_draw_calls_in = g_batches = 0;
                fflush(g_log);
                t0 = t; f0 = g_frame; g_ns_draw = g_ns_copy = 0; vi0 = g_vi_count; ax0 = g_ax_frames;
            }
        }
        if (g_gxdbg && g_frame % 60 == 0) fprintf(g_log, "[frame %llu] draws %d copy %dx%d%s\n", (unsigned long long)g_frame, g_frame_draws, w, h, g_frame_tex.c_str());
        if (g_gxdbg && g_frame % 60 == 0) fprintf(g_log, "[frame %llu] clearZ %06X zrange %f farz %f copyclear %d\n", (unsigned long long)g_frame, bp[0x51] & 0xFFFFFF, xff(0x101C), xff(0x101F), (val >> 11) & 1);
        g_frame_draws = 0; g_frame_tex.clear();
        g_xfb_w = w; g_xfb_h = h;
        static GLuint xfbo = 0;
        static int tw = 0, th = 0;
        if (!xfbo) glGenFramebuffers(1, &xfbo);
        glBindTexture(GL_TEXTURE_2D, g_xfb_tex);
        if (tw != w * RS || th != h * RS) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w * RS, h * RS, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            tw = w * RS; th = h * RS;
        }
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, xfbo);
        glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, g_xfb_tex, 0);
        glBindFramebuffer(GL_READ_FRAMEBUFFER, src_fbo);
        glDisable(GL_SCISSOR_TEST);
        // EFB rows -> top-down texture rows
        glBlitFramebuffer(sx * RS, (EFB_H - sy) * RS, (sx + w) * RS, (EFB_H - sy - h) * RS, 0, 0, w * RS, h * RS, GL_COLOR_BUFFER_BIT, GL_NEAREST);
        static int every = getenv("SHOT_EVERY") ? atoi(getenv("SHOT_EVERY")) : 0;
        static const char* dir = getenv("SHOT_DIR") ? getenv("SHOT_DIR") : ".";
        if (every > 0 && g_frame % every == 0) {
            std::vector<uint8_t> px((size_t)w * h * 4 * RS * RS);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, xfbo);
            glReadPixels(0, 0, w * RS, h * RS, GL_RGBA, GL_UNSIGNED_BYTE, px.data());
            char path[512]; snprintf(path, sizeof path, "%s/frame_%06llu.ppm", dir, (unsigned long long)g_frame);
            save_ppm(path, px, w * RS, h * RS);
        }
        gl_platform_present(g_xfb_tex, w * RS, h * RS);
        if (g_cfg.resolution_scale != RS || std::max(1, g_cfg.msaa) != g_cfg_msaa_seen) { g_cfg_msaa_seen = g_cfg.msaa; resize_efb(g_cfg.resolution_scale); }
        glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
    } else {
        int tw = half ? w / 2 : w, th = half ? h / 2 : h;
        {
            static bool flog = getenv("FRAMELOG") != nullptr;
            if (flog && g_frame % 50 == 0) fprintf(g_log, "[copy] f%llu dst %08X src %d,%d %dx%d -> %dx%d half %d fmt %X clear %d\n",
                (unsigned long long)g_frame, dst, sx, sy, w, h, tw, th, half, (val >> 4) & 15 | ((val >> 3) & 1) << 4, clear);
        }
        CopyEntry& e = g_copies[dst];
        if (!e.tex) glGenTextures(1, &e.tex);
        glBindTexture(GL_TEXTURE_2D, e.tex);
        if (e.w != tw || e.h != th) glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, tw * RS, th * RS, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        e.w = tw; e.h = th; e.frame = g_frame; e.gen++;
        int cfmt = (int)((val >> 4) & 7) + (int)((val >> 3) & 1) * 8;   // bits 3-6, low bit is the msb
        bool inten = (val >> 15) & 1;
        bool zcopy = (bp[0x43] & 7) == 3;     // pixel format Z24: the copy reads the depth buffer
        if (g_gxdbg || (long)g_frame == g_fdump) fprintf(g_log, "[copy] frame %llu dst %08X src %d,%d %dx%d -> %dx%d fmt %d%s%s\n", (unsigned long long)g_frame,
                                                         dst, sx, sy, w, h, tw, th, cfmt, inten ? " intensity" : "", zcopy ? " DEPTH" : "");
        if (!zcopy && (cfmt == 6 || cfmt == 5)) {
            // plain color: blit EFB region (flipping to top-down texture orientation)
            static GLuint tmpfbo = 0;
            if (!tmpfbo) glGenFramebuffers(1, &tmpfbo);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, tmpfbo);
            glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, e.tex, 0);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, src_fbo);
            glDisable(GL_SCISSOR_TEST);
            glBlitFramebuffer(sx * RS, (EFB_H - sy) * RS, (sx + w) * RS, (EFB_H - sy - h) * RS, 0, 0, tw * RS, th * RS, GL_COLOR_BUFFER_BIT, GL_LINEAR);
            glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
        } else {
            copy_convert(e.tex, sx, sy, w, h, tw, th, cfmt, inten, zcopy);
        }
        // keep the RAM copy's texture cache entry from shadowing this copy
    }
    if (clear) {
        uint32_t ar = bp[0x4F], gb = bp[0x50], z = bp[0x51] & 0xFFFFFF;
        uint32_t cm = bp[0x41], zm = bp[0x40];
        glEnable(GL_SCISSOR_TEST);
        glScissor(sx * RS, (EFB_H - sy - h) * RS, w * RS, h * RS);
        glColorMask((cm >> 3) & 1, (cm >> 3) & 1, (cm >> 3) & 1, (cm >> 4) & 1);
        glDepthMask((zm >> 4) & 1);
        glClearColor((ar & 255) / 255.f, ((gb >> 8) & 255) / 255.f, (gb & 255) / 255.f, ((ar >> 8) & 255) / 255.f);
        glClearDepth(z / 16777215.0);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
}

void gx_bp_hook(uint32_t reg, uint32_t val) {
    if (reg >= 0xE0 && reg <= 0xE7) {
        int i = (reg - 0xE0) >> 1;
        bool konst = (val >> 23) & 1;
        float* d = konst ? g_konst[i] : g_tevreg[i];
        auto s11 = [](uint32_t v) { int x = v & 0x7FF; if (x & 0x400) x -= 0x800; return x / 255.f; };
        if (!(reg & 1)) { d[0] = s11(val); d[3] = s11(val >> 12); }
        else { d[2] = s11(val); d[1] = s11(val >> 12); }
        return;
    }
    if (reg == 0x65) {   // load TLUT
        uint32_t src = ((g_gx.bp[0x64] & 0xFFFFFF) << 5) | 0x80000000u;
        uint32_t tm = (val & 1023) << 9, bytes = ((val >> 10) & 0x7FF) << 5;
        for (uint32_t i = 0; i < bytes; i++) g_tmem[(tm + i) & 0xFFFFF] = R8(src + i);
        g_tex_epoch++;
        return;
    }
    if (reg == 0x52) {
        if (ensure_gl()) efb_copy(val);
        else g_gx.stats.copies++;
    }
}

// Draws are batched: transformed triangles accumulate in g_batch while the pixel
// pipeline state (BP registers) is unchanged, and go to GL as one draw call.
// Vertex transform runs on the CPU, so XF/CP changes never break a batch.
static std::vector<Vtx> g_batch;
static bool g_batch_open = false;

void gx_flush() {
    if (g_batch.empty()) { g_batch_open = false; return; }
    gl_platform_make_current();
    glBindVertexArray(g_vao);
    glBindBuffer(GL_ARRAY_BUFFER, g_vbo);
    glBufferData(GL_ARRAY_BUFFER, g_batch.size() * sizeof(Vtx), g_batch.data(), GL_STREAM_DRAW);
    glDrawArrays(GL_TRIANGLES, 0, (GLsizei)g_batch.size());
    g_batch.clear();
    g_batch_open = false;
    g_batches++;
}
// called by the FIFO before a BP register changes value
void gx_state_changing() { if (g_batch_open) gx_flush(); }

static void setup_draw_state(uint8_t prim, uint32_t count, const std::vector<Vtx>& verts) {
    glBindFramebuffer(GL_FRAMEBUFFER, g_fbo);
    glViewport(0, 0, PW, PH);
    Prog& pr = get_prog();
    glUseProgram(pr.p);
    float regs[16], kon[16];
    for (int i = 0; i < 4; i++) for (int k = 0; k < 4; k++) { regs[i * 4 + k] = g_tevreg[i][k]; kon[i * 4 + k] = g_konst[i][k]; }
    glUniform4fv(pr.u_reg, 4, regs);
    glUniform4fv(pr.u_konst, 4, kon);
    glUniform2f(pr.u_aref, (float)(g_gx.bp[0xF3] & 255), (float)((g_gx.bp[0xF3] >> 8) & 255));
    // textures used by enabled stages
    int nstages = ((g_gx.bp[0x00] >> 10) & 15) + 1;
    uint32_t used = 0;
    for (int s = 0; s < nstages; s++) {
        uint32_t order = g_gx.bp[0x28 + s / 2] >> ((s & 1) * 12);
        if ((order >> 6) & 1) used |= 1u << (order & 7);
    }
    for (int m = 0; m < 8; m++) if (used & (1u << m)) bind_texmap(m);
    static uint32_t dbg_addr = getenv("TEXDUMP") ? (uint32_t)strtoul(getenv("TEXDUMP"), nullptr, 16) : 0;
    if (dbg_addr && (used & 1) && ((((g_gx.bp[0x94] & 0xFFFFFF) << 5) | 0x80000000u) == dbg_addr)) {
        static int n = 0;
        if (n++ == 300) {
            fprintf(g_log, "[gxdbg] prim %02X count %u genmode %06X zmode %06X cmode0 %06X cmode1 %06X pectl %06X alpha %06X\n",
                    prim, count, g_gx.bp[0], g_gx.bp[0x40], g_gx.bp[0x41], g_gx.bp[0x42], g_gx.bp[0x43], g_gx.bp[0xF3]);
            for (uint32_t i = 0; i < verts.size() && i < 6; i++)
                fprintf(g_log, "  v%u pos %.3f %.3f %.3f %.3f c0 %.2f %.2f %.2f %.2f tc0 %.3f %.3f %.3f\n", i, verts[i].pos[0], verts[i].pos[1], verts[i].pos[2], verts[i].pos[3],
                        verts[i].c0[0], verts[i].c0[1], verts[i].c0[2], verts[i].c0[3], verts[i].tc[0][0], verts[i].tc[0][1], verts[i].tc[0][2]);
            fprintf(g_log, "  regs %.2f %.2f %.2f %.2f | konst0 %.2f %.2f %.2f %.2f\n%s\n", g_tevreg[0][0], g_tevreg[0][1], g_tevreg[0][2], g_tevreg[0][3],
                    g_konst[0][0], g_konst[0][1], g_konst[0][2], g_konst[0][3], tev_shader_source(g_gx.bp).c_str());
        }
    }
    apply_state();
}

void gx_draw(uint8_t prim, int vat, uint32_t count, const uint8_t* data, int vsize) {
    ScopeNs _sc(g_ns_draw);
    if (!ensure_gl() || count == 0) return;
    g_frame_draws++;
    g_draw_calls_in++;
    static std::vector<Vtx> verts;
    verts.resize(count);
    setup_vertex_pipeline(vat);
    const uint8_t* p = data;
    for (uint32_t i = 0; i < count; i++) {
        RawVtx r;
        const uint8_t* start = p;
        decode_vertex(p, r);
        p = start + vsize;
        transform(r, verts[i]);
    }
    bool tris = prim == 0x80 || prim == 0x90 || prim == 0x98 || prim == 0xA0;
    if (!tris) {
        // lines / points: drawn on their own
        gx_flush();
        setup_draw_state(prim, count, verts);
        GLenum mode = prim == 0xA8 ? GL_LINES : prim == 0xB0 ? GL_LINE_STRIP : GL_POINTS;
        glBindVertexArray(g_vao);
        glBindBuffer(GL_ARRAY_BUFFER, g_vbo);
        glBufferData(GL_ARRAY_BUFFER, verts.size() * sizeof(Vtx), verts.data(), GL_STREAM_DRAW);
        glDrawArrays(mode, 0, (GLsizei)verts.size());
        return;
    }
    if (!g_batch_open) {
        setup_draw_state(prim, count, verts);
        g_batch_open = true;
    }
    static long fdump = getenv("FRAMEDUMP") ? atol(getenv("FRAMEDUMP")) : -1;
    if ((long)g_frame == fdump) {
        int ns = ((g_gx.bp[0] >> 10) & 15) + 1;
        fprintf(g_log, "[scis] %06X %06X off %06X ", g_gx.bp[0x20], g_gx.bp[0x21], g_gx.bp[0x59]);
        fprintf(g_log, "[draw] prim %02X n %u tex0 %08X fmt %d | gen %06X z %06X cm0 %06X cm1 %06X pe %06X ac %06X | ",
                prim, count, (((g_gx.bp[0x94] & 0xFFFFFF) << 5) | 0x80000000u), (g_gx.bp[0x88] >> 20) & 15,
                g_gx.bp[0], g_gx.bp[0x40], g_gx.bp[0x41], g_gx.bp[0x42], g_gx.bp[0x43], g_gx.bp[0xF3]);
        { const uint8_t* q = data; RawVtx rv; decode_vertex(q, rv);
          fprintf(g_log, "cp30 %08X xf18 %08X pos %.2f %.2f %.2f pn %d base %08X stride %u mtx %.2f %.2f %.2f %.2f / %.2f %.2f %.2f %.2f | ", g_gx.cp[0x30], g_gx.xf_reg[0x18], rv.pos[0], rv.pos[1], rv.pos[2], rv.pnidx, g_gx.cp[0xA0], g_gx.cp[0xB0],
                  xff(rv.pnidx*4), xff(rv.pnidx*4+1), xff(rv.pnidx*4+2), xff(rv.pnidx*4+3), xff(rv.pnidx*4+4), xff(rv.pnidx*4+5), xff(rv.pnidx*4+6), xff(rv.pnidx*4+7)); }
        for (int st = 0; st < ns; st++) fprintf(g_log, "s%d c%06X a%06X o%06X ", st, g_gx.bp[0xC0 + 2 * st], g_gx.bp[0xC1 + 2 * st], g_gx.bp[0x28 + st / 2]);
        fprintf(g_log, "| vcd %08X %08X vatA %08X vsz %d raw:", g_gx.cp[0x50], g_gx.cp[0x60], g_gx.cp[0x70 + vat], vsize);
        for (int b = 0; b < vsize && b < 32; b++) fprintf(g_log, "%02X", data[b]);
        fprintf(g_log, " ncol %u chan %08X %08X mat %08X amb %08X ", g_gx.xf_reg[9], g_gx.xf_reg[0x0E], g_gx.xf_reg[0x10], g_gx.xf_reg[0x0C], g_gx.xf_reg[0x0A]);
        fprintf(g_log, "| reg0 %.2f %.2f %.2f %.2f k0 %.2f %.2f %.2f %.2f c0 %.2f %.2f %.2f %.2f x %.3f y %.3f z %.3f w %.3f vp %.1f %.1f %.1f %.1f proj %.3f %.3f %.3f %.3f %.3f %.3f t%u\n", g_tevreg[0][0], g_tevreg[0][1], g_tevreg[0][2], g_tevreg[0][3],
                g_konst[0][0], g_konst[0][1], g_konst[0][2], g_konst[0][3], verts[0].c0[0], verts[0].c0[1], verts[0].c0[2], verts[0].c0[3], verts[0].pos[0], verts[0].pos[1], verts[0].pos[2], verts[0].pos[3], xff(0x101A), xff(0x101B), xff(0x101D), xff(0x101E), xff(0x1020), xff(0x1021), xff(0x1022), xff(0x1023), xff(0x1024), xff(0x1025), g_gx.xf_reg[0x26]);
    }
    // append as a triangle list (winding preserved)
    std::vector<Vtx>& b = g_batch;
    switch (prim) {
        case 0x80:   // quads
            for (uint32_t i = 0; i + 3 < count; i += 4) {
                b.push_back(verts[i]); b.push_back(verts[i + 1]); b.push_back(verts[i + 2]);
                b.push_back(verts[i]); b.push_back(verts[i + 2]); b.push_back(verts[i + 3]);
            }
            break;
        case 0x90: b.insert(b.end(), verts.begin(), verts.begin() + count / 3 * 3); break;
        case 0x98:   // strip
            for (uint32_t i = 0; i + 2 < count; i++) {
                if (i & 1) { b.push_back(verts[i + 1]); b.push_back(verts[i]); }
                else { b.push_back(verts[i]); b.push_back(verts[i + 1]); }
                b.push_back(verts[i + 2]);
            }
            break;
        case 0xA0:   // fan
            for (uint32_t i = 1; i + 1 < count; i++) { b.push_back(verts[0]); b.push_back(verts[i]); b.push_back(verts[i + 1]); }
            break;
    }
    static bool nobatch = getenv("GX_NOBATCH") != nullptr;
    if (nobatch) gx_flush();
}
