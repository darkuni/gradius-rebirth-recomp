// First-run game setup: builds the "game" folder from the player's own WAD (WiiWare, plus an
// optional add-on content WAD) or disc image (.iso / .ciso), so no extra tools are needed.
// Same output as tools/prepare_wad.py and tools/prepare_disc.py:
//   WAD:  tmd.bin, ticket.bin, content/<index>.app (decrypted), main.dol (content 1, LZ11-decompressed
//         when compressed), dlc/{tmd.bin,ticket.bin,content/*.app} for an add-on title (00010005)
//   disc: sys/{ticket.bin,tmd.bin,boot.bin,bi2.bin,main.dol,fst.bin} and files/ (game partition)
#include "game_setup.h"
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <unordered_map>
#include <memory>

namespace fs = std::filesystem;

// ---------------------------------------------------------------- AES-128 (decrypt, CBC)
namespace {
uint8_t g_sbox[256], g_inv[256];
void aes_tables() {
    static bool done = false;
    if (done) return;
    done = true;
    uint8_t p = 1, q = 1;   // p walks the multiplicative group, q its inverse
    do {
        p = p ^ (uint8_t)(p << 1) ^ (p & 0x80 ? 0x1B : 0);
        q ^= q << 1; q ^= q << 2; q ^= q << 4; if (q & 0x80) q ^= 0x09;
        uint8_t x = q ^ (uint8_t)((q << 1) | (q >> 7)) ^ (uint8_t)((q << 2) | (q >> 6)) ^
                    (uint8_t)((q << 3) | (q >> 5)) ^ (uint8_t)((q << 4) | (q >> 4));
        g_sbox[p] = x ^ 0x63;
    } while (p != 1);
    g_sbox[0] = 0x63;
    for (int i = 0; i < 256; i++) g_inv[g_sbox[i]] = (uint8_t)i;
}
inline uint8_t xt(uint8_t a) { return (uint8_t)((a << 1) ^ (a & 0x80 ? 0x1B : 0)); }
inline uint8_t mul(uint8_t a, uint8_t b) { uint8_t r = 0; while (b) { if (b & 1) r ^= a; a = xt(a); b >>= 1; } return r; }

struct Aes {
    uint8_t rk[176];
    explicit Aes(const uint8_t key[16]) {
        aes_tables();
        memcpy(rk, key, 16);
        uint8_t rc = 1;
        for (int i = 16; i < 176; i += 4) {
            uint8_t t[4] = {rk[i - 4], rk[i - 3], rk[i - 2], rk[i - 1]};
            if (i % 16 == 0) {
                uint8_t u = t[0];
                t[0] = g_sbox[t[1]] ^ rc; t[1] = g_sbox[t[2]]; t[2] = g_sbox[t[3]]; t[3] = g_sbox[u];
                rc = xt(rc);
            }
            for (int k = 0; k < 4; k++) rk[i + k] = rk[i - 16 + k] ^ t[k];
        }
    }
    void decrypt_block(uint8_t s[16]) const {
        for (int i = 0; i < 16; i++) s[i] ^= rk[160 + i];
        for (int r = 9; r >= 0; r--) {
            uint8_t t[16];
            for (int c = 0; c < 4; c++)        // inverse shift rows + inverse sub bytes
                for (int row = 0; row < 4; row++) t[c * 4 + row] = g_inv[s[((c - row + 4) % 4) * 4 + row]];
            for (int i = 0; i < 16; i++) t[i] ^= rk[r * 16 + i];
            if (r == 0) { memcpy(s, t, 16); break; }
            for (int c = 0; c < 4; c++) {      // inverse mix columns
                uint8_t* a = t + c * 4;
                s[c * 4 + 0] = mul(a[0], 14) ^ mul(a[1], 11) ^ mul(a[2], 13) ^ mul(a[3], 9);
                s[c * 4 + 1] = mul(a[0], 9) ^ mul(a[1], 14) ^ mul(a[2], 11) ^ mul(a[3], 13);
                s[c * 4 + 2] = mul(a[0], 13) ^ mul(a[1], 9) ^ mul(a[2], 14) ^ mul(a[3], 11);
                s[c * 4 + 3] = mul(a[0], 11) ^ mul(a[1], 13) ^ mul(a[2], 9) ^ mul(a[3], 14);
            }
        }
    }
    void cbc_decrypt(uint8_t* d, size_t n, const uint8_t iv_in[16]) const {
        uint8_t iv[16], prev[16];
        memcpy(iv, iv_in, 16);
        for (size_t o = 0; o + 16 <= n; o += 16) {
            memcpy(prev, d + o, 16);
            decrypt_block(d + o);
            for (int i = 0; i < 16; i++) d[o + i] ^= iv[i];
            memcpy(iv, prev, 16);
        }
    }
};
// The mul()-based inverse mix columns is slow for big discs; a table version for the hot path.
uint8_t g_m9[256], g_m11[256], g_m13[256], g_m14[256];
struct FastAes : Aes {
    explicit FastAes(const uint8_t key[16]) : Aes(key) {
        static bool done = false;
        if (!done) { done = true; for (int i = 0; i < 256; i++) { g_m9[i] = mul(i, 9); g_m11[i] = mul(i, 11); g_m13[i] = mul(i, 13); g_m14[i] = mul(i, 14); } }
    }
    void decrypt_block(uint8_t s[16]) const {
        for (int i = 0; i < 16; i++) s[i] ^= rk[160 + i];
        for (int r = 9; r >= 0; r--) {
            uint8_t t[16];
            for (int c = 0; c < 4; c++)
                for (int row = 0; row < 4; row++) t[c * 4 + row] = g_inv[s[((c - row + 4) % 4) * 4 + row]];
            for (int i = 0; i < 16; i++) t[i] ^= rk[r * 16 + i];
            if (r == 0) { memcpy(s, t, 16); break; }
            for (int c = 0; c < 4; c++) {
                const uint8_t* a = t + c * 4;
                s[c * 4 + 0] = g_m14[a[0]] ^ g_m11[a[1]] ^ g_m13[a[2]] ^ g_m9[a[3]];
                s[c * 4 + 1] = g_m9[a[0]] ^ g_m14[a[1]] ^ g_m11[a[2]] ^ g_m13[a[3]];
                s[c * 4 + 2] = g_m13[a[0]] ^ g_m9[a[1]] ^ g_m14[a[2]] ^ g_m11[a[3]];
                s[c * 4 + 3] = g_m11[a[0]] ^ g_m13[a[1]] ^ g_m9[a[2]] ^ g_m14[a[3]];
            }
        }
    }
    void cbc_decrypt(uint8_t* d, size_t n, const uint8_t iv_in[16]) const {
        uint8_t iv[16], prev[16];
        memcpy(iv, iv_in, 16);
        for (size_t o = 0; o + 16 <= n; o += 16) {
            memcpy(prev, d + o, 16);
            decrypt_block(d + o);
            for (int i = 0; i < 16; i++) d[o + i] ^= iv[i];
            memcpy(iv, prev, 16);
        }
    }
};

// Wii common keys (index from the ticket): retail, Korean, vWii. The same public values used by
// Dolphin, libWiiPy and other Wii tools.
const uint8_t kCommonKeys[3][16] = {
    {0xeb, 0xe4, 0x2a, 0x22, 0x5e, 0x85, 0x93, 0xe4, 0x48, 0xd9, 0xc5, 0x45, 0x73, 0x81, 0xaa, 0xf7},
    {0x63, 0xb8, 0x2b, 0xb4, 0xf4, 0x61, 0x4e, 0x2e, 0x13, 0xf2, 0xfe, 0xfb, 0xba, 0x4c, 0x9b, 0x7e},
    {0x30, 0xbf, 0xc7, 0x6e, 0x7c, 0x19, 0xaf, 0xbb, 0x23, 0x16, 0x33, 0x30, 0xce, 0xd7, 0xc2, 0x8d}};

void title_key(const uint8_t* ticket, uint8_t out[16]) {
    int ck = ticket[0x1F1] < 3 ? ticket[0x1F1] : 0;
    uint8_t iv[16] = {0};
    memcpy(iv, ticket + 0x1DC, 8);   // title id
    memcpy(out, ticket + 0x1BF, 16);
    Aes(kCommonKeys[ck]).cbc_decrypt(out, 16, iv);
}

// ---------------------------------------------------------------- SHA-1
void sha1(const uint8_t* data, size_t len, uint8_t out[20]) {
    uint32_t h[5] = {0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0};
    auto rol = [](uint32_t x, int n) { return (x << n) | (x >> (32 - n)); };
    auto block = [&](const uint8_t* p) {
        uint32_t w[80];
        for (int i = 0; i < 16; i++) w[i] = (uint32_t)p[4 * i] << 24 | p[4 * i + 1] << 16 | p[4 * i + 2] << 8 | p[4 * i + 3];
        for (int i = 16; i < 80; i++) w[i] = rol(w[i - 3] ^ w[i - 8] ^ w[i - 14] ^ w[i - 16], 1);
        uint32_t a = h[0], b = h[1], c = h[2], d = h[3], e = h[4];
        for (int i = 0; i < 80; i++) {
            uint32_t f, k;
            if (i < 20) { f = (b & c) | (~b & d); k = 0x5A827999; }
            else if (i < 40) { f = b ^ c ^ d; k = 0x6ED9EBA1; }
            else if (i < 60) { f = (b & c) | (b & d) | (c & d); k = 0x8F1BBCDC; }
            else { f = b ^ c ^ d; k = 0xCA62C1D6; }
            uint32_t t = rol(a, 5) + f + e + k + w[i];
            e = d; d = c; c = rol(b, 30); b = a; a = t;
        }
        h[0] += a; h[1] += b; h[2] += c; h[3] += d; h[4] += e;
    };
    size_t full = len / 64 * 64;
    for (size_t o = 0; o < full; o += 64) block(data + o);
    uint8_t tail[128] = {0};
    size_t rem = len - full;
    memcpy(tail, data + full, rem);
    tail[rem] = 0x80;
    size_t tl = rem + 9 <= 64 ? 64 : 128;
    uint64_t bits = (uint64_t)len * 8;
    for (int i = 0; i < 8; i++) tail[tl - 1 - i] = (uint8_t)(bits >> (8 * i));
    block(tail);
    if (tl == 128) block(tail + 64);
    for (int i = 0; i < 5; i++) for (int k = 0; k < 4; k++) out[4 * i + k] = (uint8_t)(h[i] >> (24 - 8 * k));
}
std::string hex(const uint8_t* d, size_t n) { std::string s; char b[3]; for (size_t i = 0; i < n; i++) { snprintf(b, 3, "%02x", d[i]); s += b; } return s; }

// ---------------------------------------------------------------- helpers
inline uint32_t be32(const uint8_t* p) { return (uint32_t)p[0] << 24 | p[1] << 16 | p[2] << 8 | p[3]; }
inline uint16_t be16(const uint8_t* p) { return (uint16_t)(p[0] << 8 | p[1]); }
inline uint64_t be64(const uint8_t* p) { return (uint64_t)be32(p) << 32 | be32(p + 4); }
inline uint64_t align(uint64_t v, uint64_t a) { return (v + a - 1) / a * a; }

bool read_file(const fs::path& p, std::vector<uint8_t>& out) {
    FILE* f = fopen(p.string().c_str(), "rb");
    if (!f) return false;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    out.resize(n > 0 ? (size_t)n : 0);
    bool ok = n <= 0 || fread(out.data(), 1, out.size(), f) == out.size();
    fclose(f);
    return ok;
}
bool write_file(const fs::path& p, const uint8_t* d, size_t n) {
    std::error_code ec;
    fs::create_directories(p.parent_path(), ec);
    FILE* f = fopen(p.string().c_str(), "wb");
    if (!f) return false;
    bool ok = fwrite(d, 1, n, f) == n;
    return fclose(f) == 0 && ok;
}

std::vector<uint8_t> lz11(const std::vector<uint8_t>& d) {
    std::vector<uint8_t> o;
    if (d.size() < 4 || d[0] != 0x11) return o;
    size_t n = d[1] | d[2] << 8 | d[3] << 16, p = 4;
    if (n == 0) { n = d[4] | d[5] << 8 | d[6] << 16 | (size_t)d[7] << 24; p = 8; }
    o.reserve(n);
    while (o.size() < n && p < d.size()) {
        uint8_t f = d[p++];
        for (int b = 0; b < 8 && o.size() < n && p < d.size(); b++) {
            if (!(f & (0x80 >> b))) { o.push_back(d[p++]); continue; }
            size_t L, D; int a = d[p] >> 4;
            if (a == 0) { L = ((d[p] & 15) << 4 | d[p + 1] >> 4) + 0x11; D = ((d[p + 1] & 15) << 8 | d[p + 2]) + 1; p += 3; }
            else if (a == 1) { L = ((d[p] & 15) << 12 | d[p + 1] << 4 | d[p + 2] >> 4) + 0x111; D = ((d[p + 2] & 15) << 8 | d[p + 3]) + 1; p += 4; }
            else { L = a + 1; D = ((d[p] & 15) << 8 | d[p + 1]) + 1; p += 2; }
            if (D > o.size()) return {};
            for (size_t i = 0; i < L; i++) o.push_back(o[o.size() - D]);
        }
    }
    return o;
}

// ---------------------------------------------------------------- WAD
struct Wad { std::vector<uint8_t> raw; size_t tik = 0, tik_n = 0, tmd = 0, tmd_n = 0, data = 0; uint64_t tid = 0; };
bool wad_open(const fs::path& p, Wad& w) {
    if (!read_file(p, w.raw) || w.raw.size() < 0x40) return false;
    const uint8_t* h = w.raw.data();
    uint32_t hs = be32(h), cert = be32(h + 8), crl = be32(h + 12), tik = be32(h + 16), tmd = be32(h + 20);
    if (hs != 0x20) return false;
    size_t o = align(hs, 64) + align(cert, 64) + align(crl, 64);
    w.tik = o; w.tik_n = tik; o += align(tik, 64);
    w.tmd = o; w.tmd_n = tmd; o += align(tmd, 64);
    w.data = o;
    if (w.tmd + w.tmd_n > w.raw.size() || w.tik_n < 0x2A4 || w.tmd_n < 0x1E4) return false;
    w.tid = be64(h + w.tmd + 0x18C);
    return true;
}
bool wad_unpack(const Wad& w, const fs::path& out, std::string& err, std::vector<uint8_t>* content1) {
    const uint8_t* tik = w.raw.data() + w.tik;
    const uint8_t* tmd = w.raw.data() + w.tmd;
    uint8_t key[16];
    title_key(tik, key);
    FastAes aes(key);
    if (!write_file(out / "tmd.bin", tmd, w.tmd_n) || !write_file(out / "ticket.bin", tik, w.tik_n)) { err = "cannot write to " + out.string(); return false; }
    int n = be16(tmd + 0x1DE);
    size_t o = w.data;
    for (int i = 0; i < n; i++) {
        const uint8_t* r = tmd + 0x1E4 + 0x24 * i;
        uint16_t idx = be16(r + 4);
        uint64_t size = be64(r + 8), enc = align(size, 16);
        if (o + enc > w.raw.size()) { err = "the WAD is truncated"; return false; }
        std::vector<uint8_t> d(w.raw.begin() + o, w.raw.begin() + o + enc);
        uint8_t iv[16] = {(uint8_t)(idx >> 8), (uint8_t)idx};
        aes.cbc_decrypt(d.data(), d.size(), iv);
        d.resize(size);
        uint8_t h[20];
        sha1(d.data(), d.size(), h);
        if (memcmp(h, r + 0x10, 20) != 0) { err = "content " + std::to_string(idx) + " failed its hash check (damaged WAD?)"; return false; }
        char name[32];
        snprintf(name, sizeof name, "%08x.app", idx);
        if (!write_file(out / "content" / name, d.data(), d.size())) { err = "cannot write to " + out.string(); return false; }
        if (i == 1 && content1) *content1 = std::move(d);
        o += align(enc, 64);
    }
    return true;
}

// ---------------------------------------------------------------- disc (.iso / .ciso)
struct Disc {
    FILE* f = nullptr;
    bool ciso = false;
    uint32_t bs = 0;
    std::vector<int64_t> map;
    ~Disc() { if (f) fclose(f); }
    bool open(const fs::path& p) {
        f = fopen(p.string().c_str(), "rb");
        if (!f) return false;
        uint8_t hdr[0x8000];
        if (fread(hdr, 1, 4, f) != 4) return false;
        if (memcmp(hdr, "CISO", 4) == 0) {
            fseek(f, 0, SEEK_SET);
            if (fread(hdr, 1, sizeof hdr, f) != sizeof hdr) return false;
            ciso = true;
            bs = hdr[4] | hdr[5] << 8 | hdr[6] << 16 | (uint32_t)hdr[7] << 24;
            int64_t n = 0;
            for (size_t i = 8; i < sizeof hdr; i++) map.push_back(hdr[i] ? n++ : -1);
        }
        return true;
    }
    void read(uint64_t off, uint8_t* out, size_t size) {
        while (size) {
            uint64_t blk = ciso ? off / bs : 0, o = ciso ? off % bs : off;
            size_t k = ciso ? (size_t)std::min<uint64_t>(size, bs - o) : size;
            if (ciso && (blk >= map.size() || map[blk] < 0)) memset(out, 0, k);
            else {
                uint64_t pos = ciso ? 0x8000 + (uint64_t)map[blk] * bs + o : o;
#ifdef _WIN32
                _fseeki64(f, (long long)pos, SEEK_SET);
#else
                fseeko(f, (off_t)pos, SEEK_SET);
#endif
                size_t got = fread(out, 1, k, f);
                if (got < k) memset(out + got, 0, k - got);
            }
            off += k; out += k; size -= k;
        }
    }
    std::vector<uint8_t> read(uint64_t off, size_t size) { std::vector<uint8_t> v(size); read(off, v.data(), size); return v; }
};
struct Partition {
    Disc& d;
    uint64_t data = 0;
    std::unique_ptr<FastAes> aes;
    int64_t cached = -1;
    std::vector<uint8_t> raw = std::vector<uint8_t>(0x8000);
    Partition(Disc& disc, uint64_t off) : d(disc) {
        auto tik = d.read(off, 0x2A4);
        uint8_t key[16];
        title_key(tik.data(), key);
        aes.reset(new FastAes(key));
        data = off + ((uint64_t)be32(d.read(off + 0x2B8, 4).data()) << 2);
    }
    const uint8_t* cluster(uint64_t n) {
        if ((int64_t)n != cached) {
            d.read(data + n * 0x8000, raw.data(), 0x8000);
            uint8_t iv[16];
            memcpy(iv, raw.data() + 0x3D0, 16);
            aes->cbc_decrypt(raw.data() + 0x400, 0x7C00, iv);
            cached = (int64_t)n;
        }
        return raw.data() + 0x400;
    }
    void read(uint64_t off, uint8_t* out, size_t size) {
        while (size) {
            uint64_t n = off / 0x7C00, o = off % 0x7C00;
            size_t k = (size_t)std::min<uint64_t>(size, 0x7C00 - o);
            memcpy(out, cluster(n) + o, k);
            off += k; out += k; size -= k;
        }
    }
    std::vector<uint8_t> read(uint64_t off, size_t size) { std::vector<uint8_t> v(size); read(off, v.data(), size); return v; }
};
bool disc_unpack(const fs::path& img, const fs::path& out, std::string& err, std::string& id) {
    Disc d;
    if (!d.open(img)) { err = "cannot open " + img.string(); return false; }
    auto hdr = d.read(0, 0x60);
    id.assign((const char*)hdr.data(), 6);
    if (be32(hdr.data() + 0x18) != 0x5D1C9EA3) { err = img.filename().string() + " is not a Wii disc image"; return false; }
    uint64_t gp = 0;
    for (int t = 0; t < 4 && !gp; t++) {
        auto e = d.read(0x40000 + t * 8, 8);
        uint32_t cnt = be32(e.data()), toff = be32(e.data() + 4);
        for (uint32_t i = 0; i < cnt && i < 64; i++) {
            auto ent = d.read(((uint64_t)toff << 2) + i * 8, 8);
            if (be32(ent.data() + 4) == 0) { gp = (uint64_t)be32(ent.data()) << 2; break; }
        }
    }
    if (!gp) { err = "no game partition in " + img.filename().string(); return false; }
    Partition p(d, gp);
    fs::path sys = out / "sys";
    auto tik = d.read(gp, 0x2A4);
    auto th = d.read(gp + 0x2A4, 8);
    uint32_t tsz = be32(th.data()), toff = be32(th.data() + 4);
    auto tmd = d.read(gp + ((uint64_t)toff << 2), tsz);
    auto bh = p.read(0, 0x440);
    if (memcmp(bh.data(), hdr.data(), 6) != 0) { err = "could not decrypt the game partition"; return false; }
    auto bi2 = p.read(0x440, 0x2000);
    uint64_t dol_off = (uint64_t)be32(bh.data() + 0x420) << 2, fst_off = (uint64_t)be32(bh.data() + 0x424) << 2;
    size_t fst_sz = (size_t)be32(bh.data() + 0x428) << 2;
    auto dh = p.read(dol_off, 0x100);
    uint64_t dol_end = 0x100;
    for (int i = 0; i < 18; i++) { uint32_t o = be32(dh.data() + i * 4), s = be32(dh.data() + 0x90 + i * 4); if (o) dol_end = std::max<uint64_t>(dol_end, (uint64_t)o + s); }
    auto dol = p.read(dol_off, (size_t)dol_end);
    auto fst = p.read(fst_off, fst_sz);
    bool ok = write_file(sys / "ticket.bin", tik.data(), tik.size()) && write_file(sys / "tmd.bin", tmd.data(), tmd.size()) &&
              write_file(sys / "boot.bin", bh.data(), bh.size()) && write_file(sys / "bi2.bin", bi2.data(), bi2.size()) &&
              write_file(sys / "main.dol", dol.data(), dol.size()) && write_file(sys / "fst.bin", fst.data(), fst.size());
    if (!ok) { err = "cannot write to " + out.string(); return false; }
    uint32_t n = be32(fst.data() + 8);
    size_t strt = (size_t)n * 12;
    if (strt > fst.size()) { err = "bad file table"; return false; }
    std::vector<std::pair<uint32_t, fs::path>> stack = {{n, out / "files"}};
    std::error_code ec;
    fs::create_directories(out / "files", ec);
    std::vector<uint8_t> buf(1 << 22);
    for (uint32_t i = 1; i < n; i++) {
        while (i >= stack.back().first) stack.pop_back();
        const uint8_t* e = fst.data() + i * 12;
        uint32_t no = be32(e) & 0xFFFFFF, a = be32(e + 4), b = be32(e + 8);
        std::string nm((const char*)fst.data() + strt + no);
        fs::path path = stack.back().second / nm;
        if (e[0]) { fs::create_directories(path, ec); stack.push_back({b, path}); continue; }
        FILE* w = fopen(path.string().c_str(), "wb");
        if (!w) { err = "cannot write " + path.string(); return false; }
        uint64_t off = (uint64_t)a << 2;
        while (b) {
            size_t k = std::min<size_t>(b, buf.size());
            p.read(off, buf.data(), k);
            if (fwrite(buf.data(), 1, k, w) != k) { fclose(w); err = "cannot write " + path.string(); return false; }
            off += k; b -= (uint32_t)k;
        }
        fclose(w);
    }
    return true;
}
}  // namespace

