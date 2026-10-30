#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// OSLockMutex
void f_800CCD50(Ctx* __restrict c) {
  trace_call(0x800CCD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCD50
  c->r[0]=c->lr; // 800CCD54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCD58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CCD5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CCD60
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CCD64
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CCD68
  c->r[28]=c->r[3]|c->r[3]; // 800CCD6C
  c->lr=0x800CCD74u; f_800CBAA0(c); // 800CCD70
  c->r[29]=c->r[3]|c->r[3]; // 800CCD74
  c->lr=0x800CCD7Cu; f_800CE960(c); // 800CCD78
  c->r[30]=c->r[3]|c->r[3]; // 800CCD7C
  c->r[31]=0u+0x00000000u; // 800CCD80
L_800CCD84:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800CCD84
  cmps(c,0,(int32_t)c->r[0],0); // 800CCD88
  if (!crb(c,2)) { goto L_800CCDCC; } // 800CCD8C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800CCD90
  W32(c->r[28]+0x00000008u,c->r[30]); // 800CCD94
  c->r[0]=c->r[3]+0x00000001u; // 800CCD98
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800CCD9C
  c->r[3]=R32(c->r[30]+0x000002F8u); // 800CCDA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CCDA4
  if (!crb(c,2)) { goto L_800CCDB4; } // 800CCDA8
  W32(c->r[30]+0x000002F4u,c->r[28]); // 800CCDAC
  goto L_800CCDB8; // 800CCDB0
L_800CCDB4:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 800CCDB4
L_800CCDB8:;
  c->r[0]=0u+0x00000000u; // 800CCDB8
  W32(c->r[28]+0x00000014u,c->r[3]); // 800CCDBC
  W32(c->r[28]+0x00000010u,c->r[0]); // 800CCDC0
  W32(c->r[30]+0x000002F8u,c->r[28]); // 800CCDC4
  goto L_800CCE04; // 800CCDC8
L_800CCDCC:;
  cmpu(c,0,c->r[0],c->r[30]); // 800CCDCC
  if (!crb(c,2)) { goto L_800CCDE4; } // 800CCDD0
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800CCDD4
  c->r[0]=c->r[3]+0x00000001u; // 800CCDD8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800CCDDC
  goto L_800CCE04; // 800CCDE0
L_800CCDE4:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 800CCDE4
  c->r[3]=R32(c->r[28]+0x00000008u); // 800CCDE8
  c->r[4]=R32(c->r[30]+0x000002D0u); // 800CCDEC
  c->lr=0x800CCDF4u; f_800CEC80(c); // 800CCDF0
  c->r[3]=c->r[28]|c->r[28]; // 800CCDF4
  c->lr=0x800CCDFCu; f_800CF9E0(c); // 800CCDF8
  W32(c->r[30]+0x000002F0u,c->r[31]); // 800CCDFC
  IRQCHK(c); goto L_800CCD84; // 800CCE00
L_800CCE04:;
  c->r[3]=c->r[29]|c->r[29]; // 800CCE04
  c->lr=0x800CCE0Cu; f_800CBAE0(c); // 800CCE08
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCE0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CCE10
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CCE14
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CCE18
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CCE1C
  c->lr=c->r[0]; // 800CCE20
  c->r[1]=c->r[1]+0x00000020u; // 800CCE24
  return; // 800CCE28
}

// OSUnlockMutex
void f_800CCE30(Ctx* __restrict c) {
  trace_call(0x800CCE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCE30
  c->r[0]=c->lr; // 800CCE34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCE38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CCE3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CCE40
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CCE44
  c->r[29]=c->r[3]|c->r[3]; // 800CCE48
  c->lr=0x800CCE50u; f_800CBAA0(c); // 800CCE4C
  c->r[31]=c->r[3]|c->r[3]; // 800CCE50
  c->lr=0x800CCE58u; f_800CE960(c); // 800CCE54
  c->r[0]=R32(c->r[29]+0x00000008u); // 800CCE58
  c->r[30]=c->r[3]|c->r[3]; // 800CCE5C
  cmpu(c,0,c->r[0],c->r[3]); // 800CCE60
  if (!crb(c,2)) { goto L_800CCED4; } // 800CCE64
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800CCE68
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800CCE6C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800CCE70
  if (!crb(c,2)) { goto L_800CCED4; } // 800CCE74
  c->r[4]=R32(c->r[29]+0x00000010u); // 800CCE78
  c->r[5]=R32(c->r[29]+0x00000014u); // 800CCE7C
  cmps(c,0,(int32_t)c->r[4],0); // 800CCE80
  if (!crb(c,2)) { goto L_800CCE90; } // 800CCE84
  W32(c->r[3]+0x000002F8u,c->r[5]); // 800CCE88
  goto L_800CCE94; // 800CCE8C
L_800CCE90:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 800CCE90
L_800CCE94:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CCE94
  if (!crb(c,2)) { goto L_800CCEA4; } // 800CCE98
  W32(c->r[3]+0x000002F4u,c->r[4]); // 800CCE9C
  goto L_800CCEA8; // 800CCEA0
L_800CCEA4:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 800CCEA4
L_800CCEA8:;
  c->r[0]=0u+0x00000000u; // 800CCEA8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800CCEAC
  c->r[4]=R32(c->r[3]+0x000002D0u); // 800CCEB0
  c->r[0]=R32(c->r[3]+0x000002D4u); // 800CCEB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800CCEB8
  if (!crb(c,0)) { goto L_800CCECC; } // 800CCEBC
  c->r[3]=c->r[30]|c->r[30]; // 800CCEC0
  c->lr=0x800CCEC8u; f_800CEA90(c); // 800CCEC4
  W32(c->r[30]+0x000002D0u,c->r[3]); // 800CCEC8
L_800CCECC:;
  c->r[3]=c->r[29]|c->r[29]; // 800CCECC
  c->lr=0x800CCED4u; f_800CFAD0(c); // 800CCED0
L_800CCED4:;
  c->r[3]=c->r[31]|c->r[31]; // 800CCED4
  c->lr=0x800CCEDCu; f_800CBAE0(c); // 800CCED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCEDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CCEE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CCEE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CCEE8
  c->lr=c->r[0]; // 800CCEEC
  c->r[1]=c->r[1]+0x00000020u; // 800CCEF0
  return; // 800CCEF4
}

// __OSUnlockAllMutex
void f_800CCF00(Ctx* __restrict c) {
  trace_call(0x800CCF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCF00
  c->r[0]=c->lr; // 800CCF04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCF08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCF0C
  c->r[31]=0u+0x00000000u; // 800CCF10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CCF14
  c->r[30]=c->r[3]|c->r[3]; // 800CCF18
  goto L_800CCF48; // 800CCF1C
L_800CCF20:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 800CCF20
  cmps(c,0,(int32_t)c->r[4],0); // 800CCF24
  if (!crb(c,2)) { goto L_800CCF34; } // 800CCF28
  W32(c->r[30]+0x000002F8u,c->r[31]); // 800CCF2C
  goto L_800CCF38; // 800CCF30
L_800CCF34:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 800CCF34
L_800CCF38:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 800CCF38
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800CCF3C
  W32(c->r[3]+0x00000008u,c->r[31]); // 800CCF40
  c->lr=0x800CCF48u; f_800CFAD0(c); // 800CCF44
L_800CCF48:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 800CCF48
  cmps(c,0,(int32_t)c->r[3],0); // 800CCF4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CCF20; } // 800CCF50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCF54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCF58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CCF5C
  c->lr=c->r[0]; // 800CCF60
  c->r[1]=c->r[1]+0x00000010u; // 800CCF64
  return; // 800CCF68
}

// fn_800CCF70
void f_800CCF70(Ctx* __restrict c) {
  f_800CE950(c); return; // 800CCF70
}

// fn_800CCF80
void f_800CCF80(Ctx* __restrict c) {
  f_800CFAD0(c); return; // 800CCF80
}

// fn_800CCF90
void f_800CCF90(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 800CCF90
  c->r[7]=0u+0x00000000u; // 800CCF94
  cmps(c,0,(int32_t)c->r[6],0); // 800CCF98
  if (crb(c,2)) { goto L_800CCFB4; } // 800CCF9C
  c->r[0]=R32(c->r[6]+0x000002E4u); // 800CCFA0
  cmps(c,0,(int32_t)c->r[0],0); // 800CCFA4
  if (crb(c,2)) { goto L_800CCFB4; } // 800CCFA8
  c->r[3]=0u+0x00000000u; // 800CCFAC
  return; // 800CCFB0
L_800CCFB4:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800CCFB4
  cmps(c,0,(int32_t)c->r[4],0); // 800CCFB8
  if (crb(c,2)) { goto L_800CD048; } // 800CCFBC
  c->r[0]=R32(c->r[4]+0x000002E0u); // 800CCFC0
  cmps(c,0,(int32_t)c->r[0],0); // 800CCFC4
  if (crb(c,2)) { goto L_800CD048; } // 800CCFC8
  c->r[3]=0u+0x00000000u; // 800CCFCC
  return; // 800CCFD0
  goto L_800CD048; // 800CCFD4
L_800CCFD8:;
  c->r[4]=R32(c->r[6]+0x000002E0u); // 800CCFD8
  cmps(c,0,(int32_t)c->r[4],0); // 800CCFDC
  if (crb(c,2)) { goto L_800CCFF8; } // 800CCFE0
  c->r[0]=R32(c->r[4]+0x000002E4u); // 800CCFE4
  cmpu(c,0,c->r[6],c->r[0]); // 800CCFE8
  if (crb(c,2)) { goto L_800CCFF8; } // 800CCFEC
  c->r[3]=0u+0x00000000u; // 800CCFF0
  return; // 800CCFF4
L_800CCFF8:;
  c->r[5]=R32(c->r[6]+0x000002E4u); // 800CCFF8
  cmps(c,0,(int32_t)c->r[5],0); // 800CCFFC
  if (crb(c,2)) { goto L_800CD018; } // 800CD000
  c->r[0]=R32(c->r[5]+0x000002E0u); // 800CD004
  cmpu(c,0,c->r[6],c->r[0]); // 800CD008
  if (crb(c,2)) { goto L_800CD018; } // 800CD00C
  c->r[3]=0u+0x00000000u; // 800CD010
  return; // 800CD014
L_800CD018:;
  c->r[0]=R16(c->r[6]+0x000002C8u); // 800CD018
  cmpu(c,0,c->r[0],0x00000004u); // 800CD01C
  if (crb(c,2)) { goto L_800CD02C; } // 800CD020
  c->r[3]=0u+0x00000000u; // 800CD024
  return; // 800CD028
L_800CD02C:;
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800CD02C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 800CD030
  if (!crb(c,0)) { goto L_800CD040; } // 800CD034
  c->r[3]=0u+0x00000000u; // 800CD038
  return; // 800CD03C
L_800CD040:;
  c->r[7]=c->r[0]|c->r[0]; // 800CD040
  c->r[6]=c->r[4]|c->r[4]; // 800CD044
L_800CD048:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CD048
  if (!crb(c,2)) { IRQCHK(c); goto L_800CCFD8; } // 800CD04C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800CD050
  cmps(c,0,(int32_t)c->r[0],0); // 800CD054
  if (crb(c,2)) { goto L_800CD070; } // 800CD058
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800CD05C
  cmps(c,0,(int32_t)c->r[0],0); // 800CD060
  if (crb(c,1)) { goto L_800CD084; } // 800CD064
  c->r[3]=0u+0x00000000u; // 800CD068
  return; // 800CD06C
L_800CD070:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800CD070
  cmps(c,0,(int32_t)c->r[0],0); // 800CD074
  if (crb(c,2)) { goto L_800CD084; } // 800CD078
  c->r[3]=0u+0x00000000u; // 800CD07C
  return; // 800CD080
L_800CD084:;
  c->r[3]=0u+0x00000001u; // 800CD084
  return; // 800CD088
}

// fn_800CD090
void f_800CD090(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x000002F0u); // 800CD090
  goto L_800CD0AC; // 800CD094
L_800CD098:;
  cmpu(c,0,c->r[4],c->r[3]); // 800CD098
  if (!crb(c,2)) { goto L_800CD0A8; } // 800CD09C
  c->r[3]=0u+0x00000001u; // 800CD0A0
  return; // 800CD0A4
L_800CD0A8:;
  c->r[4]=R32(c->r[4]+0x000002F0u); // 800CD0A8
L_800CD0AC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CD0AC
  if (crb(c,2)) { goto L_800CD0C0; } // 800CD0B0
  c->r[4]=R32(c->r[4]+0x00000008u); // 800CD0B4
  cmps(c,0,(int32_t)c->r[4],0); // 800CD0B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD098; } // 800CD0BC
L_800CD0C0:;
  c->r[3]=0u+0x00000000u; // 800CD0C0
  return; // 800CD0C4
}

// fn_800CD0D0
void f_800CD0D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD0D0
  c->r[0]=c->lr; // 800CD0D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD0D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD0DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD0E0
  c->r[30]=c->r[3]|c->r[3]; // 800CD0E4
  c->r[31]=R32(c->r[3]+0x000002F4u); // 800CD0E8
  goto L_800CD120; // 800CD0EC
L_800CD0F0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CD0F0
  cmpu(c,0,c->r[0],c->r[30]); // 800CD0F4
  if (crb(c,2)) { goto L_800CD104; } // 800CD0F8
  c->r[3]=0u+0x00000000u; // 800CD0FC
  goto L_800CD12C; // 800CD100
L_800CD104:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD104
  c->lr=0x800CD10Cu; f_800CCF90(c); // 800CD108
  cmps(c,0,(int32_t)c->r[3],0); // 800CD10C
  if (!crb(c,2)) { goto L_800CD11C; } // 800CD110
  c->r[3]=0u+0x00000000u; // 800CD114
  goto L_800CD12C; // 800CD118
L_800CD11C:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800CD11C
L_800CD120:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CD120
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD0F0; } // 800CD124
  c->r[3]=0u+0x00000001u; // 800CD128
L_800CD12C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD12C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD130
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD134
  c->lr=c->r[0]; // 800CD138
  c->r[1]=c->r[1]+0x00000010u; // 800CD13C
  return; // 800CD140
}

// __OSReboot
void f_800CD150(Ctx* __restrict c) {
  trace_call(0x800CD150u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD150
  c->r[0]=c->lr; // 800CD154
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD158
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD15C
  c->r[31]=c->r[4]|c->r[4]; // 800CD160
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CD164
  c->r[30]=c->r[3]|c->r[3]; // 800CD168
  c->lr=0x800CD170u; f_800CBAA0(c); // 800CD16C
  c->r[3]=0u+0x81280000u; // 800CD170
  c->lr=0x800CD178u; f_800C7220(c); // 800CD174
  c->r[3]=0u+0x812F0000u; // 800CD178
  c->lr=0x800CD180u; f_800C71F0(c); // 800CD17C
  c->r[0]=0u+0x00000000u; // 800CD180
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CD184
  c->r[4]=0u+0x80000000u; // 800CD188
  c->r[3]=c->r[31]|c->r[31]; // 800CD18C
  c->r[0]=R32(c->r[4]+0x00003194u); // 800CD190
  c->r[4]=c->r[30]|0x80000000u; // 800CD194
  W32(c->r[13]+0xFFFFA4A8u,c->r[0]); // 800CD198
  c->r[5]=c->r[1]+0x00000008u; // 800CD19C
  c->lr=0x800CD1A4u; f_800C9FA0(c); // 800CD1A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD1A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD1A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CD1AC
  c->lr=c->r[0]; // 800CD1B0
  c->r[1]=c->r[1]+0x00000020u; // 800CD1B4
  return; // 800CD1B8
}

// OSGetSaveRegion
void f_800CD1C0(Ctx* __restrict c) {
  trace_call(0x800CD1C0u);
  c->r[0]=R32(c->r[13]+0xFFFFA4F0u); // 800CD1C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CD1C4
  c->r[0]=R32(c->r[13]+0xFFFFA4F4u); // 800CD1C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800CD1CC
  return; // 800CD1D0
}

// OSRegisterShutdownFunction
void f_800CD1E0(Ctx* __restrict c) {
  trace_call(0x800CD1E0u);
  c->r[5]=R32(c->r[13]+0xFFFFA500u); // 800CD1E0
  goto L_800CD1EC; // 800CD1E4
L_800CD1E8:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 800CD1E8
L_800CD1EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CD1EC
  if (crb(c,2)) { goto L_800CD204; } // 800CD1F0
  c->r[4]=R32(c->r[5]+0x00000004u); // 800CD1F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CD1F8
  cmpu(c,0,c->r[4],c->r[0]); // 800CD1FC
  if (!crb(c,1)) { IRQCHK(c); goto L_800CD1E8; } // 800CD200
L_800CD204:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CD204
  if (!crb(c,2)) { goto L_800CD240; } // 800CD208
  c->r[4]=c->r[13]+0xFFFFA500u; // 800CD20C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800CD210
  cmps(c,0,(int32_t)c->r[4],0); // 800CD214
  if (!crb(c,2)) { goto L_800CD224; } // 800CD218
  W32(c->r[13]+0xFFFFA500u,c->r[3]); // 800CD21C
  goto L_800CD228; // 800CD220
L_800CD224:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 800CD224
L_800CD228:;
  c->r[0]=0u+0x00000000u; // 800CD228
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800CD22C
  c->r[4]=c->r[13]+0xFFFFA500u; // 800CD230
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CD234
  W32(c->r[4]+0x00000004u,c->r[3]); // 800CD238
  return; // 800CD23C
L_800CD240:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 800CD240
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 800CD244
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800CD248
  cmps(c,0,(int32_t)c->r[4],0); // 800CD24C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800CD250
  if (!crb(c,2)) { goto L_800CD260; } // 800CD254
  W32(c->r[13]+0xFFFFA500u,c->r[3]); // 800CD258
  return; // 800CD25C
L_800CD260:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 800CD260
  return; // 800CD264
}

// __OSCallShutdownFunctions
void f_800CD270(Ctx* __restrict c) {
  trace_call(0x800CD270u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD270
  c->r[0]=c->lr; // 800CD274
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD278
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD27C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CD280
  c->r[30]=0u+0x00000000u; // 800CD284
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CD288
  c->r[29]=c->r[4]|c->r[4]; // 800CD28C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CD290
  c->r[28]=c->r[3]|c->r[3]; // 800CD294
  c->r[3]=0u+0x00000000u; // 800CD298
  c->r[31]=R32(c->r[13]+0xFFFFA500u); // 800CD29C
  goto L_800CD2E0; // 800CD2A0
L_800CD2A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CD2A4
  if (crb(c,2)) { goto L_800CD2B8; } // 800CD2A8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CD2AC
  cmpu(c,0,c->r[3],c->r[0]); // 800CD2B0
  if (!crb(c,2)) { goto L_800CD2E8; } // 800CD2B4
L_800CD2B8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CD2B8
  c->r[3]=c->r[28]|c->r[28]; // 800CD2BC
  c->r[4]=c->r[29]|c->r[29]; // 800CD2C0
  c->ctr=c->r[12]; // 800CD2C4
  if (true) { c->lr=0x800CD2CCu; dispatch(c,c->ctr); } // 800CD2C8
  c->r[0]=cntlz(c->r[3]); // 800CD2CC
  c->r[3]=R32(c->r[31]+0x00000004u); // 800CD2D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD2D4
  c->r[31]=R32(c->r[31]+0x00000008u); // 800CD2D8
  c->r[30]=c->r[30]|c->r[0]; // 800CD2DC
L_800CD2E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CD2E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD2A4; } // 800CD2E4
L_800CD2E8:;
  c->lr=0x800CD2ECu; f_800CE1A0(c); // 800CD2E8
  c->r[0]=cntlz(c->r[3]); // 800CD2EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD2F0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD2F4
  c->r[30]=c->r[30]|c->r[0]; // 800CD2F8
  c->r[0]=cntlz(c->r[30]); // 800CD2FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CD300
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CD304
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD308
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CD30C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD310
  c->lr=c->r[0]; // 800CD314
  c->r[1]=c->r[1]+0x00000020u; // 800CD318
  return; // 800CD31C
}

// __OSShutdownDevices
void f_800CD320(Ctx* __restrict c) {
  trace_call(0x800CD320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD320
  c->r[0]=c->lr; // 800CD324
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD328
  c->r[11]=c->r[1]+0x00000020u; // 800CD32C
  c->lr=0x800CD334u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD330
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 800CD334
  c->r[31]=c->r[3]|c->r[3]; // 800CD338
  cmpu(c,0,c->r[0],0x00000001u); // 800CD33C
  if (!crb(c,1)) { goto L_800CD34C; } // 800CD340
  cmps(c,0,(int32_t)c->r[3],0); // 800CD344
  if (!crb(c,2)) { goto L_800CD354; } // 800CD348
L_800CD34C:;
  c->r[27]=0u+0x00000000u; // 800CD34C
  goto L_800CD358; // 800CD350
L_800CD354:;
  c->r[27]=0u+0x00000001u; // 800CD354
L_800CD358:;
  c->lr=0x800CD35Cu; f_800C7660(c); // 800CD358
  cmps(c,0,(int32_t)c->r[27],0); // 800CD35C
  if (!crb(c,2)) { goto L_800CD370; } // 800CD360
  c->r[3]=0u+0x00000001u; // 800CD364
  c->lr=0x800CD36Cu; f_800FF120(c); // 800CD368
  c->r[28]=c->r[3]|c->r[3]; // 800CD36C
L_800CD370:;
  c->r[29]=R32(c->r[13]+0xFFFFA500u); // 800CD370
  c->r[3]=0u+0x00000000u; // 800CD374
  c->r[30]=0u+0x00000000u; // 800CD378
  goto L_800CD3BC; // 800CD37C
L_800CD380:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CD380
  if (crb(c,2)) { goto L_800CD394; } // 800CD384
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CD388
  cmpu(c,0,c->r[3],c->r[0]); // 800CD38C
  if (!crb(c,2)) { goto L_800CD3C4; } // 800CD390
L_800CD394:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800CD394
  c->r[4]=c->r[31]|c->r[31]; // 800CD398
  c->r[3]=0u+0x00000000u; // 800CD39C
  c->ctr=c->r[12]; // 800CD3A0
  if (true) { c->lr=0x800CD3A8u; dispatch(c,c->ctr); } // 800CD3A4
  c->r[0]=cntlz(c->r[3]); // 800CD3A8
  c->r[3]=R32(c->r[29]+0x00000004u); // 800CD3AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD3B0
  c->r[29]=R32(c->r[29]+0x00000008u); // 800CD3B4
  c->r[30]=c->r[30]|c->r[0]; // 800CD3B8
L_800CD3BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CD3BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD380; } // 800CD3C0
L_800CD3C4:;
  c->lr=0x800CD3C8u; f_800CE1A0(c); // 800CD3C4
  c->r[0]=cntlz(c->r[3]); // 800CD3C8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD3CC
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 800CD3D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD370; } // 800CD3D4
L_800CD3D8:;
  c->lr=0x800CD3DCu; f_800CE1A0(c); // 800CD3D8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD3DC
  if (crb(c,2)) { IRQCHK(c); goto L_800CD3D8; } // 800CD3E0
  c->lr=0x800CD3E8u; f_800CBAA0(c); // 800CD3E4
  c->r[30]=R32(c->r[13]+0xFFFFA500u); // 800CD3E8
  c->r[3]=0u+0x00000000u; // 800CD3EC
  c->r[29]=0u+0x00000000u; // 800CD3F0
  goto L_800CD434; // 800CD3F4
L_800CD3F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CD3F8
  if (crb(c,2)) { goto L_800CD40C; } // 800CD3FC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800CD400
  cmpu(c,0,c->r[3],c->r[0]); // 800CD404
  if (!crb(c,2)) { goto L_800CD43C; } // 800CD408
L_800CD40C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800CD40C
  c->r[4]=c->r[31]|c->r[31]; // 800CD410
  c->r[3]=0u+0x00000001u; // 800CD414
  c->ctr=c->r[12]; // 800CD418
  if (true) { c->lr=0x800CD420u; dispatch(c,c->ctr); } // 800CD41C
  c->r[0]=cntlz(c->r[3]); // 800CD420
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CD424
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD428
  c->r[30]=R32(c->r[30]+0x00000008u); // 800CD42C
  c->r[29]=c->r[29]|c->r[0]; // 800CD430
L_800CD434:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CD434
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD3F8; } // 800CD438
L_800CD43C:;
  c->lr=0x800CD440u; f_800CE1A0(c); // 800CD43C
  c->lr=0x800CD444u; f_800C78B0(c); // 800CD440
  cmps(c,0,(int32_t)c->r[27],0); // 800CD444
  if (!crb(c,2)) { goto L_800CD454; } // 800CD448
  c->r[3]=c->r[28]|c->r[28]; // 800CD44C
  c->lr=0x800CD454u; f_800FF120(c); // 800CD450
L_800CD454:;
  c->r[3]=0u+0x80000000u; // 800CD454
  c->r[3]=R32(c->r[3]+0x000000DCu); // 800CD458
  goto L_800CD480; // 800CD45C
L_800CD460:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800CD460
  c->r[29]=R32(c->r[3]+0x000002FCu); // 800CD464
  cmps(c,0,(int32_t)c->r[0],1); // 800CD468
  if (crb(c,2)) { goto L_800CD478; } // 800CD46C
  cmps(c,0,(int32_t)c->r[0],4); // 800CD470
  if (!crb(c,2)) { goto L_800CD47C; } // 800CD474
L_800CD478:;
  c->lr=0x800CD47Cu; f_800CF280(c); // 800CD478
L_800CD47C:;
  c->r[3]=c->r[29]|c->r[29]; // 800CD47C
L_800CD480:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CD480
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD460; } // 800CD484
  c->r[11]=c->r[1]+0x00000020u; // 800CD488
  c->lr=0x800CD490u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD48C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD490
  c->lr=c->r[0]; // 800CD494
  c->r[1]=c->r[1]+0x00000020u; // 800CD498
  return; // 800CD49C
}

// fn_800CD4A0
void f_800CD4A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD4A0
  c->r[0]=c->lr; // 800CD4A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD4A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD4AC
  c->r[31]=c->r[3]|c->r[3]; // 800CD4B0
  c->lr=0x800CD4B8u; f_800E8350(c); // 800CD4B4
  cmpu(c,0,c->r[3],0x00000002u); // 800CD4B8
  if (crb(c,2)) { goto L_800CD4C8; } // 800CD4BC
  c->r[3]=0u+0x00000003u; // 800CD4C0
  goto L_800CD4F8; // 800CD4C4
L_800CD4C8:;
  cmpu(c,0,c->r[31],0x00000001u); // 800CD4C8
  if (!crb(c,2)) { goto L_800CD4F4; } // 800CD4CC
  c->r[3]=c->r[1]+0x00000008u; // 800CD4D0
  c->lr=0x800CD4D8u; f_800CE400(c); // 800CD4D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD4D8
  if (crb(c,2)) { goto L_800CD4F4; } // 800CD4DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CD4E0
  cmps(c,0,(int32_t)c->r[0],0); // 800CD4E4
  if (!crb(c,2)) { goto L_800CD4F4; } // 800CD4E8
  c->r[3]=0u+0x00000001u; // 800CD4EC
  goto L_800CD4F8; // 800CD4F0
L_800CD4F4:;
  c->r[3]=0u+0x00000002u; // 800CD4F4
L_800CD4F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD4F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD4FC
  c->lr=c->r[0]; // 800CD500
  c->r[1]=c->r[1]+0x00000020u; // 800CD504
  return; // 800CD508
}

// OSShutdownSystem
void f_800CD510(Ctx* __restrict c) {
  trace_call(0x800CD510u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD510
  c->r[0]=c->lr; // 800CD514
  c->r[4]=0u+0x00000000u; // 800CD518
  c->r[5]=0u+0x00000002u; // 800CD51C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CD520
  c->r[3]=c->r[1]+0x00000008u; // 800CD524
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CD528
  c->lr=0x800CD530u; f_800046B4(c); // 800CD52C
  c->lr=0x800CD534u; f_800F5DB0(c); // 800CD530
L_800CD534:;
  c->lr=0x800CD538u; f_800F5E50(c); // 800CD534
  cmpu(c,0,c->r[3],0x00000001u); // 800CD538
  if (crb(c,2)) { IRQCHK(c); goto L_800CD534; } // 800CD53C
  c->r[3]=c->r[1]+0x00000008u; // 800CD540
  c->lr=0x800CD548u; f_800F7820(c); // 800CD544
  c->lr=0x800CD54Cu; f_800D1AF0(c); // 800CD548
  c->lr=0x800CD550u; f_800D13B0(c); // 800CD54C
  c->lr=0x800CD554u; f_800E85A0(c); // 800CD550
  c->r[3]=c->r[1]+0x00000018u; // 800CD554
  c->lr=0x800CD55Cu; f_800D1DD0(c); // 800CD558
  c->r[31]=R8(c->r[1]+0x0000001Eu); // 800CD55C
  c->lr=0x800CD564u; f_800E8350(c); // 800CD560
  cmpu(c,0,c->r[3],0x00000002u); // 800CD564
  if (crb(c,2)) { goto L_800CD574; } // 800CD568
  c->r[3]=0u+0x00000003u; // 800CD56C
  goto L_800CD5A4; // 800CD570
L_800CD574:;
  cmpu(c,0,c->r[31],0x00000001u); // 800CD574
  if (!crb(c,2)) { goto L_800CD5A0; } // 800CD578
  c->r[3]=c->r[1]+0x0000000Cu; // 800CD57C
  c->lr=0x800CD584u; f_800CE400(c); // 800CD580
  cmps(c,0,(int32_t)c->r[3],0); // 800CD584
  if (crb(c,2)) { goto L_800CD5A0; } // 800CD588
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CD58C
  cmps(c,0,(int32_t)c->r[0],0); // 800CD590
  if (!crb(c,2)) { goto L_800CD5A0; } // 800CD594
  c->r[3]=0u+0x00000001u; // 800CD598
  goto L_800CD5A4; // 800CD59C
L_800CD5A0:;
  c->r[3]=0u+0x00000002u; // 800CD5A0
L_800CD5A4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800CD5A4
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 800CD5A8
  cmpu(c,0,c->r[0],0x00000001u); // 800CD5AC
  if (!crb(c,2)) { goto L_800CD5C0; } // 800CD5B0
  c->r[0]=0u+0x00000005u; // 800CD5B4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800CD5B8
  goto L_800CD5C8; // 800CD5BC
L_800CD5C0:;
  c->r[0]=0u+0x00000001u; // 800CD5C0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800CD5C4
L_800CD5C8:;
  c->lr=0x800CD5CCu; f_800CE520(c); // 800CD5C8
  c->r[3]=c->r[1]+0x00000018u; // 800CD5CC
  c->lr=0x800CD5D4u; f_800D1CE0(c); // 800CD5D0
  c->r[3]=c->r[1]+0x00000010u; // 800CD5D4
  c->lr=0x800CD5DCu; f_800C5260(c); // 800CD5D8
  c->r[0]=R8(c->r[1]+0x00000008u); // 800CD5DC
  cmpu(c,0,c->r[0],0x00000001u); // 800CD5E0
  if (!crb(c,2)) { goto L_800CD608; } // 800CD5E4
  c->r[0]=0u+0x00000001u; // 800CD5E8
  W32(c->r[13]+0xFFFFA4FCu,c->r[0]); // 800CD5EC
  c->lr=0x800CD5F4u; f_800CE9A0(c); // 800CD5F0
  c->r[3]=0u+0x00000005u; // 800CD5F4
  c->lr=0x800CD5FCu; f_800CD320(c); // 800CD5F8
  c->lr=0x800CD600u; f_800CE9E0(c); // 800CD5FC
  c->lr=0x800CD604u; f_800C9770(c); // 800CD600
  goto L_800CD618; // 800CD604
L_800CD608:;
  c->lr=0x800CD60Cu; f_800CE9A0(c); // 800CD608
  c->r[3]=0u+0x00000002u; // 800CD60C
  c->lr=0x800CD614u; f_800CD320(c); // 800CD610
  c->lr=0x800CD618u; f_800D1170(c); // 800CD614
L_800CD618:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CD618
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CD61C
  c->lr=c->r[0]; // 800CD620
  c->r[1]=c->r[1]+0x00000040u; // 800CD624
  return; // 800CD628
}

// OSRestart
void f_800CD630(Ctx* __restrict c) {
  trace_call(0x800CD630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD630
  c->r[0]=c->lr; // 800CD634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD638
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD63C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD640
  c->r[30]=c->r[3]|c->r[3]; // 800CD644
  c->lr=0x800CD64Cu; f_800C6650(c); // 800CD648
  c->r[31]=c->r[3]|c->r[3]; // 800CD64C
  c->lr=0x800CD654u; f_800D1AF0(c); // 800CD650
  c->lr=0x800CD658u; f_800D13B0(c); // 800CD654
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800CD658
  cmpu(c,0,c->r[0],0x00000081u); // 800CD65C
  if (!crb(c,2)) { goto L_800CD680; } // 800CD660
  c->lr=0x800CD668u; f_800CE9A0(c); // 800CD664
  c->r[3]=0u+0x00000004u; // 800CD668
  c->lr=0x800CD670u; f_800CD320(c); // 800CD66C
  c->lr=0x800CD674u; f_800CE9E0(c); // 800CD670
  c->r[3]=c->r[30]|c->r[30]; // 800CD674
  c->lr=0x800CD67Cu; f_800D2F10(c); // 800CD678
  goto L_800CD6A4; // 800CD67C
L_800CD680:;
  cmpu(c,0,c->r[0],0x00000080u); // 800CD680
  if (!crb(c,2)) { goto L_800CD6A4; } // 800CD684
  c->lr=0x800CD68Cu; f_800CE9A0(c); // 800CD688
  c->r[3]=0u+0x00000004u; // 800CD68C
  c->lr=0x800CD694u; f_800CD320(c); // 800CD690
  c->lr=0x800CD698u; f_800CE9E0(c); // 800CD694
  c->r[4]=R32(c->r[13]+0xFFFFA4F8u); // 800CD698
  c->r[3]=c->r[30]|c->r[30]; // 800CD69C
  c->lr=0x800CD6A4u; f_800CD150(c); // 800CD6A0
L_800CD6A4:;
  c->lr=0x800CD6A8u; f_800CE9A0(c); // 800CD6A4
  c->r[3]=0u+0x00000001u; // 800CD6A8
  c->lr=0x800CD6B0u; f_800CD320(c); // 800CD6AC
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800CD6B0
  cmps(c,0,(int32_t)c->r[0],0); // 800CD6B4
  if (!crb(c,2)) { goto L_800CD6C8; } // 800CD6B8
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800CD6BC
  cmps(c,0,(int32_t)c->r[0],0); // 800CD6C0
  if (crb(c,2)) { goto L_800CD6CC; } // 800CD6C4
L_800CD6C8:;
  c->lr=0x800CD6CCu; f_800D1050(c); // 800CD6C8
L_800CD6CC:;
  c->lr=0x800CD6D0u; f_800D11F0(c); // 800CD6CC
  c->r[3]=0u+0x802A0000u; // 800CD6D0
  c->r[5]=0u+0x802A0000u; // 800CD6D4
  c->r[3]=c->r[3]+0x00001278u; // 800CD6D8
  c->r[4]=0u+0x0000040Au; // 800CD6DC
  c->r[5]=c->r[5]+0x00001284u; // 800CD6E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD6E4
  c->lr=0x800CD6ECu; f_800C84E0(c); // 800CD6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD6EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD6F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD6F4
  c->lr=c->r[0]; // 800CD6F8
  c->r[1]=c->r[1]+0x00000010u; // 800CD6FC
  return; // 800CD700
}

// __OSReturnToMenu
void f_800CD710(Ctx* __restrict c) {
  trace_call(0x800CD710u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD710
  c->r[0]=c->lr; // 800CD714
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CD718
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CD71C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CD720
  c->r[30]=0u+0x802A0000u; // 800CD724
  c->r[30]=c->r[30]+0x00001278u; // 800CD728
  W32(c->r[1]+0x00000084u,c->r[29]); // 800CD72C
  c->r[29]=c->r[3]|c->r[3]; // 800CD730
  c->lr=0x800CD738u; f_800D1AF0(c); // 800CD734
  c->lr=0x800CD73Cu; f_800D13B0(c); // 800CD738
  c->lr=0x800CD740u; f_800E85A0(c); // 800CD73C
  c->r[3]=c->r[1]+0x00000058u; // 800CD740
  c->lr=0x800CD748u; f_800D1DD0(c); // 800CD744
  c->r[31]=R8(c->r[1]+0x0000005Eu); // 800CD748
  c->lr=0x800CD750u; f_800E8350(c); // 800CD74C
  cmpu(c,0,c->r[3],0x00000002u); // 800CD750
  if (crb(c,2)) { goto L_800CD760; } // 800CD754
  c->r[0]=0u+0x00000003u; // 800CD758
  goto L_800CD790; // 800CD75C
L_800CD760:;
  cmpu(c,0,c->r[31],0x00000001u); // 800CD760
  if (!crb(c,2)) { goto L_800CD78C; } // 800CD764
  c->r[3]=c->r[1]+0x00000008u; // 800CD768
  c->lr=0x800CD770u; f_800CE400(c); // 800CD76C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD770
  if (crb(c,2)) { goto L_800CD78C; } // 800CD774
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CD778
  cmps(c,0,(int32_t)c->r[0],0); // 800CD77C
  if (!crb(c,2)) { goto L_800CD78C; } // 800CD780
  c->r[0]=0u+0x00000001u; // 800CD784
  goto L_800CD790; // 800CD788
L_800CD78C:;
  c->r[0]=0u+0x00000002u; // 800CD78C
L_800CD790:;
  c->r[31]=0u+0x00000003u; // 800CD790
  W8(c->r[1]+0x0000005Eu,c->r[0]); // 800CD794
  W8(c->r[1]+0x0000005Du,c->r[31]); // 800CD798
  W8(c->r[1]+0x0000005Fu,c->r[29]); // 800CD79C
  c->lr=0x800CD7A4u; f_800CE520(c); // 800CD7A0
  c->r[3]=c->r[1]+0x00000058u; // 800CD7A4
  c->lr=0x800CD7ACu; f_800D1CE0(c); // 800CD7A8
  c->r[3]=0u+0x81280000u; // 800CD7AC
  c->lr=0x800CD7B4u; f_800C7220(c); // 800CD7B0
  c->r[3]=0u+0x812F0000u; // 800CD7B4
  c->lr=0x800CD7BCu; f_800C71F0(c); // 800CD7B8
  c->lr=0x800CD7C0u; f_800F9610(c); // 800CD7BC
  cmps(c,0,(int32_t)c->r[3],0); // 800CD7C0
  if (crb(c,2)) { goto L_800CD83C; } // 800CD7C4
  c->r[3]=c->r[1]+0x00000038u; // 800CD7C8
  c->lr=0x800CD7D0u; f_800D1DD0(c); // 800CD7CC
  c->r[0]=0u+0x00000002u; // 800CD7D0
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 800CD7D4
  W8(c->r[1]+0x0000003Du,c->r[31]); // 800CD7D8
  c->lr=0x800CD7E0u; f_800CE520(c); // 800CD7DC
  c->r[3]=c->r[1]+0x00000038u; // 800CD7E0
  c->lr=0x800CD7E8u; f_800D1CE0(c); // 800CD7E4
  c->lr=0x800CD7ECu; f_800C9770(c); // 800CD7E8
  c->lr=0x800CD7F0u; f_800CE9A0(c); // 800CD7EC
  c->lr=0x800CD7F4u; f_800DB3E0(c); // 800CD7F0
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800CD7F4
  cmps(c,0,(int32_t)c->r[0],0); // 800CD7F8
  if (!crb(c,2)) { goto L_800CD80C; } // 800CD7FC
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800CD800
  cmps(c,0,(int32_t)c->r[0],0); // 800CD804
  if (crb(c,2)) { goto L_800CD810; } // 800CD808
L_800CD80C:;
  c->lr=0x800CD810u; f_800D1050(c); // 800CD80C
L_800CD810:;
  c->lr=0x800CD814u; f_800D11F0(c); // 800CD810
  c->r[3]=c->r[30]+0x00000000u; // 800CD814
  c->r[5]=c->r[30]+0x0000000Cu; // 800CD818
  c->r[4]=0u+0x0000040Au; // 800CD81C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD820
  c->lr=0x800CD828u; f_800C84E0(c); // 800CD824
  c->r[3]=c->r[30]+0x00000000u; // 800CD828
  c->r[5]=c->r[30]+0x00000038u; // 800CD82C
  c->r[4]=0u+0x000003F2u; // 800CD830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD834
  c->lr=0x800CD83Cu; f_800C84E0(c); // 800CD838
L_800CD83C:;
  c->r[3]=0u+0x000000E0u; // 800CD83C
  c->r[4]=0u+0x00000020u; // 800CD840
  c->lr=0x800CD848u; f_800C7230(c); // 800CD844
  cmps(c,0,(int32_t)c->r[3],0); // 800CD848
  c->r[31]=c->r[3]|c->r[3]; // 800CD84C
  if (!crb(c,2)) { goto L_800CD8CC; } // 800CD850
  c->r[3]=c->r[1]+0x00000018u; // 800CD854
  c->lr=0x800CD85Cu; f_800D1DD0(c); // 800CD858
  c->r[3]=0u+0x00000002u; // 800CD85C
  c->r[0]=0u+0x00000003u; // 800CD860
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 800CD864
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800CD868
  c->lr=0x800CD870u; f_800CE520(c); // 800CD86C
  c->r[3]=c->r[1]+0x00000018u; // 800CD870
  c->lr=0x800CD878u; f_800D1CE0(c); // 800CD874
  c->lr=0x800CD87Cu; f_800C9770(c); // 800CD878
  c->lr=0x800CD880u; f_800CE9A0(c); // 800CD87C
  c->lr=0x800CD884u; f_800DB3E0(c); // 800CD880
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800CD884
  cmps(c,0,(int32_t)c->r[0],0); // 800CD888
  if (!crb(c,2)) { goto L_800CD89C; } // 800CD88C
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800CD890
  cmps(c,0,(int32_t)c->r[0],0); // 800CD894
  if (crb(c,2)) { goto L_800CD8A0; } // 800CD898
L_800CD89C:;
  c->lr=0x800CD8A0u; f_800D1050(c); // 800CD89C
L_800CD8A0:;
  c->lr=0x800CD8A4u; f_800D11F0(c); // 800CD8A0
  c->r[3]=c->r[30]+0x00000000u; // 800CD8A4
  c->r[5]=c->r[30]+0x0000000Cu; // 800CD8A8
  c->r[4]=0u+0x0000040Au; // 800CD8AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD8B0
  c->lr=0x800CD8B8u; f_800C84E0(c); // 800CD8B4
  c->r[3]=c->r[30]+0x00000000u; // 800CD8B8
  c->r[5]=c->r[30]+0x00000038u; // 800CD8BC
  c->r[4]=0u+0x000003F2u; // 800CD8C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD8C4
  c->lr=0x800CD8CCu; f_800C84E0(c); // 800CD8C8
L_800CD8CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD8CC
  c->r[4]=0u+0x00000000u; // 800CD8D0
  c->r[5]=0u+0x000000E0u; // 800CD8D4
  c->lr=0x800CD8DCu; f_800046B4(c); // 800CD8D8
  c->r[4]=c->r[31]|c->r[31]; // 800CD8DC
  c->r[3]=0u+0x00000000u; // 800CD8E0
  c->lr=0x800CD8E8u; f_800F9AA0(c); // 800CD8E4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD8E8
  if (!crb(c,2)) { goto L_800CD92C; } // 800CD8EC
  c->lr=0x800CD8F4u; f_800D21D0(c); // 800CD8F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD8F4
  if (crb(c,2)) { goto L_800CD92C; } // 800CD8F8
  c->r[3]=0u+0x00000000u; // 800CD8FC
  c->r[0]=0u+0xFFFFFFFFu; // 800CD900
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CD904
  c->r[3]=c->r[31]|c->r[31]; // 800CD908
  c->r[4]=c->r[1]+0x00000010u; // 800CD90C
  c->r[5]=c->r[1]+0x0000000Cu; // 800CD910
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CD914
  c->lr=0x800CD91Cu; f_800D2680(c); // 800CD918
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CD91C
  cmps(c,0,(int32_t)c->r[0],0); // 800CD920
  if (!crb(c,2)) { goto L_800CD92C; } // 800CD924
  c->lr=0x800CD92Cu; f_800D24D0(c); // 800CD928
L_800CD92C:;
  c->lr=0x800CD930u; f_800CE9A0(c); // 800CD92C
  c->r[3]=0u+0x00000005u; // 800CD930
  c->lr=0x800CD938u; f_800CD320(c); // 800CD934
  c->lr=0x800CD93Cu; f_800CE9E0(c); // 800CD938
  c->lr=0x800CD940u; f_800C9770(c); // 800CD93C
  c->lr=0x800CD944u; f_800CE9A0(c); // 800CD940
  c->lr=0x800CD948u; f_800DB3E0(c); // 800CD944
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800CD948
  cmps(c,0,(int32_t)c->r[0],0); // 800CD94C
  if (!crb(c,2)) { goto L_800CD960; } // 800CD950
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800CD954
  cmps(c,0,(int32_t)c->r[0],0); // 800CD958
  if (crb(c,2)) { goto L_800CD964; } // 800CD95C
L_800CD960:;
  c->lr=0x800CD964u; f_800D1050(c); // 800CD960
L_800CD964:;
  c->lr=0x800CD968u; f_800D11F0(c); // 800CD964
  c->r[3]=c->r[30]+0x00000000u; // 800CD968
  c->r[5]=c->r[30]+0x0000000Cu; // 800CD96C
  c->r[4]=0u+0x0000040Au; // 800CD970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD974
  c->lr=0x800CD97Cu; f_800C84E0(c); // 800CD978
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CD97C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CD980
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CD984
  c->r[29]=R32(c->r[1]+0x00000084u); // 800CD988
  c->lr=c->r[0]; // 800CD98C
  c->r[1]=c->r[1]+0x00000090u; // 800CD990
  return; // 800CD994
}

// OSReturnToMenu
void f_800CD9A0(Ctx* __restrict c) {
  trace_call(0x800CD9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD9A0
  c->r[0]=c->lr; // 800CD9A4
  c->r[3]=0u+0x00000000u; // 800CD9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD9AC
  c->lr=0x800CD9B4u; f_800CD710(c); // 800CD9B0
  c->r[3]=0u+0x802A0000u; // 800CD9B4
  c->r[5]=0u+0x802A0000u; // 800CD9B8
  c->r[3]=c->r[3]+0x00001278u; // 800CD9BC
  c->r[4]=0u+0x0000037Fu; // 800CD9C0
  c->r[5]=c->r[5]+0x000012E4u; // 800CD9C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD9C8
  c->lr=0x800CD9D0u; f_800C84E0(c); // 800CD9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD9D0
  c->lr=c->r[0]; // 800CD9D4
  c->r[1]=c->r[1]+0x00000010u; // 800CD9D8
  return; // 800CD9DC
}

// OSReturnToDataManager
void f_800CD9E0(Ctx* __restrict c) {
  trace_call(0x800CD9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD9E0
  c->r[0]=c->lr; // 800CD9E4
  c->r[3]=0u+0x00000001u; // 800CD9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD9EC
  c->lr=0x800CD9F4u; f_800CD710(c); // 800CD9F0
  c->r[3]=0u+0x802A0000u; // 800CD9F4
  c->r[5]=0u+0x802A0000u; // 800CD9F8
  c->r[3]=c->r[3]+0x00001278u; // 800CD9FC
  c->r[4]=0u+0x00000391u; // 800CDA00
  c->r[5]=c->r[5]+0x00001314u; // 800CDA04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDA08
  c->lr=0x800CDA10u; f_800C84E0(c); // 800CDA0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDA10
  c->lr=c->r[0]; // 800CDA14
  c->r[1]=c->r[1]+0x00000010u; // 800CDA18
  return; // 800CDA1C
}

// __OSReturnToMenuForError
void f_800CDA20(Ctx* __restrict c) {
  trace_call(0x800CDA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDA20
  c->r[0]=c->lr; // 800CDA24
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDA28
  c->r[3]=c->r[1]+0x00000008u; // 800CDA2C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CDA30
  c->r[31]=0u+0x802A0000u; // 800CDA34
  c->r[31]=c->r[31]+0x00001278u; // 800CDA38
  c->lr=0x800CDA40u; f_800D1DD0(c); // 800CDA3C
  c->r[3]=0u+0x00000002u; // 800CDA40
  c->r[0]=0u+0x00000003u; // 800CDA44
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800CDA48
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800CDA4C
  c->lr=0x800CDA54u; f_800CE520(c); // 800CDA50
  c->r[3]=c->r[1]+0x00000008u; // 800CDA54
  c->lr=0x800CDA5Cu; f_800D1CE0(c); // 800CDA58
  c->lr=0x800CDA60u; f_800C9770(c); // 800CDA5C
  c->lr=0x800CDA64u; f_800CE9A0(c); // 800CDA60
  c->lr=0x800CDA68u; f_800DB3E0(c); // 800CDA64
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800CDA68
  cmps(c,0,(int32_t)c->r[0],0); // 800CDA6C
  if (!crb(c,2)) { goto L_800CDA80; } // 800CDA70
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800CDA74
  cmps(c,0,(int32_t)c->r[0],0); // 800CDA78
  if (crb(c,2)) { goto L_800CDA84; } // 800CDA7C
L_800CDA80:;
  c->lr=0x800CDA84u; f_800D1050(c); // 800CDA80
L_800CDA84:;
  c->lr=0x800CDA88u; f_800D11F0(c); // 800CDA84
  c->r[3]=c->r[31]+0x00000000u; // 800CDA88
  c->r[5]=c->r[31]+0x0000000Cu; // 800CDA8C
  c->r[4]=0u+0x0000040Au; // 800CDA90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDA94
  c->lr=0x800CDA9Cu; f_800C84E0(c); // 800CDA98
  c->r[3]=c->r[31]+0x00000000u; // 800CDA9C
  c->r[5]=c->r[31]+0x00000038u; // 800CDAA0
  c->r[4]=0u+0x000003F2u; // 800CDAA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDAA8
  c->lr=0x800CDAB0u; f_800C84E0(c); // 800CDAAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CDAB0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CDAB4
  c->lr=c->r[0]; // 800CDAB8
  c->r[1]=c->r[1]+0x00000030u; // 800CDABC
  return; // 800CDAC0
}

// __OSHotResetForError
void f_800CDAD0(Ctx* __restrict c) {
  trace_call(0x800CDAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDAD0
  c->r[0]=c->lr; // 800CDAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDAD8
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800CDADC
  cmps(c,0,(int32_t)c->r[0],0); // 800CDAE0
  if (!crb(c,2)) { goto L_800CDAF4; } // 800CDAE4
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800CDAE8
  cmps(c,0,(int32_t)c->r[0],0); // 800CDAEC
  if (crb(c,2)) { goto L_800CDAF8; } // 800CDAF0
L_800CDAF4:;
  c->lr=0x800CDAF8u; f_800D1050(c); // 800CDAF4
L_800CDAF8:;
  c->lr=0x800CDAFCu; f_800D11F0(c); // 800CDAF8
  c->r[3]=0u+0x802A0000u; // 800CDAFC
  c->r[5]=0u+0x802A0000u; // 800CDB00
  c->r[3]=c->r[3]+0x00001278u; // 800CDB04
  c->r[4]=0u+0x0000040Au; // 800CDB08
  c->r[5]=c->r[5]+0x00001284u; // 800CDB0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDB10
  c->lr=0x800CDB18u; f_800C84E0(c); // 800CDB14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDB18
  c->lr=c->r[0]; // 800CDB1C
  c->r[1]=c->r[1]+0x00000010u; // 800CDB20
  return; // 800CDB24
}

// OSGetResetCode
void f_800CDB30(Ctx* __restrict c) {
  trace_call(0x800CDB30u);
  c->r[3]=0u+0x802F0000u; // 800CDB30
  c->r[0]=R32(c->r[3]+0xFFFF9320u); // 800CDB34
  cmps(c,0,(int32_t)c->r[0],0); // 800CDB38
  if (crb(c,2)) { goto L_800CDB50; } // 800CDB3C
  c->r[3]=c->r[3]+0xFFFF9320u; // 800CDB40
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CDB44
  c->r[3]=c->r[0]|0x80000000u; // 800CDB48
  return; // 800CDB4C
L_800CDB50:;
  c->r[3]=0u+0xCC000000u; // 800CDB50
  c->r[0]=R32(c->r[3]+0x00003024u); // 800CDB54
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800CDB58
  return; // 800CDB5C
}

// OSResetSystem
void f_800CDB60(Ctx* __restrict c) {
  trace_call(0x800CDB60u);
  c->r[3]=0u+0x802A0000u; // 800CDB60
  c->r[5]=0u+0x802A0000u; // 800CDB64
  c->r[3]=c->r[3]+0x00001278u; // 800CDB68
  c->r[4]=0u+0x000004A1u; // 800CDB6C
  c->r[5]=c->r[5]+0x00001464u; // 800CDB70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDB74
  f_800C84E0(c); return; // 800CDB78
}

// WriteSramCallback
void f_800CDB80(Ctx* __restrict c) {
  trace_call(0x800CDB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB80
  c->r[0]=c->lr; // 800CDB84
  c->r[6]=0u+0x802F0000u; // 800CDB88
  c->r[5]=0u+0x800D0000u; // 800CDB8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDB90
  c->r[6]=c->r[6]+0xFFFF96E0u; // 800CDB94
  c->r[3]=0u+0x00000000u; // 800CDB98
  c->r[5]=c->r[5]+0xFFFFDB80u; // 800CDB9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDBA0
  c->r[4]=0u+0x00000001u; // 800CDBA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDBA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CDBAC
  c->r[31]=R32(c->r[6]+0x00000040u); // 800CDBB0
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 800CDBB4
  c->r[30]=c->r[6]+c->r[31]; // 800CDBB8
  c->lr=0x800CDBC0u; f_800D4BC0(c); // 800CDBBC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDBC0
  if (!crb(c,2)) { goto L_800CDBD0; } // 800CDBC4
  c->r[0]=0u+0x00000000u; // 800CDBC8
  goto L_800CDC80; // 800CDBCC
L_800CDBD0:;
  c->r[3]=0u+0x00000000u; // 800CDBD0
  c->r[4]=0u+0x00000001u; // 800CDBD4
  c->r[5]=0u+0x00000003u; // 800CDBD8
  c->lr=0x800CDBE0u; f_800D4410(c); // 800CDBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDBE0
  if (!crb(c,2)) { goto L_800CDBF8; } // 800CDBE4
  c->r[3]=0u+0x00000000u; // 800CDBE8
  c->lr=0x800CDBF0u; f_800D4CC0(c); // 800CDBEC
  c->r[0]=0u+0x00000000u; // 800CDBF0
  goto L_800CDC80; // 800CDBF4
L_800CDBF8:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800CDBF8
  c->r[4]=c->r[1]+0x00000008u; // 800CDBFC
  c->r[0]=c->r[3]+0x00000100u; // 800CDC00
  c->r[5]=0u+0x00000004u; // 800CDC04
  c->r[0]=c->r[0]|0xA0000000u; // 800CDC08
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CDC0C
  c->r[3]=0u+0x00000000u; // 800CDC10
  c->r[6]=0u+0x00000001u; // 800CDC14
  c->r[7]=0u+0x00000000u; // 800CDC18
  c->lr=0x800CDC20u; f_800D3970(c); // 800CDC1C
  c->r[0]=cntlz(c->r[3]); // 800CDC20
  c->r[3]=0u+0x00000000u; // 800CDC24
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDC28
  c->lr=0x800CDC30u; f_800D3DA0(c); // 800CDC2C
  c->r[0]=cntlz(c->r[3]); // 800CDC30
  c->r[4]=c->r[30]|c->r[30]; // 800CDC34
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDC38
  c->r[5]=c->r[29]|c->r[29]; // 800CDC3C
  c->r[29]=c->r[31]|c->r[0]; // 800CDC40
  c->r[3]=0u+0x00000000u; // 800CDC44
  c->r[6]=0u+0x00000001u; // 800CDC48
  c->lr=0x800CDC50u; f_800D3BF0(c); // 800CDC4C
  c->r[0]=cntlz(c->r[3]); // 800CDC50
  c->r[3]=0u+0x00000000u; // 800CDC54
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDC58
  c->r[29]=c->r[29]|c->r[0]; // 800CDC5C
  c->lr=0x800CDC64u; f_800D4540(c); // 800CDC60
  c->r[0]=cntlz(c->r[3]); // 800CDC64
  c->r[3]=0u+0x00000000u; // 800CDC68
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDC6C
  c->r[29]=c->r[29]|c->r[0]; // 800CDC70
  c->lr=0x800CDC78u; f_800D4CC0(c); // 800CDC74
  c->r[0]=cntlz(c->r[29]); // 800CDC78
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDC7C
L_800CDC80:;
  c->r[3]=0u+0x802F0000u; // 800CDC80
  cmps(c,0,(int32_t)c->r[0],0); // 800CDC84
  c->r[3]=c->r[3]+0xFFFF96E0u; // 800CDC88
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800CDC8C
  if (crb(c,2)) { goto L_800CDC9C; } // 800CDC90
  c->r[0]=0u+0x00000040u; // 800CDC94
  W32(c->r[3]+0x00000040u,c->r[0]); // 800CDC98
L_800CDC9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDC9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CDCA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CDCA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CDCA8
  c->lr=c->r[0]; // 800CDCAC
  c->r[1]=c->r[1]+0x00000020u; // 800CDCB0
  return; // 800CDCB4
}

// __OSInitSram
void f_800CDCC0(Ctx* __restrict c) {
  trace_call(0x800CDCC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDCC0
  c->r[0]=c->lr; // 800CDCC4
  c->r[4]=0u+0x00000040u; // 800CDCC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDCCC
  c->r[0]=0u+0x00000000u; // 800CDCD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDCD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDCD8
  c->r[30]=0u+0x802F0000u; // 800CDCDC
  c->r[30]=c->r[30]+0xFFFF96E0u; // 800CDCE0
  W32(c->r[30]+0x00000044u,c->r[0]); // 800CDCE4
  c->r[3]=c->r[30]|c->r[30]; // 800CDCE8
  W32(c->r[30]+0x00000048u,c->r[0]); // 800CDCEC
  c->lr=0x800CDCF4u; f_800C7750(c); // 800CDCF0
  c->r[3]=0u+0x00000000u; // 800CDCF4
  c->r[4]=0u+0x00000001u; // 800CDCF8
  c->r[5]=0u+0x00000000u; // 800CDCFC
  c->lr=0x800CDD04u; f_800D4BC0(c); // 800CDD00
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD04
  if (!crb(c,2)) { goto L_800CDD14; } // 800CDD08
  c->r[3]=0u+0x00000000u; // 800CDD0C
  goto L_800CDDD8; // 800CDD10
L_800CDD14:;
  c->r[3]=0u+0x00000000u; // 800CDD14
  c->r[4]=0u+0x00000001u; // 800CDD18
  c->r[5]=0u+0x00000003u; // 800CDD1C
  c->lr=0x800CDD24u; f_800D4410(c); // 800CDD20
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD24
  if (!crb(c,2)) { goto L_800CDD3C; } // 800CDD28
  c->r[3]=0u+0x00000000u; // 800CDD2C
  c->lr=0x800CDD34u; f_800D4CC0(c); // 800CDD30
  c->r[3]=0u+0x00000000u; // 800CDD34
  goto L_800CDDD8; // 800CDD38
L_800CDD3C:;
  c->r[3]=0u+0x20000000u; // 800CDD3C
  c->r[4]=c->r[1]+0x00000008u; // 800CDD40
  c->r[0]=c->r[3]+0x00000100u; // 800CDD44
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CDD48
  c->r[3]=0u+0x00000000u; // 800CDD4C
  c->r[5]=0u+0x00000004u; // 800CDD50
  c->r[6]=0u+0x00000001u; // 800CDD54
  c->r[7]=0u+0x00000000u; // 800CDD58
  c->lr=0x800CDD60u; f_800D3970(c); // 800CDD5C
  c->r[0]=cntlz(c->r[3]); // 800CDD60
  c->r[3]=0u+0x00000000u; // 800CDD64
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDD68
  c->lr=0x800CDD70u; f_800D3DA0(c); // 800CDD6C
  c->r[0]=cntlz(c->r[3]); // 800CDD70
  c->r[4]=c->r[30]|c->r[30]; // 800CDD74
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDD78
  c->r[3]=0u+0x00000000u; // 800CDD7C
  c->r[30]=c->r[31]|c->r[0]; // 800CDD80
  c->r[5]=0u+0x00000040u; // 800CDD84
  c->r[6]=0u+0x00000000u; // 800CDD88
  c->r[7]=0u+0x00000000u; // 800CDD8C
  c->lr=0x800CDD94u; f_800D3CA0(c); // 800CDD90
  c->r[0]=cntlz(c->r[3]); // 800CDD94
  c->r[3]=0u+0x00000000u; // 800CDD98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDD9C
  c->r[30]=c->r[30]|c->r[0]; // 800CDDA0
  c->lr=0x800CDDA8u; f_800D3DA0(c); // 800CDDA4
  c->r[0]=cntlz(c->r[3]); // 800CDDA8
  c->r[3]=0u+0x00000000u; // 800CDDAC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDDB0
  c->r[30]=c->r[30]|c->r[0]; // 800CDDB4
  c->lr=0x800CDDBCu; f_800D4540(c); // 800CDDB8
  c->r[0]=cntlz(c->r[3]); // 800CDDBC
  c->r[3]=0u+0x00000000u; // 800CDDC0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDDC4
  c->r[30]=c->r[30]|c->r[0]; // 800CDDC8
  c->lr=0x800CDDD0u; f_800D4CC0(c); // 800CDDCC
  c->r[0]=cntlz(c->r[30]); // 800CDDD0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDDD4
L_800CDDD8:;
  c->r[31]=0u+0x802F0000u; // 800CDDD8
  c->r[0]=0u+0x00000040u; // 800CDDDC
  c->r[31]=c->r[31]+0xFFFF96E0u; // 800CDDE0
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800CDDE4
  W32(c->r[31]+0x00000040u,c->r[0]); // 800CDDE8
  c->lr=0x800CDDF0u; f_800CBAA0(c); // 800CDDEC
  c->r[0]=R32(c->r[31]+0x00000048u); // 800CDDF0
  cmps(c,0,(int32_t)c->r[0],0); // 800CDDF4
  if (crb(c,2)) { goto L_800CDE08; } // 800CDDF8
  c->lr=0x800CDE00u; f_800CBAE0(c); // 800CDDFC
  c->r[3]=0u+0x00000000u; // 800CDE00
  goto L_800CDE18; // 800CDE04
L_800CDE08:;
  c->r[0]=0u+0x00000001u; // 800CDE08
  W32(c->r[31]+0x00000044u,c->r[3]); // 800CDE0C
  c->r[3]=c->r[31]+0x00000014u; // 800CDE10
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CDE14
L_800CDE18:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 800CDE18
  c->r[3]=0u+0x00000000u; // 800CDE1C
  c->r[4]=0u+0x00000014u; // 800CDE20
  c->lr=0x800CDE28u; f_800CDEC0(c); // 800CDE24
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 800CDE28
  cmpu(c,0,c->r[0],0x00005000u); // 800CDE2C
  if (crb(c,2)) { goto L_800CDE40; } // 800CDE30
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 800CDE34
  cmpu(c,0,c->r[0],0x000000C0u); // 800CDE38
  if (!crb(c,2)) { goto L_800CDE44; } // 800CDE3C
L_800CDE40:;
  c->r[30]=0u+0x00000000u; // 800CDE40
L_800CDE44:;
  c->lr=0x800CDE48u; f_800CBAA0(c); // 800CDE44
  c->r[4]=0u+0x802F0000u; // 800CDE48
  c->r[4]=c->r[4]+0xFFFF96E0u; // 800CDE4C
  c->r[0]=R32(c->r[4]+0x00000048u); // 800CDE50
  cmps(c,0,(int32_t)c->r[0],0); // 800CDE54
  if (crb(c,2)) { goto L_800CDE68; } // 800CDE58
  c->lr=0x800CDE60u; f_800CBAE0(c); // 800CDE5C
  c->r[5]=0u+0x00000000u; // 800CDE60
  goto L_800CDE78; // 800CDE64
L_800CDE68:;
  c->r[0]=0u+0x00000001u; // 800CDE68
  W32(c->r[4]+0x00000044u,c->r[3]); // 800CDE6C
  c->r[5]=c->r[4]+0x00000014u; // 800CDE70
  W32(c->r[4]+0x00000048u,c->r[0]); // 800CDE74
L_800CDE78:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 800CDE78
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 800CDE7C
  cmpu(c,0,c->r[3],c->r[0]); // 800CDE80
  if (!crb(c,2)) { goto L_800CDE98; } // 800CDE84
  c->r[3]=0u+0x00000000u; // 800CDE88
  c->r[4]=0u+0x00000014u; // 800CDE8C
  c->lr=0x800CDE94u; f_800CDEC0(c); // 800CDE90
  goto L_800CDEA8; // 800CDE94
L_800CDE98:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 800CDE98
  c->r[3]=0u+0x00000001u; // 800CDE9C
  c->r[4]=0u+0x00000014u; // 800CDEA0
  c->lr=0x800CDEA8u; f_800CDEC0(c); // 800CDEA4
L_800CDEA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDEA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CDEAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CDEB0
  c->lr=c->r[0]; // 800CDEB4
  c->r[1]=c->r[1]+0x00000020u; // 800CDEB8
  return; // 800CDEBC
}

// UnlockSram
void f_800CDEC0(Ctx* __restrict c) {
  trace_call(0x800CDEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDEC0
  c->r[0]=c->lr; // 800CDEC4
  cmps(c,0,(int32_t)c->r[3],0); // 800CDEC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDED0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDED4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CDED8
  if (crb(c,2)) { goto L_800CE168; } // 800CDEDC
  cmps(c,0,(int32_t)c->r[4],0); // 800CDEE0
  if (!crb(c,2)) { goto L_800CE014; } // 800CDEE4
  c->r[8]=0u+0x802F0000u; // 800CDEE8
  c->r[8]=c->r[8]+0xFFFF96E0u; // 800CDEEC
  c->r[3]=R8(c->r[8]+0x00000013u); // 800CDEF0
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800CDEF4
  cmpu(c,0,c->r[0],0x00000002u); // 800CDEF8
  if (!crb(c,1)) { goto L_800CDF08; } // 800CDEFC
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 800CDF00
  W8(c->r[8]+0x00000013u,c->r[0]); // 800CDF04
L_800CDF08:;
  c->r[3]=0u+0x802F0000u; // 800CDF08
  c->r[0]=0u+0x00000000u; // 800CDF0C
  c->r[3]=c->r[3]+0xFFFF96E0u; // 800CDF10
  c->r[7]=c->r[8]+0x0000000Cu; // 800CDF14
  c->r[5]=c->r[3]+0x00000014u; // 800CDF18
  W16(c->r[8]+0x00000002u,c->r[0]); // 800CDF1C
  c->r[3]=c->r[5]+0x00000001u; // 800CDF20
  c->r[3]=c->r[3]-c->r[7]; // 800CDF24
  cmpu(c,0,c->r[7],c->r[5]); // 800CDF28
  W16(c->r[8]+0x00000000u,c->r[0]); // 800CDF2C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800CDF30
  if (!crb(c,0)) { goto L_800CE014; } // 800CDF34
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 800CDF38
  c->ctr=c->r[0]; // 800CDF3C
  if (crb(c,2)) { goto L_800CDFE4; } // 800CDF40
L_800CDF44:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 800CDF44
  c->r[0]=R16(c->r[7]+0x00000000u); // 800CDF48
  c->r[5]=R16(c->r[8]+0x00000002u); // 800CDF4C
  c->r[0]=c->r[6]+c->r[0]; // 800CDF50
  W16(c->r[8]+0x00000000u,c->r[0]); // 800CDF54
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800CDF58
  c->r[0]=R16(c->r[7]+0x00000000u); // 800CDF5C
  c->r[0]=~(c->r[0]|c->r[0]); // 800CDF60
  c->r[0]=c->r[5]+c->r[0]; // 800CDF64
  W16(c->r[8]+0x00000002u,c->r[0]); // 800CDF68
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800CDF6C
  c->r[0]=R16(c->r[7]+0x00000002u); // 800CDF70
  c->r[0]=c->r[6]+c->r[0]; // 800CDF74
  W16(c->r[8]+0x00000000u,c->r[0]); // 800CDF78
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800CDF7C
  c->r[0]=R16(c->r[7]+0x00000002u); // 800CDF80
  c->r[0]=~(c->r[0]|c->r[0]); // 800CDF84
  c->r[0]=c->r[5]+c->r[0]; // 800CDF88
  W16(c->r[8]+0x00000002u,c->r[0]); // 800CDF8C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800CDF90
  c->r[0]=R16(c->r[7]+0x00000004u); // 800CDF94
  c->r[0]=c->r[6]+c->r[0]; // 800CDF98
  W16(c->r[8]+0x00000000u,c->r[0]); // 800CDF9C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800CDFA0
  c->r[0]=R16(c->r[7]+0x00000004u); // 800CDFA4
  c->r[0]=~(c->r[0]|c->r[0]); // 800CDFA8
  c->r[0]=c->r[5]+c->r[0]; // 800CDFAC
  W16(c->r[8]+0x00000002u,c->r[0]); // 800CDFB0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800CDFB4
  c->r[0]=R16(c->r[7]+0x00000006u); // 800CDFB8
  c->r[0]=c->r[6]+c->r[0]; // 800CDFBC
  W16(c->r[8]+0x00000000u,c->r[0]); // 800CDFC0
  c->r[0]=R16(c->r[7]+0x00000006u); // 800CDFC4
  c->r[7]=c->r[7]+0x00000008u; // 800CDFC8
  c->r[0]=~(c->r[0]|c->r[0]); // 800CDFCC
  c->r[0]=c->r[5]+c->r[0]; // 800CDFD0
  W16(c->r[8]+0x00000002u,c->r[0]); // 800CDFD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDF44; } // 800CDFD8
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 800CDFDC
  if (crb(c,2)) { goto L_800CE014; } // 800CDFE0
L_800CDFE4:;
  c->ctr=c->r[3]; // 800CDFE4
L_800CDFE8:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 800CDFE8
  c->r[0]=R16(c->r[7]+0x00000000u); // 800CDFEC
  c->r[5]=R16(c->r[8]+0x00000002u); // 800CDFF0
  c->r[0]=c->r[6]+c->r[0]; // 800CDFF4
  W16(c->r[8]+0x00000000u,c->r[0]); // 800CDFF8
  c->r[0]=R16(c->r[7]+0x00000000u); // 800CDFFC
  c->r[7]=c->r[7]+0x00000002u; // 800CE000
  c->r[0]=~(c->r[0]|c->r[0]); // 800CE004
  c->r[0]=c->r[5]+c->r[0]; // 800CE008
  W16(c->r[8]+0x00000002u,c->r[0]); // 800CE00C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDFE8; } // 800CE010
L_800CE014:;
  c->r[3]=0u+0x802F0000u; // 800CE014
  c->r[3]=c->r[3]+0xFFFF96E0u; // 800CE018
  c->r[0]=R32(c->r[3]+0x00000040u); // 800CE01C
  cmpu(c,0,c->r[4],c->r[0]); // 800CE020
  if (!crb(c,0)) { goto L_800CE02C; } // 800CE024
  W32(c->r[3]+0x00000040u,c->r[4]); // 800CE028
L_800CE02C:;
  c->r[4]=0u+0x802F0000u; // 800CE02C
  c->r[4]=c->r[4]+0xFFFF96E0u; // 800CE030
  c->r[0]=R32(c->r[4]+0x00000040u); // 800CE034
  cmpu(c,0,c->r[0],0x00000014u); // 800CE038
  if (crb(c,1)) { goto L_800CE064; } // 800CE03C
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 800CE040
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 800CE044
  cmpu(c,0,c->r[0],0x00005000u); // 800CE048
  if (crb(c,2)) { goto L_800CE05C; } // 800CE04C
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 800CE050
  cmpu(c,0,c->r[0],0x000000C0u); // 800CE054
  if (!crb(c,2)) { goto L_800CE064; } // 800CE058
L_800CE05C:;
  c->r[0]=0u+0x00000000u; // 800CE05C
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 800CE060
L_800CE064:;
  c->r[6]=0u+0x802F0000u; // 800CE064
  c->r[5]=0u+0x800D0000u; // 800CE068
  c->r[6]=c->r[6]+0xFFFF96E0u; // 800CE06C
  c->r[3]=0u+0x00000000u; // 800CE070
  c->r[31]=R32(c->r[6]+0x00000040u); // 800CE074
  c->r[5]=c->r[5]+0xFFFFDB80u; // 800CE078
  c->r[4]=0u+0x00000001u; // 800CE07C
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 800CE080
  c->r[30]=c->r[6]+c->r[31]; // 800CE084
  c->lr=0x800CE08Cu; f_800D4BC0(c); // 800CE088
  cmps(c,0,(int32_t)c->r[3],0); // 800CE08C
  if (!crb(c,2)) { goto L_800CE09C; } // 800CE090
  c->r[0]=0u+0x00000000u; // 800CE094
  goto L_800CE14C; // 800CE098
L_800CE09C:;
  c->r[3]=0u+0x00000000u; // 800CE09C
  c->r[4]=0u+0x00000001u; // 800CE0A0
  c->r[5]=0u+0x00000003u; // 800CE0A4
  c->lr=0x800CE0ACu; f_800D4410(c); // 800CE0A8
  cmps(c,0,(int32_t)c->r[3],0); // 800CE0AC
  if (!crb(c,2)) { goto L_800CE0C4; } // 800CE0B0
  c->r[3]=0u+0x00000000u; // 800CE0B4
  c->lr=0x800CE0BCu; f_800D4CC0(c); // 800CE0B8
  c->r[0]=0u+0x00000000u; // 800CE0BC
  goto L_800CE14C; // 800CE0C0
L_800CE0C4:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800CE0C4
  c->r[4]=c->r[1]+0x00000008u; // 800CE0C8
  c->r[0]=c->r[3]+0x00000100u; // 800CE0CC
  c->r[5]=0u+0x00000004u; // 800CE0D0
  c->r[0]=c->r[0]|0xA0000000u; // 800CE0D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CE0D8
  c->r[3]=0u+0x00000000u; // 800CE0DC
  c->r[6]=0u+0x00000001u; // 800CE0E0
  c->r[7]=0u+0x00000000u; // 800CE0E4
  c->lr=0x800CE0ECu; f_800D3970(c); // 800CE0E8
  c->r[0]=cntlz(c->r[3]); // 800CE0EC
  c->r[3]=0u+0x00000000u; // 800CE0F0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE0F4
  c->lr=0x800CE0FCu; f_800D3DA0(c); // 800CE0F8
  c->r[0]=cntlz(c->r[3]); // 800CE0FC
  c->r[4]=c->r[30]|c->r[30]; // 800CE100
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE104
  c->r[5]=c->r[29]|c->r[29]; // 800CE108
  c->r[29]=c->r[31]|c->r[0]; // 800CE10C
  c->r[3]=0u+0x00000000u; // 800CE110
  c->r[6]=0u+0x00000001u; // 800CE114
  c->lr=0x800CE11Cu; f_800D3BF0(c); // 800CE118
  c->r[0]=cntlz(c->r[3]); // 800CE11C
  c->r[3]=0u+0x00000000u; // 800CE120
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE124
  c->r[29]=c->r[29]|c->r[0]; // 800CE128
  c->lr=0x800CE130u; f_800D4540(c); // 800CE12C
  c->r[0]=cntlz(c->r[3]); // 800CE130
  c->r[3]=0u+0x00000000u; // 800CE134
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE138
  c->r[29]=c->r[29]|c->r[0]; // 800CE13C
  c->lr=0x800CE144u; f_800D4CC0(c); // 800CE140
  c->r[0]=cntlz(c->r[29]); // 800CE144
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE148
L_800CE14C:;
  c->r[3]=0u+0x802F0000u; // 800CE14C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE150
  c->r[3]=c->r[3]+0xFFFF96E0u; // 800CE154
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800CE158
  if (crb(c,2)) { goto L_800CE168; } // 800CE15C
  c->r[0]=0u+0x00000040u; // 800CE160
  W32(c->r[3]+0x00000040u,c->r[0]); // 800CE164
L_800CE168:;
  c->r[31]=0u+0x802F0000u; // 800CE168
  c->r[0]=0u+0x00000000u; // 800CE16C
  c->r[31]=c->r[31]+0xFFFF96E0u; // 800CE170
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CE174
  c->r[3]=R32(c->r[31]+0x00000044u); // 800CE178
  c->lr=0x800CE180u; f_800CBAE0(c); // 800CE17C
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800CE180
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE184
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE188
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CE18C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE190
  c->lr=c->r[0]; // 800CE194
  c->r[1]=c->r[1]+0x00000020u; // 800CE198
  return; // 800CE19C
}

// __OSSyncSram
void f_800CE1A0(Ctx* __restrict c) {
  trace_call(0x800CE1A0u);
  c->r[3]=0u+0x802F0000u; // 800CE1A0
  c->r[3]=c->r[3]+0xFFFF96E0u; // 800CE1A4
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800CE1A8
  return; // 800CE1AC
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_800CE1B0(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_800CE2E0(Ctx* __restrict c) {
  trace_call(0x800CE2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE2E0
  c->r[0]=c->lr; // 800CE2E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE2E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE2EC
  c->r[31]=c->r[3]|c->r[3]; // 800CE2F0
  c->lr=0x800CE2F8u; f_800CBAA0(c); // 800CE2F4
  c->r[4]=0u+0x802F0000u; // 800CE2F8
  c->r[4]=c->r[4]+0xFFFF96E0u; // 800CE2FC
  c->r[0]=R32(c->r[4]+0x00000048u); // 800CE300
  cmps(c,0,(int32_t)c->r[0],0); // 800CE304
  if (crb(c,2)) { goto L_800CE318; } // 800CE308
  c->lr=0x800CE310u; f_800CBAE0(c); // 800CE30C
  c->r[5]=0u+0x00000000u; // 800CE310
  goto L_800CE328; // 800CE314
L_800CE318:;
  c->r[0]=0u+0x00000001u; // 800CE318
  W32(c->r[4]+0x00000044u,c->r[3]); // 800CE31C
  c->r[5]=c->r[4]+0x00000014u; // 800CE320
  W32(c->r[4]+0x00000048u,c->r[0]); // 800CE324
L_800CE328:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800CE328
  c->r[3]=0u+0x00000000u; // 800CE32C
  c->r[5]=c->r[5]+c->r[0]; // 800CE330
  c->r[4]=0u+0x00000014u; // 800CE334
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 800CE338
  c->lr=0x800CE340u; f_800CDEC0(c); // 800CE33C
  c->r[3]=c->r[31]|c->r[31]; // 800CE340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE344
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE348
  c->lr=c->r[0]; // 800CE34C
  c->r[1]=c->r[1]+0x00000010u; // 800CE350
  return; // 800CE354
}

// OSSetWirelessID
void f_800CE360(Ctx* __restrict c) {
  trace_call(0x800CE360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE360
  c->r[0]=c->lr; // 800CE364
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE36C
  c->r[31]=c->r[4]|c->r[4]; // 800CE370
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE374
  c->r[30]=c->r[3]|c->r[3]; // 800CE378
  c->lr=0x800CE380u; f_800CBAA0(c); // 800CE37C
  c->r[4]=0u+0x802F0000u; // 800CE380
  c->r[4]=c->r[4]+0xFFFF96E0u; // 800CE384
  c->r[0]=R32(c->r[4]+0x00000048u); // 800CE388
  cmps(c,0,(int32_t)c->r[0],0); // 800CE38C
  if (crb(c,2)) { goto L_800CE3A0; } // 800CE390
  c->lr=0x800CE398u; f_800CBAE0(c); // 800CE394
  c->r[3]=0u+0x00000000u; // 800CE398
  goto L_800CE3B0; // 800CE39C
L_800CE3A0:;
  c->r[0]=0u+0x00000001u; // 800CE3A0
  W32(c->r[4]+0x00000044u,c->r[3]); // 800CE3A4
  c->r[3]=c->r[4]+0x00000014u; // 800CE3A8
  W32(c->r[4]+0x00000048u,c->r[0]); // 800CE3AC
L_800CE3B0:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800CE3B0
  c->r[3]=c->r[3]+c->r[0]; // 800CE3B4
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 800CE3B8
  cmpu(c,0,c->r[31],c->r[0]); // 800CE3BC
  if (crb(c,2)) { goto L_800CE3D8; } // 800CE3C0
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 800CE3C4
  c->r[3]=0u+0x00000001u; // 800CE3C8
  c->r[4]=0u+0x00000014u; // 800CE3CC
  c->lr=0x800CE3D4u; f_800CDEC0(c); // 800CE3D0
  goto L_800CE3E4; // 800CE3D4
L_800CE3D8:;
  c->r[3]=0u+0x00000000u; // 800CE3D8
  c->r[4]=0u+0x00000014u; // 800CE3DC
  c->lr=0x800CE3E4u; f_800CDEC0(c); // 800CE3E0
L_800CE3E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE3E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE3E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE3EC
  c->lr=c->r[0]; // 800CE3F0
  c->r[1]=c->r[1]+0x00000010u; // 800CE3F4
  return; // 800CE3F8
}

// __OSGetRTCFlags
void f_800CE400(Ctx* __restrict c) {
  trace_call(0x800CE400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE400
  c->r[0]=c->lr; // 800CE404
  c->r[4]=0u+0x00000001u; // 800CE408
  c->r[5]=0u+0x00000000u; // 800CE40C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE410
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE414
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE418
  c->r[30]=c->r[3]|c->r[3]; // 800CE41C
  c->r[3]=0u+0x00000000u; // 800CE420
  c->lr=0x800CE428u; f_800D4BC0(c); // 800CE424
  cmps(c,0,(int32_t)c->r[3],0); // 800CE428
  if (!crb(c,2)) { goto L_800CE438; } // 800CE42C
  c->r[3]=0u+0x00000000u; // 800CE430
  goto L_800CE504; // 800CE434
L_800CE438:;
  c->r[3]=0u+0x00000000u; // 800CE438
  c->r[4]=0u+0x00000001u; // 800CE43C
  c->r[5]=0u+0x00000003u; // 800CE440
  c->lr=0x800CE448u; f_800D4410(c); // 800CE444
  cmps(c,0,(int32_t)c->r[3],0); // 800CE448
  if (!crb(c,2)) { goto L_800CE460; } // 800CE44C
  c->r[3]=0u+0x00000000u; // 800CE450
  c->lr=0x800CE458u; f_800D4CC0(c); // 800CE454
  c->r[3]=0u+0x00000000u; // 800CE458
  goto L_800CE504; // 800CE45C
L_800CE460:;
  c->r[3]=0u+0x21000000u; // 800CE460
  c->r[4]=c->r[1]+0x00000008u; // 800CE464
  c->r[0]=c->r[3]+0x00000800u; // 800CE468
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CE46C
  c->r[3]=0u+0x00000000u; // 800CE470
  c->r[5]=0u+0x00000004u; // 800CE474
  c->r[6]=0u+0x00000001u; // 800CE478
  c->r[7]=0u+0x00000000u; // 800CE47C
  c->lr=0x800CE484u; f_800D3970(c); // 800CE480
  c->r[0]=cntlz(c->r[3]); // 800CE484
  c->r[3]=0u+0x00000000u; // 800CE488
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE48C
  c->lr=0x800CE494u; f_800D3DA0(c); // 800CE490
  c->r[0]=cntlz(c->r[3]); // 800CE494
  c->r[4]=c->r[1]+0x00000008u; // 800CE498
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE49C
  c->r[3]=0u+0x00000000u; // 800CE4A0
  c->r[31]=c->r[31]|c->r[0]; // 800CE4A4
  c->r[5]=0u+0x00000004u; // 800CE4A8
  c->r[6]=0u+0x00000000u; // 800CE4AC
  c->r[7]=0u+0x00000000u; // 800CE4B0
  c->lr=0x800CE4B8u; f_800D3970(c); // 800CE4B4
  c->r[0]=cntlz(c->r[3]); // 800CE4B8
  c->r[3]=0u+0x00000000u; // 800CE4BC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE4C0
  c->r[31]=c->r[31]|c->r[0]; // 800CE4C4
  c->lr=0x800CE4CCu; f_800D3DA0(c); // 800CE4C8
  c->r[0]=cntlz(c->r[3]); // 800CE4CC
  c->r[3]=0u+0x00000000u; // 800CE4D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE4D4
  c->r[31]=c->r[31]|c->r[0]; // 800CE4D8
  c->lr=0x800CE4E0u; f_800D4540(c); // 800CE4DC
  c->r[0]=cntlz(c->r[3]); // 800CE4E0
  c->r[3]=0u+0x00000000u; // 800CE4E4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE4E8
  c->r[31]=c->r[31]|c->r[0]; // 800CE4EC
  c->lr=0x800CE4F4u; f_800D4CC0(c); // 800CE4F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CE4F4
  c->r[0]=cntlz(c->r[31]); // 800CE4F8
  W32(c->r[30]+0x00000000u,c->r[3]); // 800CE4FC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE500
L_800CE504:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE508
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE50C
  c->lr=c->r[0]; // 800CE510
  c->r[1]=c->r[1]+0x00000020u; // 800CE514
  return; // 800CE518
}

// __OSClearRTCFlags
void f_800CE520(Ctx* __restrict c) {
  trace_call(0x800CE520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE520
  c->r[0]=c->lr; // 800CE524
  c->r[3]=0u+0x00000000u; // 800CE528
  c->r[4]=0u+0x00000001u; // 800CE52C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE530
  c->r[0]=0u+0x00000000u; // 800CE534
  c->r[5]=0u+0x00000000u; // 800CE538
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE53C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CE540
  c->lr=0x800CE548u; f_800D4BC0(c); // 800CE544
  cmps(c,0,(int32_t)c->r[3],0); // 800CE548
  if (!crb(c,2)) { goto L_800CE558; } // 800CE54C
  c->r[3]=0u+0x00000000u; // 800CE550
  goto L_800CE61C; // 800CE554
L_800CE558:;
  c->r[3]=0u+0x00000000u; // 800CE558
  c->r[4]=0u+0x00000001u; // 800CE55C
  c->r[5]=0u+0x00000003u; // 800CE560
  c->lr=0x800CE568u; f_800D4410(c); // 800CE564
  cmps(c,0,(int32_t)c->r[3],0); // 800CE568
  if (!crb(c,2)) { goto L_800CE580; } // 800CE56C
  c->r[3]=0u+0x00000000u; // 800CE570
  c->lr=0x800CE578u; f_800D4CC0(c); // 800CE574
  c->r[3]=0u+0x00000000u; // 800CE578
  goto L_800CE61C; // 800CE57C
L_800CE580:;
  c->r[3]=0u+0xA1000000u; // 800CE580
  c->r[4]=c->r[1]+0x0000000Cu; // 800CE584
  c->r[0]=c->r[3]+0x00000800u; // 800CE588
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CE58C
  c->r[3]=0u+0x00000000u; // 800CE590
  c->r[5]=0u+0x00000004u; // 800CE594
  c->r[6]=0u+0x00000001u; // 800CE598
  c->r[7]=0u+0x00000000u; // 800CE59C
  c->lr=0x800CE5A4u; f_800D3970(c); // 800CE5A0
  c->r[0]=cntlz(c->r[3]); // 800CE5A4
  c->r[3]=0u+0x00000000u; // 800CE5A8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE5AC
  c->lr=0x800CE5B4u; f_800D3DA0(c); // 800CE5B0
  c->r[0]=cntlz(c->r[3]); // 800CE5B4
  c->r[4]=c->r[1]+0x00000008u; // 800CE5B8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE5BC
  c->r[3]=0u+0x00000000u; // 800CE5C0
  c->r[31]=c->r[31]|c->r[0]; // 800CE5C4
  c->r[5]=0u+0x00000004u; // 800CE5C8
  c->r[6]=0u+0x00000001u; // 800CE5CC
  c->r[7]=0u+0x00000000u; // 800CE5D0
  c->lr=0x800CE5D8u; f_800D3970(c); // 800CE5D4
  c->r[0]=cntlz(c->r[3]); // 800CE5D8
  c->r[3]=0u+0x00000000u; // 800CE5DC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE5E0
  c->r[31]=c->r[31]|c->r[0]; // 800CE5E4
  c->lr=0x800CE5ECu; f_800D3DA0(c); // 800CE5E8
  c->r[0]=cntlz(c->r[3]); // 800CE5EC
  c->r[3]=0u+0x00000000u; // 800CE5F0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE5F4
  c->r[31]=c->r[31]|c->r[0]; // 800CE5F8
  c->lr=0x800CE600u; f_800D4540(c); // 800CE5FC
  c->r[0]=cntlz(c->r[3]); // 800CE600
  c->r[3]=0u+0x00000000u; // 800CE604
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE608
  c->r[31]=c->r[31]|c->r[0]; // 800CE60C
  c->lr=0x800CE614u; f_800D4CC0(c); // 800CE610
  c->r[0]=cntlz(c->r[31]); // 800CE614
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE618
L_800CE61C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE61C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE620
  c->lr=c->r[0]; // 800CE624
  c->r[1]=c->r[1]+0x00000020u; // 800CE628
  return; // 800CE62C
}

// SystemCallVector
void f_800CE630(Ctx* __restrict c) {
  trace_call(0x800CE630u);
  c->r[9]=mfspr(c,1008); // 800CE630
  c->r[10]=c->r[9]|0x00000008u; // 800CE634
  mtspr(c,1008,c->r[10]); // 800CE638
  /* isync */ // 800CE63C
  /* sync */ // 800CE640
  mtspr(c,1008,c->r[9]); // 800CE644
  return; /* rfi */ // 800CE648
  c->r[0]=c->r[0]|0x00000000u; // 800CE64C
}

// __OSInitSystemCall
void f_800CE650(Ctx* __restrict c) {
  trace_call(0x800CE650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE650
  c->r[0]=c->lr; // 800CE654
  c->r[4]=0u+0x800D0000u; // 800CE658
  c->r[5]=0u+0x800D0000u; // 800CE65C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE660
  c->r[4]=c->r[4]+0xFFFFE630u; // 800CE664
  c->r[5]=c->r[5]+0xFFFFE64Cu; // 800CE668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE66C
  c->r[31]=0u+0x80000000u; // 800CE670
  c->r[3]=c->r[31]+0x00000C00u; // 800CE674
  c->r[5]=c->r[5]-c->r[4]; // 800CE678
  c->lr=0x800CE680u; f_80004364(c); // 800CE67C
  c->r[3]=c->r[31]+0x00000C00u; // 800CE680
  c->r[4]=0u+0x00000100u; // 800CE684
  c->lr=0x800CE68Cu; f_800C77E0(c); // 800CE688
  /* sync */ // 800CE68C
  c->r[3]=c->r[31]+0x00000C00u; // 800CE690
  c->r[4]=0u+0x00000100u; // 800CE694
  c->lr=0x800CE69Cu; f_800C7840(c); // 800CE698
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE69C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE6A0
  c->lr=c->r[0]; // 800CE6A4
  c->r[1]=c->r[1]+0x00000010u; // 800CE6A8
  return; // 800CE6AC
}

// DefaultSwitchThreadCallback
void f_800CE6B0(Ctx* __restrict c) {
  trace_call(0x800CE6B0u);
  return; // 800CE6B0
}

// __OSThreadInit
void f_800CE6C0(Ctx* __restrict c) {
  trace_call(0x800CE6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE6C0
  c->r[0]=c->lr; // 800CE6C4
  c->r[3]=0u+0x00000002u; // 800CE6C8
  c->r[6]=0u+0x00000001u; // 800CE6CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE6D0
  c->r[4]=0u+0x00000000u; // 800CE6D4
  c->r[5]=0u+0x00000010u; // 800CE6D8
  c->r[0]=0u+0xFFFFFFFFu; // 800CE6DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE6E0
  c->r[31]=0u+0x802F0000u; // 800CE6E4
  c->r[31]=c->r[31]+0xFFFF9738u; // 800CE6E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE6EC
  c->r[30]=c->r[31]+0x00000000u; // 800CE6F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CE6F4
  c->r[29]=0u+0x80000000u; // 800CE6F8
  W16(c->r[30]+0x000002C8u,c->r[3]); // 800CE6FC
  c->r[3]=c->r[30]|c->r[30]; // 800CE700
  W16(c->r[30]+0x000002CAu,c->r[6]); // 800CE704
  W32(c->r[30]+0x000002D4u,c->r[5]); // 800CE708
  W32(c->r[30]+0x000002D0u,c->r[5]); // 800CE70C
  W32(c->r[30]+0x000002CCu,c->r[4]); // 800CE710
  W32(c->r[30]+0x000002D8u,c->r[0]); // 800CE714
  W32(c->r[30]+0x000002F0u,c->r[4]); // 800CE718
  W32(c->r[30]+0x000002ECu,c->r[4]); // 800CE71C
  W32(c->r[30]+0x000002E8u,c->r[4]); // 800CE720
  W32(c->r[30]+0x000002F8u,c->r[4]); // 800CE724
  W32(c->r[30]+0x000002F4u,c->r[4]); // 800CE728
  W32(c->r[29]+0x000000D8u,c->r[30]); // 800CE72C
  c->lr=0x800CE734u; f_800C8020(c); // 800CE730
  c->r[3]=c->r[30]|c->r[30]; // 800CE734
  c->lr=0x800CE73Cu; f_800C7DE0(c); // 800CE738
  c->r[3]=0u+0x803B0000u; // 800CE73C
  c->r[5]=0u+0x803A0000u; // 800CE740
  c->r[3]=c->r[3]+0xFFFFDB60u; // 800CE744
  W32(c->r[30]+0x00000304u,c->r[3]); // 800CE748
  c->r[5]=c->r[5]+0xFFFFDB60u; // 800CE74C
  c->r[4]=c->r[30]|c->r[30]; // 800CE750
  c->r[3]=0u+0xDEAE0000u; // 800CE754
  W32(c->r[30]+0x00000308u,c->r[5]); // 800CE758
  c->r[0]=c->r[3]+0xFFFFBABEu; // 800CE75C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800CE760
  c->r[12]=R32(c->r[13]+0xFFFF8F48u); // 800CE764
  c->r[3]=R32(c->r[29]+0x000000E4u); // 800CE768
  c->ctr=c->r[12]; // 800CE76C
  if (true) { c->lr=0x800CE774u; dispatch(c,c->ctr); } // 800CE770
  W32(c->r[29]+0x000000E4u,c->r[30]); // 800CE774
  c->lr=0x800CE77Cu; f_800C7FB0(c); // 800CE778
  c->r[4]=R32(c->r[29]+0x000000E4u); // 800CE77C
  c->r[4]=R32(c->r[4]+0x00000308u); // 800CE780
  c->r[8]=c->r[4]+0x00000004u; // 800CE784
  cmpu(c,1,c->r[8],c->r[3]); // 800CE788
  if (!crb(c,4)) { goto L_800CE84C; } // 800CE78C
  c->r[5]=c->r[3]-c->r[8]; // 800CE790
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 800CE794
  c->r[4]=c->r[5]+0x00000003u; // 800CE798
  c->r[0]=sraw(c,c->r[4],2); // 800CE79C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800CE7A0
  cmps(c,0,(int32_t)c->r[0],8); // 800CE7A4
  if (!crb(c,1)) { goto L_800CE824; } // 800CE7A8
  c->r[7]=0u+0x00000000u; // 800CE7AC
  if (crb(c,5)) { goto L_800CE7D8; } // 800CE7B0
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 800CE7B4
  c->r[5]=0u+0x00000001u; // 800CE7B8
  if (!crb(c,2)) { goto L_800CE7CC; } // 800CE7BC
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 800CE7C0
  if (crb(c,2)) { goto L_800CE7CC; } // 800CE7C4
  c->r[5]=0u+0x00000000u; // 800CE7C8
L_800CE7CC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CE7CC
  if (crb(c,2)) { goto L_800CE7D8; } // 800CE7D0
  c->r[7]=0u+0x00000001u; // 800CE7D4
L_800CE7D8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CE7D8
  if (crb(c,2)) { goto L_800CE824; } // 800CE7DC
  c->r[0]=c->r[6]+0x0000001Fu; // 800CE7E0
  c->r[4]=0u+0x00000000u; // 800CE7E4
  c->r[0]=c->r[0]-c->r[8]; // 800CE7E8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE7EC
  c->ctr=c->r[0]; // 800CE7F0
  cmpu(c,0,c->r[8],c->r[6]); // 800CE7F4
  if (!crb(c,0)) { goto L_800CE824; } // 800CE7F8
L_800CE7FC:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 800CE7FC
  W32(c->r[8]+0x00000004u,c->r[4]); // 800CE800
  W32(c->r[8]+0x00000008u,c->r[4]); // 800CE804
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 800CE808
  W32(c->r[8]+0x00000010u,c->r[4]); // 800CE80C
  W32(c->r[8]+0x00000014u,c->r[4]); // 800CE810
  W32(c->r[8]+0x00000018u,c->r[4]); // 800CE814
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 800CE818
  c->r[8]=c->r[8]+0x00000020u; // 800CE81C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE7FC; } // 800CE820
L_800CE824:;
  c->r[0]=c->r[3]+0x00000003u; // 800CE824
  c->r[4]=0u+0x00000000u; // 800CE828
  c->r[0]=c->r[0]-c->r[8]; // 800CE82C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800CE830
  c->ctr=c->r[0]; // 800CE834
  cmpu(c,0,c->r[8],c->r[3]); // 800CE838
  if (!crb(c,0)) { goto L_800CE84C; } // 800CE83C
L_800CE840:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 800CE840
  c->r[8]=c->r[8]+0x00000004u; // 800CE844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE840; } // 800CE848
L_800CE84C:;
  c->r[0]=0u+0x00000002u; // 800CE84C
  c->r[3]=0u+0x00000000u; // 800CE850
  W32(c->r[13]+0xFFFFA510u,c->r[3]); // 800CE854
  c->r[4]=c->r[31]+0x00000318u; // 800CE858
  W32(c->r[13]+0xFFFFA50Cu,c->r[3]); // 800CE85C
  c->ctr=c->r[0]; // 800CE860
L_800CE864:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 800CE864
  W32(c->r[4]+0x00000000u,c->r[3]); // 800CE868
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800CE86C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800CE870
  W32(c->r[4]+0x00000014u,c->r[3]); // 800CE874
  W32(c->r[4]+0x00000010u,c->r[3]); // 800CE878
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800CE87C
  W32(c->r[4]+0x00000018u,c->r[3]); // 800CE880
  W32(c->r[4]+0x00000024u,c->r[3]); // 800CE884
  W32(c->r[4]+0x00000020u,c->r[3]); // 800CE888
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800CE88C
  W32(c->r[4]+0x00000028u,c->r[3]); // 800CE890
  W32(c->r[4]+0x00000034u,c->r[3]); // 800CE894
  W32(c->r[4]+0x00000030u,c->r[3]); // 800CE898
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 800CE89C
  W32(c->r[4]+0x00000038u,c->r[3]); // 800CE8A0
  W32(c->r[4]+0x00000044u,c->r[3]); // 800CE8A4
  W32(c->r[4]+0x00000040u,c->r[3]); // 800CE8A8
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 800CE8AC
  W32(c->r[4]+0x00000048u,c->r[3]); // 800CE8B0
  W32(c->r[4]+0x00000054u,c->r[3]); // 800CE8B4
  W32(c->r[4]+0x00000050u,c->r[3]); // 800CE8B8
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 800CE8BC
  W32(c->r[4]+0x00000058u,c->r[3]); // 800CE8C0
  W32(c->r[4]+0x00000064u,c->r[3]); // 800CE8C4
  W32(c->r[4]+0x00000060u,c->r[3]); // 800CE8C8
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 800CE8CC
  W32(c->r[4]+0x00000068u,c->r[3]); // 800CE8D0
  W32(c->r[4]+0x00000074u,c->r[3]); // 800CE8D4
  W32(c->r[4]+0x00000070u,c->r[3]); // 800CE8D8
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 800CE8DC
  W32(c->r[4]+0x00000078u,c->r[3]); // 800CE8E0
  c->r[4]=c->r[4]+0x00000080u; // 800CE8E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE864; } // 800CE8E8
  c->r[3]=0u+0x80000000u; // 800CE8EC
  c->r[4]=0u+0x00000000u; // 800CE8F0
  W32(c->r[3]+0x000000E0u,c->r[4]); // 800CE8F4
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800CE8F8
  W32(c->r[3]+0x000000DCu,c->r[30]); // 800CE8FC
  goto L_800CE908; // 800CE900
  W32(c->r[4]+0x000002FCu,c->r[30]); // 800CE904
L_800CE908:;
  c->r[29]=0u+0x00000000u; // 800CE908
  W32(c->r[30]+0x00000300u,c->r[4]); // 800CE90C
  c->r[4]=0u+0x80000000u; // 800CE910
  c->r[3]=c->r[31]+0x00000418u; // 800CE914
  W32(c->r[30]+0x000002FCu,c->r[29]); // 800CE918
  W32(c->r[4]+0x000000E0u,c->r[30]); // 800CE91C
  c->lr=0x800CE924u; f_800C8020(c); // 800CE920
  W32(c->r[13]+0xFFFFA508u,c->r[29]); // 800CE924
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE928
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE92C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE930
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CE934
  c->lr=c->r[0]; // 800CE938
  c->r[1]=c->r[1]+0x00000020u; // 800CE93C
  return; // 800CE940
}

// OSInitThreadQueue
void f_800CE950(Ctx* __restrict c) {
  trace_call(0x800CE950u);
  c->r[0]=0u+0x00000000u; // 800CE950
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CE954
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CE958
  return; // 800CE95C
}

// OSGetCurrentThread
void f_800CE960(Ctx* __restrict c) {
  trace_call(0x800CE960u);
  c->r[3]=0u+0x80000000u; // 800CE960
  c->r[3]=R32(c->r[3]+0x000000E4u); // 800CE964
  return; // 800CE968
}

// OSIsThreadTerminated
void f_800CE970(Ctx* __restrict c) {
  trace_call(0x800CE970u);
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800CE970
  c->r[3]=0u+0x00000001u; // 800CE974
  cmpu(c,0,c->r[0],0x00000008u); // 800CE978
  if (crb(c,2)) { goto L_800CE98C; } // 800CE97C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE980
  if (crb(c,2)) { goto L_800CE98C; } // 800CE984
  c->r[3]=0u+0x00000000u; // 800CE988
L_800CE98C:;
  c->r[0]=0u-c->r[3]; // 800CE98C
  c->r[0]=c->r[0]|c->r[3]; // 800CE990
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CE994
  return; // 800CE998
}

// OSDisableScheduler
void f_800CE9A0(Ctx* __restrict c) {
  trace_call(0x800CE9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE9A0
  c->r[0]=c->lr; // 800CE9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE9AC
  c->lr=0x800CE9B4u; f_800CBAA0(c); // 800CE9B0
  c->r[31]=R32(c->r[13]+0xFFFFA508u); // 800CE9B4
  c->r[0]=c->r[31]+0x00000001u; // 800CE9B8
  W32(c->r[13]+0xFFFFA508u,c->r[0]); // 800CE9BC
  c->lr=0x800CE9C4u; f_800CBAE0(c); // 800CE9C0
  c->r[3]=c->r[31]|c->r[31]; // 800CE9C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE9CC
  c->lr=c->r[0]; // 800CE9D0
  c->r[1]=c->r[1]+0x00000010u; // 800CE9D4
  return; // 800CE9D8
}

// OSEnableScheduler
void f_800CE9E0(Ctx* __restrict c) {
  trace_call(0x800CE9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE9E0
  c->r[0]=c->lr; // 800CE9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE9EC
  c->lr=0x800CE9F4u; f_800CBAA0(c); // 800CE9F0
  c->r[31]=R32(c->r[13]+0xFFFFA508u); // 800CE9F4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800CE9F8
  W32(c->r[13]+0xFFFFA508u,c->r[0]); // 800CE9FC
  c->lr=0x800CEA04u; f_800CBAE0(c); // 800CEA00
  c->r[3]=c->r[31]|c->r[31]; // 800CEA04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEA08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEA0C
  c->lr=c->r[0]; // 800CEA10
  c->r[1]=c->r[1]+0x00000010u; // 800CEA14
  return; // 800CEA18
}

// UnsetRun
void f_800CEA20(Ctx* __restrict c) {
  trace_call(0x800CEA20u);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 800CEA20
  c->r[4]=R32(c->r[3]+0x000002DCu); // 800CEA24
  cmps(c,0,(int32_t)c->r[5],0); // 800CEA28
  c->r[6]=R32(c->r[3]+0x000002E4u); // 800CEA2C
  if (!crb(c,2)) { goto L_800CEA3C; } // 800CEA30
  W32(c->r[4]+0x00000004u,c->r[6]); // 800CEA34
  goto L_800CEA40; // 800CEA38
L_800CEA3C:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 800CEA3C
L_800CEA40:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CEA40
  if (!crb(c,2)) { goto L_800CEA50; } // 800CEA44
  W32(c->r[4]+0x00000000u,c->r[5]); // 800CEA48
  goto L_800CEA54; // 800CEA4C
L_800CEA50:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 800CEA50
L_800CEA54:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800CEA54
  cmps(c,0,(int32_t)c->r[0],0); // 800CEA58
  if (!crb(c,2)) { goto L_800CEA7C; } // 800CEA5C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CEA60
  c->r[4]=0u+0x00000001u; // 800CEA64
  c->r[5]=R32(c->r[13]+0xFFFFA510u); // 800CEA68
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800CEA6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800CEA70
  c->r[0]=c->r[5]&~c->r[0]; // 800CEA74
  W32(c->r[13]+0xFFFFA510u,c->r[0]); // 800CEA78
L_800CEA7C:;
  c->r[0]=0u+0x00000000u; // 800CEA7C
  W32(c->r[3]+0x000002DCu,c->r[0]); // 800CEA80
  return; // 800CEA84
}

// __OSGetEffectivePriority
void f_800CEA90(Ctx* __restrict c) {
  trace_call(0x800CEA90u);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800CEA90
  c->r[3]=R32(c->r[3]+0x000002F4u); // 800CEA94
  goto L_800CEAC0; // 800CEA98
  c->r[0]=c->r[0]|0x00000000u; // 800CEA9C
L_800CEAA0:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 800CEAA0
  cmps(c,0,(int32_t)c->r[5],0); // 800CEAA4
  if (crb(c,2)) { goto L_800CEABC; } // 800CEAA8
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800CEAAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CEAB0
  if (!crb(c,0)) { goto L_800CEABC; } // 800CEAB4
  c->r[4]=c->r[0]|c->r[0]; // 800CEAB8
L_800CEABC:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 800CEABC
L_800CEAC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CEAC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CEAA0; } // 800CEAC4
  c->r[3]=c->r[4]|c->r[4]; // 800CEAC8
  return; // 800CEACC
}

// SetEffectivePriority
void f_800CEAD0(Ctx* __restrict c) {
  trace_call(0x800CEAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEAD0
  c->r[0]=c->lr; // 800CEAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEADC
  c->r[31]=c->r[4]|c->r[4]; // 800CEAE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CEAE4
  c->r[30]=c->r[3]|c->r[3]; // 800CEAE8
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800CEAEC
  cmps(c,0,(int32_t)c->r[0],1); // 800CEAF0
  if (crb(c,2)) { goto L_800CEB0C; } // 800CEAF4
  cmps(c,0,(int32_t)c->r[0],4); // 800CEAF8
  if (crb(c,2)) { goto L_800CEB78; } // 800CEAFC
  cmps(c,0,(int32_t)c->r[0],2); // 800CEB00
  if (crb(c,2)) { goto L_800CEC50; } // 800CEB04
  goto L_800CEC5C; // 800CEB08
L_800CEB0C:;
  c->lr=0x800CEB10u; f_800CEA20(c); // 800CEB0C
  c->r[3]=0u+0x802F0000u; // 800CEB10
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800CEB14
  c->r[3]=c->r[3]+0xFFFF9A50u; // 800CEB18
  W32(c->r[30]+0x000002D0u,c->r[31]); // 800CEB1C
  c->r[3]=c->r[3]+c->r[0]; // 800CEB20
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800CEB24
  c->r[4]=R32(c->r[3]+0x00000004u); // 800CEB28
  cmps(c,0,(int32_t)c->r[4],0); // 800CEB2C
  if (!crb(c,2)) { goto L_800CEB3C; } // 800CEB30
  W32(c->r[3]+0x00000000u,c->r[30]); // 800CEB34
  goto L_800CEB40; // 800CEB38
L_800CEB3C:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 800CEB3C
L_800CEB40:;
  c->r[0]=0u+0x00000000u; // 800CEB40
  W32(c->r[30]+0x000002E4u,c->r[4]); // 800CEB44
  c->r[4]=R32(c->r[30]+0x000002DCu); // 800CEB48
  c->r[3]=0u+0x00000001u; // 800CEB4C
  W32(c->r[30]+0x000002E0u,c->r[0]); // 800CEB50
  W32(c->r[4]+0x00000004u,c->r[30]); // 800CEB54
  c->r[0]=R32(c->r[30]+0x000002D0u); // 800CEB58
  c->r[4]=R32(c->r[13]+0xFFFFA510u); // 800CEB5C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800CEB60
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CEB64
  c->r[0]=c->r[4]|c->r[0]; // 800CEB68
  W32(c->r[13]+0xFFFFA510u,c->r[0]); // 800CEB6C
  W32(c->r[13]+0xFFFFA50Cu,c->r[3]); // 800CEB70
  goto L_800CEC5C; // 800CEB74
L_800CEB78:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 800CEB78
  c->r[7]=R32(c->r[3]+0x000002E4u); // 800CEB7C
  cmps(c,0,(int32_t)c->r[6],0); // 800CEB80
  if (!crb(c,2)) { goto L_800CEB94; } // 800CEB84
  c->r[5]=R32(c->r[3]+0x000002DCu); // 800CEB88
  W32(c->r[5]+0x00000004u,c->r[7]); // 800CEB8C
  goto L_800CEB98; // 800CEB90
L_800CEB94:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 800CEB94
L_800CEB98:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CEB98
  if (!crb(c,2)) { goto L_800CEBAC; } // 800CEB9C
  c->r[5]=R32(c->r[3]+0x000002DCu); // 800CEBA0
  W32(c->r[5]+0x00000000u,c->r[6]); // 800CEBA4
  goto L_800CEBB0; // 800CEBA8
L_800CEBAC:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 800CEBAC
L_800CEBB0:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 800CEBB0
  c->r[5]=R32(c->r[3]+0x000002DCu); // 800CEBB4
  c->r[6]=R32(c->r[5]+0x00000000u); // 800CEBB8
  goto L_800CEBC4; // 800CEBBC
L_800CEBC0:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 800CEBC0
L_800CEBC4:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CEBC4
  if (crb(c,2)) { goto L_800CEBDC; } // 800CEBC8
  c->r[4]=R32(c->r[6]+0x000002D0u); // 800CEBCC
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CEBD0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800CEBD4
  if (!crb(c,1)) { IRQCHK(c); goto L_800CEBC0; } // 800CEBD8
L_800CEBDC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CEBDC
  if (!crb(c,2)) { goto L_800CEC14; } // 800CEBE0
  c->r[4]=R32(c->r[5]+0x00000004u); // 800CEBE4
  cmps(c,0,(int32_t)c->r[4],0); // 800CEBE8
  if (!crb(c,2)) { goto L_800CEBF8; } // 800CEBEC
  W32(c->r[5]+0x00000000u,c->r[3]); // 800CEBF0
  goto L_800CEBFC; // 800CEBF4
L_800CEBF8:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 800CEBF8
L_800CEBFC:;
  c->r[0]=0u+0x00000000u; // 800CEBFC
  W32(c->r[3]+0x000002E4u,c->r[4]); // 800CEC00
  c->r[4]=R32(c->r[3]+0x000002DCu); // 800CEC04
  W32(c->r[3]+0x000002E0u,c->r[0]); // 800CEC08
  W32(c->r[4]+0x00000004u,c->r[3]); // 800CEC0C
  goto L_800CEC3C; // 800CEC10
L_800CEC14:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 800CEC14
  c->r[4]=R32(c->r[6]+0x000002E4u); // 800CEC18
  W32(c->r[6]+0x000002E4u,c->r[3]); // 800CEC1C
  cmps(c,0,(int32_t)c->r[4],0); // 800CEC20
  W32(c->r[3]+0x000002E4u,c->r[4]); // 800CEC24
  if (!crb(c,2)) { goto L_800CEC38; } // 800CEC28
  c->r[4]=R32(c->r[3]+0x000002DCu); // 800CEC2C
  W32(c->r[4]+0x00000000u,c->r[3]); // 800CEC30
  goto L_800CEC3C; // 800CEC34
L_800CEC38:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 800CEC38
L_800CEC3C:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 800CEC3C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEC40
  if (crb(c,2)) { goto L_800CEC5C; } // 800CEC44
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CEC48
  goto L_800CEC60; // 800CEC4C
L_800CEC50:;
  c->r[0]=0u+0x00000001u; // 800CEC50
  W32(c->r[13]+0xFFFFA50Cu,c->r[0]); // 800CEC54
  W32(c->r[3]+0x000002D0u,c->r[4]); // 800CEC58
L_800CEC5C:;
  c->r[3]=0u+0x00000000u; // 800CEC5C
L_800CEC60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEC60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEC64
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CEC68
  c->lr=c->r[0]; // 800CEC6C
  c->r[1]=c->r[1]+0x00000010u; // 800CEC70
  return; // 800CEC74
}

// __OSPromoteThread
void f_800CEC80(Ctx* __restrict c) {
  trace_call(0x800CEC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEC80
  c->r[0]=c->lr; // 800CEC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEC8C
  c->r[31]=c->r[4]|c->r[4]; // 800CEC90
L_800CEC94:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800CEC94
  cmps(c,0,(int32_t)c->r[0],0); // 800CEC98
  if (crb(c,1)) { goto L_800CECBC; } // 800CEC9C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CECA0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800CECA4
  if (!crb(c,1)) { goto L_800CECBC; } // 800CECA8
  c->r[4]=c->r[31]|c->r[31]; // 800CECAC
  c->lr=0x800CECB4u; f_800CEAD0(c); // 800CECB0
  cmps(c,0,(int32_t)c->r[3],0); // 800CECB4
  if (!crb(c,2)) { IRQCHK(c); goto L_800CEC94; } // 800CECB8
L_800CECBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CECBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CECC0
  c->lr=c->r[0]; // 800CECC4
  c->r[1]=c->r[1]+0x00000010u; // 800CECC8
  return; // 800CECCC
}

// SelectThread
void f_800CECD0(Ctx* __restrict c) {
  trace_call(0x800CECD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CECD0
  c->r[0]=c->lr; // 800CECD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CECD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CECDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CECE0
  c->r[30]=c->r[3]|c->r[3]; // 800CECE4
  c->r[0]=R32(c->r[13]+0xFFFFA508u); // 800CECE8
  cmps(c,0,(int32_t)c->r[0],0); // 800CECEC
  if (!crb(c,1)) { goto L_800CECFC; } // 800CECF0
  c->r[3]=0u+0x00000000u; // 800CECF4
  goto L_800CEEE4; // 800CECF8
L_800CECFC:;
  c->lr=0x800CED00u; f_800C7E40(c); // 800CECFC
  c->r[4]=0u+0x80000000u; // 800CED00
  c->r[5]=R32(c->r[4]+0x000000E4u); // 800CED04
  cmpu(c,0,c->r[3],c->r[5]); // 800CED08
  if (crb(c,2)) { goto L_800CED18; } // 800CED0C
  c->r[3]=0u+0x00000000u; // 800CED10
  goto L_800CEEE4; // 800CED14
L_800CED18:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CED18
  if (crb(c,2)) { goto L_800CEDE0; } // 800CED1C
  c->r[0]=R16(c->r[5]+0x000002C8u); // 800CED20
  cmpu(c,0,c->r[0],0x00000002u); // 800CED24
  if (!crb(c,2)) { goto L_800CEDBC; } // 800CED28
  cmps(c,0,(int32_t)c->r[30],0); // 800CED2C
  if (!crb(c,2)) { goto L_800CED50; } // 800CED30
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800CED34
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800CED38
  c->r[3]=cntlz(c->r[3]); // 800CED3C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800CED40
  if (crb(c,1)) { goto L_800CED50; } // 800CED44
  c->r[3]=0u+0x00000000u; // 800CED48
  goto L_800CEEE4; // 800CED4C
L_800CED50:;
  c->r[0]=0u+0x00000001u; // 800CED50
  W16(c->r[5]+0x000002C8u,c->r[0]); // 800CED54
  c->r[3]=0u+0x802F0000u; // 800CED58
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800CED5C
  c->r[3]=c->r[3]+0xFFFF9A50u; // 800CED60
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800CED64
  c->r[3]=c->r[3]+c->r[0]; // 800CED68
  W32(c->r[5]+0x000002DCu,c->r[3]); // 800CED6C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800CED70
  cmps(c,0,(int32_t)c->r[4],0); // 800CED74
  if (!crb(c,2)) { goto L_800CED84; } // 800CED78
  W32(c->r[3]+0x00000000u,c->r[5]); // 800CED7C
  goto L_800CED88; // 800CED80
L_800CED84:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 800CED84
L_800CED88:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 800CED88
  c->r[0]=0u+0x00000000u; // 800CED8C
  c->r[3]=0u+0x00000001u; // 800CED90
  W32(c->r[5]+0x000002E0u,c->r[0]); // 800CED94
  c->r[4]=R32(c->r[5]+0x000002DCu); // 800CED98
  W32(c->r[4]+0x00000004u,c->r[5]); // 800CED9C
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800CEDA0
  c->r[4]=R32(c->r[13]+0xFFFFA510u); // 800CEDA4
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800CEDA8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CEDAC
  c->r[0]=c->r[4]|c->r[0]; // 800CEDB0
  W32(c->r[13]+0xFFFFA510u,c->r[0]); // 800CEDB4
  W32(c->r[13]+0xFFFFA50Cu,c->r[3]); // 800CEDB8
L_800CEDBC:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 800CEDBC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800CEDC0
  if (!crb(c,2)) { goto L_800CEDE0; } // 800CEDC4
  c->r[3]=c->r[5]|c->r[5]; // 800CEDC8
  c->lr=0x800CEDD0u; f_800C7E50(c); // 800CEDCC
  cmps(c,0,(int32_t)c->r[3],0); // 800CEDD0
  if (crb(c,2)) { goto L_800CEDE0; } // 800CEDD4
  c->r[3]=0u+0x00000000u; // 800CEDD8
  goto L_800CEEE4; // 800CEDDC
L_800CEDE0:;
  c->r[0]=R32(c->r[13]+0xFFFFA510u); // 800CEDE0
  cmps(c,0,(int32_t)c->r[0],0); // 800CEDE4
  if (!crb(c,2)) { goto L_800CEE48; } // 800CEDE8
  c->r[12]=R32(c->r[13]+0xFFFF8F48u); // 800CEDEC
  c->r[31]=0u+0x80000000u; // 800CEDF0
  c->r[3]=R32(c->r[31]+0x000000E4u); // 800CEDF4
  c->r[4]=0u+0x00000000u; // 800CEDF8
  c->ctr=c->r[12]; // 800CEDFC
  if (true) { c->lr=0x800CEE04u; dispatch(c,c->ctr); } // 800CEE00
  c->r[0]=0u+0x00000000u; // 800CEE04
  c->r[3]=0u+0x802F0000u; // 800CEE08
  W32(c->r[31]+0x000000E4u,c->r[0]); // 800CEE0C
  c->r[3]=c->r[3]+0xFFFF9B50u; // 800CEE10
  c->lr=0x800CEE18u; f_800C7DE0(c); // 800CEE14
L_800CEE18:;
  c->lr=0x800CEE1Cu; f_800CBAC0(c); // 800CEE18
  c->r[0]=c->r[0]|0x00000000u; // 800CEE1C
L_800CEE20:;
  c->r[0]=R32(c->r[13]+0xFFFFA510u); // 800CEE20
  cmps(c,0,(int32_t)c->r[0],0); // 800CEE24
  if (crb(c,2)) { IDLEWAIT(c); goto L_800CEE20; } // 800CEE28
  c->lr=0x800CEE30u; f_800CBAA0(c); // 800CEE2C
  c->r[0]=R32(c->r[13]+0xFFFFA510u); // 800CEE30
  cmps(c,0,(int32_t)c->r[0],0); // 800CEE34
  if (crb(c,2)) { IRQCHK(c); goto L_800CEE18; } // 800CEE38
  c->r[3]=0u+0x802F0000u; // 800CEE3C
  c->r[3]=c->r[3]+0xFFFF9B50u; // 800CEE40
  c->lr=0x800CEE48u; f_800C8020(c); // 800CEE44
L_800CEE48:;
  c->r[4]=0u+0x00000000u; // 800CEE48
  W32(c->r[13]+0xFFFFA50Cu,c->r[4]); // 800CEE4C
  c->r[0]=R32(c->r[13]+0xFFFFA510u); // 800CEE50
  c->r[3]=0u+0x802F0000u; // 800CEE54
  c->r[3]=c->r[3]+0xFFFF9A50u; // 800CEE58
  c->r[5]=cntlz(c->r[0]); // 800CEE5C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800CEE60
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 800CEE64
  c->r[6]=R32(c->r[30]+0x000002E0u); // 800CEE68
  cmps(c,0,(int32_t)c->r[6],0); // 800CEE6C
  if (!crb(c,2)) { goto L_800CEE7C; } // 800CEE70
  W32(c->r[3]+0x00000004u,c->r[4]); // 800CEE74
  goto L_800CEE80; // 800CEE78
L_800CEE7C:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 800CEE7C
L_800CEE80:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CEE80
  W32(c->r[3]+0x00000000u,c->r[6]); // 800CEE84
  if (!crb(c,2)) { goto L_800CEEA4; } // 800CEE88
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 800CEE8C
  c->r[3]=0u+0x00000001u; // 800CEE90
  c->r[4]=R32(c->r[13]+0xFFFFA510u); // 800CEE94
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CEE98
  c->r[0]=c->r[4]&~c->r[0]; // 800CEE9C
  W32(c->r[13]+0xFFFFA510u,c->r[0]); // 800CEEA0
L_800CEEA4:;
  c->r[0]=0u+0x00000000u; // 800CEEA4
  W32(c->r[30]+0x000002DCu,c->r[0]); // 800CEEA8
  c->r[0]=0u+0x00000002u; // 800CEEAC
  c->r[31]=0u+0x80000000u; // 800CEEB0
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800CEEB4
  c->r[4]=c->r[30]|c->r[30]; // 800CEEB8
  c->r[12]=R32(c->r[13]+0xFFFF8F48u); // 800CEEBC
  c->r[3]=R32(c->r[31]+0x000000E4u); // 800CEEC0
  c->ctr=c->r[12]; // 800CEEC4
  if (true) { c->lr=0x800CEECCu; dispatch(c,c->ctr); } // 800CEEC8
  W32(c->r[31]+0x000000E4u,c->r[30]); // 800CEECC
  c->r[3]=c->r[30]|c->r[30]; // 800CEED0
  c->lr=0x800CEED8u; f_800C7DE0(c); // 800CEED4
  c->r[3]=c->r[30]|c->r[30]; // 800CEED8
  c->lr=0x800CEEE0u; f_800C7ED0(c); // 800CEEDC
  c->r[3]=c->r[30]|c->r[30]; // 800CEEE0
L_800CEEE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEEE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEEE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CEEEC
  c->lr=c->r[0]; // 800CEEF0
  c->r[1]=c->r[1]+0x00000010u; // 800CEEF4
  return; // 800CEEF8
}

// __OSReschedule
void f_800CEF00(Ctx* __restrict c) {
  trace_call(0x800CEF00u);
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CEF00
  cmps(c,0,(int32_t)c->r[0],0); // 800CEF04
  if (crb(c,2)) return; // 800CEF08
  c->r[3]=0u+0x00000000u; // 800CEF0C
  f_800CECD0(c); return; // 800CEF10
  return; // 800CEF14
}

// OSCreateThread
void f_800CEF20(Ctx* __restrict c) {
  trace_call(0x800CEF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEF20
  c->r[0]=c->lr; // 800CEF24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEF28
  c->r[11]=c->r[1]+0x00000020u; // 800CEF2C
  c->lr=0x800CEF34u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEF30
  cmps(c,0,(int32_t)c->r[8],0); // 800CEF34
  c->r[31]=c->r[3]|c->r[3]; // 800CEF38
  c->r[26]=c->r[5]|c->r[5]; // 800CEF3C
  c->r[27]=c->r[6]|c->r[6]; // 800CEF40
  c->r[28]=c->r[7]|c->r[7]; // 800CEF44
  if (crb(c,0)) { goto L_800CEF54; } // 800CEF48
  cmps(c,0,(int32_t)c->r[8],31); // 800CEF4C
  if (!crb(c,1)) { goto L_800CEF5C; } // 800CEF50
L_800CEF54:;
  c->r[3]=0u+0x00000000u; // 800CEF54
  goto L_800CF174; // 800CEF58
L_800CEF5C:;
  c->r[7]=0u+0x00000001u; // 800CEF5C
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 800CEF60
  c->r[30]=0u+0x00000000u; // 800CEF64
  c->r[29]=0u+0xFFFFFFFFu; // 800CEF68
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 800CEF6C
  W16(c->r[3]+0x000002C8u,c->r[7]); // 800CEF70
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 800CEF74
  W16(c->r[3]+0x000002CAu,c->r[0]); // 800CEF78
  W32(c->r[3]+0x000002D4u,c->r[8]); // 800CEF7C
  W32(c->r[3]+0x000002D0u,c->r[8]); // 800CEF80
  W32(c->r[3]+0x000002CCu,c->r[7]); // 800CEF84
  W32(c->r[3]+0x000002D8u,c->r[29]); // 800CEF88
  W32(c->r[3]+0x000002F0u,c->r[30]); // 800CEF8C
  W32(c->r[3]+0x000002ECu,c->r[30]); // 800CEF90
  W32(c->r[3]+0x000002E8u,c->r[30]); // 800CEF94
  W32(c->r[3]+0x000002F8u,c->r[30]); // 800CEF98
  W32(c->r[3]+0x000002F4u,c->r[30]); // 800CEF9C
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 800CEFA0
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 800CEFA4
  c->lr=0x800CEFACu; f_800C8050(c); // 800CEFA8
  c->r[3]=0u+0x800D0000u; // 800CEFAC
  c->r[4]=c->r[27]-c->r[28]; // 800CEFB0
  c->r[3]=c->r[3]+0xFFFFF190u; // 800CEFB4
  W32(c->r[31]+0x00000084u,c->r[3]); // 800CEFB8
  c->r[3]=0u+0xDEAE0000u; // 800CEFBC
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 800CEFC0
  c->r[0]=c->r[3]+0xFFFFBABEu; // 800CEFC4
  W32(c->r[31]+0x00000304u,c->r[27]); // 800CEFC8
  W32(c->r[31]+0x00000308u,c->r[4]); // 800CEFCC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800CEFD0
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 800CEFD4
  W32(c->r[31]+0x00000310u,c->r[30]); // 800CEFD8
  W32(c->r[31]+0x00000314u,c->r[30]); // 800CEFDC
  c->lr=0x800CEFE4u; f_800CBAA0(c); // 800CEFE0
  c->r[4]=0u+0x802F0000u; // 800CEFE4
  c->r[4]=c->r[4]+0xFFFF9390u; // 800CEFE8
  c->r[0]=R32(c->r[4]+0x00000040u); // 800CEFEC
  cmps(c,0,(int32_t)c->r[0],0); // 800CEFF0
  if (crb(c,2)) { goto L_800CF13C; } // 800CEFF4
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 800CEFF8
  c->r[0]=0u+0x00000002u; // 800CEFFC
  c->r[4]=R16(c->r[31]+0x000001A2u); // 800CF000
  c->r[6]=c->r[31]+0x00000090u; // 800CF004
  c->r[5]=c->r[5]|0x00000900u; // 800CF008
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 800CF00C
  c->r[4]=c->r[4]|0x00000001u; // 800CF010
  W16(c->r[31]+0x000001A2u,c->r[4]); // 800CF014
  c->r[5]=c->r[31]+0x000001C8u; // 800CF018
  c->r[4]=R32(c->r[13]+0xFFFF8F20u); // 800CF01C
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 800CF020
  c->r[4]=c->r[4]|0x00000004u; // 800CF024
  W32(c->r[31]+0x00000194u,c->r[4]); // 800CF028
  c->ctr=c->r[0]; // 800CF02C
L_800CF030:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 800CF030
  W32(c->r[6]+0x00000000u,c->r[29]); // 800CF034
  W32(c->r[5]+0x00000004u,c->r[29]); // 800CF038
  W32(c->r[5]+0x00000000u,c->r[29]); // 800CF03C
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 800CF040
  W32(c->r[6]+0x00000008u,c->r[29]); // 800CF044
  W32(c->r[5]+0x0000000Cu,c->r[29]); // 800CF048
  W32(c->r[5]+0x00000008u,c->r[29]); // 800CF04C
  W32(c->r[6]+0x00000014u,c->r[29]); // 800CF050
  W32(c->r[6]+0x00000010u,c->r[29]); // 800CF054
  W32(c->r[5]+0x00000014u,c->r[29]); // 800CF058
  W32(c->r[5]+0x00000010u,c->r[29]); // 800CF05C
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 800CF060
  W32(c->r[6]+0x00000018u,c->r[29]); // 800CF064
  W32(c->r[5]+0x0000001Cu,c->r[29]); // 800CF068
  W32(c->r[5]+0x00000018u,c->r[29]); // 800CF06C
  W32(c->r[6]+0x00000024u,c->r[29]); // 800CF070
  W32(c->r[6]+0x00000020u,c->r[29]); // 800CF074
  W32(c->r[5]+0x00000024u,c->r[29]); // 800CF078
  W32(c->r[5]+0x00000020u,c->r[29]); // 800CF07C
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 800CF080
  W32(c->r[6]+0x00000028u,c->r[29]); // 800CF084
  W32(c->r[5]+0x0000002Cu,c->r[29]); // 800CF088
  W32(c->r[5]+0x00000028u,c->r[29]); // 800CF08C
  W32(c->r[6]+0x00000034u,c->r[29]); // 800CF090
  W32(c->r[6]+0x00000030u,c->r[29]); // 800CF094
  W32(c->r[5]+0x00000034u,c->r[29]); // 800CF098
  W32(c->r[5]+0x00000030u,c->r[29]); // 800CF09C
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 800CF0A0
  W32(c->r[6]+0x00000038u,c->r[29]); // 800CF0A4
  W32(c->r[5]+0x0000003Cu,c->r[29]); // 800CF0A8
  W32(c->r[5]+0x00000038u,c->r[29]); // 800CF0AC
  W32(c->r[6]+0x00000044u,c->r[29]); // 800CF0B0
  W32(c->r[6]+0x00000040u,c->r[29]); // 800CF0B4
  W32(c->r[5]+0x00000044u,c->r[29]); // 800CF0B8
  W32(c->r[5]+0x00000040u,c->r[29]); // 800CF0BC
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 800CF0C0
  W32(c->r[6]+0x00000048u,c->r[29]); // 800CF0C4
  W32(c->r[5]+0x0000004Cu,c->r[29]); // 800CF0C8
  W32(c->r[5]+0x00000048u,c->r[29]); // 800CF0CC
  W32(c->r[6]+0x00000054u,c->r[29]); // 800CF0D0
  W32(c->r[6]+0x00000050u,c->r[29]); // 800CF0D4
  W32(c->r[5]+0x00000054u,c->r[29]); // 800CF0D8
  W32(c->r[5]+0x00000050u,c->r[29]); // 800CF0DC
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 800CF0E0
  W32(c->r[6]+0x00000058u,c->r[29]); // 800CF0E4
  W32(c->r[5]+0x0000005Cu,c->r[29]); // 800CF0E8
  W32(c->r[5]+0x00000058u,c->r[29]); // 800CF0EC
  W32(c->r[6]+0x00000064u,c->r[29]); // 800CF0F0
  W32(c->r[6]+0x00000060u,c->r[29]); // 800CF0F4
  W32(c->r[5]+0x00000064u,c->r[29]); // 800CF0F8
  W32(c->r[5]+0x00000060u,c->r[29]); // 800CF0FC
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 800CF100
  W32(c->r[6]+0x00000068u,c->r[29]); // 800CF104
  W32(c->r[5]+0x0000006Cu,c->r[29]); // 800CF108
  W32(c->r[5]+0x00000068u,c->r[29]); // 800CF10C
  W32(c->r[6]+0x00000074u,c->r[29]); // 800CF110
  W32(c->r[6]+0x00000070u,c->r[29]); // 800CF114
  W32(c->r[5]+0x00000074u,c->r[29]); // 800CF118
  W32(c->r[5]+0x00000070u,c->r[29]); // 800CF11C
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 800CF120
  W32(c->r[6]+0x00000078u,c->r[29]); // 800CF124
  c->r[6]=c->r[6]+0x00000080u; // 800CF128
  W32(c->r[5]+0x0000007Cu,c->r[29]); // 800CF12C
  W32(c->r[5]+0x00000078u,c->r[29]); // 800CF130
  c->r[5]=c->r[5]+0x00000080u; // 800CF134
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF030; } // 800CF138
L_800CF13C:;
  c->r[4]=0u+0x80000000u; // 800CF13C
  c->r[5]=R32(c->r[4]+0x000000E0u); // 800CF140
  cmps(c,0,(int32_t)c->r[5],0); // 800CF144
  if (!crb(c,2)) { goto L_800CF154; } // 800CF148
  W32(c->r[4]+0x000000DCu,c->r[31]); // 800CF14C
  goto L_800CF158; // 800CF150
L_800CF154:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 800CF154
L_800CF158:;
  c->r[0]=0u+0x00000000u; // 800CF158
  W32(c->r[31]+0x00000300u,c->r[5]); // 800CF15C
  c->r[4]=0u+0x80000000u; // 800CF160
  W32(c->r[31]+0x000002FCu,c->r[0]); // 800CF164
  W32(c->r[4]+0x000000E0u,c->r[31]); // 800CF168
  c->lr=0x800CF170u; f_800CBAE0(c); // 800CF16C
  c->r[3]=0u+0x00000001u; // 800CF170
L_800CF174:;
  c->r[11]=c->r[1]+0x00000020u; // 800CF174
  c->lr=0x800CF17Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF178
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF17C
  c->lr=c->r[0]; // 800CF180
  c->r[1]=c->r[1]+0x00000020u; // 800CF184
  return; // 800CF188
}

// OSExitThread
void f_800CF190(Ctx* __restrict c) {
  trace_call(0x800CF190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF190
  c->r[0]=c->lr; // 800CF194
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF19C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF1A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF1A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CF1A8
  c->r[28]=c->r[3]|c->r[3]; // 800CF1AC
  c->lr=0x800CF1B4u; f_800CBAA0(c); // 800CF1B0
  c->r[31]=0u+0x80000000u; // 800CF1B4
  c->r[29]=c->r[3]|c->r[3]; // 800CF1B8
  c->r[30]=R32(c->r[31]+0x000000E4u); // 800CF1BC
  c->r[3]=c->r[30]|c->r[30]; // 800CF1C0
  c->lr=0x800CF1C8u; f_800C8020(c); // 800CF1C4
  c->r[0]=R16(c->r[30]+0x000002CAu); // 800CF1C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800CF1CC
  if (crb(c,2)) { goto L_800CF214; } // 800CF1D0
  c->r[4]=R32(c->r[30]+0x000002FCu); // 800CF1D4
  c->r[3]=R32(c->r[30]+0x00000300u); // 800CF1D8
  cmps(c,0,(int32_t)c->r[4],0); // 800CF1DC
  if (!crb(c,2)) { goto L_800CF1EC; } // 800CF1E0
  W32(c->r[31]+0x000000E0u,c->r[3]); // 800CF1E4
  goto L_800CF1F0; // 800CF1E8
L_800CF1EC:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 800CF1EC
L_800CF1F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CF1F0
  if (!crb(c,2)) { goto L_800CF204; } // 800CF1F4
  c->r[3]=0u+0x80000000u; // 800CF1F8
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800CF1FC
  goto L_800CF208; // 800CF200
L_800CF204:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 800CF204
L_800CF208:;
  c->r[0]=0u+0x00000000u; // 800CF208
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800CF20C
  goto L_800CF220; // 800CF210
L_800CF214:;
  c->r[0]=0u+0x00000008u; // 800CF214
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800CF218
  W32(c->r[30]+0x000002D8u,c->r[28]); // 800CF21C
L_800CF220:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF220
  c->lr=0x800CF228u; f_800CCF00(c); // 800CF224
  c->r[3]=c->r[30]+0x000002E8u; // 800CF228
  c->lr=0x800CF230u; f_800CFAD0(c); // 800CF22C
  c->r[0]=0u+0x00000001u; // 800CF230
  W32(c->r[13]+0xFFFFA50Cu,c->r[0]); // 800CF234
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CF238
  cmps(c,0,(int32_t)c->r[0],0); // 800CF23C
  if (crb(c,2)) { goto L_800CF24C; } // 800CF240
  c->r[3]=0u+0x00000000u; // 800CF244
  c->lr=0x800CF24Cu; f_800CECD0(c); // 800CF248
L_800CF24C:;
  c->r[3]=c->r[29]|c->r[29]; // 800CF24C
  c->lr=0x800CF254u; f_800CBAE0(c); // 800CF250
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF254
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF258
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF25C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF260
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CF264
  c->lr=c->r[0]; // 800CF268
  c->r[1]=c->r[1]+0x00000020u; // 800CF26C
  return; // 800CF270
}

// OSCancelThread
void f_800CF280(Ctx* __restrict c) {
  trace_call(0x800CF280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF280
  c->r[0]=c->lr; // 800CF284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF28C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF290
  c->r[30]=c->r[3]|c->r[3]; // 800CF294
  c->lr=0x800CF29Cu; f_800CBAA0(c); // 800CF298
  c->r[31]=c->r[3]|c->r[3]; // 800CF29C
  c->r[3]=c->r[30]|c->r[30]; // 800CF2A0
  c->lr=0x800CF2A8u; f_800C6E90(c); // 800CF2A4
  c->r[0]=R16(c->r[30]+0x000002C8u); // 800CF2A8
  cmps(c,0,(int32_t)c->r[0],1); // 800CF2AC
  if (crb(c,2)) { goto L_800CF2C8; } // 800CF2B0
  cmps(c,0,(int32_t)c->r[0],2); // 800CF2B4
  if (crb(c,2)) { goto L_800CF2E0; } // 800CF2B8
  cmps(c,0,(int32_t)c->r[0],4); // 800CF2BC
  if (crb(c,2)) { goto L_800CF2EC; } // 800CF2C0
  goto L_800CF3A4; // 800CF2C4
L_800CF2C8:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 800CF2C8
  cmps(c,0,(int32_t)c->r[0],0); // 800CF2CC
  if (crb(c,1)) { goto L_800CF3B0; } // 800CF2D0
  c->r[3]=c->r[30]|c->r[30]; // 800CF2D4
  c->lr=0x800CF2DCu; f_800CEA20(c); // 800CF2D8
  goto L_800CF3B0; // 800CF2DC
L_800CF2E0:;
  c->r[0]=0u+0x00000001u; // 800CF2E0
  W32(c->r[13]+0xFFFFA50Cu,c->r[0]); // 800CF2E4
  goto L_800CF3B0; // 800CF2E8
L_800CF2EC:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 800CF2EC
  c->r[5]=R32(c->r[30]+0x000002E4u); // 800CF2F0
  cmps(c,0,(int32_t)c->r[4],0); // 800CF2F4
  if (!crb(c,2)) { goto L_800CF308; } // 800CF2F8
  c->r[3]=R32(c->r[30]+0x000002DCu); // 800CF2FC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800CF300
  goto L_800CF30C; // 800CF304
L_800CF308:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 800CF308
L_800CF30C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF30C
  if (!crb(c,2)) { goto L_800CF320; } // 800CF310
  c->r[3]=R32(c->r[30]+0x000002DCu); // 800CF314
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CF318
  goto L_800CF324; // 800CF31C
L_800CF320:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 800CF320
L_800CF324:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 800CF324
  c->r[3]=0u+0x00000000u; // 800CF328
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800CF32C
  cmps(c,0,(int32_t)c->r[0],0); // 800CF330
  if (crb(c,1)) { goto L_800CF3B0; } // 800CF334
  c->r[3]=R32(c->r[30]+0x000002F0u); // 800CF338
  cmps(c,0,(int32_t)c->r[3],0); // 800CF33C
  if (crb(c,2)) { goto L_800CF3B0; } // 800CF340
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CF344
L_800CF348:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800CF348
  cmps(c,0,(int32_t)c->r[0],0); // 800CF34C
  if (crb(c,1)) { goto L_800CF3B0; } // 800CF350
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800CF354
  c->r[5]=R32(c->r[3]+0x000002F4u); // 800CF358
  goto L_800CF380; // 800CF35C
L_800CF360:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 800CF360
  cmps(c,0,(int32_t)c->r[6],0); // 800CF364
  if (crb(c,2)) { goto L_800CF37C; } // 800CF368
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800CF36C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF370
  if (!crb(c,0)) { goto L_800CF37C; } // 800CF374
  c->r[4]=c->r[0]|c->r[0]; // 800CF378
L_800CF37C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 800CF37C
L_800CF380:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF380
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF360; } // 800CF384
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CF388
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF38C
  if (crb(c,2)) { goto L_800CF3B0; } // 800CF390
  c->lr=0x800CF398u; f_800CEAD0(c); // 800CF394
  cmps(c,0,(int32_t)c->r[3],0); // 800CF398
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF348; } // 800CF39C
  goto L_800CF3B0; // 800CF3A0
L_800CF3A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF3A4
  c->lr=0x800CF3ACu; f_800CBAE0(c); // 800CF3A8
  goto L_800CF43C; // 800CF3AC
L_800CF3B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF3B0
  c->lr=0x800CF3B8u; f_800C8020(c); // 800CF3B4
  c->r[0]=R16(c->r[30]+0x000002CAu); // 800CF3B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800CF3BC
  if (crb(c,2)) { goto L_800CF408; } // 800CF3C0
  c->r[4]=R32(c->r[30]+0x000002FCu); // 800CF3C4
  c->r[5]=R32(c->r[30]+0x00000300u); // 800CF3C8
  cmps(c,0,(int32_t)c->r[4],0); // 800CF3CC
  if (!crb(c,2)) { goto L_800CF3E0; } // 800CF3D0
  c->r[3]=0u+0x80000000u; // 800CF3D4
  W32(c->r[3]+0x000000E0u,c->r[5]); // 800CF3D8
  goto L_800CF3E4; // 800CF3DC
L_800CF3E0:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 800CF3E0
L_800CF3E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF3E4
  if (!crb(c,2)) { goto L_800CF3F8; } // 800CF3E8
  c->r[3]=0u+0x80000000u; // 800CF3EC
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800CF3F0
  goto L_800CF3FC; // 800CF3F4
L_800CF3F8:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 800CF3F8
L_800CF3FC:;
  c->r[0]=0u+0x00000000u; // 800CF3FC
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800CF400
  goto L_800CF410; // 800CF404
L_800CF408:;
  c->r[0]=0u+0x00000008u; // 800CF408
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800CF40C
L_800CF410:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF410
  c->lr=0x800CF418u; f_800CCF00(c); // 800CF414
  c->r[3]=c->r[30]+0x000002E8u; // 800CF418
  c->lr=0x800CF420u; f_800CFAD0(c); // 800CF41C
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CF420
  cmps(c,0,(int32_t)c->r[0],0); // 800CF424
  if (crb(c,2)) { goto L_800CF434; } // 800CF428
  c->r[3]=0u+0x00000000u; // 800CF42C
  c->lr=0x800CF434u; f_800CECD0(c); // 800CF430
L_800CF434:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF434
  c->lr=0x800CF43Cu; f_800CBAE0(c); // 800CF438
L_800CF43C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF43C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF440
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF444
  c->lr=c->r[0]; // 800CF448
  c->r[1]=c->r[1]+0x00000010u; // 800CF44C
  return; // 800CF450
}

// OSJoinThread
void f_800CF460(Ctx* __restrict c) {
  trace_call(0x800CF460u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF460
  c->r[0]=c->lr; // 800CF464
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF468
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF46C
  c->r[31]=c->r[3]|c->r[3]; // 800CF470
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF474
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF478
  c->r[29]=c->r[4]|c->r[4]; // 800CF47C
  c->lr=0x800CF484u; f_800CBAA0(c); // 800CF480
  c->r[0]=R16(c->r[31]+0x000002CAu); // 800CF484
  c->r[30]=c->r[3]|c->r[3]; // 800CF488
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800CF48C
  if (!crb(c,2)) { goto L_800CF510; } // 800CF490
  c->r[0]=R16(c->r[31]+0x000002C8u); // 800CF494
  cmpu(c,0,c->r[0],0x00000008u); // 800CF498
  if (crb(c,2)) { goto L_800CF510; } // 800CF49C
  c->r[0]=R32(c->r[31]+0x000002E8u); // 800CF4A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CF4A4
  if (!crb(c,2)) { goto L_800CF510; } // 800CF4A8
  c->r[3]=c->r[31]+0x000002E8u; // 800CF4AC
  c->lr=0x800CF4B4u; f_800CF9E0(c); // 800CF4B0
  c->r[0]=R16(c->r[31]+0x000002C8u); // 800CF4B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CF4B8
  if (!crb(c,2)) { goto L_800CF4C8; } // 800CF4BC
  c->r[0]=0u+0x00000000u; // 800CF4C0
  goto L_800CF4F8; // 800CF4C4
L_800CF4C8:;
  c->r[3]=0u+0x80000000u; // 800CF4C8
  c->r[3]=R32(c->r[3]+0x000000DCu); // 800CF4CC
  goto L_800CF4EC; // 800CF4D0
  c->r[0]=c->r[0]|0x00000000u; // 800CF4D4
L_800CF4D8:;
  cmpu(c,0,c->r[31],c->r[3]); // 800CF4D8
  if (!crb(c,2)) { goto L_800CF4E8; } // 800CF4DC
  c->r[0]=0u+0x00000001u; // 800CF4E0
  goto L_800CF4F8; // 800CF4E4
L_800CF4E8:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 800CF4E8
L_800CF4EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CF4EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF4D8; } // 800CF4F0
  c->r[0]=0u+0x00000000u; // 800CF4F4
L_800CF4F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CF4F8
  if (!crb(c,2)) { goto L_800CF510; } // 800CF4FC
  c->r[3]=c->r[30]|c->r[30]; // 800CF500
  c->lr=0x800CF508u; f_800CBAE0(c); // 800CF504
  c->r[3]=0u+0x00000000u; // 800CF508
  goto L_800CF588; // 800CF50C
L_800CF510:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 800CF510
  cmpu(c,0,c->r[0],0x00000008u); // 800CF514
  if (!crb(c,2)) { goto L_800CF57C; } // 800CF518
  cmps(c,0,(int32_t)c->r[29],0); // 800CF51C
  if (crb(c,2)) { goto L_800CF52C; } // 800CF520
  c->r[0]=R32(c->r[31]+0x000002D8u); // 800CF524
  W32(c->r[29]+0x00000000u,c->r[0]); // 800CF528
L_800CF52C:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 800CF52C
  c->r[5]=R32(c->r[31]+0x00000300u); // 800CF530
  cmps(c,0,(int32_t)c->r[4],0); // 800CF534
  if (!crb(c,2)) { goto L_800CF548; } // 800CF538
  c->r[3]=0u+0x80000000u; // 800CF53C
  W32(c->r[3]+0x000000E0u,c->r[5]); // 800CF540
  goto L_800CF54C; // 800CF544
L_800CF548:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 800CF548
L_800CF54C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF54C
  if (!crb(c,2)) { goto L_800CF560; } // 800CF550
  c->r[3]=0u+0x80000000u; // 800CF554
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800CF558
  goto L_800CF564; // 800CF55C
L_800CF560:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 800CF560
L_800CF564:;
  c->r[0]=0u+0x00000000u; // 800CF564
  W16(c->r[31]+0x000002C8u,c->r[0]); // 800CF568
  c->r[3]=c->r[30]|c->r[30]; // 800CF56C
  c->lr=0x800CF574u; f_800CBAE0(c); // 800CF570
  c->r[3]=0u+0x00000001u; // 800CF574
  goto L_800CF588; // 800CF578
L_800CF57C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF57C
  c->lr=0x800CF584u; f_800CBAE0(c); // 800CF580
  c->r[3]=0u+0x00000000u; // 800CF584
L_800CF588:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF588
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF58C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF590
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF594
  c->lr=c->r[0]; // 800CF598
  c->r[1]=c->r[1]+0x00000020u; // 800CF59C
  return; // 800CF5A0
}

// OSResumeThread
void f_800CF5B0(Ctx* __restrict c) {
  trace_call(0x800CF5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF5B0
  c->r[0]=c->lr; // 800CF5B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF5B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF5BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF5C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF5C4
  c->r[29]=c->r[3]|c->r[3]; // 800CF5C8
  c->lr=0x800CF5D0u; f_800CBAA0(c); // 800CF5CC
  c->r[30]=R32(c->r[29]+0x000002CCu); // 800CF5D0
  c->r[31]=c->r[3]|c->r[3]; // 800CF5D4
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800CF5D8
  W32(c->r[29]+0x000002CCu,c->r[0]); // 800CF5DC
  if (!crb(c,0)) { goto L_800CF5F0; } // 800CF5E0
  c->r[0]=0u+0x00000000u; // 800CF5E4
  W32(c->r[29]+0x000002CCu,c->r[0]); // 800CF5E8
  goto L_800CF824; // 800CF5EC
L_800CF5F0:;
  if (!crb(c,2)) { goto L_800CF824; } // 800CF5F0
  c->r[0]=R16(c->r[29]+0x000002C8u); // 800CF5F4
  cmps(c,0,(int32_t)c->r[0],1); // 800CF5F8
  if (crb(c,2)) { goto L_800CF60C; } // 800CF5FC
  cmps(c,0,(int32_t)c->r[0],4); // 800CF600
  if (crb(c,2)) { goto L_800CF6A8; } // 800CF604
  goto L_800CF810; // 800CF608
L_800CF60C:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 800CF60C
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800CF610
  goto L_800CF638; // 800CF614
L_800CF618:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800CF618
  cmps(c,0,(int32_t)c->r[3],0); // 800CF61C
  if (crb(c,2)) { goto L_800CF634; } // 800CF620
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CF624
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800CF628
  if (!crb(c,0)) { goto L_800CF634; } // 800CF62C
  c->r[5]=c->r[0]|c->r[0]; // 800CF630
L_800CF634:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800CF634
L_800CF638:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CF638
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF618; } // 800CF63C
  c->r[3]=0u+0x802F0000u; // 800CF640
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800CF644
  c->r[3]=c->r[3]+0xFFFF9A50u; // 800CF648
  W32(c->r[29]+0x000002D0u,c->r[5]); // 800CF64C
  c->r[3]=c->r[3]+c->r[0]; // 800CF650
  W32(c->r[29]+0x000002DCu,c->r[3]); // 800CF654
  c->r[4]=R32(c->r[3]+0x00000004u); // 800CF658
  cmps(c,0,(int32_t)c->r[4],0); // 800CF65C
  if (!crb(c,2)) { goto L_800CF66C; } // 800CF660
  W32(c->r[3]+0x00000000u,c->r[29]); // 800CF664
  goto L_800CF670; // 800CF668
L_800CF66C:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 800CF66C
L_800CF670:;
  c->r[0]=0u+0x00000000u; // 800CF670
  W32(c->r[29]+0x000002E4u,c->r[4]); // 800CF674
  c->r[4]=R32(c->r[29]+0x000002DCu); // 800CF678
  c->r[3]=0u+0x00000001u; // 800CF67C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 800CF680
  W32(c->r[4]+0x00000004u,c->r[29]); // 800CF684
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800CF688
  c->r[4]=R32(c->r[13]+0xFFFFA510u); // 800CF68C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800CF690
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CF694
  c->r[0]=c->r[4]|c->r[0]; // 800CF698
  W32(c->r[13]+0xFFFFA510u,c->r[0]); // 800CF69C
  W32(c->r[13]+0xFFFFA50Cu,c->r[3]); // 800CF6A0
  goto L_800CF810; // 800CF6A4
L_800CF6A8:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 800CF6A8
  c->r[5]=R32(c->r[29]+0x000002E4u); // 800CF6AC
  cmps(c,0,(int32_t)c->r[4],0); // 800CF6B0
  if (!crb(c,2)) { goto L_800CF6C4; } // 800CF6B4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF6B8
  W32(c->r[3]+0x00000004u,c->r[5]); // 800CF6BC
  goto L_800CF6C8; // 800CF6C0
L_800CF6C4:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 800CF6C4
L_800CF6C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF6C8
  if (!crb(c,2)) { goto L_800CF6DC; } // 800CF6CC
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF6D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CF6D4
  goto L_800CF6E0; // 800CF6D8
L_800CF6DC:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 800CF6DC
L_800CF6E0:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 800CF6E0
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800CF6E4
  goto L_800CF710; // 800CF6E8
  c->r[0]=c->r[0]|0x00000000u; // 800CF6EC
L_800CF6F0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800CF6F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6F4
  if (crb(c,2)) { goto L_800CF70C; } // 800CF6F8
  c->r[3]=R32(c->r[3]+0x000002D0u); // 800CF6FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CF700
  if (!crb(c,0)) { goto L_800CF70C; } // 800CF704
  c->r[0]=c->r[3]|c->r[3]; // 800CF708
L_800CF70C:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800CF70C
L_800CF710:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CF710
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF6F0; } // 800CF714
  W32(c->r[29]+0x000002D0u,c->r[0]); // 800CF718
  c->r[4]=R32(c->r[29]+0x000002DCu); // 800CF71C
  c->r[5]=R32(c->r[4]+0x00000000u); // 800CF720
  goto L_800CF72C; // 800CF724
L_800CF728:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 800CF728
L_800CF72C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF72C
  if (crb(c,2)) { goto L_800CF744; } // 800CF730
  c->r[3]=R32(c->r[5]+0x000002D0u); // 800CF734
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800CF738
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CF73C
  if (!crb(c,1)) { IRQCHK(c); goto L_800CF728; } // 800CF740
L_800CF744:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF744
  if (!crb(c,2)) { goto L_800CF77C; } // 800CF748
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CF74C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF750
  if (!crb(c,2)) { goto L_800CF760; } // 800CF754
  W32(c->r[4]+0x00000000u,c->r[29]); // 800CF758
  goto L_800CF764; // 800CF75C
L_800CF760:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 800CF760
L_800CF764:;
  c->r[0]=0u+0x00000000u; // 800CF764
  W32(c->r[29]+0x000002E4u,c->r[3]); // 800CF768
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF76C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 800CF770
  W32(c->r[3]+0x00000004u,c->r[29]); // 800CF774
  goto L_800CF7A4; // 800CF778
L_800CF77C:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 800CF77C
  c->r[3]=R32(c->r[5]+0x000002E4u); // 800CF780
  W32(c->r[5]+0x000002E4u,c->r[29]); // 800CF784
  cmps(c,0,(int32_t)c->r[3],0); // 800CF788
  W32(c->r[29]+0x000002E4u,c->r[3]); // 800CF78C
  if (!crb(c,2)) { goto L_800CF7A0; } // 800CF790
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF794
  W32(c->r[3]+0x00000000u,c->r[29]); // 800CF798
  goto L_800CF7A4; // 800CF79C
L_800CF7A0:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 800CF7A0
L_800CF7A4:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 800CF7A4
  cmps(c,0,(int32_t)c->r[3],0); // 800CF7A8
  if (crb(c,2)) { goto L_800CF810; } // 800CF7AC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CF7B0
L_800CF7B4:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800CF7B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CF7B8
  if (crb(c,1)) { goto L_800CF810; } // 800CF7BC
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800CF7C0
  c->r[5]=R32(c->r[3]+0x000002F4u); // 800CF7C4
  goto L_800CF7F0; // 800CF7C8
  c->r[0]=c->r[0]|0x00000000u; // 800CF7CC
L_800CF7D0:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 800CF7D0
  cmps(c,0,(int32_t)c->r[6],0); // 800CF7D4
  if (crb(c,2)) { goto L_800CF7EC; } // 800CF7D8
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800CF7DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF7E0
  if (!crb(c,0)) { goto L_800CF7EC; } // 800CF7E4
  c->r[4]=c->r[0]|c->r[0]; // 800CF7E8
L_800CF7EC:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 800CF7EC
L_800CF7F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF7F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF7D0; } // 800CF7F4
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CF7F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF7FC
  if (crb(c,2)) { goto L_800CF810; } // 800CF800
  c->lr=0x800CF808u; f_800CEAD0(c); // 800CF804
  cmps(c,0,(int32_t)c->r[3],0); // 800CF808
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF7B4; } // 800CF80C
L_800CF810:;
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CF810
  cmps(c,0,(int32_t)c->r[0],0); // 800CF814
  if (crb(c,2)) { goto L_800CF824; } // 800CF818
  c->r[3]=0u+0x00000000u; // 800CF81C
  c->lr=0x800CF824u; f_800CECD0(c); // 800CF820
L_800CF824:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF824
  c->lr=0x800CF82Cu; f_800CBAE0(c); // 800CF828
  c->r[3]=c->r[30]|c->r[30]; // 800CF82C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF830
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF834
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF838
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF83C
  c->lr=c->r[0]; // 800CF840
  c->r[1]=c->r[1]+0x00000020u; // 800CF844
  return; // 800CF848
}

// OSSuspendThread
void f_800CF850(Ctx* __restrict c) {
  trace_call(0x800CF850u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF850
  c->r[0]=c->lr; // 800CF854
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF858
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF85C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF860
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF864
  c->r[29]=c->r[3]|c->r[3]; // 800CF868
  c->lr=0x800CF870u; f_800CBAA0(c); // 800CF86C
  c->r[30]=R32(c->r[29]+0x000002CCu); // 800CF870
  c->r[31]=c->r[3]|c->r[3]; // 800CF874
  cmps(c,0,(int32_t)c->r[30],0); // 800CF878
  c->r[0]=c->r[30]+0x00000001u; // 800CF87C
  W32(c->r[29]+0x000002CCu,c->r[0]); // 800CF880
  if (!crb(c,2)) { goto L_800CF9B4; } // 800CF884
  c->r[0]=R16(c->r[29]+0x000002C8u); // 800CF888
  cmps(c,0,(int32_t)c->r[0],2); // 800CF88C
  if (crb(c,2)) { goto L_800CF8A8; } // 800CF890
  cmps(c,0,(int32_t)c->r[0],1); // 800CF894
  if (crb(c,2)) { goto L_800CF8B8; } // 800CF898
  cmps(c,0,(int32_t)c->r[0],4); // 800CF89C
  if (crb(c,2)) { goto L_800CF8C4; } // 800CF8A0
  goto L_800CF9A0; // 800CF8A4
L_800CF8A8:;
  c->r[0]=0u+0x00000001u; // 800CF8A8
  W32(c->r[13]+0xFFFFA50Cu,c->r[0]); // 800CF8AC
  W16(c->r[29]+0x000002C8u,c->r[0]); // 800CF8B0
  goto L_800CF9A0; // 800CF8B4
L_800CF8B8:;
  c->r[3]=c->r[29]|c->r[29]; // 800CF8B8
  c->lr=0x800CF8C0u; f_800CEA20(c); // 800CF8BC
  goto L_800CF9A0; // 800CF8C0
L_800CF8C4:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 800CF8C4
  c->r[5]=R32(c->r[29]+0x000002E4u); // 800CF8C8
  cmps(c,0,(int32_t)c->r[4],0); // 800CF8CC
  if (!crb(c,2)) { goto L_800CF8E0; } // 800CF8D0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF8D4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800CF8D8
  goto L_800CF8E4; // 800CF8DC
L_800CF8E0:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 800CF8E0
L_800CF8E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF8E4
  if (!crb(c,2)) { goto L_800CF8F8; } // 800CF8E8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF8EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CF8F0
  goto L_800CF8FC; // 800CF8F4
L_800CF8F8:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 800CF8F8
L_800CF8FC:;
  c->r[0]=0u+0x00000020u; // 800CF8FC
  W32(c->r[29]+0x000002D0u,c->r[0]); // 800CF900
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF904
  c->r[4]=R32(c->r[3]+0x00000004u); // 800CF908
  cmps(c,0,(int32_t)c->r[4],0); // 800CF90C
  if (!crb(c,2)) { goto L_800CF91C; } // 800CF910
  W32(c->r[3]+0x00000000u,c->r[29]); // 800CF914
  goto L_800CF920; // 800CF918
L_800CF91C:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 800CF91C
L_800CF920:;
  c->r[0]=0u+0x00000000u; // 800CF920
  W32(c->r[29]+0x000002E4u,c->r[4]); // 800CF924
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CF928
  W32(c->r[29]+0x000002E0u,c->r[0]); // 800CF92C
  W32(c->r[3]+0x00000004u,c->r[29]); // 800CF930
  c->r[3]=R32(c->r[29]+0x000002F0u); // 800CF934
  cmps(c,0,(int32_t)c->r[3],0); // 800CF938
  if (crb(c,2)) { goto L_800CF9A0; } // 800CF93C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CF940
L_800CF944:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800CF944
  cmps(c,0,(int32_t)c->r[0],0); // 800CF948
  if (crb(c,1)) { goto L_800CF9A0; } // 800CF94C
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800CF950
  c->r[5]=R32(c->r[3]+0x000002F4u); // 800CF954
  goto L_800CF980; // 800CF958
  c->r[0]=c->r[0]|0x00000000u; // 800CF95C
L_800CF960:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 800CF960
  cmps(c,0,(int32_t)c->r[6],0); // 800CF964
  if (crb(c,2)) { goto L_800CF97C; } // 800CF968
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800CF96C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF970
  if (!crb(c,0)) { goto L_800CF97C; } // 800CF974
  c->r[4]=c->r[0]|c->r[0]; // 800CF978
L_800CF97C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 800CF97C
L_800CF980:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF980
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF960; } // 800CF984
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800CF988
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF98C
  if (crb(c,2)) { goto L_800CF9A0; } // 800CF990
  c->lr=0x800CF998u; f_800CEAD0(c); // 800CF994
  cmps(c,0,(int32_t)c->r[3],0); // 800CF998
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF944; } // 800CF99C
L_800CF9A0:;
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CF9A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CF9A4
  if (crb(c,2)) { goto L_800CF9B4; } // 800CF9A8
  c->r[3]=0u+0x00000000u; // 800CF9AC
  c->lr=0x800CF9B4u; f_800CECD0(c); // 800CF9B0
L_800CF9B4:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF9B4
  c->lr=0x800CF9BCu; f_800CBAE0(c); // 800CF9B8
  c->r[3]=c->r[30]|c->r[30]; // 800CF9BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF9C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF9C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF9C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF9CC
  c->lr=c->r[0]; // 800CF9D0
  c->r[1]=c->r[1]+0x00000020u; // 800CF9D4
  return; // 800CF9D8
}

// OSSleepThread
void f_800CF9E0(Ctx* __restrict c) {
  trace_call(0x800CF9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF9E0
  c->r[0]=c->lr; // 800CF9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF9EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF9F0
  c->r[30]=c->r[3]|c->r[3]; // 800CF9F4
  c->lr=0x800CF9FCu; f_800CBAA0(c); // 800CF9F8
  c->r[4]=0u+0x80000000u; // 800CF9FC
  c->r[0]=0u+0x00000004u; // 800CFA00
  c->r[4]=R32(c->r[4]+0x000000E4u); // 800CFA04
  c->r[31]=c->r[3]|c->r[3]; // 800CFA08
  W16(c->r[4]+0x000002C8u,c->r[0]); // 800CFA0C
  W32(c->r[4]+0x000002DCu,c->r[30]); // 800CFA10
  c->r[5]=R32(c->r[30]+0x00000000u); // 800CFA14
  goto L_800CFA24; // 800CFA18
  c->r[0]=c->r[0]|0x00000000u; // 800CFA1C
L_800CFA20:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 800CFA20
L_800CFA24:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CFA24
  if (crb(c,2)) { goto L_800CFA3C; } // 800CFA28
  c->r[3]=R32(c->r[5]+0x000002D0u); // 800CFA2C
  c->r[0]=R32(c->r[4]+0x000002D0u); // 800CFA30
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CFA34
  if (!crb(c,1)) { IRQCHK(c); goto L_800CFA20; } // 800CFA38
L_800CFA3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CFA3C
  if (!crb(c,2)) { goto L_800CFA70; } // 800CFA40
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CFA44
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA48
  if (!crb(c,2)) { goto L_800CFA58; } // 800CFA4C
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CFA50
  goto L_800CFA5C; // 800CFA54
L_800CFA58:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 800CFA58
L_800CFA5C:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 800CFA5C
  c->r[0]=0u+0x00000000u; // 800CFA60
  W32(c->r[4]+0x000002E0u,c->r[0]); // 800CFA64
  W32(c->r[30]+0x00000004u,c->r[4]); // 800CFA68
  goto L_800CFA94; // 800CFA6C
L_800CFA70:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 800CFA70
  c->r[3]=R32(c->r[5]+0x000002E4u); // 800CFA74
  W32(c->r[5]+0x000002E4u,c->r[4]); // 800CFA78
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA7C
  W32(c->r[4]+0x000002E4u,c->r[3]); // 800CFA80
  if (!crb(c,2)) { goto L_800CFA90; } // 800CFA84
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CFA88
  goto L_800CFA94; // 800CFA8C
L_800CFA90:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 800CFA90
L_800CFA94:;
  c->r[0]=0u+0x00000001u; // 800CFA94
  W32(c->r[13]+0xFFFFA50Cu,c->r[0]); // 800CFA98
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CFA9C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFAA0
  if (crb(c,2)) { goto L_800CFAB0; } // 800CFAA4
  c->r[3]=0u+0x00000000u; // 800CFAA8
  c->lr=0x800CFAB0u; f_800CECD0(c); // 800CFAAC
L_800CFAB0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CFAB0
  c->lr=0x800CFAB8u; f_800CBAE0(c); // 800CFAB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFAB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFABC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFAC0
  c->lr=c->r[0]; // 800CFAC4
  c->r[1]=c->r[1]+0x00000010u; // 800CFAC8
  return; // 800CFACC
}

// OSWakeupThread
void f_800CFAD0(Ctx* __restrict c) {
  trace_call(0x800CFAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFAD0
  c->r[0]=c->lr; // 800CFAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFADC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFAE0
  c->r[30]=c->r[3]|c->r[3]; // 800CFAE4
  c->lr=0x800CFAECu; f_800CBAA0(c); // 800CFAE8
  c->r[5]=0u+0x802F0000u; // 800CFAEC
  c->r[31]=c->r[3]|c->r[3]; // 800CFAF0
  c->r[5]=c->r[5]+0xFFFF9A50u; // 800CFAF4
  c->r[6]=0u+0x00000000u; // 800CFAF8
  c->r[3]=0u+0x00000001u; // 800CFAFC
  goto L_800CFB88; // 800CFB00
  c->r[0]=c->r[0]|0x00000000u; // 800CFB04
L_800CFB08:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 800CFB08
  cmps(c,0,(int32_t)c->r[4],0); // 800CFB0C
  if (!crb(c,2)) { goto L_800CFB1C; } // 800CFB10
  W32(c->r[30]+0x00000004u,c->r[6]); // 800CFB14
  goto L_800CFB20; // 800CFB18
L_800CFB1C:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 800CFB1C
L_800CFB20:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CFB20
  W16(c->r[8]+0x000002C8u,c->r[3]); // 800CFB24
  c->r[0]=R32(c->r[8]+0x000002CCu); // 800CFB28
  cmps(c,0,(int32_t)c->r[0],0); // 800CFB2C
  if (crb(c,1)) { goto L_800CFB88; } // 800CFB30
  c->r[0]=R32(c->r[8]+0x000002D0u); // 800CFB34
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800CFB38
  c->r[4]=c->r[5]+c->r[0]; // 800CFB3C
  W32(c->r[8]+0x000002DCu,c->r[4]); // 800CFB40
  c->r[7]=R32(c->r[4]+0x00000004u); // 800CFB44
  cmps(c,0,(int32_t)c->r[7],0); // 800CFB48
  if (!crb(c,2)) { goto L_800CFB58; } // 800CFB4C
  W32(c->r[4]+0x00000000u,c->r[8]); // 800CFB50
  goto L_800CFB5C; // 800CFB54
L_800CFB58:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 800CFB58
L_800CFB5C:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 800CFB5C
  W32(c->r[8]+0x000002E0u,c->r[6]); // 800CFB60
  c->r[4]=R32(c->r[8]+0x000002DCu); // 800CFB64
  W32(c->r[4]+0x00000004u,c->r[8]); // 800CFB68
  c->r[0]=R32(c->r[8]+0x000002D0u); // 800CFB6C
  c->r[4]=R32(c->r[13]+0xFFFFA510u); // 800CFB70
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800CFB74
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CFB78
  c->r[0]=c->r[4]|c->r[0]; // 800CFB7C
  W32(c->r[13]+0xFFFFA510u,c->r[0]); // 800CFB80
  W32(c->r[13]+0xFFFFA50Cu,c->r[3]); // 800CFB84
L_800CFB88:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 800CFB88
  cmps(c,0,(int32_t)c->r[8],0); // 800CFB8C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CFB08; } // 800CFB90
  c->r[0]=R32(c->r[13]+0xFFFFA50Cu); // 800CFB94
  cmps(c,0,(int32_t)c->r[0],0); // 800CFB98
  if (crb(c,2)) { goto L_800CFBA8; } // 800CFB9C
  c->r[3]=0u+0x00000000u; // 800CFBA0
  c->lr=0x800CFBA8u; f_800CECD0(c); // 800CFBA4
L_800CFBA8:;
  c->r[3]=c->r[31]|c->r[31]; // 800CFBA8
  c->lr=0x800CFBB0u; f_800CBAE0(c); // 800CFBAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFBB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFBB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFBB8
  c->lr=c->r[0]; // 800CFBBC
  c->r[1]=c->r[1]+0x00000010u; // 800CFBC0
  return; // 800CFBC4
}

// fn_800CFBD0
void f_800CFBD0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000002D4u); // 800CFBD0
  return; // 800CFBD4
}

// fn_800CFBE0
void f_800CFBE0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 800CFBE0
  cmps(c,0,(int32_t)c->r[5],0); // 800CFBE4
  if (crb(c,2)) { goto L_800CFC00; } // 800CFBE8
  c->r[0]=R32(c->r[5]+0x000002E4u); // 800CFBEC
  cmps(c,0,(int32_t)c->r[0],0); // 800CFBF0
  if (crb(c,2)) { goto L_800CFC00; } // 800CFBF4
  c->r[3]=0u+0x00000000u; // 800CFBF8
  return; // 800CFBFC
L_800CFC00:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CFC00
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC04
  if (crb(c,2)) { goto L_800CFC6C; } // 800CFC08
  c->r[0]=R32(c->r[3]+0x000002E0u); // 800CFC0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFC10
  if (crb(c,2)) { goto L_800CFC6C; } // 800CFC14
  c->r[3]=0u+0x00000000u; // 800CFC18
  return; // 800CFC1C
  goto L_800CFC6C; // 800CFC20
  c->r[0]=c->r[0]|0x00000000u; // 800CFC24
L_800CFC28:;
  c->r[3]=R32(c->r[5]+0x000002E0u); // 800CFC28
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC2C
  if (crb(c,2)) { goto L_800CFC48; } // 800CFC30
  c->r[0]=R32(c->r[3]+0x000002E4u); // 800CFC34
  cmpu(c,0,c->r[5],c->r[0]); // 800CFC38
  if (crb(c,2)) { goto L_800CFC48; } // 800CFC3C
  c->r[3]=0u+0x00000000u; // 800CFC40
  return; // 800CFC44
L_800CFC48:;
  c->r[4]=R32(c->r[5]+0x000002E4u); // 800CFC48
  cmps(c,0,(int32_t)c->r[4],0); // 800CFC4C
  if (crb(c,2)) { goto L_800CFC68; } // 800CFC50
  c->r[0]=R32(c->r[4]+0x000002E0u); // 800CFC54
  cmpu(c,0,c->r[5],c->r[0]); // 800CFC58
  if (crb(c,2)) { goto L_800CFC68; } // 800CFC5C
  c->r[3]=0u+0x00000000u; // 800CFC60
  return; // 800CFC64
L_800CFC68:;
  c->r[5]=c->r[3]|c->r[3]; // 800CFC68
L_800CFC6C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CFC6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CFC28; } // 800CFC70
  c->r[3]=0u+0x00000001u; // 800CFC74
  return; // 800CFC78
}

// fn_800CFC80
void f_800CFC80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFC80
  c->r[0]=c->lr; // 800CFC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFC88
  c->r[11]=c->r[1]+0x00000020u; // 800CFC8C
  c->lr=0x800CFC94u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CFC90
  c->r[30]=0u+0x802A0000u; // 800CFC94
  c->r[28]=0u+0x00000000u; // 800CFC98
  c->r[30]=c->r[30]+0x000014E0u; // 800CFC9C
  c->lr=0x800CFCA4u; f_800CBAA0(c); // 800CFCA0
  c->r[31]=0u+0x802F0000u; // 800CFCA4
  c->r[27]=c->r[3]|c->r[3]; // 800CFCA8
  c->r[31]=c->r[31]+0xFFFF9A50u; // 800CFCAC
  c->r[26]=0u+0x00000000u; // 800CFCB0
  c->r[29]=0u+0x00000001u; // 800CFCB4
L_800CFCB8:;
  c->r[0]=addc(c,~c->r[26],0x0000001Fu,1); // 800CFCB8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800CFCBC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[29]<<((c->r[0])&31)); // 800CFCC0
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800CFCC4
  if (crb(c,2)) { goto L_800CFD0C; } // 800CFCC8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800CFCCC
  cmps(c,0,(int32_t)c->r[0],0); // 800CFCD0
  if (crb(c,2)) { goto L_800CFCE4; } // 800CFCD4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CFCD8
  cmps(c,0,(int32_t)c->r[0],0); // 800CFCDC
  if (!crb(c,2)) { goto L_800CFD48; } // 800CFCE0
L_800CFCE4:;
  c->r[3]=c->r[30]+0x00000000u; // 800CFCE4
  c->r[4]=0u+0x000005F2u; // 800CFCE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFCEC
  c->lr=0x800CFCF4u; f_800C8450(c); // 800CFCF0
  c->r[3]=c->r[30]+0x00000060u; // 800CFCF4
  c->r[4]=0u+0x000005F2u; // 800CFCF8
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFCFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFD00
  c->lr=0x800CFD08u; f_800C84E0(c); // 800CFD04
  goto L_800CFD48; // 800CFD08
L_800CFD0C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800CFD0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFD10
  if (!crb(c,2)) { goto L_800CFD24; } // 800CFD14
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CFD18
  cmps(c,0,(int32_t)c->r[0],0); // 800CFD1C
  if (crb(c,2)) { goto L_800CFD48; } // 800CFD20
L_800CFD24:;
  c->r[3]=c->r[30]+0x0000006Cu; // 800CFD24
  c->r[4]=0u+0x000005F7u; // 800CFD28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFD2C
  c->lr=0x800CFD34u; f_800C8450(c); // 800CFD30
  c->r[3]=c->r[30]+0x00000060u; // 800CFD34
  c->r[4]=0u+0x000005F7u; // 800CFD38
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFD3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFD40
  c->lr=0x800CFD48u; f_800C84E0(c); // 800CFD44
L_800CFD48:;
  c->r[3]=c->r[31]|c->r[31]; // 800CFD48
  c->lr=0x800CFD50u; f_800CFBE0(c); // 800CFD4C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFD50
  if (!crb(c,2)) { goto L_800CFD7C; } // 800CFD54
  c->r[3]=c->r[30]+0x000000CCu; // 800CFD58
  c->r[4]=0u+0x000005F9u; // 800CFD5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFD60
  c->lr=0x800CFD68u; f_800C8450(c); // 800CFD64
  c->r[3]=c->r[30]+0x00000060u; // 800CFD68
  c->r[4]=0u+0x000005F9u; // 800CFD6C
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFD70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFD74
  c->lr=0x800CFD7Cu; f_800C84E0(c); // 800CFD78
L_800CFD7C:;
  c->r[26]=c->r[26]+0x00000001u; // 800CFD7C
  c->r[31]=c->r[31]+0x00000008u; // 800CFD80
  cmps(c,0,(int32_t)c->r[26],31); // 800CFD84
  if (!crb(c,1)) { IRQCHK(c); goto L_800CFCB8; } // 800CFD88
  c->r[3]=0u+0x80000000u; // 800CFD8C
  c->r[3]=R32(c->r[3]+0x000000DCu); // 800CFD90
  cmps(c,0,(int32_t)c->r[3],0); // 800CFD94
  if (crb(c,2)) { goto L_800CFDCC; } // 800CFD98
  c->r[0]=R32(c->r[3]+0x00000300u); // 800CFD9C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFDA0
  if (crb(c,2)) { goto L_800CFDCC; } // 800CFDA4
  c->r[3]=c->r[30]+0x00000114u; // 800CFDA8
  c->r[4]=0u+0x000005FEu; // 800CFDAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFDB0
  c->lr=0x800CFDB8u; f_800C8450(c); // 800CFDB4
  c->r[3]=c->r[30]+0x00000060u; // 800CFDB8
  c->r[4]=0u+0x000005FEu; // 800CFDBC
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFDC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFDC4
  c->lr=0x800CFDCCu; f_800C84E0(c); // 800CFDC8
L_800CFDCC:;
  c->r[3]=0u+0x80000000u; // 800CFDCC
  c->r[3]=R32(c->r[3]+0x000000E0u); // 800CFDD0
  cmps(c,0,(int32_t)c->r[3],0); // 800CFDD4
  if (crb(c,2)) { goto L_800CFE0C; } // 800CFDD8
  c->r[0]=R32(c->r[3]+0x000002FCu); // 800CFDDC
  cmps(c,0,(int32_t)c->r[0],0); // 800CFDE0
  if (crb(c,2)) { goto L_800CFE0C; } // 800CFDE4
  c->r[3]=c->r[30]+0x00000194u; // 800CFDE8
  c->r[4]=0u+0x00000600u; // 800CFDEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFDF0
  c->lr=0x800CFDF8u; f_800C8450(c); // 800CFDF4
  c->r[3]=c->r[30]+0x00000060u; // 800CFDF8
  c->r[4]=0u+0x00000600u; // 800CFDFC
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFE00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFE04
  c->lr=0x800CFE0Cu; f_800C84E0(c); // 800CFE08
L_800CFE0C:;
  c->r[4]=0u+0x80000000u; // 800CFE0C
  c->r[3]=0u+0x802F0000u; // 800CFE10
  c->r[29]=R32(c->r[4]+0x000000DCu); // 800CFE14
  c->r[31]=c->r[3]+0xFFFF9A50u; // 800CFE18
  goto L_800D03A8; // 800CFE1C
L_800CFE20:;
  c->r[3]=R32(c->r[29]+0x000002FCu); // 800CFE20
  c->r[28]=c->r[28]+0x00000001u; // 800CFE24
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE28
  if (crb(c,2)) { goto L_800CFE60; } // 800CFE2C
  c->r[0]=R32(c->r[3]+0x00000300u); // 800CFE30
  cmpu(c,0,c->r[29],c->r[0]); // 800CFE34
  if (crb(c,2)) { goto L_800CFE60; } // 800CFE38
  c->r[3]=c->r[30]+0x00000214u; // 800CFE3C
  c->r[4]=0u+0x00000608u; // 800CFE40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFE44
  c->lr=0x800CFE4Cu; f_800C8450(c); // 800CFE48
  c->r[3]=c->r[30]+0x00000060u; // 800CFE4C
  c->r[4]=0u+0x00000608u; // 800CFE50
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFE54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFE58
  c->lr=0x800CFE60u; f_800C84E0(c); // 800CFE5C
L_800CFE60:;
  c->r[3]=R32(c->r[29]+0x00000300u); // 800CFE60
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE64
  if (crb(c,2)) { goto L_800CFE9C; } // 800CFE68
  c->r[0]=R32(c->r[3]+0x000002FCu); // 800CFE6C
  cmpu(c,0,c->r[29],c->r[0]); // 800CFE70
  if (crb(c,2)) { goto L_800CFE9C; } // 800CFE74
  c->r[3]=c->r[30]+0x00000290u; // 800CFE78
  c->r[4]=0u+0x0000060Au; // 800CFE7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFE80
  c->lr=0x800CFE88u; f_800C8450(c); // 800CFE84
  c->r[3]=c->r[30]+0x00000060u; // 800CFE88
  c->r[4]=0u+0x0000060Au; // 800CFE8C
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFE90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFE94
  c->lr=0x800CFE9Cu; f_800C84E0(c); // 800CFE98
L_800CFE9C:;
  c->r[3]=R32(c->r[29]+0x00000308u); // 800CFE9C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CFEA0
  c->r[0]=c->r[3]+0x21530000u; // 800CFEA4
  cmpu(c,0,c->r[0],0x0000BABEu); // 800CFEA8
  if (crb(c,2)) { goto L_800CFED4; } // 800CFEAC
  c->r[3]=c->r[30]+0x0000030Cu; // 800CFEB0
  c->r[4]=0u+0x0000060Du; // 800CFEB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFEB8
  c->lr=0x800CFEC0u; f_800C8450(c); // 800CFEBC
  c->r[3]=c->r[30]+0x00000060u; // 800CFEC0
  c->r[4]=0u+0x0000060Du; // 800CFEC4
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFEC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFECC
  c->lr=0x800CFED4u; f_800C84E0(c); // 800CFED0
L_800CFED4:;
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800CFED4
  cmps(c,0,(int32_t)c->r[0],0); // 800CFED8
  if (crb(c,0)) { goto L_800CFEE8; } // 800CFEDC
  cmps(c,0,(int32_t)c->r[0],32); // 800CFEE0
  if (!crb(c,1)) { goto L_800CFF0C; } // 800CFEE4
L_800CFEE8:;
  c->r[3]=c->r[30]+0x00000360u; // 800CFEE8
  c->r[4]=0u+0x00000610u; // 800CFEEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFEF0
  c->lr=0x800CFEF8u; f_800C8450(c); // 800CFEF4
  c->r[3]=c->r[30]+0x00000060u; // 800CFEF8
  c->r[4]=0u+0x00000610u; // 800CFEFC
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFF00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFF04
  c->lr=0x800CFF0Cu; f_800C84E0(c); // 800CFF08
L_800CFF0C:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 800CFF0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFF10
  if (!crb(c,0)) { goto L_800CFF3C; } // 800CFF14
  c->r[3]=c->r[30]+0x000003D4u; // 800CFF18
  c->r[4]=0u+0x00000611u; // 800CFF1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFF20
  c->lr=0x800CFF28u; f_800C8450(c); // 800CFF24
  c->r[3]=c->r[30]+0x00000060u; // 800CFF28
  c->r[4]=0u+0x00000611u; // 800CFF2C
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFF30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFF34
  c->lr=0x800CFF3Cu; f_800C84E0(c); // 800CFF38
L_800CFF3C:;
  c->r[3]=c->r[29]+0x000002E8u; // 800CFF3C
  c->lr=0x800CFF44u; f_800CFBE0(c); // 800CFF40
  cmps(c,0,(int32_t)c->r[3],0); // 800CFF44
  if (!crb(c,2)) { goto L_800CFF70; } // 800CFF48
  c->r[3]=c->r[30]+0x00000410u; // 800CFF4C
  c->r[4]=0u+0x00000612u; // 800CFF50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFF54
  c->lr=0x800CFF5Cu; f_800C8450(c); // 800CFF58
  c->r[3]=c->r[30]+0x00000060u; // 800CFF5C
  c->r[4]=0u+0x00000612u; // 800CFF60
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFF64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFF68
  c->lr=0x800CFF70u; f_800C84E0(c); // 800CFF6C
L_800CFF70:;
  c->r[4]=R16(c->r[29]+0x000002C8u); // 800CFF70
  cmps(c,0,(int32_t)c->r[4],1); // 800CFF74
  if (crb(c,2)) { goto L_800CFF98; } // 800CFF78
  cmps(c,0,(int32_t)c->r[4],2); // 800CFF7C
  if (crb(c,2)) { goto L_800D00A4; } // 800CFF80
  cmps(c,0,(int32_t)c->r[4],4); // 800CFF84
  if (crb(c,2)) { goto L_800D016C; } // 800CFF88
  cmps(c,0,(int32_t)c->r[4],8); // 800CFF8C
  if (crb(c,2)) { goto L_800D030C; } // 800CFF90
  goto L_800D034C; // 800CFF94
L_800CFF98:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 800CFF98
  cmps(c,0,(int32_t)c->r[0],0); // 800CFF9C
  if (crb(c,1)) { goto L_800D0370; } // 800CFFA0
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800CFFA4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800CFFA8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800CFFAC
  c->r[0]=c->r[31]+c->r[0]; // 800CFFB0
  cmpu(c,0,c->r[3],c->r[0]); // 800CFFB4
  if (crb(c,2)) { goto L_800CFFE0; } // 800CFFB8
  c->r[3]=c->r[30]+0x0000045Cu; // 800CFFBC
  c->r[4]=0u+0x00000618u; // 800CFFC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFFC4
  c->lr=0x800CFFCCu; f_800C8450(c); // 800CFFC8
  c->r[3]=c->r[30]+0x00000060u; // 800CFFCC
  c->r[4]=0u+0x00000618u; // 800CFFD0
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800CFFD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFFD8
  c->lr=0x800CFFE0u; f_800C84E0(c); // 800CFFDC
L_800CFFE0:;
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800CFFE0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800CFFE4
  c->r[3]=R32(c->r[31]+c->r[0]); // 800CFFE8
  goto L_800D0004; // 800CFFEC
L_800CFFF0:;
  cmpu(c,0,c->r[29],c->r[3]); // 800CFFF0
  if (!crb(c,2)) { goto L_800D0000; } // 800CFFF4
  c->r[0]=0u+0x00000001u; // 800CFFF8
  goto L_800D0010; // 800CFFFC
L_800D0000:;
  c->r[3]=R32(c->r[3]+0x000002E0u); // 800D0000
L_800D0004:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0004
  if (!crb(c,2)) { IRQCHK(c); goto L_800CFFF0; } // 800D0008
  c->r[0]=0u+0x00000000u; // 800D000C
L_800D0010:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0010
  if (!crb(c,2)) { goto L_800D003C; } // 800D0014
  c->r[3]=c->r[30]+0x000004B0u; // 800D0018
  c->r[4]=0u+0x00000619u; // 800D001C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0020
  c->lr=0x800D0028u; f_800C8450(c); // 800D0024
  c->r[3]=c->r[30]+0x00000060u; // 800D0028
  c->r[4]=0u+0x00000619u; // 800D002C
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0030
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0034
  c->lr=0x800D003Cu; f_800C84E0(c); // 800D0038
L_800D003C:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 800D003C
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800D0040
  goto L_800D0068; // 800D0044
L_800D0048:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0048
  cmps(c,0,(int32_t)c->r[3],0); // 800D004C
  if (crb(c,2)) { goto L_800D0064; } // 800D0050
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800D0054
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D0058
  if (!crb(c,0)) { goto L_800D0064; } // 800D005C
  c->r[5]=c->r[0]|c->r[0]; // 800D0060
L_800D0064:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D0064
L_800D0068:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0068
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0048; } // 800D006C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800D0070
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D0074
  if (crb(c,2)) { goto L_800D0370; } // 800D0078
  c->r[3]=c->r[30]+0x00000504u; // 800D007C
  c->r[4]=0u+0x0000061Au; // 800D0080
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0084
  c->lr=0x800D008Cu; f_800C8450(c); // 800D0088
  c->r[3]=c->r[30]+0x00000060u; // 800D008C
  c->r[4]=0u+0x0000061Au; // 800D0090
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0094
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0098
  c->lr=0x800D00A0u; f_800C84E0(c); // 800D009C
  goto L_800D0370; // 800D00A0
L_800D00A4:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 800D00A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D00A8
  if (!crb(c,1)) { goto L_800D00D4; } // 800D00AC
  c->r[3]=c->r[30]+0x00000560u; // 800D00B0
  c->r[4]=0u+0x0000061Eu; // 800D00B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D00B8
  c->lr=0x800D00C0u; f_800C8450(c); // 800D00BC
  c->r[3]=c->r[30]+0x00000060u; // 800D00C0
  c->r[4]=0u+0x0000061Eu; // 800D00C4
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D00C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D00CC
  c->lr=0x800D00D4u; f_800C84E0(c); // 800D00D0
L_800D00D4:;
  c->r[0]=R32(c->r[29]+0x000002DCu); // 800D00D4
  cmps(c,0,(int32_t)c->r[0],0); // 800D00D8
  if (crb(c,2)) { goto L_800D0104; } // 800D00DC
  c->r[3]=c->r[30]+0x000005A4u; // 800D00E0
  c->r[4]=0u+0x0000061Fu; // 800D00E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D00E8
  c->lr=0x800D00F0u; f_800C8450(c); // 800D00EC
  c->r[3]=c->r[30]+0x00000060u; // 800D00F0
  c->r[4]=0u+0x0000061Fu; // 800D00F4
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D00F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D00FC
  c->lr=0x800D0104u; f_800C84E0(c); // 800D0100
L_800D0104:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 800D0104
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800D0108
  goto L_800D0130; // 800D010C
L_800D0110:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0110
  cmps(c,0,(int32_t)c->r[3],0); // 800D0114
  if (crb(c,2)) { goto L_800D012C; } // 800D0118
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800D011C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D0120
  if (!crb(c,0)) { goto L_800D012C; } // 800D0124
  c->r[5]=c->r[0]|c->r[0]; // 800D0128
L_800D012C:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D012C
L_800D0130:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0130
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0110; } // 800D0134
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800D0138
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D013C
  if (crb(c,2)) { goto L_800D0370; } // 800D0140
  c->r[3]=c->r[30]+0x00000504u; // 800D0144
  c->r[4]=0u+0x00000620u; // 800D0148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D014C
  c->lr=0x800D0154u; f_800C8450(c); // 800D0150
  c->r[3]=c->r[30]+0x00000060u; // 800D0154
  c->r[4]=0u+0x00000620u; // 800D0158
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D015C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0160
  c->lr=0x800D0168u; f_800C84E0(c); // 800D0164
  goto L_800D0370; // 800D0168
L_800D016C:;
  c->r[0]=R32(c->r[29]+0x000002DCu); // 800D016C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0170
  if (!crb(c,2)) { goto L_800D019C; } // 800D0174
  c->r[3]=c->r[30]+0x000005E0u; // 800D0178
  c->r[4]=0u+0x00000623u; // 800D017C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0180
  c->lr=0x800D0188u; f_800C8450(c); // 800D0184
  c->r[3]=c->r[30]+0x00000060u; // 800D0188
  c->r[4]=0u+0x00000623u; // 800D018C
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0194
  c->lr=0x800D019Cu; f_800C84E0(c); // 800D0198
L_800D019C:;
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800D019C
  c->lr=0x800D01A4u; f_800CFBE0(c); // 800D01A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D01A4
  if (!crb(c,2)) { goto L_800D01D0; } // 800D01A8
  c->r[3]=c->r[30]+0x0000061Cu; // 800D01AC
  c->r[4]=0u+0x00000624u; // 800D01B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D01B4
  c->lr=0x800D01BCu; f_800C8450(c); // 800D01B8
  c->r[3]=c->r[30]+0x00000060u; // 800D01BC
  c->r[4]=0u+0x00000624u; // 800D01C0
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D01C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D01C8
  c->lr=0x800D01D0u; f_800C84E0(c); // 800D01CC
L_800D01D0:;
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800D01D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D01D4
  goto L_800D01F4; // 800D01D8
  c->r[0]=c->r[0]|0x00000000u; // 800D01DC
L_800D01E0:;
  cmpu(c,0,c->r[29],c->r[3]); // 800D01E0
  if (!crb(c,2)) { goto L_800D01F0; } // 800D01E4
  c->r[0]=0u+0x00000001u; // 800D01E8
  goto L_800D0200; // 800D01EC
L_800D01F0:;
  c->r[3]=R32(c->r[3]+0x000002E0u); // 800D01F0
L_800D01F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D01F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D01E0; } // 800D01F8
  c->r[0]=0u+0x00000000u; // 800D01FC
L_800D0200:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0200
  if (!crb(c,2)) { goto L_800D022C; } // 800D0204
  c->r[3]=c->r[30]+0x00000660u; // 800D0208
  c->r[4]=0u+0x00000625u; // 800D020C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0210
  c->lr=0x800D0218u; f_800C8450(c); // 800D0214
  c->r[3]=c->r[30]+0x00000060u; // 800D0218
  c->r[4]=0u+0x00000625u; // 800D021C
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0224
  c->lr=0x800D022Cu; f_800C84E0(c); // 800D0228
L_800D022C:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 800D022C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0230
  if (crb(c,1)) { goto L_800D02A4; } // 800D0234
  c->r[5]=R32(c->r[29]+0x000002D4u); // 800D0238
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800D023C
  goto L_800D0268; // 800D0240
  c->r[0]=c->r[0]|0x00000000u; // 800D0244
L_800D0248:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0248
  cmps(c,0,(int32_t)c->r[3],0); // 800D024C
  if (crb(c,2)) { goto L_800D0264; } // 800D0250
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800D0254
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D0258
  if (!crb(c,0)) { goto L_800D0264; } // 800D025C
  c->r[5]=c->r[0]|c->r[0]; // 800D0260
L_800D0264:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D0264
L_800D0268:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0268
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0248; } // 800D026C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800D0270
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D0274
  if (crb(c,2)) { goto L_800D02D4; } // 800D0278
  c->r[3]=c->r[30]+0x00000504u; // 800D027C
  c->r[4]=0u+0x00000628u; // 800D0280
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0284
  c->lr=0x800D028Cu; f_800C8450(c); // 800D0288
  c->r[3]=c->r[30]+0x00000060u; // 800D028C
  c->r[4]=0u+0x00000628u; // 800D0290
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0298
  c->lr=0x800D02A0u; f_800C84E0(c); // 800D029C
  goto L_800D02D4; // 800D02A0
L_800D02A4:;
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800D02A4
  cmps(c,0,(int32_t)c->r[0],32); // 800D02A8
  if (crb(c,2)) { goto L_800D02D4; } // 800D02AC
  c->r[3]=c->r[30]+0x000006A4u; // 800D02B0
  c->r[4]=0u+0x0000062Cu; // 800D02B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D02B8
  c->lr=0x800D02C0u; f_800C8450(c); // 800D02BC
  c->r[3]=c->r[30]+0x00000060u; // 800D02C0
  c->r[4]=0u+0x0000062Cu; // 800D02C4
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D02C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D02CC
  c->lr=0x800D02D4u; f_800C84E0(c); // 800D02D0
L_800D02D4:;
  c->r[3]=c->r[29]|c->r[29]; // 800D02D4
  c->lr=0x800D02DCu; f_800CD090(c); // 800D02D8
  cmps(c,0,(int32_t)c->r[3],0); // 800D02DC
  if (crb(c,2)) { goto L_800D0370; } // 800D02E0
  c->r[3]=c->r[30]+0x000006E0u; // 800D02E4
  c->r[4]=0u+0x0000062Eu; // 800D02E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D02EC
  c->lr=0x800D02F4u; f_800C8450(c); // 800D02F0
  c->r[3]=c->r[30]+0x00000060u; // 800D02F4
  c->r[4]=0u+0x0000062Eu; // 800D02F8
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D02FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0300
  c->lr=0x800D0308u; f_800C84E0(c); // 800D0304
  goto L_800D0370; // 800D0308
L_800D030C:;
  c->r[0]=R32(c->r[29]+0x000002F4u); // 800D030C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0310
  if (!crb(c,2)) { goto L_800D0324; } // 800D0314
  c->r[0]=R32(c->r[29]+0x000002F8u); // 800D0318
  cmps(c,0,(int32_t)c->r[0],0); // 800D031C
  if (crb(c,2)) { goto L_800D0370; } // 800D0320
L_800D0324:;
  c->r[3]=c->r[30]+0x00000720u; // 800D0324
  c->r[4]=0u+0x00000632u; // 800D0328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D032C
  c->lr=0x800D0334u; f_800C8450(c); // 800D0330
  c->r[3]=c->r[30]+0x00000060u; // 800D0334
  c->r[4]=0u+0x00000632u; // 800D0338
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D033C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0340
  c->lr=0x800D0348u; f_800C84E0(c); // 800D0344
  goto L_800D0370; // 800D0348
L_800D034C:;
  c->r[5]=c->r[29]|c->r[29]; // 800D034C
  c->r[3]=c->r[30]+0x00000788u; // 800D0350
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0354
  c->lr=0x800D035Cu; f_800C8450(c); // 800D0358
  c->r[3]=c->r[30]+0x00000060u; // 800D035C
  c->r[4]=0u+0x00000638u; // 800D0360
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0368
  c->lr=0x800D0370u; f_800C84E0(c); // 800D036C
L_800D0370:;
  c->r[3]=c->r[29]|c->r[29]; // 800D0370
  c->lr=0x800D0378u; f_800CD0D0(c); // 800D0374
  cmps(c,0,(int32_t)c->r[3],0); // 800D0378
  if (!crb(c,2)) { goto L_800D03A4; } // 800D037C
  c->r[3]=c->r[30]+0x000007D0u; // 800D0380
  c->r[4]=0u+0x0000063Du; // 800D0384
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0388
  c->lr=0x800D0390u; f_800C8450(c); // 800D038C
  c->r[3]=c->r[30]+0x00000060u; // 800D0390
  c->r[4]=0u+0x0000063Du; // 800D0394
  c->r[5]=c->r[13]+0xFFFF8F4Cu; // 800D0398
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D039C
  c->lr=0x800D03A4u; f_800C84E0(c); // 800D03A0
L_800D03A4:;
  c->r[29]=R32(c->r[29]+0x000002FCu); // 800D03A4
L_800D03A8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D03A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CFE20; } // 800D03AC
  c->r[3]=c->r[27]|c->r[27]; // 800D03B0
  c->lr=0x800D03B8u; f_800CBAE0(c); // 800D03B4
  c->r[11]=c->r[1]+0x00000020u; // 800D03B8
  c->r[3]=c->r[28]|c->r[28]; // 800D03BC
  c->lr=0x800D03C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D03C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D03C4
  c->lr=c->r[0]; // 800D03C8
  c->r[1]=c->r[1]+0x00000020u; // 800D03CC
  return; // 800D03D0
}

// fn_800D03E0
void f_800D03E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D03E0
  c->r[0]=c->lr; // 800D03E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D03E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D03EC
  c->r[31]=c->r[3]|c->r[3]; // 800D03F0
  c->lr=0x800D03F8u; f_800C6E70(c); // 800D03F4
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800D03F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D03FC
  if (!crb(c,2)) { goto L_800D040C; } // 800D0400
  c->r[0]=0u+0x00000000u; // 800D0404
  goto L_800D0438; // 800D0408
L_800D040C:;
  c->r[4]=0u+0x80000000u; // 800D040C
  c->r[4]=R32(c->r[4]+0x000000DCu); // 800D0410
  goto L_800D042C; // 800D0414
L_800D0418:;
  cmpu(c,0,c->r[3],c->r[4]); // 800D0418
  if (!crb(c,2)) { goto L_800D0428; } // 800D041C
  c->r[0]=0u+0x00000001u; // 800D0420
  goto L_800D0438; // 800D0424
L_800D0428:;
  c->r[4]=R32(c->r[4]+0x000002FCu); // 800D0428
L_800D042C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D042C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0418; } // 800D0430
  c->r[0]=0u+0x00000000u; // 800D0434
L_800D0438:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0438
  if (crb(c,2)) { goto L_800D044C; } // 800D043C
  c->r[3]=c->r[31]|c->r[31]; // 800D0440
  c->lr=0x800D0448u; f_800C6E70(c); // 800D0444
  c->lr=0x800D044Cu; f_800CF5B0(c); // 800D0448
L_800D044C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D044C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0450
  c->lr=c->r[0]; // 800D0454
  c->r[1]=c->r[1]+0x00000010u; // 800D0458
  return; // 800D045C
}

// fn_800D0460
void f_800D0460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0460
  c->r[0]=c->lr; // 800D0464
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D0468
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D046C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D0470
  W32(c->r[1]+0x00000044u,c->r[29]); // 800D0474
  c->r[29]=c->r[3]|c->r[3]; // 800D0478
  W32(c->r[1]+0x00000040u,c->r[28]); // 800D047C
  c->r[28]=c->r[4]|c->r[4]; // 800D0480
  c->lr=0x800D0488u; f_800CBAA0(c); // 800D0484
  c->r[4]=0u+0x80000000u; // 800D0488
  c->r[30]=c->r[3]|c->r[3]; // 800D048C
  c->r[31]=R32(c->r[4]+0x000000E4u); // 800D0490
  cmps(c,0,(int32_t)c->r[31],0); // 800D0494
  if (!crb(c,2)) { goto L_800D04A4; } // 800D0498
  c->lr=0x800D04A0u; f_800CBAE0(c); // 800D049C
  goto L_800D04E8; // 800D04A0
L_800D04A4:;
  c->r[3]=c->r[1]+0x00000008u; // 800D04A4
  c->lr=0x800D04ACu; f_800C66D0(c); // 800D04A8
  c->r[4]=c->r[31]|c->r[31]; // 800D04AC
  c->r[3]=c->r[1]+0x00000008u; // 800D04B0
  c->lr=0x800D04B8u; f_800C6E80(c); // 800D04B4
  c->r[7]=0u+0x800D0000u; // 800D04B8
  c->r[6]=c->r[28]|c->r[28]; // 800D04BC
  c->r[5]=c->r[29]|c->r[29]; // 800D04C0
  c->r[3]=c->r[1]+0x00000008u; // 800D04C4
  c->r[7]=c->r[7]+0x000003E0u; // 800D04C8
  c->lr=0x800D04D0u; f_800C6930(c); // 800D04CC
  c->r[3]=c->r[31]|c->r[31]; // 800D04D0
  c->lr=0x800D04D8u; f_800CF850(c); // 800D04D4
  c->r[3]=c->r[1]+0x00000008u; // 800D04D8
  c->lr=0x800D04E0u; f_800C6A30(c); // 800D04DC
  c->r[3]=c->r[30]|c->r[30]; // 800D04E0
  c->lr=0x800D04E8u; f_800CBAE0(c); // 800D04E4
L_800D04E8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D04E8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D04EC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D04F0
  c->r[29]=R32(c->r[1]+0x00000044u); // 800D04F4
  c->r[28]=R32(c->r[1]+0x00000040u); // 800D04F8
  c->lr=c->r[0]; // 800D04FC
  c->r[1]=c->r[1]+0x00000050u; // 800D0500
  return; // 800D0504
}

// OSGetTime
void f_800D0510(Ctx* __restrict c) {
  trace_call(0x800D0510u);
L_800D0510:;
  c->r[3]=mftb(c,269); // 800D0510
  c->r[4]=mftb(c,268); // 800D0514
  c->r[5]=mftb(c,269); // 800D0518
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800D051C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0510; } // 800D0520
  return; // 800D0524
}

// OSGetTick
void f_800D0530(Ctx* __restrict c) {
  trace_call(0x800D0530u);
  c->r[3]=mftb(c,268); // 800D0530
  return; // 800D0534
}

// __OSGetSystemTime
void f_800D0540(Ctx* __restrict c) {
  trace_call(0x800D0540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0540
  c->r[0]=c->lr; // 800D0544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D054C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0550
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D0554
  c->lr=0x800D055Cu; f_800CBAA0(c); // 800D0558
  c->r[31]=c->r[3]|c->r[3]; // 800D055C
  c->lr=0x800D0564u; f_800D0510(c); // 800D0560
  c->r[6]=0u+0x80000000u; // 800D0564
  c->r[5]=R32(c->r[6]+0x000030DCu); // 800D0568
  c->r[0]=R32(c->r[6]+0x000030D8u); // 800D056C
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 800D0570
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 800D0574
  c->r[3]=c->r[31]|c->r[31]; // 800D0578
  c->lr=0x800D0580u; f_800CBAE0(c); // 800D057C
  c->r[4]=c->r[29]|c->r[29]; // 800D0580
  c->r[3]=c->r[30]|c->r[30]; // 800D0584
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D0588
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D058C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D0590
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0594
  c->lr=c->r[0]; // 800D0598
  c->r[1]=c->r[1]+0x00000020u; // 800D059C
  return; // 800D05A0
}

// __OSTimeToSystemTime
void f_800D05B0(Ctx* __restrict c) {
  trace_call(0x800D05B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D05B0
  c->r[0]=c->lr; // 800D05B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D05B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D05BC
  c->r[31]=c->r[3]|c->r[3]; // 800D05C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D05C4
  c->r[30]=c->r[4]|c->r[4]; // 800D05C8
  c->lr=0x800D05D0u; f_800CBAA0(c); // 800D05CC
  c->r[5]=0u+0x80000000u; // 800D05D0
  c->r[4]=R32(c->r[5]+0x000030DCu); // 800D05D4
  c->r[0]=R32(c->r[5]+0x000030D8u); // 800D05D8
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 800D05DC
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 800D05E0
  c->lr=0x800D05E8u; f_800CBAE0(c); // 800D05E4
  c->r[3]=c->r[31]|c->r[31]; // 800D05E8
  c->r[4]=c->r[30]|c->r[30]; // 800D05EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D05F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D05F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D05F8
  c->lr=c->r[0]; // 800D05FC
  c->r[1]=c->r[1]+0x00000010u; // 800D0600
  return; // 800D0604
}

// OSTicksToCalendarTime
void f_800D0610(Ctx* __restrict c) {
  trace_call(0x800D0610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0610
  c->r[0]=c->lr; // 800D0614
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0618
  c->r[11]=c->r[1]+0x00000020u; // 800D061C
  c->lr=0x800D0624u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0620
  c->r[6]=0u+0x80000000u; // 800D0624
  c->r[29]=c->r[5]|c->r[5]; // 800D0628
  c->r[0]=R32(c->r[6]+0x000000F8u); // 800D062C
  c->r[28]=c->r[3]|c->r[3]; // 800D0630
  c->r[27]=c->r[4]|c->r[4]; // 800D0634
  c->r[5]=0u+0x00000000u; // 800D0638
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D063C
  c->r[6]=c->r[26]|c->r[26]; // 800D0640
  c->lr=0x800D0648u; f_80217C18(c); // 800D0644
  c->r[7]=0u+0x00000000u; // 800D0648
  c->r[0]=c->r[3]^0x80000000u; // 800D064C
  c->r[6]=c->r[7]^0x80000000u; // 800D0650
  c->r[30]=c->r[4]|c->r[4]; // 800D0654
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 800D0658
  c->r[31]=c->r[3]|c->r[3]; // 800D065C
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 800D0660
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D0664
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800D0668
  if (crb(c,2)) { goto L_800D0678; } // 800D066C
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 800D0670
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 800D0674
L_800D0678:;
  c->r[4]=0u+0x431C0000u; // 800D0678
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800D067C
  c->r[0]=c->r[4]+0xFFFFDE83u; // 800D0680
  c->r[5]=0u+0x00000000u; // 800D0684
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 800D0688
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800D068C
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D0690
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 800D0694
  c->lr=0x800D069Cu; f_802179FC(c); // 800D0698
  c->r[6]=0u+0x000003E8u; // 800D069C
  c->r[5]=0u+0x00000000u; // 800D06A0
  c->lr=0x800D06A8u; f_80217C18(c); // 800D06A4
  W32(c->r[29]+0x00000024u,c->r[4]); // 800D06A8
  c->r[26]=0u+0x80000000u; // 800D06AC
  c->r[4]=0u+0x10620000u; // 800D06B0
  c->r[3]=c->r[31]|c->r[31]; // 800D06B4
  c->r[0]=R32(c->r[26]+0x000000F8u); // 800D06B8
  c->r[6]=c->r[4]+0x00004DD3u; // 800D06BC
  c->r[4]=c->r[30]|c->r[30]; // 800D06C0
  c->r[5]=0u+0x00000000u; // 800D06C4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D06C8
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 800D06CC
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 800D06D0
  c->lr=0x800D06D8u; f_802179FC(c); // 800D06D4
  c->r[6]=0u+0x000003E8u; // 800D06D8
  c->r[5]=0u+0x00000000u; // 800D06DC
  c->lr=0x800D06E4u; f_80217C18(c); // 800D06E0
  W32(c->r[29]+0x00000020u,c->r[4]); // 800D06E4
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 800D06E8
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 800D06EC
  c->r[5]=0u+0x00000000u; // 800D06F0
  c->r[0]=R32(c->r[26]+0x000000F8u); // 800D06F4
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D06F8
  c->lr=0x800D0700u; f_802179FC(c); // 800D06FC
  c->r[27]=0u+0x00010000u; // 800D0700
  c->r[28]=c->r[4]|c->r[4]; // 800D0704
  c->r[26]=c->r[3]|c->r[3]; // 800D0708
  c->r[5]=0u+0x00000000u; // 800D070C
  c->r[6]=c->r[27]+0x00005180u; // 800D0710
  c->lr=0x800D0718u; f_802179FC(c); // 800D0714
  c->r[3]=0u+0x000B0000u; // 800D0718
  c->r[6]=c->r[27]+0x00005180u; // 800D071C
  c->r[0]=c->r[3]+0x00002575u; // 800D0720
  c->r[5]=0u+0x00000000u; // 800D0724
  c->r[31]=addc(c,c->r[4],c->r[0],0); // 800D0728
  c->r[3]=c->r[26]|c->r[26]; // 800D072C
  c->r[4]=c->r[28]|c->r[28]; // 800D0730
  c->lr=0x800D0738u; f_80217C18(c); // 800D0734
  cmps(c,0,(int32_t)c->r[4],0); // 800D0738
  if (!crb(c,0)) { goto L_800D074C; } // 800D073C
  c->r[4]=c->r[4]+0x00010000u; // 800D0740
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800D0744
  c->r[4]=c->r[4]+0x00005180u; // 800D0748
L_800D074C:;
  c->r[6]=0u+0x92490000u; // 800D074C
  c->r[5]=0u+0xB38D0000u; // 800D0750
  c->r[7]=c->r[31]+0x00000006u; // 800D0754
  c->r[3]=0u+0x51EC0000u; // 800D0758
  c->r[0]=c->r[5]+0xFFFFF9B1u; // 800D075C
  c->r[6]=c->r[6]+0x00002493u; // 800D0760
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[7])>>32); // 800D0764
  c->r[9]=c->r[3]+0xFFFF851Fu; // 800D0768
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 800D076C
  c->r[3]=c->r[5]+c->r[7]; // 800D0770
  c->r[3]=sraw(c,c->r[3],2); // 800D0774
  c->r[5]=rotl(c->r[3],1)&0x00000001u; // 800D0778
  c->r[0]=c->r[0]+c->r[31]; // 800D077C
  c->r[3]=c->r[3]+c->r[5]; // 800D0780
  c->r[0]=sraw(c,c->r[0],8); // 800D0784
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)7); // 800D0788
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D078C
  c->r[3]=c->r[0]+c->r[3]; // 800D0790
  c->r[0]=c->r[7]-c->r[5]; // 800D0794
  W32(c->r[29]+0x00000018u,c->r[0]); // 800D0798
  c->r[10]=(uint32_t)((int32_t)c->r[3]*(int32_t)365); // 800D079C
  goto L_800D07B0; // 800D07A0
  c->r[0]=c->r[0]|0x00000000u; // 800D07A4
L_800D07A8:;
  c->r[10]=c->r[10]+0xFFFFFE93u; // 800D07A8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D07AC
L_800D07B0:;
  cmps(c,0,(int32_t)c->r[3],1); // 800D07B0
  if (crb(c,0)) { goto L_800D07F0; } // 800D07B4
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800D07B8
  c->r[0]=c->r[3]+0x00000003u; // 800D07BC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[5])>>32); // 800D07C0
  c->r[7]=sraw(c,c->r[5],7); // 800D07C4
  c->r[5]=sraw(c,c->r[5],5); // 800D07C8
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800D07CC
  c->r[0]=sraw(c,c->r[0],2); // 800D07D0
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 800D07D4
  c->r[5]=c->r[5]+c->r[6]; // 800D07D8
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800D07DC
  c->r[6]=c->r[7]+c->r[8]; // 800D07E0
  c->r[0]=c->r[0]-c->r[5]; // 800D07E4
  c->r[0]=c->r[6]+c->r[0]; // 800D07E8
  goto L_800D07F4; // 800D07EC
L_800D07F0:;
  c->r[0]=0u+0x00000000u; // 800D07F0
L_800D07F4:;
  c->r[7]=c->r[10]+c->r[0]; // 800D07F4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 800D07F8
  if (crb(c,0)) { IRQCHK(c); goto L_800D07A8; } // 800D07FC
  c->r[0]=rotl(c->r[3],30)&0xC0000000u; // 800D0800
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 800D0804
  c->r[5]=c->r[0]-c->r[6]; // 800D0808
  W32(c->r[29]+0x00000014u,c->r[3]); // 800D080C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFFu; // 800D0810
  c->r[0]=c->r[31]-c->r[7]; // 800D0814
  c->r[5]=c->r[5]+c->r[6]; cr0(c,c->r[5]); // 800D0818
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800D081C
  c->r[7]=0u+0x00000000u; // 800D0820
  if (!crb(c,2)) { goto L_800D084C; } // 800D0824
  c->r[5]=0u+0x51EC0000u; // 800D0828
  c->r[5]=c->r[5]+0xFFFF851Fu; // 800D082C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 800D0830
  c->r[5]=sraw(c,c->r[5],5); // 800D0834
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800D0838
  c->r[5]=c->r[5]+c->r[6]; // 800D083C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 800D0840
  c->r[5]=c->r[3]-c->r[5]; cr0(c,c->r[5]); // 800D0844
  if (!crb(c,2)) { goto L_800D0870; } // 800D0848
L_800D084C:;
  c->r[5]=0u+0x51EC0000u; // 800D084C
  c->r[5]=c->r[5]+0xFFFF851Fu; // 800D0850
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 800D0854
  c->r[5]=sraw(c,c->r[5],7); // 800D0858
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800D085C
  c->r[5]=c->r[5]+c->r[6]; // 800D0860
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)400); // 800D0864
  c->r[3]=c->r[3]-c->r[5]; cr0(c,c->r[3]); // 800D0868
  if (!crb(c,2)) { goto L_800D0874; } // 800D086C
L_800D0870:;
  c->r[7]=0u+0x00000001u; // 800D0870
L_800D0874:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D0874
  c->r[7]=0u+0x802A0000u; // 800D0878
  c->r[7]=c->r[7]+0x00001CF0u; // 800D087C
  if (crb(c,2)) { goto L_800D088C; } // 800D0880
  c->r[7]=0u+0x802A0000u; // 800D0884
  c->r[7]=c->r[7]+0x00001D20u; // 800D0888
L_800D088C:;
  c->r[6]=0u+0x0000000Cu; // 800D088C
  c->r[3]=0u+0x00000030u; // 800D0890
  c->r[0]=c->r[0]|0x00000000u; // 800D0894
L_800D0898:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800D0898
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800D089C
  c->r[5]=R32(c->r[7]+c->r[3]); // 800D08A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800D08A4
  if (crb(c,0)) { IRQCHK(c); goto L_800D0898; } // 800D08A8
  c->r[5]=0u+0x88890000u; // 800D08AC
  W32(c->r[29]+0x00000010u,c->r[6]); // 800D08B0
  c->r[6]=c->r[5]+0xFFFF8889u; // 800D08B4
  c->r[11]=c->r[1]+0x00000020u; // 800D08B8
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[4])>>32); // 800D08BC
  c->r[3]=R32(c->r[7]+c->r[3]); // 800D08C0
  c->r[3]=c->r[0]-c->r[3]; // 800D08C4
  c->r[0]=c->r[3]+0x00000001u; // 800D08C8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D08CC
  c->r[3]=c->r[5]+c->r[4]; // 800D08D0
  c->r[0]=sraw(c,c->r[3],5); // 800D08D4
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D08D8
  c->r[9]=c->r[0]+c->r[5]; // 800D08DC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[9])>>32); // 800D08E0
  c->r[0]=c->r[0]+c->r[9]; // 800D08E4
  c->r[7]=sraw(c,c->r[0],5); // 800D08E8
  c->r[5]=sraw(c,c->r[0],5); // 800D08EC
  c->r[0]=sraw(c,c->r[3],5); // 800D08F0
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 800D08F4
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800D08F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D08FC
  c->r[7]=c->r[7]+c->r[8]; // 800D0900
  c->r[0]=c->r[0]+c->r[3]; // 800D0904
  c->r[5]=c->r[5]+c->r[6]; // 800D0908
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 800D090C
  W32(c->r[29]+0x00000008u,c->r[7]); // 800D0910
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800D0914
  c->r[3]=c->r[9]-c->r[3]; // 800D0918
  W32(c->r[29]+0x00000004u,c->r[3]); // 800D091C
  c->r[0]=c->r[4]-c->r[0]; // 800D0920
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D0924
  c->lr=0x800D092Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0928
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D092C
  c->lr=c->r[0]; // 800D0930
  c->r[1]=c->r[1]+0x00000020u; // 800D0934
  return; // 800D0938
}

// OSCalendarTimeToTicks
void f_800D0940(Ctx* __restrict c) {
  trace_call(0x800D0940u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0940
  c->r[0]=c->lr; // 800D0944
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0948
  c->r[11]=c->r[1]+0x00000040u; // 800D094C
  c->lr=0x800D0954u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0950
  c->r[4]=0u+0x2AAB0000u; // 800D0954
  c->r[5]=R32(c->r[3]+0x00000010u); // 800D0958
  c->r[0]=c->r[4]+0xFFFFAAABu; // 800D095C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 800D0960
  c->r[0]=sraw(c,c->r[0],1); // 800D0964
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800D0968
  c->r[6]=c->r[0]+c->r[4]; // 800D096C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 800D0970
  c->r[4]=c->r[5]-c->r[0]; cr0(c,c->r[4]); // 800D0974
  if (!crb(c,0)) { goto L_800D0984; } // 800D0978
  c->r[4]=c->r[4]+0x0000000Cu; // 800D097C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800D0980
L_800D0984:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D0984
  c->r[9]=c->r[0]+c->r[6]; // 800D0988
  cmps(c,0,(int32_t)c->r[9],1); // 800D098C
  if (!crb(c,0)) { goto L_800D099C; } // 800D0990
  c->r[7]=0u+0x00000000u; // 800D0994
  goto L_800D09D8; // 800D0998
L_800D099C:;
  c->r[5]=0u+0x51EC0000u; // 800D099C
  c->r[6]=c->r[9]+0xFFFFFFFFu; // 800D09A0
  c->r[5]=c->r[5]+0xFFFF851Fu; // 800D09A4
  c->r[0]=c->r[9]+0x00000003u; // 800D09A8
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 800D09AC
  c->r[7]=sraw(c,c->r[5],7); // 800D09B0
  c->r[5]=sraw(c,c->r[5],5); // 800D09B4
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800D09B8
  c->r[0]=sraw(c,c->r[0],2); // 800D09BC
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 800D09C0
  c->r[5]=c->r[5]+c->r[6]; // 800D09C4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800D09C8
  c->r[6]=c->r[7]+c->r[8]; // 800D09CC
  c->r[0]=c->r[0]-c->r[5]; // 800D09D0
  c->r[7]=c->r[6]+c->r[0]; // 800D09D4
L_800D09D8:;
  c->r[0]=rotl(c->r[9],30)&0xC0000000u; // 800D09D8
  c->r[5]=rotl(c->r[9],1)&0x00000001u; // 800D09DC
  c->r[0]=c->r[0]-c->r[5]; // 800D09E0
  c->r[6]=0u+0x00000000u; // 800D09E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 800D09E8
  c->r[0]=c->r[0]+c->r[5]; cr0(c,c->r[0]); // 800D09EC
  if (!crb(c,2)) { goto L_800D0A18; } // 800D09F0
  c->r[5]=0u+0x51EC0000u; // 800D09F4
  c->r[0]=c->r[5]+0xFFFF851Fu; // 800D09F8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 800D09FC
  c->r[0]=sraw(c,c->r[0],5); // 800D0A00
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D0A04
  c->r[0]=c->r[0]+c->r[5]; // 800D0A08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800D0A0C
  c->r[0]=c->r[9]-c->r[0]; cr0(c,c->r[0]); // 800D0A10
  if (!crb(c,2)) { goto L_800D0A3C; } // 800D0A14
L_800D0A18:;
  c->r[5]=0u+0x51EC0000u; // 800D0A18
  c->r[0]=c->r[5]+0xFFFF851Fu; // 800D0A1C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 800D0A20
  c->r[0]=sraw(c,c->r[0],7); // 800D0A24
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D0A28
  c->r[0]=c->r[0]+c->r[5]; // 800D0A2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)400); // 800D0A30
  c->r[0]=c->r[9]-c->r[0]; cr0(c,c->r[0]); // 800D0A34
  if (!crb(c,2)) { goto L_800D0A40; } // 800D0A38
L_800D0A3C:;
  c->r[6]=0u+0x00000001u; // 800D0A3C
L_800D0A40:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D0A40
  c->r[22]=0u+0x802A0000u; // 800D0A44
  c->r[22]=c->r[22]+0x00001CF0u; // 800D0A48
  if (crb(c,2)) { goto L_800D0A58; } // 800D0A4C
  c->r[22]=0u+0x802A0000u; // 800D0A50
  c->r[22]=c->r[22]+0x00001D20u; // 800D0A54
L_800D0A58:;
  c->r[5]=0u+0x80000000u; // 800D0A58
  c->r[6]=R32(c->r[3]+0x00000024u); // 800D0A5C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800D0A60
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D0A64
  c->r[10]=0u+0x431C0000u; // 800D0A68
  c->r[5]=0u+0x00000000u; // 800D0A6C
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D0A70
  c->r[20]=sraw(c,c->r[6],31); // 800D0A74
  c->r[0]=c->r[10]+0xFFFFDE83u; // 800D0A78
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 800D0A7C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[8])>>32); // 800D0A80
  c->r[22]=R32(c->r[22]+c->r[12]); // 800D0A84
  c->r[12]=c->r[23]+c->r[7]; // 800D0A88
  c->r[27]=R32(c->r[3]+0x00000004u); // 800D0A8C
  c->r[10]=0u+0x00010000u; // 800D0A90
  c->r[29]=R32(c->r[3]+0x00000008u); // 800D0A94
  c->r[4]=rotl(c->r[0],17)&0x0001FFFFu; // 800D0A98
  c->r[7]=0u+0x10620000u; // 800D0A9C
  c->r[21]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 800D0AA0
  c->r[11]=0u+0x01E10000u; // 800D0AA4
  c->r[7]=c->r[7]+0x00004DD3u; // 800D0AA8
  c->r[26]=R32(c->r[3]+0x00000000u); // 800D0AAC
  c->r[0]=c->r[11]+0x00003380u; // 800D0AB0
  c->r[11]=R32(c->r[3]+0x00000020u); // 800D0AB4
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D0AB8
  c->r[23]=c->r[10]+0x00005180u; // 800D0ABC
  c->r[3]=c->r[22]+c->r[12]; // 800D0AC0
  c->r[28]=0u+0x0000003Cu; // 800D0AC4
  c->r[22]=c->r[3]+0xFFFFFFFFu; // 800D0AC8
  c->r[3]=0u+0x4E1E0000u; // 800D0ACC
  c->r[25]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800D0AD0
  c->r[10]=c->r[21]+c->r[24]; // 800D0AD4
  c->r[31]=c->r[3]+0x00004080u; // 800D0AD8
  c->r[30]=0u+0x00000E10u; // 800D0ADC
  c->r[12]=0u+0xFFFFFFF1u; // 800D0AE0
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[20]); // 800D0AE4
  c->r[4]=rotl(c->r[25],29)&0xFFFFFFFFu; // 800D0AE8
  c->r[10]=c->r[10]+c->r[6]; // 800D0AEC
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[8])>>32); // 800D0AF0
  c->r[3]=c->r[10]|c->r[10]; // 800D0AF4
  c->r[4]=(rotl(c->r[10],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 800D0AF8
  c->r[3]=(rotl(c->r[25],0)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D0AFC
  c->r[3]=sraw(c,c->r[3],3); // 800D0B00
  c->r[10]=rotl(c->r[6],26)&0x03FFFFFFu; // 800D0B04
  c->r[4]=addc(c,c->r[4],0,c->xer_ca); // 800D0B08
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 800D0B0C
  c->r[24]=sraw(c,c->r[9],31); // 800D0B10
  c->r[7]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800D0B14
  c->r[25]=sraw(c,c->r[22],31); // 800D0B18
  c->r[21]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 800D0B1C
  c->r[20]=c->r[7]+c->r[21]; // 800D0B20
  c->r[21]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[24]); // 800D0B24
  c->r[6]=(uint32_t)(((uint64_t)c->r[23]*(uint64_t)c->r[22])>>32); // 800D0B28
  c->r[20]=c->r[20]+c->r[21]; // 800D0B2C
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 800D0B30
  c->r[24]=c->r[6]+c->r[7]; // 800D0B34
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[9]); // 800D0B38
  c->r[6]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[25]); // 800D0B3C
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[22]); // 800D0B40
  c->r[24]=c->r[24]+c->r[6]; // 800D0B44
  c->r[25]=addc(c,c->r[7],c->r[0],0); // 800D0B48
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[27]*(int64_t)(int32_t)c->r[28])>>32); // 800D0B4C
  c->r[28]=addc(c,c->r[20],c->r[24],c->xer_ca); // 800D0B50
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[29]*(int64_t)(int32_t)c->r[30])>>32); // 800D0B54
  c->r[9]=(uint32_t)((int32_t)c->r[27]*(int32_t)60); // 800D0B58
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)3600); // 800D0B5C
  c->r[6]=addc(c,c->r[9],c->r[6],0); // 800D0B60
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 800D0B64
  c->r[0]=sraw(c,c->r[26],31); // 800D0B68
  c->r[6]=addc(c,c->r[6],c->r[26],0); // 800D0B6C
  c->r[0]=addc(c,c->r[7],c->r[0],c->xer_ca); // 800D0B70
  c->r[6]=addc(c,c->r[6],c->r[31],0); // 800D0B74
  c->r[0]=addc(c,c->r[0],c->r[12],c->xer_ca); // 800D0B78
  c->r[12]=addc(c,c->r[25],c->r[6],0); // 800D0B7C
  c->r[6]=addc(c,c->r[28],c->r[0],c->xer_ca); // 800D0B80
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[8]); // 800D0B84
  c->r[0]=sraw(c,c->r[11],31); // 800D0B88
  c->r[7]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[8])>>32); // 800D0B8C
  c->r[6]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[11])>>32); // 800D0B90
  c->r[9]=c->r[7]+c->r[9]; // 800D0B94
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 800D0B98
  c->r[5]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 800D0B9C
  c->r[6]=c->r[6]+c->r[7]; // 800D0BA0
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 800D0BA4
  c->r[7]=c->r[9]+c->r[5]; // 800D0BA8
  c->r[6]=c->r[6]+c->r[0]; // 800D0BAC
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[11]); // 800D0BB0
  c->r[11]=c->r[1]+0x00000040u; // 800D0BB4
  c->r[5]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 800D0BB8
  c->r[5]=addc(c,c->r[5],c->r[0],0); // 800D0BBC
  c->r[0]=addc(c,c->r[7],c->r[6],c->xer_ca); // 800D0BC0
  c->r[4]=addc(c,c->r[4],c->r[5],0); // 800D0BC4
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 800D0BC8
  c->lr=0x800D0BD0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0BCC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0BD0
  c->lr=c->r[0]; // 800D0BD4
  c->r[1]=c->r[1]+0x00000040u; // 800D0BD8
  return; // 800D0BDC
}

// OSUTF8to32
void f_800D0BE0(Ctx* __restrict c) {
  trace_call(0x800D0BE0u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 800D0BE0
  cmps(c,0,(int32_t)c->r[6],0); // 800D0BE4
  if (crb(c,2)) { goto L_800D0BF0; } // 800D0BE8
  c->r[3]=c->r[3]+0x00000001u; // 800D0BEC
L_800D0BF0:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 800D0BF0
  if (!crb(c,2)) { goto L_800D0C00; } // 800D0BF4
  c->r[7]=0u+0x00000000u; // 800D0BF8
  goto L_800D0C50; // 800D0BFC
L_800D0C00:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 800D0C00
  cmpu(c,0,c->r[0],0x000000C0u); // 800D0C04
  if (!crb(c,2)) { goto L_800D0C18; } // 800D0C08
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 800D0C0C
  c->r[7]=0u+0x00000001u; // 800D0C10
  goto L_800D0C50; // 800D0C14
L_800D0C18:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 800D0C18
  cmpu(c,0,c->r[0],0x000000E0u); // 800D0C1C
  if (!crb(c,2)) { goto L_800D0C30; } // 800D0C20
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 800D0C24
  c->r[7]=0u+0x00000002u; // 800D0C28
  goto L_800D0C50; // 800D0C2C
L_800D0C30:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 800D0C30
  cmpu(c,0,c->r[0],0x000000F0u); // 800D0C34
  if (!crb(c,2)) { goto L_800D0C48; } // 800D0C38
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 800D0C3C
  c->r[7]=0u+0x00000003u; // 800D0C40
  goto L_800D0C50; // 800D0C44
L_800D0C48:;
  c->r[3]=0u+0x00000000u; // 800D0C48
  return; // 800D0C4C
L_800D0C50:;
  c->ctr=c->r[7]; // 800D0C50
  cmpu(c,0,c->r[7],0x00000000u); // 800D0C54
  if (!crb(c,1)) { goto L_800D0C8C; } // 800D0C58
  c->r[0]=c->r[0]|0x00000000u; // 800D0C5C
L_800D0C60:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800D0C60
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 800D0C64
  c->r[3]=c->r[3]+0x00000001u; // 800D0C68
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 800D0C6C
  cmpu(c,0,c->r[0],0x00000080u); // 800D0C70
  if (crb(c,2)) { goto L_800D0C80; } // 800D0C74
  c->r[3]=0u+0x00000000u; // 800D0C78
  return; // 800D0C7C
L_800D0C80:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 800D0C80
  c->r[6]=c->r[6]|c->r[0]; // 800D0C84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0C60; } // 800D0C88
L_800D0C8C:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 800D0C8C
  if (crb(c,1)) { goto L_800D0CA4; } // 800D0C90
  cmps(c,0,(int32_t)c->r[7],0); // 800D0C94
  if (crb(c,2)) { goto L_800D0CD4; } // 800D0C98
  c->r[3]=0u+0x00000000u; // 800D0C9C
  return; // 800D0CA0
L_800D0CA4:;
  cmpu(c,0,c->r[6],0x000007FFu); // 800D0CA4
  if (crb(c,1)) { goto L_800D0CBC; } // 800D0CA8
  cmpu(c,0,c->r[7],0x00000001u); // 800D0CAC
  if (crb(c,2)) { goto L_800D0CD4; } // 800D0CB0
  c->r[3]=0u+0x00000000u; // 800D0CB4
  return; // 800D0CB8
L_800D0CBC:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 800D0CBC
  if (crb(c,1)) { goto L_800D0CD4; } // 800D0CC0
  cmpu(c,0,c->r[7],0x00000002u); // 800D0CC4
  if (crb(c,2)) { goto L_800D0CD4; } // 800D0CC8
  c->r[3]=0u+0x00000000u; // 800D0CCC
  return; // 800D0CD0
L_800D0CD4:;
  cmpu(c,0,c->r[6],0x0000D800u); // 800D0CD4
  if (crb(c,0)) { goto L_800D0CEC; } // 800D0CD8
  cmpu(c,0,c->r[6],0x0000DFFFu); // 800D0CDC
  if (crb(c,1)) { goto L_800D0CEC; } // 800D0CE0
  c->r[3]=0u+0x00000000u; // 800D0CE4
  return; // 800D0CE8
L_800D0CEC:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D0CEC
  return; // 800D0CF0
}

// OSUTF16to32
void f_800D0D00(Ctx* __restrict c) {
  trace_call(0x800D0D00u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 800D0D00
  cmps(c,0,(int32_t)c->r[5],0); // 800D0D04
  if (crb(c,2)) { goto L_800D0D10; } // 800D0D08
  c->r[3]=c->r[3]+0x00000002u; // 800D0D0C
L_800D0D10:;
  cmpu(c,0,c->r[5],0x0000D800u); // 800D0D10
  if (crb(c,0)) { goto L_800D0D20; } // 800D0D14
  cmpu(c,0,c->r[5],0x0000DFFFu); // 800D0D18
  if (!crb(c,1)) { goto L_800D0D28; } // 800D0D1C
L_800D0D20:;
  c->r[6]=c->r[5]|c->r[5]; // 800D0D20
  goto L_800D0D68; // 800D0D24
L_800D0D28:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 800D0D28
  if (crb(c,1)) { goto L_800D0D60; } // 800D0D2C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800D0D30
  c->r[3]=c->r[3]+0x00000002u; // 800D0D34
  cmpu(c,0,c->r[0],0x0000DC00u); // 800D0D38
  if (crb(c,0)) { goto L_800D0D58; } // 800D0D3C
  cmpu(c,0,c->r[0],0x0000DFFFu); // 800D0D40
  if (crb(c,1)) { goto L_800D0D58; } // 800D0D44
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 800D0D48
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 800D0D4C
  c->r[6]=c->r[6]+0x00010000u; // 800D0D50
  goto L_800D0D68; // 800D0D54
L_800D0D58:;
  c->r[3]=0u+0x00000000u; // 800D0D58
  return; // 800D0D5C
L_800D0D60:;
  c->r[3]=0u+0x00000000u; // 800D0D60
  return; // 800D0D64
L_800D0D68:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D0D68
  return; // 800D0D6C
}

// OSUTF32toANSI
void f_800D0D70(Ctx* __restrict c) {
  trace_call(0x800D0D70u);
  cmpu(c,0,c->r[3],0x000000FFu); // 800D0D70
  if (!crb(c,1)) { goto L_800D0D80; } // 800D0D74
  c->r[3]=0u+0x00000000u; // 800D0D78
  return; // 800D0D7C
L_800D0D80:;
  cmpu(c,0,c->r[3],0x00000080u); // 800D0D80
  if (crb(c,0)) { goto L_800D0D90; } // 800D0D84
  cmpu(c,0,c->r[3],0x0000009Fu); // 800D0D88
  if (!crb(c,1)) { goto L_800D0D98; } // 800D0D8C
L_800D0D90:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800D0D90
  return; // 800D0D94
L_800D0D98:;
  cmpu(c,0,c->r[3],0x00000152u); // 800D0D98
  if (crb(c,0)) { goto L_800D0DE4; } // 800D0D9C
  cmpu(c,0,c->r[3],0x00002122u); // 800D0DA0
  if (crb(c,1)) { goto L_800D0DE4; } // 800D0DA4
  c->r[4]=0u+0x802A0000u; // 800D0DA8
  c->r[0]=0u+0x00000020u; // 800D0DAC
  c->r[4]=c->r[4]+0x00001D50u; // 800D0DB0
  c->r[5]=0u+0x00000000u; // 800D0DB4
  c->ctr=c->r[0]; // 800D0DB8
  c->r[0]=c->r[0]|0x00000000u; // 800D0DBC
L_800D0DC0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 800D0DC0
  cmpu(c,0,c->r[3],c->r[0]); // 800D0DC4
  if (!crb(c,2)) { goto L_800D0DD8; } // 800D0DC8
  c->r[0]=c->r[5]+0x00000080u; // 800D0DCC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800D0DD0
  return; // 800D0DD4
L_800D0DD8:;
  c->r[4]=c->r[4]+0x00000002u; // 800D0DD8
  c->r[5]=c->r[5]+0x00000001u; // 800D0DDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0DC0; } // 800D0DE0
L_800D0DE4:;
  c->r[3]=0u+0x00000000u; // 800D0DE4
  return; // 800D0DE8
}

// OSUTF32toSJIS
void f_800D0DF0(Ctx* __restrict c) {
  trace_call(0x800D0DF0u);
  c->r[0]=0u+0x00010000u; // 800D0DF0
  cmpu(c,0,c->r[3],c->r[0]); // 800D0DF4
  if (crb(c,0)) { goto L_800D0E04; } // 800D0DF8
  c->r[3]=0u+0x00000000u; // 800D0DFC
  return; // 800D0E00
L_800D0E04:;
  c->r[4]=0u+0x802B0000u; // 800D0E04
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 800D0E08
  c->r[4]=c->r[4]+0xFFFFD790u; // 800D0E0C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D0E10
  cmps(c,0,(int32_t)c->r[4],0); // 800D0E14
  if (crb(c,2)) { goto L_800D0E28; } // 800D0E18
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 800D0E1C
  c->r[3]=R16(c->r[4]+c->r[0]); // 800D0E20
  return; // 800D0E24
L_800D0E28:;
  c->r[3]=0u+0x00000000u; // 800D0E28
  return; // 800D0E2C
}

// __OSGetIPCBufferHi
void f_800D0E30(Ctx* __restrict c) {
  trace_call(0x800D0E30u);
  c->r[3]=R32(c->r[13]+0xFFFFA518u); // 800D0E30
  return; // 800D0E34
}

// __OSGetIPCBufferLo
void f_800D0E40(Ctx* __restrict c) {
  trace_call(0x800D0E40u);
  c->r[3]=R32(c->r[13]+0xFFFF8F50u); // 800D0E40
  return; // 800D0E44
}

// __OSInitIPCBuffer
void f_800D0E50(Ctx* __restrict c) {
  trace_call(0x800D0E50u);
  c->r[3]=0u+0x80000000u; // 800D0E50
  c->r[0]=R32(c->r[3]+0x00003130u); // 800D0E54
  W32(c->r[13]+0xFFFF8F50u,c->r[0]); // 800D0E58
  c->r[0]=R32(c->r[3]+0x00003134u); // 800D0E5C
  W32(c->r[13]+0xFFFFA518u,c->r[0]); // 800D0E60
  return; // 800D0E64
}

// OSSetResetCallback
void f_800D0E70(Ctx* __restrict c) {
  trace_call(0x800D0E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0E70
  c->r[0]=c->lr; // 800D0E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0E7C
  c->r[31]=c->r[3]|c->r[3]; // 800D0E80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0E84
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D0E88
  c->lr=0x800D0E90u; f_800CBAA0(c); // 800D0E8C
  cmps(c,0,(int32_t)c->r[31],0); // 800D0E90
  c->r[29]=R32(c->r[13]+0xFFFFA53Cu); // 800D0E94
  c->r[30]=c->r[3]|c->r[3]; // 800D0E98
  if (crb(c,2)) { goto L_800D0EA8; } // 800D0E9C
  W32(c->r[13]+0xFFFFA53Cu,c->r[31]); // 800D0EA0
  goto L_800D0EB4; // 800D0EA4
L_800D0EA8:;
  c->r[3]=0u+0x800D0000u; // 800D0EA8
  c->r[3]=c->r[3]+0x00001440u; // 800D0EAC
  W32(c->r[13]+0xFFFFA53Cu,c->r[3]); // 800D0EB0
L_800D0EB4:;
  c->r[0]=R32(c->r[13]+0xFFFFA530u); // 800D0EB4
  cmps(c,0,(int32_t)c->r[0],0); // 800D0EB8
  if (!crb(c,2)) { goto L_800D0F1C; } // 800D0EBC
  c->lr=0x800D0EC4u; f_800CBAA0(c); // 800D0EC0
  c->r[31]=c->r[3]|c->r[3]; // 800D0EC4
  c->r[5]=0u+0x802F0000u; // 800D0EC8
  c->r[7]=0u+0x802F0000u; // 800D0ECC
  c->r[9]=0u+0x800D0000u; // 800D0ED0
  c->r[3]=R32(c->r[13]+0xFFFFA52Cu); // 800D0ED4
  c->r[5]=c->r[5]+0xFFFFA140u; // 800D0ED8
  c->r[7]=c->r[7]+0xFFFFA160u; // 800D0EDC
  c->r[9]=c->r[9]+0x00001460u; // 800D0EE0
  c->r[4]=0u+0x00001000u; // 800D0EE4
  c->r[6]=0u+0x00000020u; // 800D0EE8
  c->r[8]=0u+0x00000020u; // 800D0EEC
  c->r[10]=0u+0x00000000u; // 800D0EF0
  c->lr=0x800D0EF8u; f_800FB1C0(c); // 800D0EF4
  cmps(c,0,(int32_t)c->r[3],0); // 800D0EF8
  if (!crb(c,2)) { goto L_800D0F0C; } // 800D0EFC
  c->r[0]=0u+0x00000001u; // 800D0F00
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D0F04
  goto L_800D0F14; // 800D0F08
L_800D0F0C:;
  c->r[0]=0u+0x00000000u; // 800D0F0C
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D0F10
L_800D0F14:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0F14
  c->lr=0x800D0F1Cu; f_800CBAE0(c); // 800D0F18
L_800D0F1C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0F1C
  c->lr=0x800D0F24u; f_800CBAE0(c); // 800D0F20
  c->r[3]=0u+0x800D0000u; // 800D0F24
  c->r[3]=c->r[3]+0x00001440u; // 800D0F28
  cmpu(c,0,c->r[29],c->r[3]); // 800D0F2C
  if (!crb(c,2)) { goto L_800D0F3C; } // 800D0F30
  c->r[3]=0u+0x00000000u; // 800D0F34
  goto L_800D0F40; // 800D0F38
L_800D0F3C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D0F3C
L_800D0F40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0F40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D0F44
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D0F48
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D0F4C
  c->lr=c->r[0]; // 800D0F50
  c->r[1]=c->r[1]+0x00000020u; // 800D0F54
  return; // 800D0F58
}

// OSSetPowerCallback
void f_800D0F60(Ctx* __restrict c) {
  trace_call(0x800D0F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0F60
  c->r[0]=c->lr; // 800D0F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0F68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0F6C
  c->r[31]=c->r[3]|c->r[3]; // 800D0F70
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0F74
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D0F78
  c->lr=0x800D0F80u; f_800CBAA0(c); // 800D0F7C
  cmps(c,0,(int32_t)c->r[31],0); // 800D0F80
  c->r[29]=R32(c->r[13]+0xFFFFA538u); // 800D0F84
  c->r[30]=c->r[3]|c->r[3]; // 800D0F88
  if (crb(c,2)) { goto L_800D0F98; } // 800D0F8C
  W32(c->r[13]+0xFFFFA538u,c->r[31]); // 800D0F90
  goto L_800D0FA4; // 800D0F94
L_800D0F98:;
  c->r[3]=0u+0x800D0000u; // 800D0F98
  c->r[3]=c->r[3]+0x00001450u; // 800D0F9C
  W32(c->r[13]+0xFFFFA538u,c->r[3]); // 800D0FA0
L_800D0FA4:;
  c->r[0]=R32(c->r[13]+0xFFFFA530u); // 800D0FA4
  cmps(c,0,(int32_t)c->r[0],0); // 800D0FA8
  if (!crb(c,2)) { goto L_800D100C; } // 800D0FAC
  c->lr=0x800D0FB4u; f_800CBAA0(c); // 800D0FB0
  c->r[31]=c->r[3]|c->r[3]; // 800D0FB4
  c->r[5]=0u+0x802F0000u; // 800D0FB8
  c->r[7]=0u+0x802F0000u; // 800D0FBC
  c->r[9]=0u+0x800D0000u; // 800D0FC0
  c->r[3]=R32(c->r[13]+0xFFFFA52Cu); // 800D0FC4
  c->r[5]=c->r[5]+0xFFFFA140u; // 800D0FC8
  c->r[7]=c->r[7]+0xFFFFA160u; // 800D0FCC
  c->r[9]=c->r[9]+0x00001460u; // 800D0FD0
  c->r[4]=0u+0x00001000u; // 800D0FD4
  c->r[6]=0u+0x00000020u; // 800D0FD8
  c->r[8]=0u+0x00000020u; // 800D0FDC
  c->r[10]=0u+0x00000000u; // 800D0FE0
  c->lr=0x800D0FE8u; f_800FB1C0(c); // 800D0FE4
  cmps(c,0,(int32_t)c->r[3],0); // 800D0FE8
  if (!crb(c,2)) { goto L_800D0FFC; } // 800D0FEC
  c->r[0]=0u+0x00000001u; // 800D0FF0
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D0FF4
  goto L_800D1004; // 800D0FF8
L_800D0FFC:;
  c->r[0]=0u+0x00000000u; // 800D0FFC
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D1000
L_800D1004:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1004
  c->lr=0x800D100Cu; f_800CBAE0(c); // 800D1008
L_800D100C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D100C
  c->lr=0x800D1014u; f_800CBAE0(c); // 800D1010
  c->r[3]=0u+0x800D0000u; // 800D1014
  c->r[3]=c->r[3]+0x00001450u; // 800D1018
  cmpu(c,0,c->r[29],c->r[3]); // 800D101C
  if (!crb(c,2)) { goto L_800D102C; } // 800D1020
  c->r[3]=0u+0x00000000u; // 800D1024
  goto L_800D1030; // 800D1028
L_800D102C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D102C
L_800D1030:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1030
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1034
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1038
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D103C
  c->lr=c->r[0]; // 800D1040
  c->r[1]=c->r[1]+0x00000020u; // 800D1044
  return; // 800D1048
}

// __OSInitSTM
void f_800D1050(Ctx* __restrict c) {
  trace_call(0x800D1050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1050
  c->r[0]=c->lr; // 800D1054
  c->r[4]=0u+0x800D0000u; // 800D1058
  c->r[3]=0u+0x800D0000u; // 800D105C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1060
  c->r[4]=c->r[4]+0x00001450u; // 800D1064
  c->r[3]=c->r[3]+0x00001440u; // 800D1068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D106C
  c->r[31]=0u+0x00000000u; // 800D1070
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1074
  c->r[0]=R32(c->r[13]+0xFFFFA524u); // 800D1078
  W32(c->r[13]+0xFFFFA538u,c->r[4]); // 800D107C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1080
  W32(c->r[13]+0xFFFFA53Cu,c->r[3]); // 800D1084
  W32(c->r[13]+0xFFFFA520u,c->r[31]); // 800D1088
  if (crb(c,2)) { goto L_800D1098; } // 800D108C
  c->r[3]=0u+0x00000001u; // 800D1090
  goto L_800D1150; // 800D1094
L_800D1098:;
  c->r[3]=0u+0x802B0000u; // 800D1098
  W32(c->r[13]+0xFFFFA534u,c->r[31]); // 800D109C
  c->r[4]=0u+0x00000000u; // 800D10A0
  c->r[3]=c->r[3]+0xFFFFDB90u; // 800D10A4
  c->lr=0x800D10ACu; f_800FA930(c); // 800D10A8
  cmps(c,0,(int32_t)c->r[3],0); // 800D10AC
  W32(c->r[13]+0xFFFFA528u,c->r[3]); // 800D10B0
  if (!crb(c,0)) { goto L_800D10C4; } // 800D10B4
  W32(c->r[13]+0xFFFFA524u,c->r[31]); // 800D10B8
  c->r[3]=0u+0x00000000u; // 800D10BC
  goto L_800D1150; // 800D10C0
L_800D10C4:;
  c->r[3]=0u+0x802B0000u; // 800D10C4
  c->r[4]=0u+0x00000000u; // 800D10C8
  c->r[3]=c->r[3]+0xFFFFDBA4u; // 800D10CC
  c->lr=0x800D10D4u; f_800FA930(c); // 800D10D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D10D4
  W32(c->r[13]+0xFFFFA52Cu,c->r[3]); // 800D10D8
  if (!crb(c,0)) { goto L_800D10EC; } // 800D10DC
  W32(c->r[13]+0xFFFFA524u,c->r[31]); // 800D10E0
  c->r[3]=0u+0x00000000u; // 800D10E4
  goto L_800D1150; // 800D10E8
L_800D10EC:;
  c->lr=0x800D10F0u; f_800CBAA0(c); // 800D10EC
  c->r[30]=c->r[3]|c->r[3]; // 800D10F0
  c->r[5]=0u+0x802F0000u; // 800D10F4
  c->r[7]=0u+0x802F0000u; // 800D10F8
  c->r[9]=0u+0x800D0000u; // 800D10FC
  c->r[3]=R32(c->r[13]+0xFFFFA52Cu); // 800D1100
  c->r[5]=c->r[5]+0xFFFFA140u; // 800D1104
  c->r[7]=c->r[7]+0xFFFFA160u; // 800D1108
  c->r[9]=c->r[9]+0x00001460u; // 800D110C
  c->r[4]=0u+0x00001000u; // 800D1110
  c->r[6]=0u+0x00000020u; // 800D1114
  c->r[8]=0u+0x00000020u; // 800D1118
  c->r[10]=0u+0x00000000u; // 800D111C
  c->lr=0x800D1124u; f_800FB1C0(c); // 800D1120
  cmps(c,0,(int32_t)c->r[3],0); // 800D1124
  if (!crb(c,2)) { goto L_800D1138; } // 800D1128
  c->r[0]=0u+0x00000001u; // 800D112C
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D1130
  goto L_800D113C; // 800D1134
L_800D1138:;
  W32(c->r[13]+0xFFFFA530u,c->r[31]); // 800D1138
L_800D113C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D113C
  c->lr=0x800D1144u; f_800CBAE0(c); // 800D1140
  c->r[0]=0u+0x00000001u; // 800D1144
  W32(c->r[13]+0xFFFFA524u,c->r[0]); // 800D1148
  c->r[3]=0u+0x00000001u; // 800D114C
L_800D1150:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1154
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1158
  c->lr=c->r[0]; // 800D115C
  c->r[1]=c->r[1]+0x00000010u; // 800D1160
  return; // 800D1164
}

// __OSShutdownToSBY
void f_800D1170(Ctx* __restrict c) {
  trace_call(0x800D1170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1170
  c->r[0]=c->lr; // 800D1174
  c->r[3]=0u+0xCC000000u; // 800D1178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D117C
  c->r[0]=0u+0x00000000u; // 800D1180
  W16(c->r[3]+0x00002002u,c->r[0]); // 800D1184
  c->r[0]=R32(c->r[13]+0xFFFFA524u); // 800D1188
  cmps(c,0,(int32_t)c->r[0],0); // 800D118C
  if (!crb(c,2)) { goto L_800D11B0; } // 800D1190
  c->r[3]=0u+0x802B0000u; // 800D1194
  c->r[5]=0u+0x802B0000u; // 800D1198
  c->r[3]=c->r[3]+0xFFFFDBB8u; // 800D119C
  c->r[4]=0u+0x0000015Cu; // 800D11A0
  c->r[5]=c->r[5]+0xFFFFDBC4u; // 800D11A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D11A8
  c->lr=0x800D11B0u; f_800C84E0(c); // 800D11AC
L_800D11B0:;
  c->r[4]=0u+0x802F0000u; // 800D11B0
  c->r[0]=0u+0x00000000u; // 800D11B4
  c->r[7]=0u+0x802F0000u; // 800D11B8
  W32(c->r[4]+0xFFFFA180u,c->r[0]); // 800D11BC
  c->r[5]=c->r[4]+0xFFFFA180u; // 800D11C0
  c->r[3]=R32(c->r[13]+0xFFFFA528u); // 800D11C4
  c->r[7]=c->r[7]+0xFFFFA1A0u; // 800D11C8
  c->r[4]=0u+0x00002003u; // 800D11CC
  c->r[6]=0u+0x00000020u; // 800D11D0
  c->r[8]=0u+0x00000020u; // 800D11D4
  c->lr=0x800D11DCu; f_800FB300(c); // 800D11D8
  c->lr=0x800D11E0u; f_800CBAA0(c); // 800D11DC
  c->lr=0x800D11E4u; f_800C7880(c); // 800D11E0
  c->r[0]=c->r[0]|0x00000000u; // 800D11E4
L_800D11E8:;
  IRQCHK(c); goto L_800D11E8; // 800D11E8
}

// __OSHotReset
void f_800D11F0(Ctx* __restrict c) {
  trace_call(0x800D11F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D11F0
  c->r[0]=c->lr; // 800D11F4
  c->r[3]=0u+0xCC000000u; // 800D11F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D11FC
  c->r[0]=0u+0x00000000u; // 800D1200
  W16(c->r[3]+0x00002002u,c->r[0]); // 800D1204
  c->r[0]=R32(c->r[13]+0xFFFFA524u); // 800D1208
  cmps(c,0,(int32_t)c->r[0],0); // 800D120C
  if (!crb(c,2)) { goto L_800D1230; } // 800D1210
  c->r[3]=0u+0x802B0000u; // 800D1214
  c->r[5]=0u+0x802B0000u; // 800D1218
  c->r[3]=c->r[3]+0xFFFFDBB8u; // 800D121C
  c->r[4]=0u+0x0000019Cu; // 800D1220
  c->r[5]=c->r[5]+0xFFFFDBFCu; // 800D1224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1228
  c->lr=0x800D1230u; f_800C84E0(c); // 800D122C
L_800D1230:;
  c->r[5]=0u+0x802F0000u; // 800D1230
  c->r[7]=0u+0x802F0000u; // 800D1234
  c->r[3]=R32(c->r[13]+0xFFFFA528u); // 800D1238
  c->r[5]=c->r[5]+0xFFFFA180u; // 800D123C
  c->r[7]=c->r[7]+0xFFFFA1A0u; // 800D1240
  c->r[4]=0u+0x00002001u; // 800D1244
  c->r[6]=0u+0x00000020u; // 800D1248
  c->r[8]=0u+0x00000020u; // 800D124C
  c->lr=0x800D1254u; f_800FB300(c); // 800D1250
  c->lr=0x800D1258u; f_800CBAA0(c); // 800D1254
  c->lr=0x800D125Cu; f_800C7880(c); // 800D1258
  c->r[0]=c->r[0]|0x00000000u; // 800D125C
L_800D1260:;
  IRQCHK(c); goto L_800D1260; // 800D1260
}

// __OSSetVIForceDimming
void f_800D1270(Ctx* __restrict c) {
  trace_call(0x800D1270u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1270
  c->r[0]=c->lr; // 800D1274
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1278
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D127C
  c->r[31]=c->r[5]|c->r[5]; // 800D1280
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1284
  c->r[30]=c->r[4]|c->r[4]; // 800D1288
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D128C
  c->r[29]=c->r[3]|c->r[3]; // 800D1290
  c->r[0]=R32(c->r[13]+0xFFFFA524u); // 800D1294
  cmps(c,0,(int32_t)c->r[0],0); // 800D1298
  if (!crb(c,2)) { goto L_800D12A8; } // 800D129C
  c->r[3]=0u+0xFFFFFFF6u; // 800D12A0
  goto L_800D134C; // 800D12A4
L_800D12A8:;
  c->lr=0x800D12ACu; f_800CBAA0(c); // 800D12A8
  c->r[0]=R32(c->r[13]+0xFFFFA534u); // 800D12AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D12B0
  if (crb(c,2)) { goto L_800D12C4; } // 800D12B4
  c->lr=0x800D12BCu; f_800CBAE0(c); // 800D12B8
  c->r[3]=0u+0x00000000u; // 800D12BC
  goto L_800D134C; // 800D12C0
L_800D12C4:;
  c->r[0]=0u+0x00000001u; // 800D12C4
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800D12C8
  c->lr=0x800D12D0u; f_800CBAE0(c); // 800D12CC
  c->r[4]=rotl(c->r[29],7)&0xFFFFFF80u; // 800D12D0
  c->r[3]=0u+0x802F0000u; // 800D12D4
  c->r[5]=c->r[3]+0xFFFFA1C0u; // 800D12D8
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800D12DC
  c->r[12]=0u+0x00000000u; // 800D12E0
  c->r[4]=c->r[4]|c->r[31]; // 800D12E4
  c->r[4]=c->r[4]|c->r[0]; // 800D12E8
  W32(c->r[3]+0xFFFFA1C0u,c->r[4]); // 800D12EC
  c->r[11]=0u+0xFFFFFFFFu; // 800D12F0
  c->r[0]=0u+0xFFFF0000u; // 800D12F4
  c->r[7]=0u+0x802F0000u; // 800D12F8
  c->r[9]=0u+0x800D0000u; // 800D12FC
  c->r[3]=R32(c->r[13]+0xFFFFA528u); // 800D1300
  c->r[7]=c->r[7]+0xFFFFA1E0u; // 800D1304
  W32(c->r[5]+0x00000004u,c->r[12]); // 800D1308
  c->r[9]=c->r[9]+0x00001430u; // 800D130C
  c->r[4]=0u+0x00005001u; // 800D1310
  c->r[6]=0u+0x00000020u; // 800D1314
  W32(c->r[5]+0x00000008u,c->r[12]); // 800D1318
  c->r[8]=0u+0x00000020u; // 800D131C
  c->r[10]=0u+0x00000000u; // 800D1320
  W32(c->r[5]+0x0000000Cu,c->r[12]); // 800D1324
  W32(c->r[5]+0x00000010u,c->r[12]); // 800D1328
  W32(c->r[5]+0x00000014u,c->r[11]); // 800D132C
  W32(c->r[5]+0x00000018u,c->r[0]); // 800D1330
  W32(c->r[5]+0x0000001Cu,c->r[12]); // 800D1334
  c->lr=0x800D133Cu; f_800FB1C0(c); // 800D1338
  cmps(c,0,(int32_t)c->r[3],0); // 800D133C
  if (crb(c,2)) { goto L_800D1348; } // 800D1340
  goto L_800D134C; // 800D1344
L_800D1348:;
  c->r[3]=0u+0x00000001u; // 800D1348
L_800D134C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D134C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1350
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1354
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D1358
  c->lr=c->r[0]; // 800D135C
  c->r[1]=c->r[1]+0x00000020u; // 800D1360
  return; // 800D1364
}

// __OSSetIdleLEDMode
void f_800D1370(Ctx* __restrict c) {
  trace_call(0x800D1370u);
  c->r[0]=R32(c->r[13]+0xFFFFA524u); // 800D1370
  cmps(c,0,(int32_t)c->r[0],0); // 800D1374
  if (!crb(c,2)) { goto L_800D1384; } // 800D1378
  c->r[3]=0u+0xFFFFFFFAu; // 800D137C
  return; // 800D1380
L_800D1384:;
  c->r[4]=0u+0x802F0000u; // 800D1384
  c->r[7]=0u+0x802F0000u; // 800D1388
  W32(c->r[4]+0xFFFFA180u,c->r[3]); // 800D138C
  c->r[5]=c->r[4]+0xFFFFA180u; // 800D1390
  c->r[3]=R32(c->r[13]+0xFFFFA528u); // 800D1394
  c->r[7]=c->r[7]+0xFFFFA1A0u; // 800D1398
  c->r[4]=0u+0x00006002u; // 800D139C
  c->r[6]=0u+0x00000020u; // 800D13A0
  c->r[8]=0u+0x00000020u; // 800D13A4
  f_800FB300(c); return; // 800D13A8
  return; // 800D13AC
}

// __OSUnRegisterStateEvent
void f_800D13B0(Ctx* __restrict c) {
  trace_call(0x800D13B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D13B0
  c->r[0]=c->lr; // 800D13B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D13B8
  c->r[0]=R32(c->r[13]+0xFFFFA530u); // 800D13BC
  cmps(c,0,(int32_t)c->r[0],0); // 800D13C0
  if (!crb(c,2)) { goto L_800D13D0; } // 800D13C4
  c->r[3]=0u+0x00000000u; // 800D13C8
  goto L_800D1418; // 800D13CC
L_800D13D0:;
  c->r[0]=R32(c->r[13]+0xFFFFA524u); // 800D13D0
  cmps(c,0,(int32_t)c->r[0],0); // 800D13D4
  if (!crb(c,2)) { goto L_800D13E4; } // 800D13D8
  c->r[3]=0u+0xFFFFFFFAu; // 800D13DC
  goto L_800D1418; // 800D13E0
L_800D13E4:;
  c->r[5]=0u+0x802F0000u; // 800D13E4
  c->r[7]=0u+0x802F0000u; // 800D13E8
  c->r[3]=R32(c->r[13]+0xFFFFA528u); // 800D13EC
  c->r[5]=c->r[5]+0xFFFFA180u; // 800D13F0
  c->r[7]=c->r[7]+0xFFFFA1A0u; // 800D13F4
  c->r[4]=0u+0x00003002u; // 800D13F8
  c->r[6]=0u+0x00000020u; // 800D13FC
  c->r[8]=0u+0x00000020u; // 800D1400
  c->lr=0x800D1408u; f_800FB300(c); // 800D1404
  cmps(c,0,(int32_t)c->r[3],0); // 800D1408
  if (!crb(c,2)) { goto L_800D1418; } // 800D140C
  c->r[0]=0u+0x00000000u; // 800D1410
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D1414
L_800D1418:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1418
  c->lr=c->r[0]; // 800D141C
  c->r[1]=c->r[1]+0x00000010u; // 800D1420
  return; // 800D1424
}

// __OSVIDimReplyHandler
void f_800D1430(Ctx* __restrict c) {
  trace_call(0x800D1430u);
  c->r[0]=0u+0x00000000u; // 800D1430
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800D1434
  c->r[3]=0u+0x00000000u; // 800D1438
  return; // 800D143C
}

// __OSDefaultResetCallback
void f_800D1440(Ctx* __restrict c) {
  trace_call(0x800D1440u);
  return; // 800D1440
}

// __OSDefaultPowerCallback
void f_800D1450(Ctx* __restrict c) {
  trace_call(0x800D1450u);
  return; // 800D1450
}

// __OSStateEventHandler
void f_800D1460(Ctx* __restrict c) {
  trace_call(0x800D1460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1460
  c->r[0]=c->lr; // 800D1464
  cmps(c,0,(int32_t)c->r[3],0); // 800D1468
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D146C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1470
  if (crb(c,2)) { goto L_800D1494; } // 800D1474
  c->r[3]=0u+0x802B0000u; // 800D1478
  c->r[5]=0u+0x802B0000u; // 800D147C
  c->r[3]=c->r[3]+0xFFFFDBB8u; // 800D1480
  c->r[4]=0u+0x00000334u; // 800D1484
  c->r[5]=c->r[5]+0xFFFFDC34u; // 800D1488
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D148C
  c->lr=0x800D1494u; f_800C84E0(c); // 800D1490
L_800D1494:;
  c->r[3]=0u+0x802F0000u; // 800D1494
  c->r[0]=0u+0x00000000u; // 800D1498
  c->r[3]=R32(c->r[3]+0xFFFFA160u); // 800D149C
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D14A0
  c->r[0]=c->r[3]+0xFFFE0000u; // 800D14A4
  cmpu(c,0,c->r[0],0x00000000u); // 800D14A8
  if (!crb(c,2)) { goto L_800D1564; } // 800D14AC
  c->r[3]=0u+0xCC000000u; // 800D14B0
  c->r[0]=R32(c->r[3]+0x00003000u); // 800D14B4
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 800D14B8
  if (!crb(c,2)) { goto L_800D14C8; } // 800D14BC
  c->r[0]=0u+0x00000001u; // 800D14C0
  goto L_800D14CC; // 800D14C4
L_800D14C8:;
  c->r[0]=0u+0x00000000u; // 800D14C8
L_800D14CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D14CC
  if (crb(c,2)) { goto L_800D1508; } // 800D14D0
  c->lr=0x800D14D8u; f_800CBAA0(c); // 800D14D4
  c->r[12]=R32(c->r[13]+0xFFFFA53Cu); // 800D14D8
  c->r[4]=0u+0x800D0000u; // 800D14DC
  c->r[4]=c->r[4]+0x00001440u; // 800D14E0
  c->r[0]=0u+0x00000001u; // 800D14E4
  c->r[31]=c->r[3]|c->r[3]; // 800D14E8
  W32(c->r[13]+0xFFFFA520u,c->r[0]); // 800D14EC
  W32(c->r[13]+0xFFFFA53Cu,c->r[4]); // 800D14F0
  c->ctr=c->r[12]; // 800D14F4
  if (true) { c->lr=0x800D14FCu; dispatch(c,c->ctr); } // 800D14F8
  c->r[3]=c->r[31]|c->r[31]; // 800D14FC
  c->lr=0x800D1504u; f_800CBAE0(c); // 800D1500
  c->lr=0x800D1508u; f_800D9850(c); // 800D1504
L_800D1508:;
  c->lr=0x800D150Cu; f_800CBAA0(c); // 800D1508
  c->r[31]=c->r[3]|c->r[3]; // 800D150C
  c->r[5]=0u+0x802F0000u; // 800D1510
  c->r[7]=0u+0x802F0000u; // 800D1514
  c->r[9]=0u+0x800D0000u; // 800D1518
  c->r[3]=R32(c->r[13]+0xFFFFA52Cu); // 800D151C
  c->r[5]=c->r[5]+0xFFFFA140u; // 800D1520
  c->r[7]=c->r[7]+0xFFFFA160u; // 800D1524
  c->r[9]=c->r[9]+0x00001460u; // 800D1528
  c->r[4]=0u+0x00001000u; // 800D152C
  c->r[6]=0u+0x00000020u; // 800D1530
  c->r[8]=0u+0x00000020u; // 800D1534
  c->r[10]=0u+0x00000000u; // 800D1538
  c->lr=0x800D1540u; f_800FB1C0(c); // 800D153C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1540
  if (!crb(c,2)) { goto L_800D1554; } // 800D1544
  c->r[0]=0u+0x00000001u; // 800D1548
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D154C
  goto L_800D155C; // 800D1550
L_800D1554:;
  c->r[0]=0u+0x00000000u; // 800D1554
  W32(c->r[13]+0xFFFFA530u,c->r[0]); // 800D1558
L_800D155C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D155C
  c->lr=0x800D1564u; f_800CBAE0(c); // 800D1560
L_800D1564:;
  c->r[3]=0u+0x802F0000u; // 800D1564
  c->r[0]=R32(c->r[3]+0xFFFFA160u); // 800D1568
  cmpu(c,0,c->r[0],0x00000800u); // 800D156C
  if (!crb(c,2)) { goto L_800D159C; } // 800D1570
  c->lr=0x800D1578u; f_800CBAA0(c); // 800D1574
  c->r[12]=R32(c->r[13]+0xFFFFA538u); // 800D1578
  c->r[4]=0u+0x800D0000u; // 800D157C
  c->r[4]=c->r[4]+0x00001450u; // 800D1580
  c->r[31]=c->r[3]|c->r[3]; // 800D1584
  W32(c->r[13]+0xFFFFA538u,c->r[4]); // 800D1588
  c->ctr=c->r[12]; // 800D158C
  if (true) { c->lr=0x800D1594u; dispatch(c,c->ctr); } // 800D1590
  c->r[3]=c->r[31]|c->r[31]; // 800D1594
  c->lr=0x800D159Cu; f_800CBAE0(c); // 800D1598
L_800D159C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D159C
  c->r[3]=0u+0x00000000u; // 800D15A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D15A4
  c->lr=c->r[0]; // 800D15A8
  c->r[1]=c->r[1]+0x00000010u; // 800D15AC
  return; // 800D15B0
}

// PlayRecordAlarmCallback
void f_800D15C0(Ctx* __restrict c) {
  trace_call(0x800D15C0u);
  c->r[3]=0u+0x00000000u; // 800D15C0
  c->r[4]=0u+0x00000000u; // 800D15C4
  f_800D15D0(c); return; // 800D15C8
}

// PlayRecordCallback
void f_800D15D0(Ctx* __restrict c) {
  trace_call(0x800D15D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D15D0
  c->r[0]=c->lr; // 800D15D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D15D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D15DC
  c->r[31]=0u+0x802F0000u; // 800D15E0
  c->r[31]=c->r[31]+0xFFFFA200u; // 800D15E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D15E8
  c->r[30]=0u+0x00000000u; // 800D15EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D15F0
  c->r[0]=R32(c->r[13]+0xFFFFA550u); // 800D15F4
  W32(c->r[13]+0xFFFFA55Cu,c->r[3]); // 800D15F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D15FC
  if (crb(c,2)) { goto L_800D1610; } // 800D1600
  c->r[0]=0u+0x00000001u; // 800D1604
  W32(c->r[13]+0xFFFFA554u,c->r[0]); // 800D1608
  goto L_800D1A68; // 800D160C
L_800D1610:;
  c->r[0]=R32(c->r[13]+0xFFFFA558u); // 800D1610
  cmps(c,0,(int32_t)c->r[0],0); // 800D1614
  if (!crb(c,2)) { goto L_800D1830; } // 800D1618
  c->r[0]=R32(c->r[13]+0xFFFF8F58u); // 800D161C
  cmpu(c,0,c->r[0],0x00000006u); // 800D1620
  if (crb(c,1)) { goto L_800D181C; } // 800D1624
  c->r[4]=0u+0x802B0000u; // 800D1628
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D162C
  c->r[4]=c->r[4]+0xFFFFDC84u; // 800D1630
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D1634
  c->ctr=c->r[4]; // 800D1638
  if (true) { switch (c->ctr) { case 0x800D1640u: goto L_800D1640; case 0x800D164Cu: goto L_800D164C; case 0x800D16C8u: goto L_800D16C8; case 0x800D170Cu: goto L_800D170C; case 0x800D1734u: goto L_800D1734; case 0x800D1740u: goto L_800D1740; case 0x800D17C8u: goto L_800D17C8; default: break; } dispatch(c,c->ctr); return; } // 800D163C
L_800D1640:;
  c->r[0]=0u+0x00000001u; // 800D1640
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1644
  goto L_800D1830; // 800D1648
L_800D164C:;
  cmps(c,0,(int32_t)c->r[3],-10); // 800D164C
  if (!crb(c,2)) { goto L_800D1688; } // 800D1650
  c->r[0]=0u+0x00000001u; // 800D1654
  W32(c->r[13]+0xFFFFA558u,c->r[0]); // 800D1658
  c->r[3]=c->r[31]+0x00000080u; // 800D165C
  c->lr=0x800D1664u; f_800C66D0(c); // 800D1660
  c->r[3]=0u+0x80000000u; // 800D1664
  c->r[7]=0u+0x800D0000u; // 800D1668
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D166C
  c->r[3]=c->r[31]+0x00000080u; // 800D1670
  c->r[7]=c->r[7]+0x000015C0u; // 800D1674
  c->r[5]=0u+0x00000000u; // 800D1678
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D167C
  c->lr=0x800D1684u; f_800C6930(c); // 800D1680
  goto L_800D1A68; // 800D1684
L_800D1688:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D1688
  if (!crb(c,2)) { goto L_800D16B4; } // 800D168C
  c->r[0]=R32(c->r[13]+0xFFFFA548u); // 800D1690
  cmps(c,0,(int32_t)c->r[0],0); // 800D1694
  if (!crb(c,2)) { goto L_800D16A8; } // 800D1698
  c->r[0]=0u+0x00000002u; // 800D169C
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D16A0
  goto L_800D1830; // 800D16A4
L_800D16A8:;
  c->r[0]=0u+0x00000004u; // 800D16A8
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D16AC
  goto L_800D1830; // 800D16B0
L_800D16B4:;
  c->r[3]=0u+0x00000001u; // 800D16B4
  c->r[0]=0u+0x00000007u; // 800D16B8
  W32(c->r[13]+0xFFFFA54Cu,c->r[3]); // 800D16BC
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D16C0
  goto L_800D1A68; // 800D16C4
L_800D16C8:;
  cmpu(c,0,c->r[3],0x00000080u); // 800D16C8
  if (!crb(c,2)) { goto L_800D16F8; } // 800D16CC
  c->r[4]=c->r[31]+0x00000000u; // 800D16D0
  c->r[5]=0u+0x00000001u; // 800D16D4
  c->r[3]=R32(c->r[4]+0x00000060u); // 800D16D8
  c->r[0]=0u+0x00000003u; // 800D16DC
  c->r[4]=R32(c->r[4]+0x00000064u); // 800D16E0
  W32(c->r[13]+0xFFFFA548u,c->r[5]); // 800D16E4
  W32(c->r[13]+0xFFFFA564u,c->r[4]); // 800D16E8
  W32(c->r[13]+0xFFFFA560u,c->r[3]); // 800D16EC
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D16F0
  goto L_800D1830; // 800D16F4
L_800D16F8:;
  c->r[3]=0u+0x00000001u; // 800D16F8
  c->r[0]=0u+0x00000006u; // 800D16FC
  W32(c->r[13]+0xFFFFA54Cu,c->r[3]); // 800D1700
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1704
  goto L_800D1830; // 800D1708
L_800D170C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D170C
  if (!crb(c,2)) { goto L_800D1720; } // 800D1710
  c->r[0]=0u+0x00000004u; // 800D1714
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1718
  goto L_800D1830; // 800D171C
L_800D1720:;
  c->r[3]=0u+0x00000001u; // 800D1720
  c->r[0]=0u+0x00000006u; // 800D1724
  W32(c->r[13]+0xFFFFA54Cu,c->r[3]); // 800D1728
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D172C
  goto L_800D1830; // 800D1730
L_800D1734:;
  c->r[0]=0u+0x00000005u; // 800D1734
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1738
  goto L_800D1830; // 800D173C
L_800D1740:;
  cmpu(c,0,c->r[3],0x00000080u); // 800D1740
  if (!crb(c,2)) { goto L_800D17B4; } // 800D1744
  c->lr=0x800D174Cu; f_800D0510(c); // 800D1748
  c->r[5]=0u+0x80000000u; // 800D174C
  c->r[8]=R32(c->r[13]+0xFFFFA564u); // 800D1750
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800D1754
  c->r[5]=0u+0x0000012Cu; // 800D1758
  c->r[9]=R32(c->r[13]+0xFFFFA560u); // 800D175C
  c->r[8]=addc(c,~c->r[8],c->r[4],1); // 800D1760
  c->r[7]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D1764
  c->r[6]=0u+0x00000000u; // 800D1768
  c->r[3]=addc(c,~c->r[9],c->r[3],c->xer_ca); // 800D176C
  c->r[4]=c->r[3]^0x80000000u; // 800D1770
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 800D1774
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 800D1778
  c->r[0]=c->r[0]+c->r[3]; // 800D177C
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)300); // 800D1780
  c->r[0]=c->r[0]^0x80000000u; // 800D1784
  c->r[3]=addc(c,~c->r[8],c->r[5],1); // 800D1788
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800D178C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D1790
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800D1794
  if (crb(c,2)) { goto L_800D17A8; } // 800D1798
  c->r[0]=0u+0x00000006u; // 800D179C
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D17A0
  goto L_800D1830; // 800D17A4
L_800D17A8:;
  c->r[0]=0u+0x00000003u; // 800D17A8
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D17AC
  goto L_800D1830; // 800D17B0
L_800D17B4:;
  c->r[3]=0u+0x00000001u; // 800D17B4
  c->r[0]=0u+0x00000006u; // 800D17B8
  W32(c->r[13]+0xFFFFA54Cu,c->r[3]); // 800D17BC
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D17C0
  goto L_800D1830; // 800D17C4
L_800D17C8:;
  c->r[0]=R32(c->r[13]+0xFFFFA54Cu); // 800D17C8
  cmps(c,0,(int32_t)c->r[0],0); // 800D17CC
  if (crb(c,2)) { goto L_800D17E0; } // 800D17D0
  c->r[0]=0u+0x00000007u; // 800D17D4
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D17D8
  goto L_800D1A68; // 800D17DC
L_800D17E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D17E0
  if (!crb(c,2)) { goto L_800D1808; } // 800D17E4
  c->r[4]=c->r[31]+0x00000000u; // 800D17E8
  c->r[0]=0u+0x00000001u; // 800D17EC
  c->r[3]=R32(c->r[4]+0x00000060u); // 800D17F0
  c->r[4]=R32(c->r[4]+0x00000064u); // 800D17F4
  W32(c->r[13]+0xFFFFA564u,c->r[4]); // 800D17F8
  W32(c->r[13]+0xFFFFA560u,c->r[3]); // 800D17FC
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1800
  goto L_800D1830; // 800D1804
L_800D1808:;
  c->r[3]=0u+0x00000007u; // 800D1808
  c->r[0]=0u+0x00000001u; // 800D180C
  W32(c->r[13]+0xFFFF8F58u,c->r[3]); // 800D1810
  W32(c->r[13]+0xFFFFA54Cu,c->r[0]); // 800D1814
  goto L_800D1A68; // 800D1818
L_800D181C:;
  c->r[3]=0u+0x00000007u; // 800D181C
  c->r[0]=0u+0x00000001u; // 800D1820
  W32(c->r[13]+0xFFFF8F58u,c->r[3]); // 800D1824
  W32(c->r[13]+0xFFFFA54Cu,c->r[0]); // 800D1828
  goto L_800D1A68; // 800D182C
L_800D1830:;
  c->r[0]=R32(c->r[13]+0xFFFF8F58u); // 800D1830
  c->r[29]=0u+0x00000000u; // 800D1834
  W32(c->r[13]+0xFFFFA558u,c->r[29]); // 800D1838
  cmps(c,0,(int32_t)c->r[0],4); // 800D183C
  if (crb(c,2)) { goto L_800D18E0; } // 800D1840
  if (!crb(c,0)) { goto L_800D1860; } // 800D1844
  cmps(c,0,(int32_t)c->r[0],2); // 800D1848
  if (crb(c,2)) { goto L_800D1898; } // 800D184C
  if (!crb(c,0)) { goto L_800D18BC; } // 800D1850
  cmps(c,0,(int32_t)c->r[0],1); // 800D1854
  if (!crb(c,0)) { goto L_800D1870; } // 800D1858
  goto L_800D1990; // 800D185C
L_800D1860:;
  cmps(c,0,(int32_t)c->r[0],6); // 800D1860
  if (crb(c,2)) { goto L_800D1978; } // 800D1864
  if (!crb(c,0)) { goto L_800D1990; } // 800D1868
  goto L_800D191C; // 800D186C
L_800D1870:;
  c->r[3]=0u+0x802B0000u; // 800D1870
  c->r[6]=0u+0x800D0000u; // 800D1874
  c->r[3]=c->r[3]+0xFFFFDC58u; // 800D1878
  c->r[4]=c->r[31]+0x000000B0u; // 800D187C
  c->r[6]=c->r[6]+0x000015D0u; // 800D1880
  c->r[7]=c->r[31]+0x0000013Cu; // 800D1884
  c->r[5]=0u+0x00000003u; // 800D1888
  c->lr=0x800D1890u; f_800F3C40(c); // 800D188C
  c->r[30]=c->r[3]|c->r[3]; // 800D1890
  goto L_800D1990; // 800D1894
L_800D1898:;
  c->r[6]=0u+0x800D0000u; // 800D1898
  c->r[3]=c->r[31]+0x000000B0u; // 800D189C
  c->r[4]=c->r[31]+0x00000000u; // 800D18A0
  c->r[7]=c->r[31]+0x0000013Cu; // 800D18A4
  c->r[6]=c->r[6]+0x000015D0u; // 800D18A8
  c->r[5]=0u+0x00000080u; // 800D18AC
  c->lr=0x800D18B4u; f_800F3220(c); // 800D18B0
  c->r[30]=c->r[3]|c->r[3]; // 800D18B4
  goto L_800D1990; // 800D18B8
L_800D18BC:;
  c->r[6]=0u+0x800D0000u; // 800D18BC
  c->r[3]=c->r[31]+0x000000B0u; // 800D18C0
  c->r[6]=c->r[6]+0x000015D0u; // 800D18C4
  c->r[7]=c->r[31]+0x0000013Cu; // 800D18C8
  c->r[4]=0u+0x00000000u; // 800D18CC
  c->r[5]=0u+0x00000000u; // 800D18D0
  c->lr=0x800D18D8u; f_800F3390(c); // 800D18D4
  c->r[30]=c->r[3]|c->r[3]; // 800D18D8
  goto L_800D1990; // 800D18DC
L_800D18E0:;
  c->r[3]=c->r[31]+0x00000080u; // 800D18E0
  c->lr=0x800D18E8u; f_800C66D0(c); // 800D18E4
  c->r[3]=0u+0x80000000u; // 800D18E8
  c->r[0]=0u+0x0000003Cu; // 800D18EC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 800D18F0
  c->r[7]=0u+0x800D0000u; // 800D18F4
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 800D18F8
  c->r[5]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800D18FC
  c->r[3]=c->r[31]+0x00000080u; // 800D1900
  c->r[7]=c->r[7]+0x000015C0u; // 800D1904
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 800D1908
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 800D190C
  c->r[5]=c->r[0]+c->r[4]; // 800D1910
  c->lr=0x800D1918u; f_800C6930(c); // 800D1914
  goto L_800D1990; // 800D1918
L_800D191C:;
  c->lr=0x800D1920u; f_800D0510(c); // 800D191C
  c->r[5]=c->r[31]+0x00000000u; // 800D1920
  c->r[0]=0u+0x0000001Fu; // 800D1924
  W32(c->r[5]+0x00000064u,c->r[4]); // 800D1928
  c->r[6]=c->r[5]+0x00000004u; // 800D192C
  c->r[4]=0u+0x00000000u; // 800D1930
  W32(c->r[5]+0x00000060u,c->r[3]); // 800D1934
  c->ctr=c->r[0]; // 800D1938
  c->r[0]=c->r[0]|0x00000000u; // 800D193C
L_800D1940:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D1940
  c->r[6]=c->r[6]+0x00000004u; // 800D1944
  c->r[4]=c->r[4]+c->r[0]; // 800D1948
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1940; } // 800D194C
  c->r[6]=0u+0x800D0000u; // 800D1950
  W32(c->r[31]+0x00000000u,c->r[4]); // 800D1954
  c->r[3]=c->r[31]+0x000000B0u; // 800D1958
  c->r[4]=c->r[31]+0x00000000u; // 800D195C
  c->r[6]=c->r[6]+0x000015D0u; // 800D1960
  c->r[7]=c->r[31]+0x0000013Cu; // 800D1964
  c->r[5]=0u+0x00000080u; // 800D1968
  c->lr=0x800D1970u; f_800F3310(c); // 800D196C
  c->r[30]=c->r[3]|c->r[3]; // 800D1970
  goto L_800D1990; // 800D1974
L_800D1978:;
  c->r[4]=0u+0x800D0000u; // 800D1978
  c->r[3]=c->r[31]+0x000000B0u; // 800D197C
  c->r[4]=c->r[4]+0x000015D0u; // 800D1980
  c->r[5]=c->r[31]+0x0000013Cu; // 800D1984
  c->lr=0x800D198Cu; f_800F3E30(c); // 800D1988
  c->r[30]=c->r[3]|c->r[3]; // 800D198C
L_800D1990:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D1990
  if (crb(c,2)) { goto L_800D1A64; } // 800D1994
  cmps(c,0,(int32_t)c->r[30],-3); // 800D1998
  if (!crb(c,2)) { goto L_800D19D4; } // 800D199C
  c->r[3]=c->r[31]+0x00000080u; // 800D19A0
  c->lr=0x800D19A8u; f_800C66D0(c); // 800D19A4
  c->r[3]=0u+0x80000000u; // 800D19A8
  c->r[7]=0u+0x800D0000u; // 800D19AC
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D19B0
  c->r[3]=c->r[31]+0x00000080u; // 800D19B4
  c->r[7]=c->r[7]+0x000015C0u; // 800D19B8
  c->r[5]=0u+0x00000000u; // 800D19BC
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D19C0
  c->lr=0x800D19C8u; f_800C6930(c); // 800D19C4
  c->r[0]=0u+0x00000001u; // 800D19C8
  W32(c->r[13]+0xFFFFA558u,c->r[0]); // 800D19CC
  goto L_800D1A64; // 800D19D0
L_800D19D4:;
  c->r[0]=R32(c->r[13]+0xFFFF8F58u); // 800D19D4
  c->r[3]=0u+0x00000001u; // 800D19D8
  W32(c->r[13]+0xFFFFA54Cu,c->r[3]); // 800D19DC
  cmps(c,0,(int32_t)c->r[0],4); // 800D19E0
  if (crb(c,2)) { goto L_800D1A5C; } // 800D19E4
  if (!crb(c,0)) { goto L_800D19F8; } // 800D19E8
  cmps(c,0,(int32_t)c->r[0],2); // 800D19EC
  if (!crb(c,0)) { goto L_800D1A00; } // 800D19F0
  goto L_800D1A5C; // 800D19F4
L_800D19F8:;
  cmps(c,0,(int32_t)c->r[0],6); // 800D19F8
  if (!crb(c,0)) { goto L_800D1A5C; } // 800D19FC
L_800D1A00:;
  c->r[0]=0u+0x00000006u; // 800D1A00
  c->r[4]=0u+0x800D0000u; // 800D1A04
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1A08
  c->r[3]=c->r[31]+0x000000B0u; // 800D1A0C
  c->r[4]=c->r[4]+0x000015D0u; // 800D1A10
  c->r[5]=c->r[31]+0x0000013Cu; // 800D1A14
  c->lr=0x800D1A1Cu; f_800F3E30(c); // 800D1A18
  cmps(c,0,(int32_t)c->r[3],-3); // 800D1A1C
  c->r[30]=c->r[3]|c->r[3]; // 800D1A20
  if (!crb(c,2)) { goto L_800D1A64; } // 800D1A24
  c->r[0]=0u+0x00000001u; // 800D1A28
  W32(c->r[13]+0xFFFFA558u,c->r[0]); // 800D1A2C
  c->r[3]=c->r[31]+0x00000080u; // 800D1A30
  c->lr=0x800D1A38u; f_800C66D0(c); // 800D1A34
  c->r[3]=0u+0x80000000u; // 800D1A38
  c->r[7]=0u+0x800D0000u; // 800D1A3C
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D1A40
  c->r[3]=c->r[31]+0x00000080u; // 800D1A44
  c->r[7]=c->r[7]+0x000015C0u; // 800D1A48
  c->r[5]=0u+0x00000000u; // 800D1A4C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D1A50
  c->lr=0x800D1A58u; f_800C6930(c); // 800D1A54
  goto L_800D1A64; // 800D1A58
L_800D1A5C:;
  c->r[0]=0u+0x00000007u; // 800D1A5C
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1A60
L_800D1A64:;
  W32(c->r[13]+0xFFFFA55Cu,c->r[30]); // 800D1A64
L_800D1A68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1A68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1A6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1A70
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D1A74
  c->lr=c->r[0]; // 800D1A78
  c->r[1]=c->r[1]+0x00000020u; // 800D1A7C
  return; // 800D1A80
}

// __OSStartPlayRecord
void f_800D1A90(Ctx* __restrict c) {
  trace_call(0x800D1A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1A90
  c->r[0]=c->lr; // 800D1A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1A98
  c->lr=0x800D1AA0u; f_800F4DD0(c); // 800D1A9C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1AA0
  if (!crb(c,2)) { goto L_800D1AD4; } // 800D1AA4
  c->r[0]=0u+0x00000000u; // 800D1AA8
  W32(c->r[13]+0xFFFFA550u,c->r[0]); // 800D1AAC
  c->r[3]=0u+0x00000000u; // 800D1AB0
  c->r[4]=0u+0x00000000u; // 800D1AB4
  W32(c->r[13]+0xFFFFA548u,c->r[0]); // 800D1AB8
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1ABC
  W32(c->r[13]+0xFFFFA54Cu,c->r[0]); // 800D1AC0
  W32(c->r[13]+0xFFFFA558u,c->r[0]); // 800D1AC4
  W32(c->r[13]+0xFFFFA554u,c->r[0]); // 800D1AC8
  W32(c->r[13]+0xFFFFA55Cu,c->r[0]); // 800D1ACC
  c->lr=0x800D1AD4u; f_800D15D0(c); // 800D1AD0
L_800D1AD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1AD4
  c->lr=c->r[0]; // 800D1AD8
  c->r[1]=c->r[1]+0x00000010u; // 800D1ADC
  return; // 800D1AE0
}

// __OSStopPlayRecord
void f_800D1AF0(Ctx* __restrict c) {
  trace_call(0x800D1AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1AF0
  c->r[0]=c->lr; // 800D1AF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1AF8
  c->r[11]=c->r[1]+0x00000020u; // 800D1AFC
  c->lr=0x800D1B04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1B00
  c->r[29]=0u+0x802F0000u; // 800D1B04
  c->r[29]=c->r[29]+0xFFFFA200u; // 800D1B08
  c->lr=0x800D1B10u; f_800CBAA0(c); // 800D1B0C
  c->r[0]=R32(c->r[13]+0xFFFF8F58u); // 800D1B10
  c->r[4]=0u+0x00000001u; // 800D1B14
  W32(c->r[13]+0xFFFFA550u,c->r[4]); // 800D1B18
  c->r[26]=c->r[3]|c->r[3]; // 800D1B1C
  cmps(c,0,(int32_t)c->r[0],7); // 800D1B20
  if (crb(c,2)) { goto L_800D1B40; } // 800D1B24
  cmps(c,0,(int32_t)c->r[0],0); // 800D1B28
  if (crb(c,2)) { goto L_800D1B40; } // 800D1B2C
  cmps(c,0,(int32_t)c->r[0],9); // 800D1B30
  if (crb(c,2)) { goto L_800D1B40; } // 800D1B34
  cmps(c,0,(int32_t)c->r[0],8); // 800D1B38
  if (!crb(c,2)) { goto L_800D1B4C; } // 800D1B3C
L_800D1B40:;
  c->r[3]=c->r[26]|c->r[26]; // 800D1B40
  c->lr=0x800D1B48u; f_800CBAE0(c); // 800D1B44
  goto L_800D1CBC; // 800D1B48
L_800D1B4C:;
  cmps(c,0,(int32_t)c->r[0],4); // 800D1B4C
  if (!crb(c,2)) { goto L_800D1BB8; } // 800D1B50
  c->r[3]=c->r[29]+0x00000080u; // 800D1B54
  c->lr=0x800D1B5Cu; f_800C6A30(c); // 800D1B58
  c->r[3]=c->r[26]|c->r[26]; // 800D1B5C
  c->lr=0x800D1B64u; f_800CBAE0(c); // 800D1B60
  c->lr=0x800D1B68u; f_800D0510(c); // 800D1B64
  c->r[5]=c->r[29]+0x00000000u; // 800D1B68
  c->r[0]=0u+0x0000001Fu; // 800D1B6C
  W32(c->r[5]+0x00000064u,c->r[4]); // 800D1B70
  c->r[6]=c->r[5]+0x00000004u; // 800D1B74
  c->r[4]=0u+0x00000000u; // 800D1B78
  W32(c->r[5]+0x00000060u,c->r[3]); // 800D1B7C
  c->ctr=c->r[0]; // 800D1B80
  c->r[0]=c->r[0]|0x00000000u; // 800D1B84
L_800D1B88:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D1B88
  c->r[6]=c->r[6]+0x00000004u; // 800D1B8C
  c->r[4]=c->r[4]+c->r[0]; // 800D1B90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1B88; } // 800D1B94
  W32(c->r[29]+0x00000000u,c->r[4]); // 800D1B98
  c->r[3]=c->r[29]+0x000000B0u; // 800D1B9C
  c->r[4]=c->r[29]+0x00000000u; // 800D1BA0
  c->r[5]=0u+0x00000080u; // 800D1BA4
  c->lr=0x800D1BACu; f_800F32A0(c); // 800D1BA8
  c->r[3]=c->r[29]+0x000000B0u; // 800D1BAC
  c->lr=0x800D1BB4u; f_800F3DC0(c); // 800D1BB0
  goto L_800D1CBC; // 800D1BB4
L_800D1BB8:;
  c->r[0]=R32(c->r[13]+0xFFFFA558u); // 800D1BB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D1BBC
  if (crb(c,2)) { goto L_800D1BD8; } // 800D1BC0
  c->r[3]=c->r[29]+0x00000080u; // 800D1BC4
  c->lr=0x800D1BCCu; f_800C6A30(c); // 800D1BC8
  c->r[3]=c->r[26]|c->r[26]; // 800D1BCC
  c->lr=0x800D1BD4u; f_800CBAE0(c); // 800D1BD0
  goto L_800D1C4C; // 800D1BD4
L_800D1BD8:;
  c->lr=0x800D1BDCu; f_800CBAE0(c); // 800D1BD8
  c->lr=0x800D1BE0u; f_800D0510(c); // 800D1BDC
  c->r[5]=0u+0x10620000u; // 800D1BE0
  c->r[0]=0u+0x00000000u; // 800D1BE4
  c->r[30]=c->r[4]|c->r[4]; // 800D1BE8
  c->r[31]=c->r[3]|c->r[3]; // 800D1BEC
  c->r[26]=c->r[5]+0x00004DD3u; // 800D1BF0
  c->r[28]=c->r[0]^0x80000000u; // 800D1BF4
  c->r[27]=0u+0x80000000u; // 800D1BF8
L_800D1BFC:;
  c->r[0]=R32(c->r[13]+0xFFFFA554u); // 800D1BFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D1C00
  if (!crb(c,2)) { goto L_800D1C4C; } // 800D1C04
  c->lr=0x800D1C0Cu; f_800D0510(c); // 800D1C08
  c->r[0]=R32(c->r[27]+0x000000F8u); // 800D1C0C
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 800D1C10
  c->r[3]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 800D1C14
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D1C18
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 800D1C1C
  c->r[3]=c->r[3]^0x80000000u; // 800D1C20
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800D1C24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)500); // 800D1C28
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 800D1C2C
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 800D1C30
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 800D1C34
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800D1C38
  if (crb(c,2)) { IRQCHK(c); goto L_800D1BFC; } // 800D1C3C
  c->r[0]=0u+0x00000008u; // 800D1C40
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1C44
  goto L_800D1CC4; // 800D1C48
L_800D1C4C:;
  c->r[0]=R32(c->r[13]+0xFFFF8F58u); // 800D1C4C
  cmps(c,0,(int32_t)c->r[0],4); // 800D1C50
  if (crb(c,2)) { goto L_800D1CBC; } // 800D1C54
  if (!crb(c,0)) { goto L_800D1C6C; } // 800D1C58
  cmps(c,0,(int32_t)c->r[0],1); // 800D1C5C
  if (crb(c,2)) { goto L_800D1C84; } // 800D1C60
  if (!crb(c,0)) { goto L_800D1C78; } // 800D1C64
  goto L_800D1CBC; // 800D1C68
L_800D1C6C:;
  cmps(c,0,(int32_t)c->r[0],6); // 800D1C6C
  if (crb(c,2)) { goto L_800D1CA8; } // 800D1C70
  if (!crb(c,0)) { goto L_800D1CBC; } // 800D1C74
L_800D1C78:;
  c->r[3]=c->r[29]+0x000000B0u; // 800D1C78
  c->lr=0x800D1C80u; f_800F3DC0(c); // 800D1C7C
  goto L_800D1CBC; // 800D1C80
L_800D1C84:;
  c->r[0]=R32(c->r[13]+0xFFFFA55Cu); // 800D1C84
  cmps(c,0,(int32_t)c->r[0],0); // 800D1C88
  if (!crb(c,2)) { goto L_800D1CBC; } // 800D1C8C
  c->r[0]=R32(c->r[13]+0xFFFFA558u); // 800D1C90
  cmps(c,0,(int32_t)c->r[0],0); // 800D1C94
  if (!crb(c,2)) { goto L_800D1CBC; } // 800D1C98
  c->r[3]=c->r[29]+0x000000B0u; // 800D1C9C
  c->lr=0x800D1CA4u; f_800F3DC0(c); // 800D1CA0
  goto L_800D1CBC; // 800D1CA4
L_800D1CA8:;
  c->r[0]=R32(c->r[13]+0xFFFFA558u); // 800D1CA8
  cmps(c,0,(int32_t)c->r[0],0); // 800D1CAC
  if (crb(c,2)) { goto L_800D1CBC; } // 800D1CB0
  c->r[3]=c->r[29]+0x000000B0u; // 800D1CB4
  c->lr=0x800D1CBCu; f_800F3DC0(c); // 800D1CB8
L_800D1CBC:;
  c->r[0]=0u+0x00000009u; // 800D1CBC
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 800D1CC0
L_800D1CC4:;
  c->r[11]=c->r[1]+0x00000020u; // 800D1CC4
  c->lr=0x800D1CCCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1CC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1CCC
  c->lr=c->r[0]; // 800D1CD0
  c->r[1]=c->r[1]+0x00000020u; // 800D1CD4
  return; // 800D1CD8
}

// __OSWriteStateFlags
void f_800D1CE0(Ctx* __restrict c) {
  trace_call(0x800D1CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1CE0
  c->r[0]=c->lr; // 800D1CE4
  c->r[4]=c->r[3]|c->r[3]; // 800D1CE8
  c->r[5]=0u+0x00000020u; // 800D1CEC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D1CF0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800D1CF4
  W32(c->r[1]+0x00000098u,c->r[30]); // 800D1CF8
  c->r[30]=0u+0x802F0000u; // 800D1CFC
  c->r[3]=c->r[30]+0xFFFFA400u; // 800D1D00
  c->lr=0x800D1D08u; f_80004364(c); // 800D1D04
  c->r[31]=c->r[30]+0xFFFFA400u; // 800D1D08
  c->r[3]=0u+0x802B0000u; // 800D1D0C
  c->r[6]=R32(c->r[31]+0x00000004u); // 800D1D10
  c->r[3]=c->r[3]+0xFFFFDCA0u; // 800D1D14
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D1D18
  c->r[4]=c->r[1]+0x00000008u; // 800D1D1C
  c->r[5]=0u+0x00000002u; // 800D1D20
  c->r[6]=c->r[6]+c->r[0]; // 800D1D24
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D1D28
  c->r[6]=c->r[6]+c->r[0]; // 800D1D2C
  c->r[0]=R32(c->r[31]+0x00000010u); // 800D1D30
  c->r[6]=c->r[6]+c->r[0]; // 800D1D34
  c->r[0]=R32(c->r[31]+0x00000014u); // 800D1D38
  c->r[6]=c->r[6]+c->r[0]; // 800D1D3C
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D1D40
  c->r[6]=c->r[6]+c->r[0]; // 800D1D44
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800D1D48
  c->r[6]=c->r[6]+c->r[0]; // 800D1D4C
  W32(c->r[30]+0xFFFFA400u,c->r[6]); // 800D1D50
  c->lr=0x800D1D58u; f_800F3B20(c); // 800D1D54
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D58
  if (!crb(c,2)) { goto L_800D1DA0; } // 800D1D5C
  c->r[4]=c->r[31]|c->r[31]; // 800D1D60
  c->r[3]=c->r[1]+0x00000008u; // 800D1D64
  c->r[5]=0u+0x00000020u; // 800D1D68
  c->lr=0x800D1D70u; f_800F32A0(c); // 800D1D6C
  cmpu(c,0,c->r[3],0x00000020u); // 800D1D70
  if (crb(c,2)) { goto L_800D1D88; } // 800D1D74
  c->r[3]=c->r[1]+0x00000008u; // 800D1D78
  c->lr=0x800D1D80u; f_800F3DC0(c); // 800D1D7C
  c->r[3]=0u+0x00000000u; // 800D1D80
  goto L_800D1DAC; // 800D1D84
L_800D1D88:;
  c->r[3]=c->r[1]+0x00000008u; // 800D1D88
  c->lr=0x800D1D90u; f_800F3DC0(c); // 800D1D8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D90
  if (crb(c,2)) { goto L_800D1DA8; } // 800D1D94
  c->r[3]=0u+0x00000000u; // 800D1D98
  goto L_800D1DAC; // 800D1D9C
L_800D1DA0:;
  c->r[3]=0u+0x00000000u; // 800D1DA0
  goto L_800D1DAC; // 800D1DA4
L_800D1DA8:;
  c->r[3]=0u+0x00000001u; // 800D1DA8
L_800D1DAC:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D1DAC
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800D1DB0
  c->r[30]=R32(c->r[1]+0x00000098u); // 800D1DB4
  c->lr=c->r[0]; // 800D1DB8
  c->r[1]=c->r[1]+0x000000A0u; // 800D1DBC
  return; // 800D1DC0
}

// __OSReadStateFlags
void f_800D1DD0(Ctx* __restrict c) {
  trace_call(0x800D1DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1DD0
  c->r[0]=c->lr; // 800D1DD4
  c->r[5]=0u+0x00000001u; // 800D1DD8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D1DDC
  c->r[4]=c->r[1]+0x00000008u; // 800D1DE0
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800D1DE4
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800D1DE8
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800D1DEC
  c->r[29]=0u+0x802B0000u; // 800D1DF0
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800D1DF4
  c->r[28]=c->r[3]|c->r[3]; // 800D1DF8
  c->r[3]=c->r[29]+0xFFFFDCA0u; // 800D1DFC
  c->lr=0x800D1E04u; f_800F3B20(c); // 800D1E00
  cmps(c,0,(int32_t)c->r[3],0); // 800D1E04
  if (!crb(c,2)) { goto L_800D1E54; } // 800D1E08
  c->r[30]=0u+0x802F0000u; // 800D1E0C
  c->r[3]=c->r[1]+0x00000008u; // 800D1E10
  c->r[4]=c->r[30]+0xFFFFA400u; // 800D1E14
  c->r[5]=0u+0x00000020u; // 800D1E18
  c->lr=0x800D1E20u; f_800F31B0(c); // 800D1E1C
  c->r[31]=c->r[3]|c->r[3]; // 800D1E20
  c->r[3]=c->r[1]+0x00000008u; // 800D1E24
  c->lr=0x800D1E2Cu; f_800F3DC0(c); // 800D1E28
  cmpu(c,0,c->r[31],0x00000020u); // 800D1E2C
  if (crb(c,2)) { goto L_800D1E6C; } // 800D1E30
  c->r[3]=c->r[29]+0xFFFFDCA0u; // 800D1E34
  c->lr=0x800D1E3Cu; f_800F2FA0(c); // 800D1E38
  c->r[3]=c->r[28]|c->r[28]; // 800D1E3C
  c->r[4]=0u+0x00000000u; // 800D1E40
  c->r[5]=0u+0x00000020u; // 800D1E44
  c->lr=0x800D1E4Cu; f_800046B4(c); // 800D1E48
  c->r[3]=0u+0x00000000u; // 800D1E4C
  goto L_800D1ED8; // 800D1E50
L_800D1E54:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1E54
  c->r[4]=0u+0x00000000u; // 800D1E58
  c->r[5]=0u+0x00000020u; // 800D1E5C
  c->lr=0x800D1E64u; f_800046B4(c); // 800D1E60
  c->r[3]=0u+0x00000000u; // 800D1E64
  goto L_800D1ED8; // 800D1E68
L_800D1E6C:;
  c->r[4]=c->r[30]+0xFFFFA400u; // 800D1E6C
  c->r[0]=R32(c->r[30]+0xFFFFA400u); // 800D1E70
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D1E74
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D1E78
  c->r[5]=c->r[5]+c->r[3]; // 800D1E7C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800D1E80
  c->r[5]=c->r[5]+c->r[3]; // 800D1E84
  c->r[3]=R32(c->r[4]+0x00000010u); // 800D1E88
  c->r[5]=c->r[5]+c->r[3]; // 800D1E8C
  c->r[3]=R32(c->r[4]+0x00000014u); // 800D1E90
  c->r[5]=c->r[5]+c->r[3]; // 800D1E94
  c->r[3]=R32(c->r[4]+0x00000018u); // 800D1E98
  c->r[5]=c->r[5]+c->r[3]; // 800D1E9C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 800D1EA0
  c->r[5]=c->r[5]+c->r[3]; // 800D1EA4
  cmpu(c,0,c->r[0],c->r[5]); // 800D1EA8
  if (crb(c,2)) { goto L_800D1EC8; } // 800D1EAC
  c->r[3]=c->r[28]|c->r[28]; // 800D1EB0
  c->r[4]=0u+0x00000000u; // 800D1EB4
  c->r[5]=0u+0x00000020u; // 800D1EB8
  c->lr=0x800D1EC0u; f_800046B4(c); // 800D1EBC
  c->r[3]=0u+0x00000000u; // 800D1EC0
  goto L_800D1ED8; // 800D1EC4
L_800D1EC8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1EC8
  c->r[5]=0u+0x00000020u; // 800D1ECC
  c->lr=0x800D1ED4u; f_80004364(c); // 800D1ED0
  c->r[3]=0u+0x00000001u; // 800D1ED4
L_800D1ED8:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D1ED8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800D1EDC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800D1EE0
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800D1EE4
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800D1EE8
  c->lr=c->r[0]; // 800D1EEC
  c->r[1]=c->r[1]+0x000000B0u; // 800D1EF0
  return; // 800D1EF4
}

// __OSInitNet
void f_800D1F00(Ctx* __restrict c) {
  trace_call(0x800D1F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1F00
  c->r[0]=c->lr; // 800D1F04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1F08
  c->r[3]=c->r[1]+0x00000008u; // 800D1F0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1F10
  c->r[31]=0u+0x802B0000u; // 800D1F14
  c->r[31]=c->r[31]+0xFFFFDCC8u; // 800D1F18
  c->lr=0x800D1F20u; f_800C5260(c); // 800D1F1C
  c->r[0]=R8(c->r[1]+0x00000009u); // 800D1F20
  cmpu(c,0,c->r[0],0x00000004u); // 800D1F24
  if (!crb(c,1)) { goto L_800D1FA0; } // 800D1F28
  cmpu(c,0,c->r[0],0x00000009u); // 800D1F2C
  if (!crb(c,2)) { goto L_800D1F38; } // 800D1F30
  goto L_800D1FA0; // 800D1F34
L_800D1F38:;
  c->lr=0x800D1F3Cu; f_8016F3CC(c); // 800D1F38
  cmps(c,0,(int32_t)c->r[3],0); // 800D1F3C
  if (crb(c,2)) { goto L_800D1F74; } // 800D1F40
  if (!crb(c,0)) { goto L_800D1F58; } // 800D1F44
  c->r[4]=c->r[3]|c->r[3]; // 800D1F48
  c->r[3]=c->r[31]+0x00000000u; // 800D1F4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1F50
  c->lr=0x800D1F58u; f_800C8450(c); // 800D1F54
L_800D1F58:;
  c->lr=0x800D1F5Cu; f_8016E684(c); // 800D1F58
  cmps(c,0,(int32_t)c->r[3],0); // 800D1F5C
  if (!crb(c,0)) { goto L_800D1F74; } // 800D1F60
  c->r[4]=c->r[3]|c->r[3]; // 800D1F64
  c->r[3]=c->r[31]+0x00000034u; // 800D1F68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1F6C
  c->lr=0x800D1F74u; f_800C8450(c); // 800D1F70
L_800D1F74:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800D1F74
  cmps(c,0,(int32_t)c->r[0],0); // 800D1F78
  if (!crb(c,2)) { goto L_800D1FA0; } // 800D1F7C
  c->r[3]=0u+0x00000000u; // 800D1F80
  c->lr=0x800D1F88u; f_8016F1C4(c); // 800D1F84
  cmps(c,0,(int32_t)c->r[3],0); // 800D1F88
  if (crb(c,2)) { goto L_800D1FA0; } // 800D1F8C
  c->r[4]=c->r[3]|c->r[3]; // 800D1F90
  c->r[3]=c->r[31]+0x00000068u; // 800D1F94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1F98
  c->lr=0x800D1FA0u; f_800C8450(c); // 800D1F9C
L_800D1FA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1FA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1FA4
  c->lr=c->r[0]; // 800D1FA8
  c->r[1]=c->r[1]+0x00000020u; // 800D1FAC
  return; // 800D1FB0
}

// __OSCreateNandbootInfo
void f_800D1FC0(Ctx* __restrict c) {
  trace_call(0x800D1FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1FC0
  c->r[0]=c->lr; // 800D1FC4
  c->r[3]=0u+0x802B0000u; // 800D1FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1FCC
  c->r[4]=c->r[1]+0x00000008u; // 800D1FD0
  c->r[3]=c->r[3]+0xFFFFDE30u; // 800D1FD4
  c->lr=0x800D1FDCu; f_800F3910(c); // 800D1FD8
  cmps(c,0,(int32_t)c->r[3],0); // 800D1FDC
  if (!crb(c,2)) { goto L_800D1FF8; } // 800D1FE0
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 800D1FE4
  cmpu(c,0,c->r[0],0x0000003Fu); // 800D1FE8
  if (!crb(c,2)) { goto L_800D1FF8; } // 800D1FEC
  c->r[3]=0u+0x00000001u; // 800D1FF0
  goto L_800D2060; // 800D1FF4
L_800D1FF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D1FF8
  if (!crb(c,2)) { goto L_800D2028; } // 800D1FFC
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 800D2000
  cmpu(c,0,c->r[0],0x0000003Fu); // 800D2004
  if (crb(c,2)) { goto L_800D2028; } // 800D2008
  c->r[3]=0u+0x802B0000u; // 800D200C
  c->r[3]=c->r[3]+0xFFFFDE30u; // 800D2010
  c->lr=0x800D2018u; f_800F3050(c); // 800D2014
  cmps(c,0,(int32_t)c->r[3],0); // 800D2018
  if (crb(c,2)) { goto L_800D2038; } // 800D201C
  c->r[3]=0u+0x00000000u; // 800D2020
  goto L_800D2060; // 800D2024
L_800D2028:;
  cmps(c,0,(int32_t)c->r[3],-12); // 800D2028
  if (crb(c,2)) { goto L_800D2038; } // 800D202C
  c->r[3]=0u+0x00000000u; // 800D2030
  goto L_800D2060; // 800D2034
L_800D2038:;
  c->r[3]=0u+0x802B0000u; // 800D2038
  c->r[4]=0u+0x0000003Fu; // 800D203C
  c->r[3]=c->r[3]+0xFFFFDE30u; // 800D2040
  c->r[5]=0u+0x00000000u; // 800D2044
  c->lr=0x800D204Cu; f_800F2DB0(c); // 800D2048
  cmps(c,0,(int32_t)c->r[3],0); // 800D204C
  if (crb(c,2)) { goto L_800D205C; } // 800D2050
  c->r[3]=0u+0x00000000u; // 800D2054
  goto L_800D2060; // 800D2058
L_800D205C:;
  c->r[3]=0u+0x00000001u; // 800D205C
L_800D2060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2060
  c->lr=c->r[0]; // 800D2064
  c->r[1]=c->r[1]+0x00000010u; // 800D2068
  return; // 800D206C
}

// __OSWriteNandbootInfo
void f_800D2070(Ctx* __restrict c) {
  trace_call(0x800D2070u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2070
  c->r[0]=c->lr; // 800D2074
  c->r[8]=c->r[3]+0x00000004u; // 800D2078
  c->r[7]=0u+0x00000000u; // 800D207C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D2080
  c->r[0]=0u+0x00000040u; // 800D2084
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800D2088
  c->r[31]=c->r[3]|c->r[3]; // 800D208C
  c->ctr=c->r[0]; // 800D2090
L_800D2094:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 800D2094
  c->r[0]=R32(c->r[8]+0x00000004u); // 800D2098
  c->r[7]=c->r[7]+c->r[4]; // 800D209C
  c->r[4]=R32(c->r[8]+0x00000008u); // 800D20A0
  c->r[7]=c->r[7]+c->r[0]; // 800D20A4
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D20A8
  c->r[7]=c->r[7]+c->r[4]; // 800D20AC
  c->r[4]=R32(c->r[8]+0x00000010u); // 800D20B0
  c->r[7]=c->r[7]+c->r[0]; // 800D20B4
  c->r[0]=R32(c->r[8]+0x00000014u); // 800D20B8
  c->r[7]=c->r[7]+c->r[4]; // 800D20BC
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D20C0
  c->r[7]=c->r[7]+c->r[0]; // 800D20C4
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800D20C8
  c->r[7]=c->r[7]+c->r[4]; // 800D20CC
  c->r[4]=R32(c->r[8]+0x00000020u); // 800D20D0
  c->r[7]=c->r[7]+c->r[0]; // 800D20D4
  c->r[0]=R32(c->r[8]+0x00000024u); // 800D20D8
  c->r[7]=c->r[7]+c->r[4]; // 800D20DC
  c->r[4]=R32(c->r[8]+0x00000028u); // 800D20E0
  c->r[7]=c->r[7]+c->r[0]; // 800D20E4
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 800D20E8
  c->r[7]=c->r[7]+c->r[4]; // 800D20EC
  c->r[4]=R32(c->r[8]+0x00000030u); // 800D20F0
  c->r[7]=c->r[7]+c->r[0]; // 800D20F4
  c->r[0]=R32(c->r[8]+0x00000034u); // 800D20F8
  c->r[7]=c->r[7]+c->r[4]; // 800D20FC
  c->r[4]=R32(c->r[8]+0x00000038u); // 800D2100
  c->r[7]=c->r[7]+c->r[0]; // 800D2104
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800D2108
  c->r[7]=c->r[7]+c->r[4]; // 800D210C
  c->r[8]=c->r[8]+0x00000040u; // 800D2110
  c->r[7]=c->r[7]+c->r[0]; // 800D2114
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2094; } // 800D2118
  c->r[0]=R32(c->r[8]+0x00000000u); // 800D211C
  c->r[6]=0u+0x802B0000u; // 800D2120
  c->r[5]=R32(c->r[8]+0x00000004u); // 800D2124
  c->r[4]=c->r[1]+0x00000008u; // 800D2128
  c->r[7]=c->r[7]+c->r[0]; // 800D212C
  c->r[0]=R32(c->r[8]+0x00000008u); // 800D2130
  c->r[7]=c->r[7]+c->r[5]; // 800D2134
  c->r[5]=R32(c->r[8]+0x0000000Cu); // 800D2138
  c->r[7]=c->r[7]+c->r[0]; // 800D213C
  c->r[0]=R32(c->r[8]+0x00000010u); // 800D2140
  c->r[7]=c->r[7]+c->r[5]; // 800D2144
  c->r[5]=R32(c->r[8]+0x00000014u); // 800D2148
  c->r[7]=c->r[7]+c->r[0]; // 800D214C
  c->r[0]=R32(c->r[8]+0x00000018u); // 800D2150
  c->r[7]=c->r[7]+c->r[5]; // 800D2154
  c->r[5]=0u+0x00000002u; // 800D2158
  c->r[7]=c->r[7]+c->r[0]; // 800D215C
  W32(c->r[3]+0x00000000u,c->r[7]); // 800D2160
  c->r[3]=c->r[6]+0xFFFFDE30u; // 800D2164
  c->lr=0x800D216Cu; f_800F3BB0(c); // 800D2168
  cmps(c,0,(int32_t)c->r[3],0); // 800D216C
  if (!crb(c,2)) { goto L_800D21B0; } // 800D2170
  c->r[4]=c->r[31]|c->r[31]; // 800D2174
  c->r[3]=c->r[1]+0x00000008u; // 800D2178
  c->r[5]=0u+0x00001020u; // 800D217C
  c->lr=0x800D2184u; f_800F32A0(c); // 800D2180
  cmpu(c,0,c->r[3],0x00001020u); // 800D2184
  if (crb(c,2)) { goto L_800D219C; } // 800D2188
  c->r[3]=c->r[1]+0x00000008u; // 800D218C
  c->lr=0x800D2194u; f_800F3DC0(c); // 800D2190
  c->r[3]=0u+0x00000000u; // 800D2194
  goto L_800D21B4; // 800D2198
L_800D219C:;
  c->r[3]=c->r[1]+0x00000008u; // 800D219C
  c->lr=0x800D21A4u; f_800F3DC0(c); // 800D21A0
  c->r[0]=cntlz(c->r[3]); // 800D21A4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D21A8
  goto L_800D21B4; // 800D21AC
L_800D21B0:;
  c->r[3]=0u+0x00000000u; // 800D21B0
L_800D21B4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D21B4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800D21B8
  c->lr=c->r[0]; // 800D21BC
  c->r[1]=c->r[1]+0x000000A0u; // 800D21C0
  return; // 800D21C4
}

// OSPlayTimeIsLimited
void f_800D21D0(Ctx* __restrict c) {
  trace_call(0x800D21D0u);
  c->r[0]=R32(c->r[13]+0xFFFFA578u); // 800D21D0
  c->r[3]=R32(c->r[13]+0xFFFFA57Cu); // 800D21D4
  c->r[0]=c->r[3]|c->r[0]; // 800D21D8
  c->r[3]=addc(c,c->r[0],0xFFFFFFFFu,0); // 800D21DC
  c->r[3]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800D21E0
  return; // 800D21E4
}

// __OSPlayTimeFadeLastAIDCallback
void f_800D21F0(Ctx* __restrict c) {
  trace_call(0x800D21F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D21F0
  c->r[0]=c->lr; // 800D21F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D21F8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D21FC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D2200
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D2204
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D2208
  c->r[12]=R32(c->r[3]+0x00000490u); // 800D220C
  cmps(c,0,(int32_t)c->r[12],0); // 800D2210
  if (crb(c,2)) { goto L_800D2220; } // 800D2214
  c->ctr=c->r[12]; // 800D2218
  if (true) { c->lr=0x800D2220u; dispatch(c,c->ctr); } // 800D221C
L_800D2220:;
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D2220
  c->r[0]=R32(c->r[3]+0x00000488u); // 800D2224
  cmps(c,0,(int32_t)c->r[0],0); // 800D2228
  if (!crb(c,2)) { goto L_800D2240; } // 800D222C
  c->lr=0x800D2234u; f_800EC060(c); // 800D2230
  c->r[4]=R32(c->r[13]+0xFFFFA568u); // 800D2234
  c->r[0]=c->r[3]+0x80000000u; // 800D2238
  W32(c->r[4]+0x00000484u,c->r[0]); // 800D223C
L_800D2240:;
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D2240
  c->r[0]=R32(c->r[3]+0x00000488u); // 800D2244
  cmpu(c,0,c->r[0],0x00000001u); // 800D2248
  if (!crb(c,2)) { goto L_800D2284; } // 800D224C
  c->r[3]=R32(c->r[3]+0x00000484u); // 800D2250
  c->r[4]=0u+0x00000004u; // 800D2254
  c->lr=0x800D225Cu; f_800C7750(c); // 800D2258
  c->r[4]=R32(c->r[13]+0xFFFFA568u); // 800D225C
  c->r[3]=R32(c->r[4]+0x00000484u); // 800D2260
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800D2264
  c->r[3]=c->r[3]+0x00000002u; // 800D2268
  W16(c->r[4]+0x0000048Cu,c->r[0]); // 800D226C
  W32(c->r[4]+0x00000484u,c->r[3]); // 800D2270
  c->r[4]=R32(c->r[13]+0xFFFFA568u); // 800D2274
  c->r[3]=R32(c->r[4]+0x00000484u); // 800D2278
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800D227C
  W16(c->r[4]+0x0000048Eu,c->r[0]); // 800D2280
L_800D2284:;
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D2284
  c->r[0]=R32(c->r[3]+0x00000488u); // 800D2288
  cmpu(c,0,c->r[0],0x00000001u); // 800D228C
  if (crb(c,0)) { goto L_800D2380; } // 800D2290
  c->r[0]=R32(c->r[3]+0x00000480u); // 800D2294
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)576); // 800D2298
  c->r[31]=c->r[3]+c->r[0]; // 800D229C
  c->r[30]=c->r[31]|c->r[31]; // 800D22A0
  c->lr=0x800D22A8u; f_800EC080(c); // 800D22A4
  c->r[29]=c->r[3]|c->r[3]; // 800D22A8
  {uint32_t ea=c->r[2]+0xFFFF9A48u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D22AC
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[1]=RF64(ea);} // 800D22B0
  c->r[5]=c->r[29]|c->r[29]; // 800D22B4
  c->r[4]=0u+0x43300000u; // 800D22B8
  goto L_800D2340; // 800D22BC
L_800D22C0:;
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D22C0
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 800D22C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D22C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 800D22CC
  W16(c->r[30]+0x00000000u,c->r[0]); // 800D22D0
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D22D4
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D22D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 800D22DC
  W16(c->r[30]+0x00000002u,c->r[0]); // 800D22E0
  c->r[30]=c->r[30]+0x00000004u; // 800D22E4
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D22E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 800D22EC
  c->r[0]=c->r[0]^0x80000000u; // 800D22F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D22F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D22F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D22FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800D2300
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D2304
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D2308
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D230C
  W16(c->r[3]+0x0000048Cu,c->r[0]); // 800D2310
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D2314
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 800D2318
  c->r[0]=c->r[0]^0x80000000u; // 800D231C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D2320
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800D2324
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D2328
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800D232C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D2330
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800D2334
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2338
  W16(c->r[3]+0x0000048Eu,c->r[0]); // 800D233C
L_800D2340:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2340
  if (!crb(c,2)) { IRQCHK(c); goto L_800D22C0; } // 800D2344
  c->r[3]=c->r[31]|c->r[31]; // 800D2348
  c->r[4]=c->r[29]|c->r[29]; // 800D234C
  c->lr=0x800D2354u; f_800C7780(c); // 800D2350
  c->r[3]=c->r[31]|c->r[31]; // 800D2354
  c->r[4]=c->r[29]|c->r[29]; // 800D2358
  c->lr=0x800D2360u; f_800EBFB0(c); // 800D235C
  c->r[4]=R32(c->r[13]+0xFFFFA568u); // 800D2360
  c->r[3]=R32(c->r[4]+0x00000480u); // 800D2364
  c->r[0]=c->r[3]+0x00000001u; // 800D2368
  W32(c->r[4]+0x00000480u,c->r[0]); // 800D236C
  c->r[3]=R32(c->r[13]+0xFFFFA568u); // 800D2370
  c->r[0]=R32(c->r[3]+0x00000480u); // 800D2374
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D2378
  W32(c->r[3]+0x00000480u,c->r[0]); // 800D237C
L_800D2380:;
  c->r[4]=R32(c->r[13]+0xFFFFA568u); // 800D2380
  c->r[3]=R32(c->r[4]+0x00000488u); // 800D2384
  c->r[0]=c->r[3]+0x00000001u; // 800D2388
  W32(c->r[4]+0x00000488u,c->r[0]); // 800D238C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D2390
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D2394
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D2398
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D239C
  c->lr=c->r[0]; // 800D23A0
  c->r[1]=c->r[1]+0x00000040u; // 800D23A4
  return; // 800D23A8
}

// __OSWriteExpiredFlag
void f_800D23B0(Ctx* __restrict c) {
  trace_call(0x800D23B0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D23B0
  c->r[12]=c->r[1]|c->r[1]; // 800D23B4
  c->r[11]=addc(c,~c->r[11],0xFFFFFF00u,1); // 800D23B8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D23BC
  c->r[0]=c->lr; // 800D23C0
  c->r[3]=0u+0x802B0000u; // 800D23C4
  c->r[5]=0u+0x00000000u; // 800D23C8
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D23CC
  c->r[3]=c->r[3]+0xFFFFDE50u; // 800D23D0
  c->r[4]=0u+0x0000003Fu; // 800D23D4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D23D8
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D23DC
  c->r[30]=0u+0x00000000u; // 800D23E0
  c->lr=0x800D23E8u; f_800F2DB0(c); // 800D23E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D23E8
  c->r[31]=c->r[3]|c->r[3]; // 800D23EC
  if (crb(c,2)) { goto L_800D23FC; } // 800D23F0
  cmps(c,0,(int32_t)c->r[3],-6); // 800D23F4
  if (!crb(c,2)) { goto L_800D2484; } // 800D23F8
L_800D23FC:;
  c->r[3]=0u+0x802B0000u; // 800D23FC
  c->r[4]=c->r[1]+0x00000040u; // 800D2400
  c->r[3]=c->r[3]+0xFFFFDE50u; // 800D2404
  c->r[5]=0u+0x00000002u; // 800D2408
  c->lr=0x800D2410u; f_800F3BB0(c); // 800D240C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2410
  c->r[31]=c->r[3]|c->r[3]; // 800D2414
  if (!crb(c,2)) { goto L_800D2484; } // 800D2418
  c->r[30]=0u+0x00000001u; // 800D241C
  c->lr=0x800D2424u; f_800F9610(c); // 800D2420
  cmps(c,0,(int32_t)c->r[3],0); // 800D2424
  c->r[31]=c->r[3]|c->r[3]; // 800D2428
  if (!crb(c,2)) { goto L_800D2484; } // 800D242C
  c->r[3]=c->r[1]+0x00000020u; // 800D2430
  c->r[4]=0u+0x00000000u; // 800D2434
  c->r[5]=0u+0x00000020u; // 800D2438
  c->lr=0x800D2440u; f_800046B4(c); // 800D243C
  c->r[3]=c->r[1]+0x00000020u; // 800D2440
  c->lr=0x800D2448u; f_800F9DF0(c); // 800D2444
  cmps(c,0,(int32_t)c->r[3],0); // 800D2448
  c->r[31]=c->r[3]|c->r[3]; // 800D244C
  if (!crb(c,2)) { goto L_800D2484; } // 800D2450
  c->r[3]=c->r[1]+0x00000040u; // 800D2454
  c->r[4]=c->r[1]+0x00000020u; // 800D2458
  c->r[5]=0u+0x00000020u; // 800D245C
  c->lr=0x800D2464u; f_800F32A0(c); // 800D2460
  cmps(c,0,(int32_t)c->r[3],0); // 800D2464
  c->r[31]=c->r[3]|c->r[3]; // 800D2468
  if (crb(c,0)) { goto L_800D2484; } // 800D246C
  cmps(c,0,(int32_t)c->r[3],32); // 800D2470
  if (crb(c,2)) { goto L_800D2480; } // 800D2474
  c->r[31]=0u+0xFFFFFFF8u; // 800D2478
  goto L_800D2484; // 800D247C
L_800D2480:;
  c->r[31]=0u+0x00000000u; // 800D2480
L_800D2484:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D2484
  if (crb(c,2)) { goto L_800D2494; } // 800D2488
  c->r[3]=c->r[1]+0x00000040u; // 800D248C
  c->lr=0x800D2494u; f_800F3DC0(c); // 800D2490
L_800D2494:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D2494
  if (!crb(c,2)) { goto L_800D24A4; } // 800D2498
  c->r[3]=0u+0x00000001u; // 800D249C
  goto L_800D24A8; // 800D24A0
L_800D24A4:;
  c->r[3]=0u+0x00000000u; // 800D24A4
L_800D24A8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D24A8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D24AC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D24B0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D24B4
  c->lr=c->r[0]; // 800D24B8
  c->r[1]=c->r[10]|c->r[10]; // 800D24BC
  return; // 800D24C0
}

// __OSWriteExpiredFlagIfSet
void f_800D24D0(Ctx* __restrict c) {
  trace_call(0x800D24D0u);
  c->r[0]=R32(c->r[13]+0xFFFFA56Cu); // 800D24D0
  cmps(c,0,(int32_t)c->r[0],0); // 800D24D4
  if (crb(c,2)) { goto L_800D24E0; } // 800D24D8
  f_800D23B0(c); return; // 800D24DC
L_800D24E0:;
  c->r[3]=0u+0x00000000u; // 800D24E0
  return; // 800D24E4
}

// __OSPlayTimeRebootThread
void f_800D24F0(Ctx* __restrict c) {
  trace_call(0x800D24F0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D24F0
  c->r[12]=c->r[1]|c->r[1]; // 800D24F4
  c->r[11]=addc(c,~c->r[11],0xFFFFFB20u,1); // 800D24F8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D24FC
  c->r[0]=c->lr; // 800D2500
  c->r[4]=0u+0x00000000u; // 800D2504
  c->r[5]=0u+0x00000494u; // 800D2508
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D250C
  c->r[3]=c->r[1]+0x00000020u; // 800D2510
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D2514
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D2518
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D251C
  W32(c->r[13]+0xFFFFA568u,c->r[3]); // 800D2520
  c->lr=0x800D2528u; f_800046B4(c); // 800D2524
  c->r[3]=0u+0x800D0000u; // 800D2528
  c->r[3]=c->r[3]+0x000021F0u; // 800D252C
  c->lr=0x800D2534u; f_800EBF60(c); // 800D2530
  c->r[5]=R32(c->r[13]+0xFFFFA568u); // 800D2534
  c->r[4]=0u+0xCCCD0000u; // 800D2538
  c->r[31]=c->r[4]+0xFFFFCCCDu; // 800D253C
  c->r[30]=0u+0x00000000u; // 800D2540
  W32(c->r[5]+0x00000490u,c->r[3]); // 800D2544
L_800D2548:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[31]*(uint64_t)c->r[30])>>32); // 800D2548
  c->r[3]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D254C
  c->r[29]=c->r[3]+0x00000001u; // 800D2550
  cmpu(c,0,c->r[29],0x00000007u); // 800D2554
  if (!crb(c,1)) { goto L_800D2560; } // 800D2558
  c->r[29]=0u+0x00000007u; // 800D255C
L_800D2560:;
  c->lr=0x800D2564u; f_800D80F0(c); // 800D2560
  c->r[4]=c->r[29]|c->r[29]; // 800D2564
  c->r[5]=c->r[29]|c->r[29]; // 800D2568
  c->r[3]=0u+0x00000001u; // 800D256C
  c->lr=0x800D2574u; f_800D1270(c); // 800D2570
  c->r[30]=c->r[30]+0x00000001u; // 800D2574
  cmpu(c,0,c->r[30],0x00000014u); // 800D2578
  if (crb(c,0)) { IRQCHK(c); goto L_800D2548; } // 800D257C
  c->r[3]=0u+0x00000000u; // 800D2580
  c->lr=0x800D2588u; f_800EBF60(c); // 800D2584
  c->r[3]=0u+0x00000001u; // 800D2588
  c->lr=0x800D2590u; f_800D9250(c); // 800D258C
  c->lr=0x800D2594u; f_800D90B0(c); // 800D2590
  c->lr=0x800D2598u; f_800CBAA0(c); // 800D2594
  c->r[0]=R32(c->r[13]+0xFFFFA56Cu); // 800D2598
  c->r[31]=c->r[3]|c->r[3]; // 800D259C
  cmps(c,0,(int32_t)c->r[0],0); // 800D25A0
  if (crb(c,2)) { goto L_800D25AC; } // 800D25A4
  c->lr=0x800D25ACu; f_800D23B0(c); // 800D25A8
L_800D25AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D25AC
  c->lr=0x800D25B4u; f_800CBAE0(c); // 800D25B0
  c->lr=0x800D25B8u; f_800CD9A0(c); // 800D25B4
  c->r[3]=0u+0x00000000u; // 800D25B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D25BC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D25C0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D25C4
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800D25C8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D25CC
  c->lr=c->r[0]; // 800D25D0
  c->r[1]=c->r[10]|c->r[10]; // 800D25D4
  return; // 800D25D8
}

// __OSPlayTimeAlarmExpired
void f_800D25E0(Ctx* __restrict c) {
  trace_call(0x800D25E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D25E0
  c->r[0]=c->lr; // 800D25E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D25E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D25EC
  c->r[12]=R32(c->r[13]+0xFFFFA570u); // 800D25F0
  cmps(c,0,(int32_t)c->r[12],0); // 800D25F4
  if (crb(c,2)) { goto L_800D2608; } // 800D25F8
  c->ctr=c->r[12]; // 800D25FC
  if (true) { c->lr=0x800D2604u; dispatch(c,c->ctr); } // 800D2600
  goto L_800D266C; // 800D2604
L_800D2608:;
  c->r[3]=0u+0x80000000u; // 800D2608
  c->r[31]=R32(c->r[3]+0x000000DCu); // 800D260C
  goto L_800D2620; // 800D2610
L_800D2614:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2614
  c->lr=0x800D261Cu; f_800CF850(c); // 800D2618
  c->r[31]=R32(c->r[31]+0x000002FCu); // 800D261C
L_800D2620:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D2620
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2614; } // 800D2624
  c->r[3]=0u+0x80000000u; // 800D2628
  c->r[4]=0u+0x800D0000u; // 800D262C
  c->r[3]=R32(c->r[3]+0x00003128u); // 800D2630
  c->r[4]=c->r[4]+0x000024F0u; // 800D2634
  c->r[5]=0u+0x00000000u; // 800D2638
  c->r[7]=0u+0x00001000u; // 800D263C
  c->r[31]=c->r[3]+0xFFFFECE0u; // 800D2640
  c->r[8]=0u+0x00000000u; // 800D2644
  c->r[9]=0u+0x00000000u; // 800D2648
  c->r[3]=c->r[31]|c->r[31]; // 800D264C
  c->r[6]=c->r[31]+0x00001320u; // 800D2650
  c->lr=0x800D2658u; f_800CEF20(c); // 800D2654
  cmps(c,0,(int32_t)c->r[3],0); // 800D2658
  if (!crb(c,2)) { goto L_800D2664; } // 800D265C
  c->lr=0x800D2664u; f_800CDAD0(c); // 800D2660
L_800D2664:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2664
  c->lr=0x800D266Cu; f_800CF5B0(c); // 800D2668
L_800D266C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D266C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2670
  c->lr=c->r[0]; // 800D2674
  c->r[1]=c->r[1]+0x00000010u; // 800D2678
  return; // 800D267C
}

// __OSGetPlayTime
void f_800D2680(Ctx* __restrict c) {
  trace_call(0x800D2680u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D2680
  c->r[12]=c->r[1]|c->r[1]; // 800D2684
  c->r[11]=addc(c,~c->r[11],0xFFFFFE80u,1); // 800D2688
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D268C
  c->r[0]=c->lr; // 800D2690
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D2694
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 800D2698
  c->r[0]=0u+0x00000000u; // 800D269C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D26A0
  c->r[31]=c->r[5]|c->r[5]; // 800D26A4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D26A8
  c->r[30]=0u+0x00000000u; // 800D26AC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D26B0
  c->r[29]=c->r[4]|c->r[4]; // 800D26B4
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 800D26B8
  c->r[28]=c->r[3]|c->r[3]; // 800D26BC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D26C0
  if (crb(c,2)) { goto L_800D26DC; } // 800D26C4
  c->r[4]=c->r[28]|c->r[28]; // 800D26C8
  c->r[3]=c->r[1]+0x00000080u; // 800D26CC
  c->r[5]=0u+0x000000D8u; // 800D26D0
  c->lr=0x800D26D8u; f_80004364(c); // 800D26D4
  c->r[28]=c->r[1]+0x00000080u; // 800D26D8
L_800D26DC:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800D26DC
  c->r[6]=c->r[1]+0x00000020u; // 800D26E0
  c->r[4]=R32(c->r[28]+0x00000008u); // 800D26E4
  c->r[5]=0u+0x00000000u; // 800D26E8
  c->lr=0x800D26F0u; f_800F9E90(c); // 800D26EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D26F0
  if (crb(c,1)) { goto L_800D2724; } // 800D26F4
  if (crb(c,2)) { goto L_800D2700; } // 800D26F8
  goto L_800D2724; // 800D26FC
L_800D2700:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D2700
  cmps(c,0,(int32_t)c->r[0],0); // 800D2704
  if (crb(c,2)) { goto L_800D2724; } // 800D2708
  c->r[3]=R32(c->r[28]+0x00000004u); // 800D270C
  c->r[5]=c->r[1]+0x00000040u; // 800D2710
  c->r[4]=R32(c->r[28]+0x00000008u); // 800D2714
  c->r[6]=c->r[1]+0x00000020u; // 800D2718
  c->lr=0x800D2720u; f_800F9E90(c); // 800D271C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2720
L_800D2724:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2724
  if (!crb(c,2)) { goto L_800D2828; } // 800D2728
  c->r[0]=0u+0x00000008u; // 800D272C
  c->r[5]=0u+0x00000000u; // 800D2730
  c->r[4]=0u+0x00000000u; // 800D2734
  c->ctr=c->r[0]; // 800D2738
  c->r[0]=c->r[0]|0x00000000u; // 800D273C
L_800D2740:;
  c->r[6]=c->r[28]+c->r[4]; // 800D2740
  c->r[0]=R32(c->r[6]+0x00000098u); // 800D2744
  cmpu(c,0,c->r[0],0x00000001u); // 800D2748
  if (!crb(c,2)) { goto L_800D27A0; } // 800D274C
  c->r[0]=0u+0x00000001u; // 800D2750
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D2754
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D2758
  cmps(c,0,(int32_t)c->r[0],0); // 800D275C
  if (!crb(c,2)) { goto L_800D2770; } // 800D2760
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 800D2764
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D2768
  goto L_800D2828; // 800D276C
L_800D2770:;
  c->r[5]=c->r[1]+0x00000040u; // 800D2770
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 800D2774
  c->r[4]=c->r[5]+c->r[4]; // 800D2778
  c->r[4]=R32(c->r[4]+0x00000004u); // 800D277C
  cmpu(c,0,c->r[4],c->r[0]); // 800D2780
  if (crb(c,0)) { goto L_800D2794; } // 800D2784
  c->r[0]=0u+0x00000000u; // 800D2788
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D278C
  goto L_800D2828; // 800D2790
L_800D2794:;
  c->r[0]=c->r[0]-c->r[4]; // 800D2794
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D2798
  goto L_800D2828; // 800D279C
L_800D27A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D27A0
  if (crb(c,2)) { goto L_800D27AC; } // 800D27A4
  c->r[30]=c->r[5]+0x00000001u; // 800D27A8
L_800D27AC:;
  c->r[5]=c->r[5]+0x00000001u; // 800D27AC
  c->r[4]=c->r[4]+0x00000008u; // 800D27B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2740; } // 800D27B4
  cmps(c,0,(int32_t)c->r[30],0); // 800D27B8
  if (!crb(c,2)) { goto L_800D27D4; } // 800D27BC
  c->r[0]=0u+0x00000000u; // 800D27C0
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D27C4
  c->r[0]=0u+0xFFFFFFFFu; // 800D27C8
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D27CC
  goto L_800D2828; // 800D27D0
L_800D27D4:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800D27D4
  c->r[6]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800D27D8
  c->r[4]=c->r[28]+c->r[6]; // 800D27DC
  c->r[0]=R32(c->r[4]+0x00000098u); // 800D27E0
  cmpu(c,0,c->r[0],0x00000004u); // 800D27E4
  if (!crb(c,2)) { goto L_800D2820; } // 800D27E8
  c->r[0]=0u+0x00000004u; // 800D27EC
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D27F0
  c->r[5]=R32(c->r[4]+0x0000009Cu); // 800D27F4
  W32(c->r[31]+0x00000000u,c->r[5]); // 800D27F8
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D27FC
  cmps(c,0,(int32_t)c->r[0],0); // 800D2800
  if (crb(c,2)) { goto L_800D2828; } // 800D2804
  c->r[0]=c->r[1]+0x00000040u; // 800D2808
  c->r[4]=c->r[0]+c->r[6]; // 800D280C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D2810
  c->r[0]=c->r[5]-c->r[0]; // 800D2814
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D2818
  goto L_800D2828; // 800D281C
L_800D2820:;
  c->r[0]=0u+0x00000009u; // 800D2820
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D2824
L_800D2828:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D2828
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D282C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D2830
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D2834
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800D2838
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 800D283C
  c->lr=c->r[0]; // 800D2840
  c->r[1]=c->r[10]|c->r[10]; // 800D2844
  return; // 800D2848
}

// __OSInitPlayTime
void f_800D2850(Ctx* __restrict c) {
  trace_call(0x800D2850u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D2850
  c->r[12]=c->r[1]|c->r[1]; // 800D2854
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 800D2858
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D285C
  c->r[0]=c->lr; // 800D2860
  c->r[3]=0u+0x00000000u; // 800D2864
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D2868
  c->r[0]=0u+0x00000001u; // 800D286C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D2870
  W32(c->r[13]+0xFFFFA57Cu,c->r[3]); // 800D2874
  W32(c->r[13]+0xFFFFA578u,c->r[3]); // 800D2878
  W32(c->r[13]+0xFFFFA570u,c->r[3]); // 800D287C
  W32(c->r[13]+0xFFFFA56Cu,c->r[0]); // 800D2880
  c->lr=0x800D2888u; f_800F9610(c); // 800D2884
  cmps(c,0,(int32_t)c->r[3],0); // 800D2888
  if (crb(c,2)) { goto L_800D2894; } // 800D288C
  goto L_800D298C; // 800D2890
L_800D2894:;
  c->r[4]=c->r[1]+0x00000040u; // 800D2894
  c->r[3]=0u+0x00000000u; // 800D2898
  c->lr=0x800D28A0u; f_800F9AA0(c); // 800D289C
  cmps(c,0,(int32_t)c->r[3],-1017); // 800D28A0
  if (crb(c,2)) { goto L_800D28C4; } // 800D28A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D28A8
  if (crb(c,2)) { goto L_800D28B4; } // 800D28AC
  goto L_800D28C4; // 800D28B0
L_800D28B4:;
  c->r[3]=c->r[1]+0x00000040u; // 800D28B4
  c->r[4]=c->r[1]+0x00000020u; // 800D28B8
  c->r[5]=c->r[1]+0x00000024u; // 800D28BC
  c->lr=0x800D28C4u; f_800D2680(c); // 800D28C0
L_800D28C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D28C4
  if (crb(c,2)) { goto L_800D28D8; } // 800D28C8
  cmps(c,0,(int32_t)c->r[3],-1017); // 800D28CC
  if (crb(c,2)) { goto L_800D298C; } // 800D28D0
  goto L_800D298C; // 800D28D4
L_800D28D8:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D28D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D28DC
  if (crb(c,2)) { goto L_800D298C; } // 800D28E0
  cmps(c,0,(int32_t)c->r[0],1); // 800D28E4
  if (!crb(c,2)) { goto L_800D298C; } // 800D28E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D28EC
  cmps(c,0,(int32_t)c->r[0],0); // 800D28F0
  if (!crb(c,2)) { goto L_800D2910; } // 800D28F4
  c->r[3]=0u+0x802B0000u; // 800D28F8
  c->r[4]=0u+0x000002E1u; // 800D28FC
  c->r[3]=c->r[3]+0xFFFFDE64u; // 800D2900
  c->r[5]=c->r[13]+0xFFFF8F60u; // 800D2904
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2908
  c->lr=0x800D2910u; f_800C84E0(c); // 800D290C
L_800D2910:;
  c->r[31]=0u+0x802F0000u; // 800D2910
  c->r[3]=c->r[31]+0xFFFFA420u; // 800D2914
  c->lr=0x800D291Cu; f_800C66D0(c); // 800D2918
  c->r[3]=0u+0x80000000u; // 800D291C
  c->r[7]=0u+0x800D0000u; // 800D2920
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D2924
  c->r[4]=0u+0x00000014u; // 800D2928
  c->r[5]=R32(c->r[1]+0x00000024u); // 800D292C
  c->r[9]=0u+0x00000000u; // 800D2930
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D2934
  c->r[3]=c->r[31]+0xFFFFA420u; // 800D2938
  c->r[8]=addc(c,c->r[5],c->r[4],0); // 800D293C
  c->r[7]=c->r[7]+0x000025E0u; // 800D2940
  c->r[0]=addc(c,c->r[9],c->r[9],c->xer_ca); // 800D2944
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800D2948
  c->r[4]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[6])>>32); // 800D294C
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[9]); // 800D2950
  c->r[4]=c->r[4]+c->r[5]; // 800D2954
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 800D2958
  c->r[5]=c->r[4]+c->r[0]; // 800D295C
  c->lr=0x800D2964u; f_800C6930(c); // 800D2960
  c->r[4]=c->r[31]+0xFFFFA420u; // 800D2964
  c->r[3]=0u+0x802B0000u; // 800D2968
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D296C
  c->r[3]=c->r[3]+0xFFFFDE74u; // 800D2970
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800D2974
  W32(c->r[13]+0xFFFFA57Cu,c->r[4]); // 800D2978
  c->r[4]=R32(c->r[1]+0x00000024u); // 800D297C
  W32(c->r[13]+0xFFFFA578u,c->r[0]); // 800D2980
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2984
  c->lr=0x800D298Cu; f_800C8450(c); // 800D2988
L_800D298C:;
  c->lr=0x800D2990u; f_800F9670(c); // 800D298C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D2990
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D2994
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D2998
  c->lr=c->r[0]; // 800D299C
  c->r[1]=c->r[10]|c->r[10]; // 800D29A0
  return; // 800D29A4
}

// fn_800D29B0
void f_800D29B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D29B0
  c->r[0]=c->lr; // 800D29B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D29B8
  c->r[11]=c->r[1]+0x00000030u; // 800D29BC
  c->lr=0x800D29C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D29C0
  c->r[25]=c->r[4]|c->r[4]; // 800D29C4
  c->r[29]=c->r[5]|c->r[5]; // 800D29C8
  c->r[30]=c->r[3]|c->r[3]; // 800D29CC
  c->r[4]=0u+0x00000000u; // 800D29D0
  c->r[5]=0u+0x00002000u; // 800D29D4
  c->lr=0x800D29DCu; f_800046B4(c); // 800D29D8
  cmps(c,0,(int32_t)c->r[25],0); // 800D29DC
  if (!crb(c,2)) { goto L_800D29F0; } // 800D29E0
  c->r[0]=0u+0x00000000u; // 800D29E4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D29E8
  goto L_800D2B14; // 800D29EC
L_800D29F0:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D29F0
  c->r[31]=c->r[25]|c->r[25]; // 800D29F4
  c->r[26]=c->r[30]+0x00002000u; // 800D29F8
  c->r[28]=c->r[29]+c->r[0]; // 800D29FC
  goto L_800D2A2C; // 800D2A00
L_800D2A04:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 800D2A04
  c->r[3]=c->r[27]|c->r[27]; // 800D2A08
  c->lr=0x800D2A10u; f_80216B70(c); // 800D2A0C
  c->r[0]=c->r[3]+0x00000001u; // 800D2A10
  c->r[4]=c->r[27]|c->r[27]; // 800D2A14
  c->r[26]=c->r[26]-c->r[0]; // 800D2A18
  c->r[3]=c->r[26]|c->r[26]; // 800D2A1C
  c->lr=0x800D2A24u; f_8021FF8C(c); // 800D2A20
  c->r[0]=c->r[26]-c->r[30]; // 800D2A24
  W32(c->r[28]+0x00000000u,c->r[0]); // 800D2A28
L_800D2A2C:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 800D2A2C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 800D2A30
  if (!crb(c,0)) { IRQCHK(c); goto L_800D2A04; } // 800D2A34
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 800D2A38
  c->r[0]=c->r[26]-c->r[30]; // 800D2A3C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D2A40
  c->r[7]=0u+0x00000000u; // 800D2A44
  c->r[6]=c->r[30]+c->r[4]; // 800D2A48
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D2A4C
  c->r[6]=c->r[6]-c->r[0]; // 800D2A50
  if (crb(c,2)) { goto L_800D2B04; } // 800D2A54
  cmpu(c,0,c->r[3],0x00000008u); // 800D2A58
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 800D2A5C
  if (!crb(c,1)) { goto L_800D2AD0; } // 800D2A60
  c->r[0]=c->r[3]+0x00000007u; // 800D2A64
  c->r[4]=c->r[29]|c->r[29]; // 800D2A68
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D2A6C
  c->r[5]=c->r[6]|c->r[6]; // 800D2A70
  c->ctr=c->r[0]; // 800D2A74
  cmpu(c,0,c->r[3],0x00000000u); // 800D2A78
  if (!crb(c,1)) { goto L_800D2AD0; } // 800D2A7C
L_800D2A80:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D2A80
  c->r[7]=c->r[7]+0x00000008u; // 800D2A84
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D2A88
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D2A8C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800D2A90
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D2A94
  W32(c->r[5]+0x00000008u,c->r[0]); // 800D2A98
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D2A9C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800D2AA0
  c->r[0]=R32(c->r[4]+0x00000010u); // 800D2AA4
  W32(c->r[5]+0x00000010u,c->r[0]); // 800D2AA8
  c->r[0]=R32(c->r[4]+0x00000014u); // 800D2AAC
  W32(c->r[5]+0x00000014u,c->r[0]); // 800D2AB0
  c->r[0]=R32(c->r[4]+0x00000018u); // 800D2AB4
  W32(c->r[5]+0x00000018u,c->r[0]); // 800D2AB8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800D2ABC
  c->r[4]=c->r[4]+0x00000020u; // 800D2AC0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800D2AC4
  c->r[5]=c->r[5]+0x00000020u; // 800D2AC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2A80; } // 800D2ACC
L_800D2AD0:;
  c->r[3]=c->r[31]+0x00000001u; // 800D2AD0
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D2AD4
  c->r[0]=c->r[3]-c->r[7]; // 800D2AD8
  c->r[4]=c->r[29]+c->r[5]; // 800D2ADC
  c->r[5]=c->r[6]+c->r[5]; // 800D2AE0
  c->ctr=c->r[0]; // 800D2AE4
  cmpu(c,0,c->r[7],c->r[3]); // 800D2AE8
  if (!crb(c,0)) { goto L_800D2B04; } // 800D2AEC
L_800D2AF0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D2AF0
  c->r[4]=c->r[4]+0x00000004u; // 800D2AF4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D2AF8
  c->r[5]=c->r[5]+0x00000004u; // 800D2AFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2AF0; } // 800D2B00
L_800D2B04:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 800D2B04
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 800D2B08
  c->r[0]=c->r[0]-c->r[30]; // 800D2B0C
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D2B10
L_800D2B14:;
  c->r[11]=c->r[1]+0x00000030u; // 800D2B14
  c->r[3]=0u+0x00000001u; // 800D2B18
  c->lr=0x800D2B20u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2B1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2B20
  c->lr=c->r[0]; // 800D2B24
  c->r[1]=c->r[1]+0x00000030u; // 800D2B28
  return; // 800D2B2C
}

// fn_800D2B30
void f_800D2B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2B30
  c->r[0]=c->lr; // 800D2B34
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D2B38
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800D2B3C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800D2B40
  c->r[30]=c->r[5]|c->r[5]; // 800D2B44
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800D2B48
  c->r[29]=c->r[3]|c->r[3]; // 800D2B4C
  c->r[3]=c->r[1]+0x00000054u; // 800D2B50
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800D2B54
  c->r[28]=c->r[4]|c->r[4]; // 800D2B58
  c->lr=0x800D2B60u; f_800F4FE0(c); // 800D2B5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2B60
  if (crb(c,2)) { goto L_800D2B70; } // 800D2B64
  c->r[3]=0u+0x00000000u; // 800D2B68
  goto L_800D2C24; // 800D2B6C
L_800D2B70:;
  c->r[3]=c->r[1]+0x00000054u; // 800D2B70
  c->r[4]=c->r[1]+0x00000008u; // 800D2B74
  c->lr=0x800D2B7Cu; f_800F38A0(c); // 800D2B78
  cmps(c,0,(int32_t)c->r[3],0); // 800D2B7C
  if (crb(c,2)) { goto L_800D2B8C; } // 800D2B80
  c->r[3]=0u+0x00000000u; // 800D2B84
  goto L_800D2C24; // 800D2B88
L_800D2B8C:;
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 800D2B8C
  cmpu(c,0,c->r[31],0x00000002u); // 800D2B90
  if (!crb(c,2)) { goto L_800D2BC4; } // 800D2B94
  c->lr=0x800D2B9Cu; f_800C6650(c); // 800D2B98
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D2B9C
  cmpu(c,0,c->r[0],0x00000080u); // 800D2BA0
  if (!crb(c,2)) { goto L_800D2BC4; } // 800D2BA4
  c->lr=0x800D2BACu; f_800C52D0(c); // 800D2BA8
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 800D2BAC
  c->r[0]=c->r[3]+0xF0000000u; // 800D2BB0
  cmpu(c,0,c->r[0],0x00000000u); // 800D2BB4
  if (!crb(c,2)) { goto L_800D2BC4; } // 800D2BB8
  c->lr=0x800D2BC0u; f_800E8330(c); // 800D2BBC
  c->r[31]=R16(c->r[3]+0x00000004u); // 800D2BC0
L_800D2BC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D2BC4
  if (crb(c,2)) { goto L_800D2BD8; } // 800D2BC8
  c->lr=0x800D2BD0u; f_800E8330(c); // 800D2BCC
  c->r[0]=R16(c->r[3]+0x00000004u); // 800D2BD0
  goto L_800D2C18; // 800D2BD4
L_800D2BD8:;
  c->r[0]=0u+0xFFFFFFFFu; // 800D2BD8
  c->r[4]=0u+0x802B0000u; // 800D2BDC
  c->r[3]=c->r[1]+0x00000010u; // 800D2BE0
  c->r[4]=c->r[4]+0xFFFFDE90u; // 800D2BE4
  c->r[5]=c->r[29]&c->r[0]; // 800D2BE8
  c->r[6]=c->r[28]&c->r[0]; // 800D2BEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2BF0
  c->lr=0x800D2BF8u; f_8021E904(c); // 800D2BF4
  c->r[3]=c->r[1]+0x00000010u; // 800D2BF8
  c->r[4]=c->r[1]+0x00000008u; // 800D2BFC
  c->lr=0x800D2C04u; f_800F38A0(c); // 800D2C00
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C04
  if (crb(c,2)) { goto L_800D2C14; } // 800D2C08
  c->r[3]=0u+0x00000000u; // 800D2C0C
  goto L_800D2C24; // 800D2C10
L_800D2C14:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 800D2C14
L_800D2C18:;
  c->r[0]=c->r[0]-c->r[31]; // 800D2C18
  c->r[0]=cntlz(c->r[0]); // 800D2C1C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D2C20
L_800D2C24:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D2C24
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800D2C28
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800D2C2C
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800D2C30
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800D2C34
  c->lr=c->r[0]; // 800D2C38
  c->r[1]=c->r[1]+0x000000B0u; // 800D2C3C
  return; // 800D2C40
}

// fn_800D2C50
void f_800D2C50(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D2C50
  c->r[12]=c->r[1]|c->r[1]; // 800D2C54
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 800D2C58
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2C5C
  c->r[0]=c->lr; // 800D2C60
  c->r[5]=0u+0x00000000u; // 800D2C64
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D2C68
  c->r[0]=0u+0x00000000u; // 800D2C6C
  c->r[6]=c->r[1]+0x00000028u; // 800D2C70
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D2C74
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D2C78
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D2C7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2C80
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D2C84
  c->r[30]=R32(c->r[3]+0x00000008u); // 800D2C88
  c->r[31]=R32(c->r[3]+0x00000004u); // 800D2C8C
  c->r[4]=c->r[30]|c->r[30]; // 800D2C90
  c->r[3]=c->r[31]|c->r[31]; // 800D2C94
  c->lr=0x800D2C9Cu; f_800F9980(c); // 800D2C98
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C9C
  if (!crb(c,2)) { goto L_800D2CB0; } // 800D2CA0
  c->r[0]=R32(c->r[1]+0x00000028u); // 800D2CA4
  cmpu(c,0,c->r[0],0x00000001u); // 800D2CA8
  if (crb(c,2)) { goto L_800D2CB8; } // 800D2CAC
L_800D2CB0:;
  c->r[3]=0u+0x00000000u; // 800D2CB0
  goto L_800D2D08; // 800D2CB4
L_800D2CB8:;
  c->r[0]=0u+0xFFFFFFFFu; // 800D2CB8
  c->r[4]=0u+0x802B0000u; // 800D2CBC
  c->r[3]=c->r[1]+0x00000040u; // 800D2CC0
  c->r[4]=c->r[4]+0xFFFFDEA8u; // 800D2CC4
  c->r[5]=c->r[31]&c->r[0]; // 800D2CC8
  c->r[6]=c->r[30]&c->r[0]; // 800D2CCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2CD0
  c->lr=0x800D2CD8u; f_8021E904(c); // 800D2CD4
  c->r[3]=c->r[1]+0x00000040u; // 800D2CD8
  c->r[4]=c->r[1]+0x00000024u; // 800D2CDC
  c->r[5]=c->r[1]+0x00000020u; // 800D2CE0
  c->lr=0x800D2CE8u; f_800F5520(c); // 800D2CE4
  cmps(c,0,(int32_t)c->r[3],0); // 800D2CE8
  if (!crb(c,2)) { goto L_800D2CFC; } // 800D2CEC
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D2CF0
  cmpu(c,0,c->r[0],0x00000002u); // 800D2CF4
  if (crb(c,1)) { goto L_800D2D04; } // 800D2CF8
L_800D2CFC:;
  c->r[3]=0u+0x00000000u; // 800D2CFC
  goto L_800D2D08; // 800D2D00
L_800D2D04:;
  c->r[3]=0u+0x00000001u; // 800D2D04
L_800D2D08:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D2D08
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D2D0C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D2D10
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D2D14
  c->lr=c->r[0]; // 800D2D18
  c->r[1]=c->r[10]|c->r[10]; // 800D2D1C
  return; // 800D2D20
}

// fn_800D2D30
void f_800D2D30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2D30
  c->r[0]=c->lr; // 800D2D34
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2D38
  c->r[11]=c->r[1]+0x00000040u; // 800D2D3C
  c->lr=0x800D2D44u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D2D40
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D44
  c->r[23]=c->r[4]|c->r[4]; // 800D2D48
  c->r[27]=0u+0x00000000u; // 800D2D4C
  c->r[26]=0u+0x00000000u; // 800D2D50
  c->r[25]=0u+0x00000000u; // 800D2D54
  c->r[24]=0u+0x00000000u; // 800D2D58
  if (!crb(c,2)) { goto L_800D2D84; } // 800D2D5C
  c->r[3]=0u+0x802B0000u; // 800D2D60
  c->r[5]=0u+0x802B0000u; // 800D2D64
  c->r[3]=c->r[3]+0xFFFFDEC4u; // 800D2D68
  c->r[4]=0u+0x00000197u; // 800D2D6C
  c->r[5]=c->r[5]+0xFFFFDEECu; // 800D2D70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2D74
  c->lr=0x800D2D7Cu; f_800C8450(c); // 800D2D78
  c->r[3]=0u+0xFFFFFC07u; // 800D2D7C
  goto L_800D2EF8; // 800D2D80
L_800D2D84:;
  c->r[29]=c->r[3]|c->r[3]; // 800D2D84
  c->r[28]=0u+0x00000000u; // 800D2D88
  c->r[30]=0u+0x00000001u; // 800D2D8C
  c->r[31]=0u+0x00000002u; // 800D2D90
  goto L_800D2ED4; // 800D2D94
L_800D2D98:;
  c->r[3]=c->r[29]|c->r[29]; // 800D2D98
  c->r[4]=c->r[1]+0x00000008u; // 800D2D9C
  c->r[5]=c->r[1]+0x0000000Cu; // 800D2DA0
  c->lr=0x800D2DA8u; f_800D2680(c); // 800D2DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D2DA8
  if (crb(c,1)) { goto L_800D2ECC; } // 800D2DAC
  if (crb(c,2)) { goto L_800D2DB8; } // 800D2DB0
  goto L_800D2EF8; // 800D2DB4
L_800D2DB8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D2DB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D2DBC
  if (crb(c,2)) { goto L_800D2DD0; } // 800D2DC0
  cmps(c,0,(int32_t)c->r[0],1); // 800D2DC4
  if (crb(c,2)) { goto L_800D2EB0; } // 800D2DC8
  goto L_800D2ECC; // 800D2DCC
L_800D2DD0:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D2DD0
  c->r[5]=0u+0x00000000u; // 800D2DD4
  if (!crb(c,2)) { goto L_800D2DE4; } // 800D2DD8
  c->r[27]=c->r[28]|c->r[28]; // 800D2DDC
  c->r[26]=0u+0x00000001u; // 800D2DE0
L_800D2DE4:;
  c->r[0]=R8(c->r[29]+0x00000019u); // 800D2DE4
  c->r[4]=0u+0x00000000u; // 800D2DE8
  c->r[3]=R8(c->r[29]+0x00000018u); // 800D2DEC
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 800D2DF0
  c->ctr=c->r[31]; // 800D2DF4
L_800D2DF8:;
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2DF8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2DFC
  if (crb(c,2)) { goto L_800D2E08; } // 800D2E00
  c->r[5]=c->r[5]+0x00000001u; // 800D2E04
L_800D2E08:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E08
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E0C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E10
  if (crb(c,2)) { goto L_800D2E1C; } // 800D2E14
  c->r[5]=c->r[5]+0x00000001u; // 800D2E18
L_800D2E1C:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E1C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E20
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E24
  if (crb(c,2)) { goto L_800D2E30; } // 800D2E28
  c->r[5]=c->r[5]+0x00000001u; // 800D2E2C
L_800D2E30:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E30
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E34
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E38
  if (crb(c,2)) { goto L_800D2E44; } // 800D2E3C
  c->r[5]=c->r[5]+0x00000001u; // 800D2E40
L_800D2E44:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E44
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E48
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E4C
  if (crb(c,2)) { goto L_800D2E58; } // 800D2E50
  c->r[5]=c->r[5]+0x00000001u; // 800D2E54
L_800D2E58:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E58
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E5C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E60
  if (crb(c,2)) { goto L_800D2E6C; } // 800D2E64
  c->r[5]=c->r[5]+0x00000001u; // 800D2E68
L_800D2E6C:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E6C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E70
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E74
  if (crb(c,2)) { goto L_800D2E80; } // 800D2E78
  c->r[5]=c->r[5]+0x00000001u; // 800D2E7C
L_800D2E80:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E80
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800D2E84
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800D2E88
  if (crb(c,2)) { goto L_800D2E94; } // 800D2E8C
  c->r[5]=c->r[5]+0x00000001u; // 800D2E90
L_800D2E94:;
  c->r[4]=c->r[4]+0x00000001u; // 800D2E94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2DF8; } // 800D2E98
  cmpu(c,0,c->r[5],c->r[25]); // 800D2E9C
  if (!crb(c,1)) { goto L_800D2ECC; } // 800D2EA0
  c->r[27]=c->r[28]|c->r[28]; // 800D2EA4
  c->r[25]=c->r[5]|c->r[5]; // 800D2EA8
  goto L_800D2ECC; // 800D2EAC
L_800D2EB0:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D2EB0
  if (!crb(c,2)) { goto L_800D2ECC; } // 800D2EB4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D2EB8
  cmpu(c,0,c->r[0],c->r[24]); // 800D2EBC
  if (!crb(c,1)) { goto L_800D2ECC; } // 800D2EC0
  c->r[27]=c->r[28]|c->r[28]; // 800D2EC4
  c->r[24]=c->r[0]|c->r[0]; // 800D2EC8
L_800D2ECC:;
  c->r[29]=c->r[29]+0x000000D8u; // 800D2ECC
  c->r[28]=c->r[28]+0x00000001u; // 800D2ED0
L_800D2ED4:;
  cmpu(c,0,c->r[28],c->r[23]); // 800D2ED4
  if (crb(c,0)) { IRQCHK(c); goto L_800D2D98; } // 800D2ED8
  cmps(c,0,(int32_t)c->r[26],0); // 800D2EDC
  if (!crb(c,2)) { goto L_800D2EF4; } // 800D2EE0
  cmps(c,0,(int32_t)c->r[24],0); // 800D2EE4
  if (!crb(c,2)) { goto L_800D2EF4; } // 800D2EE8
  c->r[3]=0u+0xFFFFFFFFu; // 800D2EEC
  goto L_800D2EF8; // 800D2EF0
L_800D2EF4:;
  c->r[3]=c->r[27]|c->r[27]; // 800D2EF4
L_800D2EF8:;
  c->r[11]=c->r[1]+0x00000040u; // 800D2EF8
  c->lr=0x800D2F00u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2EFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D2F00
  c->lr=c->r[0]; // 800D2F04
  c->r[1]=c->r[1]+0x00000040u; // 800D2F08
  return; // 800D2F0C
}

// fn_800D2F10
void f_800D2F10(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D2F10
  c->r[12]=c->r[1]|c->r[1]; // 800D2F14
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 800D2F18
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F1C
  c->r[0]=c->lr; // 800D2F20
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D2F24
  c->r[0]=0u+0x00000001u; // 800D2F28
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D2F2C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D2F30
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D2F34
  c->r[29]=c->r[3]|c->r[3]; // 800D2F38
  c->r[3]=0u+0x81280000u; // 800D2F3C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D2F40
  c->lr=0x800D2F48u; f_800C7220(c); // 800D2F44
  c->r[3]=0u+0x812F0000u; // 800D2F48
  c->lr=0x800D2F50u; f_800C71F0(c); // 800D2F4C
  c->lr=0x800D2F54u; f_800F9610(c); // 800D2F50
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F54
  if (crb(c,2)) { goto L_800D2F60; } // 800D2F58
  c->lr=0x800D2F60u; f_800CDA20(c); // 800D2F5C
L_800D2F60:;
  c->r[3]=c->r[1]+0x00000040u; // 800D2F60
  c->lr=0x800D2F68u; f_800F9DF0(c); // 800D2F64
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F68
  if (crb(c,2)) { goto L_800D2F74; } // 800D2F6C
  c->lr=0x800D2F74u; f_800CDA20(c); // 800D2F70
L_800D2F74:;
  c->r[3]=0u+0x000000E0u; // 800D2F74
  c->r[4]=0u+0x00000020u; // 800D2F78
  c->lr=0x800D2F80u; f_800C7230(c); // 800D2F7C
  c->r[0]=0u+0x00000000u; // 800D2F80
  c->r[31]=c->r[3]|c->r[3]; // 800D2F84
  cmpu(c,0,c->r[3],c->r[0]); // 800D2F88
  if (!crb(c,2)) { goto L_800D2F94; } // 800D2F8C
  c->lr=0x800D2F94u; f_800CDA20(c); // 800D2F90
L_800D2F94:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2F94
  c->r[4]=0u+0x00000000u; // 800D2F98
  c->r[5]=0u+0x000000E0u; // 800D2F9C
  c->lr=0x800D2FA4u; f_800046B4(c); // 800D2FA0
  c->r[4]=c->r[31]|c->r[31]; // 800D2FA4
  c->r[3]=0u+0x00000000u; // 800D2FA8
  c->lr=0x800D2FB0u; f_800F9AA0(c); // 800D2FAC
  cmps(c,0,(int32_t)c->r[3],-1017); // 800D2FB0
  if (!crb(c,2)) { goto L_800D3038; } // 800D2FB4
  c->r[3]=R32(c->r[1]+0x00000040u); // 800D2FB8
  c->r[6]=c->r[1]+0x00000028u; // 800D2FBC
  c->r[4]=R32(c->r[1]+0x00000044u); // 800D2FC0
  c->r[5]=0u+0x00000000u; // 800D2FC4
  c->lr=0x800D2FCCu; f_800F9980(c); // 800D2FC8
  cmps(c,0,(int32_t)c->r[3],0); // 800D2FCC
  if (crb(c,2)) { goto L_800D2FD8; } // 800D2FD0
  c->lr=0x800D2FD8u; f_800CDA20(c); // 800D2FD4
L_800D2FD8:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 800D2FD8
  c->r[4]=0u+0x00000020u; // 800D2FDC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800D2FE0
  c->r[0]=c->r[3]+0x0000001Fu; // 800D2FE4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D2FE8
  c->lr=0x800D2FF0u; f_800C7230(c); // 800D2FEC
  c->r[0]=0u+0x00000000u; // 800D2FF0
  c->r[30]=c->r[3]|c->r[3]; // 800D2FF4
  cmpu(c,0,c->r[3],c->r[0]); // 800D2FF8
  if (!crb(c,2)) { goto L_800D3004; } // 800D2FFC
  c->lr=0x800D3004u; f_800CDA20(c); // 800D3000
L_800D3004:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 800D3004
  c->r[5]=c->r[30]|c->r[30]; // 800D3008
  c->r[4]=R32(c->r[1]+0x00000044u); // 800D300C
  c->r[6]=c->r[1]+0x00000028u; // 800D3010
  c->lr=0x800D3018u; f_800F9980(c); // 800D3014
  cmps(c,0,(int32_t)c->r[3],0); // 800D3018
  if (crb(c,2)) { goto L_800D3024; } // 800D301C
  c->lr=0x800D3024u; f_800CDA20(c); // 800D3020
L_800D3024:;
  c->r[3]=c->r[31]|c->r[31]; // 800D3024
  c->r[4]=c->r[30]|c->r[30]; // 800D3028
  c->r[5]=0u+0x000000D8u; // 800D302C
  c->lr=0x800D3034u; f_80004364(c); // 800D3030
  goto L_800D3088; // 800D3034
L_800D3038:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D3038
  if (crb(c,2)) { goto L_800D3048; } // 800D303C
  c->lr=0x800D3044u; f_800CDA20(c); // 800D3040
  goto L_800D3088; // 800D3044
L_800D3048:;
  c->lr=0x800D304Cu; f_800D21D0(c); // 800D3048
  cmps(c,0,(int32_t)c->r[3],0); // 800D304C
  if (crb(c,2)) { goto L_800D3088; } // 800D3050
  c->r[3]=0u+0x00000000u; // 800D3054
  c->r[0]=0u+0xFFFFFFFFu; // 800D3058
  W32(c->r[1]+0x00000024u,c->r[3]); // 800D305C
  c->r[3]=c->r[31]|c->r[31]; // 800D3060
  c->r[4]=c->r[1]+0x00000024u; // 800D3064
  c->r[5]=c->r[1]+0x00000020u; // 800D3068
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D306C
  c->lr=0x800D3074u; f_800D2680(c); // 800D3070
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D3074
  cmps(c,0,(int32_t)c->r[0],0); // 800D3078
  if (!crb(c,2)) { goto L_800D3088; } // 800D307C
  c->lr=0x800D3084u; f_800D23B0(c); // 800D3080
  c->lr=0x800D3088u; f_800CDA20(c); // 800D3084
L_800D3088:;
  c->r[3]=0u+0x00002000u; // 800D3088
  c->r[4]=0u+0x00000040u; // 800D308C
  c->lr=0x800D3094u; f_800C7230(c); // 800D3090
  c->r[30]=c->r[3]+0x00000FE0u; // 800D3094
  c->r[4]=0u+0x00000000u; // 800D3098
  c->r[5]=0u+0x00002000u; // 800D309C
  c->lr=0x800D30A4u; f_800046B4(c); // 800D30A0
  c->r[0]=R32(c->r[1]+0x00000040u); // 800D30A4
  c->r[3]=R32(c->r[1]+0x00000044u); // 800D30A8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D30AC
  W32(c->r[30]+0x00000018u,c->r[0]); // 800D30B0
  c->lr=0x800D30B8u; f_800C6650(c); // 800D30B4
  W8(c->r[30]+0x0000000Au,c->r[3]); // 800D30B8
  c->r[3]=0u+0x00000001u; // 800D30BC
  c->r[0]=c->r[29]|0x80000000u; // 800D30C0
  W8(c->r[30]+0x0000000Bu,c->r[3]); // 800D30C4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D30C8
  c->lr=0x800D30D0u; f_800D1FC0(c); // 800D30CC
  c->r[3]=c->r[30]|c->r[30]; // 800D30D0
  c->lr=0x800D30D8u; f_800D2070(c); // 800D30D4
  c->r[3]=c->r[1]+0x00000060u; // 800D30D8
  c->lr=0x800D30E0u; f_800D1DD0(c); // 800D30DC
  c->r[0]=0u+0x00000003u; // 800D30E0
  W8(c->r[1]+0x00000065u,c->r[0]); // 800D30E4
  c->r[3]=c->r[1]+0x00000060u; // 800D30E8
  c->lr=0x800D30F0u; f_800D1CE0(c); // 800D30EC
  c->r[3]=R32(c->r[1]+0x00000040u); // 800D30F0
  c->r[5]=c->r[31]|c->r[31]; // 800D30F4
  c->r[4]=R32(c->r[1]+0x00000044u); // 800D30F8
  c->lr=0x800D3100u; f_800F96C0(c); // 800D30FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3100
  if (crb(c,2)) { goto L_800D3110; } // 800D3104
  c->lr=0x800D310Cu; f_800CDA20(c); // 800D3108
  c->r[0]=c->r[0]|0x00000000u; // 800D310C
L_800D3110:;
  IRQCHK(c); goto L_800D3110; // 800D3110
}

// fn_800D3120
void f_800D3120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3120
  c->r[0]=c->lr; // 800D3124
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3128
  c->r[0]=0u+0x00000001u; // 800D312C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3130
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3134
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3138
  c->r[29]=c->r[3]|c->r[3]; // 800D313C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D3140
  c->r[28]=c->r[4]|c->r[4]; // 800D3144
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D3148
  c->lr=0x800D3150u; f_800F9610(c); // 800D314C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3150
  if (!crb(c,2)) { goto L_800D321C; } // 800D3154
  c->r[3]=0u+0x000000E0u; // 800D3158
  c->r[4]=0u+0x00000020u; // 800D315C
  c->lr=0x800D3164u; f_800C7230(c); // 800D3160
  cmps(c,0,(int32_t)c->r[3],0); // 800D3164
  c->r[31]=c->r[3]|c->r[3]; // 800D3168
  if (crb(c,2)) { goto L_800D321C; } // 800D316C
  c->r[4]=0u+0x00000000u; // 800D3170
  c->r[5]=0u+0x000000E0u; // 800D3174
  c->lr=0x800D317Cu; f_800046B4(c); // 800D3178
  c->r[4]=c->r[28]|c->r[28]; // 800D317C
  c->r[3]=c->r[29]|c->r[29]; // 800D3180
  c->r[6]=c->r[1]+0x00000008u; // 800D3184
  c->r[5]=0u+0x00000000u; // 800D3188
  c->lr=0x800D3190u; f_800F9980(c); // 800D318C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3190
  if (!crb(c,2)) { goto L_800D321C; } // 800D3194
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D3198
  c->r[4]=0u+0x00000020u; // 800D319C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800D31A0
  c->r[0]=c->r[3]+0x0000001Fu; // 800D31A4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D31A8
  c->lr=0x800D31B0u; f_800C7230(c); // 800D31AC
  cmps(c,0,(int32_t)c->r[3],0); // 800D31B0
  c->r[30]=c->r[3]|c->r[3]; // 800D31B4
  if (crb(c,2)) { goto L_800D321C; } // 800D31B8
  c->r[4]=c->r[28]|c->r[28]; // 800D31BC
  c->r[3]=c->r[29]|c->r[29]; // 800D31C0
  c->r[5]=c->r[30]|c->r[30]; // 800D31C4
  c->r[6]=c->r[1]+0x00000008u; // 800D31C8
  c->lr=0x800D31D0u; f_800F9980(c); // 800D31CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D31D0
  if (!crb(c,2)) { goto L_800D321C; } // 800D31D4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D31D8
  c->r[3]=c->r[30]|c->r[30]; // 800D31DC
  c->lr=0x800D31E4u; f_800D2D30(c); // 800D31E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D31E4
  if (crb(c,0)) { goto L_800D321C; } // 800D31E8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 800D31EC
  c->r[3]=c->r[31]|c->r[31]; // 800D31F0
  c->r[5]=0u+0x000000D8u; // 800D31F4
  c->r[4]=c->r[30]+c->r[0]; // 800D31F8
  c->lr=0x800D3200u; f_80004364(c); // 800D31FC
  c->r[4]=c->r[28]|c->r[28]; // 800D3200
  c->r[3]=c->r[29]|c->r[29]; // 800D3204
  c->r[5]=c->r[31]|c->r[31]; // 800D3208
  c->lr=0x800D3210u; f_800F96C0(c); // 800D320C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3210
  if (!crb(c,2)) { goto L_800D321C; } // 800D3214
L_800D3218:;
  IRQCHK(c); goto L_800D3218; // 800D3218
L_800D321C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D321C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3220
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3224
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3228
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D322C
  c->lr=c->r[0]; // 800D3230
  c->r[1]=c->r[1]+0x00000020u; // 800D3234
  return; // 800D3238
}

// fn_800D3240
void f_800D3240(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D3240
  c->r[12]=c->r[1]|c->r[1]; // 800D3244
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 800D3248
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D324C
  c->r[0]=c->lr; // 800D3250
  c->r[11]=c->r[12]|c->r[12]; // 800D3254
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D3258
  c->lr=0x800D3260u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D325C
  c->r[31]=0u+0x802B0000u; // 800D3260
  c->r[29]=0u+0x00000000u; // 800D3264
  W32(c->r[1]+0x00000020u,c->r[29]); // 800D3268
  c->r[25]=c->r[3]|c->r[3]; // 800D326C
  c->r[24]=c->r[4]|c->r[4]; // 800D3270
  c->r[26]=c->r[5]|c->r[5]; // 800D3274
  c->r[27]=c->r[6]|c->r[6]; // 800D3278
  c->r[28]=c->r[7]|c->r[7]; // 800D327C
  c->r[31]=c->r[31]+0xFFFFDE90u; // 800D3280
  c->lr=0x800D3288u; f_800F9610(c); // 800D3284
  cmps(c,0,(int32_t)c->r[3],0); // 800D3288
  if (crb(c,2)) { goto L_800D3294; } // 800D328C
  c->lr=0x800D3294u; f_800CDA20(c); // 800D3290
L_800D3294:;
  c->r[4]=c->r[24]|c->r[24]; // 800D3294
  c->r[3]=c->r[25]|c->r[25]; // 800D3298
  c->r[6]=c->r[1]+0x00000020u; // 800D329C
  c->r[5]=0u+0x00000000u; // 800D32A0
  c->lr=0x800D32A8u; f_800F9C40(c); // 800D32A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D32A8
  if (crb(c,2)) { goto L_800D32B4; } // 800D32AC
  c->lr=0x800D32B4u; f_800CDA20(c); // 800D32B0
L_800D32B4:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 800D32B4
  c->r[4]=0u+0x00000040u; // 800D32B8
  c->r[0]=c->r[3]+0x0000001Fu; // 800D32BC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D32C0
  c->lr=0x800D32C8u; f_800C7230(c); // 800D32C4
  c->r[0]=0u+0x00000000u; // 800D32C8
  c->r[29]=c->r[3]|c->r[3]; // 800D32CC
  cmpu(c,0,c->r[3],c->r[0]); // 800D32D0
  if (!crb(c,2)) { goto L_800D32DC; } // 800D32D4
  c->lr=0x800D32DCu; f_800CDA20(c); // 800D32D8
L_800D32DC:;
  c->r[4]=c->r[24]|c->r[24]; // 800D32DC
  c->r[3]=c->r[25]|c->r[25]; // 800D32E0
  c->r[5]=c->r[29]|c->r[29]; // 800D32E4
  c->r[6]=c->r[1]+0x00000020u; // 800D32E8
  c->lr=0x800D32F0u; f_800F9C40(c); // 800D32EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D32F0
  if (crb(c,2)) { goto L_800D32FC; } // 800D32F4
  c->lr=0x800D32FCu; f_800CDA20(c); // 800D32F8
L_800D32FC:;
  c->r[3]=c->r[29]|c->r[29]; // 800D32FC
  c->lr=0x800D3304u; f_800D2C50(c); // 800D3300
  cmps(c,0,(int32_t)c->r[3],0); // 800D3304
  if (!crb(c,2)) { goto L_800D331C; } // 800D3308
  c->r[3]=c->r[31]+0x00000068u; // 800D330C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3310
  c->lr=0x800D3318u; f_800C8450(c); // 800D3314
  c->lr=0x800D331Cu; f_800CDA20(c); // 800D3318
L_800D331C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D331C
  if (crb(c,2)) { goto L_800D3394; } // 800D3320
  c->r[4]=c->r[24]|c->r[24]; // 800D3324
  c->r[3]=c->r[25]|c->r[25]; // 800D3328
  c->r[5]=0u+0x00000000u; // 800D332C
  c->lr=0x800D3334u; f_800D2B30(c); // 800D3330
  cmps(c,0,(int32_t)c->r[3],0); // 800D3334
  if (!crb(c,2)) { goto L_800D334C; } // 800D3338
  c->r[3]=c->r[31]+0x00000094u; // 800D333C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3340
  c->lr=0x800D3348u; f_800C8450(c); // 800D3344
  c->lr=0x800D334Cu; f_800CDA20(c); // 800D3348
L_800D334C:;
  c->r[28]=R32(c->r[29]+0x0000001Au); // 800D334C
  cmpu(c,0,c->r[28],0x00000003u); // 800D3350
  if (!crb(c,2)) { goto L_800D3360; } // 800D3354
  c->r[0]=0u+0x00000001u; // 800D3358
  goto L_800D337C; // 800D335C
L_800D3360:;
  c->lr=0x800D3364u; f_800F7E90(c); // 800D3360
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800D3364
  cmpu(c,0,c->r[28],c->r[0]); // 800D3368
  if (!crb(c,2)) { goto L_800D3378; } // 800D336C
  c->r[0]=0u+0x00000001u; // 800D3370
  goto L_800D337C; // 800D3374
L_800D3378:;
  c->r[0]=0u+0x00000000u; // 800D3378
L_800D337C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D337C
  if (!crb(c,2)) { goto L_800D3394; } // 800D3380
  c->r[3]=c->r[31]+0x000000C4u; // 800D3384
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3388
  c->lr=0x800D3390u; f_800C8450(c); // 800D338C
  c->lr=0x800D3394u; f_800CDA20(c); // 800D3390
L_800D3394:;
  c->r[0]=R8(c->r[29]+0x00000032u); // 800D3394
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D3398
  if (crb(c,2)) { goto L_800D33A8; } // 800D339C
  c->r[0]=0u+0x00000001u; // 800D33A0
  goto L_800D33AC; // 800D33A4
L_800D33A8:;
  c->r[0]=0u+0x00000000u; // 800D33A8
L_800D33AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D33AC
  if (!crb(c,2)) { goto L_800D33C4; } // 800D33B0
  c->lr=0x800D33B8u; f_800E8350(c); // 800D33B4
  cmpu(c,0,c->r[3],0x00000002u); // 800D33B8
  if (!crb(c,2)) { goto L_800D33C4; } // 800D33BC
  c->lr=0x800D33C4u; f_800E8420(c); // 800D33C0
L_800D33C4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800D33C4
  if (!crb(c,2)) { goto L_800D33D4; } // 800D33C8
  cmps(c,0,(int32_t)c->r[26],0); // 800D33CC
  if (crb(c,2)) { goto L_800D3650; } // 800D33D0
L_800D33D4:;
  c->r[3]=0u+0x00002000u; // 800D33D4
  c->r[4]=0u+0x00000040u; // 800D33D8
  c->lr=0x800D33E0u; f_800C7230(c); // 800D33DC
  c->r[29]=c->r[3]|c->r[3]; // 800D33E0
  c->r[30]=c->r[3]+0x00000FE0u; // 800D33E4
  c->r[6]=c->r[24]|c->r[24]; // 800D33E8
  c->r[5]=c->r[25]|c->r[25]; // 800D33EC
  c->r[3]=c->r[1]+0x00000060u; // 800D33F0
  c->r[4]=c->r[13]+0xFFFF8F68u; // 800D33F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D33F8
  c->lr=0x800D3400u; f_8021E904(c); // 800D33FC
  cmps(c,0,(int32_t)c->r[27],0); // 800D3400
  c->r[28]=0u+0x00000000u; // 800D3404
  c->r[3]=0u+0x00000000u; // 800D3408
  if (crb(c,2)) { goto L_800D342C; } // 800D340C
  goto L_800D3420; // 800D3410
  c->r[0]=c->r[0]|0x00000000u; // 800D3414
L_800D3418:;
  c->r[28]=c->r[28]+0x00000001u; // 800D3418
  c->r[3]=c->r[3]+0x00000004u; // 800D341C
L_800D3420:;
  c->r[0]=R32(c->r[27]+c->r[3]); // 800D3420
  cmps(c,0,(int32_t)c->r[0],0); // 800D3424
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3418; } // 800D3428
L_800D342C:;
  c->r[0]=c->r[28]+0x00000002u; // 800D342C
  c->r[4]=0u+0x00000001u; // 800D3430
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3434
  c->r[28]=c->r[28]+0x00000001u; // 800D3438
  c->lr=0x800D3440u; f_800C7230(c); // 800D343C
  cmps(c,0,(int32_t)c->r[28],1); // 800D3440
  c->r[0]=c->r[1]+0x00000060u; // 800D3444
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D3448
  c->r[5]=c->r[3]|c->r[3]; // 800D344C
  c->r[4]=c->r[28]+0xFFFFFFFFu; // 800D3450
  c->r[9]=0u+0x00000001u; // 800D3454
  c->r[6]=0u+0x00000004u; // 800D3458
  if (!crb(c,1)) { goto L_800D353C; } // 800D345C
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800D3460
  c->ctr=c->r[0]; // 800D3464
  if (crb(c,2)) { goto L_800D3518; } // 800D3468
L_800D346C:;
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 800D346C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D3470
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D3474
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D3478
  W32(c->r[3]+c->r[6],c->r[0]); // 800D347C
  c->r[8]=c->r[9]+0x00000001u; // 800D3480
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D3484
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D3488
  c->r[6]=c->r[6]+0x00000004u; // 800D348C
  c->r[8]=c->r[9]+0x00000002u; // 800D3490
  W32(c->r[3]+c->r[6],c->r[0]); // 800D3494
  c->r[6]=c->r[6]+0x00000004u; // 800D3498
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D349C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D34A0
  W32(c->r[3]+c->r[6],c->r[0]); // 800D34A4
  c->r[8]=c->r[9]+0x00000003u; // 800D34A8
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D34AC
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D34B0
  c->r[6]=c->r[6]+0x00000004u; // 800D34B4
  c->r[8]=c->r[9]+0x00000004u; // 800D34B8
  W32(c->r[3]+c->r[6],c->r[0]); // 800D34BC
  c->r[6]=c->r[6]+0x00000004u; // 800D34C0
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D34C4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D34C8
  W32(c->r[3]+c->r[6],c->r[0]); // 800D34CC
  c->r[8]=c->r[9]+0x00000005u; // 800D34D0
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D34D4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D34D8
  c->r[6]=c->r[6]+0x00000004u; // 800D34DC
  c->r[8]=c->r[9]+0x00000006u; // 800D34E0
  W32(c->r[3]+c->r[6],c->r[0]); // 800D34E4
  c->r[6]=c->r[6]+0x00000004u; // 800D34E8
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D34EC
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D34F0
  W32(c->r[3]+c->r[6],c->r[0]); // 800D34F4
  c->r[6]=c->r[6]+0x00000004u; // 800D34F8
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D34FC
  c->r[9]=c->r[9]+0x00000008u; // 800D3500
  W32(c->r[3]+c->r[6],c->r[0]); // 800D3504
  c->r[6]=c->r[6]+0x00000004u; // 800D3508
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D346C; } // 800D350C
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 800D3510
  if (crb(c,2)) { goto L_800D353C; } // 800D3514
L_800D3518:;
  c->ctr=c->r[4]; // 800D3518
  c->r[0]=c->r[0]|0x00000000u; // 800D351C
L_800D3520:;
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 800D3520
  c->r[9]=c->r[9]+0x00000001u; // 800D3524
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D3528
  c->r[0]=R32(c->r[27]+c->r[7]); // 800D352C
  W32(c->r[3]+c->r[6],c->r[0]); // 800D3530
  c->r[6]=c->r[6]+0x00000004u; // 800D3534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3520; } // 800D3538
L_800D353C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D353C
  c->r[4]=c->r[28]|c->r[28]; // 800D3540
  c->lr=0x800D3548u; f_800D29B0(c); // 800D3544
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800D3548
  cmps(c,0,(int32_t)c->r[0],0); // 800D354C
  if (!crb(c,2)) { goto L_800D3560; } // 800D3550
  c->r[0]=R32(c->r[13]+0xFFFFA580u); // 800D3554
  cmps(c,0,(int32_t)c->r[0],0); // 800D3558
  if (crb(c,2)) { goto L_800D3574; } // 800D355C
L_800D3560:;
  c->r[3]=0u+0x00000002u; // 800D3560
  c->r[0]=0u+0x00000001u; // 800D3564
  W32(c->r[1]+0x00000044u,c->r[3]); // 800D3568
  W32(c->r[1]+0x00000040u,c->r[0]); // 800D356C
  goto L_800D35C0; // 800D3570
L_800D3574:;
  c->lr=0x800D3578u; f_800F9610(c); // 800D3574
  cmps(c,0,(int32_t)c->r[3],0); // 800D3578
  if (crb(c,2)) { goto L_800D3598; } // 800D357C
  c->r[4]=c->r[3]|c->r[3]; // 800D3580
  c->r[3]=c->r[31]+0x000000F4u; // 800D3584
  c->r[5]=0u+0x00000323u; // 800D3588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D358C
  c->lr=0x800D3594u; f_800C8450(c); // 800D3590
  c->lr=0x800D3598u; f_800CDAD0(c); // 800D3594
L_800D3598:;
  c->r[3]=c->r[1]+0x00000040u; // 800D3598
  c->lr=0x800D35A0u; f_800F9DF0(c); // 800D359C
  cmps(c,0,(int32_t)c->r[3],0); // 800D35A0
  if (crb(c,2)) { goto L_800D35C0; } // 800D35A4
  c->r[4]=c->r[3]|c->r[3]; // 800D35A8
  c->r[3]=c->r[31]+0x000000F4u; // 800D35AC
  c->r[5]=0u+0x0000032Bu; // 800D35B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D35B4
  c->lr=0x800D35BCu; f_800C8450(c); // 800D35B8
  c->lr=0x800D35C0u; f_800CDAD0(c); // 800D35BC
L_800D35C0:;
  c->r[0]=R32(c->r[1]+0x00000040u); // 800D35C0
  c->r[3]=R32(c->r[1]+0x00000044u); // 800D35C4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D35C8
  W32(c->r[30]+0x00000018u,c->r[0]); // 800D35CC
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D35D0
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D35D4
  c->lr=0x800D35DCu; f_800C6650(c); // 800D35D8
  c->r[4]=c->r[24]^0x00000002u; // 800D35DC
  c->r[0]=c->r[25]^0x00000001u; // 800D35E0
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 800D35E4
  W8(c->r[30]+0x0000000Au,c->r[3]); // 800D35E8
  if (!crb(c,2)) { goto L_800D35FC; } // 800D35EC
  c->r[0]=0u+0x00000004u; // 800D35F0
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 800D35F4
  goto L_800D3604; // 800D35F8
L_800D35FC:;
  c->r[0]=0u+0x00000002u; // 800D35FC
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 800D3600
L_800D3604:;
  W32(c->r[30]+0x0000000Cu,c->r[26]); // 800D3604
  c->lr=0x800D360Cu; f_800D1FC0(c); // 800D3608
  c->r[3]=c->r[30]|c->r[30]; // 800D360C
  c->lr=0x800D3614u; f_800D2070(c); // 800D3610
  c->r[3]=c->r[1]+0x00000078u; // 800D3614
  c->lr=0x800D361Cu; f_800D1DD0(c); // 800D3618
  c->r[3]=c->r[24]^0x00000002u; // 800D361C
  c->r[0]=c->r[25]^0x00000001u; // 800D3620
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800D3624
  c->r[0]=0u+0x00000003u; // 800D3628
  W8(c->r[1]+0x0000007Du,c->r[0]); // 800D362C
  if (!crb(c,2)) { goto L_800D3648; } // 800D3630
  c->r[3]=R8(c->r[1]+0x0000007Eu); // 800D3634
  c->lr=0x800D363Cu; f_800CD4A0(c); // 800D3638
  c->r[0]=0u+0x00000002u; // 800D363C
  W8(c->r[1]+0x0000007Eu,c->r[3]); // 800D3640
  W8(c->r[1]+0x0000007Fu,c->r[0]); // 800D3644
L_800D3648:;
  c->r[3]=c->r[1]+0x00000078u; // 800D3648
  c->lr=0x800D3650u; f_800D1CE0(c); // 800D364C
L_800D3650:;
  c->lr=0x800D3654u; f_800CE9A0(c); // 800D3650
  c->r[3]=0u+0x00000006u; // 800D3654
  c->lr=0x800D365Cu; f_800CD320(c); // 800D3658
  c->lr=0x800D3660u; f_800CE9E0(c); // 800D365C
  c->r[4]=c->r[24]|c->r[24]; // 800D3660
  c->r[3]=c->r[25]|c->r[25]; // 800D3664
  c->lr=0x800D366Cu; f_800D3120(c); // 800D3668
  c->lr=0x800D3670u; f_800C9770(c); // 800D366C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D3670
  c->r[11]=c->r[10]|c->r[10]; // 800D3674
  c->lr=0x800D367Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3678
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D367C
  c->lr=c->r[0]; // 800D3680
  c->r[1]=c->r[10]|c->r[10]; // 800D3684
  return; // 800D3688
}

// fn_800D3690
void f_800D3690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3690
  c->r[0]=c->lr; // 800D3694
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D369C
  c->r[31]=0u+0x00000000u; // 800D36A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D36A4
  c->r[30]=c->r[3]|c->r[3]; // 800D36A8
  c->lr=0x800D36B0u; f_800C6650(c); // 800D36AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D36B0
  cmpu(c,0,c->r[0],0x00000080u); // 800D36B4
  if (!crb(c,2)) { goto L_800D36E4; } // 800D36B8
  c->r[3]=0u+0x802B0000u; // 800D36BC
  c->r[3]=c->r[3]+0xFFFFE030u; // 800D36C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D36C4
  c->lr=0x800D36CCu; f_800C8450(c); // 800D36C8
  c->r[3]=0u+0x802B0000u; // 800D36CC
  c->r[4]=0u+0x00000583u; // 800D36D0
  c->r[3]=c->r[3]+0xFFFFDEECu; // 800D36D4
  c->r[5]=c->r[13]+0xFFFF8F70u; // 800D36D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D36DC
  c->lr=0x800D36E4u; f_800C84E0(c); // 800D36E0
L_800D36E4:;
  c->lr=0x800D36E8u; f_800D13B0(c); // 800D36E4
  c->r[3]=0u+0x81280000u; // 800D36E8
  c->lr=0x800D36F0u; f_800C7220(c); // 800D36EC
  c->r[3]=0u+0x812F0000u; // 800D36F0
  c->lr=0x800D36F8u; f_800C71F0(c); // 800D36F4
  cmps(c,0,(int32_t)c->r[30],0); // 800D36F8
  if (crb(c,2)) { goto L_800D371C; } // 800D36FC
  c->r[3]=0u+0x00000004u; // 800D3700
  c->r[4]=0u+0x00001000u; // 800D3704
  c->lr=0x800D370Cu; f_800C7230(c); // 800D3708
  W32(c->r[3]+0x00000000u,c->r[30]); // 800D370C
  c->r[0]=0u+0x00000000u; // 800D3710
  c->r[31]=c->r[3]|c->r[3]; // 800D3714
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3718
L_800D371C:;
  c->lr=0x800D3720u; f_800F7E90(c); // 800D371C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800D3720
  cmpu(c,0,c->r[0],0x00000002u); // 800D3724
  if (!crb(c,1)) { goto L_800D3740; } // 800D3728
  cmps(c,0,(int32_t)c->r[0],4); // 800D372C
  if (crb(c,2)) { goto L_800D3754; } // 800D3730
  cmps(c,0,(int32_t)c->r[0],5); // 800D3734
  if (crb(c,2)) { goto L_800D3768; } // 800D3738
  goto L_800D377C; // 800D373C
L_800D3740:;
  c->r[4]=0u+0x48410000u; // 800D3740
  c->r[3]=0u+0x00010000u; // 800D3744
  c->r[4]=c->r[4]+0x00004241u; // 800D3748
  c->r[3]=c->r[3]+0x00000002u; // 800D374C
  goto L_800D378C; // 800D3750
L_800D3754:;
  c->r[4]=0u+0x48410000u; // 800D3754
  c->r[3]=0u+0x00010000u; // 800D3758
  c->r[4]=c->r[4]+0x0000424Bu; // 800D375C
  c->r[3]=c->r[3]+0x00000002u; // 800D3760
  goto L_800D378C; // 800D3764
L_800D3768:;
  c->r[4]=0u+0x48410000u; // 800D3768
  c->r[3]=0u+0x00010000u; // 800D376C
  c->r[4]=c->r[4]+0x00004243u; // 800D3770
  c->r[3]=c->r[3]+0x00000002u; // 800D3774
  goto L_800D378C; // 800D3778
L_800D377C:;
  c->r[4]=0u+0x48410000u; // 800D377C
  c->r[3]=0u+0x00010000u; // 800D3780
  c->r[4]=c->r[4]+0x00004241u; // 800D3784
  c->r[3]=c->r[3]+0x00000002u; // 800D3788
L_800D378C:;
  c->r[6]=c->r[31]|c->r[31]; // 800D378C
  c->r[5]=0u+0x00000002u; // 800D3790
  c->r[7]=0u+0x00000000u; // 800D3794
  c->lr=0x800D379Cu; f_800D3240(c); // 800D3798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D379C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D37A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D37A4
  c->lr=c->r[0]; // 800D37A8
  c->r[1]=c->r[1]+0x00000010u; // 800D37AC
  return; // 800D37B0
}

// __init_user
void f_800D37C0(Ctx* __restrict c) {
  trace_call(0x800D37C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D37C0
  c->r[0]=c->lr; // 800D37C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D37C8
  c->lr=0x800D37D0u; f_800D37E0(c); // 800D37CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D37D0
  c->lr=c->r[0]; // 800D37D4
  c->r[1]=c->r[1]+0x00000010u; // 800D37D8
  return; // 800D37DC
}

// __init_cpp
void f_800D37E0(Ctx* __restrict c) {
  trace_call(0x800D37E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D37E0
  c->r[0]=c->lr; // 800D37E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D37E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D37EC
  c->r[31]=0u+0x80230000u; // 800D37F0
  c->r[31]=c->r[31]+0x00000320u; // 800D37F4
  goto L_800D3808; // 800D37F8
L_800D37FC:;
  c->ctr=c->r[12]; // 800D37FC
  if (true) { c->lr=0x800D3804u; dispatch(c,c->ctr); } // 800D3800
  c->r[31]=c->r[31]+0x00000004u; // 800D3804
L_800D3808:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800D3808
  cmps(c,0,(int32_t)c->r[12],0); // 800D380C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D37FC; } // 800D3810
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3818
  c->lr=c->r[0]; // 800D381C
  c->r[1]=c->r[1]+0x00000010u; // 800D3820
  return; // 800D3824
}

// exit
void f_800D3830(Ctx* __restrict c) {
  trace_call(0x800D3830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3830
  c->r[0]=c->lr; // 800D3834
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D383C
  c->r[31]=0u+0x80230000u; // 800D3840
  c->r[31]=c->r[31]+0x000004A0u; // 800D3844
  goto L_800D3858; // 800D3848
L_800D384C:;
  c->ctr=c->r[12]; // 800D384C
  if (true) { c->lr=0x800D3854u; dispatch(c,c->ctr); } // 800D3850
  c->r[31]=c->r[31]+0x00000004u; // 800D3854
L_800D3858:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800D3858
  cmps(c,0,(int32_t)c->r[12],0); // 800D385C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D384C; } // 800D3860
  c->lr=0x800D3868u; f_800C4FA0(c); // 800D3864
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D386C
  c->lr=c->r[0]; // 800D3870
  c->r[1]=c->r[1]+0x00000010u; // 800D3874
  return; // 800D3878
}

// SetExiInterruptMask
void f_800D3880(Ctx* __restrict c) {
  trace_call(0x800D3880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3880
  c->r[0]=c->lr; // 800D3884
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D388C
  c->r[31]=c->r[4]|c->r[4]; // 800D3890
  c->r[5]=0u+0x802F0000u; // 800D3894
  c->r[5]=c->r[5]+0xFFFFA450u; // 800D3898
  cmps(c,0,(int32_t)c->r[3],0); // 800D389C
  if (crb(c,2)) { goto L_800D38B8; } // 800D38A0
  cmps(c,0,(int32_t)c->r[3],1); // 800D38A4
  if (crb(c,2)) { goto L_800D38F4; } // 800D38A8
  cmps(c,0,(int32_t)c->r[3],2); // 800D38AC
  if (crb(c,2)) { goto L_800D3924; } // 800D38B0
  goto L_800D3954; // 800D38B4
L_800D38B8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D38B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D38BC
  if (!crb(c,2)) { goto L_800D38D0; } // 800D38C0
  c->r[0]=R32(c->r[5]+0x00000080u); // 800D38C4
  cmps(c,0,(int32_t)c->r[0],0); // 800D38C8
  if (crb(c,2)) { goto L_800D38DC; } // 800D38CC
L_800D38D0:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D38D0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D38D4
  if (crb(c,2)) { goto L_800D38E8; } // 800D38D8
L_800D38DC:;
  c->r[3]=0u+0x00410000u; // 800D38DC
  c->lr=0x800D38E4u; f_800CBE70(c); // 800D38E0
  goto L_800D3954; // 800D38E4
L_800D38E8:;
  c->r[3]=0u+0x00410000u; // 800D38E8
  c->lr=0x800D38F0u; f_800CBEF0(c); // 800D38EC
  goto L_800D3954; // 800D38F0
L_800D38F4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D38F4
  cmps(c,0,(int32_t)c->r[0],0); // 800D38F8
  if (crb(c,2)) { goto L_800D390C; } // 800D38FC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D3900
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D3904
  if (crb(c,2)) { goto L_800D3918; } // 800D3908
L_800D390C:;
  c->r[3]=0u+0x00080000u; // 800D390C
  c->lr=0x800D3914u; f_800CBE70(c); // 800D3910
  goto L_800D3954; // 800D3914
L_800D3918:;
  c->r[3]=0u+0x00080000u; // 800D3918
  c->lr=0x800D3920u; f_800CBEF0(c); // 800D391C
  goto L_800D3954; // 800D3920
L_800D3924:;
  c->r[3]=0u+0x00000019u; // 800D3924
  c->lr=0x800D392Cu; f_800CBB30(c); // 800D3928
  cmps(c,0,(int32_t)c->r[3],0); // 800D392C
  if (crb(c,2)) { goto L_800D3940; } // 800D3930
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3934
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D3938
  if (crb(c,2)) { goto L_800D394C; } // 800D393C
L_800D3940:;
  c->r[3]=0u+0x00000040u; // 800D3940
  c->lr=0x800D3948u; f_800CBE70(c); // 800D3944
  goto L_800D3954; // 800D3948
L_800D394C:;
  c->r[3]=0u+0x00000040u; // 800D394C
  c->lr=0x800D3954u; f_800CBEF0(c); // 800D3950
L_800D3954:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3958
  c->lr=c->r[0]; // 800D395C
  c->r[1]=c->r[1]+0x00000010u; // 800D3960
  return; // 800D3964
}

// EXIImm
void f_800D3970(Ctx* __restrict c) {
  trace_call(0x800D3970u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3970
  c->r[0]=c->lr; // 800D3974
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3978
  c->r[11]=c->r[1]+0x00000030u; // 800D397C
  c->lr=0x800D3984u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3980
  c->r[26]=c->r[3]|c->r[3]; // 800D3984
  c->r[27]=c->r[4]|c->r[4]; // 800D3988
  c->r[28]=c->r[5]|c->r[5]; // 800D398C
  c->r[29]=c->r[6]|c->r[6]; // 800D3990
  c->r[25]=c->r[7]|c->r[7]; // 800D3994
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D3998
  c->r[3]=0u+0x802F0000u; // 800D399C
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D39A0
  c->r[31]=c->r[3]+c->r[0]; // 800D39A4
  c->lr=0x800D39ACu; f_800CBAA0(c); // 800D39A8
  c->r[30]=c->r[3]|c->r[3]; // 800D39AC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D39B0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D39B4
  if (!crb(c,2)) { goto L_800D39C8; } // 800D39B8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D39BC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D39C0
  if (!crb(c,2)) { goto L_800D39D8; } // 800D39C4
L_800D39C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D39C8
  c->lr=0x800D39D0u; f_800CBAE0(c); // 800D39CC
  c->r[3]=0u+0x00000000u; // 800D39D0
  goto L_800D3BD4; // 800D39D4
L_800D39D8:;
  W32(c->r[31]+0x00000004u,c->r[25]); // 800D39D8
  cmps(c,0,(int32_t)c->r[25],0); // 800D39DC
  if (crb(c,2)) { goto L_800D3A14; } // 800D39E0
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D39E4
  c->r[0]=0u+0xCD000000u; // 800D39E8
  c->r[3]=c->r[0]+c->r[3]; // 800D39EC
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D39F0
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D39F4
  c->r[0]=c->r[0]|0x00000008u; // 800D39F8
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D39FC
  c->r[3]=0u+0x00200000u; // 800D3A00
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D3A04
  c->r[0]=c->r[0]-c->r[26]; // 800D3A08
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D3A0C
  c->lr=0x800D3A14u; f_800CBEF0(c); // 800D3A10
L_800D3A14:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3A14
  c->r[0]=c->r[0]|0x00000002u; // 800D3A18
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D3A1C
  cmps(c,0,(int32_t)c->r[29],0); // 800D3A20
  if (crb(c,2)) { goto L_800D3B88; } // 800D3A24
  c->r[0]=0u+0x00000000u; // 800D3A28
  c->r[4]=0u+0x00000000u; // 800D3A2C
  cmps(c,1,(int32_t)c->r[28],0); // 800D3A30
  if (!crb(c,5)) { goto L_800D3B78; } // 800D3A34
  c->r[6]=c->r[28]+0xFFFFFFF8u; // 800D3A38
  cmps(c,0,(int32_t)c->r[28],8); // 800D3A3C
  if (!crb(c,1)) { goto L_800D3B44; } // 800D3A40
  c->r[5]=0u+0x00000000u; // 800D3A44
  if (crb(c,4)) { goto L_800D3A60; } // 800D3A48
  c->r[3]=0u+0x80000000u; // 800D3A4C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 800D3A50
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800D3A54
  if (crb(c,1)) { goto L_800D3A60; } // 800D3A58
  c->r[5]=0u+0x00000001u; // 800D3A5C
L_800D3A60:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D3A60
  if (crb(c,2)) { goto L_800D3B44; } // 800D3A64
  c->r[3]=c->r[27]|c->r[27]; // 800D3A68
  c->r[5]=c->r[6]+0x00000007u; // 800D3A6C
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800D3A70
  c->ctr=c->r[5]; // 800D3A74
  cmps(c,0,(int32_t)c->r[6],0); // 800D3A78
  if (!crb(c,1)) { goto L_800D3B44; } // 800D3A7C
L_800D3A80:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800D3A80
  c->r[5]=addc(c,~c->r[4],0x00000003u,1); // 800D3A84
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3A88
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3A8C
  c->r[0]=c->r[0]|c->r[5]; // 800D3A90
  c->r[6]=R8(c->r[3]+0x00000001u); // 800D3A94
  c->r[5]=c->r[4]+0x00000001u; // 800D3A98
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3A9C
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3AA0
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3AA4
  c->r[0]=c->r[0]|c->r[5]; // 800D3AA8
  c->r[6]=R8(c->r[3]+0x00000002u); // 800D3AAC
  c->r[5]=c->r[4]+0x00000002u; // 800D3AB0
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3AB4
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3AB8
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3ABC
  c->r[0]=c->r[0]|c->r[5]; // 800D3AC0
  c->r[6]=R8(c->r[3]+0x00000003u); // 800D3AC4
  c->r[5]=0u-c->r[4]; // 800D3AC8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3ACC
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3AD0
  c->r[0]=c->r[0]|c->r[5]; // 800D3AD4
  c->r[6]=R8(c->r[3]+0x00000004u); // 800D3AD8
  c->r[5]=c->r[4]+0x00000004u; // 800D3ADC
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3AE0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3AE4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3AE8
  c->r[0]=c->r[0]|c->r[5]; // 800D3AEC
  c->r[6]=R8(c->r[3]+0x00000005u); // 800D3AF0
  c->r[5]=c->r[4]+0x00000005u; // 800D3AF4
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3AF8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3AFC
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3B00
  c->r[0]=c->r[0]|c->r[5]; // 800D3B04
  c->r[6]=R8(c->r[3]+0x00000006u); // 800D3B08
  c->r[5]=c->r[4]+0x00000006u; // 800D3B0C
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3B10
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3B14
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3B18
  c->r[0]=c->r[0]|c->r[5]; // 800D3B1C
  c->r[6]=R8(c->r[3]+0x00000007u); // 800D3B20
  c->r[5]=c->r[4]+0x00000007u; // 800D3B24
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3B28
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3B2C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3B30
  c->r[0]=c->r[0]|c->r[5]; // 800D3B34
  c->r[3]=c->r[3]+0x00000008u; // 800D3B38
  c->r[4]=c->r[4]+0x00000008u; // 800D3B3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3A80; } // 800D3B40
L_800D3B44:;
  c->r[6]=c->r[27]+c->r[4]; // 800D3B44
  c->r[3]=c->r[28]-c->r[4]; // 800D3B48
  c->ctr=c->r[3]; // 800D3B4C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 800D3B50
  if (!crb(c,0)) { goto L_800D3B78; } // 800D3B54
L_800D3B58:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 800D3B58
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 800D3B5C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D3B60
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800D3B64
  c->r[0]=c->r[0]|c->r[3]; // 800D3B68
  c->r[6]=c->r[6]+0x00000001u; // 800D3B6C
  c->r[4]=c->r[4]+0x00000001u; // 800D3B70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3B58; } // 800D3B74
L_800D3B78:;
  c->r[4]=0u+0xCD000000u; // 800D3B78
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3B7C
  c->r[3]=c->r[4]+c->r[3]; // 800D3B80
  W32(c->r[3]+0x00006810u,c->r[0]); // 800D3B84
L_800D3B88:;
  W32(c->r[31]+0x00000014u,c->r[27]); // 800D3B88
  c->r[3]=c->r[29]+0xFFFFFFFFu; // 800D3B8C
  c->r[0]=addc(c,~c->r[29],0x00000001u,1); // 800D3B90
  c->r[0]=c->r[3]|c->r[0]; // 800D3B94
  c->r[0]=sraw(c,c->r[0],31); // 800D3B98
  c->r[0]=c->r[28]&c->r[0]; // 800D3B9C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D3BA0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D3BA4
  c->r[3]=c->r[0]|0x00000001u; // 800D3BA8
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800D3BAC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D3BB0
  c->r[4]=c->r[3]|c->r[0]; // 800D3BB4
  c->r[3]=0u+0xCD000000u; // 800D3BB8
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3BBC
  c->r[3]=c->r[3]+c->r[0]; // 800D3BC0
  W32(c->r[3]+0x0000680Cu,c->r[4]); // 800D3BC4
  c->r[3]=c->r[30]|c->r[30]; // 800D3BC8
  c->lr=0x800D3BD0u; f_800CBAE0(c); // 800D3BCC
  c->r[3]=0u+0x00000001u; // 800D3BD0
L_800D3BD4:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3BD4
  c->lr=0x800D3BDCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3BD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3BDC
  c->lr=c->r[0]; // 800D3BE0
  c->r[1]=c->r[1]+0x00000030u; // 800D3BE4
  return; // 800D3BE8
}

// EXIImmEx
void f_800D3BF0(Ctx* __restrict c) {
  trace_call(0x800D3BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3BF0
  c->r[0]=c->lr; // 800D3BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3BF8
  c->r[11]=c->r[1]+0x00000020u; // 800D3BFC
  c->lr=0x800D3C04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3C00
  c->r[27]=c->r[3]|c->r[3]; // 800D3C04
  c->r[28]=c->r[4]|c->r[4]; // 800D3C08
  c->r[29]=c->r[5]|c->r[5]; // 800D3C0C
  c->r[30]=c->r[6]|c->r[6]; // 800D3C10
  goto L_800D3C70; // 800D3C14
L_800D3C18:;
  cmps(c,0,(int32_t)c->r[29],4); // 800D3C18
  c->r[31]=0u+0x00000004u; // 800D3C1C
  if (!crb(c,0)) { goto L_800D3C28; } // 800D3C20
  c->r[31]=c->r[29]|c->r[29]; // 800D3C24
L_800D3C28:;
  c->r[3]=c->r[27]|c->r[27]; // 800D3C28
  c->r[4]=c->r[28]|c->r[28]; // 800D3C2C
  c->r[5]=c->r[31]|c->r[31]; // 800D3C30
  c->r[6]=c->r[30]|c->r[30]; // 800D3C34
  c->r[7]=0u+0x00000000u; // 800D3C38
  c->lr=0x800D3C40u; f_800D3970(c); // 800D3C3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3C40
  if (!crb(c,2)) { goto L_800D3C50; } // 800D3C44
  c->r[3]=0u+0x00000000u; // 800D3C48
  goto L_800D3C7C; // 800D3C4C
L_800D3C50:;
  c->r[3]=c->r[27]|c->r[27]; // 800D3C50
  c->lr=0x800D3C58u; f_800D3DA0(c); // 800D3C54
  cmps(c,0,(int32_t)c->r[3],0); // 800D3C58
  if (!crb(c,2)) { goto L_800D3C68; } // 800D3C5C
  c->r[3]=0u+0x00000000u; // 800D3C60
  goto L_800D3C7C; // 800D3C64
L_800D3C68:;
  c->r[28]=c->r[28]+c->r[31]; // 800D3C68
  c->r[29]=c->r[29]-c->r[31]; // 800D3C6C
L_800D3C70:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D3C70
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3C18; } // 800D3C74
  c->r[3]=0u+0x00000001u; // 800D3C78
L_800D3C7C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D3C7C
  c->lr=0x800D3C84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3C80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3C84
  c->lr=c->r[0]; // 800D3C88
  c->r[1]=c->r[1]+0x00000020u; // 800D3C8C
  return; // 800D3C90
}

// EXIDma
void f_800D3CA0(Ctx* __restrict c) {
  trace_call(0x800D3CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CA0
  c->r[0]=c->lr; // 800D3CA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3CA8
  c->r[11]=c->r[1]+0x00000030u; // 800D3CAC
  c->lr=0x800D3CB4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3CB0
  c->r[26]=c->r[3]|c->r[3]; // 800D3CB4
  c->r[27]=c->r[4]|c->r[4]; // 800D3CB8
  c->r[28]=c->r[5]|c->r[5]; // 800D3CBC
  c->r[29]=c->r[6]|c->r[6]; // 800D3CC0
  c->r[25]=c->r[7]|c->r[7]; // 800D3CC4
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D3CC8
  c->r[3]=0u+0x802F0000u; // 800D3CCC
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D3CD0
  c->r[31]=c->r[3]+c->r[0]; // 800D3CD4
  c->lr=0x800D3CDCu; f_800CBAA0(c); // 800D3CD8
  c->r[30]=c->r[3]|c->r[3]; // 800D3CDC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3CE0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D3CE4
  if (!crb(c,2)) { goto L_800D3CF8; } // 800D3CE8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3CEC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D3CF0
  if (!crb(c,2)) { goto L_800D3D08; } // 800D3CF4
L_800D3CF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3CF8
  c->lr=0x800D3D00u; f_800CBAE0(c); // 800D3CFC
  c->r[3]=0u+0x00000000u; // 800D3D00
  goto L_800D3D80; // 800D3D04
L_800D3D08:;
  W32(c->r[31]+0x00000004u,c->r[25]); // 800D3D08
  cmps(c,0,(int32_t)c->r[25],0); // 800D3D0C
  if (crb(c,2)) { goto L_800D3D44; } // 800D3D10
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3D14
  c->r[0]=0u+0xCD000000u; // 800D3D18
  c->r[3]=c->r[0]+c->r[3]; // 800D3D1C
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D3D20
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D3D24
  c->r[0]=c->r[0]|0x00000008u; // 800D3D28
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D3D2C
  c->r[3]=0u+0x00200000u; // 800D3D30
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D3D34
  c->r[0]=c->r[0]-c->r[26]; // 800D3D38
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D3D3C
  c->lr=0x800D3D44u; f_800CBEF0(c); // 800D3D40
L_800D3D44:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3D44
  c->r[0]=c->r[0]|0x00000001u; // 800D3D48
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D3D4C
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3D50
  c->r[4]=rotl(c->r[27],0)&0xFFFFFFE0u; // 800D3D54
  c->r[0]=0u+0xCD000000u; // 800D3D58
  c->r[3]=c->r[0]+c->r[3]; // 800D3D5C
  W32(c->r[3]+0x00006804u,c->r[4]); // 800D3D60
  W32(c->r[3]+0x00006808u,c->r[28]); // 800D3D64
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D3D68
  c->r[0]=c->r[0]|0x00000003u; // 800D3D6C
  W32(c->r[3]+0x0000680Cu,c->r[0]); // 800D3D70
  c->r[3]=c->r[30]|c->r[30]; // 800D3D74
  c->lr=0x800D3D7Cu; f_800CBAE0(c); // 800D3D78
  c->r[3]=0u+0x00000001u; // 800D3D7C
L_800D3D80:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3D80
  c->lr=0x800D3D88u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3D84
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3D88
  c->lr=c->r[0]; // 800D3D8C
  c->r[1]=c->r[1]+0x00000030u; // 800D3D90
  return; // 800D3D94
}

// EXISync
void f_800D3DA0(Ctx* __restrict c) {
  trace_call(0x800D3DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3DA0
  c->r[0]=c->lr; // 800D3DA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3DA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3DAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3DB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3DB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D3DB8
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D3DBC
  c->r[4]=0u+0x802F0000u; // 800D3DC0
  c->r[4]=c->r[4]+0xFFFFA450u; // 800D3DC4
  c->r[31]=c->r[4]+c->r[0]; // 800D3DC8
  c->r[29]=0u+0x00000000u; // 800D3DCC
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800D3DD0
  c->r[0]=0u+0xCD000000u; // 800D3DD4
  c->r[3]=c->r[0]+c->r[30]; // 800D3DD8
  goto L_800D3FEC; // 800D3DDC
L_800D3DE0:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800D3DE0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D3DE4
  if (!crb(c,2)) { goto L_800D3FEC; } // 800D3DE8
  c->lr=0x800D3DF0u; f_800CBAA0(c); // 800D3DEC
  c->r[28]=c->r[3]|c->r[3]; // 800D3DF0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3DF4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D3DF8
  if (crb(c,2)) { goto L_800D3FE0; } // 800D3DFC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3E00
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D3E04
  if (crb(c,2)) { goto L_800D3F5C; } // 800D3E08
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3E0C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D3E10
  if (crb(c,2)) { goto L_800D3F50; } // 800D3E14
  c->r[5]=R32(c->r[31]+0x00000010u); // 800D3E18
  cmps(c,1,(int32_t)c->r[5],0); // 800D3E1C
  if (crb(c,6)) { goto L_800D3F50; } // 800D3E20
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D3E24
  c->r[0]=0u+0xCD000000u; // 800D3E28
  c->r[3]=c->r[0]+c->r[30]; // 800D3E2C
  c->r[0]=R32(c->r[3]+0x00006810u); // 800D3E30
  c->r[3]=0u+0x00000000u; // 800D3E34
  if (!crb(c,5)) { goto L_800D3F50; } // 800D3E38
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 800D3E3C
  cmps(c,0,(int32_t)c->r[5],8); // 800D3E40
  if (!crb(c,1)) { goto L_800D3F24; } // 800D3E44
  c->r[8]=0u+0x00000000u; // 800D3E48
  if (crb(c,4)) { goto L_800D3E64; } // 800D3E4C
  c->r[6]=0u+0x80000000u; // 800D3E50
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800D3E54
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D3E58
  if (crb(c,1)) { goto L_800D3E64; } // 800D3E5C
  c->r[8]=0u+0x00000001u; // 800D3E60
L_800D3E64:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D3E64
  if (crb(c,2)) { goto L_800D3F24; } // 800D3E68
  c->r[6]=c->r[7]+0x00000007u; // 800D3E6C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 800D3E70
  c->ctr=c->r[6]; // 800D3E74
  cmps(c,0,(int32_t)c->r[7],0); // 800D3E78
  if (!crb(c,1)) { goto L_800D3F24; } // 800D3E7C
L_800D3E80:;
  c->r[6]=addc(c,~c->r[3],0x00000003u,1); // 800D3E80
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3E84
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3E88
  W8(c->r[4]+0x00000000u,c->r[6]); // 800D3E8C
  c->r[6]=c->r[3]+0x00000001u; // 800D3E90
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D3E94
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3E98
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3E9C
  W8(c->r[4]+0x00000001u,c->r[6]); // 800D3EA0
  c->r[6]=c->r[3]+0x00000002u; // 800D3EA4
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D3EA8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3EAC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3EB0
  W8(c->r[4]+0x00000002u,c->r[6]); // 800D3EB4
  c->r[6]=0u-c->r[3]; // 800D3EB8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3EBC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3EC0
  W8(c->r[4]+0x00000003u,c->r[6]); // 800D3EC4
  c->r[6]=c->r[3]+0x00000004u; // 800D3EC8
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D3ECC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3ED0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3ED4
  W8(c->r[4]+0x00000004u,c->r[6]); // 800D3ED8
  c->r[6]=c->r[3]+0x00000005u; // 800D3EDC
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D3EE0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3EE4
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3EE8
  W8(c->r[4]+0x00000005u,c->r[6]); // 800D3EEC
  c->r[6]=c->r[3]+0x00000006u; // 800D3EF0
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D3EF4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3EF8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3EFC
  W8(c->r[4]+0x00000006u,c->r[6]); // 800D3F00
  c->r[6]=c->r[3]+0x00000007u; // 800D3F04
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D3F08
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D3F0C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D3F10
  W8(c->r[4]+0x00000007u,c->r[6]); // 800D3F14
  c->r[4]=c->r[4]+0x00000008u; // 800D3F18
  c->r[3]=c->r[3]+0x00000008u; // 800D3F1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3E80; } // 800D3F20
L_800D3F24:;
  c->r[6]=c->r[5]-c->r[3]; // 800D3F24
  c->ctr=c->r[6]; // 800D3F28
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800D3F2C
  if (!crb(c,0)) { goto L_800D3F50; } // 800D3F30
L_800D3F34:;
  c->r[5]=addc(c,~c->r[3],0x00000003u,1); // 800D3F34
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3F38
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 800D3F3C
  W8(c->r[4]+0x00000000u,c->r[5]); // 800D3F40
  c->r[4]=c->r[4]+0x00000001u; // 800D3F44
  c->r[3]=c->r[3]+0x00000001u; // 800D3F48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3F34; } // 800D3F4C
L_800D3F50:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3F50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D3F54
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D3F58
L_800D3F5C:;
  c->lr=0x800D3F60u; f_800C65A0(c); // 800D3F5C
  cmpu(c,0,c->r[3],0x000000FFu); // 800D3F60
  if (!crb(c,2)) { goto L_800D3FDC; } // 800D3F64
  c->lr=0x800D3F6Cu; f_800C52D0(c); // 800D3F68
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 800D3F6C
  c->r[0]=c->r[3]+0xE0000000u; // 800D3F70
  cmpu(c,0,c->r[0],0x00000000u); // 800D3F74
  if (crb(c,2)) { goto L_800D3FDC; } // 800D3F78
  c->r[0]=R32(c->r[31]+0x00000010u); // 800D3F7C
  cmps(c,0,(int32_t)c->r[0],4); // 800D3F80
  if (!crb(c,2)) { goto L_800D3FDC; } // 800D3F84
  c->r[0]=0u+0xCD000000u; // 800D3F88
  c->r[4]=c->r[0]+c->r[30]; // 800D3F8C
  c->r[0]=R32(c->r[4]+0x00006800u); // 800D3F90
  c->r[0]=rotl(c->r[0],0)&0x00000070u; cr0(c,c->r[0]); // 800D3F94
  if (!crb(c,2)) { goto L_800D3FDC; } // 800D3F98
  c->r[3]=R32(c->r[4]+0x00006810u); // 800D3F9C
  c->r[0]=c->r[3]+0xFEFF0000u; // 800D3FA0
  cmpu(c,0,c->r[0],0x00000000u); // 800D3FA4
  if (crb(c,2)) { goto L_800D3FCC; } // 800D3FA8
  c->r[3]=R32(c->r[4]+0x00006810u); // 800D3FAC
  c->r[0]=c->r[3]+0xFAF90000u; // 800D3FB0
  cmpu(c,0,c->r[0],0x00000000u); // 800D3FB4
  if (crb(c,2)) { goto L_800D3FCC; } // 800D3FB8
  c->r[3]=R32(c->r[4]+0x00006810u); // 800D3FBC
  c->r[0]=c->r[3]+0xFBDE0000u; // 800D3FC0
  cmpu(c,0,c->r[0],0x00000001u); // 800D3FC4
  if (!crb(c,2)) { goto L_800D3FDC; } // 800D3FC8
L_800D3FCC:;
  c->r[3]=0u+0x80000000u; // 800D3FCC
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800D3FD0
  cmpu(c,0,c->r[0],0x00008200u); // 800D3FD4
  if (!crb(c,2)) { goto L_800D3FE0; } // 800D3FD8
L_800D3FDC:;
  c->r[29]=0u+0x00000001u; // 800D3FDC
L_800D3FE0:;
  c->r[3]=c->r[28]|c->r[28]; // 800D3FE0
  c->lr=0x800D3FE8u; f_800CBAE0(c); // 800D3FE4
  goto L_800D3FF8; // 800D3FE8
L_800D3FEC:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3FEC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D3FF0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3DE0; } // 800D3FF4
L_800D3FF8:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3FF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3FFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4000
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4004
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4008
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D400C
  c->lr=c->r[0]; // 800D4010
  c->r[1]=c->r[1]+0x00000020u; // 800D4014
  return; // 800D4018
}

// EXISetExiCallback
void f_800D4020(Ctx* __restrict c) {
  trace_call(0x800D4020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4020
  c->r[0]=c->lr; // 800D4024
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4028
  c->r[11]=c->r[1]+0x00000020u; // 800D402C
  c->lr=0x800D4034u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4030
  c->r[26]=c->r[3]|c->r[3]; // 800D4034
  c->r[27]=c->r[4]|c->r[4]; // 800D4038
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D403C
  c->r[31]=0u+0x802F0000u; // 800D4040
  c->r[31]=c->r[31]+0xFFFFA450u; // 800D4044
  c->r[30]=c->r[31]+c->r[0]; // 800D4048
  c->lr=0x800D4050u; f_800CBAA0(c); // 800D404C
  c->r[28]=c->r[3]|c->r[3]; // 800D4050
  c->r[29]=R32(c->r[30]+0x00000000u); // 800D4054
  W32(c->r[30]+0x00000000u,c->r[27]); // 800D4058
  cmps(c,0,(int32_t)c->r[26],2); // 800D405C
  if (crb(c,2)) { goto L_800D4074; } // 800D4060
  c->r[3]=c->r[26]|c->r[26]; // 800D4064
  c->r[4]=c->r[30]|c->r[30]; // 800D4068
  c->lr=0x800D4070u; f_800D3880(c); // 800D406C
  goto L_800D4080; // 800D4070
L_800D4074:;
  c->r[3]=0u+0x00000000u; // 800D4074
  c->r[4]=c->r[31]|c->r[31]; // 800D4078
  c->lr=0x800D4080u; f_800D3880(c); // 800D407C
L_800D4080:;
  c->r[3]=c->r[28]|c->r[28]; // 800D4080
  c->lr=0x800D4088u; f_800CBAE0(c); // 800D4084
  c->r[3]=c->r[29]|c->r[29]; // 800D4088
  c->r[11]=c->r[1]+0x00000020u; // 800D408C
  c->lr=0x800D4094u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4090
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4094
  c->lr=c->r[0]; // 800D4098
  c->r[1]=c->r[1]+0x00000020u; // 800D409C
  return; // 800D40A0
}

// __EXIProbe
void f_800D40B0(Ctx* __restrict c) {
  trace_call(0x800D40B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D40B0
  c->r[0]=c->lr; // 800D40B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D40B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D40BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D40C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D40C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D40C8
  c->r[28]=c->r[3]|c->r[3]; // 800D40CC
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D40D0
  c->r[4]=0u+0x802F0000u; // 800D40D4
  c->r[4]=c->r[4]+0xFFFFA450u; // 800D40D8
  c->r[31]=c->r[4]+c->r[0]; // 800D40DC
  cmps(c,0,(int32_t)c->r[3],2); // 800D40E0
  if (!crb(c,2)) { goto L_800D40F0; } // 800D40E4
  c->r[3]=0u+0x00000001u; // 800D40E8
  goto L_800D4210; // 800D40EC
L_800D40F0:;
  c->r[29]=0u+0x00000001u; // 800D40F0
  c->lr=0x800D40F8u; f_800CBAA0(c); // 800D40F4
  c->r[30]=c->r[3]|c->r[3]; // 800D40F8
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800D40FC
  c->r[0]=0u+0xCD000000u; // 800D4100
  c->r[3]=c->r[0]+c->r[3]; // 800D4104
  c->r[5]=R32(c->r[3]+0x00006800u); // 800D4108
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D410C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D4110
  if (!crb(c,2)) { goto L_800D41D8; } // 800D4114
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 800D4118
  if (crb(c,2)) { goto L_800D4148; } // 800D411C
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4120
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D4124
  c->r[0]=c->r[0]|0x00000800u; // 800D4128
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D412C
  c->r[4]=0u+0x00000000u; // 800D4130
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D4134
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D4138
  c->r[0]=0u+0x80000000u; // 800D413C
  c->r[3]=c->r[0]+c->r[3]; // 800D4140
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D4144
L_800D4148:;
  c->r[0]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[0]); // 800D4148
  if (crb(c,2)) { goto L_800D41B8; } // 800D414C
  c->lr=0x800D4154u; f_800D0510(c); // 800D4150
  c->r[31]=0u+0x80000000u; // 800D4154
  c->r[0]=R32(c->r[31]+0x000000F8u); // 800D4158
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D415C
  c->r[5]=0u+0x10620000u; // 800D4160
  c->r[5]=c->r[5]+0x00004DD3u; // 800D4164
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 800D4168
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 800D416C
  c->r[5]=0u+0x00000000u; // 800D4170
  c->lr=0x800D4178u; f_802179FC(c); // 800D4174
  c->r[6]=0u+0x00000064u; // 800D4178
  c->r[5]=0u+0x00000000u; // 800D417C
  c->lr=0x800D4184u; f_802179FC(c); // 800D4180
  c->r[4]=c->r[4]+0x00000001u; // 800D4184
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D4188
  c->r[3]=c->r[31]+c->r[0]; // 800D418C
  c->r[0]=R32(c->r[3]+0x000030C0u); // 800D4190
  cmps(c,0,(int32_t)c->r[0],0); // 800D4194
  if (!crb(c,2)) { goto L_800D41A0; } // 800D4198
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D419C
L_800D41A0:;
  c->r[0]=R32(c->r[3]+0x000030C0u); // 800D41A0
  c->r[0]=c->r[4]-c->r[0]; // 800D41A4
  cmps(c,0,(int32_t)c->r[0],3); // 800D41A8
  if (!crb(c,0)) { goto L_800D4204; } // 800D41AC
  c->r[29]=0u+0x00000000u; // 800D41B0
  goto L_800D4204; // 800D41B4
L_800D41B8:;
  c->r[4]=0u+0x00000000u; // 800D41B8
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D41BC
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D41C0
  c->r[0]=0u+0x80000000u; // 800D41C4
  c->r[3]=c->r[0]+c->r[3]; // 800D41C8
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D41CC
  c->r[29]=0u+0x00000000u; // 800D41D0
  goto L_800D4204; // 800D41D4
L_800D41D8:;
  c->r[0]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[0]); // 800D41D8
  if (crb(c,2)) { goto L_800D41E8; } // 800D41DC
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 800D41E0
  if (crb(c,2)) { goto L_800D4204; } // 800D41E4
L_800D41E8:;
  c->r[4]=0u+0x00000000u; // 800D41E8
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D41EC
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D41F0
  c->r[0]=0u+0x80000000u; // 800D41F4
  c->r[3]=c->r[0]+c->r[3]; // 800D41F8
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D41FC
  c->r[29]=0u+0x00000000u; // 800D4200
L_800D4204:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4204
  c->lr=0x800D420Cu; f_800CBAE0(c); // 800D4208
  c->r[3]=c->r[29]|c->r[29]; // 800D420C
L_800D4210:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4210
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4214
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4218
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D421C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4220
  c->lr=c->r[0]; // 800D4224
  c->r[1]=c->r[1]+0x00000020u; // 800D4228
  return; // 800D422C
}

// EXIAttach
void f_800D4230(Ctx* __restrict c) {
  trace_call(0x800D4230u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4230
  c->r[0]=c->lr; // 800D4234
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D4238
  c->r[11]=c->r[1]+0x00000030u; // 800D423C
  c->lr=0x800D4244u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4240
  c->r[29]=c->r[3]|c->r[3]; // 800D4244
  c->r[27]=c->r[4]|c->r[4]; // 800D4248
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D424C
  c->r[4]=0u+0x802F0000u; // 800D4250
  c->r[4]=c->r[4]+0xFFFFA450u; // 800D4254
  c->r[31]=c->r[4]+c->r[0]; // 800D4258
  c->lr=0x800D4260u; f_800D40B0(c); // 800D425C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4260
  if (crb(c,2)) { goto L_800D4284; } // 800D4264
  c->r[0]=R32(c->r[31]+0x00000020u); // 800D4268
  cmps(c,0,(int32_t)c->r[0],0); // 800D426C
  if (!crb(c,2)) { goto L_800D4284; } // 800D4270
  c->r[3]=c->r[29]|c->r[29]; // 800D4274
  c->r[4]=0u+0x00000000u; // 800D4278
  c->r[5]=c->r[1]+0x00000008u; // 800D427C
  c->lr=0x800D4284u; f_800D4DD0(c); // 800D4280
L_800D4284:;
  c->lr=0x800D4288u; f_800CBAA0(c); // 800D4284
  c->r[30]=c->r[3]|c->r[3]; // 800D4288
  c->r[0]=R32(c->r[31]+0x00000020u); // 800D428C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4290
  if (!crb(c,2)) { goto L_800D42A4; } // 800D4294
  c->lr=0x800D429Cu; f_800CBAE0(c); // 800D4298
  c->r[3]=0u+0x00000000u; // 800D429C
  goto L_800D4330; // 800D42A0
L_800D42A4:;
  c->lr=0x800D42A8u; f_800CBAA0(c); // 800D42A4
  c->r[28]=c->r[3]|c->r[3]; // 800D42A8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D42AC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D42B0
  if (!crb(c,2)) { goto L_800D42C8; } // 800D42B4
  c->r[3]=c->r[29]|c->r[29]; // 800D42B8
  c->lr=0x800D42C0u; f_800D40B0(c); // 800D42BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D42C0
  if (!crb(c,2)) { goto L_800D42D8; } // 800D42C4
L_800D42C8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D42C8
  c->lr=0x800D42D0u; f_800CBAE0(c); // 800D42CC
  c->r[29]=0u+0x00000000u; // 800D42D0
  goto L_800D4324; // 800D42D4
L_800D42D8:;
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 800D42D8
  c->r[0]=0u+0xCD000000u; // 800D42DC
  c->r[3]=c->r[0]+c->r[3]; // 800D42E0
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D42E4
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D42E8
  c->r[0]=c->r[0]|0x00000002u; // 800D42EC
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D42F0
  W32(c->r[31]+0x00000008u,c->r[27]); // 800D42F4
  c->r[3]=0u+0x00100000u; // 800D42F8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D42FC
  c->r[0]=c->r[0]-c->r[29]; // 800D4300
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D4304
  c->lr=0x800D430Cu; f_800CBEF0(c); // 800D4308
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D430C
  c->r[0]=c->r[0]|0x00000008u; // 800D4310
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D4314
  c->r[3]=c->r[28]|c->r[28]; // 800D4318
  c->lr=0x800D4320u; f_800CBAE0(c); // 800D431C
  c->r[29]=0u+0x00000001u; // 800D4320
L_800D4324:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4324
  c->lr=0x800D432Cu; f_800CBAE0(c); // 800D4328
  c->r[3]=c->r[29]|c->r[29]; // 800D432C
L_800D4330:;
  c->r[11]=c->r[1]+0x00000030u; // 800D4330
  c->lr=0x800D4338u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4334
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D4338
  c->lr=c->r[0]; // 800D433C
  c->r[1]=c->r[1]+0x00000030u; // 800D4340
  return; // 800D4344
}

// EXIDetach
void f_800D4350(Ctx* __restrict c) {
  trace_call(0x800D4350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4350
  c->r[0]=c->lr; // 800D4354
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4358
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D435C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4360
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4364
  c->r[29]=c->r[3]|c->r[3]; // 800D4368
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D436C
  c->r[3]=0u+0x802F0000u; // 800D4370
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4374
  c->r[31]=c->r[3]+c->r[0]; // 800D4378
  c->lr=0x800D4380u; f_800CBAA0(c); // 800D437C
  c->r[30]=c->r[3]|c->r[3]; // 800D4380
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4384
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D4388
  if (!crb(c,2)) { goto L_800D439C; } // 800D438C
  c->lr=0x800D4394u; f_800CBAE0(c); // 800D4390
  c->r[3]=0u+0x00000001u; // 800D4394
  goto L_800D43EC; // 800D4398
L_800D439C:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D439C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D43A0
  if (crb(c,2)) { goto L_800D43C0; } // 800D43A4
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D43A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D43AC
  if (!crb(c,2)) { goto L_800D43C0; } // 800D43B0
  c->lr=0x800D43B8u; f_800CBAE0(c); // 800D43B4
  c->r[3]=0u+0x00000000u; // 800D43B8
  goto L_800D43EC; // 800D43BC
L_800D43C0:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D43C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D43C4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D43C8
  c->r[3]=0u+0x00500000u; // 800D43CC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D43D0
  c->r[0]=c->r[0]-c->r[29]; // 800D43D4
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D43D8
  c->lr=0x800D43E0u; f_800CBE70(c); // 800D43DC
  c->r[3]=c->r[30]|c->r[30]; // 800D43E0
  c->lr=0x800D43E8u; f_800CBAE0(c); // 800D43E4
  c->r[3]=0u+0x00000001u; // 800D43E8
L_800D43EC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D43EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D43F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D43F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D43F8
  c->lr=c->r[0]; // 800D43FC
  c->r[1]=c->r[1]+0x00000020u; // 800D4400
  return; // 800D4404
}

// EXISelect
void f_800D4410(Ctx* __restrict c) {
  trace_call(0x800D4410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4410
  c->r[0]=c->lr; // 800D4414
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4418
  c->r[11]=c->r[1]+0x00000020u; // 800D441C
  c->lr=0x800D4424u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4420
  c->r[27]=c->r[3]|c->r[3]; // 800D4424
  c->r[28]=c->r[4]|c->r[4]; // 800D4428
  c->r[29]=c->r[5]|c->r[5]; // 800D442C
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4430
  c->r[3]=0u+0x802F0000u; // 800D4434
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4438
  c->r[31]=c->r[3]+c->r[0]; // 800D443C
  c->lr=0x800D4444u; f_800CBAA0(c); // 800D4440
  c->r[30]=c->r[3]|c->r[3]; // 800D4444
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4448
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D444C
  if (!crb(c,2)) { goto L_800D4498; } // 800D4450
  cmps(c,0,(int32_t)c->r[27],2); // 800D4454
  if (crb(c,2)) { goto L_800D44A8; } // 800D4458
  cmps(c,0,(int32_t)c->r[28],0); // 800D445C
  if (!crb(c,2)) { goto L_800D4480; } // 800D4460
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4464
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D4468
  if (!crb(c,2)) { goto L_800D4480; } // 800D446C
  c->r[3]=c->r[27]|c->r[27]; // 800D4470
  c->lr=0x800D4478u; f_800D40B0(c); // 800D4474
  cmps(c,0,(int32_t)c->r[3],0); // 800D4478
  if (crb(c,2)) { goto L_800D4498; } // 800D447C
L_800D4480:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4480
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D4484
  if (crb(c,2)) { goto L_800D4498; } // 800D4488
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D448C
  cmpu(c,0,c->r[0],c->r[28]); // 800D4490
  if (crb(c,2)) { goto L_800D44A8; } // 800D4494
L_800D4498:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4498
  c->lr=0x800D44A0u; f_800CBAE0(c); // 800D449C
  c->r[3]=0u+0x00000000u; // 800D44A0
  goto L_800D4524; // 800D44A4
L_800D44A8:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D44A8
  c->r[0]=c->r[0]|0x00000004u; // 800D44AC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D44B0
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)20); // 800D44B4
  c->r[0]=0u+0xCD000000u; // 800D44B8
  c->r[4]=c->r[0]+c->r[3]; // 800D44BC
  c->r[3]=R32(c->r[4]+0x00006800u); // 800D44C0
  c->r[3]=c->r[3]&0x00000405u; cr0(c,c->r[3]); // 800D44C4
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 800D44C8
  c->r[3]=c->r[3]|c->r[0]; // 800D44CC
  c->r[0]=0u+0x00000001u; // 800D44D0
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 800D44D4
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 800D44D8
  c->r[3]=c->r[3]|c->r[0]; // 800D44DC
  W32(c->r[4]+0x00006800u,c->r[3]); // 800D44E0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D44E4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D44E8
  if (crb(c,2)) { goto L_800D4518; } // 800D44EC
  cmps(c,0,(int32_t)c->r[27],0); // 800D44F0
  if (crb(c,2)) { goto L_800D4504; } // 800D44F4
  cmps(c,0,(int32_t)c->r[27],1); // 800D44F8
  if (crb(c,2)) { goto L_800D4510; } // 800D44FC
  goto L_800D4518; // 800D4500
L_800D4504:;
  c->r[3]=0u+0x00100000u; // 800D4504
  c->lr=0x800D450Cu; f_800CBE70(c); // 800D4508
  goto L_800D4518; // 800D450C
L_800D4510:;
  c->r[3]=0u+0x00020000u; // 800D4510
  c->lr=0x800D4518u; f_800CBE70(c); // 800D4514
L_800D4518:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4518
  c->lr=0x800D4520u; f_800CBAE0(c); // 800D451C
  c->r[3]=0u+0x00000001u; // 800D4520
L_800D4524:;
  c->r[11]=c->r[1]+0x00000020u; // 800D4524
  c->lr=0x800D452Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4528
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D452C
  c->lr=c->r[0]; // 800D4530
  c->r[1]=c->r[1]+0x00000020u; // 800D4534
  return; // 800D4538
}

// EXIDeselect
void f_800D4540(Ctx* __restrict c) {
  trace_call(0x800D4540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4540
  c->r[0]=c->lr; // 800D4544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D454C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4550
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4554
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D4558
  c->r[28]=c->r[3]|c->r[3]; // 800D455C
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4560
  c->r[3]=0u+0x802F0000u; // 800D4564
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4568
  c->r[31]=c->r[3]+c->r[0]; // 800D456C
  c->lr=0x800D4574u; f_800CBAA0(c); // 800D4570
  c->r[29]=c->r[3]|c->r[3]; // 800D4574
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4578
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D457C
  if (!crb(c,2)) { goto L_800D4590; } // 800D4580
  c->lr=0x800D4588u; f_800CBAE0(c); // 800D4584
  c->r[3]=0u+0x00000000u; // 800D4588
  goto L_800D461C; // 800D458C
L_800D4590:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4590
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D4594
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D4598
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800D459C
  c->r[0]=0u+0xCD000000u; // 800D45A0
  c->r[3]=c->r[0]+c->r[3]; // 800D45A4
  c->r[30]=R32(c->r[3]+0x00006800u); // 800D45A8
  c->r[0]=c->r[30]&0x00000405u; cr0(c,c->r[0]); // 800D45AC
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D45B0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D45B4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D45B8
  if (crb(c,2)) { goto L_800D45E8; } // 800D45BC
  cmps(c,0,(int32_t)c->r[28],0); // 800D45C0
  if (crb(c,2)) { goto L_800D45D4; } // 800D45C4
  cmps(c,0,(int32_t)c->r[28],1); // 800D45C8
  if (crb(c,2)) { goto L_800D45E0; } // 800D45CC
  goto L_800D45E8; // 800D45D0
L_800D45D4:;
  c->r[3]=0u+0x00100000u; // 800D45D4
  c->lr=0x800D45DCu; f_800CBEF0(c); // 800D45D8
  goto L_800D45E8; // 800D45DC
L_800D45E0:;
  c->r[3]=0u+0x00020000u; // 800D45E0
  c->lr=0x800D45E8u; f_800CBEF0(c); // 800D45E4
L_800D45E8:;
  c->r[3]=c->r[29]|c->r[29]; // 800D45E8
  c->lr=0x800D45F0u; f_800CBAE0(c); // 800D45EC
  cmps(c,0,(int32_t)c->r[28],2); // 800D45F0
  if (crb(c,2)) { goto L_800D4618; } // 800D45F4
  c->r[0]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[0]); // 800D45F8
  if (crb(c,2)) { goto L_800D4618; } // 800D45FC
  c->r[3]=c->r[28]|c->r[28]; // 800D4600
  c->lr=0x800D4608u; f_800D40B0(c); // 800D4604
  c->r[0]=0u-c->r[3]; // 800D4608
  c->r[0]=c->r[0]|c->r[3]; // 800D460C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D4610
  goto L_800D461C; // 800D4614
L_800D4618:;
  c->r[3]=0u+0x00000001u; // 800D4618
L_800D461C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D461C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4620
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4624
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4628
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D462C
  c->lr=c->r[0]; // 800D4630
  c->r[1]=c->r[1]+0x00000020u; // 800D4634
  return; // 800D4638
}

// EXIIntrruptHandler
void f_800D4640(Ctx* __restrict c) {
  trace_call(0x800D4640u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4640
  c->r[0]=c->lr; // 800D4644
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800D4648
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800D464C
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800D4650
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800D4654
  c->r[29]=c->r[4]|c->r[4]; // 800D4658
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 800D465C
  c->r[3]=0u+0x55550000u; // 800D4660
  c->r[3]=c->r[3]+0x00005556u; // 800D4664
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D4668
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800D466C
  c->r[31]=c->r[3]+c->r[0]; // 800D4670
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 800D4674
  c->r[0]=0u+0xCD000000u; // 800D4678
  c->r[3]=c->r[0]+c->r[3]; // 800D467C
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4680
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D4684
  c->r[0]=c->r[0]|0x00000002u; // 800D4688
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D468C
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800D4690
  c->r[3]=0u+0x802F0000u; // 800D4694
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4698
  c->r[30]=R32(c->r[3]+c->r[0]); // 800D469C
  cmps(c,0,(int32_t)c->r[30],0); // 800D46A0
  if (crb(c,2)) { goto L_800D46DC; } // 800D46A4
  c->r[3]=c->r[1]+0x00000008u; // 800D46A8
  c->lr=0x800D46B0u; f_800C8020(c); // 800D46AC
  c->r[3]=c->r[1]+0x00000008u; // 800D46B0
  c->lr=0x800D46B8u; f_800C7DE0(c); // 800D46B4
  c->r[3]=c->r[31]|c->r[31]; // 800D46B8
  c->r[4]=c->r[29]|c->r[29]; // 800D46BC
  c->r[12]=c->r[30]|c->r[30]; // 800D46C0
  c->ctr=c->r[12]; // 800D46C4
  if (true) { c->lr=0x800D46CCu; dispatch(c,c->ctr); } // 800D46C8
  c->r[3]=c->r[1]+0x00000008u; // 800D46CC
  c->lr=0x800D46D4u; f_800C8020(c); // 800D46D0
  c->r[3]=c->r[29]|c->r[29]; // 800D46D4
  c->lr=0x800D46DCu; f_800C7DE0(c); // 800D46D8
L_800D46DC:;
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800D46DC
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800D46E0
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800D46E4
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800D46E8
  c->lr=c->r[0]; // 800D46EC
  c->r[1]=c->r[1]+0x000002E0u; // 800D46F0
  return; // 800D46F4
}

// TCIntrruptHandler
void f_800D4700(Ctx* __restrict c) {
  trace_call(0x800D4700u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4700
  c->r[0]=c->lr; // 800D4704
  W32(c->r[1]+0x000002F4u,c->r[0]); // 800D4708
  c->r[11]=c->r[1]+0x000002F0u; // 800D470C
  c->lr=0x800D4714u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4710
  c->r[27]=c->r[4]|c->r[4]; // 800D4714
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 800D4718
  c->r[4]=0u+0x55550000u; // 800D471C
  c->r[4]=c->r[4]+0x00005556u; // 800D4720
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 800D4724
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800D4728
  c->r[29]=c->r[4]+c->r[0]; // 800D472C
  c->r[0]=rotl(c->r[29],6)&0xFFFFFFC0u; // 800D4730
  c->r[4]=0u+0x802F0000u; // 800D4734
  c->r[4]=c->r[4]+0xFFFFA450u; // 800D4738
  c->r[30]=c->r[4]+c->r[0]; // 800D473C
  c->r[31]=0u+0x80000000u; // 800D4740
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 800D4744
  c->lr=0x800D474Cu; f_800CBE70(c); // 800D4748
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 800D474C
  c->r[0]=0u+0xCD000000u; // 800D4750
  c->r[3]=c->r[0]+c->r[3]; // 800D4754
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4758
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D475C
  c->r[0]=c->r[0]|0x00000008u; // 800D4760
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4764
  c->r[28]=R32(c->r[30]+0x00000004u); // 800D4768
  cmps(c,0,(int32_t)c->r[28],0); // 800D476C
  if (crb(c,2)) { goto L_800D4900; } // 800D4770
  c->r[0]=0u+0x00000000u; // 800D4774
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D4778
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D477C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D4780
  if (crb(c,2)) { goto L_800D48CC; } // 800D4784
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4788
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D478C
  if (crb(c,2)) { goto L_800D48C0; } // 800D4790
  c->r[5]=R32(c->r[30]+0x00000010u); // 800D4794
  cmps(c,1,(int32_t)c->r[5],0); // 800D4798
  if (crb(c,6)) { goto L_800D48C0; } // 800D479C
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D47A0
  c->r[0]=R32(c->r[3]+0x00006810u); // 800D47A4
  c->r[3]=0u+0x00000000u; // 800D47A8
  if (!crb(c,5)) { goto L_800D48C0; } // 800D47AC
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 800D47B0
  cmps(c,0,(int32_t)c->r[5],8); // 800D47B4
  if (!crb(c,1)) { goto L_800D4894; } // 800D47B8
  c->r[8]=0u+0x00000000u; // 800D47BC
  if (crb(c,4)) { goto L_800D47D4; } // 800D47C0
  c->r[6]=c->r[31]+0xFFFFFFFEu; // 800D47C4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D47C8
  if (crb(c,1)) { goto L_800D47D4; } // 800D47CC
  c->r[8]=0u+0x00000001u; // 800D47D0
L_800D47D4:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D47D4
  if (crb(c,2)) { goto L_800D4894; } // 800D47D8
  c->r[6]=c->r[7]+0x00000007u; // 800D47DC
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 800D47E0
  c->ctr=c->r[6]; // 800D47E4
  cmps(c,0,(int32_t)c->r[7],0); // 800D47E8
  if (!crb(c,1)) { goto L_800D4894; } // 800D47EC
L_800D47F0:;
  c->r[6]=addc(c,~c->r[3],0x00000003u,1); // 800D47F0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D47F4
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D47F8
  W8(c->r[4]+0x00000000u,c->r[6]); // 800D47FC
  c->r[6]=c->r[3]+0x00000001u; // 800D4800
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4804
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4808
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D480C
  W8(c->r[4]+0x00000001u,c->r[6]); // 800D4810
  c->r[6]=c->r[3]+0x00000002u; // 800D4814
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4818
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D481C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4820
  W8(c->r[4]+0x00000002u,c->r[6]); // 800D4824
  c->r[6]=0u-c->r[3]; // 800D4828
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D482C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4830
  W8(c->r[4]+0x00000003u,c->r[6]); // 800D4834
  c->r[6]=c->r[3]+0x00000004u; // 800D4838
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D483C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4840
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4844
  W8(c->r[4]+0x00000004u,c->r[6]); // 800D4848
  c->r[6]=c->r[3]+0x00000005u; // 800D484C
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4850
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4854
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4858
  W8(c->r[4]+0x00000005u,c->r[6]); // 800D485C
  c->r[6]=c->r[3]+0x00000006u; // 800D4860
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4864
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4868
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D486C
  W8(c->r[4]+0x00000006u,c->r[6]); // 800D4870
  c->r[6]=c->r[3]+0x00000007u; // 800D4874
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4878
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D487C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4880
  W8(c->r[4]+0x00000007u,c->r[6]); // 800D4884
  c->r[4]=c->r[4]+0x00000008u; // 800D4888
  c->r[3]=c->r[3]+0x00000008u; // 800D488C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D47F0; } // 800D4890
L_800D4894:;
  c->r[6]=c->r[5]-c->r[3]; // 800D4894
  c->ctr=c->r[6]; // 800D4898
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800D489C
  if (!crb(c,0)) { goto L_800D48C0; } // 800D48A0
L_800D48A4:;
  c->r[5]=addc(c,~c->r[3],0x00000003u,1); // 800D48A4
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D48A8
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 800D48AC
  W8(c->r[4]+0x00000000u,c->r[5]); // 800D48B0
  c->r[4]=c->r[4]+0x00000001u; // 800D48B4
  c->r[3]=c->r[3]+0x00000001u; // 800D48B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D48A4; } // 800D48BC
L_800D48C0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D48C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D48C4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D48C8
L_800D48CC:;
  c->r[3]=c->r[1]+0x00000008u; // 800D48CC
  c->lr=0x800D48D4u; f_800C8020(c); // 800D48D0
  c->r[3]=c->r[1]+0x00000008u; // 800D48D4
  c->lr=0x800D48DCu; f_800C7DE0(c); // 800D48D8
  c->r[3]=c->r[29]|c->r[29]; // 800D48DC
  c->r[4]=c->r[27]|c->r[27]; // 800D48E0
  c->r[12]=c->r[28]|c->r[28]; // 800D48E4
  c->ctr=c->r[12]; // 800D48E8
  if (true) { c->lr=0x800D48F0u; dispatch(c,c->ctr); } // 800D48EC
  c->r[3]=c->r[1]+0x00000008u; // 800D48F0
  c->lr=0x800D48F8u; f_800C8020(c); // 800D48F4
  c->r[3]=c->r[27]|c->r[27]; // 800D48F8
  c->lr=0x800D4900u; f_800C7DE0(c); // 800D48FC
L_800D4900:;
  c->r[11]=c->r[1]+0x000002F0u; // 800D4900
  c->lr=0x800D4908u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4904
  c->r[0]=R32(c->r[1]+0x000002F4u); // 800D4908
  c->lr=c->r[0]; // 800D490C
  c->r[1]=c->r[1]+0x000002F0u; // 800D4910
  return; // 800D4914
}

// EXTIntrruptHandler
void f_800D4920(Ctx* __restrict c) {
  trace_call(0x800D4920u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4920
  c->r[0]=c->lr; // 800D4924
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800D4928
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800D492C
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800D4930
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800D4934
  W32(c->r[1]+0x000002D0u,c->r[28]); // 800D4938
  c->r[28]=c->r[4]|c->r[4]; // 800D493C
  c->r[0]=c->r[3]+0xFFFFFFF5u; // 800D4940
  c->r[3]=0u+0x55550000u; // 800D4944
  c->r[3]=c->r[3]+0x00005556u; // 800D4948
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D494C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800D4950
  c->r[31]=c->r[3]+c->r[0]; // 800D4954
  c->r[3]=0u+0x00500000u; // 800D4958
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D495C
  c->r[0]=c->r[0]-c->r[31]; // 800D4960
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D4964
  c->lr=0x800D496Cu; f_800CBE70(c); // 800D4968
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800D496C
  c->r[3]=0u+0x802F0000u; // 800D4970
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4974
  c->r[30]=c->r[3]+c->r[0]; // 800D4978
  c->r[29]=R32(c->r[30]+0x00000008u); // 800D497C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4980
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D4984
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D4988
  cmps(c,0,(int32_t)c->r[29],0); // 800D498C
  if (crb(c,2)) { goto L_800D49D0; } // 800D4990
  c->r[3]=c->r[1]+0x00000008u; // 800D4994
  c->lr=0x800D499Cu; f_800C8020(c); // 800D4998
  c->r[3]=c->r[1]+0x00000008u; // 800D499C
  c->lr=0x800D49A4u; f_800C7DE0(c); // 800D49A0
  c->r[0]=0u+0x00000000u; // 800D49A4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D49A8
  c->r[3]=c->r[31]|c->r[31]; // 800D49AC
  c->r[4]=c->r[28]|c->r[28]; // 800D49B0
  c->r[12]=c->r[29]|c->r[29]; // 800D49B4
  c->ctr=c->r[12]; // 800D49B8
  if (true) { c->lr=0x800D49C0u; dispatch(c,c->ctr); } // 800D49BC
  c->r[3]=c->r[1]+0x00000008u; // 800D49C0
  c->lr=0x800D49C8u; f_800C8020(c); // 800D49C4
  c->r[3]=c->r[28]|c->r[28]; // 800D49C8
  c->lr=0x800D49D0u; f_800C7DE0(c); // 800D49CC
L_800D49D0:;
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800D49D0
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800D49D4
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800D49D8
  c->r[28]=R32(c->r[1]+0x000002D0u); // 800D49DC
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800D49E0
  c->lr=c->r[0]; // 800D49E4
  c->r[1]=c->r[1]+0x000002E0u; // 800D49E8
  return; // 800D49EC
}

// EXIInit
void f_800D49F0(Ctx* __restrict c) {
  trace_call(0x800D49F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D49F0
  c->r[0]=c->lr; // 800D49F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D49F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D49FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4A00
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4A04
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D4A08
  c->r[3]=0u+0xCD000000u; // 800D4A0C
L_800D4A10:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800D4A10
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4A14
  cmpu(c,0,c->r[0],0x00000001u); // 800D4A18
  if (crb(c,2)) { IRQCHK(c); goto L_800D4A10; } // 800D4A1C
  c->r[0]=R32(c->r[3]+0x00006820u); // 800D4A20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4A24
  cmpu(c,0,c->r[0],0x00000001u); // 800D4A28
  if (crb(c,2)) { IRQCHK(c); goto L_800D4A10; } // 800D4A2C
  c->r[0]=R32(c->r[3]+0x00006834u); // 800D4A30
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4A34
  cmpu(c,0,c->r[0],0x00000001u); // 800D4A38
  if (crb(c,2)) { IRQCHK(c); goto L_800D4A10; } // 800D4A3C
  c->r[3]=0u+0x00800000u; // 800D4A40
  c->r[3]=c->r[3]+0xFFFF8000u; // 800D4A44
  c->lr=0x800D4A4Cu; f_800CBE70(c); // 800D4A48
  c->r[28]=0u+0x00000000u; // 800D4A4C
  c->r[3]=0u+0xCD000000u; // 800D4A50
  W32(c->r[3]+0x00006800u,c->r[28]); // 800D4A54
  W32(c->r[3]+0x00006814u,c->r[28]); // 800D4A58
  W32(c->r[3]+0x00006828u,c->r[28]); // 800D4A5C
  c->r[0]=0u+0x00002000u; // 800D4A60
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4A64
  c->r[3]=0u+0x00000009u; // 800D4A68
  c->r[29]=0u+0x800D0000u; // 800D4A6C
  c->r[4]=c->r[29]+0x00004640u; // 800D4A70
  c->lr=0x800D4A78u; f_800CBB10(c); // 800D4A74
  c->r[3]=0u+0x0000000Au; // 800D4A78
  c->r[30]=0u+0x800D0000u; // 800D4A7C
  c->r[4]=c->r[30]+0x00004700u; // 800D4A80
  c->lr=0x800D4A88u; f_800CBB10(c); // 800D4A84
  c->r[3]=0u+0x0000000Bu; // 800D4A88
  c->r[31]=0u+0x800D0000u; // 800D4A8C
  c->r[4]=c->r[31]+0x00004920u; // 800D4A90
  c->lr=0x800D4A98u; f_800CBB10(c); // 800D4A94
  c->r[3]=0u+0x0000000Cu; // 800D4A98
  c->r[4]=c->r[29]+0x00004640u; // 800D4A9C
  c->lr=0x800D4AA4u; f_800CBB10(c); // 800D4AA0
  c->r[3]=0u+0x0000000Du; // 800D4AA4
  c->r[4]=c->r[30]+0x00004700u; // 800D4AA8
  c->lr=0x800D4AB0u; f_800CBB10(c); // 800D4AAC
  c->r[3]=0u+0x0000000Eu; // 800D4AB0
  c->r[4]=c->r[31]+0x00004920u; // 800D4AB4
  c->lr=0x800D4ABCu; f_800CBB10(c); // 800D4AB8
  c->r[3]=0u+0x0000000Fu; // 800D4ABC
  c->r[4]=c->r[29]+0x00004640u; // 800D4AC0
  c->lr=0x800D4AC8u; f_800CBB10(c); // 800D4AC4
  c->r[3]=0u+0x00000010u; // 800D4AC8
  c->r[4]=c->r[30]+0x00004700u; // 800D4ACC
  c->lr=0x800D4AD4u; f_800CBB10(c); // 800D4AD0
  c->r[3]=0u+0x00000000u; // 800D4AD4
  c->r[4]=0u+0x00000002u; // 800D4AD8
  c->r[5]=c->r[13]+0xFFFFA588u; // 800D4ADC
  c->lr=0x800D4AE4u; f_800D4DD0(c); // 800D4AE0
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800D4AE4
  cmps(c,0,(int32_t)c->r[0],0); // 800D4AE8
  if (crb(c,2)) { goto L_800D4B20; } // 800D4AEC
  c->r[3]=0u+0x80000000u; // 800D4AF0
  W32(c->r[3]+0x000030C4u,c->r[28]); // 800D4AF4
  W32(c->r[3]+0x000030C0u,c->r[28]); // 800D4AF8
  c->r[3]=0u+0x802F0000u; // 800D4AFC
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4B00
  W32(c->r[3]+0x00000060u,c->r[28]); // 800D4B04
  W32(c->r[3]+0x00000020u,c->r[28]); // 800D4B08
  c->r[3]=0u+0x00000000u; // 800D4B0C
  c->lr=0x800D4B14u; f_800D40B0(c); // 800D4B10
  c->r[3]=0u+0x00000001u; // 800D4B14
  c->lr=0x800D4B1Cu; f_800D40B0(c); // 800D4B18
  goto L_800D4B8C; // 800D4B1C
L_800D4B20:;
  c->r[3]=0u+0x00000000u; // 800D4B20
  c->r[4]=0u+0x00000000u; // 800D4B24
  c->r[5]=c->r[1]+0x00000008u; // 800D4B28
  c->lr=0x800D4B30u; f_800D4DD0(c); // 800D4B2C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4B30
  if (crb(c,2)) { goto L_800D4B58; } // 800D4B34
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4B38
  c->r[0]=c->r[3]+0xF8FF0000u; // 800D4B3C
  cmpu(c,0,c->r[0],0x00000000u); // 800D4B40
  if (!crb(c,2)) { goto L_800D4B58; } // 800D4B44
  c->r[3]=0u+0x00000001u; // 800D4B48
  c->r[4]=0u+0x00000000u; // 800D4B4C
  c->lr=0x800D4B54u; f_800D5300(c); // 800D4B50
  goto L_800D4B8C; // 800D4B54
L_800D4B58:;
  c->r[3]=0u+0x00000001u; // 800D4B58
  c->r[4]=0u+0x00000000u; // 800D4B5C
  c->r[5]=c->r[1]+0x00000008u; // 800D4B60
  c->lr=0x800D4B68u; f_800D4DD0(c); // 800D4B64
  cmps(c,0,(int32_t)c->r[3],0); // 800D4B68
  if (crb(c,2)) { goto L_800D4B8C; } // 800D4B6C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4B70
  c->r[0]=c->r[3]+0xF8FF0000u; // 800D4B74
  cmpu(c,0,c->r[0],0x00000000u); // 800D4B78
  if (!crb(c,2)) { goto L_800D4B8C; } // 800D4B7C
  c->r[3]=0u+0x00000000u; // 800D4B80
  c->r[4]=0u+0x00000002u; // 800D4B84
  c->lr=0x800D4B8Cu; f_800D5300(c); // 800D4B88
L_800D4B8C:;
  c->r[3]=R32(c->r[13]+0xFFFF8F78u); // 800D4B8C
  c->lr=0x800D4B94u; f_800C65B0(c); // 800D4B90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4B94
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4B98
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4B9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4BA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4BA4
  c->lr=c->r[0]; // 800D4BA8
  c->r[1]=c->r[1]+0x00000020u; // 800D4BAC
  return; // 800D4BB0
}

// EXILock
void f_800D4BC0(Ctx* __restrict c) {
  trace_call(0x800D4BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4BC0
  c->r[0]=c->lr; // 800D4BC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4BC8
  c->r[11]=c->r[1]+0x00000020u; // 800D4BCC
  c->lr=0x800D4BD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4BD0
  c->r[27]=c->r[3]|c->r[3]; // 800D4BD4
  c->r[31]=c->r[4]|c->r[4]; // 800D4BD8
  c->r[28]=c->r[5]|c->r[5]; // 800D4BDC
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4BE0
  c->r[3]=0u+0x802F0000u; // 800D4BE4
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4BE8
  c->r[30]=c->r[3]+c->r[0]; // 800D4BEC
  c->lr=0x800D4BF4u; f_800CBAA0(c); // 800D4BF0
  c->r[29]=c->r[3]|c->r[3]; // 800D4BF4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4BF8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D4BFC
  if (crb(c,2)) { goto L_800D4C7C; } // 800D4C00
  cmps(c,0,(int32_t)c->r[28],0); // 800D4C04
  if (crb(c,2)) { goto L_800D4C6C; } // 800D4C08
  c->r[3]=c->r[30]|c->r[30]; // 800D4C0C
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D4C10
  c->ctr=c->r[4]; // 800D4C14
  cmps(c,0,(int32_t)c->r[4],0); // 800D4C18
  if (!crb(c,1)) { goto L_800D4C44; } // 800D4C1C
L_800D4C20:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800D4C20
  cmpu(c,0,c->r[31],c->r[0]); // 800D4C24
  if (!crb(c,2)) { goto L_800D4C3C; } // 800D4C28
  c->r[3]=c->r[29]|c->r[29]; // 800D4C2C
  c->lr=0x800D4C34u; f_800CBAE0(c); // 800D4C30
  c->r[3]=0u+0x00000000u; // 800D4C34
  goto L_800D4CA4; // 800D4C38
L_800D4C3C:;
  c->r[3]=c->r[3]+0x00000008u; // 800D4C3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4C20; } // 800D4C40
L_800D4C44:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D4C44
  c->r[3]=c->r[30]+c->r[0]; // 800D4C48
  W32(c->r[3]+0x0000002Cu,c->r[28]); // 800D4C4C
  c->r[0]=R32(c->r[30]+0x00000024u); // 800D4C50
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D4C54
  c->r[3]=c->r[30]+c->r[0]; // 800D4C58
  W32(c->r[3]+0x00000028u,c->r[31]); // 800D4C5C
  c->r[3]=R32(c->r[30]+0x00000024u); // 800D4C60
  c->r[0]=c->r[3]+0x00000001u; // 800D4C64
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D4C68
L_800D4C6C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D4C6C
  c->lr=0x800D4C74u; f_800CBAE0(c); // 800D4C70
  c->r[3]=0u+0x00000000u; // 800D4C74
  goto L_800D4CA4; // 800D4C78
L_800D4C7C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4C7C
  c->r[0]=c->r[0]|0x00000010u; // 800D4C80
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D4C84
  W32(c->r[30]+0x00000018u,c->r[31]); // 800D4C88
  c->r[3]=c->r[27]|c->r[27]; // 800D4C8C
  c->r[4]=c->r[30]|c->r[30]; // 800D4C90
  c->lr=0x800D4C98u; f_800D3880(c); // 800D4C94
  c->r[3]=c->r[29]|c->r[29]; // 800D4C98
  c->lr=0x800D4CA0u; f_800CBAE0(c); // 800D4C9C
  c->r[3]=0u+0x00000001u; // 800D4CA0
L_800D4CA4:;
  c->r[11]=c->r[1]+0x00000020u; // 800D4CA4
  c->lr=0x800D4CACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4CA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4CAC
  c->lr=c->r[0]; // 800D4CB0
  c->r[1]=c->r[1]+0x00000020u; // 800D4CB4
  return; // 800D4CB8
}

// EXIUnlock
void f_800D4CC0(Ctx* __restrict c) {
  trace_call(0x800D4CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4CC0
  c->r[0]=c->lr; // 800D4CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4CCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4CD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4CD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D4CD8
  c->r[28]=c->r[3]|c->r[3]; // 800D4CDC
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4CE0
  c->r[3]=0u+0x802F0000u; // 800D4CE4
  c->r[3]=c->r[3]+0xFFFFA450u; // 800D4CE8
  c->r[31]=c->r[3]+c->r[0]; // 800D4CEC
  c->lr=0x800D4CF4u; f_800CBAA0(c); // 800D4CF0
  c->r[30]=c->r[3]|c->r[3]; // 800D4CF4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4CF8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D4CFC
  if (!crb(c,2)) { goto L_800D4D10; } // 800D4D00
  c->lr=0x800D4D08u; f_800CBAE0(c); // 800D4D04
  c->r[3]=0u+0x00000000u; // 800D4D08
  goto L_800D4D78; // 800D4D0C
L_800D4D10:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4D10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800D4D14
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D4D18
  c->r[3]=c->r[28]|c->r[28]; // 800D4D1C
  c->r[4]=c->r[31]|c->r[31]; // 800D4D20
  c->lr=0x800D4D28u; f_800D3880(c); // 800D4D24
  c->r[3]=R32(c->r[31]+0x00000024u); // 800D4D28
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D2C
  if (!crb(c,1)) { goto L_800D4D6C; } // 800D4D30
  c->r[29]=R32(c->r[31]+0x0000002Cu); // 800D4D34
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800D4D38
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D4D3C
  if (!crb(c,1)) { goto L_800D4D58; } // 800D4D40
  c->r[3]=c->r[31]+0x00000028u; // 800D4D44
  c->r[4]=c->r[31]+0x00000030u; // 800D4D48
  c->r[0]=R32(c->r[31]+0x00000024u); // 800D4D4C
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D4D50
  c->lr=0x800D4D58u; f_8021BF68(c); // 800D4D54
L_800D4D58:;
  c->r[3]=c->r[28]|c->r[28]; // 800D4D58
  c->r[4]=0u+0x00000000u; // 800D4D5C
  c->r[12]=c->r[29]|c->r[29]; // 800D4D60
  c->ctr=c->r[12]; // 800D4D64
  if (true) { c->lr=0x800D4D6Cu; dispatch(c,c->ctr); } // 800D4D68
L_800D4D6C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4D6C
  c->lr=0x800D4D74u; f_800CBAE0(c); // 800D4D70
  c->r[3]=0u+0x00000001u; // 800D4D74
L_800D4D78:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4D78
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4D7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4D80
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4D84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4D88
  c->lr=c->r[0]; // 800D4D8C
  c->r[1]=c->r[1]+0x00000020u; // 800D4D90
  return; // 800D4D94
}

// UnlockedHandler
void f_800D4DA0(Ctx* __restrict c) {
  trace_call(0x800D4DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4DA0
  c->r[0]=c->lr; // 800D4DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4DA8
  c->r[4]=0u+0x00000000u; // 800D4DAC
  c->r[5]=c->r[1]+0x00000008u; // 800D4DB0
  c->lr=0x800D4DB8u; f_800D4DD0(c); // 800D4DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4DB8
  c->lr=c->r[0]; // 800D4DBC
  c->r[1]=c->r[1]+0x00000010u; // 800D4DC0
  return; // 800D4DC4
}

// EXIGetID
void f_800D4DD0(Ctx* __restrict c) {
  trace_call(0x800D4DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4DD0
  c->r[0]=c->lr; // 800D4DD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4DD8
  c->r[11]=c->r[1]+0x00000040u; // 800D4DDC
  c->lr=0x800D4DE4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4DE0
  c->r[25]=c->r[3]|c->r[3]; // 800D4DE4
  c->r[26]=c->r[4]|c->r[4]; // 800D4DE8
  c->r[27]=c->r[5]|c->r[5]; // 800D4DEC
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4DF0
  c->r[6]=0u+0x802F0000u; // 800D4DF4
  c->r[6]=c->r[6]+0xFFFFA450u; // 800D4DF8
  c->r[29]=c->r[6]+c->r[0]; // 800D4DFC
  cmps(c,0,(int32_t)c->r[3],0); // 800D4E00
  if (!crb(c,2)) { goto L_800D4E28; } // 800D4E04
  cmpu(c,0,c->r[4],0x00000002u); // 800D4E08
  if (!crb(c,2)) { goto L_800D4E28; } // 800D4E0C
  c->r[0]=R32(c->r[13]+0xFFFFA588u); // 800D4E10
  cmps(c,0,(int32_t)c->r[0],0); // 800D4E14
  if (crb(c,2)) { goto L_800D4E28; } // 800D4E18
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D4E1C
  c->r[3]=0u+0x00000001u; // 800D4E20
  goto L_800D5160; // 800D4E24
L_800D4E28:;
  cmps(c,0,(int32_t)c->r[3],2); // 800D4E28
  if (!crb(c,0)) { goto L_800D4F14; } // 800D4E2C
  cmps(c,0,(int32_t)c->r[4],0); // 800D4E30
  if (!crb(c,2)) { goto L_800D4F14; } // 800D4E34
  c->r[3]=c->r[25]|c->r[25]; // 800D4E38
  c->lr=0x800D4E40u; f_800D40B0(c); // 800D4E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4E40
  if (!crb(c,2)) { goto L_800D4E50; } // 800D4E44
  c->r[3]=0u+0x00000000u; // 800D4E48
  goto L_800D5160; // 800D4E4C
L_800D4E50:;
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D4E50
  c->r[0]=0u+0x80000000u; // 800D4E54
  c->r[31]=c->r[0]+c->r[3]; // 800D4E58
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D4E5C
  c->r[0]=R32(c->r[31]+0x000030C0u); // 800D4E60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4E64
  if (!crb(c,2)) { goto L_800D4E7C; } // 800D4E68
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D4E6C
  W32(c->r[27]+0x00000000u,c->r[0]); // 800D4E70
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D4E74
  goto L_800D5160; // 800D4E78
L_800D4E7C:;
  c->lr=0x800D4E80u; f_800CBAA0(c); // 800D4E7C
  c->r[30]=c->r[3]|c->r[3]; // 800D4E80
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D4E84
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D4E88
  if (!crb(c,2)) { goto L_800D4EA0; } // 800D4E8C
  c->r[3]=c->r[25]|c->r[25]; // 800D4E90
  c->lr=0x800D4E98u; f_800D40B0(c); // 800D4E94
  cmps(c,0,(int32_t)c->r[3],0); // 800D4E98
  if (!crb(c,2)) { goto L_800D4EB0; } // 800D4E9C
L_800D4EA0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4EA0
  c->lr=0x800D4EA8u; f_800CBAE0(c); // 800D4EA4
  c->r[0]=0u+0x00000000u; // 800D4EA8
  goto L_800D4F00; // 800D4EAC
L_800D4EB0:;
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)20); // 800D4EB0
  c->r[0]=0u+0xCD000000u; // 800D4EB4
  c->r[3]=c->r[0]+c->r[3]; // 800D4EB8
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4EBC
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D4EC0
  c->r[0]=c->r[0]|0x00000002u; // 800D4EC4
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4EC8
  c->r[0]=0u+0x00000000u; // 800D4ECC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D4ED0
  c->r[3]=0u+0x00100000u; // 800D4ED4
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D4ED8
  c->r[0]=c->r[0]-c->r[25]; // 800D4EDC
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D4EE0
  c->lr=0x800D4EE8u; f_800CBEF0(c); // 800D4EE4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D4EE8
  c->r[0]=c->r[0]|0x00000008u; // 800D4EEC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D4EF0
  c->r[3]=c->r[30]|c->r[30]; // 800D4EF4
  c->lr=0x800D4EFCu; f_800CBAE0(c); // 800D4EF8
  c->r[0]=0u+0x00000001u; // 800D4EFC
L_800D4F00:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D4F00
  if (!crb(c,2)) { goto L_800D4F10; } // 800D4F04
  c->r[3]=0u+0x00000000u; // 800D4F08
  goto L_800D5160; // 800D4F0C
L_800D4F10:;
  c->r[31]=R32(c->r[31]+0x000030C0u); // 800D4F10
L_800D4F14:;
  c->lr=0x800D4F18u; f_800CBAA0(c); // 800D4F14
  c->r[28]=c->r[3]|c->r[3]; // 800D4F18
  c->r[3]=c->r[25]|c->r[25]; // 800D4F1C
  c->r[4]=c->r[26]|c->r[26]; // 800D4F20
  c->r[0]=0u+0x00000000u; // 800D4F24
  cmps(c,0,(int32_t)c->r[25],2); // 800D4F28
  if (!crb(c,0)) { goto L_800D4F3C; } // 800D4F2C
  cmps(c,0,(int32_t)c->r[26],0); // 800D4F30
  if (!crb(c,2)) { goto L_800D4F3C; } // 800D4F34
  c->r[0]=0u+0x00000001u; // 800D4F38
L_800D4F3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D4F3C
  c->r[5]=0u+0x00000000u; // 800D4F40
  if (crb(c,2)) { goto L_800D4F50; } // 800D4F44
  c->r[5]=0u+0x800D0000u; // 800D4F48
  c->r[5]=c->r[5]+0x00004DA0u; // 800D4F4C
L_800D4F50:;
  c->lr=0x800D4F54u; f_800D4BC0(c); // 800D4F50
  c->r[0]=cntlz(c->r[3]); // 800D4F54
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 800D4F58
  if (!crb(c,2)) { goto L_800D5088; } // 800D4F5C
  c->r[3]=c->r[25]|c->r[25]; // 800D4F60
  c->r[4]=c->r[26]|c->r[26]; // 800D4F64
  c->r[5]=0u+0x00000000u; // 800D4F68
  c->lr=0x800D4F70u; f_800D4410(c); // 800D4F6C
  c->r[0]=cntlz(c->r[3]); // 800D4F70
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 800D4F74
  if (!crb(c,2)) { goto L_800D5008; } // 800D4F78
  c->r[0]=0u+0x00000000u; // 800D4F7C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D4F80
  c->r[3]=c->r[25]|c->r[25]; // 800D4F84
  c->r[4]=c->r[1]+0x00000008u; // 800D4F88
  c->r[5]=0u+0x00000002u; // 800D4F8C
  c->r[6]=0u+0x00000001u; // 800D4F90
  c->r[7]=0u+0x00000000u; // 800D4F94
  c->lr=0x800D4F9Cu; f_800D3970(c); // 800D4F98
  c->r[0]=cntlz(c->r[3]); // 800D4F9C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D4FA0
  c->r[30]=c->r[30]|c->r[0]; // 800D4FA4
  c->r[3]=c->r[25]|c->r[25]; // 800D4FA8
  c->lr=0x800D4FB0u; f_800D3DA0(c); // 800D4FAC
  c->r[0]=cntlz(c->r[3]); // 800D4FB0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D4FB4
  c->r[30]=c->r[30]|c->r[0]; // 800D4FB8
  c->r[3]=c->r[25]|c->r[25]; // 800D4FBC
  c->r[4]=c->r[27]|c->r[27]; // 800D4FC0
  c->r[5]=0u+0x00000004u; // 800D4FC4
  c->r[6]=0u+0x00000000u; // 800D4FC8
  c->r[7]=0u+0x00000000u; // 800D4FCC
  c->lr=0x800D4FD4u; f_800D3970(c); // 800D4FD0
  c->r[0]=cntlz(c->r[3]); // 800D4FD4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D4FD8
  c->r[30]=c->r[30]|c->r[0]; // 800D4FDC
  c->r[3]=c->r[25]|c->r[25]; // 800D4FE0
  c->lr=0x800D4FE8u; f_800D3DA0(c); // 800D4FE4
  c->r[0]=cntlz(c->r[3]); // 800D4FE8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D4FEC
  c->r[30]=c->r[30]|c->r[0]; // 800D4FF0
  c->r[3]=c->r[25]|c->r[25]; // 800D4FF4
  c->lr=0x800D4FFCu; f_800D4540(c); // 800D4FF8
  c->r[0]=cntlz(c->r[3]); // 800D4FFC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5000
  c->r[30]=c->r[30]|c->r[0]; // 800D5004
L_800D5008:;
  c->lr=0x800D500Cu; f_800CBAA0(c); // 800D5008
  c->r[23]=c->r[3]|c->r[3]; // 800D500C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D5010
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D5014
  if (!crb(c,2)) { goto L_800D5024; } // 800D5018
  c->lr=0x800D5020u; f_800CBAE0(c); // 800D501C
  goto L_800D5088; // 800D5020
L_800D5024:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D5024
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800D5028
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D502C
  c->r[3]=c->r[25]|c->r[25]; // 800D5030
  c->r[4]=c->r[29]|c->r[29]; // 800D5034
  c->lr=0x800D503Cu; f_800D3880(c); // 800D5038
  c->r[3]=R32(c->r[29]+0x00000024u); // 800D503C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5040
  if (!crb(c,1)) { goto L_800D5080; } // 800D5044
  c->r[24]=R32(c->r[29]+0x0000002Cu); // 800D5048
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800D504C
  W32(c->r[29]+0x00000024u,c->r[0]); // 800D5050
  if (!crb(c,1)) { goto L_800D506C; } // 800D5054
  c->r[3]=c->r[29]+0x00000028u; // 800D5058
  c->r[4]=c->r[29]+0x00000030u; // 800D505C
  c->r[0]=R32(c->r[29]+0x00000024u); // 800D5060
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D5064
  c->lr=0x800D506Cu; f_8021BF68(c); // 800D5068
L_800D506C:;
  c->r[3]=c->r[25]|c->r[25]; // 800D506C
  c->r[4]=0u+0x00000000u; // 800D5070
  c->r[12]=c->r[24]|c->r[24]; // 800D5074
  c->ctr=c->r[12]; // 800D5078
  if (true) { c->lr=0x800D5080u; dispatch(c,c->ctr); } // 800D507C
L_800D5080:;
  c->r[3]=c->r[23]|c->r[23]; // 800D5080
  c->lr=0x800D5088u; f_800CBAE0(c); // 800D5084
L_800D5088:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5088
  c->lr=0x800D5090u; f_800CBAE0(c); // 800D508C
  cmps(c,0,(int32_t)c->r[25],2); // 800D5090
  if (!crb(c,0)) { goto L_800D5158; } // 800D5094
  cmps(c,0,(int32_t)c->r[26],0); // 800D5098
  if (!crb(c,2)) { goto L_800D5158; } // 800D509C
  c->lr=0x800D50A4u; f_800CBAA0(c); // 800D50A0
  c->r[23]=c->r[3]|c->r[3]; // 800D50A4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D50A8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D50AC
  if (!crb(c,2)) { goto L_800D50BC; } // 800D50B0
  c->lr=0x800D50B8u; f_800CBAE0(c); // 800D50B4
  goto L_800D5104; // 800D50B8
L_800D50BC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D50BC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D50C0
  if (crb(c,2)) { goto L_800D50DC; } // 800D50C4
  c->r[0]=R32(c->r[29]+0x00000018u); // 800D50C8
  cmps(c,0,(int32_t)c->r[0],0); // 800D50CC
  if (!crb(c,2)) { goto L_800D50DC; } // 800D50D0
  c->lr=0x800D50D8u; f_800CBAE0(c); // 800D50D4
  goto L_800D5104; // 800D50D8
L_800D50DC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D50DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D50E0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D50E4
  c->r[3]=0u+0x00500000u; // 800D50E8
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D50EC
  c->r[0]=c->r[0]-c->r[25]; // 800D50F0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D50F4
  c->lr=0x800D50FCu; f_800CBE70(c); // 800D50F8
  c->r[3]=c->r[23]|c->r[23]; // 800D50FC
  c->lr=0x800D5104u; f_800CBAE0(c); // 800D5100
L_800D5104:;
  c->lr=0x800D5108u; f_800CBAA0(c); // 800D5104
  c->r[4]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D5108
  c->r[0]=0u+0x80000000u; // 800D510C
  c->r[4]=c->r[0]+c->r[4]; // 800D5110
  c->r[0]=R32(c->r[4]+0x000030C0u); // 800D5114
  c->r[4]=c->r[0]-c->r[31]; // 800D5118
  c->r[0]=c->r[31]-c->r[0]; // 800D511C
  c->r[0]=c->r[4]|c->r[0]; // 800D5120
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D5124
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 800D5128
  if (!crb(c,2)) { goto L_800D513C; } // 800D512C
  c->r[0]=R32(c->r[27]+0x00000000u); // 800D5130
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800D5134
  W32(c->r[29]+0x00000020u,c->r[31]); // 800D5138
L_800D513C:;
  c->lr=0x800D5140u; f_800CBAE0(c); // 800D513C
  cmps(c,0,(int32_t)c->r[30],0); // 800D5140
  if (crb(c,2)) { goto L_800D5150; } // 800D5144
  c->r[3]=0u+0x00000000u; // 800D5148
  goto L_800D5160; // 800D514C
L_800D5150:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D5150
  goto L_800D5160; // 800D5154
L_800D5158:;
  c->r[0]=cntlz(c->r[30]); // 800D5158
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D515C
L_800D5160:;
  c->r[11]=c->r[1]+0x00000040u; // 800D5160
  c->lr=0x800D5168u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D5164
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D5168
  c->lr=c->r[0]; // 800D516C
  c->r[1]=c->r[1]+0x00000040u; // 800D5170
  return; // 800D5174
}

// ProbeBarnacle
void f_800D5180(Ctx* __restrict c) {
  trace_call(0x800D5180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5180
  c->r[0]=c->lr; // 800D5184
  cmps(c,0,(int32_t)c->r[3],2); // 800D5188
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D518C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5190
  c->r[31]=c->r[5]|c->r[5]; // 800D5194
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D5198
  c->r[30]=c->r[4]|c->r[4]; // 800D519C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D51A0
  c->r[29]=c->r[3]|c->r[3]; // 800D51A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D51A8
  if (crb(c,2)) { goto L_800D51D0; } // 800D51AC
  cmps(c,0,(int32_t)c->r[4],0); // 800D51B0
  if (!crb(c,2)) { goto L_800D51D0; } // 800D51B4
  c->r[4]=0u+0x00000000u; // 800D51B8
  c->lr=0x800D51C0u; f_800D4230(c); // 800D51BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D51C0
  if (!crb(c,2)) { goto L_800D51D0; } // 800D51C4
  c->r[3]=0u+0x00000000u; // 800D51C8
  goto L_800D52D8; // 800D51CC
L_800D51D0:;
  c->r[3]=c->r[29]|c->r[29]; // 800D51D0
  c->r[4]=c->r[30]|c->r[30]; // 800D51D4
  c->r[5]=0u+0x00000000u; // 800D51D8
  c->lr=0x800D51E0u; f_800D4BC0(c); // 800D51DC
  c->r[0]=cntlz(c->r[3]); // 800D51E0
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[28]); // 800D51E4
  if (!crb(c,2)) { goto L_800D529C; } // 800D51E8
  c->r[3]=c->r[29]|c->r[29]; // 800D51EC
  c->r[4]=c->r[30]|c->r[30]; // 800D51F0
  c->r[5]=0u+0x00000000u; // 800D51F4
  c->lr=0x800D51FCu; f_800D4410(c); // 800D51F8
  c->r[0]=cntlz(c->r[3]); // 800D51FC
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[28]); // 800D5200
  if (!crb(c,2)) { goto L_800D5294; } // 800D5204
  c->r[4]=0u+0x20010000u; // 800D5208
  c->r[3]=c->r[29]|c->r[29]; // 800D520C
  c->r[0]=c->r[4]+0x00001300u; // 800D5210
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D5214
  c->r[4]=c->r[1]+0x00000008u; // 800D5218
  c->r[5]=0u+0x00000004u; // 800D521C
  c->r[6]=0u+0x00000001u; // 800D5220
  c->r[7]=0u+0x00000000u; // 800D5224
  c->lr=0x800D522Cu; f_800D3970(c); // 800D5228
  c->r[0]=cntlz(c->r[3]); // 800D522C
  c->r[3]=c->r[29]|c->r[29]; // 800D5230
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5234
  c->lr=0x800D523Cu; f_800D3DA0(c); // 800D5238
  c->r[0]=cntlz(c->r[3]); // 800D523C
  c->r[3]=c->r[29]|c->r[29]; // 800D5240
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5244
  c->r[4]=c->r[31]|c->r[31]; // 800D5248
  c->r[28]=c->r[28]|c->r[0]; // 800D524C
  c->r[5]=0u+0x00000004u; // 800D5250
  c->r[6]=0u+0x00000000u; // 800D5254
  c->r[7]=0u+0x00000000u; // 800D5258
  c->lr=0x800D5260u; f_800D3970(c); // 800D525C
  c->r[0]=cntlz(c->r[3]); // 800D5260
  c->r[3]=c->r[29]|c->r[29]; // 800D5264
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5268
  c->r[28]=c->r[28]|c->r[0]; // 800D526C
  c->lr=0x800D5274u; f_800D3DA0(c); // 800D5270
  c->r[0]=cntlz(c->r[3]); // 800D5274
  c->r[3]=c->r[29]|c->r[29]; // 800D5278
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D527C
  c->r[28]=c->r[28]|c->r[0]; // 800D5280
  c->lr=0x800D5288u; f_800D4540(c); // 800D5284
  c->r[0]=cntlz(c->r[3]); // 800D5288
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D528C
  c->r[28]=c->r[28]|c->r[0]; // 800D5290
L_800D5294:;
  c->r[3]=c->r[29]|c->r[29]; // 800D5294
  c->lr=0x800D529Cu; f_800D4CC0(c); // 800D5298
L_800D529C:;
  cmps(c,0,(int32_t)c->r[29],2); // 800D529C
  if (crb(c,2)) { goto L_800D52B4; } // 800D52A0
  cmps(c,0,(int32_t)c->r[30],0); // 800D52A4
  if (!crb(c,2)) { goto L_800D52B4; } // 800D52A8
  c->r[3]=c->r[29]|c->r[29]; // 800D52AC
  c->lr=0x800D52B4u; f_800D4350(c); // 800D52B0
L_800D52B4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D52B4
  if (crb(c,2)) { goto L_800D52C4; } // 800D52B8
  c->r[3]=0u+0x00000000u; // 800D52BC
  goto L_800D52D8; // 800D52C0
L_800D52C4:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D52C4
  c->r[3]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800D52C8
  c->r[0]=c->r[4]+0x00000001u; // 800D52CC
  c->r[0]=c->r[3]|c->r[0]; // 800D52D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D52D4
L_800D52D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D52D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D52DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D52E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D52E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D52E8
  c->lr=c->r[0]; // 800D52EC
  c->r[1]=c->r[1]+0x00000020u; // 800D52F0
  return; // 800D52F4
}

// __OSEnableBarnacle
void f_800D5300(Ctx* __restrict c) {
  trace_call(0x800D5300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5300
  c->r[0]=c->lr; // 800D5304
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5308
  c->r[5]=c->r[1]+0x00000008u; // 800D530C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5310
  c->r[31]=c->r[4]|c->r[4]; // 800D5314
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D5318
  c->r[30]=c->r[3]|c->r[3]; // 800D531C
  c->lr=0x800D5324u; f_800D4DD0(c); // 800D5320
  cmps(c,0,(int32_t)c->r[3],0); // 800D5324
  if (crb(c,2)) { goto L_800D54A4; } // 800D5328
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D532C
  c->r[0]=0u+0x01020000u; // 800D5330
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5334
  if (crb(c,2)) { goto L_800D54A4; } // 800D5338
  if (!crb(c,0)) { goto L_800D53D0; } // 800D533C
  cmps(c,0,(int32_t)c->r[4],4); // 800D5340
  if (crb(c,2)) { goto L_800D54A4; } // 800D5344
  if (!crb(c,0)) { goto L_800D539C; } // 800D5348
  c->r[3]=0u+0x80000000u; // 800D534C
  c->r[0]=c->r[3]+0x00000010u; // 800D5350
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5354
  if (crb(c,2)) { goto L_800D54A4; } // 800D5358
  if (!crb(c,0)) { goto L_800D5380; } // 800D535C
  c->r[0]=c->r[3]+0x00000008u; // 800D5360
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5364
  if (crb(c,2)) { goto L_800D54A4; } // 800D5368
  if (!crb(c,0)) { goto L_800D5474; } // 800D536C
  c->r[0]=c->r[3]+0x00000004u; // 800D5370
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5374
  if (crb(c,2)) { goto L_800D54A4; } // 800D5378
  goto L_800D5474; // 800D537C
L_800D5380:;
  cmps(c,0,(int32_t)c->r[4],-1); // 800D5380
  if (crb(c,2)) { goto L_800D54A4; } // 800D5384
  if (!crb(c,0)) { goto L_800D5474; } // 800D5388
  c->r[0]=c->r[3]+0x00000020u; // 800D538C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5390
  if (crb(c,2)) { goto L_800D54A4; } // 800D5394
  goto L_800D5474; // 800D5398
L_800D539C:;
  cmps(c,0,(int32_t)c->r[4],32); // 800D539C
  if (crb(c,2)) { goto L_800D54A4; } // 800D53A0
  if (!crb(c,0)) { goto L_800D53C0; } // 800D53A4
  cmps(c,0,(int32_t)c->r[4],16); // 800D53A8
  if (crb(c,2)) { goto L_800D54A4; } // 800D53AC
  if (!crb(c,0)) { goto L_800D5474; } // 800D53B0
  cmps(c,0,(int32_t)c->r[4],8); // 800D53B4
  if (crb(c,2)) { goto L_800D54A4; } // 800D53B8
  goto L_800D5474; // 800D53BC
L_800D53C0:;
  c->r[0]=0u+0x01010000u; // 800D53C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D53C4
  if (crb(c,2)) { goto L_800D54A4; } // 800D53C8
  goto L_800D5474; // 800D53CC
L_800D53D0:;
  c->r[3]=0u+0x04040000u; // 800D53D0
  c->r[0]=c->r[3]+0x00000404u; // 800D53D4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D53D8
  if (crb(c,2)) { goto L_800D54A4; } // 800D53DC
  if (!crb(c,0)) { goto L_800D5438; } // 800D53E0
  c->r[3]=0u+0x04020000u; // 800D53E4
  c->r[0]=c->r[3]+0x00000100u; // 800D53E8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D53EC
  if (crb(c,2)) { goto L_800D54A4; } // 800D53F0
  if (!crb(c,0)) { goto L_800D5418; } // 800D53F4
  c->r[0]=0u+0x03010000u; // 800D53F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D53FC
  if (crb(c,2)) { goto L_800D54A4; } // 800D5400
  if (!crb(c,0)) { goto L_800D5474; } // 800D5404
  c->r[0]=0u+0x02020000u; // 800D5408
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D540C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5410
  goto L_800D5474; // 800D5414
L_800D5418:;
  c->r[0]=c->r[3]+0x00000300u; // 800D5418
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D541C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5420
  if (!crb(c,0)) { goto L_800D5474; } // 800D5424
  c->r[0]=c->r[3]+0x00000200u; // 800D5428
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D542C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5430
  goto L_800D5474; // 800D5434
L_800D5438:;
  c->r[0]=0u+0x04130000u; // 800D5438
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D543C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5440
  if (!crb(c,0)) { goto L_800D5468; } // 800D5444
  c->r[0]=0u+0x04120000u; // 800D5448
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D544C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5450
  if (!crb(c,0)) { goto L_800D5474; } // 800D5454
  c->r[0]=0u+0x04060000u; // 800D5458
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D545C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5460
  goto L_800D5474; // 800D5464
L_800D5468:;
  c->r[0]=0u+0x04220000u; // 800D5468
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D546C
  if (crb(c,2)) { goto L_800D54A4; } // 800D5470
L_800D5474:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5474
  c->r[4]=c->r[31]|c->r[31]; // 800D5478
  c->r[5]=c->r[1]+0x00000008u; // 800D547C
  c->lr=0x800D5484u; f_800D5180(c); // 800D5480
  cmps(c,0,(int32_t)c->r[3],0); // 800D5484
  if (crb(c,2)) { goto L_800D54A4; } // 800D5488
  c->r[3]=0u+0xA5FF0000u; // 800D548C
  W32(c->r[13]+0xFFFFA59Cu,c->r[30]); // 800D5490
  c->r[0]=c->r[3]+0x0000005Au; // 800D5494
  W32(c->r[13]+0xFFFFA598u,c->r[31]); // 800D5498
  W32(c->r[13]+0xFFFFA594u,c->r[0]); // 800D549C
  W32(c->r[13]+0xFFFFA590u,c->r[0]); // 800D54A0
L_800D54A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D54A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D54A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D54AC
  c->lr=c->r[0]; // 800D54B0
  c->r[1]=c->r[1]+0x00000020u; // 800D54B4
  return; // 800D54B8
}

// EXIWriteReg
void f_800D54C0(Ctx* __restrict c) {
  trace_call(0x800D54C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D54C0
  c->r[0]=c->lr; // 800D54C4
  cmps(c,0,(int32_t)c->r[7],1); // 800D54C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D54CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D54D0
  c->r[31]=c->r[3]|c->r[3]; // 800D54D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D54D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D54DC
  c->r[29]=c->r[4]|c->r[4]; // 800D54E0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D54E4
  if (crb(c,2)) { goto L_800D54F8; } // 800D54E8
  cmps(c,0,(int32_t)c->r[7],2); // 800D54EC
  if (crb(c,2)) { goto L_800D5508; } // 800D54F0
  goto L_800D551C; // 800D54F4
L_800D54F8:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800D54F8
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 800D54FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D5500
  goto L_800D5538; // 800D5504
L_800D5508:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 800D5508
  c->r[0]=rotl(c->r[3],8)&0x00FF0000u; // 800D550C
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800D5510
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D5514
  goto L_800D5538; // 800D5518
L_800D551C:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800D551C
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 800D5520
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 800D5524
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800D5528
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800D552C
  c->r[0]=c->r[3]|c->r[0]; // 800D5530
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D5534
L_800D5538:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5538
  c->r[4]=c->r[29]|c->r[29]; // 800D553C
  c->r[5]=0u+0x00000000u; // 800D5540
  c->lr=0x800D5548u; f_800D4BC0(c); // 800D5544
  c->r[0]=cntlz(c->r[3]); // 800D5548
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 800D554C
  if (crb(c,2)) { goto L_800D555C; } // 800D5550
  c->r[3]=0u+0x00000000u; // 800D5554
  goto L_800D562C; // 800D5558
L_800D555C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D555C
  c->r[4]=c->r[29]|c->r[29]; // 800D5560
  c->r[5]=0u+0x00000004u; // 800D5564
  c->lr=0x800D556Cu; f_800D4410(c); // 800D5568
  c->r[0]=cntlz(c->r[3]); // 800D556C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5570
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 800D5574
  if (crb(c,2)) { goto L_800D558C; } // 800D5578
  c->r[3]=c->r[31]|c->r[31]; // 800D557C
  c->lr=0x800D5584u; f_800D4CC0(c); // 800D5580
  c->r[3]=0u+0x00000000u; // 800D5584
  goto L_800D562C; // 800D5588
L_800D558C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D558C
  c->r[4]=c->r[1]+0x00000008u; // 800D5590
  c->r[5]=0u+0x00000004u; // 800D5594
  c->r[6]=0u+0x00000001u; // 800D5598
  c->r[7]=0u+0x00000000u; // 800D559C
  c->lr=0x800D55A4u; f_800D3970(c); // 800D55A0
  c->r[0]=cntlz(c->r[3]); // 800D55A4
  c->r[3]=c->r[31]|c->r[31]; // 800D55A8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D55AC
  c->r[30]=c->r[30]|c->r[0]; // 800D55B0
  c->lr=0x800D55B8u; f_800D3DA0(c); // 800D55B4
  c->r[0]=cntlz(c->r[3]); // 800D55B8
  c->r[3]=c->r[31]|c->r[31]; // 800D55BC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D55C0
  c->r[4]=c->r[1]+0x0000000Cu; // 800D55C4
  c->r[30]=c->r[30]|c->r[0]; // 800D55C8
  c->r[5]=0u+0x00000004u; // 800D55CC
  c->r[6]=0u+0x00000001u; // 800D55D0
  c->r[7]=0u+0x00000000u; // 800D55D4
  c->lr=0x800D55DCu; f_800D3970(c); // 800D55D8
  c->r[0]=cntlz(c->r[3]); // 800D55DC
  c->r[3]=c->r[31]|c->r[31]; // 800D55E0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D55E4
  c->r[30]=c->r[30]|c->r[0]; // 800D55E8
  c->lr=0x800D55F0u; f_800D3DA0(c); // 800D55EC
  c->r[0]=cntlz(c->r[3]); // 800D55F0
  c->r[3]=c->r[31]|c->r[31]; // 800D55F4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D55F8
  c->r[30]=c->r[30]|c->r[0]; // 800D55FC
  c->lr=0x800D5604u; f_800D4540(c); // 800D5600
  c->r[0]=cntlz(c->r[3]); // 800D5604
  c->r[3]=c->r[31]|c->r[31]; // 800D5608
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D560C
  c->r[30]=c->r[30]|c->r[0]; // 800D5610
  c->lr=0x800D5618u; f_800D4CC0(c); // 800D5614
  c->r[0]=cntlz(c->r[3]); // 800D5618
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D561C
  c->r[30]=c->r[30]|c->r[0]; // 800D5620
  c->r[0]=cntlz(c->r[30]); // 800D5624
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5628
L_800D562C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D562C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5630
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5634
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D5638
  c->lr=c->r[0]; // 800D563C
  c->r[1]=c->r[1]+0x00000020u; // 800D5640
  return; // 800D5644
}

// fn_800D5650
void f_800D5650(Ctx* __restrict c) {
  c->r[3]=0u+0x802B0000u; // 800D5650
  c->r[4]=R32(c->r[3]+0xFFFFE240u); // 800D5654
  c->r[3]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800D5658
  c->r[0]=c->r[4]+0x00000001u; // 800D565C
  c->r[0]=c->r[3]|c->r[0]; // 800D5660
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D5664
  return; // 800D5668
}

// fn_800D5670
void f_800D5670(Ctx* __restrict c) {
  c->r[4]=0u+0x802F0000u; // 800D5670
  c->r[0]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800D5674
  c->r[4]=c->r[4]+0xFFFFA510u; // 800D5678
  c->r[5]=0u+0x00000000u; // 800D567C
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D5680
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5684
  if (!crb(c,2)) { goto L_800D569C; } // 800D5688
  c->r[4]=0u+0x802B0000u; // 800D568C
  c->r[0]=R32(c->r[4]+0xFFFFE240u); // 800D5690
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800D5694
  if (!crb(c,2)) { goto L_800D56A0; } // 800D5698
L_800D569C:;
  c->r[5]=0u+0x00000001u; // 800D569C
L_800D56A0:;
  c->r[3]=c->r[5]|c->r[5]; // 800D56A0
  return; // 800D56A4
}

// fn_800D56B0
void f_800D56B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D56B0
  c->r[0]=c->lr; // 800D56B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D56B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D56BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D56C0
  c->r[30]=0u+0x802B0000u; // 800D56C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D56C8
  c->r[29]=0u+0xCD000000u; // 800D56CC
  c->r[31]=R32(c->r[29]+0x00006438u); // 800D56D0
  c->r[0]=R32(c->r[29]+0x00006434u); // 800D56D4
  c->r[0]=c->r[0]|0x80000000u; // 800D56D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D56DC
  W32(c->r[29]+0x00006434u,c->r[0]); // 800D56E0
  c->r[0]=R32(c->r[30]+0xFFFFE240u); // 800D56E4
  cmps(c,0,(int32_t)c->r[0],-1); // 800D56E8
  if (crb(c,2)) { goto L_800D5984; } // 800D56EC
  c->lr=0x800D56F4u; f_800D0540(c); // 800D56F0
  c->r[7]=R32(c->r[30]+0xFFFFE240u); // 800D56F4
  c->r[6]=0u+0x802F0000u; // 800D56F8
  c->r[5]=c->r[30]+0xFFFFE240u; // 800D56FC
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5700
  c->r[6]=c->r[6]+0xFFFFA590u; // 800D5704
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D5708
  c->r[6]=c->r[6]+c->r[7]; // 800D570C
  W32(c->r[6]+0x00000004u,c->r[4]); // 800D5710
  c->r[7]=0u+0x00000000u; // 800D5714
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[8]); // 800D5718
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800D571C
  W32(c->r[6]+0x00000000u,c->r[3]); // 800D5720
  if (crb(c,2)) { goto L_800D57D4; } // 800D5724
  cmpu(c,0,c->r[8],0x00000008u); // 800D5728
  c->r[3]=c->r[8]+0xFFFFFFF8u; // 800D572C
  if (!crb(c,1)) { goto L_800D579C; } // 800D5730
  c->r[0]=c->r[3]+0x00000007u; // 800D5734
  c->r[4]=c->r[29]+0x00006400u; // 800D5738
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D573C
  c->ctr=c->r[0]; // 800D5740
  cmpu(c,0,c->r[3],0x00000000u); // 800D5744
  if (!crb(c,1)) { goto L_800D579C; } // 800D5748
L_800D574C:;
  c->r[0]=R32(c->r[4]+0x00000080u); // 800D574C
  c->r[7]=c->r[7]+0x00000008u; // 800D5750
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D5754
  c->r[0]=R32(c->r[4]+0x00000084u); // 800D5758
  W32(c->r[5]+0x00000004u,c->r[0]); // 800D575C
  c->r[0]=R32(c->r[4]+0x00000088u); // 800D5760
  W32(c->r[5]+0x00000008u,c->r[0]); // 800D5764
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 800D5768
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800D576C
  c->r[0]=R32(c->r[4]+0x00000090u); // 800D5770
  W32(c->r[5]+0x00000010u,c->r[0]); // 800D5774
  c->r[0]=R32(c->r[4]+0x00000094u); // 800D5778
  W32(c->r[5]+0x00000014u,c->r[0]); // 800D577C
  c->r[0]=R32(c->r[4]+0x00000098u); // 800D5780
  W32(c->r[5]+0x00000018u,c->r[0]); // 800D5784
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 800D5788
  c->r[4]=c->r[4]+0x00000020u; // 800D578C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800D5790
  c->r[5]=c->r[5]+0x00000020u; // 800D5794
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D574C; } // 800D5798
L_800D579C:;
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D579C
  c->r[0]=0u+0xCD000000u; // 800D57A0
  c->r[3]=c->r[0]+c->r[3]; // 800D57A4
  c->r[0]=c->r[8]-c->r[7]; // 800D57A8
  c->r[3]=c->r[3]+0x00006400u; // 800D57AC
  c->ctr=c->r[0]; // 800D57B0
  cmpu(c,0,c->r[7],c->r[8]); // 800D57B4
  if (!crb(c,0)) { goto L_800D57D4; } // 800D57B8
L_800D57BC:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 800D57BC
  c->r[7]=c->r[7]+0x00000001u; // 800D57C0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D57C4
  c->r[5]=c->r[5]+0x00000004u; // 800D57C8
  c->r[3]=c->r[3]+0x00000004u; // 800D57CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D57BC; } // 800D57D0
L_800D57D4:;
  c->r[3]=0u+0x802B0000u; // 800D57D4
  c->r[3]=c->r[3]+0xFFFFE240u; // 800D57D8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D57DC
  c->r[3]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[3]); // 800D57E0
  if (crb(c,2)) { goto L_800D58F0; } // 800D57E4
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D57E8
  c->r[4]=0u+0xCD000000u; // 800D57EC
  c->r[6]=c->r[4]+c->r[0]; // 800D57F0
  c->r[0]=R32(c->r[6]+0x00006480u); // 800D57F4
  c->r[4]=0u+0x00000000u; // 800D57F8
  if (crb(c,2)) { goto L_800D58F0; } // 800D57FC
  cmpu(c,0,c->r[3],0x00000008u); // 800D5800
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 800D5804
  if (!crb(c,1)) { goto L_800D58C4; } // 800D5808
  c->r[6]=c->r[7]+0x00000007u; // 800D580C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 800D5810
  c->ctr=c->r[6]; // 800D5814
  cmpu(c,0,c->r[7],0x00000000u); // 800D5818
  if (!crb(c,1)) { goto L_800D58C4; } // 800D581C
L_800D5820:;
  c->r[6]=addc(c,~c->r[4],0x00000003u,1); // 800D5820
  c->r[7]=c->r[4]+0x00000001u; // 800D5824
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D5828
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D582C
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 800D5830
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5834
  W8(c->r[5]+0x00000000u,c->r[9]); // 800D5838
  c->r[7]=c->r[4]+0x00000002u; // 800D583C
  c->r[6]=0u-c->r[4]; // 800D5840
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D5844
  W8(c->r[5]+0x00000001u,c->r[9]); // 800D5848
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D584C
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 800D5850
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5854
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D5858
  W8(c->r[5]+0x00000002u,c->r[9]); // 800D585C
  c->r[6]=c->r[4]+0x00000004u; // 800D5860
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D5864
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 800D5868
  W8(c->r[5]+0x00000003u,c->r[8]); // 800D586C
  c->r[6]=c->r[4]+0x00000005u; // 800D5870
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5874
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 800D5878
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D587C
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D5880
  W8(c->r[5]+0x00000004u,c->r[9]); // 800D5884
  c->r[6]=c->r[4]+0x00000006u; // 800D5888
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 800D588C
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D5890
  c->r[6]=c->r[4]+0x00000007u; // 800D5894
  W8(c->r[5]+0x00000005u,c->r[8]); // 800D5898
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D589C
  c->r[4]=c->r[4]+0x00000008u; // 800D58A0
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D58A4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 800D58A8
  W8(c->r[5]+0x00000006u,c->r[7]); // 800D58AC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D58B0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D58B4
  W8(c->r[5]+0x00000007u,c->r[6]); // 800D58B8
  c->r[5]=c->r[5]+0x00000008u; // 800D58BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D5820; } // 800D58C0
L_800D58C4:;
  c->r[6]=c->r[3]-c->r[4]; // 800D58C4
  c->ctr=c->r[6]; // 800D58C8
  cmpu(c,0,c->r[4],c->r[3]); // 800D58CC
  if (!crb(c,0)) { goto L_800D58F0; } // 800D58D0
L_800D58D4:;
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 800D58D4
  c->r[4]=c->r[4]+0x00000001u; // 800D58D8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D58DC
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 800D58E0
  W8(c->r[5]+0x00000000u,c->r[3]); // 800D58E4
  c->r[5]=c->r[5]+0x00000001u; // 800D58E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D58D4; } // 800D58EC
L_800D58F0:;
  c->r[3]=0u+0xCD000000u; // 800D58F0
  c->r[0]=R32(c->r[3]+0x00006434u); // 800D58F4
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 800D58F8
  if (crb(c,2)) { goto L_800D5950; } // 800D58FC
  c->r[3]=0u+0x802B0000u; // 800D5900
  c->r[4]=R32(c->r[3]+0xFFFFE240u); // 800D5904
  c->r[0]=addc(c,~c->r[4],0x00000003u,1); // 800D5908
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D590C
  c->r[31]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 800D5910
  c->r[31]=rotl(c->r[31],0)&0x0000000Fu; // 800D5914
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 800D5918
  if (crb(c,2)) { goto L_800D5940; } // 800D591C
  c->r[3]=0u+0x802B0000u; // 800D5920
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D5924
  c->r[3]=c->r[3]+0xFFFFE258u; // 800D5928
  c->r[0]=R32(c->r[3]+c->r[4]); // 800D592C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D5930
  if (!crb(c,2)) { goto L_800D5940; } // 800D5934
  c->r[0]=0u+0x00000008u; // 800D5938
  W32(c->r[3]+c->r[4],c->r[0]); // 800D593C
L_800D5940:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D5940
  if (!crb(c,2)) { goto L_800D5978; } // 800D5944
  c->r[31]=0u+0x00000004u; // 800D5948
  goto L_800D5978; // 800D594C
L_800D5950:;
  c->lr=0x800D5954u; f_800D0540(c); // 800D5950
  c->r[6]=0u+0x802B0000u; // 800D5954
  c->r[5]=0u+0x802F0000u; // 800D5958
  c->r[0]=R32(c->r[6]+0xFFFFE240u); // 800D595C
  c->r[5]=c->r[5]+0xFFFFA5B0u; // 800D5960
  c->r[31]=0u+0x00000000u; // 800D5964
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D5968
  c->r[5]=c->r[5]+c->r[0]; // 800D596C
  W32(c->r[5]+0x00000004u,c->r[4]); // 800D5970
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D5974
L_800D5978:;
  c->r[3]=0u+0x802B0000u; // 800D5978
  c->r[0]=0u+0xFFFFFFFFu; // 800D597C
  W32(c->r[3]+0xFFFFE240u,c->r[0]); // 800D5980
L_800D5984:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5984
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5988
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D598C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D5990
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5994
  c->lr=c->r[0]; // 800D5998
  c->r[1]=c->r[1]+0x00000020u; // 800D599C
  return; // 800D59A0
}

// SIInterruptHandler
void f_800D59B0(Ctx* __restrict c) {
  trace_call(0x800D59B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D59B0
  c->r[0]=c->lr; // 800D59B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D59B8
  c->r[11]=c->r[1]+0x00000050u; // 800D59BC
  c->lr=0x800D59C4u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D59C0
  c->r[5]=0u+0xCD000000u; // 800D59C4
  c->r[27]=0u+0x802F0000u; // 800D59C8
  c->r[21]=R32(c->r[5]+0x00006434u); // 800D59CC
  c->r[30]=c->r[3]|c->r[3]; // 800D59D0
  c->r[31]=c->r[4]|c->r[4]; // 800D59D4
  c->r[27]=c->r[27]+0xFFFFA510u; // 800D59D8
  c->r[3]=rotl(c->r[21],0)&0xC0000000u; // 800D59DC
  c->r[0]=c->r[3]+0x40000000u; // 800D59E0
  cmpu(c,0,c->r[0],0x00000000u); // 800D59E4
  if (!crb(c,2)) { goto L_800D5B8C; } // 800D59E8
  c->r[17]=0u+0x802B0000u; // 800D59EC
  c->r[22]=R32(c->r[17]+0xFFFFE240u); // 800D59F0
  c->lr=0x800D59F8u; f_800D56B0(c); // 800D59F4
  c->r[4]=c->r[17]+0xFFFFE240u; // 800D59F8
  c->r[0]=0u+0x00000000u; // 800D59FC
  c->r[24]=R32(c->r[4]+0x00000010u); // 800D5A00
  c->r[23]=c->r[3]|c->r[3]; // 800D5A04
  c->r[28]=c->r[22]|c->r[22]; // 800D5A08
  c->r[17]=c->r[27]+0x00000000u; // 800D5A0C
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D5A10
  c->r[26]=0u+0x00000000u; // 800D5A14
L_800D5A18:;
  c->r[28]=c->r[28]+0x00000001u; // 800D5A18
  c->r[0]=rotl(c->r[28],30)&0xC0000000u; // 800D5A1C
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 800D5A20
  c->r[0]=c->r[0]-c->r[3]; // 800D5A24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 800D5A28
  c->r[28]=c->r[0]+c->r[3]; // 800D5A2C
  c->r[0]=rotl(c->r[28],5)&0xFFFFFFE0u; // 800D5A30
  c->r[29]=c->r[17]+c->r[0]; // 800D5A34
  c->r[0]=R32(c->r[17]+c->r[0]); // 800D5A38
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5A3C
  if (crb(c,2)) { goto L_800D5AAC; } // 800D5A40
  c->lr=0x800D5A48u; f_800D0540(c); // 800D5A44
  c->r[5]=R32(c->r[29]+0x00000018u); // 800D5A48
  c->r[0]=c->r[3]^0x80000000u; // 800D5A4C
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 800D5A50
  c->r[5]=c->r[5]^0x80000000u; // 800D5A54
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 800D5A58
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D5A5C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D5A60
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D5A64
  if (!crb(c,2)) { goto L_800D5AAC; } // 800D5A68
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D5A6C
  c->r[4]=R32(c->r[29]+0x00000004u); // 800D5A70
  c->r[5]=R32(c->r[29]+0x00000008u); // 800D5A74
  c->r[6]=R32(c->r[29]+0x0000000Cu); // 800D5A78
  c->r[7]=R32(c->r[29]+0x00000010u); // 800D5A7C
  c->r[8]=R32(c->r[29]+0x00000014u); // 800D5A80
  c->lr=0x800D5A88u; f_800D5FD0(c); // 800D5A84
  cmps(c,0,(int32_t)c->r[3],0); // 800D5A88
  if (crb(c,2)) { goto L_800D5AB8; } // 800D5A8C
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 800D5A90
  c->r[0]=c->r[27]+0x000000C0u; // 800D5A94
  c->r[3]=c->r[0]+c->r[3]; // 800D5A98
  c->lr=0x800D5AA0u; f_800C6A30(c); // 800D5A9C
  c->r[0]=0u+0xFFFFFFFFu; // 800D5AA0
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D5AA4
  goto L_800D5AB8; // 800D5AA8
L_800D5AAC:;
  c->r[26]=c->r[26]+0x00000001u; // 800D5AAC
  cmps(c,0,(int32_t)c->r[26],4); // 800D5AB0
  if (crb(c,0)) { IRQCHK(c); goto L_800D5A18; } // 800D5AB4
L_800D5AB8:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D5AB8
  if (crb(c,2)) { goto L_800D5AD8; } // 800D5ABC
  c->r[12]=c->r[24]|c->r[24]; // 800D5AC0
  c->r[3]=c->r[22]|c->r[22]; // 800D5AC4
  c->r[4]=c->r[23]|c->r[23]; // 800D5AC8
  c->r[5]=c->r[31]|c->r[31]; // 800D5ACC
  c->ctr=c->r[12]; // 800D5AD0
  if (true) { c->lr=0x800D5AD8u; dispatch(c,c->ctr); } // 800D5AD4
L_800D5AD8:;
  c->r[5]=0u+0xCD000000u; // 800D5AD8
  c->r[3]=0u+0x802B0000u; // 800D5ADC
  c->r[0]=rotl(c->r[22],3)&0xFFFFFFF8u; // 800D5AE0
  c->r[4]=0u+0x0F000000u; // 800D5AE4
  c->r[4]=sraw(c,c->r[4],(c->r[0])&63); // 800D5AE8
  c->r[6]=R32(c->r[5]+0x00006438u); // 800D5AEC
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800D5AF0
  c->r[3]=c->r[3]+0xFFFFE258u; // 800D5AF4
  c->r[6]=c->r[6]&c->r[4]; // 800D5AF8
  W32(c->r[5]+0x00006438u,c->r[6]); // 800D5AFC
  c->r[6]=c->r[3]+c->r[0]; // 800D5B00
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D5B04
  cmpu(c,0,c->r[0],0x00000080u); // 800D5B08
  if (!crb(c,2)) { goto L_800D5B8C; } // 800D5B0C
  c->r[0]=rotl(c->r[22],5)&0xFFFFFFE0u; // 800D5B10
  c->r[3]=c->r[27]+0x00000000u; // 800D5B14
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D5B18
  c->r[4]=0u+0x00000000u; // 800D5B1C
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5B20
  if (!crb(c,2)) { goto L_800D5B38; } // 800D5B24
  c->r[3]=0u+0x802B0000u; // 800D5B28
  c->r[0]=R32(c->r[3]+0xFFFFE240u); // 800D5B2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 800D5B30
  if (!crb(c,2)) { goto L_800D5B3C; } // 800D5B34
L_800D5B38:;
  c->r[4]=0u+0x00000001u; // 800D5B38
L_800D5B3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D5B3C
  if (!crb(c,2)) { goto L_800D5B8C; } // 800D5B40
  c->r[4]=0u+0x80000000u; // 800D5B44
  c->r[8]=0u+0x800D0000u; // 800D5B48
  c->r[0]=R32(c->r[4]+0x000000F8u); // 800D5B4C
  c->r[3]=0u+0x431C0000u; // 800D5B50
  c->r[4]=c->r[3]+0xFFFFDE83u; // 800D5B54
  c->r[8]=c->r[8]+0x000066B0u; // 800D5B58
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D5B5C
  c->r[3]=c->r[22]|c->r[22]; // 800D5B60
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800D5B64
  c->r[4]=c->r[13]+0xFFFFA5A0u; // 800D5B68
  c->r[5]=0u+0x00000001u; // 800D5B6C
  c->r[7]=0u+0x00000003u; // 800D5B70
  c->r[9]=0u+0x00000000u; // 800D5B74
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 800D5B78
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 800D5B7C
  c->r[0]=c->r[0]+c->r[10]; // 800D5B80
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D5B84
  c->lr=0x800D5B8Cu; f_800D6540(c); // 800D5B88
L_800D5B8C:;
  c->r[3]=rotl(c->r[21],0)&0x18000000u; // 800D5B8C
  c->r[0]=c->r[3]+0xE8000000u; // 800D5B90
  cmpu(c,0,c->r[0],0x00000000u); // 800D5B94
  if (!crb(c,2)) { goto L_800D5D84; } // 800D5B98
  c->lr=0x800D5BA0u; f_800D9380(c); // 800D5B9C
  c->r[4]=0u+0x802B0000u; // 800D5BA0
  c->r[25]=0u+0x802B0000u; // 800D5BA4
  c->r[4]=c->r[4]+0xFFFFE240u; // 800D5BA8
  c->r[28]=0u+0xCD000000u; // 800D5BAC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5BB0
  c->r[19]=c->r[3]+0x00000001u; // 800D5BB4
  c->r[25]=c->r[25]+0xFFFFE258u; // 800D5BB8
  c->r[24]=c->r[28]+0x00006400u; // 800D5BBC
  c->r[18]=rotl(c->r[0],16)&0x000003FFu; // 800D5BC0
  c->r[23]=c->r[27]+0x00000180u; // 800D5BC4
  c->r[22]=c->r[27]+0x000001A0u; // 800D5BC8
  c->r[21]=c->r[27]+0x000001B0u; // 800D5BCC
  c->r[20]=0u+0x00000000u; // 800D5BD0
  c->r[29]=0u+0x00000008u; // 800D5BD4
  c->r[17]=0u+0x00000001u; // 800D5BD8
L_800D5BDC:;
  c->lr=0x800D5BE0u; f_800CBAA0(c); // 800D5BDC
  c->r[0]=addc(c,~c->r[20],0x00000003u,1); // 800D5BE0
  c->r[26]=R32(c->r[28]+0x00006438u); // 800D5BE4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D5BE8
  c->r[26]=((c->r[0])&0x20)?0u:(c->r[26]>>((c->r[0])&31)); // 800D5BEC
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 800D5BF0
  if (crb(c,2)) { goto L_800D5C08; } // 800D5BF4
  c->r[0]=R32(c->r[25]+0x00000000u); // 800D5BF8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D5BFC
  if (!crb(c,2)) { goto L_800D5C08; } // 800D5C00
  W32(c->r[25]+0x00000000u,c->r[29]); // 800D5C04
L_800D5C08:;
  c->lr=0x800D5C0Cu; f_800CBAE0(c); // 800D5C08
  c->r[0]=rotl(c->r[26],0)&0x00000020u; cr0(c,c->r[0]); // 800D5C0C
  if (crb(c,2)) { goto L_800D5C30; } // 800D5C10
  c->r[0]=R32(c->r[24]+0x00000004u); // 800D5C14
  c->r[3]=0u+0x00000001u; // 800D5C18
  W32(c->r[23]+0x00000000u,c->r[0]); // 800D5C1C
  c->r[0]=R32(c->r[24]+0x00000008u); // 800D5C20
  W32(c->r[23]+0x00000004u,c->r[0]); // 800D5C24
  W32(c->r[22]+0x00000000u,c->r[17]); // 800D5C28
  goto L_800D5C34; // 800D5C2C
L_800D5C30:;
  c->r[3]=0u+0x00000000u; // 800D5C30
L_800D5C34:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5C34
  if (crb(c,2)) { goto L_800D5C40; } // 800D5C38
  W32(c->r[21]+0x00000000u,c->r[19]); // 800D5C3C
L_800D5C40:;
  c->r[20]=c->r[20]+0x00000001u; // 800D5C40
  c->r[24]=c->r[24]+0x0000000Cu; // 800D5C44
  cmps(c,0,(int32_t)c->r[20],4); // 800D5C48
  c->r[23]=c->r[23]+0x00000008u; // 800D5C4C
  c->r[22]=c->r[22]+0x00000004u; // 800D5C50
  c->r[21]=c->r[21]+0x00000004u; // 800D5C54
  c->r[25]=c->r[25]+0x00000004u; // 800D5C58
  if (crb(c,0)) { IRQCHK(c); goto L_800D5BDC; } // 800D5C5C
  c->r[4]=0u+0x802B0000u; // 800D5C60
  c->r[3]=0u+0x80000000u; // 800D5C64
  c->r[4]=c->r[4]+0xFFFFE240u; // 800D5C68
  c->r[0]=0u+0x00000018u; // 800D5C6C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D5C70
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5C74
  c->r[4]=c->r[27]+0x000001B0u; // 800D5C78
  c->r[6]=rotl(c->r[18],31)&0x7FFFFFFFu; // 800D5C7C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5C80
  if (crb(c,2)) { goto L_800D5CA8; } // 800D5C84
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D5C88
  cmps(c,0,(int32_t)c->r[0],0); // 800D5C8C
  if (crb(c,2)) { goto L_800D5D84; } // 800D5C90
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D5C94
  c->r[0]=c->r[6]+c->r[0]; // 800D5C98
  cmpu(c,0,c->r[0],c->r[19]); // 800D5C9C
  if (!crb(c,0)) { goto L_800D5CA8; } // 800D5CA0
  goto L_800D5D84; // 800D5CA4
L_800D5CA8:;
  c->r[0]=0u+0x00000019u; // 800D5CA8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5CAC
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5CB0
  if (crb(c,2)) { goto L_800D5CD8; } // 800D5CB4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5CB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D5CBC
  if (crb(c,2)) { goto L_800D5D84; } // 800D5CC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5CC4
  c->r[0]=c->r[6]+c->r[0]; // 800D5CC8
  cmpu(c,0,c->r[0],c->r[19]); // 800D5CCC
  if (!crb(c,0)) { goto L_800D5CD8; } // 800D5CD0
  goto L_800D5D84; // 800D5CD4
L_800D5CD8:;
  c->r[0]=0u+0x0000001Au; // 800D5CD8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5CDC
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5CE0
  if (crb(c,2)) { goto L_800D5D08; } // 800D5CE4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D5CE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D5CEC
  if (crb(c,2)) { goto L_800D5D84; } // 800D5CF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D5CF4
  c->r[0]=c->r[6]+c->r[0]; // 800D5CF8
  cmpu(c,0,c->r[0],c->r[19]); // 800D5CFC
  if (!crb(c,0)) { goto L_800D5D08; } // 800D5D00
  goto L_800D5D84; // 800D5D04
L_800D5D08:;
  c->r[0]=0u+0x0000001Bu; // 800D5D08
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5D0C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5D10
  if (crb(c,2)) { goto L_800D5D38; } // 800D5D14
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D5D18
  cmps(c,0,(int32_t)c->r[0],0); // 800D5D1C
  if (crb(c,2)) { goto L_800D5D84; } // 800D5D20
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D5D24
  c->r[0]=c->r[6]+c->r[0]; // 800D5D28
  cmpu(c,0,c->r[0],c->r[19]); // 800D5D2C
  if (!crb(c,0)) { goto L_800D5D38; } // 800D5D30
  goto L_800D5D84; // 800D5D34
L_800D5D38:;
  c->r[3]=c->r[27]+0x000001B0u; // 800D5D38
  c->r[0]=0u+0x00000000u; // 800D5D3C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D5D40
  c->r[17]=c->r[27]+0x000001C0u; // 800D5D44
  c->r[18]=0u+0x00000000u; // 800D5D48
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5D4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D5D50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D5D54
L_800D5D58:;
  c->r[12]=R32(c->r[17]+0x00000000u); // 800D5D58
  cmps(c,0,(int32_t)c->r[12],0); // 800D5D5C
  if (crb(c,2)) { goto L_800D5D74; } // 800D5D60
  c->r[3]=c->r[30]|c->r[30]; // 800D5D64
  c->r[4]=c->r[31]|c->r[31]; // 800D5D68
  c->ctr=c->r[12]; // 800D5D6C
  if (true) { c->lr=0x800D5D74u; dispatch(c,c->ctr); } // 800D5D70
L_800D5D74:;
  c->r[18]=c->r[18]+0x00000001u; // 800D5D74
  c->r[17]=c->r[17]+0x00000004u; // 800D5D78
  cmps(c,0,(int32_t)c->r[18],4); // 800D5D7C
  if (crb(c,0)) { IRQCHK(c); goto L_800D5D58; } // 800D5D80
L_800D5D84:;
  c->r[11]=c->r[1]+0x00000050u; // 800D5D84
  c->lr=0x800D5D8Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D5D88
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D5D8C
  c->lr=c->r[0]; // 800D5D90
  c->r[1]=c->r[1]+0x00000050u; // 800D5D94
  return; // 800D5D98
}

// fn_800D5DA0
void f_800D5DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5DA0
  c->r[0]=c->lr; // 800D5DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5DAC
  c->r[31]=c->r[3]|c->r[3]; // 800D5DB0
  c->lr=0x800D5DB8u; f_800CBAA0(c); // 800D5DB4
  c->r[4]=0u+0xCD000000u; // 800D5DB8
  cmps(c,0,(int32_t)c->r[31],0); // 800D5DBC
  c->r[5]=R32(c->r[4]+0x00006434u); // 800D5DC0
  c->r[31]=rotl(c->r[5],5)&0x00000001u; // 800D5DC4
  if (crb(c,2)) { goto L_800D5DEC; } // 800D5DC8
  c->r[4]=0u+0x802F0000u; // 800D5DCC
  c->r[0]=0u+0x00000000u; // 800D5DD0
  {uint32_t ea=c->r[4]+0xFFFFA6C0u; W32(ea,c->r[0]); c->r[4]=ea;} // 800D5DD4
  c->r[5]=c->r[5]|0x08000000u; // 800D5DD8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5DDC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D5DE0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D5DE4
  goto L_800D5DF0; // 800D5DE8
L_800D5DEC:;
  c->r[5]=rotl(c->r[5],0)&0xF7FFFFFFu; // 800D5DEC
L_800D5DF0:;
  c->r[4]=0u+0xCD000000u; // 800D5DF0
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFEu; // 800D5DF4
  W32(c->r[4]+0x00006434u,c->r[0]); // 800D5DF8
  c->lr=0x800D5E00u; f_800CBAE0(c); // 800D5DFC
  c->r[3]=c->r[31]|c->r[31]; // 800D5E00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5E04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5E08
  c->lr=c->r[0]; // 800D5E0C
  c->r[1]=c->r[1]+0x00000010u; // 800D5E10
  return; // 800D5E14
}

// fn_800D5E20
void f_800D5E20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5E20
  c->r[0]=c->lr; // 800D5E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5E2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5E30
  c->r[30]=c->r[3]|c->r[3]; // 800D5E34
  c->lr=0x800D5E3Cu; f_800CBAA0(c); // 800D5E38
  c->r[4]=0u+0x802F0000u; // 800D5E3C
  c->r[0]=0u+0x00000004u; // 800D5E40
  c->r[31]=c->r[3]|c->r[3]; // 800D5E44
  c->r[5]=0u+0x00000000u; // 800D5E48
  c->r[4]=c->r[4]+0xFFFFA6D0u; // 800D5E4C
  c->ctr=c->r[0]; // 800D5E50
  c->r[0]=c->r[0]|0x00000000u; // 800D5E54
L_800D5E58:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D5E58
  cmpu(c,0,c->r[0],c->r[30]); // 800D5E5C
  if (!crb(c,2)) { goto L_800D5EDC; } // 800D5E60
  c->r[3]=0u+0x802F0000u; // 800D5E64
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D5E68
  c->r[3]=c->r[3]+0xFFFFA6D0u; // 800D5E6C
  c->r[4]=0u+0x00000000u; // 800D5E70
  W32(c->r[3]+c->r[0],c->r[4]); // 800D5E74
  c->r[4]=0u+0x00000000u; // 800D5E78
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5E7C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5E80
  if (!crb(c,2)) { goto L_800D5EBC; } // 800D5E84
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5E88
  c->r[4]=0u+0x00000001u; // 800D5E8C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5E90
  if (!crb(c,2)) { goto L_800D5EBC; } // 800D5E94
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D5E98
  c->r[4]=0u+0x00000002u; // 800D5E9C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5EA0
  if (!crb(c,2)) { goto L_800D5EBC; } // 800D5EA4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D5EA8
  c->r[4]=0u+0x00000003u; // 800D5EAC
  cmps(c,0,(int32_t)c->r[0],0); // 800D5EB0
  if (!crb(c,2)) { goto L_800D5EBC; } // 800D5EB4
  c->r[4]=0u+0x00000004u; // 800D5EB8
L_800D5EBC:;
  cmps(c,0,(int32_t)c->r[4],4); // 800D5EBC
  if (!crb(c,2)) { goto L_800D5ECC; } // 800D5EC0
  c->r[3]=0u+0x00000000u; // 800D5EC4
  c->lr=0x800D5ECCu; f_800D5DA0(c); // 800D5EC8
L_800D5ECC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5ECC
  c->lr=0x800D5ED4u; f_800CBAE0(c); // 800D5ED0
  c->r[3]=0u+0x00000001u; // 800D5ED4
  goto L_800D5EF4; // 800D5ED8
L_800D5EDC:;
  c->r[4]=c->r[4]+0x00000004u; // 800D5EDC
  c->r[5]=c->r[5]+0x00000001u; // 800D5EE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D5E58; } // 800D5EE4
  c->r[3]=c->r[31]|c->r[31]; // 800D5EE8
  c->lr=0x800D5EF0u; f_800CBAE0(c); // 800D5EEC
  c->r[3]=0u+0x00000000u; // 800D5EF0
L_800D5EF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5EF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5EF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5EFC
  c->lr=c->r[0]; // 800D5F00
  c->r[1]=c->r[1]+0x00000010u; // 800D5F04
  return; // 800D5F08
}

// SIInit
void f_800D5F10(Ctx* __restrict c) {
  trace_call(0x800D5F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F10
  c->r[0]=c->lr; // 800D5F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5F18
  c->r[0]=R32(c->r[13]+0xFFFFA5A4u); // 800D5F1C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5F20
  if (!crb(c,2)) { goto L_800D5FC0; } // 800D5F24
  c->r[3]=R32(c->r[13]+0xFFFF8F80u); // 800D5F28
  c->lr=0x800D5F30u; f_800C65B0(c); // 800D5F2C
  c->r[6]=0u+0x802F0000u; // 800D5F30
  c->r[4]=0u+0x802B0000u; // 800D5F34
  c->r[5]=c->r[6]+0xFFFFA510u; // 800D5F38
  c->r[7]=0u+0xFFFFFFFFu; // 800D5F3C
  c->r[4]=c->r[4]+0xFFFFE240u; // 800D5F40
  c->r[0]=0u+0x00000000u; // 800D5F44
  W32(c->r[5]+0x00000060u,c->r[7]); // 800D5F48
  c->r[3]=0u+0x00000000u; // 800D5F4C
  W32(c->r[5]+0x00000040u,c->r[7]); // 800D5F50
  W32(c->r[5]+0x00000020u,c->r[7]); // 800D5F54
  W32(c->r[6]+0xFFFFA510u,c->r[7]); // 800D5F58
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5F5C
  c->lr=0x800D5F64u; f_800D6C40(c); // 800D5F60
  c->r[3]=0u+0xCD000000u; // 800D5F64
L_800D5F68:;
  c->r[0]=R32(c->r[3]+0x00006434u); // 800D5F68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D5F6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D5F68; } // 800D5F70
  c->r[3]=0u+0xCD000000u; // 800D5F74
  c->r[0]=0u+0x80000000u; // 800D5F78
  c->r[4]=0u+0x800D0000u; // 800D5F7C
  W32(c->r[3]+0x00006434u,c->r[0]); // 800D5F80
  c->r[4]=c->r[4]+0x000059B0u; // 800D5F84
  c->r[3]=0u+0x00000014u; // 800D5F88
  c->lr=0x800D5F90u; f_800CBB10(c); // 800D5F8C
  c->r[3]=0u+0x00000800u; // 800D5F90
  c->lr=0x800D5F98u; f_800CBEF0(c); // 800D5F94
  c->r[3]=0u+0x00000000u; // 800D5F98
  c->lr=0x800D5FA0u; f_800D6970(c); // 800D5F9C
  c->r[3]=0u+0x00000001u; // 800D5FA0
  c->lr=0x800D5FA8u; f_800D6970(c); // 800D5FA4
  c->r[3]=0u+0x00000002u; // 800D5FA8
  c->lr=0x800D5FB0u; f_800D6970(c); // 800D5FAC
  c->r[3]=0u+0x00000003u; // 800D5FB0
  c->lr=0x800D5FB8u; f_800D6970(c); // 800D5FB4
  c->r[0]=0u+0x00000001u; // 800D5FB8
  W32(c->r[13]+0xFFFFA5A4u,c->r[0]); // 800D5FBC
L_800D5FC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5FC0
  c->lr=c->r[0]; // 800D5FC4
  c->r[1]=c->r[1]+0x00000010u; // 800D5FC8
  return; // 800D5FCC
}

// fn_800D5FD0
void f_800D5FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5FD0
  c->r[0]=c->lr; // 800D5FD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5FD8
  c->r[11]=c->r[1]+0x00000020u; // 800D5FDC
  c->lr=0x800D5FE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5FE0
  c->r[27]=c->r[3]|c->r[3]; // 800D5FE4
  c->r[28]=c->r[4]|c->r[4]; // 800D5FE8
  c->r[29]=c->r[5]|c->r[5]; // 800D5FEC
  c->r[26]=c->r[6]|c->r[6]; // 800D5FF0
  c->r[30]=c->r[7]|c->r[7]; // 800D5FF4
  c->r[31]=c->r[8]|c->r[8]; // 800D5FF8
  c->lr=0x800D6000u; f_800CBAA0(c); // 800D5FFC
  c->r[8]=0u+0x802B0000u; // 800D6000
  c->r[0]=R32(c->r[8]+0xFFFFE240u); // 800D6004
  cmps(c,0,(int32_t)c->r[0],-1); // 800D6008
  if (crb(c,2)) { goto L_800D601C; } // 800D600C
  c->lr=0x800D6014u; f_800CBAE0(c); // 800D6010
  c->r[3]=0u+0x00000000u; // 800D6014
  goto L_800D6168; // 800D6018
L_800D601C:;
  c->r[7]=0u+0xCD000000u; // 800D601C
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D6020
  c->r[5]=0u+0x0F000000u; // 800D6024
  c->r[9]=R32(c->r[7]+0x00006438u); // 800D6028
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 800D602C
  c->r[0]=c->r[29]+0x00000003u; // 800D6030
  c->r[9]=c->r[9]&c->r[5]; // 800D6034
  W32(c->r[7]+0x00006438u,c->r[9]); // 800D6038
  c->r[6]=c->r[8]+0xFFFFE240u; // 800D603C
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[4]); // 800D6040
  W32(c->r[8]+0xFFFFE240u,c->r[27]); // 800D6044
  c->r[5]=0u+0x00000000u; // 800D6048
  W32(c->r[6]+0x00000010u,c->r[31]); // 800D604C
  W32(c->r[6]+0x00000008u,c->r[30]); // 800D6050
  W32(c->r[6]+0x0000000Cu,c->r[26]); // 800D6054
  if (crb(c,2)) { goto L_800D610C; } // 800D6058
  cmpu(c,0,c->r[4],0x00000008u); // 800D605C
  c->r[6]=c->r[4]+0xFFFFFFF8u; // 800D6060
  if (!crb(c,1)) { goto L_800D60D4; } // 800D6064
  c->r[0]=c->r[6]+0x00000007u; // 800D6068
  c->r[8]=c->r[28]|c->r[28]; // 800D606C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D6070
  c->r[7]=c->r[7]+0x00006400u; // 800D6074
  c->ctr=c->r[0]; // 800D6078
  cmpu(c,0,c->r[6],0x00000000u); // 800D607C
  if (!crb(c,1)) { goto L_800D60D4; } // 800D6080
L_800D6084:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 800D6084
  c->r[5]=c->r[5]+0x00000008u; // 800D6088
  W32(c->r[7]+0x00000080u,c->r[0]); // 800D608C
  c->r[0]=R32(c->r[8]+0x00000004u); // 800D6090
  W32(c->r[7]+0x00000084u,c->r[0]); // 800D6094
  c->r[0]=R32(c->r[8]+0x00000008u); // 800D6098
  W32(c->r[7]+0x00000088u,c->r[0]); // 800D609C
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D60A0
  W32(c->r[7]+0x0000008Cu,c->r[0]); // 800D60A4
  c->r[0]=R32(c->r[8]+0x00000010u); // 800D60A8
  W32(c->r[7]+0x00000090u,c->r[0]); // 800D60AC
  c->r[0]=R32(c->r[8]+0x00000014u); // 800D60B0
  W32(c->r[7]+0x00000094u,c->r[0]); // 800D60B4
  c->r[0]=R32(c->r[8]+0x00000018u); // 800D60B8
  W32(c->r[7]+0x00000098u,c->r[0]); // 800D60BC
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800D60C0
  c->r[8]=c->r[8]+0x00000020u; // 800D60C4
  W32(c->r[7]+0x0000009Cu,c->r[0]); // 800D60C8
  c->r[7]=c->r[7]+0x00000020u; // 800D60CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D6084; } // 800D60D0
L_800D60D4:;
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D60D4
  c->r[0]=0u+0xCD000000u; // 800D60D8
  c->r[6]=c->r[0]+c->r[7]; // 800D60DC
  c->r[0]=c->r[4]-c->r[5]; // 800D60E0
  c->r[7]=c->r[28]+c->r[7]; // 800D60E4
  c->r[6]=c->r[6]+0x00006400u; // 800D60E8
  c->ctr=c->r[0]; // 800D60EC
  cmpu(c,0,c->r[5],c->r[4]); // 800D60F0
  if (!crb(c,0)) { goto L_800D610C; } // 800D60F4
L_800D60F8:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D60F8
  c->r[7]=c->r[7]+0x00000004u; // 800D60FC
  W32(c->r[6]+0x00000080u,c->r[0]); // 800D6100
  c->r[6]=c->r[6]+0x00000004u; // 800D6104
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D60F8; } // 800D6108
L_800D610C:;
  c->r[4]=c->r[29]+0xFFFFFF80u; // 800D610C
  c->r[0]=addc(c,~c->r[29],0x00000080u,1); // 800D6110
  c->r[0]=~(c->r[4]|c->r[0]); // 800D6114
  c->r[9]=0u+0xCD000000u; // 800D6118
  c->r[5]=sraw(c,c->r[0],31); // 800D611C
  c->r[6]=0u-c->r[31]; // 800D6120
  c->r[4]=c->r[30]+0xFFFFFF80u; // 800D6124
  c->r[0]=addc(c,~c->r[30],0x00000080u,1); // 800D6128
  c->r[0]=~(c->r[4]|c->r[0]); // 800D612C
  c->r[8]=R32(c->r[9]+0x00006434u); // 800D6130
  c->r[0]=sraw(c,c->r[0],31); // 800D6134
  c->r[7]=c->r[6]|c->r[31]; // 800D6138
  c->r[4]=c->r[29]&~c->r[5]; // 800D613C
  c->r[6]=c->r[8]|0x80000000u; // 800D6140
  c->r[6]=(rotl(c->r[7],31)&0x40000000u)|(c->r[6]&~0x40000000u); // 800D6144
  c->r[0]=c->r[30]&~c->r[0]; // 800D6148
  c->r[6]=(rotl(c->r[4],16)&0x007F0000u)|(c->r[6]&~0x007F0000u); // 800D614C
  c->r[6]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[6]&~0x00007F00u); // 800D6150
  c->r[6]=(rotl(c->r[27],1)&0x00000006u)|(c->r[6]&~0x00000006u); // 800D6154
  c->r[0]=c->r[6]|0x00000001u; // 800D6158
  W32(c->r[9]+0x00006434u,c->r[0]); // 800D615C
  c->lr=0x800D6164u; f_800CBAE0(c); // 800D6160
  c->r[3]=0u+0x00000001u; // 800D6164
L_800D6168:;
  c->r[11]=c->r[1]+0x00000020u; // 800D6168
  c->lr=0x800D6170u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D616C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6170
  c->lr=c->r[0]; // 800D6174
  c->r[1]=c->r[1]+0x00000020u; // 800D6178
  return; // 800D617C
}

// SIGetStatus
void f_800D6180(Ctx* __restrict c) {
  trace_call(0x800D6180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6180
  c->r[0]=c->lr; // 800D6184
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D618C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6190
  c->r[30]=c->r[3]|c->r[3]; // 800D6194
  c->lr=0x800D619Cu; f_800CBAA0(c); // 800D6198
  c->r[4]=0u+0xCD000000u; // 800D619C
  c->r[0]=addc(c,~c->r[30],0x00000003u,1); // 800D61A0
  c->r[31]=R32(c->r[4]+0x00006438u); // 800D61A4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D61A8
  c->r[31]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 800D61AC
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 800D61B0
  if (crb(c,2)) { goto L_800D61D8; } // 800D61B4
  c->r[4]=0u+0x802B0000u; // 800D61B8
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800D61BC
  c->r[4]=c->r[4]+0xFFFFE258u; // 800D61C0
  c->r[0]=R32(c->r[4]+c->r[5]); // 800D61C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D61C8
  if (!crb(c,2)) { goto L_800D61D8; } // 800D61CC
  c->r[0]=0u+0x00000008u; // 800D61D0
  W32(c->r[4]+c->r[5],c->r[0]); // 800D61D4
L_800D61D8:;
  c->lr=0x800D61DCu; f_800CBAE0(c); // 800D61D8
  c->r[3]=c->r[31]|c->r[31]; // 800D61DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D61E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D61E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D61E8
  c->lr=c->r[0]; // 800D61EC
  c->r[1]=c->r[1]+0x00000010u; // 800D61F0
  return; // 800D61F4
}

// SISetCommand
void f_800D6200(Ctx* __restrict c) {
  trace_call(0x800D6200u);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D6200
  c->r[0]=0u+0xCD000000u; // 800D6204
  c->r[3]=c->r[0]+c->r[3]; // 800D6208
  W32(c->r[3]+0x00006400u,c->r[4]); // 800D620C
  return; // 800D6210
}

// SISetXY
void f_800D6220(Ctx* __restrict c) {
  trace_call(0x800D6220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6220
  c->r[0]=c->lr; // 800D6224
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6228
  c->r[0]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D622C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6230
  c->r[31]=rotl(c->r[3],16)&0xFFFF0000u; // 800D6234
  c->r[31]=c->r[31]|c->r[0]; // 800D6238
  c->lr=0x800D6240u; f_800CBAA0(c); // 800D623C
  c->r[5]=0u+0x802B0000u; // 800D6240
  c->r[4]=0u+0xCD000000u; // 800D6244
  c->r[5]=c->r[5]+0xFFFFE240u; // 800D6248
  c->r[0]=R32(c->r[5]+0x00000004u); // 800D624C
  c->r[0]=rotl(c->r[0],0)&0xFC0000FFu; // 800D6250
  c->r[31]=c->r[0]|c->r[31]; // 800D6254
  W32(c->r[5]+0x00000004u,c->r[31]); // 800D6258
  W32(c->r[4]+0x00006430u,c->r[31]); // 800D625C
  c->lr=0x800D6264u; f_800CBAE0(c); // 800D6260
  c->r[3]=c->r[31]|c->r[31]; // 800D6264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6268
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D626C
  c->lr=c->r[0]; // 800D6270
  c->r[1]=c->r[1]+0x00000010u; // 800D6274
  return; // 800D6278
}

// SIEnablePolling
void f_800D6280(Ctx* __restrict c) {
  trace_call(0x800D6280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6280
  c->r[0]=c->lr; // 800D6284
  cmps(c,0,(int32_t)c->r[3],0); // 800D6288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D628C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6290
  c->r[31]=c->r[3]|c->r[3]; // 800D6294
  if (!crb(c,2)) { goto L_800D62AC; } // 800D6298
  c->r[3]=0u+0x802B0000u; // 800D629C
  c->r[3]=c->r[3]+0xFFFFE240u; // 800D62A0
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D62A4
  goto L_800D62F4; // 800D62A8
L_800D62AC:;
  c->lr=0x800D62B0u; f_800CBAA0(c); // 800D62AC
  c->r[31]=rotl(c->r[31],8)&0x000000FFu; // 800D62B0
  c->r[6]=0u+0x802B0000u; // 800D62B4
  c->r[8]=rotl(c->r[31],28)&0x0000000Fu; // 800D62B8
  c->r[4]=0u+0xCD000000u; // 800D62BC
  c->r[6]=c->r[6]+0xFFFFE240u; // 800D62C0
  c->r[0]=0u+0x80000000u; // 800D62C4
  c->r[7]=c->r[8]|0x03FF0000u; // 800D62C8
  c->r[5]=R32(c->r[6]+0x00000004u); // 800D62CC
  c->r[7]=c->r[7]|0x0000FFF0u; // 800D62D0
  c->r[31]=c->r[31]&c->r[7]; // 800D62D4
  c->r[5]=c->r[5]&~c->r[8]; // 800D62D8
  c->r[31]=c->r[5]|c->r[31]; // 800D62DC
  W32(c->r[6]+0x00000004u,c->r[31]); // 800D62E0
  W32(c->r[4]+0x00006438u,c->r[0]); // 800D62E4
  W32(c->r[4]+0x00006430u,c->r[31]); // 800D62E8
  c->lr=0x800D62F0u; f_800CBAE0(c); // 800D62EC
  c->r[3]=c->r[31]|c->r[31]; // 800D62F0
L_800D62F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D62F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D62F8
  c->lr=c->r[0]; // 800D62FC
  c->r[1]=c->r[1]+0x00000010u; // 800D6300
  return; // 800D6304
}

// SIDisablePolling
void f_800D6310(Ctx* __restrict c) {
  trace_call(0x800D6310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6310
  c->r[0]=c->lr; // 800D6314
  cmps(c,0,(int32_t)c->r[3],0); // 800D6318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D631C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6320
  c->r[31]=c->r[3]|c->r[3]; // 800D6324
  if (!crb(c,2)) { goto L_800D633C; } // 800D6328
  c->r[3]=0u+0x802B0000u; // 800D632C
  c->r[3]=c->r[3]+0xFFFFE240u; // 800D6330
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6334
  goto L_800D6368; // 800D6338
L_800D633C:;
  c->lr=0x800D6340u; f_800CBAA0(c); // 800D633C
  c->r[6]=0u+0x802B0000u; // 800D6340
  c->r[0]=rotl(c->r[31],8)&0x000000F0u; // 800D6344
  c->r[6]=c->r[6]+0xFFFFE240u; // 800D6348
  c->r[4]=0u+0xCD000000u; // 800D634C
  c->r[5]=R32(c->r[6]+0x00000004u); // 800D6350
  c->r[31]=c->r[5]&~c->r[0]; // 800D6354
  W32(c->r[4]+0x00006430u,c->r[31]); // 800D6358
  W32(c->r[6]+0x00000004u,c->r[31]); // 800D635C
  c->lr=0x800D6364u; f_800CBAE0(c); // 800D6360
  c->r[3]=c->r[31]|c->r[31]; // 800D6364
L_800D6368:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D636C
  c->lr=c->r[0]; // 800D6370
  c->r[1]=c->r[1]+0x00000010u; // 800D6374
  return; // 800D6378
}

// SIGetResponse
void f_800D6380(Ctx* __restrict c) {
  trace_call(0x800D6380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6380
  c->r[0]=c->lr; // 800D6384
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6388
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D638C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6390
  c->r[30]=c->r[4]|c->r[4]; // 800D6394
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6398
  c->r[29]=c->r[3]|c->r[3]; // 800D639C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D63A0
  c->lr=0x800D63A8u; f_800CBAA0(c); // 800D63A4
  c->r[31]=c->r[3]|c->r[3]; // 800D63A8
  c->lr=0x800D63B0u; f_800CBAA0(c); // 800D63AC
  c->r[4]=0u+0xCD000000u; // 800D63B0
  c->r[0]=addc(c,~c->r[29],0x00000003u,1); // 800D63B4
  c->r[28]=R32(c->r[4]+0x00006438u); // 800D63B8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D63BC
  c->r[28]=((c->r[0])&0x20)?0u:(c->r[28]>>((c->r[0])&31)); // 800D63C0
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 800D63C4
  if (crb(c,2)) { goto L_800D63EC; } // 800D63C8
  c->r[4]=0u+0x802B0000u; // 800D63CC
  c->r[5]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D63D0
  c->r[4]=c->r[4]+0xFFFFE258u; // 800D63D4
  c->r[0]=R32(c->r[4]+c->r[5]); // 800D63D8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D63DC
  if (!crb(c,2)) { goto L_800D63EC; } // 800D63E0
  c->r[0]=0u+0x00000008u; // 800D63E4
  W32(c->r[4]+c->r[5],c->r[0]); // 800D63E8
L_800D63EC:;
  c->lr=0x800D63F0u; f_800CBAE0(c); // 800D63EC
  c->r[0]=rotl(c->r[28],0)&0x00000020u; cr0(c,c->r[0]); // 800D63F0
  if (crb(c,2)) { goto L_800D6438; } // 800D63F4
  c->r[5]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800D63F8
  c->r[0]=0u+0xCD000000u; // 800D63FC
  c->r[4]=0u+0x802F0000u; // 800D6400
  c->r[3]=0u+0x802F0000u; // 800D6404
  c->r[6]=c->r[0]+c->r[5]; // 800D6408
  c->r[4]=c->r[4]+0xFFFFA690u; // 800D640C
  c->r[5]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D6410
  c->r[0]=R32(c->r[6]+0x00006404u); // 800D6414
  W32(c->r[4]+c->r[5],c->r[0]); // 800D6418
  c->r[5]=c->r[4]+c->r[5]; // 800D641C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D6420
  c->r[3]=c->r[3]+0xFFFFA6B0u; // 800D6424
  c->r[6]=R32(c->r[6]+0x00006408u); // 800D6428
  c->r[4]=0u+0x00000001u; // 800D642C
  W32(c->r[5]+0x00000004u,c->r[6]); // 800D6430
  W32(c->r[3]+c->r[0],c->r[4]); // 800D6434
L_800D6438:;
  c->r[3]=0u+0x802F0000u; // 800D6438
  c->r[4]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D643C
  c->r[3]=c->r[3]+0xFFFFA6B0u; // 800D6440
  c->r[0]=0u+0x00000000u; // 800D6444
  c->r[28]=R32(c->r[3]+c->r[4]); // 800D6448
  cmps(c,0,(int32_t)c->r[28],0); // 800D644C
  W32(c->r[3]+c->r[4],c->r[0]); // 800D6450
  if (crb(c,2)) { goto L_800D6478; } // 800D6454
  c->r[3]=0u+0x802F0000u; // 800D6458
  c->r[4]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D645C
  c->r[3]=c->r[3]+0xFFFFA690u; // 800D6460
  c->r[0]=R32(c->r[3]+c->r[4]); // 800D6464
  c->r[3]=c->r[3]+c->r[4]; // 800D6468
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D646C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6470
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D6474
L_800D6478:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6478
  c->lr=0x800D6480u; f_800CBAE0(c); // 800D647C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6480
  c->r[3]=c->r[28]|c->r[28]; // 800D6484
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6488
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D648C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D6490
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6494
  c->lr=c->r[0]; // 800D6498
  c->r[1]=c->r[1]+0x00000020u; // 800D649C
  return; // 800D64A0
}

// AlarmHandler
void f_800D64B0(Ctx* __restrict c) {
  trace_call(0x800D64B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64B0
  c->r[0]=c->lr; // 800D64B4
  c->r[6]=0u+0x802F0000u; // 800D64B8
  c->r[5]=0u+0x2AAB0000u; // 800D64BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D64C0
  c->r[6]=c->r[6]+0xFFFFA5D0u; // 800D64C4
  c->r[0]=c->r[3]-c->r[6]; // 800D64C8
  c->r[3]=c->r[5]+0xFFFFAAABu; // 800D64CC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D64D0
  c->r[4]=0u+0x802F0000u; // 800D64D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D64D8
  c->r[4]=c->r[4]+0xFFFFA510u; // 800D64DC
  c->r[0]=sraw(c,c->r[0],3); // 800D64E0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D64E4
  c->r[0]=c->r[0]+c->r[3]; // 800D64E8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800D64EC
  c->r[3]=R32(c->r[4]+c->r[0]); // 800D64F0
  c->r[31]=c->r[4]+c->r[0]; // 800D64F4
  cmps(c,0,(int32_t)c->r[3],-1); // 800D64F8
  if (crb(c,2)) { goto L_800D6528; } // 800D64FC
  c->r[4]=R32(c->r[31]+0x00000004u); // 800D6500
  c->r[5]=R32(c->r[31]+0x00000008u); // 800D6504
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 800D6508
  c->r[7]=R32(c->r[31]+0x00000010u); // 800D650C
  c->r[8]=R32(c->r[31]+0x00000014u); // 800D6510
  c->lr=0x800D6518u; f_800D5FD0(c); // 800D6514
  cmps(c,0,(int32_t)c->r[3],0); // 800D6518
  if (crb(c,2)) { goto L_800D6528; } // 800D651C
  c->r[0]=0u+0xFFFFFFFFu; // 800D6520
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D6524
L_800D6528:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D652C
  c->lr=c->r[0]; // 800D6530
  c->r[1]=c->r[1]+0x00000010u; // 800D6534
  return; // 800D6538
}

// SITransfer
void f_800D6540(Ctx* __restrict c) {
  trace_call(0x800D6540u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6540
  c->r[0]=c->lr; // 800D6544
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6548
  c->r[11]=c->r[1]+0x00000040u; // 800D654C
  c->lr=0x800D6554u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6550
  c->r[31]=0u+0x802F0000u; // 800D6554
  c->r[11]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800D6558
  c->r[31]=c->r[31]+0xFFFFA510u; // 800D655C
  c->r[21]=c->r[3]|c->r[3]; // 800D6560
  c->r[0]=c->r[31]+0x00000000u; // 800D6564
  c->r[22]=c->r[4]|c->r[4]; // 800D6568
  c->r[23]=c->r[5]|c->r[5]; // 800D656C
  c->r[24]=c->r[6]|c->r[6]; // 800D6570
  c->r[25]=c->r[7]|c->r[7]; // 800D6574
  c->r[26]=c->r[8]|c->r[8]; // 800D6578
  c->r[27]=c->r[9]|c->r[9]; // 800D657C
  c->r[28]=c->r[10]|c->r[10]; // 800D6580
  c->r[29]=c->r[0]+c->r[11]; // 800D6584
  c->lr=0x800D658Cu; f_800CBAA0(c); // 800D6588
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D658C
  c->r[30]=c->r[3]|c->r[3]; // 800D6590
  cmps(c,0,(int32_t)c->r[0],-1); // 800D6594
  if (!crb(c,2)) { goto L_800D65AC; } // 800D6598
  c->r[3]=0u+0x802B0000u; // 800D659C
  c->r[0]=R32(c->r[3]+0xFFFFE240u); // 800D65A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 800D65A4
  if (!crb(c,2)) { goto L_800D65BC; } // 800D65A8
L_800D65AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D65AC
  c->lr=0x800D65B4u; f_800CBAE0(c); // 800D65B0
  c->r[3]=0u+0x00000000u; // 800D65B4
  goto L_800D6694; // 800D65B8
L_800D65BC:;
  c->lr=0x800D65C0u; f_800D0540(c); // 800D65BC
  c->r[0]=c->r[28]|c->r[27]; cr0(c,c->r[0]); // 800D65C0
  c->r[8]=c->r[3]|c->r[3]; // 800D65C4
  if (!crb(c,2)) { goto L_800D65D8; } // 800D65C8
  c->r[28]=c->r[4]|c->r[4]; // 800D65CC
  c->r[27]=c->r[8]|c->r[8]; // 800D65D0
  goto L_800D65F4; // 800D65D4
L_800D65D8:;
  c->r[5]=rotl(c->r[21],3)&0xFFFFFFF8u; // 800D65D8
  c->r[0]=c->r[31]+0x00000080u; // 800D65DC
  c->r[6]=c->r[0]+c->r[5]; // 800D65E0
  c->r[5]=R32(c->r[6]+0x00000004u); // 800D65E4
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D65E8
  c->r[28]=addc(c,c->r[28],c->r[5],0); // 800D65EC
  c->r[27]=addc(c,c->r[27],c->r[0],c->xer_ca); // 800D65F0
L_800D65F4:;
  c->r[0]=c->r[3]^0x80000000u; // 800D65F4
  c->r[5]=c->r[27]^0x80000000u; // 800D65F8
  c->r[3]=addc(c,~c->r[28],c->r[4],1); // 800D65FC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D6600
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D6604
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D6608
  if (crb(c,2)) { goto L_800D6634; } // 800D660C
  c->r[3]=(uint32_t)((int32_t)c->r[21]*(int32_t)48); // 800D6610
  c->r[0]=c->r[31]+0x000000C0u; // 800D6614
  c->r[6]=addc(c,~c->r[4],c->r[28],1); // 800D6618
  c->r[7]=0u+0x800D0000u; // 800D661C
  c->r[3]=c->r[0]+c->r[3]; // 800D6620
  c->r[5]=addc(c,~c->r[8],c->r[27],c->xer_ca); // 800D6624
  c->r[7]=c->r[7]+0x000064B0u; // 800D6628
  c->lr=0x800D6630u; f_800C6930(c); // 800D662C
  goto L_800D6668; // 800D6630
L_800D6634:;
  c->r[3]=c->r[21]|c->r[21]; // 800D6634
  c->r[4]=c->r[22]|c->r[22]; // 800D6638
  c->r[5]=c->r[23]|c->r[23]; // 800D663C
  c->r[6]=c->r[24]|c->r[24]; // 800D6640
  c->r[7]=c->r[25]|c->r[25]; // 800D6644
  c->r[8]=c->r[26]|c->r[26]; // 800D6648
  c->lr=0x800D6650u; f_800D5FD0(c); // 800D664C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6650
  if (crb(c,2)) { goto L_800D6668; } // 800D6654
  c->r[3]=c->r[30]|c->r[30]; // 800D6658
  c->lr=0x800D6660u; f_800CBAE0(c); // 800D665C
  c->r[3]=0u+0x00000001u; // 800D6660
  goto L_800D6694; // 800D6664
L_800D6668:;
  W32(c->r[29]+0x00000000u,c->r[21]); // 800D6668
  c->r[3]=c->r[30]|c->r[30]; // 800D666C
  W32(c->r[29]+0x00000004u,c->r[22]); // 800D6670
  W32(c->r[29]+0x00000008u,c->r[23]); // 800D6674
  W32(c->r[29]+0x0000000Cu,c->r[24]); // 800D6678
  W32(c->r[29]+0x00000010u,c->r[25]); // 800D667C
  W32(c->r[29]+0x00000014u,c->r[26]); // 800D6680
  W32(c->r[29]+0x0000001Cu,c->r[28]); // 800D6684
  W32(c->r[29]+0x00000018u,c->r[27]); // 800D6688
  c->lr=0x800D6690u; f_800CBAE0(c); // 800D668C
  c->r[3]=0u+0x00000001u; // 800D6690
L_800D6694:;
  c->r[11]=c->r[1]+0x00000040u; // 800D6694
  c->lr=0x800D669Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6698
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D669C
  c->lr=c->r[0]; // 800D66A0
  c->r[1]=c->r[1]+0x00000040u; // 800D66A4
  return; // 800D66A8
}

// GetTypeCallback
void f_800D66B0(Ctx* __restrict c) {
  trace_call(0x800D66B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D66B0
  c->r[0]=c->lr; // 800D66B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D66B8
  c->r[11]=c->r[1]+0x00000020u; // 800D66BC
  c->lr=0x800D66C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D66C0
  c->r[31]=0u+0x802B0000u; // 800D66C4
  c->r[30]=0u+0x802F0000u; // 800D66C8
  c->r[29]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D66CC
  c->r[26]=c->r[3]|c->r[3]; // 800D66D0
  c->r[31]=c->r[31]+0xFFFFE258u; // 800D66D4
  c->r[27]=c->r[4]|c->r[4]; // 800D66D8
  c->r[0]=R32(c->r[31]+c->r[29]); // 800D66DC
  c->r[30]=c->r[30]+0xFFFFA510u; // 800D66E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800D66E4
  c->r[0]=c->r[0]|c->r[4]; // 800D66E8
  W32(c->r[31]+c->r[29],c->r[0]); // 800D66EC
  c->lr=0x800D66F4u; f_800D0540(c); // 800D66F0
  c->r[5]=rotl(c->r[26],3)&0xFFFFFFF8u; // 800D66F4
  c->r[0]=c->r[30]+0x000000A0u; // 800D66F8
  c->r[5]=c->r[0]+c->r[5]; // 800D66FC
  c->r[28]=R32(c->r[31]+c->r[29]); // 800D6700
  c->r[0]=rotl(c->r[27],0)&0x0000000Fu; cr0(c,c->r[0]); // 800D6704
  W32(c->r[5]+0x00000004u,c->r[4]); // 800D6708
  c->r[0]=0u+0x80000000u; // 800D670C
  c->r[4]=R32(c->r[13]+0xFFFFA5ACu); // 800D6710
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D6714
  c->r[6]=((c->r[26])&0x20)?0u:(c->r[0]>>((c->r[26])&31)); // 800D6718
  c->r[0]=c->r[4]&~c->r[6]; // 800D671C
  W32(c->r[13]+0xFFFFA5ACu,c->r[0]); // 800D6720
  c->r[27]=c->r[4]&c->r[6]; // 800D6724
  if (!crb(c,2)) { goto L_800D674C; } // 800D6728
  c->r[3]=rotl(c->r[28],0)&0x18000000u; // 800D672C
  c->r[0]=c->r[3]+0xF8000000u; // 800D6730
  cmpu(c,0,c->r[0],0x00000000u); // 800D6734
  if (!crb(c,2)) { goto L_800D674C; } // 800D6738
  c->r[0]=rotl(c->r[28],0)&0x80000000u; cr0(c,c->r[0]); // 800D673C
  if (crb(c,2)) { goto L_800D674C; } // 800D6740
  c->r[0]=rotl(c->r[28],0)&0x04000000u; cr0(c,c->r[0]); // 800D6744
  if (crb(c,2)) { goto L_800D67A4; } // 800D6748
L_800D674C:;
  c->r[3]=c->r[26]|c->r[26]; // 800D674C
  c->r[4]=0u+0x00000000u; // 800D6750
  c->lr=0x800D6758u; f_800CE360(c); // 800D6754
  c->r[28]=R32(c->r[31]+c->r[29]); // 800D6758
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 800D675C
  c->r[0]=c->r[30]+0x000001E0u; // 800D6760
  c->r[29]=0u+0x00000000u; // 800D6764
  c->r[30]=c->r[0]+c->r[3]; // 800D6768
  c->r[27]=0u+0x00000000u; // 800D676C
L_800D6770:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D6770
  cmps(c,0,(int32_t)c->r[12],0); // 800D6774
  if (crb(c,2)) { goto L_800D6790; } // 800D6778
  c->r[3]=c->r[26]|c->r[26]; // 800D677C
  c->r[4]=c->r[28]|c->r[28]; // 800D6780
  W32(c->r[30]+0x00000000u,c->r[27]); // 800D6784
  c->ctr=c->r[12]; // 800D6788
  if (true) { c->lr=0x800D6790u; dispatch(c,c->ctr); } // 800D678C
L_800D6790:;
  c->r[29]=c->r[29]+0x00000001u; // 800D6790
  c->r[30]=c->r[30]+0x00000004u; // 800D6794
  cmps(c,0,(int32_t)c->r[29],4); // 800D6798
  if (crb(c,0)) { IRQCHK(c); goto L_800D6770; } // 800D679C
  goto L_800D694C; // 800D67A0
L_800D67A4:;
  c->r[3]=c->r[26]|c->r[26]; // 800D67A4
  c->lr=0x800D67ACu; f_800CE2E0(c); // 800D67A8
  cmps(c,0,(int32_t)c->r[27],0); // 800D67AC
  c->r[27]=rotl(c->r[3],8)&0x00FFFF00u; // 800D67B0
  if (crb(c,2)) { goto L_800D680C; } // 800D67B4
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 800D67B8
  if (crb(c,2)) { goto L_800D680C; } // 800D67BC
  c->r[3]=0u+0x00D00000u; // 800D67C0
  c->r[0]=c->r[30]+0x000001D0u; // 800D67C4
  c->r[3]=c->r[3]+0xFFFFFF00u; // 800D67C8
  c->r[8]=0u+0x800D0000u; // 800D67CC
  c->r[4]=c->r[0]+c->r[29]; // 800D67D0
  c->r[0]=0u+0x00000080u; // 800D67D4
  c->r[3]=c->r[27]&c->r[3]; // 800D67D8
  W32(c->r[31]+c->r[29],c->r[0]); // 800D67DC
  c->r[3]=c->r[3]|0x4E100000u; // 800D67E0
  c->r[6]=c->r[31]+c->r[29]; // 800D67E4
  W32(c->r[4]+0x00000000u,c->r[3]); // 800D67E8
  c->r[3]=c->r[26]|c->r[26]; // 800D67EC
  c->r[8]=c->r[8]+0x000066B0u; // 800D67F0
  c->r[5]=0u+0x00000003u; // 800D67F4
  c->r[7]=0u+0x00000003u; // 800D67F8
  c->r[10]=0u+0x00000000u; // 800D67FC
  c->r[9]=0u+0x00000000u; // 800D6800
  c->lr=0x800D6808u; f_800D6540(c); // 800D6804
  goto L_800D694C; // 800D6808
L_800D680C:;
  c->r[0]=rotl(c->r[28],0)&0x00100000u; cr0(c,c->r[0]); // 800D680C
  if (crb(c,2)) { goto L_800D688C; } // 800D6810
  c->r[3]=0u+0x00D00000u; // 800D6814
  c->r[0]=c->r[3]+0xFFFFFF00u; // 800D6818
  c->r[3]=c->r[28]&c->r[0]; // 800D681C
  c->r[0]=c->r[27]&c->r[0]; // 800D6820
  cmpu(c,0,c->r[0],c->r[3]); // 800D6824
  if (crb(c,2)) { goto L_800D6904; } // 800D6828
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 800D682C
  if (!crb(c,2)) { goto L_800D6844; } // 800D6830
  c->r[27]=c->r[3]|0x00100000u; // 800D6834
  c->r[3]=c->r[26]|c->r[26]; // 800D6838
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 800D683C
  c->lr=0x800D6844u; f_800CE360(c); // 800D6840
L_800D6844:;
  c->r[3]=0u+0x802B0000u; // 800D6844
  c->r[0]=c->r[30]+0x000001D0u; // 800D6848
  c->r[3]=c->r[3]+0xFFFFE258u; // 800D684C
  c->r[8]=0u+0x800D0000u; // 800D6850
  c->r[4]=c->r[0]+c->r[29]; // 800D6854
  c->r[5]=c->r[27]|0x4E000000u; // 800D6858
  c->r[6]=c->r[3]+c->r[29]; // 800D685C
  c->r[0]=0u+0x00000080u; // 800D6860
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D6864
  c->r[3]=c->r[26]|c->r[26]; // 800D6868
  c->r[8]=c->r[8]+0x000066B0u; // 800D686C
  c->r[5]=0u+0x00000003u; // 800D6870
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D6874
  c->r[7]=0u+0x00000003u; // 800D6878
  c->r[10]=0u+0x00000000u; // 800D687C
  c->r[9]=0u+0x00000000u; // 800D6880
  c->lr=0x800D6888u; f_800D6540(c); // 800D6884
  goto L_800D694C; // 800D6888
L_800D688C:;
  c->r[0]=rotl(c->r[28],0)&0x40000000u; cr0(c,c->r[0]); // 800D688C
  if (crb(c,2)) { goto L_800D68F8; } // 800D6890
  c->r[4]=0u+0x00D00000u; // 800D6894
  c->r[3]=c->r[26]|c->r[26]; // 800D6898
  c->r[0]=c->r[4]+0xFFFFFF00u; // 800D689C
  c->r[27]=c->r[28]&c->r[0]; // 800D68A0
  c->r[27]=c->r[27]|0x00100000u; // 800D68A4
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 800D68A8
  c->lr=0x800D68B0u; f_800CE360(c); // 800D68AC
  c->r[3]=0u+0x802B0000u; // 800D68B0
  c->r[0]=c->r[30]+0x000001D0u; // 800D68B4
  c->r[3]=c->r[3]+0xFFFFE258u; // 800D68B8
  c->r[8]=0u+0x800D0000u; // 800D68BC
  c->r[4]=c->r[0]+c->r[29]; // 800D68C0
  c->r[5]=c->r[27]|0x4E000000u; // 800D68C4
  c->r[6]=c->r[3]+c->r[29]; // 800D68C8
  c->r[0]=0u+0x00000080u; // 800D68CC
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D68D0
  c->r[3]=c->r[26]|c->r[26]; // 800D68D4
  c->r[8]=c->r[8]+0x000066B0u; // 800D68D8
  c->r[5]=0u+0x00000003u; // 800D68DC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D68E0
  c->r[7]=0u+0x00000003u; // 800D68E4
  c->r[10]=0u+0x00000000u; // 800D68E8
  c->r[9]=0u+0x00000000u; // 800D68EC
  c->lr=0x800D68F4u; f_800D6540(c); // 800D68F0
  goto L_800D694C; // 800D68F4
L_800D68F8:;
  c->r[3]=c->r[26]|c->r[26]; // 800D68F8
  c->r[4]=0u+0x00000000u; // 800D68FC
  c->lr=0x800D6904u; f_800CE360(c); // 800D6900
L_800D6904:;
  c->r[28]=R32(c->r[31]+c->r[29]); // 800D6904
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 800D6908
  c->r[0]=c->r[30]+0x000001E0u; // 800D690C
  c->r[29]=0u+0x00000000u; // 800D6910
  c->r[30]=c->r[0]+c->r[3]; // 800D6914
  c->r[27]=0u+0x00000000u; // 800D6918
L_800D691C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D691C
  cmps(c,0,(int32_t)c->r[12],0); // 800D6920
  if (crb(c,2)) { goto L_800D693C; } // 800D6924
  c->r[3]=c->r[26]|c->r[26]; // 800D6928
  c->r[4]=c->r[28]|c->r[28]; // 800D692C
  W32(c->r[30]+0x00000000u,c->r[27]); // 800D6930
  c->ctr=c->r[12]; // 800D6934
  if (true) { c->lr=0x800D693Cu; dispatch(c,c->ctr); } // 800D6938
L_800D693C:;
  c->r[29]=c->r[29]+0x00000001u; // 800D693C
  c->r[30]=c->r[30]+0x00000004u; // 800D6940
  cmps(c,0,(int32_t)c->r[29],4); // 800D6944
  if (crb(c,0)) { IRQCHK(c); goto L_800D691C; } // 800D6948
L_800D694C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D694C
  c->lr=0x800D6954u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6950
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6954
  c->lr=c->r[0]; // 800D6958
  c->r[1]=c->r[1]+0x00000020u; // 800D695C
  return; // 800D6960
}

// SIGetType
void f_800D6970(Ctx* __restrict c) {
  trace_call(0x800D6970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6970
  c->r[0]=c->lr; // 800D6974
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6978
  c->r[11]=c->r[1]+0x00000020u; // 800D697C
  c->lr=0x800D6984u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6980
  c->r[27]=c->r[3]|c->r[3]; // 800D6984
  c->lr=0x800D698Cu; f_800CBAA0(c); // 800D6988
  c->r[5]=0u+0x802B0000u; // 800D698C
  c->r[4]=0u+0x802F0000u; // 800D6990
  c->r[6]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800D6994
  c->r[0]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D6998
  c->r[5]=c->r[5]+0xFFFFE258u; // 800D699C
  c->r[4]=c->r[4]+0xFFFFA5B0u; // 800D69A0
  c->r[28]=R32(c->r[5]+c->r[6]); // 800D69A4
  c->r[30]=c->r[5]+c->r[6]; // 800D69A8
  c->r[29]=c->r[3]|c->r[3]; // 800D69AC
  c->r[31]=c->r[4]+c->r[0]; // 800D69B0
  c->lr=0x800D69B8u; f_800D0540(c); // 800D69B4
  c->r[6]=R32(c->r[31]+0x00000004u); // 800D69B8
  c->r[5]=0u+0x802B0000u; // 800D69BC
  c->r[0]=R32(c->r[31]+0x00000000u); // 800D69C0
  c->r[5]=c->r[5]+0xFFFFE240u; // 800D69C4
  c->r[8]=addc(c,~c->r[6],c->r[4],1); // 800D69C8
  c->r[4]=R32(c->r[5]+0x00000004u); // 800D69CC
  c->r[7]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D69D0
  c->r[3]=0u+0x00000080u; // 800D69D4
  c->r[0]=sraw(c,c->r[3],(c->r[27])&63); // 800D69D8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800D69DC
  if (crb(c,2)) { goto L_800D6A14; } // 800D69E0
  cmpu(c,0,c->r[28],0x00000008u); // 800D69E4
  if (crb(c,2)) { goto L_800D6A08; } // 800D69E8
  c->lr=0x800D69F0u; f_800D0540(c); // 800D69EC
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D69F0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D69F4
  c->r[3]=c->r[29]|c->r[29]; // 800D69F8
  c->lr=0x800D6A00u; f_800CBAE0(c); // 800D69FC
  c->r[3]=c->r[28]|c->r[28]; // 800D6A00
  goto L_800D6B0C; // 800D6A04
L_800D6A08:;
  W32(c->r[30]+0x00000000u,c->r[3]); // 800D6A08
  c->r[28]=0u+0x00000080u; // 800D6A0C
  goto L_800D6AA8; // 800D6A10
L_800D6A14:;
  c->r[4]=0u+0x80000000u; // 800D6A14
  c->r[3]=0u+0x10620000u; // 800D6A18
  c->r[5]=R32(c->r[4]+0x000000F8u); // 800D6A1C
  c->r[6]=c->r[3]+0x00004DD3u; // 800D6A20
  c->r[0]=0u+0x00000000u; // 800D6A24
  c->r[4]=c->r[7]^0x80000000u; // 800D6A28
  c->r[3]=rotl(c->r[5],30)&0x3FFFFFFFu; // 800D6A2C
  c->r[3]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[3])>>32); // 800D6A30
  c->r[0]=c->r[0]^0x80000000u; // 800D6A34
  c->r[5]=rotl(c->r[3],26)&0x03FFFFFFu; // 800D6A38
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)50); // 800D6A3C
  c->r[3]=addc(c,~c->r[8],c->r[3],1); // 800D6A40
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800D6A44
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D6A48
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800D6A4C
  if (!crb(c,2)) { goto L_800D6A6C; } // 800D6A50
  cmpu(c,0,c->r[28],0x00000008u); // 800D6A54
  if (crb(c,2)) { goto L_800D6A6C; } // 800D6A58
  c->r[3]=c->r[29]|c->r[29]; // 800D6A5C
  c->lr=0x800D6A64u; f_800CBAE0(c); // 800D6A60
  c->r[3]=c->r[28]|c->r[28]; // 800D6A64
  goto L_800D6B0C; // 800D6A68
L_800D6A6C:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)75); // 800D6A6C
  c->r[0]=0u+0x00000000u; // 800D6A70
  c->r[4]=c->r[7]^0x80000000u; // 800D6A74
  c->r[0]=c->r[0]^0x80000000u; // 800D6A78
  c->r[3]=addc(c,~c->r[8],c->r[3],1); // 800D6A7C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800D6A80
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D6A84
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800D6A88
  if (!crb(c,2)) { goto L_800D6A9C; } // 800D6A8C
  c->r[0]=0u+0x00000080u; // 800D6A90
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6A94
  goto L_800D6AA8; // 800D6A98
L_800D6A9C:;
  c->r[0]=0u+0x00000080u; // 800D6A9C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6AA0
  c->r[28]=0u+0x00000080u; // 800D6AA4
L_800D6AA8:;
  c->lr=0x800D6AACu; f_800D0540(c); // 800D6AA8
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D6AAC
  c->r[4]=0u+0x431C0000u; // 800D6AB0
  c->r[9]=c->r[4]+0xFFFFDE83u; // 800D6AB4
  c->r[8]=0u+0x800D0000u; // 800D6AB8
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D6ABC
  c->r[5]=0u+0x80000000u; // 800D6AC0
  c->r[3]=c->r[27]|c->r[27]; // 800D6AC4
  c->r[6]=c->r[30]|c->r[30]; // 800D6AC8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800D6ACC
  c->r[8]=c->r[8]+0x000066B0u; // 800D6AD0
  c->r[4]=c->r[13]+0xFFFFA5A8u; // 800D6AD4
  c->r[5]=0u+0x00000001u; // 800D6AD8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D6ADC
  c->r[7]=0u+0x00000003u; // 800D6AE0
  c->r[0]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[0])>>32); // 800D6AE4
  c->r[9]=0u+0x00000000u; // 800D6AE8
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 800D6AEC
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 800D6AF0
  c->r[0]=c->r[0]+c->r[10]; // 800D6AF4
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D6AF8
  c->lr=0x800D6B00u; f_800D6540(c); // 800D6AFC
  c->r[3]=c->r[29]|c->r[29]; // 800D6B00
  c->lr=0x800D6B08u; f_800CBAE0(c); // 800D6B04
  c->r[3]=c->r[28]|c->r[28]; // 800D6B08
L_800D6B0C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D6B0C
  c->lr=0x800D6B14u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6B10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6B14
  c->lr=c->r[0]; // 800D6B18
  c->r[1]=c->r[1]+0x00000020u; // 800D6B1C
  return; // 800D6B20
}

// fn_800D6B30
void f_800D6B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6B30
  c->r[0]=c->lr; // 800D6B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6B38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6B3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6B40
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6B44
  c->r[29]=c->r[4]|c->r[4]; // 800D6B48
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D6B4C
  c->r[28]=c->r[3]|c->r[3]; // 800D6B50
  c->lr=0x800D6B58u; f_800CBAA0(c); // 800D6B54
  c->r[31]=c->r[3]|c->r[3]; // 800D6B58
  c->r[3]=c->r[28]|c->r[28]; // 800D6B5C
  c->lr=0x800D6B64u; f_800D6970(c); // 800D6B60
  c->r[4]=0u+0x802B0000u; // 800D6B64
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D6B68
  c->r[4]=c->r[4]+0xFFFFE258u; // 800D6B6C
  c->r[30]=c->r[3]|c->r[3]; // 800D6B70
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D6B74
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D6B78
  if (crb(c,2)) { goto L_800D6C00; } // 800D6B7C
  c->r[3]=0u+0x802F0000u; // 800D6B80
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 800D6B84
  c->r[3]=c->r[3]+0xFFFFA6F0u; // 800D6B88
  {uint32_t ea=c->r[3]+c->r[0]; c->r[0]=R32(ea); c->r[3]=ea;} // 800D6B8C
  cmpu(c,0,c->r[0],c->r[29]); // 800D6B90
  if (crb(c,2)) { goto L_800D6C14; } // 800D6B94
  cmps(c,0,(int32_t)c->r[0],0); // 800D6B98
  if (!crb(c,2)) { goto L_800D6BA8; } // 800D6B9C
  W32(c->r[3]+0x00000000u,c->r[29]); // 800D6BA0
  goto L_800D6C14; // 800D6BA4
L_800D6BA8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6BA8
  cmpu(c,0,c->r[0],c->r[29]); // 800D6BAC
  if (crb(c,2)) { goto L_800D6C14; } // 800D6BB0
  cmps(c,0,(int32_t)c->r[0],0); // 800D6BB4
  if (!crb(c,2)) { goto L_800D6BC4; } // 800D6BB8
  W32(c->r[3]+0x00000004u,c->r[29]); // 800D6BBC
  goto L_800D6C14; // 800D6BC0
L_800D6BC4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D6BC4
  cmpu(c,0,c->r[0],c->r[29]); // 800D6BC8
  if (crb(c,2)) { goto L_800D6C14; } // 800D6BCC
  cmps(c,0,(int32_t)c->r[0],0); // 800D6BD0
  if (!crb(c,2)) { goto L_800D6BE0; } // 800D6BD4
  W32(c->r[3]+0x00000008u,c->r[29]); // 800D6BD8
  goto L_800D6C14; // 800D6BDC
L_800D6BE0:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D6BE0
  cmpu(c,0,c->r[0],c->r[29]); // 800D6BE4
  if (crb(c,2)) { goto L_800D6C14; } // 800D6BE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D6BEC
  if (!crb(c,2)) { goto L_800D6C14; } // 800D6BF0
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 800D6BF4
  goto L_800D6C14; // 800D6BF8
  goto L_800D6C14; // 800D6BFC
L_800D6C00:;
  c->r[12]=c->r[29]|c->r[29]; // 800D6C00
  c->r[3]=c->r[28]|c->r[28]; // 800D6C04
  c->r[4]=c->r[30]|c->r[30]; // 800D6C08
  c->ctr=c->r[12]; // 800D6C0C
  if (true) { c->lr=0x800D6C14u; dispatch(c,c->ctr); } // 800D6C10
L_800D6C14:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6C14
  c->lr=0x800D6C1Cu; f_800CBAE0(c); // 800D6C18
  c->r[3]=c->r[30]|c->r[30]; // 800D6C1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6C20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6C24
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6C28
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D6C2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6C30
  c->lr=c->r[0]; // 800D6C34
  c->r[1]=c->r[1]+0x00000020u; // 800D6C38
  return; // 800D6C3C
}

// SISetSamplingRate
void f_800D6C40(Ctx* __restrict c) {
  trace_call(0x800D6C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C40
  c->r[0]=c->lr; // 800D6C44
  cmpu(c,0,c->r[3],0x0000000Bu); // 800D6C48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6C4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6C50
  c->r[31]=0u+0x802B0000u; // 800D6C54
  c->r[31]=c->r[31]+0xFFFFE268u; // 800D6C58
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6C5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6C60
  c->r[29]=c->r[3]|c->r[3]; // 800D6C64
  if (!crb(c,1)) { goto L_800D6C70; } // 800D6C68
  c->r[29]=0u+0x0000000Bu; // 800D6C6C
L_800D6C70:;
  c->lr=0x800D6C74u; f_800CBAA0(c); // 800D6C70
  W32(c->r[13]+0xFFFFA5B0u,c->r[29]); // 800D6C74
  c->r[30]=c->r[3]|c->r[3]; // 800D6C78
  c->lr=0x800D6C80u; f_800D9410(c); // 800D6C7C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C80
  if (crb(c,2)) { goto L_800D6CA4; } // 800D6C84
  cmpu(c,0,c->r[3],0x00000002u); // 800D6C88
  if (crb(c,2)) { goto L_800D6CA4; } // 800D6C8C
  cmpu(c,0,c->r[3],0x00000005u); // 800D6C90
  if (crb(c,2)) { goto L_800D6CA4; } // 800D6C94
  cmpu(c,0,c->r[3],0x00000001u); // 800D6C98
  if (crb(c,2)) { goto L_800D6CAC; } // 800D6C9C
  goto L_800D6CB4; // 800D6CA0
L_800D6CA4:;
  c->r[5]=c->r[31]+0x00000000u; // 800D6CA4
  goto L_800D6CC8; // 800D6CA8
L_800D6CAC:;
  c->r[5]=c->r[31]+0x00000030u; // 800D6CAC
  goto L_800D6CC8; // 800D6CB0
L_800D6CB4:;
  c->r[3]=c->r[31]+0x00000060u; // 800D6CB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6CB8
  c->lr=0x800D6CC0u; f_800C8450(c); // 800D6CBC
  c->r[29]=0u+0x00000000u; // 800D6CC0
  c->r[5]=c->r[31]+0x00000000u; // 800D6CC4
L_800D6CC8:;
  c->r[3]=0u+0xCC000000u; // 800D6CC8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D6CCC
  c->r[4]=R16(c->r[3]+0x0000206Cu); // 800D6CD0
  c->r[3]=c->r[5]+c->r[0]; // 800D6CD4
  c->r[0]=R16(c->r[5]+c->r[0]); // 800D6CD8
  c->r[5]=rotl(c->r[4],0)&0x00000001u; // 800D6CDC
  c->r[4]=R8(c->r[3]+0x00000002u); // 800D6CE0
  c->r[3]=c->r[5]+0x00000001u; // 800D6CE4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D6CE8
  c->lr=0x800D6CF0u; f_800D6220(c); // 800D6CEC
  c->r[3]=c->r[30]|c->r[30]; // 800D6CF0
  c->lr=0x800D6CF8u; f_800CBAE0(c); // 800D6CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6CF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6CFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6D00
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6D04
  c->lr=c->r[0]; // 800D6D08
  c->r[1]=c->r[1]+0x00000020u; // 800D6D0C
  return; // 800D6D10
}

// fn_800D6D20
void f_800D6D20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFA5B0u); // 800D6D20
  f_800D6C40(c); return; // 800D6D24
}

// DBInit
void f_800D6D30(Ctx* __restrict c) {
  trace_call(0x800D6D30u);
  c->r[4]=0u+0x80000000u; // 800D6D30
  c->r[3]=0u+0x800D0000u; // 800D6D34
  c->r[0]=c->r[4]+0x00000040u; // 800D6D38
  W32(c->r[13]+0xFFFFA5B8u,c->r[0]); // 800D6D3C
  c->r[3]=c->r[3]+0x00006DB0u; // 800D6D40
  c->r[3]=c->r[3]+0x80000000u; // 800D6D44
  W32(c->r[4]+0x00000048u,c->r[3]); // 800D6D48
  c->r[0]=0u+0x00000001u; // 800D6D4C
  W32(c->r[13]+0xFFFFA5BCu,c->r[0]); // 800D6D50
  return; // 800D6D54
}

// __DBExceptionDestinationAux
void f_800D6D60(Ctx* __restrict c) {
  trace_call(0x800D6D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D60
  c->r[0]=c->lr; // 800D6D64
  c->r[3]=0u+0x802B0000u; // 800D6D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6D6C
  c->r[3]=c->r[3]+0xFFFFE300u; // 800D6D70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6D74
  c->r[4]=R32(0u+0x000000C0u); // 800D6D78
  c->r[31]=c->r[4]+0x80000000u; // 800D6D7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6D80
  c->lr=0x800D6D88u; f_800C8450(c); // 800D6D84
  c->r[3]=c->r[31]|c->r[31]; // 800D6D88
  c->lr=0x800D6D90u; f_800C8110(c); // 800D6D8C
  c->lr=0x800D6D94u; f_800C4FA0(c); // 800D6D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6D98
  c->lr=c->r[0]; // 800D6D9C
  c->r[1]=c->r[1]+0x00000010u; // 800D6DA0
  return; // 800D6DA4
}

// __DBExceptionDestination
void f_800D6DB0(Ctx* __restrict c) {
  trace_call(0x800D6DB0u);
  c->r[3]=c->msr; // 800D6DB0
  c->r[3]=c->r[3]|0x00000030u; // 800D6DB4
  c->msr=c->r[3]; // 800D6DB8
  f_800D6D60(c); return; // 800D6DBC
}

// __DBIsExceptionMarked
void f_800D6DC0(Ctx* __restrict c) {
  trace_call(0x800D6DC0u);
  c->r[4]=R32(c->r[13]+0xFFFFA5B8u); // 800D6DC0
  c->r[0]=0u+0x00000001u; // 800D6DC4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800D6DC8
  c->r[3]=R32(c->r[4]+0x00000004u); // 800D6DCC
  c->r[3]=c->r[3]&c->r[0]; // 800D6DD0
  return; // 800D6DD4
}

// DBPrintf
void f_800D6DE0(Ctx* __restrict c) {
  trace_call(0x800D6DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6DE0
  if (!crb(c,6)) { goto L_800D6E08; } // 800D6DE4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800D6DE8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800D6DEC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800D6DF0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800D6DF4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800D6DF8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800D6DFC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800D6E00
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800D6E04
L_800D6E08:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D6E08
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D6E0C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D6E10
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D6E14
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D6E18
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800D6E1C
  W32(c->r[1]+0x00000020u,c->r[9]); // 800D6E20
  W32(c->r[1]+0x00000024u,c->r[10]); // 800D6E24
  c->r[1]=c->r[1]+0x00000070u; // 800D6E28
  return; // 800D6E2C
}

// OnShutdown_800D6E30
void f_800D6E30(Ctx* __restrict c) {
  trace_call(0x800D6E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E30
  c->r[0]=c->lr; // 800D6E34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6E38
  c->r[11]=c->r[1]+0x00000020u; // 800D6E3C
  c->lr=0x800D6E44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6E40
  cmps(c,0,(int32_t)c->r[3],0); // 800D6E44
  c->r[31]=0u+0x802F0000u; // 800D6E48
  c->r[31]=c->r[31]+0xFFFFA730u; // 800D6E4C
  if (!crb(c,2)) { goto L_800D6FAC; } // 800D6E50
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800D6E54
  cmpu(c,0,c->r[0],0x00000002u); // 800D6E58
  if (!crb(c,1)) { goto L_800D6E78; } // 800D6E5C
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 800D6E60
  cmpu(c,0,c->r[0],0x00000002u); // 800D6E64
  if (!crb(c,1)) { goto L_800D6FA0; } // 800D6E68
  cmps(c,0,(int32_t)c->r[4],0); // 800D6E6C
  if (crb(c,2)) { goto L_800D6FA0; } // 800D6E70
  goto L_800D6FB0; // 800D6E74
L_800D6E78:;
  c->r[0]=R32(c->r[13]+0xFFFF8F8Cu); // 800D6E78
  cmps(c,0,(int32_t)c->r[0],0); // 800D6E7C
  if (crb(c,2)) { goto L_800D6F80; } // 800D6E80
  c->lr=0x800D6E88u; f_800DB3D0(c); // 800D6E84
  c->lr=0x800D6E8Cu; f_800CBAA0(c); // 800D6E88
  c->r[5]=R32(c->r[13]+0xFFFFA600u); // 800D6E8C
  c->r[0]=0u+0x00000000u; // 800D6E90
  c->r[4]=R32(c->r[13]+0xFFFFA5F0u); // 800D6E94
  c->r[30]=c->r[3]|c->r[3]; // 800D6E98
  c->r[28]=c->r[31]+0x00000078u; // 800D6E9C
  c->r[29]=c->r[31]+0x00000000u; // 800D6EA0
  c->r[3]=c->r[5]|c->r[4]; // 800D6EA4
  W32(c->r[13]+0xFFFFA600u,c->r[3]); // 800D6EA8
  c->r[27]=0u+0xFFFFFFFFu; // 800D6EAC
  W32(c->r[13]+0xFFFFA5F0u,c->r[0]); // 800D6EB0
  c->r[4]=R32(c->r[13]+0xFFFFA608u); // 800D6EB4
  c->r[5]=R32(c->r[13]+0xFFFFA60Cu); // 800D6EB8
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D6EBC
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D6EC0
  c->r[0]=c->r[4]|c->r[0]; // 800D6EC4
  c->r[3]=c->r[5]|c->r[3]; // 800D6EC8
  W32(c->r[13]+0xFFFFA60Cu,c->r[3]); // 800D6ECC
  W32(c->r[13]+0xFFFFA608u,c->r[0]); // 800D6ED0
  goto L_800D6F38; // 800D6ED4
L_800D6ED8:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D6ED8
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D6EDC
  c->r[4]=cntlz(c->r[0]); // 800D6EE0
  cmps(c,0,(int32_t)c->r[4],32); // 800D6EE4
  c->r[0]=c->r[3]&c->r[27]; // 800D6EE8
  if (!crb(c,0)) { goto L_800D6EF4; } // 800D6EEC
  goto L_800D6EFC; // 800D6EF0
L_800D6EF4:;
  c->r[3]=cntlz(c->r[0]); // 800D6EF4
  c->r[4]=c->r[3]+0x00000020u; // 800D6EF8
L_800D6EFC:;
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800D6EFC
  c->r[5]=addc(c,~c->r[4],0x0000003Fu,1); // 800D6F00
  c->r[0]=R16(c->r[28]+c->r[3]); // 800D6F04
  c->r[4]=0u+0x00000001u; // 800D6F08
  W16(c->r[29]+c->r[3],c->r[0]); // 800D6F0C
  c->r[3]=0u+0x00000000u; // 800D6F10
  c->lr=0x800D6F18u; f_80217D24(c); // 800D6F14
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D6F18
  c->r[5]=~(c->r[3]|c->r[3]); // 800D6F1C
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D6F20
  c->r[4]=~(c->r[4]|c->r[4]); // 800D6F24
  c->r[0]=c->r[0]&c->r[5]; // 800D6F28
  c->r[3]=c->r[3]&c->r[4]; // 800D6F2C
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D6F30
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D6F34
L_800D6F38:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D6F38
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D6F3C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800D6F40
  if (!crb(c,2)) { IRQCHK(c); goto L_800D6ED8; } // 800D6F44
  c->r[3]=c->r[31]+0x000000F0u; // 800D6F48
  c->r[4]=0u+0x00000001u; // 800D6F4C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800D6F50
  c->r[3]=c->r[30]|c->r[30]; // 800D6F54
  W32(c->r[13]+0xFFFFA668u,c->r[4]); // 800D6F58
  W32(c->r[13]+0xFFFFA664u,c->r[4]); // 800D6F5C
  W32(c->r[13]+0xFFFFA62Cu,c->r[0]); // 800D6F60
  c->lr=0x800D6F68u; f_800CBAE0(c); // 800D6F64
  c->r[3]=R32(c->r[13]+0xFFFFA66Cu); // 800D6F68
  c->r[0]=0u+0x00000000u; // 800D6F6C
  W32(c->r[13]+0xFFFFA618u,c->r[3]); // 800D6F70
  c->r[3]=0u+0x00000000u; // 800D6F74
  W32(c->r[13]+0xFFFF8F8Cu,c->r[0]); // 800D6F78
  goto L_800D6FB0; // 800D6F7C
L_800D6F80:;
  c->r[3]=R32(c->r[13]+0xFFFFA618u); // 800D6F80
  c->r[0]=R32(c->r[13]+0xFFFFA66Cu); // 800D6F84
  cmpu(c,0,c->r[3],c->r[0]); // 800D6F88
  if (!crb(c,2)) { goto L_800D6F98; } // 800D6F8C
  c->r[3]=0u+0x00000000u; // 800D6F90
  goto L_800D6FB0; // 800D6F94
L_800D6F98:;
  c->r[3]=0u+0x00000001u; // 800D6F98
  goto L_800D6FB0; // 800D6F9C
L_800D6FA0:;
  c->lr=0x800D6FA4u; f_800DB2B0(c); // 800D6FA0
  c->r[3]=0u+0x00000001u; // 800D6FA4
  goto L_800D6FB0; // 800D6FA8
L_800D6FAC:;
  c->r[3]=0u+0x00000001u; // 800D6FAC
L_800D6FB0:;
  c->r[11]=c->r[1]+0x00000020u; // 800D6FB0
  c->lr=0x800D6FB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6FB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6FB8
  c->lr=c->r[0]; // 800D6FBC
  c->r[1]=c->r[1]+0x00000020u; // 800D6FC0
  return; // 800D6FC4
}

// __VIRetraceHandler
void f_800D6FD0(Ctx* __restrict c) {
  trace_call(0x800D6FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6FD0
  c->r[0]=c->lr; // 800D6FD4
  W32(c->r[1]+0x000002F4u,c->r[0]); // 800D6FD8
  c->r[11]=c->r[1]+0x000002F0u; // 800D6FDC
  c->lr=0x800D6FE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6FE0
  c->r[5]=0u+0xCC000000u; // 800D6FE4
  c->r[30]=0u+0x802F0000u; // 800D6FE8
  c->r[3]=R16(c->r[5]+0x00002030u); // 800D6FEC
  c->r[28]=c->r[4]|c->r[4]; // 800D6FF0
  c->r[30]=c->r[30]+0xFFFFA730u; // 800D6FF4
  c->r[6]=0u+0x00000000u; // 800D6FF8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800D6FFC
  if (crb(c,2)) { goto L_800D7010; } // 800D7000
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 800D7004
  W16(c->r[5]+0x00002030u,c->r[0]); // 800D7008
  c->r[6]=c->r[6]|0x00000001u; // 800D700C
L_800D7010:;
  c->r[4]=0u+0xCC000000u; // 800D7010
  c->r[3]=R16(c->r[4]+0x00002034u); // 800D7014
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800D7018
  if (crb(c,2)) { goto L_800D702C; } // 800D701C
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 800D7020
  W16(c->r[4]+0x00002034u,c->r[0]); // 800D7024
  c->r[6]=c->r[6]|0x00000002u; // 800D7028
L_800D702C:;
  c->r[4]=0u+0xCC000000u; // 800D702C
  c->r[3]=R16(c->r[4]+0x00002038u); // 800D7030
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800D7034
  if (crb(c,2)) { goto L_800D7048; } // 800D7038
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 800D703C
  W16(c->r[4]+0x00002038u,c->r[0]); // 800D7040
  c->r[6]=c->r[6]|0x00000004u; // 800D7044
L_800D7048:;
  c->r[4]=0u+0xCC000000u; // 800D7048
  c->r[3]=R16(c->r[4]+0x0000203Cu); // 800D704C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800D7050
  if (crb(c,2)) { goto L_800D7064; } // 800D7054
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 800D7058
  W16(c->r[4]+0x0000203Cu,c->r[0]); // 800D705C
  c->r[6]=c->r[6]|0x00000008u; // 800D7060
L_800D7064:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 800D7064
  c->r[3]=0u+0xCC000000u; // 800D7068
  c->r[0]=R16(c->r[3]+0x0000203Cu); // 800D706C
  if (!crb(c,2)) { goto L_800D707C; } // 800D7070
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 800D7074
  if (crb(c,2)) { goto L_800D70F8; } // 800D7078
L_800D707C:;
  c->r[3]=c->r[1]+0x00000010u; // 800D707C
  c->lr=0x800D7084u; f_800C8020(c); // 800D7080
  c->r[3]=c->r[1]+0x00000010u; // 800D7084
  c->lr=0x800D708Cu; f_800C7DE0(c); // 800D7088
  c->r[0]=R32(c->r[13]+0xFFFFA5E8u); // 800D708C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7090
  if (crb(c,2)) { goto L_800D70E4; } // 800D7094
  c->r[5]=0u+0xCC000000u; // 800D7098
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 800D709C
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 800D70A0
  c->r[0]=c->r[0]|0x00000000u; // 800D70A4
L_800D70A8:;
  c->r[3]=R16(c->r[5]+0x0000202Eu); // 800D70A8
  c->r[6]=c->r[4]|c->r[4]; // 800D70AC
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 800D70B0
  c->r[3]=rotl(c->r[3],0)&0x000007FFu; // 800D70B4
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 800D70B8
  cmpu(c,0,c->r[6],c->r[4]); // 800D70BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D70A8; } // 800D70C0
  c->r[5]=c->r[1]+0x0000000Au; // 800D70C4
  c->r[6]=c->r[1]+0x00000008u; // 800D70C8
  c->lr=0x800D70D0u; f_800D9510(c); // 800D70CC
  c->r[12]=R32(c->r[13]+0xFFFFA5E8u); // 800D70D0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Au); // 800D70D4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 800D70D8
  c->ctr=c->r[12]; // 800D70DC
  if (true) { c->lr=0x800D70E4u; dispatch(c,c->ctr); } // 800D70E0
L_800D70E4:;
  c->r[3]=c->r[1]+0x00000010u; // 800D70E4
  c->lr=0x800D70ECu; f_800C8020(c); // 800D70E8
  c->r[3]=c->r[28]|c->r[28]; // 800D70EC
  c->lr=0x800D70F4u; f_800C7DE0(c); // 800D70F0
  goto L_800D77C4; // 800D70F4
L_800D70F8:;
  c->r[4]=R32(c->r[13]+0xFFFFA66Cu); // 800D70F8
  c->r[3]=c->r[1]+0x00000010u; // 800D70FC
  c->r[0]=c->r[4]+0x00000001u; // 800D7100
  W32(c->r[13]+0xFFFFA66Cu,c->r[0]); // 800D7104
  c->lr=0x800D710Cu; f_800C8020(c); // 800D7108
  c->r[3]=c->r[1]+0x00000010u; // 800D710C
  c->lr=0x800D7114u; f_800C7DE0(c); // 800D7110
  c->r[12]=R32(c->r[13]+0xFFFFA640u); // 800D7114
  cmps(c,0,(int32_t)c->r[12],0); // 800D7118
  if (crb(c,2)) { goto L_800D712C; } // 800D711C
  c->r[3]=R32(c->r[13]+0xFFFFA66Cu); // 800D7120
  c->ctr=c->r[12]; // 800D7124
  if (true) { c->lr=0x800D712Cu; dispatch(c,c->ctr); } // 800D7128
L_800D712C:;
  c->r[0]=R32(c->r[13]+0xFFFFA5C8u); // 800D712C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7130
  if (crb(c,2)) { goto L_800D718C; } // 800D7134
  c->r[3]=0u+0xCC000000u; // 800D7138
  c->r[0]=R16(c->r[3]+0x0000202Cu); // 800D713C
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 800D7140
  c->r[0]=c->r[0]|0x00000000u; // 800D7144
L_800D7148:;
  c->r[0]=R16(c->r[3]+0x0000202Eu); // 800D7148
  c->r[5]=c->r[4]|c->r[4]; // 800D714C
  c->r[0]=R16(c->r[3]+0x0000202Cu); // 800D7150
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 800D7154
  cmpu(c,0,c->r[5],c->r[4]); // 800D7158
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7148; } // 800D715C
  cmpu(c,0,c->r[4],0x00000001u); // 800D7160
  if (crb(c,2)) { goto L_800D718C; } // 800D7164
  c->r[3]=R32(c->r[13]+0xFFFFA634u); // 800D7168
  c->r[0]=R16(c->r[3]+0x00000018u); // 800D716C
  c->r[3]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800D7170
  c->r[0]=c->r[3]+0x00000001u; // 800D7174
  cmpu(c,0,c->r[4],c->r[0]); // 800D7178
  if (crb(c,2)) { goto L_800D718C; } // 800D717C
  c->r[3]=R32(c->r[13]+0xFFFFA5C4u); // 800D7180
  c->r[0]=c->r[3]+0x00000001u; // 800D7184
  W32(c->r[13]+0xFFFFA5C4u,c->r[0]); // 800D7188
L_800D718C:;
  c->r[0]=R32(c->r[13]+0xFFFFA668u); // 800D718C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7190
  if (crb(c,2)) { goto L_800D72C8; } // 800D7194
  c->r[0]=R32(c->r[13]+0xFFFFA600u); // 800D7198
  cmpu(c,0,c->r[0],0x00000001u); // 800D719C
  if (!crb(c,2)) { goto L_800D7200; } // 800D71A0
  c->r[4]=0u+0xCC000000u; // 800D71A4
  c->r[0]=R16(c->r[4]+0x0000202Cu); // 800D71A8
  c->r[7]=rotl(c->r[0],0)&0x000007FFu; // 800D71AC
L_800D71B0:;
  c->r[3]=R16(c->r[4]+0x0000202Eu); // 800D71B0
  c->r[6]=c->r[7]|c->r[7]; // 800D71B4
  c->r[0]=R16(c->r[4]+0x0000202Cu); // 800D71B8
  c->r[5]=rotl(c->r[3],0)&0x000007FFu; // 800D71BC
  c->r[7]=rotl(c->r[0],0)&0x000007FFu; // 800D71C0
  cmpu(c,0,c->r[6],c->r[7]); // 800D71C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D71B0; } // 800D71C8
  c->r[6]=R32(c->r[13]+0xFFFFA634u); // 800D71CC
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 800D71D0
  c->r[3]=c->r[7]+0xFFFFFFFFu; // 800D71D4
  c->r[0]=R16(c->r[6]+0x0000001Au); // 800D71D8
  c->r[5]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800D71DC
  c->r[3]=R16(c->r[6]+0x00000018u); // 800D71E0
  c->r[0]=divwu(c->r[4],c->r[0]); // 800D71E4
  c->r[0]=c->r[5]+c->r[0]; // 800D71E8
  c->r[0]=c->r[3]^c->r[0]; // 800D71EC
  c->r[0]=cntlz(c->r[0]); // 800D71F0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800D71F4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800D71F8
  if (crb(c,2)) { goto L_800D72B0; } // 800D71FC
L_800D7200:;
  c->r[26]=c->r[30]+0x00000000u; // 800D7200
  c->r[31]=0u+0xFFFFFFFFu; // 800D7204
  c->r[27]=0u+0xCC000000u; // 800D7208
  goto L_800D7274; // 800D720C
L_800D7210:;
  c->r[0]=R32(c->r[13]+0xFFFFA608u); // 800D7210
  c->r[3]=R32(c->r[13]+0xFFFFA60Cu); // 800D7214
  c->r[4]=cntlz(c->r[0]); // 800D7218
  cmps(c,0,(int32_t)c->r[4],32); // 800D721C
  c->r[0]=c->r[3]&c->r[31]; // 800D7220
  if (!crb(c,0)) { goto L_800D722C; } // 800D7224
  goto L_800D7234; // 800D7228
L_800D722C:;
  c->r[3]=cntlz(c->r[0]); // 800D722C
  c->r[4]=c->r[3]+0x00000020u; // 800D7230
L_800D7234:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800D7234
  c->r[5]=addc(c,~c->r[4],0x0000003Fu,1); // 800D7238
  c->r[3]=c->r[27]+c->r[0]; // 800D723C
  c->r[0]=R16(c->r[26]+c->r[0]); // 800D7240
  W16(c->r[3]+0x00002000u,c->r[0]); // 800D7244
  c->r[4]=0u+0x00000001u; // 800D7248
  c->r[3]=0u+0x00000000u; // 800D724C
  c->lr=0x800D7254u; f_80217D24(c); // 800D7250
  c->r[0]=R32(c->r[13]+0xFFFFA608u); // 800D7254
  c->r[5]=~(c->r[3]|c->r[3]); // 800D7258
  c->r[3]=R32(c->r[13]+0xFFFFA60Cu); // 800D725C
  c->r[4]=~(c->r[4]|c->r[4]); // 800D7260
  c->r[0]=c->r[0]&c->r[5]; // 800D7264
  c->r[3]=c->r[3]&c->r[4]; // 800D7268
  W32(c->r[13]+0xFFFFA60Cu,c->r[3]); // 800D726C
  W32(c->r[13]+0xFFFFA608u,c->r[0]); // 800D7270
L_800D7274:;
  c->r[0]=R32(c->r[13]+0xFFFFA608u); // 800D7274
  c->r[3]=R32(c->r[13]+0xFFFFA60Cu); // 800D7278
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800D727C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7210; } // 800D7280
  c->r[3]=c->r[30]+0x000000F0u; // 800D7284
  c->r[0]=R32(c->r[13]+0xFFFFA62Cu); // 800D7288
  c->r[4]=R32(c->r[3]+0x00000054u); // 800D728C
  c->r[5]=0u+0x00000000u; // 800D7290
  c->r[3]=R32(c->r[3]+0x00000028u); // 800D7294
  c->r[6]=0u+0x00000001u; // 800D7298
  W32(c->r[13]+0xFFFFA600u,c->r[5]); // 800D729C
  W32(c->r[13]+0xFFFFA634u,c->r[4]); // 800D72A0
  W32(c->r[13]+0xFFFFA630u,c->r[3]); // 800D72A4
  W32(c->r[13]+0xFFFFA628u,c->r[0]); // 800D72A8
  goto L_800D72B4; // 800D72AC
L_800D72B0:;
  c->r[6]=0u+0x00000000u; // 800D72B0
L_800D72B4:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D72B4
  if (crb(c,2)) { goto L_800D72C8; } // 800D72B8
  c->r[0]=0u+0x00000000u; // 800D72BC
  W32(c->r[13]+0xFFFFA668u,c->r[0]); // 800D72C0
  c->lr=0x800D72C8u; f_800D6D20(c); // 800D72C4
L_800D72C8:;
  c->lr=0x800D72CCu; f_800CBAA0(c); // 800D72C8
  c->r[4]=0u+0xCC000000u; // 800D72CC
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800D72D0
  c->r[26]=rotl(c->r[0],0)&0x00000003u; // 800D72D4
  c->lr=0x800D72DCu; f_800CBAE0(c); // 800D72D8
  c->r[0]=R32(c->r[13]+0xFFFF8F90u); // 800D72DC
  c->r[26]=rotl(c->r[26],0)&0x00000001u; // 800D72E0
  cmpu(c,0,c->r[26],c->r[0]); // 800D72E4
  if (crb(c,2)) { goto L_800D72F4; } // 800D72E8
  c->r[3]=c->r[26]|c->r[26]; // 800D72EC
  c->lr=0x800D72F4u; f_800DA1B0(c); // 800D72F0
L_800D72F4:;
  W32(c->r[13]+0xFFFF8F90u,c->r[26]); // 800D72F4
  c->lr=0x800D72FCu; f_800CBAA0(c); // 800D72F8
  c->r[5]=R32(c->r[13]+0xFFFFA630u); // 800D72FC
  cmpu(c,0,c->r[5],0x00000008u); // 800D7300
  if (crb(c,1)) { goto L_800D7334; } // 800D7304
  c->r[4]=0u+0x802B0000u; // 800D7308
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D730C
  c->r[4]=c->r[4]+0xFFFFE600u; // 800D7310
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7314
  c->ctr=c->r[4]; // 800D7318
  if (true) { switch (c->ctr) { case 0x800D7320u: goto L_800D7320; case 0x800D7328u: goto L_800D7328; case 0x800D7330u: goto L_800D7330; default: break; } dispatch(c,c->ctr); return; } // 800D731C
L_800D7320:;
  c->r[29]=0u+0x00000000u; // 800D7320
  goto L_800D7334; // 800D7324
L_800D7328:;
  c->r[29]=0u+0x00000001u; // 800D7328
  goto L_800D7334; // 800D732C
L_800D7330:;
  c->r[29]=c->r[5]|c->r[5]; // 800D7330
L_800D7334:;
  c->lr=0x800D7338u; f_800CBAE0(c); // 800D7334
  c->r[0]=R32(c->r[13]+0xFFFF8F94u); // 800D7338
  cmpu(c,0,c->r[29],c->r[0]); // 800D733C
  if (crb(c,2)) { goto L_800D740C; } // 800D7340
  cmpu(c,0,c->r[29],0x00000005u); // 800D7344
  if (!crb(c,2)) { goto L_800D7358; } // 800D7348
  c->r[3]=0u+0x00000001u; // 800D734C
  c->lr=0x800D7354u; f_800DA250(c); // 800D7350
  goto L_800D7360; // 800D7354
L_800D7358:;
  c->r[3]=0u+0x00000000u; // 800D7358
  c->lr=0x800D7360u; f_800DA250(c); // 800D735C
L_800D7360:;
  cmpu(c,0,c->r[29],0x00000001u); // 800D7360
  if (!crb(c,2)) { goto L_800D73B4; } // 800D7364
  c->r[0]=R32(c->r[13]+0xFFFFA658u); // 800D7368
  cmps(c,0,(int32_t)c->r[0],1); // 800D736C
  if (crb(c,2)) { goto L_800D7380; } // 800D7370
  cmps(c,0,(int32_t)c->r[0],2); // 800D7374
  if (crb(c,2)) { goto L_800D738C; } // 800D7378
  goto L_800D739C; // 800D737C
L_800D7380:;
  c->r[0]=0u+0x00007530u; // 800D7380
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D7384
  goto L_800D73A4; // 800D7388
L_800D738C:;
  c->r[3]=0u+0x00010000u; // 800D738C
  c->r[0]=c->r[3]+0xFFFFAFC8u; // 800D7390
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D7394
  goto L_800D73A4; // 800D7398
L_800D739C:;
  c->r[0]=0u+0x00003A98u; // 800D739C
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D73A0
L_800D73A4:;
  c->r[3]=0u+0x00010000u; // 800D73A4
  c->r[0]=c->r[3]+0x00005F90u; // 800D73A8
  W32(c->r[13]+0xFFFFA5D8u,c->r[0]); // 800D73AC
  goto L_800D7400; // 800D73B0
L_800D73B4:;
  c->r[0]=R32(c->r[13]+0xFFFFA658u); // 800D73B4
  cmps(c,0,(int32_t)c->r[0],1); // 800D73B8
  if (crb(c,2)) { goto L_800D73CC; } // 800D73BC
  cmps(c,0,(int32_t)c->r[0],2); // 800D73C0
  if (crb(c,2)) { goto L_800D73DC; } // 800D73C4
  goto L_800D73EC; // 800D73C8
L_800D73CC:;
  c->r[3]=0u+0x00010000u; // 800D73CC
  c->r[0]=c->r[3]+0xFFFF8CA0u; // 800D73D0
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D73D4
  goto L_800D73F4; // 800D73D8
L_800D73DC:;
  c->r[3]=0u+0x00010000u; // 800D73DC
  c->r[0]=c->r[3]+0xFFFFD2F0u; // 800D73E0
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D73E4
  goto L_800D73F4; // 800D73E8
L_800D73EC:;
  c->r[0]=0u+0x00004650u; // 800D73EC
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D73F0
L_800D73F4:;
  c->r[3]=0u+0x00020000u; // 800D73F4
  c->r[0]=c->r[3]+0xFFFFA5E0u; // 800D73F8
  W32(c->r[13]+0xFFFFA5D8u,c->r[0]); // 800D73FC
L_800D7400:;
  c->r[0]=0u+0x00000000u; // 800D7400
  W32(c->r[13]+0xFFFFA5DCu,c->r[0]); // 800D7404
  W32(c->r[13]+0xFFFFA5E0u,c->r[0]); // 800D7408
L_800D740C:;
  c->r[0]=R32(c->r[13]+0xFFFFA664u); // 800D740C
  W32(c->r[13]+0xFFFF8F94u,c->r[29]); // 800D7410
  cmps(c,0,(int32_t)c->r[0],0); // 800D7414
  if (crb(c,2)) { goto L_800D74F0; } // 800D7418
  c->r[29]=0u+0x00000001u; // 800D741C
  goto L_800D74DC; // 800D7420
L_800D7424:;
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800D7424
  c->r[0]=cntlz(c->r[0]); // 800D7428
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800D742C
  c->r[26]=((c->r[0])&0x20)?0u:(c->r[29]<<((c->r[0])&31)); // 800D7430
  cmps(c,0,(int32_t)c->r[26],16); // 800D7434
  if (crb(c,2)) { goto L_800D74B4; } // 800D7438
  if (!crb(c,0)) { goto L_800D7470; } // 800D743C
  cmps(c,0,(int32_t)c->r[26],4); // 800D7440
  if (crb(c,2)) { goto L_800D74A4; } // 800D7444
  if (!crb(c,0)) { goto L_800D7464; } // 800D7448
  cmps(c,0,(int32_t)c->r[26],2); // 800D744C
  if (crb(c,2)) { goto L_800D749C; } // 800D7450
  if (!crb(c,0)) { goto L_800D74D0; } // 800D7454
  cmps(c,0,(int32_t)c->r[26],1); // 800D7458
  if (!crb(c,0)) { goto L_800D7494; } // 800D745C
  goto L_800D74D0; // 800D7460
L_800D7464:;
  cmps(c,0,(int32_t)c->r[26],8); // 800D7464
  if (crb(c,2)) { goto L_800D74AC; } // 800D7468
  goto L_800D74D0; // 800D746C
L_800D7470:;
  cmps(c,0,(int32_t)c->r[26],64); // 800D7470
  if (crb(c,2)) { goto L_800D74C4; } // 800D7474
  if (!crb(c,0)) { goto L_800D7488; } // 800D7478
  cmps(c,0,(int32_t)c->r[26],32); // 800D747C
  if (crb(c,2)) { goto L_800D74BC; } // 800D7480
  goto L_800D74D0; // 800D7484
L_800D7488:;
  cmps(c,0,(int32_t)c->r[26],128); // 800D7488
  if (crb(c,2)) { goto L_800D74CC; } // 800D748C
  goto L_800D74D0; // 800D7490
L_800D7494:;
  c->lr=0x800D7498u; f_800DA290(c); // 800D7494
  goto L_800D74D0; // 800D7498
L_800D749C:;
  c->lr=0x800D74A0u; f_800DA2F0(c); // 800D749C
  goto L_800D74D0; // 800D74A0
L_800D74A4:;
  c->lr=0x800D74A8u; f_800DA360(c); // 800D74A4
  goto L_800D74D0; // 800D74A8
L_800D74AC:;
  c->lr=0x800D74B0u; f_800DA3D0(c); // 800D74AC
  goto L_800D74D0; // 800D74B0
L_800D74B4:;
  c->lr=0x800D74B8u; f_800DB2C0(c); // 800D74B4
  goto L_800D74D0; // 800D74B8
L_800D74BC:;
  c->lr=0x800D74C0u; f_800DB2E0(c); // 800D74BC
  goto L_800D74D0; // 800D74C0
L_800D74C4:;
  c->lr=0x800D74C8u; f_800DB340(c); // 800D74C4
  goto L_800D74D0; // 800D74C8
L_800D74CC:;
  c->lr=0x800D74D0u; f_800DB3E0(c); // 800D74CC
L_800D74D0:;
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800D74D0
  c->r[0]=c->r[0]&~c->r[26]; // 800D74D4
  W32(c->r[13]+0xFFFFA678u,c->r[0]); // 800D74D8
L_800D74DC:;
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800D74DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D74E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7424; } // 800D74E4
  c->r[0]=0u+0x00000000u; // 800D74E8
  W32(c->r[13]+0xFFFFA664u,c->r[0]); // 800D74EC
L_800D74F0:;
  c->r[0]=R32(c->r[13]+0xFFFFA63Cu); // 800D74F0
  cmps(c,0,(int32_t)c->r[0],0); // 800D74F4
  if (crb(c,2)) { goto L_800D7514; } // 800D74F8
  c->r[3]=c->r[1]+0x00000010u; // 800D74FC
  c->lr=0x800D7504u; f_800C8020(c); // 800D7500
  c->r[12]=R32(c->r[13]+0xFFFFA63Cu); // 800D7504
  c->r[3]=R32(c->r[13]+0xFFFFA66Cu); // 800D7508
  c->ctr=c->r[12]; // 800D750C
  if (true) { c->lr=0x800D7514u; dispatch(c,c->ctr); } // 800D7510
L_800D7514:;
  c->r[3]=c->r[13]+0xFFFFA648u; // 800D7514
  c->lr=0x800D751Cu; f_800CFAD0(c); // 800D7518
  c->r[3]=c->r[1]+0x00000010u; // 800D751C
  c->lr=0x800D7524u; f_800C8020(c); // 800D7520
  c->r[3]=c->r[28]|c->r[28]; // 800D7524
  c->lr=0x800D752Cu; f_800C7DE0(c); // 800D7528
  c->r[0]=R32(c->r[13]+0xFFFFA5CCu); // 800D752C
  cmps(c,0,(int32_t)c->r[0],1); // 800D7530
  if (!crb(c,2)) { goto L_800D755C; } // 800D7534
  c->r[3]=0u+0x00000000u; // 800D7538
  c->r[4]=0u+0x00000000u; // 800D753C
  c->r[5]=0u+0x00000000u; // 800D7540
  c->lr=0x800D7548u; f_800D1270(c); // 800D7544
  cmps(c,0,(int32_t)c->r[3],1); // 800D7548
  if (!crb(c,2)) { goto L_800D755C; } // 800D754C
  c->r[0]=0u+0x00000000u; // 800D7550
  W32(c->r[13]+0xFFFFA5CCu,c->r[0]); // 800D7554
  W32(c->r[13]+0xFFFFA5DCu,c->r[0]); // 800D7558
L_800D755C:;
  c->r[0]=0u+0x0000000Au; // 800D755C
  c->r[3]=c->r[30]+0x00000148u; // 800D7560
  c->ctr=c->r[0]; // 800D7564
L_800D7568:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7568
  cmps(c,0,(int32_t)c->r[0],0); // 800D756C
  if (!crb(c,2)) { goto L_800D7580; } // 800D7570
  c->r[0]=0u+0x00000000u; // 800D7574
  W32(c->r[30]+0x00000148u,c->r[0]); // 800D7578
  goto L_800D7588; // 800D757C
L_800D7580:;
  c->r[3]=c->r[3]+0x00000004u; // 800D7580
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D7568; } // 800D7584
L_800D7588:;
  c->r[0]=R32(c->r[13]+0xFFFFA654u); // 800D7588
  cmps(c,0,(int32_t)c->r[0],0); // 800D758C
  if (crb(c,2)) { goto L_800D7600; } // 800D7590
  c->r[0]=R32(c->r[13]+0xFFFFA650u); // 800D7594
  cmps(c,0,(int32_t)c->r[0],0); // 800D7598
  if (crb(c,2)) { goto L_800D7600; } // 800D759C
  c->r[0]=R32(c->r[30]+0x00000148u); // 800D75A0
  cmps(c,0,(int32_t)c->r[0],0); // 800D75A4
  if (crb(c,2)) { goto L_800D7600; } // 800D75A8
  c->r[0]=R32(c->r[13]+0xFFFFA660u); // 800D75AC
  cmps(c,0,(int32_t)c->r[0],1); // 800D75B0
  if (!crb(c,2)) { goto L_800D75D4; } // 800D75B4
  c->r[3]=R32(c->r[13]+0xFFFFA5DCu); // 800D75B8
  c->r[0]=0u+0xFFFFFFFFu; // 800D75BC
  cmpu(c,0,c->r[3],c->r[0]); // 800D75C0
  if (!crb(c,0)) { goto L_800D75D4; } // 800D75C4
  c->r[3]=R32(c->r[13]+0xFFFFA5DCu); // 800D75C8
  c->r[0]=c->r[3]+0x00000001u; // 800D75CC
  W32(c->r[13]+0xFFFFA5DCu,c->r[0]); // 800D75D0
L_800D75D4:;
  c->r[0]=R32(c->r[13]+0xFFFFA65Cu); // 800D75D4
  cmps(c,0,(int32_t)c->r[0],1); // 800D75D8
  if (!crb(c,2)) { goto L_800D7640; } // 800D75DC
  c->r[3]=R32(c->r[13]+0xFFFFA5E0u); // 800D75E0
  c->r[0]=0u+0xFFFFFFFFu; // 800D75E4
  cmpu(c,0,c->r[3],c->r[0]); // 800D75E8
  if (!crb(c,0)) { goto L_800D7640; } // 800D75EC
  c->r[3]=R32(c->r[13]+0xFFFFA5E0u); // 800D75F0
  c->r[0]=c->r[3]+0x00000001u; // 800D75F4
  W32(c->r[13]+0xFFFFA5E0u,c->r[0]); // 800D75F8
  goto L_800D7640; // 800D75FC
L_800D7600:;
  c->r[3]=R32(c->r[13]+0xFFFFA5DCu); // 800D7600
  c->r[0]=R32(c->r[13]+0xFFFFA5D0u); // 800D7604
  cmpu(c,0,c->r[3],c->r[0]); // 800D7608
  if (crb(c,0)) { goto L_800D7618; } // 800D760C
  c->r[0]=0u+0x00000001u; // 800D7610
  W32(c->r[13]+0xFFFFA620u,c->r[0]); // 800D7614
L_800D7618:;
  c->r[3]=R32(c->r[13]+0xFFFFA5E0u); // 800D7618
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 800D761C
  cmpu(c,0,c->r[3],c->r[0]); // 800D7620
  if (crb(c,0)) { goto L_800D762C; } // 800D7624
  c->lr=0x800D762Cu; f_800E8710(c); // 800D7628
L_800D762C:;
  c->r[0]=0u+0x00000000u; // 800D762C
  W32(c->r[13]+0xFFFFA5DCu,c->r[0]); // 800D7630
  W32(c->r[13]+0xFFFFA5E0u,c->r[0]); // 800D7634
  c->r[0]=R32(c->r[13]+0xFFFFA5D4u); // 800D7638
  W32(c->r[13]+0xFFFFA5D0u,c->r[0]); // 800D763C
L_800D7640:;
  c->r[3]=R32(c->r[13]+0xFFFF8F98u); // 800D7640
  c->r[0]=R32(c->r[13]+0xFFFFA660u); // 800D7644
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D7648
  if (crb(c,2)) { goto L_800D7684; } // 800D764C
  c->r[0]=R32(c->r[13]+0xFFFFA660u); // 800D7650
  cmps(c,0,(int32_t)c->r[0],0); // 800D7654
  if (!crb(c,2)) { goto L_800D7674; } // 800D7658
  c->r[3]=R32(c->r[13]+0xFFFFA5DCu); // 800D765C
  c->r[0]=R32(c->r[13]+0xFFFFA5D0u); // 800D7660
  cmpu(c,0,c->r[3],c->r[0]); // 800D7664
  if (crb(c,0)) { goto L_800D7674; } // 800D7668
  c->r[0]=0u+0x00000001u; // 800D766C
  W32(c->r[13]+0xFFFFA620u,c->r[0]); // 800D7670
L_800D7674:;
  c->r[0]=0u+0x00000000u; // 800D7674
  W32(c->r[13]+0xFFFFA5DCu,c->r[0]); // 800D7678
  c->r[0]=R32(c->r[13]+0xFFFFA5D4u); // 800D767C
  W32(c->r[13]+0xFFFFA5D0u,c->r[0]); // 800D7680
L_800D7684:;
  c->r[3]=R32(c->r[13]+0xFFFFA5DCu); // 800D7684
  c->r[0]=R32(c->r[13]+0xFFFFA5D0u); // 800D7688
  cmpu(c,0,c->r[3],c->r[0]); // 800D768C
  if (!crb(c,2)) { goto L_800D769C; } // 800D7690
  c->r[0]=0u+0x00000001u; // 800D7694
  W32(c->r[13]+0xFFFFA61Cu,c->r[0]); // 800D7698
L_800D769C:;
  c->r[0]=R32(c->r[13]+0xFFFFA620u); // 800D769C
  cmps(c,0,(int32_t)c->r[0],0); // 800D76A0
  if (crb(c,2)) { goto L_800D76CC; } // 800D76A4
  c->r[3]=0u+0x00000000u; // 800D76A8
  c->r[4]=0u+0x00000002u; // 800D76AC
  c->r[5]=0u+0x00000002u; // 800D76B0
  c->lr=0x800D76B8u; f_800D1270(c); // 800D76B4
  cmps(c,0,(int32_t)c->r[3],1); // 800D76B8
  if (!crb(c,2)) { goto L_800D76CC; } // 800D76BC
  c->r[0]=0u+0x00000000u; // 800D76C0
  W32(c->r[13]+0xFFFFA620u,c->r[0]); // 800D76C4
  W32(c->r[13]+0xFFFFA5E4u,c->r[0]); // 800D76C8
L_800D76CC:;
  c->r[0]=R32(c->r[13]+0xFFFFA61Cu); // 800D76CC
  cmps(c,0,(int32_t)c->r[0],0); // 800D76D0
  if (crb(c,2)) { goto L_800D7700; } // 800D76D4
  c->r[3]=0u+0x00000001u; // 800D76D8
  c->r[4]=0u+0x00000002u; // 800D76DC
  c->r[5]=0u+0x00000002u; // 800D76E0
  c->lr=0x800D76E8u; f_800D1270(c); // 800D76E4
  cmps(c,0,(int32_t)c->r[3],1); // 800D76E8
  if (!crb(c,2)) { goto L_800D7700; } // 800D76EC
  c->r[3]=0u+0x00000000u; // 800D76F0
  c->r[0]=0u+0x00000001u; // 800D76F4
  W32(c->r[13]+0xFFFFA61Cu,c->r[3]); // 800D76F8
  W32(c->r[13]+0xFFFFA5E4u,c->r[0]); // 800D76FC
L_800D7700:;
  c->r[3]=R32(c->r[13]+0xFFFF8F9Cu); // 800D7700
  c->r[0]=R32(c->r[13]+0xFFFFA65Cu); // 800D7704
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D7708
  if (crb(c,2)) { goto L_800D7738; } // 800D770C
  c->r[0]=R32(c->r[13]+0xFFFFA65Cu); // 800D7710
  cmps(c,0,(int32_t)c->r[0],0); // 800D7714
  if (!crb(c,2)) { goto L_800D7730; } // 800D7718
  c->r[3]=R32(c->r[13]+0xFFFFA5E0u); // 800D771C
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 800D7720
  cmpu(c,0,c->r[3],c->r[0]); // 800D7724
  if (crb(c,0)) { goto L_800D7730; } // 800D7728
  c->lr=0x800D7730u; f_800E8710(c); // 800D772C
L_800D7730:;
  c->r[0]=0u+0x00000000u; // 800D7730
  W32(c->r[13]+0xFFFFA5E0u,c->r[0]); // 800D7734
L_800D7738:;
  c->r[3]=R32(c->r[13]+0xFFFFA5E0u); // 800D7738
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 800D773C
  cmpu(c,0,c->r[3],c->r[0]); // 800D7740
  if (!crb(c,2)) { goto L_800D7758; } // 800D7744
  c->r[3]=0u+0x802F0000u; // 800D7748
  c->r[4]=0u+0x00000000u; // 800D774C
  c->r[3]=c->r[3]+0xFFFFFC10u; // 800D7750
  c->lr=0x800D7758u; f_800E8700(c); // 800D7754
L_800D7758:;
  c->r[0]=0u+0x00000001u; // 800D7758
  W32(c->r[13]+0xFFFFA654u,c->r[0]); // 800D775C
  c->r[3]=c->r[30]+0x00000148u; // 800D7760
  W32(c->r[13]+0xFFFFA650u,c->r[0]); // 800D7764
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D7768
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D776C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D7770
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D7774
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D7778
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D777C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D7780
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D7784
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D7788
  W32(c->r[3]+0x00000024u,c->r[0]); // 800D778C
  c->r[5]=R32(c->r[13]+0xFFFFA660u); // 800D7790
  c->r[4]=R32(c->r[13]+0xFFFFA65Cu); // 800D7794
  c->r[3]=R32(c->r[13]+0xFFFFA5D4u); // 800D7798
  c->r[0]=R32(c->r[13]+0xFFFFA5DCu); // 800D779C
  W32(c->r[13]+0xFFFF8F98u,c->r[5]); // 800D77A0
  cmpu(c,0,c->r[3],c->r[0]); // 800D77A4
  W32(c->r[13]+0xFFFF8F9Cu,c->r[4]); // 800D77A8
  if (!crb(c,1)) { goto L_800D77C4; } // 800D77AC
  c->r[0]=R32(c->r[13]+0xFFFFA5E4u); // 800D77B0
  cmps(c,0,(int32_t)c->r[0],0); // 800D77B4
  if (!crb(c,2)) { goto L_800D77C4; } // 800D77B8
  c->r[0]=R32(c->r[13]+0xFFFFA5D4u); // 800D77BC
  W32(c->r[13]+0xFFFFA5D0u,c->r[0]); // 800D77C0
L_800D77C4:;
  c->r[11]=c->r[1]+0x000002F0u; // 800D77C4
  c->lr=0x800D77CCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D77C8
  c->r[0]=R32(c->r[1]+0x000002F4u); // 800D77CC
  c->lr=c->r[0]; // 800D77D0
  c->r[1]=c->r[1]+0x000002F0u; // 800D77D4
  return; // 800D77D8
}

// VISetPreRetraceCallback
void f_800D77E0(Ctx* __restrict c) {
  trace_call(0x800D77E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D77E0
  c->r[0]=c->lr; // 800D77E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D77E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D77EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D77F0
  c->r[30]=c->r[3]|c->r[3]; // 800D77F4
  c->r[31]=R32(c->r[13]+0xFFFFA640u); // 800D77F8
  c->lr=0x800D7800u; f_800CBAA0(c); // 800D77FC
  W32(c->r[13]+0xFFFFA640u,c->r[30]); // 800D7800
  c->lr=0x800D7808u; f_800CBAE0(c); // 800D7804
  c->r[3]=c->r[31]|c->r[31]; // 800D7808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D780C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7810
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7814
  c->lr=c->r[0]; // 800D7818
  c->r[1]=c->r[1]+0x00000010u; // 800D781C
  return; // 800D7820
}

// VISetPostRetraceCallback
void f_800D7830(Ctx* __restrict c) {
  trace_call(0x800D7830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7830
  c->r[0]=c->lr; // 800D7834
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D783C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7840
  c->r[30]=c->r[3]|c->r[3]; // 800D7844
  c->r[31]=R32(c->r[13]+0xFFFFA63Cu); // 800D7848
  c->lr=0x800D7850u; f_800CBAA0(c); // 800D784C
  W32(c->r[13]+0xFFFFA63Cu,c->r[30]); // 800D7850
  c->lr=0x800D7858u; f_800CBAE0(c); // 800D7854
  c->r[3]=c->r[31]|c->r[31]; // 800D7858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D785C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7860
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7864
  c->lr=c->r[0]; // 800D7868
  c->r[1]=c->r[1]+0x00000010u; // 800D786C
  return; // 800D7870
}

// getTiming
void f_800D7880(Ctx* __restrict c) {
  trace_call(0x800D7880u);
  cmpu(c,0,c->r[3],0x00000022u); // 800D7880
  if (crb(c,1)) { goto L_800D7990; } // 800D7884
  c->r[4]=0u+0x802B0000u; // 800D7888
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D788C
  c->r[4]=c->r[4]+0xFFFFE624u; // 800D7890
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7894
  c->ctr=c->r[4]; // 800D7898
  if (true) { switch (c->ctr) { case 0x800D78A0u: goto L_800D78A0; case 0x800D78ACu: goto L_800D78AC; case 0x800D78BCu: goto L_800D78BC; case 0x800D78CCu: goto L_800D78CC; case 0x800D78DCu: goto L_800D78DC; case 0x800D78E8u: goto L_800D78E8; case 0x800D78F8u: goto L_800D78F8; case 0x800D7908u: goto L_800D7908; case 0x800D7918u: goto L_800D7918; case 0x800D7928u: goto L_800D7928; case 0x800D7938u: goto L_800D7938; case 0x800D7948u: goto L_800D7948; case 0x800D7958u: goto L_800D7958; case 0x800D7968u: goto L_800D7968; case 0x800D7978u: goto L_800D7978; case 0x800D7988u: goto L_800D7988; case 0x800D7990u: goto L_800D7990; default: break; } dispatch(c,c->ctr); return; } // 800D789C
L_800D78A0:;
  c->r[3]=0u+0x802B0000u; // 800D78A0
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78A4
  return; // 800D78A8
L_800D78AC:;
  c->r[3]=0u+0x802B0000u; // 800D78AC
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78B0
  c->r[3]=c->r[3]+0x00000026u; // 800D78B4
  return; // 800D78B8
L_800D78BC:;
  c->r[3]=0u+0x802B0000u; // 800D78BC
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78C0
  c->r[3]=c->r[3]+0x0000004Cu; // 800D78C4
  return; // 800D78C8
L_800D78CC:;
  c->r[3]=0u+0x802B0000u; // 800D78CC
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78D0
  c->r[3]=c->r[3]+0x00000072u; // 800D78D4
  return; // 800D78D8
L_800D78DC:;
  c->r[3]=0u+0x802B0000u; // 800D78DC
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78E0
  return; // 800D78E4
L_800D78E8:;
  c->r[3]=0u+0x802B0000u; // 800D78E8
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78EC
  c->r[3]=c->r[3]+0x00000026u; // 800D78F0
  return; // 800D78F4
L_800D78F8:;
  c->r[3]=0u+0x802B0000u; // 800D78F8
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D78FC
  c->r[3]=c->r[3]+0x00000098u; // 800D7900
  return; // 800D7904
L_800D7908:;
  c->r[3]=0u+0x802B0000u; // 800D7908
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D790C
  c->r[3]=c->r[3]+0x000000BEu; // 800D7910
  return; // 800D7914
L_800D7918:;
  c->r[3]=0u+0x802B0000u; // 800D7918
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D791C
  c->r[3]=c->r[3]+0x000000E4u; // 800D7920
  return; // 800D7924
L_800D7928:;
  c->r[3]=0u+0x802B0000u; // 800D7928
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D792C
  c->r[3]=c->r[3]+0x0000010Au; // 800D7930
  return; // 800D7934
L_800D7938:;
  c->r[3]=0u+0x802B0000u; // 800D7938
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D793C
  c->r[3]=c->r[3]+0x0000004Cu; // 800D7940
  return; // 800D7944
L_800D7948:;
  c->r[3]=0u+0x802B0000u; // 800D7948
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D794C
  c->r[3]=c->r[3]+0x00000072u; // 800D7950
  return; // 800D7954
L_800D7958:;
  c->r[3]=0u+0x802B0000u; // 800D7958
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D795C
  c->r[3]=c->r[3]+0x00000130u; // 800D7960
  return; // 800D7964
L_800D7968:;
  c->r[3]=0u+0x802B0000u; // 800D7968
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D796C
  c->r[3]=c->r[3]+0x00000156u; // 800D7970
  return; // 800D7974
L_800D7978:;
  c->r[3]=0u+0x802B0000u; // 800D7978
  c->r[3]=c->r[3]+0xFFFFE360u; // 800D797C
  c->r[3]=c->r[3]+0x0000017Cu; // 800D7980
  return; // 800D7984
L_800D7988:;
  c->r[3]=R32(c->r[13]+0xFFFFA614u); // 800D7988
  return; // 800D798C
L_800D7990:;
  c->r[3]=0u+0x00000000u; // 800D7990
  return; // 800D7994
}

// __VIInit
void f_800D79A0(Ctx* __restrict c) {
  trace_call(0x800D79A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79A0
  c->r[0]=c->lr; // 800D79A4
  c->r[4]=0u+0x80000000u; // 800D79A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D79AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D79B0
  c->r[31]=rotl(c->r[3],0)&0x00000003u; // 800D79B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D79B8
  c->r[30]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800D79BC
  W32(c->r[4]+0x000000CCu,c->r[30]); // 800D79C0
  c->lr=0x800D79C8u; f_800D7880(c); // 800D79C4
  c->r[4]=0u+0xCC000000u; // 800D79C8
  c->r[0]=0u+0x00000002u; // 800D79CC
  W16(c->r[4]+0x00002002u,c->r[0]); // 800D79D0
  c->r[0]=0u+0x00000000u; // 800D79D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D79D8
  goto L_800D79EC; // 800D79DC
L_800D79E0:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D79E0
  c->r[0]=c->r[4]+0x00000001u; // 800D79E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D79E8
L_800D79EC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D79EC
  cmpu(c,0,c->r[0],0x000003E8u); // 800D79F0
  if (crb(c,0)) { IRQCHK(c); goto L_800D79E0; } // 800D79F4
  c->r[5]=0u+0xCC000000u; // 800D79F8
  c->r[0]=0u+0x00000000u; // 800D79FC
  W16(c->r[5]+0x00002002u,c->r[0]); // 800D7A00
  c->r[0]=R16(c->r[3]+0x0000001Au); // 800D7A04
  W16(c->r[5]+0x00002006u,c->r[0]); // 800D7A08
  c->r[4]=R8(c->r[3]+0x0000001Du); // 800D7A0C
  c->r[0]=R8(c->r[3]+0x0000001Eu); // 800D7A10
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800D7A14
  W16(c->r[5]+0x00002004u,c->r[0]); // 800D7A18
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 800D7A1C
  c->r[4]=R8(c->r[3]+0x0000001Cu); // 800D7A20
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 800D7A24
  c->r[0]=c->r[4]|c->r[0]; // 800D7A28
  W16(c->r[5]+0x0000200Au,c->r[0]); // 800D7A2C
  c->r[0]=R16(c->r[3]+0x00000020u); // 800D7A30
  c->r[0]=rotl(c->r[0],1)&0x0000FFFEu; // 800D7A34
  W16(c->r[5]+0x00002008u,c->r[0]); // 800D7A38
  c->r[0]=R32(c->r[13]+0xFFFFA638u); // 800D7A3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7A40
  if (!crb(c,2)) { goto L_800D7A5C; } // 800D7A44
  c->r[0]=R8(c->r[3]+0x00000022u); // 800D7A48
  c->r[0]=c->r[0]|0x00008000u; // 800D7A4C
  W16(c->r[5]+0x00002072u,c->r[0]); // 800D7A50
  c->r[0]=R16(c->r[3]+0x00000024u); // 800D7A54
  W16(c->r[5]+0x00002074u,c->r[0]); // 800D7A58
L_800D7A5C:;
  c->r[4]=0u+0xCC000000u; // 800D7A5C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D7A60
  W16(c->r[4]+0x00002000u,c->r[0]); // 800D7A64
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 800D7A68
  c->r[0]=0u+0x00000002u; // 800D7A6C
  c->r[8]=0u+0x00002828u; // 800D7A70
  c->r[10]=R16(c->r[3]+0x00000002u); // 800D7A74
  c->r[0]=addc(c,~c->r[5],c->r[0],1); // 800D7A78
  c->r[9]=R16(c->r[3]+0x00000004u); // 800D7A7C
  c->r[7]=0u+0x00000001u; // 800D7A80
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 800D7A84
  c->r[6]=0u+0x00001001u; // 800D7A88
  c->r[9]=c->r[9]+c->r[10]; // 800D7A8C
  cmpu(c,0,c->r[31],0x00000001u); // 800D7A90
  c->r[0]=c->r[9]+0xFFFFFFFEu; // 800D7A94
  W16(c->r[4]+0x0000200Eu,c->r[0]); // 800D7A98
  c->r[0]=addc(c,c->r[5],0,c->xer_ca); // 800D7A9C
  c->r[9]=R16(c->r[3]+0x00000008u); // 800D7AA0
  c->r[0]=c->r[5]-c->r[0]; // 800D7AA4
  c->r[0]=c->r[30]&c->r[0]; // 800D7AA8
  c->r[5]=c->r[9]+0x00000002u; // 800D7AAC
  W16(c->r[4]+0x0000200Cu,c->r[5]); // 800D7AB0
  c->r[9]=R16(c->r[3]+0x00000002u); // 800D7AB4
  c->r[5]=R16(c->r[3]+0x00000006u); // 800D7AB8
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800D7ABC
  c->r[5]=c->r[5]+c->r[9]; // 800D7AC0
  c->r[5]=c->r[5]+0xFFFFFFFEu; // 800D7AC4
  W16(c->r[4]+0x00002012u,c->r[5]); // 800D7AC8
  c->r[5]=R16(c->r[3]+0x0000000Au); // 800D7ACC
  c->r[5]=c->r[5]+0x00000002u; // 800D7AD0
  W16(c->r[4]+0x00002010u,c->r[5]); // 800D7AD4
  c->r[5]=R16(c->r[3]+0x00000010u); // 800D7AD8
  c->r[9]=R8(c->r[3]+0x0000000Cu); // 800D7ADC
  c->r[5]=rotl(c->r[5],5)&0xFFFFFFE0u; // 800D7AE0
  c->r[5]=c->r[9]|c->r[5]; // 800D7AE4
  W16(c->r[4]+0x00002016u,c->r[5]); // 800D7AE8
  c->r[5]=R16(c->r[3]+0x00000014u); // 800D7AEC
  c->r[9]=R8(c->r[3]+0x0000000Eu); // 800D7AF0
  c->r[5]=rotl(c->r[5],5)&0xFFFFFFE0u; // 800D7AF4
  c->r[5]=c->r[9]|c->r[5]; // 800D7AF8
  W16(c->r[4]+0x00002014u,c->r[5]); // 800D7AFC
  c->r[5]=R16(c->r[3]+0x00000012u); // 800D7B00
  c->r[9]=R8(c->r[3]+0x0000000Du); // 800D7B04
  c->r[5]=rotl(c->r[5],5)&0xFFFFFFE0u; // 800D7B08
  c->r[5]=c->r[9]|c->r[5]; // 800D7B0C
  W16(c->r[4]+0x0000201Au,c->r[5]); // 800D7B10
  c->r[5]=R16(c->r[3]+0x00000016u); // 800D7B14
  c->r[9]=R8(c->r[3]+0x0000000Fu); // 800D7B18
  c->r[5]=rotl(c->r[5],5)&0xFFFFFFE0u; // 800D7B1C
  c->r[5]=c->r[9]|c->r[5]; // 800D7B20
  W16(c->r[4]+0x00002018u,c->r[5]); // 800D7B24
  W16(c->r[4]+0x00002048u,c->r[8]); // 800D7B28
  W16(c->r[4]+0x00002036u,c->r[7]); // 800D7B2C
  W16(c->r[4]+0x00002034u,c->r[6]); // 800D7B30
  c->r[5]=R16(c->r[3]+0x00000018u); // 800D7B34
  c->r[3]=R16(c->r[3]+0x0000001Au); // 800D7B38
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 800D7B3C
  c->r[5]=c->r[5]+0x00000001u; // 800D7B40
  c->r[3]=c->r[3]+0x00000001u; // 800D7B44
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800D7B48
  W16(c->r[4]+0x00002032u,c->r[3]); // 800D7B4C
  c->r[3]=c->r[5]|0x00001000u; // 800D7B50
  W16(c->r[4]+0x00002030u,c->r[3]); // 800D7B54
  if (crb(c,1)) { goto L_800D7B78; } // 800D7B58
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800D7B5C
  c->r[0]=0u+0x00000000u; // 800D7B60
  c->r[3]=c->r[3]|0x00000001u; // 800D7B64
  c->r[3]=(rotl(c->r[31],2)&0x00000004u)|(c->r[3]&~0x00000004u); // 800D7B68
  W16(c->r[4]+0x00002002u,c->r[3]); // 800D7B6C
  W16(c->r[4]+0x0000206Cu,c->r[0]); // 800D7B70
  goto L_800D7B88; // 800D7B74
L_800D7B78:;
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800D7B78
  c->r[0]=c->r[0]|0x00000005u; // 800D7B7C
  W16(c->r[4]+0x00002002u,c->r[0]); // 800D7B80
  W16(c->r[4]+0x0000206Cu,c->r[7]); // 800D7B84
L_800D7B88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7B88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D7B8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D7B90
  c->lr=c->r[0]; // 800D7B94
  c->r[1]=c->r[1]+0x00000020u; // 800D7B98
  return; // 800D7B9C
}

// VIInit
void f_800D7BA0(Ctx* __restrict c) {
  trace_call(0x800D7BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7BA0
  c->r[0]=c->lr; // 800D7BA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7BA8
  c->r[11]=c->r[1]+0x00000030u; // 800D7BAC
  c->lr=0x800D7BB4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7BB0
  c->r[0]=R32(c->r[13]+0xFFFFA5C0u); // 800D7BB4
  cmps(c,0,(int32_t)c->r[0],0); // 800D7BB8
  if (!crb(c,2)) { goto L_800D80D0; } // 800D7BBC
  c->r[3]=R32(c->r[13]+0xFFFF8F88u); // 800D7BC0
  c->lr=0x800D7BC8u; f_800C65B0(c); // 800D7BC4
  c->r[0]=0u+0x00000001u; // 800D7BC8
  W32(c->r[13]+0xFFFFA5C0u,c->r[0]); // 800D7BCC
  c->r[3]=0u+0xCC000000u; // 800D7BD0
  c->r[0]=R16(c->r[3]+0x00002002u); // 800D7BD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D7BD8
  if (!crb(c,2)) { goto L_800D7BE8; } // 800D7BDC
  c->r[3]=0u+0x00000000u; // 800D7BE0
  c->lr=0x800D7BE8u; f_800D79A0(c); // 800D7BE4
L_800D7BE8:;
  c->r[4]=0u+0x802B0000u; // 800D7BE8
  c->r[29]=0u+0x00000000u; // 800D7BEC
  c->r[3]=c->r[4]+0xFFFFE504u; // 800D7BF0
  W32(c->r[13]+0xFFFFA66Cu,c->r[29]); // 800D7BF4
  c->r[6]=R16(c->r[3]+0x00000002u); // 800D7BF8
  c->r[30]=0u+0xCC000000u; // 800D7BFC
  c->r[5]=R16(c->r[4]+0xFFFFE504u); // 800D7C00
  W32(c->r[13]+0xFFFFA5FCu,c->r[29]); // 800D7C04
  c->r[0]=rotl(c->r[6],10)&0x0000FC00u; // 800D7C08
  c->r[0]=c->r[5]|c->r[0]; // 800D7C0C
  c->r[4]=sraw(c,c->r[6],6); // 800D7C10
  W32(c->r[13]+0xFFFFA5F8u,c->r[29]); // 800D7C14
  W32(c->r[13]+0xFFFFA60Cu,c->r[29]); // 800D7C18
  W32(c->r[13]+0xFFFFA608u,c->r[29]); // 800D7C1C
  W32(c->r[13]+0xFFFFA5F0u,c->r[29]); // 800D7C20
  W32(c->r[13]+0xFFFFA600u,c->r[29]); // 800D7C24
  W32(c->r[13]+0xFFFFA668u,c->r[29]); // 800D7C28
  W32(c->r[13]+0xFFFFA664u,c->r[29]); // 800D7C2C
  W16(c->r[30]+0x0000204Eu,c->r[0]); // 800D7C30
  c->r[0]=R16(c->r[3]+0x00000004u); // 800D7C34
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D7C38
  c->r[0]=c->r[4]|c->r[0]; // 800D7C3C
  W16(c->r[30]+0x0000204Cu,c->r[0]); // 800D7C40
  c->r[4]=R16(c->r[3]+0x00000008u); // 800D7C44
  c->r[5]=R16(c->r[3]+0x00000006u); // 800D7C48
  c->r[0]=rotl(c->r[4],10)&0x0000FC00u; // 800D7C4C
  c->r[4]=sraw(c,c->r[4],6); // 800D7C50
  c->r[0]=c->r[5]|c->r[0]; // 800D7C54
  W16(c->r[30]+0x00002052u,c->r[0]); // 800D7C58
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800D7C5C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D7C60
  c->r[0]=c->r[4]|c->r[0]; // 800D7C64
  W16(c->r[30]+0x00002050u,c->r[0]); // 800D7C68
  c->r[4]=R16(c->r[3]+0x0000000Eu); // 800D7C6C
  c->r[5]=R16(c->r[3]+0x0000000Cu); // 800D7C70
  c->r[0]=rotl(c->r[4],10)&0x0000FC00u; // 800D7C74
  c->r[4]=sraw(c,c->r[4],6); // 800D7C78
  c->r[0]=c->r[5]|c->r[0]; // 800D7C7C
  W16(c->r[30]+0x00002056u,c->r[0]); // 800D7C80
  c->r[0]=R16(c->r[3]+0x00000010u); // 800D7C84
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D7C88
  c->r[0]=c->r[4]|c->r[0]; // 800D7C8C
  W16(c->r[30]+0x00002054u,c->r[0]); // 800D7C90
  c->r[0]=R16(c->r[3]+0x00000014u); // 800D7C94
  c->r[4]=R16(c->r[3]+0x00000012u); // 800D7C98
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800D7C9C
  c->r[0]=c->r[4]|c->r[0]; // 800D7CA0
  W16(c->r[30]+0x0000205Au,c->r[0]); // 800D7CA4
  c->r[0]=R16(c->r[3]+0x00000018u); // 800D7CA8
  c->r[4]=R16(c->r[3]+0x00000016u); // 800D7CAC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800D7CB0
  c->r[0]=c->r[4]|c->r[0]; // 800D7CB4
  W16(c->r[30]+0x00002058u,c->r[0]); // 800D7CB8
  c->r[4]=R16(c->r[3]+0x0000001Cu); // 800D7CBC
  c->r[0]=0u+0x00000280u; // 800D7CC0
  c->r[5]=R16(c->r[3]+0x0000001Au); // 800D7CC4
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D7CC8
  c->r[4]=c->r[5]|c->r[4]; // 800D7CCC
  W16(c->r[30]+0x0000205Eu,c->r[4]); // 800D7CD0
  c->r[4]=R16(c->r[3]+0x00000020u); // 800D7CD4
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 800D7CD8
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D7CDC
  c->r[4]=c->r[5]|c->r[4]; // 800D7CE0
  W16(c->r[30]+0x0000205Cu,c->r[4]); // 800D7CE4
  c->r[4]=R16(c->r[3]+0x00000024u); // 800D7CE8
  c->r[5]=R16(c->r[3]+0x00000022u); // 800D7CEC
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D7CF0
  c->r[4]=c->r[5]|c->r[4]; // 800D7CF4
  W16(c->r[30]+0x00002062u,c->r[4]); // 800D7CF8
  c->r[4]=R16(c->r[3]+0x00000028u); // 800D7CFC
  c->r[5]=R16(c->r[3]+0x00000026u); // 800D7D00
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D7D04
  c->r[4]=c->r[5]|c->r[4]; // 800D7D08
  W16(c->r[30]+0x00002060u,c->r[4]); // 800D7D0C
  c->r[4]=R16(c->r[3]+0x0000002Cu); // 800D7D10
  c->r[5]=R16(c->r[3]+0x0000002Au); // 800D7D14
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D7D18
  c->r[4]=c->r[5]|c->r[4]; // 800D7D1C
  W16(c->r[30]+0x00002066u,c->r[4]); // 800D7D20
  c->r[4]=R16(c->r[3]+0x00000030u); // 800D7D24
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 800D7D28
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D7D2C
  c->r[3]=c->r[5]|c->r[3]; // 800D7D30
  W16(c->r[30]+0x00002064u,c->r[3]); // 800D7D34
  W16(c->r[30]+0x00002070u,c->r[0]); // 800D7D38
  c->lr=0x800D7D40u; f_800F77A0(c); // 800D7D3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800D7D40
  W16(c->r[13]+0xFFFFA5ECu,c->r[0]); // 800D7D44
  c->r[3]=0u+0x80000000u; // 800D7D48
  W16(c->r[13]+0xFFFFA5EEu,c->r[29]); // 800D7D4C
  c->r[24]=R32(c->r[3]+0x000000CCu); // 800D7D50
  c->r[29]=R16(c->r[30]+0x00002002u); // 800D7D54
  c->lr=0x800D7D5Cu; f_800CBAA0(c); // 800D7D58
  c->r[0]=R16(c->r[30]+0x0000206Cu); // 800D7D5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D7D60
  cmpu(c,0,c->r[0],0x00000001u); // 800D7D64
  if (!crb(c,2)) { goto L_800D7D74; } // 800D7D68
  c->r[27]=0u+0x00000002u; // 800D7D6C
  goto L_800D7D88; // 800D7D70
L_800D7D74:;
  c->r[0]=R16(c->r[30]+0x00002002u); // 800D7D74
  c->r[4]=rotl(c->r[0],30)&0x00000001u; // 800D7D78
  c->r[0]=0u-c->r[4]; // 800D7D7C
  c->r[0]=c->r[0]|c->r[4]; // 800D7D80
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 800D7D84
L_800D7D88:;
  c->lr=0x800D7D8Cu; f_800CBAE0(c); // 800D7D88
  c->r[3]=0u+0x802F0000u; // 800D7D8C
  cmpu(c,0,c->r[24],0x00000005u); // 800D7D90
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D7D94
  c->r[0]=rotl(c->r[29],24)&0x00000003u; // 800D7D98
  W32(c->r[3]+0x00000024u,c->r[27]); // 800D7D9C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800D7DA0
  if (crb(c,2)) { goto L_800D7DB8; } // 800D7DA4
  cmpu(c,0,c->r[24],0x00000001u); // 800D7DA8
  if (!crb(c,2)) { goto L_800D7DC8; } // 800D7DAC
  cmps(c,0,(int32_t)c->r[0],0); // 800D7DB0
  if (!crb(c,2)) { goto L_800D7DC8; } // 800D7DB4
L_800D7DB8:;
  c->r[3]=0u+0x802F0000u; // 800D7DB8
  c->r[0]=0u+0x00000005u; // 800D7DBC
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D7DC0
  W32(c->r[3]+0x00000028u,c->r[0]); // 800D7DC4
L_800D7DC8:;
  c->r[30]=0u+0x802F0000u; // 800D7DC8
  c->r[31]=c->r[30]+0xFFFFA820u; // 800D7DCC
  c->r[5]=R32(c->r[31]+0x00000028u); // 800D7DD0
  c->r[0]=R32(c->r[31]+0x00000024u); // 800D7DD4
  c->r[4]=c->r[5]+0xFFFFFFFDu; // 800D7DD8
  c->r[3]=addc(c,~c->r[5],0x00000003u,1); // 800D7DDC
  c->r[3]=~(c->r[4]|c->r[3]); // 800D7DE0
  c->r[3]=sraw(c,c->r[3],31); // 800D7DE4
  c->r[3]=c->r[5]&~c->r[3]; // 800D7DE8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D7DEC
  c->r[3]=c->r[3]+c->r[0]; // 800D7DF0
  c->lr=0x800D7DF8u; f_800D7880(c); // 800D7DF4
  c->r[7]=0u+0x00000280u; // 800D7DF8
  c->r[6]=0u+0x802F0000u; // 800D7DFC
  c->r[5]=addc(c,~c->r[7],0x000002D0u,1); // 800D7E00
  c->r[8]=R32(c->r[31]+0x00000028u); // 800D7E04
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 800D7E08
  c->r[6]=c->r[6]+0xFFFFA7A8u; // 800D7E0C
  c->r[4]=c->r[4]+c->r[5]; // 800D7E10
  W16(c->r[6]+0x00000002u,c->r[29]); // 800D7E14
  c->r[6]=sraw(c,c->r[4],1); // 800D7E18
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA5ECu); // 800D7E1C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 800D7E20
  W32(c->r[31]+0x00000054u,c->r[3]); // 800D7E24
  c->r[4]=c->r[4]+c->r[0]; // 800D7E28
  c->r[9]=addc(c,~c->r[7],0x000002D0u,1); // 800D7E2C
  W32(c->r[13]+0xFFFFA634u,c->r[3]); // 800D7E30
  c->r[5]=0u+0x00000000u; // 800D7E34
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[9]); // 800D7E38
  W32(c->r[13]+0xFFFFA630u,c->r[8]); // 800D7E3C
  W16(c->r[31]+0x00000004u,c->r[7]); // 800D7E40
  c->r[0]=R16(c->r[3]+0x00000002u); // 800D7E44
  c->r[0]=rotl(c->r[0],1)&0x0000FFFEu; // 800D7E48
  W16(c->r[31]+0x00000006u,c->r[0]); // 800D7E4C
  W16(c->r[30]+0xFFFFA820u,c->r[6]); // 800D7E50
  W16(c->r[31]+0x00000002u,c->r[5]); // 800D7E54
  c->r[7]=R16(c->r[3]+0x00000002u); // 800D7E58
  if (!crb(c,1)) { goto L_800D7E64; } // 800D7E5C
  goto L_800D7E6C; // 800D7E60
L_800D7E64:;
  c->r[0]=sraw(c,c->r[4],31); // 800D7E64
  c->r[9]=c->r[4]&~c->r[0]; // 800D7E68
L_800D7E6C:;
  c->r[5]=0u+0x802F0000u; // 800D7E6C
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA5EEu); // 800D7E70
  c->r[5]=c->r[5]+0xFFFFA820u; // 800D7E74
  c->r[6]=R16(c->r[5]+0x00000002u); // 800D7E78
  c->r[4]=R32(c->r[5]+0x00000020u); // 800D7E7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 800D7E80
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 800D7E84
  c->r[10]=c->r[0]+c->r[8]; // 800D7E88
  W16(c->r[5]+0x00000008u,c->r[9]); // 800D7E8C
  c->r[0]=cntlz(c->r[4]); // 800D7E90
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D7E94
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 800D7E98
  c->r[0]=c->r[6]|c->r[6]; // 800D7E9C
  c->r[5]=c->r[4]+0x00000001u; // 800D7EA0
  if (!crb(c,1)) { goto L_800D7EAC; } // 800D7EA4
  c->r[0]=c->r[10]|c->r[10]; // 800D7EA8
L_800D7EAC:;
  c->r[4]=0u+0x802F0000u; // 800D7EAC
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D7EB0
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D7EB4
  c->r[9]=0u+0x00000280u; // 800D7EB8
  c->r[10]=R16(c->r[4]+0x00000002u); // 800D7EBC
  c->r[30]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800D7EC0
  c->r[7]=R16(c->r[4]+0x00000006u); // 800D7EC4
  c->r[26]=c->r[30]-c->r[6]; // 800D7EC8
  c->r[10]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 800D7ECC
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 800D7ED0
  c->r[27]=c->r[8]+c->r[10]; // 800D7ED4
  c->r[12]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D7ED8
  c->r[12]=c->r[12]+c->r[27]; // 800D7EDC
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 800D7EE0
  c->r[11]=c->r[11]+c->r[8]; // 800D7EE4
  c->r[25]=c->r[27]-c->r[6]; // 800D7EE8
  c->r[8]=c->r[12]-c->r[26]; // 800D7EEC
  c->r[10]=c->r[10]+c->r[27]; // 800D7EF0
  c->r[12]=0u-c->r[8]; // 800D7EF4
  W16(c->r[4]+0x0000000Au,c->r[0]); // 800D7EF8
  c->r[12]=c->r[12]&~c->r[8]; // 800D7EFC
  c->r[24]=c->r[10]-c->r[26]; // 800D7F00
  c->r[27]=sraw(c,c->r[12],31); // 800D7F04
  c->r[26]=c->r[11]-c->r[6]; // 800D7F08
  c->r[10]=sraw(c,c->r[25],31); // 800D7F0C
  c->r[6]=0u-c->r[24]; // 800D7F10
  c->r[12]=sraw(c,c->r[26],31); // 800D7F14
  c->r[8]=c->r[8]&c->r[27]; // 800D7F18
  c->r[31]=c->r[25]&c->r[10]; // 800D7F1C
  c->r[6]=c->r[6]&~c->r[24]; // 800D7F20
  c->r[10]=sraw(c,c->r[6],31); // 800D7F24
  c->r[30]=c->r[26]&c->r[12]; // 800D7F28
  c->r[6]=sraw(c,c->r[25],31); // 800D7F2C
  c->r[7]=c->r[7]+c->r[31]; // 800D7F30
  c->r[0]=c->r[7]-c->r[8]; // 800D7F34
  c->r[26]=c->r[24]&c->r[10]; // 800D7F38
  c->r[6]=c->r[25]&c->r[6]; // 800D7F3C
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 800D7F40
  c->r[10]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 800D7F44
  c->r[11]=R16(c->r[4]+0x0000001Cu); // 800D7F48
  c->r[12]=R16(c->r[4]+0x00000018u); // 800D7F4C
  c->r[29]=0u+0x00000000u; // 800D7F50
  W16(c->r[4]+0x00000012u,c->r[9]); // 800D7F54
  c->r[6]=0u+0x00000028u; // 800D7F58
  c->r[8]=divw((int32_t)c->r[30],(int32_t)c->r[5]); // 800D7F5C
  c->r[7]=c->r[11]+c->r[10]; // 800D7F60
  c->r[0]=0u+0x00000001u; // 800D7F64
  c->r[5]=divw((int32_t)c->r[26],(int32_t)c->r[5]); // 800D7F68
  c->r[8]=c->r[12]-c->r[8]; // 800D7F6C
  W16(c->r[4]+0x0000000Eu,c->r[8]); // 800D7F70
  c->r[5]=c->r[7]-c->r[5]; // 800D7F74
  W16(c->r[4]+0x00000010u,c->r[5]); // 800D7F78
  c->r[5]=R16(c->r[3]+0x00000002u); // 800D7F7C
  c->r[5]=rotl(c->r[5],1)&0x0000FFFEu; // 800D7F80
  W16(c->r[4]+0x00000014u,c->r[5]); // 800D7F84
  W16(c->r[4]+0x00000016u,c->r[29]); // 800D7F88
  W16(c->r[4]+0x00000018u,c->r[29]); // 800D7F8C
  W16(c->r[4]+0x0000001Au,c->r[9]); // 800D7F90
  c->r[5]=R16(c->r[3]+0x00000002u); // 800D7F94
  c->r[3]=c->r[13]+0xFFFFA648u; // 800D7F98
  c->r[5]=rotl(c->r[5],1)&0x0000FFFEu; // 800D7F9C
  W16(c->r[4]+0x0000001Cu,c->r[5]); // 800D7FA0
  W32(c->r[4]+0x00000020u,c->r[29]); // 800D7FA4
  W8(c->r[4]+0x0000002Cu,c->r[6]); // 800D7FA8
  W8(c->r[4]+0x0000002Du,c->r[6]); // 800D7FAC
  W8(c->r[4]+0x0000002Eu,c->r[6]); // 800D7FB0
  W8(c->r[4]+0x0000003Cu,c->r[29]); // 800D7FB4
  W32(c->r[4]+0x00000040u,c->r[0]); // 800D7FB8
  W32(c->r[4]+0x00000044u,c->r[29]); // 800D7FBC
  c->lr=0x800D7FC4u; f_800CE950(c); // 800D7FC0
  c->r[5]=0u+0xCC000000u; // 800D7FC4
  c->r[4]=0u+0x800D0000u; // 800D7FC8
  c->r[0]=R16(c->r[5]+0x00002030u); // 800D7FCC
  c->r[4]=c->r[4]+0x00006FD0u; // 800D7FD0
  c->r[3]=0u+0x00000018u; // 800D7FD4
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800D7FD8
  W16(c->r[5]+0x00002030u,c->r[0]); // 800D7FDC
  c->r[0]=R16(c->r[5]+0x00002034u); // 800D7FE0
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800D7FE4
  W16(c->r[5]+0x00002034u,c->r[0]); // 800D7FE8
  W32(c->r[13]+0xFFFFA640u,c->r[29]); // 800D7FEC
  W32(c->r[13]+0xFFFFA63Cu,c->r[29]); // 800D7FF0
  c->lr=0x800D7FF8u; f_800CBB10(c); // 800D7FF4
  c->r[3]=0u+0x00000080u; // 800D7FF8
  c->lr=0x800D8000u; f_800CBEF0(c); // 800D7FFC
  c->r[3]=0u+0x802B0000u; // 800D8000
  c->r[3]=c->r[3]+0xFFFFE5F0u; // 800D8004
  c->lr=0x800D800Cu; f_800CD1E0(c); // 800D8008
  c->lr=0x800D8010u; f_800CBAA0(c); // 800D800C
  c->r[5]=R32(c->r[13]+0xFFFFA630u); // 800D8010
  cmpu(c,0,c->r[5],0x00000008u); // 800D8014
  if (crb(c,1)) { goto L_800D8048; } // 800D8018
  c->r[4]=0u+0x802B0000u; // 800D801C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D8020
  c->r[4]=c->r[4]+0xFFFFE6B0u; // 800D8024
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D8028
  c->ctr=c->r[4]; // 800D802C
  if (true) { switch (c->ctr) { case 0x800D8034u: goto L_800D8034; case 0x800D803Cu: goto L_800D803C; case 0x800D8044u: goto L_800D8044; default: break; } dispatch(c,c->ctr); return; } // 800D8030
L_800D8034:;
  c->r[28]=0u+0x00000000u; // 800D8034
  goto L_800D8048; // 800D8038
L_800D803C:;
  c->r[28]=0u+0x00000001u; // 800D803C
  goto L_800D8048; // 800D8040
L_800D8044:;
  c->r[28]=c->r[5]|c->r[5]; // 800D8044
L_800D8048:;
  c->lr=0x800D804Cu; f_800CBAE0(c); // 800D8048
  cmpu(c,0,c->r[28],0x00000001u); // 800D804C
  if (!crb(c,2)) { goto L_800D8070; } // 800D8050
  c->r[3]=0u+0x00010000u; // 800D8054
  c->r[4]=0u+0x00003A98u; // 800D8058
  W32(c->r[13]+0xFFFFA5D0u,c->r[4]); // 800D805C
  c->r[0]=c->r[3]+0x00005F90u; // 800D8060
  W32(c->r[13]+0xFFFFA5D4u,c->r[4]); // 800D8064
  W32(c->r[13]+0xFFFFA5D8u,c->r[0]); // 800D8068
  goto L_800D8088; // 800D806C
L_800D8070:;
  c->r[3]=0u+0x00020000u; // 800D8070
  c->r[4]=0u+0x00004650u; // 800D8074
  W32(c->r[13]+0xFFFFA5D0u,c->r[4]); // 800D8078
  c->r[0]=c->r[3]+0xFFFFA5E0u; // 800D807C
  W32(c->r[13]+0xFFFFA5D4u,c->r[4]); // 800D8080
  W32(c->r[13]+0xFFFFA5D8u,c->r[0]); // 800D8084
L_800D8088:;
  c->r[3]=0u+0x00000000u; // 800D8088
  W32(c->r[13]+0xFFFFA5DCu,c->r[3]); // 800D808C
  c->r[0]=0u+0x00000001u; // 800D8090
  c->r[27]=0u+0x00000001u; // 800D8094
  W32(c->r[13]+0xFFFFA5E0u,c->r[3]); // 800D8098
  W32(c->r[13]+0xFFFFA658u,c->r[3]); // 800D809C
  W32(c->r[13]+0xFFFFA5CCu,c->r[0]); // 800D80A0
  W32(c->r[13]+0xFFFFA5E4u,c->r[3]); // 800D80A4
  c->r[0]=R32(c->r[13]+0xFFFFA660u); // 800D80A8
  c->lr=0x800D80B0u; f_800F78A0(c); // 800D80AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800D80B0
  if (!crb(c,2)) { goto L_800D80BC; } // 800D80B4
  c->r[27]=0u+0x00000000u; // 800D80B8
L_800D80BC:;
  W32(c->r[13]+0xFFFFA660u,c->r[27]); // 800D80BC
  c->r[0]=0u+0x00000000u; // 800D80C0
  c->r[3]=R32(c->r[13]+0xFFFFA65Cu); // 800D80C4
  W32(c->r[13]+0xFFFFA65Cu,c->r[0]); // 800D80C8
  c->lr=0x800D80D0u; f_800DB430(c); // 800D80CC
L_800D80D0:;
  c->r[11]=c->r[1]+0x00000030u; // 800D80D0
  c->lr=0x800D80D8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D80D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D80D8
  c->lr=c->r[0]; // 800D80DC
  c->r[1]=c->r[1]+0x00000030u; // 800D80E0
  return; // 800D80E4
}

// VIWaitForRetrace
void f_800D80F0(Ctx* __restrict c) {
  trace_call(0x800D80F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D80F0
  c->r[0]=c->lr; // 800D80F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D80F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D80FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8100
  c->lr=0x800D8108u; f_800CBAA0(c); // 800D8104
  c->r[31]=c->r[3]|c->r[3]; // 800D8108
  c->r[30]=R32(c->r[13]+0xFFFFA66Cu); // 800D810C
L_800D8110:;
  c->r[3]=c->r[13]+0xFFFFA648u; // 800D8110
  c->lr=0x800D8118u; f_800CF9E0(c); // 800D8114
  c->r[0]=R32(c->r[13]+0xFFFFA66Cu); // 800D8118
  cmpu(c,0,c->r[30],c->r[0]); // 800D811C
  if (crb(c,2)) { IRQCHK(c); goto L_800D8110; } // 800D8120
  c->r[3]=c->r[31]|c->r[31]; // 800D8124
  c->lr=0x800D812Cu; f_800CBAE0(c); // 800D8128
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D812C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8130
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8134
  c->lr=c->r[0]; // 800D8138
  c->r[1]=c->r[1]+0x00000010u; // 800D813C
  return; // 800D8140
}

// setFbbRegs
void f_800D8150(Ctx* __restrict c) {
  trace_call(0x800D8150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8154
  c->r[8]=R8(c->r[3]+0x0000002Cu); // 800D8158
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 800D815C
  c->r[31]=rotl(c->r[8],5)&0xFFFFFFE0u; // 800D8160
  c->r[11]=R32(c->r[3]+0x00000020u); // 800D8164
  c->r[8]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 800D8168
  c->r[9]=R16(c->r[3]+0x00000016u); // 800D816C
  c->r[10]=R32(c->r[3]+0x00000030u); // 800D8170
  cmps(c,0,(int32_t)c->r[11],0); // 800D8174
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFE0u; // 800D8178
  c->r[12]=R16(c->r[3]+0x0000000Au); // 800D817C
  c->r[0]=c->r[10]+c->r[0]; // 800D8180
  c->r[9]=c->r[8]+c->r[0]; // 800D8184
  W32(c->r[4]+0x00000000u,c->r[9]); // 800D8188
  if (!crb(c,2)) { goto L_800D8194; } // 800D818C
  goto L_800D8198; // 800D8190
L_800D8194:;
  c->r[9]=c->r[9]+c->r[31]; // 800D8194
L_800D8198:;
  c->r[8]=rotl(c->r[12],1)&0x00000001u; // 800D8198
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 800D819C
  c->r[0]=c->r[0]^c->r[8]; // 800D81A0
  W32(c->r[5]+0x00000000u,c->r[9]); // 800D81A4
  c->r[0]=c->r[0]-c->r[8]; // 800D81A8
  cmps(c,0,(int32_t)c->r[0],1); // 800D81AC
  if (!crb(c,2)) { goto L_800D81C0; } // 800D81B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D81B4
  W32(c->r[4]+0x00000000u,c->r[9]); // 800D81B8
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D81BC
L_800D81C0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D81C0
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800D81C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D81C8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D81CC
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800D81D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D81D4
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D81D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D81DC
  if (crb(c,2)) { goto L_800D8264; } // 800D81E0
  c->r[8]=R8(c->r[3]+0x0000002Cu); // 800D81E4
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 800D81E8
  c->r[31]=rotl(c->r[8],5)&0xFFFFFFE0u; // 800D81EC
  c->r[11]=R32(c->r[3]+0x00000020u); // 800D81F0
  c->r[8]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 800D81F4
  c->r[9]=R16(c->r[3]+0x00000016u); // 800D81F8
  c->r[10]=R32(c->r[3]+0x00000048u); // 800D81FC
  cmps(c,0,(int32_t)c->r[11],0); // 800D8200
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFE0u; // 800D8204
  c->r[12]=R16(c->r[3]+0x0000000Au); // 800D8208
  c->r[0]=c->r[10]+c->r[0]; // 800D820C
  c->r[9]=c->r[8]+c->r[0]; // 800D8210
  W32(c->r[6]+0x00000000u,c->r[9]); // 800D8214
  if (!crb(c,2)) { goto L_800D8220; } // 800D8218
  goto L_800D8224; // 800D821C
L_800D8220:;
  c->r[9]=c->r[9]+c->r[31]; // 800D8220
L_800D8224:;
  c->r[8]=rotl(c->r[12],1)&0x00000001u; // 800D8224
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 800D8228
  c->r[0]=c->r[0]^c->r[8]; // 800D822C
  W32(c->r[7]+0x00000000u,c->r[9]); // 800D8230
  c->r[0]=c->r[0]-c->r[8]; // 800D8234
  cmps(c,0,(int32_t)c->r[0],1); // 800D8238
  if (!crb(c,2)) { goto L_800D824C; } // 800D823C
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D8240
  W32(c->r[6]+0x00000000u,c->r[9]); // 800D8244
  W32(c->r[7]+0x00000000u,c->r[0]); // 800D8248
L_800D824C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D824C
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800D8250
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D8254
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D8258
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800D825C
  W32(c->r[7]+0x00000000u,c->r[0]); // 800D8260
L_800D8264:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D8264
  c->r[8]=0u+0x01000000u; // 800D8268
  cmpu(c,0,c->r[0],c->r[8]); // 800D826C
  if (!crb(c,0)) { goto L_800D82A0; } // 800D8270
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D8274
  cmpu(c,0,c->r[0],c->r[8]); // 800D8278
  if (!crb(c,0)) { goto L_800D82A0; } // 800D827C
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D8280
  cmpu(c,0,c->r[0],c->r[8]); // 800D8284
  if (!crb(c,0)) { goto L_800D82A0; } // 800D8288
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D828C
  cmpu(c,0,c->r[0],c->r[8]); // 800D8290
  if (!crb(c,0)) { goto L_800D82A0; } // 800D8294
  c->r[10]=0u+0x00000000u; // 800D8298
  goto L_800D82A4; // 800D829C
L_800D82A0:;
  c->r[10]=0u+0x00000001u; // 800D82A0
L_800D82A4:;
  cmps(c,0,(int32_t)c->r[10],0); // 800D82A4
  if (crb(c,2)) { goto L_800D82DC; } // 800D82A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D82AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D82B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D82B4
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D82B8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D82BC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D82C0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D82C4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D82C8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D82CC
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D82D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D82D4
  W32(c->r[7]+0x00000000u,c->r[0]); // 800D82D8
L_800D82DC:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D82DC
  c->r[8]=0u+0x802F0000u; // 800D82E0
  c->r[11]=R32(c->r[4]+0x00000000u); // 800D82E4
  c->r[8]=c->r[8]+0xFFFFA7A8u; // 800D82E8
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D82EC
  c->r[9]=c->r[0]|0x00010000u; // 800D82F0
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D82F4
  c->r[4]=rotl(c->r[10],12)&0xFFFFF000u; // 800D82F8
  c->r[0]=rotl(c->r[11],16)&0x0000FFFFu; // 800D82FC
  W32(c->r[13]+0xFFFFA5F8u,c->r[9]); // 800D8300
  c->r[10]=c->r[4]|c->r[0]; // 800D8304
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D8308
  W16(c->r[8]+0x0000001Eu,c->r[11]); // 800D830C
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D8310
  c->r[0]=c->r[0]|0x00020000u; // 800D8314
  c->r[9]=R8(c->r[3]+0x0000003Cu); // 800D8318
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D831C
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 800D8320
  c->r[4]=c->r[10]|c->r[9]; // 800D8324
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8328
  W16(c->r[8]+0x0000001Cu,c->r[4]); // 800D832C
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D8330
  c->r[5]=R32(c->r[5]+0x00000000u); // 800D8334
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D8338
  c->r[0]=c->r[0]|0x00001000u; // 800D833C
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D8340
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8344
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D8348
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D834C
  W16(c->r[8]+0x00000026u,c->r[5]); // 800D8350
  c->r[5]=rotl(c->r[5],16)&0x0000FFFFu; // 800D8354
  c->r[0]=c->r[0]|0x00002000u; // 800D8358
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D835C
  W16(c->r[8]+0x00000024u,c->r[5]); // 800D8360
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8364
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D8368
  cmps(c,0,(int32_t)c->r[0],0); // 800D836C
  if (crb(c,2)) { goto L_800D83EC; } // 800D8370
  c->r[6]=R32(c->r[6]+0x00000000u); // 800D8374
  c->r[3]=0u+0x00010000u; // 800D8378
  c->r[4]=R32(c->r[13]+0xFFFFA5F8u); // 800D837C
  c->r[0]=c->r[3]+0xFFFF8000u; // 800D8380
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D8384
  c->r[5]=rotl(c->r[6],16)&0x0000FFFFu; // 800D8388
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D838C
  c->r[3]=c->r[4]|0x00004000u; // 800D8390
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8394
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8398
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D839C
  W16(c->r[8]+0x00000022u,c->r[6]); // 800D83A0
  c->r[0]=c->r[3]|c->r[0]; // 800D83A4
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D83A8
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D83AC
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D83B0
  W16(c->r[8]+0x00000020u,c->r[5]); // 800D83B4
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D83B8
  c->r[0]=c->r[0]|0x00000400u; // 800D83BC
  c->r[4]=R32(c->r[7]+0x00000000u); // 800D83C0
  W16(c->r[8]+0x0000002Au,c->r[4]); // 800D83C4
  c->r[4]=rotl(c->r[4],16)&0x0000FFFFu; // 800D83C8
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D83CC
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D83D0
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D83D4
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D83D8
  W16(c->r[8]+0x00000028u,c->r[4]); // 800D83DC
  c->r[0]=c->r[0]|0x00000800u; // 800D83E0
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D83E4
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D83E8
L_800D83EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D83EC
  c->r[1]=c->r[1]+0x00000010u; // 800D83F0
  return; // 800D83F4
}

// setHorizontalRegs
void f_800D8400(Ctx* __restrict c) {
  trace_call(0x800D8400u);
  c->r[7]=R32(c->r[13]+0xFFFFA5F8u); // 800D8400
  c->r[9]=0u+0x802F0000u; // 800D8404
  c->r[6]=0u+0x802F0000u; // 800D8408
  c->r[0]=R16(c->r[3]+0x0000001Au); // 800D840C
  c->r[9]=c->r[9]+0xFFFFA7A8u; // 800D8410
  c->r[8]=R32(c->r[13]+0xFFFFA5FCu); // 800D8414
  c->r[6]=c->r[6]+0xFFFFA820u; // 800D8418
  W16(c->r[9]+0x00000006u,c->r[0]); // 800D841C
  c->r[0]=R32(c->r[6]+0x00000028u); // 800D8420
  c->r[6]=c->r[7]|0x10000000u; // 800D8424
  W32(c->r[13]+0xFFFFA5FCu,c->r[8]); // 800D8428
  cmpu(c,0,c->r[0],0x00000008u); // 800D842C
  W32(c->r[13]+0xFFFFA5F8u,c->r[6]); // 800D8430
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D8434
  c->r[7]=R8(c->r[3]+0x0000001Eu); // 800D8438
  c->r[8]=R8(c->r[3]+0x0000001Du); // 800D843C
  c->r[0]=c->r[0]|0x20000000u; // 800D8440
  c->r[6]=R32(c->r[13]+0xFFFFA5FCu); // 800D8444
  W32(c->r[13]+0xFFFFA5FCu,c->r[6]); // 800D8448
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800D844C
  W16(c->r[9]+0x00000004u,c->r[7]); // 800D8450
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8454
  if (!crb(c,2)) { goto L_800D846C; } // 800D8458
  c->r[4]=R8(c->r[3]+0x0000001Fu); // 800D845C
  c->r[8]=R16(c->r[3]+0x00000020u); // 800D8460
  c->r[7]=c->r[4]+0x000000ACu; // 800D8464
  goto L_800D848C; // 800D8468
L_800D846C:;
  c->r[0]=R16(c->r[3]+0x00000020u); // 800D846C
  c->r[6]=addc(c,~c->r[5],0x000002D0u,1); // 800D8470
  c->r[7]=R8(c->r[3]+0x0000001Fu); // 800D8474
  c->r[5]=c->r[4]+c->r[0]; // 800D8478
  c->r[4]=c->r[4]+c->r[7]; // 800D847C
  c->r[0]=c->r[5]+0x00000028u; // 800D8480
  c->r[7]=c->r[4]+0xFFFFFFD8u; // 800D8484
  c->r[8]=c->r[0]-c->r[6]; // 800D8488
L_800D848C:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D848C
  c->r[5]=0u+0x802F0000u; // 800D8490
  c->r[6]=R8(c->r[3]+0x0000001Cu); // 800D8494
  c->r[4]=rotl(c->r[7],7)&0x0000FF80u; // 800D8498
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D849C
  c->r[0]=c->r[0]|0x04000000u; // 800D84A0
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D84A4
  c->r[3]=rotl(c->r[7],23)&0x007FFFFFu; // 800D84A8
  c->r[6]=c->r[6]|c->r[4]; // 800D84AC
  c->r[5]=c->r[5]+0xFFFFA7A8u; // 800D84B0
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D84B4
  c->r[0]=rotl(c->r[8],1)&0xFFFFFFFEu; // 800D84B8
  c->r[4]=c->r[3]|c->r[0]; // 800D84BC
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D84C0
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D84C4
  W16(c->r[5]+0x0000000Au,c->r[6]); // 800D84C8
  c->r[0]=c->r[0]|0x08000000u; // 800D84CC
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D84D0
  W16(c->r[5]+0x00000008u,c->r[4]); // 800D84D4
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D84D8
  return; // 800D84DC
}

// setVerticalRegs
void f_800D84E0(Ctx* __restrict c) {
  trace_call(0x800D84E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D84E0
  c->r[11]=0u+0x802F0000u; // 800D84E4
  c->r[11]=c->r[11]+0xFFFFA820u; // 800D84E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D84EC
  c->r[12]=R32(c->r[1]+0x00000018u); // 800D84F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D84F4
  c->r[11]=R32(c->r[11]+0x00000024u); // 800D84F8
  c->r[0]=c->r[11]+0xFFFFFFFEu; // 800D84FC
  cmpu(c,0,c->r[0],0x00000001u); // 800D8500
  if (crb(c,1)) { goto L_800D8514; } // 800D8504
  c->r[11]=0u+0x00000001u; // 800D8508
  c->r[30]=0u+0x00000002u; // 800D850C
  goto L_800D851C; // 800D8510
L_800D8514:;
  c->r[11]=0u+0x00000002u; // 800D8514
  c->r[30]=0u+0x00000001u; // 800D8518
L_800D851C:;
  c->r[31]=rotl(c->r[3],1)&0x00000001u; // 800D851C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800D8520
  c->r[0]=c->r[0]^c->r[31]; // 800D8524
  c->r[0]=c->r[0]-c->r[31]; cr0(c,c->r[0]); // 800D8528
  if (!crb(c,2)) { goto L_800D8568; } // 800D852C
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 800D8530
  c->r[0]=c->r[0]-c->r[4]; // 800D8534
  c->r[0]=c->r[0]-c->r[3]; // 800D8538
  c->r[31]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 800D853C
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[3]); // 800D8540
  c->r[6]=c->r[9]+c->r[31]; // 800D8544
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 800D8548
  c->r[0]=c->r[7]+c->r[3]; // 800D854C
  c->r[7]=c->r[10]+c->r[31]; // 800D8550
  c->r[3]=c->r[8]+c->r[3]; // 800D8554
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D8558
  c->r[7]=rotl(c->r[7],0)&0x0000FFFFu; // 800D855C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800D8560
  goto L_800D859C; // 800D8564
L_800D8568:;
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 800D8568
  c->r[0]=c->r[0]-c->r[4]; // 800D856C
  c->r[0]=c->r[0]-c->r[3]; // 800D8570
  c->r[31]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 800D8574
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[3]); // 800D8578
  c->r[6]=c->r[10]+c->r[31]; // 800D857C
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 800D8580
  c->r[0]=c->r[8]+c->r[3]; // 800D8584
  c->r[3]=c->r[7]+c->r[3]; // 800D8588
  c->r[7]=c->r[9]+c->r[31]; // 800D858C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D8590
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800D8594
  c->r[7]=rotl(c->r[7],0)&0x0000FFFFu; // 800D8598
L_800D859C:;
  c->r[4]=divw((int32_t)c->r[4],(int32_t)c->r[11]); // 800D859C
  cmps(c,0,(int32_t)c->r[12],0); // 800D85A0
  c->r[11]=rotl(c->r[4],0)&0x0000FFFFu; // 800D85A4
  if (crb(c,2)) { goto L_800D85D8; } // 800D85A8
  c->r[4]=rotl(c->r[11],1)&0x0001FFFEu; // 800D85AC
  c->r[6]=c->r[6]+0x00000002u; // 800D85B0
  c->r[8]=c->r[4]+0xFFFFFFFEu; // 800D85B4
  c->r[11]=0u+0x00000000u; // 800D85B8
  c->r[4]=c->r[7]+0x00000002u; // 800D85BC
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 800D85C0
  c->r[0]=c->r[0]+c->r[8]; // 800D85C4
  c->r[3]=c->r[3]+c->r[8]; // 800D85C8
  c->r[7]=rotl(c->r[4],0)&0x0000FFFFu; // 800D85CC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D85D0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800D85D4
L_800D85D8:;
  c->r[8]=R32(c->r[13]+0xFFFFA5F8u); // 800D85D8
  c->r[4]=0u+0x80000000u; // 800D85DC
  c->r[9]=R32(c->r[13]+0xFFFFA5FCu); // 800D85E0
  c->r[10]=0u+0x802F0000u; // 800D85E4
  W32(c->r[13]+0xFFFFA5FCu,c->r[9]); // 800D85E8
  c->r[4]=c->r[8]|c->r[4]; // 800D85EC
  c->r[8]=c->r[10]+0xFFFFA7A8u; // 800D85F0
  c->r[9]=rotl(c->r[11],4)&0x000FFFF0u; // 800D85F4
  W32(c->r[13]+0xFFFFA5F8u,c->r[4]); // 800D85F8
  c->r[9]=c->r[5]|c->r[9]; // 800D85FC
  c->r[4]=R32(c->r[13]+0xFFFFA5F8u); // 800D8600
  c->r[5]=R32(c->r[13]+0xFFFFA5FCu); // 800D8604
  W32(c->r[13]+0xFFFFA5FCu,c->r[5]); // 800D8608
  c->r[4]=c->r[4]|0x01000000u; // 800D860C
  W32(c->r[13]+0xFFFFA5F8u,c->r[4]); // 800D8610
  c->r[4]=R32(c->r[13]+0xFFFFA5F8u); // 800D8614
  c->r[5]=R32(c->r[13]+0xFFFFA5FCu); // 800D8618
  W32(c->r[13]+0xFFFFA5FCu,c->r[5]); // 800D861C
  c->r[4]=c->r[4]|0x02000000u; // 800D8620
  W32(c->r[13]+0xFFFFA5F8u,c->r[4]); // 800D8624
  c->r[4]=R32(c->r[13]+0xFFFFA5F8u); // 800D8628
  c->r[5]=R32(c->r[13]+0xFFFFA5FCu); // 800D862C
  W32(c->r[13]+0xFFFFA5FCu,c->r[5]); // 800D8630
  c->r[4]=c->r[4]|0x00400000u; // 800D8634
  W32(c->r[13]+0xFFFFA5F8u,c->r[4]); // 800D8638
  c->r[4]=R32(c->r[13]+0xFFFFA5F8u); // 800D863C
  c->r[5]=R32(c->r[13]+0xFFFFA5FCu); // 800D8640
  W16(c->r[10]+0xFFFFA7A8u,c->r[9]); // 800D8644
  c->r[4]=c->r[4]|0x00800000u; // 800D8648
  W32(c->r[13]+0xFFFFA5FCu,c->r[5]); // 800D864C
  W16(c->r[8]+0x0000000Eu,c->r[0]); // 800D8650
  W16(c->r[8]+0x0000000Cu,c->r[6]); // 800D8654
  W16(c->r[8]+0x00000012u,c->r[3]); // 800D8658
  W16(c->r[8]+0x00000010u,c->r[7]); // 800D865C
  W32(c->r[13]+0xFFFFA5F8u,c->r[4]); // 800D8660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8664
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8668
  c->r[1]=c->r[1]+0x00000010u; // 800D866C
  return; // 800D8670
}

// VIConfigure
void f_800D8680(Ctx* __restrict c) {
  trace_call(0x800D8680u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8680
  c->r[0]=c->lr; // 800D8684
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D8688
  c->r[11]=c->r[1]+0x00000030u; // 800D868C
  c->lr=0x800D8694u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D8690
  c->r[31]=0u+0x802B0000u; // 800D8694
  c->r[30]=c->r[3]|c->r[3]; // 800D8698
  c->r[31]=c->r[31]+0xFFFFE318u; // 800D869C
  c->lr=0x800D86A4u; f_800CBAA0(c); // 800D86A0
  c->r[4]=0u+0x802F0000u; // 800D86A4
  c->r[5]=R32(c->r[30]+0x00000000u); // 800D86A8
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D86AC
  c->r[29]=c->r[3]|c->r[3]; // 800D86B0
  c->r[0]=R32(c->r[4]+0x00000024u); // 800D86B4
  c->r[3]=rotl(c->r[5],0)&0x00000003u; // 800D86B8
  cmpu(c,0,c->r[0],c->r[3]); // 800D86BC
  if (crb(c,2)) { goto L_800D86D0; } // 800D86C0
  c->r[0]=0u+0x00000001u; // 800D86C4
  W32(c->r[13]+0xFFFFA5F0u,c->r[0]); // 800D86C8
  W32(c->r[4]+0x00000024u,c->r[3]); // 800D86CC
L_800D86D0:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D86D0
  c->r[3]=0u+0x80000000u; // 800D86D4
  c->r[27]=R32(c->r[3]+0x000000CCu); // 800D86D8
  c->r[28]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D86DC
  cmpu(c,0,c->r[28],0x00000004u); // 800D86E0
  if (!crb(c,2)) { goto L_800D8750; } // 800D86E4
  c->r[0]=R32(c->r[13]+0xFFFFA624u); // 800D86E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D86EC
  if (!crb(c,2)) { goto L_800D8750; } // 800D86F0
  c->r[0]=0u+0x00000001u; // 800D86F4
  W32(c->r[13]+0xFFFFA624u,c->r[0]); // 800D86F8
  c->r[3]=c->r[31]+0x000003BCu; // 800D86FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8700
  c->lr=0x800D8708u; f_800C8450(c); // 800D8704
  c->r[3]=c->r[31]+0x000003E8u; // 800D8708
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D870C
  c->lr=0x800D8714u; f_800C8450(c); // 800D8710
  c->r[3]=c->r[31]+0x00000414u; // 800D8714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8718
  c->lr=0x800D8720u; f_800C8450(c); // 800D871C
  c->r[3]=c->r[31]+0x00000440u; // 800D8720
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8724
  c->lr=0x800D872Cu; f_800C8450(c); // 800D8728
  c->r[3]=c->r[31]+0x0000046Cu; // 800D872C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8730
  c->lr=0x800D8738u; f_800C8450(c); // 800D8734
  c->r[3]=c->r[31]+0x00000498u; // 800D8738
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D873C
  c->lr=0x800D8744u; f_800C8450(c); // 800D8740
  c->r[3]=c->r[31]+0x000003BCu; // 800D8744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8748
  c->lr=0x800D8750u; f_800C8450(c); // 800D874C
L_800D8750:;
  cmpu(c,0,c->r[27],0x00000001u); // 800D8750
  if (crb(c,2)) { goto L_800D8770; } // 800D8754
  cmpu(c,0,c->r[27],0x00000005u); // 800D8758
  if (crb(c,2)) { goto L_800D8770; } // 800D875C
  cmpu(c,0,c->r[28],0x00000001u); // 800D8760
  if (crb(c,2)) { goto L_800D8790; } // 800D8764
  cmpu(c,0,c->r[28],0x00000005u); // 800D8768
  if (crb(c,2)) { goto L_800D8790; } // 800D876C
L_800D8770:;
  cmpu(c,0,c->r[27],0x00000001u); // 800D8770
  if (crb(c,2)) { goto L_800D8780; } // 800D8774
  cmpu(c,0,c->r[27],0x00000005u); // 800D8778
  if (!crb(c,2)) { goto L_800D87AC; } // 800D877C
L_800D8780:;
  cmpu(c,0,c->r[28],0x00000001u); // 800D8780
  if (crb(c,2)) { goto L_800D87AC; } // 800D8784
  cmpu(c,0,c->r[28],0x00000005u); // 800D8788
  if (crb(c,2)) { goto L_800D87AC; } // 800D878C
L_800D8790:;
  c->r[6]=c->r[27]|c->r[27]; // 800D8790
  c->r[7]=c->r[28]|c->r[28]; // 800D8794
  c->r[5]=c->r[31]+0x000004C4u; // 800D8798
  c->r[3]=c->r[13]+0xFFFF8FA0u; // 800D879C
  c->r[4]=0u+0x00000A5Bu; // 800D87A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D87A4
  c->lr=0x800D87ACu; f_800C84E0(c); // 800D87A8
L_800D87AC:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D87AC
  if (crb(c,2)) { goto L_800D87BC; } // 800D87B0
  cmpu(c,0,c->r[28],0x00000002u); // 800D87B4
  if (!crb(c,2)) { goto L_800D87CC; } // 800D87B8
L_800D87BC:;
  c->r[3]=0u+0x802F0000u; // 800D87BC
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D87C0
  W32(c->r[3]+0x00000028u,c->r[27]); // 800D87C4
  goto L_800D87D8; // 800D87C8
L_800D87CC:;
  c->r[3]=0u+0x802F0000u; // 800D87CC
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D87D0
  W32(c->r[3]+0x00000028u,c->r[28]); // 800D87D4
L_800D87D8:;
  c->r[4]=0u+0x802F0000u; // 800D87D8
  c->r[0]=R16(c->r[30]+0x0000000Au); // 800D87DC
  c->r[3]=c->r[4]+0xFFFFA820u; // 800D87E0
  W16(c->r[4]+0xFFFFA820u,c->r[0]); // 800D87E4
  c->r[0]=R32(c->r[3]+0x00000024u); // 800D87E8
  cmpu(c,0,c->r[0],0x00000001u); // 800D87EC
  if (!crb(c,2)) { goto L_800D8800; } // 800D87F0
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 800D87F4
  c->r[8]=rotl(c->r[0],1)&0x0000FFFEu; // 800D87F8
  goto L_800D8804; // 800D87FC
L_800D8800:;
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 800D8800
L_800D8804:;
  c->r[7]=0u+0x802F0000u; // 800D8804
  c->r[6]=R16(c->r[30]+0x0000000Eu); // 800D8808
  c->r[7]=c->r[7]+0xFFFFA820u; // 800D880C
  c->r[4]=R16(c->r[30]+0x00000004u); // 800D8810
  c->r[9]=R32(c->r[7]+0x00000024u); // 800D8814
  c->r[0]=0u+0x00000000u; // 800D8818
  c->r[5]=R16(c->r[30]+0x00000008u); // 800D881C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800D8820
  cmpu(c,0,c->r[9],0x00000002u); // 800D8824
  W16(c->r[7]+0x00000002u,c->r[8]); // 800D8828
  W16(c->r[7]+0x00000004u,c->r[6]); // 800D882C
  W16(c->r[7]+0x00000012u,c->r[4]); // 800D8830
  W16(c->r[7]+0x00000014u,c->r[5]); // 800D8834
  W32(c->r[7]+0x00000020u,c->r[3]); // 800D8838
  W16(c->r[7]+0x0000001Au,c->r[4]); // 800D883C
  W16(c->r[7]+0x0000001Cu,c->r[5]); // 800D8840
  W16(c->r[7]+0x00000016u,c->r[0]); // 800D8844
  W16(c->r[7]+0x00000018u,c->r[0]); // 800D8848
  if (!crb(c,2)) { goto L_800D8854; } // 800D884C
  goto L_800D886C; // 800D8850
L_800D8854:;
  cmpu(c,0,c->r[9],0x00000003u); // 800D8854
  if (!crb(c,2)) { goto L_800D8860; } // 800D8858
  goto L_800D886C; // 800D885C
L_800D8860:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D8860
  if (!crb(c,2)) { goto L_800D886C; } // 800D8864
  c->r[5]=rotl(c->r[5],1)&0x0000FFFEu; // 800D8868
L_800D886C:;
  c->r[30]=0u+0x802F0000u; // 800D886C
  c->r[31]=c->r[30]+0xFFFFA820u; // 800D8870
  c->r[4]=R32(c->r[31]+0x00000024u); // 800D8874
  c->r[0]=R32(c->r[31]+0x00000028u); // 800D8878
  c->r[3]=c->r[4]+0xFFFFFFFDu; // 800D887C
  W16(c->r[31]+0x00000006u,c->r[5]); // 800D8880
  c->r[3]=cntlz(c->r[3]); // 800D8884
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8888
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 800D888C
  W32(c->r[31]+0x00000044u,c->r[3]); // 800D8890
  c->r[3]=c->r[0]+c->r[4]; // 800D8894
  c->lr=0x800D889Cu; f_800D7880(c); // 800D8898
  c->r[4]=R16(c->r[30]+0xFFFFA820u); // 800D889C
  c->r[30]=c->r[3]|c->r[3]; // 800D88A0
  c->r[5]=R16(c->r[31]+0x00000004u); // 800D88A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA5ECu); // 800D88A8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800D88AC
  W32(c->r[31]+0x00000054u,c->r[3]); // 800D88B0
  c->r[8]=addc(c,~c->r[5],0x000002D0u,1); // 800D88B4
  c->r[4]=c->r[4]+c->r[0]; // 800D88B8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 800D88BC
  c->r[6]=R16(c->r[3]+0x00000002u); // 800D88C0
  if (!crb(c,1)) { goto L_800D88CC; } // 800D88C4
  goto L_800D88D4; // 800D88C8
L_800D88CC:;
  c->r[0]=sraw(c,c->r[4],31); // 800D88CC
  c->r[8]=c->r[4]&~c->r[0]; // 800D88D0
L_800D88D4:;
  c->r[5]=0u+0x802F0000u; // 800D88D4
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA5EEu); // 800D88D8
  c->r[5]=c->r[5]+0xFFFFA820u; // 800D88DC
  c->r[7]=R16(c->r[5]+0x00000002u); // 800D88E0
  c->r[4]=R32(c->r[5]+0x00000020u); // 800D88E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D88E8
  c->r[12]=rotl(c->r[7],0)&0x00000001u; // 800D88EC
  c->r[7]=c->r[0]+c->r[10]; // 800D88F0
  W16(c->r[5]+0x00000008u,c->r[8]); // 800D88F4
  c->r[0]=cntlz(c->r[4]); // 800D88F8
  c->r[9]=c->r[12]|c->r[12]; // 800D88FC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D8900
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[12]); // 800D8904
  c->r[11]=c->r[4]+0x00000001u; // 800D8908
  if (!crb(c,1)) { goto L_800D8914; } // 800D890C
  c->r[9]=c->r[7]|c->r[7]; // 800D8910
L_800D8914:;
  c->r[4]=0u+0x802F0000u; // 800D8914
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 800D8918
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D891C
  c->r[7]=R16(c->r[4]+0x00000002u); // 800D8920
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800D8924
  c->r[0]=R16(c->r[4]+0x00000006u); // 800D8928
  c->r[28]=c->r[5]-c->r[12]; // 800D892C
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D8930
  W16(c->r[4]+0x0000000Au,c->r[9]); // 800D8934
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800D8938
  c->r[6]=R16(c->r[4]+0x0000001Cu); // 800D893C
  c->r[5]=c->r[7]+c->r[5]; // 800D8940
  c->r[7]=c->r[7]+c->r[10]; // 800D8944
  c->r[5]=c->r[10]+c->r[5]; // 800D8948
  c->r[8]=R16(c->r[4]+0x00000018u); // 800D894C
  c->r[28]=c->r[5]-c->r[28]; // 800D8950
  c->r[31]=c->r[7]-c->r[12]; // 800D8954
  c->r[5]=0u-c->r[28]; // 800D8958
  c->r[7]=c->r[5]&~c->r[28]; // 800D895C
  c->r[10]=sraw(c,c->r[7],31); // 800D8960
  c->r[5]=sraw(c,c->r[31],31); // 800D8964
  c->r[9]=sraw(c,c->r[31],31); // 800D8968
  c->r[12]=c->r[28]&c->r[10]; // 800D896C
  c->r[10]=c->r[31]&c->r[5]; // 800D8970
  c->r[7]=sraw(c,c->r[7],31); // 800D8974
  c->r[5]=sraw(c,c->r[31],31); // 800D8978
  c->r[9]=c->r[31]&c->r[9]; // 800D897C
  c->r[5]=c->r[31]&c->r[5]; // 800D8980
  c->r[31]=c->r[28]&c->r[7]; // 800D8984
  c->r[5]=divw((int32_t)c->r[5],(int32_t)c->r[11]); // 800D8988
  c->r[0]=c->r[0]+c->r[10]; // 800D898C
  c->r[0]=c->r[0]-c->r[12]; // 800D8990
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 800D8994
  c->r[0]=c->r[6]+c->r[5]; // 800D8998
  c->r[7]=divw((int32_t)c->r[9],(int32_t)c->r[11]); // 800D899C
  c->r[5]=divw((int32_t)c->r[31],(int32_t)c->r[11]); // 800D89A0
  c->r[6]=c->r[8]-c->r[7]; // 800D89A4
  W16(c->r[4]+0x0000000Eu,c->r[6]); // 800D89A8
  c->r[0]=c->r[0]-c->r[5]; // 800D89AC
  W16(c->r[4]+0x00000010u,c->r[0]); // 800D89B0
  c->r[5]=R16(c->r[3]+0x00000018u); // 800D89B4
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 800D89B8
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 800D89BC
  c->r[0]=c->r[0]^c->r[4]; // 800D89C0
  c->r[7]=rotl(c->r[5],31)&0x0000FFFFu; // 800D89C4
  c->r[0]=c->r[0]-c->r[4]; // 800D89C8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800D89CC
  if (crb(c,2)) { goto L_800D89DC; } // 800D89D0
  c->r[6]=R16(c->r[3]+0x0000001Au); // 800D89D4
  goto L_800D89E0; // 800D89D8
L_800D89DC:;
  c->r[6]=0u+0x00000000u; // 800D89DC
L_800D89E0:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D89E0
  c->r[3]=0u+0x802F0000u; // 800D89E4
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D89E8
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D89EC
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D89F0
  c->r[5]=c->r[0]|0x00000040u; // 800D89F4
  c->r[9]=R32(c->r[3]+0x00000024u); // 800D89F8
  c->r[4]=c->r[7]+0x00000001u; // 800D89FC
  W32(c->r[13]+0xFFFFA5F8u,c->r[5]); // 800D8A00
  c->r[7]=0u+0x802F0000u; // 800D8A04
  c->r[0]=c->r[9]+0xFFFFFFFEu; // 800D8A08
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 800D8A0C
  c->r[8]=c->r[6]+0x00000001u; // 800D8A10
  c->r[7]=c->r[7]+0xFFFFA7A8u; // 800D8A14
  c->r[6]=c->r[5]|0x00001000u; // 800D8A18
  c->r[4]=R32(c->r[13]+0xFFFFA5F8u); // 800D8A1C
  c->r[5]=R32(c->r[13]+0xFFFFA5FCu); // 800D8A20
  cmpu(c,0,c->r[0],0x00000001u); // 800D8A24
  c->r[0]=c->r[4]|0x00000080u; // 800D8A28
  W32(c->r[13]+0xFFFFA5FCu,c->r[5]); // 800D8A2C
  c->r[4]=R16(c->r[7]+0x00000002u); // 800D8A30
  W16(c->r[7]+0x00000032u,c->r[8]); // 800D8A34
  c->r[5]=R16(c->r[7]+0x0000006Cu); // 800D8A38
  W16(c->r[7]+0x00000030u,c->r[6]); // 800D8A3C
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8A40
  if (crb(c,1)) { goto L_800D8A70; } // 800D8A44
  c->r[0]=R32(c->r[3]+0x00000028u); // 800D8A48
  c->r[3]=rotl(c->r[4],0)&0xFFFFFFFBu; // 800D8A4C
  c->r[4]=c->r[3]|0x00000004u; // 800D8A50
  cmpu(c,0,c->r[0],0x00000008u); // 800D8A54
  if (!crb(c,2)) { goto L_800D8A64; } // 800D8A58
  c->r[10]=rotl(c->r[5],0)&0xFFFFFFFEu; // 800D8A5C
  goto L_800D8A7C; // 800D8A60
L_800D8A64:;
  c->r[0]=rotl(c->r[5],0)&0xFFFFFFFEu; // 800D8A64
  c->r[10]=c->r[0]|0x00000001u; // 800D8A68
  goto L_800D8A7C; // 800D8A6C
L_800D8A70:;
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFBu; // 800D8A70
  c->r[10]=rotl(c->r[5],0)&0xFFFFFFFEu; // 800D8A74
  c->r[4]=(rotl(c->r[9],2)&0x00000004u)|(c->r[4]&~0x00000004u); // 800D8A78
L_800D8A7C:;
  c->r[3]=0u+0x802F0000u; // 800D8A7C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF7u; // 800D8A80
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D8A84
  c->r[5]=R32(c->r[3]+0x00000028u); // 800D8A88
  c->r[8]=R32(c->r[3]+0x00000044u); // 800D8A8C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D8A90
  c->r[3]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800D8A94
  c->r[3]=c->r[4]|c->r[3]; // 800D8A98
  cmpu(c,0,c->r[0],0x00000002u); // 800D8A9C
  c->r[6]=rotl(c->r[3],0)&0xFFFFFCFFu; // 800D8AA0
  if (crb(c,1)) { goto L_800D8AB0; } // 800D8AA4
  c->r[0]=rotl(c->r[5],8)&0xFFFFFF00u; // 800D8AA8
  c->r[6]=c->r[6]|c->r[0]; // 800D8AAC
L_800D8AB0:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D8AB0
  c->r[3]=0u+0x802F0000u; // 800D8AB4
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D8AB8
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D8ABC
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D8AC0
  c->r[0]=c->r[0]|0x40000000u; // 800D8AC4
  c->r[4]=0u+0x802F0000u; // 800D8AC8
  c->r[7]=R16(c->r[3]+0x0000001Au); // 800D8ACC
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8AD0
  c->r[4]=c->r[4]+0xFFFFA7A8u; // 800D8AD4
  c->r[5]=R16(c->r[3]+0x00000004u); // 800D8AD8
  cmps(c,0,(int32_t)c->r[8],0); // 800D8ADC
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8AE0
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8AE4
  W16(c->r[4]+0x00000002u,c->r[6]); // 800D8AE8
  c->r[0]=c->r[0]|0x00000200u; // 800D8AEC
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8AF0
  W16(c->r[4]+0x0000006Cu,c->r[10]); // 800D8AF4
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8AF8
  if (crb(c,2)) { goto L_800D8B04; } // 800D8AFC
  c->r[7]=rotl(c->r[7],1)&0x0001FFFEu; // 800D8B00
L_800D8B04:;
  c->r[7]=rotl(c->r[7],0)&0x0000FFFFu; // 800D8B04
  cmpu(c,0,c->r[7],c->r[5]); // 800D8B08
  if (!crb(c,0)) { goto L_800D8B60; } // 800D8B0C
  c->r[0]=rotl(c->r[7],8)&0x00FFFF00u; // 800D8B10
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8B14
  c->r[4]=c->r[5]+c->r[0]; // 800D8B18
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8B1C
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 800D8B20
  c->r[6]=divwu(c->r[6],c->r[5]); // 800D8B24
  c->r[0]=c->r[0]|0x04000000u; // 800D8B28
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8B2C
  c->r[4]=0u+0x802F0000u; // 800D8B30
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8B34
  c->r[4]=c->r[4]+0xFFFFA7A8u; // 800D8B38
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8B3C
  c->r[6]=c->r[6]|0x00001000u; // 800D8B40
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8B44
  W16(c->r[4]+0x0000004Au,c->r[6]); // 800D8B48
  c->r[0]=c->r[0]|0x00000080u; // 800D8B4C
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8B50
  W16(c->r[4]+0x00000070u,c->r[7]); // 800D8B54
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8B58
  goto L_800D8B84; // 800D8B5C
L_800D8B60:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8B60
  c->r[4]=0u+0x802F0000u; // 800D8B64
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8B68
  c->r[4]=c->r[4]+0xFFFFA7A8u; // 800D8B6C
  c->r[6]=0u+0x00000100u; // 800D8B70
  W16(c->r[4]+0x0000004Au,c->r[6]); // 800D8B74
  c->r[0]=c->r[0]|0x04000000u; // 800D8B78
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8B7C
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8B80
L_800D8B84:;
  c->r[31]=0u+0x802F0000u; // 800D8B84
  c->r[3]=c->r[30]|c->r[30]; // 800D8B88
  c->r[31]=c->r[31]+0xFFFFA820u; // 800D8B8C
  c->r[4]=R16(c->r[31]+0x00000008u); // 800D8B90
  c->lr=0x800D8B98u; f_800D8400(c); // 800D8B94
  c->r[4]=R16(c->r[30]+0x00000010u); // 800D8B98
  c->r[3]=0u+0x802F0000u; // 800D8B9C
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D8BA0
  c->r[3]=c->r[3]+0xFFFFA7A8u; // 800D8BA4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800D8BA8
  c->r[6]=R8(c->r[30]+0x0000000Cu); // 800D8BAC
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D8BB0
  c->r[0]=c->r[0]|0x00100000u; // 800D8BB4
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D8BB8
  c->r[5]=c->r[6]|c->r[5]; // 800D8BBC
  c->r[6]=R32(c->r[31]+0x00000020u); // 800D8BC0
  c->r[4]=R16(c->r[31]+0x00000012u); // 800D8BC4
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D8BC8
  cmps(c,0,(int32_t)c->r[6],0); // 800D8BCC
  c->r[0]=c->r[4]+0x0000000Fu; // 800D8BD0
  c->r[9]=R16(c->r[31]+0x00000016u); // 800D8BD4
  W16(c->r[3]+0x00000016u,c->r[5]); // 800D8BD8
  c->r[0]=sraw(c,c->r[0],4); // 800D8BDC
  c->r[5]=R32(c->r[13]+0xFFFFA5F8u); // 800D8BE0
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 800D8BE4
  c->r[6]=R16(c->r[30]+0x00000014u); // 800D8BE8
  c->r[7]=R8(c->r[30]+0x0000000Eu); // 800D8BEC
  c->r[5]=c->r[5]|0x00200000u; // 800D8BF0
  c->r[6]=rotl(c->r[6],5)&0xFFFFFFE0u; // 800D8BF4
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8BF8
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8BFC
  c->r[6]=c->r[7]|c->r[6]; // 800D8C00
  c->r[0]=R16(c->r[31]+0x0000001Au); // 800D8C04
  W32(c->r[13]+0xFFFFA5F8u,c->r[5]); // 800D8C08
  W16(c->r[3]+0x00000014u,c->r[6]); // 800D8C0C
  c->r[5]=R32(c->r[13]+0xFFFFA5F8u); // 800D8C10
  c->r[6]=R16(c->r[30]+0x00000012u); // 800D8C14
  c->r[8]=R8(c->r[30]+0x0000000Du); // 800D8C18
  c->r[5]=c->r[5]|0x00040000u; // 800D8C1C
  c->r[7]=rotl(c->r[6],5)&0xFFFFFFE0u; // 800D8C20
  c->r[6]=R32(c->r[13]+0xFFFFA5FCu); // 800D8C24
  W32(c->r[13]+0xFFFFA5FCu,c->r[6]); // 800D8C28
  c->r[6]=c->r[8]|c->r[7]; // 800D8C2C
  W32(c->r[13]+0xFFFFA5F8u,c->r[5]); // 800D8C30
  W16(c->r[3]+0x0000001Au,c->r[6]); // 800D8C34
  c->r[5]=R32(c->r[13]+0xFFFFA5F8u); // 800D8C38
  c->r[6]=R16(c->r[30]+0x00000016u); // 800D8C3C
  c->r[8]=R8(c->r[30]+0x0000000Fu); // 800D8C40
  c->r[5]=c->r[5]|0x00080000u; // 800D8C44
  c->r[7]=rotl(c->r[6],5)&0xFFFFFFE0u; // 800D8C48
  c->r[6]=R32(c->r[13]+0xFFFFA5FCu); // 800D8C4C
  W32(c->r[13]+0xFFFFA5FCu,c->r[6]); // 800D8C50
  c->r[6]=c->r[8]|c->r[7]; // 800D8C54
  W16(c->r[3]+0x00000018u,c->r[6]); // 800D8C58
  W32(c->r[13]+0xFFFFA5F8u,c->r[5]); // 800D8C5C
  W8(c->r[31]+0x0000002Cu,c->r[4]); // 800D8C60
  if (!crb(c,2)) { goto L_800D8C70; } // 800D8C64
  c->r[10]=rotl(c->r[4],0)&0x000000FFu; // 800D8C68
  goto L_800D8C74; // 800D8C6C
L_800D8C70:;
  c->r[10]=rotl(c->r[4],1)&0x000000FEu; // 800D8C70
L_800D8C74:;
  c->r[3]=rotl(c->r[9],28)&0xF0000000u; // 800D8C74
  c->r[6]=rotl(c->r[9],1)&0x00000001u; // 800D8C78
  c->r[3]=c->r[3]-c->r[6]; // 800D8C7C
  c->r[4]=R32(c->r[13]+0xFFFFA610u); // 800D8C80
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFFFu; // 800D8C84
  c->r[5]=R32(c->r[13]+0xFFFFA5F8u); // 800D8C88
  c->r[9]=c->r[3]+c->r[6]; // 800D8C8C
  c->r[6]=R32(c->r[13]+0xFFFFA5FCu); // 800D8C90
  c->r[7]=rotl(c->r[9],0)&0x000000FFu; // 800D8C94
  c->r[3]=0u+0x802F0000u; // 800D8C98
  c->r[8]=c->r[0]+c->r[7]; // 800D8C9C
  cmps(c,0,(int32_t)c->r[4],0); // 800D8CA0
  c->r[0]=c->r[8]+0x0000000Fu; // 800D8CA4
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D8CA8
  c->r[7]=0u+0x802F0000u; // 800D8CAC
  W8(c->r[3]+0x0000002Du,c->r[10]); // 800D8CB0
  c->r[8]=sraw(c,c->r[0],4); // 800D8CB4
  c->r[0]=c->r[6]|0x08000000u; // 800D8CB8
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8CBC
  c->r[6]=addc(c,c->r[8],0,c->xer_ca); // 800D8CC0
  c->r[0]=c->r[10]|c->r[10]; // 800D8CC4
  c->r[7]=c->r[7]+0xFFFFA7A8u; // 800D8CC8
  c->r[0]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800D8CCC
  W8(c->r[3]+0x0000003Cu,c->r[9]); // 800D8CD0
  W8(c->r[3]+0x0000002Eu,c->r[6]); // 800D8CD4
  W16(c->r[7]+0x00000048u,c->r[0]); // 800D8CD8
  W32(c->r[13]+0xFFFFA5F8u,c->r[5]); // 800D8CDC
  if (crb(c,2)) { goto L_800D8CF8; } // 800D8CE0
  c->r[4]=c->r[3]+0x00000034u; // 800D8CE4
  c->r[5]=c->r[3]+0x00000038u; // 800D8CE8
  c->r[6]=c->r[3]+0x0000004Cu; // 800D8CEC
  c->r[7]=c->r[3]+0x00000050u; // 800D8CF0
  c->lr=0x800D8CF8u; f_800D8150(c); // 800D8CF4
L_800D8CF8:;
  c->r[4]=0u+0x802F0000u; // 800D8CF8
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D8CFC
  c->r[0]=R32(c->r[4]+0x00000040u); // 800D8D00
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D8D04
  c->r[3]=R16(c->r[4]+0x0000000Au); // 800D8D08
  c->r[4]=R16(c->r[4]+0x0000000Cu); // 800D8D0C
  c->r[5]=R8(c->r[30]+0x00000000u); // 800D8D10
  c->r[6]=R16(c->r[30]+0x00000002u); // 800D8D14
  c->r[7]=R16(c->r[30]+0x00000004u); // 800D8D18
  c->r[8]=R16(c->r[30]+0x00000006u); // 800D8D1C
  c->r[9]=R16(c->r[30]+0x00000008u); // 800D8D20
  c->r[10]=R16(c->r[30]+0x0000000Au); // 800D8D24
  c->lr=0x800D8D2Cu; f_800D84E0(c); // 800D8D28
  c->r[3]=c->r[29]|c->r[29]; // 800D8D2C
  c->lr=0x800D8D34u; f_800CBAE0(c); // 800D8D30
  c->r[11]=c->r[1]+0x00000030u; // 800D8D34
  c->lr=0x800D8D3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D8D38
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D8D3C
  c->lr=c->r[0]; // 800D8D40
  c->r[1]=c->r[1]+0x00000030u; // 800D8D44
  return; // 800D8D48
}

// VIConfigurePan
void f_800D8D50(Ctx* __restrict c) {
  trace_call(0x800D8D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D50
  c->r[0]=c->lr; // 800D8D54
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D8D58
  c->r[11]=c->r[1]+0x00000030u; // 800D8D5C
  c->lr=0x800D8D64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D8D60
  c->r[29]=c->r[3]|c->r[3]; // 800D8D64
  c->r[28]=c->r[4]|c->r[4]; // 800D8D68
  c->r[27]=c->r[5]|c->r[5]; // 800D8D6C
  c->r[26]=c->r[6]|c->r[6]; // 800D8D70
  c->lr=0x800D8D78u; f_800CBAA0(c); // 800D8D74
  c->r[4]=0u+0x802F0000u; // 800D8D78
  c->r[31]=c->r[3]|c->r[3]; // 800D8D7C
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D8D80
  c->r[0]=R32(c->r[4]+0x00000024u); // 800D8D84
  W16(c->r[4]+0x00000016u,c->r[29]); // 800D8D88
  cmpu(c,0,c->r[0],0x00000002u); // 800D8D8C
  W16(c->r[4]+0x00000018u,c->r[28]); // 800D8D90
  W16(c->r[4]+0x0000001Au,c->r[27]); // 800D8D94
  W16(c->r[4]+0x0000001Cu,c->r[26]); // 800D8D98
  if (!crb(c,2)) { goto L_800D8DA4; } // 800D8D9C
  goto L_800D8DC0; // 800D8DA0
L_800D8DA4:;
  cmpu(c,0,c->r[0],0x00000003u); // 800D8DA4
  if (!crb(c,2)) { goto L_800D8DB0; } // 800D8DA8
  goto L_800D8DC0; // 800D8DAC
L_800D8DB0:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 800D8DB0
  cmps(c,0,(int32_t)c->r[0],0); // 800D8DB4
  if (!crb(c,2)) { goto L_800D8DC0; } // 800D8DB8
  c->r[26]=rotl(c->r[26],1)&0x0000FFFEu; // 800D8DBC
L_800D8DC0:;
  c->r[4]=0u+0x802F0000u; // 800D8DC0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA5ECu); // 800D8DC4
  c->r[5]=c->r[4]+0xFFFFA820u; // 800D8DC8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFFA820u); // 800D8DCC
  c->r[0]=R16(c->r[5]+0x00000004u); // 800D8DD0
  W16(c->r[5]+0x00000006u,c->r[26]); // 800D8DD4
  c->r[3]=c->r[4]+c->r[3]; // 800D8DD8
  c->r[6]=addc(c,~c->r[0],0x000002D0u,1); // 800D8DDC
  c->r[30]=R32(c->r[5]+0x00000054u); // 800D8DE0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[6]); // 800D8DE4
  c->r[5]=R16(c->r[30]+0x00000002u); // 800D8DE8
  if (!crb(c,1)) { goto L_800D8DF4; } // 800D8DEC
  goto L_800D8DFC; // 800D8DF0
L_800D8DF4:;
  c->r[0]=sraw(c,c->r[3],31); // 800D8DF4
  c->r[6]=c->r[3]&~c->r[0]; // 800D8DF8
L_800D8DFC:;
  c->r[4]=0u+0x802F0000u; // 800D8DFC
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA5EEu); // 800D8E00
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D8E04
  c->r[7]=R16(c->r[4]+0x00000002u); // 800D8E08
  c->r[3]=R32(c->r[4]+0x00000020u); // 800D8E0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D8E10
  c->r[12]=rotl(c->r[7],0)&0x00000001u; // 800D8E14
  c->r[7]=c->r[0]+c->r[9]; // 800D8E18
  W16(c->r[4]+0x00000008u,c->r[6]); // 800D8E1C
  c->r[0]=cntlz(c->r[3]); // 800D8E20
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D8E24
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[12]); // 800D8E28
  c->r[0]=c->r[12]|c->r[12]; // 800D8E2C
  c->r[4]=c->r[3]+0x00000001u; // 800D8E30
  if (!crb(c,1)) { goto L_800D8E3C; } // 800D8E34
  c->r[0]=c->r[7]|c->r[7]; // 800D8E38
L_800D8E3C:;
  c->r[3]=0u+0x802F0000u; // 800D8E3C
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 800D8E40
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D8E44
  c->r[7]=R16(c->r[3]+0x00000002u); // 800D8E48
  c->r[6]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800D8E4C
  c->r[5]=R16(c->r[3]+0x00000006u); // 800D8E50
  c->r[27]=c->r[6]-c->r[12]; // 800D8E54
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D8E58
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800D8E5C
  c->r[11]=c->r[9]+c->r[6]; // 800D8E60
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 800D8E64
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 800D8E68
  c->r[9]=c->r[8]+c->r[9]; // 800D8E6C
  c->r[6]=c->r[6]+c->r[11]; // 800D8E70
  c->r[26]=c->r[11]-c->r[12]; // 800D8E74
  c->r[6]=c->r[6]-c->r[27]; // 800D8E78
  c->r[7]=c->r[7]+c->r[11]; // 800D8E7C
  c->r[8]=0u-c->r[6]; // 800D8E80
  c->r[12]=c->r[9]-c->r[12]; // 800D8E84
  c->r[10]=c->r[8]&~c->r[6]; // 800D8E88
  c->r[27]=c->r[7]-c->r[27]; // 800D8E8C
  c->r[28]=sraw(c,c->r[10],31); // 800D8E90
  c->r[8]=R32(c->r[3]+0x00000044u); // 800D8E94
  c->r[11]=sraw(c,c->r[26],31); // 800D8E98
  c->r[9]=0u-c->r[27]; // 800D8E9C
  c->r[10]=sraw(c,c->r[12],31); // 800D8EA0
  cmps(c,0,(int32_t)c->r[8],0); // 800D8EA4
  c->r[9]=c->r[9]&~c->r[27]; // 800D8EA8
  c->r[29]=c->r[26]&c->r[11]; // 800D8EAC
  c->r[11]=sraw(c,c->r[9],31); // 800D8EB0
  c->r[12]=c->r[12]&c->r[10]; // 800D8EB4
  c->r[9]=sraw(c,c->r[26],31); // 800D8EB8
  c->r[28]=c->r[6]&c->r[28]; // 800D8EBC
  c->r[9]=c->r[26]&c->r[9]; // 800D8EC0
  c->r[27]=c->r[27]&c->r[11]; // 800D8EC4
  c->r[9]=divw((int32_t)c->r[9],(int32_t)c->r[4]); // 800D8EC8
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800D8ECC
  c->r[0]=c->r[5]+c->r[29]; // 800D8ED0
  c->r[10]=R16(c->r[3]+0x0000001Cu); // 800D8ED4
  c->r[11]=R16(c->r[3]+0x00000018u); // 800D8ED8
  c->r[0]=c->r[0]-c->r[28]; // 800D8EDC
  c->r[6]=divw((int32_t)c->r[12],(int32_t)c->r[4]); // 800D8EE0
  c->r[7]=R16(c->r[3]+0x0000001Au); // 800D8EE4
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 800D8EE8
  c->r[5]=c->r[10]+c->r[9]; // 800D8EEC
  c->r[8]=R16(c->r[3]+0x00000004u); // 800D8EF0
  c->r[0]=c->r[7]|c->r[7]; // 800D8EF4
  c->r[4]=divw((int32_t)c->r[27],(int32_t)c->r[4]); // 800D8EF8
  c->r[6]=c->r[11]-c->r[6]; // 800D8EFC
  W16(c->r[3]+0x0000000Eu,c->r[6]); // 800D8F00
  c->r[4]=c->r[5]-c->r[4]; // 800D8F04
  W16(c->r[3]+0x00000010u,c->r[4]); // 800D8F08
  if (crb(c,2)) { goto L_800D8F14; } // 800D8F0C
  c->r[0]=rotl(c->r[7],1)&0x0001FFFEu; // 800D8F10
L_800D8F14:;
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800D8F14
  cmpu(c,0,c->r[6],c->r[8]); // 800D8F18
  if (!crb(c,0)) { goto L_800D8F70; } // 800D8F1C
  c->r[0]=rotl(c->r[6],8)&0x00FFFF00u; // 800D8F20
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8F24
  c->r[4]=c->r[8]+c->r[0]; // 800D8F28
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8F2C
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 800D8F30
  c->r[5]=divwu(c->r[5],c->r[8]); // 800D8F34
  c->r[0]=c->r[0]|0x04000000u; // 800D8F38
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8F3C
  c->r[4]=0u+0x802F0000u; // 800D8F40
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8F44
  c->r[4]=c->r[4]+0xFFFFA7A8u; // 800D8F48
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8F4C
  c->r[5]=c->r[5]|0x00001000u; // 800D8F50
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8F54
  W16(c->r[4]+0x0000004Au,c->r[5]); // 800D8F58
  c->r[0]=c->r[0]|0x00000080u; // 800D8F5C
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8F60
  W16(c->r[4]+0x00000070u,c->r[6]); // 800D8F64
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8F68
  goto L_800D8F94; // 800D8F6C
L_800D8F70:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F8u); // 800D8F70
  c->r[4]=0u+0x802F0000u; // 800D8F74
  c->r[0]=R32(c->r[13]+0xFFFFA5FCu); // 800D8F78
  c->r[4]=c->r[4]+0xFFFFA7A8u; // 800D8F7C
  c->r[5]=0u+0x00000100u; // 800D8F80
  W16(c->r[4]+0x0000004Au,c->r[5]); // 800D8F84
  c->r[0]=c->r[0]|0x04000000u; // 800D8F88
  W32(c->r[13]+0xFFFFA5FCu,c->r[0]); // 800D8F8C
  W32(c->r[13]+0xFFFFA5F8u,c->r[3]); // 800D8F90
L_800D8F94:;
  c->r[4]=0u+0x802F0000u; // 800D8F94
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D8F98
  c->r[3]=R16(c->r[4]+0x00000012u); // 800D8F9C
  c->r[5]=R32(c->r[4]+0x00000020u); // 800D8FA0
  c->r[0]=c->r[3]+0x0000000Fu; // 800D8FA4
  c->r[3]=R16(c->r[4]+0x00000016u); // 800D8FA8
  c->r[0]=sraw(c,c->r[0],4); // 800D8FAC
  cmps(c,0,(int32_t)c->r[5],0); // 800D8FB0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800D8FB4
  W8(c->r[4]+0x0000002Cu,c->r[0]); // 800D8FB8
  if (!crb(c,2)) { goto L_800D8FC8; } // 800D8FBC
  c->r[9]=rotl(c->r[0],0)&0x000000FFu; // 800D8FC0
  goto L_800D8FCC; // 800D8FC4
L_800D8FC8:;
  c->r[9]=rotl(c->r[0],1)&0x000000FEu; // 800D8FC8
L_800D8FCC:;
  c->r[0]=rotl(c->r[3],28)&0xF0000000u; // 800D8FCC
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800D8FD0
  c->r[3]=c->r[0]-c->r[4]; // 800D8FD4
  c->r[0]=R32(c->r[13]+0xFFFFA610u); // 800D8FD8
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFFFu; // 800D8FDC
  c->r[5]=R32(c->r[13]+0xFFFFA5F8u); // 800D8FE0
  c->r[8]=c->r[3]+c->r[4]; // 800D8FE4
  c->r[4]=R32(c->r[13]+0xFFFFA5FCu); // 800D8FE8
  c->r[6]=rotl(c->r[8],0)&0x000000FFu; // 800D8FEC
  c->r[3]=0u+0x802F0000u; // 800D8FF0
  c->r[7]=c->r[7]+c->r[6]; // 800D8FF4
  cmps(c,0,(int32_t)c->r[0],0); // 800D8FF8
  c->r[7]=c->r[7]+0x0000000Fu; // 800D8FFC
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D9000
  c->r[6]=0u+0x802F0000u; // 800D9004
  c->r[4]=c->r[4]|0x08000000u; // 800D9008
  c->r[7]=sraw(c,c->r[7],4); // 800D900C
  W32(c->r[13]+0xFFFFA5FCu,c->r[4]); // 800D9010
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 800D9014
  c->r[0]=c->r[9]|c->r[9]; // 800D9018
  c->r[6]=c->r[6]+0xFFFFA7A8u; // 800D901C
  W8(c->r[3]+0x0000002Du,c->r[9]); // 800D9020
  c->r[0]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800D9024
  W8(c->r[3]+0x0000003Cu,c->r[8]); // 800D9028
  W8(c->r[3]+0x0000002Eu,c->r[7]); // 800D902C
  W16(c->r[6]+0x00000048u,c->r[0]); // 800D9030
  W32(c->r[13]+0xFFFFA5F8u,c->r[5]); // 800D9034
  if (crb(c,2)) { goto L_800D9050; } // 800D9038
  c->r[4]=c->r[3]+0x00000034u; // 800D903C
  c->r[5]=c->r[3]+0x00000038u; // 800D9040
  c->r[6]=c->r[3]+0x0000004Cu; // 800D9044
  c->r[7]=c->r[3]+0x00000050u; // 800D9048
  c->lr=0x800D9050u; f_800D8150(c); // 800D904C
L_800D9050:;
  c->r[4]=0u+0x802F0000u; // 800D9050
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D9054
  c->r[0]=R32(c->r[4]+0x00000040u); // 800D9058
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D905C
  c->r[3]=R16(c->r[4]+0x0000000Au); // 800D9060
  c->r[4]=R16(c->r[4]+0x00000006u); // 800D9064
  c->r[5]=R8(c->r[30]+0x00000000u); // 800D9068
  c->r[6]=R16(c->r[30]+0x00000002u); // 800D906C
  c->r[7]=R16(c->r[30]+0x00000004u); // 800D9070
  c->r[8]=R16(c->r[30]+0x00000006u); // 800D9074
  c->r[9]=R16(c->r[30]+0x00000008u); // 800D9078
  c->r[10]=R16(c->r[30]+0x0000000Au); // 800D907C
  c->lr=0x800D9084u; f_800D84E0(c); // 800D9080
  c->r[3]=c->r[31]|c->r[31]; // 800D9084
  c->lr=0x800D908Cu; f_800CBAE0(c); // 800D9088
  c->r[11]=c->r[1]+0x00000030u; // 800D908C
  c->lr=0x800D9094u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9090
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D9094
  c->lr=c->r[0]; // 800D9098
  c->r[1]=c->r[1]+0x00000030u; // 800D909C
  return; // 800D90A0
}

// VIFlush
void f_800D90B0(Ctx* __restrict c) {
  trace_call(0x800D90B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D90B0
  c->r[0]=c->lr; // 800D90B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D90B8
  c->r[11]=c->r[1]+0x00000020u; // 800D90BC
  c->lr=0x800D90C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D90C0
  c->r[31]=0u+0x802F0000u; // 800D90C4
  c->r[31]=c->r[31]+0xFFFFA730u; // 800D90C8
  c->lr=0x800D90D0u; f_800CBAA0(c); // 800D90CC
  c->r[5]=R32(c->r[13]+0xFFFFA600u); // 800D90D0
  c->r[0]=0u+0x00000000u; // 800D90D4
  c->r[4]=R32(c->r[13]+0xFFFFA5F0u); // 800D90D8
  c->r[30]=c->r[3]|c->r[3]; // 800D90DC
  c->r[28]=c->r[31]+0x00000078u; // 800D90E0
  c->r[29]=c->r[31]+0x00000000u; // 800D90E4
  c->r[3]=c->r[5]|c->r[4]; // 800D90E8
  W32(c->r[13]+0xFFFFA600u,c->r[3]); // 800D90EC
  c->r[27]=0u+0xFFFFFFFFu; // 800D90F0
  W32(c->r[13]+0xFFFFA5F0u,c->r[0]); // 800D90F4
  c->r[4]=R32(c->r[13]+0xFFFFA608u); // 800D90F8
  c->r[5]=R32(c->r[13]+0xFFFFA60Cu); // 800D90FC
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D9100
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D9104
  c->r[0]=c->r[4]|c->r[0]; // 800D9108
  c->r[3]=c->r[5]|c->r[3]; // 800D910C
  W32(c->r[13]+0xFFFFA60Cu,c->r[3]); // 800D9110
  W32(c->r[13]+0xFFFFA608u,c->r[0]); // 800D9114
  goto L_800D917C; // 800D9118
L_800D911C:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D911C
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D9120
  c->r[0]=cntlz(c->r[0]); // 800D9124
  cmps(c,0,(int32_t)c->r[0],32); // 800D9128
  c->r[3]=c->r[3]&c->r[27]; // 800D912C
  if (!crb(c,0)) { goto L_800D9138; } // 800D9130
  goto L_800D9140; // 800D9134
L_800D9138:;
  c->r[3]=cntlz(c->r[3]); // 800D9138
  c->r[0]=c->r[3]+0x00000020u; // 800D913C
L_800D9140:;
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D9140
  c->r[5]=addc(c,~c->r[0],0x0000003Fu,1); // 800D9144
  c->r[0]=R16(c->r[28]+c->r[3]); // 800D9148
  c->r[4]=0u+0x00000001u; // 800D914C
  W16(c->r[29]+c->r[3],c->r[0]); // 800D9150
  c->r[3]=0u+0x00000000u; // 800D9154
  c->lr=0x800D915Cu; f_80217D24(c); // 800D9158
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D915C
  c->r[5]=~(c->r[3]|c->r[3]); // 800D9160
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D9164
  c->r[4]=~(c->r[4]|c->r[4]); // 800D9168
  c->r[0]=c->r[0]&c->r[5]; // 800D916C
  c->r[3]=c->r[3]&c->r[4]; // 800D9170
  W32(c->r[13]+0xFFFFA5FCu,c->r[3]); // 800D9174
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 800D9178
L_800D917C:;
  c->r[0]=R32(c->r[13]+0xFFFFA5F8u); // 800D917C
  c->r[3]=R32(c->r[13]+0xFFFFA5FCu); // 800D9180
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800D9184
  if (!crb(c,2)) { IRQCHK(c); goto L_800D911C; } // 800D9188
  c->r[3]=c->r[31]+0x000000F0u; // 800D918C
  c->r[4]=0u+0x00000001u; // 800D9190
  c->r[0]=R32(c->r[3]+0x00000030u); // 800D9194
  c->r[3]=c->r[30]|c->r[30]; // 800D9198
  W32(c->r[13]+0xFFFFA668u,c->r[4]); // 800D919C
  W32(c->r[13]+0xFFFFA664u,c->r[4]); // 800D91A0
  W32(c->r[13]+0xFFFFA62Cu,c->r[0]); // 800D91A4
  c->lr=0x800D91ACu; f_800CBAE0(c); // 800D91A8
  c->r[11]=c->r[1]+0x00000020u; // 800D91AC
  c->lr=0x800D91B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D91B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D91B4
  c->lr=c->r[0]; // 800D91B8
  c->r[1]=c->r[1]+0x00000020u; // 800D91BC
  return; // 800D91C0
}

// VISetNextFrameBuffer
void f_800D91D0(Ctx* __restrict c) {
  trace_call(0x800D91D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D91D0
  c->r[0]=c->lr; // 800D91D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D91D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D91DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D91E0
  c->r[30]=c->r[3]|c->r[3]; // 800D91E4
  c->lr=0x800D91ECu; f_800CBAA0(c); // 800D91E8
  c->r[7]=0u+0x802F0000u; // 800D91EC
  c->r[0]=0u+0x00000001u; // 800D91F0
  c->r[7]=c->r[7]+0xFFFFA820u; // 800D91F4
  c->r[31]=c->r[3]|c->r[3]; // 800D91F8
  W32(c->r[7]+0x00000030u,c->r[30]); // 800D91FC
  c->r[3]=c->r[7]|c->r[7]; // 800D9200
  c->r[4]=c->r[7]+0x00000034u; // 800D9204
  c->r[5]=c->r[7]+0x00000038u; // 800D9208
  c->r[6]=c->r[7]+0x0000004Cu; // 800D920C
  W32(c->r[13]+0xFFFFA610u,c->r[0]); // 800D9210
  c->r[7]=c->r[7]+0x00000050u; // 800D9214
  c->lr=0x800D921Cu; f_800D8150(c); // 800D9218
  c->r[3]=c->r[31]|c->r[31]; // 800D921C
  c->lr=0x800D9224u; f_800CBAE0(c); // 800D9220
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9228
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D922C
  c->lr=c->r[0]; // 800D9230
  c->r[1]=c->r[1]+0x00000010u; // 800D9234
  return; // 800D9238
}

// VIGetCurrentFrameBuffer
void f_800D9240(Ctx* __restrict c) {
  trace_call(0x800D9240u);
  c->r[3]=R32(c->r[13]+0xFFFFA628u); // 800D9240
  return; // 800D9244
}

// VISetBlack
void f_800D9250(Ctx* __restrict c) {
  trace_call(0x800D9250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9250
  c->r[0]=c->lr; // 800D9254
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D925C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D9260
  c->r[30]=c->r[3]|c->r[3]; // 800D9264
  c->lr=0x800D926Cu; f_800CBAA0(c); // 800D9268
  c->r[4]=0u+0x802F0000u; // 800D926C
  c->r[31]=c->r[3]|c->r[3]; // 800D9270
  c->r[4]=c->r[4]+0xFFFFA820u; // 800D9274
  c->r[10]=R32(c->r[4]+0x00000054u); // 800D9278
  W32(c->r[4]+0x00000040u,c->r[30]); // 800D927C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9280
  c->r[3]=R16(c->r[4]+0x0000000Au); // 800D9284
  c->r[4]=R16(c->r[4]+0x00000006u); // 800D9288
  c->r[5]=R8(c->r[10]+0x00000000u); // 800D928C
  c->r[6]=R16(c->r[10]+0x00000002u); // 800D9290
  c->r[7]=R16(c->r[10]+0x00000004u); // 800D9294
  c->r[8]=R16(c->r[10]+0x00000006u); // 800D9298
  c->r[9]=R16(c->r[10]+0x00000008u); // 800D929C
  c->r[10]=R16(c->r[10]+0x0000000Au); // 800D92A0
  c->lr=0x800D92A8u; f_800D84E0(c); // 800D92A4
  c->r[3]=c->r[31]|c->r[31]; // 800D92A8
  c->lr=0x800D92B0u; f_800CBAE0(c); // 800D92AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D92B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D92B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D92B8
  c->lr=c->r[0]; // 800D92BC
  c->r[1]=c->r[1]+0x00000020u; // 800D92C0
  return; // 800D92C4
}

// VIGetRetraceCount
void f_800D92D0(Ctx* __restrict c) {
  trace_call(0x800D92D0u);
  c->r[3]=R32(c->r[13]+0xFFFFA66Cu); // 800D92D0
  return; // 800D92D4
}

// VIGetNextField
void f_800D92E0(Ctx* __restrict c) {
  trace_call(0x800D92E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D92E0
  c->r[0]=c->lr; // 800D92E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D92E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D92EC
  c->lr=0x800D92F4u; f_800CBAA0(c); // 800D92F0
  c->r[5]=0u+0xCC000000u; // 800D92F4
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 800D92F8
  c->r[6]=rotl(c->r[0],0)&0x000007FFu; // 800D92FC
L_800D9300:;
  c->r[4]=R16(c->r[5]+0x0000202Eu); // 800D9300
  c->r[7]=c->r[6]|c->r[6]; // 800D9304
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 800D9308
  c->r[8]=rotl(c->r[4],0)&0x000007FFu; // 800D930C
  c->r[6]=rotl(c->r[0],0)&0x000007FFu; // 800D9310
  cmpu(c,0,c->r[7],c->r[6]); // 800D9314
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9300; } // 800D9318
  c->r[7]=R32(c->r[13]+0xFFFFA634u); // 800D931C
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 800D9320
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800D9324
  c->r[5]=c->r[8]+0xFFFFFFFFu; // 800D9328
  c->r[0]=R16(c->r[7]+0x0000001Au); // 800D932C
  c->r[4]=R16(c->r[7]+0x00000018u); // 800D9330
  c->r[0]=divwu(c->r[5],c->r[0]); // 800D9334
  c->r[0]=c->r[6]+c->r[0]; // 800D9338
  c->r[0]=c->r[4]^c->r[0]; // 800D933C
  c->r[0]=cntlz(c->r[0]); // 800D9340
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800D9344
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 800D9348
  c->lr=0x800D9350u; f_800CBAE0(c); // 800D934C
  c->r[3]=0u+0x802F0000u; // 800D9350
  c->r[4]=c->r[31]^0x00000001u; // 800D9354
  c->r[3]=c->r[3]+0xFFFFA820u; // 800D9358
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D935C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800D9360
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D9364
  c->r[3]=c->r[4]^c->r[0]; // 800D9368
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D936C
  c->lr=c->r[0]; // 800D9370
  c->r[1]=c->r[1]+0x00000010u; // 800D9374
  return; // 800D9378
}

// VIGetCurrentLine
void f_800D9380(Ctx* __restrict c) {
  trace_call(0x800D9380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9380
  c->r[0]=c->lr; // 800D9384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D938C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9390
  c->r[30]=R32(c->r[13]+0xFFFFA634u); // 800D9394
  c->lr=0x800D939Cu; f_800CBAA0(c); // 800D9398
  c->r[5]=0u+0xCC000000u; // 800D939C
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 800D93A0
  c->r[8]=rotl(c->r[0],0)&0x000007FFu; // 800D93A4
L_800D93A8:;
  c->r[4]=R16(c->r[5]+0x0000202Eu); // 800D93A8
  c->r[6]=c->r[8]|c->r[8]; // 800D93AC
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 800D93B0
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 800D93B4
  c->r[8]=rotl(c->r[0],0)&0x000007FFu; // 800D93B8
  cmpu(c,0,c->r[6],c->r[8]); // 800D93BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D93A8; } // 800D93C0
  c->r[4]=R32(c->r[13]+0xFFFFA634u); // 800D93C4
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 800D93C8
  c->r[6]=c->r[8]+0xFFFFFFFFu; // 800D93CC
  c->r[0]=R16(c->r[4]+0x0000001Au); // 800D93D0
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800D93D4
  c->r[0]=divwu(c->r[5],c->r[0]); // 800D93D8
  c->r[31]=c->r[4]+c->r[0]; // 800D93DC
  c->lr=0x800D93E4u; f_800CBAE0(c); // 800D93E0
  c->r[0]=R16(c->r[30]+0x00000018u); // 800D93E4
  cmpu(c,0,c->r[31],c->r[0]); // 800D93E8
  if (crb(c,0)) { goto L_800D93F4; } // 800D93EC
  c->r[31]=c->r[31]-c->r[0]; // 800D93F0
L_800D93F4:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 800D93F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D93F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D93FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9400
  c->lr=c->r[0]; // 800D9404
  c->r[1]=c->r[1]+0x00000010u; // 800D9408
  return; // 800D940C
}

// VIGetTvFormat
void f_800D9410(Ctx* __restrict c) {
  trace_call(0x800D9410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9410
  c->r[0]=c->lr; // 800D9414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D941C
  c->lr=0x800D9424u; f_800CBAA0(c); // 800D9420
  c->r[31]=R32(c->r[13]+0xFFFFA630u); // 800D9424
  cmpu(c,0,c->r[31],0x00000008u); // 800D9428
  if (crb(c,1)) { goto L_800D9454; } // 800D942C
  c->r[4]=0u+0x802B0000u; // 800D9430
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D9434
  c->r[4]=c->r[4]+0xFFFFE828u; // 800D9438
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D943C
  c->ctr=c->r[4]; // 800D9440
  if (true) { switch (c->ctr) { case 0x800D9448u: goto L_800D9448; case 0x800D9450u: goto L_800D9450; case 0x800D9454u: goto L_800D9454; default: break; } dispatch(c,c->ctr); return; } // 800D9444
L_800D9448:;
  c->r[31]=0u+0x00000000u; // 800D9448
  goto L_800D9454; // 800D944C
L_800D9450:;
  c->r[31]=0u+0x00000001u; // 800D9450
L_800D9454:;
  c->lr=0x800D9458u; f_800CBAE0(c); // 800D9454
  c->r[3]=c->r[31]|c->r[31]; // 800D9458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D945C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9460
  c->lr=c->r[0]; // 800D9464
  c->r[1]=c->r[1]+0x00000010u; // 800D9468
  return; // 800D946C
}

// VIGetScanMode
void f_800D9470(Ctx* __restrict c) {
  trace_call(0x800D9470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9470
  c->r[0]=c->lr; // 800D9474
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D947C
  c->lr=0x800D9484u; f_800CBAA0(c); // 800D9480
  c->r[4]=0u+0xCC000000u; // 800D9484
  c->r[0]=R16(c->r[4]+0x0000206Cu); // 800D9488
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D948C
  cmpu(c,0,c->r[0],0x00000001u); // 800D9490
  if (!crb(c,2)) { goto L_800D94A0; } // 800D9494
  c->r[31]=0u+0x00000002u; // 800D9498
  goto L_800D94B4; // 800D949C
L_800D94A0:;
  c->r[0]=R16(c->r[4]+0x00002002u); // 800D94A0
  c->r[4]=rotl(c->r[0],30)&0x00000001u; // 800D94A4
  c->r[0]=0u-c->r[4]; // 800D94A8
  c->r[0]=c->r[0]|c->r[4]; // 800D94AC
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 800D94B0
L_800D94B4:;
  c->lr=0x800D94B8u; f_800CBAE0(c); // 800D94B4
  c->r[3]=c->r[31]|c->r[31]; // 800D94B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D94BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D94C0
  c->lr=c->r[0]; // 800D94C4
  c->r[1]=c->r[1]+0x00000010u; // 800D94C8
  return; // 800D94CC
}

// VIGetDTVStatus
void f_800D94D0(Ctx* __restrict c) {
  trace_call(0x800D94D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D94D0
  c->r[0]=c->lr; // 800D94D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D94D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D94DC
  c->lr=0x800D94E4u; f_800CBAA0(c); // 800D94E0
  c->r[4]=0u+0xCC000000u; // 800D94E4
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800D94E8
  c->r[31]=rotl(c->r[0],0)&0x00000003u; // 800D94EC
  c->lr=0x800D94F4u; f_800CBAE0(c); // 800D94F0
  c->r[3]=rotl(c->r[31],0)&0x00000001u; // 800D94F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D94F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D94FC
  c->lr=c->r[0]; // 800D9500
  c->r[1]=c->r[1]+0x00000010u; // 800D9504
  return; // 800D9508
}

// __VIDisplayPositionToXY
void f_800D9510(Ctx* __restrict c) {
  trace_call(0x800D9510u);
  c->r[7]=R32(c->r[13]+0xFFFFA634u); // 800D9510
  c->r[9]=c->r[4]+0xFFFFFFFFu; // 800D9514
  c->r[8]=0u+0x802F0000u; // 800D9518
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800D951C
  c->r[0]=R16(c->r[7]+0x0000001Au); // 800D9520
  c->r[8]=c->r[8]+0xFFFFA820u; // 800D9524
  c->r[10]=R32(c->r[8]+0x00000024u); // 800D9528
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800D952C
  c->r[0]=divwu(c->r[4],c->r[0]); // 800D9530
  cmps(c,0,(int32_t)c->r[10],0); // 800D9534
  c->r[0]=c->r[8]+c->r[0]; // 800D9538
  if (!crb(c,2)) { goto L_800D9604; } // 800D953C
  c->r[9]=R16(c->r[7]+0x00000018u); // 800D9540
  cmpu(c,0,c->r[0],c->r[9]); // 800D9544
  if (!crb(c,0)) { goto L_800D95A4; } // 800D9548
  c->r[8]=R8(c->r[7]+0x00000000u); // 800D954C
  c->r[10]=R16(c->r[7]+0x00000004u); // 800D9550
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D9554
  c->r[8]=c->r[4]-c->r[8]; // 800D9558
  c->r[4]=c->r[10]+c->r[8]; // 800D955C
  cmpu(c,0,c->r[0],c->r[4]); // 800D9560
  if (!crb(c,0)) { goto L_800D9574; } // 800D9564
  c->r[0]=0u+0xFFFFFFFFu; // 800D9568
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D956C
  goto L_800D9738; // 800D9570
L_800D9574:;
  c->r[4]=R16(c->r[7]+0x00000008u); // 800D9574
  c->r[4]=c->r[9]-c->r[4]; // 800D9578
  cmpu(c,0,c->r[0],c->r[4]); // 800D957C
  if (crb(c,0)) { goto L_800D9590; } // 800D9580
  c->r[0]=0u+0xFFFFFFFFu; // 800D9584
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D9588
  goto L_800D9738; // 800D958C
L_800D9590:;
  c->r[0]=c->r[0]-c->r[8]; // 800D9590
  c->r[0]=c->r[0]-c->r[10]; // 800D9594
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D9598
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D959C
  goto L_800D9738; // 800D95A0
L_800D95A4:;
  c->r[8]=R8(c->r[7]+0x00000000u); // 800D95A4
  c->r[0]=c->r[0]-c->r[9]; // 800D95A8
  c->r[10]=R16(c->r[7]+0x00000006u); // 800D95AC
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D95B0
  c->r[8]=c->r[4]-c->r[8]; // 800D95B4
  c->r[4]=c->r[10]+c->r[8]; // 800D95B8
  cmpu(c,0,c->r[0],c->r[4]); // 800D95BC
  if (!crb(c,0)) { goto L_800D95D0; } // 800D95C0
  c->r[0]=0u+0xFFFFFFFFu; // 800D95C4
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D95C8
  goto L_800D9738; // 800D95CC
L_800D95D0:;
  c->r[4]=R16(c->r[7]+0x0000000Au); // 800D95D0
  c->r[4]=c->r[9]-c->r[4]; // 800D95D4
  cmpu(c,0,c->r[0],c->r[4]); // 800D95D8
  if (crb(c,0)) { goto L_800D95EC; } // 800D95DC
  c->r[0]=0u+0xFFFFFFFFu; // 800D95E0
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D95E4
  goto L_800D9738; // 800D95E8
L_800D95EC:;
  c->r[0]=c->r[0]-c->r[8]; // 800D95EC
  c->r[0]=c->r[0]-c->r[10]; // 800D95F0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D95F4
  c->r[0]=c->r[4]+0x00000001u; // 800D95F8
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D95FC
  goto L_800D9738; // 800D9600
L_800D9604:;
  cmpu(c,0,c->r[10],0x00000001u); // 800D9604
  if (!crb(c,2)) { goto L_800D9678; } // 800D9608
  c->r[9]=R16(c->r[7]+0x00000018u); // 800D960C
  cmpu(c,0,c->r[0],c->r[9]); // 800D9610
  if (crb(c,0)) { goto L_800D961C; } // 800D9614
  c->r[0]=c->r[0]-c->r[9]; // 800D9618
L_800D961C:;
  c->r[4]=R32(c->r[13]+0xFFFFA634u); // 800D961C
  c->r[8]=R8(c->r[4]+0x00000000u); // 800D9620
  c->r[10]=R16(c->r[4]+0x00000004u); // 800D9624
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D9628
  c->r[8]=c->r[4]-c->r[8]; // 800D962C
  c->r[4]=c->r[10]+c->r[8]; // 800D9630
  cmpu(c,0,c->r[0],c->r[4]); // 800D9634
  if (!crb(c,0)) { goto L_800D9648; } // 800D9638
  c->r[0]=0u+0xFFFFFFFFu; // 800D963C
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D9640
  goto L_800D9738; // 800D9644
L_800D9648:;
  c->r[4]=R16(c->r[7]+0x00000008u); // 800D9648
  c->r[4]=c->r[9]-c->r[4]; // 800D964C
  cmpu(c,0,c->r[0],c->r[4]); // 800D9650
  if (crb(c,0)) { goto L_800D9664; } // 800D9654
  c->r[0]=0u+0xFFFFFFFFu; // 800D9658
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D965C
  goto L_800D9738; // 800D9660
L_800D9664:;
  c->r[0]=c->r[0]-c->r[8]; // 800D9664
  c->r[0]=c->r[0]-c->r[10]; // 800D9668
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D966C
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D9670
  goto L_800D9738; // 800D9674
L_800D9678:;
  cmpu(c,0,c->r[10],0x00000002u); // 800D9678
  if (!crb(c,2)) { goto L_800D9738; } // 800D967C
  c->r[9]=R16(c->r[7]+0x00000018u); // 800D9680
  cmpu(c,0,c->r[0],c->r[9]); // 800D9684
  if (!crb(c,0)) { goto L_800D96E0; } // 800D9688
  c->r[8]=R8(c->r[7]+0x00000000u); // 800D968C
  c->r[10]=R16(c->r[7]+0x00000004u); // 800D9690
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D9694
  c->r[8]=c->r[4]-c->r[8]; // 800D9698
  c->r[4]=c->r[10]+c->r[8]; // 800D969C
  cmpu(c,0,c->r[0],c->r[4]); // 800D96A0
  if (!crb(c,0)) { goto L_800D96B4; } // 800D96A4
  c->r[0]=0u+0xFFFFFFFFu; // 800D96A8
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D96AC
  goto L_800D9738; // 800D96B0
L_800D96B4:;
  c->r[4]=R16(c->r[7]+0x00000008u); // 800D96B4
  c->r[4]=c->r[9]-c->r[4]; // 800D96B8
  cmpu(c,0,c->r[0],c->r[4]); // 800D96BC
  if (crb(c,0)) { goto L_800D96D0; } // 800D96C0
  c->r[0]=0u+0xFFFFFFFFu; // 800D96C4
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D96C8
  goto L_800D9738; // 800D96CC
L_800D96D0:;
  c->r[0]=c->r[0]-c->r[8]; // 800D96D0
  c->r[0]=c->r[0]-c->r[10]; // 800D96D4
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D96D8
  goto L_800D9738; // 800D96DC
L_800D96E0:;
  c->r[8]=R8(c->r[7]+0x00000000u); // 800D96E0
  c->r[0]=c->r[0]-c->r[9]; // 800D96E4
  c->r[10]=R16(c->r[7]+0x00000006u); // 800D96E8
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D96EC
  c->r[8]=c->r[4]-c->r[8]; // 800D96F0
  c->r[4]=c->r[10]+c->r[8]; // 800D96F4
  cmpu(c,0,c->r[0],c->r[4]); // 800D96F8
  if (!crb(c,0)) { goto L_800D970C; } // 800D96FC
  c->r[0]=0u+0xFFFFFFFFu; // 800D9700
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D9704
  goto L_800D9738; // 800D9708
L_800D970C:;
  c->r[4]=R16(c->r[7]+0x0000000Au); // 800D970C
  c->r[4]=c->r[9]-c->r[4]; // 800D9710
  cmpu(c,0,c->r[0],c->r[4]); // 800D9714
  if (crb(c,0)) { goto L_800D9728; } // 800D9718
  c->r[0]=0u+0xFFFFFFFFu; // 800D971C
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D9720
  goto L_800D9738; // 800D9724
L_800D9728:;
  c->r[0]=c->r[0]-c->r[8]; // 800D9728
  c->r[0]=c->r[0]-c->r[10]; // 800D972C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D9730
  W16(c->r[6]+0x00000000u,c->r[0]); // 800D9734
L_800D9738:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D9738
  W16(c->r[5]+0x00000000u,c->r[0]); // 800D973C
  return; // 800D9740
}

// fn_800D9750
void f_800D9750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9750
  c->r[0]=c->lr; // 800D9754
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D975C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9760
  c->r[30]=R32(c->r[13]+0xFFFFA658u); // 800D9764
  W32(c->r[13]+0xFFFFA658u,c->r[3]); // 800D9768
  c->lr=0x800D9770u; f_800CBAA0(c); // 800D976C
  c->r[31]=R32(c->r[13]+0xFFFFA630u); // 800D9770
  cmpu(c,0,c->r[31],0x00000008u); // 800D9774
  if (crb(c,1)) { goto L_800D97A0; } // 800D9778
  c->r[4]=0u+0x802B0000u; // 800D977C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D9780
  c->r[4]=c->r[4]+0xFFFFE84Cu; // 800D9784
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D9788
  c->ctr=c->r[4]; // 800D978C
  if (true) { switch (c->ctr) { case 0x800D9794u: goto L_800D9794; case 0x800D979Cu: goto L_800D979C; case 0x800D97A0u: goto L_800D97A0; default: break; } dispatch(c,c->ctr); return; } // 800D9790
L_800D9794:;
  c->r[31]=0u+0x00000000u; // 800D9794
  goto L_800D97A0; // 800D9798
L_800D979C:;
  c->r[31]=0u+0x00000001u; // 800D979C
L_800D97A0:;
  c->lr=0x800D97A4u; f_800CBAE0(c); // 800D97A0
  cmpu(c,0,c->r[31],0x00000001u); // 800D97A4
  if (!crb(c,2)) { goto L_800D97EC; } // 800D97A8
  c->r[0]=R32(c->r[13]+0xFFFFA658u); // 800D97AC
  cmps(c,0,(int32_t)c->r[0],1); // 800D97B0
  if (crb(c,2)) { goto L_800D97C4; } // 800D97B4
  cmps(c,0,(int32_t)c->r[0],2); // 800D97B8
  if (crb(c,2)) { goto L_800D97D0; } // 800D97BC
  goto L_800D97E0; // 800D97C0
L_800D97C4:;
  c->r[0]=0u+0x00007530u; // 800D97C4
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D97C8
  goto L_800D982C; // 800D97CC
L_800D97D0:;
  c->r[3]=0u+0x00010000u; // 800D97D0
  c->r[0]=c->r[3]+0xFFFFAFC8u; // 800D97D4
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D97D8
  goto L_800D982C; // 800D97DC
L_800D97E0:;
  c->r[0]=0u+0x00003A98u; // 800D97E0
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D97E4
  goto L_800D982C; // 800D97E8
L_800D97EC:;
  c->r[0]=R32(c->r[13]+0xFFFFA658u); // 800D97EC
  cmps(c,0,(int32_t)c->r[0],1); // 800D97F0
  if (crb(c,2)) { goto L_800D9804; } // 800D97F4
  cmps(c,0,(int32_t)c->r[0],2); // 800D97F8
  if (crb(c,2)) { goto L_800D9814; } // 800D97FC
  goto L_800D9824; // 800D9800
L_800D9804:;
  c->r[3]=0u+0x00010000u; // 800D9804
  c->r[0]=c->r[3]+0xFFFF8CA0u; // 800D9808
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D980C
  goto L_800D982C; // 800D9810
L_800D9814:;
  c->r[3]=0u+0x00010000u; // 800D9814
  c->r[0]=c->r[3]+0xFFFFD2F0u; // 800D9818
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D981C
  goto L_800D982C; // 800D9820
L_800D9824:;
  c->r[0]=0u+0x00004650u; // 800D9824
  W32(c->r[13]+0xFFFFA5D4u,c->r[0]); // 800D9828
L_800D982C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D982C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9830
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9838
  c->lr=c->r[0]; // 800D983C
  c->r[1]=c->r[1]+0x00000010u; // 800D9840
  return; // 800D9844
}

// fn_800D9850
void f_800D9850(Ctx* __restrict c) {
  c->r[3]=0u+0x802F0000u; // 800D9850
  c->r[0]=0u+0x00000000u; // 800D9854
  W32(c->r[3]+0xFFFFA878u,c->r[0]); // 800D9858
  c->r[3]=0u+0x00000001u; // 800D985C
  return; // 800D9860
}

// fn_800D9870
void f_800D9870(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D9870
  W32(c->r[13]+0xFFFFA654u,c->r[0]); // 800D9874
  c->r[3]=0u+0x00000001u; // 800D9878
  return; // 800D987C
}

// __VIResetRFIdle
void f_800D9880(Ctx* __restrict c) {
  trace_call(0x800D9880u);
  c->r[0]=0u+0x00000000u; // 800D9880
  W32(c->r[13]+0xFFFFA650u,c->r[0]); // 800D9884
  c->r[3]=0u+0x00000001u; // 800D9888
  return; // 800D988C
}

// WaitMicroTime
void f_800D9890(Ctx* __restrict c) {
  trace_call(0x800D9890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9890
  c->r[0]=c->lr; // 800D9894
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D989C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D98A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D98A4
  c->r[29]=c->r[3]|c->r[3]; // 800D98A8
  c->lr=0x800D98B0u; f_800D0540(c); // 800D98AC
  c->r[30]=c->r[4]|c->r[4]; // 800D98B0
  c->r[31]=c->r[3]|c->r[3]; // 800D98B4
L_800D98B8:;
  c->lr=0x800D98BCu; f_800D0540(c); // 800D98B8
  c->r[7]=addc(c,~c->r[30],c->r[4],1); // 800D98BC
  c->r[6]=0u+0x000001E6u; // 800D98C0
  c->r[0]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 800D98C4
  c->r[5]=0u+0x00000000u; // 800D98C8
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D98CC
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D98D0
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D98D4
  c->lr=0x800D98DCu; f_802179FC(c); // 800D98D8
  c->r[5]=sraw(c,c->r[29],31); // 800D98DC
  c->r[0]=c->r[3]^0x80000000u; // 800D98E0
  c->r[5]=c->r[5]^0x80000000u; // 800D98E4
  c->r[3]=addc(c,~c->r[29],c->r[4],1); // 800D98E8
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D98EC
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D98F0
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D98F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D98B8; } // 800D98F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D98FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D9900
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D9904
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D9908
  c->lr=c->r[0]; // 800D990C
  c->r[1]=c->r[1]+0x00000020u; // 800D9910
  return; // 800D9914
}

// sendSlaveAddr
void f_800D9920(Ctx* __restrict c) {
  trace_call(0x800D9920u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9920
  c->r[0]=c->lr; // 800D9924
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D9928
  c->r[11]=c->r[1]+0x00000030u; // 800D992C
  c->lr=0x800D9934u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9930
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9934
  c->r[29]=c->r[3]|c->r[3]; // 800D9938
  cmps(c,0,(int32_t)c->r[0],0); // 800D993C
  if (!crb(c,2)) { goto L_800D995C; } // 800D9940
  c->r[3]=0u+0xCD800000u; // 800D9944
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800D9948
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D994C
  c->r[0]=c->r[0]|0x00008000u; // 800D9950
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800D9954
  goto L_800D996C; // 800D9958
L_800D995C:;
  c->r[3]=0u+0xCD800000u; // 800D995C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800D9960
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9964
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800D9968
L_800D996C:;
  c->lr=0x800D9970u; f_800D0540(c); // 800D996C
  c->r[28]=c->r[4]|c->r[4]; // 800D9970
  c->r[27]=c->r[3]|c->r[3]; // 800D9974
  c->r[26]=0u+0x00000002u; // 800D9978
  c->r[25]=0u+0x00000000u; // 800D997C
L_800D9980:;
  c->lr=0x800D9984u; f_800D0540(c); // 800D9980
  c->r[7]=addc(c,~c->r[28],c->r[4],1); // 800D9984
  c->r[6]=0u+0x000001E6u; // 800D9988
  c->r[0]=addc(c,~c->r[27],c->r[3],c->xer_ca); // 800D998C
  c->r[5]=0u+0x00000000u; // 800D9990
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9994
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9998
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D999C
  c->lr=0x800D99A4u; f_802179FC(c); // 800D99A0
  c->r[0]=c->r[3]^0x80000000u; // 800D99A4
  c->r[5]=c->r[25]^0x80000000u; // 800D99A8
  c->r[3]=addc(c,~c->r[26],c->r[4],1); // 800D99AC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D99B0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D99B4
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D99B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9980; } // 800D99BC
  c->r[31]=0u+0xCD800000u; // 800D99C0
  c->r[30]=0u+0x00000000u; // 800D99C4
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D99C8
  c->r[27]=0u+0x00000002u; // 800D99CC
  c->r[28]=0u+0x00000000u; // 800D99D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D99D4
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D99D8
L_800D99DC:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 800D99DC
  if (crb(c,2)) { goto L_800D9A14; } // 800D99E0
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D99E4
  cmps(c,0,(int32_t)c->r[0],0); // 800D99E8
  if (!crb(c,2)) { goto L_800D9A00; } // 800D99EC
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D99F0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D99F4
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D99F8
  goto L_800D9A40; // 800D99FC
L_800D9A00:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9A00
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9A04
  c->r[0]=c->r[0]|0x00008000u; // 800D9A08
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9A0C
  goto L_800D9A40; // 800D9A10
L_800D9A14:;
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9A14
  cmps(c,0,(int32_t)c->r[0],0); // 800D9A18
  if (!crb(c,2)) { goto L_800D9A34; } // 800D9A1C
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9A20
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9A24
  c->r[0]=c->r[0]|0x00008000u; // 800D9A28
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9A2C
  goto L_800D9A40; // 800D9A30
L_800D9A34:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9A34
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9A38
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9A3C
L_800D9A40:;
  c->lr=0x800D9A44u; f_800D0540(c); // 800D9A40
  c->r[26]=c->r[4]|c->r[4]; // 800D9A44
  c->r[25]=c->r[3]|c->r[3]; // 800D9A48
L_800D9A4C:;
  c->lr=0x800D9A50u; f_800D0540(c); // 800D9A4C
  c->r[7]=addc(c,~c->r[26],c->r[4],1); // 800D9A50
  c->r[6]=0u+0x000001E6u; // 800D9A54
  c->r[0]=addc(c,~c->r[25],c->r[3],c->xer_ca); // 800D9A58
  c->r[5]=0u+0x00000000u; // 800D9A5C
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9A60
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9A64
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9A68
  c->lr=0x800D9A70u; f_802179FC(c); // 800D9A6C
  c->r[0]=c->r[3]^0x80000000u; // 800D9A70
  c->r[5]=c->r[28]^0x80000000u; // 800D9A74
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 800D9A78
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9A7C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9A80
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9A84
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9A4C; } // 800D9A88
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9A8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9A90
  c->r[0]=c->r[0]|0x00004000u; // 800D9A94
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9A98
  c->lr=0x800D9AA0u; f_800D0540(c); // 800D9A9C
  c->r[25]=c->r[4]|c->r[4]; // 800D9AA0
  c->r[26]=c->r[3]|c->r[3]; // 800D9AA4
L_800D9AA8:;
  c->lr=0x800D9AACu; f_800D0540(c); // 800D9AA8
  c->r[7]=addc(c,~c->r[25],c->r[4],1); // 800D9AAC
  c->r[6]=0u+0x000001E6u; // 800D9AB0
  c->r[0]=addc(c,~c->r[26],c->r[3],c->xer_ca); // 800D9AB4
  c->r[5]=0u+0x00000000u; // 800D9AB8
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9ABC
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9AC0
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9AC4
  c->lr=0x800D9ACCu; f_802179FC(c); // 800D9AC8
  c->r[0]=c->r[3]^0x80000000u; // 800D9ACC
  c->r[5]=c->r[28]^0x80000000u; // 800D9AD0
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 800D9AD4
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9AD8
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9ADC
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9AE0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9AA8; } // 800D9AE4
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9AE8
  c->r[30]=c->r[30]+0x00000001u; // 800D9AEC
  cmps(c,0,(int32_t)c->r[30],8); // 800D9AF0
  c->r[29]=rotl(c->r[29],1)&0x000000FEu; // 800D9AF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9AF8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9AFC
  if (crb(c,0)) { IRQCHK(c); goto L_800D99DC; } // 800D9B00
  c->r[3]=0u+0xCD800000u; // 800D9B04
  c->r[0]=R32(c->r[3]+0x000000C4u); // 800D9B08
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9B0C
  c->r[0]=c->r[0]|0x00004000u; // 800D9B10
  W32(c->r[3]+0x000000C4u,c->r[0]); // 800D9B14
  c->lr=0x800D9B1Cu; f_800D0540(c); // 800D9B18
  c->r[31]=c->r[4]|c->r[4]; // 800D9B1C
  c->r[30]=c->r[3]|c->r[3]; // 800D9B20
  c->r[29]=0u+0x00000002u; // 800D9B24
  c->r[28]=0u+0x00000000u; // 800D9B28
L_800D9B2C:;
  c->lr=0x800D9B30u; f_800D0540(c); // 800D9B2C
  c->r[7]=addc(c,~c->r[31],c->r[4],1); // 800D9B30
  c->r[6]=0u+0x000001E6u; // 800D9B34
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 800D9B38
  c->r[5]=0u+0x00000000u; // 800D9B3C
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9B40
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9B44
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9B48
  c->lr=0x800D9B50u; f_802179FC(c); // 800D9B4C
  c->r[0]=c->r[3]^0x80000000u; // 800D9B50
  c->r[5]=c->r[28]^0x80000000u; // 800D9B54
  c->r[3]=addc(c,~c->r[29],c->r[4],1); // 800D9B58
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9B5C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9B60
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9B64
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9B2C; } // 800D9B68
  c->r[3]=0u+0xCD800000u; // 800D9B6C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800D9B70
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9B74
  c->r[0]=c->r[0]|0x00004000u; // 800D9B78
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800D9B7C
  c->lr=0x800D9B84u; f_800D0540(c); // 800D9B80
  c->r[28]=c->r[4]|c->r[4]; // 800D9B84
  c->r[31]=c->r[3]|c->r[3]; // 800D9B88
  c->r[30]=0u+0x00000002u; // 800D9B8C
  c->r[29]=0u+0x00000000u; // 800D9B90
L_800D9B94:;
  c->lr=0x800D9B98u; f_800D0540(c); // 800D9B94
  c->r[7]=addc(c,~c->r[28],c->r[4],1); // 800D9B98
  c->r[6]=0u+0x000001E6u; // 800D9B9C
  c->r[0]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 800D9BA0
  c->r[5]=0u+0x00000000u; // 800D9BA4
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9BA8
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9BAC
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9BB0
  c->lr=0x800D9BB8u; f_802179FC(c); // 800D9BB4
  c->r[0]=c->r[3]^0x80000000u; // 800D9BB8
  c->r[5]=c->r[29]^0x80000000u; // 800D9BBC
  c->r[3]=addc(c,~c->r[30],c->r[4],1); // 800D9BC0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9BC4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9BC8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9BCC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9B94; } // 800D9BD0
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9BD4
  cmpu(c,0,c->r[0],0x00000001u); // 800D9BD8
  if (!crb(c,2)) { goto L_800D9BF8; } // 800D9BDC
  c->r[3]=0u+0xCD800000u; // 800D9BE0
  c->r[0]=R32(c->r[3]+0x000000C8u); // 800D9BE4
  c->r[0]=rotl(c->r[0],17)&0x00000001u; cr0(c,c->r[0]); // 800D9BE8
  if (crb(c,2)) { goto L_800D9BF8; } // 800D9BEC
  c->r[3]=0u+0x00000000u; // 800D9BF0
  goto L_800D9C50; // 800D9BF4
L_800D9BF8:;
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9BF8
  cmps(c,0,(int32_t)c->r[0],0); // 800D9BFC
  if (!crb(c,2)) { goto L_800D9C1C; } // 800D9C00
  c->r[3]=0u+0xCD800000u; // 800D9C04
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800D9C08
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9C0C
  c->r[0]=c->r[0]|0x00008000u; // 800D9C10
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800D9C14
  goto L_800D9C2C; // 800D9C18
L_800D9C1C:;
  c->r[3]=0u+0xCD800000u; // 800D9C1C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800D9C20
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9C24
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800D9C28
L_800D9C2C:;
  c->r[4]=0u+0xCD800000u; // 800D9C2C
  c->r[3]=0u+0x00000001u; // 800D9C30
  c->r[0]=R32(c->r[4]+0x000000C4u); // 800D9C34
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9C38
  c->r[0]=c->r[0]|0x0000C000u; // 800D9C3C
  W32(c->r[4]+0x000000C4u,c->r[0]); // 800D9C40
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800D9C44
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9C48
  W32(c->r[4]+0x000000C0u,c->r[0]); // 800D9C4C
L_800D9C50:;
  c->r[11]=c->r[1]+0x00000030u; // 800D9C50
  c->lr=0x800D9C58u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9C54
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D9C58
  c->lr=c->r[0]; // 800D9C5C
  c->r[1]=c->r[1]+0x00000030u; // 800D9C60
  return; // 800D9C64
}

// __VISendI2CData
void f_800D9C70(Ctx* __restrict c) {
  trace_call(0x800D9C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C70
  c->r[0]=c->lr; // 800D9C74
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D9C78
  c->r[11]=c->r[1]+0x00000030u; // 800D9C7C
  c->lr=0x800D9C84u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9C80
  c->r[0]=R32(c->r[13]+0xFFFFA670u); // 800D9C84
  c->r[29]=c->r[3]|c->r[3]; // 800D9C88
  c->r[26]=c->r[4]|c->r[4]; // 800D9C8C
  c->r[27]=c->r[5]|c->r[5]; // 800D9C90
  cmps(c,0,(int32_t)c->r[0],0); // 800D9C94
  if (!crb(c,2)) { goto L_800D9CA8; } // 800D9C98
  c->r[0]=0u+0x00000001u; // 800D9C9C
  W32(c->r[13]+0xFFFF8FA8u,c->r[0]); // 800D9CA0
  W32(c->r[13]+0xFFFFA670u,c->r[0]); // 800D9CA4
L_800D9CA8:;
  c->lr=0x800D9CACu; f_800CBAA0(c); // 800D9CA8
  c->r[4]=0u+0xCD800000u; // 800D9CAC
  c->r[28]=c->r[3]|c->r[3]; // 800D9CB0
  c->r[0]=R32(c->r[4]+0x000000C4u); // 800D9CB4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9CB8
  c->r[0]=c->r[0]|0x0000C000u; // 800D9CBC
  W32(c->r[4]+0x000000C4u,c->r[0]); // 800D9CC0
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800D9CC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9CC8
  c->r[0]=c->r[0]|0x00004000u; // 800D9CCC
  W32(c->r[4]+0x000000C0u,c->r[0]); // 800D9CD0
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9CD4
  cmps(c,0,(int32_t)c->r[0],0); // 800D9CD8
  if (!crb(c,2)) { goto L_800D9CF0; } // 800D9CDC
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800D9CE0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9CE4
  W32(c->r[4]+0x000000C0u,c->r[0]); // 800D9CE8
  goto L_800D9D00; // 800D9CEC
L_800D9CF0:;
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800D9CF0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9CF4
  c->r[0]=c->r[0]|0x00008000u; // 800D9CF8
  W32(c->r[4]+0x000000C0u,c->r[0]); // 800D9CFC
L_800D9D00:;
  c->lr=0x800D9D04u; f_800D0540(c); // 800D9D00
  c->r[25]=c->r[4]|c->r[4]; // 800D9D04
  c->r[24]=c->r[3]|c->r[3]; // 800D9D08
  c->r[23]=0u+0x00000002u; // 800D9D0C
  c->r[22]=0u+0x00000000u; // 800D9D10
L_800D9D14:;
  c->lr=0x800D9D18u; f_800D0540(c); // 800D9D14
  c->r[7]=addc(c,~c->r[25],c->r[4],1); // 800D9D18
  c->r[6]=0u+0x000001E6u; // 800D9D1C
  c->r[0]=addc(c,~c->r[24],c->r[3],c->xer_ca); // 800D9D20
  c->r[5]=0u+0x00000000u; // 800D9D24
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9D28
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9D2C
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9D30
  c->lr=0x800D9D38u; f_802179FC(c); // 800D9D34
  c->r[0]=c->r[3]^0x80000000u; // 800D9D38
  c->r[5]=c->r[22]^0x80000000u; // 800D9D3C
  c->r[3]=addc(c,~c->r[23],c->r[4],1); // 800D9D40
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9D44
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9D48
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9D4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9D14; } // 800D9D50
  c->lr=0x800D9D58u; f_800D0540(c); // 800D9D54
  c->r[25]=c->r[4]|c->r[4]; // 800D9D58
  c->r[24]=c->r[3]|c->r[3]; // 800D9D5C
  c->r[23]=0u+0x00000002u; // 800D9D60
  c->r[22]=0u+0x00000000u; // 800D9D64
L_800D9D68:;
  c->lr=0x800D9D6Cu; f_800D0540(c); // 800D9D68
  c->r[7]=addc(c,~c->r[25],c->r[4],1); // 800D9D6C
  c->r[6]=0u+0x000001E6u; // 800D9D70
  c->r[0]=addc(c,~c->r[24],c->r[3],c->xer_ca); // 800D9D74
  c->r[5]=0u+0x00000000u; // 800D9D78
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9D7C
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9D80
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9D84
  c->lr=0x800D9D8Cu; f_802179FC(c); // 800D9D88
  c->r[0]=c->r[3]^0x80000000u; // 800D9D8C
  c->r[5]=c->r[22]^0x80000000u; // 800D9D90
  c->r[3]=addc(c,~c->r[23],c->r[4],1); // 800D9D94
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9D98
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9D9C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9DA0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9D68; } // 800D9DA4
  c->r[3]=c->r[29]|c->r[29]; // 800D9DA8
  c->lr=0x800D9DB0u; f_800D9920(c); // 800D9DAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D9DB0
  if (!crb(c,2)) { goto L_800D9DC8; } // 800D9DB4
  c->r[3]=c->r[28]|c->r[28]; // 800D9DB8
  c->lr=0x800D9DC0u; f_800CBAE0(c); // 800D9DBC
  c->r[3]=0u+0x00000000u; // 800D9DC0
  goto L_800DA18C; // 800D9DC4
L_800D9DC8:;
  c->r[31]=0u+0xCD800000u; // 800D9DC8
  c->r[24]=0u+0x00000002u; // 800D9DCC
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800D9DD0
  c->r[25]=0u+0x00000000u; // 800D9DD4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9DD8
  c->r[0]=c->r[0]|0x0000C000u; // 800D9DDC
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800D9DE0
  goto L_800DA048; // 800D9DE4
L_800D9DE8:;
  c->r[29]=R8(c->r[26]+0x00000000u); // 800D9DE8
  c->r[30]=0u+0x00000000u; // 800D9DEC
  c->r[26]=c->r[26]+0x00000001u; // 800D9DF0
L_800D9DF4:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 800D9DF4
  if (crb(c,2)) { goto L_800D9E2C; } // 800D9DF8
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9DFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D9E00
  if (!crb(c,2)) { goto L_800D9E18; } // 800D9E04
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9E08
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9E0C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9E10
  goto L_800D9E58; // 800D9E14
L_800D9E18:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9E18
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9E1C
  c->r[0]=c->r[0]|0x00008000u; // 800D9E20
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9E24
  goto L_800D9E58; // 800D9E28
L_800D9E2C:;
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9E2C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9E30
  if (!crb(c,2)) { goto L_800D9E4C; } // 800D9E34
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9E38
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9E3C
  c->r[0]=c->r[0]|0x00008000u; // 800D9E40
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9E44
  goto L_800D9E58; // 800D9E48
L_800D9E4C:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9E4C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9E50
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9E54
L_800D9E58:;
  c->lr=0x800D9E5Cu; f_800D0540(c); // 800D9E58
  c->r[23]=c->r[4]|c->r[4]; // 800D9E5C
  c->r[22]=c->r[3]|c->r[3]; // 800D9E60
L_800D9E64:;
  c->lr=0x800D9E68u; f_800D0540(c); // 800D9E64
  c->r[7]=addc(c,~c->r[23],c->r[4],1); // 800D9E68
  c->r[6]=0u+0x000001E6u; // 800D9E6C
  c->r[0]=addc(c,~c->r[22],c->r[3],c->xer_ca); // 800D9E70
  c->r[5]=0u+0x00000000u; // 800D9E74
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9E78
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9E7C
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9E80
  c->lr=0x800D9E88u; f_802179FC(c); // 800D9E84
  c->r[0]=c->r[3]^0x80000000u; // 800D9E88
  c->r[5]=c->r[25]^0x80000000u; // 800D9E8C
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 800D9E90
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9E94
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9E98
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9E9C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9E64; } // 800D9EA0
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9EA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9EA8
  c->r[0]=c->r[0]|0x00004000u; // 800D9EAC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9EB0
  c->lr=0x800D9EB8u; f_800D0540(c); // 800D9EB4
  c->r[22]=c->r[4]|c->r[4]; // 800D9EB8
  c->r[23]=c->r[3]|c->r[3]; // 800D9EBC
L_800D9EC0:;
  c->lr=0x800D9EC4u; f_800D0540(c); // 800D9EC0
  c->r[7]=addc(c,~c->r[22],c->r[4],1); // 800D9EC4
  c->r[6]=0u+0x000001E6u; // 800D9EC8
  c->r[0]=addc(c,~c->r[23],c->r[3],c->xer_ca); // 800D9ECC
  c->r[5]=0u+0x00000000u; // 800D9ED0
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9ED4
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9ED8
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9EDC
  c->lr=0x800D9EE4u; f_802179FC(c); // 800D9EE0
  c->r[0]=c->r[3]^0x80000000u; // 800D9EE4
  c->r[5]=c->r[25]^0x80000000u; // 800D9EE8
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 800D9EEC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9EF0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9EF4
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9EF8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9EC0; } // 800D9EFC
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9F00
  c->r[30]=c->r[30]+0x00000001u; // 800D9F04
  cmps(c,0,(int32_t)c->r[30],8); // 800D9F08
  c->r[29]=rotl(c->r[29],1)&0x000000FEu; // 800D9F0C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9F10
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9F14
  if (crb(c,0)) { IRQCHK(c); goto L_800D9DF4; } // 800D9F18
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800D9F1C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D9F20
  c->r[0]=c->r[0]|0x00004000u; // 800D9F24
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800D9F28
  c->lr=0x800D9F30u; f_800D0540(c); // 800D9F2C
  c->r[30]=c->r[4]|c->r[4]; // 800D9F30
  c->r[29]=c->r[3]|c->r[3]; // 800D9F34
L_800D9F38:;
  c->lr=0x800D9F3Cu; f_800D0540(c); // 800D9F38
  c->r[7]=addc(c,~c->r[30],c->r[4],1); // 800D9F3C
  c->r[6]=0u+0x000001E6u; // 800D9F40
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800D9F44
  c->r[5]=0u+0x00000000u; // 800D9F48
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9F4C
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9F50
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9F54
  c->lr=0x800D9F5Cu; f_802179FC(c); // 800D9F58
  c->r[0]=c->r[3]^0x80000000u; // 800D9F5C
  c->r[5]=c->r[25]^0x80000000u; // 800D9F60
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 800D9F64
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9F68
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9F6C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9F70
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9F38; } // 800D9F74
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800D9F78
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800D9F7C
  c->r[0]=c->r[0]|0x00004000u; // 800D9F80
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800D9F84
  c->lr=0x800D9F8Cu; f_800D0540(c); // 800D9F88
  c->r[30]=c->r[4]|c->r[4]; // 800D9F8C
  c->r[29]=c->r[3]|c->r[3]; // 800D9F90
L_800D9F94:;
  c->lr=0x800D9F98u; f_800D0540(c); // 800D9F94
  c->r[7]=addc(c,~c->r[30],c->r[4],1); // 800D9F98
  c->r[6]=0u+0x000001E6u; // 800D9F9C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800D9FA0
  c->r[5]=0u+0x00000000u; // 800D9FA4
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D9FA8
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D9FAC
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800D9FB0
  c->lr=0x800D9FB8u; f_802179FC(c); // 800D9FB4
  c->r[0]=c->r[3]^0x80000000u; // 800D9FB8
  c->r[5]=c->r[25]^0x80000000u; // 800D9FBC
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 800D9FC0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D9FC4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D9FC8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D9FCC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9F94; } // 800D9FD0
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9FD4
  cmpu(c,0,c->r[0],0x00000001u); // 800D9FD8
  if (!crb(c,2)) { goto L_800D9FFC; } // 800D9FDC
  c->r[0]=R32(c->r[31]+0x000000C8u); // 800D9FE0
  c->r[0]=rotl(c->r[0],17)&0x00000001u; cr0(c,c->r[0]); // 800D9FE4
  if (crb(c,2)) { goto L_800D9FFC; } // 800D9FE8
  c->r[3]=c->r[28]|c->r[28]; // 800D9FEC
  c->lr=0x800D9FF4u; f_800CBAE0(c); // 800D9FF0
  c->r[3]=0u+0x00000000u; // 800D9FF4
  goto L_800DA18C; // 800D9FF8
L_800D9FFC:;
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800D9FFC
  cmps(c,0,(int32_t)c->r[0],0); // 800DA000
  if (!crb(c,2)) { goto L_800DA01C; } // 800DA004
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800DA008
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA00C
  c->r[0]=c->r[0]|0x00008000u; // 800DA010
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800DA014
  goto L_800DA028; // 800DA018
L_800DA01C:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800DA01C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA020
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800DA024
L_800DA028:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800DA028
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800DA02C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA030
  c->r[0]=c->r[0]|0x0000C000u; // 800DA034
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800DA038
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800DA03C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800DA040
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800DA044
L_800DA048:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DA048
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9DE8; } // 800DA04C
  c->r[3]=0u+0xCD800000u; // 800DA050
  c->r[0]=R32(c->r[3]+0x000000C4u); // 800DA054
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA058
  c->r[0]=c->r[0]|0x0000C000u; // 800DA05C
  W32(c->r[3]+0x000000C4u,c->r[0]); // 800DA060
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800DA064
  cmps(c,0,(int32_t)c->r[0],0); // 800DA068
  if (!crb(c,2)) { goto L_800DA084; } // 800DA06C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800DA070
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA074
  c->r[0]=c->r[0]|0x00008000u; // 800DA078
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800DA07C
  goto L_800DA090; // 800DA080
L_800DA084:;
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800DA084
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA088
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800DA08C
L_800DA090:;
  c->lr=0x800DA094u; f_800D0540(c); // 800DA090
  c->r[30]=c->r[4]|c->r[4]; // 800DA094
  c->r[29]=c->r[3]|c->r[3]; // 800DA098
  c->r[27]=0u+0x00000002u; // 800DA09C
  c->r[26]=0u+0x00000000u; // 800DA0A0
L_800DA0A4:;
  c->lr=0x800DA0A8u; f_800D0540(c); // 800DA0A4
  c->r[7]=addc(c,~c->r[30],c->r[4],1); // 800DA0A8
  c->r[6]=0u+0x000001E6u; // 800DA0AC
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800DA0B0
  c->r[5]=0u+0x00000000u; // 800DA0B4
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800DA0B8
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800DA0BC
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800DA0C0
  c->lr=0x800DA0C8u; f_802179FC(c); // 800DA0C4
  c->r[0]=c->r[3]^0x80000000u; // 800DA0C8
  c->r[5]=c->r[26]^0x80000000u; // 800DA0CC
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 800DA0D0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800DA0D4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800DA0D8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800DA0DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800DA0A4; } // 800DA0E0
  c->r[3]=0u+0xCD800000u; // 800DA0E4
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800DA0E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800DA0EC
  c->r[0]=c->r[0]|0x00004000u; // 800DA0F0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800DA0F4
  c->lr=0x800DA0FCu; f_800D0540(c); // 800DA0F8
  c->r[30]=c->r[4]|c->r[4]; // 800DA0FC
  c->r[29]=c->r[3]|c->r[3]; // 800DA100
  c->r[27]=0u+0x00000002u; // 800DA104
  c->r[26]=0u+0x00000000u; // 800DA108
L_800DA10C:;
  c->lr=0x800DA110u; f_800D0540(c); // 800DA10C
  c->r[7]=addc(c,~c->r[30],c->r[4],1); // 800DA110
  c->r[6]=0u+0x000001E6u; // 800DA114
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800DA118
  c->r[5]=0u+0x00000000u; // 800DA11C
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800DA120
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800DA124
  c->r[3]=(rotl(c->r[7],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800DA128
  c->lr=0x800DA130u; f_802179FC(c); // 800DA12C
  c->r[0]=c->r[3]^0x80000000u; // 800DA130
  c->r[5]=c->r[26]^0x80000000u; // 800DA134
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 800DA138
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800DA13C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800DA140
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800DA144
  if (!crb(c,2)) { IRQCHK(c); goto L_800DA10C; } // 800DA148
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 800DA14C
  cmps(c,0,(int32_t)c->r[0],0); // 800DA150
  if (!crb(c,2)) { goto L_800DA16C; } // 800DA154
  c->r[3]=0u+0xCD800000u; // 800DA158
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800DA15C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA160
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800DA164
  goto L_800DA180; // 800DA168
L_800DA16C:;
  c->r[3]=0u+0xCD800000u; // 800DA16C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800DA170
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800DA174
  c->r[0]=c->r[0]|0x00008000u; // 800DA178
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800DA17C
L_800DA180:;
  c->r[3]=c->r[28]|c->r[28]; // 800DA180
  c->lr=0x800DA188u; f_800CBAE0(c); // 800DA184
  c->r[3]=0u+0x00000001u; // 800DA188
L_800DA18C:;
  c->r[11]=c->r[1]+0x00000030u; // 800DA18C
  c->lr=0x800DA194u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DA190
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DA194
  c->lr=c->r[0]; // 800DA198
  c->r[1]=c->r[1]+0x00000030u; // 800DA19C
  return; // 800DA1A0
}

// __VISetYUVSEL
void f_800DA1B0(Ctx* __restrict c) {
  trace_call(0x800DA1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA1B0
  c->r[0]=c->lr; // 800DA1B4
  c->r[4]=0u+0x80000000u; // 800DA1B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA1BC
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800DA1C0
  cmpu(c,0,c->r[0],0x00000001u); // 800DA1C4
  if (crb(c,2)) { goto L_800DA1E8; } // 800DA1C8
  cmpu(c,0,c->r[0],0x00000005u); // 800DA1CC
  if (crb(c,2)) { goto L_800DA1E8; } // 800DA1D0
  cmpu(c,0,c->r[0],0x00000002u); // 800DA1D4
  if (crb(c,2)) { goto L_800DA1F4; } // 800DA1D8
  cmps(c,0,(int32_t)c->r[0],0); // 800DA1DC
  if (crb(c,2)) { goto L_800DA200; } // 800DA1E0
  goto L_800DA20C; // 800DA1E4
L_800DA1E8:;
  c->r[0]=0u+0x00000002u; // 800DA1E8
  W32(c->r[13]+0xFFFFA68Cu,c->r[0]); // 800DA1EC
  goto L_800DA214; // 800DA1F0
L_800DA1F4:;
  c->r[0]=0u+0x00000001u; // 800DA1F4
  W32(c->r[13]+0xFFFFA68Cu,c->r[0]); // 800DA1F8
  goto L_800DA214; // 800DA1FC
L_800DA200:;
  c->r[0]=0u+0x00000000u; // 800DA200
  W32(c->r[13]+0xFFFFA68Cu,c->r[0]); // 800DA204
  goto L_800DA214; // 800DA208
L_800DA20C:;
  c->r[0]=0u+0x00000000u; // 800DA20C
  W32(c->r[13]+0xFFFFA68Cu,c->r[0]); // 800DA210
L_800DA214:;
  c->r[3]=rotl(c->r[3],5)&0x00001FE0u; // 800DA214
  c->r[4]=0u+0x00000001u; // 800DA218
  c->r[0]=c->r[3]|c->r[0]; // 800DA21C
  W8(c->r[1]+0x00000008u,c->r[4]); // 800DA220
  c->r[4]=c->r[1]+0x00000008u; // 800DA224
  c->r[3]=0u+0x000000E0u; // 800DA228
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DA22C
  c->r[5]=0u+0x00000002u; // 800DA230
  c->lr=0x800DA238u; f_800D9C70(c); // 800DA234
  c->r[3]=0u+0x00000002u; // 800DA238
  c->lr=0x800DA240u; f_800D9890(c); // 800DA23C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA240
  c->lr=c->r[0]; // 800DA244
  c->r[1]=c->r[1]+0x00000010u; // 800DA248
  return; // 800DA24C
}

// __VISetFilter4EURGB60
void f_800DA250(Ctx* __restrict c) {
  trace_call(0x800DA250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA250
  c->r[0]=c->lr; // 800DA254
  c->r[5]=0u+0x00000002u; // 800DA258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA25C
  c->r[0]=0u+0x0000006Eu; // 800DA260
  c->r[4]=c->r[1]+0x00000008u; // 800DA264
  W8(c->r[1]+0x00000009u,c->r[3]); // 800DA268
  c->r[3]=0u+0x000000E0u; // 800DA26C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DA270
  c->lr=0x800DA278u; f_800D9C70(c); // 800DA274
  c->r[3]=0u+0x00000002u; // 800DA278
  c->lr=0x800DA280u; f_800D9890(c); // 800DA27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA280
  c->lr=c->r[0]; // 800DA284
  c->r[1]=c->r[1]+0x00000010u; // 800DA288
  return; // 800DA28C
}

// __VISetCGMS
void f_800DA290(Ctx* __restrict c) {
  trace_call(0x800DA290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA290
  c->r[0]=c->lr; // 800DA294
  c->r[7]=0u+0x00000005u; // 800DA298
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA29C
  c->r[4]=c->r[1]+0x00000008u; // 800DA2A0
  c->r[3]=R8(c->r[13]+0xFFFF8FB4u); // 800DA2A4
  c->r[0]=R8(c->r[13]+0xFFFF8FB6u); // 800DA2A8
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 800DA2AC
  c->r[5]=R8(c->r[13]+0xFFFF8FB5u); // 800DA2B0
  W8(c->r[1]+0x00000008u,c->r[7]); // 800DA2B4
  c->r[3]=0u+0x000000E0u; // 800DA2B8
  c->r[6]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 800DA2BC
  c->r[5]=0u+0x00000003u; // 800DA2C0
  W8(c->r[1]+0x00000009u,c->r[6]); // 800DA2C4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800DA2C8
  c->lr=0x800DA2D0u; f_800D9C70(c); // 800DA2CC
  c->r[3]=0u+0x00000002u; // 800DA2D0
  c->lr=0x800DA2D8u; f_800D9890(c); // 800DA2D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA2D8
  c->lr=c->r[0]; // 800DA2DC
  c->r[1]=c->r[1]+0x00000010u; // 800DA2E0
  return; // 800DA2E4
}

// __VISetWSS
void f_800DA2F0(Ctx* __restrict c) {
  trace_call(0x800DA2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA2F0
  c->r[0]=c->lr; // 800DA2F4
  c->r[7]=0u+0x00000008u; // 800DA2F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA2FC
  c->r[4]=c->r[1]+0x00000008u; // 800DA300
  c->r[3]=R8(c->r[13]+0xFFFF8FB7u); // 800DA304
  c->r[0]=R8(c->r[13]+0xFFFF8FB9u); // 800DA308
  c->r[5]=rotl(c->r[3],0)&0x0000000Fu; // 800DA30C
  c->r[6]=R8(c->r[13]+0xFFFF8FB8u); // 800DA310
  c->r[3]=R8(c->r[13]+0xFFFF8FBAu); // 800DA314
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800DA318
  c->r[5]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[5]&~0x000000F0u); // 800DA31C
  W8(c->r[1]+0x00000009u,c->r[5]); // 800DA320
  c->r[0]=(rotl(c->r[3],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 800DA324
  c->r[3]=0u+0x000000E0u; // 800DA328
  W8(c->r[1]+0x00000008u,c->r[7]); // 800DA32C
  c->r[5]=0u+0x00000003u; // 800DA330
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800DA334
  c->lr=0x800DA33Cu; f_800D9C70(c); // 800DA338
  c->r[3]=0u+0x00000002u; // 800DA33C
  c->lr=0x800DA344u; f_800D9890(c); // 800DA340
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA344
  c->lr=c->r[0]; // 800DA348
  c->r[1]=c->r[1]+0x00000010u; // 800DA34C
  return; // 800DA350
}

// __VISetClosedCaption
void f_800DA360(Ctx* __restrict c) {
  trace_call(0x800DA360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA360
  c->r[0]=c->lr; // 800DA364
  c->r[9]=0u+0x0000007Au; // 800DA368
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA36C
  c->r[4]=c->r[1]+0x00000008u; // 800DA370
  c->r[0]=R8(c->r[13]+0xFFFF8FBBu); // 800DA374
  c->r[5]=R8(c->r[13]+0xFFFF8FBCu); // 800DA378
  c->r[8]=rotl(c->r[0],0)&0x0000007Fu; // 800DA37C
  c->r[3]=R8(c->r[13]+0xFFFF8FBDu); // 800DA380
  c->r[0]=R8(c->r[13]+0xFFFF8FBEu); // 800DA384
  c->r[7]=rotl(c->r[5],0)&0x0000007Fu; // 800DA388
  c->r[6]=rotl(c->r[3],0)&0x0000007Fu; // 800DA38C
  W8(c->r[1]+0x00000008u,c->r[9]); // 800DA390
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800DA394
  c->r[3]=0u+0x000000E0u; // 800DA398
  W8(c->r[1]+0x00000009u,c->r[8]); // 800DA39C
  c->r[5]=0u+0x00000005u; // 800DA3A0
  W8(c->r[1]+0x0000000Au,c->r[7]); // 800DA3A4
  W8(c->r[1]+0x0000000Bu,c->r[6]); // 800DA3A8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800DA3AC
  c->lr=0x800DA3B4u; f_800D9C70(c); // 800DA3B0
  c->r[3]=0u+0x00000002u; // 800DA3B4
  c->lr=0x800DA3BCu; f_800D9890(c); // 800DA3B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA3BC
  c->lr=c->r[0]; // 800DA3C0
  c->r[1]=c->r[1]+0x00000010u; // 800DA3C4
  return; // 800DA3C8
}

// __VISetMacrovision
void f_800DA3D0(Ctx* __restrict c) {
  trace_call(0x800DA3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA3D0
  c->r[0]=c->lr; // 800DA3D4
  c->r[3]=0u+0x802B0000u; // 800DA3D8
  W32(c->r[1]+0x00000194u,c->r[0]); // 800DA3DC
  c->r[3]=c->r[3]+0xFFFFE870u; // 800DA3E0
  W32(c->r[1]+0x0000018Cu,c->r[31]); // 800DA3E4
  W32(c->r[1]+0x00000188u,c->r[30]); // 800DA3E8
  W32(c->r[1]+0x00000184u,c->r[29]); // 800DA3EC
  W32(c->r[1]+0x00000180u,c->r[28]); // 800DA3F0
  c->r[0]=R32(c->r[13]+0xFFFFA688u); // 800DA3F4
  cmps(c,0,(int32_t)c->r[0],2); // 800DA3F8
  if (crb(c,2)) { goto L_800DA41C; } // 800DA3FC
  cmps(c,0,(int32_t)c->r[0],3); // 800DA400
  if (crb(c,2)) { goto L_800DA824; } // 800DA404
  cmps(c,0,(int32_t)c->r[0],4); // 800DA408
  if (crb(c,2)) { goto L_800DAC2C; } // 800DA40C
  cmps(c,0,(int32_t)c->r[0],1); // 800DA410
  if (crb(c,2)) { goto L_800DB034; } // 800DA414
  goto L_800DB128; // 800DA418
L_800DA41C:;
  c->r[0]=R32(c->r[13]+0xFFFF8FB0u); // 800DA41C
  cmps(c,0,(int32_t)c->r[0],0); // 800DA420
  if (crb(c,2)) { goto L_800DA444; } // 800DA424
  cmpu(c,0,c->r[0],0x00000001u); // 800DA428
  if (crb(c,2)) { goto L_800DA53C; } // 800DA42C
  cmpu(c,0,c->r[0],0x00000002u); // 800DA430
  if (crb(c,2)) { goto L_800DA634; } // 800DA434
  cmpu(c,0,c->r[0],0x00000005u); // 800DA438
  if (crb(c,2)) { goto L_800DA72C; } // 800DA43C
  goto L_800DB128; // 800DA440
L_800DA444:;
  c->r[30]=c->r[3]+0x00000420u; // 800DA444
  c->r[31]=0u+0x00000040u; // 800DA448
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DA44C
  c->r[4]=c->r[1]+0x00000158u; // 800DA450
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DA454
  c->r[3]=0u+0x000000E0u; // 800DA458
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DA45C
  c->r[5]=0u+0x0000001Bu; // 800DA460
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DA464
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DA468
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DA46C
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DA470
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DA474
  W8(c->r[1]+0x00000159u,c->r[29]); // 800DA478
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DA47C
  W8(c->r[1]+0x0000015Au,c->r[28]); // 800DA480
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DA484
  W8(c->r[1]+0x0000015Bu,c->r[12]); // 800DA488
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DA48C
  W8(c->r[1]+0x0000015Cu,c->r[11]); // 800DA490
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DA494
  W8(c->r[1]+0x0000015Du,c->r[10]); // 800DA498
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DA49C
  W8(c->r[1]+0x0000015Eu,c->r[9]); // 800DA4A0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DA4A4
  W8(c->r[1]+0x0000015Fu,c->r[8]); // 800DA4A8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DA4AC
  W8(c->r[1]+0x00000160u,c->r[7]); // 800DA4B0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DA4B4
  W8(c->r[1]+0x00000161u,c->r[29]); // 800DA4B8
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DA4BC
  W8(c->r[1]+0x00000162u,c->r[28]); // 800DA4C0
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DA4C4
  W8(c->r[1]+0x00000163u,c->r[12]); // 800DA4C8
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DA4CC
  W8(c->r[1]+0x00000164u,c->r[11]); // 800DA4D0
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DA4D4
  W8(c->r[1]+0x00000165u,c->r[10]); // 800DA4D8
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DA4DC
  W8(c->r[1]+0x00000166u,c->r[9]); // 800DA4E0
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DA4E4
  W8(c->r[1]+0x00000167u,c->r[8]); // 800DA4E8
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DA4EC
  W8(c->r[1]+0x00000168u,c->r[7]); // 800DA4F0
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DA4F4
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DA4F8
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DA4FC
  W8(c->r[1]+0x00000158u,c->r[31]); // 800DA500
  W8(c->r[1]+0x00000169u,c->r[29]); // 800DA504
  W8(c->r[1]+0x0000016Au,c->r[28]); // 800DA508
  W8(c->r[1]+0x0000016Bu,c->r[12]); // 800DA50C
  W8(c->r[1]+0x0000016Cu,c->r[11]); // 800DA510
  W8(c->r[1]+0x0000016Du,c->r[10]); // 800DA514
  W8(c->r[1]+0x0000016Eu,c->r[9]); // 800DA518
  W8(c->r[1]+0x0000016Fu,c->r[8]); // 800DA51C
  W8(c->r[1]+0x00000170u,c->r[7]); // 800DA520
  W8(c->r[1]+0x00000171u,c->r[6]); // 800DA524
  W8(c->r[1]+0x00000172u,c->r[0]); // 800DA528
  c->lr=0x800DA530u; f_800D9C70(c); // 800DA52C
  c->r[3]=0u+0x00000002u; // 800DA530
  c->lr=0x800DA538u; f_800D9890(c); // 800DA534
  goto L_800DB128; // 800DA538
L_800DA53C:;
  c->r[30]=c->r[3]+0x00000474u; // 800DA53C
  c->r[31]=0u+0x00000040u; // 800DA540
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DA544
  c->r[4]=c->r[1]+0x0000013Cu; // 800DA548
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DA54C
  c->r[3]=0u+0x000000E0u; // 800DA550
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DA554
  c->r[5]=0u+0x0000001Bu; // 800DA558
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DA55C
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DA560
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DA564
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DA568
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DA56C
  W8(c->r[1]+0x0000013Du,c->r[29]); // 800DA570
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DA574
  W8(c->r[1]+0x0000013Eu,c->r[28]); // 800DA578
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DA57C
  W8(c->r[1]+0x0000013Fu,c->r[12]); // 800DA580
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DA584
  W8(c->r[1]+0x00000140u,c->r[11]); // 800DA588
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DA58C
  W8(c->r[1]+0x00000141u,c->r[10]); // 800DA590
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DA594
  W8(c->r[1]+0x00000142u,c->r[9]); // 800DA598
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DA59C
  W8(c->r[1]+0x00000143u,c->r[8]); // 800DA5A0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DA5A4
  W8(c->r[1]+0x00000144u,c->r[7]); // 800DA5A8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DA5AC
  W8(c->r[1]+0x00000145u,c->r[29]); // 800DA5B0
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DA5B4
  W8(c->r[1]+0x00000146u,c->r[28]); // 800DA5B8
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DA5BC
  W8(c->r[1]+0x00000147u,c->r[12]); // 800DA5C0
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DA5C4
  W8(c->r[1]+0x00000148u,c->r[11]); // 800DA5C8
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DA5CC
  W8(c->r[1]+0x00000149u,c->r[10]); // 800DA5D0
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DA5D4
  W8(c->r[1]+0x0000014Au,c->r[9]); // 800DA5D8
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DA5DC
  W8(c->r[1]+0x0000014Bu,c->r[8]); // 800DA5E0
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DA5E4
  W8(c->r[1]+0x0000014Cu,c->r[7]); // 800DA5E8
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DA5EC
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DA5F0
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DA5F4
  W8(c->r[1]+0x0000013Cu,c->r[31]); // 800DA5F8
  W8(c->r[1]+0x0000014Du,c->r[29]); // 800DA5FC
  W8(c->r[1]+0x0000014Eu,c->r[28]); // 800DA600
  W8(c->r[1]+0x0000014Fu,c->r[12]); // 800DA604
  W8(c->r[1]+0x00000150u,c->r[11]); // 800DA608
  W8(c->r[1]+0x00000151u,c->r[10]); // 800DA60C
  W8(c->r[1]+0x00000152u,c->r[9]); // 800DA610
  W8(c->r[1]+0x00000153u,c->r[8]); // 800DA614
  W8(c->r[1]+0x00000154u,c->r[7]); // 800DA618
  W8(c->r[1]+0x00000155u,c->r[6]); // 800DA61C
  W8(c->r[1]+0x00000156u,c->r[0]); // 800DA620
  c->lr=0x800DA628u; f_800D9C70(c); // 800DA624
  c->r[3]=0u+0x00000002u; // 800DA628
  c->lr=0x800DA630u; f_800D9890(c); // 800DA62C
  goto L_800DB128; // 800DA630
L_800DA634:;
  c->r[30]=c->r[3]+0x0000051Cu; // 800DA634
  c->r[31]=0u+0x00000040u; // 800DA638
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DA63C
  c->r[4]=c->r[1]+0x00000120u; // 800DA640
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DA644
  c->r[3]=0u+0x000000E0u; // 800DA648
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DA64C
  c->r[5]=0u+0x0000001Bu; // 800DA650
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DA654
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DA658
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DA65C
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DA660
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DA664
  W8(c->r[1]+0x00000121u,c->r[29]); // 800DA668
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DA66C
  W8(c->r[1]+0x00000122u,c->r[28]); // 800DA670
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DA674
  W8(c->r[1]+0x00000123u,c->r[12]); // 800DA678
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DA67C
  W8(c->r[1]+0x00000124u,c->r[11]); // 800DA680
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DA684
  W8(c->r[1]+0x00000125u,c->r[10]); // 800DA688
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DA68C
  W8(c->r[1]+0x00000126u,c->r[9]); // 800DA690
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DA694
  W8(c->r[1]+0x00000127u,c->r[8]); // 800DA698
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DA69C
  W8(c->r[1]+0x00000128u,c->r[7]); // 800DA6A0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DA6A4
  W8(c->r[1]+0x00000129u,c->r[29]); // 800DA6A8
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DA6AC
  W8(c->r[1]+0x0000012Au,c->r[28]); // 800DA6B0
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DA6B4
  W8(c->r[1]+0x0000012Bu,c->r[12]); // 800DA6B8
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DA6BC
  W8(c->r[1]+0x0000012Cu,c->r[11]); // 800DA6C0
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DA6C4
  W8(c->r[1]+0x0000012Du,c->r[10]); // 800DA6C8
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DA6CC
  W8(c->r[1]+0x0000012Eu,c->r[9]); // 800DA6D0
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DA6D4
  W8(c->r[1]+0x0000012Fu,c->r[8]); // 800DA6D8
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DA6DC
  W8(c->r[1]+0x00000130u,c->r[7]); // 800DA6E0
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DA6E4
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DA6E8
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DA6EC
  W8(c->r[1]+0x00000120u,c->r[31]); // 800DA6F0
  W8(c->r[1]+0x00000131u,c->r[29]); // 800DA6F4
  W8(c->r[1]+0x00000132u,c->r[28]); // 800DA6F8
  W8(c->r[1]+0x00000133u,c->r[12]); // 800DA6FC
  W8(c->r[1]+0x00000134u,c->r[11]); // 800DA700
  W8(c->r[1]+0x00000135u,c->r[10]); // 800DA704
  W8(c->r[1]+0x00000136u,c->r[9]); // 800DA708
  W8(c->r[1]+0x00000137u,c->r[8]); // 800DA70C
  W8(c->r[1]+0x00000138u,c->r[7]); // 800DA710
  W8(c->r[1]+0x00000139u,c->r[6]); // 800DA714
  W8(c->r[1]+0x0000013Au,c->r[0]); // 800DA718
  c->lr=0x800DA720u; f_800D9C70(c); // 800DA71C
  c->r[3]=0u+0x00000002u; // 800DA720
  c->lr=0x800DA728u; f_800D9890(c); // 800DA724
  goto L_800DB128; // 800DA728
L_800DA72C:;
  c->r[30]=c->r[3]+0x000004C8u; // 800DA72C
  c->r[31]=0u+0x00000040u; // 800DA730
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DA734
  c->r[4]=c->r[1]+0x00000104u; // 800DA738
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DA73C
  c->r[3]=0u+0x000000E0u; // 800DA740
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DA744
  c->r[5]=0u+0x0000001Bu; // 800DA748
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DA74C
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DA750
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DA754
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DA758
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DA75C
  W8(c->r[1]+0x00000105u,c->r[29]); // 800DA760
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DA764
  W8(c->r[1]+0x00000106u,c->r[28]); // 800DA768
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DA76C
  W8(c->r[1]+0x00000107u,c->r[12]); // 800DA770
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DA774
  W8(c->r[1]+0x00000108u,c->r[11]); // 800DA778
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DA77C
  W8(c->r[1]+0x00000109u,c->r[10]); // 800DA780
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DA784
  W8(c->r[1]+0x0000010Au,c->r[9]); // 800DA788
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DA78C
  W8(c->r[1]+0x0000010Bu,c->r[8]); // 800DA790
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DA794
  W8(c->r[1]+0x0000010Cu,c->r[7]); // 800DA798
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DA79C
  W8(c->r[1]+0x0000010Du,c->r[29]); // 800DA7A0
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DA7A4
  W8(c->r[1]+0x0000010Eu,c->r[28]); // 800DA7A8
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DA7AC
  W8(c->r[1]+0x0000010Fu,c->r[12]); // 800DA7B0
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DA7B4
  W8(c->r[1]+0x00000110u,c->r[11]); // 800DA7B8
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DA7BC
  W8(c->r[1]+0x00000111u,c->r[10]); // 800DA7C0
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DA7C4
  W8(c->r[1]+0x00000112u,c->r[9]); // 800DA7C8
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DA7CC
  W8(c->r[1]+0x00000113u,c->r[8]); // 800DA7D0
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DA7D4
  W8(c->r[1]+0x00000114u,c->r[7]); // 800DA7D8
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DA7DC
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DA7E0
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DA7E4
  W8(c->r[1]+0x00000104u,c->r[31]); // 800DA7E8
  W8(c->r[1]+0x00000115u,c->r[29]); // 800DA7EC
  W8(c->r[1]+0x00000116u,c->r[28]); // 800DA7F0
  W8(c->r[1]+0x00000117u,c->r[12]); // 800DA7F4
  W8(c->r[1]+0x00000118u,c->r[11]); // 800DA7F8
  W8(c->r[1]+0x00000119u,c->r[10]); // 800DA7FC
  W8(c->r[1]+0x0000011Au,c->r[9]); // 800DA800
  W8(c->r[1]+0x0000011Bu,c->r[8]); // 800DA804
  W8(c->r[1]+0x0000011Cu,c->r[7]); // 800DA808
  W8(c->r[1]+0x0000011Du,c->r[6]); // 800DA80C
  W8(c->r[1]+0x0000011Eu,c->r[0]); // 800DA810
  c->lr=0x800DA818u; f_800D9C70(c); // 800DA814
  c->r[3]=0u+0x00000002u; // 800DA818
  c->lr=0x800DA820u; f_800D9890(c); // 800DA81C
  goto L_800DB128; // 800DA820
L_800DA824:;
  c->r[0]=R32(c->r[13]+0xFFFF8FB0u); // 800DA824
  cmps(c,0,(int32_t)c->r[0],0); // 800DA828
  if (crb(c,2)) { goto L_800DA84C; } // 800DA82C
  cmpu(c,0,c->r[0],0x00000001u); // 800DA830
  if (crb(c,2)) { goto L_800DA944; } // 800DA834
  cmpu(c,0,c->r[0],0x00000002u); // 800DA838
  if (crb(c,2)) { goto L_800DAA3C; } // 800DA83C
  cmpu(c,0,c->r[0],0x00000005u); // 800DA840
  if (crb(c,2)) { goto L_800DAB34; } // 800DA844
  goto L_800DB128; // 800DA848
L_800DA84C:;
  c->r[30]=c->r[3]+0x0000043Cu; // 800DA84C
  c->r[31]=0u+0x00000040u; // 800DA850
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DA854
  c->r[4]=c->r[1]+0x000000E8u; // 800DA858
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DA85C
  c->r[3]=0u+0x000000E0u; // 800DA860
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DA864
  c->r[5]=0u+0x0000001Bu; // 800DA868
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DA86C
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DA870
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DA874
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DA878
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DA87C
  W8(c->r[1]+0x000000E9u,c->r[29]); // 800DA880
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DA884
  W8(c->r[1]+0x000000EAu,c->r[28]); // 800DA888
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DA88C
  W8(c->r[1]+0x000000EBu,c->r[12]); // 800DA890
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DA894
  W8(c->r[1]+0x000000ECu,c->r[11]); // 800DA898
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DA89C
  W8(c->r[1]+0x000000EDu,c->r[10]); // 800DA8A0
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DA8A4
  W8(c->r[1]+0x000000EEu,c->r[9]); // 800DA8A8
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DA8AC
  W8(c->r[1]+0x000000EFu,c->r[8]); // 800DA8B0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DA8B4
  W8(c->r[1]+0x000000F0u,c->r[7]); // 800DA8B8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DA8BC
  W8(c->r[1]+0x000000F1u,c->r[29]); // 800DA8C0
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DA8C4
  W8(c->r[1]+0x000000F2u,c->r[28]); // 800DA8C8
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DA8CC
  W8(c->r[1]+0x000000F3u,c->r[12]); // 800DA8D0
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DA8D4
  W8(c->r[1]+0x000000F4u,c->r[11]); // 800DA8D8
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DA8DC
  W8(c->r[1]+0x000000F5u,c->r[10]); // 800DA8E0
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DA8E4
  W8(c->r[1]+0x000000F6u,c->r[9]); // 800DA8E8
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DA8EC
  W8(c->r[1]+0x000000F7u,c->r[8]); // 800DA8F0
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DA8F4
  W8(c->r[1]+0x000000F8u,c->r[7]); // 800DA8F8
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DA8FC
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DA900
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DA904
  W8(c->r[1]+0x000000E8u,c->r[31]); // 800DA908
  W8(c->r[1]+0x000000F9u,c->r[29]); // 800DA90C
  W8(c->r[1]+0x000000FAu,c->r[28]); // 800DA910
  W8(c->r[1]+0x000000FBu,c->r[12]); // 800DA914
  W8(c->r[1]+0x000000FCu,c->r[11]); // 800DA918
  W8(c->r[1]+0x000000FDu,c->r[10]); // 800DA91C
  W8(c->r[1]+0x000000FEu,c->r[9]); // 800DA920
  W8(c->r[1]+0x000000FFu,c->r[8]); // 800DA924
  W8(c->r[1]+0x00000100u,c->r[7]); // 800DA928
  W8(c->r[1]+0x00000101u,c->r[6]); // 800DA92C
  W8(c->r[1]+0x00000102u,c->r[0]); // 800DA930
  c->lr=0x800DA938u; f_800D9C70(c); // 800DA934
  c->r[3]=0u+0x00000002u; // 800DA938
  c->lr=0x800DA940u; f_800D9890(c); // 800DA93C
  goto L_800DB128; // 800DA940
L_800DA944:;
  c->r[30]=c->r[3]+0x00000490u; // 800DA944
  c->r[31]=0u+0x00000040u; // 800DA948
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DA94C
  c->r[4]=c->r[1]+0x000000CCu; // 800DA950
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DA954
  c->r[3]=0u+0x000000E0u; // 800DA958
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DA95C
  c->r[5]=0u+0x0000001Bu; // 800DA960
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DA964
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DA968
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DA96C
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DA970
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DA974
  W8(c->r[1]+0x000000CDu,c->r[29]); // 800DA978
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DA97C
  W8(c->r[1]+0x000000CEu,c->r[28]); // 800DA980
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DA984
  W8(c->r[1]+0x000000CFu,c->r[12]); // 800DA988
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DA98C
  W8(c->r[1]+0x000000D0u,c->r[11]); // 800DA990
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DA994
  W8(c->r[1]+0x000000D1u,c->r[10]); // 800DA998
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DA99C
  W8(c->r[1]+0x000000D2u,c->r[9]); // 800DA9A0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DA9A4
  W8(c->r[1]+0x000000D3u,c->r[8]); // 800DA9A8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DA9AC
  W8(c->r[1]+0x000000D4u,c->r[7]); // 800DA9B0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DA9B4
  W8(c->r[1]+0x000000D5u,c->r[29]); // 800DA9B8
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DA9BC
  W8(c->r[1]+0x000000D6u,c->r[28]); // 800DA9C0
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DA9C4
  W8(c->r[1]+0x000000D7u,c->r[12]); // 800DA9C8
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DA9CC
  W8(c->r[1]+0x000000D8u,c->r[11]); // 800DA9D0
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DA9D4
  W8(c->r[1]+0x000000D9u,c->r[10]); // 800DA9D8
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DA9DC
  W8(c->r[1]+0x000000DAu,c->r[9]); // 800DA9E0
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DA9E4
  W8(c->r[1]+0x000000DBu,c->r[8]); // 800DA9E8
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DA9EC
  W8(c->r[1]+0x000000DCu,c->r[7]); // 800DA9F0
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DA9F4
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DA9F8
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DA9FC
  W8(c->r[1]+0x000000CCu,c->r[31]); // 800DAA00
  W8(c->r[1]+0x000000DDu,c->r[29]); // 800DAA04
  W8(c->r[1]+0x000000DEu,c->r[28]); // 800DAA08
  W8(c->r[1]+0x000000DFu,c->r[12]); // 800DAA0C
  W8(c->r[1]+0x000000E0u,c->r[11]); // 800DAA10
  W8(c->r[1]+0x000000E1u,c->r[10]); // 800DAA14
  W8(c->r[1]+0x000000E2u,c->r[9]); // 800DAA18
  W8(c->r[1]+0x000000E3u,c->r[8]); // 800DAA1C
  W8(c->r[1]+0x000000E4u,c->r[7]); // 800DAA20
  W8(c->r[1]+0x000000E5u,c->r[6]); // 800DAA24
  W8(c->r[1]+0x000000E6u,c->r[0]); // 800DAA28
  c->lr=0x800DAA30u; f_800D9C70(c); // 800DAA2C
  c->r[3]=0u+0x00000002u; // 800DAA30
  c->lr=0x800DAA38u; f_800D9890(c); // 800DAA34
  goto L_800DB128; // 800DAA38
L_800DAA3C:;
  c->r[30]=c->r[3]+0x00000538u; // 800DAA3C
  c->r[31]=0u+0x00000040u; // 800DAA40
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DAA44
  c->r[4]=c->r[1]+0x000000B0u; // 800DAA48
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DAA4C
  c->r[3]=0u+0x000000E0u; // 800DAA50
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DAA54
  c->r[5]=0u+0x0000001Bu; // 800DAA58
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DAA5C
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DAA60
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DAA64
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DAA68
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DAA6C
  W8(c->r[1]+0x000000B1u,c->r[29]); // 800DAA70
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DAA74
  W8(c->r[1]+0x000000B2u,c->r[28]); // 800DAA78
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DAA7C
  W8(c->r[1]+0x000000B3u,c->r[12]); // 800DAA80
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DAA84
  W8(c->r[1]+0x000000B4u,c->r[11]); // 800DAA88
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DAA8C
  W8(c->r[1]+0x000000B5u,c->r[10]); // 800DAA90
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DAA94
  W8(c->r[1]+0x000000B6u,c->r[9]); // 800DAA98
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DAA9C
  W8(c->r[1]+0x000000B7u,c->r[8]); // 800DAAA0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DAAA4
  W8(c->r[1]+0x000000B8u,c->r[7]); // 800DAAA8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DAAAC
  W8(c->r[1]+0x000000B9u,c->r[29]); // 800DAAB0
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DAAB4
  W8(c->r[1]+0x000000BAu,c->r[28]); // 800DAAB8
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DAABC
  W8(c->r[1]+0x000000BBu,c->r[12]); // 800DAAC0
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DAAC4
  W8(c->r[1]+0x000000BCu,c->r[11]); // 800DAAC8
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DAACC
  W8(c->r[1]+0x000000BDu,c->r[10]); // 800DAAD0
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DAAD4
  W8(c->r[1]+0x000000BEu,c->r[9]); // 800DAAD8
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DAADC
  W8(c->r[1]+0x000000BFu,c->r[8]); // 800DAAE0
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DAAE4
  W8(c->r[1]+0x000000C0u,c->r[7]); // 800DAAE8
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DAAEC
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DAAF0
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DAAF4
  W8(c->r[1]+0x000000B0u,c->r[31]); // 800DAAF8
  W8(c->r[1]+0x000000C1u,c->r[29]); // 800DAAFC
  W8(c->r[1]+0x000000C2u,c->r[28]); // 800DAB00
  W8(c->r[1]+0x000000C3u,c->r[12]); // 800DAB04
  W8(c->r[1]+0x000000C4u,c->r[11]); // 800DAB08
  W8(c->r[1]+0x000000C5u,c->r[10]); // 800DAB0C
  W8(c->r[1]+0x000000C6u,c->r[9]); // 800DAB10
  W8(c->r[1]+0x000000C7u,c->r[8]); // 800DAB14
  W8(c->r[1]+0x000000C8u,c->r[7]); // 800DAB18
  W8(c->r[1]+0x000000C9u,c->r[6]); // 800DAB1C
  W8(c->r[1]+0x000000CAu,c->r[0]); // 800DAB20
  c->lr=0x800DAB28u; f_800D9C70(c); // 800DAB24
  c->r[3]=0u+0x00000002u; // 800DAB28
  c->lr=0x800DAB30u; f_800D9890(c); // 800DAB2C
  goto L_800DB128; // 800DAB30
L_800DAB34:;
  c->r[30]=c->r[3]+0x000004E4u; // 800DAB34
  c->r[31]=0u+0x00000040u; // 800DAB38
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DAB3C
  c->r[4]=c->r[1]+0x00000094u; // 800DAB40
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DAB44
  c->r[3]=0u+0x000000E0u; // 800DAB48
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DAB4C
  c->r[5]=0u+0x0000001Bu; // 800DAB50
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DAB54
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DAB58
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DAB5C
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DAB60
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DAB64
  W8(c->r[1]+0x00000095u,c->r[29]); // 800DAB68
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DAB6C
  W8(c->r[1]+0x00000096u,c->r[28]); // 800DAB70
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DAB74
  W8(c->r[1]+0x00000097u,c->r[12]); // 800DAB78
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DAB7C
  W8(c->r[1]+0x00000098u,c->r[11]); // 800DAB80
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DAB84
  W8(c->r[1]+0x00000099u,c->r[10]); // 800DAB88
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DAB8C
  W8(c->r[1]+0x0000009Au,c->r[9]); // 800DAB90
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DAB94
  W8(c->r[1]+0x0000009Bu,c->r[8]); // 800DAB98
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DAB9C
  W8(c->r[1]+0x0000009Cu,c->r[7]); // 800DABA0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DABA4
  W8(c->r[1]+0x0000009Du,c->r[29]); // 800DABA8
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DABAC
  W8(c->r[1]+0x0000009Eu,c->r[28]); // 800DABB0
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DABB4
  W8(c->r[1]+0x0000009Fu,c->r[12]); // 800DABB8
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DABBC
  W8(c->r[1]+0x000000A0u,c->r[11]); // 800DABC0
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DABC4
  W8(c->r[1]+0x000000A1u,c->r[10]); // 800DABC8
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DABCC
  W8(c->r[1]+0x000000A2u,c->r[9]); // 800DABD0
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DABD4
  W8(c->r[1]+0x000000A3u,c->r[8]); // 800DABD8
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DABDC
  W8(c->r[1]+0x000000A4u,c->r[7]); // 800DABE0
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DABE4
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DABE8
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DABEC
  W8(c->r[1]+0x00000094u,c->r[31]); // 800DABF0
  W8(c->r[1]+0x000000A5u,c->r[29]); // 800DABF4
  W8(c->r[1]+0x000000A6u,c->r[28]); // 800DABF8
  W8(c->r[1]+0x000000A7u,c->r[12]); // 800DABFC
  W8(c->r[1]+0x000000A8u,c->r[11]); // 800DAC00
  W8(c->r[1]+0x000000A9u,c->r[10]); // 800DAC04
  W8(c->r[1]+0x000000AAu,c->r[9]); // 800DAC08
  W8(c->r[1]+0x000000ABu,c->r[8]); // 800DAC0C
  W8(c->r[1]+0x000000ACu,c->r[7]); // 800DAC10
  W8(c->r[1]+0x000000ADu,c->r[6]); // 800DAC14
  W8(c->r[1]+0x000000AEu,c->r[0]); // 800DAC18
  c->lr=0x800DAC20u; f_800D9C70(c); // 800DAC1C
  c->r[3]=0u+0x00000002u; // 800DAC20
  c->lr=0x800DAC28u; f_800D9890(c); // 800DAC24
  goto L_800DB128; // 800DAC28
L_800DAC2C:;
  c->r[0]=R32(c->r[13]+0xFFFF8FB0u); // 800DAC2C
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC30
  if (crb(c,2)) { goto L_800DAC54; } // 800DAC34
  cmpu(c,0,c->r[0],0x00000001u); // 800DAC38
  if (crb(c,2)) { goto L_800DAD4C; } // 800DAC3C
  cmpu(c,0,c->r[0],0x00000002u); // 800DAC40
  if (crb(c,2)) { goto L_800DAE44; } // 800DAC44
  cmpu(c,0,c->r[0],0x00000005u); // 800DAC48
  if (crb(c,2)) { goto L_800DAF3C; } // 800DAC4C
  goto L_800DB128; // 800DAC50
L_800DAC54:;
  c->r[30]=c->r[3]+0x00000458u; // 800DAC54
  c->r[31]=0u+0x00000040u; // 800DAC58
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DAC5C
  c->r[4]=c->r[1]+0x00000078u; // 800DAC60
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DAC64
  c->r[3]=0u+0x000000E0u; // 800DAC68
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DAC6C
  c->r[5]=0u+0x0000001Bu; // 800DAC70
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DAC74
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DAC78
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DAC7C
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DAC80
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DAC84
  W8(c->r[1]+0x00000079u,c->r[29]); // 800DAC88
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DAC8C
  W8(c->r[1]+0x0000007Au,c->r[28]); // 800DAC90
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DAC94
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 800DAC98
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DAC9C
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 800DACA0
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DACA4
  W8(c->r[1]+0x0000007Du,c->r[10]); // 800DACA8
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DACAC
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 800DACB0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DACB4
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 800DACB8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DACBC
  W8(c->r[1]+0x00000080u,c->r[7]); // 800DACC0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DACC4
  W8(c->r[1]+0x00000081u,c->r[29]); // 800DACC8
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DACCC
  W8(c->r[1]+0x00000082u,c->r[28]); // 800DACD0
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DACD4
  W8(c->r[1]+0x00000083u,c->r[12]); // 800DACD8
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DACDC
  W8(c->r[1]+0x00000084u,c->r[11]); // 800DACE0
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DACE4
  W8(c->r[1]+0x00000085u,c->r[10]); // 800DACE8
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DACEC
  W8(c->r[1]+0x00000086u,c->r[9]); // 800DACF0
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DACF4
  W8(c->r[1]+0x00000087u,c->r[8]); // 800DACF8
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DACFC
  W8(c->r[1]+0x00000088u,c->r[7]); // 800DAD00
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DAD04
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DAD08
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DAD0C
  W8(c->r[1]+0x00000078u,c->r[31]); // 800DAD10
  W8(c->r[1]+0x00000089u,c->r[29]); // 800DAD14
  W8(c->r[1]+0x0000008Au,c->r[28]); // 800DAD18
  W8(c->r[1]+0x0000008Bu,c->r[12]); // 800DAD1C
  W8(c->r[1]+0x0000008Cu,c->r[11]); // 800DAD20
  W8(c->r[1]+0x0000008Du,c->r[10]); // 800DAD24
  W8(c->r[1]+0x0000008Eu,c->r[9]); // 800DAD28
  W8(c->r[1]+0x0000008Fu,c->r[8]); // 800DAD2C
  W8(c->r[1]+0x00000090u,c->r[7]); // 800DAD30
  W8(c->r[1]+0x00000091u,c->r[6]); // 800DAD34
  W8(c->r[1]+0x00000092u,c->r[0]); // 800DAD38
  c->lr=0x800DAD40u; f_800D9C70(c); // 800DAD3C
  c->r[3]=0u+0x00000002u; // 800DAD40
  c->lr=0x800DAD48u; f_800D9890(c); // 800DAD44
  goto L_800DB128; // 800DAD48
L_800DAD4C:;
  c->r[30]=c->r[3]+0x000004ACu; // 800DAD4C
  c->r[31]=0u+0x00000040u; // 800DAD50
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DAD54
  c->r[4]=c->r[1]+0x0000005Cu; // 800DAD58
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DAD5C
  c->r[3]=0u+0x000000E0u; // 800DAD60
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DAD64
  c->r[5]=0u+0x0000001Bu; // 800DAD68
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DAD6C
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DAD70
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DAD74
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DAD78
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DAD7C
  W8(c->r[1]+0x0000005Du,c->r[29]); // 800DAD80
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DAD84
  W8(c->r[1]+0x0000005Eu,c->r[28]); // 800DAD88
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DAD8C
  W8(c->r[1]+0x0000005Fu,c->r[12]); // 800DAD90
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DAD94
  W8(c->r[1]+0x00000060u,c->r[11]); // 800DAD98
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DAD9C
  W8(c->r[1]+0x00000061u,c->r[10]); // 800DADA0
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DADA4
  W8(c->r[1]+0x00000062u,c->r[9]); // 800DADA8
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DADAC
  W8(c->r[1]+0x00000063u,c->r[8]); // 800DADB0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DADB4
  W8(c->r[1]+0x00000064u,c->r[7]); // 800DADB8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DADBC
  W8(c->r[1]+0x00000065u,c->r[29]); // 800DADC0
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DADC4
  W8(c->r[1]+0x00000066u,c->r[28]); // 800DADC8
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DADCC
  W8(c->r[1]+0x00000067u,c->r[12]); // 800DADD0
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DADD4
  W8(c->r[1]+0x00000068u,c->r[11]); // 800DADD8
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DADDC
  W8(c->r[1]+0x00000069u,c->r[10]); // 800DADE0
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DADE4
  W8(c->r[1]+0x0000006Au,c->r[9]); // 800DADE8
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DADEC
  W8(c->r[1]+0x0000006Bu,c->r[8]); // 800DADF0
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DADF4
  W8(c->r[1]+0x0000006Cu,c->r[7]); // 800DADF8
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DADFC
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DAE00
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DAE04
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 800DAE08
  W8(c->r[1]+0x0000006Du,c->r[29]); // 800DAE0C
  W8(c->r[1]+0x0000006Eu,c->r[28]); // 800DAE10
  W8(c->r[1]+0x0000006Fu,c->r[12]); // 800DAE14
  W8(c->r[1]+0x00000070u,c->r[11]); // 800DAE18
  W8(c->r[1]+0x00000071u,c->r[10]); // 800DAE1C
  W8(c->r[1]+0x00000072u,c->r[9]); // 800DAE20
  W8(c->r[1]+0x00000073u,c->r[8]); // 800DAE24
  W8(c->r[1]+0x00000074u,c->r[7]); // 800DAE28
  W8(c->r[1]+0x00000075u,c->r[6]); // 800DAE2C
  W8(c->r[1]+0x00000076u,c->r[0]); // 800DAE30
  c->lr=0x800DAE38u; f_800D9C70(c); // 800DAE34
  c->r[3]=0u+0x00000002u; // 800DAE38
  c->lr=0x800DAE40u; f_800D9890(c); // 800DAE3C
  goto L_800DB128; // 800DAE40
L_800DAE44:;
  c->r[30]=c->r[3]+0x00000554u; // 800DAE44
  c->r[31]=0u+0x00000040u; // 800DAE48
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DAE4C
  c->r[4]=c->r[1]+0x00000040u; // 800DAE50
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DAE54
  c->r[3]=0u+0x000000E0u; // 800DAE58
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DAE5C
  c->r[5]=0u+0x0000001Bu; // 800DAE60
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DAE64
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DAE68
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DAE6C
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DAE70
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DAE74
  W8(c->r[1]+0x00000041u,c->r[29]); // 800DAE78
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DAE7C
  W8(c->r[1]+0x00000042u,c->r[28]); // 800DAE80
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DAE84
  W8(c->r[1]+0x00000043u,c->r[12]); // 800DAE88
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DAE8C
  W8(c->r[1]+0x00000044u,c->r[11]); // 800DAE90
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DAE94
  W8(c->r[1]+0x00000045u,c->r[10]); // 800DAE98
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DAE9C
  W8(c->r[1]+0x00000046u,c->r[9]); // 800DAEA0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DAEA4
  W8(c->r[1]+0x00000047u,c->r[8]); // 800DAEA8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DAEAC
  W8(c->r[1]+0x00000048u,c->r[7]); // 800DAEB0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DAEB4
  W8(c->r[1]+0x00000049u,c->r[29]); // 800DAEB8
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DAEBC
  W8(c->r[1]+0x0000004Au,c->r[28]); // 800DAEC0
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DAEC4
  W8(c->r[1]+0x0000004Bu,c->r[12]); // 800DAEC8
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DAECC
  W8(c->r[1]+0x0000004Cu,c->r[11]); // 800DAED0
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DAED4
  W8(c->r[1]+0x0000004Du,c->r[10]); // 800DAED8
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DAEDC
  W8(c->r[1]+0x0000004Eu,c->r[9]); // 800DAEE0
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DAEE4
  W8(c->r[1]+0x0000004Fu,c->r[8]); // 800DAEE8
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DAEEC
  W8(c->r[1]+0x00000050u,c->r[7]); // 800DAEF0
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DAEF4
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DAEF8
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DAEFC
  W8(c->r[1]+0x00000040u,c->r[31]); // 800DAF00
  W8(c->r[1]+0x00000051u,c->r[29]); // 800DAF04
  W8(c->r[1]+0x00000052u,c->r[28]); // 800DAF08
  W8(c->r[1]+0x00000053u,c->r[12]); // 800DAF0C
  W8(c->r[1]+0x00000054u,c->r[11]); // 800DAF10
  W8(c->r[1]+0x00000055u,c->r[10]); // 800DAF14
  W8(c->r[1]+0x00000056u,c->r[9]); // 800DAF18
  W8(c->r[1]+0x00000057u,c->r[8]); // 800DAF1C
  W8(c->r[1]+0x00000058u,c->r[7]); // 800DAF20
  W8(c->r[1]+0x00000059u,c->r[6]); // 800DAF24
  W8(c->r[1]+0x0000005Au,c->r[0]); // 800DAF28
  c->lr=0x800DAF30u; f_800D9C70(c); // 800DAF2C
  c->r[3]=0u+0x00000002u; // 800DAF30
  c->lr=0x800DAF38u; f_800D9890(c); // 800DAF34
  goto L_800DB128; // 800DAF38
L_800DAF3C:;
  c->r[30]=c->r[3]+0x00000500u; // 800DAF3C
  c->r[31]=0u+0x00000040u; // 800DAF40
  c->r[29]=R8(c->r[30]+0x00000000u); // 800DAF44
  c->r[4]=c->r[1]+0x00000024u; // 800DAF48
  c->r[28]=R8(c->r[30]+0x00000001u); // 800DAF4C
  c->r[3]=0u+0x000000E0u; // 800DAF50
  c->r[12]=R8(c->r[30]+0x00000002u); // 800DAF54
  c->r[5]=0u+0x0000001Bu; // 800DAF58
  c->r[11]=R8(c->r[30]+0x00000003u); // 800DAF5C
  c->r[10]=R8(c->r[30]+0x00000004u); // 800DAF60
  c->r[9]=R8(c->r[30]+0x00000005u); // 800DAF64
  c->r[8]=R8(c->r[30]+0x00000006u); // 800DAF68
  c->r[7]=R8(c->r[30]+0x00000007u); // 800DAF6C
  W8(c->r[1]+0x00000025u,c->r[29]); // 800DAF70
  c->r[29]=R8(c->r[30]+0x00000008u); // 800DAF74
  W8(c->r[1]+0x00000026u,c->r[28]); // 800DAF78
  c->r[28]=R8(c->r[30]+0x00000009u); // 800DAF7C
  W8(c->r[1]+0x00000027u,c->r[12]); // 800DAF80
  c->r[12]=R8(c->r[30]+0x0000000Au); // 800DAF84
  W8(c->r[1]+0x00000028u,c->r[11]); // 800DAF88
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 800DAF8C
  W8(c->r[1]+0x00000029u,c->r[10]); // 800DAF90
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 800DAF94
  W8(c->r[1]+0x0000002Au,c->r[9]); // 800DAF98
  c->r[9]=R8(c->r[30]+0x0000000Du); // 800DAF9C
  W8(c->r[1]+0x0000002Bu,c->r[8]); // 800DAFA0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 800DAFA4
  W8(c->r[1]+0x0000002Cu,c->r[7]); // 800DAFA8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 800DAFAC
  W8(c->r[1]+0x0000002Du,c->r[29]); // 800DAFB0
  c->r[29]=R8(c->r[30]+0x00000010u); // 800DAFB4
  W8(c->r[1]+0x0000002Eu,c->r[28]); // 800DAFB8
  c->r[28]=R8(c->r[30]+0x00000011u); // 800DAFBC
  W8(c->r[1]+0x0000002Fu,c->r[12]); // 800DAFC0
  c->r[12]=R8(c->r[30]+0x00000012u); // 800DAFC4
  W8(c->r[1]+0x00000030u,c->r[11]); // 800DAFC8
  c->r[11]=R8(c->r[30]+0x00000013u); // 800DAFCC
  W8(c->r[1]+0x00000031u,c->r[10]); // 800DAFD0
  c->r[10]=R8(c->r[30]+0x00000014u); // 800DAFD4
  W8(c->r[1]+0x00000032u,c->r[9]); // 800DAFD8
  c->r[9]=R8(c->r[30]+0x00000015u); // 800DAFDC
  W8(c->r[1]+0x00000033u,c->r[8]); // 800DAFE0
  c->r[8]=R8(c->r[30]+0x00000016u); // 800DAFE4
  W8(c->r[1]+0x00000034u,c->r[7]); // 800DAFE8
  c->r[7]=R8(c->r[30]+0x00000017u); // 800DAFEC
  c->r[6]=R8(c->r[30]+0x00000018u); // 800DAFF0
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DAFF4
  W8(c->r[1]+0x00000024u,c->r[31]); // 800DAFF8
  W8(c->r[1]+0x00000035u,c->r[29]); // 800DAFFC
  W8(c->r[1]+0x00000036u,c->r[28]); // 800DB000
  W8(c->r[1]+0x00000037u,c->r[12]); // 800DB004
  W8(c->r[1]+0x00000038u,c->r[11]); // 800DB008
  W8(c->r[1]+0x00000039u,c->r[10]); // 800DB00C
  W8(c->r[1]+0x0000003Au,c->r[9]); // 800DB010
  W8(c->r[1]+0x0000003Bu,c->r[8]); // 800DB014
  W8(c->r[1]+0x0000003Cu,c->r[7]); // 800DB018
  W8(c->r[1]+0x0000003Du,c->r[6]); // 800DB01C
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 800DB020
  c->lr=0x800DB028u; f_800D9C70(c); // 800DB024
  c->r[3]=0u+0x00000002u; // 800DB028
  c->lr=0x800DB030u; f_800D9890(c); // 800DB02C
  goto L_800DB128; // 800DB030
L_800DB034:;
  c->r[29]=0u+0x802F0000u; // 800DB034
  {uint32_t ea=c->r[29]+0xFFFFA8A0u; c->r[30]=R8(ea); c->r[29]=ea;} // 800DB038
  W8(c->r[1]+0x00000009u,c->r[30]); // 800DB03C
  c->r[28]=0u+0x00000040u; // 800DB040
  c->r[31]=R8(c->r[29]+0x00000001u); // 800DB044
  c->r[4]=c->r[1]+0x00000008u; // 800DB048
  c->r[12]=R8(c->r[29]+0x00000002u); // 800DB04C
  c->r[3]=0u+0x000000E0u; // 800DB050
  c->r[11]=R8(c->r[29]+0x00000003u); // 800DB054
  c->r[5]=0u+0x0000001Bu; // 800DB058
  c->r[10]=R8(c->r[29]+0x00000004u); // 800DB05C
  c->r[9]=R8(c->r[29]+0x00000005u); // 800DB060
  c->r[8]=R8(c->r[29]+0x00000006u); // 800DB064
  c->r[7]=R8(c->r[29]+0x00000007u); // 800DB068
  c->r[30]=R8(c->r[29]+0x00000008u); // 800DB06C
  W8(c->r[1]+0x0000000Au,c->r[31]); // 800DB070
  c->r[31]=R8(c->r[29]+0x00000009u); // 800DB074
  W8(c->r[1]+0x0000000Bu,c->r[12]); // 800DB078
  c->r[12]=R8(c->r[29]+0x0000000Au); // 800DB07C
  W8(c->r[1]+0x0000000Cu,c->r[11]); // 800DB080
  c->r[11]=R8(c->r[29]+0x0000000Bu); // 800DB084
  W8(c->r[1]+0x0000000Du,c->r[10]); // 800DB088
  c->r[10]=R8(c->r[29]+0x0000000Cu); // 800DB08C
  W8(c->r[1]+0x0000000Eu,c->r[9]); // 800DB090
  c->r[9]=R8(c->r[29]+0x0000000Du); // 800DB094
  W8(c->r[1]+0x0000000Fu,c->r[8]); // 800DB098
  c->r[8]=R8(c->r[29]+0x0000000Eu); // 800DB09C
  W8(c->r[1]+0x00000010u,c->r[7]); // 800DB0A0
  c->r[7]=R8(c->r[29]+0x0000000Fu); // 800DB0A4
  W8(c->r[1]+0x00000011u,c->r[30]); // 800DB0A8
  c->r[30]=R8(c->r[29]+0x00000010u); // 800DB0AC
  W8(c->r[1]+0x00000012u,c->r[31]); // 800DB0B0
  c->r[31]=R8(c->r[29]+0x00000011u); // 800DB0B4
  W8(c->r[1]+0x00000013u,c->r[12]); // 800DB0B8
  c->r[12]=R8(c->r[29]+0x00000012u); // 800DB0BC
  W8(c->r[1]+0x00000014u,c->r[11]); // 800DB0C0
  c->r[11]=R8(c->r[29]+0x00000013u); // 800DB0C4
  W8(c->r[1]+0x00000015u,c->r[10]); // 800DB0C8
  c->r[10]=R8(c->r[29]+0x00000014u); // 800DB0CC
  W8(c->r[1]+0x00000016u,c->r[9]); // 800DB0D0
  c->r[9]=R8(c->r[29]+0x00000015u); // 800DB0D4
  W8(c->r[1]+0x00000017u,c->r[8]); // 800DB0D8
  c->r[8]=R8(c->r[29]+0x00000016u); // 800DB0DC
  W8(c->r[1]+0x00000018u,c->r[7]); // 800DB0E0
  c->r[7]=R8(c->r[29]+0x00000017u); // 800DB0E4
  c->r[6]=R8(c->r[29]+0x00000018u); // 800DB0E8
  c->r[0]=R8(c->r[29]+0x00000019u); // 800DB0EC
  W8(c->r[1]+0x00000008u,c->r[28]); // 800DB0F0
  W8(c->r[1]+0x00000019u,c->r[30]); // 800DB0F4
  W8(c->r[1]+0x0000001Au,c->r[31]); // 800DB0F8
  W8(c->r[1]+0x0000001Bu,c->r[12]); // 800DB0FC
  W8(c->r[1]+0x0000001Cu,c->r[11]); // 800DB100
  W8(c->r[1]+0x0000001Du,c->r[10]); // 800DB104
  W8(c->r[1]+0x0000001Eu,c->r[9]); // 800DB108
  W8(c->r[1]+0x0000001Fu,c->r[8]); // 800DB10C
  W8(c->r[1]+0x00000020u,c->r[7]); // 800DB110
  W8(c->r[1]+0x00000021u,c->r[6]); // 800DB114
  W8(c->r[1]+0x00000022u,c->r[0]); // 800DB118
  c->lr=0x800DB120u; f_800D9C70(c); // 800DB11C
  c->r[3]=0u+0x00000002u; // 800DB120
  c->lr=0x800DB128u; f_800D9890(c); // 800DB124
L_800DB128:;
  c->r[0]=R32(c->r[1]+0x00000194u); // 800DB128
  c->r[31]=R32(c->r[1]+0x0000018Cu); // 800DB12C
  c->r[30]=R32(c->r[1]+0x00000188u); // 800DB130
  c->r[29]=R32(c->r[1]+0x00000184u); // 800DB134
  c->r[28]=R32(c->r[1]+0x00000180u); // 800DB138
  c->lr=c->r[0]; // 800DB13C
  c->r[1]=c->r[1]+0x00000190u; // 800DB140
  return; // 800DB144
}

// __VISetGammaImm
void f_800DB150(Ctx* __restrict c) {
  trace_call(0x800DB150u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB150
  c->r[0]=c->lr; // 800DB154
  c->r[5]=0u+0x00000022u; // 800DB158
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DB15C
  c->r[0]=0u+0x00000010u; // 800DB160
  c->r[4]=c->r[1]+0x00000008u; // 800DB164
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DB168
  c->r[0]=R16(c->r[3]+0x00000000u); // 800DB16C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800DB170
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 800DB174
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DB178
  c->r[0]=R16(c->r[3]+0x00000002u); // 800DB17C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800DB180
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 800DB184
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800DB188
  c->r[0]=R16(c->r[3]+0x00000004u); // 800DB18C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800DB190
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 800DB194
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800DB198
  c->r[0]=R16(c->r[3]+0x00000006u); // 800DB19C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800DB1A0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 800DB1A4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800DB1A8
  c->r[0]=R16(c->r[3]+0x00000008u); // 800DB1AC
  W8(c->r[1]+0x00000012u,c->r[0]); // 800DB1B0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 800DB1B4
  W8(c->r[1]+0x00000011u,c->r[0]); // 800DB1B8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800DB1BC
  W8(c->r[1]+0x00000014u,c->r[0]); // 800DB1C0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 800DB1C4
  W8(c->r[1]+0x00000013u,c->r[0]); // 800DB1C8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800DB1CC
  W8(c->r[1]+0x00000015u,c->r[0]); // 800DB1D0
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800DB1D4
  W8(c->r[1]+0x00000016u,c->r[0]); // 800DB1D8
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 800DB1DC
  W8(c->r[1]+0x00000017u,c->r[0]); // 800DB1E0
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 800DB1E4
  W8(c->r[1]+0x00000018u,c->r[0]); // 800DB1E8
  c->r[0]=R8(c->r[3]+0x00000010u); // 800DB1EC
  W8(c->r[1]+0x00000019u,c->r[0]); // 800DB1F0
  c->r[0]=R8(c->r[3]+0x00000011u); // 800DB1F4
  W8(c->r[1]+0x0000001Au,c->r[0]); // 800DB1F8
  c->r[0]=R8(c->r[3]+0x00000012u); // 800DB1FC
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 800DB200
  c->r[0]=R16(c->r[3]+0x00000014u); // 800DB204
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB208
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB20C
  W8(c->r[1]+0x0000001Cu,c->r[6]); // 800DB210
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800DB214
  c->r[0]=R16(c->r[3]+0x00000016u); // 800DB218
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB21C
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB220
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 800DB224
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 800DB228
  c->r[0]=R16(c->r[3]+0x00000018u); // 800DB22C
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB230
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB234
  W8(c->r[1]+0x00000020u,c->r[6]); // 800DB238
  W8(c->r[1]+0x00000021u,c->r[0]); // 800DB23C
  c->r[0]=R16(c->r[3]+0x0000001Au); // 800DB240
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB244
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB248
  W8(c->r[1]+0x00000022u,c->r[6]); // 800DB24C
  W8(c->r[1]+0x00000023u,c->r[0]); // 800DB250
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 800DB254
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB258
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB25C
  W8(c->r[1]+0x00000024u,c->r[6]); // 800DB260
  W8(c->r[1]+0x00000025u,c->r[0]); // 800DB264
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 800DB268
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB26C
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB270
  W8(c->r[1]+0x00000026u,c->r[6]); // 800DB274
  W8(c->r[1]+0x00000027u,c->r[0]); // 800DB278
  c->r[0]=R16(c->r[3]+0x00000020u); // 800DB27C
  c->r[3]=0u+0x000000E0u; // 800DB280
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 800DB284
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 800DB288
  W8(c->r[1]+0x00000028u,c->r[6]); // 800DB28C
  W8(c->r[1]+0x00000029u,c->r[0]); // 800DB290
  c->lr=0x800DB298u; f_800D9C70(c); // 800DB294
  c->r[3]=0u+0x00000002u; // 800DB298
  c->lr=0x800DB2A0u; f_800D9890(c); // 800DB29C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DB2A0
  c->lr=c->r[0]; // 800DB2A4
  c->r[1]=c->r[1]+0x00000030u; // 800DB2A8
  return; // 800DB2AC
}

// __VISetGamma1_0
void f_800DB2B0(Ctx* __restrict c) {
  trace_call(0x800DB2B0u);
  c->r[3]=0u+0x802B0000u; // 800DB2B0
  c->r[3]=c->r[3]+0xFFFFE870u; // 800DB2B4
  c->r[3]=c->r[3]+0x00000154u; // 800DB2B8
  f_800DB150(c); return; // 800DB2BC
}

// __VISetGamma
void f_800DB2C0(Ctx* __restrict c) {
  trace_call(0x800DB2C0u);
  c->r[0]=R32(c->r[13]+0xFFFFA684u); // 800DB2C0
  c->r[3]=0u+0x802B0000u; // 800DB2C4
  c->r[3]=c->r[3]+0xFFFFE870u; // 800DB2C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 800DB2CC
  c->r[3]=c->r[3]+c->r[0]; // 800DB2D0
  f_800DB150(c); return; // 800DB2D4
}

// __VISetTrapFilter
void f_800DB2E0(Ctx* __restrict c) {
  trace_call(0x800DB2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB2E0
  c->r[0]=c->lr; // 800DB2E4
  c->r[3]=0u+0x00000003u; // 800DB2E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB2EC
  c->r[0]=R8(c->r[13]+0xFFFF8FBFu); // 800DB2F0
  W8(c->r[1]+0x00000008u,c->r[3]); // 800DB2F4
  cmpu(c,0,c->r[0],0x00000001u); // 800DB2F8
  if (!crb(c,2)) { goto L_800DB30C; } // 800DB2FC
  c->r[0]=0u+0x00000000u; // 800DB300
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DB304
  goto L_800DB314; // 800DB308
L_800DB30C:;
  c->r[0]=0u+0x00000001u; // 800DB30C
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DB310
L_800DB314:;
  c->r[4]=c->r[1]+0x00000008u; // 800DB314
  c->r[3]=0u+0x000000E0u; // 800DB318
  c->r[5]=0u+0x00000002u; // 800DB31C
  c->lr=0x800DB324u; f_800D9C70(c); // 800DB320
  c->r[3]=0u+0x00000002u; // 800DB324
  c->lr=0x800DB32Cu; f_800D9890(c); // 800DB328
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB32C
  c->lr=c->r[0]; // 800DB330
  c->r[1]=c->r[1]+0x00000010u; // 800DB334
  return; // 800DB338
}

// __VISetRGBOverDrive
void f_800DB340(Ctx* __restrict c) {
  trace_call(0x800DB340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB340
  c->r[0]=c->lr; // 800DB344
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB348
  c->r[0]=R32(c->r[13]+0xFFFFA68Cu); // 800DB34C
  cmps(c,0,(int32_t)c->r[0],3); // 800DB350
  if (!crb(c,2)) { goto L_800DB38C; } // 800DB354
  c->r[0]=R32(c->r[13]+0xFFFFA680u); // 800DB358
  c->r[3]=0u+0x0000000Au; // 800DB35C
  W8(c->r[1]+0x00000008u,c->r[3]); // 800DB360
  c->r[4]=c->r[1]+0x00000008u; // 800DB364
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DB368
  c->r[3]=0u+0x000000E0u; // 800DB36C
  c->r[0]=c->r[0]|0x00000001u; // 800DB370
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DB374
  c->r[5]=0u+0x00000002u; // 800DB378
  c->lr=0x800DB380u; f_800D9C70(c); // 800DB37C
  c->r[3]=0u+0x00000002u; // 800DB380
  c->lr=0x800DB388u; f_800D9890(c); // 800DB384
  goto L_800DB3B4; // 800DB388
L_800DB38C:;
  c->r[3]=0u+0x0000000Au; // 800DB38C
  c->r[0]=0u+0x00000000u; // 800DB390
  W8(c->r[1]+0x00000008u,c->r[3]); // 800DB394
  c->r[4]=c->r[1]+0x00000008u; // 800DB398
  c->r[3]=0u+0x000000E0u; // 800DB39C
  c->r[5]=0u+0x00000002u; // 800DB3A0
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DB3A4
  c->lr=0x800DB3ACu; f_800D9C70(c); // 800DB3A8
  c->r[3]=0u+0x00000002u; // 800DB3AC
  c->lr=0x800DB3B4u; f_800D9890(c); // 800DB3B0
L_800DB3B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB3B4
  c->lr=c->r[0]; // 800DB3B8
  c->r[1]=c->r[1]+0x00000010u; // 800DB3BC
  return; // 800DB3C0
}

// VISetRGBModeImm
void f_800DB3D0(Ctx* __restrict c) {
  trace_call(0x800DB3D0u);
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800DB3D0
  c->r[0]=c->r[0]|0x00000080u; // 800DB3D4
  W32(c->r[13]+0xFFFFA678u,c->r[0]); // 800DB3D8
  return; // 800DB3DC
}

// __VISetRGBModeImm
void f_800DB3E0(Ctx* __restrict c) {
  trace_call(0x800DB3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB3E0
  c->r[0]=c->lr; // 800DB3E4
  c->r[6]=0u+0x00000003u; // 800DB3E8
  c->r[3]=0u+0x000000E0u; // 800DB3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB3F0
  c->r[0]=0u+0x00000001u; // 800DB3F4
  c->r[4]=c->r[1]+0x00000008u; // 800DB3F8
  c->r[5]=0u+0x00000002u; // 800DB3FC
  W32(c->r[13]+0xFFFFA68Cu,c->r[6]); // 800DB400
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DB404
  W8(c->r[1]+0x00000009u,c->r[6]); // 800DB408
  c->lr=0x800DB410u; f_800D9C70(c); // 800DB40C
  c->r[3]=0u+0x00000002u; // 800DB410
  c->lr=0x800DB418u; f_800D9890(c); // 800DB414
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB418
  c->lr=c->r[0]; // 800DB41C
  c->r[1]=c->r[1]+0x00000010u; // 800DB420
  return; // 800DB424
}

// __VISetRevolutionModeSimple
void f_800DB430(Ctx* __restrict c) {
  trace_call(0x800DB430u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB430
  c->r[0]=c->lr; // 800DB434
  c->r[3]=0u+0x000000E0u; // 800DB438
  c->r[5]=0u+0x00000002u; // 800DB43C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DB440
  c->r[0]=0u+0x0000006Au; // 800DB444
  c->r[4]=c->r[1]+0x00000020u; // 800DB448
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800DB44C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800DB450
  W32(c->r[1]+0x00000064u,c->r[29]); // 800DB454
  W32(c->r[1]+0x00000060u,c->r[28]); // 800DB458
  c->r[28]=0u+0x00000001u; // 800DB45C
  W8(c->r[1]+0x00000020u,c->r[0]); // 800DB460
  W8(c->r[1]+0x00000021u,c->r[28]); // 800DB464
  c->lr=0x800DB46Cu; f_800D9C70(c); // 800DB468
  c->r[3]=0u+0x00000002u; // 800DB46C
  c->lr=0x800DB474u; f_800D9890(c); // 800DB470
  c->r[0]=0u+0x00000065u; // 800DB474
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800DB478
  c->r[4]=c->r[1]+0x0000001Cu; // 800DB47C
  c->r[3]=0u+0x000000E0u; // 800DB480
  W8(c->r[1]+0x0000001Du,c->r[28]); // 800DB484
  c->r[5]=0u+0x00000002u; // 800DB488
  c->lr=0x800DB490u; f_800D9C70(c); // 800DB48C
  c->r[3]=0u+0x00000002u; // 800DB490
  c->lr=0x800DB498u; f_800D9890(c); // 800DB494
  c->lr=0x800DB49Cu; f_800D94D0(c); // 800DB498
  c->r[4]=0u+0x80000000u; // 800DB49C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800DB4A0
  cmpu(c,0,c->r[0],0x00000001u); // 800DB4A4
  if (crb(c,2)) { goto L_800DB4C8; } // 800DB4A8
  cmpu(c,0,c->r[0],0x00000005u); // 800DB4AC
  if (crb(c,2)) { goto L_800DB4C8; } // 800DB4B0
  cmpu(c,0,c->r[0],0x00000002u); // 800DB4B4
  if (crb(c,2)) { goto L_800DB4D4; } // 800DB4B8
  cmps(c,0,(int32_t)c->r[0],0); // 800DB4BC
  if (crb(c,2)) { goto L_800DB4DC; } // 800DB4C0
  goto L_800DB4E8; // 800DB4C4
L_800DB4C8:;
  c->r[28]=0u+0x00000002u; // 800DB4C8
  W32(c->r[13]+0xFFFFA68Cu,c->r[28]); // 800DB4CC
  goto L_800DB4F0; // 800DB4D0
L_800DB4D4:;
  W32(c->r[13]+0xFFFFA68Cu,c->r[28]); // 800DB4D4
  goto L_800DB4F0; // 800DB4D8
L_800DB4DC:;
  c->r[28]=0u+0x00000000u; // 800DB4DC
  W32(c->r[13]+0xFFFFA68Cu,c->r[28]); // 800DB4E0
  goto L_800DB4F0; // 800DB4E4
L_800DB4E8:;
  c->r[28]=0u+0x00000000u; // 800DB4E8
  W32(c->r[13]+0xFFFFA68Cu,c->r[28]); // 800DB4EC
L_800DB4F0:;
  c->r[0]=rotl(c->r[3],5)&0x00001FE0u; // 800DB4F0
  c->r[3]=0u+0x00000001u; // 800DB4F4
  c->r[0]=c->r[0]|c->r[28]; // 800DB4F8
  W8(c->r[1]+0x00000018u,c->r[3]); // 800DB4FC
  c->r[4]=c->r[1]+0x00000018u; // 800DB500
  c->r[3]=0u+0x000000E0u; // 800DB504
  W8(c->r[1]+0x00000019u,c->r[0]); // 800DB508
  c->r[5]=0u+0x00000002u; // 800DB50C
  c->lr=0x800DB514u; f_800D9C70(c); // 800DB510
  c->r[3]=0u+0x00000002u; // 800DB514
  c->lr=0x800DB51Cu; f_800D9890(c); // 800DB518
  c->r[28]=0u+0x00000000u; // 800DB51C
  W8(c->r[1]+0x00000014u,c->r[28]); // 800DB520
  c->r[4]=c->r[1]+0x00000014u; // 800DB524
  c->r[3]=0u+0x000000E0u; // 800DB528
  W8(c->r[1]+0x00000015u,c->r[28]); // 800DB52C
  c->r[5]=0u+0x00000002u; // 800DB530
  c->lr=0x800DB538u; f_800D9C70(c); // 800DB534
  c->r[3]=0u+0x00000002u; // 800DB538
  c->lr=0x800DB540u; f_800D9890(c); // 800DB53C
  c->r[0]=0u+0x0000008Eu; // 800DB540
  c->r[3]=0u+0x00000071u; // 800DB544
  W8(c->r[1]+0x0000002Cu,c->r[3]); // 800DB548
  c->r[4]=c->r[1]+0x0000002Cu; // 800DB54C
  c->r[3]=0u+0x000000E0u; // 800DB550
  c->r[5]=0u+0x00000003u; // 800DB554
  W8(c->r[1]+0x0000002Du,c->r[0]); // 800DB558
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 800DB55C
  c->lr=0x800DB564u; f_800D9C70(c); // 800DB560
  c->r[3]=0u+0x00000002u; // 800DB564
  c->lr=0x800DB56Cu; f_800D9890(c); // 800DB568
  c->r[3]=0u+0x00000002u; // 800DB56C
  c->r[0]=0u+0x00000007u; // 800DB570
  W8(c->r[1]+0x00000010u,c->r[3]); // 800DB574
  c->r[4]=c->r[1]+0x00000010u; // 800DB578
  c->r[3]=0u+0x000000E0u; // 800DB57C
  c->r[5]=0u+0x00000002u; // 800DB580
  W8(c->r[1]+0x00000011u,c->r[0]); // 800DB584
  c->lr=0x800DB58Cu; f_800D9C70(c); // 800DB588
  c->r[3]=0u+0x00000002u; // 800DB58C
  c->lr=0x800DB594u; f_800D9890(c); // 800DB590
  c->r[0]=0u+0x00000005u; // 800DB594
  W8(c->r[13]+0xFFFF8FB4u,c->r[28]); // 800DB598
  c->r[4]=c->r[1]+0x00000028u; // 800DB59C
  c->r[3]=0u+0x000000E0u; // 800DB5A0
  W8(c->r[13]+0xFFFF8FB5u,c->r[28]); // 800DB5A4
  c->r[5]=0u+0x00000003u; // 800DB5A8
  W8(c->r[13]+0xFFFF8FB6u,c->r[28]); // 800DB5AC
  W8(c->r[1]+0x00000028u,c->r[0]); // 800DB5B0
  W8(c->r[1]+0x00000029u,c->r[28]); // 800DB5B4
  W8(c->r[1]+0x0000002Au,c->r[28]); // 800DB5B8
  c->lr=0x800DB5C0u; f_800D9C70(c); // 800DB5BC
  c->r[3]=0u+0x00000002u; // 800DB5C0
  c->lr=0x800DB5C8u; f_800D9890(c); // 800DB5C4
  c->r[0]=R8(c->r[13]+0xFFFF8FB7u); // 800DB5C8
  cmps(c,0,(int32_t)c->r[0],0); // 800DB5CC
  if (!crb(c,2)) { goto L_800DB5F8; } // 800DB5D0
  c->r[0]=R8(c->r[13]+0xFFFF8FB8u); // 800DB5D4
  cmps(c,0,(int32_t)c->r[0],0); // 800DB5D8
  if (!crb(c,2)) { goto L_800DB5F8; } // 800DB5DC
  c->r[0]=R8(c->r[13]+0xFFFF8FB9u); // 800DB5E0
  cmps(c,0,(int32_t)c->r[0],0); // 800DB5E4
  if (!crb(c,2)) { goto L_800DB5F8; } // 800DB5E8
  c->r[0]=R8(c->r[13]+0xFFFF8FBAu); // 800DB5EC
  cmps(c,0,(int32_t)c->r[0],0); // 800DB5F0
  if (crb(c,2)) { goto L_800DB618; } // 800DB5F4
L_800DB5F8:;
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800DB5F8
  c->r[3]=0u+0x00000000u; // 800DB5FC
  W8(c->r[13]+0xFFFF8FB7u,c->r[3]); // 800DB600
  c->r[0]=c->r[0]|0x00000002u; // 800DB604
  W8(c->r[13]+0xFFFF8FB8u,c->r[3]); // 800DB608
  W8(c->r[13]+0xFFFF8FB9u,c->r[3]); // 800DB60C
  W8(c->r[13]+0xFFFF8FBAu,c->r[3]); // 800DB610
  W32(c->r[13]+0xFFFFA678u,c->r[0]); // 800DB614
L_800DB618:;
  c->r[3]=R8(c->r[13]+0xFFFF8FB7u); // 800DB618
  c->r[7]=0u+0x00000008u; // 800DB61C
  c->r[0]=R8(c->r[13]+0xFFFF8FB9u); // 800DB620
  c->r[4]=c->r[1]+0x00000024u; // 800DB624
  c->r[5]=rotl(c->r[3],0)&0x0000000Fu; // 800DB628
  c->r[6]=R8(c->r[13]+0xFFFF8FB8u); // 800DB62C
  c->r[3]=R8(c->r[13]+0xFFFF8FBAu); // 800DB630
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800DB634
  c->r[5]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[5]&~0x000000F0u); // 800DB638
  W8(c->r[1]+0x00000025u,c->r[5]); // 800DB63C
  c->r[0]=(rotl(c->r[3],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 800DB640
  c->r[3]=0u+0x000000E0u; // 800DB644
  W8(c->r[1]+0x00000024u,c->r[7]); // 800DB648
  c->r[5]=0u+0x00000003u; // 800DB64C
  W8(c->r[1]+0x00000026u,c->r[0]); // 800DB650
  c->lr=0x800DB658u; f_800D9C70(c); // 800DB654
  c->r[3]=0u+0x00000002u; // 800DB658
  c->lr=0x800DB660u; f_800D9890(c); // 800DB65C
  c->r[0]=R8(c->r[13]+0xFFFF8FBBu); // 800DB660
  cmps(c,0,(int32_t)c->r[0],0); // 800DB664
  if (!crb(c,2)) { goto L_800DB690; } // 800DB668
  c->r[0]=R8(c->r[13]+0xFFFF8FBCu); // 800DB66C
  cmps(c,0,(int32_t)c->r[0],0); // 800DB670
  if (!crb(c,2)) { goto L_800DB690; } // 800DB674
  c->r[0]=R8(c->r[13]+0xFFFF8FBDu); // 800DB678
  cmps(c,0,(int32_t)c->r[0],0); // 800DB67C
  if (!crb(c,2)) { goto L_800DB690; } // 800DB680
  c->r[0]=R8(c->r[13]+0xFFFF8FBEu); // 800DB684
  cmps(c,0,(int32_t)c->r[0],0); // 800DB688
  if (crb(c,2)) { goto L_800DB6B0; } // 800DB68C
L_800DB690:;
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800DB690
  c->r[3]=0u+0x00000000u; // 800DB694
  W8(c->r[13]+0xFFFF8FBBu,c->r[3]); // 800DB698
  c->r[0]=c->r[0]|0x00000004u; // 800DB69C
  W8(c->r[13]+0xFFFF8FBCu,c->r[3]); // 800DB6A0
  W8(c->r[13]+0xFFFF8FBDu,c->r[3]); // 800DB6A4
  W8(c->r[13]+0xFFFF8FBEu,c->r[3]); // 800DB6A8
  W32(c->r[13]+0xFFFFA678u,c->r[0]); // 800DB6AC
L_800DB6B0:;
  c->r[0]=R8(c->r[13]+0xFFFF8FBBu); // 800DB6B0
  c->r[9]=0u+0x0000007Au; // 800DB6B4
  c->r[5]=R8(c->r[13]+0xFFFF8FBCu); // 800DB6B8
  c->r[4]=c->r[1]+0x00000030u; // 800DB6BC
  c->r[8]=rotl(c->r[0],0)&0x0000007Fu; // 800DB6C0
  c->r[3]=R8(c->r[13]+0xFFFF8FBDu); // 800DB6C4
  c->r[0]=R8(c->r[13]+0xFFFF8FBEu); // 800DB6C8
  c->r[7]=rotl(c->r[5],0)&0x0000007Fu; // 800DB6CC
  c->r[6]=rotl(c->r[3],0)&0x0000007Fu; // 800DB6D0
  W8(c->r[1]+0x00000030u,c->r[9]); // 800DB6D4
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800DB6D8
  c->r[3]=0u+0x000000E0u; // 800DB6DC
  W8(c->r[1]+0x00000031u,c->r[8]); // 800DB6E0
  c->r[5]=0u+0x00000005u; // 800DB6E4
  W8(c->r[1]+0x00000032u,c->r[7]); // 800DB6E8
  W8(c->r[1]+0x00000033u,c->r[6]); // 800DB6EC
  W8(c->r[1]+0x00000034u,c->r[0]); // 800DB6F0
  c->lr=0x800DB6F8u; f_800D9C70(c); // 800DB6F4
  c->r[3]=0u+0x00000002u; // 800DB6F8
  c->lr=0x800DB700u; f_800D9890(c); // 800DB6FC
  c->r[29]=0u+0x802F0000u; // 800DB700
  {uint32_t ea=c->r[29]+0xFFFFA8A0u; c->r[30]=R8(ea); c->r[29]=ea;} // 800DB704
  W8(c->r[1]+0x00000039u,c->r[30]); // 800DB708
  c->r[28]=0u+0x00000040u; // 800DB70C
  c->r[31]=R8(c->r[29]+0x00000001u); // 800DB710
  c->r[4]=c->r[1]+0x00000038u; // 800DB714
  c->r[12]=R8(c->r[29]+0x00000002u); // 800DB718
  c->r[3]=0u+0x000000E0u; // 800DB71C
  c->r[11]=R8(c->r[29]+0x00000003u); // 800DB720
  c->r[5]=0u+0x0000001Bu; // 800DB724
  c->r[10]=R8(c->r[29]+0x00000004u); // 800DB728
  c->r[9]=R8(c->r[29]+0x00000005u); // 800DB72C
  c->r[8]=R8(c->r[29]+0x00000006u); // 800DB730
  c->r[7]=R8(c->r[29]+0x00000007u); // 800DB734
  c->r[30]=R8(c->r[29]+0x00000008u); // 800DB738
  W8(c->r[1]+0x0000003Au,c->r[31]); // 800DB73C
  c->r[31]=R8(c->r[29]+0x00000009u); // 800DB740
  W8(c->r[1]+0x0000003Bu,c->r[12]); // 800DB744
  c->r[12]=R8(c->r[29]+0x0000000Au); // 800DB748
  W8(c->r[1]+0x0000003Cu,c->r[11]); // 800DB74C
  c->r[11]=R8(c->r[29]+0x0000000Bu); // 800DB750
  W8(c->r[1]+0x0000003Du,c->r[10]); // 800DB754
  c->r[10]=R8(c->r[29]+0x0000000Cu); // 800DB758
  W8(c->r[1]+0x0000003Eu,c->r[9]); // 800DB75C
  c->r[9]=R8(c->r[29]+0x0000000Du); // 800DB760
  W8(c->r[1]+0x0000003Fu,c->r[8]); // 800DB764
  c->r[8]=R8(c->r[29]+0x0000000Eu); // 800DB768
  W8(c->r[1]+0x00000040u,c->r[7]); // 800DB76C
  c->r[7]=R8(c->r[29]+0x0000000Fu); // 800DB770
  W8(c->r[1]+0x00000041u,c->r[30]); // 800DB774
  c->r[30]=R8(c->r[29]+0x00000010u); // 800DB778
  W8(c->r[1]+0x00000042u,c->r[31]); // 800DB77C
  c->r[31]=R8(c->r[29]+0x00000011u); // 800DB780
  W8(c->r[1]+0x00000043u,c->r[12]); // 800DB784
  c->r[12]=R8(c->r[29]+0x00000012u); // 800DB788
  W8(c->r[1]+0x00000044u,c->r[11]); // 800DB78C
  c->r[11]=R8(c->r[29]+0x00000013u); // 800DB790
  W8(c->r[1]+0x00000045u,c->r[10]); // 800DB794
  c->r[10]=R8(c->r[29]+0x00000014u); // 800DB798
  W8(c->r[1]+0x00000046u,c->r[9]); // 800DB79C
  c->r[9]=R8(c->r[29]+0x00000015u); // 800DB7A0
  W8(c->r[1]+0x00000047u,c->r[8]); // 800DB7A4
  c->r[8]=R8(c->r[29]+0x00000016u); // 800DB7A8
  W8(c->r[1]+0x00000048u,c->r[7]); // 800DB7AC
  c->r[7]=R8(c->r[29]+0x00000017u); // 800DB7B0
  c->r[6]=R8(c->r[29]+0x00000018u); // 800DB7B4
  c->r[0]=R8(c->r[29]+0x00000019u); // 800DB7B8
  W8(c->r[1]+0x00000038u,c->r[28]); // 800DB7BC
  W8(c->r[1]+0x00000049u,c->r[30]); // 800DB7C0
  W8(c->r[1]+0x0000004Au,c->r[31]); // 800DB7C4
  W8(c->r[1]+0x0000004Bu,c->r[12]); // 800DB7C8
  W8(c->r[1]+0x0000004Cu,c->r[11]); // 800DB7CC
  W8(c->r[1]+0x0000004Du,c->r[10]); // 800DB7D0
  W8(c->r[1]+0x0000004Eu,c->r[9]); // 800DB7D4
  W8(c->r[1]+0x0000004Fu,c->r[8]); // 800DB7D8
  W8(c->r[1]+0x00000050u,c->r[7]); // 800DB7DC
  W8(c->r[1]+0x00000051u,c->r[6]); // 800DB7E0
  W8(c->r[1]+0x00000052u,c->r[0]); // 800DB7E4
  c->lr=0x800DB7ECu; f_800D9C70(c); // 800DB7E8
  c->r[3]=0u+0x00000002u; // 800DB7EC
  c->lr=0x800DB7F4u; f_800D9890(c); // 800DB7F0
  c->r[0]=R32(c->r[13]+0xFFFFA680u); // 800DB7F4
  cmps(c,0,(int32_t)c->r[0],0); // 800DB7F8
  if (crb(c,2)) { goto L_800DB814; } // 800DB7FC
  c->r[0]=R32(c->r[13]+0xFFFFA678u); // 800DB800
  c->r[3]=0u+0x00000000u; // 800DB804
  W32(c->r[13]+0xFFFFA680u,c->r[3]); // 800DB808
  c->r[0]=c->r[0]|0x00000040u; // 800DB80C
  W32(c->r[13]+0xFFFFA678u,c->r[0]); // 800DB810
L_800DB814:;
  c->r[0]=R32(c->r[13]+0xFFFFA68Cu); // 800DB814
  cmps(c,0,(int32_t)c->r[0],3); // 800DB818
  if (!crb(c,2)) { goto L_800DB854; } // 800DB81C
  c->r[0]=R32(c->r[13]+0xFFFFA680u); // 800DB820
  c->r[3]=0u+0x0000000Au; // 800DB824
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800DB828
  c->r[4]=c->r[1]+0x0000000Cu; // 800DB82C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DB830
  c->r[3]=0u+0x000000E0u; // 800DB834
  c->r[0]=c->r[0]|0x00000001u; // 800DB838
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800DB83C
  c->r[5]=0u+0x00000002u; // 800DB840
  c->lr=0x800DB848u; f_800D9C70(c); // 800DB844
  c->r[3]=0u+0x00000002u; // 800DB848
  c->lr=0x800DB850u; f_800D9890(c); // 800DB84C
  goto L_800DB87C; // 800DB850
L_800DB854:;
  c->r[3]=0u+0x0000000Au; // 800DB854
  c->r[0]=0u+0x00000000u; // 800DB858
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800DB85C
  c->r[4]=c->r[1]+0x0000000Cu; // 800DB860
  c->r[3]=0u+0x000000E0u; // 800DB864
  c->r[5]=0u+0x00000002u; // 800DB868
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800DB86C
  c->lr=0x800DB874u; f_800D9C70(c); // 800DB870
  c->r[3]=0u+0x00000002u; // 800DB874
  c->lr=0x800DB87Cu; f_800D9890(c); // 800DB878
L_800DB87C:;
  c->r[3]=0u+0x00000003u; // 800DB87C
  c->r[0]=0u+0x00000001u; // 800DB880
  W8(c->r[1]+0x00000008u,c->r[3]); // 800DB884
  c->r[4]=c->r[1]+0x00000008u; // 800DB888
  c->r[3]=0u+0x000000E0u; // 800DB88C
  c->r[5]=0u+0x00000002u; // 800DB890
  W8(c->r[1]+0x00000009u,c->r[0]); // 800DB894
  c->lr=0x800DB89Cu; f_800D9C70(c); // 800DB898
  c->r[3]=0u+0x00000002u; // 800DB89C
  c->lr=0x800DB8A4u; f_800D9890(c); // 800DB8A0
  c->r[3]=0u+0x802B0000u; // 800DB8A4
  c->r[3]=c->r[3]+0xFFFFE870u; // 800DB8A8
  c->r[3]=c->r[3]+0x00000154u; // 800DB8AC
  c->lr=0x800DB8B4u; f_800DB150(c); // 800DB8B0
  c->r[0]=0u+0x00000000u; // 800DB8B4
  W32(c->r[13]+0xFFFFA67Cu,c->r[0]); // 800DB8B8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800DB8BC
  c->r[30]=R32(c->r[1]+0x00000068u); // 800DB8C0
  c->r[29]=R32(c->r[1]+0x00000064u); // 800DB8C4
  c->r[28]=R32(c->r[1]+0x00000060u); // 800DB8C8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DB8CC
  c->lr=c->r[0]; // 800DB8D0
  c->r[1]=c->r[1]+0x00000070u; // 800DB8D4
  return; // 800DB8D8
}

// PSMTXIdentity
void f_800DB8E0(Ctx* __restrict c) {
  trace_call(0x800DB8E0u);
  {uint32_t ea=c->r[2]+0xFFFF9A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB8E0
  {uint32_t ea=c->r[2]+0xFFFF9A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB8E4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 800DB8E8
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800DB8EC
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800DB8F0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 800DB8F4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 800DB8F8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 800DB8FC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 800DB900
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 800DB904
  return; // 800DB908
}

// PSMTXCopy
void f_800DB910(Ctx* __restrict c) {
  trace_call(0x800DB910u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800DB910
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800DB914
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 800DB918
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 800DB91C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 800DB920
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,2,ea,0,0);} // 800DB924
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 800DB928
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,3,ea,0,0);} // 800DB92C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 800DB930
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,4,ea,0,0);} // 800DB934
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 800DB938
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,5,ea,0,0);} // 800DB93C
  return; // 800DB940
}

// PSMTXConcat
void f_800DB950(Ctx* __restrict c) {
  trace_call(0x800DB950u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB950
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800DB954
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[14]);} // 800DB958
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 800DB95C
  c->r[6]=0u+0x803A0000u; // 800DB960
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,0,0);} // 800DB964
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[15]);} // 800DB968
  c->r[6]=c->r[6]+0xFFFF9560u; // 800DB96C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800DB970
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,8,ea,0,0);} // 800DB974
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 800DB978
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 800DB97C
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 800DB980
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,31,ea,0,0);} // 800DB984
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[14]=t0; c->ps1[14]=t1;} // 800DB988
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,9,ea,0,0);} // 800DB98C
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[15]=t0; c->ps1[15]=t1;} // 800DB990
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 800DB994
  {double t0=S(std::fma(c->f[8],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 800DB998
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 800DB99C
  {double t0=S(std::fma(c->f[8],c->ps1[2],c->f[14])), t1=S(std::fma(c->ps1[8],c->ps1[2],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 800DB9A0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,10,ea,0,0);} // 800DB9A4
  {double t0=S(std::fma(c->f[9],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 800DB9A8
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,11,ea,0,0);} // 800DB9AC
  {double t0=S(std::fma(c->f[9],c->ps1[2],c->f[15])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 800DB9B0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 800DB9B4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 800DB9B8
  {double t0=S(std::fma(c->f[10],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[10],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 800DB9BC
  {double t0=S(std::fma(c->f[11],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[11],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 800DB9C0
  {double t0=S(std::fma(c->f[10],c->f[3],c->f[14])), t1=S(std::fma(c->ps1[10],c->f[3],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 800DB9C4
  {double t0=S(std::fma(c->f[11],c->f[3],c->f[15])), t1=S(std::fma(c->ps1[11],c->f[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 800DB9C8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,12,ea,0,0);} // 800DB9CC
  {double t0=S(c->f[6]*c->f[4]), t1=S(c->ps1[6]*c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 800DB9D0
  {double t0=S(std::fma(c->f[31],c->ps1[1],c->f[13])), t1=S(std::fma(c->ps1[31],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 800DB9D4
  {double t0=S(c->f[7]*c->f[4]), t1=S(c->ps1[7]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 800DB9D8
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,14,ea,0,0);} // 800DB9DC
  {double t0=S(std::fma(c->f[31],c->ps1[3],c->f[15])), t1=S(std::fma(c->ps1[31],c->ps1[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 800DB9E0
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,0,0);} // 800DB9E4
  {double t0=S(std::fma(c->f[8],c->ps1[4],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 800DB9E8
  {double t0=S(std::fma(c->f[9],c->ps1[4],c->f[0])), t1=S(std::fma(c->ps1[9],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800DB9EC
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[10],c->f[5],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 800DB9F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[14]=RF64(ea);} // 800DB9F4
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,15,ea,0,0);} // 800DB9F8
  {double t0=S(std::fma(c->f[11],c->f[5],c->f[0])), t1=S(std::fma(c->ps1[11],c->f[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800DB9FC
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 800DBA00
  {double t0=S(std::fma(c->f[31],c->ps1[5],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800DBA04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[15]=RF64(ea);} // 800DBA08
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,0,ea,0,0);} // 800DBA0C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800DBA10
  c->r[1]=c->r[1]+0x00000040u; // 800DBA14
  return; // 800DBA18
}

// fn_800DBA20
void f_800DBA20(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,0);} // 800DBA20
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800DBA24
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,1,0);} // 800DBA28
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 800DBA2C
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,3,ea,0,0);} // 800DBA30
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,1,0);} // 800DBA34
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 800DBA38
  {uint32_t ea=c->r[3]+0x00000024u; psq_load(c,5,ea,0,0);} // 800DBA3C
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 800DBA40
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 800DBA44
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 800DBA48
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 800DBA4C
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 800DBA50
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 800DBA54
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 800DBA58
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 800DBA5C
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 800DBA60
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 800DBA64
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 800DBA68
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 800DBA6C
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800DBA70
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 800DBA74
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 800DBA78
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 800DBA7C
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 800DBA80
  fcmp(c,0,c->f[7],c->f[6]); // 800DBA84
  if (!crb(c,2)) { goto L_800DBA94; } // 800DBA88
  c->r[3]=0u+0x00000000u; // 800DBA8C
  return; // 800DBA90
L_800DBA94:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 800DBA94
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 800DBA98
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 800DBA9C
  {double t0=S(-std::fma(c->f[0],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[0],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 800DBAA0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBAA4
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 800DBAA8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBAAC
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 800DBAB0
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DBAB4
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 800DBAB8
  {double t0=S(c->f[13]), t1=S(c->f[12]); c->f[5]=t0; c->ps1[5]=t1;} // 800DBABC
  {double t0=S(c->ps1[13]), t1=S(c->ps1[12]); c->f[4]=t0; c->ps1[4]=t1;} // 800DBAC0
  {double t0=S(c->f[13]*c->f[1]), t1=S(c->ps1[13]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 800DBAC4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800DBAC8
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,4,ea,0,0);} // 800DBACC
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 800DBAD0
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 800DBAD4
  {double t0=S(std::fma(c->f[12],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[12],c->ps1[2],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 800DBAD8
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,10,ea,1,0);} // 800DBADC
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 800DBAE0
  {double t0=S(-std::fma(c->f[11],c->f[3],c->f[6])), t1=S(-std::fma(c->ps1[11],c->ps1[3],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 800DBAE4
  {uint32_t ea=c->r[4]+0x00000024u; psq_store(c,9,ea,1,0);} // 800DBAE8
  {double t0=S(c->f[10]*c->f[1]), t1=S(c->ps1[10]*c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 800DBAEC
  {double t0=S(c->f[11]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 800DBAF0
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,1,0);} // 800DBAF4
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[7])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 800DBAF8
  {double t0=S(c->ps1[11]), t1=S(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 800DBAFC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 800DBB00
  {double t0=S(-std::fma(c->f[8],c->f[3],c->f[7])), t1=S(-std::fma(c->ps1[8],c->ps1[3],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 800DBB04
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,4,ea,0,0);} // 800DBB08
  {uint32_t ea=c->r[4]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 800DBB0C
  c->r[3]=0u+0x00000001u; // 800DBB10
  return; // 800DBB14
}

// fn_800DBB20
void f_800DBB20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB20
  c->r[0]=c->lr; // 800DBB24
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DBB28
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DBB2C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DBB30
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800DBB34
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800DBB38
  c->f[30]=c->f[1]; // 800DBB3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBB40
  c->r[31]=c->r[4]|c->r[4]; // 800DBB44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DBB48
  c->r[30]=c->r[3]|c->r[3]; // 800DBB4C
  c->lr=0x800DBB54u; f_8022844C(c); // 800DBB50
  c->f[31]=c->ps1[31]=S(c->f[1]); // 800DBB54
  c->f[1]=c->f[30]; // 800DBB58
  c->lr=0x800DBB60u; f_80228040(c); // 800DBB5C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800DBB60
  c->r[3]=c->r[30]|c->r[30]; // 800DBB64
  c->f[1]=c->f[31]; // 800DBB68
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 800DBB6C
  c->lr=0x800DBB74u; f_800DBBA0(c); // 800DBB70
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DBB74
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DBB78
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DBB7C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800DBB80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800DBB84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBB88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DBB8C
  c->lr=c->r[0]; // 800DBB90
  c->r[1]=c->r[1]+0x00000030u; // 800DBB94
  return; // 800DBB98
}

// fn_800DBBA0
void f_800DBBA0(Ctx* __restrict c) {
  c->f[5]=c->ps1[5]=S(c->f[1]); // 800DBBA0
  c->r[0]=c->r[4]|0x00000020u; // 800DBBA4
  c->f[4]=c->ps1[4]=S(c->f[2]); // 800DBBA8
  cmpu(c,0,c->r[0],0x00000078u); // 800DBBAC
  {uint32_t ea=c->r[2]+0xFFFF9A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBBB0
  {double t0=-c->f[5], t1=-c->ps1[5]; c->f[2]=t0; c->ps1[2]=t1;} // 800DBBB4
  {uint32_t ea=c->r[2]+0xFFFF9A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBBB8
  if (crb(c,2)) { goto L_800DBBD4; } // 800DBBBC
  cmpu(c,0,c->r[0],0x00000079u); // 800DBBC0
  if (crb(c,2)) { goto L_800DBBFC; } // 800DBBC4
  cmpu(c,0,c->r[0],0x0000007Au); // 800DBBC8
  if (crb(c,2)) { goto L_800DBC28; } // 800DBBCC
  return; // 800DBBD0
L_800DBBD4:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 800DBBD4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,0);} // 800DBBD8
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800DBBDC
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 800DBBE0
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 800DBBE4
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,0,ea,0,0);} // 800DBBE8
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,0,ea,1,0);} // 800DBBEC
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,3,ea,0,0);} // 800DBBF0
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,1,ea,0,0);} // 800DBBF4
  return; // 800DBBF8
L_800DBBFC:;
  {double t0=S(c->f[4]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 800DBBFC
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 800DBC00
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800DBC04
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800DBC08
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,3,ea,0,0);} // 800DBC0C
  {double t0=S(c->f[5]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800DBC10
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,3,ea,0,0);} // 800DBC14
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 800DBC18
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 800DBC1C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 800DBC20
  return; // 800DBC24
L_800DBC28:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 800DBC28
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 800DBC2C
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800DBC30
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800DBC34
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 800DBC38
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 800DBC3C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 800DBC40
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 800DBC44
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 800DBC48
  return; // 800DBC4C
}

// PSMTXTrans
void f_800DBC50(Ctx* __restrict c) {
  trace_call(0x800DBC50u);
  {uint32_t ea=c->r[2]+0xFFFF9A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBC50
  {uint32_t ea=c->r[2]+0xFFFF9A60u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DBC54
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800DBC58
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800DBC5C
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 800DBC60
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 800DBC64
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800DBC68
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 800DBC6C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800DBC70
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[4]);} // 800DBC74
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 800DBC78
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 800DBC7C
  return; // 800DBC80
}

// PSMTXTransApply
void f_800DBC90(Ctx* __restrict c) {
  trace_call(0x800DBC90u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 800DBC90
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800DBC94
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,0,0);} // 800DBC98
  c->f[2]=c->ps1[2]=S(c->f[2]); // 800DBC9C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,7,ea,0,0);} // 800DBCA0
  c->f[3]=c->ps1[3]=S(c->f[3]); // 800DBCA4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,8,ea,0,0);} // 800DBCA8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800DBCAC
  {double t0=S(c->f[5]), t1=S(c->f[1]+c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 800DBCB0
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 800DBCB4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 800DBCB8
  {double t0=S(c->f[7]), t1=S(c->f[2]+c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 800DBCBC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,9,ea,0,0);} // 800DBCC0
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,6,ea,0,0);} // 800DBCC4
  {double t0=S(c->f[8]), t1=S(c->f[3]+c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 800DBCC8
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,7,ea,0,0);} // 800DBCCC
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,9,ea,0,0);} // 800DBCD0
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,0,0);} // 800DBCD4
  return; // 800DBCD8
}

// PSMTXScale
void f_800DBCE0(Ctx* __restrict c) {
  trace_call(0x800DBCE0u);
  {uint32_t ea=c->r[2]+0xFFFF9A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCE0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800DBCE4
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 800DBCE8
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 800DBCEC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800DBCF0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 800DBCF4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 800DBCF8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800DBCFC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DBD00
  return; // 800DBD04
}

// fn_800DBD10
void f_800DBD10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBD10
  c->r[0]=c->lr; // 800DBD14
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBD18
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBD1C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD20
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DBD24
  c->r[31]=c->r[5]|c->r[5]; // 800DBD28
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800DBD2C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DBD30
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DBD34
  c->r[30]=c->r[4]|c->r[4]; // 800DBD38
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBD3C
  W32(c->r[1]+0x00000034u,c->r[29]); // 800DBD40
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800DBD44
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBD48
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD4C
  c->r[29]=c->r[3]|c->r[3]; // 800DBD50
  c->r[3]=c->r[1]+0x00000020u; // 800DBD54
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 800DBD58
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800DBD5C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800DBD60
  c->r[4]=c->r[3]|c->r[3]; // 800DBD64
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800DBD68
  c->lr=0x800DBD70u; f_800DC030(c); // 800DBD6C
  c->r[3]=c->r[31]|c->r[31]; // 800DBD70
  c->r[4]=c->r[1]+0x00000020u; // 800DBD74
  c->r[5]=c->r[1]+0x00000014u; // 800DBD78
  c->lr=0x800DBD80u; f_800DC080(c); // 800DBD7C
  c->r[3]=c->r[1]+0x00000014u; // 800DBD80
  c->r[4]=c->r[3]|c->r[3]; // 800DBD84
  c->lr=0x800DBD8Cu; f_800DC030(c); // 800DBD88
  c->r[3]=c->r[1]+0x00000020u; // 800DBD8C
  c->r[4]=c->r[1]+0x00000014u; // 800DBD90
  c->r[5]=c->r[1]+0x00000008u; // 800DBD94
  c->lr=0x800DBD9Cu; f_800DC080(c); // 800DBD98
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD9C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800DBDA0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DBDA4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDA8
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800DBDAC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DBDB0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDB4
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 800DBDB8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DBDBC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBDC0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDC4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800DBDC8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBDCC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800DBDD0
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 800DBDD4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DBDD8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800DBDDC
  c->f[0]=-c->f[0]; // 800DBDE0
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 800DBDE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDE8
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[0]);} // 800DBDEC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDF0
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[0]);} // 800DBDF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBDF8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 800DBDFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBE00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBE04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBE08
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800DBE0C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800DBE10
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 800DBE14
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DBE18
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800DBE1C
  c->f[0]=-c->f[0]; // 800DBE20
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DBE24
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBE28
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[0]);} // 800DBE2C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBE30
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 800DBE34
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBE38
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 800DBE3C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBE40
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBE44
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DBE48
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800DBE4C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800DBE50
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 800DBE54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DBE58
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800DBE5C
  c->f[0]=-c->f[0]; // 800DBE60
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DBE64
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DBE68
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DBE6C
  c->r[29]=R32(c->r[1]+0x00000034u); // 800DBE70
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBE74
  c->lr=c->r[0]; // 800DBE78
  c->r[1]=c->r[1]+0x00000040u; // 800DBE7C
  return; // 800DBE80
}

// PSMTXMultVec
void f_800DBE90(Ctx* __restrict c) {
  trace_call(0x800DBE90u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 800DBE90
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 800DBE94
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 800DBE98
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 800DBE9C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 800DBEA0
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800DBEA4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,8,ea,0,0);} // 800DBEA8
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800DBEAC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,9,ea,0,0);} // 800DBEB0
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->ps1[0]); c->f[10]=t0; c->ps1[10]=t1;} // 800DBEB4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,1,0);} // 800DBEB8
  {double t0=S(std::fma(c->f[9],c->f[1],c->f[10])), t1=S(std::fma(c->ps1[9],c->ps1[1],c->ps1[10])); c->f[11]=t0; c->ps1[11]=t1;} // 800DBEBC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,0,0);} // 800DBEC0
  {double t0=S(c->f[11]+c->ps1[11]), t1=S(c->ps1[12]); c->f[12]=t0; c->ps1[12]=t1;} // 800DBEC4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,3,ea,0,0);} // 800DBEC8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 800DBECC
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,12,ea,1,0);} // 800DBED0
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800DBED4
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800DBED8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,1,0);} // 800DBEDC
  return; // 800DBEE0
}

// fn_800DBEF0
void f_800DBEF0(Ctx* __restrict c) {
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 800DBEF0
  {uint32_t ea=c->r[2]+0xFFFF9A70u; c->f[9]=c->ps1[9]=RF32(ea);} // 800DBEF4
  {uint32_t ea=c->r[2]+0xFFFF9A68u; c->f[11]=c->ps1[11]=RF32(ea);} // 800DBEF8
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[2]); // 800DBEFC
  c->f[7]=c->ps1[7]=S(c->f[6]-c->f[5]); // 800DBF00
  {uint32_t ea=c->r[2]+0xFFFF9A6Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800DBF04
  c->f[12]=c->ps1[12]=S(c->f[11]/c->f[0]); // 800DBF08
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBF0C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800DBF10
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 800DBF14
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[9]);} // 800DBF18
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[9]);} // 800DBF1C
  c->f[8]=c->ps1[8]=S(c->f[11]/c->f[8]); // 800DBF20
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[9]);} // 800DBF24
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[9]);} // 800DBF28
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[9]);} // 800DBF2C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[9]);} // 800DBF30
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[9]);} // 800DBF34
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 800DBF38
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[9]);} // 800DBF3C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800DBF40
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[5]); // 800DBF44
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 800DBF48
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[3]); // 800DBF4C
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[8]); // 800DBF50
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800DBF54
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[5]); // 800DBF58
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800DBF5C
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[12]); // 800DBF60
  c->f[3]=c->ps1[3]=S(c->f[11]/c->f[7]); // 800DBF64
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 800DBF68
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 800DBF6C
  c->f[1]=-c->f[5]; // 800DBF70
  c->f[0]=-c->f[6]; // 800DBF74
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 800DBF78
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800DBF7C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 800DBF80
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DBF84
  return; // 800DBF88
}

// fn_800DBF90
void f_800DBF90(Ctx* __restrict c) {
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 800DBF90
  {uint32_t ea=c->r[2]+0xFFFF9A70u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DBF94
  {uint32_t ea=c->r[2]+0xFFFF9A68u; c->f[10]=c->ps1[10]=RF32(ea);} // 800DBF98
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 800DBF9C
  c->f[0]=c->ps1[0]=S(c->f[6]-c->f[5]); // 800DBFA0
  {uint32_t ea=c->r[2]+0xFFFF9A6Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800DBFA4
  c->f[12]=c->ps1[12]=S(c->f[10]/c->f[11]); // 800DBFA8
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DBFAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 800DBFB0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[8]);} // 800DBFB4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[8]);} // 800DBFB8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[8]);} // 800DBFBC
  c->f[11]=c->ps1[11]=S(c->f[10]/c->f[7]); // 800DBFC0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[8]);} // 800DBFC4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[8]);} // 800DBFC8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[8]);} // 800DBFCC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[8]);} // 800DBFD0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[8]);} // 800DBFD4
  c->f[7]=c->ps1[7]=S(c->f[10]/c->f[0]); // 800DBFD8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[10]);} // 800DBFDC
  c->f[0]=-c->f[6]; // 800DBFE0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800DBFE4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800DBFE8
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[12]); // 800DBFEC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 800DBFF0
  c->f[2]=-c->f[3]; // 800DBFF4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 800DBFF8
  c->f[3]=c->ps1[3]=S(c->f[9]*c->f[11]); // 800DBFFC
  c->f[1]=-c->f[1]; // 800DC000
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800DC004
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[2]); // 800DC008
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 800DC00C
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[1]); // 800DC010
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[7]); // 800DC014
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 800DC018
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800DC01C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 800DC020
  return; // 800DC024
}

// fn_800DC030
void f_800DC030(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 800DC030
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 800DC034
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 800DC038
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC03C
  {uint32_t ea=c->r[2]+0xFFFF9A7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC040
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[5])); c->f[4]=t0; c->ps1[4]=t1;} // 800DC044
  {double t0=S(c->f[4]+c->ps1[5]), t1=S(c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 800DC048
  c->f[5]=frsqrte(c->f[4]); // 800DC04C
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[5]); // 800DC050
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800DC054
  c->f[6]=c->ps1[6]=S(-std::fma(c->f[6],c->f[4],-c->f[1])); // 800DC058
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[0]); // 800DC05C
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 800DC060
  {double t0=S(c->f[3]*c->f[5]), t1=S(c->ps1[3]*c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 800DC064
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800DC068
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,3,ea,1,0);} // 800DC06C
  return; // 800DC070
}

// fn_800DC080
void f_800DC080(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 800DC080
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DC084
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800DC088
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[6]=t0; c->ps1[6]=t1;} // 800DC08C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DC090
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 800DC094
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 800DC098
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800DC09C
  {double t0=S(std::fma(c->f[0],c->f[6],-c->f[7])), t1=S(std::fma(c->ps1[0],c->ps1[6],-c->ps1[7])); c->f[8]=t0; c->ps1[8]=t1;} // 800DC0A0
  {double t0=S(c->ps1[5]), t1=S(c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 800DC0A4
  {double t0=S(c->f[5]), t1=S(c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 800DC0A8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,9,ea,1,0);} // 800DC0AC
  {double t0=-c->f[10], t1=-c->ps1[10]; c->f[10]=t0; c->ps1[10]=t1;} // 800DC0B0
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,10,ea,0,0);} // 800DC0B4
  return; // 800DC0B8
}

// __GXDefaultTexRegionCallback
void f_800DC0C0(Ctx* __restrict c) {
  trace_call(0x800DC0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC0C0
  c->r[0]=c->lr; // 800DC0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC0C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC0CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC0D0
  c->r[30]=c->r[4]|c->r[4]; // 800DC0D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC0D8
  c->r[29]=c->r[3]|c->r[3]; // 800DC0DC
  c->lr=0x800DC0E4u; f_800E0820(c); // 800DC0E0
  c->r[31]=c->r[3]|c->r[3]; // 800DC0E4
  c->r[3]=c->r[29]|c->r[29]; // 800DC0E8
  c->lr=0x800DC0F0u; f_800E0850(c); // 800DC0EC
  c->r[0]=c->r[31]+0xFFFFFFF8u; // 800DC0F0
  c->r[4]=rotl(c->r[30],29)&0xE0000000u; // 800DC0F4
  c->r[5]=rotl(c->r[30],1)&0x00000001u; // 800DC0F8
  c->r[4]=c->r[4]-c->r[5]; // 800DC0FC
  cmpu(c,0,c->r[0],0x00000002u); // 800DC100
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFFFu; // 800DC104
  c->r[30]=c->r[0]+c->r[5]; // 800DC108
  if (!crb(c,1)) { goto L_800DC148; } // 800DC10C
  cmps(c,0,(int32_t)c->r[31],6); // 800DC110
  if (!crb(c,2)) { goto L_800DC15C; } // 800DC114
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DC118
  if (crb(c,2)) { goto L_800DC134; } // 800DC11C
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC120
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 800DC124
  c->r[3]=c->r[3]+c->r[0]; // 800DC128
  c->r[3]=c->r[3]+0x00000358u; // 800DC12C
  goto L_800DC188; // 800DC130
L_800DC134:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC134
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 800DC138
  c->r[3]=c->r[3]+c->r[0]; // 800DC13C
  c->r[3]=c->r[3]+0x000002D8u; // 800DC140
  goto L_800DC188; // 800DC144
L_800DC148:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC148
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 800DC14C
  c->r[3]=c->r[3]+c->r[0]; // 800DC150
  c->r[3]=c->r[3]+0x00000258u; // 800DC154
  goto L_800DC188; // 800DC158
L_800DC15C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DC15C
  if (crb(c,2)) { goto L_800DC178; } // 800DC160
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC164
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 800DC168
  c->r[3]=c->r[3]+c->r[0]; // 800DC16C
  c->r[3]=c->r[3]+0x000002D8u; // 800DC170
  goto L_800DC188; // 800DC174
L_800DC178:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC178
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 800DC17C
  c->r[3]=c->r[3]+c->r[0]; // 800DC180
  c->r[3]=c->r[3]+0x00000258u; // 800DC184
L_800DC188:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC188
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC18C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DC190
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DC194
  c->lr=c->r[0]; // 800DC198
  c->r[1]=c->r[1]+0x00000020u; // 800DC19C
  return; // 800DC1A0
}

// __GXDefaultTlutRegionCallback
void f_800DC1B0(Ctx* __restrict c) {
  trace_call(0x800DC1B0u);
  cmpu(c,0,c->r[3],0x00000014u); // 800DC1B0
  if (crb(c,0)) { goto L_800DC1C0; } // 800DC1B4
  c->r[3]=0u+0x00000000u; // 800DC1B8
  return; // 800DC1BC
L_800DC1C0:;
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DC1C0
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800DC1C4
  c->r[3]=c->r[4]+c->r[0]; // 800DC1C8
  c->r[3]=c->r[3]+0x000003D8u; // 800DC1CC
  return; // 800DC1D0
}

// __GXShutdown
void f_800DC1E0(Ctx* __restrict c) {
  trace_call(0x800DC1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC1E0
  c->r[0]=c->lr; // 800DC1E4
  cmps(c,0,(int32_t)c->r[3],0); // 800DC1E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC1EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC1F0
  if (!crb(c,2)) { goto L_800DC2D0; } // 800DC1F4
  c->r[0]=R32(c->r[13]+0xFFFFA6B0u); // 800DC1F8
  cmps(c,0,(int32_t)c->r[0],0); // 800DC1FC
  if (!crb(c,2)) { goto L_800DC24C; } // 800DC200
  c->r[5]=R32(c->r[13]+0xFFFFA69Cu); // 800DC204
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 800DC208
  c->r[0]=c->r[0]|0x00000000u; // 800DC20C
L_800DC210:;
  c->r[0]=c->r[4]|c->r[4]; // 800DC210
  c->r[3]=R16(c->r[5]+0x00000050u); // 800DC214
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 800DC218
  cmpu(c,0,c->r[4],c->r[0]); // 800DC21C
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC210; } // 800DC220
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 800DC224
  c->r[0]=c->r[0]|c->r[3]; // 800DC228
  W32(c->r[13]+0xFFFFA6A0u,c->r[0]); // 800DC22C
  c->lr=0x800DC234u; f_800D0510(c); // 800DC230
  W32(c->r[13]+0xFFFFA6A8u,c->r[3]); // 800DC234
  c->r[0]=0u+0x00000001u; // 800DC238
  c->r[3]=0u+0x00000000u; // 800DC23C
  W32(c->r[13]+0xFFFFA6ACu,c->r[4]); // 800DC240
  W32(c->r[13]+0xFFFFA6B0u,c->r[0]); // 800DC244
  goto L_800DC33C; // 800DC248
L_800DC24C:;
  c->lr=0x800DC250u; f_800D0510(c); // 800DC24C
  c->r[5]=R32(c->r[13]+0xFFFFA69Cu); // 800DC250
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 800DC254
L_800DC258:;
  c->r[0]=c->r[7]|c->r[7]; // 800DC258
  c->r[10]=R16(c->r[5]+0x00000050u); // 800DC25C
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 800DC260
  cmpu(c,0,c->r[7],c->r[0]); // 800DC264
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC258; } // 800DC268
  c->r[5]=R32(c->r[13]+0xFFFFA6ACu); // 800DC26C
  c->r[0]=0u+0x00000000u; // 800DC270
  c->r[6]=R32(c->r[13]+0xFFFFA6A8u); // 800DC274
  c->r[9]=rotl(c->r[7],16)&0xFFFF0000u; // 800DC278
  c->r[8]=addc(c,~c->r[5],c->r[4],1); // 800DC27C
  c->r[5]=0u+0x0000000Au; // 800DC280
  c->r[7]=addc(c,~c->r[6],c->r[3],c->xer_ca); // 800DC284
  c->r[6]=c->r[0]^0x80000000u; // 800DC288
  c->r[5]=addc(c,~c->r[5],c->r[8],1); // 800DC28C
  c->r[0]=c->r[7]^0x80000000u; // 800DC290
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 800DC294
  c->r[5]=c->r[9]|c->r[10]; // 800DC298
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800DC29C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800DC2A0
  if (crb(c,2)) { goto L_800DC2B0; } // 800DC2A4
  c->r[3]=0u+0x00000000u; // 800DC2A8
  goto L_800DC33C; // 800DC2AC
L_800DC2B0:;
  c->r[0]=R32(c->r[13]+0xFFFFA6A0u); // 800DC2B0
  cmpu(c,0,c->r[5],c->r[0]); // 800DC2B4
  if (crb(c,2)) { goto L_800DC338; } // 800DC2B8
  W32(c->r[13]+0xFFFFA6A8u,c->r[3]); // 800DC2BC
  c->r[3]=0u+0x00000000u; // 800DC2C0
  W32(c->r[13]+0xFFFFA6A0u,c->r[5]); // 800DC2C4
  W32(c->r[13]+0xFFFFA6ACu,c->r[4]); // 800DC2C8
  goto L_800DC33C; // 800DC2CC
L_800DC2D0:;
  c->r[3]=0u+0x00000000u; // 800DC2D0
  c->lr=0x800DC2D8u; f_800DD9C0(c); // 800DC2D4
  c->r[3]=0u+0x00000000u; // 800DC2D8
  c->lr=0x800DC2E0u; f_800DED60(c); // 800DC2DC
  c->r[3]=0u+0x00000000u; // 800DC2E0
  c->lr=0x800DC2E8u; f_800DEE40(c); // 800DC2E4
  c->r[3]=0u+0xCC010000u; // 800DC2E8
  c->r[31]=0u+0x00000000u; // 800DC2EC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC2F0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC2F4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC2F8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC2FC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC300
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC304
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC308
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DC30C
  c->lr=0x800DC314u; f_800C4F90(c); // 800DC310
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DC314
  c->r[5]=0u+0x00000003u; // 800DC318
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC31C
  c->r[0]=0u+0x00000001u; // 800DC320
  W16(c->r[4]+0x00000002u,c->r[31]); // 800DC324
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DC328
  W16(c->r[4]+0x00000004u,c->r[5]); // 800DC32C
  W8(c->r[3]+0x000005FAu,c->r[0]); // 800DC330
  c->lr=0x800DC338u; f_800DE800(c); // 800DC334
L_800DC338:;
  c->r[3]=0u+0x00000001u; // 800DC338
L_800DC33C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC33C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC340
  c->lr=c->r[0]; // 800DC344
  c->r[1]=c->r[1]+0x00000010u; // 800DC348
  return; // 800DC34C
}

// __GXInitRevisionBits
void f_800DC350(Ctx* __restrict c) {
  trace_call(0x800DC350u);
  c->r[0]=0u+0x00000002u; // 800DC350
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800DC354
  c->r[7]=0u+0x00000000u; // 800DC358
  c->r[5]=0u+0x00000008u; // 800DC35C
  c->r[4]=0u+0xCC010000u; // 800DC360
  c->ctr=c->r[0]; // 800DC364
L_800DC368:;
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 800DC368
  c->r[3]=c->r[7]|0x00000080u; // 800DC36C
  c->r[7]=c->r[7]+0x00000001u; // 800DC370
  c->r[0]=c->r[0]|0x40000000u; // 800DC374
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 800DC378
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 800DC37C
  c->r[0]=c->r[0]|0x80000000u; // 800DC380
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 800DC384
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800DC388
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 800DC38C
  c->r[3]=c->r[7]|0x00000080u; // 800DC390
  c->r[7]=c->r[7]+0x00000001u; // 800DC394
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 800DC398
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800DC39C
  c->r[0]=R32(c->r[6]+0x00000020u); // 800DC3A0
  c->r[0]=c->r[0]|0x40000000u; // 800DC3A4
  W32(c->r[6]+0x00000020u,c->r[0]); // 800DC3A8
  c->r[0]=R32(c->r[6]+0x00000040u); // 800DC3AC
  c->r[0]=c->r[0]|0x80000000u; // 800DC3B0
  W32(c->r[6]+0x00000040u,c->r[0]); // 800DC3B4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800DC3B8
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 800DC3BC
  c->r[3]=c->r[7]|0x00000080u; // 800DC3C0
  c->r[7]=c->r[7]+0x00000001u; // 800DC3C4
  c->r[0]=R32(c->r[6]+0x00000040u); // 800DC3C8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800DC3CC
  c->r[0]=R32(c->r[6]+0x00000024u); // 800DC3D0
  c->r[0]=c->r[0]|0x40000000u; // 800DC3D4
  W32(c->r[6]+0x00000024u,c->r[0]); // 800DC3D8
  c->r[0]=R32(c->r[6]+0x00000044u); // 800DC3DC
  c->r[0]=c->r[0]|0x80000000u; // 800DC3E0
  W32(c->r[6]+0x00000044u,c->r[0]); // 800DC3E4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800DC3E8
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 800DC3EC
  c->r[3]=c->r[7]|0x00000080u; // 800DC3F0
  c->r[7]=c->r[7]+0x00000001u; // 800DC3F4
  c->r[0]=R32(c->r[6]+0x00000044u); // 800DC3F8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800DC3FC
  c->r[0]=R32(c->r[6]+0x00000028u); // 800DC400
  c->r[0]=c->r[0]|0x40000000u; // 800DC404
  W32(c->r[6]+0x00000028u,c->r[0]); // 800DC408
  c->r[0]=R32(c->r[6]+0x00000048u); // 800DC40C
  c->r[0]=c->r[0]|0x80000000u; // 800DC410
  W32(c->r[6]+0x00000048u,c->r[0]); // 800DC414
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800DC418
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 800DC41C
  c->r[0]=R32(c->r[6]+0x00000048u); // 800DC420
  c->r[6]=c->r[6]+0x00000010u; // 800DC424
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800DC428
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DC368; } // 800DC42C
  c->r[7]=0u+0xCC010000u; // 800DC430
  c->r[8]=0u+0x00000010u; // 800DC434
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DC438
  c->r[4]=0u+0x00000000u; // 800DC43C
  c->r[0]=0u+0x00001000u; // 800DC440
  c->r[5]=0u+0x00001012u; // 800DC444
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800DC448
  c->r[0]=c->r[4]|0x0000003Fu; // 800DC44C
  c->r[6]=c->r[4]|0x00000001u; // 800DC450
  c->r[3]=0u+0x00000058u; // 800DC454
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800DC458
  c->r[4]=c->r[4]|0x0000000Fu; // 800DC45C
  c->r[0]=0u+0x00000061u; // 800DC460
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DC464
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC468
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 800DC46C
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800DC470
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 800DC474
  W32(c->r[7]+0xFFFF8000u,c->r[4]); // 800DC478
  return; // 800DC47C
}

// GXInit
void f_800DC480(Ctx* __restrict c) {
  trace_call(0x800DC480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC480
  c->r[0]=c->lr; // 800DC484
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC488
  c->r[11]=c->r[1]+0x00000020u; // 800DC48C
  c->lr=0x800DC494u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC490
  c->r[27]=c->r[3]|c->r[3]; // 800DC494
  c->r[3]=R32(c->r[13]+0xFFFF8FC8u); // 800DC498
  c->r[26]=c->r[4]|c->r[4]; // 800DC49C
  c->lr=0x800DC4A4u; f_800C65B0(c); // 800DC4A0
  c->r[31]=R32(c->r[2]+0xFFFF9A80u); // 800DC4A4
  c->r[0]=0u+0x00000000u; // 800DC4A8
  c->r[29]=0u+0x00000001u; // 800DC4AC
  c->r[3]=0u+0x00000001u; // 800DC4B0
  W8(c->r[31]+0x000005F8u,c->r[0]); // 800DC4B4
  c->r[4]=0u+0x00000000u; // 800DC4B8
  W8(c->r[31]+0x000005F9u,c->r[29]); // 800DC4BC
  W8(c->r[31]+0x000005FAu,c->r[29]); // 800DC4C0
  W32(c->r[31]+0x000005E4u,c->r[0]); // 800DC4C4
  W32(c->r[31]+0x000005E8u,c->r[0]); // 800DC4C8
  c->lr=0x800DC4D0u; f_800DE780(c); // 800DC4CC
  c->r[4]=0u+0xCC000000u; // 800DC4D0
  W32(c->r[13]+0xFFFFA694u,c->r[4]); // 800DC4D4
  c->r[5]=c->r[4]+0x00003000u; // 800DC4D8
  c->r[3]=c->r[4]+0x00001000u; // 800DC4DC
  c->r[0]=c->r[4]+0x00004000u; // 800DC4E0
  W32(c->r[13]+0xFFFFA690u,c->r[5]); // 800DC4E4
  W32(c->r[13]+0xFFFFA698u,c->r[3]); // 800DC4E8
  W32(c->r[13]+0xFFFFA69Cu,c->r[0]); // 800DC4EC
  c->lr=0x800DC4F4u; f_800DDA10(c); // 800DC4F0
  c->r[28]=0u+0x802F0000u; // 800DC4F4
  c->r[4]=c->r[27]|c->r[27]; // 800DC4F8
  c->r[5]=c->r[26]|c->r[26]; // 800DC4FC
  c->r[3]=c->r[28]+0xFFFFA8C0u; // 800DC500
  c->lr=0x800DC508u; f_800DD3B0(c); // 800DC504
  c->r[3]=c->r[28]+0xFFFFA8C0u; // 800DC508
  c->lr=0x800DC510u; f_800DD540(c); // 800DC50C
  c->r[3]=c->r[28]+0xFFFFA8C0u; // 800DC510
  c->lr=0x800DC518u; f_800DD720(c); // 800DC514
  c->r[0]=R32(c->r[13]+0xFFFFA6B4u); // 800DC518
  cmps(c,0,(int32_t)c->r[0],0); // 800DC51C
  if (!crb(c,2)) { goto L_800DC534; } // 800DC520
  c->r[3]=0u+0x802B0000u; // 800DC524
  c->r[3]=c->r[3]+0xFFFFF0B0u; // 800DC528
  c->lr=0x800DC530u; f_800CD1E0(c); // 800DC52C
  W32(c->r[13]+0xFFFFA6B4u,c->r[29]); // 800DC530
L_800DC534:;
  c->lr=0x800DC538u; f_800DEF10(c); // 800DC534
  c->lr=0x800DC53Cu; f_800C5070(c); // 800DC538
  c->r[4]=0u+0x0C010000u; // 800DC53C
  c->r[28]=c->r[3]|c->r[3]; // 800DC540
  c->r[3]=c->r[4]+0xFFFF8000u; // 800DC544
  c->lr=0x800DC54Cu; f_800C5090(c); // 800DC548
  c->r[3]=c->r[28]|0x40000000u; // 800DC54C
  c->lr=0x800DC554u; f_800C5080(c); // 800DC550
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DC554
  c->r[8]=0u+0x00000000u; // 800DC558
  c->r[0]=0u+0x0000000Fu; // 800DC55C
  c->r[5]=0u+0x000000FFu; // 800DC560
  W32(c->r[3]+0x00000254u,c->r[8]); // 800DC564
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800DC568
  c->r[0]=0u+0x00000022u; // 800DC56C
  c->r[4]=0u+0x00000000u; // 800DC570
  W32(c->r[3]+0x00000174u,c->r[5]); // 800DC574
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC578
  c->r[0]=0u+0x00000008u; // 800DC57C
  c->r[9]=c->r[3]|c->r[3]; // 800DC580
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 800DC584
  c->r[26]=0u+0x00000000u; // 800DC588
  c->r[10]=0u+0x000000C0u; // 800DC58C
  c->r[6]=0u+0x000000FFu; // 800DC590
  c->ctr=c->r[0]; // 800DC594
L_800DC598:;
  W32(c->r[9]+0x00000180u,c->r[8]); // 800DC598
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 800DC59C
  c->r[27]=c->r[3]+c->r[7]; // 800DC5A0
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 800DC5A4
  W32(c->r[9]+0x000001C0u,c->r[8]); // 800DC5A8
  c->r[26]=c->r[26]+0x00000001u; // 800DC5AC
  c->r[11]=c->r[10]+0x00000001u; // 800DC5B0
  c->r[5]=c->r[12]+0x000000F6u; // 800DC5B4
  W32(c->r[27]+0x00000150u,c->r[8]); // 800DC5B8
  c->r[0]=c->r[12]+0x00000028u; // 800DC5BC
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 800DC5C0
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 800DC5C4
  W32(c->r[9]+0x000005A4u,c->r[6]); // 800DC5C8
  c->r[26]=c->r[26]+0x00000001u; // 800DC5CC
  c->r[4]=R32(c->r[9]+0x00000180u); // 800DC5D0
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC5D4
  W32(c->r[9]+0x00000180u,c->r[4]); // 800DC5D8
  c->r[4]=R32(c->r[9]+0x000001C0u); // 800DC5DC
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC5E0
  W32(c->r[9]+0x000001C0u,c->r[4]); // 800DC5E4
  c->r[11]=c->r[10]+0x00000003u; // 800DC5E8
  c->r[10]=c->r[10]+0x00000002u; // 800DC5EC
  c->r[4]=R32(c->r[27]+0x00000200u); // 800DC5F0
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC5F4
  W32(c->r[27]+0x00000200u,c->r[4]); // 800DC5F8
  c->r[5]=c->r[12]+0x000000F6u; // 800DC5FC
  c->r[4]=R32(c->r[27]+0x00000150u); // 800DC600
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC604
  W32(c->r[27]+0x00000150u,c->r[4]); // 800DC608
  c->r[27]=c->r[3]+c->r[7]; // 800DC60C
  c->r[0]=c->r[12]+0x00000028u; // 800DC610
  W32(c->r[9]+0x00000184u,c->r[8]); // 800DC614
  W32(c->r[9]+0x000001C4u,c->r[8]); // 800DC618
  W32(c->r[27]+0x00000150u,c->r[8]); // 800DC61C
  W32(c->r[9]+0x000005A8u,c->r[6]); // 800DC620
  c->r[4]=R32(c->r[9]+0x00000184u); // 800DC624
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC628
  W32(c->r[9]+0x00000184u,c->r[4]); // 800DC62C
  c->r[10]=c->r[10]+0x00000002u; // 800DC630
  c->r[4]=R32(c->r[9]+0x000001C4u); // 800DC634
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC638
  W32(c->r[9]+0x000001C4u,c->r[4]); // 800DC63C
  c->r[9]=c->r[9]+0x00000008u; // 800DC640
  c->r[4]=R32(c->r[27]+0x00000200u); // 800DC644
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC648
  W32(c->r[27]+0x00000200u,c->r[4]); // 800DC64C
  c->r[4]=R32(c->r[27]+0x00000150u); // 800DC650
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC654
  W32(c->r[27]+0x00000150u,c->r[4]); // 800DC658
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DC598; } // 800DC65C
  c->r[4]=0u+0x00000027u; // 800DC660
  c->r[0]=0u+0x00000002u; // 800DC664
  c->r[5]=0u+0x00000000u; // 800DC668
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800DC66C
  W32(c->r[31]+0x00000170u,c->r[5]); // 800DC670
  c->r[5]=0u+0x00000030u; // 800DC674
  c->ctr=c->r[0]; // 800DC678
L_800DC67C:;
  c->r[4]=0u+0x00000000u; // 800DC67C
  c->r[6]=c->r[5]+0x00000001u; // 800DC680
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC684
  W32(c->r[3]+0x00000108u,c->r[4]); // 800DC688
  c->r[0]=0u+0x00000000u; // 800DC68C
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800DC690
  W32(c->r[3]+0x00000128u,c->r[0]); // 800DC694
  c->r[6]=c->r[5]+0x00000003u; // 800DC698
  c->r[5]=c->r[5]+0x00000002u; // 800DC69C
  c->r[4]=0u+0x00000000u; // 800DC6A0
  c->r[0]=0u+0x00000000u; // 800DC6A4
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC6A8
  W32(c->r[3]+0x0000010Cu,c->r[4]); // 800DC6AC
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800DC6B0
  c->r[6]=c->r[5]+0x00000003u; // 800DC6B4
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 800DC6B8
  c->r[5]=c->r[5]+0x00000002u; // 800DC6BC
  c->r[4]=0u+0x00000000u; // 800DC6C0
  c->r[0]=0u+0x00000000u; // 800DC6C4
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC6C8
  W32(c->r[3]+0x00000110u,c->r[4]); // 800DC6CC
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800DC6D0
  c->r[6]=c->r[5]+0x00000003u; // 800DC6D4
  W32(c->r[3]+0x00000130u,c->r[0]); // 800DC6D8
  c->r[5]=c->r[5]+0x00000002u; // 800DC6DC
  c->r[4]=0u+0x00000000u; // 800DC6E0
  c->r[0]=0u+0x00000000u; // 800DC6E4
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800DC6E8
  W32(c->r[3]+0x00000114u,c->r[4]); // 800DC6EC
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800DC6F0
  c->r[5]=c->r[5]+0x00000002u; // 800DC6F4
  W32(c->r[3]+0x00000134u,c->r[0]); // 800DC6F8
  c->r[3]=c->r[3]+0x00000010u; // 800DC6FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DC67C; } // 800DC700
  c->r[30]=R32(c->r[2]+0xFFFF9A80u); // 800DC704
  c->r[3]=0u+0x10620000u; // 800DC708
  c->r[4]=0u+0x00000020u; // 800DC70C
  c->r[0]=0u+0x00000021u; // 800DC710
  c->r[5]=R32(c->r[30]+0x00000148u); // 800DC714
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800DC718
  W32(c->r[30]+0x00000148u,c->r[5]); // 800DC71C
  c->r[4]=0u+0x00000041u; // 800DC720
  c->r[7]=0u+0x00000042u; // 800DC724
  c->r[6]=0u+0x00000040u; // 800DC728
  c->r[5]=R32(c->r[30]+0x0000014Cu); // 800DC72C
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800DC730
  W32(c->r[30]+0x0000014Cu,c->r[5]); // 800DC734
  c->r[5]=0u+0x00000043u; // 800DC738
  {uint32_t ea=c->r[2]+0xFFFF9A84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC73C
  c->r[0]=0u+0x00000000u; // 800DC740
  c->r[8]=R32(c->r[30]+0x00000220u); // 800DC744
  c->r[8]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800DC748
  W32(c->r[30]+0x00000220u,c->r[8]); // 800DC74C
  c->r[4]=0u+0x80000000u; // 800DC750
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC754
  c->r[3]=c->r[3]+0x00004DD3u; // 800DC758
  c->r[8]=R32(c->r[30]+0x00000224u); // 800DC75C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800DC760
  W32(c->r[30]+0x00000224u,c->r[8]); // 800DC764
  c->r[7]=R32(c->r[30]+0x00000228u); // 800DC768
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800DC76C
  W32(c->r[30]+0x00000228u,c->r[7]); // 800DC770
  c->r[6]=R32(c->r[30]+0x0000022Cu); // 800DC774
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800DC778
  W32(c->r[30]+0x0000022Cu,c->r[6]); // 800DC77C
  c->r[5]=R32(c->r[30]+0x0000024Cu); // 800DC780
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE7Fu; // 800DC784
  W32(c->r[30]+0x0000024Cu,c->r[5]); // 800DC788
  {uint32_t ea=c->r[30]+0x00000560u; WF32(ea,c->f[1]);} // 800DC78C
  {uint32_t ea=c->r[30]+0x0000055Cu; WF32(ea,c->f[0]);} // 800DC790
  W32(c->r[30]+0x000005FCu,c->r[0]); // 800DC794
  W8(c->r[30]+0x000005FBu,c->r[0]); // 800DC798
  c->r[0]=R32(c->r[4]+0x000000F8u); // 800DC79C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800DC7A0
  c->r[26]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DC7A4
  c->lr=0x800DC7ACu; f_800E15E0(c); // 800DC7A8
  c->r[29]=0u+0xCC010000u; // 800DC7AC
  c->r[0]=rotl(c->r[26],21)&0x001FFFFFu; // 800DC7B0
  c->r[28]=0u+0x00000061u; // 800DC7B4
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800DC7B8
  c->r[0]=c->r[0]|0x69000000u; // 800DC7BC
  c->r[0]=c->r[0]|0x00000400u; // 800DC7C0
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 800DC7C4
  c->lr=0x800DC7CCu; f_800E15E0(c); // 800DC7C8
  c->r[3]=0u+0x3E100000u; // 800DC7CC
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800DC7D0
  c->r[0]=c->r[3]+0xFFFF83E1u; // 800DC7D4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 800DC7D8
  c->r[0]=rotl(c->r[0],22)&0x003FFFFFu; // 800DC7DC
  c->r[0]=c->r[0]|0x46000000u; // 800DC7E0
  c->r[0]=c->r[0]|0x00000200u; // 800DC7E4
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 800DC7E8
  c->lr=0x800DC7F0u; f_800DC350(c); // 800DC7EC
  c->r[28]=0u+0x802B0000u; // 800DC7F0
  c->r[29]=c->r[30]+0x00000258u; // 800DC7F4
  c->r[27]=c->r[30]+0x000002D8u; // 800DC7F8
  c->r[30]=c->r[30]+0x00000358u; // 800DC7FC
  c->r[28]=c->r[28]+0xFFFFEFF0u; // 800DC800
  c->r[26]=0u+0x00000000u; // 800DC804
L_800DC808:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 800DC808
  c->r[3]=c->r[29]|c->r[29]; // 800DC80C
  c->r[7]=R32(c->r[28]+0x00000020u); // 800DC810
  c->r[4]=0u+0x00000000u; // 800DC814
  c->r[6]=0u+0x00000000u; // 800DC818
  c->r[8]=0u+0x00000000u; // 800DC81C
  c->lr=0x800DC824u; f_800E0B00(c); // 800DC820
  c->r[5]=R32(c->r[28]+0x00000040u); // 800DC824
  c->r[3]=c->r[27]|c->r[27]; // 800DC828
  c->r[7]=R32(c->r[28]+0x00000060u); // 800DC82C
  c->r[4]=0u+0x00000000u; // 800DC830
  c->r[6]=0u+0x00000000u; // 800DC834
  c->r[8]=0u+0x00000000u; // 800DC838
  c->lr=0x800DC840u; f_800E0B00(c); // 800DC83C
  c->r[5]=R32(c->r[28]+0x00000080u); // 800DC840
  c->r[3]=c->r[30]|c->r[30]; // 800DC844
  c->r[7]=R32(c->r[28]+0x000000A0u); // 800DC848
  c->r[4]=0u+0x00000001u; // 800DC84C
  c->r[6]=0u+0x00000000u; // 800DC850
  c->r[8]=0u+0x00000000u; // 800DC854
  c->lr=0x800DC85Cu; f_800E0B00(c); // 800DC858
  c->r[26]=c->r[26]+0x00000001u; // 800DC85C
  c->r[29]=c->r[29]+0x00000010u; // 800DC860
  cmpu(c,0,c->r[26],0x00000008u); // 800DC864
  c->r[27]=c->r[27]+0x00000010u; // 800DC868
  c->r[30]=c->r[30]+0x00000010u; // 800DC86C
  c->r[28]=c->r[28]+0x00000004u; // 800DC870
  if (crb(c,0)) { IRQCHK(c); goto L_800DC808; } // 800DC874
  c->r[29]=c->r[31]+0x000003D8u; // 800DC878
  c->r[27]=0u+0x00000000u; // 800DC87C
  c->r[28]=0u+0x000C0000u; // 800DC880
L_800DC884:;
  c->r[3]=c->r[29]|c->r[29]; // 800DC884
  c->r[4]=c->r[28]|c->r[28]; // 800DC888
  c->r[5]=0u+0x00000010u; // 800DC88C
  c->lr=0x800DC894u; f_800E0BB0(c); // 800DC890
  c->r[27]=c->r[27]+0x00000001u; // 800DC894
  c->r[29]=c->r[29]+0x00000010u; // 800DC898
  cmpu(c,0,c->r[27],0x00000010u); // 800DC89C
  c->r[28]=c->r[28]+0x00002000u; // 800DC8A0
  if (crb(c,0)) { IRQCHK(c); goto L_800DC884; } // 800DC8A4
  c->r[29]=c->r[31]+0x000003D8u; // 800DC8A8
  c->r[27]=0u+0x00000000u; // 800DC8AC
  c->r[28]=0u+0x000E0000u; // 800DC8B0
L_800DC8B4:;
  c->r[0]=c->r[27]+0x00000010u; // 800DC8B4
  c->r[4]=c->r[28]|c->r[28]; // 800DC8B8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800DC8BC
  c->r[5]=0u+0x00000040u; // 800DC8C0
  c->r[3]=c->r[29]+c->r[0]; // 800DC8C4
  c->lr=0x800DC8CCu; f_800E0BB0(c); // 800DC8C8
  c->r[27]=c->r[27]+0x00000001u; // 800DC8CC
  c->r[28]=c->r[28]+0x00010000u; // 800DC8D0
  cmpu(c,0,c->r[27],0x00000004u); // 800DC8D4
  c->r[28]=c->r[28]+0xFFFF8000u; // 800DC8D8
  if (crb(c,0)) { IRQCHK(c); goto L_800DC8B4; } // 800DC8DC
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DC8E0
  c->r[11]=0u+0x00000000u; // 800DC8E4
  c->r[9]=0u+0xCC010000u; // 800DC8E8
  c->r[10]=0u+0x00000008u; // 800DC8EC
  W16(c->r[3]+0x00000006u,c->r[11]); // 800DC8F0
  c->r[8]=0u+0x00000020u; // 800DC8F4
  c->r[7]=0u+0x00000010u; // 800DC8F8
  c->r[3]=0u+0x00001006u; // 800DC8FC
  c->r[0]=R32(c->r[31]+0x000005F4u); // 800DC900
  c->r[6]=0u+0x00000061u; // 800DC904
  c->r[5]=0u+0x23000000u; // 800DC908
  c->r[4]=0u+0x24000000u; // 800DC90C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 800DC910
  W32(c->r[31]+0x000005F4u,c->r[0]); // 800DC914
  c->r[0]=0u+0x67000000u; // 800DC918
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DC91C
  W8(c->r[9]+0xFFFF8000u,c->r[8]); // 800DC920
  c->r[8]=R32(c->r[31]+0x000005F4u); // 800DC924
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 800DC928
  W8(c->r[9]+0xFFFF8000u,c->r[7]); // 800DC92C
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 800DC930
  c->r[3]=0u+0x00000000u; // 800DC934
  W32(c->r[9]+0xFFFF8000u,c->r[11]); // 800DC938
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 800DC93C
  W32(c->r[9]+0xFFFF8000u,c->r[5]); // 800DC940
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 800DC944
  W32(c->r[9]+0xFFFF8000u,c->r[4]); // 800DC948
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 800DC94C
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 800DC950
  c->lr=0x800DC958u; f_800E15B0(c); // 800DC954
  c->r[3]=0u+0x00000002u; // 800DC958
  c->lr=0x800DC960u; f_800E0E60(c); // 800DC95C
  c->lr=0x800DC964u; f_800DC990(c); // 800DC960
  c->r[3]=0u+0x802F0000u; // 800DC964
  c->r[11]=c->r[1]+0x00000020u; // 800DC968
  c->r[3]=c->r[3]+0xFFFFA8C0u; // 800DC96C
  c->lr=0x800DC974u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC970
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC974
  c->lr=c->r[0]; // 800DC978
  c->r[1]=c->r[1]+0x00000020u; // 800DC97C
  return; // 800DC980
}

// __GXInitGX
void f_800DC990(Ctx* __restrict c) {
  trace_call(0x800DC990u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC990
  c->r[0]=c->lr; // 800DC994
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DC998
  c->r[11]=c->r[1]+0x000000A0u; // 800DC99C
  c->lr=0x800DC9A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC9A0
  c->r[0]=0u+0x43300000u; // 800DC9A4
  c->r[28]=0u+0x802B0000u; // 800DC9A8
  W32(c->r[1]+0x00000070u,c->r[0]); // 800DC9AC
  c->r[28]=c->r[28]+0xFFFFEE80u; // 800DC9B0
  c->r[31]=R32(c->r[2]+0xFFFF9A8Cu); // 800DC9B4
  c->r[30]=0u+0x00000000u; // 800DC9B8
  W32(c->r[1]+0x00000078u,c->r[0]); // 800DC9BC
  c->r[29]=R32(c->r[2]+0xFFFF9A90u); // 800DC9C0
  c->lr=0x800DC9C8u; f_800D9410(c); // 800DC9C4
  cmps(c,0,(int32_t)c->r[3],2); // 800DC9C8
  if (crb(c,2)) { goto L_800DCA14; } // 800DC9CC
  if (!crb(c,0)) { goto L_800DC9E4; } // 800DC9D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC9D4
  if (crb(c,2)) { goto L_800DC9F0; } // 800DC9D8
  if (!crb(c,0)) { goto L_800DC9FC; } // 800DC9DC
  goto L_800DCA20; // 800DC9E0
L_800DC9E4:;
  cmps(c,0,(int32_t)c->r[3],5); // 800DC9E4
  if (crb(c,2)) { goto L_800DCA08; } // 800DC9E8
  goto L_800DCA20; // 800DC9EC
L_800DC9F0:;
  c->r[27]=0u+0x802B0000u; // 800DC9F0
  c->r[27]=c->r[27]+0xFFFFF238u; // 800DC9F4
  goto L_800DCA28; // 800DC9F8
L_800DC9FC:;
  c->r[27]=0u+0x802B0000u; // 800DC9FC
  c->r[27]=c->r[27]+0xFFFFF328u; // 800DCA00
  goto L_800DCA28; // 800DCA04
L_800DCA08:;
  c->r[27]=0u+0x802B0000u; // 800DCA08
  c->r[27]=c->r[27]+0xFFFFF364u; // 800DCA0C
  goto L_800DCA28; // 800DCA10
L_800DCA14:;
  c->r[27]=0u+0x802B0000u; // 800DCA14
  c->r[27]=c->r[27]+0xFFFFF2B0u; // 800DCA18
  goto L_800DCA28; // 800DCA1C
L_800DCA20:;
  c->r[27]=0u+0x802B0000u; // 800DCA20
  c->r[27]=c->r[27]+0xFFFFF238u; // 800DCA24
L_800DCA28:;
  c->r[4]=0u+0x01000000u; // 800DCA28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCA2C
  c->r[3]=c->r[1]+0x0000001Cu; // 800DCA30
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800DCA34
  c->lr=0x800DCA3Cu; f_800DFB20(c); // 800DCA38
  c->r[3]=0u+0x00000000u; // 800DCA3C
  c->r[4]=0u+0x00000001u; // 800DCA40
  c->r[5]=0u+0x00000004u; // 800DCA44
  c->r[6]=0u+0x0000003Cu; // 800DCA48
  c->r[7]=0u+0x00000000u; // 800DCA4C
  c->r[8]=0u+0x0000007Du; // 800DCA50
  c->lr=0x800DCA58u; f_800DE500(c); // 800DCA54
  c->r[3]=0u+0x00000001u; // 800DCA58
  c->r[4]=0u+0x00000001u; // 800DCA5C
  c->r[5]=0u+0x00000005u; // 800DCA60
  c->r[6]=0u+0x0000003Cu; // 800DCA64
  c->r[7]=0u+0x00000000u; // 800DCA68
  c->r[8]=0u+0x0000007Du; // 800DCA6C
  c->lr=0x800DCA74u; f_800DE500(c); // 800DCA70
  c->r[3]=0u+0x00000002u; // 800DCA74
  c->r[4]=0u+0x00000001u; // 800DCA78
  c->r[5]=0u+0x00000006u; // 800DCA7C
  c->r[6]=0u+0x0000003Cu; // 800DCA80
  c->r[7]=0u+0x00000000u; // 800DCA84
  c->r[8]=0u+0x0000007Du; // 800DCA88
  c->lr=0x800DCA90u; f_800DE500(c); // 800DCA8C
  c->r[3]=0u+0x00000003u; // 800DCA90
  c->r[4]=0u+0x00000001u; // 800DCA94
  c->r[5]=0u+0x00000007u; // 800DCA98
  c->r[6]=0u+0x0000003Cu; // 800DCA9C
  c->r[7]=0u+0x00000000u; // 800DCAA0
  c->r[8]=0u+0x0000007Du; // 800DCAA4
  c->lr=0x800DCAACu; f_800DE500(c); // 800DCAA8
  c->r[3]=0u+0x00000004u; // 800DCAAC
  c->r[4]=0u+0x00000001u; // 800DCAB0
  c->r[5]=0u+0x00000008u; // 800DCAB4
  c->r[6]=0u+0x0000003Cu; // 800DCAB8
  c->r[7]=0u+0x00000000u; // 800DCABC
  c->r[8]=0u+0x0000007Du; // 800DCAC0
  c->lr=0x800DCAC8u; f_800DE500(c); // 800DCAC4
  c->r[3]=0u+0x00000005u; // 800DCAC8
  c->r[4]=0u+0x00000001u; // 800DCACC
  c->r[5]=0u+0x00000009u; // 800DCAD0
  c->r[6]=0u+0x0000003Cu; // 800DCAD4
  c->r[7]=0u+0x00000000u; // 800DCAD8
  c->r[8]=0u+0x0000007Du; // 800DCADC
  c->lr=0x800DCAE4u; f_800DE500(c); // 800DCAE0
  c->r[3]=0u+0x00000006u; // 800DCAE4
  c->r[4]=0u+0x00000001u; // 800DCAE8
  c->r[5]=0u+0x0000000Au; // 800DCAEC
  c->r[6]=0u+0x0000003Cu; // 800DCAF0
  c->r[7]=0u+0x00000000u; // 800DCAF4
  c->r[8]=0u+0x0000007Du; // 800DCAF8
  c->lr=0x800DCB00u; f_800DE500(c); // 800DCAFC
  c->r[3]=0u+0x00000007u; // 800DCB00
  c->r[4]=0u+0x00000001u; // 800DCB04
  c->r[5]=0u+0x0000000Bu; // 800DCB08
  c->r[6]=0u+0x0000003Cu; // 800DCB0C
  c->r[7]=0u+0x00000000u; // 800DCB10
  c->r[8]=0u+0x0000007Du; // 800DCB14
  c->lr=0x800DCB1Cu; f_800DE500(c); // 800DCB18
  c->r[3]=0u+0x00000001u; // 800DCB1C
  c->lr=0x800DCB24u; f_800DE750(c); // 800DCB20
  c->lr=0x800DCB28u; f_800DE080(c); // 800DCB24
  c->lr=0x800DCB2Cu; f_800DE4F0(c); // 800DCB28
  c->r[31]=0u+0x00000009u; // 800DCB2C
L_800DCB30:;
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DCB30
  c->r[3]=c->r[31]|c->r[31]; // 800DCB34
  c->r[5]=0u+0x00000000u; // 800DCB38
  c->lr=0x800DCB40u; f_800DE4B0(c); // 800DCB3C
  c->r[31]=c->r[31]+0x00000001u; // 800DCB40
  cmpu(c,0,c->r[31],0x00000018u); // 800DCB44
  if (!crb(c,1)) { IRQCHK(c); goto L_800DCB30; } // 800DCB48
  c->r[31]=0u+0x00000000u; // 800DCB4C
L_800DCB50:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCB50
  c->r[4]=c->r[28]+0x00000080u; // 800DCB54
  c->lr=0x800DCB5Cu; f_800DE260(c); // 800DCB58
  c->r[31]=c->r[31]+0x00000001u; // 800DCB5C
  cmpu(c,0,c->r[31],0x00000008u); // 800DCB60
  if (crb(c,0)) { IRQCHK(c); goto L_800DCB50; } // 800DCB64
  c->r[3]=0u+0x00000006u; // 800DCB68
  c->r[4]=0u+0x00000000u; // 800DCB6C
  c->lr=0x800DCB74u; f_800DF350(c); // 800DCB70
  c->r[3]=0u+0x00000006u; // 800DCB74
  c->r[4]=0u+0x00000000u; // 800DCB78
  c->lr=0x800DCB80u; f_800DF390(c); // 800DCB7C
  c->r[3]=0u+0x00000000u; // 800DCB80
  c->r[4]=0u+0x00000000u; // 800DCB84
  c->r[5]=0u+0x00000000u; // 800DCB88
  c->lr=0x800DCB90u; f_800DF3D0(c); // 800DCB8C
  c->r[3]=0u+0x00000001u; // 800DCB90
  c->r[4]=0u+0x00000000u; // 800DCB94
  c->r[5]=0u+0x00000000u; // 800DCB98
  c->lr=0x800DCBA0u; f_800DF3D0(c); // 800DCB9C
  c->r[3]=0u+0x00000002u; // 800DCBA0
  c->r[4]=0u+0x00000000u; // 800DCBA4
  c->r[5]=0u+0x00000000u; // 800DCBA8
  c->lr=0x800DCBB0u; f_800DF3D0(c); // 800DCBAC
  c->r[3]=0u+0x00000003u; // 800DCBB0
  c->r[4]=0u+0x00000000u; // 800DCBB4
  c->r[5]=0u+0x00000000u; // 800DCBB8
  c->lr=0x800DCBC0u; f_800DF3D0(c); // 800DCBBC
  c->r[3]=0u+0x00000004u; // 800DCBC0
  c->r[4]=0u+0x00000000u; // 800DCBC4
  c->r[5]=0u+0x00000000u; // 800DCBC8
  c->lr=0x800DCBD0u; f_800DF3D0(c); // 800DCBCC
  c->r[3]=0u+0x00000005u; // 800DCBD0
  c->r[4]=0u+0x00000000u; // 800DCBD4
  c->r[5]=0u+0x00000000u; // 800DCBD8
  c->lr=0x800DCBE0u; f_800DF3D0(c); // 800DCBDC
  c->r[3]=0u+0x00000006u; // 800DCBE0
  c->r[4]=0u+0x00000000u; // 800DCBE4
  c->r[5]=0u+0x00000000u; // 800DCBE8
  c->lr=0x800DCBF0u; f_800DF3D0(c); // 800DCBEC
  c->r[3]=0u+0x00000007u; // 800DCBF0
  c->r[4]=0u+0x00000000u; // 800DCBF4
  c->r[5]=0u+0x00000000u; // 800DCBF8
  c->lr=0x800DCC00u; f_800DF3D0(c); // 800DCBFC
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCC00
  c->r[3]=c->r[1]+0x00000040u; // 800DCC04
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCC08
  c->r[4]=0u+0x00000000u; // 800DCC0C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800DCC10
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800DCC14
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800DCC18
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DCC1C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800DCC20
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800DCC24
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800DCC28
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800DCC2C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800DCC30
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800DCC34
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 800DCC38
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800DCC3C
  c->lr=0x800DCC44u; f_800E2410(c); // 800DCC40
  c->r[3]=c->r[1]+0x00000040u; // 800DCC44
  c->r[4]=0u+0x00000000u; // 800DCC48
  c->lr=0x800DCC50u; f_800E2460(c); // 800DCC4C
  c->r[3]=0u+0x00000000u; // 800DCC50
  c->lr=0x800DCC58u; f_800E24C0(c); // 800DCC54
  c->r[3]=c->r[1]+0x00000040u; // 800DCC58
  c->r[4]=0u+0x0000003Cu; // 800DCC5C
  c->r[5]=0u+0x00000000u; // 800DCC60
  c->lr=0x800DCC68u; f_800E24E0(c); // 800DCC64
  c->r[3]=c->r[1]+0x00000040u; // 800DCC68
  c->r[4]=0u+0x0000007Du; // 800DCC6C
  c->r[5]=0u+0x00000000u; // 800DCC70
  c->lr=0x800DCC78u; f_800E24E0(c); // 800DCC74
  c->r[3]=R16(c->r[27]+0x00000004u); // 800DCC78
  c->r[0]=R16(c->r[27]+0x00000008u); // 800DCC7C
  W32(c->r[1]+0x00000074u,c->r[3]); // 800DCC80
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCC84
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800DCC88
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[4]=RF64(ea);} // 800DCC8C
  c->f[2]=c->f[1]; // 800DCC90
  {uint32_t ea=c->r[1]+0x00000070u; c->f[3]=RF64(ea);} // 800DCC94
  c->f[5]=c->f[1]; // 800DCC98
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 800DCC9C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800DCCA0
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[6]=c->ps1[6]=RF32(ea);} // 800DCCA4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 800DCCA8
  c->lr=0x800DCCB0u; f_800E2670(c); // 800DCCAC
  c->r[3]=c->r[28]+0x00000150u; // 800DCCB0
  c->lr=0x800DCCB8u; f_800E23C0(c); // 800DCCB4
  c->lr=0x800DCCBCu; f_800DF480(c); // 800DCCB8
  c->r[3]=0u+0x00000000u; // 800DCCBC
  c->lr=0x800DCCC4u; f_800DF440(c); // 800DCCC0
  c->r[3]=0u+0x00000002u; // 800DCCC4
  c->lr=0x800DCCCCu; f_800DF410(c); // 800DCCC8
  c->r[3]=0u+0x00000000u; // 800DCCCC
  c->lr=0x800DCCD4u; f_800E2750(c); // 800DCCD0
  c->r[5]=R16(c->r[27]+0x00000004u); // 800DCCD4
  c->r[3]=0u+0x00000000u; // 800DCCD8
  c->r[6]=R16(c->r[27]+0x00000006u); // 800DCCDC
  c->r[4]=0u+0x00000000u; // 800DCCE0
  c->lr=0x800DCCE8u; f_800E26A0(c); // 800DCCE4
  c->r[3]=0u+0x00000000u; // 800DCCE8
  c->r[4]=0u+0x00000000u; // 800DCCEC
  c->lr=0x800DCCF4u; f_800E2710(c); // 800DCCF0
  c->r[3]=0u+0x00000000u; // 800DCCF4
  c->lr=0x800DCCFCu; f_800E0250(c); // 800DCCF8
  c->r[3]=0u+0x00000004u; // 800DCCFC
  c->r[4]=0u+0x00000000u; // 800DCD00
  c->r[5]=0u+0x00000000u; // 800DCD04
  c->r[6]=0u+0x00000001u; // 800DCD08
  c->r[7]=0u+0x00000000u; // 800DCD0C
  c->r[8]=0u+0x00000000u; // 800DCD10
  c->r[9]=0u+0x00000002u; // 800DCD14
  c->lr=0x800DCD1Cu; f_800E0280(c); // 800DCD18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCD1C
  c->r[4]=c->r[1]+0x00000018u; // 800DCD20
  c->r[3]=0u+0x00000004u; // 800DCD24
  c->lr=0x800DCD2Cu; f_800E0090(c); // 800DCD28
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCD2C
  c->r[4]=c->r[1]+0x00000014u; // 800DCD30
  c->r[3]=0u+0x00000004u; // 800DCD34
  c->lr=0x800DCD3Cu; f_800E0170(c); // 800DCD38
  c->r[3]=0u+0x00000005u; // 800DCD3C
  c->r[4]=0u+0x00000000u; // 800DCD40
  c->r[5]=0u+0x00000000u; // 800DCD44
  c->r[6]=0u+0x00000001u; // 800DCD48
  c->r[7]=0u+0x00000000u; // 800DCD4C
  c->r[8]=0u+0x00000000u; // 800DCD50
  c->r[9]=0u+0x00000002u; // 800DCD54
  c->lr=0x800DCD5Cu; f_800E0280(c); // 800DCD58
  W32(c->r[1]+0x00000010u,c->r[30]); // 800DCD5C
  c->r[4]=c->r[1]+0x00000010u; // 800DCD60
  c->r[3]=0u+0x00000005u; // 800DCD64
  c->lr=0x800DCD6Cu; f_800E0090(c); // 800DCD68
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800DCD6C
  c->r[4]=c->r[1]+0x0000000Cu; // 800DCD70
  c->r[3]=0u+0x00000005u; // 800DCD74
  c->lr=0x800DCD7Cu; f_800E0170(c); // 800DCD78
  c->lr=0x800DCD80u; f_800E0BD0(c); // 800DCD7C
  c->r[3]=0u+0x800E0000u; // 800DCD80
  c->r[3]=c->r[3]+0xFFFFC0C0u; // 800DCD84
  c->lr=0x800DCD8Cu; f_800E0C20(c); // 800DCD88
  c->r[3]=0u+0x800E0000u; // 800DCD8C
  c->r[3]=c->r[3]+0xFFFFC1B0u; // 800DCD90
  c->lr=0x800DCD98u; f_800E0C40(c); // 800DCD94
  c->r[3]=c->r[1]+0x00000020u; // 800DCD98
  c->r[4]=c->r[28]+0x00000060u; // 800DCD9C
  c->r[5]=0u+0x00000004u; // 800DCDA0
  c->r[6]=0u+0x00000004u; // 800DCDA4
  c->r[7]=0u+0x00000003u; // 800DCDA8
  c->r[8]=0u+0x00000000u; // 800DCDAC
  c->r[9]=0u+0x00000000u; // 800DCDB0
  c->r[10]=0u+0x00000000u; // 800DCDB4
  c->lr=0x800DCDBCu; f_800E03F0(c); // 800DCDB8
  c->r[3]=c->r[1]+0x00000020u; // 800DCDBC
  c->r[4]=0u+0x00000000u; // 800DCDC0
  c->lr=0x800DCDC8u; f_800E09D0(c); // 800DCDC4
  c->r[3]=c->r[1]+0x00000020u; // 800DCDC8
  c->r[4]=0u+0x00000001u; // 800DCDCC
  c->lr=0x800DCDD4u; f_800E09D0(c); // 800DCDD0
  c->r[3]=c->r[1]+0x00000020u; // 800DCDD4
  c->r[4]=0u+0x00000002u; // 800DCDD8
  c->lr=0x800DCDE0u; f_800E09D0(c); // 800DCDDC
  c->r[3]=c->r[1]+0x00000020u; // 800DCDE0
  c->r[4]=0u+0x00000003u; // 800DCDE4
  c->lr=0x800DCDECu; f_800E09D0(c); // 800DCDE8
  c->r[3]=c->r[1]+0x00000020u; // 800DCDEC
  c->r[4]=0u+0x00000004u; // 800DCDF0
  c->lr=0x800DCDF8u; f_800E09D0(c); // 800DCDF4
  c->r[3]=c->r[1]+0x00000020u; // 800DCDF8
  c->r[4]=0u+0x00000005u; // 800DCDFC
  c->lr=0x800DCE04u; f_800E09D0(c); // 800DCE00
  c->r[3]=c->r[1]+0x00000020u; // 800DCE04
  c->r[4]=0u+0x00000006u; // 800DCE08
  c->lr=0x800DCE10u; f_800E09D0(c); // 800DCE0C
  c->r[3]=c->r[1]+0x00000020u; // 800DCE10
  c->r[4]=0u+0x00000007u; // 800DCE14
  c->lr=0x800DCE1Cu; f_800E09D0(c); // 800DCE18
  c->r[3]=0u+0x00000000u; // 800DCE1C
  c->r[4]=0u+0x00000000u; // 800DCE20
  c->r[5]=0u+0x00000000u; // 800DCE24
  c->r[6]=0u+0x00000004u; // 800DCE28
  c->lr=0x800DCE30u; f_800E1B50(c); // 800DCE2C
  c->r[3]=0u+0x00000001u; // 800DCE30
  c->r[4]=0u+0x00000001u; // 800DCE34
  c->r[5]=0u+0x00000001u; // 800DCE38
  c->r[6]=0u+0x00000004u; // 800DCE3C
  c->lr=0x800DCE44u; f_800E1B50(c); // 800DCE40
  c->r[3]=0u+0x00000002u; // 800DCE44
  c->r[4]=0u+0x00000002u; // 800DCE48
  c->r[5]=0u+0x00000002u; // 800DCE4C
  c->r[6]=0u+0x00000004u; // 800DCE50
  c->lr=0x800DCE58u; f_800E1B50(c); // 800DCE54
  c->r[3]=0u+0x00000003u; // 800DCE58
  c->r[4]=0u+0x00000003u; // 800DCE5C
  c->r[5]=0u+0x00000003u; // 800DCE60
  c->r[6]=0u+0x00000004u; // 800DCE64
  c->lr=0x800DCE6Cu; f_800E1B50(c); // 800DCE68
  c->r[3]=0u+0x00000004u; // 800DCE6C
  c->r[4]=0u+0x00000004u; // 800DCE70
  c->r[5]=0u+0x00000004u; // 800DCE74
  c->r[6]=0u+0x00000004u; // 800DCE78
  c->lr=0x800DCE80u; f_800E1B50(c); // 800DCE7C
  c->r[3]=0u+0x00000005u; // 800DCE80
  c->r[4]=0u+0x00000005u; // 800DCE84
  c->r[5]=0u+0x00000005u; // 800DCE88
  c->r[6]=0u+0x00000004u; // 800DCE8C
  c->lr=0x800DCE94u; f_800E1B50(c); // 800DCE90
  c->r[3]=0u+0x00000006u; // 800DCE94
  c->r[4]=0u+0x00000006u; // 800DCE98
  c->r[5]=0u+0x00000006u; // 800DCE9C
  c->r[6]=0u+0x00000004u; // 800DCEA0
  c->lr=0x800DCEA8u; f_800E1B50(c); // 800DCEA4
  c->r[3]=0u+0x00000007u; // 800DCEA8
  c->r[4]=0u+0x00000007u; // 800DCEAC
  c->r[5]=0u+0x00000007u; // 800DCEB0
  c->r[6]=0u+0x00000004u; // 800DCEB4
  c->lr=0x800DCEBCu; f_800E1B50(c); // 800DCEB8
  c->r[3]=0u+0x00000008u; // 800DCEBC
  c->r[4]=0u+0x000000FFu; // 800DCEC0
  c->r[5]=0u+0x000000FFu; // 800DCEC4
  c->r[6]=0u+0x000000FFu; // 800DCEC8
  c->lr=0x800DCED0u; f_800E1B50(c); // 800DCECC
  c->r[3]=0u+0x00000009u; // 800DCED0
  c->r[4]=0u+0x000000FFu; // 800DCED4
  c->r[5]=0u+0x000000FFu; // 800DCED8
  c->r[6]=0u+0x000000FFu; // 800DCEDC
  c->lr=0x800DCEE4u; f_800E1B50(c); // 800DCEE0
  c->r[3]=0u+0x0000000Au; // 800DCEE4
  c->r[4]=0u+0x000000FFu; // 800DCEE8
  c->r[5]=0u+0x000000FFu; // 800DCEEC
  c->r[6]=0u+0x000000FFu; // 800DCEF0
  c->lr=0x800DCEF8u; f_800E1B50(c); // 800DCEF4
  c->r[3]=0u+0x0000000Bu; // 800DCEF8
  c->r[4]=0u+0x000000FFu; // 800DCEFC
  c->r[5]=0u+0x000000FFu; // 800DCF00
  c->r[6]=0u+0x000000FFu; // 800DCF04
  c->lr=0x800DCF0Cu; f_800E1B50(c); // 800DCF08
  c->r[3]=0u+0x0000000Cu; // 800DCF0C
  c->r[4]=0u+0x000000FFu; // 800DCF10
  c->r[5]=0u+0x000000FFu; // 800DCF14
  c->r[6]=0u+0x000000FFu; // 800DCF18
  c->lr=0x800DCF20u; f_800E1B50(c); // 800DCF1C
  c->r[3]=0u+0x0000000Du; // 800DCF20
  c->r[4]=0u+0x000000FFu; // 800DCF24
  c->r[5]=0u+0x000000FFu; // 800DCF28
  c->r[6]=0u+0x000000FFu; // 800DCF2C
  c->lr=0x800DCF34u; f_800E1B50(c); // 800DCF30
  c->r[3]=0u+0x0000000Eu; // 800DCF34
  c->r[4]=0u+0x000000FFu; // 800DCF38
  c->r[5]=0u+0x000000FFu; // 800DCF3C
  c->r[6]=0u+0x000000FFu; // 800DCF40
  c->lr=0x800DCF48u; f_800E1B50(c); // 800DCF44
  c->r[3]=0u+0x0000000Fu; // 800DCF48
  c->r[4]=0u+0x000000FFu; // 800DCF4C
  c->r[5]=0u+0x000000FFu; // 800DCF50
  c->r[6]=0u+0x000000FFu; // 800DCF54
  c->lr=0x800DCF5Cu; f_800E1B50(c); // 800DCF58
  c->r[3]=0u+0x00000001u; // 800DCF5C
  c->lr=0x800DCF64u; f_800E1CB0(c); // 800DCF60
  c->r[3]=0u+0x00000000u; // 800DCF64
  c->r[4]=0u+0x00000003u; // 800DCF68
  c->lr=0x800DCF70u; f_800E1610(c); // 800DCF6C
  c->r[3]=0u+0x00000007u; // 800DCF70
  c->r[4]=0u+0x00000000u; // 800DCF74
  c->r[5]=0u+0x00000000u; // 800DCF78
  c->r[6]=0u+0x00000007u; // 800DCF7C
  c->r[7]=0u+0x00000000u; // 800DCF80
  c->lr=0x800DCF88u; f_800E1A80(c); // 800DCF84
  c->r[3]=0u+0x00000000u; // 800DCF88
  c->r[4]=0u+0x00000011u; // 800DCF8C
  c->r[5]=0u+0x00000000u; // 800DCF90
  c->lr=0x800DCF98u; f_800E1AC0(c); // 800DCF94
  c->r[31]=0u+0x00000000u; // 800DCF98
L_800DCF9C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCF9C
  c->r[4]=0u+0x00000006u; // 800DCFA0
  c->lr=0x800DCFA8u; f_800E1920(c); // 800DCFA4
  c->r[3]=c->r[31]|c->r[31]; // 800DCFA8
  c->r[4]=0u+0x00000000u; // 800DCFAC
  c->lr=0x800DCFB4u; f_800E1970(c); // 800DCFB0
  c->r[3]=c->r[31]|c->r[31]; // 800DCFB4
  c->r[4]=0u+0x00000000u; // 800DCFB8
  c->r[5]=0u+0x00000000u; // 800DCFBC
  c->lr=0x800DCFC4u; f_800E19C0(c); // 800DCFC0
  c->r[31]=c->r[31]+0x00000001u; // 800DCFC4
  cmpu(c,0,c->r[31],0x00000010u); // 800DCFC8
  if (crb(c,0)) { IRQCHK(c); goto L_800DCF9C; } // 800DCFCC
  c->r[3]=0u+0x00000000u; // 800DCFD0
  c->r[4]=0u+0x00000000u; // 800DCFD4
  c->r[5]=0u+0x00000001u; // 800DCFD8
  c->r[6]=0u+0x00000002u; // 800DCFDC
  c->r[7]=0u+0x00000003u; // 800DCFE0
  c->lr=0x800DCFE8u; f_800E1A00(c); // 800DCFE4
  c->r[3]=0u+0x00000001u; // 800DCFE8
  c->r[4]=0u+0x00000000u; // 800DCFEC
  c->r[5]=0u+0x00000000u; // 800DCFF0
  c->r[6]=0u+0x00000000u; // 800DCFF4
  c->r[7]=0u+0x00000003u; // 800DCFF8
  c->lr=0x800DD000u; f_800E1A00(c); // 800DCFFC
  c->r[3]=0u+0x00000002u; // 800DD000
  c->r[4]=0u+0x00000001u; // 800DD004
  c->r[5]=0u+0x00000001u; // 800DD008
  c->r[6]=0u+0x00000001u; // 800DD00C
  c->r[7]=0u+0x00000003u; // 800DD010
  c->lr=0x800DD018u; f_800E1A00(c); // 800DD014
  c->r[3]=0u+0x00000003u; // 800DD018
  c->r[4]=0u+0x00000002u; // 800DD01C
  c->r[5]=0u+0x00000002u; // 800DD020
  c->r[6]=0u+0x00000002u; // 800DD024
  c->r[7]=0u+0x00000003u; // 800DD028
  c->lr=0x800DD030u; f_800E1A00(c); // 800DD02C
  c->r[31]=0u+0x00000000u; // 800DD030
L_800DD034:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD034
  c->lr=0x800DD03Cu; f_800E1550(c); // 800DD038
  c->r[31]=c->r[31]+0x00000001u; // 800DD03C
  cmpu(c,0,c->r[31],0x00000010u); // 800DD040
  if (crb(c,0)) { IRQCHK(c); goto L_800DD034; } // 800DD044
  c->r[3]=0u+0x00000000u; // 800DD048
  c->lr=0x800DD050u; f_800E1530(c); // 800DD04C
  c->r[3]=0u+0x00000000u; // 800DD050
  c->r[4]=0u+0x00000000u; // 800DD054
  c->r[5]=0u+0x00000000u; // 800DD058
  c->lr=0x800DD060u; f_800E1360(c); // 800DD05C
  c->r[3]=0u+0x00000001u; // 800DD060
  c->r[4]=0u+0x00000000u; // 800DD064
  c->r[5]=0u+0x00000000u; // 800DD068
  c->lr=0x800DD070u; f_800E1360(c); // 800DD06C
  c->r[3]=0u+0x00000002u; // 800DD070
  c->r[4]=0u+0x00000000u; // 800DD074
  c->r[5]=0u+0x00000000u; // 800DD078
  c->lr=0x800DD080u; f_800E1360(c); // 800DD07C
  c->r[3]=0u+0x00000003u; // 800DD080
  c->r[4]=0u+0x00000000u; // 800DD084
  c->r[5]=0u+0x00000000u; // 800DD088
  c->lr=0x800DD090u; f_800E1360(c); // 800DD08C
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DD090
  c->r[4]=c->r[1]+0x00000008u; // 800DD094
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD098
  c->r[3]=0u+0x00000000u; // 800DD09C
  c->f[4]=c->f[2]; // 800DD0A0
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD0A4
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DD0A8
  c->lr=0x800DD0B0u; f_800E1CE0(c); // 800DD0AC
  c->r[3]=0u+0x00000000u; // 800DD0B0
  c->r[4]=0u+0x00000000u; // 800DD0B4
  c->r[5]=0u+0x00000000u; // 800DD0B8
  c->lr=0x800DD0C0u; f_800E1F10(c); // 800DD0BC
  c->r[3]=0u+0x00000000u; // 800DD0C0
  c->r[4]=0u+0x00000004u; // 800DD0C4
  c->r[5]=0u+0x00000005u; // 800DD0C8
  c->r[6]=0u+0x00000000u; // 800DD0CC
  c->lr=0x800DD0D4u; f_800E2020(c); // 800DD0D0
  c->r[3]=0u+0x00000001u; // 800DD0D4
  c->lr=0x800DD0DCu; f_800E2070(c); // 800DD0D8
  c->r[3]=0u+0x00000001u; // 800DD0DC
  c->lr=0x800DD0E4u; f_800E20A0(c); // 800DD0E0
  c->r[3]=0u+0x00000001u; // 800DD0E4
  c->r[4]=0u+0x00000003u; // 800DD0E8
  c->r[5]=0u+0x00000001u; // 800DD0EC
  c->lr=0x800DD0F4u; f_800E20D0(c); // 800DD0F0
  c->r[3]=0u+0x00000001u; // 800DD0F4
  c->lr=0x800DD0FCu; f_800E2110(c); // 800DD0F8
  c->r[3]=0u+0x00000001u; // 800DD0FC
  c->lr=0x800DD104u; f_800E21F0(c); // 800DD100
  c->r[3]=0u+0x00000000u; // 800DD104
  c->r[4]=0u+0x00000000u; // 800DD108
  c->lr=0x800DD110u; f_800E2220(c); // 800DD10C
  c->r[3]=0u+0x00000000u; // 800DD110
  c->r[4]=0u+0x00000000u; // 800DD114
  c->lr=0x800DD11Cu; f_800E2140(c); // 800DD118
  c->r[3]=0u+0x00000001u; // 800DD11C
  c->r[4]=0u+0x00000001u; // 800DD120
  c->lr=0x800DD128u; f_800E2250(c); // 800DD124
  c->r[0]=R16(c->r[27]+0x00000008u); // 800DD128
  c->r[3]=R16(c->r[27]+0x00000010u); // 800DD12C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DD130
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DD134
  if (!crb(c,2)) { goto L_800DD144; } // 800DD138
  c->r[4]=0u+0x00000001u; // 800DD13C
  goto L_800DD148; // 800DD140
L_800DD144:;
  c->r[4]=0u+0x00000000u; // 800DD144
L_800DD148:;
  c->r[3]=R8(c->r[27]+0x00000018u); // 800DD148
  c->lr=0x800DD150u; f_800E2290(c); // 800DD14C
  c->r[5]=R16(c->r[27]+0x00000004u); // 800DD150
  c->r[3]=0u+0x00000000u; // 800DD154
  c->r[6]=R16(c->r[27]+0x00000006u); // 800DD158
  c->r[4]=0u+0x00000000u; // 800DD15C
  c->lr=0x800DD164u; f_800DF610(c); // 800DD160
  c->r[3]=R16(c->r[27]+0x00000004u); // 800DD164
  c->r[4]=R16(c->r[27]+0x00000006u); // 800DD168
  c->lr=0x800DD170u; f_800DF690(c); // 800DD16C
  c->r[3]=R16(c->r[27]+0x00000008u); // 800DD170
  c->r[0]=R16(c->r[27]+0x00000006u); // 800DD174
  W32(c->r[1]+0x00000074u,c->r[3]); // 800DD178
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[2]=RF64(ea);} // 800DD17C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800DD180
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=RF64(ea);} // 800DD184
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 800DD188
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DD18C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800DD190
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DD194
  c->lr=0x800DD19Cu; f_800DFA50(c); // 800DD198
  c->r[3]=0u+0x00000003u; // 800DD19C
  c->lr=0x800DD1A4u; f_800DF7F0(c); // 800DD1A0
  c->r[3]=R8(c->r[27]+0x00000019u); // 800DD1A4
  c->r[4]=c->r[27]+0x0000001Au; // 800DD1A8
  c->r[6]=c->r[27]+0x00000032u; // 800DD1AC
  c->r[5]=0u+0x00000001u; // 800DD1B0
  c->lr=0x800DD1B8u; f_800DFBA0(c); // 800DD1B4
  c->r[3]=0u+0x00000000u; // 800DD1B8
  c->lr=0x800DD1C0u; f_800DFD90(c); // 800DD1BC
  c->r[3]=0u+0x00000000u; // 800DD1C0
  c->lr=0x800DD1C8u; f_800DF7D0(c); // 800DD1C4
  c->lr=0x800DD1CCu; f_800E0050(c); // 800DD1C8
  c->r[3]=0u+0x00000001u; // 800DD1CC
  c->lr=0x800DD1D4u; f_800DECE0(c); // 800DD1D0
  c->r[3]=0u+0x00000001u; // 800DD1D4
  c->lr=0x800DD1DCu; f_800DEC60(c); // 800DD1D8
  c->r[3]=0u+0x00000000u; // 800DD1DC
  c->lr=0x800DD1E4u; f_800DED20(c); // 800DD1E0
  c->r[3]=0u+0x00000000u; // 800DD1E4
  c->r[4]=0u+0x00000000u; // 800DD1E8
  c->r[5]=0u+0x00000001u; // 800DD1EC
  c->r[6]=0u+0x0000000Fu; // 800DD1F0
  c->lr=0x800DD1F8u; f_800DEC80(c); // 800DD1F4
  c->r[3]=0u+0x00000007u; // 800DD1F8
  c->r[4]=0u+0x00000000u; // 800DD1FC
  c->lr=0x800DD204u; f_800DEC30(c); // 800DD200
  c->r[3]=0u+0x00000001u; // 800DD204
  c->lr=0x800DD20Cu; f_800DEC40(c); // 800DD208
  c->r[3]=0u+0x00000000u; // 800DD20C
  c->r[4]=0u+0x00000000u; // 800DD210
  c->lr=0x800DD218u; f_800DED00(c); // 800DD214
  c->r[3]=0u+0x00000001u; // 800DD218
  c->r[4]=0u+0x00000007u; // 800DD21C
  c->r[5]=0u+0x00000001u; // 800DD220
  c->lr=0x800DD228u; f_800DED40(c); // 800DD224
  c->r[3]=0u+0x00000023u; // 800DD228
  c->r[4]=0u+0x00000016u; // 800DD22C
  c->lr=0x800DD234u; f_800E2810(c); // 800DD230
  c->lr=0x800DD238u; f_800E3030(c); // 800DD234
  c->r[11]=c->r[1]+0x000000A0u; // 800DD238
  c->lr=0x800DD240u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD23C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800DD240
  c->lr=c->r[0]; // 800DD244
  c->r[1]=c->r[1]+0x000000A0u; // 800DD248
  return; // 800DD24C
}

// GXCPInterruptHandler
void f_800DD250(Ctx* __restrict c) {
  trace_call(0x800DD250u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD250
  c->r[0]=c->lr; // 800DD254
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800DD258
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800DD25C
  c->r[31]=R32(c->r[2]+0xFFFF9A80u); // 800DD260
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800DD264
  c->r[30]=c->r[4]|c->r[4]; // 800DD268
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD26C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800DD270
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800DD274
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DD278
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 800DD27C
  if (crb(c,2)) { goto L_800DD2D0; } // 800DD280
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800DD284
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800DD288
  if (crb(c,2)) { goto L_800DD2D0; } // 800DD28C
  c->r[3]=R32(c->r[13]+0xFFFFA6CCu); // 800DD290
  c->lr=0x800DD298u; f_800CF5B0(c); // 800DD294
  c->r[0]=0u+0x00000000u; // 800DD298
  W32(c->r[13]+0xFFFFA6C8u,c->r[0]); // 800DD29C
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DD2A0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800DD2A4
  c->r[0]=c->r[0]|0x00000003u; // 800DD2A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DD2AC
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD2B0
  W16(c->r[3]+0x00000004u,c->r[0]); // 800DD2B4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DD2B8
  c->r[0]=c->r[0]|0x00000004u; // 800DD2BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800DD2C0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800DD2C4
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD2C8
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD2CC
L_800DD2D0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DD2D0
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 800DD2D4
  if (crb(c,2)) { goto L_800DD338; } // 800DD2D8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800DD2DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800DD2E0
  if (crb(c,2)) { goto L_800DD338; } // 800DD2E4
  c->r[3]=R32(c->r[13]+0xFFFFA6BCu); // 800DD2E8
  c->r[0]=0u+0x00000001u; // 800DD2EC
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DD2F0
  c->r[3]=c->r[3]+0x00000001u; // 800DD2F4
  W32(c->r[13]+0xFFFFA6BCu,c->r[3]); // 800DD2F8
  c->r[3]=R32(c->r[31]+0x00000008u); // 800DD2FC
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFBu; // 800DD300
  c->r[4]=c->r[4]|0x00000008u; // 800DD304
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DD308
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD30C
  W16(c->r[3]+0x00000002u,c->r[4]); // 800DD310
  c->r[3]=R32(c->r[5]+0x00000010u); // 800DD314
  c->r[3]=c->r[3]|0x00000001u; // 800DD318
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800DD31C
  W32(c->r[5]+0x00000010u,c->r[4]); // 800DD320
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD324
  W16(c->r[3]+0x00000004u,c->r[4]); // 800DD328
  W32(c->r[13]+0xFFFFA6C8u,c->r[0]); // 800DD32C
  c->r[3]=R32(c->r[13]+0xFFFFA6CCu); // 800DD330
  c->lr=0x800DD338u; f_800CF850(c); // 800DD334
L_800DD338:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800DD338
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 800DD33C
  if (crb(c,2)) { goto L_800DD398; } // 800DD340
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800DD344
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800DD348
  if (crb(c,2)) { goto L_800DD398; } // 800DD34C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFDFu; // 800DD350
  W32(c->r[31]+0x00000008u,c->r[0]); // 800DD354
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD358
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD35C
  c->r[0]=R32(c->r[13]+0xFFFFA6C4u); // 800DD360
  cmps(c,0,(int32_t)c->r[0],0); // 800DD364
  if (crb(c,2)) { goto L_800DD398; } // 800DD368
  c->r[3]=c->r[1]+0x00000008u; // 800DD36C
  c->lr=0x800DD374u; f_800C8020(c); // 800DD370
  c->r[3]=c->r[1]+0x00000008u; // 800DD374
  c->lr=0x800DD37Cu; f_800C7DE0(c); // 800DD378
  c->r[12]=R32(c->r[13]+0xFFFFA6C4u); // 800DD37C
  c->ctr=c->r[12]; // 800DD380
  if (true) { c->lr=0x800DD388u; dispatch(c,c->ctr); } // 800DD384
  c->r[3]=c->r[1]+0x00000008u; // 800DD388
  c->lr=0x800DD390u; f_800C8020(c); // 800DD38C
  c->r[3]=c->r[30]|c->r[30]; // 800DD390
  c->lr=0x800DD398u; f_800C7DE0(c); // 800DD394
L_800DD398:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800DD398
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800DD39C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800DD3A0
  c->lr=c->r[0]; // 800DD3A4
  c->r[1]=c->r[1]+0x000002E0u; // 800DD3A8
  return; // 800DD3AC
}

// GXInitFifoBase
void f_800DD3B0(Ctx* __restrict c) {
  trace_call(0x800DD3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD3B0
  c->r[0]=c->lr; // 800DD3B4
  c->r[7]=c->r[4]+c->r[5]; // 800DD3B8
  c->r[6]=c->r[5]+0xFFFFC000u; // 800DD3BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD3C0
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 800DD3C4
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFE0u; // 800DD3C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DD3CC
  c->r[31]=0u+0x00000000u; // 800DD3D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DD3D4
  c->r[30]=c->r[4]|c->r[4]; // 800DD3D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DD3DC
  c->r[29]=c->r[3]|c->r[3]; // 800DD3E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800DD3E4
  W32(c->r[3]+0x00000004u,c->r[7]); // 800DD3E8
  W32(c->r[3]+0x00000008u,c->r[5]); // 800DD3EC
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800DD3F0
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800DD3F4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DD3F8
  c->lr=0x800DD400u; f_800CBAA0(c); // 800DD3FC
  cmps(c,0,(int32_t)c->r[31],0); // 800DD400
  W32(c->r[29]+0x00000014u,c->r[30]); // 800DD404
  W32(c->r[29]+0x00000018u,c->r[30]); // 800DD408
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 800DD40C
  if (!crb(c,0)) { goto L_800DD41C; } // 800DD410
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD414
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800DD418
L_800DD41C:;
  c->lr=0x800DD420u; f_800CBAE0(c); // 800DD41C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD420
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DD424
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DD428
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DD42C
  c->lr=c->r[0]; // 800DD430
  c->r[1]=c->r[1]+0x00000020u; // 800DD434
  return; // 800DD438
}

// CPGPLinkCheck
void f_800DD440(Ctx* __restrict c) {
  trace_call(0x800DD440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD440
  c->r[0]=c->lr; // 800DD444
  c->r[7]=0u+0x00000000u; // 800DD448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD44C
  c->r[0]=R8(c->r[13]+0xFFFFA6B8u); // 800DD450
  cmps(c,0,(int32_t)c->r[0],0); // 800DD454
  if (crb(c,2)) { goto L_800DD468; } // 800DD458
  c->r[0]=R8(c->r[13]+0xFFFFA6B9u); // 800DD45C
  cmps(c,0,(int32_t)c->r[0],0); // 800DD460
  if (!crb(c,2)) { goto L_800DD470; } // 800DD464
L_800DD468:;
  c->r[3]=0u+0x00000000u; // 800DD468
  goto L_800DD528; // 800DD46C
L_800DD470:;
  c->r[4]=0u+0x802F0000u; // 800DD470
  c->r[3]=0u+0x802F0000u; // 800DD474
  c->r[6]=R32(c->r[4]+0xFFFFAF40u); // 800DD478
  c->r[4]=R32(c->r[3]+0xFFFFAF64u); // 800DD47C
  cmpu(c,0,c->r[4],c->r[6]); // 800DD480
  if (!crb(c,2)) { goto L_800DD48C; } // 800DD484
  c->r[7]=0u+0x00000001u; // 800DD488
L_800DD48C:;
  c->r[5]=0u+0x802F0000u; // 800DD48C
  c->r[3]=0u+0x802F0000u; // 800DD490
  c->r[5]=c->r[5]+0xFFFFAF40u; // 800DD494
  c->r[3]=c->r[3]+0xFFFFAF64u; // 800DD498
  c->r[0]=R32(c->r[5]+0x00000004u); // 800DD49C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DD4A0
  cmpu(c,0,c->r[5],c->r[0]); // 800DD4A4
  if (!crb(c,2)) { goto L_800DD4B0; } // 800DD4A8
  c->r[7]=c->r[7]+0x00000001u; // 800DD4AC
L_800DD4B0:;
  cmpu(c,0,c->r[7],0x00000002u); // 800DD4B0
  if (!crb(c,2)) { goto L_800DD4C0; } // 800DD4B4
  c->r[3]=0u+0x00000001u; // 800DD4B8
  goto L_800DD528; // 800DD4BC
L_800DD4C0:;
  c->r[3]=c->r[5]-c->r[6]; cr0(c,c->r[3]); // 800DD4C0
  c->r[6]=c->r[0]-c->r[4]; // 800DD4C4
  c->r[0]=0u+0x00000000u; // 800DD4C8
  if (!crb(c,1)) { goto L_800DD4D8; } // 800DD4CC
  cmps(c,0,(int32_t)c->r[6],0); // 800DD4D0
  if (crb(c,1)) { goto L_800DD4E8; } // 800DD4D4
L_800DD4D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4D8
  if (!crb(c,0)) { goto L_800DD4EC; } // 800DD4DC
  cmps(c,0,(int32_t)c->r[6],0); // 800DD4E0
  if (!crb(c,0)) { goto L_800DD4EC; } // 800DD4E4
L_800DD4E8:;
  c->r[0]=0u+0x00000001u; // 800DD4E8
L_800DD4EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD4EC
  if (crb(c,2)) { goto L_800DD524; } // 800DD4F0
  c->r[3]=0u+0x802B0000u; // 800DD4F4
  c->r[3]=c->r[3]+0xFFFFF0C0u; // 800DD4F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD4FC
  c->lr=0x800DD504u; f_800C8450(c); // 800DD500
  c->r[4]=0u+0x802F0000u; // 800DD504
  c->r[3]=0u+0x802B0000u; // 800DD508
  c->r[5]=c->r[4]+0xFFFFAF40u; // 800DD50C
  c->r[4]=R32(c->r[4]+0xFFFFAF40u); // 800DD510
  c->r[5]=R32(c->r[5]+0x00000004u); // 800DD514
  c->r[3]=c->r[3]+0xFFFFF0D8u; // 800DD518
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD51C
  c->lr=0x800DD524u; f_800C8450(c); // 800DD520
L_800DD524:;
  c->r[3]=0u+0x00000000u; // 800DD524
L_800DD528:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD528
  c->lr=c->r[0]; // 800DD52C
  c->r[1]=c->r[1]+0x00000010u; // 800DD530
  return; // 800DD534
}

// GXSetCPUFifo
void f_800DD540(Ctx* __restrict c) {
  trace_call(0x800DD540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD540
  c->r[0]=c->lr; // 800DD544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD548
  c->r[11]=c->r[1]+0x00000020u; // 800DD54C
  c->lr=0x800DD554u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD550
  c->r[27]=c->r[3]|c->r[3]; // 800DD554
  c->lr=0x800DD55Cu; f_800CBAA0(c); // 800DD558
  cmps(c,0,(int32_t)c->r[27],0); // 800DD55C
  c->r[30]=c->r[3]|c->r[3]; // 800DD560
  if (!crb(c,2)) { goto L_800DD58C; } // 800DD564
  c->r[4]=0u+0x802F0000u; // 800DD568
  c->r[0]=0u+0x00000000u; // 800DD56C
  c->r[4]=c->r[4]+0xFFFFAF64u; // 800DD570
  W8(c->r[13]+0xFFFFA6B8u,c->r[0]); // 800DD574
  W8(c->r[13]+0xFFFFA6D0u,c->r[0]); // 800DD578
  W8(c->r[4]+0x00000022u,c->r[0]); // 800DD57C
  W8(c->r[4]+0x00000021u,c->r[0]); // 800DD580
  c->lr=0x800DD588u; f_800CBAE0(c); // 800DD584
  goto L_800DD708; // 800DD588
L_800DD58C:;
  c->r[28]=0u+0x802F0000u; // 800DD58C
  c->r[29]=0u+0x00000001u; // 800DD590
  c->r[31]=c->r[28]+0xFFFFAF64u; // 800DD594
  c->r[0]=R32(c->r[27]+0x00000020u); // 800DD598
  W32(c->r[31]+0x00000020u,c->r[0]); // 800DD59C
  c->r[9]=R32(c->r[27]+0x00000000u); // 800DD5A0
  c->r[8]=R32(c->r[27]+0x00000004u); // 800DD5A4
  c->r[7]=R32(c->r[27]+0x00000008u); // 800DD5A8
  c->r[6]=R32(c->r[27]+0x0000000Cu); // 800DD5AC
  c->r[5]=R32(c->r[27]+0x00000010u); // 800DD5B0
  c->r[4]=R32(c->r[27]+0x00000014u); // 800DD5B4
  c->r[3]=R32(c->r[27]+0x00000018u); // 800DD5B8
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800DD5BC
  W32(c->r[31]+0x00000000u,c->r[9]); // 800DD5C0
  W32(c->r[31]+0x00000004u,c->r[8]); // 800DD5C4
  W32(c->r[31]+0x00000008u,c->r[7]); // 800DD5C8
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 800DD5CC
  W32(c->r[31]+0x00000010u,c->r[5]); // 800DD5D0
  W32(c->r[31]+0x00000014u,c->r[4]); // 800DD5D4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800DD5D8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800DD5DC
  W8(c->r[13]+0xFFFFA6B8u,c->r[29]); // 800DD5E0
  W8(c->r[31]+0x00000021u,c->r[29]); // 800DD5E4
  c->lr=0x800DD5ECu; f_800DD440(c); // 800DD5E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DD5EC
  if (crb(c,2)) { goto L_800DD678; } // 800DD5F0
  c->r[4]=R32(c->r[28]+0xFFFFAF64u); // 800DD5F4
  c->r[0]=0u+0x00000000u; // 800DD5F8
  W8(c->r[13]+0xFFFFA6D0u,c->r[29]); // 800DD5FC
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DD600
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800DD604
  W8(c->r[31]+0x00000022u,c->r[29]); // 800DD608
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DD60C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800DD610
  c->r[4]=R32(c->r[31]+0x00000004u); // 800DD614
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DD618
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800DD61C
  W32(c->r[3]+0x00000010u,c->r[4]); // 800DD620
  c->r[4]=R32(c->r[31]+0x00000018u); // 800DD624
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DD628
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 800DD62C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DD630
  c->r[0]=R32(c->r[5]+0x00000010u); // 800DD634
  c->r[0]=c->r[0]|0x00000003u; // 800DD638
  W32(c->r[5]+0x00000010u,c->r[0]); // 800DD63C
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD640
  W16(c->r[3]+0x00000004u,c->r[0]); // 800DD644
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DD648
  c->r[0]=c->r[0]|0x00000004u; // 800DD64C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800DD650
  W32(c->r[5]+0x00000008u,c->r[0]); // 800DD654
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD658
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD65C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DD660
  c->r[0]=c->r[0]|0x00000010u; // 800DD664
  W32(c->r[5]+0x00000008u,c->r[0]); // 800DD668
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD66C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD670
  goto L_800DD6FC; // 800DD674
L_800DD678:;
  c->r[0]=R8(c->r[13]+0xFFFFA6D0u); // 800DD678
  c->r[4]=0u+0x00000000u; // 800DD67C
  W8(c->r[31]+0x00000022u,c->r[4]); // 800DD680
  cmps(c,0,(int32_t)c->r[0],0); // 800DD684
  if (crb(c,2)) { goto L_800DD6A8; } // 800DD688
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DD68C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800DD690
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DD694
  W32(c->r[3]+0x00000008u,c->r[0]); // 800DD698
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD69C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD6A0
  W8(c->r[13]+0xFFFFA6D0u,c->r[4]); // 800DD6A4
L_800DD6A8:;
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DD6A8
  c->r[3]=0u+0x802F0000u; // 800DD6AC
  c->r[5]=c->r[3]+0xFFFFAF64u; // 800DD6B0
  c->r[0]=0u+0x00000000u; // 800DD6B4
  c->r[4]=R32(c->r[7]+0x00000008u); // 800DD6B8
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFF3u; // 800DD6BC
  W32(c->r[7]+0x00000008u,c->r[6]); // 800DD6C0
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD6C4
  W16(c->r[4]+0x00000002u,c->r[6]); // 800DD6C8
  c->r[4]=R32(c->r[3]+0xFFFFAF64u); // 800DD6CC
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DD6D0
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800DD6D4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800DD6D8
  c->r[4]=R32(c->r[5]+0x00000004u); // 800DD6DC
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DD6E0
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800DD6E4
  W32(c->r[3]+0x00000010u,c->r[4]); // 800DD6E8
  c->r[4]=R32(c->r[5]+0x00000018u); // 800DD6EC
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DD6F0
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 800DD6F4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DD6F8
L_800DD6FC:;
  c->lr=0x800DD700u; f_800C4F90(c); // 800DD6FC
  c->r[3]=c->r[30]|c->r[30]; // 800DD700
  c->lr=0x800DD708u; f_800CBAE0(c); // 800DD704
L_800DD708:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD708
  c->lr=0x800DD710u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD70C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD710
  c->lr=c->r[0]; // 800DD714
  c->r[1]=c->r[1]+0x00000020u; // 800DD718
  return; // 800DD71C
}

// GXSetGPFifo
void f_800DD720(Ctx* __restrict c) {
  trace_call(0x800DD720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD720
  c->r[0]=c->lr; // 800DD724
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD728
  c->r[11]=c->r[1]+0x00000020u; // 800DD72C
  c->lr=0x800DD734u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD730
  c->r[27]=c->r[3]|c->r[3]; // 800DD734
  c->lr=0x800DD73Cu; f_800CBAA0(c); // 800DD738
  c->r[29]=R32(c->r[2]+0xFFFF9A80u); // 800DD73C
  cmps(c,0,(int32_t)c->r[27],0); // 800DD740
  c->r[28]=c->r[3]|c->r[3]; // 800DD744
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD748
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DD74C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD750
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD754
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DD758
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD75C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800DD760
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD764
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD768
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DD76C
  if (!crb(c,2)) { goto L_800DD7AC; } // 800DD770
  c->r[6]=0u+0x00000000u; // 800DD774
  W8(c->r[13]+0xFFFFA6B9u,c->r[6]); // 800DD778
  c->r[4]=0u+0x802F0000u; // 800DD77C
  W8(c->r[13]+0xFFFFA6D0u,c->r[6]); // 800DD780
  c->r[4]=c->r[4]+0xFFFFAF40u; // 800DD784
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD788
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DD78C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD790
  c->r[5]=R32(c->r[13]+0xFFFFA694u); // 800DD794
  W16(c->r[5]+0x00000002u,c->r[0]); // 800DD798
  W8(c->r[4]+0x00000021u,c->r[6]); // 800DD79C
  W8(c->r[4]+0x00000022u,c->r[6]); // 800DD7A0
  c->lr=0x800DD7A8u; f_800CBAE0(c); // 800DD7A4
  goto L_800DD998; // 800DD7A8
L_800DD7AC:;
  c->r[3]=0u+0x802F0000u; // 800DD7AC
  c->r[31]=0u+0x00000001u; // 800DD7B0
  c->r[30]=c->r[3]+0xFFFFAF40u; // 800DD7B4
  c->r[0]=R32(c->r[27]+0x00000020u); // 800DD7B8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DD7BC
  c->r[4]=R32(c->r[27]+0x00000004u); // 800DD7C0
  c->r[9]=R32(c->r[27]+0x00000008u); // 800DD7C4
  c->r[8]=R32(c->r[27]+0x0000000Cu); // 800DD7C8
  c->r[7]=R32(c->r[27]+0x00000010u); // 800DD7CC
  c->r[6]=R32(c->r[27]+0x00000014u); // 800DD7D0
  c->r[5]=R32(c->r[27]+0x00000018u); // 800DD7D4
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800DD7D8
  c->r[10]=R32(c->r[27]+0x00000000u); // 800DD7DC
  W32(c->r[30]+0x00000004u,c->r[4]); // 800DD7E0
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD7E4
  W32(c->r[30]+0x00000008u,c->r[9]); // 800DD7E8
  W32(c->r[30]+0x0000000Cu,c->r[8]); // 800DD7EC
  W32(c->r[30]+0x00000010u,c->r[7]); // 800DD7F0
  W32(c->r[30]+0x00000014u,c->r[6]); // 800DD7F4
  W32(c->r[30]+0x00000018u,c->r[5]); // 800DD7F8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800DD7FC
  W8(c->r[13]+0xFFFFA6B9u,c->r[31]); // 800DD800
  W8(c->r[30]+0x00000022u,c->r[31]); // 800DD804
  W32(c->r[30]+0x00000000u,c->r[10]); // 800DD808
  W16(c->r[4]+0x00000020u,c->r[10]); // 800DD80C
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD810
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DD814
  W16(c->r[4]+0x00000024u,c->r[0]); // 800DD818
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD81C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800DD820
  W16(c->r[4]+0x00000030u,c->r[0]); // 800DD824
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD828
  c->r[0]=R32(c->r[30]+0x00000018u); // 800DD82C
  W16(c->r[4]+0x00000034u,c->r[0]); // 800DD830
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD834
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DD838
  W16(c->r[4]+0x00000038u,c->r[0]); // 800DD83C
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD840
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800DD844
  W16(c->r[4]+0x00000028u,c->r[0]); // 800DD848
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD84C
  c->r[0]=R32(c->r[30]+0x00000010u); // 800DD850
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 800DD854
  c->r[0]=R32(c->r[3]+0xFFFFAF40u); // 800DD858
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD85C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800DD860
  W16(c->r[3]+0x00000022u,c->r[0]); // 800DD864
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DD868
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD86C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800DD870
  W16(c->r[3]+0x00000026u,c->r[0]); // 800DD874
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800DD878
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD87C
  c->r[0]=sraw(c,c->r[0],16); // 800DD880
  W16(c->r[3]+0x00000032u,c->r[0]); // 800DD884
  c->r[0]=R32(c->r[30]+0x00000018u); // 800DD888
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD88C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800DD890
  W16(c->r[3]+0x00000036u,c->r[0]); // 800DD894
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DD898
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD89C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800DD8A0
  W16(c->r[3]+0x0000003Au,c->r[0]); // 800DD8A4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800DD8A8
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD8AC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800DD8B0
  W16(c->r[3]+0x0000002Au,c->r[0]); // 800DD8B4
  c->r[0]=R32(c->r[30]+0x00000010u); // 800DD8B8
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD8BC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800DD8C0
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 800DD8C4
  c->lr=0x800DD8CCu; f_800C4F90(c); // 800DD8C8
  c->lr=0x800DD8D0u; f_800DD440(c); // 800DD8CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DD8D0
  if (crb(c,2)) { goto L_800DD910; } // 800DD8D4
  W8(c->r[13]+0xFFFFA6D0u,c->r[31]); // 800DD8D8
  W8(c->r[30]+0x00000021u,c->r[31]); // 800DD8DC
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD8E0
  c->r[0]=c->r[0]|0x00000004u; // 800DD8E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800DD8E8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD8EC
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD8F0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD8F4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD8F8
  c->r[0]=c->r[0]|0x00000010u; // 800DD8FC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD900
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD904
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD908
  goto L_800DD944; // 800DD90C
L_800DD910:;
  c->r[0]=0u+0x00000000u; // 800DD910
  W8(c->r[13]+0xFFFFA6D0u,c->r[0]); // 800DD914
  W8(c->r[30]+0x00000021u,c->r[0]); // 800DD918
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD91C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800DD920
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD924
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD928
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD92C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD930
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800DD934
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD938
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DD93C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DD940
L_800DD944:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD944
  c->r[3]=c->r[28]|c->r[28]; // 800DD948
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD94C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800DD950
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DD954
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800DD958
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DD95C
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD960
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD964
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DD968
  c->r[0]=R32(c->r[5]+0x00000010u); // 800DD96C
  c->r[0]=c->r[0]|0x00000003u; // 800DD970
  W32(c->r[5]+0x00000010u,c->r[0]); // 800DD974
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD978
  W16(c->r[4]+0x00000004u,c->r[0]); // 800DD97C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DD980
  c->r[0]=c->r[0]|0x00000001u; // 800DD984
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD988
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DD98C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DD990
  c->lr=0x800DD998u; f_800CBAE0(c); // 800DD994
L_800DD998:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD998
  c->lr=0x800DD9A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD99C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD9A0
  c->lr=c->r[0]; // 800DD9A4
  c->r[1]=c->r[1]+0x00000020u; // 800DD9A8
  return; // 800DD9AC
}

// fn_800DD9B0
void f_800DD9B0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFA6B9u); // 800DD9B0
  return; // 800DD9B4
}

// fn_800DD9C0
void f_800DD9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD9C0
  c->r[0]=c->lr; // 800DD9C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD9C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD9CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD9D0
  c->r[30]=c->r[3]|c->r[3]; // 800DD9D4
  c->r[31]=R32(c->r[13]+0xFFFFA6C4u); // 800DD9D8
  c->lr=0x800DD9E0u; f_800CBAA0(c); // 800DD9DC
  W32(c->r[13]+0xFFFFA6C4u,c->r[30]); // 800DD9E0
  c->lr=0x800DD9E8u; f_800CBAE0(c); // 800DD9E4
  c->r[3]=c->r[31]|c->r[31]; // 800DD9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD9EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD9F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD9F4
  c->lr=c->r[0]; // 800DD9F8
  c->r[1]=c->r[1]+0x00000010u; // 800DD9FC
  return; // 800DDA00
}

// __GXFifoInit
void f_800DDA10(Ctx* __restrict c) {
  trace_call(0x800DDA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA10
  c->r[0]=c->lr; // 800DDA14
  c->r[4]=0u+0x800E0000u; // 800DDA18
  c->r[3]=0u+0x00000011u; // 800DDA1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA20
  c->r[4]=c->r[4]+0xFFFFD250u; // 800DDA24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDA28
  c->lr=0x800DDA30u; f_800CBB10(c); // 800DDA2C
  c->r[3]=0u+0x00004000u; // 800DDA30
  c->lr=0x800DDA38u; f_800CBEF0(c); // 800DDA34
  c->lr=0x800DDA3Cu; f_800CE960(c); // 800DDA38
  c->r[31]=0u+0x00000000u; // 800DDA3C
  W32(c->r[13]+0xFFFFA6CCu,c->r[3]); // 800DDA40
  c->r[3]=0u+0x802F0000u; // 800DDA44
  c->r[4]=0u+0x00000000u; // 800DDA48
  W32(c->r[13]+0xFFFFA6C8u,c->r[31]); // 800DDA4C
  c->r[3]=c->r[3]+0xFFFFAF64u; // 800DDA50
  c->r[5]=0u+0x00000024u; // 800DDA54
  c->lr=0x800DDA5Cu; f_800046B4(c); // 800DDA58
  c->r[3]=0u+0x802F0000u; // 800DDA5C
  c->r[4]=0u+0x00000000u; // 800DDA60
  c->r[3]=c->r[3]+0xFFFFAF40u; // 800DDA64
  c->r[5]=0u+0x00000024u; // 800DDA68
  c->lr=0x800DDA70u; f_800046B4(c); // 800DDA6C
  W8(c->r[13]+0xFFFFA6B8u,c->r[31]); // 800DDA70
  W8(c->r[13]+0xFFFFA6B9u,c->r[31]); // 800DDA74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDA78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDA7C
  c->lr=c->r[0]; // 800DDA80
  c->r[1]=c->r[1]+0x00000010u; // 800DDA84
  return; // 800DDA88
}

// __GXCleanGPFifo
void f_800DDA90(Ctx* __restrict c) {
  trace_call(0x800DDA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA90
  c->r[0]=c->lr; // 800DDA94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDA98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DDA9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DDAA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DDAA4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DDAA8
  c->r[0]=R8(c->r[13]+0xFFFFA6B9u); // 800DDAAC
  cmps(c,0,(int32_t)c->r[0],0); // 800DDAB0
  if (crb(c,2)) { goto L_800DDC10; } // 800DDAB4
  c->lr=0x800DDABCu; f_800CBAA0(c); // 800DDAB8
  c->r[29]=R32(c->r[2]+0xFFFF9A80u); // 800DDABC
  c->r[30]=0u+0x802F0000u; // 800DDAC0
  c->r[28]=c->r[3]|c->r[3]; // 800DDAC4
  c->r[31]=0u+0x00000000u; // 800DDAC8
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DDACC
  c->r[30]=c->r[30]+0xFFFFAF40u; // 800DDAD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DDAD4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DDAD8
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDADC
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DDAE0
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DDAE4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800DDAE8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DDAEC
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDAF0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DDAF4
  c->r[0]=R32(c->r[30]+0x00000018u); // 800DDAF8
  W32(c->r[30]+0x00000014u,c->r[0]); // 800DDAFC
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDB00
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 800DDB04
  W16(c->r[3]+0x00000030u,c->r[31]); // 800DDB08
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDB0C
  c->r[0]=R32(c->r[30]+0x00000018u); // 800DDB10
  W16(c->r[3]+0x00000034u,c->r[0]); // 800DDB14
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDB18
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DDB1C
  W16(c->r[3]+0x00000038u,c->r[0]); // 800DDB20
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800DDB24
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDB28
  c->r[0]=sraw(c,c->r[0],16); // 800DDB2C
  W16(c->r[3]+0x00000032u,c->r[0]); // 800DDB30
  c->r[0]=R32(c->r[30]+0x00000018u); // 800DDB34
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDB38
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800DDB3C
  W16(c->r[3]+0x00000036u,c->r[0]); // 800DDB40
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DDB44
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDB48
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800DDB4C
  W16(c->r[3]+0x0000003Au,c->r[0]); // 800DDB50
  c->lr=0x800DDB58u; f_800C4F90(c); // 800DDB54
  c->r[0]=R8(c->r[13]+0xFFFFA6D0u); // 800DDB58
  cmps(c,0,(int32_t)c->r[0],0); // 800DDB5C
  if (crb(c,2)) { goto L_800DDBBC; } // 800DDB60
  c->r[5]=0u+0x802F0000u; // 800DDB64
  c->r[4]=R32(c->r[30]+0x00000018u); // 800DDB68
  c->r[5]=c->r[5]+0xFFFFAF64u; // 800DDB6C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800DDB70
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800DDB74
  c->r[31]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[31]&~0x1FFFFFE0u); // 800DDB78
  W32(c->r[5]+0x00000014u,c->r[3]); // 800DDB7C
  c->r[3]=R32(c->r[13]+0xFFFFA690u); // 800DDB80
  W32(c->r[5]+0x00000018u,c->r[4]); // 800DDB84
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800DDB88
  W32(c->r[3]+0x00000014u,c->r[31]); // 800DDB8C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DDB90
  c->r[0]=c->r[0]|0x00000004u; // 800DDB94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800DDB98
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DDB9C
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDBA0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DDBA4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DDBA8
  c->r[0]=c->r[0]|0x00000010u; // 800DDBAC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DDBB0
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800DDBB4
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DDBB8
L_800DDBBC:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 800DDBBC
  c->r[0]=0u+0x00000000u; // 800DDBC0
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800DDBC4
  c->r[3]=c->r[28]|c->r[28]; // 800DDBC8
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800DDBCC
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFDFu; // 800DDBD0
  W32(c->r[29]+0x00000008u,c->r[5]); // 800DDBD4
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DDBD8
  W16(c->r[4]+0x00000002u,c->r[5]); // 800DDBDC
  W32(c->r[13]+0xFFFFA6C0u,c->r[0]); // 800DDBE0
  c->r[0]=R32(c->r[6]+0x00000010u); // 800DDBE4
  c->r[0]=c->r[0]|0x00000003u; // 800DDBE8
  W32(c->r[6]+0x00000010u,c->r[0]); // 800DDBEC
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DDBF0
  W16(c->r[4]+0x00000004u,c->r[0]); // 800DDBF4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800DDBF8
  c->r[0]=c->r[0]|0x00000001u; // 800DDBFC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DDC00
  c->r[4]=R32(c->r[13]+0xFFFFA694u); // 800DDC04
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DDC08
  c->lr=0x800DDC10u; f_800CBAE0(c); // 800DDC0C
L_800DDC10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDC10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DDC14
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DDC18
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DDC1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DDC20
  c->lr=c->r[0]; // 800DDC24
  c->r[1]=c->r[1]+0x00000020u; // 800DDC28
  return; // 800DDC2C
}

// GXSetVtxDesc
void f_800DDC30(Ctx* __restrict c) {
  trace_call(0x800DDC30u);
  cmpu(c,0,c->r[3],0x00000019u); // 800DDC30
  if (crb(c,1)) { goto L_800DDE44; } // 800DDC34
  c->r[5]=0u+0x802B0000u; // 800DDC38
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DDC3C
  c->r[5]=c->r[5]+0xFFFFF0F0u; // 800DDC40
  c->r[5]=R32(c->r[5]+c->r[0]); // 800DDC44
  c->ctr=c->r[5]; // 800DDC48
  if (true) { switch (c->ctr) { case 0x800DDC50u: goto L_800DDC50; case 0x800DDC64u: goto L_800DDC64; case 0x800DDC78u: goto L_800DDC78; case 0x800DDC8Cu: goto L_800DDC8C; case 0x800DDCA0u: goto L_800DDCA0; case 0x800DDCB4u: goto L_800DDCB4; case 0x800DDCC8u: goto L_800DDCC8; case 0x800DDCDCu: goto L_800DDCDC; case 0x800DDCF0u: goto L_800DDCF0; case 0x800DDD04u: goto L_800DDD04; case 0x800DDD18u: goto L_800DDD18; case 0x800DDD4Cu: goto L_800DDD4C; case 0x800DDD80u: goto L_800DDD80; case 0x800DDD94u: goto L_800DDD94; case 0x800DDDA8u: goto L_800DDDA8; case 0x800DDDBCu: goto L_800DDDBC; case 0x800DDDD0u: goto L_800DDDD0; case 0x800DDDE4u: goto L_800DDDE4; case 0x800DDDF8u: goto L_800DDDF8; case 0x800DDE0Cu: goto L_800DDE0C; case 0x800DDE20u: goto L_800DDE20; case 0x800DDE34u: goto L_800DDE34; case 0x800DDE44u: goto L_800DDE44; default: break; } dispatch(c,c->ctr); return; } // 800DDC4C
L_800DDC50:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDC50
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDC54
  c->r[0]=(rotl(c->r[4],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DDC58
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDC5C
  goto L_800DDE44; // 800DDC60
L_800DDC64:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDC64
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDC68
  c->r[0]=(rotl(c->r[4],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 800DDC6C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDC70
  goto L_800DDE44; // 800DDC74
L_800DDC78:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDC78
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDC7C
  c->r[0]=(rotl(c->r[4],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 800DDC80
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDC84
  goto L_800DDE44; // 800DDC88
L_800DDC8C:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDC8C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDC90
  c->r[0]=(rotl(c->r[4],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800DDC94
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDC98
  goto L_800DDE44; // 800DDC9C
L_800DDCA0:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDCA0
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDCA4
  c->r[0]=(rotl(c->r[4],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800DDCA8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDCAC
  goto L_800DDE44; // 800DDCB0
L_800DDCB4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDCB4
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDCB8
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800DDCBC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDCC0
  goto L_800DDE44; // 800DDCC4
L_800DDCC8:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDCC8
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDCCC
  c->r[0]=(rotl(c->r[4],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 800DDCD0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDCD4
  goto L_800DDE44; // 800DDCD8
L_800DDCDC:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDCDC
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDCE0
  c->r[0]=(rotl(c->r[4],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 800DDCE4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDCE8
  goto L_800DDE44; // 800DDCEC
L_800DDCF0:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDCF0
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDCF4
  c->r[0]=(rotl(c->r[4],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 800DDCF8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDCFC
  goto L_800DDE44; // 800DDD00
L_800DDD04:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDD04
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDD08
  c->r[0]=(rotl(c->r[4],9)&0x00000600u)|(c->r[0]&~0x00000600u); // 800DDD0C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDD10
  goto L_800DDE44; // 800DDD14
L_800DDD18:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DDD18
  if (crb(c,2)) { goto L_800DDD3C; } // 800DDD1C
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DDD20
  c->r[3]=0u+0x00000001u; // 800DDD24
  c->r[0]=0u+0x00000000u; // 800DDD28
  W8(c->r[5]+0x00000524u,c->r[3]); // 800DDD2C
  W8(c->r[5]+0x00000525u,c->r[0]); // 800DDD30
  W32(c->r[5]+0x00000520u,c->r[4]); // 800DDD34
  goto L_800DDE44; // 800DDD38
L_800DDD3C:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDD3C
  c->r[0]=0u+0x00000000u; // 800DDD40
  W8(c->r[3]+0x00000524u,c->r[0]); // 800DDD44
  goto L_800DDE44; // 800DDD48
L_800DDD4C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DDD4C
  if (crb(c,2)) { goto L_800DDD70; } // 800DDD50
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DDD54
  c->r[3]=0u+0x00000001u; // 800DDD58
  c->r[0]=0u+0x00000000u; // 800DDD5C
  W8(c->r[5]+0x00000525u,c->r[3]); // 800DDD60
  W8(c->r[5]+0x00000524u,c->r[0]); // 800DDD64
  W32(c->r[5]+0x00000520u,c->r[4]); // 800DDD68
  goto L_800DDE44; // 800DDD6C
L_800DDD70:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDD70
  c->r[0]=0u+0x00000000u; // 800DDD74
  W8(c->r[3]+0x00000525u,c->r[0]); // 800DDD78
  goto L_800DDE44; // 800DDD7C
L_800DDD80:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDD80
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDD84
  c->r[0]=(rotl(c->r[4],13)&0x00006000u)|(c->r[0]&~0x00006000u); // 800DDD88
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDD8C
  goto L_800DDE44; // 800DDD90
L_800DDD94:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDD94
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDD98
  c->r[0]=(rotl(c->r[4],15)&0x00018000u)|(c->r[0]&~0x00018000u); // 800DDD9C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DDDA0
  goto L_800DDE44; // 800DDDA4
L_800DDDA8:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDDA8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDDAC
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800DDDB0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDDB4
  goto L_800DDE44; // 800DDDB8
L_800DDDBC:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDDBC
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDDC0
  c->r[0]=(rotl(c->r[4],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 800DDDC4
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDDC8
  goto L_800DDE44; // 800DDDCC
L_800DDDD0:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDDD0
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDDD4
  c->r[0]=(rotl(c->r[4],4)&0x00000030u)|(c->r[0]&~0x00000030u); // 800DDDD8
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDDDC
  goto L_800DDE44; // 800DDDE0
L_800DDDE4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDDE4
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDDE8
  c->r[0]=(rotl(c->r[4],6)&0x000000C0u)|(c->r[0]&~0x000000C0u); // 800DDDEC
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDDF0
  goto L_800DDE44; // 800DDDF4
L_800DDDF8:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDDF8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDDFC
  c->r[0]=(rotl(c->r[4],8)&0x00000300u)|(c->r[0]&~0x00000300u); // 800DDE00
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDE04
  goto L_800DDE44; // 800DDE08
L_800DDE0C:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDE0C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDE10
  c->r[0]=(rotl(c->r[4],10)&0x00000C00u)|(c->r[0]&~0x00000C00u); // 800DDE14
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDE18
  goto L_800DDE44; // 800DDE1C
L_800DDE20:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDE20
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDE24
  c->r[0]=(rotl(c->r[4],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 800DDE28
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDE2C
  goto L_800DDE44; // 800DDE30
L_800DDE34:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDE34
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDE38
  c->r[0]=(rotl(c->r[4],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 800DDE3C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DDE40
L_800DDE44:;
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DDE44
  c->r[0]=R8(c->r[4]+0x00000524u); // 800DDE48
  cmps(c,0,(int32_t)c->r[0],0); // 800DDE4C
  if (!crb(c,2)) { goto L_800DDE60; } // 800DDE50
  c->r[0]=R8(c->r[4]+0x00000525u); // 800DDE54
  cmps(c,0,(int32_t)c->r[0],0); // 800DDE58
  if (crb(c,2)) { goto L_800DDE78; } // 800DDE5C
L_800DDE60:;
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DDE60
  c->r[0]=R32(c->r[5]+0x00000520u); // 800DDE64
  c->r[3]=R32(c->r[5]+0x00000014u); // 800DDE68
  c->r[3]=(rotl(c->r[0],11)&0x00001800u)|(c->r[3]&~0x00001800u); // 800DDE6C
  W32(c->r[5]+0x00000014u,c->r[3]); // 800DDE70
  goto L_800DDE84; // 800DDE74
L_800DDE78:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 800DDE78
  c->r[0]=rotl(c->r[0],0)&0xFFFFE7FFu; // 800DDE7C
  W32(c->r[4]+0x00000014u,c->r[0]); // 800DDE80
L_800DDE84:;
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800DDE84
  c->r[0]=c->r[0]|0x00000008u; // 800DDE88
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800DDE8C
  return; // 800DDE90
}

// __GXSetVCD
void f_800DDEA0(Ctx* __restrict c) {
  trace_call(0x800DDEA0u);
  c->r[5]=0u+0xCC010000u; // 800DDEA0
  c->r[6]=0u+0x00000008u; // 800DDEA4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DDEA8
  c->r[4]=0u+0x00000050u; // 800DDEAC
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDEB0
  c->r[0]=0u+0x00000060u; // 800DDEB4
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800DDEB8
  c->r[4]=R32(c->r[3]+0x00000014u); // 800DDEBC
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800DDEC0
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DDEC4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DDEC8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DDECC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800DDED0
  c->r[0]=R8(c->r[3]+0x00000525u); // 800DDED4
  cmps(c,0,(int32_t)c->r[0],0); // 800DDED8
  if (crb(c,2)) { goto L_800DDEE8; } // 800DDEDC
  c->r[8]=0u+0x00000002u; // 800DDEE0
  goto L_800DDEF8; // 800DDEE4
L_800DDEE8:;
  c->r[4]=R8(c->r[3]+0x00000524u); // 800DDEE8
  c->r[0]=0u-c->r[4]; // 800DDEEC
  c->r[0]=c->r[0]|c->r[4]; // 800DDEF0
  c->r[8]=rotl(c->r[0],1)&0x00000001u; // 800DDEF4
L_800DDEF8:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DDEF8
  c->r[6]=0u+0xCC010000u; // 800DDEFC
  c->r[5]=R32(c->r[3]+0x00000018u); // 800DDF00
  c->r[4]=0u+0x00000010u; // 800DDF04
  c->r[7]=rotl(c->r[0],19)&0x0000000Fu; // 800DDF08
  c->r[0]=0u+0x00001008u; // 800DDF0C
  c->r[7]=cntlz(c->r[7]); // 800DDF10
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800DDF14
  W8(c->r[6]+0xFFFF8000u,c->r[4]); // 800DDF18
  c->r[7]=addc(c,~c->r[7],0x00000021u,1); // 800DDF1C
  c->r[5]=cntlz(c->r[5]); // 800DDF20
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800DDF24
  c->r[5]=addc(c,~c->r[5],0x00000021u,1); // 800DDF28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800DDF2C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800DDF30
  c->r[0]=0u+0x00000001u; // 800DDF34
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF0u; // 800DDF38
  c->r[5]=c->r[5]|c->r[7]; // 800DDF3C
  c->r[4]=c->r[5]|c->r[4]; // 800DDF40
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 800DDF44
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DDF48
  return; // 800DDF4C
}

// __GXCalculateVLim
void f_800DDF50(Ctx* __restrict c) {
  trace_call(0x800DDF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDF50
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DDF54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDF58
  c->r[0]=R16(c->r[3]+0x00000004u); // 800DDF5C
  cmps(c,0,(int32_t)c->r[0],0); // 800DDF60
  if (crb(c,2)) { goto L_800DE070; } // 800DDF64
  c->r[9]=R32(c->r[3]+0x00000014u); // 800DDF68
  c->r[7]=c->r[13]+0xFFFF8FD8u; // 800DDF6C
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 800DDF70
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 800DDF74
  c->r[4]=rotl(c->r[9],31)&0x00000001u; // 800DDF78
  c->r[0]=c->r[0]+c->r[4]; // 800DDF7C
  c->r[8]=rotl(c->r[5],23)&0x00000001u; // 800DDF80
  c->r[4]=rotl(c->r[9],30)&0x00000001u; // 800DDF84
  c->r[5]=rotl(c->r[9],21)&0x00000003u; // 800DDF88
  c->r[0]=c->r[0]+c->r[4]; // 800DDF8C
  cmps(c,0,(int32_t)c->r[8],1); // 800DDF90
  c->r[4]=rotl(c->r[9],29)&0x00000001u; // 800DDF94
  c->r[6]=rotl(c->r[9],26)&0x00000001u; // 800DDF98
  c->r[0]=c->r[0]+c->r[4]; // 800DDF9C
  c->r[8]=rotl(c->r[9],24)&0x00000001u; // 800DDFA0
  c->r[4]=rotl(c->r[9],28)&0x00000001u; // 800DDFA4
  c->r[31]=R32(c->r[3]+0x00000018u); // 800DDFA8
  c->r[0]=c->r[0]+c->r[4]; // 800DDFAC
  c->r[5]=R8(c->r[7]+c->r[5]); // 800DDFB0
  c->r[4]=rotl(c->r[9],27)&0x00000001u; // 800DDFB4
  c->r[0]=c->r[0]+c->r[4]; // 800DDFB8
  c->r[0]=c->r[0]+c->r[6]; // 800DDFBC
  c->r[6]=rotl(c->r[9],25)&0x00000001u; // 800DDFC0
  c->r[0]=c->r[0]+c->r[6]; // 800DDFC4
  c->r[4]=rotl(c->r[9],23)&0x00000003u; // 800DDFC8
  c->r[6]=R8(c->r[7]+c->r[4]); // 800DDFCC
  c->r[0]=c->r[0]+c->r[8]; // 800DDFD0
  c->r[4]=0u+0x00000001u; // 800DDFD4
  c->r[0]=c->r[0]+c->r[6]; // 800DDFD8
  if (!crb(c,2)) { goto L_800DDFE4; } // 800DDFDC
  c->r[4]=0u+0x00000003u; // 800DDFE0
L_800DDFE4:;
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800DDFE4
  c->r[7]=c->r[13]+0xFFFF8FD0u; // 800DDFE8
  c->r[4]=rotl(c->r[9],19)&0x00000003u; // 800DDFEC
  c->r[5]=rotl(c->r[9],17)&0x00000003u; // 800DDFF0
  c->r[6]=R8(c->r[7]+c->r[4]); // 800DDFF4
  c->r[5]=R8(c->r[7]+c->r[5]); // 800DDFF8
  c->r[0]=c->r[0]+c->r[8]; // 800DDFFC
  c->r[12]=c->r[13]+0xFFFF8FD4u; // 800DE000
  c->r[0]=c->r[0]+c->r[6]; // 800DE004
  c->r[4]=rotl(c->r[31],0)&0x00000003u; // 800DE008
  c->r[10]=rotl(c->r[31],30)&0x00000003u; // 800DE00C
  c->r[11]=R8(c->r[12]+c->r[4]); // 800DE010
  c->r[0]=c->r[0]+c->r[5]; // 800DE014
  c->r[9]=rotl(c->r[31],28)&0x00000003u; // 800DE018
  c->r[8]=rotl(c->r[31],26)&0x00000003u; // 800DE01C
  c->r[7]=rotl(c->r[31],24)&0x00000003u; // 800DE020
  c->r[6]=rotl(c->r[31],22)&0x00000003u; // 800DE024
  c->r[5]=rotl(c->r[31],20)&0x00000003u; // 800DE028
  c->r[4]=rotl(c->r[31],18)&0x00000003u; // 800DE02C
  c->r[10]=R8(c->r[12]+c->r[10]); // 800DE030
  c->r[0]=c->r[0]+c->r[11]; // 800DE034
  c->r[9]=R8(c->r[12]+c->r[9]); // 800DE038
  c->r[0]=c->r[0]+c->r[10]; // 800DE03C
  c->r[8]=R8(c->r[12]+c->r[8]); // 800DE040
  c->r[0]=c->r[0]+c->r[9]; // 800DE044
  c->r[7]=R8(c->r[12]+c->r[7]); // 800DE048
  c->r[0]=c->r[0]+c->r[8]; // 800DE04C
  c->r[6]=R8(c->r[12]+c->r[6]); // 800DE050
  c->r[0]=c->r[0]+c->r[7]; // 800DE054
  c->r[5]=R8(c->r[12]+c->r[5]); // 800DE058
  c->r[0]=c->r[0]+c->r[6]; // 800DE05C
  c->r[4]=R8(c->r[12]+c->r[4]); // 800DE060
  c->r[0]=c->r[0]+c->r[5]; // 800DE064
  c->r[0]=c->r[0]+c->r[4]; // 800DE068
  W16(c->r[3]+0x00000006u,c->r[0]); // 800DE06C
L_800DE070:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE070
  c->r[1]=c->r[1]+0x00000010u; // 800DE074
  return; // 800DE078
}

// GXClearVtxDesc
void f_800DE080(Ctx* __restrict c) {
  trace_call(0x800DE080u);
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DE080
  c->r[0]=0u+0x00000001u; // 800DE084
  c->r[3]=0u+0x00000000u; // 800DE088
  c->r[4]=0u+0x00000000u; // 800DE08C
  c->r[3]=(rotl(c->r[0],9)&0x00000600u)|(c->r[3]&~0x00000600u); // 800DE090
  W32(c->r[5]+0x00000014u,c->r[3]); // 800DE094
  W32(c->r[5]+0x00000018u,c->r[4]); // 800DE098
  W8(c->r[5]+0x00000524u,c->r[4]); // 800DE09C
  W8(c->r[5]+0x00000525u,c->r[4]); // 800DE0A0
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800DE0A4
  c->r[0]=c->r[0]|0x00000008u; // 800DE0A8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800DE0AC
  return; // 800DE0B0
}

// GXSetVtxAttrFmt
void f_800DE0C0(Ctx* __restrict c) {
  trace_call(0x800DE0C0u);
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 800DE0C0
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800DE0C4
  cmpu(c,0,c->r[0],0x00000010u); // 800DE0C8
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DE0CC
  c->r[8]=c->r[8]+c->r[4]; // 800DE0D0
  if (crb(c,1)) { goto L_800DE230; } // 800DE0D4
  c->r[4]=0u+0x802B0000u; // 800DE0D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DE0DC
  c->r[4]=c->r[4]+0xFFFFF158u; // 800DE0E0
  c->r[4]=R32(c->r[4]+c->r[0]); // 800DE0E4
  c->ctr=c->r[4]; // 800DE0E8
  if (true) { switch (c->ctr) { case 0x800DE0F0u: goto L_800DE0F0; case 0x800DE108u: goto L_800DE108; case 0x800DE144u: goto L_800DE144; case 0x800DE158u: goto L_800DE158; case 0x800DE16Cu: goto L_800DE16C; case 0x800DE184u: goto L_800DE184; case 0x800DE19Cu: goto L_800DE19C; case 0x800DE1B4u: goto L_800DE1B4; case 0x800DE1CCu: goto L_800DE1CC; case 0x800DE1ECu: goto L_800DE1EC; case 0x800DE204u: goto L_800DE204; case 0x800DE21Cu: goto L_800DE21C; case 0x800DE230u: goto L_800DE230; default: break; } dispatch(c,c->ctr); return; } // 800DE0EC
L_800DE0F0:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE0F0
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DE0F4
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800DE0F8
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800DE0FC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE100
  goto L_800DE230; // 800DE104
L_800DE108:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE108
  cmps(c,0,(int32_t)c->r[5],2); // 800DE10C
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800DE110
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE114
  if (!crb(c,2)) { goto L_800DE130; } // 800DE118
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE11C
  c->r[0]=c->r[0]|0x00000200u; // 800DE120
  c->r[0]=c->r[0]|0x80000000u; // 800DE124
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE128
  goto L_800DE230; // 800DE12C
L_800DE130:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE130
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800DE134
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800DE138
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE13C
  goto L_800DE230; // 800DE140
L_800DE144:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE144
  c->r[0]=(rotl(c->r[5],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 800DE148
  c->r[0]=(rotl(c->r[6],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 800DE14C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE150
  goto L_800DE230; // 800DE154
L_800DE158:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE158
  c->r[0]=(rotl(c->r[5],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 800DE15C
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800DE160
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE164
  goto L_800DE230; // 800DE168
L_800DE16C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE16C
  c->r[0]=(rotl(c->r[5],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800DE170
  c->r[0]=(rotl(c->r[6],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 800DE174
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 800DE178
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE17C
  goto L_800DE230; // 800DE180
L_800DE184:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE184
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DE188
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800DE18C
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800DE190
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE194
  goto L_800DE230; // 800DE198
L_800DE19C:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE19C
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800DE1A0
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800DE1A4
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 800DE1A8
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE1AC
  goto L_800DE230; // 800DE1B0
L_800DE1B4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE1B4
  c->r[0]=(rotl(c->r[5],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 800DE1B8
  c->r[0]=(rotl(c->r[6],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 800DE1BC
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 800DE1C0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE1C4
  goto L_800DE230; // 800DE1C8
L_800DE1CC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE1CC
  c->r[0]=(rotl(c->r[5],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800DE1D0
  c->r[0]=(rotl(c->r[6],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 800DE1D4
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE1D8
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE1DC
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 800DE1E0
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE1E4
  goto L_800DE230; // 800DE1E8
L_800DE1EC:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE1EC
  c->r[0]=(rotl(c->r[5],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800DE1F0
  c->r[0]=(rotl(c->r[6],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 800DE1F4
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 800DE1F8
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE1FC
  goto L_800DE230; // 800DE200
L_800DE204:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE204
  c->r[0]=(rotl(c->r[5],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 800DE208
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800DE20C
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 800DE210
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE214
  goto L_800DE230; // 800DE218
L_800DE21C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE21C
  c->r[0]=(rotl(c->r[5],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800DE220
  c->r[0]=(rotl(c->r[6],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 800DE224
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 800DE228
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE22C
L_800DE230:;
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DE230
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DE234
  c->r[3]=0u+0x00000001u; // 800DE238
  c->r[4]=R32(c->r[5]+0x000005FCu); // 800DE23C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800DE240
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800DE244
  c->r[3]=c->r[4]|0x00000010u; // 800DE248
  W32(c->r[5]+0x000005FCu,c->r[3]); // 800DE24C
  c->r[3]=R8(c->r[5]+0x000005FBu); // 800DE250
  c->r[0]=c->r[3]|c->r[0]; // 800DE254
  W8(c->r[5]+0x000005FBu,c->r[0]); // 800DE258
  return; // 800DE25C
}

// GXSetVtxAttrFmtv
void f_800DE260(Ctx* __restrict c) {
  trace_call(0x800DE260u);
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800DE260
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DE264
  c->r[5]=0u+0x802B0000u; // 800DE268
  c->r[8]=c->r[6]+c->r[0]; // 800DE26C
  goto L_800DE3EC; // 800DE270
  c->r[0]=c->r[0]|0x00000000u; // 800DE274
L_800DE278:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 800DE278
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 800DE27C
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 800DE280
  c->r[10]=R32(c->r[4]+0x00000008u); // 800DE284
  cmpu(c,0,c->r[0],0x00000010u); // 800DE288
  c->r[9]=R32(c->r[4]+0x00000004u); // 800DE28C
  if (crb(c,1)) { goto L_800DE3E8; } // 800DE290
  c->r[6]=c->r[5]+0xFFFFF19Cu; // 800DE294
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DE298
  c->r[6]=R32(c->r[6]+c->r[0]); // 800DE29C
  c->ctr=c->r[6]; // 800DE2A0
  if (true) { switch (c->ctr) { case 0x800DE2A8u: goto L_800DE2A8; case 0x800DE2C0u: goto L_800DE2C0; case 0x800DE2FCu: goto L_800DE2FC; case 0x800DE310u: goto L_800DE310; case 0x800DE324u: goto L_800DE324; case 0x800DE33Cu: goto L_800DE33C; case 0x800DE354u: goto L_800DE354; case 0x800DE36Cu: goto L_800DE36C; case 0x800DE384u: goto L_800DE384; case 0x800DE3A4u: goto L_800DE3A4; case 0x800DE3BCu: goto L_800DE3BC; case 0x800DE3D4u: goto L_800DE3D4; case 0x800DE3E8u: goto L_800DE3E8; default: break; } dispatch(c,c->ctr); return; } // 800DE2A4
L_800DE2A8:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE2A8
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DE2AC
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800DE2B0
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800DE2B4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE2B8
  goto L_800DE3E8; // 800DE2BC
L_800DE2C0:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE2C0
  cmps(c,0,(int32_t)c->r[9],2); // 800DE2C4
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800DE2C8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE2CC
  if (!crb(c,2)) { goto L_800DE2E8; } // 800DE2D0
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE2D4
  c->r[0]=c->r[0]|0x00000200u; // 800DE2D8
  c->r[0]=c->r[0]|0x80000000u; // 800DE2DC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE2E0
  goto L_800DE3E8; // 800DE2E4
L_800DE2E8:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE2E8
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800DE2EC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800DE2F0
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE2F4
  goto L_800DE3E8; // 800DE2F8
L_800DE2FC:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE2FC
  c->r[0]=(rotl(c->r[9],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 800DE300
  c->r[0]=(rotl(c->r[10],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 800DE304
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE308
  goto L_800DE3E8; // 800DE30C
L_800DE310:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE310
  c->r[0]=(rotl(c->r[9],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 800DE314
  c->r[0]=(rotl(c->r[10],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800DE318
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE31C
  goto L_800DE3E8; // 800DE320
L_800DE324:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800DE324
  c->r[0]=(rotl(c->r[9],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800DE328
  c->r[0]=(rotl(c->r[10],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 800DE32C
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 800DE330
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800DE334
  goto L_800DE3E8; // 800DE338
L_800DE33C:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE33C
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DE340
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800DE344
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800DE348
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE34C
  goto L_800DE3E8; // 800DE350
L_800DE354:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE354
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800DE358
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800DE35C
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 800DE360
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE364
  goto L_800DE3E8; // 800DE368
L_800DE36C:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE36C
  c->r[0]=(rotl(c->r[9],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 800DE370
  c->r[0]=(rotl(c->r[10],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 800DE374
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 800DE378
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE37C
  goto L_800DE3E8; // 800DE380
L_800DE384:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800DE384
  c->r[0]=(rotl(c->r[9],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800DE388
  c->r[0]=(rotl(c->r[10],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 800DE38C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800DE390
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE394
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 800DE398
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE39C
  goto L_800DE3E8; // 800DE3A0
L_800DE3A4:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE3A4
  c->r[0]=(rotl(c->r[9],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800DE3A8
  c->r[0]=(rotl(c->r[10],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 800DE3AC
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 800DE3B0
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE3B4
  goto L_800DE3E8; // 800DE3B8
L_800DE3BC:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE3BC
  c->r[0]=(rotl(c->r[9],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 800DE3C0
  c->r[0]=(rotl(c->r[10],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800DE3C4
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 800DE3C8
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE3CC
  goto L_800DE3E8; // 800DE3D0
L_800DE3D4:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800DE3D4
  c->r[0]=(rotl(c->r[9],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800DE3D8
  c->r[0]=(rotl(c->r[10],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 800DE3DC
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 800DE3E0
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800DE3E4
L_800DE3E8:;
  c->r[4]=c->r[4]+0x00000010u; // 800DE3E8
L_800DE3EC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DE3EC
  cmps(c,0,(int32_t)c->r[0],255); // 800DE3F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE278; } // 800DE3F4
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DE3F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DE3FC
  c->r[3]=0u+0x00000001u; // 800DE400
  c->r[4]=R32(c->r[5]+0x000005FCu); // 800DE404
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800DE408
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800DE40C
  c->r[3]=c->r[4]|0x00000010u; // 800DE410
  W32(c->r[5]+0x000005FCu,c->r[3]); // 800DE414
  c->r[3]=R8(c->r[5]+0x000005FBu); // 800DE418
  c->r[0]=c->r[3]|c->r[0]; // 800DE41C
  W8(c->r[5]+0x000005FBu,c->r[0]); // 800DE420
  return; // 800DE424
}

// __GXSetVAT
void f_800DE430(Ctx* __restrict c) {
  trace_call(0x800DE430u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800DE430
  c->r[9]=0u+0x00000000u; // 800DE434
  c->r[6]=0u+0x00000008u; // 800DE438
  c->r[5]=0u+0xCC010000u; // 800DE43C
  c->r[10]=R8(c->r[8]+0x000005FBu); // 800DE440
  c->r[7]=c->r[8]|c->r[8]; // 800DE444
L_800DE448:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[0]); // 800DE448
  if (crb(c,2)) { goto L_800DE48C; } // 800DE44C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DE450
  c->r[4]=c->r[9]|0x00000070u; // 800DE454
  c->r[3]=c->r[9]|0x00000080u; // 800DE458
  c->r[0]=c->r[9]|0x00000090u; // 800DE45C
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800DE460
  c->r[4]=R32(c->r[7]+0x0000001Cu); // 800DE464
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800DE468
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DE46C
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 800DE470
  c->r[3]=R32(c->r[7]+0x0000003Cu); // 800DE474
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800DE478
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DE47C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DE480
  c->r[0]=R32(c->r[7]+0x0000005Cu); // 800DE484
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800DE488
L_800DE48C:;
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; cr0(c,c->r[10]); // 800DE48C
  c->r[9]=c->r[9]+0x00000001u; // 800DE490
  c->r[7]=c->r[7]+0x00000004u; // 800DE494
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE448; } // 800DE498
  c->r[3]=0u+0xCC010000u; // 800DE49C
  c->r[0]=0u+0x00000000u; // 800DE4A0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DE4A4
  W8(c->r[8]+0x000005FBu,c->r[0]); // 800DE4A8
  return; // 800DE4AC
}

// GXSetArray
void f_800DE4B0(Ctx* __restrict c) {
  trace_call(0x800DE4B0u);
  cmps(c,0,(int32_t)c->r[3],25); // 800DE4B0
  if (!crb(c,2)) { goto L_800DE4BC; } // 800DE4B4
  c->r[3]=0u+0x0000000Au; // 800DE4B8
L_800DE4BC:;
  c->r[6]=0u+0xCC010000u; // 800DE4BC
  c->r[8]=c->r[3]+0xFFFFFFF7u; // 800DE4C0
  c->r[7]=0u+0x00000008u; // 800DE4C4
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800DE4C8
  c->r[0]=c->r[8]|0x000000A0u; // 800DE4CC
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800DE4D0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800DE4D4
  c->r[0]=c->r[8]|0x000000B0u; // 800DE4D8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800DE4DC
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800DE4E0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800DE4E4
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800DE4E8
  return; // 800DE4EC
}

// GXInvalidateVtxCache
void f_800DE4F0(Ctx* __restrict c) {
  trace_call(0x800DE4F0u);
  c->r[3]=0u+0xCC010000u; // 800DE4F0
  c->r[0]=0u+0x00000048u; // 800DE4F4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DE4F8
  return; // 800DE4FC
}

// GXSetTexCoordGen2
void f_800DE500(Ctx* __restrict c) {
  trace_call(0x800DE500u);
  cmpu(c,0,c->r[5],0x00000014u); // 800DE500
  c->r[10]=0u+0x00000000u; // 800DE504
  c->r[12]=0u+0x00000000u; // 800DE508
  c->r[11]=0u+0x00000005u; // 800DE50C
  if (crb(c,1)) { goto L_800DE5A8; } // 800DE510
  c->r[9]=0u+0x802B0000u; // 800DE514
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800DE518
  c->r[9]=c->r[9]+0xFFFFF1E0u; // 800DE51C
  c->r[9]=R32(c->r[9]+c->r[0]); // 800DE520
  c->ctr=c->r[9]; // 800DE524
  if (true) { switch (c->ctr) { case 0x800DE52Cu: goto L_800DE52C; case 0x800DE538u: goto L_800DE538; case 0x800DE544u: goto L_800DE544; case 0x800DE550u: goto L_800DE550; case 0x800DE55Cu: goto L_800DE55C; case 0x800DE564u: goto L_800DE564; case 0x800DE56Cu: goto L_800DE56C; case 0x800DE574u: goto L_800DE574; case 0x800DE57Cu: goto L_800DE57C; case 0x800DE584u: goto L_800DE584; case 0x800DE58Cu: goto L_800DE58C; case 0x800DE594u: goto L_800DE594; case 0x800DE59Cu: goto L_800DE59C; case 0x800DE5A4u: goto L_800DE5A4; case 0x800DE5A8u: goto L_800DE5A8; default: break; } dispatch(c,c->ctr); return; } // 800DE528
L_800DE52C:;
  c->r[11]=0u+0x00000000u; // 800DE52C
  c->r[12]=0u+0x00000001u; // 800DE530
  goto L_800DE5A8; // 800DE534
L_800DE538:;
  c->r[11]=0u+0x00000001u; // 800DE538
  c->r[12]=0u+0x00000001u; // 800DE53C
  goto L_800DE5A8; // 800DE540
L_800DE544:;
  c->r[11]=0u+0x00000003u; // 800DE544
  c->r[12]=0u+0x00000001u; // 800DE548
  goto L_800DE5A8; // 800DE54C
L_800DE550:;
  c->r[11]=0u+0x00000004u; // 800DE550
  c->r[12]=0u+0x00000001u; // 800DE554
  goto L_800DE5A8; // 800DE558
L_800DE55C:;
  c->r[11]=0u+0x00000002u; // 800DE55C
  goto L_800DE5A8; // 800DE560
L_800DE564:;
  c->r[11]=0u+0x00000002u; // 800DE564
  goto L_800DE5A8; // 800DE568
L_800DE56C:;
  c->r[11]=0u+0x00000005u; // 800DE56C
  goto L_800DE5A8; // 800DE570
L_800DE574:;
  c->r[11]=0u+0x00000006u; // 800DE574
  goto L_800DE5A8; // 800DE578
L_800DE57C:;
  c->r[11]=0u+0x00000007u; // 800DE57C
  goto L_800DE5A8; // 800DE580
L_800DE584:;
  c->r[11]=0u+0x00000008u; // 800DE584
  goto L_800DE5A8; // 800DE588
L_800DE58C:;
  c->r[11]=0u+0x00000009u; // 800DE58C
  goto L_800DE5A8; // 800DE590
L_800DE594:;
  c->r[11]=0u+0x0000000Au; // 800DE594
  goto L_800DE5A8; // 800DE598
L_800DE59C:;
  c->r[11]=0u+0x0000000Bu; // 800DE59C
  goto L_800DE5A8; // 800DE5A0
L_800DE5A4:;
  c->r[11]=0u+0x0000000Cu; // 800DE5A4
L_800DE5A8:;
  c->r[9]=c->r[4]+0xFFFFFFFEu; // 800DE5A8
  cmpu(c,0,c->r[9],0x00000007u); // 800DE5AC
  if (!crb(c,1)) { goto L_800DE5F4; } // 800DE5B0
  cmps(c,0,(int32_t)c->r[4],1); // 800DE5B4
  if (crb(c,2)) { goto L_800DE5D0; } // 800DE5B8
  cmps(c,0,(int32_t)c->r[4],0); // 800DE5BC
  if (crb(c,2)) { goto L_800DE5E0; } // 800DE5C0
  cmps(c,0,(int32_t)c->r[4],10); // 800DE5C4
  if (crb(c,2)) { goto L_800DE618; } // 800DE5C8
  goto L_800DE644; // 800DE5CC
L_800DE5D0:;
  c->r[10]=0u+0x00000000u; // 800DE5D0
  c->r[10]=(rotl(c->r[12],2)&0x00000004u)|(c->r[10]&~0x00000004u); // 800DE5D4
  c->r[10]=(rotl(c->r[11],7)&0x00000F80u)|(c->r[10]&~0x00000F80u); // 800DE5D8
  goto L_800DE644; // 800DE5DC
L_800DE5E0:;
  c->r[0]=0u+0x00000000u; // 800DE5E0
  c->r[10]=c->r[0]|0x00000002u; // 800DE5E4
  c->r[10]=(rotl(c->r[12],2)&0x00000004u)|(c->r[10]&~0x00000004u); // 800DE5E8
  c->r[10]=(rotl(c->r[11],7)&0x00000F80u)|(c->r[10]&~0x00000F80u); // 800DE5EC
  goto L_800DE644; // 800DE5F0
L_800DE5F4:;
  c->r[4]=0u+0x00000001u; // 800DE5F4
  c->r[0]=c->r[5]+0xFFFFFFF4u; // 800DE5F8
  c->r[10]=0u+0x00000000u; // 800DE5FC
  c->r[10]=(rotl(c->r[12],2)&0x00000004u)|(c->r[10]&~0x00000004u); // 800DE600
  c->r[10]=(rotl(c->r[4],4)&0x00000070u)|(c->r[10]&~0x00000070u); // 800DE604
  c->r[10]=(rotl(c->r[11],7)&0x00000F80u)|(c->r[10]&~0x00000F80u); // 800DE608
  c->r[10]=(rotl(c->r[0],12)&0x00007000u)|(c->r[10]&~0x00007000u); // 800DE60C
  c->r[10]=(rotl(c->r[9],15)&0x00038000u)|(c->r[10]&~0x00038000u); // 800DE610
  goto L_800DE644; // 800DE614
L_800DE618:;
  cmps(c,0,(int32_t)c->r[5],19); // 800DE618
  c->r[10]=0u+0x00000000u; // 800DE61C
  c->r[10]=(rotl(c->r[12],2)&0x00000004u)|(c->r[10]&~0x00000004u); // 800DE620
  if (!crb(c,2)) { goto L_800DE634; } // 800DE624
  c->r[0]=0u+0x00000002u; // 800DE628
  c->r[10]=(rotl(c->r[0],4)&0x00000070u)|(c->r[10]&~0x00000070u); // 800DE62C
  goto L_800DE63C; // 800DE630
L_800DE634:;
  c->r[0]=0u+0x00000003u; // 800DE634
  c->r[10]=(rotl(c->r[0],4)&0x00000070u)|(c->r[10]&~0x00000070u); // 800DE638
L_800DE63C:;
  c->r[0]=0u+0x00000002u; // 800DE63C
  c->r[10]=(rotl(c->r[0],7)&0x00000F80u)|(c->r[10]&~0x00000F80u); // 800DE640
L_800DE644:;
  c->r[9]=R32(c->r[2]+0xFFFF9A80u); // 800DE644
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DE648
  c->r[0]=c->r[8]+0xFFFFFFC0u; // 800DE64C
  c->r[5]=0u+0x00010000u; // 800DE650
  c->r[8]=c->r[9]+c->r[4]; // 800DE654
  c->r[4]=0u+0x00000000u; // 800DE658
  W32(c->r[8]+0x000000C8u,c->r[10]); // 800DE65C
  c->r[4]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[4]&~0x0000003Fu); // 800DE660
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800DE664
  cmps(c,0,(int32_t)c->r[3],0); // 800DE668
  c->r[5]=R32(c->r[9]+0x000005FCu); // 800DE66C
  c->r[4]=(rotl(c->r[7],8)&0x00000100u)|(c->r[4]&~0x00000100u); // 800DE670
  c->r[0]=c->r[5]|c->r[0]; // 800DE674
  W32(c->r[9]+0x000005FCu,c->r[0]); // 800DE678
  W32(c->r[8]+0x000000E8u,c->r[4]); // 800DE67C
  if (crb(c,2)) { goto L_800DE6B8; } // 800DE680
  cmps(c,0,(int32_t)c->r[3],1); // 800DE684
  if (crb(c,2)) { goto L_800DE6C8; } // 800DE688
  cmps(c,0,(int32_t)c->r[3],2); // 800DE68C
  if (crb(c,2)) { goto L_800DE6D8; } // 800DE690
  cmps(c,0,(int32_t)c->r[3],3); // 800DE694
  if (crb(c,2)) { goto L_800DE6E8; } // 800DE698
  cmps(c,0,(int32_t)c->r[3],4); // 800DE69C
  if (crb(c,2)) { goto L_800DE6F8; } // 800DE6A0
  cmps(c,0,(int32_t)c->r[3],5); // 800DE6A4
  if (crb(c,2)) { goto L_800DE708; } // 800DE6A8
  cmps(c,0,(int32_t)c->r[3],6); // 800DE6AC
  if (crb(c,2)) { goto L_800DE718; } // 800DE6B0
  goto L_800DE728; // 800DE6B4
L_800DE6B8:;
  c->r[0]=R32(c->r[9]+0x00000080u); // 800DE6B8
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 800DE6BC
  W32(c->r[9]+0x00000080u,c->r[0]); // 800DE6C0
  goto L_800DE734; // 800DE6C4
L_800DE6C8:;
  c->r[0]=R32(c->r[9]+0x00000080u); // 800DE6C8
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 800DE6CC
  W32(c->r[9]+0x00000080u,c->r[0]); // 800DE6D0
  goto L_800DE734; // 800DE6D4
L_800DE6D8:;
  c->r[0]=R32(c->r[9]+0x00000080u); // 800DE6D8
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 800DE6DC
  W32(c->r[9]+0x00000080u,c->r[0]); // 800DE6E0
  goto L_800DE734; // 800DE6E4
L_800DE6E8:;
  c->r[0]=R32(c->r[9]+0x00000080u); // 800DE6E8
  c->r[0]=(rotl(c->r[6],24)&0x3F000000u)|(c->r[0]&~0x3F000000u); // 800DE6EC
  W32(c->r[9]+0x00000080u,c->r[0]); // 800DE6F0
  goto L_800DE734; // 800DE6F4
L_800DE6F8:;
  c->r[0]=R32(c->r[9]+0x00000084u); // 800DE6F8
  c->r[0]=(rotl(c->r[6],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 800DE6FC
  W32(c->r[9]+0x00000084u,c->r[0]); // 800DE700
  goto L_800DE734; // 800DE704
L_800DE708:;
  c->r[0]=R32(c->r[9]+0x00000084u); // 800DE708
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 800DE70C
  W32(c->r[9]+0x00000084u,c->r[0]); // 800DE710
  goto L_800DE734; // 800DE714
L_800DE718:;
  c->r[0]=R32(c->r[9]+0x00000084u); // 800DE718
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 800DE71C
  W32(c->r[9]+0x00000084u,c->r[0]); // 800DE720
  goto L_800DE734; // 800DE724
L_800DE728:;
  c->r[0]=R32(c->r[9]+0x00000084u); // 800DE728
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 800DE72C
  W32(c->r[9]+0x00000084u,c->r[0]); // 800DE730
L_800DE734:;
  c->r[0]=R32(c->r[9]+0x000005FCu); // 800DE734
  c->r[0]=c->r[0]|0x04000000u; // 800DE738
  W32(c->r[9]+0x000005FCu,c->r[0]); // 800DE73C
  return; // 800DE740
}

// GXSetNumTexGens
void f_800DE750(Ctx* __restrict c) {
  trace_call(0x800DE750u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DE750
  c->r[0]=R32(c->r[4]+0x00000254u); // 800DE754
  c->r[0]=(rotl(c->r[3],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 800DE758
  W32(c->r[4]+0x00000254u,c->r[0]); // 800DE75C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800DE760
  c->r[0]=c->r[0]|0x02000000u; // 800DE764
  c->r[0]=c->r[0]|0x00000004u; // 800DE768
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800DE76C
  return; // 800DE770
}

// GXSetMisc
void f_800DE780(Ctx* __restrict c) {
  trace_call(0x800DE780u);
  cmps(c,0,(int32_t)c->r[3],1); // 800DE780
  if (crb(c,2)) { goto L_800DE79C; } // 800DE784
  cmps(c,0,(int32_t)c->r[3],2); // 800DE788
  if (crb(c,2)) { goto L_800DE7D0; } // 800DE78C
  cmps(c,0,(int32_t)c->r[3],3); // 800DE790
  if (crb(c,2)) { goto L_800DE7E8; } // 800DE794
  return; // 800DE798
L_800DE79C:;
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DE79C
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800DE7A0
  W16(c->r[5]+0x00000004u,c->r[4]); // 800DE7A4
  c->r[3]=cntlz(c->r[0]); // 800DE7A8
  c->r[0]=0u+0x00000001u; // 800DE7AC
  c->r[3]=rotl(c->r[3],27)&0x0000FFFFu; // 800DE7B0
  W16(c->r[5]+0x00000000u,c->r[3]); // 800DE7B4
  W16(c->r[5]+0x00000002u,c->r[0]); // 800DE7B8
  if (crb(c,2)) return; // 800DE7BC
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800DE7C0
  c->r[0]=c->r[0]|0x00000008u; // 800DE7C4
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800DE7C8
  return; // 800DE7CC
L_800DE7D0:;
  c->r[0]=0u-c->r[4]; // 800DE7D0
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DE7D4
  c->r[0]=c->r[0]|c->r[4]; // 800DE7D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800DE7DC
  W8(c->r[3]+0x000005F9u,c->r[0]); // 800DE7E0
  return; // 800DE7E4
L_800DE7E8:;
  c->r[0]=0u-c->r[4]; // 800DE7E8
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DE7EC
  c->r[0]=c->r[0]|c->r[4]; // 800DE7F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800DE7F4
  W8(c->r[3]+0x000005FAu,c->r[0]); // 800DE7F8
  return; // 800DE7FC
}

// __GXAbort
void f_800DE800(Ctx* __restrict c) {
  trace_call(0x800DE800u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE800
  c->r[0]=c->lr; // 800DE804
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE808
  c->r[11]=c->r[1]+0x00000020u; // 800DE80C
  c->lr=0x800DE814u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE810
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DE814
  c->r[0]=R8(c->r[3]+0x000005FAu); // 800DE818
  cmps(c,0,(int32_t)c->r[0],0); // 800DE81C
  if (crb(c,2)) { goto L_800DE8C0; } // 800DE820
  c->lr=0x800DE828u; f_800DD9B0(c); // 800DE824
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DE828
  if (crb(c,2)) { goto L_800DE8C0; } // 800DE82C
  c->r[5]=R32(c->r[13]+0xFFFFA69Cu); // 800DE830
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800DE834
L_800DE838:;
  c->r[3]=c->r[0]|c->r[0]; // 800DE838
  c->r[4]=R16(c->r[5]+0x00000050u); // 800DE83C
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800DE840
  cmpu(c,0,c->r[0],c->r[3]); // 800DE844
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE838; } // 800DE848
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800DE84C
  c->r[0]=0u+0x00000000u; // 800DE850
  c->r[27]=c->r[3]|c->r[4]; // 800DE854
  c->r[29]=0u+0x00000008u; // 800DE858
  c->r[28]=c->r[0]^0x80000000u; // 800DE85C
L_800DE860:;
  c->lr=0x800DE864u; f_800D0510(c); // 800DE860
  c->r[31]=c->r[4]|c->r[4]; // 800DE864
  c->r[30]=c->r[3]|c->r[3]; // 800DE868
L_800DE86C:;
  c->lr=0x800DE870u; f_800D0510(c); // 800DE86C
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 800DE870
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 800DE874
  c->r[3]=c->r[0]^0x80000000u; // 800DE878
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 800DE87C
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 800DE880
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 800DE884
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800DE888
  if (crb(c,2)) { IRQCHK(c); goto L_800DE86C; } // 800DE88C
  c->r[5]=R32(c->r[13]+0xFFFFA69Cu); // 800DE890
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800DE894
L_800DE898:;
  c->r[3]=c->r[0]|c->r[0]; // 800DE898
  c->r[4]=R16(c->r[5]+0x00000050u); // 800DE89C
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800DE8A0
  cmpu(c,0,c->r[0],c->r[3]); // 800DE8A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE898; } // 800DE8A8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 800DE8AC
  c->r[0]=c->r[0]|c->r[4]; // 800DE8B0
  cmpu(c,0,c->r[0],c->r[27]); // 800DE8B4
  c->r[27]=c->r[0]|c->r[0]; // 800DE8B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE860; } // 800DE8BC
L_800DE8C0:;
  c->r[3]=0u+0xCC000000u; // 800DE8C0
  c->r[0]=0u+0x00000001u; // 800DE8C4
  W32(c->r[3]+0x00003018u,c->r[0]); // 800DE8C8
  c->lr=0x800DE8D0u; f_800D0510(c); // 800DE8CC
  c->r[0]=0u+0x00000000u; // 800DE8D0
  c->r[31]=c->r[4]|c->r[4]; // 800DE8D4
  c->r[30]=c->r[3]|c->r[3]; // 800DE8D8
  c->r[29]=0u+0x00000032u; // 800DE8DC
  c->r[28]=c->r[0]^0x80000000u; // 800DE8E0
L_800DE8E4:;
  c->lr=0x800DE8E8u; f_800D0510(c); // 800DE8E4
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 800DE8E8
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 800DE8EC
  c->r[3]=c->r[0]^0x80000000u; // 800DE8F0
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 800DE8F4
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 800DE8F8
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 800DE8FC
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800DE900
  if (crb(c,2)) { IRQCHK(c); goto L_800DE8E4; } // 800DE904
  c->r[3]=0u+0xCC000000u; // 800DE908
  c->r[30]=0u+0x00000000u; // 800DE90C
  W32(c->r[3]+0x00003018u,c->r[30]); // 800DE910
  c->lr=0x800DE918u; f_800D0510(c); // 800DE914
  c->r[31]=c->r[30]^0x80000000u; // 800DE918
  c->r[28]=c->r[4]|c->r[4]; // 800DE91C
  c->r[29]=c->r[3]|c->r[3]; // 800DE920
  c->r[30]=0u+0x00000005u; // 800DE924
L_800DE928:;
  c->lr=0x800DE92Cu; f_800D0510(c); // 800DE928
  c->r[4]=addc(c,~c->r[28],c->r[4],1); // 800DE92C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800DE930
  c->r[3]=c->r[0]^0x80000000u; // 800DE934
  c->r[0]=addc(c,~c->r[4],c->r[30],1); // 800DE938
  c->r[3]=addc(c,~c->r[3],c->r[31],c->xer_ca); // 800DE93C
  c->r[3]=addc(c,~c->r[31],c->r[31],c->xer_ca); // 800DE940
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800DE944
  if (crb(c,2)) { IRQCHK(c); goto L_800DE928; } // 800DE948
  c->r[11]=c->r[1]+0x00000020u; // 800DE94C
  c->lr=0x800DE954u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE950
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE954
  c->lr=c->r[0]; // 800DE958
  c->r[1]=c->r[1]+0x00000020u; // 800DE95C
  return; // 800DE960
}

// GXAbortFrame
void f_800DE970(Ctx* __restrict c) {
  trace_call(0x800DE970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE970
  c->r[0]=c->lr; // 800DE974
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE978
  c->r[11]=c->r[1]+0x00000020u; // 800DE97C
  c->lr=0x800DE984u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE980
  c->r[31]=R32(c->r[2]+0xFFFF9A80u); // 800DE984
  c->r[0]=R8(c->r[31]+0x000005FAu); // 800DE988
  cmps(c,0,(int32_t)c->r[0],0); // 800DE98C
  if (crb(c,2)) { goto L_800DEA30; } // 800DE990
  c->lr=0x800DE998u; f_800DD9B0(c); // 800DE994
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DE998
  if (crb(c,2)) { goto L_800DEA30; } // 800DE99C
  c->r[5]=R32(c->r[13]+0xFFFFA69Cu); // 800DE9A0
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 800DE9A4
L_800DE9A8:;
  c->r[0]=c->r[3]|c->r[3]; // 800DE9A8
  c->r[4]=R16(c->r[5]+0x00000050u); // 800DE9AC
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 800DE9B0
  cmpu(c,0,c->r[3],c->r[0]); // 800DE9B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE9A8; } // 800DE9B8
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 800DE9BC
  c->r[0]=0u+0x00000000u; // 800DE9C0
  c->r[26]=c->r[3]|c->r[4]; // 800DE9C4
  c->r[28]=0u+0x00000008u; // 800DE9C8
  c->r[27]=c->r[0]^0x80000000u; // 800DE9CC
L_800DE9D0:;
  c->lr=0x800DE9D4u; f_800D0510(c); // 800DE9D0
  c->r[30]=c->r[4]|c->r[4]; // 800DE9D4
  c->r[29]=c->r[3]|c->r[3]; // 800DE9D8
L_800DE9DC:;
  c->lr=0x800DE9E0u; f_800D0510(c); // 800DE9DC
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 800DE9E0
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800DE9E4
  c->r[3]=c->r[0]^0x80000000u; // 800DE9E8
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 800DE9EC
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 800DE9F0
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 800DE9F4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800DE9F8
  if (crb(c,2)) { IRQCHK(c); goto L_800DE9DC; } // 800DE9FC
  c->r[5]=R32(c->r[13]+0xFFFFA69Cu); // 800DEA00
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 800DEA04
L_800DEA08:;
  c->r[0]=c->r[4]|c->r[4]; // 800DEA08
  c->r[3]=R16(c->r[5]+0x00000050u); // 800DEA0C
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 800DEA10
  cmpu(c,0,c->r[4],c->r[0]); // 800DEA14
  if (!crb(c,2)) { IRQCHK(c); goto L_800DEA08; } // 800DEA18
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 800DEA1C
  c->r[0]=c->r[0]|c->r[3]; // 800DEA20
  cmpu(c,0,c->r[0],c->r[26]); // 800DEA24
  c->r[26]=c->r[0]|c->r[0]; // 800DEA28
  if (!crb(c,2)) { IRQCHK(c); goto L_800DE9D0; } // 800DEA2C
L_800DEA30:;
  c->r[3]=0u+0xCC000000u; // 800DEA30
  c->r[0]=0u+0x00000001u; // 800DEA34
  W32(c->r[3]+0x00003018u,c->r[0]); // 800DEA38
  c->lr=0x800DEA40u; f_800D0510(c); // 800DEA3C
  c->r[0]=0u+0x00000000u; // 800DEA40
  c->r[30]=c->r[4]|c->r[4]; // 800DEA44
  c->r[29]=c->r[3]|c->r[3]; // 800DEA48
  c->r[28]=0u+0x00000032u; // 800DEA4C
  c->r[27]=c->r[0]^0x80000000u; // 800DEA50
L_800DEA54:;
  c->lr=0x800DEA58u; f_800D0510(c); // 800DEA54
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 800DEA58
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800DEA5C
  c->r[3]=c->r[0]^0x80000000u; // 800DEA60
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 800DEA64
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 800DEA68
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 800DEA6C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800DEA70
  if (crb(c,2)) { IRQCHK(c); goto L_800DEA54; } // 800DEA74
  c->r[3]=0u+0xCC000000u; // 800DEA78
  c->r[29]=0u+0x00000000u; // 800DEA7C
  W32(c->r[3]+0x00003018u,c->r[29]); // 800DEA80
  c->lr=0x800DEA88u; f_800D0510(c); // 800DEA84
  c->r[30]=c->r[29]^0x80000000u; // 800DEA88
  c->r[27]=c->r[4]|c->r[4]; // 800DEA8C
  c->r[28]=c->r[3]|c->r[3]; // 800DEA90
  c->r[29]=0u+0x00000005u; // 800DEA94
L_800DEA98:;
  c->lr=0x800DEA9Cu; f_800D0510(c); // 800DEA98
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 800DEA9C
  c->r[0]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 800DEAA0
  c->r[3]=c->r[0]^0x80000000u; // 800DEAA4
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 800DEAA8
  c->r[3]=addc(c,~c->r[3],c->r[30],c->xer_ca); // 800DEAAC
  c->r[3]=addc(c,~c->r[30],c->r[30],c->xer_ca); // 800DEAB0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800DEAB4
  if (crb(c,2)) { IRQCHK(c); goto L_800DEA98; } // 800DEAB8
  c->lr=0x800DEAC0u; f_800DD9B0(c); // 800DEABC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DEAC0
  if (crb(c,2)) { goto L_800DEB0C; } // 800DEAC4
  c->lr=0x800DEACCu; f_800DDA90(c); // 800DEAC8
  c->lr=0x800DEAD0u; f_800DC350(c); // 800DEACC
  c->r[0]=0u+0x00000000u; // 800DEAD0
  W32(c->r[31]+0x000005FCu,c->r[0]); // 800DEAD4
  goto L_800DEAE0; // 800DEAD8
  c->lr=0x800DEAE0u; f_800DEF80(c); // 800DEADC
L_800DEAE0:;
  c->r[3]=0u+0xCC010000u; // 800DEAE0
  c->r[0]=0u+0x00000000u; // 800DEAE4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEAE8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEAEC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEAF0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEAF4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEAF8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEAFC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEB00
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DEB04
  c->lr=0x800DEB0Cu; f_800C4F90(c); // 800DEB08
L_800DEB0C:;
  c->r[11]=c->r[1]+0x00000020u; // 800DEB0C
  c->lr=0x800DEB14u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DEB10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DEB14
  c->lr=c->r[0]; // 800DEB18
  c->r[1]=c->r[1]+0x00000020u; // 800DEB1C
  return; // 800DEB20
}

// GXDrawDone
void f_800DEB30(Ctx* __restrict c) {
  trace_call(0x800DEB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEB30
  c->r[0]=c->lr; // 800DEB34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DEB38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DEB3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DEB40
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DEB44
  c->lr=0x800DEB4Cu; f_800CBAA0(c); // 800DEB48
  c->r[5]=0u+0xCC010000u; // 800DEB4C
  c->r[0]=0u+0x00000061u; // 800DEB50
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DEB54
  c->r[4]=0u+0x45000000u; // 800DEB58
  c->r[0]=c->r[4]+0x00000002u; // 800DEB5C
  c->r[29]=R32(c->r[2]+0xFFFF9A80u); // 800DEB60
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800DEB64
  c->r[30]=c->r[3]|c->r[3]; // 800DEB68
  c->r[0]=R32(c->r[29]+0x000005FCu); // 800DEB6C
  cmps(c,0,(int32_t)c->r[0],0); // 800DEB70
  if (crb(c,2)) { goto L_800DEB7C; } // 800DEB74
  c->lr=0x800DEB7Cu; f_800DEF80(c); // 800DEB78
L_800DEB7C:;
  c->r[3]=0u+0xCC010000u; // 800DEB7C
  c->r[31]=0u+0x00000000u; // 800DEB80
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB84
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB88
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB8C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB90
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB94
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB98
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEB9C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800DEBA0
  c->lr=0x800DEBA8u; f_800C4F90(c); // 800DEBA4
  W8(c->r[13]+0xFFFFA6E0u,c->r[31]); // 800DEBA8
  c->r[3]=c->r[30]|c->r[30]; // 800DEBAC
  c->lr=0x800DEBB4u; f_800CBAE0(c); // 800DEBB0
  W16(c->r[29]+0x00000002u,c->r[31]); // 800DEBB4
  c->lr=0x800DEBBCu; f_800CBAA0(c); // 800DEBB8
  c->r[30]=c->r[3]|c->r[3]; // 800DEBBC
  goto L_800DEBCC; // 800DEBC0
L_800DEBC4:;
  c->r[3]=c->r[13]+0xFFFFA6D8u; // 800DEBC4
  c->lr=0x800DEBCCu; f_800CF9E0(c); // 800DEBC8
L_800DEBCC:;
  c->r[0]=R8(c->r[13]+0xFFFFA6E0u); // 800DEBCC
  cmps(c,0,(int32_t)c->r[0],0); // 800DEBD0
  if (crb(c,2)) { IRQCHK(c); goto L_800DEBC4; } // 800DEBD4
  c->r[3]=c->r[30]|c->r[30]; // 800DEBD8
  c->lr=0x800DEBE0u; f_800CBAE0(c); // 800DEBDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DEBE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DEBE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DEBE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DEBEC
  c->lr=c->r[0]; // 800DEBF0
  c->r[1]=c->r[1]+0x00000020u; // 800DEBF4
  return; // 800DEBF8
}

// GXPixModeSync
void f_800DEC00(Ctx* __restrict c) {
  trace_call(0x800DEC00u);
  c->r[4]=0u+0xCC010000u; // 800DEC00
  c->r[0]=0u+0x00000061u; // 800DEC04
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800DEC08
  c->r[0]=0u+0x00000000u; // 800DEC0C
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DEC10
  c->r[3]=R32(c->r[5]+0x0000022Cu); // 800DEC14
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800DEC18
  W16(c->r[5]+0x00000002u,c->r[0]); // 800DEC1C
  return; // 800DEC20
}

// GXPokeAlphaMode
void f_800DEC30(Ctx* __restrict c) {
  trace_call(0x800DEC30u);
  c->r[5]=R32(c->r[13]+0xFFFFA698u); // 800DEC30
  c->r[4]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[4]&~0xFFFFFF00u); // 800DEC34
  W16(c->r[5]+0x00000006u,c->r[4]); // 800DEC38
  return; // 800DEC3C
}

// GXPokeAlphaRead
void f_800DEC40(Ctx* __restrict c) {
  trace_call(0x800DEC40u);
  c->r[4]=R32(c->r[13]+0xFFFFA698u); // 800DEC40
  c->r[0]=0u+0x00000000u; // 800DEC44
  c->r[0]=(rotl(c->r[3],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800DEC48
  c->r[0]=c->r[0]|0x00000004u; // 800DEC4C
  W16(c->r[4]+0x00000008u,c->r[0]); // 800DEC50
  return; // 800DEC54
}

// GXPokeAlphaUpdate
void f_800DEC60(Ctx* __restrict c) {
  trace_call(0x800DEC60u);
  c->r[4]=R32(c->r[13]+0xFFFFA698u); // 800DEC60
  c->r[0]=R16(c->r[4]+0x00000002u); // 800DEC64
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800DEC68
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DEC6C
  return; // 800DEC70
}

// GXPokeBlendMode
void f_800DEC80(Ctx* __restrict c) {
  trace_call(0x800DEC80u);
  c->r[7]=R32(c->r[13]+0xFFFFA698u); // 800DEC80
  cmps(c,0,(int32_t)c->r[3],1); // 800DEC84
  c->r[0]=0u+0x00000000u; // 800DEC88
  c->r[9]=R16(c->r[7]+0x00000002u); // 800DEC8C
  if (crb(c,2)) { goto L_800DEC9C; } // 800DEC90
  cmps(c,0,(int32_t)c->r[3],3); // 800DEC94
  if (!crb(c,2)) { goto L_800DECA0; } // 800DEC98
L_800DEC9C:;
  c->r[0]=0u+0x00000001u; // 800DEC9C
L_800DECA0:;
  c->r[7]=c->r[3]+0xFFFFFFFDu; // 800DECA0
  c->r[9]=(rotl(c->r[0],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 800DECA4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800DECA8
  c->r[3]=R32(c->r[13]+0xFFFFA698u); // 800DECAC
  c->r[8]=cntlz(c->r[7]); // 800DECB0
  c->r[7]=cntlz(c->r[0]); // 800DECB4
  c->r[0]=0u+0x00000041u; // 800DECB8
  c->r[9]=(rotl(c->r[8],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 800DECBC
  c->r[9]=(rotl(c->r[7],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 800DECC0
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 800DECC4
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 800DECC8
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 800DECCC
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 800DECD0
  W16(c->r[3]+0x00000002u,c->r[9]); // 800DECD4
  return; // 800DECD8
}

// GXPokeColorUpdate
void f_800DECE0(Ctx* __restrict c) {
  trace_call(0x800DECE0u);
  c->r[4]=R32(c->r[13]+0xFFFFA698u); // 800DECE0
  c->r[0]=R16(c->r[4]+0x00000002u); // 800DECE4
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800DECE8
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DECEC
  return; // 800DECF0
}

// GXPokeDstAlpha
void f_800DED00(Ctx* __restrict c) {
  trace_call(0x800DED00u);
  c->r[5]=R32(c->r[13]+0xFFFFA698u); // 800DED00
  c->r[0]=0u+0x00000000u; // 800DED04
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800DED08
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 800DED0C
  W16(c->r[5]+0x00000004u,c->r[0]); // 800DED10
  return; // 800DED14
}

// GXPokeDither
void f_800DED20(Ctx* __restrict c) {
  trace_call(0x800DED20u);
  c->r[4]=R32(c->r[13]+0xFFFFA698u); // 800DED20
  c->r[0]=R16(c->r[4]+0x00000002u); // 800DED24
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 800DED28
  W16(c->r[4]+0x00000002u,c->r[0]); // 800DED2C
  return; // 800DED30
}

// GXPokeZMode
void f_800DED40(Ctx* __restrict c) {
  trace_call(0x800DED40u);
  c->r[6]=R32(c->r[13]+0xFFFFA698u); // 800DED40
  c->r[0]=0u+0x00000000u; // 800DED44
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DED48
  c->r[0]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800DED4C
  c->r[0]=(rotl(c->r[5],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800DED50
  W16(c->r[6]+0x00000000u,c->r[0]); // 800DED54
  return; // 800DED58
}

// GXSetDrawSyncCallback
void f_800DED60(Ctx* __restrict c) {
  trace_call(0x800DED60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DED60
  c->r[0]=c->lr; // 800DED64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DED68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DED6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DED70
  c->r[30]=c->r[3]|c->r[3]; // 800DED74
  c->r[31]=R32(c->r[13]+0xFFFFA6E8u); // 800DED78
  c->lr=0x800DED80u; f_800CBAA0(c); // 800DED7C
  W32(c->r[13]+0xFFFFA6E8u,c->r[30]); // 800DED80
  c->lr=0x800DED88u; f_800CBAE0(c); // 800DED84
  c->r[3]=c->r[31]|c->r[31]; // 800DED88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DED8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DED90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DED94
  c->lr=c->r[0]; // 800DED98
  c->r[1]=c->r[1]+0x00000010u; // 800DED9C
  return; // 800DEDA0
}

// GXTokenInterruptHandler
void f_800DEDB0(Ctx* __restrict c) {
  trace_call(0x800DEDB0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEDB0
  c->r[0]=c->lr; // 800DEDB4
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800DEDB8
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800DEDBC
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800DEDC0
  c->r[30]=c->r[4]|c->r[4]; // 800DEDC4
  c->r[0]=R32(c->r[13]+0xFFFFA6E8u); // 800DEDC8
  c->r[3]=R32(c->r[13]+0xFFFFA698u); // 800DEDCC
  cmps(c,0,(int32_t)c->r[0],0); // 800DEDD0
  c->r[31]=R16(c->r[3]+0x0000000Eu); // 800DEDD4
  if (crb(c,2)) { goto L_800DEE0C; } // 800DEDD8
  c->r[3]=c->r[1]+0x00000008u; // 800DEDDC
  c->lr=0x800DEDE4u; f_800C8020(c); // 800DEDE0
  c->r[3]=c->r[1]+0x00000008u; // 800DEDE4
  c->lr=0x800DEDECu; f_800C7DE0(c); // 800DEDE8
  c->r[12]=R32(c->r[13]+0xFFFFA6E8u); // 800DEDEC
  c->r[3]=c->r[31]|c->r[31]; // 800DEDF0
  c->ctr=c->r[12]; // 800DEDF4
  if (true) { c->lr=0x800DEDFCu; dispatch(c,c->ctr); } // 800DEDF8
  c->r[3]=c->r[1]+0x00000008u; // 800DEDFC
  c->lr=0x800DEE04u; f_800C8020(c); // 800DEE00
  c->r[3]=c->r[30]|c->r[30]; // 800DEE04
  c->lr=0x800DEE0Cu; f_800C7DE0(c); // 800DEE08
L_800DEE0C:;
  c->r[3]=R32(c->r[13]+0xFFFFA698u); // 800DEE0C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800DEE10
  c->r[0]=c->r[0]|0x00000004u; // 800DEE14
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800DEE18
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800DEE1C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800DEE20
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800DEE24
  c->lr=c->r[0]; // 800DEE28
  c->r[1]=c->r[1]+0x000002E0u; // 800DEE2C
  return; // 800DEE30
}

// GXSetDrawDoneCallback
void f_800DEE40(Ctx* __restrict c) {
  trace_call(0x800DEE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEE40
  c->r[0]=c->lr; // 800DEE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEE48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEE4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEE50
  c->r[30]=c->r[3]|c->r[3]; // 800DEE54
  c->r[31]=R32(c->r[13]+0xFFFFA6E4u); // 800DEE58
  c->lr=0x800DEE60u; f_800CBAA0(c); // 800DEE5C
  W32(c->r[13]+0xFFFFA6E4u,c->r[30]); // 800DEE60
  c->lr=0x800DEE68u; f_800CBAE0(c); // 800DEE64
  c->r[3]=c->r[31]|c->r[31]; // 800DEE68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEE6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEE70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEE74
  c->lr=c->r[0]; // 800DEE78
  c->r[1]=c->r[1]+0x00000010u; // 800DEE7C
  return; // 800DEE80
}

// GXFinishInterruptHandler
void f_800DEE90(Ctx* __restrict c) {
  trace_call(0x800DEE90u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEE90
  c->r[0]=c->lr; // 800DEE94
  c->r[3]=0u+0x00000001u; // 800DEE98
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800DEE9C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800DEEA0
  c->r[31]=c->r[4]|c->r[4]; // 800DEEA4
  c->r[5]=R32(c->r[13]+0xFFFFA698u); // 800DEEA8
  c->r[0]=R16(c->r[5]+0x0000000Au); // 800DEEAC
  c->r[0]=c->r[0]|0x00000008u; // 800DEEB0
  W16(c->r[5]+0x0000000Au,c->r[0]); // 800DEEB4
  c->r[0]=R32(c->r[13]+0xFFFFA6E4u); // 800DEEB8
  W8(c->r[13]+0xFFFFA6E0u,c->r[3]); // 800DEEBC
  cmps(c,0,(int32_t)c->r[0],0); // 800DEEC0
  if (crb(c,2)) { goto L_800DEEF4; } // 800DEEC4
  c->r[3]=c->r[1]+0x00000008u; // 800DEEC8
  c->lr=0x800DEED0u; f_800C8020(c); // 800DEECC
  c->r[3]=c->r[1]+0x00000008u; // 800DEED0
  c->lr=0x800DEED8u; f_800C7DE0(c); // 800DEED4
  c->r[12]=R32(c->r[13]+0xFFFFA6E4u); // 800DEED8
  c->ctr=c->r[12]; // 800DEEDC
  if (true) { c->lr=0x800DEEE4u; dispatch(c,c->ctr); } // 800DEEE0
  c->r[3]=c->r[1]+0x00000008u; // 800DEEE4
  c->lr=0x800DEEECu; f_800C8020(c); // 800DEEE8
  c->r[3]=c->r[31]|c->r[31]; // 800DEEEC
  c->lr=0x800DEEF4u; f_800C7DE0(c); // 800DEEF0
L_800DEEF4:;
  c->r[3]=c->r[13]+0xFFFFA6D8u; // 800DEEF4
  c->lr=0x800DEEFCu; f_800CFAD0(c); // 800DEEF8
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800DEEFC
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800DEF00
  c->lr=c->r[0]; // 800DEF04
  c->r[1]=c->r[1]+0x000002E0u; // 800DEF08
  return; // 800DEF0C
}

// __GXPEInit
void f_800DEF10(Ctx* __restrict c) {
  trace_call(0x800DEF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEF10
  c->r[0]=c->lr; // 800DEF14
  c->r[4]=0u+0x800E0000u; // 800DEF18
  c->r[3]=0u+0x00000012u; // 800DEF1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEF20
  c->r[4]=c->r[4]+0xFFFFEDB0u; // 800DEF24
  c->lr=0x800DEF2Cu; f_800CBB10(c); // 800DEF28
  c->r[4]=0u+0x800E0000u; // 800DEF2C
  c->r[3]=0u+0x00000013u; // 800DEF30
  c->r[4]=c->r[4]+0xFFFFEE90u; // 800DEF34
  c->lr=0x800DEF3Cu; f_800CBB10(c); // 800DEF38
  c->r[3]=c->r[13]+0xFFFFA6D8u; // 800DEF3C
  c->lr=0x800DEF44u; f_800CE950(c); // 800DEF40
  c->r[3]=0u+0x00002000u; // 800DEF44
  c->lr=0x800DEF4Cu; f_800CBEF0(c); // 800DEF48
  c->r[3]=0u+0x00001000u; // 800DEF4C
  c->lr=0x800DEF54u; f_800CBEF0(c); // 800DEF50
  c->r[3]=R32(c->r[13]+0xFFFFA698u); // 800DEF54
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800DEF58
  c->r[0]=c->r[0]|0x0000000Fu; // 800DEF5C
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800DEF60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEF64
  c->lr=c->r[0]; // 800DEF68
  c->r[1]=c->r[1]+0x00000010u; // 800DEF6C
  return; // 800DEF70
}

// __GXSetDirtyState
void f_800DEF80(Ctx* __restrict c) {
  trace_call(0x800DEF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEF80
  c->r[0]=c->lr; // 800DEF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEF8C
  c->r[31]=R32(c->r[2]+0xFFFF9A80u); // 800DEF90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEF94
  c->r[30]=R32(c->r[31]+0x000005FCu); // 800DEF98
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800DEF9C
  if (crb(c,2)) { goto L_800DEFA8; } // 800DEFA0
  c->lr=0x800DEFA8u; f_800E0CF0(c); // 800DEFA4
L_800DEFA8:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 800DEFA8
  if (crb(c,2)) { goto L_800DEFB4; } // 800DEFAC
  c->lr=0x800DEFB4u; f_800E15A0(c); // 800DEFB0
L_800DEFB4:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 800DEFB4
  if (crb(c,2)) { goto L_800DEFDC; } // 800DEFB8
  c->r[4]=0u+0xCC010000u; // 800DEFBC
  c->r[0]=0u+0x00000061u; // 800DEFC0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800DEFC4
  c->r[0]=0u+0x00000000u; // 800DEFC8
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DEFCC
  c->r[3]=R32(c->r[5]+0x00000254u); // 800DEFD0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800DEFD4
  W16(c->r[5]+0x00000002u,c->r[0]); // 800DEFD8
L_800DEFDC:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 800DEFDC
  if (crb(c,2)) { goto L_800DEFE8; } // 800DEFE0
  c->lr=0x800DEFE8u; f_800DDEA0(c); // 800DEFE4
L_800DEFE8:;
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 800DEFE8
  if (crb(c,2)) { goto L_800DEFF4; } // 800DEFEC
  c->lr=0x800DEFF4u; f_800DE430(c); // 800DEFF0
L_800DEFF4:;
  c->r[0]=rotl(c->r[30],0)&0x00000018u; cr0(c,c->r[0]); // 800DEFF4
  if (crb(c,2)) { goto L_800DF000; } // 800DEFF8
  c->lr=0x800DF000u; f_800DDF50(c); // 800DEFFC
L_800DF000:;
  c->r[30]=rotl(c->r[30],0)&0xFFFFFF00u; cr0(c,c->r[30]); // 800DF000
  if (crb(c,2)) { goto L_800DF1E0; } // 800DF004
  c->r[4]=rotl(c->r[30],0)&0x00000F00u; cr0(c,c->r[4]); // 800DF008
  if (crb(c,2)) { goto L_800DF0A0; } // 800DF00C
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 800DF010
  if (crb(c,2)) { goto L_800DF034; } // 800DF014
  c->r[3]=0u+0xCC010000u; // 800DF018
  c->r[0]=0u+0x00000010u; // 800DF01C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF020
  c->r[0]=0u+0x0000100Au; // 800DF024
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF028
  c->r[0]=R32(c->r[31]+0x000000A8u); // 800DF02C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF030
L_800DF034:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 800DF034
  if (crb(c,2)) { goto L_800DF058; } // 800DF038
  c->r[3]=0u+0xCC010000u; // 800DF03C
  c->r[0]=0u+0x00000010u; // 800DF040
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF044
  c->r[0]=0u+0x0000100Bu; // 800DF048
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF04C
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800DF050
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF054
L_800DF058:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 800DF058
  if (crb(c,2)) { goto L_800DF07C; } // 800DF05C
  c->r[3]=0u+0xCC010000u; // 800DF060
  c->r[0]=0u+0x00000010u; // 800DF064
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF068
  c->r[0]=0u+0x0000100Cu; // 800DF06C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF070
  c->r[0]=R32(c->r[31]+0x000000B0u); // 800DF074
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF078
L_800DF07C:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 800DF07C
  if (crb(c,2)) { goto L_800DF0A0; } // 800DF080
  c->r[3]=0u+0xCC010000u; // 800DF084
  c->r[0]=0u+0x00000010u; // 800DF088
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF08C
  c->r[0]=0u+0x0000100Du; // 800DF090
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF094
  c->r[0]=R32(c->r[31]+0x000000B4u); // 800DF098
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF09C
L_800DF0A0:;
  c->r[7]=rotl(c->r[30],0)&0x01000000u; // 800DF0A0
  c->r[7]=(rotl(c->r[30],0)&0x0000F000u)|(c->r[7]&~0x0000F000u); cr0(c,c->r[7]); // 800DF0A4
  if (crb(c,2)) { goto L_800DF11C; } // 800DF0A8
  c->r[0]=rotl(c->r[7],0)&0x01000000u; cr0(c,c->r[0]); // 800DF0AC
  c->r[6]=0u+0x0000100Eu; // 800DF0B0
  if (crb(c,2)) { goto L_800DF0D8; } // 800DF0B4
  c->r[5]=R32(c->r[31]+0x00000254u); // 800DF0B8
  c->r[3]=0u+0xCC010000u; // 800DF0BC
  c->r[4]=0u+0x00000010u; // 800DF0C0
  c->r[0]=0u+0x00001009u; // 800DF0C4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF0C8
  c->r[4]=rotl(c->r[5],28)&0x00000007u; // 800DF0CC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF0D0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF0D4
L_800DF0D8:;
  c->r[5]=c->r[31]|c->r[31]; // 800DF0D8
  c->r[7]=rotl(c->r[7],20)&0x0000000Fu; // 800DF0DC
  c->r[4]=0u+0x00000010u; // 800DF0E0
  c->r[3]=0u+0xCC010000u; // 800DF0E4
  goto L_800DF114; // 800DF0E8
  c->r[0]=c->r[0]|0x00000000u; // 800DF0EC
L_800DF0F0:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 800DF0F0
  if (crb(c,2)) { goto L_800DF108; } // 800DF0F4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF0F8
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800DF0FC
  c->r[0]=R32(c->r[5]+0x000000B8u); // 800DF100
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF104
L_800DF108:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800DF108
  c->r[5]=c->r[5]+0x00000004u; // 800DF10C
  c->r[6]=c->r[6]+0x00000001u; // 800DF110
L_800DF114:;
  cmps(c,0,(int32_t)c->r[7],0); // 800DF114
  if (!crb(c,2)) { IRQCHK(c); goto L_800DF0F0; } // 800DF118
L_800DF11C:;
  c->r[8]=c->r[30]&0x02FF0000u; cr0(c,c->r[8]); // 800DF11C
  if (crb(c,2)) { goto L_800DF1A8; } // 800DF120
  c->r[0]=rotl(c->r[8],0)&0x02000000u; cr0(c,c->r[0]); // 800DF124
  c->r[6]=0u+0x00001040u; // 800DF128
  if (crb(c,2)) { goto L_800DF150; } // 800DF12C
  c->r[5]=R32(c->r[31]+0x00000254u); // 800DF130
  c->r[3]=0u+0xCC010000u; // 800DF134
  c->r[4]=0u+0x00000010u; // 800DF138
  c->r[0]=0u+0x0000103Fu; // 800DF13C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF140
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 800DF144
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF148
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF14C
L_800DF150:;
  c->r[7]=c->r[31]|c->r[31]; // 800DF150
  c->r[8]=rotl(c->r[8],16)&0x000000FFu; // 800DF154
  c->r[4]=0u+0x00000010u; // 800DF158
  c->r[3]=0u+0xCC010000u; // 800DF15C
  goto L_800DF1A0; // 800DF160
  c->r[0]=c->r[0]|0x00000000u; // 800DF164
L_800DF168:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 800DF168
  c->r[5]=c->r[6]+0x00000010u; // 800DF16C
  if (crb(c,2)) { goto L_800DF194; } // 800DF170
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF174
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800DF178
  c->r[0]=R32(c->r[7]+0x000000C8u); // 800DF17C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF180
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF184
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800DF188
  c->r[0]=R32(c->r[7]+0x000000E8u); // 800DF18C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF190
L_800DF194:;
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800DF194
  c->r[6]=c->r[6]+0x00000001u; // 800DF198
  c->r[7]=c->r[7]+0x00000004u; // 800DF19C
L_800DF1A0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800DF1A0
  if (!crb(c,2)) { IRQCHK(c); goto L_800DF168; } // 800DF1A4
L_800DF1A8:;
  c->r[0]=rotl(c->r[30],0)&0x04000000u; cr0(c,c->r[0]); // 800DF1A8
  if (crb(c,2)) { goto L_800DF1C0; } // 800DF1AC
  c->r[3]=0u+0x00000000u; // 800DF1B0
  c->lr=0x800DF1B8u; f_800E2780(c); // 800DF1B4
  c->r[3]=0u+0x00000005u; // 800DF1B8
  c->lr=0x800DF1C0u; f_800E2780(c); // 800DF1BC
L_800DF1C0:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 800DF1C0
  if (crb(c,2)) { goto L_800DF1CC; } // 800DF1C4
  c->lr=0x800DF1CCu; f_800E25A0(c); // 800DF1C8
L_800DF1CC:;
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 800DF1CC
  if (crb(c,2)) { goto L_800DF1D8; } // 800DF1D0
  c->lr=0x800DF1D8u; f_800E2300(c); // 800DF1D4
L_800DF1D8:;
  c->r[0]=0u+0x00000001u; // 800DF1D8
  W16(c->r[31]+0x00000002u,c->r[0]); // 800DF1DC
L_800DF1E0:;
  c->r[0]=0u+0x00000000u; // 800DF1E0
  W32(c->r[31]+0x000005FCu,c->r[0]); // 800DF1E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF1E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF1EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF1F0
  c->lr=c->r[0]; // 800DF1F4
  c->r[1]=c->r[1]+0x00000010u; // 800DF1F8
  return; // 800DF1FC
}

// GXBegin
void f_800DF200(Ctx* __restrict c) {
  trace_call(0x800DF200u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF200
  c->r[0]=c->lr; // 800DF204
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF208
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DF20C
  c->r[31]=R32(c->r[2]+0xFFFF9A80u); // 800DF210
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DF214
  c->r[30]=c->r[5]|c->r[5]; // 800DF218
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DF21C
  c->r[29]=c->r[4]|c->r[4]; // 800DF220
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DF224
  c->r[28]=c->r[3]|c->r[3]; // 800DF228
  c->r[0]=R32(c->r[31]+0x000005FCu); // 800DF22C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF230
  if (crb(c,2)) { goto L_800DF23C; } // 800DF234
  c->lr=0x800DF23Cu; f_800DEF80(c); // 800DF238
L_800DF23C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DF23C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF240
  if (!crb(c,2)) { goto L_800DF31C; } // 800DF244
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DF248
  c->r[3]=0u+0xCC010000u; // 800DF24C
  c->r[0]=0u+0x00000098u; // 800DF250
  c->r[6]=0u+0x00000000u; // 800DF254
  c->r[5]=R16(c->r[7]+0x00000004u); // 800DF258
  c->r[4]=R16(c->r[7]+0x00000006u); // 800DF25C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[5]); // 800DF260
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF264
  c->r[0]=R16(c->r[7]+0x00000004u); // 800DF268
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF26C
  if (crb(c,2)) { goto L_800DF314; } // 800DF270
  c->r[3]=c->r[5]+0x00000003u; // 800DF274
  c->r[7]=c->r[5]+0xFFFFFFE0u; // 800DF278
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800DF27C
  cmpu(c,0,c->r[0],0x00000008u); // 800DF280
  if (!crb(c,1)) { goto L_800DF2EC; } // 800DF284
  cmpu(c,0,c->r[3],0x00000003u); // 800DF288
  c->r[0]=0u+0x00000000u; // 800DF28C
  if (crb(c,0)) { goto L_800DF2A0; } // 800DF290
  cmpu(c,0,c->r[5],c->r[3]); // 800DF294
  if (crb(c,1)) { goto L_800DF2A0; } // 800DF298
  c->r[0]=0u+0x00000001u; // 800DF29C
L_800DF2A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF2A0
  if (crb(c,2)) { goto L_800DF2EC; } // 800DF2A4
  c->r[0]=c->r[7]+0x0000001Fu; // 800DF2A8
  c->r[4]=0u+0x00000000u; // 800DF2AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DF2B0
  c->r[3]=0u+0xCC010000u; // 800DF2B4
  c->ctr=c->r[0]; // 800DF2B8
  cmpu(c,0,c->r[7],0x00000000u); // 800DF2BC
  if (!crb(c,1)) { goto L_800DF2EC; } // 800DF2C0
L_800DF2C4:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2C4
  c->r[6]=c->r[6]+0x00000020u; // 800DF2C8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2CC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2D0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2D4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2D8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2DC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2E0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF2E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DF2C4; } // 800DF2E8
L_800DF2EC:;
  c->r[0]=c->r[5]+0x00000003u; // 800DF2EC
  c->r[4]=0u+0x00000000u; // 800DF2F0
  c->r[0]=c->r[0]-c->r[6]; // 800DF2F4
  c->r[3]=0u+0xCC010000u; // 800DF2F8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800DF2FC
  c->ctr=c->r[0]; // 800DF300
  cmpu(c,0,c->r[6],c->r[5]); // 800DF304
  if (!crb(c,0)) { goto L_800DF314; } // 800DF308
L_800DF30C:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800DF30C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DF30C; } // 800DF310
L_800DF314:;
  c->r[0]=0u+0x00000001u; // 800DF314
  W16(c->r[31]+0x00000002u,c->r[0]); // 800DF318
L_800DF31C:;
  c->r[3]=0u+0xCC010000u; // 800DF31C
  c->r[0]=c->r[29]|c->r[28]; // 800DF320
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DF324
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 800DF328
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF32C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DF330
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DF334
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DF338
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DF33C
  c->lr=c->r[0]; // 800DF340
  c->r[1]=c->r[1]+0x00000020u; // 800DF344
  return; // 800DF348
}

// GXSetLineWidth
void f_800DF350(Ctx* __restrict c) {
  trace_call(0x800DF350u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800DF350
  c->r[5]=0u+0xCC010000u; // 800DF354
  c->r[6]=0u+0x00000061u; // 800DF358
  c->r[0]=0u+0x00000000u; // 800DF35C
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 800DF360
  c->r[7]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800DF364
  c->r[7]=(rotl(c->r[4],16)&0x00070000u)|(c->r[7]&~0x00070000u); // 800DF368
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 800DF36C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DF370
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 800DF374
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800DF378
  W16(c->r[8]+0x00000002u,c->r[0]); // 800DF37C
  return; // 800DF380
}

// GXSetPointSize
void f_800DF390(Ctx* __restrict c) {
  trace_call(0x800DF390u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800DF390
  c->r[5]=0u+0xCC010000u; // 800DF394
  c->r[6]=0u+0x00000061u; // 800DF398
  c->r[0]=0u+0x00000000u; // 800DF39C
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 800DF3A0
  c->r[7]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800DF3A4
  c->r[7]=(rotl(c->r[4],19)&0x00380000u)|(c->r[7]&~0x00380000u); // 800DF3A8
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 800DF3AC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DF3B0
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 800DF3B4
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800DF3B8
  W16(c->r[8]+0x00000002u,c->r[0]); // 800DF3BC
  return; // 800DF3C0
}

// GXEnableTexOffsets
void f_800DF3D0(Ctx* __restrict c) {
  trace_call(0x800DF3D0u);
  c->r[9]=R32(c->r[2]+0xFFFF9A80u); // 800DF3D0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DF3D4
  c->r[6]=0u+0xCC010000u; // 800DF3D8
  c->r[3]=0u+0x00000061u; // 800DF3DC
  c->r[8]=c->r[9]+c->r[0]; // 800DF3E0
  c->r[0]=0u+0x00000000u; // 800DF3E4
  c->r[7]=R32(c->r[8]+0x00000108u); // 800DF3E8
  c->r[7]=(rotl(c->r[4],18)&0x00040000u)|(c->r[7]&~0x00040000u); // 800DF3EC
  c->r[7]=(rotl(c->r[5],19)&0x00080000u)|(c->r[7]&~0x00080000u); // 800DF3F0
  W32(c->r[8]+0x00000108u,c->r[7]); // 800DF3F4
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 800DF3F8
  c->r[3]=R32(c->r[8]+0x00000108u); // 800DF3FC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800DF400
  W16(c->r[9]+0x00000002u,c->r[0]); // 800DF404
  return; // 800DF408
}

// GXSetCullMode
void f_800DF410(Ctx* __restrict c) {
  trace_call(0x800DF410u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DF410
  c->r[5]=rotl(c->r[3],31)&0x00000001u; // 800DF414
  c->r[5]=(rotl(c->r[3],1)&0x00000002u)|(c->r[5]&~0x00000002u); // 800DF418
  c->r[0]=R32(c->r[4]+0x00000254u); // 800DF41C
  c->r[0]=(rotl(c->r[5],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 800DF420
  W32(c->r[4]+0x00000254u,c->r[0]); // 800DF424
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800DF428
  c->r[0]=c->r[0]|0x00000004u; // 800DF42C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800DF430
  return; // 800DF434
}

// GXSetCoPlanar
void f_800DF440(Ctx* __restrict c) {
  trace_call(0x800DF440u);
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DF440
  c->r[5]=0u+0xCC010000u; // 800DF444
  c->r[6]=0u+0x00000061u; // 800DF448
  c->r[4]=0u+0xFE080000u; // 800DF44C
  c->r[0]=R32(c->r[7]+0x00000254u); // 800DF450
  c->r[0]=(rotl(c->r[3],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 800DF454
  W32(c->r[7]+0x00000254u,c->r[0]); // 800DF458
  c->r[0]=0u+0x00000000u; // 800DF45C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DF460
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800DF464
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800DF468
  c->r[3]=R32(c->r[7]+0x00000254u); // 800DF46C
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800DF470
  W16(c->r[7]+0x00000002u,c->r[0]); // 800DF474
  return; // 800DF478
}

// __GXSetGenMode
void f_800DF480(Ctx* __restrict c) {
  trace_call(0x800DF480u);
  c->r[4]=0u+0xCC010000u; // 800DF480
  c->r[0]=0u+0x00000061u; // 800DF484
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800DF488
  c->r[0]=0u+0x00000000u; // 800DF48C
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DF490
  c->r[3]=R32(c->r[5]+0x00000254u); // 800DF494
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800DF498
  W16(c->r[5]+0x00000002u,c->r[0]); // 800DF49C
  return; // 800DF4A0
}

// GXAdjustForOverscan
void f_800DF4B0(Ctx* __restrict c) {
  trace_call(0x800DF4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF4B0
  c->r[0]=c->lr; // 800DF4B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DF4B8
  c->r[11]=c->r[1]+0x00000030u; // 800DF4BC
  c->lr=0x800DF4C4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF4C0
  cmpu(c,0,c->r[3],c->r[4]); // 800DF4C4
  c->r[0]=rotl(c->r[5],1)&0x0000FFFEu; // 800DF4C8
  c->r[7]=rotl(c->r[6],1)&0x0000FFFEu; // 800DF4CC
  if (crb(c,2)) { goto L_800DF54C; } // 800DF4D0
  c->r[22]=R32(c->r[3]+0x00000000u); // 800DF4D4
  c->r[23]=R32(c->r[3]+0x00000004u); // 800DF4D8
  c->r[24]=R32(c->r[3]+0x00000008u); // 800DF4DC
  c->r[25]=R32(c->r[3]+0x0000000Cu); // 800DF4E0
  c->r[26]=R32(c->r[3]+0x00000010u); // 800DF4E4
  c->r[27]=R32(c->r[3]+0x00000014u); // 800DF4E8
  c->r[28]=R32(c->r[3]+0x00000018u); // 800DF4EC
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800DF4F0
  c->r[30]=R32(c->r[3]+0x00000020u); // 800DF4F4
  c->r[31]=R32(c->r[3]+0x00000024u); // 800DF4F8
  c->r[12]=R32(c->r[3]+0x00000028u); // 800DF4FC
  c->r[11]=R32(c->r[3]+0x0000002Cu); // 800DF500
  c->r[10]=R32(c->r[3]+0x00000030u); // 800DF504
  c->r[9]=R32(c->r[3]+0x00000034u); // 800DF508
  c->r[8]=R32(c->r[3]+0x00000038u); // 800DF50C
  W32(c->r[4]+0x00000000u,c->r[22]); // 800DF510
  W32(c->r[4]+0x00000004u,c->r[23]); // 800DF514
  W32(c->r[4]+0x00000008u,c->r[24]); // 800DF518
  W32(c->r[4]+0x0000000Cu,c->r[25]); // 800DF51C
  W32(c->r[4]+0x00000010u,c->r[26]); // 800DF520
  W32(c->r[4]+0x00000014u,c->r[27]); // 800DF524
  W32(c->r[4]+0x00000018u,c->r[28]); // 800DF528
  W32(c->r[4]+0x0000001Cu,c->r[29]); // 800DF52C
  W32(c->r[4]+0x00000020u,c->r[30]); // 800DF530
  W32(c->r[4]+0x00000024u,c->r[31]); // 800DF534
  W32(c->r[4]+0x00000028u,c->r[12]); // 800DF538
  W32(c->r[4]+0x0000002Cu,c->r[11]); // 800DF53C
  W32(c->r[4]+0x00000030u,c->r[10]); // 800DF540
  W32(c->r[4]+0x00000034u,c->r[9]); // 800DF544
  W32(c->r[4]+0x00000038u,c->r[8]); // 800DF548
L_800DF54C:;
  c->r[22]=R16(c->r[3]+0x00000006u); // 800DF54C
  c->r[8]=R32(c->r[3]+0x00000014u); // 800DF550
  c->r[10]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[22]); // 800DF554
  c->r[11]=R16(c->r[3]+0x00000004u); // 800DF558
  c->r[9]=R16(c->r[3]+0x00000008u); // 800DF55C
  cmps(c,0,(int32_t)c->r[8],0); // 800DF560
  c->r[11]=c->r[11]-c->r[0]; // 800DF564
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DF568
  c->r[8]=divwu(c->r[10],c->r[9]); // 800DF56C
  W16(c->r[4]+0x00000004u,c->r[11]); // 800DF570
  c->r[10]=rotl(c->r[12],0)&0x00000003u; // 800DF574
  c->r[8]=c->r[22]-c->r[8]; // 800DF578
  W16(c->r[4]+0x00000006u,c->r[8]); // 800DF57C
  if (!crb(c,2)) { goto L_800DF59C; } // 800DF580
  cmps(c,0,(int32_t)c->r[10],0); // 800DF584
  if (!crb(c,2)) { goto L_800DF59C; } // 800DF588
  c->r[8]=rotl(c->r[7],31)&0x00007FFFu; // 800DF58C
  c->r[8]=c->r[9]-c->r[8]; // 800DF590
  W16(c->r[4]+0x00000008u,c->r[8]); // 800DF594
  goto L_800DF5A8; // 800DF598
L_800DF59C:;
  c->r[8]=R16(c->r[3]+0x00000008u); // 800DF59C
  c->r[8]=c->r[8]-c->r[7]; // 800DF5A0
  W16(c->r[4]+0x00000008u,c->r[8]); // 800DF5A4
L_800DF5A8:;
  c->r[8]=R16(c->r[3]+0x0000000Eu); // 800DF5A8
  cmpu(c,0,c->r[10],0x00000001u); // 800DF5AC
  c->r[0]=c->r[8]-c->r[0]; // 800DF5B0
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 800DF5B4
  if (!crb(c,2)) { goto L_800DF5D0; } // 800DF5B8
  c->r[0]=R16(c->r[3]+0x00000010u); // 800DF5BC
  c->r[7]=rotl(c->r[7],1)&0x0001FFFEu; // 800DF5C0
  c->r[0]=c->r[0]-c->r[7]; // 800DF5C4
  W16(c->r[4]+0x00000010u,c->r[0]); // 800DF5C8
  goto L_800DF5DC; // 800DF5CC
L_800DF5D0:;
  c->r[0]=R16(c->r[3]+0x00000010u); // 800DF5D0
  c->r[0]=c->r[0]-c->r[7]; // 800DF5D4
  W16(c->r[4]+0x00000010u,c->r[0]); // 800DF5D8
L_800DF5DC:;
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 800DF5DC
  c->r[11]=c->r[1]+0x00000030u; // 800DF5E0
  c->r[7]=R16(c->r[3]+0x0000000Au); // 800DF5E4
  c->r[0]=c->r[0]+c->r[6]; // 800DF5E8
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 800DF5EC
  c->r[3]=c->r[7]+c->r[5]; // 800DF5F0
  W16(c->r[4]+0x0000000Au,c->r[3]); // 800DF5F4
  c->lr=0x800DF5FCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF5F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DF5FC
  c->lr=c->r[0]; // 800DF600
  c->r[1]=c->r[1]+0x00000030u; // 800DF604
  return; // 800DF608
}

// GXSetDispCopySrc
void f_800DF610(Ctx* __restrict c) {
  trace_call(0x800DF610u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800DF610
  c->r[7]=0u+0x00000000u; // 800DF614
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 800DF618
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800DF61C
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 800DF620
  c->r[4]=0u+0x00000049u; // 800DF624
  c->r[3]=0u+0x00000000u; // 800DF628
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800DF62C
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800DF630
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800DF634
  W32(c->r[8]+0x00000230u,c->r[7]); // 800DF638
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 800DF63C
  c->r[0]=0u+0x0000004Au; // 800DF640
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DF644
  W32(c->r[8]+0x00000234u,c->r[3]); // 800DF648
  return; // 800DF64C
}

// GXSetTexCopySrc
void f_800DF650(Ctx* __restrict c) {
  trace_call(0x800DF650u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800DF650
  c->r[7]=0u+0x00000000u; // 800DF654
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 800DF658
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800DF65C
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 800DF660
  c->r[4]=0u+0x00000049u; // 800DF664
  c->r[3]=0u+0x00000000u; // 800DF668
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800DF66C
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800DF670
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800DF674
  W32(c->r[8]+0x00000240u,c->r[7]); // 800DF678
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 800DF67C
  c->r[0]=0u+0x0000004Au; // 800DF680
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DF684
  W32(c->r[8]+0x00000244u,c->r[3]); // 800DF688
  return; // 800DF68C
}

// GXSetDispCopyDst
void f_800DF690(Ctx* __restrict c) {
  trace_call(0x800DF690u);
  c->r[0]=rotl(c->r[3],1)&0x0000FFFEu; // 800DF690
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DF694
  c->r[0]=sraw(c,c->r[0],5); // 800DF698
  c->r[3]=0u+0x00000000u; // 800DF69C
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800DF6A0
  c->r[0]=0u+0x0000004Du; // 800DF6A4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DF6A8
  W32(c->r[4]+0x00000238u,c->r[3]); // 800DF6AC
  return; // 800DF6B0
}

// GXSetTexCopyDst
void f_800DF6C0(Ctx* __restrict c) {
  trace_call(0x800DF6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF6C0
  c->r[0]=c->lr; // 800DF6C4
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DF6C8
  cmps(c,0,(int32_t)c->r[5],19); // 800DF6CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DF6D0
  c->r[0]=0u+0x00000000u; // 800DF6D4
  c->r[9]=c->r[3]|c->r[3]; // 800DF6D8
  c->r[8]=c->r[4]|c->r[4]; // 800DF6DC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800DF6E0
  c->r[31]=rotl(c->r[5],0)&0x0000000Fu; // 800DF6E4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800DF6E8
  c->r[30]=c->r[6]|c->r[6]; // 800DF6EC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800DF6F0
  W32(c->r[1]+0x00000020u,c->r[28]); // 800DF6F4
  W8(c->r[7]+0x00000250u,c->r[0]); // 800DF6F8
  if (!crb(c,2)) { goto L_800DF704; } // 800DF6FC
  c->r[31]=0u+0x0000000Bu; // 800DF700
L_800DF704:;
  cmpu(c,0,c->r[5],0x00000003u); // 800DF704
  if (!crb(c,1)) { goto L_800DF714; } // 800DF708
  cmps(c,0,(int32_t)c->r[5],38); // 800DF70C
  if (!crb(c,2)) { goto L_800DF72C; } // 800DF710
L_800DF714:;
  c->r[0]=0u+0x00000003u; // 800DF714
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 800DF718
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 800DF71C
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 800DF720
  c->r[29]=c->r[7]+0x0000024Cu; // 800DF724
  goto L_800DF740; // 800DF728
L_800DF72C:;
  c->r[0]=0u+0x00000002u; // 800DF72C
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 800DF730
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 800DF734
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 800DF738
  c->r[29]=c->r[7]+0x0000024Cu; // 800DF73C
L_800DF740:;
  c->r[0]=rotl(c->r[5],28)&0x00000001u; // 800DF740
  W8(c->r[7]+0x00000250u,c->r[0]); // 800DF744
  c->r[3]=c->r[5]|c->r[5]; // 800DF748
  c->r[5]=c->r[8]|c->r[8]; // 800DF74C
  c->r[0]=R32(c->r[29]+0x00000000u); // 800DF750
  c->r[0]=(rotl(c->r[31],0)&0x00000008u)|(c->r[0]&~0x00000008u); // 800DF754
  c->r[28]=R32(c->r[2]+0xFFFF9A80u); // 800DF758
  c->r[4]=c->r[9]|c->r[9]; // 800DF75C
  W32(c->r[29]+0x00000000u,c->r[0]); // 800DF760
  c->r[6]=c->r[1]+0x00000010u; // 800DF764
  c->r[7]=c->r[1]+0x0000000Cu; // 800DF768
  c->r[8]=c->r[1]+0x00000008u; // 800DF76C
  c->lr=0x800DF774u; f_800E0330(c); // 800DF770
  c->r[0]=0u+0x00000000u; // 800DF774
  W32(c->r[28]+0x00000248u,c->r[0]); // 800DF778
  c->r[0]=0u+0x0000004Du; // 800DF77C
  c->r[3]=0u+0x00000000u; // 800DF780
  c->r[5]=R32(c->r[1]+0x00000010u); // 800DF784
  c->r[4]=R32(c->r[1]+0x00000008u); // 800DF788
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800DF78C
  c->r[3]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800DF790
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DF794
  W32(c->r[28]+0x00000248u,c->r[3]); // 800DF798
  c->r[0]=R32(c->r[29]+0x00000000u); // 800DF79C
  c->r[0]=(rotl(c->r[30],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800DF7A0
  c->r[0]=(rotl(c->r[31],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 800DF7A4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800DF7A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800DF7AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800DF7B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800DF7B4
  c->r[28]=R32(c->r[1]+0x00000020u); // 800DF7B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DF7BC
  c->lr=c->r[0]; // 800DF7C0
  c->r[1]=c->r[1]+0x00000030u; // 800DF7C4
  return; // 800DF7C8
}

// GXSetDispCopyFrame2Field
void f_800DF7D0(Ctx* __restrict c) {
  trace_call(0x800DF7D0u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DF7D0
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 800DF7D4
  c->r[0]=(rotl(c->r[3],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 800DF7D8
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 800DF7DC
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 800DF7E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFCFFFu; // 800DF7E4
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 800DF7E8
  return; // 800DF7EC
}

// GXSetCopyClamp
void f_800DF7F0(Ctx* __restrict c) {
  trace_call(0x800DF7F0u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DF7F0
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 800DF7F4
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DF7F8
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 800DF7FC
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 800DF800
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 800DF804
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800DF808
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 800DF80C
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 800DF810
  return; // 800DF814
}

// GXGetYScaleFactor
void f_800DF820(Ctx* __restrict c) {
  trace_call(0x800DF820u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF820
  c->r[0]=c->lr; // 800DF824
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[3]=RF64(ea);} // 800DF828
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DF82C
  c->r[0]=0u+0x43300000u; // 800DF830
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF834
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800DF838
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800DF83C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800DF840
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800DF844
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 800DF848
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 800DF84C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 800DF850
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 800DF854
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DF858
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800DF85C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DF860
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DF864
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 800DF868
  W32(c->r[1]+0x00000014u,c->r[3]); // 800DF86C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800DF870
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800DF874
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800DF878
  W32(c->r[1]+0x00000028u,c->r[30]); // 800DF87C
  c->f[28]=c->ps1[28]=S(c->f[2]/c->f[1]); // 800DF880
  W32(c->r[1]+0x00000024u,c->r[29]); // 800DF884
  c->r[29]=c->r[4]|c->r[4]; // 800DF888
  W32(c->r[1]+0x00000020u,c->r[28]); // 800DF88C
  c->r[28]=c->r[3]|c->r[3]; // 800DF890
  c->r[30]=c->r[29]|c->r[29]; // 800DF894
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 800DF898
  c->lr=0x800DF8A0u; f_80217784(c); // 800DF89C
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800DF8A0
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 800DF8A4
  c->r[31]=rotl(c->r[0],8)&0xFFFFFF00u; // 800DF8A8
  c->r[3]=divwu(c->r[31],c->r[4]); // 800DF8AC
  c->r[0]=c->r[4]+0xFFFFFF7Fu; // 800DF8B0
  cmpu(c,0,c->r[0],0x0000007Eu); // 800DF8B4
  c->r[3]=c->r[3]+0x00000001u; // 800DF8B8
  if (crb(c,1)) { goto L_800DF8E8; } // 800DF8BC
  goto L_800DF8CC; // 800DF8C0
  c->r[0]=c->r[0]|0x00000000u; // 800DF8C4
L_800DF8C8:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800DF8C8
L_800DF8CC:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DF8CC
  if (crb(c,2)) { IRQCHK(c); goto L_800DF8C8; } // 800DF8D0
  c->r[0]=divwu(c->r[28],c->r[4]); // 800DF8D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800DF8D8
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 800DF8DC
  if (!crb(c,2)) { goto L_800DF8E8; } // 800DF8E0
  c->r[3]=c->r[3]+0x00000001u; // 800DF8E4
L_800DF8E8:;
  cmpu(c,0,c->r[3],0x00000400u); // 800DF8E8
  if (!crb(c,1)) { goto L_800DF8F4; } // 800DF8EC
  c->r[3]=0u+0x00000400u; // 800DF8F0
L_800DF8F4:;
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[31]=RF64(ea);} // 800DF8F4
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DF8F8
  goto L_800DF974; // 800DF8FC
L_800DF900:;
  W32(c->r[1]+0x00000014u,c->r[28]); // 800DF900
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800DF904
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800DF908
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DF90C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DF910
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800DF914
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800DF918
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 800DF91C
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[28]); // 800DF920
  c->lr=0x800DF928u; f_80217784(c); // 800DF924
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 800DF928
  c->r[3]=divwu(c->r[31],c->r[4]); // 800DF92C
  c->r[0]=c->r[4]+0xFFFFFF7Fu; // 800DF930
  cmpu(c,0,c->r[0],0x0000007Eu); // 800DF934
  c->r[3]=c->r[3]+0x00000001u; // 800DF938
  if (crb(c,1)) { goto L_800DF968; } // 800DF93C
  goto L_800DF94C; // 800DF940
  c->r[0]=c->r[0]|0x00000000u; // 800DF944
L_800DF948:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800DF948
L_800DF94C:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DF94C
  if (crb(c,2)) { IRQCHK(c); goto L_800DF948; } // 800DF950
  c->r[0]=divwu(c->r[28],c->r[4]); // 800DF954
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800DF958
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 800DF95C
  if (!crb(c,2)) { goto L_800DF968; } // 800DF960
  c->r[3]=c->r[3]+0x00000001u; // 800DF964
L_800DF968:;
  cmpu(c,0,c->r[3],0x00000400u); // 800DF968
  if (!crb(c,1)) { goto L_800DF974; } // 800DF96C
  c->r[3]=0u+0x00000400u; // 800DF970
L_800DF974:;
  cmpu(c,0,c->r[3],c->r[29]); // 800DF974
  if (crb(c,1)) { IRQCHK(c); goto L_800DF900; } // 800DF978
  c->f[29]=c->f[28]; // 800DF97C
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[30]=RF64(ea);} // 800DF980
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DF984
  goto L_800DFA04; // 800DF988
L_800DF98C:;
  W32(c->r[1]+0x00000014u,c->r[28]); // 800DF98C
  c->r[30]=c->r[30]+0x00000001u; // 800DF990
  c->f[29]=c->f[28]; // 800DF994
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800DF998
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DF99C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DF9A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800DF9A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 800DF9A8
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 800DF9AC
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[28]); // 800DF9B0
  c->lr=0x800DF9B8u; f_80217784(c); // 800DF9B4
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 800DF9B8
  c->r[3]=divwu(c->r[31],c->r[4]); // 800DF9BC
  c->r[0]=c->r[4]+0xFFFFFF7Fu; // 800DF9C0
  cmpu(c,0,c->r[0],0x0000007Eu); // 800DF9C4
  c->r[3]=c->r[3]+0x00000001u; // 800DF9C8
  if (crb(c,1)) { goto L_800DF9F8; } // 800DF9CC
  goto L_800DF9DC; // 800DF9D0
  c->r[0]=c->r[0]|0x00000000u; // 800DF9D4
L_800DF9D8:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800DF9D8
L_800DF9DC:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DF9DC
  if (crb(c,2)) { IRQCHK(c); goto L_800DF9D8; } // 800DF9E0
  c->r[0]=divwu(c->r[28],c->r[4]); // 800DF9E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800DF9E8
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 800DF9EC
  if (!crb(c,2)) { goto L_800DF9F8; } // 800DF9F0
  c->r[3]=c->r[3]+0x00000001u; // 800DF9F4
L_800DF9F8:;
  cmpu(c,0,c->r[3],0x00000400u); // 800DF9F8
  if (!crb(c,1)) { goto L_800DFA04; } // 800DF9FC
  c->r[3]=0u+0x00000400u; // 800DFA00
L_800DFA04:;
  cmpu(c,0,c->r[3],c->r[29]); // 800DFA04
  if (crb(c,0)) { IRQCHK(c); goto L_800DF98C; } // 800DFA08
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800DFA0C
  c->f[1]=c->f[29]; // 800DFA10
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800DFA14
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800DFA18
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800DFA1C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 800DFA20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 800DFA24
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 800DFA28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 800DFA2C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800DFA30
  c->r[30]=R32(c->r[1]+0x00000028u); // 800DFA34
  c->r[29]=R32(c->r[1]+0x00000024u); // 800DFA38
  c->r[28]=R32(c->r[1]+0x00000020u); // 800DFA3C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DFA40
  c->lr=c->r[0]; // 800DFA44
  c->r[1]=c->r[1]+0x00000070u; // 800DFA48
  return; // 800DFA4C
}

// GXSetDispCopyYScale
void f_800DFA50(Ctx* __restrict c) {
  trace_call(0x800DFA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFA50
  c->r[0]=c->lr; // 800DFA54
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFA58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFA5C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800DFA60
  c->lr=0x800DFA68u; f_80217784(c); // 800DFA64
  c->r[4]=0u+0xCC010000u; // 800DFA68
  c->r[0]=0u+0x00000061u; // 800DFA6C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800DFA70
  c->r[6]=0u+0x00000000u; // 800DFA74
  c->r[5]=0u+0x0000004Eu; // 800DFA78
  c->r[8]=rotl(c->r[3],0)&0x000001FFu; // 800DFA7C
  c->r[6]=(rotl(c->r[3],0)&0x000001FFu)|(c->r[6]&~0x000001FFu); // 800DFA80
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DFA84
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800DFA88
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800DFA8C
  c->r[3]=0u+0x00000000u; // 800DFA90
  c->r[0]=c->r[8]+0xFFFFFF7Fu; // 800DFA94
  W16(c->r[7]+0x00000002u,c->r[3]); // 800DFA98
  c->r[4]=addc(c,~c->r[8],0x00000100u,1); // 800DFA9C
  c->r[3]=c->r[8]+0xFFFFFF00u; // 800DFAA0
  cmpu(c,0,c->r[0],0x0000007Eu); // 800DFAA4
  c->r[3]=c->r[4]|c->r[3]; // 800DFAA8
  c->r[0]=R32(c->r[7]+0x0000023Cu); // 800DFAAC
  c->r[0]=(rotl(c->r[3],11)&0x00000400u)|(c->r[0]&~0x00000400u); // 800DFAB0
  W32(c->r[7]+0x0000023Cu,c->r[0]); // 800DFAB4
  c->r[0]=R32(c->r[7]+0x00000234u); // 800DFAB8
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 800DFABC
  c->r[4]=c->r[3]+0x00000001u; // 800DFAC0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800DFAC4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800DFAC8
  c->r[3]=divwu(c->r[0],c->r[8]); // 800DFACC
  c->r[3]=c->r[3]+0x00000001u; // 800DFAD0
  if (crb(c,1)) { goto L_800DFB00; } // 800DFAD4
  goto L_800DFAE4; // 800DFAD8
  c->r[0]=c->r[0]|0x00000000u; // 800DFADC
L_800DFAE0:;
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800DFAE0
L_800DFAE4:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 800DFAE4
  if (crb(c,2)) { IRQCHK(c); goto L_800DFAE0; } // 800DFAE8
  c->r[0]=divwu(c->r[4],c->r[8]); // 800DFAEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 800DFAF0
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800DFAF4
  if (!crb(c,2)) { goto L_800DFB00; } // 800DFAF8
  c->r[3]=c->r[3]+0x00000001u; // 800DFAFC
L_800DFB00:;
  cmpu(c,0,c->r[3],0x00000400u); // 800DFB00
  if (!crb(c,1)) { goto L_800DFB0C; } // 800DFB04
  c->r[3]=0u+0x00000400u; // 800DFB08
L_800DFB0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFB0C
  c->lr=c->r[0]; // 800DFB10
  c->r[1]=c->r[1]+0x00000010u; // 800DFB14
  return; // 800DFB18
}

// GXSetCopyClear
void f_800DFB20(Ctx* __restrict c) {
  trace_call(0x800DFB20u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 800DFB20
  c->r[8]=0u+0x00000000u; // 800DFB24
  c->r[6]=R8(c->r[3]+0x00000003u); // 800DFB28
  c->r[9]=0u+0xCC010000u; // 800DFB2C
  c->r[10]=0u+0x00000061u; // 800DFB30
  c->r[8]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 800DFB34
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFB38
  c->r[0]=0u+0x0000004Fu; // 800DFB3C
  c->r[8]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[8]&~0x0000FF00u); // 800DFB40
  c->r[5]=0u+0x00000000u; // 800DFB44
  c->r[8]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800DFB48
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 800DFB4C
  c->r[5]=(rotl(c->r[4],0)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 800DFB50
  c->r[0]=0u+0x00000051u; // 800DFB54
  c->r[8]=R8(c->r[3]+0x00000002u); // 800DFB58
  c->r[7]=0u+0x00000000u; // 800DFB5C
  c->r[6]=R8(c->r[3]+0x00000001u); // 800DFB60
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800DFB64
  c->r[4]=0u+0x00000050u; // 800DFB68
  c->r[7]=(rotl(c->r[8],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800DFB6C
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800DFB70
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFB74
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800DFB78
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DFB7C
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 800DFB80
  c->r[0]=0u+0x00000000u; // 800DFB84
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFB88
  W32(c->r[9]+0xFFFF8000u,c->r[5]); // 800DFB8C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DFB90
  return; // 800DFB94
}

// GXSetCopyFilter
void f_800DFBA0(Ctx* __restrict c) {
  trace_call(0x800DFBA0u);
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBA0
  if (crb(c,2)) { goto L_800DFC9C; } // 800DFBA4
  c->r[8]=R8(c->r[4]+0x00000000u); // 800DFBA8
  c->r[0]=0u+0x00000000u; // 800DFBAC
  c->r[10]=R8(c->r[4]+0x00000001u); // 800DFBB0
  c->r[3]=0u+0x00000000u; // 800DFBB4
  c->r[0]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 800DFBB8
  c->r[7]=R8(c->r[4]+0x00000006u); // 800DFBBC
  c->r[0]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800DFBC0
  c->r[8]=R8(c->r[4]+0x0000000Cu); // 800DFBC4
  c->r[3]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[3]&~0x0000000Fu); // 800DFBC8
  c->r[7]=0u+0x00000000u; // 800DFBCC
  c->r[7]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 800DFBD0
  c->r[10]=R8(c->r[4]+0x0000000Du); // 800DFBD4
  c->r[11]=R8(c->r[4]+0x00000007u); // 800DFBD8
  c->r[8]=0u+0x00000000u; // 800DFBDC
  c->r[7]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 800DFBE0
  c->r[10]=R8(c->r[4]+0x00000002u); // 800DFBE4
  c->r[9]=R8(c->r[4]+0x00000012u); // 800DFBE8
  c->r[3]=(rotl(c->r[11],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800DFBEC
  c->r[0]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[0]&~0x00000F00u); // 800DFBF0
  c->r[10]=R8(c->r[4]+0x0000000Eu); // 800DFBF4
  c->r[8]=(rotl(c->r[9],0)&0x0000000Fu)|(c->r[8]&~0x0000000Fu); // 800DFBF8
  c->r[9]=R8(c->r[4]+0x00000013u); // 800DFBFC
  c->r[7]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 800DFC00
  c->r[10]=R8(c->r[4]+0x00000003u); // 800DFC04
  c->r[8]=(rotl(c->r[9],4)&0x000000F0u)|(c->r[8]&~0x000000F0u); // 800DFC08
  c->r[9]=R8(c->r[4]+0x00000014u); // 800DFC0C
  c->r[0]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 800DFC10
  c->r[10]=R8(c->r[4]+0x0000000Fu); // 800DFC14
  c->r[8]=(rotl(c->r[9],8)&0x00000F00u)|(c->r[8]&~0x00000F00u); // 800DFC18
  c->r[9]=R8(c->r[4]+0x00000015u); // 800DFC1C
  c->r[7]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 800DFC20
  c->r[10]=R8(c->r[4]+0x00000004u); // 800DFC24
  c->r[11]=R8(c->r[4]+0x00000008u); // 800DFC28
  c->r[8]=(rotl(c->r[9],12)&0x0000F000u)|(c->r[8]&~0x0000F000u); // 800DFC2C
  c->r[0]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[0]&~0x000F0000u); // 800DFC30
  c->r[10]=R8(c->r[4]+0x00000010u); // 800DFC34
  c->r[9]=R8(c->r[4]+0x00000016u); // 800DFC38
  c->r[3]=(rotl(c->r[11],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 800DFC3C
  c->r[11]=R8(c->r[4]+0x00000009u); // 800DFC40
  c->r[7]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[7]&~0x000F0000u); // 800DFC44
  c->r[10]=R8(c->r[4]+0x00000005u); // 800DFC48
  c->r[8]=(rotl(c->r[9],16)&0x000F0000u)|(c->r[8]&~0x000F0000u); // 800DFC4C
  c->r[9]=R8(c->r[4]+0x00000011u); // 800DFC50
  c->r[3]=(rotl(c->r[11],12)&0x0000F000u)|(c->r[3]&~0x0000F000u); // 800DFC54
  c->r[11]=R8(c->r[4]+0x0000000Au); // 800DFC58
  c->r[0]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 800DFC5C
  c->r[10]=R8(c->r[4]+0x0000000Bu); // 800DFC60
  c->r[7]=(rotl(c->r[9],20)&0x00F00000u)|(c->r[7]&~0x00F00000u); // 800DFC64
  c->r[4]=R8(c->r[4]+0x00000017u); // 800DFC68
  c->r[9]=0u+0x00000001u; // 800DFC6C
  c->r[3]=(rotl(c->r[11],16)&0x000F0000u)|(c->r[3]&~0x000F0000u); // 800DFC70
  c->r[3]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 800DFC74
  c->r[8]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 800DFC78
  c->r[0]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800DFC7C
  c->r[10]=0u+0x00000002u; // 800DFC80
  c->r[9]=0u+0x00000003u; // 800DFC84
  c->r[4]=0u+0x00000004u; // 800DFC88
  c->r[3]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DFC8C
  c->r[7]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800DFC90
  c->r[8]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800DFC94
  goto L_800DFCBC; // 800DFC98
L_800DFC9C:;
  c->r[8]=0u+0x01660000u; // 800DFC9C
  c->r[3]=0u+0x02660000u; // 800DFCA0
  c->r[7]=0u+0x03660000u; // 800DFCA4
  c->r[4]=0u+0x04660000u; // 800DFCA8
  c->r[0]=c->r[8]+0x00006666u; // 800DFCAC
  c->r[3]=c->r[3]+0x00006666u; // 800DFCB0
  c->r[7]=c->r[7]+0x00006666u; // 800DFCB4
  c->r[8]=c->r[4]+0x00006666u; // 800DFCB8
L_800DFCBC:;
  c->r[9]=0u+0xCC010000u; // 800DFCBC
  c->r[10]=0u+0x00000061u; // 800DFCC0
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFCC4
  cmps(c,0,(int32_t)c->r[5],0); // 800DFCC8
  c->r[4]=0u+0x00000053u; // 800DFCCC
  c->r[11]=0u+0x00000000u; // 800DFCD0
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 800DFCD4
  c->r[0]=0u+0x00000054u; // 800DFCD8
  c->r[12]=0u+0x00000000u; // 800DFCDC
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 800DFCE0
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFCE4
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 800DFCE8
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 800DFCEC
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFCF0
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 800DFCF4
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800DFCF8
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 800DFCFC
  if (crb(c,2)) { goto L_800DFD40; } // 800DFD00
  c->r[4]=R8(c->r[6]+0x00000000u); // 800DFD04
  c->r[0]=R8(c->r[6]+0x00000004u); // 800DFD08
  c->r[11]=(rotl(c->r[4],0)&0x0000003Fu)|(c->r[11]&~0x0000003Fu); // 800DFD0C
  c->r[3]=R8(c->r[6]+0x00000001u); // 800DFD10
  c->r[12]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 800DFD14
  c->r[5]=R8(c->r[6]+0x00000002u); // 800DFD18
  c->r[11]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[11]&~0x00000FC0u); // 800DFD1C
  c->r[3]=R8(c->r[6]+0x00000005u); // 800DFD20
  c->r[4]=R8(c->r[6]+0x00000003u); // 800DFD24
  c->r[11]=(rotl(c->r[5],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 800DFD28
  c->r[0]=R8(c->r[6]+0x00000006u); // 800DFD2C
  c->r[12]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[12]&~0x00000FC0u); // 800DFD30
  c->r[11]=(rotl(c->r[4],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 800DFD34
  c->r[12]=(rotl(c->r[0],12)&0x0003F000u)|(c->r[12]&~0x0003F000u); // 800DFD38
  goto L_800DFD5C; // 800DFD3C
L_800DFD40:;
  c->r[3]=0u+0x00000015u; // 800DFD40
  c->r[11]=rotl(c->r[11],0)&0xFFFFF000u; // 800DFD44
  c->r[12]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 800DFD48
  c->r[0]=0u+0x00000016u; // 800DFD4C
  c->r[11]=(rotl(c->r[3],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 800DFD50
  c->r[11]=(rotl(c->r[0],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 800DFD54
  c->r[12]=rotl(c->r[12],0)&0xFFFC003Fu; // 800DFD58
L_800DFD5C:;
  c->r[4]=0u+0xCC010000u; // 800DFD5C
  c->r[5]=0u+0x00000061u; // 800DFD60
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800DFD64
  c->r[0]=0u+0x00000000u; // 800DFD68
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800DFD6C
  W32(c->r[4]+0xFFFF8000u,c->r[11]); // 800DFD70
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800DFD74
  W32(c->r[4]+0xFFFF8000u,c->r[12]); // 800DFD78
  W16(c->r[3]+0x00000002u,c->r[0]); // 800DFD7C
  return; // 800DFD80
}

// GXSetDispCopyGamma
void f_800DFD90(Ctx* __restrict c) {
  trace_call(0x800DFD90u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800DFD90
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 800DFD94
  c->r[0]=(rotl(c->r[3],7)&0x00000180u)|(c->r[0]&~0x00000180u); // 800DFD98
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 800DFD9C
  return; // 800DFDA0
}

// GXCopyDisp
void f_800DFDB0(Ctx* __restrict c) {
  trace_call(0x800DFDB0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DFDB0
  if (crb(c,2)) { goto L_800DFDE4; } // 800DFDB4
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DFDB8
  c->r[5]=0u+0xCC010000u; // 800DFDBC
  c->r[0]=0u+0x00000061u; // 800DFDC0
  c->r[6]=R32(c->r[7]+0x00000228u); // 800DFDC4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFDC8
  c->r[6]=c->r[6]|0x0000000Fu; // 800DFDCC
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800DFDD0
  c->r[6]=R32(c->r[7]+0x00000220u); // 800DFDD4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFDD8
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 800DFDDC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFDE0
L_800DFDE4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DFDE4
  c->r[12]=0u+0x00000000u; // 800DFDE8
  if (!crb(c,2)) { goto L_800DFE08; } // 800DFDEC
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DFDF0
  c->r[0]=R32(c->r[5]+0x0000022Cu); // 800DFDF4
  c->r[10]=c->r[5]+0x0000022Cu; // 800DFDF8
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800DFDFC
  cmpu(c,0,c->r[0],0x00000003u); // 800DFE00
  if (!crb(c,2)) { goto L_800DFE38; } // 800DFE04
L_800DFE08:;
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800DFE08
  c->r[7]=R32(c->r[5]+0x0000022Cu); // 800DFE0C
  c->r[10]=c->r[5]+0x0000022Cu; // 800DFE10
  c->r[0]=rotl(c->r[7],26)&0x00000001u; // 800DFE14
  cmpu(c,0,c->r[0],0x00000001u); // 800DFE18
  if (!crb(c,2)) { goto L_800DFE38; } // 800DFE1C
  c->r[6]=0u+0xCC010000u; // 800DFE20
  c->r[0]=0u+0x00000061u; // 800DFE24
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800DFE28
  c->r[0]=rotl(c->r[7],0)&0xFFFFFFBFu; // 800DFE2C
  c->r[12]=0u+0x00000001u; // 800DFE30
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800DFE34
L_800DFE38:;
  c->r[8]=0u+0xCC010000u; // 800DFE38
  c->r[9]=0u+0x00000061u; // 800DFE3C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFE40
  c->r[6]=0u+0x00000000u; // 800DFE44
  c->r[11]=R32(c->r[2]+0xFFFF9A80u); // 800DFE48
  c->r[6]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 800DFE4C
  c->r[3]=0u+0x0000004Bu; // 800DFE50
  c->r[0]=0u+0x00000052u; // 800DFE54
  c->r[7]=R32(c->r[11]+0x00000230u); // 800DFE58
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800DFE5C
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 800DFE60
  cmps(c,0,(int32_t)c->r[4],0); // 800DFE64
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFE68
  c->r[3]=R32(c->r[11]+0x00000234u); // 800DFE6C
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800DFE70
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFE74
  c->r[3]=R32(c->r[11]+0x00000238u); // 800DFE78
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800DFE7C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFE80
  W32(c->r[8]+0xFFFF8000u,c->r[6]); // 800DFE84
  c->r[3]=R32(c->r[11]+0x0000023Cu); // 800DFE88
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 800DFE8C
  c->r[3]=c->r[3]|0x00004000u; // 800DFE90
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DFE94
  W32(c->r[11]+0x0000023Cu,c->r[3]); // 800DFE98
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFE9C
  c->r[0]=R32(c->r[11]+0x0000023Cu); // 800DFEA0
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 800DFEA4
  if (crb(c,2)) { goto L_800DFEC4; } // 800DFEA8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFEAC
  c->r[0]=R32(c->r[11]+0x00000228u); // 800DFEB0
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 800DFEB4
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800DFEB8
  c->r[0]=R32(c->r[11]+0x00000220u); // 800DFEBC
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 800DFEC0
L_800DFEC4:;
  cmps(c,0,(int32_t)c->r[12],0); // 800DFEC4
  if (crb(c,2)) { goto L_800DFEE0; } // 800DFEC8
  c->r[3]=0u+0xCC010000u; // 800DFECC
  c->r[0]=0u+0x00000061u; // 800DFED0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800DFED4
  c->r[0]=R32(c->r[10]+0x00000000u); // 800DFED8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800DFEDC
L_800DFEE0:;
  c->r[0]=0u+0x00000000u; // 800DFEE0
  W16(c->r[5]+0x00000002u,c->r[0]); // 800DFEE4
  return; // 800DFEE8
}

// GXCopyTex
void f_800DFEF0(Ctx* __restrict c) {
  trace_call(0x800DFEF0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DFEF0
  if (crb(c,2)) { goto L_800DFF24; } // 800DFEF4
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800DFEF8
  c->r[5]=0u+0xCC010000u; // 800DFEFC
  c->r[0]=0u+0x00000061u; // 800DFF00
  c->r[6]=R32(c->r[7]+0x00000228u); // 800DFF04
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFF08
  c->r[6]=c->r[6]|0x0000000Fu; // 800DFF0C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800DFF10
  c->r[6]=R32(c->r[7]+0x00000220u); // 800DFF14
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFF18
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 800DFF1C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFF20
L_800DFF24:;
  c->r[9]=R32(c->r[2]+0xFFFF9A80u); // 800DFF24
  c->r[11]=0u+0x00000000u; // 800DFF28
  c->r[0]=R8(c->r[9]+0x00000250u); // 800DFF2C
  c->r[6]=R32(c->r[9]+0x0000022Cu); // 800DFF30
  cmps(c,0,(int32_t)c->r[0],0); // 800DFF34
  if (crb(c,2)) { goto L_800DFF54; } // 800DFF38
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 800DFF3C
  cmpu(c,0,c->r[0],0x00000003u); // 800DFF40
  if (crb(c,2)) { goto L_800DFF54; } // 800DFF44
  c->r[0]=0u+0x00000003u; // 800DFF48
  c->r[11]=0u+0x00000001u; // 800DFF4C
  c->r[6]=(rotl(c->r[0],0)&0x00000007u)|(c->r[6]&~0x00000007u); // 800DFF50
L_800DFF54:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DFF54
  if (!crb(c,2)) { goto L_800DFF68; } // 800DFF58
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 800DFF5C
  cmpu(c,0,c->r[0],0x00000003u); // 800DFF60
  if (!crb(c,2)) { goto L_800DFF7C; } // 800DFF64
L_800DFF68:;
  c->r[0]=rotl(c->r[6],26)&0x00000001u; // 800DFF68
  cmpu(c,0,c->r[0],0x00000001u); // 800DFF6C
  if (!crb(c,2)) { goto L_800DFF7C; } // 800DFF70
  c->r[11]=0u+0x00000001u; // 800DFF74
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFBFu; // 800DFF78
L_800DFF7C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800DFF7C
  if (crb(c,2)) { goto L_800DFF94; } // 800DFF80
  c->r[5]=0u+0xCC010000u; // 800DFF84
  c->r[0]=0u+0x00000061u; // 800DFF88
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800DFF8C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800DFF90
L_800DFF94:;
  c->r[7]=0u+0xCC010000u; // 800DFF94
  c->r[8]=0u+0x00000061u; // 800DFF98
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DFF9C
  c->r[5]=0u+0x00000000u; // 800DFFA0
  c->r[10]=R32(c->r[2]+0xFFFF9A80u); // 800DFFA4
  c->r[5]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 800DFFA8
  c->r[3]=0u+0x0000004Bu; // 800DFFAC
  c->r[0]=0u+0x00000052u; // 800DFFB0
  c->r[6]=R32(c->r[10]+0x00000240u); // 800DFFB4
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800DFFB8
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800DFFBC
  cmps(c,0,(int32_t)c->r[4],0); // 800DFFC0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DFFC4
  c->r[3]=R32(c->r[10]+0x00000244u); // 800DFFC8
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800DFFCC
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DFFD0
  c->r[3]=R32(c->r[10]+0x00000248u); // 800DFFD4
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800DFFD8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DFFDC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 800DFFE0
  c->r[3]=R32(c->r[10]+0x0000024Cu); // 800DFFE4
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 800DFFE8
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 800DFFEC
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800DFFF0
  W32(c->r[10]+0x0000024Cu,c->r[3]); // 800DFFF4
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800DFFF8
  c->r[0]=R32(c->r[10]+0x0000024Cu); // 800DFFFC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800E0000
  if (crb(c,2)) { goto L_800E0020; } // 800E0004
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800E0008
  c->r[0]=R32(c->r[10]+0x00000228u); // 800E000C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800E0010
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800E0014
  c->r[0]=R32(c->r[10]+0x00000220u); // 800E0018
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800E001C
L_800E0020:;
  cmps(c,0,(int32_t)c->r[11],0); // 800E0020
  if (crb(c,2)) { goto L_800E003C; } // 800E0024
  c->r[3]=0u+0xCC010000u; // 800E0028
  c->r[0]=0u+0x00000061u; // 800E002C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0030
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 800E0034
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0038
L_800E003C:;
  c->r[0]=0u+0x00000000u; // 800E003C
  W16(c->r[9]+0x00000002u,c->r[0]); // 800E0040
  return; // 800E0044
}

// GXClearBoundingBox
void f_800E0050(Ctx* __restrict c) {
  trace_call(0x800E0050u);
  c->r[5]=0u+0xCC010000u; // 800E0050
  c->r[6]=0u+0x00000061u; // 800E0054
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800E0058
  c->r[3]=0u+0x55000000u; // 800E005C
  c->r[0]=c->r[3]+0x000003FFu; // 800E0060
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E0064
  c->r[3]=0u+0x56000000u; // 800E0068
  c->r[4]=c->r[3]+0x000003FFu; // 800E006C
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E0070
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800E0074
  c->r[0]=0u+0x00000000u; // 800E0078
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800E007C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E0080
  return; // 800E0084
}

// fn_800E0090
void f_800E0090(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800E0090
  if (crb(c,2)) { goto L_800E00C4; } // 800E0094
  cmps(c,0,(int32_t)c->r[3],1); // 800E0098
  if (crb(c,2)) { goto L_800E00DC; } // 800E009C
  cmps(c,0,(int32_t)c->r[3],2); // 800E00A0
  if (crb(c,2)) { goto L_800E00F4; } // 800E00A4
  cmps(c,0,(int32_t)c->r[3],3); // 800E00A8
  if (crb(c,2)) { goto L_800E010C; } // 800E00AC
  cmps(c,0,(int32_t)c->r[3],4); // 800E00B0
  if (crb(c,2)) { goto L_800E0124; } // 800E00B4
  cmps(c,0,(int32_t)c->r[3],5); // 800E00B8
  if (crb(c,2)) { goto L_800E0130; } // 800E00BC
  return; // 800E00C0
L_800E00C4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E00C4
  c->r[8]=0u+0x00000000u; // 800E00C8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E00CC
  c->r[7]=R32(c->r[3]+0x000000A8u); // 800E00D0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800E00D4
  goto L_800E0140; // 800E00D8
L_800E00DC:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E00DC
  c->r[8]=0u+0x00000001u; // 800E00E0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E00E4
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800E00E8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800E00EC
  goto L_800E0140; // 800E00F0
L_800E00F4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E00F4
  c->r[8]=0u+0x00000000u; // 800E00F8
  c->r[0]=R8(c->r[4]+0x00000003u); // 800E00FC
  c->r[7]=R32(c->r[3]+0x000000A8u); // 800E0100
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800E0104
  goto L_800E0140; // 800E0108
L_800E010C:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E010C
  c->r[8]=0u+0x00000001u; // 800E0110
  c->r[0]=R8(c->r[4]+0x00000003u); // 800E0114
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800E0118
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800E011C
  goto L_800E0140; // 800E0120
L_800E0124:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800E0124
  c->r[8]=0u+0x00000000u; // 800E0128
  goto L_800E0140; // 800E012C
L_800E0130:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800E0130
  c->r[8]=0u+0x00000001u; // 800E0134
  goto L_800E0140; // 800E0138
  return; // 800E013C
L_800E0140:;
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800E0140
  c->r[3]=0u+0x00000100u; // 800E0144
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800E0148
  c->r[5]=R32(c->r[6]+0x000005FCu); // 800E014C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 800E0150
  c->r[3]=c->r[6]+c->r[0]; // 800E0154
  c->r[0]=c->r[5]|c->r[4]; // 800E0158
  W32(c->r[6]+0x000005FCu,c->r[0]); // 800E015C
  W32(c->r[3]+0x000000A8u,c->r[7]); // 800E0160
  return; // 800E0164
}

// fn_800E0170
void f_800E0170(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800E0170
  if (crb(c,2)) { goto L_800E01A4; } // 800E0174
  cmps(c,0,(int32_t)c->r[3],1); // 800E0178
  if (crb(c,2)) { goto L_800E01BC; } // 800E017C
  cmps(c,0,(int32_t)c->r[3],2); // 800E0180
  if (crb(c,2)) { goto L_800E01D4; } // 800E0184
  cmps(c,0,(int32_t)c->r[3],3); // 800E0188
  if (crb(c,2)) { goto L_800E01EC; } // 800E018C
  cmps(c,0,(int32_t)c->r[3],4); // 800E0190
  if (crb(c,2)) { goto L_800E0204; } // 800E0194
  cmps(c,0,(int32_t)c->r[3],5); // 800E0198
  if (crb(c,2)) { goto L_800E0210; } // 800E019C
  return; // 800E01A0
L_800E01A4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E01A4
  c->r[8]=0u+0x00000000u; // 800E01A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E01AC
  c->r[7]=R32(c->r[3]+0x000000B0u); // 800E01B0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800E01B4
  goto L_800E0220; // 800E01B8
L_800E01BC:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E01BC
  c->r[8]=0u+0x00000001u; // 800E01C0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E01C4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 800E01C8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800E01CC
  goto L_800E0220; // 800E01D0
L_800E01D4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E01D4
  c->r[8]=0u+0x00000000u; // 800E01D8
  c->r[0]=R8(c->r[4]+0x00000003u); // 800E01DC
  c->r[7]=R32(c->r[3]+0x000000B0u); // 800E01E0
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800E01E4
  goto L_800E0220; // 800E01E8
L_800E01EC:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E01EC
  c->r[8]=0u+0x00000001u; // 800E01F0
  c->r[0]=R8(c->r[4]+0x00000003u); // 800E01F4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 800E01F8
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800E01FC
  goto L_800E0220; // 800E0200
L_800E0204:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800E0204
  c->r[8]=0u+0x00000000u; // 800E0208
  goto L_800E0220; // 800E020C
L_800E0210:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800E0210
  c->r[8]=0u+0x00000001u; // 800E0214
  goto L_800E0220; // 800E0218
  return; // 800E021C
L_800E0220:;
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800E0220
  c->r[3]=0u+0x00000400u; // 800E0224
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800E0228
  c->r[5]=R32(c->r[6]+0x000005FCu); // 800E022C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 800E0230
  c->r[3]=c->r[6]+c->r[0]; // 800E0234
  c->r[0]=c->r[5]|c->r[4]; // 800E0238
  W32(c->r[6]+0x000005FCu,c->r[0]); // 800E023C
  W32(c->r[3]+0x000000B0u,c->r[7]); // 800E0240
  return; // 800E0244
}

// GXSetNumChans
void f_800E0250(Ctx* __restrict c) {
  trace_call(0x800E0250u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E0250
  c->r[0]=R32(c->r[4]+0x00000254u); // 800E0254
  c->r[0]=(rotl(c->r[3],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 800E0258
  W32(c->r[4]+0x00000254u,c->r[0]); // 800E025C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800E0260
  c->r[0]=c->r[0]|0x01000000u; // 800E0264
  c->r[0]=c->r[0]|0x00000004u; // 800E0268
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800E026C
  return; // 800E0270
}

// fn_800E0280
void f_800E0280(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[9],0); // 800E0280
  c->r[10]=0u+0x00000000u; // 800E0284
  c->r[10]=(rotl(c->r[4],1)&0x00000002u)|(c->r[10]&~0x00000002u); // 800E0288
  c->r[11]=rotl(c->r[3],0)&0x00000003u; // 800E028C
  c->r[10]=(rotl(c->r[6],0)&0x00000001u)|(c->r[10]&~0x00000001u); // 800E0290
  c->r[10]=(rotl(c->r[5],6)&0x00000040u)|(c->r[10]&~0x00000040u); // 800E0294
  if (!crb(c,2)) { goto L_800E02A0; } // 800E0298
  c->r[8]=0u+0x00000000u; // 800E029C
L_800E02A0:;
  c->r[5]=addc(c,~c->r[9],0x00000002u,1); // 800E02A0
  c->r[4]=c->r[9]+0xFFFFFFFEu; // 800E02A4
  c->r[4]=c->r[5]|c->r[4]; // 800E02A8
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E02AC
  c->r[0]=0u-c->r[9]; // 800E02B0
  c->r[10]=(rotl(c->r[8],7)&0x00000180u)|(c->r[10]&~0x00000180u); // 800E02B4
  c->r[10]=(rotl(c->r[4],10)&0x00000200u)|(c->r[10]&~0x00000200u); // 800E02B8
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800E02BC
  c->r[0]=c->r[0]|c->r[9]; // 800E02C0
  cmps(c,0,(int32_t)c->r[3],4); // 800E02C4
  c->r[10]=(rotl(c->r[0],11)&0x00000400u)|(c->r[10]&~0x00000400u); // 800E02C8
  c->r[4]=c->r[5]+c->r[4]; // 800E02CC
  c->r[10]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[10]&~0x0000003Cu); // 800E02D0
  c->r[0]=0u+0x00001000u; // 800E02D4
  c->r[10]=(rotl(c->r[7],7)&0x00007800u)|(c->r[10]&~0x00007800u); // 800E02D8
  W32(c->r[4]+0x000000B8u,c->r[10]); // 800E02DC
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 800E02E0
  c->r[4]=R32(c->r[5]+0x000005FCu); // 800E02E4
  c->r[0]=c->r[4]|c->r[0]; // 800E02E8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800E02EC
  if (!crb(c,2)) { goto L_800E0308; } // 800E02F0
  W32(c->r[5]+0x000000C0u,c->r[10]); // 800E02F4
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800E02F8
  c->r[0]=c->r[0]|0x00005000u; // 800E02FC
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800E0300
  return; // 800E0304
L_800E0308:;
  cmps(c,0,(int32_t)c->r[3],5); // 800E0308
  if (!crb(c,2)) return; // 800E030C
  W32(c->r[5]+0x000000C4u,c->r[10]); // 800E0310
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800E0314
  c->r[0]=c->r[0]|0x0000A000u; // 800E0318
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800E031C
  return; // 800E0320
}

// __GetImageTileCount
void f_800E0330(Ctx* __restrict c) {
  trace_call(0x800E0330u);
  cmpu(c,0,c->r[3],0x0000003Cu); // 800E0330
  if (crb(c,1)) { goto L_800E0374; } // 800E0334
  c->r[9]=0u+0x802B0000u; // 800E0338
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E033C
  c->r[9]=c->r[9]+0xFFFFF3E0u; // 800E0340
  c->r[9]=R32(c->r[9]+c->r[0]); // 800E0344
  c->ctr=c->r[9]; // 800E0348
  if (true) { switch (c->ctr) { case 0x800E0350u: goto L_800E0350; case 0x800E035Cu: goto L_800E035C; case 0x800E0368u: goto L_800E0368; case 0x800E0374u: goto L_800E0374; default: break; } dispatch(c,c->ctr); return; } // 800E034C
L_800E0350:;
  c->r[11]=0u+0x00000003u; // 800E0350
  c->r[12]=0u+0x00000003u; // 800E0354
  goto L_800E037C; // 800E0358
L_800E035C:;
  c->r[11]=0u+0x00000003u; // 800E035C
  c->r[12]=0u+0x00000002u; // 800E0360
  goto L_800E037C; // 800E0364
L_800E0368:;
  c->r[11]=0u+0x00000002u; // 800E0368
  c->r[12]=0u+0x00000002u; // 800E036C
  goto L_800E037C; // 800E0370
L_800E0374:;
  c->r[12]=0u+0x00000000u; // 800E0374
  c->r[11]=0u+0x00000000u; // 800E0378
L_800E037C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E037C
  if (!crb(c,2)) { goto L_800E0388; } // 800E0380
  c->r[4]=0u+0x00000001u; // 800E0384
L_800E0388:;
  cmps(c,0,(int32_t)c->r[5],0); // 800E0388
  if (!crb(c,2)) { goto L_800E0394; } // 800E038C
  c->r[5]=0u+0x00000001u; // 800E0390
L_800E0394:;
  c->r[10]=0u+0x00000001u; // 800E0394
  cmps(c,0,(int32_t)c->r[3],6); // 800E0398
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[10]<<((c->r[11])&31)); // 800E039C
  c->r[9]=0u+0x00000000u; // 800E03A0
  c->r[4]=c->r[4]+c->r[0]; // 800E03A4
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[10]<<((c->r[12])&31)); // 800E03A8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800E03AC
  c->r[10]=sraw(c,c->r[4],(c->r[11])&63); // 800E03B0
  W32(c->r[6]+0x00000000u,c->r[10]); // 800E03B4
  c->r[4]=c->r[5]+c->r[0]; // 800E03B8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E03BC
  c->r[0]=sraw(c,c->r[0],(c->r[12])&63); // 800E03C0
  W32(c->r[7]+0x00000000u,c->r[0]); // 800E03C4
  if (crb(c,2)) { goto L_800E03D4; } // 800E03C8
  cmps(c,0,(int32_t)c->r[3],22); // 800E03CC
  if (!crb(c,2)) { goto L_800E03D8; } // 800E03D0
L_800E03D4:;
  c->r[9]=0u+0x00000001u; // 800E03D4
L_800E03D8:;
  c->r[0]=0u-c->r[9]; // 800E03D8
  c->r[0]=c->r[0]|c->r[9]; // 800E03DC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800E03E0
  c->r[0]=c->r[3]+0x00000001u; // 800E03E4
  W32(c->r[8]+0x00000000u,c->r[0]); // 800E03E8
  return; // 800E03EC
}

// GXInitTexObj
void f_800E03F0(Ctx* __restrict c) {
  trace_call(0x800E03F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E03F0
  c->r[0]=c->lr; // 800E03F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E03F8
  c->r[11]=c->r[1]+0x00000040u; // 800E03FC
  c->lr=0x800E0404u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0400
  c->r[27]=c->r[4]|c->r[4]; // 800E0404
  c->r[28]=c->r[5]|c->r[5]; // 800E0408
  c->r[31]=c->r[3]|c->r[3]; // 800E040C
  c->r[29]=c->r[6]|c->r[6]; // 800E0410
  c->r[30]=c->r[7]|c->r[7]; // 800E0414
  c->r[24]=c->r[8]|c->r[8]; // 800E0418
  c->r[25]=c->r[9]|c->r[9]; // 800E041C
  c->r[26]=c->r[10]|c->r[10]; // 800E0420
  c->r[4]=0u+0x00000000u; // 800E0424
  c->r[5]=0u+0x00000020u; // 800E0428
  c->lr=0x800E0430u; f_800046B4(c); // 800E042C
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E0430
  c->r[0]=(rotl(c->r[24],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800E0434
  c->r[0]=(rotl(c->r[25],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 800E0438
  cmps(c,0,(int32_t)c->r[26],0); // 800E043C
  c->r[4]=c->r[0]|0x00000010u; // 800E0440
  W32(c->r[31]+0x00000000u,c->r[4]); // 800E0444
  if (crb(c,2)) { goto L_800E04D8; } // 800E0448
  c->r[0]=c->r[30]+0xFFFFFFF8u; // 800E044C
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 800E0450
  cmpu(c,0,c->r[0],0x00000002u); // 800E0454
  c->r[0]=c->r[3]|0x00000001u; // 800E0458
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 800E045C
  if (crb(c,1)) { goto L_800E0474; } // 800E0460
  c->r[0]=0u+0x00000005u; // 800E0464
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 800E0468
  W32(c->r[31]+0x00000000u,c->r[4]); // 800E046C
  goto L_800E0480; // 800E0470
L_800E0474:;
  c->r[0]=0u+0x00000006u; // 800E0474
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 800E0478
  W32(c->r[31]+0x00000000u,c->r[4]); // 800E047C
L_800E0480:;
  cmpu(c,0,c->r[28],c->r[29]); // 800E0480
  if (!crb(c,1)) { goto L_800E0494; } // 800E0484
  c->r[0]=cntlz(c->r[28]); // 800E0488
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 800E048C
  goto L_800E049C; // 800E0490
L_800E0494:;
  c->r[0]=cntlz(c->r[29]); // 800E0494
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 800E0498
L_800E049C:;
  c->r[0]=0u+0x43300000u; // 800E049C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800E04A0
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[2]=RF64(ea);} // 800E04A4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800E04A8
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E04AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800E04B0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800E04B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800E04B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800E04BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E04C0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800E04C4
  c->r[3]=R32(c->r[1]+0x00000014u); // 800E04C8
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800E04CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E04D0
  goto L_800E04E4; // 800E04D4
L_800E04D8:;
  c->r[0]=0u+0x00000004u; // 800E04D8
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 800E04DC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800E04E0
L_800E04E4:;
  c->r[5]=rotl(c->r[30],0)&0x0000000Fu; // 800E04E4
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800E04E8
  c->r[4]=R32(c->r[31]+0x00000008u); // 800E04EC
  c->r[4]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 800E04F0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800E04F4
  c->r[3]=c->r[29]+0xFFFFFFFFu; // 800E04F8
  c->r[0]=(rotl(c->r[27],27)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 800E04FC
  cmpu(c,0,c->r[5],0x0000000Eu); // 800E0500
  c->r[4]=(rotl(c->r[3],10)&0x000FFC00u)|(c->r[4]&~0x000FFC00u); // 800E0504
  W32(c->r[31]+0x00000014u,c->r[30]); // 800E0508
  c->r[4]=(rotl(c->r[30],20)&0x00F00000u)|(c->r[4]&~0x00F00000u); // 800E050C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E0510
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E0514
  if (crb(c,1)) { goto L_800E0598; } // 800E0518
  c->r[3]=0u+0x802B0000u; // 800E051C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800E0520
  c->r[3]=c->r[3]+0xFFFFF4D4u; // 800E0524
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E0528
  c->ctr=c->r[3]; // 800E052C
  if (true) { switch (c->ctr) { case 0x800E0534u: goto L_800E0534; case 0x800E0548u: goto L_800E0548; case 0x800E055Cu: goto L_800E055C; case 0x800E0570u: goto L_800E0570; case 0x800E0584u: goto L_800E0584; case 0x800E0598u: goto L_800E0598; default: break; } dispatch(c,c->ctr); return; } // 800E0530
L_800E0534:;
  c->r[0]=0u+0x00000001u; // 800E0534
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800E0538
  c->r[6]=0u+0x00000003u; // 800E053C
  c->r[7]=0u+0x00000003u; // 800E0540
  goto L_800E05A8; // 800E0544
L_800E0548:;
  c->r[0]=0u+0x00000002u; // 800E0548
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800E054C
  c->r[6]=0u+0x00000003u; // 800E0550
  c->r[7]=0u+0x00000002u; // 800E0554
  goto L_800E05A8; // 800E0558
L_800E055C:;
  c->r[0]=0u+0x00000002u; // 800E055C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800E0560
  c->r[6]=0u+0x00000002u; // 800E0564
  c->r[7]=0u+0x00000002u; // 800E0568
  goto L_800E05A8; // 800E056C
L_800E0570:;
  c->r[0]=0u+0x00000003u; // 800E0570
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800E0574
  c->r[6]=0u+0x00000002u; // 800E0578
  c->r[7]=0u+0x00000002u; // 800E057C
  goto L_800E05A8; // 800E0580
L_800E0584:;
  c->r[0]=0u+0x00000000u; // 800E0584
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800E0588
  c->r[6]=0u+0x00000003u; // 800E058C
  c->r[7]=0u+0x00000003u; // 800E0590
  goto L_800E05A8; // 800E0594
L_800E0598:;
  c->r[0]=0u+0x00000002u; // 800E0598
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800E059C
  c->r[6]=0u+0x00000002u; // 800E05A0
  c->r[7]=0u+0x00000002u; // 800E05A4
L_800E05A8:;
  c->r[5]=0u+0x00000001u; // 800E05A8
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 800E05AC
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 800E05B0
  c->r[11]=c->r[1]+0x00000040u; // 800E05B4
  c->r[4]=c->r[28]+c->r[3]; // 800E05B8
  c->r[0]=c->r[0]|0x00000002u; // 800E05BC
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 800E05C0
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 800E05C4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800E05C8
  c->r[3]=c->r[29]+c->r[3]; // 800E05CC
  c->r[4]=sraw(c,c->r[4],(c->r[6])&63); // 800E05D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E05D4
  c->r[0]=sraw(c,c->r[0],(c->r[7])&63); // 800E05D8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800E05DC
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800E05E0
  W16(c->r[31]+0x0000001Cu,c->r[0]); // 800E05E4
  c->lr=0x800E05ECu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E05E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E05EC
  c->lr=c->r[0]; // 800E05F0
  c->r[1]=c->r[1]+0x00000040u; // 800E05F4
  return; // 800E05F8
}

// GXInitTexObjCI
void f_800E0600(Ctx* __restrict c) {
  trace_call(0x800E0600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0600
  c->r[0]=c->lr; // 800E0604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E060C
  c->r[31]=R32(c->r[1]+0x00000018u); // 800E0610
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0614
  c->r[30]=c->r[3]|c->r[3]; // 800E0618
  c->lr=0x800E0620u; f_800E03F0(c); // 800E061C
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 800E0620
  W32(c->r[30]+0x00000018u,c->r[31]); // 800E0624
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800E0628
  W8(c->r[30]+0x0000001Fu,c->r[0]); // 800E062C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0630
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0638
  c->lr=c->r[0]; // 800E063C
  c->r[1]=c->r[1]+0x00000010u; // 800E0640
  return; // 800E0644
}

// GXInitTexObjLOD
void f_800E0650(Ctx* __restrict c) {
  trace_call(0x800E0650u);
  {uint32_t ea=c->r[2]+0xFFFF9AC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0650
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0654
  fcmp(c,0,c->f[3],c->f[0]); // 800E0658
  if (!crb(c,0)) { goto L_800E0668; } // 800E065C
  c->f[3]=c->f[0]; // 800E0660
  goto L_800E067C; // 800E0664
L_800E0668:;
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0668
  fcmp(c,0,c->f[3],c->f[0]); // 800E066C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E0670
  if (!crb(c,2)) { goto L_800E067C; } // 800E0674
  {uint32_t ea=c->r[2]+0xFFFF9ACCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E0678
L_800E067C:;
  {uint32_t ea=c->r[2]+0xFFFF9AD4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E067C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800E0680
  c->r[9]=cntlz(c->r[0]); // 800E0684
  {uint32_t ea=c->r[2]+0xFFFF9AD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0688
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800E068C
  c->r[0]=cntlz(c->r[7]); // 800E0690
  c->r[10]=R32(c->r[3]+0x00000000u); // 800E0694
  c->r[5]=c->r[13]+0xFFFF9018u; // 800E0698
  fcmp(c,0,c->f[1],c->f[0]); // 800E069C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800E06A0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[3]);} // 800E06A4
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 800E06A8
  c->r[10]=(rotl(c->r[7],9)&0x0001FE00u)|(c->r[10]&~0x0001FE00u); // 800E06AC
  c->r[10]=(rotl(c->r[9],31)&0x00000010u)|(c->r[10]&~0x00000010u); // 800E06B0
  W32(c->r[3]+0x00000000u,c->r[10]); // 800E06B4
  c->r[4]=R8(c->r[5]+c->r[4]); // 800E06B8
  c->r[10]=(rotl(c->r[4],5)&0x000000E0u)|(c->r[10]&~0x000000E0u); // 800E06BC
  c->r[10]=(rotl(c->r[0],3)&0x00000100u)|(c->r[10]&~0x00000100u); // 800E06C0
  c->r[0]=rotl(c->r[10],0)&0xFFF9FFFFu; // 800E06C4
  c->r[0]=(rotl(c->r[8],19)&0x00180000u)|(c->r[0]&~0x00180000u); // 800E06C8
  c->r[0]=(rotl(c->r[6],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800E06CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E06D0
  if (!crb(c,0)) { goto L_800E06E0; } // 800E06D4
  c->f[1]=c->f[0]; // 800E06D8
  goto L_800E06F0; // 800E06DC
L_800E06E0:;
  {uint32_t ea=c->r[2]+0xFFFF9ADCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E06E0
  fcmp(c,0,c->f[1],c->f[0]); // 800E06E4
  if (!crb(c,1)) { goto L_800E06F0; } // 800E06E8
  c->f[1]=c->f[0]; // 800E06EC
L_800E06F0:;
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E06F0
  {uint32_t ea=c->r[2]+0xFFFF9AD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E06F4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800E06F8
  fcmp(c,0,c->f[2],c->f[0]); // 800E06FC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800E0700
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800E0704
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800E0708
  if (!crb(c,0)) { goto L_800E0718; } // 800E070C
  c->f[2]=c->f[0]; // 800E0710
  goto L_800E0728; // 800E0714
L_800E0718:;
  {uint32_t ea=c->r[2]+0xFFFF9ADCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0718
  fcmp(c,0,c->f[2],c->f[0]); // 800E071C
  if (!crb(c,1)) { goto L_800E0728; } // 800E0720
  c->f[2]=c->f[0]; // 800E0724
L_800E0728:;
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0728
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E072C
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800E0730
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800E0734
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E0738
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800E073C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800E0740
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800E0744
  W32(c->r[3]+0x00000004u,c->r[0]); // 800E0748
  c->r[1]=c->r[1]+0x00000010u; // 800E074C
  return; // 800E0750
}

// GXInitTexObjWrapMode
void f_800E0760(Ctx* __restrict c) {
  trace_call(0x800E0760u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E0760
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800E0764
  c->r[0]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 800E0768
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E076C
  return; // 800E0770
}

// GXInitTexObjTlut
void f_800E0780(Ctx* __restrict c) {
  trace_call(0x800E0780u);
  W32(c->r[3]+0x00000018u,c->r[4]); // 800E0780
  return; // 800E0784
}

// GXInitTexObjFilter
void f_800E0790(Ctx* __restrict c) {
  trace_call(0x800E0790u);
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800E0790
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E0794
  c->r[0]=cntlz(c->r[0]); // 800E0798
  c->r[5]=c->r[13]+0xFFFF9018u; // 800E079C
  c->r[6]=(rotl(c->r[0],31)&0x00000010u)|(c->r[6]&~0x00000010u); // 800E07A0
  W32(c->r[3]+0x00000000u,c->r[6]); // 800E07A4
  c->r[0]=R8(c->r[5]+c->r[4]); // 800E07A8
  c->r[6]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[6]&~0x000000E0u); // 800E07AC
  W32(c->r[3]+0x00000000u,c->r[6]); // 800E07B0
  return; // 800E07B4
}

// GXInitTexObjUserData
void f_800E07C0(Ctx* __restrict c) {
  trace_call(0x800E07C0u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 800E07C0
  return; // 800E07C4
}

