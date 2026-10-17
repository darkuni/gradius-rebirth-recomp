// NAND file system (/dev/fs and NAND files) mapped to a host directory.
#include "hle.h"
#include "game.h"
#include "title.h"
#include <string>
#include <vector>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;
static fs::path g_nand;

enum { FS_EINVAL = -101, FS_EACCESS = -102, FS_EEXIST = -105, FS_ENOENT = -106 };

void nand_init(const char* root) {
    // saves live in a "nand" folder next to the game data folder
    fs::path r = fs::absolute(fs::path(root));
    if (r.filename().empty()) r = r.parent_path();
    g_nand = r.parent_path() / "nand";
    std::error_code ec;
    {
                char p[64]; snprintf(p, sizeof p, "title/%08x/%08x/data", (unsigned)(g_title.title_id >> 32), (unsigned)g_title.title_id);
        fs::create_directories(g_nand / p, ec);
    }
    fs::create_directories(g_nand / "shared2/sys", ec);
    fs::create_directories(g_nand / "tmp", ec);
    fprintf(g_log, "[nand] root %s\n", g_nand.string().c_str());
}
static fs::path host_path(const std::string& p) {
    std::string s = p;
    while (!s.empty() && s[0] == '/') s.erase(0, 1);
    return g_nand / s;
}

// ---------------------------------------------------------------- files
struct NandFile {
    fs::path path;
    uint32_t pos = 0;
    int mode = 0;
};

int32_t nand_open(const std::string& path, uint32_t mode, void** handle) {
    fs::path hp = host_path(path);
    if (!fs::exists(hp) || fs::is_directory(hp)) return FS_ENOENT;
    auto* f = new NandFile{hp, 0, (int)mode};
    *handle = f;
    return 0;
}
void nand_close(void* h) { delete (NandFile*)h; }
int32_t nand_read(void* h, uint32_t dst, uint32_t len) {
    auto* f = (NandFile*)h;
    std::ifstream in(f->path, std::ios::binary);
    in.seekg(f->pos);
    std::vector<char> buf(len);
    in.read(buf.data(), len);
    uint32_t got = (uint32_t)in.gcount();
    for (uint32_t i = 0; i < got; i++) W8(dst + i, (uint8_t)buf[i]);
    f->pos += got;
    return (int32_t)got;
}
int32_t nand_write(void* h, uint32_t src, uint32_t len) {
    auto* f = (NandFile*)h;
    std::vector<char> buf(len);
    for (uint32_t i = 0; i < len; i++) buf[i] = (char)R8(src + i);
    std::fstream io(f->path, std::ios::binary | std::ios::in | std::ios::out);
    io.seekp(f->pos);
    io.write(buf.data(), len);
    f->pos += len;
    return (int32_t)len;
}
int32_t nand_seek(void* h, int32_t off, int32_t whence) {
    auto* f = (NandFile*)h;
    std::error_code ec;
    int64_t size = (int64_t)fs::file_size(f->path, ec);
    int64_t base = whence == 0 ? 0 : whence == 1 ? f->pos : size;
    int64_t np = base + off;
    if (np < 0 || np > size) return FS_EINVAL;
    f->pos = (uint32_t)np;
    return (int32_t)np;
}
int32_t nand_filestats(void* h, uint32_t out) {
    auto* f = (NandFile*)h;
    std::error_code ec;
    W32(out, (uint32_t)fs::file_size(f->path, ec));
    W32(out + 4, f->pos);
    return 0;
}

// ---------------------------------------------------------------- /dev/fs
static std::string path_at(uint32_t a, int max = 64) {
    std::string s;
    for (int i = 0; i < max; i++) { char c = (char)R8(a + i); if (!c) break; s += c; }
    return s;
}

