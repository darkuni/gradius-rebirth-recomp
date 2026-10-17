// IPL ROM reads (__OSReadROM over EXI). The Wii has no IPL, only the system fonts at their
// GameCube ROM offsets; serve those from embedded free replacements (Dolphin's Droid Sans fonts).
#include "hle.h"
#include "ipl_fonts.h"
#include <cstring>

static const uint32_t kSjisOff = 0x1AFF00, kAnsiOff = 0x1FCF00;

static uint8_t rom_byte(uint32_t o) {
    if (o >= kSjisOff && o < kSjisOff + sizeof k_font_japanese) return k_font_japanese[o - kSjisOff];
    if (o >= kAnsiOff && o < kAnsiOff + sizeof k_font_western) return k_font_western[o - kAnsiOff];
    return 0;
}

// BOOL __OSReadROM(void* buf, s32 length, s32 offset)
void hle___OSReadROM(Ctx* c) {
    uint32_t buf = c->r[3], len = c->r[4], off = c->r[5];
    fprintf(g_log, "[rom] read %X bytes at %06X -> %08X\n", len, off, buf);
    for (uint32_t i = 0; i < len; i++) W8(buf + i, rom_byte(off + i));
    c->r[3] = 1;
}
