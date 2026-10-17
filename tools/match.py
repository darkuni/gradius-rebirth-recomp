import re,collections,sys,os
R=os.path.expanduser('~/refs');P=os.environ.get('PROJ',os.getcwd())
rx=re.compile(r'(\S+) = \.(text|init):0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)')
def load(p):
    out=[]
    for l in open(p):
        m=rx.match(l)
        if m: out.append((int(m.group(3),16),int(m.group(4),16),m.group(1)))
    out.sort();return out
def objs(p):
    res=[];cur=None
    if not os.path.exists(p): return res
    for l in open(p):
        if l and not l[0].isspace() and l.rstrip().endswith(':') and l.strip()!='Sections:': cur=l.strip()[:-1]
        m=re.match(r'\s+\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)',l)
        if m and cur: res.append((int(m.group(1),16),int(m.group(2),16),cur))
    return res
ours=load(P+'/config/symbols.txt')
S=[s for _,s,_ in ours]
K=5
idx=collections.defaultdict(list)
for i in range(len(S)-K+1): idx[tuple(S[i:i+K])].append(i)
votes=collections.defaultdict(list);REFS={}  # our index -> (runlen, name, ref, obj)
generic=re.compile(r'^(fn_|func_|lbl_|sub_|dtor_|ctor_|@|__sinit|\$\$)')
for ref in ['ogws','spm','mkw','brawl','ss','xeno']:
    fs=load(f'{R}/{ref}.sym');ob=objs(f'{R}/{ref}.spl')
    def obj(a):
        for s,e,n in ob:
            if s<=a<e: return n
        return ''
    T=[s for _,s,_ in fs];seen=set();runs=0
    for j in range(len(T)-K+1):
        for i in idx.get(tuple(T[j:j+K]),[]):
            if (i-j) in seen and False: pass
            # extend
            a,b=0,K
            while i-a-1>=0 and j-a-1>=0 and S[i-a-1]==T[j-a-1]: a+=1
            while i+b<len(S) and j+b<len(T) and S[i+b]==T[j+b]: b+=1
            si,tj,L=i-a,j-a,a+b
            key=(si,tj)
            if key in seen: continue
            seen.add(key)
            sizes=S[si:si+L]
            if L<6 or sum(sizes)<0x400 or len(set(sizes))<4: continue
            runs+=1
            for k in range(L):
                nm=fs[tj+k][2]
                votes[si+k].append((L,nm,ref,obj(fs[tj+k][0]),tj+k))
    print(ref,len(fs),'funcs, runs',runs,file=sys.stderr)
    REFS[ref]=(fs,ob)
named={};conf=0
gen=re.compile(r'^(fn_|func_|lbl_|sub_|dtor_|ctor_|@|\$\$|zz_|\.|__sinit_)')
for i,v in votes.items():
    v.sort(reverse=True)
    good=[x for x in v if not gen.match(x[1])]
    best=good[0] if good and good[0][0]>=v[0][0]*0.5 else v[0]
    names={x[1] for x in v if x[0]>=best[0]*0.5}
    if len(names)>1: conf+=1
    named[i]=best
print('matched',len(named),'conflicting',conf,file=sys.stderr)
# gap fill: anchors from same ref, same index delta
filled=0
for ref,(fs,ob) in REFS.items():
    anc=sorted((i,v[4]) for i,v in named.items() if v[2]==ref)
    for (i1,j1),(i2,j2) in zip(anc,anc[1:]):
        if 1< i2-i1 == j2-j1 <= 12:
            for k in range(1,i2-i1):
                if i1+k not in named:
                    def obj(a):
                        for s_,e_,n_ in ob:
                            if s_<=a<e_: return n_
                        return ''
                    named[i1+k]=(0,fs[j1+k][2],ref,obj(fs[j1+k][0]),j1+k);filled+=1
print('gap-filled',filled,file=sys.stderr)
import json
json.dump({hex(ours[i][0]):[ours[i][1]]+list(v) for i,v in named.items()},open(P+'/tools/matches.json','w'),indent=0)
