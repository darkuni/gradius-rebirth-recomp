import sys, bisect
from dol import Dol, load_symbols
from ppcdec import decode
D=Dol('main.dol');F,O=load_symbols('symbols.txt')
starts=[a for a,s,n in F]; names={a:n for a,s,n in F}
def owner(x):
    i=bisect.bisect_right(starts,x)-1; return F[i]
callers={}
for a,s,n in F:
    for x in range(a,a+s,4):
        m,f=decode(D.word(x))
        if m=='b' and f['lk']:
            callers.setdefault((x+f['li'])&0xffffffff,set()).add(a)
def show(t,depth=0,maxd=3):
    for c in sorted(callers.get(t,())):
        print('  '*depth+f'{c:08X} {names[c]}')
        if depth+1<maxd: show(c,depth+1,maxd)
for arg in sys.argv[1:]:
    t=int(arg,16) if arg.startswith('0x') else [a for a,s,n in F if n==arg][0]
    print('callers of',names.get(t,hex(t)))
    show(t,1,int(sys.argv[0:1] and 4))
