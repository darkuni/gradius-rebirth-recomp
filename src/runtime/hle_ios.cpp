// IOS (Starlet) replacement at the IPC request level.
// __ios_Ipc2(request, callback) is replaced: requests are serviced on the host.
#include "hle.h"
#include "game.h"
#include <map>
#include <string>
#include <cstring>
#include <algorithm>

enum { IOS_OPEN = 1, IOS_CLOSE = 2, IOS_READ = 3, IOS_WRITE = 4, IOS_SEEK = 5, IOS_IOCTL = 6, IOS_IOCTLV = 7 };

struct IosDev {
    std::string name;
    virtual ~IosDev() {}
    // return >=0 result, or INT32_MIN to never complete (event hooks)
    virtual int32_t ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) {
        fprintf(g_log, "[ios] %s ioctl %X in=%08X/%X out=%08X/%X -> 0 (unhandled)\n", name.c_str(), cmd, in, inlen, out, outlen);
        return 0;
    }
    virtual int32_t ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) {
        fprintf(g_log, "[ios] %s ioctlv %X nin=%u nio=%u -> 0 (unhandled)\n", name.c_str(), cmd, nin, nio);
        return 0;
    }
    virtual int32_t read(uint32_t buf, uint32_t len) { fprintf(g_log, "[ios] %s read %X -> 0\n", name.c_str(), len); return 0; }
    virtual int32_t write(uint32_t buf, uint32_t len) { fprintf(g_log, "[ios] %s write %X -> %X\n", name.c_str(), len, len); return (int32_t)len; }
    virtual int32_t seek(int32_t off, int32_t whence) { return 0; }
};

struct StmEventHook : IosDev {
    int32_t ioctl(uint32_t cmd, uint32_t, uint32_t, uint32_t, uint32_t) override {
        // 0x1000: register event hook - completes only on power/reset press
        return cmd == 0x1000 ? INT32_MIN : 0;
    }
};

int32_t di_ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen);
struct DiDev : IosDev {
    int32_t ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) override {
        return di_ioctl(cmd, in, inlen, out, outlen);
    }
};

int32_t fs_ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen);
int32_t fs_ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec);
int32_t nand_open(const std::string& path, uint32_t mode, void** handle);
void nand_close(void* h);
int32_t nand_read(void* h, uint32_t dst, uint32_t len);
int32_t nand_write(void* h, uint32_t src, uint32_t len);
int32_t nand_seek(void* h, int32_t off, int32_t whence);
int32_t nand_filestats(void* h, uint32_t out);
struct FsDev : IosDev {
    int32_t ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) override { return fs_ioctl(cmd, in, inlen, out, outlen); }
    int32_t ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) override { return fs_ioctlv(cmd, nin, nio, vec); }
};
struct NandFileDev : IosDev {
    void* h = nullptr;
    ~NandFileDev() { if (h) nand_close(h); }
    int32_t read(uint32_t buf, uint32_t len) override { return nand_read(h, buf, len); }
    int32_t write(uint32_t buf, uint32_t len) override { return nand_write(h, buf, len); }
    int32_t seek(int32_t off, int32_t whence) override { return nand_seek(h, off, whence); }
    int32_t ioctl(uint32_t cmd, uint32_t, uint32_t, uint32_t out, uint32_t) override { return cmd == 0x0B ? nand_filestats(h, out) : 0; }
};

// /dev/es: title identity, TMD/ticket views and content access for the running WiiWare title.
// Contents are read from <game>/content/<index>.app (already decrypted).
#include "title.h"
#include <vector>
struct EsContent { FILE* f = nullptr; uint64_t size = 0, pos = 0; uint32_t index = 0; };
static std::map<int32_t, EsContent> g_cfds;
static int32_t g_next_cfd = 0;
enum { ES_EINVAL = -1017, ES_ENOENT = -106 };