// ---------------------------------------------------------------- entry points
bool game_setup_from_wad(const std::string& wad_path, const std::string& dlc_path, const std::string& out_dir, std::string& err) {
    Wad w;
    if (!wad_open(wad_path, w)) { err = wad_path + " is not a WAD file"; return false; }
    fs::path out(out_dir);
    std::vector<uint8_t> c1;
    if (!wad_unpack(w, out, err, &c1)) return false;
    std::vector<uint8_t> dol = (!c1.empty() && c1[0] == 0x11) ? lz11(c1) : c1;
    if (dol.empty()) { err = "could not unpack main.dol"; return false; }
    if (!write_file(out / "main.dol", dol.data(), dol.size())) { err = "cannot write main.dol"; return false; }
    uint8_t h[20];
    sha1(dol.data(), dol.size(), h);
    fprintf(stderr, "[setup] main.dol %zu bytes sha1 %s\n", dol.size(), hex(h, 20).c_str());
    if (!dlc_path.empty()) {
        Wad dw;
        if (!wad_open(dlc_path, dw)) { err = dlc_path + " is not a WAD file"; return false; }
        if (!wad_unpack(dw, out / "dlc", err, nullptr)) return false;
    }
    return true;
}

bool game_setup_from_disc(const std::string& image_path, const std::string& out_dir, std::string& err) {
    std::string id;
    return disc_unpack(image_path, out_dir, err, id);
}

