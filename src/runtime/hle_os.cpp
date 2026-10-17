// High-level replacements for Revolution SDK OS functions.
#include "hle.h"
#include <cstdio>
#include <string>



std::string guest_str(uint32_t a) {
    std::string s;
    if (!a) return "(null)";
    for (int i = 0; i < 4096; i++) { char ch = (char)R8(a + i); if (!ch) break; s += ch; }
    return s;
}

// printf-style formatting using PPC EABI register arguments.
std::string guest_format(Ctx* c, uint32_t fmt, int first_gpr) {
    std::string f = guest_str(fmt), out;
    int gi = first_gpr, fi = 1;
    auto next_int = [&]() -> uint32_t { return gi <= 10 ? c->r[gi++] : 0; };
    for (size_t i = 0; i < f.size(); i++) {
        if (f[i] != '%') { out += f[i]; continue; }
        size_t j = i + 1;
        std::string spec = "%";
        while (j < f.size() && strchr("-+ #0123456789.*hlLzjt", f[j])) { spec += f[j]; j++; }
        if (j >= f.size()) break;
        char conv = f[j];
        char buf[512];
        // strip length modifiers for host printf
        std::string base;
        for (char ch : spec) if (!strchr("hlLzjt", ch)) base += ch;
        bool ll = spec.find("ll") != std::string::npos;
        switch (conv) {
            case 'd': case 'i': {
                if (ll) { if (gi & 1) gi++; uint64_t hi = next_int(), lo = next_int(); snprintf(buf, sizeof buf, (base + "lld").c_str(), (long long)((hi << 32) | lo)); }
                else snprintf(buf, sizeof buf, (base + "d").c_str(), (int32_t)next_int());
                out += buf; break;
            }
            case 'u': case 'x': case 'X': case 'o': case 'c': {
                if (ll) { if (gi & 1) gi++; uint64_t hi = next_int(), lo = next_int(); snprintf(buf, sizeof buf, (base + "ll" + conv).c_str(), (unsigned long long)((hi << 32) | lo)); }
                else snprintf(buf, sizeof buf, (base + conv).c_str(), next_int());
                out += buf; break;
            }
            case 'p': snprintf(buf, sizeof buf, "0x%08X", next_int()); out += buf; break;
            case 's': { std::string s = guest_str(next_int()); snprintf(buf, sizeof buf, (base + "s").c_str(), s.c_str()); out += buf; break; }
            case 'f': case 'g': case 'e': case 'F': case 'G': case 'E': {
                double v = fi <= 8 ? c->f[fi++] : 0.0;
                snprintf(buf, sizeof buf, (base + conv).c_str(), v); out += buf; break;
            }
            case '%': out += '%'; break;
            default: out += spec + conv; break;
        }
        i = j;
    }
    return out;
}

void hle_OSReport(Ctx* c) {
    std::string s = guest_format(c, c->r[3], 4);
    fprintf(g_log, "[OSReport] %s", s.c_str());
    if (s.empty() || s.back() != '\n') fputc('\n', g_log);
}

void hle_OSPanic(Ctx* c) {
    std::string s = guest_format(c, c->r[5], 6);
    fprintf(g_log, "[OSPanic] %s:%d: %s\n", guest_str(c->r[3]).c_str(), (int)c->r[4], s.c_str());
    fflush(g_log);
    exit(4);
}
