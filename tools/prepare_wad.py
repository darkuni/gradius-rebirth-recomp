#!/usr/bin/env python3
"""Turn a Gradius ReBirth WAD into the 'game' folder the native build reads.

usage: prepare_wad.py Gradius_Rebirth_Updated_NTSC-U.wad game
Writes: game/tmd.bin, game/ticket.bin, game/content/<index>.app (decrypted),
        game/main.dol (content 1, LZ11-decompressed).
Needs: pip install libWiiPy
"""
import sys, os, hashlib
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from lz11 import lz11
import libWiiPy

EXPECT_DOL_SHA1 = 'ce8939570323401023f44f172e74fd8346d55e84'

def main(wad, out):
    t = libWiiPy.title.Title()
    t.load_wad(open(wad, 'rb').read())
    os.makedirs(os.path.join(out, 'content'), exist_ok=True)
    open(os.path.join(out, 'tmd.bin'), 'wb').write(t.tmd.dump())
    open(os.path.join(out, 'ticket.bin'), 'wb').write(t.ticket.dump())
    for i, c in enumerate(t.content.content_records):
        data = t.get_content_by_index(i)
        open(os.path.join(out, 'content', f'{c.index:08x}.app'), 'wb').write(data)
        print(f'content {c.index}: id {c.content_id:08x} type {c.content_type:04x} {len(data)} bytes')
    dol = lz11(t.get_content_by_index(1))
    open(os.path.join(out, 'main.dol'), 'wb').write(dol)
    h = hashlib.sha1(dol).hexdigest()
    print('main.dol', len(dol), h, 'OK' if h == EXPECT_DOL_SHA1 else ('' if EXPECT_DOL_SHA1 is None else '(different build than the recomp was made from!)'))

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
