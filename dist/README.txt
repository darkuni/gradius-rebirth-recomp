Gradius ReBirth - native Windows build (static recompilation)  @VERSION@
https://github.com/darkuni/gradius-rebirth-recomp

No game data is included. You need your own Gradius ReBirth WAD (WiiWare, NTSC-U).

Setup (once)
  1. Install Python 3.11 or newer from python.org (tick "Add python.exe to PATH").
  2. Drag your WAD onto make-game-folder.bat (or put it in this folder and double-click the .bat).
     It creates the "game" folder; the WAD isn't needed after that.
  3. Run gradius.exe.

Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, controls, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Controls (settings menu, or "controls =" in gradius.ini)
  sideways (default): Wii Remote held sideways
      Gamepad: d-pad/left stick = move, A = 2, B = 1, X = A, Y = B
      Keyboard: arrows = move, X = 2, Z = 1, A = A, S = B
  nunchuk: Wii Remote + Nunchuk
      Gamepad: left stick = stick, d-pad = remote d-pad, A = A, B = B, X = 1, Y = 2, LB/LT = Z, RB/RT = C
      Keyboard: arrows = stick, X = A, Z = B, Shift = Z, C = C, I/J/K/L = d-pad
  classic: Classic Controller - gamepad buttons by label, LB/RB = L/R, LT/RT = ZL/ZR, both sticks
      Keyboard: arrows = d-pad, X = A, Z = B, S = X, A = Y, Q/W = L/R, 1/2 = ZL/ZR
  All: Start/Enter = +, Back/Backspace = -, Guide/H = HOME

Files
  gradius.ini   settings (created on first run)
  gradius.log   log of the last run - include it with bug reports
  nand\           saves

Unofficial fan project, not affiliated with Konami or Nintendo. The exe contains code
machine-translated from the game's executable; game data comes from your own WAD.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
