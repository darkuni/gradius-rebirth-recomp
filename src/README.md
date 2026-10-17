# Chocobo's Dungeon (R7FEGD) static recompilation

Translates `sys/main.dol` (PowerPC/Gekko) into C++ and runs it natively. The Wii
hardware, IOS and the DSP are replaced by host code; the game, NW4R, CRI and most of
the SDK run as recompiled code.

## Layout
- `recomp.py` - generator: main.dol + symbols.txt -> gen/*.cpp (one C++ function per guest function)
- `ppcdec.py`, `dol.py` - Gekko decoder, DOL/symbol loaders; `ppcdis.py`, `xref.py` - analysis helpers
- `hle.txt` - guest functions replaced by host code (`Name`) or stubbed (`Name = value`)
- `symbols.txt` - dtk symbols with library names applied
- `runtime/`
  - `ppc.h`, `runtime.cpp` - CPU context, 4 GiB guest memory, MMIO, locked-cache DMA, dispatch, startup
  - `hle_thread.cpp` - guest OSThreads on host threads, interrupts
  - `hle_ios.cpp`, `hle_dvd.cpp`, `hle_fs.cpp` - IOS: disc from extracted files, NAND in ../nand, ES/STM
  - `hle_dev.cpp` - 60 Hz retrace, decrementer (OSAlarm)
  - `hle_audio.cpp`, `ax_dsp.cpp` - AI DMA timing + AX DSP microcode replacement (voice mixer)
  - `hle_input.cpp` - Wii Remote (KPAD/WPAD) from keyboard/gamepad or AUTOPRESS script
  - `gx_fifo.cpp` - GX command processor; `gx_render.cpp` - OpenGL 3.3 backend (CPU vertex
    transform/lighting/texgen, EFB as FBO, EFB copies); `gx_shader.cpp` - TEV -> GLSL; `gx_tex.cpp` - texture decoding
  - `gl_platform_sdl.cpp` - window/audio/input (Windows); `gl_platform_egl.cpp` - headless (Linux, screenshots)

## Build
    python3 recomp.py ../orig/R7FEGD/main.dol symbols.txt gen 300
    # Windows exe (cross-compiled with mingw-w64 + SDL2-devel-mingw):
    cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=<SDL2>/x86_64-w64-mingw32
    ninja -C build-win
    # Linux headless test build:
    cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build
    SHOT_EVERY=100 SHOT_DIR=shots TIMEOUT=120 ./build/chocobo /path/to/extracted
