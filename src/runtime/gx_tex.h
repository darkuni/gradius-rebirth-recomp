#pragma once
#include <cstdint>
#include <vector>

extern uint8_t g_tmem[0x100000];
int tex_block_w(int fmt);
int tex_block_h(int fmt);
uint32_t tex_size_bytes(int fmt, int w, int h);
void tex_decode(const uint8_t* src, int fmt, int w, int h, uint32_t tlut_addr, int tlut_fmt, std::vector<uint32_t>& out);