int32_t fs_ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) {
    std::error_code ec;
    static bool fslog = getenv("FS_LOG") != nullptr;
    if (fslog) fprintf(g_log, "[fs] ioctl %X in=%08X/%X out=%08X/%X %s\n", cmd, in, inlen, out, outlen, inlen ? (const char*)(MEM + xl(in)) : "");
    switch (cmd) {
        case 0x02:   // GetStats
            for (uint32_t i = 0; i < outlen; i += 4) W32(out + i, 0);
            if (outlen >= 0x1C) {   // NANDStats: block size, free/used/bad/reserved clusters, free/used inodes
                W32(out + 0x00, 0x4000);
                W32(out + 0x04, 0x10000); W32(out + 0x08, 0x3C00);
                W32(out + 0x0C, 0);       W32(out + 0x10, 0);
                W32(out + 0x14, 0x1800);  W32(out + 0x18, 0x800);
            }
            return 0;
        case 0x03: { // CreateDir(attr)
            fs::path p = host_path(path_at(in + 6));
            if (fs::exists(p)) return FS_EEXIST;
            fs::create_directories(p, ec);
            return 0;
        }
        case 0x05: return 0;   // SetAttr
        case 0x06: { // GetAttr(path) -> attr
            std::string gp = path_at(in);
            fs::path p = host_path(gp);
            if (!fs::exists(p)) return FS_ENOENT;
            for (uint32_t i = 0; i < outlen; i++) W8(out + i, 0);
            W32(out, 0x1000); W16(out + 4, 0x3031);               // owner / group
            for (size_t i = 0; i < gp.size() && i < 63; i++) W8(out + 6 + i, gp[i]);
            W8(out + 0x46, 3); W8(out + 0x47, 3); W8(out + 0x48, 3);
            return 0;
        }
        case 0x07: { // Delete
            fs::path p = host_path(path_at(in));
            if (!fs::exists(p)) return FS_ENOENT;
            fs::remove_all(p, ec);
            return 0;
        }
        case 0x08: { // Rename(old[64], new[64])
            fs::path a = host_path(path_at(in)), b = host_path(path_at(in + 64));
            if (!fs::exists(a)) return FS_ENOENT;
            fs::remove_all(b, ec);
            fs::rename(a, b, ec);
            return ec ? FS_EINVAL : 0;
        }
        case 0x09: { // CreateFile(attr)
            fs::path p = host_path(path_at(in + 6));
            if (fs::exists(p)) return FS_EEXIST;
            if (!fs::exists(p.parent_path())) return FS_ENOENT;
            std::ofstream(p, std::ios::binary);
            return 0;
        }
        case 0x0A: return 0;   // SetFileVerCtrl
        case 0x0D: return 0;   // Shutdown
    }
    fprintf(g_log, "[nand] /dev/fs ioctl %X (unhandled)\n", cmd);
    (void)inlen;
    return 0;
}

int32_t fs_ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) {
    static bool fslog = getenv("FS_LOG") != nullptr;
    if (fslog) { fprintf(g_log, "[fs] ioctlv %X nin=%u nio=%u", cmd, nin, nio);
        for (uint32_t k = 0; k < nin + nio; k++) fprintf(g_log, " [%08X/%X]", phys_to_guest(R32(vec + 8 * k)), R32(vec + 8 * k + 4));
        if (nin) fprintf(g_log, " %s", (const char*)(MEM + xl(phys_to_guest(R32(vec))))); fprintf(g_log, "\n"); }
    auto vptr = [&](int i) { return phys_to_guest(R32(vec + 8 * i)); };
    auto vlen = [&](int i) { return R32(vec + 8 * i + 4); };
    std::error_code ec;
    if (cmd == 0x04) {   // ReadDir
        fs::path p = host_path(path_at(vptr(0)));
        if (!fs::is_directory(p)) return FS_ENOENT;
        std::vector<std::string> names;
        for (auto& e : fs::directory_iterator(p, ec)) names.push_back(e.path().filename().string());
        if (nio == 1 && nin == 1) { W32(vptr(1), (uint32_t)names.size()); return 0; }
        uint32_t maxn = R32(vptr(1));
        uint32_t buf = vptr(2), cnt = vptr(3), n = 0, o = 0;
        for (auto& s : names) {
            if (n >= maxn) break;
            for (char ch : s) W8(buf + o++, ch);
            W8(buf + o++, 0);
            n++;
        }
        W32(cnt, n);
        return 0;
    }
    if (cmd == 0x0C) {   // GetUsage(path) -> clusters, inodes (IOS counts the directory itself as an inode)
        std::string p = (const char*)(MEM + xl(vptr(0)));
        std::error_code ec;
        fs::path hp = host_path(p);
        if (!fs::exists(hp, ec)) return FS_ENOENT;
        uint32_t blocks = 0, inodes = 1;
        if (fs::is_directory(hp, ec)) {
            for (auto it = fs::recursive_directory_iterator(hp, ec); it != fs::recursive_directory_iterator(); it.increment(ec)) {
                inodes++;
                if (it->is_regular_file(ec)) blocks += (uint32_t)((it->file_size(ec) + 0x3FFF) / 0x4000);
            }
        } else blocks = (uint32_t)((fs::file_size(hp, ec) + 0x3FFF) / 0x4000);
        W32(vptr(1), blocks); W32(vptr(2), inodes);
        return 0;
    }
    fprintf(g_log, "[nand] /dev/fs ioctlv %X (unhandled)\n", cmd);
    (void)vlen;
    return 0;
}
