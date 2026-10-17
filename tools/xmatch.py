"""Match functions between two DOLs by masked instruction signature.
usage: xmatch.py ref.dol ref_symbols.txt our.dol our_symbols.txt out.json"""
import sys,struct,re,json,hashlib,collections
sys.path.insert(0,'/home/claude/choco/src')
from dol import Dol, load_symbols
def mask(w):
    op=w>>26
    if op in (18,): return w&0xFC000003          # b/bl
    if op==16: return w&0xFFFF0003               # bc
    if op in (14,15,24,25,26,27,28,29,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,10,11,12,13,7,8):
        return w&0xFFFF0000
    return w
def sigs(dol,funcs):
    out={}
    for a,s,n in funcs:
        if s<8: continue
        ws=[dol.word(a+i) for i in range(0,s,4)]
        if None in ws: continue
        h=hashlib.sha1(struct.pack('>%dI'%len(ws),*[mask(w) for w in ws])).hexdigest()
        out[a]=(h,s,n)
    return out
rd,rs,od,os_,outp=sys.argv[1:6]
R=Dol(rd);rf,_=load_symbols(rs);O=Dol(od);of,_=load_symbols(os_)
RS=sigs(R,rf);OS=sigs(O,of)
rby=collections.defaultdict(list);oby=collections.defaultdict(list)
for a,(h,s,n) in RS.items(): rby[h].append(a)
for a,(h,s,n) in OS.items(): oby[h].append(a)
m={}
for h,oa in oby.items():
    ra=rby.get(h,[])
    if len(oa)==1 and len(ra)==1: m[oa[0]]=ra[0]
# propagate through calls: if matched pair's bl targets correspond
import itertools
changed=True
while changed:
    changed=False
    for oa,ra in list(m.items()):
        s=OS[oa][1]
        for i in range(0,s,4):
            wo=O.word(oa+i); wr=R.word(ra+i)
            if wo>>26==18 and wr>>26==18 and wo&1 and wr&1:
                def tgt(w,pc):
                    li=w&0x03FFFFFC
                    if li&0x02000000: li-=0x04000000
                    return (pc+li)&0xffffffff
                to=tgt(wo,oa+i); tr=tgt(wr,ra+i)
                if to in OS and tr in RS and to not in m and OS[to][0]==RS[tr][0]:
                    m[to]=tr; changed=True
json.dump({f'{o:08X}':[f'{r:08X}',RS[r][2]] for o,r in m.items()},open(outp,'w'),indent=0)
print('matched',len(m),'of',len(OS),'named in ref:',sum(1 for o,r in m.items() if not RS[r][2].startswith(('fn_','lbl_'))))
