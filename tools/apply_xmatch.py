"""Apply xmatch json files (in priority order) to config/symbols.txt: names fn_/generic only unless --override."""
import sys,json,re,collections
gen=re.compile(r'^(fn_|func_|lbl_|sub_|@|\$\$|zz_|\.|__sinit_|dtor_|ctor_)')
rx=re.compile(r'(\S+) = \.(\w+):0x([0-9A-F]+);(.*)')
path='config/symbols.txt'
lines=open(path).read().splitlines(True)
names=collections.Counter(rx.match(l).group(1) for l in lines if rx.match(l))
maps=[json.load(open(p)) for p in sys.argv[1:]]
out=[];n=0
for l in lines:
    m=rx.match(l)
    if m and 'type:function' in l:
        a=m.group(3); cur=m.group(1)
        for mp in maps:
            if a in mp:
                ref=mp[a][1].split('_8')[0] if re.search(r'_8[0-9A-F]{7}$',mp[a][1]) else mp[a][1]
                if gen.match(ref): continue
                if ref!=cur:
                    nm=ref if names[ref]==0 else f'{ref}_{a}'
                    names[nm]+=1; n+=1
                    l=f'{nm} = .{m.group(2)}:0x{a};{m.group(4)}\n'
                break
    out.append(l)
open(path,'w').writelines(out); print('renamed',n)
