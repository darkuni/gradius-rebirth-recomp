// WiiWare title: TMD + decrypted contents in <game>/content/<index>.app.
// Replaces the disc (no /dev/di data); /dev/es serves content reads from here.
#include "hle.h"
#include "title.h"
#include <vector>
#include <string>

Title g_title;

static std::vector<uint8_t> slurp(const std::string& p) {
    std::vector<uint8_t> v;
    FILE* f = fopen(p.c_str(), "rb");
    if (!f) return v;
    fseek(f, 0, SEEK_END); v.resize(ftell(f)); fseek(f, 0, SEEK_SET);
    if (fread(v.data(), 1, v.size(), f) != v.size()) v.clear();
    fclose(f);
    return v;
}
static uint16_t be16(const uint8_t* p) { return (uint16_t)(p[0] << 8 | p[1]); }
static uint32_t be32(const uint8_t* p) { return (uint32_t)be16(p) << 16 | be16(p + 2); }
static uint64_t be64(const uint8_t* p) { return (uint64_t)be32(p) << 32 | be32(p + 4); }

bool title_init(const char* root) {
    g_title.root = root;
    g_title.tmd = slurp(g_title.root + "/tmd.bin");
    g_title.ticket = slurp(g_title.root + "/ticket.bin");
    auto& t = g_title.tmd;
    if (t.size() < 0x1E4) { fprintf(g_log, "[title] no tmd.bin in %s\n", root); return false; }
    g_title.title_id = be64(&t[0x18C]);
    g_title.ios_id = be64(&t[0x184]);
    g_title.group_id = be16(&t[0x198]);
    g_title.title_version = be16(&t[0x1DC]);
    g_title.boot_index = be16(&t[0x1E0]);
    unsigned n = be16(&t[0x1DE]);
    for (unsigned i = 0; i < n && 0x1E4 + 36 * (i + 1) <= t.size(); i++) {
        const uint8_t* e = &t[0x1E4 + 36 * i];
        TitleContent c;
        c.id = be32(e); c.index = be16(e + 4); c.type = be16(e + 6); c.size = be64(e + 8);
        char nm[32]; snprintf(nm, sizeof nm, "/content/%08x.app", c.index);
        c.path = g_title.root + nm;
        g_title.contents.push_back(c);
    }
    fprintf(g_log, "[title] %016llX ios %llu, %zu contents, boot index %u\n",
            (unsigned long long)g_title.title_id, (unsigned long long)(g_title.ios_id & 0xFFFFFFFF),
            g_title.contents.size(), g_title.boot_index);
    return true;
}

const TitleContent* title_content(uint32_t index) {
    for (auto& c : g_title.contents) if (c.index == index) return &c;
    return nullptr;
}

// TMD view (Dolphin TMDReader::GetRawView): header 0x180..0x1D8, title_version, num_contents,
// then 16 bytes per content (id, index, type, size - no hash).
std::vector<uint8_t> title_tmd_view() {
    auto& t = g_title.tmd;
    std::vector<uint8_t> v(t.begin() + 0x180, t.begin() + 0x1D8);
    v.insert(v.end(), t.begin() + 0x1DC, t.begin() + 0x1DE);
    v.insert(v.end(), t.begin() + 0x1DE, t.begin() + 0x1E0);
    for (size_t i = 0; i < g_title.contents.size(); i++)
        v.insert(v.end(), t.begin() + 0x1E4 + 36 * i, t.begin() + 0x1E4 + 36 * i + 16);
    return v;
}

// Ticket view (Dolphin TicketReader::GetRawTicketView): 4-byte version + ticket bytes
// 0x1D0 (ticket_id) .. 0x222 (end of limits), 0xD8 bytes total.
std::vector<uint8_t> title_ticket_view() {
    std::vector<uint8_t> v(0xD8, 0);
    auto& k = g_title.ticket;
    if (k.size() >= 0x2A4) {
        v[0] = k[0x1BC];   // ticket version
        std::copy(k.begin() + 0x1D0, k.begin() + 0x1D0 + 0xD4, v.begin() + 4);
    }
    return v;
}
