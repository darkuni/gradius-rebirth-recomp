"""Minimal Gekko/Broadway instruction decoder: returns (mnemonic, fields-dict)."""

def sext(v, bits):
    return v - (1 << bits) if v & (1 << (bits - 1)) else v

OP31 = {
    0: 'cmp', 4: 'tw', 8: 'subfc', 10: 'addc', 11: 'mulhwu', 19: 'mfcr', 20: 'lwarx', 23: 'lwzx',
    24: 'slw', 26: 'cntlzw', 28: 'and', 32: 'cmpl', 40: 'subf', 54: 'dcbst', 55: 'lwzux',
    60: 'andc', 75: 'mulhw', 83: 'mfmsr', 86: 'dcbf', 87: 'lbzx', 104: 'neg', 119: 'lbzux',
    124: 'nor', 136: 'subfe', 138: 'adde', 144: 'mtcrf', 146: 'mtmsr', 150: 'stwcx.', 151: 'stwx',
    183: 'stwux', 200: 'subfze', 202: 'addze', 210: 'mtsr', 215: 'stbx', 232: 'subfme', 234: 'addme',
    235: 'mullw', 242: 'mtsrin', 246: 'dcbtst', 247: 'stbux', 266: 'add', 278: 'dcbt', 279: 'lhzx',
    284: 'eqv', 306: 'tlbie', 310: 'eciwx', 311: 'lhzux', 316: 'xor', 339: 'mfspr', 343: 'lhax',
    370: 'tlbia', 371: 'mftb', 375: 'lhaux', 407: 'sthx', 412: 'orc', 438: 'ecowx', 439: 'sthux',
    444: 'or', 459: 'divwu', 467: 'mtspr', 470: 'dcbi', 476: 'nand', 491: 'divw', 512: 'mcrxr',
    533: 'lswx', 534: 'lwbrx', 535: 'lfsx', 536: 'srw', 566: 'tlbsync', 567: 'lfsux', 595: 'mfsr',
    597: 'lswi', 598: 'sync', 599: 'lfdx', 631: 'lfdux', 659: 'mfsrin', 661: 'stswx', 662: 'stwbrx',
    663: 'stfsx', 695: 'stfsux', 725: 'stswi', 727: 'stfdx', 759: 'stfdux', 790: 'lhbrx', 792: 'sraw',
    824: 'srawi', 854: 'eieio', 918: 'sthbrx', 922: 'extsh', 954: 'extsb', 982: 'icbi', 983: 'stfiwx',
    1014: 'dcbz',
}
OE_OPS = {8, 10, 40, 104, 136, 138, 200, 202, 232, 234, 235, 266, 459, 491}

OP19 = {0: 'mcrf', 16: 'bclr', 33: 'crnor', 50: 'rfi', 129: 'crandc', 150: 'isync', 193: 'crxor',
        225: 'crnand', 257: 'crand', 289: 'creqv', 417: 'crorc', 449: 'cror', 528: 'bcctr'}

OP59 = {18: 'fdivs', 20: 'fsubs', 21: 'fadds', 22: 'fsqrts', 24: 'fres', 25: 'fmuls',
        28: 'fmsubs', 29: 'fmadds', 30: 'fnmsubs', 31: 'fnmadds'}
OP63A = {18: 'fdiv', 20: 'fsub', 21: 'fadd', 22: 'fsqrt', 23: 'fsel', 25: 'fmul', 26: 'frsqrte',
         28: 'fmsub', 29: 'fmadd', 30: 'fnmsub', 31: 'fnmadd'}
OP63B = {0: 'fcmpu', 12: 'frsp', 14: 'fctiw', 15: 'fctiwz', 32: 'fcmpo', 38: 'mtfsb1', 40: 'fneg',
         64: 'mcrfs', 70: 'mtfsb0', 72: 'fmr', 134: 'mtfsfi', 136: 'fnabs', 264: 'fabs', 583: 'mffs',
         711: 'mtfsf'}
# paired singles (opcode 4)
OP4A = {18: 'ps_div', 20: 'ps_sub', 21: 'ps_add', 23: 'ps_sel', 24: 'ps_res', 25: 'ps_mul',
        26: 'ps_rsqrte', 28: 'ps_msub', 29: 'ps_madd', 30: 'ps_nmsub', 31: 'ps_nmadd',
        10: 'ps_sum0', 11: 'ps_sum1', 12: 'ps_muls0', 13: 'ps_muls1', 14: 'ps_madds0', 15: 'ps_madds1'}
OP4B = {0: 'ps_cmpu0', 32: 'ps_cmpo0', 40: 'ps_neg', 64: 'ps_cmpu1', 72: 'ps_mr', 96: 'ps_cmpo1',
        136: 'ps_nabs', 264: 'ps_abs', 528: 'ps_merge00', 560: 'ps_merge01', 592: 'ps_merge10',
        624: 'ps_merge11', 1014: 'dcbz_l'}