struct EsDev : IosDev {
    int32_t open_content(uint32_t index) {
        const TitleContent* tc = title_content(index);
        if (!tc) { fprintf(g_log, "[es] OpenContent %u: no such content\n", index); return ES_ENOENT; }
        FILE* f = fopen(tc->path.c_str(), "rb");
        if (!f) { fprintf(g_log, "[es] OpenContent %u: cannot open %s\n", index, tc->path.c_str()); return ES_ENOENT; }
        fseek(f, 0, SEEK_END); uint64_t sz = (uint64_t)ftell(f); fseek(f, 0, SEEK_SET);
        int32_t cfd = g_next_cfd++;
        g_cfds[cfd] = {f, sz, 0, index};
        fprintf(g_log, "[es] OpenContent %u -> cfd %d (%llu bytes)\n", index, cfd, (unsigned long long)sz);
        return cfd;
    }
    int32_t ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) override {
        auto vptr = [&](int i) { return phys_to_guest(R32(vec + 8 * i)); };
        auto vlen = [&](int i) { return R32(vec + 8 * i + 4); };
        auto put = [&](uint32_t dst, const std::vector<uint8_t>& v, uint32_t max) {
            uint32_t n = (uint32_t)std::min<size_t>(v.size(), max);
            for (uint32_t i = 0; i < n; i++) W8(dst + i, v[i]);
        };
        auto title_dir = [&](uint64_t tid) {
            char p[64]; snprintf(p, sizeof p, "/title/%08x/%08x/data", (unsigned)(tid >> 32), (unsigned)tid); return std::string(p);
        };
        static bool es_log = getenv("ES_LOG") != nullptr;
        if (es_log) {
            fprintf(g_log, "[es] ioctlv %02X nin=%u nio=%u", cmd, nin, nio);
            for (uint32_t i = 0; i < nin + nio; i++) fprintf(g_log, " [%08X/%X]", vptr(i), vlen(i));
            fprintf(g_log, "\n");
        }
        switch (cmd) {
        case 0x20: W64(vptr(0), g_title.title_id); return 0;                           // GetTitleID
        case 0x1D: {                                                                   // GetTitleDir(tid)
            uint64_t tid = nin ? R64(vptr(0)) : g_title.title_id;
            std::string p = title_dir(tid);
            uint32_t o = vptr(nin);
            for (size_t i = 0; i < p.size(); i++) W8(o + (uint32_t)i, p[i]);
            W8(o + (uint32_t)p.size(), 0);
            return 0;
        }
        case 0x07: W32(vptr(0), 0x0403AC68u); return 0;                                // GetDeviceID
        case 0x12: W32(vptr(1), 1); return 0;                                          // GetViewCnt(tid)
        case 0x13: put(vptr(2), title_ticket_view(), vlen(2)); return 0;               // GetViews(tid, n)
        case 0x14: W32(vptr(1), (uint32_t)title_tmd_view().size()); return 0;          // GetTMDViewCnt(tid) = size
        case 0x15: put(vptr(2), title_tmd_view(), vlen(2)); return 0;                  // GetTMDViews(tid, size)
        case 0x19: W32(vptr(0), (uint32_t)title_tmd_view().size()); return 0;          // DIGetTMDViewSize
        case 0x1A: put(vptr(nin), title_tmd_view(), vlen(nin)); return 0;              // DIGetTMDView
        case 0x1B: put(vptr(nin), title_ticket_view(), vlen(nin)); return 0;           // DIGetTicketView
        case 0x39: W32(vptr(0), (uint32_t)g_title.tmd.size()); return 0;               // DIGetTMDSize
        case 0x3A: put(vptr(nin), g_title.tmd, vlen(nin)); return 0;                   // DIGetTMD
        case 0x34: W32(vptr(nin), (uint32_t)g_title.tmd.size()); return 0;             // GetStoredTMDSize(tid)
        case 0x35: put(vptr(nin), g_title.tmd, vlen(nin)); return 0;                   // GetStoredTMD(tid, size)
        case 0x10: case 0x32: W32(vptr(1), (uint32_t)g_title.contents.size()); return 0; // Get(Title|Stored)ContentsCnt
        case 0x11: case 0x33: {                                                        // Get(Title|Stored)Contents
            uint32_t o = vptr(nin), n = std::min<uint32_t>(R32(vptr(1)), (uint32_t)g_title.contents.size());
            for (uint32_t i = 0; i < n; i++) W32(o + 4 * i, g_title.contents[i].id);
            return 0;
        }
        case 0x0E: case 0x0C: W32(vptr(0), 1); return 0;                              // Get(Owned)TitleCnt
        case 0x0F: case 0x0D: W64(vptr(nin), g_title.title_id); return 0;             // Get(Owned)Titles
        case 0x09: return open_content(R32(vptr(0)));                                  // OpenActiveTitleContent(index)
        case 0x24: return open_content(R32(vptr(2)));                                  // OpenContent(tid, ticketview, index)
        case 0x0A: {                                                                   // ReadContent(cfd) -> buf
            int32_t cfd = (int32_t)R32(vptr(0));
            auto it = g_cfds.find(cfd); if (it == g_cfds.end()) return ES_EINVAL;
            auto& e = it->second;
            uint32_t dst = vptr(1), len = vlen(1);
            uint64_t n = std::min<uint64_t>(len, e.size - std::min(e.pos, e.size));
            std::vector<uint8_t> tmp((size_t)n);
            fseek(e.f, (long)e.pos, SEEK_SET);
            n = fread(tmp.data(), 1, (size_t)n, e.f);
            if (n) memcpy(MEM + xl(dst), tmp.data(), (size_t)n);
            e.pos += n;
            return (int32_t)n;
        }
        case 0x23: {                                                                   // SeekContent(cfd, off, whence)
            int32_t cfd = (int32_t)R32(vptr(0));
            auto it = g_cfds.find(cfd); if (it == g_cfds.end()) return ES_EINVAL;
            auto& e = it->second;
            int32_t off = (int32_t)R32(vptr(1)); uint32_t wh = R32(vptr(2));
            int64_t base = wh == 0 ? 0 : wh == 1 ? (int64_t)e.pos : (int64_t)e.size;
            int64_t np = base + off;
            if (np < 0 || np > (int64_t)e.size) return ES_EINVAL;
            e.pos = (uint64_t)np;
            return (int32_t)np;
        }
        case 0x0B: {                                                                   // CloseContent(cfd)
            int32_t cfd = (int32_t)R32(vptr(0));
            auto it = g_cfds.find(cfd); if (it == g_cfds.end()) return ES_EINVAL;
            if (it->second.f) fclose(it->second.f);
            g_cfds.erase(it);
            return 0;
        }
        case 0x16: if (nio >= 2) W32(vptr(nin + 1), 0); return 0;                      // GetConsumption(tid) -> limits[], count: none
        }
        return IosDev::ioctlv(cmd, nin, nio, vec);
    }
};

