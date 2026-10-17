# Gradius ReBirth (WGGE v257 "Updated", WiiWare NTSC-U) - native recomp notes

Same pipeline/runtime as Contra and Castlevania ReBirth (same M2 engine, same RVL SDK Feb 2009 core).

## Status (first session)
- Linux headless: health screen, save creation (bak000, bak001, banner.bin), title, meter select,
  full story intro, launch sequence, Stage 1 gameplay. No runtime code changes needed.
- Windows exe built, not yet run on Windows. Audio not verified. Online Ranking untested
  (links DWC/NHTTP/SSL/SOCKET/NCD/NWC24; no network emulation). Also links USB KBD/HID (/dev/usb/hid opened).

## Source title
- WAD sha1 88cd16f68c0a55fa0be05fbd098e974c757e8e84. Title 00010001-57474445 (WGGE), title version 257,
  IOS55, group A4, 7 contents, boot index 6.
- Contents: 0 banner/meta, 1 main DOL LZ11 (2,975,552 bytes, sha1 ce8939570323401023f44f172e74fd8346d55e84),
  2 U8 data, 3/4/5 U8 (type 0x8001), 6 loader DOL.

## Binary
- Entry 0x80004050, .text 0x80006F20-0x80230308, dtk: 6,939 functions. Unlike Contra/Castlevania the SDK
  sits low (~0x800C0000-0x80148000) with homebutton from 0x80148150; recomp traces every named function.
- Naming: xmatch vs Castlevania (3,303), Contra (2,962), Chocobo (1,814; it shares the DWC/NHTTP libs),
  then size-sequence refs (681). Manual: KPADInit 0x8010F0D0, KPADRead 0x8010E990 (this build calls
  KPADRead, not KPADReadEx - hle.txt has both).

## game.h constants
- __AXDSPResumeCallback 0x800EE110, DecrementerExceptionCallback 0x800C6B50, iosFree 0x800FBD80,
  OSExitThread 0x800CF190, SelectThread idle loop 0x800CEE28, interrupt table r13-0x5B20, IOS heap r13-0x6DC4.

## Testing notes
- Menus confirm with 2 (sideways remote). AUTOPRESS example used:
  2 every 150 VI from 600 to 3000, then 1 held in bursts (shoot).

## Build
    python3 tools/prepare_wad.py Gradius_Rebirth_Updated_NTSC-U.wad game
    cd src && python3 recomp.py ../game/main.dol symbols.txt gen 300
    cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build          (Linux headless)
    cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=<SDL2>/x86_64-w64-mingw32 && ninja -C build-win
