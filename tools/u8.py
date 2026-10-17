import sys,struct,os
def u8(path,out):
    d=open(path,'rb').read()
    assert d[:4]==b'\x55\xaa\x38\x2d'
    ro=struct.unpack('>I',d[4:8])[0]
    t,no,_,cnt=struct.unpack('>BBHII',d[ro:ro+12])[0],0,0,struct.unpack('>I',d[ro+8:ro+12])[0]
    st=ro+cnt*12
    def name(i): o=st+(struct.unpack('>I',d[ro+i*12:ro+i*12+4])[0]&0xffffff); return d[o:d.index(b'\0',o)].decode('latin1')
    stack=[(cnt,out)]; os.makedirs(out,exist_ok=True); files=0
    for i in range(1,cnt):
        while i>=stack[-1][0]: stack.pop()
        w,a,b=struct.unpack('>III',d[ro+i*12:ro+i*12+12]); p=os.path.join(stack[-1][1],name(i))
        if w>>24: os.makedirs(p,exist_ok=True); stack.append((b,p))
        else: open(p,'wb').write(d[a:a+b]); files+=1
    return files
if __name__=='__main__': print(u8(sys.argv[1],sys.argv[2]),'files')
