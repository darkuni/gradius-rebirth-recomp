// Per-game constants for Gradius ReBirth (WGGE v257 "Updated", WiiWare, NTSC-U).
// Addresses come from config/symbols.txt (dtk + naming passes vs Castlevania/Contra ReBirth, Chocobo);
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Gradius ReBirth"
#define GAME_EXE         "gradius"
#define GAME_INI         "gradius.ini"

#define G_AX_RESUME_CB          0x800EE110u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x800C6B50u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x800FBD80u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x800CF190u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x5B20u       // __OSGetInterruptHandler: lwz r4,-0x5B20(r13)
#define G_SDA_IOS_HEAP          0x6DC4u       // __ios_Ipc2: lwz r3,-0x6DC4(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_800CF190
#define G_FN_IOS_FREE           f_800FBD80
