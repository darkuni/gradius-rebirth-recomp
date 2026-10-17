import capstone,sys
from dol import Dol, load_symbols
D=Dol('main.dol');F,O=load_symbols('symbols.txt')
md=capstone.Cs(capstone.CS_ARCH_PPC,capstone.CS_MODE_32|capstone.CS_MODE_BIG_ENDIAN)
names={a:n for a,s,n in F}
for name in sys.argv[1:]:
    if name.startswith('0x'): a=int(name,16); s=[x for x in F if x[0]==a][0][1]
    else: a,s=[(a,s) for a,s,n in F if n==name][0]
    b=b''.join(D.word(x).to_bytes(4,'big') for x in range(a,a+s,4))
    print('====',name,hex(a),hex(s))
    for i in md.disasm(b,a):
        t=i.op_str
        if i.mnemonic in('bl','b') :
            try: t=names.get(int(t,16),t)
            except: pass
        print(f'{i.address:08x} {i.mnemonic} {t}')
