# Gradius ReBirth (Updated, v257) - native recompilation

A static recompilation of **Gradius ReBirth (Updated, v257)** (WiiWare, NTSC-U, title `WGRE`) to native code. The game's
PowerPC executable is translated to C++ and runs on Windows (and Linux) with a small runtime that
replaces the Wii hardware, IOS and the DSP.

![Running from the recompiled code](docs/boot-sequence.png)

**No game data is included.** You need your own copy of the game as a WAD. The build turns your WAD
into a `game` folder and generates the C++ from the executable inside it.

## Status

- Boots through the health screen, Konami logo, save creation, title menu, weapon (meter) select and stage gameplay (headless Linux test runs).
- Windows: same runtime as the Geometry Wars and My Life as a King recomps, which are play-tested on Windows.
- Menus confirm with the 2 button (gamepad A in the default sideways layout).

Changes:
- **v0.3** (Oct 30, 2026): graphics (the GX command stream) is processed and drawn on its own thread beside the
  game thread, like the Wii's GPU; faster vertex handling (index buffers, cached vertex setup); audio is sent
  to the sound card straight from the mixer (no clicks at 3 ms frame boundaries); `gradius.log` next to the exe.
- **v0.2.1**: window and event pump on their own UI thread (fixes the window freezing / "Not Responding" on
  Windows while the game kept running).
- **v0.2**: audio fixes (no dropped audio periods, 60 ms jitter buffer), game speed 1x-8x, depth and format EFB copies.

## Layout

| Path | What it is |
| --- | --- |
| `src/recomp.py` | Recompiler: `main.dol` + symbols -> `src/gen/*.cpp` |
| `src/runtime/` | Runtime: CPU context and memory, threads, IOS, GX -> OpenGL 3.3, AX audio, input |
| `src/runtime/game.h` | Game-specific addresses the runtime needs |
| `src/hle.txt` | Guest functions replaced by host code or stubbed |
| `config/` | Symbols and decomp-toolkit (dtk) project files |
| `tools/prepare_wad.py` | Unpacks a WAD into the `game` folder |

## Building

There is no prebuilt download: the exe contains the game's own code (translated to C++), so it is built
from your WAD. Everything below is tested on Ubuntu 24.04; on Windows 10/11 use WSL (`wsl --install -d Ubuntu-24.04`
in an administrator PowerShell, then open "Ubuntu"). The build cross-compiles a Windows exe.

**1. Tools** (once)

```sh
sudo apt update
sudo apt install -y git wget python3 python3-pip cmake ninja-build mingw-w64 g++-mingw-w64-x86-64-posix
pip install --break-system-packages libWiiPy
wget https://github.com/libsdl-org/SDL/releases/download/release-2.30.9/SDL2-devel-2.30.9-mingw.tar.gz
tar xf SDL2-devel-2.30.9-mingw.tar.gz          # -> ~/SDL2-2.30.9
```

**2. Unpack your WAD and generate the C++**

```sh
git clone https://github.com/darkuni/gradius-rebirth-recomp.git
cd gradius-rebirth-recomp
python3 tools/prepare_wad.py /mnt/c/path/to/Gradius_Rebirth_Updated_NTSC-U.wad game     # your own WAD (Windows drives are under /mnt/c)
cd src
python3 recomp.py ../game/main.dol symbols.txt gen 300
```

`prepare_wad.py` checks that the game's executable matches the one this recompilation was made from (NTSC-U).
A different version of the game needs its own symbols and `game.h` addresses.

**3. Build the Windows exe**

```sh
cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=$HOME/SDL2-2.30.9/x86_64-w64-mingw32
ninja -C build-win -j1        # the generated code is large: -j1 keeps memory use down (raise it if you have RAM to spare)
```

**4. Put the game folder together** (example: `C:\Games\gradius`)

```sh
D=/mnt/c/Games/gradius; mkdir -p $D
cp build-win/gradius.exe $HOME/SDL2-2.30.9/x86_64-w64-mingw32/bin/SDL2.dll \
   /usr/x86_64-w64-mingw32/lib/libwinpthread-1.dll runtime/ipl-font-licenses.txt $D/
cp -r ../game $D/
```

Linux test build (headless, EGL; writes screenshots): `cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build`,
then `SHOT_EVERY=150 SHOT_DIR=shots TIMEOUT=120 ./build/gradius ../game`.

## Running (Windows)

Requirements: 64-bit Windows 10/11 and a GPU with OpenGL 3.3. Run `gradius.exe` from the folder above (or
`gradius.exe <path to game folder>`).

- **F1 / Esc** (or Start+Back on a gamepad): settings menu - resolution scale, widescreen, vsync, MSAA, texture
  filtering, controls, game speed. Settings are saved in `gradius.ini`.
- **F11 / Alt+Enter**: fullscreen. **Hold Tab** (or click the right stick): fast-forward.
- Saves go in a `nand` folder next to `game`.
- `gradius.log` next to the exe is the log of the last run - include it with bug reports.

Controls (`controls =` in the ini or the settings menu; pick the matching grip if the game asks):

| Layout | Gamepad | Keyboard |
| --- | --- | --- |
| sideways (default): Wii Remote held sideways | d-pad / left stick = move, A = 2, B = 1, X = A, Y = B | arrows = move, X = 2, Z = 1, A = A, S = B |
| nunchuk: Wii Remote + Nunchuk | left stick = Nunchuk stick, d-pad = remote d-pad, A = A, B = B, X = 1, Y = 2, LB/LT = Z, RB/RT = C | arrows = stick, X = A, Z = B, Shift = Z, C = C, I/J/K/L = d-pad |
| classic: Classic Controller | buttons by label (A/B/X/Y), LB/RB = L/R, LT/RT = ZL/ZR, both sticks, d-pad | arrows = d-pad, X = A, Z = B, S = X, A = Y, Q/W = L/R, 1/2 = ZL/ZR |

All layouts: Start/Enter = +, Back/Backspace = -, Guide/H = HOME.

## Disclaimer

This is an unofficial fan project. It is **not affiliated with, endorsed by, or sponsored by** Konami Digital Entertainment, M2 Co., Ltd.
or Nintendo. *Gradius ReBirth* and all related names and marks belong to their respective owners. This
repository contains no game code or game data; you need your own legally obtained copy of the game.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party
components (fonts, OpenGL headers) keep their own licenses; see
[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
