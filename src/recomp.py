#!/usr/bin/env python3
"""Static recompiler: Gekko/Broadway main.dol -> C++.

usage: recomp.py main.dol symbols.txt outdir [funcs-per-file]
"""
import sys, os, collections, io

# OS idle loop in SelectThread (spins while no thread is runnable): wait for an interrupt instead
IDLE_LOOPS = {0x800CEE28}   # SelectThread idle spin (Gradius ReBirth)


def write_if_changed(path, text):
    if os.path.exists(path) and open(path).read() == text:
        return
    open(path, 'w').write(text)

from dol import Dol, load_symbols
from ppcdec import decode

R = lambda n: f'c->r[{n}]'
RA0 = lambda n: f'c->r[{n}]' if n else '0u'
F = lambda n: f'c->f[{n}]'
P1 = lambda n: f'c->ps1[{n}]'


def u32(v):
    return f'0x{v & 0xffffffff:08X}u'


class Gen:
    def __init__(self, dol, funcs, objs):
        self.dol = dol
        self.funcs = funcs
        self.starts = {a for a, s, n in funcs}
        self.names = {a: n for a, s, n in funcs}
        self.ranges = [(a, a + s) for a, s, n in funcs]
        self.stats = collections.Counter()
        self.hle = {}
        self.stubs = {}
        # jump tables: map function start -> set of targets
        self.jt = collections.defaultdict(set)
        import bisect
        starts = [a for a, s, n in funcs]
        for name, (a, sz) in objs.items():
            if not name.startswith('jumptable_'):
                continue
            for k in range(0, sz, 4):
                t = dol.word(a + k)
                if t is None:
                    continue
                i = bisect.bisect_right(starts, t) - 1
                if i >= 0 and funcs[i][0] <= t < funcs[i][0] + funcs[i][1]:
                    self.jt[funcs[i][0]].add(t)

    # ---------------------------------------------------------------
    def cond(self, bo, bi, out):
        parts = []
        if not bo & 4:
            out.append('c->ctr--;')
            parts.append('c->ctr == 0' if bo & 2 else 'c->ctr != 0')
        if not bo & 16:
            parts.append(f'crb(c,{bi})' if bo & 8 else f'!crb(c,{bi})')
        return ' && '.join(parts) if parts else 'true'

    def call(self, t, pc):
        if t in self.starts:
            return f'f_{t:08X}(c);'
        inl = self.inline_seq(t)
        if inl is not None:
            self.stats['inlined_savegpr'] += 1
            return inl
        self.stats['call_mid_function'] += 1
        return f'dispatch(c,{u32(t)});'

    def inline_seq(self, t):
        # CodeWarrior _savegpr_N/_restgpr_N/_savefpr/_restfpr: run of ld/st off r11 then blr
        body = []
        pc = t
        for _ in range(48):
            w = self.dol.word(pc)
            if w is None:
                return None
            m, f = decode(w)
            if m == 'bclr' and f['bo'] == 20 and not f['lk']:
                return '{ ' + ' '.join(body) + ' }'
            if m not in ('stw', 'lwz', 'stfd', 'lfd', 'psq_st', 'psq_l') or f['ra'] != 11:
                return None
            tmp = []
            self.ins(pc, w, 0, 0, set(), tmp)
            body += tmp
            pc += 4
        return None

    def ins(self, pc, w, start, end, labels, out):
        m, f = decode(w)
        d, a, b, rc = f['rd'], f['ra'], f['rb'], f['rc']
        simm, uimm = f['simm'], f['uimm']
        e = out.append
        rec = lambda v: e(f'cr0(c,{v});') if rc else None
        if m is None:
            e(f'unimpl(c,{u32(pc)},"{w:08X}");')
            self.stats['unknown'] += 1
            return
        # ---------------- branches ----------------
        if m == 'b':
            t = (f['li'] if f['aa'] else pc + f['li']) & 0xffffffff
            if f['lk']:
                e(f'c->lr={u32(pc + 4)}; {self.call(t, pc)}')
            elif start <= t < end:
                e(('IRQCHK(c); ' if t <= pc else '') + f'goto L_{t:08X};')
            else:
                e(f'{self.call(t, pc)} return;')
            return
        if m == 'bc':
            t = (f['bd'] if f['aa'] else pc + f['bd']) & 0xffffffff
            pre = []
            cnd = self.cond(f['bo'], f['bi'], pre)
            for p in pre:
                e(p)
            if f['lk']:
                e(f'if ({cnd}) {{ c->lr={u32(pc + 4)}; {self.call(t, pc)} }}')
            elif start <= t < end:
                chk = ('IDLEWAIT(c); ' if pc in IDLE_LOOPS else 'IRQCHK(c); ') if t <= pc else ''
                e(f'if ({cnd}) {{ ' + chk + f'goto L_{t:08X}; }}')
            else:
                e(f'if ({cnd}) {{ {self.call(t, pc)} return; }}')
            return
        if m == 'bclr':
            pre = []
            cnd = self.cond(f['bo'], f['bi'], pre)
            for p in pre:
                e(p)
            if f['lk']:
                e(f'if ({cnd}) {{ uint32_t t=c->lr; c->lr={u32(pc + 4)}; dispatch(c,t); }}')
            else:
                e('return;' if cnd == 'true' else f'if ({cnd}) return;')
            return
        if m == 'bcctr':
            pre = []
            cnd = self.cond(f['bo'] | 4, f['bi'], pre)
            for p in pre:
                e(p)
            if f['lk']:
                e(f'if ({cnd}) {{ c->lr={u32(pc + 4)}; dispatch(c,c->ctr); }}')
            else:
                tg = sorted(self.jt.get(start, ()))
                body = ''
                if tg:
                    body = 'switch (c->ctr) { ' + ' '.join(f'case {u32(t)}: goto L_{t:08X};' for t in tg) + ' default: break; } '
                e(f'if ({cnd}) {{ {body}dispatch(c,c->ctr); return; }}')
            return
        if m == 'sc':
            e(f'sc(c,{u32(pc)});'); return
        if m == 'rfi':
            e('return; /* rfi */'); return
        # ---------------- integer arithmetic ----------------
        if m == 'addi':
            e(f'{R(d)}={RA0(a)}+{u32(simm)};'); return
        if m == 'addis':
            e(f'{R(d)}={RA0(a)}+{u32(simm << 16)};'); return
        if m == 'addic':
            e(f'{R(d)}=addc(c,{R(a)},{u32(simm)},0);'); return
        if m == 'addic.':
            e(f'{R(d)}=addc(c,{R(a)},{u32(simm)},0); cr0(c,{R(d)});'); return
        if m == 'subfic':
            e(f'{R(d)}=addc(c,~{R(a)},{u32(simm)},1);'); return
        if m == 'mulli':
            e(f'{R(d)}=(uint32_t)((int32_t){R(a)}*(int32_t){simm});'); return
        if m == 'cmpi':
            e(f'cmps(c,{f["crf"]},(int32_t){R(a)},{simm});'); return
        if m == 'cmpli':
            e(f'cmpu(c,{f["crf"]},{R(a)},{u32(uimm)});'); return
        if m == 'cmp':
            e(f'cmps(c,{f["crf"]},(int32_t){R(a)},(int32_t){R(b)});'); return
        if m == 'cmpl':
            e(f'cmpu(c,{f["crf"]},{R(a)},{R(b)});'); return
        if m in ('ori', 'oris', 'xori', 'xoris', 'andi.', 'andis.'):
            v = uimm << 16 if m.endswith(('is', 'is.')) else uimm
            op = {'o': '|', 'x': '^', 'a': '&'}[m[0]]
            e(f'{R(a)}={R(d)}{op}{u32(v)};')
            if m.startswith('and'):
                e(f'cr0(c,{R(a)});')
            return
        three = {'add': '{A}+{B}', 'subf': '{B}-{A}', 'mullw': '(uint32_t)((int32_t){A}*(int32_t){B})',
                 'mulhw': '(uint32_t)(((int64_t)(int32_t){A}*(int64_t)(int32_t){B})>>32)',
                 'mulhwu': '(uint32_t)(((uint64_t){A}*(uint64_t){B})>>32)',
                 'divw': 'divw((int32_t){A},(int32_t){B})', 'divwu': 'divwu({A},{B})',
                 'addc': 'addc(c,{A},{B},0)', 'adde': 'addc(c,{A},{B},c->xer_ca)',
                 'subfc': 'addc(c,~{A},{B},1)', 'subfe': 'addc(c,~{A},{B},c->xer_ca)'}
        if m in three:
            e(f'{R(d)}={three[m].format(A=R(a), B=R(b))};'); rec(R(d)); return
        two = {'neg': '0u-{A}', 'addze': 'addc(c,{A},0,c->xer_ca)', 'addme': 'addc(c,{A},0xFFFFFFFFu,c->xer_ca)',
               'subfze': 'addc(c,~{A},0,c->xer_ca)', 'subfme': 'addc(c,~{A},0xFFFFFFFFu,c->xer_ca)'}
        if m in two:
            e(f'{R(d)}={two[m].format(A=R(a))};'); rec(R(d)); return
        logic = {'and': '{S}&{B}', 'or': '{S}|{B}', 'xor': '{S}^{B}', 'nor': '~({S}|{B})', 'nand': '~({S}&{B})',
                 'andc': '{S}&~{B}', 'orc': '{S}|~{B}', 'eqv': '~({S}^{B})',
                 'slw': '(({B})&0x20)?0u:({S}<<(({B})&31))', 'srw': '(({B})&0x20)?0u:({S}>>(({B})&31))',
                 'sraw': 'sraw(c,{S},({B})&63)'}
        if m in logic:
            e(f'{R(a)}={logic[m].format(S=R(d), B=R(b))};'); rec(R(a)); return
        if m == 'srawi':
            e(f'{R(a)}=sraw(c,{R(d)},{f["sh"]});'); rec(R(a)); return
        if m == 'extsb':
            e(f'{R(a)}=(uint32_t)(int32_t)(int8_t){R(d)};'); rec(R(a)); return
        if m == 'extsh':
            e(f'{R(a)}=(uint32_t)(int32_t)(int16_t){R(d)};'); rec(R(a)); return
        if m == 'cntlzw':
            e(f'{R(a)}=cntlz({R(d)});'); rec(R(a)); return
        if m in ('rlwinm', 'rlwimi', 'rlwnm'):
            mk = u32(self.mask(f['mb'], f['me']))
            if m == 'rlwinm':
                e(f'{R(a)}=rotl({R(d)},{f["sh"]})&{mk};')
            elif m == 'rlwnm':
                e(f'{R(a)}=rotl({R(d)},{R(b)}&31)&{mk};')
            else:
                e(f'{R(a)}=(rotl({R(d)},{f["sh"]})&{mk})|({R(a)}&~{mk});')
            rec(R(a)); return
        # ---------------- loads / stores ----------------
        ld = {'lwz': 'R32', 'lbz': 'R8', 'lhz': 'R16', 'lha': '(uint32_t)(int32_t)(int16_t)R16'}
        st = {'stw': 'W32', 'stb': 'W8', 'sth': 'W16'}
        base = m.rstrip('ux') if m not in ('lhzx', 'lhax', 'lhzux', 'lhaux') else m[:3]
        if m in ('lwz', 'lbz', 'lhz', 'lha'):
            e(f'{R(d)}={ld[m]}({RA0(a)}+{u32(simm)});'); return
        if m in ('lwzu', 'lbzu', 'lhzu', 'lhau'):
            e(f'{{uint32_t ea={R(a)}+{u32(simm)}; {R(d)}={ld[m[:-1]]}(ea); {R(a)}=ea;}}'); return
        if m in ('lwzx', 'lbzx', 'lhzx', 'lhax'):
            e(f'{R(d)}={ld[m[:-1]]}({RA0(a)}+{R(b)});'); return
        if m in ('lwzux', 'lbzux', 'lhzux', 'lhaux'):
            e(f'{{uint32_t ea={R(a)}+{R(b)}; {R(d)}={ld[m[:-2]]}(ea); {R(a)}=ea;}}'); return
        if m in ('stw', 'stb', 'sth'):
            e(f'{st[m]}({RA0(a)}+{u32(simm)},{R(d)});'); return
        if m in ('stwu', 'stbu', 'sthu'):
            e(f'{{uint32_t ea={R(a)}+{u32(simm)}; {st[m[:-1]]}(ea,{R(d)}); {R(a)}=ea;}}'); return
        if m in ('stwx', 'stbx', 'sthx'):
            e(f'{st[m[:-1]]}({RA0(a)}+{R(b)},{R(d)});'); return
        if m in ('stwux', 'stbux', 'sthux'):
            e(f'{{uint32_t ea={R(a)}+{R(b)}; {st[m[:-2]]}(ea,{R(d)}); {R(a)}=ea;}}'); return
        if m == 'lwbrx':
            e(f'{R(d)}=__builtin_bswap32(R32({RA0(a)}+{R(b)}));'); return
        if m == 'lhbrx':
            e(f'{R(d)}=__builtin_bswap16(R16({RA0(a)}+{R(b)}));'); return
        if m == 'stwbrx':
            e(f'W32({RA0(a)}+{R(b)},__builtin_bswap32({R(d)}));'); return
        if m == 'sthbrx':
            e(f'W16({RA0(a)}+{R(b)},__builtin_bswap16((uint16_t){R(d)}));'); return
        if m == 'lmw':
            e(f'{{uint32_t ea={RA0(a)}+{u32(simm)}; for(int i={d};i<32;i++,ea+=4) c->r[i]=R32(ea);}}'); return
        if m == 'stmw':
            e(f'{{uint32_t ea={RA0(a)}+{u32(simm)}; for(int i={d};i<32;i++,ea+=4) W32(ea,c->r[i]);}}'); return
        if m == 'lwarx':
            e(f'{R(d)}=R32({RA0(a)}+{R(b)});'); return
        if m == 'stwcx.':
            e(f'W32({RA0(a)}+{R(b)},{R(d)}); setcr(c,0,2|c->xer_so);'); return
        # FP loads/stores (lfs fills ps0 and ps1)
        if m in ('lfs', 'lfsu', 'lfsx', 'lfsux', 'lfd', 'lfdu', 'lfdx', 'lfdux'):
            idx = 'x' in m
            upd = m.endswith('u') or m.endswith('ux')
            ea = f'{R(a) if upd else RA0(a)}+' + (R(b) if idx else u32(simm))
            if m.startswith('lfs'):
                e(f'{{uint32_t ea={ea}; {F(d)}={P1(d)}=RF32(ea);' + (f' {R(a)}=ea;' if upd else '') + '}')
            else:
                e(f'{{uint32_t ea={ea}; {F(d)}=RF64(ea);' + (f' {R(a)}=ea;' if upd else '') + '}')
            return
        if m in ('stfs', 'stfsu', 'stfsx', 'stfsux', 'stfd', 'stfdu', 'stfdx', 'stfdux'):
            idx = 'x' in m
            upd = m.endswith('u') or m.endswith('ux')
            ea = f'{R(a) if upd else RA0(a)}+' + (R(b) if idx else u32(simm))
            fn = 'WF32' if m.startswith('stfs') else 'WF64'
            e(f'{{uint32_t ea={ea}; {fn}(ea,{F(d)});' + (f' {R(a)}=ea;' if upd else '') + '}')
            return
        if m == 'stfiwx':
            e(f'W32({RA0(a)}+{R(b)},fbits_lo({F(d)}));'); return
        # ---------------- paired-single load/store ----------------
        if m in ('psq_l', 'psq_lu'):
            ea = f'{RA0(a) if m == "psq_l" else R(a)}+{u32(f["d12"])}'
            e(f'{{uint32_t ea={ea}; psq_load(c,{d},ea,{f["w"]},{f["i"]});' + (f' {R(a)}=ea;' if m == 'psq_lu' else '') + '}'); return
        if m in ('psq_st', 'psq_stu'):
            ea = f'{RA0(a) if m == "psq_st" else R(a)}+{u32(f["d12"])}'
            e(f'{{uint32_t ea={ea}; psq_store(c,{d},ea,{f["w"]},{f["i"]});' + (f' {R(a)}=ea;' if m == 'psq_stu' else '') + '}'); return
        if m in ('psq_lx', 'psq_lux'):
            ea = f'{RA0(a) if m == "psq_lx" else R(a)}+{R(b)}'
            e(f'{{uint32_t ea={ea}; psq_load(c,{d},ea,{f["w"]},{f["i"]});' + (f' {R(a)}=ea;' if m == 'psq_lux' else '') + '}'); return
        if m in ('psq_stx', 'psq_stux'):
            ea = f'{RA0(a) if m == "psq_stx" else R(a)}+{R(b)}'
            e(f'{{uint32_t ea={ea}; psq_store(c,{d},ea,{f["w"]},{f["i"]});' + (f' {R(a)}=ea;' if m == 'psq_stux' else '') + '}'); return
        # ---------------- FP arithmetic ----------------
        C = f['rc_']
        fa = {'fadd': '{A}+{B}', 'fsub': '{A}-{B}', 'fmul': '{A}*{C}', 'fdiv': '{A}/{B}',
              'fmadd': 'std::fma({A},{C},{B})', 'fmsub': 'std::fma({A},{C},-{B})',
              'fnmadd': '-std::fma({A},{C},{B})', 'fnmsub': '-std::fma({A},{C},-{B})',
              'fsqrt': 'std::sqrt({B})', 'fsel': '({A}>=0.0)?{C}:{B}'}
        if m in fa:
            e(f'{F(d)}={fa[m].format(A=F(a), B=F(b), C=F(C))};'); return
        if m[:-1] in fa and m.endswith('s'):
            ex = fa[m[:-1]].format(A=F(a), B=F(b), C=F(C))
            e(f'{F(d)}={P1(d)}=S({ex});'); return
        if m == 'fres':
            e(f'{F(d)}={P1(d)}=fres({F(b)});'); return
        if m == 'frsqrte':
            e(f'{F(d)}=frsqrte({F(b)});'); return
        if m == 'fmr':
            e(f'{F(d)}={F(b)};'); return
        if m == 'fneg':
            e(f'{F(d)}=-{F(b)};'); return
        if m == 'fabs':
            e(f'{F(d)}=std::fabs({F(b)});'); return
        if m == 'fnabs':
            e(f'{F(d)}=-std::fabs({F(b)});'); return
        if m == 'frsp':
            e(f'{F(d)}={P1(d)}=S({F(b)});'); return
        if m in ('fctiw', 'fctiwz'):
            e(f'{F(d)}=u2d(0xFFF8000000000000ull|fctiw(c,{F(b)},{"true" if m == "fctiwz" else "false"}));'); return
        if m in ('fcmpu', 'fcmpo'):
            e(f'fcmp(c,{f["crf"]},{F(a)},{F(b)});'); return
        if m == 'mffs':
            e(f'{F(d)}=u2d((uint64_t)c->fpscr);'); return
        if m == 'mtfsf':
            e(f'c->fpscr=(uint32_t)d2u({F(b)});'); return
        if m in ('mtfsb0', 'mtfsb1'):
            bit = 31 - d
            e(f'c->fpscr{"&=~" if m == "mtfsb0" else "|="}{u32(1 << bit)};'); return
        # ---------------- paired-single arithmetic ----------------
        def ps2(expr0, expr1):
            e(f'{{double t0=S({expr0}), t1=S({expr1}); {F(d)}=t0; {P1(d)}=t1;}}')
        A0, A1, B0, B1, C0, C1 = F(a), P1(a), F(b), P1(b), F(C), P1(C)
        psops = {
            'ps_add': (f'{A0}+{B0}', f'{A1}+{B1}'), 'ps_sub': (f'{A0}-{B0}', f'{A1}-{B1}'),
            'ps_mul': (f'{A0}*{C0}', f'{A1}*{C1}'), 'ps_div': (f'{A0}/{B0}', f'{A1}/{B1}'),
            'ps_madd': (f'std::fma({A0},{C0},{B0})', f'std::fma({A1},{C1},{B1})'),
            'ps_msub': (f'std::fma({A0},{C0},-{B0})', f'std::fma({A1},{C1},-{B1})'),
            'ps_nmadd': (f'-std::fma({A0},{C0},{B0})', f'-std::fma({A1},{C1},{B1})'),
            'ps_nmsub': (f'-std::fma({A0},{C0},-{B0})', f'-std::fma({A1},{C1},-{B1})'),
            'ps_muls0': (f'{A0}*{C0}', f'{A1}*{C0}'), 'ps_muls1': (f'{A0}*{C1}', f'{A1}*{C1}'),
            'ps_madds0': (f'std::fma({A0},{C0},{B0})', f'std::fma({A1},{C0},{B1})'),
            'ps_madds1': (f'std::fma({A0},{C1},{B0})', f'std::fma({A1},{C1},{B1})'),
            'ps_sum0': (f'{A0}+{B1}', C1), 'ps_sum1': (C0, f'{A0}+{B1}'),
            'ps_sel': (f'({A0}>=0.0)?{C0}:{B0}', f'({A1}>=0.0)?{C1}:{B1}'),
            'ps_merge00': (A0, B0), 'ps_merge01': (A0, B1), 'ps_merge10': (A1, B0), 'ps_merge11': (A1, B1),
            'ps_res': (f'fres({B0})', f'fres({B1})'), 'ps_rsqrte': (f'frsqrte({B0})', f'frsqrte({B1})'),
        }
        if m in psops:
            ps2(*psops[m]); return
        un = {'ps_mr': ('{0}', '{0}'), 'ps_neg': ('-{0}', '-{0}'), 'ps_abs': ('std::fabs({0})', 'std::fabs({0})'),
              'ps_nabs': ('-std::fabs({0})', '-std::fabs({0})')}
        if m in un:
            x0, x1 = un[m]
            e(f'{{double t0={x0.format(B0)}, t1={x1.format(B1)}; {F(d)}=t0; {P1(d)}=t1;}}'); return
        if m in ('ps_cmpu0', 'ps_cmpo0'):
            e(f'fcmp(c,{f["crf"]},{A0},{B0});'); return
        if m in ('ps_cmpu1', 'ps_cmpo1'):
            e(f'fcmp(c,{f["crf"]},{A1},{B1});'); return
        # ---------------- CR ops ----------------
        crops = {'crxor': '{A}^{B}', 'cror': '{A}|{B}', 'crand': '{A}&{B}', 'crnor': '!({A}|{B})',
                 'crnand': '!({A}&{B})', 'creqv': '!({A}^{B})', 'crandc': '{A}&!{B}', 'crorc': '{A}|!{B}'}
        if m in crops:
            ex = crops[m].format(A=f'crb(c,{f["crba"]})', B=f'crb(c,{f["crbb"]})')
            e(f'setcrb(c,{f["crbd"]},{ex});'); return
        if m == 'mcrf':
            e(f'setcr(c,{f["crfd"]},(c->cr>>{28 - 4 * f["crfs"]})&15);'); return
        if m == 'mfcr':
            e(f'{R(d)}=c->cr;'); return
        if m == 'mtcrf':
            msk = 0
            for i in range(8):
                if f['crm'] & (0x80 >> i):
                    msk |= 0xF << (28 - 4 * i)
            e(f'c->cr=(c->cr&~{u32(msk)})|({R(d)}&{u32(msk)});'); return
        # ---------------- SPR / system ----------------
        if m == 'mfspr':
            s = f['spr']
            if s == 8:
                e(f'{R(d)}=c->lr;')
            elif s == 9:
                e(f'{R(d)}=c->ctr;')
            else:
                e(f'{R(d)}=mfspr(c,{s});')
            return
        if m == 'mtspr':
            s = f['spr']
            if s == 8:
                e(f'c->lr={R(d)};')
            elif s == 9:
                e(f'c->ctr={R(d)};')
            else:
                e(f'mtspr(c,{s},{R(d)});')
            return
        if m == 'mftb':
            e(f'{R(d)}=mftb(c,{f["spr"]});'); return
        if m == 'mfmsr':
            e(f'{R(d)}=c->msr;'); return
        if m == 'mtmsr':
            e(f'c->msr={R(d)};'); return
        if m in ('mfsr', 'mtsr'):
            e(f'/* {m} */'); return
        if m in ('dcbz', 'dcbz_l'):
            e(f'dcbz({RA0(a)}+{R(b)});'); return
        if m in ('sync', 'isync', 'eieio', 'dcbf', 'dcbst', 'dcbt', 'dcbtst', 'dcbi', 'icbi', 'tw', 'twi', 'tlbie', 'tlbsync'):
            e(f'/* {m} */'); return
        e(f'unimpl(c,{u32(pc)},"{m}");')
        self.stats['unhandled_' + m] += 1

    @staticmethod
    def mask(mb, me):
        m1 = 0xFFFFFFFF >> mb
        m2 = 0xFFFFFFFF if me == 31 else (~(0xFFFFFFFF >> (me + 1))) & 0xFFFFFFFF
        return (m1 & m2) if mb <= me else (m1 | m2)

    def function(self, start, size, name):
        end = start + size
        labels = set()
        for pc in range(start, end, 4):
            m, f = decode(self.dol.word(pc))
            if m == 'b' and not f['lk']:
                t = (f['li'] if f['aa'] else pc + f['li']) & 0xffffffff
                if start <= t < end:
                    labels.add(t)
            elif m == 'bc' and not f['lk']:
                t = (f['bd'] if f['aa'] else pc + f['bd']) & 0xffffffff
                if start <= t < end:
                    labels.add(t)
        # find switch tables the analyzer missed: lis/addi base near each bctr
        for pc in range(start, end, 4):
            m, f = decode(self.dol.word(pc))
            if m == 'bcctr' and not f['lk']:
                hi = {}
                # lis may be far back (callee-saved base register, e.g. r20 in MSL __pformatter);
                # the addi that forms the table address is close to the bctr
                for q in range(start, pc, 4):
                    mm, ff = decode(self.dol.word(q))
                    if mm == 'addis' and ff['ra'] == 0:
                        hi[ff['rd']] = (ff['simm'] << 16) & 0xffffffff
                    elif q >= pc - 64 and mm == 'addi' and ff['ra'] in hi:
                        base = (hi[ff['ra']] + ff['simm']) & 0xffffffff
                        k = 0
                        while k < 512:
                            t = self.dol.word(base + 4 * k)
                            if t is None or not (start <= t < end) or t & 3:
                                break
                            self.jt[start].add(t)
                            k += 1
                        if k:
                            self.stats['jumptable_found'] += 1
        labels |= self.jt.get(start, set())
        out = [f'// {name}', f'void f_{start:08X}(Ctx* __restrict c) {{']
        if start in self.stubs:
            out.append(f'  stub_log(0x{start:08X}u); ' + ('' if self.stubs[start] == 'void' else f'c->r[3]={self.stubs[start]};') + ' return;')
            out.append('}')
            return '\n'.join(out)
        if start in self.hle:
            out.insert(0, f'void hle_{self.hle[start]}(Ctx*);')
            out.append(f'  hle_{self.hle[start]}(c);')
            out.append('}')
            return '\n'.join(out)
        if start >= 0x80006F20 and not name.startswith(('fn_', 'dtor_', '@', 'jumptable')):
            out.append(f'  trace_call(0x{start:08X}u);')
        for pc in range(start, end, 4):
            if pc in labels:
                out.append(f'L_{pc:08X}:;')
            body = []
            self.ins(pc, self.dol.word(pc), start, end, labels, body)
            out.append('  ' + ' '.join(body) + f' // {pc:08X}')
        out.append('}')
        return '\n'.join(out)