// Look next to the executable for the player's WAD(s) or disc image and build the game folder.
// Returns 1 = game folder made, 0 = nothing to do (no WAD / image found), -1 = failed (err set).
int game_setup_auto(const std::string& exedir, const std::string& game_dir, bool disc_game, std::string& err, std::string& used) {
    std::error_code ec;
    std::vector<fs::path> wads, images;
    for (auto& e : fs::directory_iterator(fs::path(exedir.empty() ? "." : exedir), ec)) {
        if (!e.is_regular_file(ec)) continue;
        std::string ext = e.path().extension().string();
        std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
        if (ext == ".wad") wads.push_back(e.path());
        else if (ext == ".iso" || ext == ".ciso") images.push_back(e.path());
    }
    std::sort(wads.begin(), wads.end());
    std::sort(images.begin(), images.end());
    if (disc_game) {
        if (images.empty()) return 0;
        used = images[0].filename().string();
        fprintf(stderr, "[setup] extracting %s into %s (first start only)...\n", used.c_str(), game_dir.c_str());
        return game_setup_from_disc(images[0].string(), game_dir, err) ? 1 : -1;
    }
    std::string base, dlc;
    for (auto& p : wads) {
        Wad w;
        if (!wad_open(p, w)) continue;
        uint32_t type = (uint32_t)(w.tid >> 32);
        if (type == 0x00010005 && dlc.empty()) dlc = p.string();          // add-on content
        else if (type != 0x00010005 && base.empty()) base = p.string();   // the game (00010001)
    }
    if (base.empty()) return 0;
    used = fs::path(base).filename().string() + (dlc.empty() ? "" : " + " + fs::path(dlc).filename().string());
    fprintf(stderr, "[setup] unpacking %s into %s (first start only)...\n", used.c_str(), game_dir.c_str());
    return game_setup_from_wad(base, dlc, game_dir, err) ? 1 : -1;
}

#ifdef GAME_SETUP_TOOL
// Command-line build for testing: game_setup <wad|image> <outdir> [dlc.wad]
int main(int argc, char** argv) {
    if (argc < 3) { fprintf(stderr, "usage: %s <game.wad|disc.iso|disc.ciso> <outdir> [dlc.wad]\n", argv[0]); return 2; }
    std::string err, in = argv[1], ext = fs::path(in).extension().string();
    std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
    bool ok = (ext == ".iso" || ext == ".ciso") ? game_setup_from_disc(in, argv[2], err) : game_setup_from_wad(in, argc > 3 ? argv[3] : "", argv[2], err);
    if (!ok) { fprintf(stderr, "failed: %s\n", err.c_str()); return 1; }
    fprintf(stderr, "ok\n");
    return 0;
}
#endif
