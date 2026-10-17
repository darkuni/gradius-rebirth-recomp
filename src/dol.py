import struct, re

class Dol:
    def __init__(self, path):
        d = open(path, 'rb').read()
        self.d = d
        self.off = struct.unpack('>18I', d[0:72])
        self.addr = struct.unpack('>18I', d[0x48:0x90])
        self.size = struct.unpack('>18I', d[0x90:0xd8])
        self.bss_addr, self.bss_size, self.entry = struct.unpack('>3I', d[0xd8:0xe4])
        self.sections = [(self.off[i], self.addr[i], self.size[i], i < 7)
                         for i in range(18) if self.size[i]]

    def word(self, a):
        for o, ad, s, _ in self.sections:
            if ad <= a < ad + s:
                p = o + a - ad
                return struct.unpack('>I', self.d[p:p + 4])[0]
        return None


def load_symbols(path):
    funcs = []   # (addr, size, name)
    objs = {}    # name -> (addr, size)
    rx = re.compile(r'(\S+) = \.(\w+):0x([0-9A-Fa-f]+); // type:(\w+)(?: size:0x([0-9A-Fa-f]+))?')
    for l in open(path):
        m = rx.match(l)
        if not m:
            continue
        name, sec, a, typ, sz = m.groups()
        a = int(a, 16)
        sz = int(sz, 16) if sz else 0
        if typ == 'function':
            funcs.append((a, sz, name))
        elif typ == 'object':
            objs[name] = (a, sz)
    funcs.sort()
    return funcs, objs