def main():
    dolp, symp, outdir = sys.argv[1:4]
    per = int(sys.argv[4]) if len(sys.argv) > 4 else 300
    dol = Dol(dolp)
    funcs, objs = load_symbols(symp)
    g = Gen(dol, funcs, objs)
    byname = {n: a for a, s, n in funcs}
    hlefile = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'hle.txt')
    if os.path.exists(hlefile):
        for l in open(hlefile):
            l = l.split('#')[0].strip()
            ret = None
            if '=' in l:
                l, ret = [x.strip() for x in l.split('=', 1)]
            if l and l in byname:
                if ret is not None:
                    g.stubs[byname[l]] = ret
                else:
                    g.hle[byname[l]] = l
            elif l:
                print('hle: unknown symbol', l)
    os.makedirs(outdir, exist_ok=True)
    h = io.StringIO()
    if True:
        h.write('#pragma once\n#include "ppc.h"\n')

        for a, s, n in funcs:
            h.write(f'void f_{a:08X}(Ctx*);\n')
    write_if_changed(f'{outdir}/funcs.h', h.getvalue())
    with open(f'{outdir}/table.cpp', 'w') as t:
        t.write('#include "funcs.h"\n#include "table.h"\nconst FnEntry FN_TABLE[] = {\n')
        for a, s, n in funcs:
            nm = n.replace('\\', '\\\\').replace('"', '\\"')
            t.write(f'  {{0x{a:08X}u, 0x{s:X}u, f_{a:08X}, "{nm}"}},\n')
        t.write(f'}};\nconst unsigned FN_COUNT = {len(funcs)};\n')
    with open(f'{outdir}/table.h', 'w') as t:
        t.write('#pragma once\n#include "ppc.h"\nstruct FnEntry { uint32_t addr, size; GuestFn fn; const char* name; };\n'
                'extern const FnEntry FN_TABLE[]; extern const unsigned FN_COUNT;\n')
    n = 0
    for i in range(0, len(funcs), per):
        o = io.StringIO()
        o.write('#include "funcs.h"\n#pragma GCC diagnostic ignored "-Wunused-label"\n\n')
        for a, s, nm in funcs[i:i + per]:
            o.write(g.function(a, s, nm) + '\n\n')
        write_if_changed(f'{outdir}/code_{n:03d}.cpp', o.getvalue())
        n += 1
    print('files', n, dict(g.stats))


if __name__ == '__main__':
    main()
