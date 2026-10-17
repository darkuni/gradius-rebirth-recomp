#pragma once
#include <cstdint>

struct GXStats {
    uint64_t fifo_bytes = 0, prims = 0, verts = 0, draw_done = 0, tokens = 0, dl_calls = 0, bad = 0, copies = 0;
};
struct GXState {
    uint32_t cp[256] = {};
    uint32_t bp[256] = {};
    uint32_t bp_mask = 0xFFFFFF;
    uint32_t xf_mem[0x1000] = {};    // 0x0000-0x0FFF: matrices, lights
    uint32_t xf_reg[0x100] = {};     // 0x1000-0x10FF
    GXStats stats;
};
extern GXState g_gx;

int gx_vertex_size(int vat);
// renderer hooks
void gx_bp_hook(uint32_t reg, uint32_t val);
void gx_xf_write(uint32_t addr, uint32_t val);
void gx_xf_indexed(uint8_t op, uint32_t arg);
void gx_draw(uint8_t prim, int vat, uint32_t count, const uint8_t* data, int vsize);