OP4C = {6: 'psq_lx', 7: 'psq_stx', 38: 'psq_lux', 39: 'psq_stux'}

DFORM = {14: 'addi', 15: 'addis', 12: 'addic', 13: 'addic.', 7: 'mulli', 8: 'subfic',
         10: 'cmpli', 11: 'cmpi', 24: 'ori', 25: 'oris', 26: 'xori', 27: 'xoris', 28: 'andi.', 29: 'andis.',
         32: 'lwz', 33: 'lwzu', 34: 'lbz', 35: 'lbzu', 36: 'stw', 37: 'stwu', 38: 'stb', 39: 'stbu',
         40: 'lhz', 41: 'lhzu', 42: 'lha', 43: 'lhau', 44: 'sth', 45: 'sthu', 46: 'lmw', 47: 'stmw',
         48: 'lfs', 49: 'lfsu', 50: 'lfd', 51: 'lfdu', 52: 'stfs', 53: 'stfsu', 54: 'stfd', 55: 'stfdu',
         3: 'twi'}


def decode(w):
    op = w >> 26
    f = dict(rd=(w >> 21) & 31, ra=(w >> 16) & 31, rb=(w >> 11) & 31, rc_=(w >> 6) & 31,
             rc=w & 1, simm=sext(w & 0xffff, 16), uimm=w & 0xffff, raw=w)
    if op in DFORM:
        m = DFORM[op]
        if m in ('cmpi', 'cmpli'):
            f['crf'] = (w >> 23) & 7
        return m, f
    if op == 18:
        f['li'] = sext(w & 0x03fffffc, 26); f['aa'] = (w >> 1) & 1; f['lk'] = w & 1
        return 'b', f
    if op == 16:
        f['bo'] = (w >> 21) & 31; f['bi'] = (w >> 16) & 31
        f['bd'] = sext(w & 0xfffc, 16); f['aa'] = (w >> 1) & 1; f['lk'] = w & 1
        return 'bc', f
    if op == 17:
        return 'sc', f
    if op == 19:
        xo = (w >> 1) & 0x3ff
        m = OP19.get(xo)
        if m:
            f['bo'] = (w >> 21) & 31; f['bi'] = (w >> 16) & 31; f['lk'] = w & 1
            f['crbd'], f['crba'], f['crbb'] = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
            f['crfd'], f['crfs'] = (w >> 23) & 7, (w >> 18) & 7
            return m, f
        return None, f
    if op in (20, 21, 23):
        f['sh'] = (w >> 11) & 31; f['mb'] = (w >> 6) & 31; f['me'] = (w >> 1) & 31
        return {20: 'rlwimi', 21: 'rlwinm', 23: 'rlwnm'}[op], f
    if op == 31:
        xo = (w >> 1) & 0x3ff
        m = OP31.get(xo)
        if m is None and (xo & 0x1ff) in OE_OPS:
            m = OP31[xo & 0x1ff]; f['oe'] = 1
        if m in ('cmp', 'cmpl', 'mcrxr'):
            f['crf'] = (w >> 23) & 7
        if m in ('mfspr', 'mtspr', 'mftb'):
            f['spr'] = ((w >> 16) & 31) | (((w >> 11) & 31) << 5)
        if m == 'mtcrf':
            f['crm'] = (w >> 12) & 0xff
        if m == 'srawi':
            f['sh'] = (w >> 11) & 31
        return m, f
    if op == 59:
        xo = (w >> 1) & 31
        return OP59.get(xo), f
    if op == 63:
        xo = (w >> 1) & 0x3ff
        if (xo & 31) in OP63A and (xo & 31) >= 18:
            m = OP63A[xo & 31]
        else:
            m = OP63B.get(xo)
        if m in ('fcmpu', 'fcmpo'):
            f['crf'] = (w >> 23) & 7
        if m == 'mtfsf':
            f['fm'] = (w >> 17) & 0xff
        return m, f
    if op == 4:
        xo10 = (w >> 1) & 0x3ff
        xo5 = (w >> 1) & 31
        xo6 = (w >> 1) & 63
        if xo6 in OP4C:
            f['w'] = (w >> 10) & 1; f['i'] = (w >> 7) & 7
            return OP4C[xo6], f
        if xo10 in OP4B:
            m = OP4B[xo10]
            if m.startswith('ps_cmp'):
                f['crf'] = (w >> 23) & 7
            return m, f
        if xo5 in OP4A:
            return OP4A[xo5], f
        return None, f
    if op in (56, 57, 60, 61):
        f['w'] = (w >> 15) & 1; f['i'] = (w >> 12) & 7; f['d12'] = sext(w & 0xfff, 12)
        return {56: 'psq_l', 57: 'psq_lu', 60: 'psq_st', 61: 'psq_stu'}[op], f
    return None, f