static std::map<int32_t, IosDev*> g_fds;
static int32_t g_next_fd = 3;

static IosDev* make_dev(const std::string& path) {
    IosDev* d;
    if (path == "/dev/stm/eventhook") d = new StmEventHook;
    else if (path == "/dev/di") d = new DiDev;
    else if (path == "/dev/fs") d = new FsDev;
    else if (path == "/dev/es") d = new EsDev;
    else d = new IosDev;
    d->name = path;
    return d;
}

static int32_t ios_exec(uint32_t req) {
    uint32_t cmd = R32(req), fd = R32(req + 8);
    uint32_t a0 = R32(req + 0x0C), a1 = R32(req + 0x10), a2 = R32(req + 0x14), a3 = R32(req + 0x18), a4 = R32(req + 0x1C);
    if (cmd == IOS_OPEN) {
        std::string path = guest_str(phys_to_guest(a0));
        IosDev* d;
        if (path.rfind("/dev/", 0) != 0) {
            void* h = nullptr;
            int32_t r = nand_open(path, a1, &h);
            if (r < 0) { fprintf(g_log, "[ios] open %s -> %d\n", path.c_str(), r); return r; }
            auto* nf = new NandFileDev; nf->h = h; nf->name = path; d = nf;
        } else d = make_dev(path);
        int32_t nfd = g_next_fd++;
        g_fds[nfd] = d;
        fprintf(g_log, "[ios] open %s mode %u -> fd %d\n", path.c_str(), a1, nfd);
        return nfd;
    }
    auto it = g_fds.find((int32_t)fd);
    if (it == g_fds.end()) { fprintf(g_log, "[ios] cmd %u on bad fd %d\n", cmd, fd); return -6; }
    IosDev* d = it->second;
    switch (cmd) {
        case IOS_CLOSE: g_fds.erase(it); delete d; return 0;
        case IOS_READ: return d->read(phys_to_guest(a0), a1);
        case IOS_WRITE: return d->write(phys_to_guest(a0), a1);
        case IOS_SEEK: return d->seek((int32_t)a0, (int32_t)a1);
        case IOS_IOCTL: return d->ioctl(a0, phys_to_guest(a1), a2, phys_to_guest(a3), a4);
        case IOS_IOCTLV: return d->ioctlv(a0, a1, a2, phys_to_guest(a3));
    }
    fprintf(g_log, "[ios] unknown cmd %u\n", cmd);
    return -4;
}

extern void G_FN_IOS_FREE(Ctx*);  // iosFree(heap, ptr)

void hle___ios_Ipc2(Ctx* c) {
    uint32_t req = c->r[3], cb = c->r[4];
    if (!req) { c->r[3] = (uint32_t)-4; return; }
    int32_t res = ios_exec(req);
    uint32_t heap = R32(c->r[13] - G_SDA_IOS_HEAP);
    if (!cb) {
        W32(req + 4, (uint32_t)res);
        guest_call(c, G_IOS_FREE, {heap, req});
        c->r[3] = (uint32_t)res;
        return;
    }
    c->r[3] = 0;
    if (res == INT32_MIN) return;   // never completes
    uint32_t usr = R32(req + 0x24);
    post_irq([=](Ctx* ic) {
        W32(req + 4, (uint32_t)res);
        guest_call(ic, cb, {(uint32_t)res, usr});
        guest_call(ic, G_IOS_FREE, {heap, req});
    });
}
