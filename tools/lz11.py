import sys
def lz11(d):
    assert d[0]==0x11
    n=d[1]|d[2]<<8|d[3]<<16; p=4
    if n==0: n=int.from_bytes(d[4:8],'little'); p=8
    o=bytearray()
    while len(o)<n:
        f=d[p]; p+=1
        for b in range(8):
            if len(o)>=n: break
            if not f&(0x80>>b): o.append(d[p]); p+=1; continue
            a=d[p]>>4
            if a==0: L=((d[p]&15)<<4|d[p+1]>>4)+0x11; D=((d[p+1]&15)<<8|d[p+2])+1; p+=3
            elif a==1: L=((d[p]&15)<<12|d[p+1]<<4|d[p+2]>>4)+0x111; D=((d[p+2]&15)<<8|d[p+3])+1; p+=4
            else: L=a+1; D=((d[p]&15)<<8|d[p+1])+1; p+=2
            for _ in range(L): o.append(o[-D])
    return bytes(o)
if __name__=='__main__':
    open(sys.argv[2],'wb').write(lz11(open(sys.argv[1],'rb').read()))
