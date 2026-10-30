#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800BBB10
void f_800BBB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBB10
  c->r[0]=c->lr; // 800BBB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BBB18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BBB1C
  c->r[31]=c->r[3]|c->r[3]; // 800BBB20
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BBB24
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BBB28
  W32(c->r[1]+0x00000020u,c->r[28]); // 800BBB2C
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 800BBB30
  cmps(c,0,(int32_t)c->r[0],0); // 800BBB34
  if (!crb(c,2)) { goto L_800BBC08; } // 800BBB38
  c->r[4]=R32(c->r[3]+0x00000028u); // 800BBB3C
  c->r[3]=0u+0x802F0000u; // 800BBB40
  c->r[0]=0u+0x00000001u; // 800BBB44
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BBB48
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BBB4C
  c->r[3]=c->r[3]+0xFFFF92F8u; // 800BBB50
  c->r[30]=R32(c->r[3]+c->r[0]); // 800BBB54
  c->r[3]=c->r[30]+0x00002338u; // 800BBB58
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BBB5C
  c->lr=0x800BBB64u; f_800CCD50(c); // 800BBB60
  c->r[28]=c->r[30]+0x00000010u; // 800BBB64
  c->r[3]=0u+0x0000000Cu; // 800BBB68
  c->lr=0x800BBB70u; f_800B98F0(c); // 800BBB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800BBB70
  c->r[29]=c->r[3]|c->r[3]; // 800BBB74
  if (!crb(c,2)) { goto L_800BBB9C; } // 800BBB78
  c->r[3]=0u+0x802D0000u; // 800BBB7C
  c->r[4]=0u+0x802A0000u; // 800BBB80
  c->r[3]=c->r[3]+0x000050B0u; // 800BBB84
  c->r[3]=c->r[3]+0x000000A0u; // 800BBB88
  c->r[4]=c->r[4]+0xFFFFEF28u; // 800BBB8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBB90
  c->lr=0x800BBB98u; f_8021E5C0(c); // 800BBB94
  c->lr=0x800BBB9Cu; f_802247E0(c); // 800BBB98
L_800BBB9C:;
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 800BBB9C
  c->r[0]=c->r[30]+0x00000010u; // 800BBBA0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BBBA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBBA8
  if (crb(c,2)) { goto L_800BBBB4; } // 800BBBAC
  W32(c->r[3]+0x00000000u,c->r[31]); // 800BBBB0
L_800BBBB4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800BBBB4
  c->r[4]=0u+0x00000000u; // 800BBBB8
  c->r[5]=R32(c->r[1]+0x00000014u); // 800BBBBC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800BBBC0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BBBC4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800BBBC8
  W32(c->r[28]+0x00000000u,c->r[5]); // 800BBBCC
  W32(c->r[5]+0x00000004u,c->r[28]); // 800BBBD0
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BBBD4
  W32(c->r[1]+0x00000014u,c->r[4]); // 800BBBD8
  c->r[0]=c->r[3]+0x00000001u; // 800BBBDC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800BBBE0
  goto L_800BBBEC; // 800BBBE4
  c->lr=0x800BBBECu; f_800B9AD0(c); // 800BBBE8
L_800BBBEC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800BBBEC
  cmps(c,0,(int32_t)c->r[0],0); // 800BBBF0
  if (crb(c,2)) { goto L_800BBC00; } // 800BBBF4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800BBBF8
  c->lr=0x800BBC00u; f_800CCE30(c); // 800BBBFC
L_800BBC00:;
  c->r[0]=0u+0x00000001u; // 800BBC00
  W8(c->r[31]+0x0000002Cu,c->r[0]); // 800BBC04
L_800BBC08:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BBC08
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BBC0C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BBC10
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BBC14
  c->r[28]=R32(c->r[1]+0x00000020u); // 800BBC18
  c->lr=c->r[0]; // 800BBC1C
  c->r[1]=c->r[1]+0x00000030u; // 800BBC20
  return; // 800BBC24
}

// fn_800BBC30
void f_800BBC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC30
  c->r[0]=c->lr; // 800BBC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBC38
  c->r[11]=c->r[1]+0x00000020u; // 800BBC3C
  c->lr=0x800BBC44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BBC40
  cmps(c,0,(int32_t)c->r[3],0); // 800BBC44
  c->r[27]=c->r[3]|c->r[3]; // 800BBC48
  c->r[28]=c->r[4]|c->r[4]; // 800BBC4C
  if (crb(c,2)) { goto L_800BBCD0; } // 800BBC50
  c->r[31]=addc(c,c->r[3],0x0000000Cu,0); cr0(c,c->r[31]); // 800BBC54
  if (crb(c,2)) { goto L_800BBCB4; } // 800BBC58
  if (crb(c,2)) { goto L_800BBCB4; } // 800BBC5C
  if (crb(c,2)) { goto L_800BBCB4; } // 800BBC60
  c->r[29]=R32(c->r[31]+0x00000008u); // 800BBC64
  c->r[30]=c->r[31]+0x00000004u; // 800BBC68
  cmpu(c,0,c->r[29],c->r[30]); // 800BBC6C
  if (crb(c,2)) { goto L_800BBCB4; } // 800BBC70
  c->r[4]=R32(c->r[30]+0x00000000u); // 800BBC74
  c->r[3]=R32(c->r[29]+0x00000000u); // 800BBC78
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BBC7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BBC80
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BBC84
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BBC88
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BBC8C
  goto L_800BBCAC; // 800BBC90
L_800BBC94:;
  c->r[3]=c->r[29]|c->r[29]; // 800BBC94
  c->r[29]=R32(c->r[29]+0x00000004u); // 800BBC98
  c->lr=0x800BBCA0u; f_800B9AD0(c); // 800BBC9C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BBCA0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBCA4
  W32(c->r[31]+0x00000000u,c->r[0]); // 800BBCA8
L_800BBCAC:;
  cmpu(c,0,c->r[29],c->r[30]); // 800BBCAC
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBC94; } // 800BBCB0
L_800BBCB4:;
  c->r[3]=c->r[27]|c->r[27]; // 800BBCB4
  c->r[4]=0u+0x00000000u; // 800BBCB8
  c->lr=0x800BBCC0u; f_800BADE0(c); // 800BBCBC
  cmps(c,0,(int32_t)c->r[28],0); // 800BBCC0
  if (!crb(c,1)) { goto L_800BBCD0; } // 800BBCC4
  c->r[3]=c->r[27]|c->r[27]; // 800BBCC8
  c->lr=0x800BBCD0u; f_800B9AD0(c); // 800BBCCC
L_800BBCD0:;
  c->r[11]=c->r[1]+0x00000020u; // 800BBCD0
  c->r[3]=c->r[27]|c->r[27]; // 800BBCD4
  c->lr=0x800BBCDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BBCD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBCDC
  c->lr=c->r[0]; // 800BBCE0
  c->r[1]=c->r[1]+0x00000020u; // 800BBCE4
  return; // 800BBCE8
}

// fn_800BBCF0
void f_800BBCF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF99E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBCF0
  c->r[4]=0u+0x802A0000u; // 800BBCF4
  c->r[0]=0u+0x00000000u; // 800BBCF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BBCFC
  c->r[4]=c->r[4]+0xFFFFF004u; // 800BBD00
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BBD04
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BBD08
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BBD0C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BBD10
  W8(c->r[3]+0x00000028u,c->r[0]); // 800BBD14
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BBD18
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800BBD1C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800BBD20
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BBD24
  return; // 800BBD28
}

// fn_800BBD30
void f_800BBD30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBD30
  c->r[0]=c->lr; // 800BBD34
  cmps(c,0,(int32_t)c->r[3],0); // 800BBD38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBD3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBD40
  c->r[31]=c->r[4]|c->r[4]; // 800BBD44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BBD48
  c->r[30]=c->r[3]|c->r[3]; // 800BBD4C
  if (crb(c,2)) { goto L_800BBD94; } // 800BBD50
  c->r[0]=R32(c->r[3]+0x00000024u); // 800BBD54
  c->r[4]=0u+0x802A0000u; // 800BBD58
  c->r[4]=c->r[4]+0xFFFFF004u; // 800BBD5C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BBD60
  cmps(c,0,(int32_t)c->r[0],0); // 800BBD64
  if (crb(c,2)) { goto L_800BBD84; } // 800BBD68
  c->r[3]=c->r[0]|c->r[0]; // 800BBD6C
  c->r[4]=0u+0x00000001u; // 800BBD70
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BBD74
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BBD78
  c->ctr=c->r[12]; // 800BBD7C
  if (true) { c->lr=0x800BBD84u; dispatch(c,c->ctr); } // 800BBD80
L_800BBD84:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBD84
  if (!crb(c,1)) { goto L_800BBD94; } // 800BBD88
  c->r[3]=c->r[30]|c->r[30]; // 800BBD8C
  c->lr=0x800BBD94u; f_800B9AD0(c); // 800BBD90
L_800BBD94:;
  c->r[3]=c->r[30]|c->r[30]; // 800BBD94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBD98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BBD9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBDA0
  c->lr=c->r[0]; // 800BBDA4
  c->r[1]=c->r[1]+0x00000010u; // 800BBDA8
  return; // 800BBDAC
}

// fn_800BBDB0
void f_800BBDB0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000004u); // 800BBDB0
  c->r[0]=0u+0x0000000Au; // 800BBDB4
  W32(c->r[3]+0x00000008u,c->r[5]); // 800BBDB8
  c->r[5]=c->r[4]+0x0000006Cu; // 800BBDBC
  c->r[6]=c->r[3]+0x0000009Cu; // 800BBDC0
  c->r[7]=R32(c->r[4]+0x00000000u); // 800BBDC4
  W32(c->r[3]+0x00000004u,c->r[7]); // 800BBDC8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBDCC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BBDD0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBDD4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800BBDD8
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBDDC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BBDE0
  {uint32_t ea=c->r[4]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBDE4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800BBDE8
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBDEC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800BBDF0
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBDF4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BBDF8
  c->r[7]=R32(c->r[4]+0x00000010u); // 800BBDFC
  W32(c->r[3]+0x00000040u,c->r[7]); // 800BBE00
  c->r[7]=R32(c->r[4]+0x00000014u); // 800BBE04
  W32(c->r[3]+0x00000044u,c->r[7]); // 800BBE08
  c->r[7]=R32(c->r[4]+0x00000018u); // 800BBE0C
  W32(c->r[3]+0x00000048u,c->r[7]); // 800BBE10
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 800BBE14
  c->r[7]=R32(c->r[4]+0x00000020u); // 800BBE18
  W32(c->r[3]+0x00000050u,c->r[7]); // 800BBE1C
  W32(c->r[3]+0x0000004Cu,c->r[8]); // 800BBE20
  c->r[7]=R32(c->r[4]+0x00000024u); // 800BBE24
  W32(c->r[3]+0x00000054u,c->r[7]); // 800BBE28
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE2C
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800BBE30
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE34
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BBE38
  c->r[8]=R32(c->r[4]+0x00000030u); // 800BBE3C
  c->r[7]=R32(c->r[4]+0x00000034u); // 800BBE40
  W32(c->r[3]+0x00000064u,c->r[7]); // 800BBE44
  W32(c->r[3]+0x00000060u,c->r[8]); // 800BBE48
  c->r[8]=R32(c->r[4]+0x00000038u); // 800BBE4C
  c->r[7]=R32(c->r[4]+0x0000003Cu); // 800BBE50
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 800BBE54
  W32(c->r[3]+0x00000068u,c->r[8]); // 800BBE58
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE5C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 800BBE60
  c->r[8]=R32(c->r[4]+0x00000044u); // 800BBE64
  c->r[7]=R32(c->r[4]+0x00000048u); // 800BBE68
  W32(c->r[3]+0x00000078u,c->r[7]); // 800BBE6C
  W32(c->r[3]+0x00000074u,c->r[8]); // 800BBE70
  c->r[8]=R32(c->r[4]+0x0000004Cu); // 800BBE74
  c->r[7]=R32(c->r[4]+0x00000050u); // 800BBE78
  W32(c->r[3]+0x00000080u,c->r[7]); // 800BBE7C
  W32(c->r[3]+0x0000007Cu,c->r[8]); // 800BBE80
  {uint32_t ea=c->r[4]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE84
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 800BBE88
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE8C
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 800BBE90
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE94
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BBE98
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE9C
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 800BBEA0
  c->r[8]=R32(c->r[4]+0x00000064u); // 800BBEA4
  c->r[7]=R32(c->r[4]+0x00000068u); // 800BBEA8
  W32(c->r[3]+0x00000098u,c->r[7]); // 800BBEAC
  W32(c->r[3]+0x00000094u,c->r[8]); // 800BBEB0
  c->r[7]=R8(c->r[4]+0x0000006Cu); // 800BBEB4
  W8(c->r[3]+0x0000009Cu,c->r[7]); // 800BBEB8
  c->r[7]=R8(c->r[4]+0x0000006Du); // 800BBEBC
  W8(c->r[3]+0x0000009Du,c->r[7]); // 800BBEC0
  c->r[7]=R8(c->r[4]+0x0000006Eu); // 800BBEC4
  W8(c->r[3]+0x0000009Eu,c->r[7]); // 800BBEC8
  c->r[4]=R8(c->r[4]+0x0000006Fu); // 800BBECC
  W8(c->r[3]+0x0000009Fu,c->r[4]); // 800BBED0
  c->ctr=c->r[0]; // 800BBED4
L_800BBED8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BBED8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BBEDC
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BBEE0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BBEE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BBED8; } // 800BBEE8
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800BBEEC
  cmps(c,0,(int32_t)c->r[6],0); // 800BBEF0
  if (crb(c,2)) return; // 800BBEF4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800BBEF8
  c->r[0]=c->r[5]&c->r[6]; cr0(c,c->r[0]); // 800BBEFC
  if (crb(c,2)) { goto L_800BBF28; } // 800BBF00
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BBF04
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BBF08
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BBF0C
  if (!crb(c,2)) return; // 800BBF10
  c->r[4]=R32(c->r[3]+0x00000014u); // 800BBF14
  c->r[0]=c->r[5]&~c->r[6]; // 800BBF18
  W32(c->r[3]+0x00000018u,c->r[4]); // 800BBF1C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BBF20
  return; // 800BBF24
L_800BBF28:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800BBF28
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BBF2C
  return; // 800BBF30
}

// fn_800BBF40
void f_800BBF40(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BBF40
  W8(c->r[3]+0x000002D8u,c->r[0]); // 800BBF44
  return; // 800BBF48
}

// fn_800BBF50
void f_800BBF50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBF50
  c->r[0]=c->lr; // 800BBF54
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800BBF58
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800BBF5C
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800BBF60
  W32(c->r[1]+0x000000C4u,c->r[29]); // 800BBF64
  c->r[0]=R8(c->r[3]+0x000002D8u); // 800BBF68
  cmps(c,0,(int32_t)c->r[0],0); // 800BBF6C
  if (!crb(c,2)) { goto L_800BC0AC; } // 800BBF70
  c->r[0]=0u+0x00000001u; // 800BBF74
  W8(c->r[3]+0x000002D8u,c->r[0]); // 800BBF78
  c->r[30]=c->r[3]|c->r[3]; // 800BBF7C
  c->r[31]=0u+0x00000000u; // 800BBF80
  c->r[29]=0u+0x0000000Au; // 800BBF84
L_800BBF88:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBF88
  c->r[4]=c->r[1]+0x00000008u; // 800BBF8C
  c->r[5]=0u+0x00000001u; // 800BBF90
  c->lr=0x800BBF98u; f_8010E990(c); // 800BBF94
  cmps(c,0,(int32_t)c->r[3],1); // 800BBF98
  if (!crb(c,2)) { goto L_800BC09C; } // 800BBF9C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800BBFA0
  c->r[5]=c->r[30]+0x00000074u; // 800BBFA4
  W32(c->r[30]+0x00000018u,c->r[0]); // 800BBFA8
  c->r[4]=c->r[1]+0x00000064u; // 800BBFAC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800BBFB0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800BBFB4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800BBFB8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BBFBC
  c->r[0]=R32(c->r[1]+0x00000018u); // 800BBFC0
  c->r[3]=R32(c->r[1]+0x00000014u); // 800BBFC4
  W32(c->r[30]+0x00000024u,c->r[3]); // 800BBFC8
  W32(c->r[30]+0x00000028u,c->r[0]); // 800BBFCC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BBFD0
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800BBFD4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBFD8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800BBFDC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBFE0
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800BBFE4
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BBFE8
  c->r[3]=R32(c->r[1]+0x00000028u); // 800BBFEC
  W32(c->r[30]+0x00000038u,c->r[3]); // 800BBFF0
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800BBFF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BBFF8
  c->r[3]=R32(c->r[1]+0x00000030u); // 800BBFFC
  W32(c->r[30]+0x00000040u,c->r[3]); // 800BC000
  W32(c->r[30]+0x00000044u,c->r[0]); // 800BC004
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC008
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800BC00C
  c->r[0]=R32(c->r[1]+0x00000040u); // 800BC010
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800BC014
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800BC018
  W32(c->r[30]+0x00000050u,c->r[0]); // 800BC01C
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BC020
  c->r[3]=R32(c->r[1]+0x00000044u); // 800BC024
  W32(c->r[30]+0x00000054u,c->r[3]); // 800BC028
  W32(c->r[30]+0x00000058u,c->r[0]); // 800BC02C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC030
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BC034
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC038
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 800BC03C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC040
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800BC044
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC048
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 800BC04C
  c->r[0]=R32(c->r[1]+0x00000060u); // 800BC050
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 800BC054
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800BC058
  W32(c->r[30]+0x00000070u,c->r[0]); // 800BC05C
  c->r[0]=R8(c->r[1]+0x00000064u); // 800BC060
  W8(c->r[30]+0x00000074u,c->r[0]); // 800BC064
  c->r[0]=R8(c->r[1]+0x00000065u); // 800BC068
  W8(c->r[30]+0x00000075u,c->r[0]); // 800BC06C
  c->r[0]=R8(c->r[1]+0x00000066u); // 800BC070
  W8(c->r[30]+0x00000076u,c->r[0]); // 800BC074
  c->r[0]=R8(c->r[1]+0x00000067u); // 800BC078
  W8(c->r[30]+0x00000077u,c->r[0]); // 800BC07C
  c->ctr=c->r[29]; // 800BC080
  c->r[0]=c->r[0]|0x00000000u; // 800BC084
L_800BC088:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BC088
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BC08C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BC090
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BC094
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC088; } // 800BC098
L_800BC09C:;
  c->r[31]=c->r[31]+0x00000001u; // 800BC09C
  c->r[30]=c->r[30]+0x000000B0u; // 800BC0A0
  cmpu(c,0,c->r[31],0x00000004u); // 800BC0A4
  if (crb(c,0)) { IRQCHK(c); goto L_800BBF88; } // 800BC0A8
L_800BC0AC:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800BC0AC
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800BC0B0
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800BC0B4
  c->r[29]=R32(c->r[1]+0x000000C4u); // 800BC0B8
  c->lr=c->r[0]; // 800BC0BC
  c->r[1]=c->r[1]+0x000000D0u; // 800BC0C0
  return; // 800BC0C4
}

// fn_800BC0D0
void f_800BC0D0(Ctx* __restrict c) {
  f_800B9860(c); return; // 800BC0D0
}

// fn_800BC0E0
void f_800BC0E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC0E0
  c->r[0]=c->lr; // 800BC0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC0E8
  c->lr=0x800BC0F0u; f_800B98E0(c); // 800BC0EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC0F0
  c->r[3]=0u+0x00000001u; // 800BC0F4
  c->lr=c->r[0]; // 800BC0F8
  c->r[1]=c->r[1]+0x00000010u; // 800BC0FC
  return; // 800BC100
}

// fn_800BC110
void f_800BC110(Ctx* __restrict c) {
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BC110
  c->r[0]=0u+0x0000000Au; // 800BC114
  W32(c->r[4]+0x00000008u,c->r[3]); // 800BC118
  c->r[7]=c->r[4]+0x0000009Cu; // 800BC11C
  c->r[6]=c->r[5]+0x0000006Cu; // 800BC120
  c->r[3]=R32(c->r[5]+0x00000000u); // 800BC124
  W32(c->r[4]+0x00000004u,c->r[3]); // 800BC128
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC12C
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BC130
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC134
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 800BC138
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC13C
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BC140
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC144
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800BC148
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC14C
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800BC150
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC154
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800BC158
  c->r[3]=R32(c->r[5]+0x00000010u); // 800BC15C
  W32(c->r[4]+0x00000040u,c->r[3]); // 800BC160
  c->r[3]=R32(c->r[5]+0x00000014u); // 800BC164
  W32(c->r[4]+0x00000044u,c->r[3]); // 800BC168
  c->r[3]=R32(c->r[5]+0x00000018u); // 800BC16C
  W32(c->r[4]+0x00000048u,c->r[3]); // 800BC170
  c->r[8]=R32(c->r[5]+0x0000001Cu); // 800BC174
  c->r[3]=R32(c->r[5]+0x00000020u); // 800BC178
  W32(c->r[4]+0x00000050u,c->r[3]); // 800BC17C
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 800BC180
  c->r[3]=R32(c->r[5]+0x00000024u); // 800BC184
  W32(c->r[4]+0x00000054u,c->r[3]); // 800BC188
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC18C
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 800BC190
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC194
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BC198
  c->r[8]=R32(c->r[5]+0x00000030u); // 800BC19C
  c->r[3]=R32(c->r[5]+0x00000034u); // 800BC1A0
  W32(c->r[4]+0x00000064u,c->r[3]); // 800BC1A4
  W32(c->r[4]+0x00000060u,c->r[8]); // 800BC1A8
  c->r[8]=R32(c->r[5]+0x00000038u); // 800BC1AC
  c->r[3]=R32(c->r[5]+0x0000003Cu); // 800BC1B0
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 800BC1B4
  W32(c->r[4]+0x00000068u,c->r[8]); // 800BC1B8
  {uint32_t ea=c->r[5]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1BC
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[0]);} // 800BC1C0
  c->r[8]=R32(c->r[5]+0x00000044u); // 800BC1C4
  c->r[3]=R32(c->r[5]+0x00000048u); // 800BC1C8
  W32(c->r[4]+0x00000078u,c->r[3]); // 800BC1CC
  W32(c->r[4]+0x00000074u,c->r[8]); // 800BC1D0
  c->r[8]=R32(c->r[5]+0x0000004Cu); // 800BC1D4
  c->r[3]=R32(c->r[5]+0x00000050u); // 800BC1D8
  W32(c->r[4]+0x00000080u,c->r[3]); // 800BC1DC
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 800BC1E0
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1E4
  {uint32_t ea=c->r[4]+0x00000084u; WF32(ea,c->f[0]);} // 800BC1E8
  {uint32_t ea=c->r[5]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1EC
  {uint32_t ea=c->r[4]+0x00000088u; WF32(ea,c->f[0]);} // 800BC1F0
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1F4
  {uint32_t ea=c->r[4]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BC1F8
  {uint32_t ea=c->r[5]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC1FC
  {uint32_t ea=c->r[4]+0x00000090u; WF32(ea,c->f[0]);} // 800BC200
  c->r[8]=R32(c->r[5]+0x00000064u); // 800BC204
  c->r[3]=R32(c->r[5]+0x00000068u); // 800BC208
  W32(c->r[4]+0x00000098u,c->r[3]); // 800BC20C
  W32(c->r[4]+0x00000094u,c->r[8]); // 800BC210
  c->r[3]=R8(c->r[5]+0x0000006Cu); // 800BC214
  W8(c->r[4]+0x0000009Cu,c->r[3]); // 800BC218
  c->r[3]=R8(c->r[5]+0x0000006Du); // 800BC21C
  W8(c->r[4]+0x0000009Du,c->r[3]); // 800BC220
  c->r[3]=R8(c->r[5]+0x0000006Eu); // 800BC224
  W8(c->r[4]+0x0000009Eu,c->r[3]); // 800BC228
  c->r[3]=R8(c->r[5]+0x0000006Fu); // 800BC22C
  W8(c->r[4]+0x0000009Fu,c->r[3]); // 800BC230
  c->ctr=c->r[0]; // 800BC234
L_800BC238:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 800BC238
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800BC23C
  W32(c->r[7]+0x00000004u,c->r[3]); // 800BC240
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800BC244
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC238; } // 800BC248
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 800BC24C
  cmps(c,0,(int32_t)c->r[6],0); // 800BC250
  if (crb(c,2)) return; // 800BC254
  c->r[5]=R32(c->r[4]+0x00000004u); // 800BC258
  c->r[0]=c->r[5]&c->r[6]; cr0(c,c->r[0]); // 800BC25C
  if (crb(c,2)) { goto L_800BC288; } // 800BC260
  c->r[0]=R32(c->r[4]+0x00000018u); // 800BC264
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BC268
  W32(c->r[4]+0x00000018u,c->r[0]); // 800BC26C
  if (!crb(c,2)) return; // 800BC270
  c->r[3]=R32(c->r[4]+0x00000014u); // 800BC274
  c->r[0]=c->r[5]&~c->r[6]; // 800BC278
  W32(c->r[4]+0x00000018u,c->r[3]); // 800BC27C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800BC280
  return; // 800BC284
L_800BC288:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 800BC288
  W32(c->r[4]+0x00000018u,c->r[0]); // 800BC28C
  return; // 800BC290
}

// fn_800BC2A0
void f_800BC2A0(Ctx* __restrict c) {
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800BC2A0
  return; // 800BC2A4
}

// fn_800BC2B0
void f_800BC2B0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800BC2B0
  return; // 800BC2B4
}

// fn_800BC2C0
void f_800BC2C0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800BC2C0
  return; // 800BC2C4
}

// fn_800BC2D0
void f_800BC2D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC2D0
  c->r[0]=c->lr; // 800BC2D4
  c->r[5]=0u+0x80240000u; // 800BC2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC2DC
  c->r[5]=c->r[5]+0xFFFFC11Cu; // 800BC2E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BC2E4
  c->r[31]=0u+0x00000000u; // 800BC2E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BC2EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BC2F0
  c->r[29]=c->r[3]|c->r[3]; // 800BC2F4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800BC2F8
  c->r[5]=0u+0x00000000u; // 800BC2FC
  W32(c->r[3]+0x00000008u,c->r[31]); // 800BC300
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 800BC304
  c->r[3]=c->r[3]+0x00000010u; // 800BC308
  c->lr=0x800BC310u; f_800BAAE0(c); // 800BC30C
  c->r[3]=0u+0x802A0000u; // 800BC310
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 800BC314
  c->r[3]=c->r[3]+0xFFFFEFD0u; // 800BC318
  c->r[0]=c->r[3]+0x00000014u; // 800BC31C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800BC320
  W32(c->r[29]+0x00000010u,c->r[0]); // 800BC324
  c->lr=0x800BC32Cu; f_800CBAA0(c); // 800BC328
  c->r[0]=R8(c->r[13]+0xFFFFA438u); // 800BC32C
  c->r[4]=0u-c->r[3]; // 800BC330
  c->r[3]=c->r[4]|c->r[3]; // 800BC334
  cmps(c,0,(int32_t)c->r[0],0); // 800BC338
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 800BC33C
  if (crb(c,2)) { goto L_800BC34C; } // 800BC340
  c->lr=0x800BC348u; f_800CBAE0(c); // 800BC344
  goto L_800BC3CC; // 800BC348
L_800BC34C:;
  c->r[0]=0u+0x00000001u; // 800BC34C
  W8(c->r[13]+0xFFFFA438u,c->r[0]); // 800BC350
  c->lr=0x800BC358u; f_800CBAE0(c); // 800BC354
  c->r[3]=0u+0x800C0000u; // 800BC358
  c->r[4]=0u+0x800C0000u; // 800BC35C
  c->r[3]=c->r[3]+0xFFFFC0D0u; // 800BC360
  c->r[4]=c->r[4]+0xFFFFC0E0u; // 800BC364
  c->lr=0x800BC36Cu; f_80101240(c); // 800BC368
  c->lr=0x800BC370u; f_8010F0D0(c); // 800BC36C
  c->r[3]=0u+0x000002E0u; // 800BC370
  c->lr=0x800BC378u; f_800B98F0(c); // 800BC374
  cmps(c,0,(int32_t)c->r[3],0); // 800BC378
  c->r[30]=c->r[3]|c->r[3]; // 800BC37C
  if (crb(c,2)) { goto L_800BC3C8; } // 800BC380
  c->r[4]=0u+0x00000000u; // 800BC384
  c->r[5]=0u+0x00000001u; // 800BC388
  c->lr=0x800BC390u; f_800BAD20(c); // 800BC38C
  c->r[3]=c->r[30]+0x0000000Cu; // 800BC390
  c->r[4]=0u+0x00000000u; // 800BC394
  c->r[5]=0u+0x00000001u; // 800BC398
  c->lr=0x800BC3A0u; f_800BAAE0(c); // 800BC39C
  c->r[4]=0u+0x802A0000u; // 800BC3A0
  c->r[3]=c->r[30]+0x00000018u; // 800BC3A4
  c->r[4]=c->r[4]+0xFFFFEF48u; // 800BC3A8
  W32(c->r[30]+0x00000000u,c->r[4]); // 800BC3AC
  c->r[0]=c->r[4]+0x00000010u; // 800BC3B0
  c->r[5]=0u+0x000002C0u; // 800BC3B4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800BC3B8
  c->r[4]=0u+0x00000000u; // 800BC3BC
  c->lr=0x800BC3C4u; f_800046B4(c); // 800BC3C0
  W8(c->r[30]+0x000002D8u,c->r[31]); // 800BC3C4
L_800BC3C8:;
  W32(c->r[13]+0xFFFFA434u,c->r[30]); // 800BC3C8
L_800BC3CC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BC3CC
  c->r[3]=c->r[29]|c->r[29]; // 800BC3D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BC3D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BC3D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC3DC
  c->lr=c->r[0]; // 800BC3E0
  c->r[1]=c->r[1]+0x00000020u; // 800BC3E4
  return; // 800BC3E8
}

// fn_800BC3F0
void f_800BC3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC3F0
  c->r[0]=c->lr; // 800BC3F4
  cmps(c,0,(int32_t)c->r[3],0); // 800BC3F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC3FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC400
  c->r[31]=c->r[4]|c->r[4]; // 800BC404
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BC408
  c->r[30]=c->r[3]|c->r[3]; // 800BC40C
  if (crb(c,2)) { goto L_800BC430; } // 800BC410
  c->r[4]=0u+0x00000000u; // 800BC414
  c->r[3]=c->r[3]+0x00000010u; // 800BC418
  c->lr=0x800BC420u; f_800BAC40(c); // 800BC41C
  cmps(c,0,(int32_t)c->r[31],0); // 800BC420
  if (!crb(c,1)) { goto L_800BC430; } // 800BC424
  c->r[3]=c->r[30]|c->r[30]; // 800BC428
  c->lr=0x800BC430u; f_800B9AD0(c); // 800BC42C
L_800BC430:;
  c->r[3]=c->r[30]|c->r[30]; // 800BC430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC434
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC438
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC43C
  c->lr=c->r[0]; // 800BC440
  c->r[1]=c->r[1]+0x00000010u; // 800BC444
  return; // 800BC448
}

// fn_800BC450
void f_800BC450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC450
  c->r[0]=c->lr; // 800BC454
  W32(c->r[1]+0x00000184u,c->r[0]); // 800BC458
  c->r[11]=c->r[1]+0x00000180u; // 800BC45C
  c->lr=0x800BC464u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BC460
  c->r[30]=R32(c->r[13]+0xFFFFA434u); // 800BC464
  c->r[27]=c->r[3]|c->r[3]; // 800BC468
  c->r[28]=c->r[4]|c->r[4]; // 800BC46C
  c->r[29]=c->r[5]|c->r[5]; // 800BC470
  c->r[0]=R8(c->r[30]+0x000002D8u); // 800BC474
  cmps(c,0,(int32_t)c->r[0],0); // 800BC478
  if (!crb(c,2)) { goto L_800BC5B4; } // 800BC47C
  c->r[0]=0u+0x00000001u; // 800BC480
  W8(c->r[30]+0x000002D8u,c->r[0]); // 800BC484
  c->r[31]=0u+0x00000000u; // 800BC488
  c->r[26]=0u+0x0000000Au; // 800BC48C
L_800BC490:;
  c->r[3]=c->r[31]|c->r[31]; // 800BC490
  c->r[4]=c->r[1]+0x00000008u; // 800BC494
  c->r[5]=0u+0x00000001u; // 800BC498
  c->lr=0x800BC4A0u; f_8010E990(c); // 800BC49C
  cmps(c,0,(int32_t)c->r[3],1); // 800BC4A0
  if (!crb(c,2)) { goto L_800BC5A4; } // 800BC4A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800BC4A8
  c->r[5]=c->r[30]+0x00000074u; // 800BC4AC
  W32(c->r[30]+0x00000018u,c->r[0]); // 800BC4B0
  c->r[4]=c->r[1]+0x00000064u; // 800BC4B4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800BC4B8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800BC4BC
  c->r[0]=R32(c->r[1]+0x00000010u); // 800BC4C0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BC4C4
  c->r[0]=R32(c->r[1]+0x00000018u); // 800BC4C8
  c->r[3]=R32(c->r[1]+0x00000014u); // 800BC4CC
  W32(c->r[30]+0x00000024u,c->r[3]); // 800BC4D0
  W32(c->r[30]+0x00000028u,c->r[0]); // 800BC4D4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BC4D8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800BC4DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC4E0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800BC4E4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC4E8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800BC4EC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BC4F0
  c->r[3]=R32(c->r[1]+0x00000028u); // 800BC4F4
  W32(c->r[30]+0x00000038u,c->r[3]); // 800BC4F8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800BC4FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BC500
  c->r[3]=R32(c->r[1]+0x00000030u); // 800BC504
  W32(c->r[30]+0x00000040u,c->r[3]); // 800BC508
  W32(c->r[30]+0x00000044u,c->r[0]); // 800BC50C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC510
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800BC514
  c->r[0]=R32(c->r[1]+0x00000040u); // 800BC518
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800BC51C
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800BC520
  W32(c->r[30]+0x00000050u,c->r[0]); // 800BC524
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BC528
  c->r[3]=R32(c->r[1]+0x00000044u); // 800BC52C
  W32(c->r[30]+0x00000054u,c->r[3]); // 800BC530
  W32(c->r[30]+0x00000058u,c->r[0]); // 800BC534
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC538
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BC53C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC540
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 800BC544
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC548
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800BC54C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC550
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 800BC554
  c->r[0]=R32(c->r[1]+0x00000060u); // 800BC558
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 800BC55C
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800BC560
  W32(c->r[30]+0x00000070u,c->r[0]); // 800BC564
  c->r[0]=R8(c->r[1]+0x00000064u); // 800BC568
  W8(c->r[30]+0x00000074u,c->r[0]); // 800BC56C
  c->r[0]=R8(c->r[1]+0x00000065u); // 800BC570
  W8(c->r[30]+0x00000075u,c->r[0]); // 800BC574
  c->r[0]=R8(c->r[1]+0x00000066u); // 800BC578
  W8(c->r[30]+0x00000076u,c->r[0]); // 800BC57C
  c->r[0]=R8(c->r[1]+0x00000067u); // 800BC580
  W8(c->r[30]+0x00000077u,c->r[0]); // 800BC584
  c->ctr=c->r[26]; // 800BC588
  c->r[0]=c->r[0]|0x00000000u; // 800BC58C
L_800BC590:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BC590
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BC594
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BC598
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BC59C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC590; } // 800BC5A0
L_800BC5A4:;
  c->r[31]=c->r[31]+0x00000001u; // 800BC5A4
  c->r[30]=c->r[30]+0x000000B0u; // 800BC5A8
  cmpu(c,0,c->r[31],0x00000004u); // 800BC5AC
  if (crb(c,0)) { IRQCHK(c); goto L_800BC490; } // 800BC5B0
L_800BC5B4:;
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)176); // 800BC5B4
  c->r[4]=R32(c->r[13]+0xFFFFA434u); // 800BC5B8
  c->r[0]=0u+0x00000016u; // 800BC5BC
  c->r[5]=c->r[1]+0x000000B4u; // 800BC5C0
  c->r[3]=c->r[4]+c->r[3]; // 800BC5C4
  c->r[4]=c->r[3]+0x00000014u; // 800BC5C8
  c->ctr=c->r[0]; // 800BC5CC
L_800BC5D0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BC5D0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BC5D4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BC5D8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BC5DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC5D0; } // 800BC5E0
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC5E4
  c->r[0]=0u+0x0000000Au; // 800BC5E8
  W32(c->r[29]+0x00000010u,c->r[3]); // 800BC5EC
  c->r[5]=c->r[29]+0x0000006Cu; // 800BC5F0
  c->r[4]=c->r[1]+0x00000114u; // 800BC5F4
  c->r[3]=R32(c->r[1]+0x000000BCu); // 800BC5F8
  W32(c->r[29]+0x00000014u,c->r[3]); // 800BC5FC
  c->r[3]=R32(c->r[1]+0x000000C0u); // 800BC600
  W32(c->r[29]+0x00000018u,c->r[3]); // 800BC604
  c->r[6]=R32(c->r[1]+0x000000C4u); // 800BC608
  c->r[3]=R32(c->r[1]+0x000000C8u); // 800BC60C
  W32(c->r[29]+0x00000020u,c->r[3]); // 800BC610
  W32(c->r[29]+0x0000001Cu,c->r[6]); // 800BC614
  c->r[3]=R32(c->r[1]+0x000000CCu); // 800BC618
  W32(c->r[29]+0x00000024u,c->r[3]); // 800BC61C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC620
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 800BC624
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC628
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BC62C
  c->r[6]=R32(c->r[1]+0x000000D8u); // 800BC630
  c->r[3]=R32(c->r[1]+0x000000DCu); // 800BC634
  W32(c->r[29]+0x00000034u,c->r[3]); // 800BC638
  W32(c->r[29]+0x00000030u,c->r[6]); // 800BC63C
  c->r[6]=R32(c->r[1]+0x000000E0u); // 800BC640
  c->r[3]=R32(c->r[1]+0x000000E4u); // 800BC644
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800BC648
  W32(c->r[29]+0x00000038u,c->r[6]); // 800BC64C
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC650
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800BC654
  c->r[6]=R32(c->r[1]+0x000000ECu); // 800BC658
  c->r[3]=R32(c->r[1]+0x000000F0u); // 800BC65C
  W32(c->r[29]+0x00000048u,c->r[3]); // 800BC660
  W32(c->r[29]+0x00000044u,c->r[6]); // 800BC664
  c->r[6]=R32(c->r[1]+0x000000F4u); // 800BC668
  c->r[3]=R32(c->r[1]+0x000000F8u); // 800BC66C
  W32(c->r[29]+0x00000050u,c->r[3]); // 800BC670
  W32(c->r[29]+0x0000004Cu,c->r[6]); // 800BC674
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC678
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 800BC67C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC680
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 800BC684
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC688
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BC68C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC690
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 800BC694
  c->r[6]=R32(c->r[1]+0x0000010Cu); // 800BC698
  c->r[3]=R32(c->r[1]+0x00000110u); // 800BC69C
  W32(c->r[29]+0x00000068u,c->r[3]); // 800BC6A0
  W32(c->r[29]+0x00000064u,c->r[6]); // 800BC6A4
  c->r[3]=R8(c->r[1]+0x00000114u); // 800BC6A8
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 800BC6AC
  c->r[3]=R8(c->r[1]+0x00000115u); // 800BC6B0
  W8(c->r[29]+0x0000006Du,c->r[3]); // 800BC6B4
  c->r[3]=R8(c->r[1]+0x00000116u); // 800BC6B8
  W8(c->r[29]+0x0000006Eu,c->r[3]); // 800BC6BC
  c->r[3]=R8(c->r[1]+0x00000117u); // 800BC6C0
  W8(c->r[29]+0x0000006Fu,c->r[3]); // 800BC6C4
  c->ctr=c->r[0]; // 800BC6C8
  c->r[0]=c->r[0]|0x00000000u; // 800BC6CC
L_800BC6D0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BC6D0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BC6D4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BC6D8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BC6DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC6D0; } // 800BC6E0
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BC6E4
  c->r[0]=0u+0x00000000u; // 800BC6E8
  cmps(c,0,(int32_t)c->r[3],0); // 800BC6EC
  if (!crb(c,2)) { goto L_800BC7A8; } // 800BC6F0
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC6F4
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 800BC6F8
  if (crb(c,2)) { goto L_800BC704; } // 800BC6FC
  c->r[0]=c->r[0]|0x00000040u; // 800BC700
L_800BC704:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC704
  c->r[3]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[3]); // 800BC708
  if (crb(c,2)) { goto L_800BC714; } // 800BC70C
  c->r[0]=c->r[0]|0x00000080u; // 800BC710
L_800BC714:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC714
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 800BC718
  if (crb(c,2)) { goto L_800BC724; } // 800BC71C
  c->r[0]=c->r[0]|0x00000020u; // 800BC720
L_800BC724:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC724
  c->r[3]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[3]); // 800BC728
  if (crb(c,2)) { goto L_800BC734; } // 800BC72C
  c->r[0]=c->r[0]|0x00000010u; // 800BC730
L_800BC734:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC734
  c->r[3]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[3]); // 800BC738
  if (crb(c,2)) { goto L_800BC744; } // 800BC73C
  c->r[0]=c->r[0]|0x00000001u; // 800BC740
L_800BC744:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC744
  c->r[3]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[3]); // 800BC748
  if (crb(c,2)) { goto L_800BC754; } // 800BC74C
  c->r[0]=c->r[0]|0x00000002u; // 800BC750
L_800BC754:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC754
  c->r[3]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[3]); // 800BC758
  if (crb(c,2)) { goto L_800BC764; } // 800BC75C
  c->r[0]=c->r[0]|0x00000400u; // 800BC760
L_800BC764:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC764
  c->r[3]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[3]); // 800BC768
  if (crb(c,2)) { goto L_800BC774; } // 800BC76C
  c->r[0]=c->r[0]|0x00000800u; // 800BC770
L_800BC774:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC774
  c->r[3]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[3]); // 800BC778
  if (crb(c,2)) { goto L_800BC784; } // 800BC77C
  c->r[0]=c->r[0]|0x00000008u; // 800BC780
L_800BC784:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC784
  c->r[3]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[3]); // 800BC788
  if (crb(c,2)) { goto L_800BC794; } // 800BC78C
  c->r[0]=c->r[0]|0x00000004u; // 800BC790
L_800BC794:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC794
  c->r[3]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[3]); // 800BC798
  if (crb(c,2)) { goto L_800BC858; } // 800BC79C
  c->r[0]=c->r[0]|0x00002000u; // 800BC7A0
  goto L_800BC858; // 800BC7A4
L_800BC7A8:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC7A8
  c->r[3]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[3]); // 800BC7AC
  if (crb(c,2)) { goto L_800BC7B8; } // 800BC7B0
  c->r[0]=c->r[0]|0x00000040u; // 800BC7B4
L_800BC7B8:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC7B8
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 800BC7BC
  if (crb(c,2)) { goto L_800BC7C8; } // 800BC7C0
  c->r[0]=c->r[0]|0x00000080u; // 800BC7C4
L_800BC7C8:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC7C8
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 800BC7CC
  if (crb(c,2)) { goto L_800BC7D8; } // 800BC7D0
  c->r[0]=c->r[0]|0x00000020u; // 800BC7D4
L_800BC7D8:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC7D8
  c->r[3]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[3]); // 800BC7DC
  if (crb(c,2)) { goto L_800BC7E8; } // 800BC7E0
  c->r[0]=c->r[0]|0x00000010u; // 800BC7E4
L_800BC7E8:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC7E8
  c->r[3]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[3]); // 800BC7EC
  if (crb(c,2)) { goto L_800BC7F8; } // 800BC7F0
  c->r[0]=c->r[0]|0x00000400u; // 800BC7F4
L_800BC7F8:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC7F8
  c->r[3]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[3]); // 800BC7FC
  if (crb(c,2)) { goto L_800BC808; } // 800BC800
  c->r[0]=c->r[0]|0x00000800u; // 800BC804
L_800BC808:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC808
  c->r[3]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[3]); // 800BC80C
  if (crb(c,2)) { goto L_800BC818; } // 800BC810
  c->r[0]=c->r[0]|0x00000001u; // 800BC814
L_800BC818:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC818
  c->r[3]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[3]); // 800BC81C
  if (crb(c,2)) { goto L_800BC828; } // 800BC820
  c->r[0]=c->r[0]|0x00000002u; // 800BC824
L_800BC828:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC828
  c->r[3]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[3]); // 800BC82C
  if (crb(c,2)) { goto L_800BC838; } // 800BC830
  c->r[0]=c->r[0]|0x00000008u; // 800BC834
L_800BC838:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC838
  c->r[3]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[3]); // 800BC83C
  if (crb(c,2)) { goto L_800BC848; } // 800BC840
  c->r[0]=c->r[0]|0x00000004u; // 800BC844
L_800BC848:;
  c->r[3]=R32(c->r[1]+0x000000B8u); // 800BC848
  c->r[3]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[3]); // 800BC84C
  if (crb(c,2)) { goto L_800BC858; } // 800BC850
  c->r[0]=c->r[0]|0x00002000u; // 800BC854
L_800BC858:;
  c->r[3]=R8(c->r[1]+0x00000114u); // 800BC858
  cmpu(c,0,c->r[3],0x00000002u); // 800BC85C
  if (!crb(c,2)) { goto L_800BC93C; } // 800BC860
  c->r[3]=R8(c->r[1]+0x00000115u); // 800BC864
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[3]); // 800BC868
  if (!crb(c,2)) { goto L_800BC93C; } // 800BC86C
  c->r[4]=R32(c->r[1]+0x00000118u); // 800BC870
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 800BC874
  if (crb(c,2)) { goto L_800BC880; } // 800BC878
  c->r[0]=c->r[0]|0x00000040u; // 800BC87C
L_800BC880:;
  c->r[3]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[3]); // 800BC880
  if (crb(c,2)) { goto L_800BC88C; } // 800BC884
  c->r[0]=c->r[0]|0x00000080u; // 800BC888
L_800BC88C:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800BC88C
  if (crb(c,2)) { goto L_800BC898; } // 800BC890
  c->r[0]=c->r[0]|0x00000020u; // 800BC894
L_800BC898:;
  c->r[3]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[3]); // 800BC898
  if (crb(c,2)) { goto L_800BC8A4; } // 800BC89C
  c->r[0]=c->r[0]|0x00000010u; // 800BC8A0
L_800BC8A4:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 800BC8A4
  if (crb(c,2)) { goto L_800BC8B0; } // 800BC8A8
  c->r[0]=c->r[0]|0x00000001u; // 800BC8AC
L_800BC8B0:;
  c->r[3]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[3]); // 800BC8B0
  if (crb(c,2)) { goto L_800BC8BC; } // 800BC8B4
  c->r[0]=c->r[0]|0x00000002u; // 800BC8B8
L_800BC8BC:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800BC8BC
  if (crb(c,2)) { goto L_800BC8C8; } // 800BC8C0
  c->r[0]=c->r[0]|0x00000400u; // 800BC8C4
L_800BC8C8:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 800BC8C8
  if (crb(c,2)) { goto L_800BC8D4; } // 800BC8CC
  c->r[0]=c->r[0]|0x00000800u; // 800BC8D0
L_800BC8D4:;
  c->r[3]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[3]); // 800BC8D4
  if (crb(c,2)) { goto L_800BC8E0; } // 800BC8D8
  c->r[0]=c->r[0]|0x00000008u; // 800BC8DC
L_800BC8E0:;
  c->r[3]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[3]); // 800BC8E0
  if (crb(c,2)) { goto L_800BC8EC; } // 800BC8E4
  c->r[0]=c->r[0]|0x00000004u; // 800BC8E8
L_800BC8EC:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 800BC8EC
  if (crb(c,2)) { goto L_800BC8F8; } // 800BC8F0
  c->r[0]=c->r[0]|0x00002000u; // 800BC8F4
L_800BC8F8:;
  c->r[3]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[3]); // 800BC8F8
  if (crb(c,2)) { goto L_800BC904; } // 800BC8FC
  c->r[0]=c->r[0]|0x00000200u; // 800BC900
L_800BC904:;
  c->r[3]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[3]); // 800BC904
  if (crb(c,2)) { goto L_800BC910; } // 800BC908
  c->r[0]=c->r[0]|0x00000100u; // 800BC90C
L_800BC910:;
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC910
  {uint32_t ea=c->r[1]+0x00000124u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC914
  c->f[0]=-c->f[0]; // 800BC918
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800BC91C
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[0]);} // 800BC920
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC924
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC928
  c->f[0]=-c->f[0]; // 800BC92C
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800BC930
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[0]);} // 800BC934
  goto L_800BC950; // 800BC938
L_800BC93C:;
  {uint32_t ea=c->r[2]+0xFFFF99E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC93C
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[0]);} // 800BC940
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[0]);} // 800BC944
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[0]);} // 800BC948
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[0]);} // 800BC94C
L_800BC950:;
  c->r[3]=R8(c->r[1]+0x00000116u); // 800BC950
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[3]); // 800BC954
  if (crb(c,2)) { goto L_800BC988; } // 800BC958
  {uint32_t ea=c->r[2]+0xFFFF99ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC95C
  c->r[0]=c->r[0]|0x00001000u; // 800BC960
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC964
  {uint32_t ea=c->r[2]+0xFFFF99F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC968
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC96C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800BC970
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC974
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800BC978
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BC97C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[2]);} // 800BC980
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800BC984
L_800BC988:;
  W32(c->r[29]+0x00000000u,c->r[0]); // 800BC988
  c->r[11]=c->r[1]+0x00000180u; // 800BC98C
  W32(c->r[13]+0xFFFFA430u,c->r[0]); // 800BC990
  c->lr=0x800BC998u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BC994
  c->r[0]=R32(c->r[1]+0x00000184u); // 800BC998
  c->lr=c->r[0]; // 800BC99C
  c->r[1]=c->r[1]+0x00000180u; // 800BC9A0
  return; // 800BC9A4
}

// fn_800BC9B0
void f_800BC9B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC9B0
  c->r[0]=c->lr; // 800BC9B4
  c->r[5]=0u+0x80240000u; // 800BC9B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC9BC
  c->r[5]=c->r[5]+0xFFFFC11Cu; // 800BC9C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BC9C4
  c->r[31]=0u+0x00000000u; // 800BC9C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BC9CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BC9D0
  c->r[29]=c->r[4]|c->r[4]; // 800BC9D4
  c->r[4]=0u+0x00000000u; // 800BC9D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800BC9DC
  c->r[28]=c->r[3]|c->r[3]; // 800BC9E0
  W32(c->r[3]+0x00000000u,c->r[5]); // 800BC9E4
  c->r[5]=0u+0x00000000u; // 800BC9E8
  W32(c->r[3]+0x00000008u,c->r[31]); // 800BC9EC
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 800BC9F0
  c->r[3]=c->r[3]+0x00000010u; // 800BC9F4
  c->lr=0x800BC9FCu; f_800BAAE0(c); // 800BC9F8
  c->r[3]=0u+0x802A0000u; // 800BC9FC
  W32(c->r[28]+0x0000001Cu,c->r[31]); // 800BCA00
  c->r[3]=c->r[3]+0xFFFFEFD0u; // 800BCA04
  c->r[0]=c->r[3]+0x00000014u; // 800BCA08
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BCA0C
  W32(c->r[28]+0x00000010u,c->r[0]); // 800BCA10
  c->lr=0x800BCA18u; f_800CBAA0(c); // 800BCA14
  c->r[0]=R8(c->r[13]+0xFFFFA438u); // 800BCA18
  c->r[4]=0u-c->r[3]; // 800BCA1C
  c->r[3]=c->r[4]|c->r[3]; // 800BCA20
  cmps(c,0,(int32_t)c->r[0],0); // 800BCA24
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 800BCA28
  if (crb(c,2)) { goto L_800BCA38; } // 800BCA2C
  c->lr=0x800BCA34u; f_800CBAE0(c); // 800BCA30
  goto L_800BCAB8; // 800BCA34
L_800BCA38:;
  c->r[0]=0u+0x00000001u; // 800BCA38
  W8(c->r[13]+0xFFFFA438u,c->r[0]); // 800BCA3C
  c->lr=0x800BCA44u; f_800CBAE0(c); // 800BCA40
  c->r[3]=0u+0x800C0000u; // 800BCA44
  c->r[4]=0u+0x800C0000u; // 800BCA48
  c->r[3]=c->r[3]+0xFFFFC0D0u; // 800BCA4C
  c->r[4]=c->r[4]+0xFFFFC0E0u; // 800BCA50
  c->lr=0x800BCA58u; f_80101240(c); // 800BCA54
  c->lr=0x800BCA5Cu; f_8010F0D0(c); // 800BCA58
  c->r[3]=0u+0x000002E0u; // 800BCA5C
  c->lr=0x800BCA64u; f_800B98F0(c); // 800BCA60
  cmps(c,0,(int32_t)c->r[3],0); // 800BCA64
  c->r[30]=c->r[3]|c->r[3]; // 800BCA68
  if (crb(c,2)) { goto L_800BCAB4; } // 800BCA6C
  c->r[4]=0u+0x00000000u; // 800BCA70
  c->r[5]=0u+0x00000001u; // 800BCA74
  c->lr=0x800BCA7Cu; f_800BAD20(c); // 800BCA78
  c->r[3]=c->r[30]+0x0000000Cu; // 800BCA7C
  c->r[4]=0u+0x00000000u; // 800BCA80
  c->r[5]=0u+0x00000001u; // 800BCA84
  c->lr=0x800BCA8Cu; f_800BAAE0(c); // 800BCA88
  c->r[4]=0u+0x802A0000u; // 800BCA8C
  c->r[3]=c->r[30]+0x00000018u; // 800BCA90
  c->r[4]=c->r[4]+0xFFFFEF48u; // 800BCA94
  W32(c->r[30]+0x00000000u,c->r[4]); // 800BCA98
  c->r[0]=c->r[4]+0x00000010u; // 800BCA9C
  c->r[5]=0u+0x000002C0u; // 800BCAA0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800BCAA4
  c->r[4]=0u+0x00000000u; // 800BCAA8
  c->lr=0x800BCAB0u; f_800046B4(c); // 800BCAAC
  W8(c->r[30]+0x000002D8u,c->r[31]); // 800BCAB0
L_800BCAB4:;
  W32(c->r[13]+0xFFFFA434u,c->r[30]); // 800BCAB4
L_800BCAB8:;
  c->r[3]=0u+0x802A0000u; // 800BCAB8
  c->r[0]=0u+0x00000001u; // 800BCABC
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800BCAC0
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BCAC4
  c->r[4]=c->r[3]+0x00000014u; // 800BCAC8
  W32(c->r[28]+0x00000010u,c->r[4]); // 800BCACC
  c->r[3]=0u+0x000003D0u; // 800BCAD0
  W32(c->r[28]+0x00000024u,c->r[29]); // 800BCAD4
  W8(c->r[28]+0x00000028u,c->r[0]); // 800BCAD8
  c->lr=0x800BCAE0u; f_800B99E0(c); // 800BCADC
  c->r[4]=0u+0x800C0000u; // 800BCAE0
  c->r[5]=0u+0x800C0000u; // 800BCAE4
  c->r[4]=c->r[4]+0xFFFFBCF0u; // 800BCAE8
  c->r[6]=0u+0x000000F0u; // 800BCAEC
  c->r[5]=c->r[5]+0xFFFFBD30u; // 800BCAF0
  c->r[7]=0u+0x00000004u; // 800BCAF4
  c->lr=0x800BCAFCu; f_802170C8(c); // 800BCAF8
  W32(c->r[28]+0x00000020u,c->r[3]); // 800BCAFC
  c->r[3]=c->r[28]+0x00000010u; // 800BCB00
  c->lr=0x800BCB08u; f_800BABA0(c); // 800BCB04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BCB08
  c->r[3]=c->r[28]|c->r[28]; // 800BCB0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BCB10
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BCB14
  c->r[28]=R32(c->r[1]+0x00000010u); // 800BCB18
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BCB1C
  c->lr=c->r[0]; // 800BCB20
  c->r[1]=c->r[1]+0x00000020u; // 800BCB24
  return; // 800BCB28
}

// fn_800BCB30
void f_800BCB30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCB30
  c->r[0]=c->lr; // 800BCB34
  cmps(c,0,(int32_t)c->r[3],0); // 800BCB38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCB3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCB40
  c->r[31]=c->r[4]|c->r[4]; // 800BCB44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BCB48
  c->r[30]=c->r[3]|c->r[3]; // 800BCB4C
  if (crb(c,2)) { goto L_800BCBA0; } // 800BCB50
  c->r[4]=0u+0x802A0000u; // 800BCB54
  c->r[4]=c->r[4]+0xFFFFEF98u; // 800BCB58
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BCB5C
  c->r[0]=c->r[4]+0x00000014u; // 800BCB60
  {uint32_t ea=c->r[3]+0x00000010u; W32(ea,c->r[0]); c->r[3]=ea;} // 800BCB64
  c->lr=0x800BCB6Cu; f_800BABF0(c); // 800BCB68
  c->r[4]=0u+0x800C0000u; // 800BCB6C
  c->r[3]=R32(c->r[30]+0x00000020u); // 800BCB70
  c->r[4]=c->r[4]+0xFFFFBD30u; // 800BCB74
  c->lr=0x800BCB7Cu; f_802173F8(c); // 800BCB78
  cmps(c,0,(int32_t)c->r[30],0); // 800BCB7C
  if (crb(c,2)) { goto L_800BCB90; } // 800BCB80
  c->r[3]=c->r[30]+0x00000010u; // 800BCB84
  c->r[4]=0u+0x00000000u; // 800BCB88
  c->lr=0x800BCB90u; f_800BAC40(c); // 800BCB8C
L_800BCB90:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BCB90
  if (!crb(c,1)) { goto L_800BCBA0; } // 800BCB94
  c->r[3]=c->r[30]|c->r[30]; // 800BCB98
  c->lr=0x800BCBA0u; f_800B9AD0(c); // 800BCB9C
L_800BCBA0:;
  c->r[3]=c->r[30]|c->r[30]; // 800BCBA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCBA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BCBA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCBAC
  c->lr=c->r[0]; // 800BCBB0
  c->r[1]=c->r[1]+0x00000010u; // 800BCBB4
  return; // 800BCBB8
}

// fn_800BCBC0
void f_800BCBC0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800BCBC0
  return; // 800BCBC4
}

// fn_800BCBD0
void f_800BCBD0(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)240); // 800BCBD0
  c->r[3]=R32(c->r[3]+0x00000020u); // 800BCBD4
  c->r[3]=c->r[3]+c->r[0]; // 800BCBD8
  return; // 800BCBDC
}

// fn_800BCBE0
void f_800BCBE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCBE0
  c->r[0]=c->lr; // 800BCBE4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800BCBE8
  W32(c->r[1]+0x000000ECu,c->r[31]); // 800BCBEC
  c->r[31]=0u+0x0000000Au; // 800BCBF0
  W32(c->r[1]+0x000000E8u,c->r[30]); // 800BCBF4
  c->r[30]=0u+0x00000000u; // 800BCBF8
  W32(c->r[1]+0x000000E4u,c->r[29]); // 800BCBFC
  c->r[29]=0u+0x00000000u; // 800BCC00
  W32(c->r[1]+0x000000E0u,c->r[28]); // 800BCC04
  c->r[28]=c->r[3]|c->r[3]; // 800BCC08
L_800BCC0C:;
  c->r[3]=c->r[28]|c->r[28]; // 800BCC0C
  c->r[4]=c->r[29]|c->r[29]; // 800BCC10
  c->r[5]=c->r[1]+0x00000008u; // 800BCC14
  c->lr=0x800BCC1Cu; f_800BC450(c); // 800BCC18
  c->r[0]=R8(c->r[28]+0x00000028u); // 800BCC1C
  cmps(c,0,(int32_t)c->r[0],0); // 800BCC20
  if (crb(c,2)) { goto L_800BCDB8; } // 800BCC24
  c->r[0]=R32(c->r[28]+0x00000020u); // 800BCC28
  c->r[5]=c->r[1]+0x00000074u; // 800BCC2C
  c->r[3]=c->r[0]+c->r[30]; // 800BCC30
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BCC34
  c->r[6]=c->r[3]+0x0000009Cu; // 800BCC38
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BCC3C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800BCC40
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BCC44
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC48
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BCC4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC50
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800BCC54
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC58
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BCC5C
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC60
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800BCC64
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC68
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800BCC6C
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC70
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCC74
  c->r[0]=R32(c->r[1]+0x00000018u); // 800BCC78
  W32(c->r[3]+0x00000040u,c->r[0]); // 800BCC7C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BCC80
  W32(c->r[3]+0x00000044u,c->r[0]); // 800BCC84
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BCC88
  W32(c->r[3]+0x00000048u,c->r[0]); // 800BCC8C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800BCC90
  c->r[4]=R32(c->r[1]+0x00000024u); // 800BCC94
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 800BCC98
  W32(c->r[3]+0x00000050u,c->r[0]); // 800BCC9C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BCCA0
  W32(c->r[3]+0x00000054u,c->r[0]); // 800BCCA4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCCA8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800BCCAC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCCB0
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BCCB4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800BCCB8
  c->r[4]=R32(c->r[1]+0x00000038u); // 800BCCBC
  W32(c->r[3]+0x00000060u,c->r[4]); // 800BCCC0
  W32(c->r[3]+0x00000064u,c->r[0]); // 800BCCC4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BCCC8
  c->r[4]=R32(c->r[1]+0x00000040u); // 800BCCCC
  W32(c->r[3]+0x00000068u,c->r[4]); // 800BCCD0
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800BCCD4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCCD8
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 800BCCDC
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BCCE0
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800BCCE4
  W32(c->r[3]+0x00000074u,c->r[4]); // 800BCCE8
  W32(c->r[3]+0x00000078u,c->r[0]); // 800BCCEC
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BCCF0
  c->r[4]=R32(c->r[1]+0x00000054u); // 800BCCF4
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 800BCCF8
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BCCFC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD00
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 800BCD04
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD08
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 800BCD0C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD10
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BCD14
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD18
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 800BCD1C
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BCD20
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 800BCD24
  W32(c->r[3]+0x00000094u,c->r[4]); // 800BCD28
  W32(c->r[3]+0x00000098u,c->r[0]); // 800BCD2C
  c->r[0]=R8(c->r[1]+0x00000074u); // 800BCD30
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 800BCD34
  c->r[0]=R8(c->r[1]+0x00000075u); // 800BCD38
  W8(c->r[3]+0x0000009Du,c->r[0]); // 800BCD3C
  c->r[0]=R8(c->r[1]+0x00000076u); // 800BCD40
  W8(c->r[3]+0x0000009Eu,c->r[0]); // 800BCD44
  c->r[0]=R8(c->r[1]+0x00000077u); // 800BCD48
  W8(c->r[3]+0x0000009Fu,c->r[0]); // 800BCD4C
  c->ctr=c->r[31]; // 800BCD50
  c->r[0]=c->r[0]|0x00000000u; // 800BCD54
L_800BCD58:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BCD58
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BCD5C
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BCD60
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BCD64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCD58; } // 800BCD68
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800BCD6C
  cmps(c,0,(int32_t)c->r[4],0); // 800BCD70
  if (crb(c,2)) { goto L_800BCDB8; } // 800BCD74
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BCD78
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800BCD7C
  if (crb(c,2)) { goto L_800BCDB0; } // 800BCD80
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BCD84
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BCD88
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BCD8C
  if (!crb(c,2)) { goto L_800BCDB8; } // 800BCD90
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BCD94
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BCD98
  c->r[4]=R32(c->r[3]+0x00000004u); // 800BCD9C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800BCDA0
  c->r[0]=c->r[4]&~c->r[0]; // 800BCDA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BCDA8
  goto L_800BCDB8; // 800BCDAC
L_800BCDB0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800BCDB0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BCDB4
L_800BCDB8:;
  c->r[0]=R32(c->r[28]+0x00000020u); // 800BCDB8
  c->r[5]=c->r[1]+0x00000074u; // 800BCDBC
  c->r[3]=c->r[0]+c->r[30]; // 800BCDC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BCDC4
  c->r[6]=c->r[3]+0x0000009Cu; // 800BCDC8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BCDCC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800BCDD0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BCDD4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCDD8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BCDDC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCDE0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800BCDE4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCDE8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BCDEC
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCDF0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800BCDF4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCDF8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800BCDFC
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE00
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BCE04
  c->r[0]=R32(c->r[1]+0x00000018u); // 800BCE08
  W32(c->r[3]+0x00000040u,c->r[0]); // 800BCE0C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BCE10
  W32(c->r[3]+0x00000044u,c->r[0]); // 800BCE14
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BCE18
  W32(c->r[3]+0x00000048u,c->r[0]); // 800BCE1C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800BCE20
  c->r[4]=R32(c->r[1]+0x00000024u); // 800BCE24
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 800BCE28
  W32(c->r[3]+0x00000050u,c->r[0]); // 800BCE2C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BCE30
  W32(c->r[3]+0x00000054u,c->r[0]); // 800BCE34
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE38
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800BCE3C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE40
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BCE44
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800BCE48
  c->r[4]=R32(c->r[1]+0x00000038u); // 800BCE4C
  W32(c->r[3]+0x00000060u,c->r[4]); // 800BCE50
  W32(c->r[3]+0x00000064u,c->r[0]); // 800BCE54
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BCE58
  c->r[4]=R32(c->r[1]+0x00000040u); // 800BCE5C
  W32(c->r[3]+0x00000068u,c->r[4]); // 800BCE60
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800BCE64
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE68
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 800BCE6C
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BCE70
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800BCE74
  W32(c->r[3]+0x00000074u,c->r[4]); // 800BCE78
  W32(c->r[3]+0x00000078u,c->r[0]); // 800BCE7C
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BCE80
  c->r[4]=R32(c->r[1]+0x00000054u); // 800BCE84
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 800BCE88
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BCE8C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE90
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 800BCE94
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE98
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 800BCE9C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCEA0
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BCEA4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCEA8
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 800BCEAC
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BCEB0
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 800BCEB4
  W32(c->r[3]+0x00000094u,c->r[4]); // 800BCEB8
  W32(c->r[3]+0x00000098u,c->r[0]); // 800BCEBC
  c->r[0]=R8(c->r[1]+0x00000074u); // 800BCEC0
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 800BCEC4
  c->r[0]=R8(c->r[1]+0x00000075u); // 800BCEC8
  W8(c->r[3]+0x0000009Du,c->r[0]); // 800BCECC
  c->r[0]=R8(c->r[1]+0x00000076u); // 800BCED0
  W8(c->r[3]+0x0000009Eu,c->r[0]); // 800BCED4
  c->r[0]=R8(c->r[1]+0x00000077u); // 800BCED8
  W8(c->r[3]+0x0000009Fu,c->r[0]); // 800BCEDC
  c->ctr=c->r[31]; // 800BCEE0
  c->r[0]=c->r[0]|0x00000000u; // 800BCEE4
L_800BCEE8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BCEE8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BCEEC
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BCEF0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BCEF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCEE8; } // 800BCEF8
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800BCEFC
  cmps(c,0,(int32_t)c->r[4],0); // 800BCF00
  if (crb(c,2)) { goto L_800BCF48; } // 800BCF04
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BCF08
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800BCF0C
  if (crb(c,2)) { goto L_800BCF40; } // 800BCF10
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BCF14
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BCF18
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BCF1C
  if (!crb(c,2)) { goto L_800BCF48; } // 800BCF20
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BCF24
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BCF28
  c->r[4]=R32(c->r[3]+0x00000004u); // 800BCF2C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800BCF30
  c->r[0]=c->r[4]&~c->r[0]; // 800BCF34
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BCF38
  goto L_800BCF48; // 800BCF3C
L_800BCF40:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800BCF40
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BCF44
L_800BCF48:;
  c->r[29]=c->r[29]+0x00000001u; // 800BCF48
  c->r[30]=c->r[30]+0x000000F0u; // 800BCF4C
  cmpu(c,0,c->r[29],0x00000004u); // 800BCF50
  if (crb(c,0)) { IRQCHK(c); goto L_800BCC0C; } // 800BCF54
  c->r[0]=0u+0x00000000u; // 800BCF58
  W8(c->r[28]+0x00000028u,c->r[0]); // 800BCF5C
  c->r[31]=R32(c->r[1]+0x000000ECu); // 800BCF60
  c->r[30]=R32(c->r[1]+0x000000E8u); // 800BCF64
  c->r[29]=R32(c->r[1]+0x000000E4u); // 800BCF68
  c->r[28]=R32(c->r[1]+0x000000E0u); // 800BCF6C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800BCF70
  c->lr=c->r[0]; // 800BCF74
  c->r[1]=c->r[1]+0x000000F0u; // 800BCF78
  return; // 800BCF7C
}

// fn_800BCF80
void f_800BCF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCF80
  c->r[0]=c->lr; // 800BCF84
  cmps(c,0,(int32_t)c->r[3],0); // 800BCF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCF90
  c->r[31]=c->r[4]|c->r[4]; // 800BCF94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BCF98
  c->r[30]=c->r[3]|c->r[3]; // 800BCF9C
  if (crb(c,2)) { goto L_800BCFCC; } // 800BCFA0
  c->r[4]=0u+0x00000000u; // 800BCFA4
  c->r[3]=c->r[3]+0x0000000Cu; // 800BCFA8
  c->lr=0x800BCFB0u; f_800BAC40(c); // 800BCFAC
  c->r[3]=c->r[30]|c->r[30]; // 800BCFB0
  c->r[4]=0u+0x00000000u; // 800BCFB4
  c->lr=0x800BCFBCu; f_800BADE0(c); // 800BCFB8
  cmps(c,0,(int32_t)c->r[31],0); // 800BCFBC
  if (!crb(c,1)) { goto L_800BCFCC; } // 800BCFC0
  c->r[3]=c->r[30]|c->r[30]; // 800BCFC4
  c->lr=0x800BCFCCu; f_800B9AD0(c); // 800BCFC8
L_800BCFCC:;
  c->r[3]=c->r[30]|c->r[30]; // 800BCFCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCFD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BCFD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCFD8
  c->lr=c->r[0]; // 800BCFDC
  c->r[1]=c->r[1]+0x00000010u; // 800BCFE0
  return; // 800BCFE4
}

// fn_800BCFF0
void f_800BCFF0(Ctx* __restrict c) {
  return; // 800BCFF0
}

// fn_800BD000
void f_800BD000(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800BD000
  f_800BC3F0(c); return; // 800BD004
}

// fn_800BD010
void f_800BD010(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800BD010
  f_800BCBE0(c); return; // 800BD014
}

// fn_800BD020
void f_800BD020(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800BD020
  f_800BCB30(c); return; // 800BD024
}

// fn_800BD030
void f_800BD030(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800BD030
  f_800BBF50(c); return; // 800BD034
}

// fn_800BD040
void f_800BD040(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800BD040
  f_800BCF80(c); return; // 800BD044
}

// fn_800BD050
void f_800BD050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD050
  c->r[0]=c->lr; // 800BD054
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BD058
  c->r[0]=0u+0x00000000u; // 800BD05C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BD060
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BD064
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BD068
  c->r[29]=c->r[3]|c->r[3]; // 800BD06C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BD070
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BD074
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BD078
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BD07C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800BD080
  c->r[0]=cntlz(c->r[0]); // 800BD084
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800BD088
  if (crb(c,2)) { goto L_800BD098; } // 800BD08C
  c->r[31]=c->r[4]+0x00000001u; // 800BD090
  goto L_800BD09C; // 800BD094
L_800BD098:;
  c->r[31]=R32(c->r[4]+0x00000008u); // 800BD098
L_800BD09C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BD09C
  if (crb(c,2)) { goto L_800BD0B0; } // 800BD0A0
  c->r[0]=R8(c->r[4]+0x00000000u); // 800BD0A4
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800BD0A8
  goto L_800BD0B4; // 800BD0AC
L_800BD0B0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD0B0
L_800BD0B4:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD0B4
  c->r[5]=c->r[31]|c->r[31]; // 800BD0B8
  c->r[4]=c->r[1]+0x00000010u; // 800BD0BC
  c->r[6]=c->r[1]+0x00000014u; // 800BD0C0
  c->r[3]=0u+0x00000000u; // 800BD0C4
  c->lr=0x800BD0CCu; f_800F8440(c); // 800BD0C8
  cmps(c,0,(int32_t)c->r[3],0); // 800BD0CC
  if (!crb(c,2)) { goto L_800BD140; } // 800BD0D0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800BD0D4
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800BD0D8
  c->lr=0x800BD0E0u; f_800B99E0(c); // 800BD0DC
  c->r[30]=c->r[3]|c->r[3]; // 800BD0E0
  c->r[5]=c->r[31]|c->r[31]; // 800BD0E4
  c->r[4]=c->r[1]+0x00000010u; // 800BD0E8
  c->r[6]=c->r[1]+0x00000014u; // 800BD0EC
  c->lr=0x800BD0F4u; f_800F8440(c); // 800BD0F0
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BD0F4
  c->r[4]=R32(c->r[1]+0x00000010u); // 800BD0F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD0FC
  if (!crb(c,2)) { goto L_800BD110; } // 800BD100
  c->r[0]=R8(c->r[29]+0x00000000u); // 800BD104
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800BD108
  goto L_800BD114; // 800BD10C
L_800BD110:;
  c->r[5]=R32(c->r[29]+0x00000004u); // 800BD110
L_800BD114:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800BD114
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800BD118
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800BD11C
  c->r[3]=c->r[29]|c->r[29]; // 800BD120
  c->r[6]=c->r[30]|c->r[30]; // 800BD124
  c->r[7]=c->r[30]+c->r[0]; // 800BD128
  c->r[8]=c->r[1]+0x0000000Cu; // 800BD12C
  c->r[4]=0u+0x00000000u; // 800BD130
  c->lr=0x800BD138u; f_80012600(c); // 800BD134
  c->r[3]=c->r[30]|c->r[30]; // 800BD138
  c->lr=0x800BD140u; f_800B9AF0(c); // 800BD13C
L_800BD140:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BD140
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BD144
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BD148
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BD14C
  c->lr=c->r[0]; // 800BD150
  c->r[1]=c->r[1]+0x00000030u; // 800BD154
  return; // 800BD158
}

// fn_800BD160
void f_800BD160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD160
  c->r[0]=c->lr; // 800BD164
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BD168
  c->r[0]=0u+0x00000000u; // 800BD16C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BD170
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BD174
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BD178
  c->r[29]=c->r[3]|c->r[3]; // 800BD17C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BD180
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BD184
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BD188
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BD18C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800BD190
  c->r[0]=cntlz(c->r[0]); // 800BD194
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800BD198
  if (crb(c,2)) { goto L_800BD1A8; } // 800BD19C
  c->r[31]=c->r[4]+0x00000001u; // 800BD1A0
  goto L_800BD1AC; // 800BD1A4
L_800BD1A8:;
  c->r[31]=R32(c->r[4]+0x00000008u); // 800BD1A8
L_800BD1AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BD1AC
  if (crb(c,2)) { goto L_800BD1C0; } // 800BD1B0
  c->r[0]=R8(c->r[4]+0x00000000u); // 800BD1B4
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800BD1B8
  goto L_800BD1C4; // 800BD1BC
L_800BD1C0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD1C0
L_800BD1C4:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD1C4
  c->r[5]=c->r[31]|c->r[31]; // 800BD1C8
  c->r[4]=c->r[1]+0x00000010u; // 800BD1CC
  c->r[6]=c->r[1]+0x00000014u; // 800BD1D0
  c->r[3]=0u+0x00000000u; // 800BD1D4
  c->lr=0x800BD1DCu; f_800F8430(c); // 800BD1D8
  cmps(c,0,(int32_t)c->r[3],0); // 800BD1DC
  if (!crb(c,2)) { goto L_800BD250; } // 800BD1E0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800BD1E4
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800BD1E8
  c->lr=0x800BD1F0u; f_800B99E0(c); // 800BD1EC
  c->r[30]=c->r[3]|c->r[3]; // 800BD1F0
  c->r[5]=c->r[31]|c->r[31]; // 800BD1F4
  c->r[4]=c->r[1]+0x00000010u; // 800BD1F8
  c->r[6]=c->r[1]+0x00000014u; // 800BD1FC
  c->lr=0x800BD204u; f_800F8430(c); // 800BD200
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BD204
  c->r[4]=R32(c->r[1]+0x00000010u); // 800BD208
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD20C
  if (!crb(c,2)) { goto L_800BD220; } // 800BD210
  c->r[0]=R8(c->r[29]+0x00000000u); // 800BD214
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800BD218
  goto L_800BD224; // 800BD21C
L_800BD220:;
  c->r[5]=R32(c->r[29]+0x00000004u); // 800BD220
L_800BD224:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800BD224
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800BD228
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800BD22C
  c->r[3]=c->r[29]|c->r[29]; // 800BD230
  c->r[6]=c->r[30]|c->r[30]; // 800BD234
  c->r[7]=c->r[30]+c->r[0]; // 800BD238
  c->r[8]=c->r[1]+0x0000000Cu; // 800BD23C
  c->r[4]=0u+0x00000000u; // 800BD240
  c->lr=0x800BD248u; f_80012600(c); // 800BD244
  c->r[3]=c->r[30]|c->r[30]; // 800BD248
  c->lr=0x800BD250u; f_800B9AF0(c); // 800BD24C
L_800BD250:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BD250
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BD254
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BD258
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BD25C
  c->lr=c->r[0]; // 800BD260
  c->r[1]=c->r[1]+0x00000030u; // 800BD264
  return; // 800BD268
}

// fn_800BD270
void f_800BD270(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BD270
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD274
  if (!crb(c,2)) { goto L_800BD28C; } // 800BD278
  c->r[0]=R8(c->r[3]+0x00000000u); // 800BD27C
  c->r[7]=c->r[3]+0x00000001u; // 800BD280
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800BD284
  goto L_800BD294; // 800BD288
L_800BD28C:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 800BD28C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BD290
L_800BD294:;
  cmpu(c,0,c->r[5],c->r[0]); // 800BD294
  if (!crb(c,0)) { goto L_800BD2FC; } // 800BD298
  cmps(c,0,(int32_t)c->r[6],0); // 800BD29C
  if (!crb(c,2)) { goto L_800BD2AC; } // 800BD2A0
  c->r[3]=c->r[5]|c->r[5]; // 800BD2A4
  return; // 800BD2A8
L_800BD2AC:;
  c->r[8]=c->r[7]+c->r[0]; // 800BD2AC
  c->r[5]=c->r[7]+c->r[5]; // 800BD2B0
  goto L_800BD2F4; // 800BD2B4
L_800BD2B8:;
  c->r[9]=c->r[4]|c->r[4]; // 800BD2B8
  c->ctr=c->r[6]; // 800BD2BC
  cmpu(c,0,c->r[6],0x00000000u); // 800BD2C0
  if (!crb(c,1)) { goto L_800BD2E8; } // 800BD2C4
L_800BD2C8:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 800BD2C8
  c->r[0]=R8(c->r[9]+0x00000000u); // 800BD2CC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800BD2D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800BD2D4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800BD2D8
  if (crb(c,2)) { goto L_800BD2F0; } // 800BD2DC
  c->r[9]=c->r[9]+0x00000001u; // 800BD2E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD2C8; } // 800BD2E4
L_800BD2E8:;
  c->r[3]=c->r[5]-c->r[7]; // 800BD2E8
  return; // 800BD2EC
L_800BD2F0:;
  c->r[5]=c->r[5]+0x00000001u; // 800BD2F0
L_800BD2F4:;
  cmpu(c,0,c->r[5],c->r[8]); // 800BD2F4
  if (crb(c,0)) { IRQCHK(c); goto L_800BD2B8; } // 800BD2F8
L_800BD2FC:;
  c->r[3]=0u+0xFFFFFFFFu; // 800BD2FC
  return; // 800BD300
}

// fn_800BD310
void f_800BD310(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BD310
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD314
  if (!crb(c,2)) { goto L_800BD32C; } // 800BD318
  c->r[0]=R8(c->r[3]+0x00000000u); // 800BD31C
  c->r[7]=c->r[3]+0x00000001u; // 800BD320
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 800BD324
  goto L_800BD334; // 800BD328
L_800BD32C:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 800BD32C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BD330
L_800BD334:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BD334
  if (crb(c,2)) { goto L_800BD3A0; } // 800BD338
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BD33C
  cmpu(c,0,c->r[5],c->r[0]); // 800BD340
  if (!crb(c,1)) { goto L_800BD34C; } // 800BD344
  c->r[5]=c->r[0]|c->r[0]; // 800BD348
L_800BD34C:;
  c->r[5]=c->r[7]+c->r[5]; // 800BD34C
  c->r[5]=c->r[5]+0x00000001u; // 800BD350
  goto L_800BD398; // 800BD354
L_800BD358:;
  c->r[8]=c->r[4]|c->r[4]; // 800BD358
  c->ctr=c->r[6]; // 800BD35C
  cmpu(c,0,c->r[6],0x00000000u); // 800BD360
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800BD364
  if (!crb(c,1)) { goto L_800BD390; } // 800BD368
  c->r[0]=c->r[0]|0x00000000u; // 800BD36C
L_800BD370:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 800BD370
  c->r[0]=R8(c->r[8]+0x00000000u); // 800BD374
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800BD378
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800BD37C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800BD380
  if (crb(c,2)) { goto L_800BD398; } // 800BD384
  c->r[8]=c->r[8]+0x00000001u; // 800BD388
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD370; } // 800BD38C
L_800BD390:;
  c->r[3]=c->r[5]-c->r[7]; // 800BD390
  return; // 800BD394
L_800BD398:;
  cmpu(c,0,c->r[5],c->r[7]); // 800BD398
  if (crb(c,1)) { IRQCHK(c); goto L_800BD358; } // 800BD39C
L_800BD3A0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800BD3A0
  return; // 800BD3A4
}

// fn_800BD3B0
void f_800BD3B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD3B0
  c->r[0]=c->lr; // 800BD3B4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BD3B8
  c->r[0]=0u+0x00000000u; // 800BD3BC
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800BD3C0
  c->r[31]=c->r[6]|c->r[6]; // 800BD3C4
  W32(c->r[1]+0x00000098u,c->r[30]); // 800BD3C8
  c->r[30]=c->r[5]|c->r[5]; // 800BD3CC
  W32(c->r[1]+0x00000094u,c->r[29]); // 800BD3D0
  c->r[29]=c->r[4]|c->r[4]; // 800BD3D4
  W32(c->r[1]+0x00000090u,c->r[28]); // 800BD3D8
  c->r[28]=c->r[3]|c->r[3]; // 800BD3DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BD3E0
  c->r[3]=c->r[3]+0x00000008u; // 800BD3E4
  c->lr=0x800BD3ECu; f_800BD580(c); // 800BD3E8
  c->r[3]=c->r[28]+0x00010000u; // 800BD3EC
  c->r[3]=c->r[3]+0xFFFFF0B4u; // 800BD3F0
  c->lr=0x800BD3F8u; f_800B1070(c); // 800BD3F4
  c->r[5]=0u+0x00010000u; // 800BD3F8
  c->r[4]=c->r[29]|c->r[29]; // 800BD3FC
  c->r[3]=c->r[28]+0x00000014u; // 800BD400
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 800BD404
  c->lr=0x800BD40Cu; f_80004364(c); // 800BD408
  cmps(c,0,(int32_t)c->r[31],0); // 800BD40C
  if (crb(c,2)) { goto L_800BD4B8; } // 800BD410
  c->r[4]=0u+0x802A0000u; // 800BD414
  c->r[5]=0u+0x802A0000u; // 800BD418
  c->r[4]=c->r[4]+0xFFFFD898u; // 800BD41C
  c->r[3]=c->r[1]+0x0000007Cu; // 800BD420
  c->r[5]=c->r[5]+0xFFFFE254u; // 800BD424
  c->r[5]=c->r[5]-c->r[4]; // 800BD428
  c->lr=0x800BD430u; f_800C2020(c); // 800BD42C
  c->r[3]=c->r[1]+0x00000070u; // 800BD430
  c->r[4]=c->r[1]+0x0000007Cu; // 800BD434
  c->lr=0x800BD43Cu; f_800C4E60(c); // 800BD438
  c->r[3]=c->r[1]+0x00000064u; // 800BD43C
  c->r[4]=c->r[1]+0x00000070u; // 800BD440
  c->lr=0x800BD448u; f_800C4DA0(c); // 800BD444
  c->r[3]=c->r[1]+0x00000058u; // 800BD448
  c->r[4]=c->r[1]+0x00000064u; // 800BD44C
  c->r[5]=0u+0x00000001u; // 800BD450
  c->lr=0x800BD458u; f_800C2AA0(c); // 800BD454
  c->r[3]=c->r[1]+0x00000048u; // 800BD458
  c->r[4]=c->r[1]+0x00000058u; // 800BD45C
  c->r[5]=c->r[30]+0x00000001u; // 800BD460
  c->lr=0x800BD468u; f_800C3BE0(c); // 800BD464
  c->r[3]=c->r[28]+0x00010000u; // 800BD468
  c->r[4]=c->r[1]+0x00000048u; // 800BD46C
  c->r[3]=c->r[3]+0xFFFFF0B4u; // 800BD470
  c->lr=0x800BD478u; f_800BD6A0(c); // 800BD474
  c->r[3]=c->r[1]+0x00000048u; // 800BD478
  c->r[4]=0u+0xFFFFFFFFu; // 800BD47C
  c->lr=0x800BD484u; f_800B1090(c); // 800BD480
  c->r[3]=c->r[1]+0x00000058u; // 800BD484
  c->r[4]=0u+0xFFFFFFFFu; // 800BD488
  c->lr=0x800BD490u; f_800BD5A0(c); // 800BD48C
  c->r[3]=c->r[1]+0x00000064u; // 800BD490
  c->r[4]=0u+0xFFFFFFFFu; // 800BD494
  c->lr=0x800BD49Cu; f_80007B90(c); // 800BD498
  c->r[3]=c->r[1]+0x00000070u; // 800BD49C
  c->r[4]=0u+0xFFFFFFFFu; // 800BD4A0
  c->lr=0x800BD4A8u; f_80007B90(c); // 800BD4A4
  c->r[3]=c->r[1]+0x0000007Cu; // 800BD4A8
  c->r[4]=0u+0xFFFFFFFFu; // 800BD4AC
  c->lr=0x800BD4B4u; f_80007B90(c); // 800BD4B0
  goto L_800BD558; // 800BD4B4
L_800BD4B8:;
  c->r[4]=0u+0x802A0000u; // 800BD4B8
  c->r[5]=0u+0x802A0000u; // 800BD4BC
  c->r[4]=c->r[4]+0xFFFFE258u; // 800BD4C0
  c->r[3]=c->r[1]+0x0000003Cu; // 800BD4C4
  c->r[5]=c->r[5]+0xFFFFEBF4u; // 800BD4C8
  c->r[5]=c->r[5]-c->r[4]; // 800BD4CC
  c->lr=0x800BD4D4u; f_800C2020(c); // 800BD4D0
  c->r[3]=c->r[1]+0x00000030u; // 800BD4D4
  c->r[4]=c->r[1]+0x0000003Cu; // 800BD4D8
  c->lr=0x800BD4E0u; f_800C4E60(c); // 800BD4DC
  c->r[3]=c->r[1]+0x00000024u; // 800BD4E0
  c->r[4]=c->r[1]+0x00000030u; // 800BD4E4
  c->lr=0x800BD4ECu; f_800C4DA0(c); // 800BD4E8
  c->r[3]=c->r[1]+0x00000018u; // 800BD4EC
  c->r[4]=c->r[1]+0x00000024u; // 800BD4F0
  c->r[5]=0u+0x00000001u; // 800BD4F4
  c->lr=0x800BD4FCu; f_800C2AA0(c); // 800BD4F8
  c->r[3]=c->r[1]+0x00000008u; // 800BD4FC
  c->r[4]=c->r[1]+0x00000018u; // 800BD500
  c->r[5]=c->r[30]+0x00000001u; // 800BD504
  c->lr=0x800BD50Cu; f_800C3BE0(c); // 800BD508
  c->r[3]=c->r[28]+0x00010000u; // 800BD50C
  c->r[4]=c->r[1]+0x00000008u; // 800BD510
  c->r[3]=c->r[3]+0xFFFFF0B4u; // 800BD514
  c->lr=0x800BD51Cu; f_800BD6A0(c); // 800BD518
  c->r[3]=c->r[1]+0x00000008u; // 800BD51C
  c->r[4]=0u+0xFFFFFFFFu; // 800BD520
  c->lr=0x800BD528u; f_800B1090(c); // 800BD524
  c->r[3]=c->r[1]+0x00000018u; // 800BD528
  c->r[4]=0u+0xFFFFFFFFu; // 800BD52C
  c->lr=0x800BD534u; f_800BD5A0(c); // 800BD530
  c->r[3]=c->r[1]+0x00000024u; // 800BD534
  c->r[4]=0u+0xFFFFFFFFu; // 800BD538
  c->lr=0x800BD540u; f_80007B90(c); // 800BD53C
  c->r[3]=c->r[1]+0x00000030u; // 800BD540
  c->r[4]=0u+0xFFFFFFFFu; // 800BD544
  c->lr=0x800BD54Cu; f_80007B90(c); // 800BD548
  c->r[3]=c->r[1]+0x0000003Cu; // 800BD54C
  c->r[4]=0u+0xFFFFFFFFu; // 800BD550
  c->lr=0x800BD558u; f_80007B90(c); // 800BD554
L_800BD558:;
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800BD558
  c->r[3]=c->r[28]|c->r[28]; // 800BD55C
  c->r[30]=R32(c->r[1]+0x00000098u); // 800BD560
  c->r[29]=R32(c->r[1]+0x00000094u); // 800BD564
  c->r[28]=R32(c->r[1]+0x00000090u); // 800BD568
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BD56C
  c->lr=c->r[0]; // 800BD570
  c->r[1]=c->r[1]+0x000000A0u; // 800BD574
  return; // 800BD578
}

// fn_800BD580
void f_800BD580(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BD580
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BD584
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BD588
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BD58C
  return; // 800BD590
}

// fn_800BD5A0
void f_800BD5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD5A0
  c->r[0]=c->lr; // 800BD5A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD5A8
  c->r[11]=c->r[1]+0x00000020u; // 800BD5AC
  c->lr=0x800BD5B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD5B0
  cmps(c,0,(int32_t)c->r[3],0); // 800BD5B4
  c->r[26]=c->r[3]|c->r[3]; // 800BD5B8
  c->r[27]=c->r[4]|c->r[4]; // 800BD5BC
  if (crb(c,2)) { goto L_800BD678; } // 800BD5C0
  if (crb(c,2)) { goto L_800BD668; } // 800BD5C4
  if (crb(c,2)) { goto L_800BD668; } // 800BD5C8
  c->r[5]=R32(c->r[3]+0x00000000u); // 800BD5CC
  cmps(c,0,(int32_t)c->r[5],0); // 800BD5D0
  if (crb(c,2)) { goto L_800BD668; } // 800BD5D4
  c->r[28]=R32(c->r[3]+0x00000004u); // 800BD5D8
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 800BD5DC
  c->r[0]=c->r[28]-c->r[28]; // 800BD5E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BD5E4
  c->r[29]=c->r[5]+c->r[4]; // 800BD5E8
  goto L_800BD658; // 800BD5EC
L_800BD5F0:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFF4u,0); cr0(c,c->r[29]); // 800BD5F0
  if (crb(c,2)) { goto L_800BD654; } // 800BD5F4
  if (crb(c,2)) { goto L_800BD654; } // 800BD5F8
  if (crb(c,2)) { goto L_800BD654; } // 800BD5FC
  c->r[4]=R32(c->r[29]+0x00000000u); // 800BD600
  cmps(c,0,(int32_t)c->r[4],0); // 800BD604
  if (crb(c,2)) { goto L_800BD654; } // 800BD608
  c->r[30]=R32(c->r[29]+0x00000004u); // 800BD60C
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 800BD610
  c->r[0]=c->r[30]-c->r[30]; // 800BD614
  W32(c->r[29]+0x00000004u,c->r[0]); // 800BD618
  c->r[31]=c->r[4]+c->r[3]; // 800BD61C
  goto L_800BD644; // 800BD620
L_800BD624:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFF4u,0); cr0(c,c->r[31]); // 800BD624
  if (crb(c,2)) { goto L_800BD640; } // 800BD628
  c->r[0]=R32(c->r[31]+0x00000000u); // 800BD62C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD630
  if (crb(c,2)) { goto L_800BD640; } // 800BD634
  c->r[3]=R32(c->r[31]+0x00000008u); // 800BD638
  c->lr=0x800BD640u; f_800B9AD0(c); // 800BD63C
L_800BD640:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800BD640
L_800BD644:;
  cmps(c,0,(int32_t)c->r[30],0); // 800BD644
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD624; } // 800BD648
  c->r[3]=R32(c->r[29]+0x00000000u); // 800BD64C
  c->lr=0x800BD654u; f_800B9AD0(c); // 800BD650
L_800BD654:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800BD654
L_800BD658:;
  cmps(c,0,(int32_t)c->r[28],0); // 800BD658
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD5F0; } // 800BD65C
  c->r[3]=R32(c->r[26]+0x00000000u); // 800BD660
  c->lr=0x800BD668u; f_800B9AD0(c); // 800BD664
L_800BD668:;
  cmps(c,0,(int32_t)c->r[27],0); // 800BD668
  if (!crb(c,1)) { goto L_800BD678; } // 800BD66C
  c->r[3]=c->r[26]|c->r[26]; // 800BD670
  c->lr=0x800BD678u; f_800B9AD0(c); // 800BD674
L_800BD678:;
  c->r[11]=c->r[1]+0x00000020u; // 800BD678
  c->r[3]=c->r[26]|c->r[26]; // 800BD67C
  c->lr=0x800BD684u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD680
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD684
  c->lr=c->r[0]; // 800BD688
  c->r[1]=c->r[1]+0x00000020u; // 800BD68C
  return; // 800BD690
}

// fn_800BD6A0
void f_800BD6A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD6A0
  c->r[0]=c->lr; // 800BD6A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD6A8
  c->r[11]=c->r[1]+0x00000020u; // 800BD6AC
  c->lr=0x800BD6B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD6B0
  cmpu(c,0,c->r[3],c->r[4]); // 800BD6B4
  c->r[30]=c->r[3]|c->r[3]; // 800BD6B8
  c->r[31]=c->r[4]|c->r[4]; // 800BD6BC
  if (crb(c,2)) { goto L_800BDA34; } // 800BD6C0
  c->r[28]=R32(c->r[3]+0x00000004u); // 800BD6C4
  cmps(c,0,(int32_t)c->r[28],0); // 800BD6C8
  if (crb(c,2)) { goto L_800BDA28; } // 800BD6CC
  c->r[29]=R32(c->r[28]+0x00000000u); // 800BD6D0
  cmps(c,0,(int32_t)c->r[29],0); // 800BD6D4
  if (crb(c,2)) { goto L_800BD84C; } // 800BD6D8
  c->r[27]=R32(c->r[29]+0x00000000u); // 800BD6DC
  cmps(c,0,(int32_t)c->r[27],0); // 800BD6E0
  if (crb(c,2)) { goto L_800BD788; } // 800BD6E4
  c->r[26]=R32(c->r[27]+0x00000000u); // 800BD6E8
  cmps(c,0,(int32_t)c->r[26],0); // 800BD6EC
  if (crb(c,2)) { goto L_800BD72C; } // 800BD6F0
  c->r[4]=R32(c->r[26]+0x00000000u); // 800BD6F4
  cmps(c,0,(int32_t)c->r[4],0); // 800BD6F8
  if (crb(c,2)) { goto L_800BD704; } // 800BD6FC
  c->lr=0x800BD704u; f_800B2C80(c); // 800BD700
L_800BD704:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 800BD704
  cmps(c,0,(int32_t)c->r[4],0); // 800BD708
  if (crb(c,2)) { goto L_800BD718; } // 800BD70C
  c->r[3]=c->r[30]|c->r[30]; // 800BD710
  c->lr=0x800BD718u; f_800B2C80(c); // 800BD714
L_800BD718:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD718
  c->r[4]=c->r[26]+0x0000000Cu; // 800BD71C
  c->lr=0x800BD724u; f_800B3090(c); // 800BD720
  c->r[3]=c->r[26]|c->r[26]; // 800BD724
  c->lr=0x800BD72Cu; f_800B9AD0(c); // 800BD728
L_800BD72C:;
  c->r[26]=R32(c->r[27]+0x00000004u); // 800BD72C
  cmps(c,0,(int32_t)c->r[26],0); // 800BD730
  if (crb(c,2)) { goto L_800BD774; } // 800BD734
  c->r[4]=R32(c->r[26]+0x00000000u); // 800BD738
  cmps(c,0,(int32_t)c->r[4],0); // 800BD73C
  if (crb(c,2)) { goto L_800BD74C; } // 800BD740
  c->r[3]=c->r[30]|c->r[30]; // 800BD744
  c->lr=0x800BD74Cu; f_800B2C80(c); // 800BD748
L_800BD74C:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 800BD74C
  cmps(c,0,(int32_t)c->r[4],0); // 800BD750
  if (crb(c,2)) { goto L_800BD760; } // 800BD754
  c->r[3]=c->r[30]|c->r[30]; // 800BD758
  c->lr=0x800BD760u; f_800B2C80(c); // 800BD75C
L_800BD760:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD760
  c->r[4]=c->r[26]+0x0000000Cu; // 800BD764
  c->lr=0x800BD76Cu; f_800B3090(c); // 800BD768
  c->r[3]=c->r[26]|c->r[26]; // 800BD76C
  c->lr=0x800BD774u; f_800B9AD0(c); // 800BD770
L_800BD774:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD774
  c->r[4]=c->r[27]+0x0000000Cu; // 800BD778
  c->lr=0x800BD780u; f_800B3090(c); // 800BD77C
  c->r[3]=c->r[27]|c->r[27]; // 800BD780
  c->lr=0x800BD788u; f_800B9AD0(c); // 800BD784
L_800BD788:;
  c->r[26]=R32(c->r[29]+0x00000004u); // 800BD788
  cmps(c,0,(int32_t)c->r[26],0); // 800BD78C
  if (crb(c,2)) { goto L_800BD838; } // 800BD790
  c->r[27]=R32(c->r[26]+0x00000000u); // 800BD794
  cmps(c,0,(int32_t)c->r[27],0); // 800BD798
  if (crb(c,2)) { goto L_800BD7DC; } // 800BD79C
  c->r[4]=R32(c->r[27]+0x00000000u); // 800BD7A0
  cmps(c,0,(int32_t)c->r[4],0); // 800BD7A4
  if (crb(c,2)) { goto L_800BD7B4; } // 800BD7A8
  c->r[3]=c->r[30]|c->r[30]; // 800BD7AC
  c->lr=0x800BD7B4u; f_800B2C80(c); // 800BD7B0
L_800BD7B4:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800BD7B4
  cmps(c,0,(int32_t)c->r[4],0); // 800BD7B8
  if (crb(c,2)) { goto L_800BD7C8; } // 800BD7BC
  c->r[3]=c->r[30]|c->r[30]; // 800BD7C0
  c->lr=0x800BD7C8u; f_800B2C80(c); // 800BD7C4
L_800BD7C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD7C8
  c->r[4]=c->r[27]+0x0000000Cu; // 800BD7CC
  c->lr=0x800BD7D4u; f_800B3090(c); // 800BD7D0
  c->r[3]=c->r[27]|c->r[27]; // 800BD7D4
  c->lr=0x800BD7DCu; f_800B9AD0(c); // 800BD7D8
L_800BD7DC:;
  c->r[27]=R32(c->r[26]+0x00000004u); // 800BD7DC
  cmps(c,0,(int32_t)c->r[27],0); // 800BD7E0
  if (crb(c,2)) { goto L_800BD824; } // 800BD7E4
  c->r[4]=R32(c->r[27]+0x00000000u); // 800BD7E8
  cmps(c,0,(int32_t)c->r[4],0); // 800BD7EC
  if (crb(c,2)) { goto L_800BD7FC; } // 800BD7F0
  c->r[3]=c->r[30]|c->r[30]; // 800BD7F4
  c->lr=0x800BD7FCu; f_800B2C80(c); // 800BD7F8
L_800BD7FC:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800BD7FC
  cmps(c,0,(int32_t)c->r[4],0); // 800BD800
  if (crb(c,2)) { goto L_800BD810; } // 800BD804
  c->r[3]=c->r[30]|c->r[30]; // 800BD808
  c->lr=0x800BD810u; f_800B2C80(c); // 800BD80C
L_800BD810:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD810
  c->r[4]=c->r[27]+0x0000000Cu; // 800BD814
  c->lr=0x800BD81Cu; f_800B3090(c); // 800BD818
  c->r[3]=c->r[27]|c->r[27]; // 800BD81C
  c->lr=0x800BD824u; f_800B9AD0(c); // 800BD820
L_800BD824:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD824
  c->r[4]=c->r[26]+0x0000000Cu; // 800BD828
  c->lr=0x800BD830u; f_800B3090(c); // 800BD82C
  c->r[3]=c->r[26]|c->r[26]; // 800BD830
  c->lr=0x800BD838u; f_800B9AD0(c); // 800BD834
L_800BD838:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD838
  c->r[4]=c->r[29]+0x0000000Cu; // 800BD83C
  c->lr=0x800BD844u; f_800B3090(c); // 800BD840
  c->r[3]=c->r[29]|c->r[29]; // 800BD844
  c->lr=0x800BD84Cu; f_800B9AD0(c); // 800BD848
L_800BD84C:;
  c->r[26]=R32(c->r[28]+0x00000004u); // 800BD84C
  cmps(c,0,(int32_t)c->r[26],0); // 800BD850
  if (crb(c,2)) { goto L_800BD9CC; } // 800BD854
  c->r[27]=R32(c->r[26]+0x00000000u); // 800BD858
  cmps(c,0,(int32_t)c->r[27],0); // 800BD85C
  if (crb(c,2)) { goto L_800BD908; } // 800BD860
  c->r[29]=R32(c->r[27]+0x00000000u); // 800BD864
  cmps(c,0,(int32_t)c->r[29],0); // 800BD868
  if (crb(c,2)) { goto L_800BD8AC; } // 800BD86C
  c->r[4]=R32(c->r[29]+0x00000000u); // 800BD870
  cmps(c,0,(int32_t)c->r[4],0); // 800BD874
  if (crb(c,2)) { goto L_800BD884; } // 800BD878
  c->r[3]=c->r[30]|c->r[30]; // 800BD87C
  c->lr=0x800BD884u; f_800B2C80(c); // 800BD880
L_800BD884:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800BD884
  cmps(c,0,(int32_t)c->r[4],0); // 800BD888
  if (crb(c,2)) { goto L_800BD898; } // 800BD88C
  c->r[3]=c->r[30]|c->r[30]; // 800BD890
  c->lr=0x800BD898u; f_800B2C80(c); // 800BD894
L_800BD898:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD898
  c->r[4]=c->r[29]+0x0000000Cu; // 800BD89C
  c->lr=0x800BD8A4u; f_800B3090(c); // 800BD8A0
  c->r[3]=c->r[29]|c->r[29]; // 800BD8A4
  c->lr=0x800BD8ACu; f_800B9AD0(c); // 800BD8A8
L_800BD8AC:;
  c->r[29]=R32(c->r[27]+0x00000004u); // 800BD8AC
  cmps(c,0,(int32_t)c->r[29],0); // 800BD8B0
  if (crb(c,2)) { goto L_800BD8F4; } // 800BD8B4
  c->r[4]=R32(c->r[29]+0x00000000u); // 800BD8B8
  cmps(c,0,(int32_t)c->r[4],0); // 800BD8BC
  if (crb(c,2)) { goto L_800BD8CC; } // 800BD8C0
  c->r[3]=c->r[30]|c->r[30]; // 800BD8C4
  c->lr=0x800BD8CCu; f_800B2C80(c); // 800BD8C8
L_800BD8CC:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800BD8CC
  cmps(c,0,(int32_t)c->r[4],0); // 800BD8D0
  if (crb(c,2)) { goto L_800BD8E0; } // 800BD8D4
  c->r[3]=c->r[30]|c->r[30]; // 800BD8D8
  c->lr=0x800BD8E0u; f_800B2C80(c); // 800BD8DC
L_800BD8E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD8E0
  c->r[4]=c->r[29]+0x0000000Cu; // 800BD8E4
  c->lr=0x800BD8ECu; f_800B3090(c); // 800BD8E8
  c->r[3]=c->r[29]|c->r[29]; // 800BD8EC
  c->lr=0x800BD8F4u; f_800B9AD0(c); // 800BD8F0
L_800BD8F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD8F4
  c->r[4]=c->r[27]+0x0000000Cu; // 800BD8F8
  c->lr=0x800BD900u; f_800B3090(c); // 800BD8FC
  c->r[3]=c->r[27]|c->r[27]; // 800BD900
  c->lr=0x800BD908u; f_800B9AD0(c); // 800BD904
L_800BD908:;
  c->r[27]=R32(c->r[26]+0x00000004u); // 800BD908
  cmps(c,0,(int32_t)c->r[27],0); // 800BD90C
  if (crb(c,2)) { goto L_800BD9B8; } // 800BD910
  c->r[29]=R32(c->r[27]+0x00000000u); // 800BD914
  cmps(c,0,(int32_t)c->r[29],0); // 800BD918
  if (crb(c,2)) { goto L_800BD95C; } // 800BD91C
  c->r[4]=R32(c->r[29]+0x00000000u); // 800BD920
  cmps(c,0,(int32_t)c->r[4],0); // 800BD924
  if (crb(c,2)) { goto L_800BD934; } // 800BD928
  c->r[3]=c->r[30]|c->r[30]; // 800BD92C
  c->lr=0x800BD934u; f_800B2C80(c); // 800BD930
L_800BD934:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800BD934
  cmps(c,0,(int32_t)c->r[4],0); // 800BD938
  if (crb(c,2)) { goto L_800BD948; } // 800BD93C
  c->r[3]=c->r[30]|c->r[30]; // 800BD940
  c->lr=0x800BD948u; f_800B2C80(c); // 800BD944
L_800BD948:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD948
  c->r[4]=c->r[29]+0x0000000Cu; // 800BD94C
  c->lr=0x800BD954u; f_800B3090(c); // 800BD950
  c->r[3]=c->r[29]|c->r[29]; // 800BD954
  c->lr=0x800BD95Cu; f_800B9AD0(c); // 800BD958
L_800BD95C:;
  c->r[29]=R32(c->r[27]+0x00000004u); // 800BD95C
  cmps(c,0,(int32_t)c->r[29],0); // 800BD960
  if (crb(c,2)) { goto L_800BD9A4; } // 800BD964
  c->r[4]=R32(c->r[29]+0x00000000u); // 800BD968
  cmps(c,0,(int32_t)c->r[4],0); // 800BD96C
  if (crb(c,2)) { goto L_800BD97C; } // 800BD970
  c->r[3]=c->r[30]|c->r[30]; // 800BD974
  c->lr=0x800BD97Cu; f_800B2C80(c); // 800BD978
L_800BD97C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800BD97C
  cmps(c,0,(int32_t)c->r[4],0); // 800BD980
  if (crb(c,2)) { goto L_800BD990; } // 800BD984
  c->r[3]=c->r[30]|c->r[30]; // 800BD988
  c->lr=0x800BD990u; f_800B2C80(c); // 800BD98C
L_800BD990:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD990
  c->r[4]=c->r[29]+0x0000000Cu; // 800BD994
  c->lr=0x800BD99Cu; f_800B3090(c); // 800BD998
  c->r[3]=c->r[29]|c->r[29]; // 800BD99C
  c->lr=0x800BD9A4u; f_800B9AD0(c); // 800BD9A0
L_800BD9A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD9A4
  c->r[4]=c->r[27]+0x0000000Cu; // 800BD9A8
  c->lr=0x800BD9B0u; f_800B3090(c); // 800BD9AC
  c->r[3]=c->r[27]|c->r[27]; // 800BD9B0
  c->lr=0x800BD9B8u; f_800B9AD0(c); // 800BD9B4
L_800BD9B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD9B8
  c->r[4]=c->r[26]+0x0000000Cu; // 800BD9BC
  c->lr=0x800BD9C4u; f_800B3090(c); // 800BD9C0
  c->r[3]=c->r[26]|c->r[26]; // 800BD9C4
  c->lr=0x800BD9CCu; f_800B9AD0(c); // 800BD9C8
L_800BD9CC:;
  c->r[29]=addc(c,c->r[28],0x0000000Cu,0); cr0(c,c->r[29]); // 800BD9CC
  if (crb(c,2)) { goto L_800BDA0C; } // 800BD9D0
  c->r[0]=addc(c,c->r[29],0x0000000Cu,0); cr0(c,c->r[0]); // 800BD9D4
  if (crb(c,2)) { goto L_800BD9F0; } // 800BD9D8
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800BD9DC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD9E0
  if (crb(c,2)) { goto L_800BD9F0; } // 800BD9E4
  c->r[3]=R32(c->r[29]+0x00000014u); // 800BD9E8
  c->lr=0x800BD9F0u; f_800B9AD0(c); // 800BD9EC
L_800BD9F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BD9F0
  if (crb(c,2)) { goto L_800BDA0C; } // 800BD9F4
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BD9F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BD9FC
  if (crb(c,2)) { goto L_800BDA0C; } // 800BDA00
  c->r[3]=R32(c->r[29]+0x00000008u); // 800BDA04
  c->lr=0x800BDA0Cu; f_800B9AD0(c); // 800BDA08
L_800BDA0C:;
  c->r[3]=c->r[28]|c->r[28]; // 800BDA0C
  c->lr=0x800BDA14u; f_800B9AD0(c); // 800BDA10
  c->r[3]=0u+0x00000000u; // 800BDA14
  c->r[0]=c->r[30]+0x00000004u; // 800BDA18
  W32(c->r[30]+0x00000000u,c->r[3]); // 800BDA1C
  W32(c->r[30]+0x00000004u,c->r[3]); // 800BDA20
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800BDA24
L_800BDA28:;
  c->r[3]=c->r[30]|c->r[30]; // 800BDA28
  c->r[4]=c->r[31]|c->r[31]; // 800BDA2C
  c->lr=0x800BDA34u; f_800C16D0(c); // 800BDA30
L_800BDA34:;
  c->r[11]=c->r[1]+0x00000020u; // 800BDA34
  c->r[3]=c->r[30]|c->r[30]; // 800BDA38
  c->lr=0x800BDA40u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDA3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BDA40
  c->lr=c->r[0]; // 800BDA44
  c->r[1]=c->r[1]+0x00000020u; // 800BDA48
  return; // 800BDA4C
}

// fn_800BDA50
void f_800BDA50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDA50
  c->r[0]=c->lr; // 800BDA54
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BDA58
  c->r[11]=c->r[1]+0x00000060u; // 800BDA5C
  c->lr=0x800BDA64u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BDA60
  c->r[29]=c->r[4]+0x00010000u; // 800BDA64
  {uint32_t ea=c->r[29]+0xFFFFF0B8u; c->r[31]=R32(ea); c->r[29]=ea;} // 800BDA68
  c->r[26]=c->r[3]|c->r[3]; // 800BDA6C
  c->r[27]=c->r[4]|c->r[4]; // 800BDA70
  c->r[28]=c->r[5]|c->r[5]; // 800BDA74
  c->r[30]=c->r[5]+0x00000001u; // 800BDA78
  goto L_800BDB64; // 800BDA7C
L_800BDA80:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BDA80
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDA84
  if (!crb(c,2)) { goto L_800BDA9C; } // 800BDA88
  c->r[0]=R8(c->r[28]+0x00000000u); // 800BDA8C
  c->r[4]=c->r[30]|c->r[30]; // 800BDA90
  c->r[25]=rotl(c->r[0],0)&0x0000007Fu; // 800BDA94
  goto L_800BDAA4; // 800BDA98
L_800BDA9C:;
  c->r[4]=R32(c->r[28]+0x00000008u); // 800BDA9C
  c->r[25]=R32(c->r[28]+0x00000004u); // 800BDAA0
L_800BDAA4:;
  W32(c->r[1]+0x00000020u,c->r[25]); // 800BDAA4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800BDAA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDAAC
  if (!crb(c,2)) { goto L_800BDAC0; } // 800BDAB0
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800BDAB4
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800BDAB8
  goto L_800BDAC4; // 800BDABC
L_800BDAC0:;
  c->r[5]=R32(c->r[31]+0x00000010u); // 800BDAC0
L_800BDAC4:;
  W32(c->r[1]+0x00000024u,c->r[5]); // 800BDAC4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800BDAC8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDACC
  if (!crb(c,2)) { goto L_800BDAE4; } // 800BDAD0
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800BDAD4
  c->r[3]=c->r[31]+0x0000000Du; // 800BDAD8
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800BDADC
  goto L_800BDAEC; // 800BDAE0
L_800BDAE4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BDAE4
  c->r[0]=R32(c->r[31]+0x00000010u); // 800BDAE8
L_800BDAEC:;
  cmpu(c,0,c->r[5],c->r[0]); // 800BDAEC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BDAF0
  c->r[5]=c->r[1]+0x0000001Cu; // 800BDAF4
  if (!crb(c,0)) { goto L_800BDB00; } // 800BDAF8
  c->r[5]=c->r[1]+0x00000024u; // 800BDAFC
L_800BDB00:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800BDB00
  c->r[5]=c->r[1]+0x00000018u; // 800BDB04
  W32(c->r[1]+0x00000018u,c->r[0]); // 800BDB08
  cmpu(c,0,c->r[25],c->r[0]); // 800BDB0C
  if (!crb(c,0)) { goto L_800BDB18; } // 800BDB10
  c->r[5]=c->r[1]+0x00000020u; // 800BDB14
L_800BDB18:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800BDB18
  c->lr=0x800BDB20u; f_8021C08C(c); // 800BDB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800BDB20
  if (!crb(c,2)) { goto L_800BDB4C; } // 800BDB24
  c->r[0]=R32(c->r[1]+0x00000018u); // 800BDB28
  cmpu(c,0,c->r[0],c->r[25]); // 800BDB2C
  if (!crb(c,0)) { goto L_800BDB3C; } // 800BDB30
  c->r[3]=0u+0xFFFFFFFFu; // 800BDB34
  goto L_800BDB4C; // 800BDB38
L_800BDB3C:;
  if (!crb(c,2)) { goto L_800BDB48; } // 800BDB3C
  c->r[3]=0u+0x00000000u; // 800BDB40
  goto L_800BDB4C; // 800BDB44
L_800BDB48:;
  c->r[3]=0u+0x00000001u; // 800BDB48
L_800BDB4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BDB4C
  if (crb(c,0)) { goto L_800BDB60; } // 800BDB50
  c->r[29]=c->r[31]|c->r[31]; // 800BDB54
  c->r[31]=R32(c->r[31]+0x00000000u); // 800BDB58
  goto L_800BDB64; // 800BDB5C
L_800BDB60:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 800BDB60
L_800BDB64:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BDB64
  if (!crb(c,2)) { IRQCHK(c); goto L_800BDA80; } // 800BDB68
  c->r[3]=c->r[27]+0x00010000u; // 800BDB6C
  c->r[0]=c->r[3]+0xFFFFF0B8u; // 800BDB70
  cmpu(c,0,c->r[29],c->r[0]); // 800BDB74
  if (crb(c,2)) { goto L_800BDC50; } // 800BDB78
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800BDB7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDB80
  if (!crb(c,2)) { goto L_800BDB98; } // 800BDB84
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800BDB88
  c->r[4]=c->r[29]+0x0000000Du; // 800BDB8C
  c->r[31]=rotl(c->r[0],0)&0x0000007Fu; // 800BDB90
  goto L_800BDBA0; // 800BDB94
L_800BDB98:;
  c->r[4]=R32(c->r[29]+0x00000014u); // 800BDB98
  c->r[31]=R32(c->r[29]+0x00000010u); // 800BDB9C
L_800BDBA0:;
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BDBA0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BDBA4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDBA8
  if (!crb(c,2)) { goto L_800BDBBC; } // 800BDBAC
  c->r[0]=R8(c->r[28]+0x00000000u); // 800BDBB0
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 800BDBB4
  goto L_800BDBC0; // 800BDBB8
L_800BDBBC:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800BDBBC
L_800BDBC0:;
  W32(c->r[1]+0x00000028u,c->r[3]); // 800BDBC0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BDBC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDBC8
  if (!crb(c,2)) { goto L_800BDBDC; } // 800BDBCC
  c->r[0]=R8(c->r[28]+0x00000000u); // 800BDBD0
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800BDBD4
  goto L_800BDBE4; // 800BDBD8
L_800BDBDC:;
  c->r[30]=R32(c->r[28]+0x00000008u); // 800BDBDC
  c->r[0]=R32(c->r[28]+0x00000004u); // 800BDBE0
L_800BDBE4:;
  cmpu(c,0,c->r[3],c->r[0]); // 800BDBE4
  W32(c->r[1]+0x00000030u,c->r[0]); // 800BDBE8
  c->r[3]=c->r[1]+0x00000030u; // 800BDBEC
  if (!crb(c,0)) { goto L_800BDBF8; } // 800BDBF0
  c->r[3]=c->r[1]+0x00000028u; // 800BDBF4
L_800BDBF8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BDBF8
  c->r[3]=c->r[30]|c->r[30]; // 800BDBFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BDC00
  c->r[5]=c->r[1]+0x00000034u; // 800BDC04
  cmpu(c,0,c->r[31],c->r[0]); // 800BDC08
  if (!crb(c,0)) { goto L_800BDC14; } // 800BDC0C
  c->r[5]=c->r[1]+0x0000002Cu; // 800BDC10
L_800BDC14:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800BDC14
  c->lr=0x800BDC1Cu; f_8021C08C(c); // 800BDC18
  cmps(c,0,(int32_t)c->r[3],0); // 800BDC1C
  if (!crb(c,2)) { goto L_800BDC48; } // 800BDC20
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BDC24
  cmpu(c,0,c->r[0],c->r[31]); // 800BDC28
  if (!crb(c,0)) { goto L_800BDC38; } // 800BDC2C
  c->r[3]=0u+0xFFFFFFFFu; // 800BDC30
  goto L_800BDC48; // 800BDC34
L_800BDC38:;
  if (!crb(c,2)) { goto L_800BDC44; } // 800BDC38
  c->r[3]=0u+0x00000000u; // 800BDC3C
  goto L_800BDC48; // 800BDC40
L_800BDC44:;
  c->r[3]=0u+0x00000001u; // 800BDC44
L_800BDC48:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BDC48
  if (!crb(c,0)) { goto L_800BDC58; } // 800BDC4C
L_800BDC50:;
  c->r[29]=c->r[27]+0x00010000u; // 800BDC50
  c->r[29]=c->r[29]+0xFFFFF0B8u; // 800BDC54
L_800BDC58:;
  c->r[3]=c->r[27]+0x00010000u; // 800BDC58
  c->r[0]=c->r[3]+0xFFFFF0B8u; // 800BDC5C
  cmpu(c,0,c->r[29],c->r[0]); // 800BDC60
  if (!crb(c,2)) { goto L_800BDCBC; } // 800BDC64
  c->r[0]=0u+0x00000000u; // 800BDC68
  c->r[25]=c->r[13]+0xFFFF8E58u; // 800BDC6C
  W32(c->r[26]+0x00000000u,c->r[0]); // 800BDC70
  c->r[3]=c->r[25]|c->r[25]; // 800BDC74
  W32(c->r[26]+0x00000004u,c->r[0]); // 800BDC78
  W32(c->r[26]+0x00000008u,c->r[0]); // 800BDC7C
  c->lr=0x800BDC84u; f_80216B70(c); // 800BDC80
  c->r[27]=c->r[3]|c->r[3]; // 800BDC84
  c->r[3]=c->r[26]|c->r[26]; // 800BDC88
  c->r[4]=c->r[27]|c->r[27]; // 800BDC8C
  c->lr=0x800BDC94u; f_80007C00(c); // 800BDC90
  c->r[0]=R8(c->r[1]+0x00000014u); // 800BDC94
  c->r[3]=c->r[26]|c->r[26]; // 800BDC98
  W8(c->r[1]+0x00000010u,c->r[0]); // 800BDC9C
  c->r[6]=c->r[25]|c->r[25]; // 800BDCA0
  c->r[7]=c->r[25]+c->r[27]; // 800BDCA4
  c->r[8]=c->r[1]+0x00000010u; // 800BDCA8
  c->r[4]=0u+0x00000000u; // 800BDCAC
  c->r[5]=0u+0x00000000u; // 800BDCB0
  c->lr=0x800BDCB8u; f_80007DC0(c); // 800BDCB4
  goto L_800BDD28; // 800BDCB8
L_800BDCBC:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 800BDCBC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800BDCC0
  if (!crb(c,2)) { goto L_800BDCE0; } // 800BDCC4
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800BDCC8
  W32(c->r[26]+0x00000004u,c->r[0]); // 800BDCCC
  W32(c->r[26]+0x00000000u,c->r[3]); // 800BDCD0
  c->r[0]=R32(c->r[29]+0x00000020u); // 800BDCD4
  W32(c->r[26]+0x00000008u,c->r[0]); // 800BDCD8
  goto L_800BDD28; // 800BDCDC
L_800BDCE0:;
  c->r[0]=0u+0x00000000u; // 800BDCE0
  W32(c->r[26]+0x00000000u,c->r[0]); // 800BDCE4
  c->r[25]=c->r[29]+0x0000001Cu; // 800BDCE8
  c->r[3]=c->r[26]|c->r[26]; // 800BDCEC
  W32(c->r[26]+0x00000004u,c->r[0]); // 800BDCF0
  W32(c->r[26]+0x00000008u,c->r[0]); // 800BDCF4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 800BDCF8
  c->lr=0x800BDD00u; f_80007C00(c); // 800BDCFC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800BDD00
  c->r[3]=c->r[26]|c->r[26]; // 800BDD04
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BDD08
  c->r[8]=c->r[1]+0x00000008u; // 800BDD0C
  c->r[4]=0u+0x00000000u; // 800BDD10
  c->r[5]=0u+0x00000000u; // 800BDD14
  c->r[6]=R32(c->r[29]+0x00000020u); // 800BDD18
  c->r[0]=R32(c->r[25]+0x00000000u); // 800BDD1C
  c->r[7]=c->r[6]+c->r[0]; // 800BDD20
  c->lr=0x800BDD28u; f_80007DC0(c); // 800BDD24
L_800BDD28:;
  c->r[11]=c->r[1]+0x00000060u; // 800BDD28
  c->lr=0x800BDD30u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDD2C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BDD30
  c->lr=c->r[0]; // 800BDD34
  c->r[1]=c->r[1]+0x00000060u; // 800BDD38
  return; // 800BDD3C
}

// fn_800BDD40
void f_800BDD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDD40
  c->r[0]=c->lr; // 800BDD44
  W32(c->r[1]+0x00000184u,c->r[0]); // 800BDD48
  c->r[11]=c->r[1]+0x00000180u; // 800BDD4C
  c->lr=0x800BDD54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BDD50
  c->r[0]=0u+0x00000000u; // 800BDD54
  W32(c->r[1]+0x00000048u,c->r[0]); // 800BDD58
  c->r[28]=c->r[3]|c->r[3]; // 800BDD5C
  c->r[30]=c->r[4]|c->r[4]; // 800BDD60
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BDD64
  c->r[29]=c->r[5]|c->r[5]; // 800BDD68
  c->r[4]=R32(c->r[13]+0xFFFF8E50u); // 800BDD6C
  c->r[3]=c->r[1]+0x00000068u; // 800BDD70
  W32(c->r[1]+0x00000050u,c->r[0]); // 800BDD74
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 800BDD78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BDD7C
  c->lr=0x800BDD84u; f_8021E904(c); // 800BDD80
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BDD84
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BDD88
  if (!crb(c,2)) { goto L_800BDD9C; } // 800BDD8C
  c->r[0]=R8(c->r[1]+0x00000048u); // 800BDD90
  c->r[27]=rotl(c->r[0],0)&0x0000007Fu; // 800BDD94
  goto L_800BDDA0; // 800BDD98
L_800BDD9C:;
  c->r[27]=R32(c->r[1]+0x0000004Cu); // 800BDD9C
L_800BDDA0:;
  c->r[0]=R8(c->r[1]+0x00000024u); // 800BDDA0
  c->r[3]=c->r[1]+0x00000068u; // 800BDDA4
  W8(c->r[1]+0x00000020u,c->r[0]); // 800BDDA8
  c->lr=0x800BDDB0u; f_80216B70(c); // 800BDDAC
  c->r[6]=c->r[1]+0x00000068u; // 800BDDB0
  c->r[0]=c->r[3]|c->r[3]; // 800BDDB4
  c->r[7]=c->r[6]|c->r[6]; // 800BDDB8
  c->r[5]=c->r[27]|c->r[27]; // 800BDDBC
  c->r[3]=c->r[1]+0x00000048u; // 800BDDC0
  c->r[8]=c->r[1]+0x00000020u; // 800BDDC4
  c->r[7]=c->r[7]+c->r[0]; // 800BDDC8
  c->r[4]=0u+0x00000000u; // 800BDDCC
  c->lr=0x800BDDD4u; f_80007DC0(c); // 800BDDD0
  c->r[3]=c->r[30]+0x0000001Fu; // 800BDDD4
  c->r[0]=0u+0x00000002u; // 800BDDD8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 800BDDDC
  W32(c->r[1]+0x00000054u,c->r[30]); // 800BDDE0
  W32(c->r[1]+0x00000058u,c->r[3]); // 800BDDE4
  W8(c->r[1]+0x00000060u,c->r[29]); // 800BDDE8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800BDDEC
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800BDDF0
  c->r[4]=R32(c->r[28]+0x00000010u); // 800BDDF4
  cmpu(c,0,c->r[0],c->r[4]); // 800BDDF8
  if (!crb(c,0)) { goto L_800BDEA8; } // 800BDDFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BDE00
  c->r[3]=R32(c->r[28]+0x00000008u); // 800BDE04
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BDE08
  if (crb(c,2)) { goto L_800BDE98; } // 800BDE0C
  c->r[3]=R32(c->r[1]+0x00000048u); // 800BDE10
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800BDE14
  if (!crb(c,2)) { goto L_800BDE34; } // 800BDE18
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BDE1C
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BDE20
  W32(c->r[27]+0x00000004u,c->r[0]); // 800BDE24
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BDE28
  W32(c->r[27]+0x00000008u,c->r[0]); // 800BDE2C
  goto L_800BDE78; // 800BDE30
L_800BDE34:;
  c->r[0]=0u+0x00000000u; // 800BDE34
  W32(c->r[27]+0x00000000u,c->r[0]); // 800BDE38
  c->r[3]=c->r[27]|c->r[27]; // 800BDE3C
  W32(c->r[27]+0x00000004u,c->r[0]); // 800BDE40
  W32(c->r[27]+0x00000008u,c->r[0]); // 800BDE44
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800BDE48
  c->lr=0x800BDE50u; f_80007C00(c); // 800BDE4C
  c->r[5]=R8(c->r[1]+0x00000008u); // 800BDE50
  c->r[3]=c->r[27]|c->r[27]; // 800BDE54
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 800BDE58
  c->r[8]=c->r[1]+0x0000000Cu; // 800BDE5C
  c->r[6]=R32(c->r[1]+0x00000050u); // 800BDE60
  c->r[4]=0u+0x00000000u; // 800BDE64
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BDE68
  c->r[5]=0u+0x00000000u; // 800BDE6C
  c->r[7]=c->r[6]+c->r[0]; // 800BDE70
  c->lr=0x800BDE78u; f_80007DC0(c); // 800BDE74
L_800BDE78:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BDE78
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800BDE7C
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BDE80
  W32(c->r[27]+0x00000010u,c->r[0]); // 800BDE84
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800BDE88
  W32(c->r[27]+0x00000014u,c->r[0]); // 800BDE8C
  c->r[0]=R8(c->r[1]+0x00000060u); // 800BDE90
  W8(c->r[27]+0x00000018u,c->r[0]); // 800BDE94
L_800BDE98:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800BDE98
  c->r[0]=c->r[3]+0x00000001u; // 800BDE9C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800BDEA0
  goto L_800BE2A8; // 800BDEA4
L_800BDEA8:;
  c->r[3]=0u+0x09250000u; // 800BDEA8
  c->r[0]=c->r[3]+0xFFFF9249u; // 800BDEAC
  c->r[0]=c->r[0]-c->r[4]; // 800BDEB0
  cmpu(c,0,c->r[0],0x00000001u); // 800BDEB4
  if (!crb(c,0)) { goto L_800BDEDC; } // 800BDEB8
  c->r[3]=0u+0x802D0000u; // 800BDEBC
  c->r[4]=0u+0x802A0000u; // 800BDEC0
  c->r[3]=c->r[3]+0x000050B0u; // 800BDEC4
  c->r[4]=c->r[4]+0xFFFFF01Cu; // 800BDEC8
  c->r[3]=c->r[3]+0x000000A0u; // 800BDECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BDED0
  c->lr=0x800BDED8u; f_8021E5C0(c); // 800BDED4
  c->lr=0x800BDEDCu; f_802247E0(c); // 800BDED8
L_800BDEDC:;
  c->r[5]=0u+0x00000000u; // 800BDEDC
  c->r[4]=c->r[28]+0x00000010u; // 800BDEE0
  c->r[3]=0u+0x09250000u; // 800BDEE4
  W32(c->r[1]+0x00000034u,c->r[5]); // 800BDEE8
  c->r[0]=c->r[3]+0xFFFF9249u; // 800BDEEC
  W32(c->r[1]+0x00000038u,c->r[5]); // 800BDEF0
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800BDEF4
  W32(c->r[1]+0x00000040u,c->r[4]); // 800BDEF8
  W32(c->r[1]+0x00000044u,c->r[5]); // 800BDEFC
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800BDF00
  c->r[31]=R32(c->r[28]+0x00000010u); // 800BDF04
  c->r[3]=c->r[3]+0x00000001u; // 800BDF08
  c->r[3]=c->r[3]-c->r[31]; // 800BDF0C
  c->r[0]=c->r[0]-c->r[31]; // 800BDF10
  cmpu(c,0,c->r[3],c->r[0]); // 800BDF14
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BDF18
  if (!crb(c,1)) { goto L_800BDF40; } // 800BDF1C
  c->r[3]=0u+0x802D0000u; // 800BDF20
  c->r[4]=0u+0x802A0000u; // 800BDF24
  c->r[3]=c->r[3]+0x000050B0u; // 800BDF28
  c->r[4]=c->r[4]+0xFFFFF01Cu; // 800BDF2C
  c->r[3]=c->r[3]+0x000000A0u; // 800BDF30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BDF34
  c->lr=0x800BDF3Cu; f_8021E5C0(c); // 800BDF38
  c->lr=0x800BDF40u; f_802247E0(c); // 800BDF3C
L_800BDF40:;
  c->r[3]=0u+0x030C0000u; // 800BDF40
  c->r[0]=c->r[3]+0x000030C3u; // 800BDF44
  cmpu(c,0,c->r[31],c->r[0]); // 800BDF48
  if (!crb(c,0)) { goto L_800BDF90; } // 800BDF4C
  c->r[5]=c->r[31]+0x00000001u; // 800BDF50
  c->r[3]=0u+0xCCCD0000u; // 800BDF54
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800BDF58
  c->r[0]=R32(c->r[1]+0x00000030u); // 800BDF5C
  c->r[4]=c->r[4]-c->r[5]; // 800BDF60
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 800BDF64
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800BDF68
  c->r[3]=c->r[1]+0x00000028u; // 800BDF6C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800BDF70
  W32(c->r[1]+0x00000028u,c->r[4]); // 800BDF74
  cmpu(c,0,c->r[4],c->r[0]); // 800BDF78
  if (!crb(c,0)) { goto L_800BDF84; } // 800BDF7C
  c->r[3]=c->r[1]+0x00000030u; // 800BDF80
L_800BDF84:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BDF84
  c->r[27]=c->r[31]+c->r[0]; // 800BDF88
  goto L_800BDFD4; // 800BDF8C
L_800BDF90:;
  c->r[3]=0u+0x06180000u; // 800BDF90
  c->r[0]=c->r[3]+0x00006186u; // 800BDF94
  cmpu(c,0,c->r[31],c->r[0]); // 800BDF98
  if (!crb(c,0)) { goto L_800BDFCC; } // 800BDF9C
  c->r[3]=c->r[31]+0x00000001u; // 800BDFA0
  c->r[0]=R32(c->r[1]+0x00000030u); // 800BDFA4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800BDFA8
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800BDFAC
  cmpu(c,0,c->r[3],c->r[0]); // 800BDFB0
  c->r[3]=c->r[1]+0x0000002Cu; // 800BDFB4
  if (!crb(c,0)) { goto L_800BDFC0; } // 800BDFB8
  c->r[3]=c->r[1]+0x00000030u; // 800BDFBC
L_800BDFC0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BDFC0
  c->r[27]=c->r[31]+c->r[0]; // 800BDFC4
  goto L_800BDFD4; // 800BDFC8
L_800BDFCC:;
  c->r[3]=0u+0x09250000u; // 800BDFCC
  c->r[27]=c->r[3]+0xFFFF9249u; // 800BDFD0
L_800BDFD4:;
  c->r[3]=0u+0x09250000u; // 800BDFD4
  c->r[0]=c->r[3]+0xFFFF9249u; // 800BDFD8
  cmpu(c,0,c->r[27],c->r[0]); // 800BDFDC
  if (!crb(c,1)) { goto L_800BE004; } // 800BDFE0
  c->r[3]=0u+0x802D0000u; // 800BDFE4
  c->r[4]=0u+0x802A0000u; // 800BDFE8
  c->r[3]=c->r[3]+0x000050B0u; // 800BDFEC
  c->r[4]=c->r[4]+0xFFFFF01Cu; // 800BDFF0
  c->r[3]=c->r[3]+0x000000A0u; // 800BDFF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BDFF8
  c->lr=0x800BE000u; f_8021E5C0(c); // 800BDFFC
  c->lr=0x800BE004u; f_802247E0(c); // 800BE000
L_800BE004:;
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)28); // 800BE004
  c->lr=0x800BE00Cu; f_800B98F0(c); // 800BE008
  cmps(c,0,(int32_t)c->r[3],0); // 800BE00C
  c->r[29]=c->r[3]|c->r[3]; // 800BE010
  if (!crb(c,2)) { goto L_800BE038; } // 800BE014
  c->r[3]=0u+0x802D0000u; // 800BE018
  c->r[4]=0u+0x802A0000u; // 800BE01C
  c->r[3]=c->r[3]+0x000050B0u; // 800BE020
  c->r[3]=c->r[3]+0x000000A0u; // 800BE024
  c->r[4]=c->r[4]+0xFFFFF800u; // 800BE028
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE02C
  c->lr=0x800BE034u; f_8021E5C0(c); // 800BE030
  c->lr=0x800BE038u; f_802247E0(c); // 800BE034
L_800BE038:;
  c->r[3]=R32(c->r[1]+0x00000038u); // 800BE038
  c->r[0]=0u+0x00000000u; // 800BE03C
  W32(c->r[1]+0x00000034u,c->r[29]); // 800BE040
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800BE044
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 800BE048
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800BE04C
  W32(c->r[1]+0x00000044u,c->r[3]); // 800BE050
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800BE054
  c->r[3]=c->r[29]+c->r[3]; // 800BE058
  c->r[27]=c->r[4]+c->r[3]; cr0(c,c->r[27]); // 800BE05C
  if (crb(c,2)) { goto L_800BE0E8; } // 800BE060
  c->r[4]=R32(c->r[1]+0x00000048u); // 800BE064
  c->r[3]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[3]); // 800BE068
  if (!crb(c,2)) { goto L_800BE088; } // 800BE06C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BE070
  W32(c->r[27]+0x00000000u,c->r[4]); // 800BE074
  W32(c->r[27]+0x00000004u,c->r[0]); // 800BE078
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BE07C
  W32(c->r[27]+0x00000008u,c->r[0]); // 800BE080
  goto L_800BE0C8; // 800BE084
L_800BE088:;
  W32(c->r[27]+0x00000000u,c->r[0]); // 800BE088
  c->r[3]=c->r[27]|c->r[27]; // 800BE08C
  W32(c->r[27]+0x00000004u,c->r[0]); // 800BE090
  W32(c->r[27]+0x00000008u,c->r[0]); // 800BE094
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800BE098
  c->lr=0x800BE0A0u; f_80007C00(c); // 800BE09C
  c->r[5]=R8(c->r[1]+0x0000001Cu); // 800BE0A0
  c->r[3]=c->r[27]|c->r[27]; // 800BE0A4
  W8(c->r[1]+0x00000018u,c->r[5]); // 800BE0A8
  c->r[8]=c->r[1]+0x00000018u; // 800BE0AC
  c->r[6]=R32(c->r[1]+0x00000050u); // 800BE0B0
  c->r[4]=0u+0x00000000u; // 800BE0B4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BE0B8
  c->r[5]=0u+0x00000000u; // 800BE0BC
  c->r[7]=c->r[6]+c->r[0]; // 800BE0C0
  c->lr=0x800BE0C8u; f_80007DC0(c); // 800BE0C4
L_800BE0C8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BE0C8
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800BE0CC
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BE0D0
  W32(c->r[27]+0x00000010u,c->r[0]); // 800BE0D4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800BE0D8
  W32(c->r[27]+0x00000014u,c->r[0]); // 800BE0DC
  c->r[0]=R8(c->r[1]+0x00000060u); // 800BE0E0
  W8(c->r[27]+0x00000018u,c->r[0]); // 800BE0E4
L_800BE0E8:;
  c->r[3]=R32(c->r[1]+0x00000038u); // 800BE0E8
  c->r[27]=0u+0x00000000u; // 800BE0EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BE0F0
  c->r[3]=c->r[3]+0x00000001u; // 800BE0F4
  W32(c->r[1]+0x00000038u,c->r[3]); // 800BE0F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BE0FC
  c->r[3]=R32(c->r[1]+0x00000034u); // 800BE100
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 800BE104
  c->r[29]=R32(c->r[28]+0x00000008u); // 800BE108
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800BE10C
  c->r[31]=c->r[3]+c->r[0]; // 800BE110
  c->r[30]=c->r[29]+c->r[4]; // 800BE114
  goto L_800BE1C4; // 800BE118
L_800BE11C:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE4u,0); cr0(c,c->r[31]); // 800BE11C
  c->r[30]=c->r[30]+0xFFFFFFE4u; // 800BE120
  if (crb(c,2)) { goto L_800BE1AC; } // 800BE124
  c->r[3]=R32(c->r[30]+0x00000000u); // 800BE128
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800BE12C
  if (!crb(c,2)) { goto L_800BE14C; } // 800BE130
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BE134
  W32(c->r[31]+0x00000000u,c->r[3]); // 800BE138
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BE13C
  c->r[0]=R32(c->r[30]+0x00000008u); // 800BE140
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BE144
  goto L_800BE18C; // 800BE148
L_800BE14C:;
  W32(c->r[31]+0x00000000u,c->r[27]); // 800BE14C
  c->r[3]=c->r[31]|c->r[31]; // 800BE150
  W32(c->r[31]+0x00000004u,c->r[27]); // 800BE154
  W32(c->r[31]+0x00000008u,c->r[27]); // 800BE158
  c->r[4]=R32(c->r[30]+0x00000004u); // 800BE15C
  c->lr=0x800BE164u; f_80007C00(c); // 800BE160
  c->r[0]=R8(c->r[1]+0x00000014u); // 800BE164
  c->r[3]=c->r[31]|c->r[31]; // 800BE168
  W8(c->r[1]+0x00000010u,c->r[0]); // 800BE16C
  c->r[8]=c->r[1]+0x00000010u; // 800BE170
  c->r[4]=0u+0x00000000u; // 800BE174
  c->r[5]=0u+0x00000000u; // 800BE178
  c->r[6]=R32(c->r[30]+0x00000008u); // 800BE17C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BE180
  c->r[7]=c->r[6]+c->r[0]; // 800BE184
  c->lr=0x800BE18Cu; f_80007DC0(c); // 800BE188
L_800BE18C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800BE18C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BE190
  c->r[0]=R32(c->r[30]+0x00000010u); // 800BE194
  W32(c->r[31]+0x00000010u,c->r[0]); // 800BE198
  c->r[0]=R32(c->r[30]+0x00000014u); // 800BE19C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800BE1A0
  c->r[0]=R8(c->r[30]+0x00000018u); // 800BE1A4
  W8(c->r[31]+0x00000018u,c->r[0]); // 800BE1A8
L_800BE1AC:;
  c->r[4]=R32(c->r[1]+0x00000044u); // 800BE1AC
  c->r[3]=R32(c->r[1]+0x00000038u); // 800BE1B0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BE1B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BE1B8
  c->r[0]=c->r[3]+0x00000001u; // 800BE1BC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800BE1C0
L_800BE1C4:;
  cmpu(c,0,c->r[30],c->r[29]); // 800BE1C4
  if (crb(c,1)) { IRQCHK(c); goto L_800BE11C; } // 800BE1C8
  c->r[3]=R32(c->r[28]+0x00000010u); // 800BE1CC
  c->r[27]=c->r[1]+0x00000034u; // 800BE1D0
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800BE1D4
  W32(c->r[28]+0x00000010u,c->r[0]); // 800BE1D8
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800BE1DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BE1E0
  c->r[3]=R32(c->r[28]+0x00000008u); // 800BE1E4
  W32(c->r[28]+0x00000008u,c->r[0]); // 800BE1E8
  W32(c->r[1]+0x00000034u,c->r[3]); // 800BE1EC
  c->r[0]=R32(c->r[1]+0x00000038u); // 800BE1F0
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 800BE1F4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800BE1F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 800BE1FC
  c->r[3]=R32(c->r[1]+0x00000044u); // 800BE200
  c->r[4]=R32(c->r[1]+0x00000034u); // 800BE204
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800BE208
  W32(c->r[1]+0x00000038u,c->r[5]); // 800BE20C
  c->r[29]=c->r[4]+c->r[3]; // 800BE210
  c->r[28]=c->r[29]+c->r[0]; // 800BE214
  goto L_800BE23C; // 800BE218
L_800BE21C:;
  c->r[28]=addc(c,c->r[28],0xFFFFFFE4u,0); cr0(c,c->r[28]); // 800BE21C
  if (crb(c,2)) { goto L_800BE23C; } // 800BE220
  if (crb(c,2)) { goto L_800BE23C; } // 800BE224
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BE228
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE22C
  if (crb(c,2)) { goto L_800BE23C; } // 800BE230
  c->r[3]=R32(c->r[28]+0x00000008u); // 800BE234
  c->lr=0x800BE23Cu; f_800B9AD0(c); // 800BE238
L_800BE23C:;
  cmpu(c,0,c->r[28],c->r[29]); // 800BE23C
  if (crb(c,1)) { IRQCHK(c); goto L_800BE21C; } // 800BE240
  cmps(c,0,(int32_t)c->r[27],0); // 800BE244
  c->r[0]=0u+0x00000000u; // 800BE248
  W32(c->r[1]+0x00000038u,c->r[0]); // 800BE24C
  if (crb(c,2)) { goto L_800BE2A8; } // 800BE250
  c->r[3]=R32(c->r[1]+0x00000034u); // 800BE254
  cmps(c,0,(int32_t)c->r[3],0); // 800BE258
  if (crb(c,2)) { goto L_800BE2A8; } // 800BE25C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BE260
  c->r[27]=0u+0x00000000u; // 800BE264
  W32(c->r[1]+0x00000038u,c->r[27]); // 800BE268
  c->r[28]=c->r[3]+c->r[0]; // 800BE26C
  goto L_800BE298; // 800BE270
L_800BE274:;
  c->r[28]=addc(c,c->r[28],0xFFFFFFE4u,0); cr0(c,c->r[28]); // 800BE274
  if (crb(c,2)) { goto L_800BE294; } // 800BE278
  if (crb(c,2)) { goto L_800BE294; } // 800BE27C
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BE280
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE284
  if (crb(c,2)) { goto L_800BE294; } // 800BE288
  c->r[3]=R32(c->r[28]+0x00000008u); // 800BE28C
  c->lr=0x800BE294u; f_800B9AD0(c); // 800BE290
L_800BE294:;
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800BE294
L_800BE298:;
  cmps(c,0,(int32_t)c->r[27],0); // 800BE298
  if (!crb(c,2)) { IRQCHK(c); goto L_800BE274; } // 800BE29C
  c->r[3]=R32(c->r[1]+0x00000034u); // 800BE2A0
  c->lr=0x800BE2A8u; f_800B9AD0(c); // 800BE2A4
L_800BE2A8:;
  c->r[0]=addc(c,c->r[1],0x00000048u,0); cr0(c,c->r[0]); // 800BE2A8
  if (crb(c,2)) { goto L_800BE2C4; } // 800BE2AC
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BE2B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE2B4
  if (crb(c,2)) { goto L_800BE2C4; } // 800BE2B8
  c->r[3]=R32(c->r[1]+0x00000050u); // 800BE2BC
  c->lr=0x800BE2C4u; f_800B9AD0(c); // 800BE2C0
L_800BE2C4:;
  c->r[11]=c->r[1]+0x00000180u; // 800BE2C4
  c->lr=0x800BE2CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE2C8
  c->r[0]=R32(c->r[1]+0x00000184u); // 800BE2CC
  c->lr=c->r[0]; // 800BE2D0
  c->r[1]=c->r[1]+0x00000180u; // 800BE2D4
  return; // 800BE2D8
}

// fn_800BE2E0
void f_800BE2E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE2E0
  c->r[0]=c->lr; // 800BE2E4
  W32(c->r[1]+0x00000234u,c->r[0]); // 800BE2E8
  c->r[11]=c->r[1]+0x00000230u; // 800BE2EC
  c->lr=0x800BE2F4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE2F0
  c->r[29]=0u+0x802A0000u; // 800BE2F4
  c->r[26]=c->r[3]|c->r[3]; // 800BE2F8
  c->r[29]=c->r[29]+0xFFFFF010u; // 800BE2FC
  c->r[3]=c->r[1]+0x00000030u; // 800BE300
  c->lr=0x800BE308u; f_800C24D0(c); // 800BE304
  c->r[0]=0u+0x00000000u; // 800BE308
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BE30C
  c->r[4]=R32(c->r[13]+0xFFFF8E50u); // 800BE310
  c->r[3]=c->r[1]+0x00000078u; // 800BE314
  W32(c->r[1]+0x00000048u,c->r[0]); // 800BE318
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BE31C
  c->r[5]=R32(c->r[26]+0x0000000Cu); // 800BE320
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE324
  c->lr=0x800BE32Cu; f_8021E904(c); // 800BE328
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BE32C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE330
  if (!crb(c,2)) { goto L_800BE344; } // 800BE334
  c->r[0]=R8(c->r[1]+0x00000044u); // 800BE338
  c->r[24]=rotl(c->r[0],0)&0x0000007Fu; // 800BE33C
  goto L_800BE348; // 800BE340
L_800BE344:;
  c->r[24]=R32(c->r[1]+0x00000048u); // 800BE344
L_800BE348:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800BE348
  c->r[3]=c->r[1]+0x00000078u; // 800BE34C
  W8(c->r[1]+0x00000014u,c->r[0]); // 800BE350
  c->lr=0x800BE358u; f_80216B70(c); // 800BE354
  c->r[6]=c->r[1]+0x00000078u; // 800BE358
  c->r[0]=c->r[3]|c->r[3]; // 800BE35C
  c->r[7]=c->r[6]|c->r[6]; // 800BE360
  c->r[5]=c->r[24]|c->r[24]; // 800BE364
  c->r[3]=c->r[1]+0x00000044u; // 800BE368
  c->r[8]=c->r[1]+0x00000014u; // 800BE36C
  c->r[7]=c->r[7]+c->r[0]; // 800BE370
  c->r[4]=0u+0x00000000u; // 800BE374
  c->lr=0x800BE37Cu; f_80007DC0(c); // 800BE378
  c->r[4]=0u+0x00010000u; // 800BE37C
  c->r[3]=0u+0x00000030u; // 800BE380
  c->r[4]=c->r[4]+0xFFFFF0A0u; // 800BE384
  c->r[0]=0u+0x00000002u; // 800BE388
  W32(c->r[1]+0x00000050u,c->r[4]); // 800BE38C
  W32(c->r[1]+0x00000054u,c->r[4]); // 800BE390
  W8(c->r[1]+0x0000005Cu,c->r[3]); // 800BE394
  W32(c->r[1]+0x00000058u,c->r[0]); // 800BE398
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800BE39C
  c->r[4]=R32(c->r[26]+0x00000010u); // 800BE3A0
  cmpu(c,0,c->r[0],c->r[4]); // 800BE3A4
  if (!crb(c,0)) { goto L_800BE454; } // 800BE3A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BE3AC
  c->r[3]=R32(c->r[26]+0x00000008u); // 800BE3B0
  c->r[24]=c->r[3]+c->r[0]; cr0(c,c->r[24]); // 800BE3B4
  if (crb(c,2)) { goto L_800BE444; } // 800BE3B8
  c->r[3]=R32(c->r[1]+0x00000044u); // 800BE3BC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800BE3C0
  if (!crb(c,2)) { goto L_800BE3E0; } // 800BE3C4
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BE3C8
  W32(c->r[24]+0x00000000u,c->r[3]); // 800BE3CC
  W32(c->r[24]+0x00000004u,c->r[0]); // 800BE3D0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BE3D4
  W32(c->r[24]+0x00000008u,c->r[0]); // 800BE3D8
  goto L_800BE424; // 800BE3DC
L_800BE3E0:;
  c->r[0]=0u+0x00000000u; // 800BE3E0
  W32(c->r[24]+0x00000000u,c->r[0]); // 800BE3E4
  c->r[3]=c->r[24]|c->r[24]; // 800BE3E8
  W32(c->r[24]+0x00000004u,c->r[0]); // 800BE3EC
  W32(c->r[24]+0x00000008u,c->r[0]); // 800BE3F0
  c->r[4]=R32(c->r[1]+0x00000048u); // 800BE3F4
  c->lr=0x800BE3FCu; f_80007C00(c); // 800BE3F8
  c->r[5]=R8(c->r[1]+0x0000002Cu); // 800BE3FC
  c->r[3]=c->r[24]|c->r[24]; // 800BE400
  W8(c->r[1]+0x00000028u,c->r[5]); // 800BE404
  c->r[8]=c->r[1]+0x00000028u; // 800BE408
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 800BE40C
  c->r[4]=0u+0x00000000u; // 800BE410
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BE414
  c->r[5]=0u+0x00000000u; // 800BE418
  c->r[7]=c->r[6]+c->r[0]; // 800BE41C
  c->lr=0x800BE424u; f_80007DC0(c); // 800BE420
L_800BE424:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BE424
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800BE428
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BE42C
  W32(c->r[24]+0x00000010u,c->r[0]); // 800BE430
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BE434
  W32(c->r[24]+0x00000014u,c->r[0]); // 800BE438
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 800BE43C
  W8(c->r[24]+0x00000018u,c->r[0]); // 800BE440
L_800BE444:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BE444
  c->r[0]=c->r[3]+0x00000001u; // 800BE448
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 800BE44C
  goto L_800BE848; // 800BE450
L_800BE454:;
  c->r[3]=0u+0x09250000u; // 800BE454
  c->r[0]=c->r[3]+0xFFFF9249u; // 800BE458
  c->r[0]=c->r[0]-c->r[4]; // 800BE45C
  cmpu(c,0,c->r[0],0x00000001u); // 800BE460
  if (!crb(c,0)) { goto L_800BE484; } // 800BE464
  c->r[3]=0u+0x802D0000u; // 800BE468
  c->r[4]=c->r[29]+0x0000000Cu; // 800BE46C
  c->r[3]=c->r[3]+0x000050B0u; // 800BE470
  c->r[3]=c->r[3]+0x000000A0u; // 800BE474
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE478
  c->lr=0x800BE480u; f_8021E5C0(c); // 800BE47C
  c->lr=0x800BE484u; f_802247E0(c); // 800BE480
L_800BE484:;
  c->r[5]=0u+0x00000000u; // 800BE484
  c->r[4]=c->r[26]+0x00000010u; // 800BE488
  c->r[3]=0u+0x09250000u; // 800BE48C
  W32(c->r[1]+0x00000060u,c->r[5]); // 800BE490
  c->r[0]=c->r[3]+0xFFFF9249u; // 800BE494
  W32(c->r[1]+0x00000064u,c->r[5]); // 800BE498
  W32(c->r[1]+0x00000068u,c->r[5]); // 800BE49C
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800BE4A0
  W32(c->r[1]+0x00000070u,c->r[5]); // 800BE4A4
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BE4A8
  c->r[30]=R32(c->r[26]+0x00000010u); // 800BE4AC
  c->r[3]=c->r[3]+0x00000001u; // 800BE4B0
  c->r[3]=c->r[3]-c->r[30]; // 800BE4B4
  c->r[0]=c->r[0]-c->r[30]; // 800BE4B8
  cmpu(c,0,c->r[3],c->r[0]); // 800BE4BC
  W32(c->r[1]+0x00000034u,c->r[3]); // 800BE4C0
  if (!crb(c,1)) { goto L_800BE4E4; } // 800BE4C4
  c->r[3]=0u+0x802D0000u; // 800BE4C8
  c->r[4]=c->r[29]+0x0000000Cu; // 800BE4CC
  c->r[3]=c->r[3]+0x000050B0u; // 800BE4D0
  c->r[3]=c->r[3]+0x000000A0u; // 800BE4D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE4D8
  c->lr=0x800BE4E0u; f_8021E5C0(c); // 800BE4DC
  c->lr=0x800BE4E4u; f_802247E0(c); // 800BE4E0
L_800BE4E4:;
  c->r[3]=0u+0x030C0000u; // 800BE4E4
  c->r[0]=c->r[3]+0x000030C3u; // 800BE4E8
  cmpu(c,0,c->r[30],c->r[0]); // 800BE4EC
  if (!crb(c,0)) { goto L_800BE534; } // 800BE4F0
  c->r[5]=c->r[30]+0x00000001u; // 800BE4F4
  c->r[3]=0u+0xCCCD0000u; // 800BE4F8
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800BE4FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BE500
  c->r[4]=c->r[4]-c->r[5]; // 800BE504
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 800BE508
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800BE50C
  c->r[3]=c->r[1]+0x0000003Cu; // 800BE510
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800BE514
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800BE518
  cmpu(c,0,c->r[4],c->r[0]); // 800BE51C
  if (!crb(c,0)) { goto L_800BE528; } // 800BE520
  c->r[3]=c->r[1]+0x00000034u; // 800BE524
L_800BE528:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BE528
  c->r[25]=c->r[30]+c->r[0]; // 800BE52C
  goto L_800BE578; // 800BE530
L_800BE534:;
  c->r[3]=0u+0x06180000u; // 800BE534
  c->r[0]=c->r[3]+0x00006186u; // 800BE538
  cmpu(c,0,c->r[30],c->r[0]); // 800BE53C
  if (!crb(c,0)) { goto L_800BE570; } // 800BE540
  c->r[3]=c->r[30]+0x00000001u; // 800BE544
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BE548
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800BE54C
  W32(c->r[1]+0x00000038u,c->r[3]); // 800BE550
  cmpu(c,0,c->r[3],c->r[0]); // 800BE554
  c->r[3]=c->r[1]+0x00000038u; // 800BE558
  if (!crb(c,0)) { goto L_800BE564; } // 800BE55C
  c->r[3]=c->r[1]+0x00000034u; // 800BE560
L_800BE564:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BE564
  c->r[25]=c->r[30]+c->r[0]; // 800BE568
  goto L_800BE578; // 800BE56C
L_800BE570:;
  c->r[3]=0u+0x09250000u; // 800BE570
  c->r[25]=c->r[3]+0xFFFF9249u; // 800BE574
L_800BE578:;
  c->r[3]=0u+0x09250000u; // 800BE578
  c->r[0]=c->r[3]+0xFFFF9249u; // 800BE57C
  cmpu(c,0,c->r[25],c->r[0]); // 800BE580
  if (!crb(c,1)) { goto L_800BE5A4; } // 800BE584
  c->r[3]=0u+0x802D0000u; // 800BE588
  c->r[4]=c->r[29]+0x0000000Cu; // 800BE58C
  c->r[3]=c->r[3]+0x000050B0u; // 800BE590
  c->r[3]=c->r[3]+0x000000A0u; // 800BE594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE598
  c->lr=0x800BE5A0u; f_8021E5C0(c); // 800BE59C
  c->lr=0x800BE5A4u; f_802247E0(c); // 800BE5A0
L_800BE5A4:;
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)28); // 800BE5A4
  c->lr=0x800BE5ACu; f_800B98F0(c); // 800BE5A8
  cmps(c,0,(int32_t)c->r[3],0); // 800BE5AC
  c->r[24]=c->r[3]|c->r[3]; // 800BE5B0
  if (!crb(c,2)) { goto L_800BE5D8; } // 800BE5B4
  c->r[3]=0u+0x802D0000u; // 800BE5B8
  c->r[4]=0u+0x802A0000u; // 800BE5BC
  c->r[3]=c->r[3]+0x000050B0u; // 800BE5C0
  c->r[3]=c->r[3]+0x000000A0u; // 800BE5C4
  c->r[4]=c->r[4]+0xFFFFF800u; // 800BE5C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE5CC
  c->lr=0x800BE5D4u; f_8021E5C0(c); // 800BE5D0
  c->lr=0x800BE5D8u; f_802247E0(c); // 800BE5D4
L_800BE5D8:;
  c->r[3]=R32(c->r[1]+0x00000064u); // 800BE5D8
  c->r[0]=0u+0x00000000u; // 800BE5DC
  W32(c->r[1]+0x00000060u,c->r[24]); // 800BE5E0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800BE5E4
  W32(c->r[1]+0x00000068u,c->r[25]); // 800BE5E8
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BE5EC
  W32(c->r[1]+0x00000070u,c->r[3]); // 800BE5F0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800BE5F4
  c->r[3]=c->r[24]+c->r[3]; // 800BE5F8
  c->r[24]=c->r[4]+c->r[3]; cr0(c,c->r[24]); // 800BE5FC
  if (crb(c,2)) { goto L_800BE688; } // 800BE600
  c->r[4]=R32(c->r[1]+0x00000044u); // 800BE604
  c->r[3]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[3]); // 800BE608
  if (!crb(c,2)) { goto L_800BE628; } // 800BE60C
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BE610
  W32(c->r[24]+0x00000000u,c->r[4]); // 800BE614
  W32(c->r[24]+0x00000004u,c->r[0]); // 800BE618
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BE61C
  W32(c->r[24]+0x00000008u,c->r[0]); // 800BE620
  goto L_800BE668; // 800BE624
L_800BE628:;
  W32(c->r[24]+0x00000000u,c->r[0]); // 800BE628
  c->r[3]=c->r[24]|c->r[24]; // 800BE62C
  W32(c->r[24]+0x00000004u,c->r[0]); // 800BE630
  W32(c->r[24]+0x00000008u,c->r[0]); // 800BE634
  c->r[4]=R32(c->r[1]+0x00000048u); // 800BE638
  c->lr=0x800BE640u; f_80007C00(c); // 800BE63C
  c->r[5]=R8(c->r[1]+0x00000018u); // 800BE640
  c->r[3]=c->r[24]|c->r[24]; // 800BE644
  W8(c->r[1]+0x0000001Cu,c->r[5]); // 800BE648
  c->r[8]=c->r[1]+0x0000001Cu; // 800BE64C
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 800BE650
  c->r[4]=0u+0x00000000u; // 800BE654
  c->r[0]=R32(c->r[1]+0x00000048u); // 800BE658
  c->r[5]=0u+0x00000000u; // 800BE65C
  c->r[7]=c->r[6]+c->r[0]; // 800BE660
  c->lr=0x800BE668u; f_80007DC0(c); // 800BE664
L_800BE668:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BE668
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800BE66C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BE670
  W32(c->r[24]+0x00000010u,c->r[0]); // 800BE674
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BE678
  W32(c->r[24]+0x00000014u,c->r[0]); // 800BE67C
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 800BE680
  W8(c->r[24]+0x00000018u,c->r[0]); // 800BE684
L_800BE688:;
  c->r[3]=R32(c->r[1]+0x00000064u); // 800BE688
  c->r[24]=0u+0x00000000u; // 800BE68C
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BE690
  c->r[3]=c->r[3]+0x00000001u; // 800BE694
  W32(c->r[1]+0x00000064u,c->r[3]); // 800BE698
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BE69C
  c->r[3]=R32(c->r[1]+0x00000060u); // 800BE6A0
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800BE6A4
  c->r[28]=R32(c->r[26]+0x00000008u); // 800BE6A8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800BE6AC
  c->r[31]=c->r[3]+c->r[0]; // 800BE6B0
  c->r[30]=c->r[28]+c->r[4]; // 800BE6B4
  goto L_800BE764; // 800BE6B8
L_800BE6BC:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE4u,0); cr0(c,c->r[31]); // 800BE6BC
  c->r[30]=c->r[30]+0xFFFFFFE4u; // 800BE6C0
  if (crb(c,2)) { goto L_800BE74C; } // 800BE6C4
  c->r[3]=R32(c->r[30]+0x00000000u); // 800BE6C8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800BE6CC
  if (!crb(c,2)) { goto L_800BE6EC; } // 800BE6D0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BE6D4
  W32(c->r[31]+0x00000000u,c->r[3]); // 800BE6D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BE6DC
  c->r[0]=R32(c->r[30]+0x00000008u); // 800BE6E0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BE6E4
  goto L_800BE72C; // 800BE6E8
L_800BE6EC:;
  W32(c->r[31]+0x00000000u,c->r[24]); // 800BE6EC
  c->r[3]=c->r[31]|c->r[31]; // 800BE6F0
  W32(c->r[31]+0x00000004u,c->r[24]); // 800BE6F4
  W32(c->r[31]+0x00000008u,c->r[24]); // 800BE6F8
  c->r[4]=R32(c->r[30]+0x00000004u); // 800BE6FC
  c->lr=0x800BE704u; f_80007C00(c); // 800BE700
  c->r[0]=R8(c->r[1]+0x00000020u); // 800BE704
  c->r[3]=c->r[31]|c->r[31]; // 800BE708
  W8(c->r[1]+0x00000024u,c->r[0]); // 800BE70C
  c->r[8]=c->r[1]+0x00000024u; // 800BE710
  c->r[4]=0u+0x00000000u; // 800BE714
  c->r[5]=0u+0x00000000u; // 800BE718
  c->r[6]=R32(c->r[30]+0x00000008u); // 800BE71C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BE720
  c->r[7]=c->r[6]+c->r[0]; // 800BE724
  c->lr=0x800BE72Cu; f_80007DC0(c); // 800BE728
L_800BE72C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800BE72C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BE730
  c->r[0]=R32(c->r[30]+0x00000010u); // 800BE734
  W32(c->r[31]+0x00000010u,c->r[0]); // 800BE738
  c->r[0]=R32(c->r[30]+0x00000014u); // 800BE73C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800BE740
  c->r[0]=R8(c->r[30]+0x00000018u); // 800BE744
  W8(c->r[31]+0x00000018u,c->r[0]); // 800BE748
L_800BE74C:;
  c->r[4]=R32(c->r[1]+0x00000070u); // 800BE74C
  c->r[3]=R32(c->r[1]+0x00000064u); // 800BE750
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BE754
  W32(c->r[1]+0x00000070u,c->r[0]); // 800BE758
  c->r[0]=c->r[3]+0x00000001u; // 800BE75C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE760
L_800BE764:;
  cmpu(c,0,c->r[30],c->r[28]); // 800BE764
  if (crb(c,1)) { IRQCHK(c); goto L_800BE6BC; } // 800BE768
  c->r[3]=R32(c->r[26]+0x00000010u); // 800BE76C
  c->r[27]=c->r[1]+0x00000060u; // 800BE770
  c->r[0]=R32(c->r[1]+0x00000068u); // 800BE774
  W32(c->r[26]+0x00000010u,c->r[0]); // 800BE778
  W32(c->r[1]+0x00000068u,c->r[3]); // 800BE77C
  c->r[0]=R32(c->r[1]+0x00000060u); // 800BE780
  c->r[3]=R32(c->r[26]+0x00000008u); // 800BE784
  W32(c->r[26]+0x00000008u,c->r[0]); // 800BE788
  W32(c->r[1]+0x00000060u,c->r[3]); // 800BE78C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE790
  c->r[5]=R32(c->r[26]+0x0000000Cu); // 800BE794
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 800BE798
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 800BE79C
  c->r[3]=R32(c->r[1]+0x00000070u); // 800BE7A0
  c->r[4]=R32(c->r[1]+0x00000060u); // 800BE7A4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800BE7A8
  W32(c->r[1]+0x00000064u,c->r[5]); // 800BE7AC
  c->r[24]=c->r[4]+c->r[3]; // 800BE7B0
  c->r[25]=c->r[24]+c->r[0]; // 800BE7B4
  goto L_800BE7DC; // 800BE7B8
L_800BE7BC:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFE4u,0); cr0(c,c->r[25]); // 800BE7BC
  if (crb(c,2)) { goto L_800BE7DC; } // 800BE7C0
  if (crb(c,2)) { goto L_800BE7DC; } // 800BE7C4
  c->r[0]=R32(c->r[25]+0x00000000u); // 800BE7C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE7CC
  if (crb(c,2)) { goto L_800BE7DC; } // 800BE7D0
  c->r[3]=R32(c->r[25]+0x00000008u); // 800BE7D4
  c->lr=0x800BE7DCu; f_800B9AD0(c); // 800BE7D8
L_800BE7DC:;
  cmpu(c,0,c->r[25],c->r[24]); // 800BE7DC
  if (crb(c,1)) { IRQCHK(c); goto L_800BE7BC; } // 800BE7E0
  cmps(c,0,(int32_t)c->r[27],0); // 800BE7E4
  c->r[0]=0u+0x00000000u; // 800BE7E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE7EC
  if (crb(c,2)) { goto L_800BE848; } // 800BE7F0
  c->r[3]=R32(c->r[1]+0x00000060u); // 800BE7F4
  cmps(c,0,(int32_t)c->r[3],0); // 800BE7F8
  if (crb(c,2)) { goto L_800BE848; } // 800BE7FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BE800
  c->r[25]=0u+0x00000000u; // 800BE804
  W32(c->r[1]+0x00000064u,c->r[25]); // 800BE808
  c->r[24]=c->r[3]+c->r[0]; // 800BE80C
  goto L_800BE838; // 800BE810
L_800BE814:;
  c->r[24]=addc(c,c->r[24],0xFFFFFFE4u,0); cr0(c,c->r[24]); // 800BE814
  if (crb(c,2)) { goto L_800BE834; } // 800BE818
  if (crb(c,2)) { goto L_800BE834; } // 800BE81C
  c->r[0]=R32(c->r[24]+0x00000000u); // 800BE820
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE824
  if (crb(c,2)) { goto L_800BE834; } // 800BE828
  c->r[3]=R32(c->r[24]+0x00000008u); // 800BE82C
  c->lr=0x800BE834u; f_800B9AD0(c); // 800BE830
L_800BE834:;
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800BE834
L_800BE838:;
  cmps(c,0,(int32_t)c->r[25],0); // 800BE838
  if (!crb(c,2)) { IRQCHK(c); goto L_800BE814; } // 800BE83C
  c->r[3]=R32(c->r[1]+0x00000060u); // 800BE840
  c->lr=0x800BE848u; f_800B9AD0(c); // 800BE844
L_800BE848:;
  c->r[0]=addc(c,c->r[1],0x00000044u,0); cr0(c,c->r[0]); // 800BE848
  if (crb(c,2)) { goto L_800BE864; } // 800BE84C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BE850
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE854
  if (crb(c,2)) { goto L_800BE864; } // 800BE858
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800BE85C
  c->lr=0x800BE864u; f_800B9AD0(c); // 800BE860
L_800BE864:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BE864
  c->r[4]=R32(c->r[26]+0x00000008u); // 800BE868
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BE86C
  c->r[24]=R32(c->r[13]+0xFFFF8E54u); // 800BE870
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800BE874
  c->r[25]=c->r[4]+c->r[0]; // 800BE878
  c->r[0]=R32(c->r[4]+c->r[0]); // 800BE87C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE880
  if (!crb(c,2)) { goto L_800BE894; } // 800BE884
  c->r[0]=R8(c->r[25]+0x00000000u); // 800BE888
  c->r[27]=rotl(c->r[0],0)&0x0000007Fu; // 800BE88C
  goto L_800BE898; // 800BE890
L_800BE894:;
  c->r[27]=R32(c->r[25]+0x00000004u); // 800BE894
L_800BE898:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800BE898
  c->r[3]=c->r[24]|c->r[24]; // 800BE89C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BE8A0
  c->lr=0x800BE8A8u; f_80216B70(c); // 800BE8A4
  c->r[0]=c->r[3]|c->r[3]; // 800BE8A8
  c->r[3]=c->r[25]|c->r[25]; // 800BE8AC
  c->r[5]=c->r[27]|c->r[27]; // 800BE8B0
  c->r[6]=c->r[24]|c->r[24]; // 800BE8B4
  c->r[7]=c->r[24]+c->r[0]; // 800BE8B8
  c->r[8]=c->r[1]+0x00000008u; // 800BE8BC
  c->r[4]=0u+0x00000000u; // 800BE8C0
  c->lr=0x800BE8C8u; f_80007DC0(c); // 800BE8C4
  c->r[25]=0u+0x00000000u; // 800BE8C8
  c->r[24]=0u+0x00000000u; // 800BE8CC
  goto L_800BE914; // 800BE8D0
L_800BE8D4:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BE8D4
  c->r[3]=c->r[29]+0x00000020u; // 800BE8D8
  c->r[5]=c->r[0]+c->r[24]; // 800BE8DC
  c->r[0]=R32(c->r[24]+c->r[0]); // 800BE8E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE8E4
  if (!crb(c,2)) { goto L_800BE8F4; } // 800BE8E8
  c->r[4]=c->r[5]+0x00000001u; // 800BE8EC
  goto L_800BE8F8; // 800BE8F0
L_800BE8F4:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 800BE8F4
L_800BE8F8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800BE8F8
  c->r[0]=c->r[5]+0x00003FFFu; // 800BE8FC
  c->r[5]=rotl(c->r[0],18)&0x0003FFFFu; // 800BE900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE904
  c->lr=0x800BE90Cu; f_800C8450(c); // 800BE908
  c->r[24]=c->r[24]+0x0000001Cu; // 800BE90C
  c->r[25]=c->r[25]+0x00000001u; // 800BE910
L_800BE914:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800BE914
  cmpu(c,0,c->r[25],c->r[0]); // 800BE918
  if (crb(c,0)) { IRQCHK(c); goto L_800BE8D4; } // 800BE91C
  c->r[27]=0u+0x00000000u; // 800BE920
  c->r[28]=0u+0x00000000u; // 800BE924
  c->r[30]=0u+0x00000002u; // 800BE928
  c->r[24]=0u+0x00010000u; // 800BE92C
  c->r[25]=0u+0x00000001u; // 800BE930
  c->r[31]=0u+0x00000000u; // 800BE934
  goto L_800BEB04; // 800BE938
L_800BE93C:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BE93C
  c->r[3]=c->r[0]+c->r[28]; // 800BE940
  W32(c->r[3]+0x00000014u,c->r[30]); // 800BE944
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BE948
  c->r[3]=c->r[0]+c->r[28]; // 800BE94C
  c->r[0]=R32(c->r[28]+c->r[0]); // 800BE950
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BE954
  if (!crb(c,2)) { goto L_800BE964; } // 800BE958
  c->r[3]=c->r[3]+0x00000001u; // 800BE95C
  goto L_800BE968; // 800BE960
L_800BE964:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BE964
L_800BE968:;
  c->r[4]=c->r[1]+0x00000178u; // 800BE968
  c->r[5]=0u+0x00000001u; // 800BE96C
  c->lr=0x800BE974u; f_800F3B20(c); // 800BE970
  cmps(c,0,(int32_t)c->r[3],-12); // 800BE974
  W32(c->r[26]+0x00000000u,c->r[3]); // 800BE978
  if (!crb(c,2)) { goto L_800BE990; } // 800BE97C
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BE980
  c->r[3]=c->r[0]+c->r[28]; // 800BE984
  W32(c->r[3]+0x00000014u,c->r[31]); // 800BE988
  goto L_800BEAFC; // 800BE98C
L_800BE990:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BE990
  if (crb(c,2)) { goto L_800BE9AC; } // 800BE994
  c->r[3]=c->r[1]+0x00000030u; // 800BE998
  c->r[4]=0u+0xFFFFFFFFu; // 800BE99C
  c->lr=0x800BE9A4u; f_800C2510(c); // 800BE9A0
  c->r[3]=0u+0x00000000u; // 800BE9A4
  goto L_800BEB20; // 800BE9A8
L_800BE9AC:;
  c->r[3]=c->r[1]+0x00000178u; // 800BE9AC
  c->r[4]=c->r[1]+0x00000040u; // 800BE9B0
  c->lr=0x800BE9B8u; f_800F3540(c); // 800BE9B4
  cmps(c,0,(int32_t)c->r[3],0); // 800BE9B8
  W32(c->r[26]+0x00000000u,c->r[3]); // 800BE9BC
  if (crb(c,2)) { goto L_800BE9D8; } // 800BE9C0
  c->r[3]=c->r[1]+0x00000030u; // 800BE9C4
  c->r[4]=0u+0xFFFFFFFFu; // 800BE9C8
  c->lr=0x800BE9D0u; f_800C2510(c); // 800BE9CC
  c->r[3]=0u+0x00000000u; // 800BE9D0
  goto L_800BEB20; // 800BE9D4
L_800BE9D8:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BE9D8
  c->r[5]=R32(c->r[1]+0x00000040u); // 800BE9DC
  c->r[3]=c->r[0]+c->r[28]; // 800BE9E0
  c->r[6]=R32(c->r[3]+0x00000010u); // 800BE9E4
  cmpu(c,0,c->r[5],c->r[6]); // 800BE9E8
  if (crb(c,2)) { goto L_800BEA10; } // 800BE9EC
  c->r[4]=c->r[27]|c->r[27]; // 800BE9F0
  c->r[3]=c->r[29]+0x00000040u; // 800BE9F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE9F8
  c->lr=0x800BEA00u; f_800C8450(c); // 800BE9FC
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BEA00
  c->r[3]=c->r[0]+c->r[28]; // 800BEA04
  W32(c->r[3]+0x00000014u,c->r[25]); // 800BEA08
  goto L_800BEAD4; // 800BEA0C
L_800BEA10:;
  c->r[3]=c->r[5]|c->r[5]; // 800BEA10
  c->lr=0x800BEA18u; f_800B99E0(c); // 800BEA14
  c->r[23]=c->r[3]|c->r[3]; // 800BEA18
  c->r[5]=R32(c->r[1]+0x00000040u); // 800BEA1C
  c->r[4]=c->r[23]|c->r[23]; // 800BEA20
  c->r[3]=c->r[1]+0x00000178u; // 800BEA24
  c->lr=0x800BEA2Cu; f_800F31B0(c); // 800BEA28
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800BEA2C
  W32(c->r[26]+0x00000000u,c->r[3]); // 800BEA30
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BEA34
  cmpu(c,0,c->r[27],c->r[0]); // 800BEA38
  if (!crb(c,2)) { goto L_800BEA7C; } // 800BEA3C
  c->r[0]=R32(c->r[1]+0x00000040u); // 800BEA40
  cmpu(c,0,c->r[0],c->r[3]); // 800BEA44
  if (!crb(c,2)) { goto L_800BEA7C; } // 800BEA48
  c->r[4]=c->r[23]|c->r[23]; // 800BEA4C
  c->r[3]=c->r[26]+0x00000014u; // 800BEA50
  c->r[5]=c->r[24]+0xFFFFF0A0u; // 800BEA54
  c->lr=0x800BEA5Cu; f_8021C08C(c); // 800BEA58
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA5C
  if (crb(c,2)) { goto L_800BEA7C; } // 800BEA60
  c->r[3]=c->r[29]+0x00000060u; // 800BEA64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BEA68
  c->lr=0x800BEA70u; f_800C8450(c); // 800BEA6C
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BEA70
  c->r[3]=c->r[0]+c->r[28]; // 800BEA74
  W32(c->r[3]+0x00000014u,c->r[25]); // 800BEA78
L_800BEA7C:;
  c->r[3]=c->r[23]|c->r[23]; // 800BEA7C
  c->lr=0x800BEA84u; f_800B9AF0(c); // 800BEA80
  c->r[3]=R32(c->r[26]+0x00000000u); // 800BEA84
  cmps(c,0,(int32_t)c->r[3],-15); // 800BEA88
  if (crb(c,2)) { goto L_800BEA98; } // 800BEA8C
  cmps(c,0,(int32_t)c->r[3],-5); // 800BEA90
  if (!crb(c,2)) { goto L_800BEAB4; } // 800BEA94
L_800BEA98:;
  c->r[3]=c->r[29]+0x00000074u; // 800BEA98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BEA9C
  c->lr=0x800BEAA4u; f_800C8450(c); // 800BEAA0
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BEAA4
  c->r[3]=c->r[0]+c->r[28]; // 800BEAA8
  W32(c->r[3]+0x00000014u,c->r[25]); // 800BEAAC
  goto L_800BEAD4; // 800BEAB0
L_800BEAB4:;
  c->r[0]=R32(c->r[1]+0x00000040u); // 800BEAB4
  cmpu(c,0,c->r[3],c->r[0]); // 800BEAB8
  if (crb(c,2)) { goto L_800BEAD4; } // 800BEABC
  c->r[3]=c->r[1]+0x00000030u; // 800BEAC0
  c->r[4]=0u+0xFFFFFFFFu; // 800BEAC4
  c->lr=0x800BEACCu; f_800C2510(c); // 800BEAC8
  c->r[3]=0u+0x00000000u; // 800BEACC
  goto L_800BEB20; // 800BEAD0
L_800BEAD4:;
  c->r[3]=c->r[1]+0x00000178u; // 800BEAD4
  c->lr=0x800BEADCu; f_800F3DC0(c); // 800BEAD8
  cmps(c,0,(int32_t)c->r[3],0); // 800BEADC
  W32(c->r[26]+0x00000000u,c->r[3]); // 800BEAE0
  if (crb(c,2)) { goto L_800BEAFC; } // 800BEAE4
  c->r[3]=c->r[1]+0x00000030u; // 800BEAE8
  c->r[4]=0u+0xFFFFFFFFu; // 800BEAEC
  c->lr=0x800BEAF4u; f_800C2510(c); // 800BEAF0
  c->r[3]=0u+0x00000000u; // 800BEAF4
  goto L_800BEB20; // 800BEAF8
L_800BEAFC:;
  c->r[28]=c->r[28]+0x0000001Cu; // 800BEAFC
  c->r[27]=c->r[27]+0x00000001u; // 800BEB00
L_800BEB04:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800BEB04
  cmpu(c,0,c->r[27],c->r[0]); // 800BEB08
  if (crb(c,0)) { IRQCHK(c); goto L_800BE93C; } // 800BEB0C
  c->r[3]=c->r[1]+0x00000030u; // 800BEB10
  c->r[4]=0u+0xFFFFFFFFu; // 800BEB14
  c->lr=0x800BEB1Cu; f_800C2510(c); // 800BEB18
  c->r[3]=0u+0x00000001u; // 800BEB1C
L_800BEB20:;
  c->r[11]=c->r[1]+0x00000230u; // 800BEB20
  c->lr=0x800BEB28u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BEB24
  c->r[0]=R32(c->r[1]+0x00000234u); // 800BEB28
  c->lr=c->r[0]; // 800BEB2C
  c->r[1]=c->r[1]+0x00000230u; // 800BEB30
  return; // 800BEB34
}

// fn_800BEB40
void f_800BEB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEB40
  c->r[0]=c->lr; // 800BEB44
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BEB48
  c->r[11]=c->r[1]+0x00000030u; // 800BEB4C
  c->lr=0x800BEB54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEB50
  c->r[27]=c->r[3]|c->r[3]; // 800BEB54
  c->r[28]=c->r[4]|c->r[4]; // 800BEB58
  c->r[29]=c->r[5]|c->r[5]; // 800BEB5C
  c->r[30]=c->r[6]|c->r[6]; // 800BEB60
  c->r[31]=c->r[7]|c->r[7]; // 800BEB64
  c->r[3]=c->r[1]+0x00000008u; // 800BEB68
  c->lr=0x800BEB70u; f_800C24D0(c); // 800BEB6C
  c->r[0]=0u+0x00000000u; // 800BEB70
  W32(c->r[28]+0x00000000u,c->r[0]); // 800BEB74
  c->r[3]=c->r[1]+0x00000010u; // 800BEB78
  c->r[4]=c->r[1]+0x0000000Cu; // 800BEB7C
  W32(c->r[29]+0x00000000u,c->r[0]); // 800BEB80
  c->lr=0x800BEB88u; f_800F56A0(c); // 800BEB84
  cmps(c,0,(int32_t)c->r[3],0); // 800BEB88
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BEB8C
  if (crb(c,2)) { goto L_800BEBA8; } // 800BEB90
  c->r[3]=c->r[1]+0x00000008u; // 800BEB94
  c->r[4]=0u+0xFFFFFFFFu; // 800BEB98
  c->lr=0x800BEBA0u; f_800C2510(c); // 800BEB9C
  c->r[3]=0u+0x00000000u; // 800BEBA0
  goto L_800BEC74; // 800BEBA4
L_800BEBA8:;
  c->r[6]=0u+0x00000000u; // 800BEBA8
  c->r[5]=0u+0x00000000u; // 800BEBAC
  goto L_800BEBF8; // 800BEBB0
  c->r[0]=c->r[0]|0x00000000u; // 800BEBB4
L_800BEBB8:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BEBB8
  c->r[3]=c->r[0]+c->r[5]; // 800BEBBC
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BEBC0
  cmps(c,0,(int32_t)c->r[0],0); // 800BEBC4
  if (!crb(c,2)) { goto L_800BEBF0; } // 800BEBC8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800BEBCC
  c->r[4]=R32(c->r[28]+0x00000000u); // 800BEBD0
  c->r[0]=c->r[3]+0x00003FFFu; // 800BEBD4
  c->r[0]=rotl(c->r[0],18)&0x0003FFFFu; // 800BEBD8
  c->r[0]=c->r[4]+c->r[0]; // 800BEBDC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800BEBE0
  c->r[3]=R32(c->r[29]+0x00000000u); // 800BEBE4
  c->r[0]=c->r[3]+0x00000001u; // 800BEBE8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800BEBEC
L_800BEBF0:;
  c->r[5]=c->r[5]+0x0000001Cu; // 800BEBF0
  c->r[6]=c->r[6]+0x00000001u; // 800BEBF4
L_800BEBF8:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800BEBF8
  cmpu(c,0,c->r[6],c->r[0]); // 800BEBFC
  if (crb(c,0)) { IRQCHK(c); goto L_800BEBB8; } // 800BEC00
  c->r[3]=0u+0x802A0000u; // 800BEC04
  c->r[4]=R32(c->r[28]+0x00000000u); // 800BEC08
  c->r[5]=R32(c->r[29]+0x00000000u); // 800BEC0C
  c->r[3]=c->r[3]+0xFFFFF0A0u; // 800BEC10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BEC14
  c->lr=0x800BEC1Cu; f_800C8450(c); // 800BEC18
  c->r[0]=R32(c->r[28]+0x00000000u); // 800BEC1C
  c->r[3]=R32(c->r[1]+0x00000010u); // 800BEC20
  cmpu(c,0,c->r[3],c->r[0]); // 800BEC24
  if (crb(c,0)) { goto L_800BEC38; } // 800BEC28
  c->r[0]=0u+0x00000000u; // 800BEC2C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800BEC30
  goto L_800BEC40; // 800BEC34
L_800BEC38:;
  c->r[0]=c->r[0]-c->r[3]; // 800BEC38
  W32(c->r[30]+0x00000000u,c->r[0]); // 800BEC3C
L_800BEC40:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BEC40
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800BEC44
  cmpu(c,0,c->r[3],c->r[0]); // 800BEC48
  if (crb(c,0)) { goto L_800BEC5C; } // 800BEC4C
  c->r[0]=0u+0x00000000u; // 800BEC50
  W32(c->r[31]+0x00000000u,c->r[0]); // 800BEC54
  goto L_800BEC64; // 800BEC58
L_800BEC5C:;
  c->r[0]=c->r[0]-c->r[3]; // 800BEC5C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800BEC60
L_800BEC64:;
  c->r[3]=c->r[1]+0x00000008u; // 800BEC64
  c->r[4]=0u+0xFFFFFFFFu; // 800BEC68
  c->lr=0x800BEC70u; f_800C2510(c); // 800BEC6C
  c->r[3]=0u+0x00000001u; // 800BEC70
L_800BEC74:;
  c->r[11]=c->r[1]+0x00000030u; // 800BEC74
  c->lr=0x800BEC7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BEC78
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BEC7C
  c->lr=c->r[0]; // 800BEC80
  c->r[1]=c->r[1]+0x00000030u; // 800BEC84
  return; // 800BEC88
}

// fn_800BEC90
void f_800BEC90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEC90
  c->r[0]=c->lr; // 800BEC94
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800BEC98
  c->r[11]=c->r[1]+0x000000C0u; // 800BEC9C
  c->lr=0x800BECA4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BECA0
  c->r[28]=c->r[3]|c->r[3]; // 800BECA4
  c->r[3]=c->r[1]+0x00000008u; // 800BECA8
  c->lr=0x800BECB0u; f_800C24D0(c); // 800BECAC
  c->r[3]=0u+0x00004000u; // 800BECB0
  c->lr=0x800BECB8u; f_800B99E0(c); // 800BECB4
  c->r[31]=c->r[3]|c->r[3]; // 800BECB8
  c->r[29]=0u+0x00000000u; // 800BECBC
  c->r[26]=0u+0x00010000u; // 800BECC0
  c->r[27]=0u+0x00000002u; // 800BECC4
  goto L_800BEF30; // 800BECC8
L_800BECCC:;
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 800BECCC
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BECD0
  c->r[4]=c->r[0]+c->r[30]; // 800BECD4
  c->r[0]=R32(c->r[4]+0x00000014u); // 800BECD8
  cmps(c,0,(int32_t)c->r[0],0); // 800BECDC
  if (!crb(c,2)) { goto L_800BEF2C; } // 800BECE0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BECE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BECE8
  if (!crb(c,2)) { goto L_800BECF8; } // 800BECEC
  c->r[3]=c->r[4]+0x00000001u; // 800BECF0
  goto L_800BECFC; // 800BECF4
L_800BECF8:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 800BECF8
L_800BECFC:;
  c->r[4]=R8(c->r[4]+0x00000018u); // 800BECFC
  c->r[5]=0u+0x00000000u; // 800BED00
  c->lr=0x800BED08u; f_800F2CA0(c); // 800BED04
  cmps(c,0,(int32_t)c->r[3],0); // 800BED08
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BED0C
  if (crb(c,2)) { goto L_800BED30; } // 800BED10
  c->r[3]=c->r[31]|c->r[31]; // 800BED14
  c->lr=0x800BED1Cu; f_800B9AF0(c); // 800BED18
  c->r[3]=c->r[1]+0x00000008u; // 800BED1C
  c->r[4]=0u+0xFFFFFFFFu; // 800BED20
  c->lr=0x800BED28u; f_800C2510(c); // 800BED24
  c->r[3]=0u+0x00000000u; // 800BED28
  goto L_800BEF54; // 800BED2C
L_800BED30:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BED30
  c->r[3]=c->r[0]+c->r[30]; // 800BED34
  c->r[0]=R32(c->r[30]+c->r[0]); // 800BED38
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BED3C
  if (!crb(c,2)) { goto L_800BED4C; } // 800BED40
  c->r[3]=c->r[3]+0x00000001u; // 800BED44
  goto L_800BED50; // 800BED48
L_800BED4C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BED4C
L_800BED50:;
  c->r[6]=c->r[31]|c->r[31]; // 800BED50
  c->r[4]=c->r[1]+0x0000000Cu; // 800BED54
  c->r[5]=0u+0x00000002u; // 800BED58
  c->r[7]=0u+0x00004000u; // 800BED5C
  c->lr=0x800BED64u; f_800F3EC0(c); // 800BED60
  cmps(c,0,(int32_t)c->r[3],-5); // 800BED64
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BED68
  if (crb(c,2)) { goto L_800BED78; } // 800BED6C
  cmps(c,0,(int32_t)c->r[3],-15); // 800BED70
  if (!crb(c,2)) { goto L_800BEDFC; } // 800BED74
L_800BED78:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BED78
  c->lr=0x800BED80u; f_800F44D0(c); // 800BED7C
  cmps(c,0,(int32_t)c->r[3],0); // 800BED80
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BED84
  if (crb(c,2)) { goto L_800BEDA8; } // 800BED88
  c->r[3]=c->r[31]|c->r[31]; // 800BED8C
  c->lr=0x800BED94u; f_800B9AF0(c); // 800BED90
  c->r[3]=c->r[1]+0x00000008u; // 800BED94
  c->r[4]=0u+0xFFFFFFFFu; // 800BED98
  c->lr=0x800BEDA0u; f_800C2510(c); // 800BED9C
  c->r[3]=0u+0x00000000u; // 800BEDA0
  goto L_800BEF54; // 800BEDA4
L_800BEDA8:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BEDA8
  c->r[3]=c->r[0]+c->r[30]; // 800BEDAC
  c->r[0]=R32(c->r[30]+c->r[0]); // 800BEDB0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BEDB4
  if (!crb(c,2)) { goto L_800BEDC4; } // 800BEDB8
  c->r[3]=c->r[3]+0x00000001u; // 800BEDBC
  goto L_800BEDC8; // 800BEDC0
L_800BEDC4:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BEDC4
L_800BEDC8:;
  c->lr=0x800BEDCCu; f_800F2FA0(c); // 800BEDC8
  cmps(c,0,(int32_t)c->r[3],0); // 800BEDCC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BEDD0
  if (crb(c,2)) { goto L_800BEDF4; } // 800BEDD4
  c->r[3]=c->r[31]|c->r[31]; // 800BEDD8
  c->lr=0x800BEDE0u; f_800B9AF0(c); // 800BEDDC
  c->r[3]=c->r[1]+0x00000008u; // 800BEDE0
  c->r[4]=0u+0xFFFFFFFFu; // 800BEDE4
  c->lr=0x800BEDECu; f_800C2510(c); // 800BEDE8
  c->r[3]=0u+0x00000000u; // 800BEDEC
  goto L_800BEF54; // 800BEDF0
L_800BEDF4:;
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BEDF4
  goto L_800BEF2C; // 800BEDF8
L_800BEDFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BEDFC
  if (crb(c,2)) { goto L_800BEE20; } // 800BEE00
  c->r[3]=c->r[31]|c->r[31]; // 800BEE04
  c->lr=0x800BEE0Cu; f_800B9AF0(c); // 800BEE08
  c->r[3]=c->r[1]+0x00000008u; // 800BEE0C
  c->r[4]=0u+0xFFFFFFFFu; // 800BEE10
  c->lr=0x800BEE18u; f_800C2510(c); // 800BEE14
  c->r[3]=0u+0x00000000u; // 800BEE18
  goto L_800BEF54; // 800BEE1C
L_800BEE20:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BEE20
  c->r[3]=c->r[0]+c->r[30]; // 800BEE24
  c->r[3]=R32(c->r[3]+0x00000010u); // 800BEE28
  c->lr=0x800BEE30u; f_800B99E0(c); // 800BEE2C
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 800BEE30
  c->r[25]=c->r[3]|c->r[3]; // 800BEE34
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BEE38
  cmpu(c,0,c->r[29],c->r[0]); // 800BEE3C
  if (crb(c,2)) { goto L_800BEE5C; } // 800BEE40
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BEE44
  c->r[4]=0u+0x00000000u; // 800BEE48
  c->r[5]=c->r[0]+c->r[30]; // 800BEE4C
  c->r[5]=R32(c->r[5]+0x00000010u); // 800BEE50
  c->lr=0x800BEE58u; f_800046B4(c); // 800BEE54
  goto L_800BEE68; // 800BEE58
L_800BEE5C:;
  c->r[4]=c->r[28]+0x00000014u; // 800BEE5C
  c->r[5]=c->r[26]+0xFFFFF0A0u; // 800BEE60
  c->lr=0x800BEE68u; f_80004364(c); // 800BEE64
L_800BEE68:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BEE68
  c->r[4]=c->r[25]|c->r[25]; // 800BEE6C
  c->r[3]=c->r[1]+0x0000000Cu; // 800BEE70
  c->r[5]=c->r[0]+c->r[30]; // 800BEE74
  c->r[5]=R32(c->r[5]+0x00000010u); // 800BEE78
  c->lr=0x800BEE80u; f_800F32A0(c); // 800BEE7C
  cmps(c,0,(int32_t)c->r[3],-5); // 800BEE80
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BEE84
  if (crb(c,2)) { goto L_800BEE94; } // 800BEE88
  cmps(c,0,(int32_t)c->r[3],-15); // 800BEE8C
  if (!crb(c,2)) { goto L_800BEECC; } // 800BEE90
L_800BEE94:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BEE94
  c->lr=0x800BEE9Cu; f_800F44D0(c); // 800BEE98
  cmps(c,0,(int32_t)c->r[3],0); // 800BEE9C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BEEA0
  if (crb(c,2)) { goto L_800BEEC4; } // 800BEEA4
  c->r[3]=c->r[31]|c->r[31]; // 800BEEA8
  c->lr=0x800BEEB0u; f_800B9AF0(c); // 800BEEAC
  c->r[3]=c->r[1]+0x00000008u; // 800BEEB0
  c->r[4]=0u+0xFFFFFFFFu; // 800BEEB4
  c->lr=0x800BEEBCu; f_800C2510(c); // 800BEEB8
  c->r[3]=0u+0x00000000u; // 800BEEBC
  goto L_800BEF54; // 800BEEC0
L_800BEEC4:;
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BEEC4
  goto L_800BEF2C; // 800BEEC8
L_800BEECC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BEECC
  if (!crb(c,0)) { goto L_800BEEF0; } // 800BEED0
  c->r[3]=c->r[31]|c->r[31]; // 800BEED4
  c->lr=0x800BEEDCu; f_800B9AF0(c); // 800BEED8
  c->r[3]=c->r[1]+0x00000008u; // 800BEEDC
  c->r[4]=0u+0xFFFFFFFFu; // 800BEEE0
  c->lr=0x800BEEE8u; f_800C2510(c); // 800BEEE4
  c->r[3]=0u+0x00000000u; // 800BEEE8
  goto L_800BEF54; // 800BEEEC
L_800BEEF0:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BEEF0
  c->lr=0x800BEEF8u; f_800F4280(c); // 800BEEF4
  cmps(c,0,(int32_t)c->r[3],0); // 800BEEF8
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BEEFC
  if (crb(c,2)) { goto L_800BEF20; } // 800BEF00
  c->r[3]=c->r[31]|c->r[31]; // 800BEF04
  c->lr=0x800BEF0Cu; f_800B9AF0(c); // 800BEF08
  c->r[3]=c->r[1]+0x00000008u; // 800BEF0C
  c->r[4]=0u+0xFFFFFFFFu; // 800BEF10
  c->lr=0x800BEF18u; f_800C2510(c); // 800BEF14
  c->r[3]=0u+0x00000000u; // 800BEF18
  goto L_800BEF54; // 800BEF1C
L_800BEF20:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BEF20
  c->r[3]=c->r[0]+c->r[30]; // 800BEF24
  W32(c->r[3]+0x00000014u,c->r[27]); // 800BEF28
L_800BEF2C:;
  c->r[29]=c->r[29]+0x00000001u; // 800BEF2C
L_800BEF30:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800BEF30
  cmpu(c,0,c->r[29],c->r[0]); // 800BEF34
  if (crb(c,0)) { IRQCHK(c); goto L_800BECCC; } // 800BEF38
  c->r[3]=c->r[31]|c->r[31]; // 800BEF3C
  c->lr=0x800BEF44u; f_800B9AF0(c); // 800BEF40
  c->r[3]=c->r[1]+0x00000008u; // 800BEF44
  c->r[4]=0u+0xFFFFFFFFu; // 800BEF48
  c->lr=0x800BEF50u; f_800C2510(c); // 800BEF4C
  c->r[3]=0u+0x00000001u; // 800BEF50
L_800BEF54:;
  c->r[11]=c->r[1]+0x000000C0u; // 800BEF54
  c->lr=0x800BEF5Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BEF58
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800BEF5C
  c->lr=c->r[0]; // 800BEF60
  c->r[1]=c->r[1]+0x000000C0u; // 800BEF64
  return; // 800BEF68
}

// fn_800BEF70
void f_800BEF70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEF70
  c->r[0]=c->lr; // 800BEF74
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BEF78
  c->r[11]=c->r[1]+0x000000B0u; // 800BEF7C
  c->lr=0x800BEF84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEF80
  c->r[27]=c->r[3]|c->r[3]; // 800BEF84
  c->r[29]=c->r[4]|c->r[4]; // 800BEF88
  c->r[28]=c->r[5]|c->r[5]; // 800BEF8C
  c->r[3]=c->r[1]+0x00000008u; // 800BEF90
  c->lr=0x800BEF98u; f_800C24D0(c); // 800BEF94
  c->r[3]=0u+0x00004000u; // 800BEF98
  c->lr=0x800BEFA0u; f_800B99E0(c); // 800BEF9C
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 800BEFA0
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BEFA4
  c->r[30]=c->r[3]|c->r[3]; // 800BEFA8
  c->r[3]=c->r[0]+c->r[29]; // 800BEFAC
  c->r[3]=R32(c->r[3]+0x00000010u); // 800BEFB0
  c->lr=0x800BEFB8u; f_800B99E0(c); // 800BEFB4
  c->r[31]=c->r[3]|c->r[3]; // 800BEFB8
L_800BEFBC:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BEFBC
  c->r[3]=c->r[0]+c->r[29]; // 800BEFC0
  c->r[0]=R32(c->r[29]+c->r[0]); // 800BEFC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BEFC8
  if (!crb(c,2)) { goto L_800BEFD8; } // 800BEFCC
  c->r[3]=c->r[3]+0x00000001u; // 800BEFD0
  goto L_800BEFDC; // 800BEFD4
L_800BEFD8:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BEFD8
L_800BEFDC:;
  c->r[6]=c->r[30]|c->r[30]; // 800BEFDC
  c->r[4]=c->r[1]+0x0000000Cu; // 800BEFE0
  c->r[5]=0u+0x00000001u; // 800BEFE4
  c->r[7]=0u+0x00004000u; // 800BEFE8
  c->lr=0x800BEFF0u; f_800F3EC0(c); // 800BEFEC
  cmps(c,0,(int32_t)c->r[3],-5); // 800BEFF0
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BEFF4
  if (crb(c,2)) { goto L_800BF004; } // 800BEFF8
  cmps(c,0,(int32_t)c->r[3],-15); // 800BEFFC
  if (!crb(c,2)) { goto L_800BF070; } // 800BF000
L_800BF004:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF004
  c->lr=0x800BF00Cu; f_800F44D0(c); // 800BF008
  cmps(c,0,(int32_t)c->r[3],0); // 800BF00C
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BF010
  if (crb(c,2)) { goto L_800BF03C; } // 800BF014
  c->r[3]=c->r[31]|c->r[31]; // 800BF018
  c->lr=0x800BF020u; f_800B9AF0(c); // 800BF01C
  c->r[3]=c->r[30]|c->r[30]; // 800BF020
  c->lr=0x800BF028u; f_800B9AF0(c); // 800BF024
  c->r[3]=c->r[1]+0x00000008u; // 800BF028
  c->r[4]=0u+0xFFFFFFFFu; // 800BF02C
  c->lr=0x800BF034u; f_800C2510(c); // 800BF030
  c->r[3]=0u+0x00000000u; // 800BF034
  goto L_800BF170; // 800BF038
L_800BF03C:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BF03C
  c->r[5]=0u+0x00000001u; // 800BF040
  c->r[3]=c->r[31]|c->r[31]; // 800BF044
  c->r[4]=c->r[0]+c->r[29]; // 800BF048
  W32(c->r[4]+0x00000014u,c->r[5]); // 800BF04C
  c->lr=0x800BF054u; f_800B9AF0(c); // 800BF050
  c->r[3]=c->r[30]|c->r[30]; // 800BF054
  c->lr=0x800BF05Cu; f_800B9AF0(c); // 800BF058
  c->r[3]=c->r[1]+0x00000008u; // 800BF05C
  c->r[4]=0u+0xFFFFFFFFu; // 800BF060
  c->lr=0x800BF068u; f_800C2510(c); // 800BF064
  c->r[3]=0u+0x00000001u; // 800BF068
  goto L_800BF170; // 800BF06C
L_800BF070:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BF070
  c->r[4]=c->r[31]|c->r[31]; // 800BF074
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF078
  c->r[5]=c->r[29]+c->r[0]; // 800BF07C
  c->r[5]=R32(c->r[5]+0x00000010u); // 800BF080
  c->lr=0x800BF088u; f_800F31B0(c); // 800BF084
  cmps(c,0,(int32_t)c->r[3],-5); // 800BF088
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BF08C
  if (crb(c,2)) { goto L_800BF09C; } // 800BF090
  cmps(c,0,(int32_t)c->r[3],-15); // 800BF094
  if (!crb(c,2)) { goto L_800BF0D4; } // 800BF098
L_800BF09C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF09C
  c->lr=0x800BF0A4u; f_800F44D0(c); // 800BF0A0
  cmps(c,0,(int32_t)c->r[3],0); // 800BF0A4
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BF0A8
  if (crb(c,2)) { IRQCHK(c); goto L_800BEFBC; } // 800BF0AC
  c->r[3]=c->r[31]|c->r[31]; // 800BF0B0
  c->lr=0x800BF0B8u; f_800B9AF0(c); // 800BF0B4
  c->r[3]=c->r[30]|c->r[30]; // 800BF0B8
  c->lr=0x800BF0C0u; f_800B9AF0(c); // 800BF0BC
  c->r[3]=c->r[1]+0x00000008u; // 800BF0C0
  c->r[4]=0u+0xFFFFFFFFu; // 800BF0C4
  c->lr=0x800BF0CCu; f_800C2510(c); // 800BF0C8
  c->r[3]=0u+0x00000000u; // 800BF0CC
  goto L_800BF170; // 800BF0D0
L_800BF0D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BF0D4
  if (!crb(c,0)) { goto L_800BF100; } // 800BF0D8
  c->r[3]=c->r[31]|c->r[31]; // 800BF0DC
  c->lr=0x800BF0E4u; f_800B9AF0(c); // 800BF0E0
  c->r[3]=c->r[30]|c->r[30]; // 800BF0E4
  c->lr=0x800BF0ECu; f_800B9AF0(c); // 800BF0E8
  c->r[3]=c->r[1]+0x00000008u; // 800BF0EC
  c->r[4]=0u+0xFFFFFFFFu; // 800BF0F0
  c->lr=0x800BF0F8u; f_800C2510(c); // 800BF0F4
  c->r[3]=0u+0x00000000u; // 800BF0F8
  goto L_800BF170; // 800BF0FC
L_800BF100:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BF100
  c->r[3]=c->r[28]|c->r[28]; // 800BF104
  c->r[4]=c->r[31]|c->r[31]; // 800BF108
  c->r[5]=c->r[0]+c->r[29]; // 800BF10C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800BF110
  c->lr=0x800BF118u; f_80004364(c); // 800BF114
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF118
  c->lr=0x800BF120u; f_800F4280(c); // 800BF11C
  cmps(c,0,(int32_t)c->r[3],0); // 800BF120
  W32(c->r[27]+0x00000000u,c->r[3]); // 800BF124
  if (crb(c,2)) { goto L_800BF150; } // 800BF128
  c->r[3]=c->r[31]|c->r[31]; // 800BF12C
  c->lr=0x800BF134u; f_800B9AF0(c); // 800BF130
  c->r[3]=c->r[30]|c->r[30]; // 800BF134
  c->lr=0x800BF13Cu; f_800B9AF0(c); // 800BF138
  c->r[3]=c->r[1]+0x00000008u; // 800BF13C
  c->r[4]=0u+0xFFFFFFFFu; // 800BF140
  c->lr=0x800BF148u; f_800C2510(c); // 800BF144
  c->r[3]=0u+0x00000000u; // 800BF148
  goto L_800BF170; // 800BF14C
L_800BF150:;
  c->r[3]=c->r[31]|c->r[31]; // 800BF150
  c->lr=0x800BF158u; f_800B9AF0(c); // 800BF154
  c->r[3]=c->r[30]|c->r[30]; // 800BF158
  c->lr=0x800BF160u; f_800B9AF0(c); // 800BF15C
  c->r[3]=c->r[1]+0x00000008u; // 800BF160
  c->r[4]=0u+0xFFFFFFFFu; // 800BF164
  c->lr=0x800BF16Cu; f_800C2510(c); // 800BF168
  c->r[3]=0u+0x00000001u; // 800BF16C
L_800BF170:;
  c->r[11]=c->r[1]+0x000000B0u; // 800BF170
  c->lr=0x800BF178u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF174
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800BF178
  c->lr=c->r[0]; // 800BF17C
  c->r[1]=c->r[1]+0x000000B0u; // 800BF180
  return; // 800BF184
}

// fn_800BF190
void f_800BF190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF190
  c->r[0]=c->lr; // 800BF194
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BF198
  c->r[11]=c->r[1]+0x000000B0u; // 800BF19C
  c->lr=0x800BF1A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF1A0
  c->r[29]=c->r[3]|c->r[3]; // 800BF1A4
  c->r[28]=c->r[4]|c->r[4]; // 800BF1A8
  c->r[27]=c->r[5]|c->r[5]; // 800BF1AC
  c->r[3]=c->r[1]+0x00000008u; // 800BF1B0
  c->lr=0x800BF1B8u; f_800C24D0(c); // 800BF1B4
  c->r[3]=0u+0x00004000u; // 800BF1B8
  c->lr=0x800BF1C0u; f_800B99E0(c); // 800BF1BC
  c->r[30]=(uint32_t)((int32_t)c->r[28]*(int32_t)28); // 800BF1C0
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BF1C4
  c->r[31]=c->r[3]|c->r[3]; // 800BF1C8
  c->r[3]=c->r[0]+c->r[30]; // 800BF1CC
  c->r[3]=R32(c->r[3]+0x00000010u); // 800BF1D0
  c->lr=0x800BF1D8u; f_800B99E0(c); // 800BF1D4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BF1D8
  c->r[28]=c->r[3]|c->r[3]; // 800BF1DC
  c->r[4]=0u+0x00000000u; // 800BF1E0
  c->r[5]=c->r[0]+c->r[30]; // 800BF1E4
  c->r[5]=R32(c->r[5]+0x00000010u); // 800BF1E8
  c->lr=0x800BF1F0u; f_800046B4(c); // 800BF1EC
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BF1F0
  c->r[3]=c->r[28]|c->r[28]; // 800BF1F4
  c->r[4]=c->r[27]|c->r[27]; // 800BF1F8
  c->r[5]=c->r[0]+c->r[30]; // 800BF1FC
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800BF200
  c->lr=0x800BF208u; f_80004364(c); // 800BF204
L_800BF208:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BF208
  c->r[3]=c->r[0]+c->r[30]; // 800BF20C
  c->r[0]=R32(c->r[30]+c->r[0]); // 800BF210
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF214
  if (!crb(c,2)) { goto L_800BF224; } // 800BF218
  c->r[3]=c->r[3]+0x00000001u; // 800BF21C
  goto L_800BF228; // 800BF220
L_800BF224:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BF224
L_800BF228:;
  c->r[6]=c->r[31]|c->r[31]; // 800BF228
  c->r[4]=c->r[1]+0x0000000Cu; // 800BF22C
  c->r[5]=0u+0x00000002u; // 800BF230
  c->r[7]=0u+0x00004000u; // 800BF234
  c->lr=0x800BF23Cu; f_800F3EC0(c); // 800BF238
  cmps(c,0,(int32_t)c->r[3],-5); // 800BF23C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800BF240
  if (crb(c,2)) { goto L_800BF250; } // 800BF244
  cmps(c,0,(int32_t)c->r[3],-15); // 800BF248
  if (!crb(c,2)) { goto L_800BF2BC; } // 800BF24C
L_800BF250:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF250
  c->lr=0x800BF258u; f_800F44D0(c); // 800BF254
  cmps(c,0,(int32_t)c->r[3],0); // 800BF258
  W32(c->r[29]+0x00000000u,c->r[3]); // 800BF25C
  if (crb(c,2)) { goto L_800BF288; } // 800BF260
  c->r[3]=c->r[28]|c->r[28]; // 800BF264
  c->lr=0x800BF26Cu; f_800B9AF0(c); // 800BF268
  c->r[3]=c->r[31]|c->r[31]; // 800BF26C
  c->lr=0x800BF274u; f_800B9AF0(c); // 800BF270
  c->r[3]=c->r[1]+0x00000008u; // 800BF274
  c->r[4]=0u+0xFFFFFFFFu; // 800BF278
  c->lr=0x800BF280u; f_800C2510(c); // 800BF27C
  c->r[3]=0u+0x00000000u; // 800BF280
  goto L_800BF3A4; // 800BF284
L_800BF288:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BF288
  c->r[5]=0u+0x00000001u; // 800BF28C
  c->r[3]=c->r[28]|c->r[28]; // 800BF290
  c->r[4]=c->r[0]+c->r[30]; // 800BF294
  W32(c->r[4]+0x00000014u,c->r[5]); // 800BF298
  c->lr=0x800BF2A0u; f_800B9AF0(c); // 800BF29C
  c->r[3]=c->r[31]|c->r[31]; // 800BF2A0
  c->lr=0x800BF2A8u; f_800B9AF0(c); // 800BF2A4
  c->r[3]=c->r[1]+0x00000008u; // 800BF2A8
  c->r[4]=0u+0xFFFFFFFFu; // 800BF2AC
  c->lr=0x800BF2B4u; f_800C2510(c); // 800BF2B0
  c->r[3]=0u+0x00000001u; // 800BF2B4
  goto L_800BF3A4; // 800BF2B8
L_800BF2BC:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BF2BC
  c->r[4]=c->r[28]|c->r[28]; // 800BF2C0
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF2C4
  c->r[5]=c->r[30]+c->r[0]; // 800BF2C8
  c->r[5]=R32(c->r[5]+0x00000010u); // 800BF2CC
  c->lr=0x800BF2D4u; f_800F32A0(c); // 800BF2D0
  cmps(c,0,(int32_t)c->r[3],-5); // 800BF2D4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800BF2D8
  if (crb(c,2)) { goto L_800BF2E8; } // 800BF2DC
  cmps(c,0,(int32_t)c->r[3],-15); // 800BF2E0
  if (!crb(c,2)) { goto L_800BF320; } // 800BF2E4
L_800BF2E8:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF2E8
  c->lr=0x800BF2F0u; f_800F44D0(c); // 800BF2EC
  cmps(c,0,(int32_t)c->r[3],0); // 800BF2F0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800BF2F4
  if (crb(c,2)) { IRQCHK(c); goto L_800BF208; } // 800BF2F8
  c->r[3]=c->r[28]|c->r[28]; // 800BF2FC
  c->lr=0x800BF304u; f_800B9AF0(c); // 800BF300
  c->r[3]=c->r[31]|c->r[31]; // 800BF304
  c->lr=0x800BF30Cu; f_800B9AF0(c); // 800BF308
  c->r[3]=c->r[1]+0x00000008u; // 800BF30C
  c->r[4]=0u+0xFFFFFFFFu; // 800BF310
  c->lr=0x800BF318u; f_800C2510(c); // 800BF314
  c->r[3]=0u+0x00000000u; // 800BF318
  goto L_800BF3A4; // 800BF31C
L_800BF320:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BF320
  if (!crb(c,0)) { goto L_800BF34C; } // 800BF324
  c->r[3]=c->r[28]|c->r[28]; // 800BF328
  c->lr=0x800BF330u; f_800B9AF0(c); // 800BF32C
  c->r[3]=c->r[31]|c->r[31]; // 800BF330
  c->lr=0x800BF338u; f_800B9AF0(c); // 800BF334
  c->r[3]=c->r[1]+0x00000008u; // 800BF338
  c->r[4]=0u+0xFFFFFFFFu; // 800BF33C
  c->lr=0x800BF344u; f_800C2510(c); // 800BF340
  c->r[3]=0u+0x00000000u; // 800BF344
  goto L_800BF3A4; // 800BF348
L_800BF34C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF34C
  c->lr=0x800BF354u; f_800F4280(c); // 800BF350
  cmps(c,0,(int32_t)c->r[3],0); // 800BF354
  W32(c->r[29]+0x00000000u,c->r[3]); // 800BF358
  if (crb(c,2)) { goto L_800BF384; } // 800BF35C
  c->r[3]=c->r[28]|c->r[28]; // 800BF360
  c->lr=0x800BF368u; f_800B9AF0(c); // 800BF364
  c->r[3]=c->r[31]|c->r[31]; // 800BF368
  c->lr=0x800BF370u; f_800B9AF0(c); // 800BF36C
  c->r[3]=c->r[1]+0x00000008u; // 800BF370
  c->r[4]=0u+0xFFFFFFFFu; // 800BF374
  c->lr=0x800BF37Cu; f_800C2510(c); // 800BF378
  c->r[3]=0u+0x00000000u; // 800BF37C
  goto L_800BF3A4; // 800BF380
L_800BF384:;
  c->r[3]=c->r[28]|c->r[28]; // 800BF384
  c->lr=0x800BF38Cu; f_800B9AF0(c); // 800BF388
  c->r[3]=c->r[31]|c->r[31]; // 800BF38C
  c->lr=0x800BF394u; f_800B9AF0(c); // 800BF390
  c->r[3]=c->r[1]+0x00000008u; // 800BF394
  c->r[4]=0u+0xFFFFFFFFu; // 800BF398
  c->lr=0x800BF3A0u; f_800C2510(c); // 800BF39C
  c->r[3]=0u+0x00000001u; // 800BF3A0
L_800BF3A4:;
  c->r[11]=c->r[1]+0x000000B0u; // 800BF3A4
  c->lr=0x800BF3ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF3A8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800BF3AC
  c->lr=c->r[0]; // 800BF3B0
  c->r[1]=c->r[1]+0x000000B0u; // 800BF3B4
  return; // 800BF3B8
}

// fn_800BF3C0
void f_800BF3C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF3C0
  c->r[0]=c->lr; // 800BF3C4
  cmps(c,0,(int32_t)c->r[3],0); // 800BF3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF3D0
  c->r[31]=c->r[4]|c->r[4]; // 800BF3D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF3D8
  c->r[30]=c->r[3]|c->r[3]; // 800BF3DC
  if (crb(c,2)) { goto L_800BF430; } // 800BF3E0
  c->r[4]=0u+0x802A0000u; // 800BF3E4
  c->r[4]=c->r[4]+0xFFFFF704u; // 800BF3E8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BF3EC
  c->r[3]=R32(c->r[3]+0x00000070u); // 800BF3F0
  c->lr=0x800BF3F8u; f_800B9AD0(c); // 800BF3F4
  cmps(c,0,(int32_t)c->r[30],0); // 800BF3F8
  if (crb(c,2)) { goto L_800BF420; } // 800BF3FC
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800BF400
  if (crb(c,2)) { goto L_800BF410; } // 800BF404
  c->r[4]=0u+0x00000000u; // 800BF408
  c->lr=0x800BF410u; f_800B9EC0(c); // 800BF40C
L_800BF410:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800BF410
  if (crb(c,2)) { goto L_800BF420; } // 800BF414
  c->r[4]=0u+0x00000000u; // 800BF418
  c->lr=0x800BF420u; f_800B9EC0(c); // 800BF41C
L_800BF420:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BF420
  if (!crb(c,1)) { goto L_800BF430; } // 800BF424
  c->r[3]=c->r[30]|c->r[30]; // 800BF428
  c->lr=0x800BF430u; f_800B9AD0(c); // 800BF42C
L_800BF430:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF434
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF438
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF43C
  c->lr=c->r[0]; // 800BF440
  c->r[1]=c->r[1]+0x00000010u; // 800BF444
  return; // 800BF448
}

// fn_800BF450
void f_800BF450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF450
  c->r[0]=c->lr; // 800BF454
  c->r[12]=c->r[3]+0x0000007Cu; // 800BF458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF45C
  c->lr=0x800BF464u; f_802174B4(c); // 800BF460
  c->r[0]=c->r[0]|0x00000000u; // 800BF464
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF468
  c->lr=c->r[0]; // 800BF46C
  c->r[1]=c->r[1]+0x00000010u; // 800BF470
  return; // 800BF474
}

// fn_800BF480
void f_800BF480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF480
  c->r[0]=c->lr; // 800BF484
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF48C
  c->r[31]=c->r[3]|c->r[3]; // 800BF490
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BF494
  c->r[12]=R32(c->r[12]+0x00000018u); // 800BF498
  c->ctr=c->r[12]; // 800BF49C
  if (true) { c->lr=0x800BF4A4u; dispatch(c,c->ctr); } // 800BF4A0
  c->r[4]=0u+0x802A0000u; // 800BF4A4
  {uint32_t ea=c->r[4]+0xFFFFF0D8u; c->r[3]=R32(ea); c->r[4]=ea;} // 800BF4A8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF4AC
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BF4B0
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 800BF4B4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF4B8
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BF4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF4C4
  c->lr=c->r[0]; // 800BF4C8
  c->r[1]=c->r[1]+0x00000010u; // 800BF4CC
  return; // 800BF4D0
}

// fn_800BF4E0
void f_800BF4E0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000078u); // 800BF4E0
  c->r[5]=0u+0x802A0000u; // 800BF4E4
  c->r[5]=c->r[5]+0xFFFFF010u; // 800BF4E8
  cmps(c,0,(int32_t)c->r[0],0); // 800BF4EC
  if (!crb(c,2)) { goto L_800BF514; } // 800BF4F0
  c->r[4]=c->r[5]+0x000000D4u; // 800BF4F4
  c->r[5]=R32(c->r[5]+0x000000D4u); // 800BF4F8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF4FC
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BF500
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF504
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF508
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BF50C
  return; // 800BF510
L_800BF514:;
  c->r[7]=R32(c->r[3]+0x00000074u); // 800BF514
  c->r[6]=0u+0x00000000u; // 800BF518
  c->r[8]=R32(c->r[7]+0x0000000Cu); // 800BF51C
  c->ctr=c->r[8]; // 800BF520
  cmpu(c,0,c->r[8],0x00000000u); // 800BF524
  if (!crb(c,1)) { goto L_800BF554; } // 800BF528
  c->r[0]=c->r[0]|0x00000000u; // 800BF52C
L_800BF530:;
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BF530
  c->r[4]=c->r[0]+c->r[6]; // 800BF534
  c->r[0]=R32(c->r[4]+0x00000014u); // 800BF538
  cmps(c,0,(int32_t)c->r[0],1); // 800BF53C
  if (!crb(c,2)) { goto L_800BF54C; } // 800BF540
  c->r[0]=0u+0x00000001u; // 800BF544
  goto L_800BF558; // 800BF548
L_800BF54C:;
  c->r[6]=c->r[6]+0x0000001Cu; // 800BF54C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF530; } // 800BF550
L_800BF554:;
  c->r[0]=0u+0x00000000u; // 800BF554
L_800BF558:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BF558
  if (crb(c,2)) { goto L_800BF580; } // 800BF55C
  c->r[4]=c->r[5]+0x000000E0u; // 800BF560
  c->r[5]=R32(c->r[5]+0x000000E0u); // 800BF564
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF568
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BF56C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF570
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF574
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BF578
  return; // 800BF57C
L_800BF580:;
  c->r[6]=0u+0x00000000u; // 800BF580
  c->ctr=c->r[8]; // 800BF584
  cmpu(c,0,c->r[8],0x00000000u); // 800BF588
  if (!crb(c,1)) { goto L_800BF5B4; } // 800BF58C
L_800BF590:;
  c->r[0]=R32(c->r[7]+0x00000008u); // 800BF590
  c->r[4]=c->r[0]+c->r[6]; // 800BF594
  c->r[0]=R32(c->r[4]+0x00000014u); // 800BF598
  cmps(c,0,(int32_t)c->r[0],0); // 800BF59C
  if (!crb(c,2)) { goto L_800BF5AC; } // 800BF5A0
  c->r[0]=0u+0x00000001u; // 800BF5A4
  goto L_800BF5B8; // 800BF5A8
L_800BF5AC:;
  c->r[6]=c->r[6]+0x0000001Cu; // 800BF5AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF590; } // 800BF5B0
L_800BF5B4:;
  c->r[0]=0u+0x00000000u; // 800BF5B4
L_800BF5B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BF5B8
  if (crb(c,2)) { goto L_800BF5E0; } // 800BF5BC
  c->r[4]=c->r[5]+0x000000ECu; // 800BF5C0
  c->r[5]=R32(c->r[5]+0x000000ECu); // 800BF5C4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF5C8
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BF5CC
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF5D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF5D4
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BF5D8
  return; // 800BF5DC
L_800BF5E0:;
  c->r[4]=c->r[5]+0x000000F8u; // 800BF5E0
  c->r[5]=R32(c->r[5]+0x000000F8u); // 800BF5E4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF5E8
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BF5EC
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF5F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF5F4
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BF5F8
  return; // 800BF5FC
}

// fn_800BF600
void f_800BF600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF600
  c->r[0]=c->lr; // 800BF604
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BF608
  c->r[11]=c->r[1]+0x00000080u; // 800BF60C
  c->lr=0x800BF614u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF610
  c->r[31]=0u+0x802A0000u; // 800BF614
  c->r[0]=0u+0x00000001u; // 800BF618
  c->r[31]=c->r[31]+0xFFFFF010u; // 800BF61C
  W32(c->r[3]+0x00000098u,c->r[0]); // 800BF620
  c->r[29]=0u+0x00000000u; // 800BF624
  c->r[30]=c->r[3]|c->r[3]; // 800BF628
  c->r[28]=c->r[31]+0x00000110u; // 800BF62C
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 800BF630
  c->r[3]=c->r[28]|c->r[28]; // 800BF634
  c->r[27]=c->r[1]+0x0000005Cu; // 800BF638
  W32(c->r[1]+0x00000060u,c->r[29]); // 800BF63C
  W32(c->r[1]+0x00000064u,c->r[29]); // 800BF640
  c->lr=0x800BF648u; f_80216B70(c); // 800BF644
  c->r[26]=c->r[3]|c->r[3]; // 800BF648
  c->r[3]=c->r[27]|c->r[27]; // 800BF64C
  c->r[4]=c->r[26]|c->r[26]; // 800BF650
  c->lr=0x800BF658u; f_80007C00(c); // 800BF654
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800BF658
  c->r[3]=c->r[27]|c->r[27]; // 800BF65C
  W8(c->r[1]+0x00000018u,c->r[0]); // 800BF660
  c->r[6]=c->r[28]|c->r[28]; // 800BF664
  c->r[7]=c->r[28]+c->r[26]; // 800BF668
  c->r[8]=c->r[1]+0x00000018u; // 800BF66C
  c->r[4]=0u+0x00000000u; // 800BF670
  c->r[5]=0u+0x00000000u; // 800BF674
  c->lr=0x800BF67Cu; f_80007DC0(c); // 800BF678
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BF67C
  c->r[5]=c->r[27]|c->r[27]; // 800BF680
  c->r[3]=c->r[1]+0x00000050u; // 800BF684
  c->lr=0x800BF68Cu; f_800BDA50(c); // 800BF688
  c->r[27]=c->r[31]+0x00000128u; // 800BF68C
  W32(c->r[1]+0x00000044u,c->r[29]); // 800BF690
  c->r[28]=c->r[1]+0x00000044u; // 800BF694
  W32(c->r[1]+0x00000048u,c->r[29]); // 800BF698
  c->r[3]=c->r[27]|c->r[27]; // 800BF69C
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 800BF6A0
  c->lr=0x800BF6A8u; f_80216B70(c); // 800BF6A4
  c->r[26]=c->r[3]|c->r[3]; // 800BF6A8
  c->r[3]=c->r[28]|c->r[28]; // 800BF6AC
  c->r[4]=c->r[26]|c->r[26]; // 800BF6B0
  c->lr=0x800BF6B8u; f_80007C00(c); // 800BF6B4
  c->r[0]=R8(c->r[1]+0x00000014u); // 800BF6B8
  c->r[3]=c->r[28]|c->r[28]; // 800BF6BC
  W8(c->r[1]+0x00000010u,c->r[0]); // 800BF6C0
  c->r[6]=c->r[27]|c->r[27]; // 800BF6C4
  c->r[7]=c->r[27]+c->r[26]; // 800BF6C8
  c->r[8]=c->r[1]+0x00000010u; // 800BF6CC
  c->r[4]=0u+0x00000000u; // 800BF6D0
  c->r[5]=0u+0x00000000u; // 800BF6D4
  c->lr=0x800BF6DCu; f_80007DC0(c); // 800BF6D8
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BF6DC
  c->r[5]=c->r[28]|c->r[28]; // 800BF6E0
  c->r[3]=c->r[1]+0x00000038u; // 800BF6E4
  c->lr=0x800BF6ECu; f_800BDA50(c); // 800BF6E8
  c->r[27]=c->r[31]+0x00000140u; // 800BF6EC
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800BF6F0
  c->r[28]=c->r[1]+0x0000002Cu; // 800BF6F4
  W32(c->r[1]+0x00000030u,c->r[29]); // 800BF6F8
  c->r[3]=c->r[27]|c->r[27]; // 800BF6FC
  W32(c->r[1]+0x00000034u,c->r[29]); // 800BF700
  c->lr=0x800BF708u; f_80216B70(c); // 800BF704
  c->r[26]=c->r[3]|c->r[3]; // 800BF708
  c->r[3]=c->r[28]|c->r[28]; // 800BF70C
  c->r[4]=c->r[26]|c->r[26]; // 800BF710
  c->lr=0x800BF718u; f_80007C00(c); // 800BF714
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800BF718
  c->r[3]=c->r[28]|c->r[28]; // 800BF71C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BF720
  c->r[6]=c->r[27]|c->r[27]; // 800BF724
  c->r[7]=c->r[27]+c->r[26]; // 800BF728
  c->r[8]=c->r[1]+0x00000008u; // 800BF72C
  c->r[4]=0u+0x00000000u; // 800BF730
  c->r[5]=0u+0x00000000u; // 800BF734
  c->lr=0x800BF73Cu; f_80007DC0(c); // 800BF738
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BF73C
  c->r[5]=c->r[28]|c->r[28]; // 800BF740
  c->r[3]=c->r[1]+0x00000020u; // 800BF744
  c->lr=0x800BF74Cu; f_800BDA50(c); // 800BF748
  c->r[3]=R32(c->r[30]+0x00000070u); // 800BF74C
  c->r[4]=c->r[1]+0x00000050u; // 800BF750
  c->r[5]=c->r[1]+0x00000038u; // 800BF754
  c->r[6]=c->r[1]+0x00000020u; // 800BF758
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BF75C
  c->r[7]=c->r[30]+0x00000098u; // 800BF760
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800BF764
  c->ctr=c->r[12]; // 800BF768
  if (true) { c->lr=0x800BF770u; dispatch(c,c->ctr); } // 800BF76C
  c->r[4]=c->r[3]|c->r[3]; // 800BF770
  c->r[3]=c->r[30]+0x00000010u; // 800BF774
  c->lr=0x800BF77Cu; f_800BA030(c); // 800BF778
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BF77C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF780
  if (crb(c,2)) { goto L_800BF790; } // 800BF784
  c->r[3]=R32(c->r[1]+0x00000028u); // 800BF788
  c->lr=0x800BF790u; f_800B9AD0(c); // 800BF78C
L_800BF790:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BF790
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF794
  if (crb(c,2)) { goto L_800BF7A4; } // 800BF798
  c->r[3]=R32(c->r[1]+0x00000034u); // 800BF79C
  c->lr=0x800BF7A4u; f_800B9AD0(c); // 800BF7A0
L_800BF7A4:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 800BF7A4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF7A8
  if (crb(c,2)) { goto L_800BF7B8; } // 800BF7AC
  c->r[3]=R32(c->r[1]+0x00000040u); // 800BF7B0
  c->lr=0x800BF7B8u; f_800B9AD0(c); // 800BF7B4
L_800BF7B8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BF7B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF7BC
  if (crb(c,2)) { goto L_800BF7CC; } // 800BF7C0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800BF7C4
  c->lr=0x800BF7CCu; f_800B9AD0(c); // 800BF7C8
L_800BF7CC:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800BF7CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF7D0
  if (crb(c,2)) { goto L_800BF7E0; } // 800BF7D4
  c->r[3]=R32(c->r[1]+0x00000058u); // 800BF7D8
  c->lr=0x800BF7E0u; f_800B9AD0(c); // 800BF7DC
L_800BF7E0:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800BF7E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF7E4
  if (crb(c,2)) { goto L_800BF7F4; } // 800BF7E8
  c->r[3]=R32(c->r[1]+0x00000064u); // 800BF7EC
  c->lr=0x800BF7F4u; f_800B9AD0(c); // 800BF7F0
L_800BF7F4:;
  c->r[3]=c->r[31]+0x00000104u; // 800BF7F4
  c->r[4]=R32(c->r[31]+0x00000104u); // 800BF7F8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BF7FC
  c->r[11]=c->r[1]+0x00000080u; // 800BF800
  W32(c->r[30]+0x00000080u,c->r[0]); // 800BF804
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800BF808
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF80C
  W32(c->r[30]+0x00000084u,c->r[0]); // 800BF810
  c->lr=0x800BF818u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF814
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BF818
  c->lr=c->r[0]; // 800BF81C
  c->r[1]=c->r[1]+0x00000080u; // 800BF820
  return; // 800BF824
}

// fn_800BF830
void f_800BF830(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000098u); // 800BF830
  c->r[7]=0u+0x802A0000u; // 800BF834
  c->r[7]=c->r[7]+0xFFFFF010u; // 800BF838
  cmpu(c,0,c->r[0],0x00000001u); // 800BF83C
  if (!crb(c,2)) { goto L_800BF864; } // 800BF840
  c->r[4]=c->r[7]+0x00000164u; // 800BF844
  c->r[5]=R32(c->r[7]+0x00000164u); // 800BF848
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF84C
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BF850
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF854
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF858
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BF85C
  return; // 800BF860
L_800BF864:;
  c->r[5]=c->r[7]+0x00000170u; // 800BF864
  c->r[6]=R32(c->r[7]+0x00000170u); // 800BF868
  c->r[0]=R32(c->r[5]+0x00000004u); // 800BF86C
  c->r[4]=c->r[7]+0x0000017Cu; // 800BF870
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800BF874
  W32(c->r[3]+0x00000088u,c->r[6]); // 800BF878
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BF87C
  W32(c->r[3]+0x00000090u,c->r[0]); // 800BF880
  c->r[5]=R32(c->r[7]+0x0000017Cu); // 800BF884
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF888
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BF88C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF890
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BF894
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BF898
  return; // 800BF89C
}

// fn_800BF8A0
void f_800BF8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF8A0
  c->r[0]=c->lr; // 800BF8A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BF8A8
  c->r[11]=c->r[1]+0x00000050u; // 800BF8AC
  c->lr=0x800BF8B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF8B0
  c->r[31]=0u+0x802A0000u; // 800BF8B4
  c->r[28]=R32(c->r[3]+0x00000074u); // 800BF8B8
  c->r[30]=c->r[3]|c->r[3]; // 800BF8BC
  c->r[3]=c->r[1]+0x00000010u; // 800BF8C0
  c->r[31]=c->r[31]+0xFFFFF010u; // 800BF8C4
  c->lr=0x800BF8CCu; f_800C24D0(c); // 800BF8C8
  c->r[27]=0u+0x00000000u; // 800BF8CC
  c->r[26]=0u+0x00000000u; // 800BF8D0
  c->r[29]=0u+0x00000000u; // 800BF8D4
  goto L_800BF940; // 800BF8D8
L_800BF8DC:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BF8DC
  c->r[3]=c->r[0]+c->r[26]; // 800BF8E0
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BF8E4
  cmps(c,0,(int32_t)c->r[0],1); // 800BF8E8
  if (!crb(c,2)) { goto L_800BF938; } // 800BF8EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BF8F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BF8F4
  if (!crb(c,2)) { goto L_800BF904; } // 800BF8F8
  c->r[3]=c->r[3]+0x00000001u; // 800BF8FC
  goto L_800BF908; // 800BF900
L_800BF904:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BF904
L_800BF908:;
  c->lr=0x800BF90Cu; f_800F2FA0(c); // 800BF908
  cmps(c,0,(int32_t)c->r[3],0); // 800BF90C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BF910
  if (crb(c,2)) { goto L_800BF92C; } // 800BF914
  c->r[3]=c->r[1]+0x00000010u; // 800BF918
  c->r[4]=0u+0xFFFFFFFFu; // 800BF91C
  c->lr=0x800BF924u; f_800C2510(c); // 800BF920
  c->r[0]=0u+0x00000000u; // 800BF924
  goto L_800BF95C; // 800BF928
L_800BF92C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800BF92C
  c->r[3]=c->r[0]+c->r[26]; // 800BF930
  W32(c->r[3]+0x00000014u,c->r[29]); // 800BF934
L_800BF938:;
  c->r[26]=c->r[26]+0x0000001Cu; // 800BF938
  c->r[27]=c->r[27]+0x00000001u; // 800BF93C
L_800BF940:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800BF940
  cmpu(c,0,c->r[27],c->r[0]); // 800BF944
  if (crb(c,0)) { IRQCHK(c); goto L_800BF8DC; } // 800BF948
  c->r[3]=c->r[1]+0x00000010u; // 800BF94C
  c->r[4]=0u+0xFFFFFFFFu; // 800BF950
  c->lr=0x800BF958u; f_800C2510(c); // 800BF954
  c->r[0]=0u+0x00000001u; // 800BF958
L_800BF95C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BF95C
  if (!crb(c,2)) { goto L_800BF984; } // 800BF960
  c->r[3]=c->r[31]+0x00000188u; // 800BF964
  c->r[4]=R32(c->r[31]+0x00000188u); // 800BF968
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BF96C
  W32(c->r[30]+0x00000080u,c->r[0]); // 800BF970
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800BF974
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF978
  W32(c->r[30]+0x00000084u,c->r[0]); // 800BF97C
  goto L_800BFA54; // 800BF980
L_800BF984:;
  c->r[0]=0u+0x00000000u; // 800BF984
  c->r[27]=c->r[31]+0x000001A0u; // 800BF988
  W32(c->r[1]+0x00000020u,c->r[0]); // 800BF98C
  c->r[3]=c->r[27]|c->r[27]; // 800BF990
  c->r[28]=c->r[1]+0x00000020u; // 800BF994
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF998
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BF99C
  c->lr=0x800BF9A4u; f_80216B70(c); // 800BF9A0
  c->r[29]=c->r[3]|c->r[3]; // 800BF9A4
  c->r[3]=c->r[28]|c->r[28]; // 800BF9A8
  c->r[4]=c->r[29]|c->r[29]; // 800BF9AC
  c->lr=0x800BF9B4u; f_80007C00(c); // 800BF9B0
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800BF9B4
  c->r[3]=c->r[28]|c->r[28]; // 800BF9B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BF9BC
  c->r[6]=c->r[27]|c->r[27]; // 800BF9C0
  c->r[7]=c->r[27]+c->r[29]; // 800BF9C4
  c->r[8]=c->r[1]+0x00000008u; // 800BF9C8
  c->r[4]=0u+0x00000000u; // 800BF9CC
  c->r[5]=0u+0x00000000u; // 800BF9D0
  c->lr=0x800BF9D8u; f_80007DC0(c); // 800BF9D4
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BF9D8
  c->r[5]=c->r[28]|c->r[28]; // 800BF9DC
  c->r[3]=c->r[1]+0x00000014u; // 800BF9E0
  c->lr=0x800BF9E8u; f_800BDA50(c); // 800BF9E4
  c->r[3]=R32(c->r[30]+0x00000070u); // 800BF9E8
  c->r[4]=c->r[1]+0x00000014u; // 800BF9EC
  c->r[5]=0u+0x00000001u; // 800BF9F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BF9F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BF9F8
  c->ctr=c->r[12]; // 800BF9FC
  if (true) { c->lr=0x800BFA04u; dispatch(c,c->ctr); } // 800BFA00
  c->r[4]=c->r[3]|c->r[3]; // 800BFA04
  c->r[3]=c->r[30]+0x00000010u; // 800BFA08
  c->lr=0x800BFA10u; f_800BA030(c); // 800BFA0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFA10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFA14
  if (crb(c,2)) { goto L_800BFA24; } // 800BFA18
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800BFA1C
  c->lr=0x800BFA24u; f_800B9AD0(c); // 800BFA20
L_800BFA24:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BFA24
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFA28
  if (crb(c,2)) { goto L_800BFA38; } // 800BFA2C
  c->r[3]=R32(c->r[1]+0x00000028u); // 800BFA30
  c->lr=0x800BFA38u; f_800B9AD0(c); // 800BFA34
L_800BFA38:;
  c->r[3]=c->r[31]+0x00000194u; // 800BFA38
  c->r[4]=R32(c->r[31]+0x00000194u); // 800BFA3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BFA40
  W32(c->r[30]+0x00000080u,c->r[0]); // 800BFA44
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800BFA48
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFA4C
  W32(c->r[30]+0x00000084u,c->r[0]); // 800BFA50
L_800BFA54:;
  c->r[11]=c->r[1]+0x00000050u; // 800BFA54
  c->lr=0x800BFA5Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFA58
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BFA5C
  c->lr=c->r[0]; // 800BFA60
  c->r[1]=c->r[1]+0x00000050u; // 800BFA64
  return; // 800BFA68
}

// fn_800BFA70
void f_800BFA70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFA70
  c->r[0]=c->lr; // 800BFA74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFA78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFA7C
  c->r[31]=c->r[3]|c->r[3]; // 800BFA80
  c->r[4]=c->r[31]+0x000000A0u; // 800BFA84
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BFA88
  c->r[30]=0u+0x802A0000u; // 800BFA8C
  c->r[30]=c->r[30]+0xFFFFF010u; // 800BFA90
  c->r[5]=c->r[31]+0x000000A4u; // 800BFA94
  c->r[3]=R32(c->r[3]+0x00000074u); // 800BFA98
  c->r[6]=c->r[31]+0x000000A8u; // 800BFA9C
  c->r[7]=c->r[31]+0x000000ACu; // 800BFAA0
  c->lr=0x800BFAA8u; f_800BEB40(c); // 800BFAA4
  cmps(c,0,(int32_t)c->r[3],0); // 800BFAA8
  if (!crb(c,2)) { goto L_800BFAD0; } // 800BFAAC
  c->r[3]=c->r[30]+0x000001C0u; // 800BFAB0
  c->r[4]=R32(c->r[30]+0x000001C0u); // 800BFAB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BFAB8
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BFABC
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 800BFAC0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFAC4
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BFAC8
  goto L_800BFB44; // 800BFACC
L_800BFAD0:;
  c->r[0]=R32(c->r[31]+0x000000A8u); // 800BFAD0
  cmps(c,0,(int32_t)c->r[0],0); // 800BFAD4
  if (crb(c,2)) { goto L_800BFAFC; } // 800BFAD8
  c->r[3]=c->r[30]+0x000001CCu; // 800BFADC
  c->r[4]=R32(c->r[30]+0x000001CCu); // 800BFAE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BFAE4
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BFAE8
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 800BFAEC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFAF0
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BFAF4
  goto L_800BFB44; // 800BFAF8
L_800BFAFC:;
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800BFAFC
  cmps(c,0,(int32_t)c->r[0],0); // 800BFB00
  if (crb(c,2)) { goto L_800BFB28; } // 800BFB04
  c->r[3]=c->r[30]+0x000001D8u; // 800BFB08
  c->r[4]=R32(c->r[30]+0x000001D8u); // 800BFB0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BFB10
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BFB14
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 800BFB18
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFB1C
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BFB20
  goto L_800BFB44; // 800BFB24
L_800BFB28:;
  c->r[3]=c->r[30]+0x000001E4u; // 800BFB28
  c->r[4]=R32(c->r[30]+0x000001E4u); // 800BFB2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BFB30
  W32(c->r[31]+0x00000080u,c->r[0]); // 800BFB34
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 800BFB38
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFB3C
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BFB40
L_800BFB44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFB44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFB48
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BFB4C
  c->lr=c->r[0]; // 800BFB50
  c->r[1]=c->r[1]+0x00000010u; // 800BFB54
  return; // 800BFB58
}

// fn_800BFB60
void f_800BFB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFB60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFB60
  c->r[0]=c->lr; // 800BFB64
  W32(c->r[1]+0x000004A4u,c->r[0]); // 800BFB68
  c->r[11]=c->r[1]+0x000004A0u; // 800BFB6C
  c->lr=0x800BFB74u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFB70
  c->r[31]=0u+0x802A0000u; // 800BFB74
  c->r[0]=0u+0x00000001u; // 800BFB78
  c->r[31]=c->r[31]+0xFFFFF010u; // 800BFB7C
  W32(c->r[3]+0x00000098u,c->r[0]); // 800BFB80
  c->r[0]=0u+0x00000000u; // 800BFB84
  c->r[30]=c->r[3]|c->r[3]; // 800BFB88
  c->r[29]=c->r[31]+0x000001FCu; // 800BFB8C
  W32(c->r[1]+0x00000070u,c->r[0]); // 800BFB90
  c->r[3]=c->r[29]|c->r[29]; // 800BFB94
  c->r[28]=c->r[1]+0x00000070u; // 800BFB98
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BFB9C
  W32(c->r[1]+0x00000078u,c->r[0]); // 800BFBA0
  c->lr=0x800BFBA8u; f_80216B70(c); // 800BFBA4
  c->r[26]=c->r[3]|c->r[3]; // 800BFBA8
  c->r[3]=c->r[28]|c->r[28]; // 800BFBAC
  c->r[4]=c->r[26]|c->r[26]; // 800BFBB0
  c->lr=0x800BFBB8u; f_80007C00(c); // 800BFBB4
  c->r[0]=R8(c->r[1]+0x00000024u); // 800BFBB8
  c->r[3]=c->r[28]|c->r[28]; // 800BFBBC
  W8(c->r[1]+0x00000020u,c->r[0]); // 800BFBC0
  c->r[6]=c->r[29]|c->r[29]; // 800BFBC4
  c->r[7]=c->r[29]+c->r[26]; // 800BFBC8
  c->r[8]=c->r[1]+0x00000020u; // 800BFBCC
  c->r[4]=0u+0x00000000u; // 800BFBD0
  c->r[5]=0u+0x00000000u; // 800BFBD4
  c->lr=0x800BFBDCu; f_80007DC0(c); // 800BFBD8
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BFBDC
  c->r[5]=c->r[28]|c->r[28]; // 800BFBE0
  c->r[3]=c->r[1]+0x00000064u; // 800BFBE4
  c->lr=0x800BFBECu; f_800BDA50(c); // 800BFBE8
  c->r[4]=R32(c->r[30]+0x000000A0u); // 800BFBEC
  c->r[3]=c->r[1]+0x00000080u; // 800BFBF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BFBF4
  c->r[4]=rotl(c->r[4],14)&0xFFFFC000u; // 800BFBF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFBFC
  c->r[4]=c->r[4]+0x00020000u; // 800BFC00
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BFC04
  c->r[5]=rotl(c->r[0],15)&0x00007FFFu; // 800BFC08
  if (!crb(c,2)) { goto L_800BFC18; } // 800BFC0C
  c->r[4]=c->r[1]+0x00000065u; // 800BFC10
  goto L_800BFC1C; // 800BFC14
L_800BFC18:;
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 800BFC18
L_800BFC1C:;
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BFC1C
  c->lr=0x800BFC24u; f_8021E904(c); // 800BFC20
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BFC24
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFC28
  if (crb(c,2)) { goto L_800BFC38; } // 800BFC2C
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800BFC30
  c->lr=0x800BFC38u; f_800B9AD0(c); // 800BFC34
L_800BFC38:;
  c->r[0]=R32(c->r[1]+0x00000070u); // 800BFC38
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFC3C
  if (crb(c,2)) { goto L_800BFC4C; } // 800BFC40
  c->r[3]=R32(c->r[1]+0x00000078u); // 800BFC44
  c->lr=0x800BFC4Cu; f_800B9AD0(c); // 800BFC48
L_800BFC4C:;
  c->r[29]=0u+0x00000000u; // 800BFC4C
  W32(c->r[1]+0x00000058u,c->r[29]); // 800BFC50
  c->r[28]=c->r[1]+0x00000058u; // 800BFC54
  c->r[3]=c->r[1]+0x00000080u; // 800BFC58
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 800BFC5C
  W32(c->r[1]+0x00000060u,c->r[29]); // 800BFC60
  c->lr=0x800BFC68u; f_80216B70(c); // 800BFC64
  c->r[26]=c->r[3]|c->r[3]; // 800BFC68
  c->r[3]=c->r[28]|c->r[28]; // 800BFC6C
  c->r[4]=c->r[26]|c->r[26]; // 800BFC70
  c->lr=0x800BFC78u; f_80007C00(c); // 800BFC74
  c->r[6]=c->r[1]+0x00000080u; // 800BFC78
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800BFC7C
  c->r[7]=c->r[6]|c->r[6]; // 800BFC80
  W8(c->r[1]+0x00000018u,c->r[0]); // 800BFC84
  c->r[3]=c->r[28]|c->r[28]; // 800BFC88
  c->r[8]=c->r[1]+0x00000018u; // 800BFC8C
  c->r[7]=c->r[7]+c->r[26]; // 800BFC90
  c->r[4]=0u+0x00000000u; // 800BFC94
  c->r[5]=0u+0x00000000u; // 800BFC98
  c->lr=0x800BFCA0u; f_80007DC0(c); // 800BFC9C
  c->r[27]=c->r[31]+0x00000210u; // 800BFCA0
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 800BFCA4
  c->r[26]=c->r[1]+0x0000004Cu; // 800BFCA8
  W32(c->r[1]+0x00000050u,c->r[29]); // 800BFCAC
  c->r[3]=c->r[27]|c->r[27]; // 800BFCB0
  W32(c->r[1]+0x00000054u,c->r[29]); // 800BFCB4
  c->lr=0x800BFCBCu; f_80216B70(c); // 800BFCB8
  c->r[25]=c->r[3]|c->r[3]; // 800BFCBC
  c->r[3]=c->r[26]|c->r[26]; // 800BFCC0
  c->r[4]=c->r[25]|c->r[25]; // 800BFCC4
  c->lr=0x800BFCCCu; f_80007C00(c); // 800BFCC8
  c->r[0]=R8(c->r[1]+0x00000014u); // 800BFCCC
  c->r[3]=c->r[26]|c->r[26]; // 800BFCD0
  W8(c->r[1]+0x00000010u,c->r[0]); // 800BFCD4
  c->r[6]=c->r[27]|c->r[27]; // 800BFCD8
  c->r[7]=c->r[27]+c->r[25]; // 800BFCDC
  c->r[8]=c->r[1]+0x00000010u; // 800BFCE0
  c->r[4]=0u+0x00000000u; // 800BFCE4
  c->r[5]=0u+0x00000000u; // 800BFCE8
  c->lr=0x800BFCF0u; f_80007DC0(c); // 800BFCEC
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BFCF0
  c->r[5]=c->r[26]|c->r[26]; // 800BFCF4
  c->r[3]=c->r[1]+0x00000040u; // 800BFCF8
  c->lr=0x800BFD00u; f_800BDA50(c); // 800BFCFC
  c->r[26]=c->r[31]+0x0000022Cu; // 800BFD00
  W32(c->r[1]+0x00000034u,c->r[29]); // 800BFD04
  c->r[27]=c->r[1]+0x00000034u; // 800BFD08
  W32(c->r[1]+0x00000038u,c->r[29]); // 800BFD0C
  c->r[3]=c->r[26]|c->r[26]; // 800BFD10
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 800BFD14
  c->lr=0x800BFD1Cu; f_80216B70(c); // 800BFD18
  c->r[25]=c->r[3]|c->r[3]; // 800BFD1C
  c->r[3]=c->r[27]|c->r[27]; // 800BFD20
  c->r[4]=c->r[25]|c->r[25]; // 800BFD24
  c->lr=0x800BFD2Cu; f_80007C00(c); // 800BFD28
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800BFD2C
  c->r[3]=c->r[27]|c->r[27]; // 800BFD30
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BFD34
  c->r[6]=c->r[26]|c->r[26]; // 800BFD38
  c->r[7]=c->r[26]+c->r[25]; // 800BFD3C
  c->r[8]=c->r[1]+0x00000008u; // 800BFD40
  c->r[4]=0u+0x00000000u; // 800BFD44
  c->r[5]=0u+0x00000000u; // 800BFD48
  c->lr=0x800BFD50u; f_80007DC0(c); // 800BFD4C
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BFD50
  c->r[5]=c->r[27]|c->r[27]; // 800BFD54
  c->r[3]=c->r[1]+0x00000028u; // 800BFD58
  c->lr=0x800BFD60u; f_800BDA50(c); // 800BFD5C
  c->r[3]=R32(c->r[30]+0x00000070u); // 800BFD60
  c->r[4]=c->r[28]|c->r[28]; // 800BFD64
  c->r[5]=c->r[1]+0x00000040u; // 800BFD68
  c->r[6]=c->r[1]+0x00000028u; // 800BFD6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BFD70
  c->r[7]=c->r[30]+0x00000098u; // 800BFD74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800BFD78
  c->ctr=c->r[12]; // 800BFD7C
  if (true) { c->lr=0x800BFD84u; dispatch(c,c->ctr); } // 800BFD80
  c->r[4]=c->r[3]|c->r[3]; // 800BFD84
  c->r[3]=c->r[30]+0x00000010u; // 800BFD88
  c->lr=0x800BFD90u; f_800BA030(c); // 800BFD8C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800BFD90
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFD94
  if (crb(c,2)) { goto L_800BFDA4; } // 800BFD98
  c->r[3]=R32(c->r[1]+0x00000030u); // 800BFD9C
  c->lr=0x800BFDA4u; f_800B9AD0(c); // 800BFDA0
L_800BFDA4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BFDA4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFDA8
  if (crb(c,2)) { goto L_800BFDB8; } // 800BFDAC
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800BFDB0
  c->lr=0x800BFDB8u; f_800B9AD0(c); // 800BFDB4
L_800BFDB8:;
  c->r[0]=R32(c->r[1]+0x00000040u); // 800BFDB8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFDBC
  if (crb(c,2)) { goto L_800BFDCC; } // 800BFDC0
  c->r[3]=R32(c->r[1]+0x00000048u); // 800BFDC4
  c->lr=0x800BFDCCu; f_800B9AD0(c); // 800BFDC8
L_800BFDCC:;
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BFDCC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFDD0
  if (crb(c,2)) { goto L_800BFDE0; } // 800BFDD4
  c->r[3]=R32(c->r[1]+0x00000054u); // 800BFDD8
  c->lr=0x800BFDE0u; f_800B9AD0(c); // 800BFDDC
L_800BFDE0:;
  c->r[0]=R32(c->r[1]+0x00000058u); // 800BFDE0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BFDE4
  if (crb(c,2)) { goto L_800BFDF4; } // 800BFDE8
  c->r[3]=R32(c->r[1]+0x00000060u); // 800BFDEC
  c->lr=0x800BFDF4u; f_800B9AD0(c); // 800BFDF0
L_800BFDF4:;
  c->r[3]=c->r[31]+0x000001F0u; // 800BFDF4
  c->r[4]=R32(c->r[31]+0x000001F0u); // 800BFDF8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BFDFC
  c->r[11]=c->r[1]+0x000004A0u; // 800BFE00
  W32(c->r[30]+0x00000080u,c->r[0]); // 800BFE04
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800BFE08
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFE0C
  W32(c->r[30]+0x00000084u,c->r[0]); // 800BFE10
  c->lr=0x800BFE18u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFE14
  c->r[0]=R32(c->r[1]+0x000004A4u); // 800BFE18
  c->lr=c->r[0]; // 800BFE1C
  c->r[1]=c->r[1]+0x000004A0u; // 800BFE20
  return; // 800BFE24
}

// fn_800BFE30
void f_800BFE30(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000098u); // 800BFE30
  c->r[7]=0u+0x802A0000u; // 800BFE34
  c->r[7]=c->r[7]+0xFFFFF010u; // 800BFE38
  cmpu(c,0,c->r[0],0x00000001u); // 800BFE3C
  if (!crb(c,2)) { goto L_800BFE80; } // 800BFE40
  c->r[5]=c->r[7]+0x00000248u; // 800BFE44
  c->r[6]=R32(c->r[7]+0x00000248u); // 800BFE48
  c->r[0]=R32(c->r[5]+0x00000004u); // 800BFE4C
  c->r[4]=c->r[7]+0x00000254u; // 800BFE50
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800BFE54
  W32(c->r[3]+0x00000088u,c->r[6]); // 800BFE58
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BFE5C
  W32(c->r[3]+0x00000090u,c->r[0]); // 800BFE60
  c->r[5]=R32(c->r[7]+0x00000254u); // 800BFE64
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFE68
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BFE6C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BFE70
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BFE74
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BFE78
  return; // 800BFE7C
L_800BFE80:;
  c->r[4]=c->r[7]+0x00000260u; // 800BFE80
  c->r[5]=R32(c->r[7]+0x00000260u); // 800BFE84
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFE88
  W32(c->r[3]+0x00000080u,c->r[0]); // 800BFE8C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BFE90
  c->r[0]=R32(c->r[4]+0x00000008u); // 800BFE94
  W32(c->r[3]+0x00000084u,c->r[0]); // 800BFE98
  return; // 800BFE9C
}

// fn_800BFEA0
void f_800BFEA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFEA0
  c->r[0]=c->lr; // 800BFEA4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BFEA8
  c->r[11]=c->r[1]+0x00000080u; // 800BFEAC
  c->lr=0x800BFEB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFEB0
  c->r[31]=0u+0x802A0000u; // 800BFEB4
  c->r[0]=0u+0x00000001u; // 800BFEB8
  c->r[31]=c->r[31]+0xFFFFF010u; // 800BFEBC
  W32(c->r[3]+0x00000098u,c->r[0]); // 800BFEC0
  c->r[29]=0u+0x00000000u; // 800BFEC4
  c->r[30]=c->r[3]|c->r[3]; // 800BFEC8
  c->r[28]=c->r[31]+0x00000278u; // 800BFECC
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 800BFED0
  c->r[3]=c->r[28]|c->r[28]; // 800BFED4
  c->r[27]=c->r[1]+0x0000005Cu; // 800BFED8
  W32(c->r[1]+0x00000060u,c->r[29]); // 800BFEDC
  W32(c->r[1]+0x00000064u,c->r[29]); // 800BFEE0
  c->lr=0x800BFEE8u; f_80216B70(c); // 800BFEE4
  c->r[26]=c->r[3]|c->r[3]; // 800BFEE8
  c->r[3]=c->r[27]|c->r[27]; // 800BFEEC
  c->r[4]=c->r[26]|c->r[26]; // 800BFEF0
  c->lr=0x800BFEF8u; f_80007C00(c); // 800BFEF4
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800BFEF8
  c->r[3]=c->r[27]|c->r[27]; // 800BFEFC
  W8(c->r[1]+0x00000018u,c->r[0]); // 800BFF00
  c->r[6]=c->r[28]|c->r[28]; // 800BFF04
  c->r[7]=c->r[28]+c->r[26]; // 800BFF08
  c->r[8]=c->r[1]+0x00000018u; // 800BFF0C
  c->r[4]=0u+0x00000000u; // 800BFF10
  c->r[5]=0u+0x00000000u; // 800BFF14
  c->lr=0x800BFF1Cu; f_80007DC0(c); // 800BFF18
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BFF1C
  c->r[5]=c->r[27]|c->r[27]; // 800BFF20
  c->r[3]=c->r[1]+0x00000050u; // 800BFF24
  c->lr=0x800BFF2Cu; f_800BDA50(c); // 800BFF28
  c->r[27]=c->r[31]+0x00000210u; // 800BFF2C
  W32(c->r[1]+0x00000044u,c->r[29]); // 800BFF30
  c->r[28]=c->r[1]+0x00000044u; // 800BFF34
  W32(c->r[1]+0x00000048u,c->r[29]); // 800BFF38
  c->r[3]=c->r[27]|c->r[27]; // 800BFF3C
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 800BFF40
  c->lr=0x800BFF48u; f_80216B70(c); // 800BFF44
  c->r[26]=c->r[3]|c->r[3]; // 800BFF48
  c->r[3]=c->r[28]|c->r[28]; // 800BFF4C
  c->r[4]=c->r[26]|c->r[26]; // 800BFF50
  c->lr=0x800BFF58u; f_80007C00(c); // 800BFF54
  c->r[0]=R8(c->r[1]+0x00000014u); // 800BFF58
  c->r[3]=c->r[28]|c->r[28]; // 800BFF5C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800BFF60
  c->r[6]=c->r[27]|c->r[27]; // 800BFF64
  c->r[7]=c->r[27]+c->r[26]; // 800BFF68
  c->r[8]=c->r[1]+0x00000010u; // 800BFF6C
  c->r[4]=0u+0x00000000u; // 800BFF70
  c->r[5]=0u+0x00000000u; // 800BFF74
  c->lr=0x800BFF7Cu; f_80007DC0(c); // 800BFF78
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BFF7C
  c->r[5]=c->r[28]|c->r[28]; // 800BFF80
  c->r[3]=c->r[1]+0x00000038u; // 800BFF84
  c->lr=0x800BFF8Cu; f_800BDA50(c); // 800BFF88
  c->r[27]=c->r[31]+0x0000022Cu; // 800BFF8C
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800BFF90
  c->r[28]=c->r[1]+0x0000002Cu; // 800BFF94
  W32(c->r[1]+0x00000030u,c->r[29]); // 800BFF98
  c->r[3]=c->r[27]|c->r[27]; // 800BFF9C
  W32(c->r[1]+0x00000034u,c->r[29]); // 800BFFA0
  c->lr=0x800BFFA8u; f_80216B70(c); // 800BFFA4
  c->r[26]=c->r[3]|c->r[3]; // 800BFFA8
  c->r[3]=c->r[28]|c->r[28]; // 800BFFAC
  c->r[4]=c->r[26]|c->r[26]; // 800BFFB0
  c->lr=0x800BFFB8u; f_80007C00(c); // 800BFFB4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800BFFB8
  c->r[3]=c->r[28]|c->r[28]; // 800BFFBC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BFFC0
  c->r[6]=c->r[27]|c->r[27]; // 800BFFC4
  c->r[7]=c->r[27]+c->r[26]; // 800BFFC8
  c->r[8]=c->r[1]+0x00000008u; // 800BFFCC
  c->r[4]=0u+0x00000000u; // 800BFFD0
  c->r[5]=0u+0x00000000u; // 800BFFD4
  c->lr=0x800BFFDCu; f_80007DC0(c); // 800BFFD8
  c->r[4]=R32(c->r[30]+0x00000074u); // 800BFFDC
  c->r[5]=c->r[28]|c->r[28]; // 800BFFE0
  c->r[3]=c->r[1]+0x00000020u; // 800BFFE4
  c->lr=0x800BFFECu; f_800BDA50(c); // 800BFFE8
  c->r[3]=R32(c->r[30]+0x00000070u); // 800BFFEC
  c->r[4]=c->r[1]+0x00000050u; // 800BFFF0
  c->r[5]=c->r[1]+0x00000038u; // 800BFFF4
  c->r[6]=c->r[1]+0x00000020u; // 800BFFF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BFFFC
  c->r[7]=c->r[30]+0x00000098u; // 800C0000
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C0004
  c->ctr=c->r[12]; // 800C0008
  if (true) { c->lr=0x800C0010u; dispatch(c,c->ctr); } // 800C000C
  c->r[4]=c->r[3]|c->r[3]; // 800C0010
  c->r[3]=c->r[30]+0x00000010u; // 800C0014
  c->lr=0x800C001Cu; f_800BA030(c); // 800C0018
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C001C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0020
  if (crb(c,2)) { goto L_800C0030; } // 800C0024
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C0028
  c->lr=0x800C0030u; f_800B9AD0(c); // 800C002C
L_800C0030:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C0030
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0034
  if (crb(c,2)) { goto L_800C0044; } // 800C0038
  c->r[3]=R32(c->r[1]+0x00000034u); // 800C003C
  c->lr=0x800C0044u; f_800B9AD0(c); // 800C0040
L_800C0044:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 800C0044
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0048
  if (crb(c,2)) { goto L_800C0058; } // 800C004C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800C0050
  c->lr=0x800C0058u; f_800B9AD0(c); // 800C0054
L_800C0058:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C0058
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C005C
  if (crb(c,2)) { goto L_800C006C; } // 800C0060
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800C0064
  c->lr=0x800C006Cu; f_800B9AD0(c); // 800C0068
L_800C006C:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800C006C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0070
  if (crb(c,2)) { goto L_800C0080; } // 800C0074
  c->r[3]=R32(c->r[1]+0x00000058u); // 800C0078
  c->lr=0x800C0080u; f_800B9AD0(c); // 800C007C
L_800C0080:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C0080
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0084
  if (crb(c,2)) { goto L_800C0094; } // 800C0088
  c->r[3]=R32(c->r[1]+0x00000064u); // 800C008C
  c->lr=0x800C0094u; f_800B9AD0(c); // 800C0090
L_800C0094:;
  c->r[3]=c->r[31]+0x0000026Cu; // 800C0094
  c->r[4]=R32(c->r[31]+0x0000026Cu); // 800C0098
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C009C
  c->r[11]=c->r[1]+0x00000080u; // 800C00A0
  W32(c->r[30]+0x00000080u,c->r[0]); // 800C00A4
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800C00A8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C00AC
  W32(c->r[30]+0x00000084u,c->r[0]); // 800C00B0
  c->lr=0x800C00B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C00B4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C00B8
  c->lr=c->r[0]; // 800C00BC
  c->r[1]=c->r[1]+0x00000080u; // 800C00C0
  return; // 800C00C4
}

// fn_800C00D0
void f_800C00D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000098u); // 800C00D0
  c->r[7]=0u+0x802A0000u; // 800C00D4
  c->r[7]=c->r[7]+0xFFFFF010u; // 800C00D8
  cmpu(c,0,c->r[0],0x00000001u); // 800C00DC
  if (!crb(c,2)) { goto L_800C0120; } // 800C00E0
  c->r[5]=c->r[7]+0x0000028Cu; // 800C00E4
  c->r[6]=R32(c->r[7]+0x0000028Cu); // 800C00E8
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C00EC
  c->r[4]=c->r[7]+0x00000298u; // 800C00F0
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800C00F4
  W32(c->r[3]+0x00000088u,c->r[6]); // 800C00F8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C00FC
  W32(c->r[3]+0x00000090u,c->r[0]); // 800C0100
  c->r[5]=R32(c->r[7]+0x00000298u); // 800C0104
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0108
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C010C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0110
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0114
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C0118
  return; // 800C011C
L_800C0120:;
  c->r[4]=c->r[7]+0x000002A4u; // 800C0120
  c->r[5]=R32(c->r[7]+0x000002A4u); // 800C0124
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0128
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C012C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0130
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0134
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C0138
  return; // 800C013C
}

// fn_800C0140
void f_800C0140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0140
  c->r[0]=c->lr; // 800C0144
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C0148
  c->r[11]=c->r[1]+0x00000080u; // 800C014C
  c->lr=0x800C0154u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0150
  c->r[31]=0u+0x802A0000u; // 800C0154
  c->r[0]=0u+0x00000001u; // 800C0158
  c->r[31]=c->r[31]+0xFFFFF010u; // 800C015C
  W32(c->r[3]+0x00000098u,c->r[0]); // 800C0160
  c->r[29]=0u+0x00000000u; // 800C0164
  c->r[30]=c->r[3]|c->r[3]; // 800C0168
  c->r[28]=c->r[31]+0x000002BCu; // 800C016C
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 800C0170
  c->r[3]=c->r[28]|c->r[28]; // 800C0174
  c->r[27]=c->r[1]+0x0000005Cu; // 800C0178
  W32(c->r[1]+0x00000060u,c->r[29]); // 800C017C
  W32(c->r[1]+0x00000064u,c->r[29]); // 800C0180
  c->lr=0x800C0188u; f_80216B70(c); // 800C0184
  c->r[26]=c->r[3]|c->r[3]; // 800C0188
  c->r[3]=c->r[27]|c->r[27]; // 800C018C
  c->r[4]=c->r[26]|c->r[26]; // 800C0190
  c->lr=0x800C0198u; f_80007C00(c); // 800C0194
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800C0198
  c->r[3]=c->r[27]|c->r[27]; // 800C019C
  W8(c->r[1]+0x00000018u,c->r[0]); // 800C01A0
  c->r[6]=c->r[28]|c->r[28]; // 800C01A4
  c->r[7]=c->r[28]+c->r[26]; // 800C01A8
  c->r[8]=c->r[1]+0x00000018u; // 800C01AC
  c->r[4]=0u+0x00000000u; // 800C01B0
  c->r[5]=0u+0x00000000u; // 800C01B4
  c->lr=0x800C01BCu; f_80007DC0(c); // 800C01B8
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C01BC
  c->r[5]=c->r[27]|c->r[27]; // 800C01C0
  c->r[3]=c->r[1]+0x00000050u; // 800C01C4
  c->lr=0x800C01CCu; f_800BDA50(c); // 800C01C8
  c->r[27]=c->r[31]+0x000002DCu; // 800C01CC
  W32(c->r[1]+0x00000044u,c->r[29]); // 800C01D0
  c->r[28]=c->r[1]+0x00000044u; // 800C01D4
  W32(c->r[1]+0x00000048u,c->r[29]); // 800C01D8
  c->r[3]=c->r[27]|c->r[27]; // 800C01DC
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 800C01E0
  c->lr=0x800C01E8u; f_80216B70(c); // 800C01E4
  c->r[26]=c->r[3]|c->r[3]; // 800C01E8
  c->r[3]=c->r[28]|c->r[28]; // 800C01EC
  c->r[4]=c->r[26]|c->r[26]; // 800C01F0
  c->lr=0x800C01F8u; f_80007C00(c); // 800C01F4
  c->r[0]=R8(c->r[1]+0x00000014u); // 800C01F8
  c->r[3]=c->r[28]|c->r[28]; // 800C01FC
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C0200
  c->r[6]=c->r[27]|c->r[27]; // 800C0204
  c->r[7]=c->r[27]+c->r[26]; // 800C0208
  c->r[8]=c->r[1]+0x00000010u; // 800C020C
  c->r[4]=0u+0x00000000u; // 800C0210
  c->r[5]=0u+0x00000000u; // 800C0214
  c->lr=0x800C021Cu; f_80007DC0(c); // 800C0218
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C021C
  c->r[5]=c->r[28]|c->r[28]; // 800C0220
  c->r[3]=c->r[1]+0x00000038u; // 800C0224
  c->lr=0x800C022Cu; f_800BDA50(c); // 800C0228
  c->r[27]=c->r[31]+0x000002ECu; // 800C022C
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800C0230
  c->r[28]=c->r[1]+0x0000002Cu; // 800C0234
  W32(c->r[1]+0x00000030u,c->r[29]); // 800C0238
  c->r[3]=c->r[27]|c->r[27]; // 800C023C
  W32(c->r[1]+0x00000034u,c->r[29]); // 800C0240
  c->lr=0x800C0248u; f_80216B70(c); // 800C0244
  c->r[26]=c->r[3]|c->r[3]; // 800C0248
  c->r[3]=c->r[28]|c->r[28]; // 800C024C
  c->r[4]=c->r[26]|c->r[26]; // 800C0250
  c->lr=0x800C0258u; f_80007C00(c); // 800C0254
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C0258
  c->r[3]=c->r[28]|c->r[28]; // 800C025C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C0260
  c->r[6]=c->r[27]|c->r[27]; // 800C0264
  c->r[7]=c->r[27]+c->r[26]; // 800C0268
  c->r[8]=c->r[1]+0x00000008u; // 800C026C
  c->r[4]=0u+0x00000000u; // 800C0270
  c->r[5]=0u+0x00000000u; // 800C0274
  c->lr=0x800C027Cu; f_80007DC0(c); // 800C0278
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C027C
  c->r[5]=c->r[28]|c->r[28]; // 800C0280
  c->r[3]=c->r[1]+0x00000020u; // 800C0284
  c->lr=0x800C028Cu; f_800BDA50(c); // 800C0288
  c->r[3]=R32(c->r[30]+0x00000070u); // 800C028C
  c->r[4]=c->r[1]+0x00000050u; // 800C0290
  c->r[5]=c->r[1]+0x00000038u; // 800C0294
  c->r[6]=c->r[1]+0x00000020u; // 800C0298
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C029C
  c->r[7]=c->r[30]+0x00000098u; // 800C02A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C02A4
  c->ctr=c->r[12]; // 800C02A8
  if (true) { c->lr=0x800C02B0u; dispatch(c,c->ctr); } // 800C02AC
  c->r[4]=c->r[3]|c->r[3]; // 800C02B0
  c->r[3]=c->r[30]+0x00000010u; // 800C02B4
  c->lr=0x800C02BCu; f_800BA030(c); // 800C02B8
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C02BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C02C0
  if (crb(c,2)) { goto L_800C02D0; } // 800C02C4
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C02C8
  c->lr=0x800C02D0u; f_800B9AD0(c); // 800C02CC
L_800C02D0:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C02D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C02D4
  if (crb(c,2)) { goto L_800C02E4; } // 800C02D8
  c->r[3]=R32(c->r[1]+0x00000034u); // 800C02DC
  c->lr=0x800C02E4u; f_800B9AD0(c); // 800C02E0
L_800C02E4:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 800C02E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C02E8
  if (crb(c,2)) { goto L_800C02F8; } // 800C02EC
  c->r[3]=R32(c->r[1]+0x00000040u); // 800C02F0
  c->lr=0x800C02F8u; f_800B9AD0(c); // 800C02F4
L_800C02F8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C02F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C02FC
  if (crb(c,2)) { goto L_800C030C; } // 800C0300
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800C0304
  c->lr=0x800C030Cu; f_800B9AD0(c); // 800C0308
L_800C030C:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800C030C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0310
  if (crb(c,2)) { goto L_800C0320; } // 800C0314
  c->r[3]=R32(c->r[1]+0x00000058u); // 800C0318
  c->lr=0x800C0320u; f_800B9AD0(c); // 800C031C
L_800C0320:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C0320
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0324
  if (crb(c,2)) { goto L_800C0334; } // 800C0328
  c->r[3]=R32(c->r[1]+0x00000064u); // 800C032C
  c->lr=0x800C0334u; f_800B9AD0(c); // 800C0330
L_800C0334:;
  c->r[3]=c->r[31]+0x000002B0u; // 800C0334
  c->r[4]=R32(c->r[31]+0x000002B0u); // 800C0338
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C033C
  c->r[11]=c->r[1]+0x00000080u; // 800C0340
  W32(c->r[30]+0x00000080u,c->r[0]); // 800C0344
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800C0348
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C034C
  W32(c->r[30]+0x00000084u,c->r[0]); // 800C0350
  c->lr=0x800C0358u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0354
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C0358
  c->lr=c->r[0]; // 800C035C
  c->r[1]=c->r[1]+0x00000080u; // 800C0360
  return; // 800C0364
}

// fn_800C0370
void f_800C0370(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000098u); // 800C0370
  c->r[7]=0u+0x802A0000u; // 800C0374
  c->r[7]=c->r[7]+0xFFFFF010u; // 800C0378
  cmpu(c,0,c->r[0],0x00000001u); // 800C037C
  if (!crb(c,2)) { goto L_800C03A4; } // 800C0380
  c->r[4]=c->r[7]+0x000002F8u; // 800C0384
  c->r[5]=R32(c->r[7]+0x000002F8u); // 800C0388
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C038C
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C0390
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0394
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0398
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C039C
  return; // 800C03A0
L_800C03A4:;
  c->r[5]=c->r[7]+0x00000304u; // 800C03A4
  c->r[6]=R32(c->r[7]+0x00000304u); // 800C03A8
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C03AC
  c->r[4]=c->r[7]+0x00000310u; // 800C03B0
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800C03B4
  W32(c->r[3]+0x00000088u,c->r[6]); // 800C03B8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C03BC
  W32(c->r[3]+0x00000090u,c->r[0]); // 800C03C0
  c->r[5]=R32(c->r[7]+0x00000310u); // 800C03C4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C03C8
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C03CC
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C03D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C03D4
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C03D8
  return; // 800C03DC
}

// fn_800C03E0
void f_800C03E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C03E0
  c->r[0]=c->lr; // 800C03E4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C03E8
  c->r[11]=c->r[1]+0x00000080u; // 800C03EC
  c->lr=0x800C03F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C03F0
  c->r[31]=0u+0x802A0000u; // 800C03F4
  c->r[0]=0u+0x00000001u; // 800C03F8
  c->r[31]=c->r[31]+0xFFFFF010u; // 800C03FC
  W32(c->r[3]+0x00000098u,c->r[0]); // 800C0400
  c->r[29]=0u+0x00000000u; // 800C0404
  c->r[30]=c->r[3]|c->r[3]; // 800C0408
  c->r[28]=c->r[31]+0x00000328u; // 800C040C
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 800C0410
  c->r[3]=c->r[28]|c->r[28]; // 800C0414
  c->r[27]=c->r[1]+0x0000005Cu; // 800C0418
  W32(c->r[1]+0x00000060u,c->r[29]); // 800C041C
  W32(c->r[1]+0x00000064u,c->r[29]); // 800C0420
  c->lr=0x800C0428u; f_80216B70(c); // 800C0424
  c->r[26]=c->r[3]|c->r[3]; // 800C0428
  c->r[3]=c->r[27]|c->r[27]; // 800C042C
  c->r[4]=c->r[26]|c->r[26]; // 800C0430
  c->lr=0x800C0438u; f_80007C00(c); // 800C0434
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800C0438
  c->r[3]=c->r[27]|c->r[27]; // 800C043C
  W8(c->r[1]+0x00000018u,c->r[0]); // 800C0440
  c->r[6]=c->r[28]|c->r[28]; // 800C0444
  c->r[7]=c->r[28]+c->r[26]; // 800C0448
  c->r[8]=c->r[1]+0x00000018u; // 800C044C
  c->r[4]=0u+0x00000000u; // 800C0450
  c->r[5]=0u+0x00000000u; // 800C0454
  c->lr=0x800C045Cu; f_80007DC0(c); // 800C0458
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C045C
  c->r[5]=c->r[27]|c->r[27]; // 800C0460
  c->r[3]=c->r[1]+0x00000050u; // 800C0464
  c->lr=0x800C046Cu; f_800BDA50(c); // 800C0468
  c->r[27]=c->r[31]+0x000002DCu; // 800C046C
  W32(c->r[1]+0x00000044u,c->r[29]); // 800C0470
  c->r[28]=c->r[1]+0x00000044u; // 800C0474
  W32(c->r[1]+0x00000048u,c->r[29]); // 800C0478
  c->r[3]=c->r[27]|c->r[27]; // 800C047C
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 800C0480
  c->lr=0x800C0488u; f_80216B70(c); // 800C0484
  c->r[26]=c->r[3]|c->r[3]; // 800C0488
  c->r[3]=c->r[28]|c->r[28]; // 800C048C
  c->r[4]=c->r[26]|c->r[26]; // 800C0490
  c->lr=0x800C0498u; f_80007C00(c); // 800C0494
  c->r[0]=R8(c->r[1]+0x00000014u); // 800C0498
  c->r[3]=c->r[28]|c->r[28]; // 800C049C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C04A0
  c->r[6]=c->r[27]|c->r[27]; // 800C04A4
  c->r[7]=c->r[27]+c->r[26]; // 800C04A8
  c->r[8]=c->r[1]+0x00000010u; // 800C04AC
  c->r[4]=0u+0x00000000u; // 800C04B0
  c->r[5]=0u+0x00000000u; // 800C04B4
  c->lr=0x800C04BCu; f_80007DC0(c); // 800C04B8
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C04BC
  c->r[5]=c->r[28]|c->r[28]; // 800C04C0
  c->r[3]=c->r[1]+0x00000038u; // 800C04C4
  c->lr=0x800C04CCu; f_800BDA50(c); // 800C04C8
  c->r[27]=c->r[31]+0x000002ECu; // 800C04CC
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800C04D0
  c->r[28]=c->r[1]+0x0000002Cu; // 800C04D4
  W32(c->r[1]+0x00000030u,c->r[29]); // 800C04D8
  c->r[3]=c->r[27]|c->r[27]; // 800C04DC
  W32(c->r[1]+0x00000034u,c->r[29]); // 800C04E0
  c->lr=0x800C04E8u; f_80216B70(c); // 800C04E4
  c->r[26]=c->r[3]|c->r[3]; // 800C04E8
  c->r[3]=c->r[28]|c->r[28]; // 800C04EC
  c->r[4]=c->r[26]|c->r[26]; // 800C04F0
  c->lr=0x800C04F8u; f_80007C00(c); // 800C04F4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C04F8
  c->r[3]=c->r[28]|c->r[28]; // 800C04FC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C0500
  c->r[6]=c->r[27]|c->r[27]; // 800C0504
  c->r[7]=c->r[27]+c->r[26]; // 800C0508
  c->r[8]=c->r[1]+0x00000008u; // 800C050C
  c->r[4]=0u+0x00000000u; // 800C0510
  c->r[5]=0u+0x00000000u; // 800C0514
  c->lr=0x800C051Cu; f_80007DC0(c); // 800C0518
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C051C
  c->r[5]=c->r[28]|c->r[28]; // 800C0520
  c->r[3]=c->r[1]+0x00000020u; // 800C0524
  c->lr=0x800C052Cu; f_800BDA50(c); // 800C0528
  c->r[3]=R32(c->r[30]+0x00000070u); // 800C052C
  c->r[4]=c->r[1]+0x00000050u; // 800C0530
  c->r[5]=c->r[1]+0x00000038u; // 800C0534
  c->r[6]=c->r[1]+0x00000020u; // 800C0538
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C053C
  c->r[7]=c->r[30]+0x00000098u; // 800C0540
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C0544
  c->ctr=c->r[12]; // 800C0548
  if (true) { c->lr=0x800C0550u; dispatch(c,c->ctr); } // 800C054C
  c->r[4]=c->r[3]|c->r[3]; // 800C0550
  c->r[3]=c->r[30]+0x00000010u; // 800C0554
  c->lr=0x800C055Cu; f_800BA030(c); // 800C0558
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C055C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0560
  if (crb(c,2)) { goto L_800C0570; } // 800C0564
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C0568
  c->lr=0x800C0570u; f_800B9AD0(c); // 800C056C
L_800C0570:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C0570
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0574
  if (crb(c,2)) { goto L_800C0584; } // 800C0578
  c->r[3]=R32(c->r[1]+0x00000034u); // 800C057C
  c->lr=0x800C0584u; f_800B9AD0(c); // 800C0580
L_800C0584:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 800C0584
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0588
  if (crb(c,2)) { goto L_800C0598; } // 800C058C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800C0590
  c->lr=0x800C0598u; f_800B9AD0(c); // 800C0594
L_800C0598:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C0598
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C059C
  if (crb(c,2)) { goto L_800C05AC; } // 800C05A0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800C05A4
  c->lr=0x800C05ACu; f_800B9AD0(c); // 800C05A8
L_800C05AC:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800C05AC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C05B0
  if (crb(c,2)) { goto L_800C05C0; } // 800C05B4
  c->r[3]=R32(c->r[1]+0x00000058u); // 800C05B8
  c->lr=0x800C05C0u; f_800B9AD0(c); // 800C05BC
L_800C05C0:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C05C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C05C4
  if (crb(c,2)) { goto L_800C05D4; } // 800C05C8
  c->r[3]=R32(c->r[1]+0x00000064u); // 800C05CC
  c->lr=0x800C05D4u; f_800B9AD0(c); // 800C05D0
L_800C05D4:;
  c->r[3]=c->r[31]+0x0000031Cu; // 800C05D4
  c->r[4]=R32(c->r[31]+0x0000031Cu); // 800C05D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C05DC
  c->r[11]=c->r[1]+0x00000080u; // 800C05E0
  W32(c->r[30]+0x00000080u,c->r[0]); // 800C05E4
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 800C05E8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C05EC
  W32(c->r[30]+0x00000084u,c->r[0]); // 800C05F0
  c->lr=0x800C05F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C05F4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C05F8
  c->lr=c->r[0]; // 800C05FC
  c->r[1]=c->r[1]+0x00000080u; // 800C0600
  return; // 800C0604
}

// fn_800C0610
void f_800C0610(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000098u); // 800C0610
  cmpu(c,0,c->r[0],0x00000001u); // 800C0614
  if (!crb(c,2)) { goto L_800C063C; } // 800C0618
  c->r[5]=0u+0x802A0000u; // 800C061C
  {uint32_t ea=c->r[5]+0xFFFFF35Cu; c->r[4]=R32(ea); c->r[5]=ea;} // 800C0620
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C0624
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C0628
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 800C062C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C0630
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C0634
  return; // 800C0638
L_800C063C:;
  c->r[5]=R32(c->r[3]+0x00000088u); // 800C063C
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 800C0640
  c->r[0]=R32(c->r[3]+0x00000090u); // 800C0644
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0648
  W32(c->r[3]+0x00000080u,c->r[4]); // 800C064C
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C0650
  return; // 800C0654
}

// fn_800C0660
void f_800C0660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0660
  c->r[0]=c->lr; // 800C0664
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C0668
  c->r[11]=c->r[1]+0x00000060u; // 800C066C
  c->lr=0x800C0674u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0670
  c->r[31]=0u+0x802A0000u; // 800C0674
  c->r[0]=0u+0x00000000u; // 800C0678
  c->r[31]=c->r[31]+0xFFFFF010u; // 800C067C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C0680
  c->r[28]=c->r[31]+0x00000370u; // 800C0684
  c->r[29]=c->r[3]|c->r[3]; // 800C0688
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C068C
  c->r[3]=c->r[28]|c->r[28]; // 800C0690
  c->r[30]=c->r[1]+0x00000028u; // 800C0694
  W32(c->r[1]+0x00000030u,c->r[0]); // 800C0698
  c->lr=0x800C06A0u; f_80216B70(c); // 800C069C
  c->r[25]=c->r[3]|c->r[3]; // 800C06A0
  c->r[3]=c->r[30]|c->r[30]; // 800C06A4
  c->r[4]=c->r[25]|c->r[25]; // 800C06A8
  c->lr=0x800C06B0u; f_80007C00(c); // 800C06AC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C06B0
  c->r[3]=c->r[30]|c->r[30]; // 800C06B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C06B8
  c->r[6]=c->r[28]|c->r[28]; // 800C06BC
  c->r[7]=c->r[28]+c->r[25]; // 800C06C0
  c->r[8]=c->r[1]+0x00000008u; // 800C06C4
  c->r[4]=0u+0x00000000u; // 800C06C8
  c->r[5]=0u+0x00000000u; // 800C06CC
  c->lr=0x800C06D4u; f_80007DC0(c); // 800C06D0
  c->r[4]=R32(c->r[29]+0x00000074u); // 800C06D4
  c->r[5]=c->r[30]|c->r[30]; // 800C06D8
  c->r[3]=c->r[1]+0x0000001Cu; // 800C06DC
  c->lr=0x800C06E4u; f_800BDA50(c); // 800C06E0
  c->r[3]=R32(c->r[29]+0x00000070u); // 800C06E4
  c->r[4]=c->r[1]+0x0000001Cu; // 800C06E8
  c->r[5]=0u+0x00000000u; // 800C06EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C06F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C06F4
  c->ctr=c->r[12]; // 800C06F8
  if (true) { c->lr=0x800C0700u; dispatch(c,c->ctr); } // 800C06FC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C0700
  c->r[25]=c->r[3]|c->r[3]; // 800C0704
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0708
  if (crb(c,2)) { goto L_800C0718; } // 800C070C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C0710
  c->lr=0x800C0718u; f_800B9AD0(c); // 800C0714
L_800C0718:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C0718
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C071C
  if (crb(c,2)) { goto L_800C072C; } // 800C0720
  c->r[3]=R32(c->r[1]+0x00000030u); // 800C0724
  c->lr=0x800C072Cu; f_800B9AD0(c); // 800C0728
L_800C072C:;
  c->r[4]=c->r[25]|c->r[25]; // 800C072C
  c->r[3]=c->r[29]+0x00000040u; // 800C0730
  c->lr=0x800C0738u; f_800BA030(c); // 800C0734
  c->r[3]=c->r[25]|c->r[25]; // 800C0738
  c->lr=0x800C0740u; f_800B9E20(c); // 800C073C
  c->r[30]=c->r[3]|c->r[3]; // 800C0740
  c->r[3]=0u+0x00000014u; // 800C0744
  c->lr=0x800C074Cu; f_800B98F0(c); // 800C0748
  cmps(c,0,(int32_t)c->r[3],0); // 800C074C
  if (crb(c,2)) { goto L_800C0774; } // 800C0750
  c->r[5]=0u+0x00000000u; // 800C0754
  W32(c->r[3]+0x00000008u,c->r[5]); // 800C0758
  c->r[4]=0u+0x802A0000u; // 800C075C
  c->r[0]=0u+0x0000001Eu; // 800C0760
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 800C0764
  c->r[4]=c->r[4]+0xFFFFEE78u; // 800C0768
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C076C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C0770
L_800C0774:;
  c->r[4]=c->r[31]+0x00000358u; // 800C0774
  c->r[6]=R32(c->r[31]+0x00000358u); // 800C0778
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C077C
  c->r[27]=c->r[3]|c->r[3]; // 800C0780
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0784
  c->r[3]=0u+0x00000040u; // 800C0788
  W32(c->r[1]+0x00000010u,c->r[6]); // 800C078C
  W32(c->r[1]+0x00000014u,c->r[5]); // 800C0790
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C0794
  c->lr=0x800C079Cu; f_800B98F0(c); // 800C0798
  cmps(c,0,(int32_t)c->r[3],0); // 800C079C
  c->r[25]=c->r[3]|c->r[3]; // 800C07A0
  if (crb(c,2)) { goto L_800C07D8; } // 800C07A4
  c->r[4]=0u+0x00000001u; // 800C07A8
  c->lr=0x800C07B0u; f_800BB770(c); // 800C07AC
  c->r[3]=0u+0x802A0000u; // 800C07B0
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C07B4
  c->r[3]=c->r[3]+0xFFFFF5E0u; // 800C07B8
  W32(c->r[25]+0x00000000u,c->r[3]); // 800C07BC
  c->r[3]=R32(c->r[1]+0x00000014u); // 800C07C0
  W32(c->r[25]+0x00000030u,c->r[29]); // 800C07C4
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C07C8
  W32(c->r[25]+0x00000034u,c->r[4]); // 800C07CC
  W32(c->r[25]+0x00000038u,c->r[3]); // 800C07D0
  W32(c->r[25]+0x0000003Cu,c->r[0]); // 800C07D4
L_800C07D8:;
  c->r[3]=0u+0x00000030u; // 800C07D8
  c->lr=0x800C07E0u; f_800B98F0(c); // 800C07DC
  cmps(c,0,(int32_t)c->r[3],0); // 800C07E0
  c->r[26]=c->r[3]|c->r[3]; // 800C07E4
  if (crb(c,2)) { goto L_800C0834; } // 800C07E8
  c->r[28]=0u+0x00000000u; // 800C07EC
  W32(c->r[3]+0x00000008u,c->r[28]); // 800C07F0
  c->r[4]=0u+0x80240000u; // 800C07F4
  W8(c->r[3]+0x0000000Cu,c->r[28]); // 800C07F8
  c->r[4]=c->r[4]+0xFFFFD634u; // 800C07FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C0800
  c->r[3]=c->r[3]+0x00000018u; // 800C0804
  c->lr=0x800C080Cu; f_800CCD10(c); // 800C0808
  W8(c->r[26]+0x0000000Du,c->r[28]); // 800C080C
  c->r[3]=0u+0x802A0000u; // 800C0810
  c->r[4]=c->r[26]+0x00000010u; // 800C0814
  c->r[0]=0u+0x00000001u; // 800C0818
  W8(c->r[26]+0x0000000Fu,c->r[28]); // 800C081C
  c->r[3]=c->r[3]+0xFFFFED30u; // 800C0820
  W32(c->r[26]+0x00000010u,c->r[28]); // 800C0824
  W32(c->r[26]+0x00000014u,c->r[4]); // 800C0828
  W32(c->r[26]+0x00000000u,c->r[3]); // 800C082C
  W8(c->r[26]+0x0000000Eu,c->r[0]); // 800C0830
L_800C0834:;
  c->r[3]=c->r[26]|c->r[26]; // 800C0834
  c->r[4]=c->r[25]|c->r[25]; // 800C0838
  c->lr=0x800C0840u; f_800BA030(c); // 800C083C
  c->r[3]=c->r[26]|c->r[26]; // 800C0840
  c->r[4]=c->r[27]|c->r[27]; // 800C0844
  c->lr=0x800C084Cu; f_800BA030(c); // 800C0848
  c->r[27]=c->r[29]+0x00000010u; // 800C084C
  c->r[4]=c->r[26]|c->r[26]; // 800C0850
  c->r[3]=c->r[27]|c->r[27]; // 800C0854
  c->lr=0x800C085Cu; f_800BA030(c); // 800C0858
  c->r[3]=c->r[27]|c->r[27]; // 800C085C
  c->r[4]=c->r[30]|c->r[30]; // 800C0860
  c->lr=0x800C0868u; f_800BA030(c); // 800C0864
  c->r[3]=c->r[31]+0x00000364u; // 800C0868
  c->r[4]=R32(c->r[31]+0x00000364u); // 800C086C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C0870
  c->r[11]=c->r[1]+0x00000060u; // 800C0874
  W32(c->r[29]+0x00000080u,c->r[0]); // 800C0878
  W32(c->r[29]+0x0000007Cu,c->r[4]); // 800C087C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C0880
  W32(c->r[29]+0x00000084u,c->r[0]); // 800C0884
  c->lr=0x800C088Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0888
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C088C
  c->lr=c->r[0]; // 800C0890
  c->r[1]=c->r[1]+0x00000060u; // 800C0894
  return; // 800C0898
}

// fn_800C08A0
void f_800C08A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C08A0
  c->r[0]=c->lr; // 800C08A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C08A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C08AC
  c->r[31]=c->r[3]|c->r[3]; // 800C08B0
  c->r[3]=R32(c->r[3]+0x00000074u); // 800C08B4
  c->lr=0x800C08BCu; f_800BEC90(c); // 800C08B8
  W8(c->r[31]+0x00000078u,c->r[3]); // 800C08BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C08C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C08C4
  c->lr=c->r[0]; // 800C08C8
  c->r[1]=c->r[1]+0x00000010u; // 800C08CC
  return; // 800C08D0
}

// fn_800C08E0
void f_800C08E0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000078u); // 800C08E0
  c->r[5]=0u+0x802A0000u; // 800C08E4
  c->r[5]=c->r[5]+0xFFFFF010u; // 800C08E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C08EC
  if (!crb(c,2)) { goto L_800C0914; } // 800C08F0
  c->r[4]=c->r[5]+0x00000388u; // 800C08F4
  c->r[5]=R32(c->r[5]+0x00000388u); // 800C08F8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C08FC
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C0900
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0904
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0908
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C090C
  return; // 800C0910
L_800C0914:;
  c->r[0]=R8(c->r[3]+0x0000009Cu); // 800C0914
  cmps(c,0,(int32_t)c->r[0],0); // 800C0918
  if (crb(c,2)) { goto L_800C0940; } // 800C091C
  c->r[4]=c->r[5]+0x00000394u; // 800C0920
  c->r[5]=R32(c->r[5]+0x00000394u); // 800C0924
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0928
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C092C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0930
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0934
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C0938
  return; // 800C093C
L_800C0940:;
  c->r[4]=c->r[5]+0x000003A0u; // 800C0940
  c->r[5]=R32(c->r[5]+0x000003A0u); // 800C0944
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0948
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C094C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0950
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C0954
  W32(c->r[3]+0x00000084u,c->r[0]); // 800C0958
  return; // 800C095C
}

// fn_800C0960
void f_800C0960(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000094u); // 800C0960
  c->r[5]=0u+0x00000001u; // 800C0964
  c->r[0]=0u+0x00000002u; // 800C0968
  W8(c->r[4]+0x00000000u,c->r[5]); // 800C096C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C0970
  return; // 800C0974
}

// fn_800C0980
void f_800C0980(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000094u); // 800C0980
  c->r[5]=0u+0x00000000u; // 800C0984
  c->r[0]=0u+0x00000002u; // 800C0988
  W8(c->r[4]+0x00000000u,c->r[5]); // 800C098C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C0990
  return; // 800C0994
}

// fn_800C09A0
void f_800C09A0(Ctx* __restrict c) {
  f_800CD9E0(c); return; // 800C09A0
}

// fn_800C09B0
void f_800C09B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C09B0
  c->r[0]=c->lr; // 800C09B4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800C09B8
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800C09BC
  c->r[31]=c->r[3]|c->r[3]; // 800C09C0
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800C09C4
  c->r[30]=0u+0x802A0000u; // 800C09C8
  c->r[30]=c->r[30]+0xFFFFF010u; // 800C09CC
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800C09D0
  W32(c->r[1]+0x000000B0u,c->r[28]); // 800C09D4
  c->r[4]=R32(c->r[3]+0x00000074u); // 800C09D8
  c->r[3]=c->r[30]+0x000003ACu; // 800C09DC
  c->r[4]=R32(c->r[4]+0x00000000u); // 800C09E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C09E4
  c->lr=0x800C09ECu; f_800C8450(c); // 800C09E8
  c->r[3]=R32(c->r[31]+0x00000074u); // 800C09EC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C09F0
  c->r[0]=c->r[3]+0x00000003u; // 800C09F4
  cmpu(c,0,c->r[0],0x00000001u); // 800C09F8
  if (!crb(c,1)) { goto L_800C0AD0; } // 800C09FC
  cmps(c,0,(int32_t)c->r[3],-4); // 800C0A00
  if (crb(c,2)) { goto L_800C0B88; } // 800C0A04
  cmps(c,0,(int32_t)c->r[3],-9); // 800C0A08
  if (crb(c,2)) { goto L_800C0C44; } // 800C0A0C
  cmps(c,0,(int32_t)c->r[3],-11); // 800C0A10
  if (crb(c,2)) { goto L_800C0CFC; } // 800C0A14
  c->r[0]=0u+0x00000000u; // 800C0A18
  c->r[30]=c->r[30]+0x000003CCu; // 800C0A1C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800C0A20
  c->r[3]=c->r[30]|c->r[30]; // 800C0A24
  c->r[29]=c->r[1]+0x0000009Cu; // 800C0A28
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800C0A2C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C0A30
  c->lr=0x800C0A38u; f_80216B70(c); // 800C0A34
  c->r[28]=c->r[3]|c->r[3]; // 800C0A38
  c->r[3]=c->r[29]|c->r[29]; // 800C0A3C
  c->r[4]=c->r[28]|c->r[28]; // 800C0A40
  c->lr=0x800C0A48u; f_80007C00(c); // 800C0A44
  c->r[0]=R8(c->r[1]+0x0000002Cu); // 800C0A48
  c->r[3]=c->r[29]|c->r[29]; // 800C0A4C
  W8(c->r[1]+0x00000028u,c->r[0]); // 800C0A50
  c->r[6]=c->r[30]|c->r[30]; // 800C0A54
  c->r[7]=c->r[30]+c->r[28]; // 800C0A58
  c->r[8]=c->r[1]+0x00000028u; // 800C0A5C
  c->r[4]=0u+0x00000000u; // 800C0A60
  c->r[5]=0u+0x00000000u; // 800C0A64
  c->lr=0x800C0A6Cu; f_80007DC0(c); // 800C0A68
  c->r[4]=R32(c->r[31]+0x00000074u); // 800C0A6C
  c->r[5]=c->r[29]|c->r[29]; // 800C0A70
  c->r[3]=c->r[1]+0x00000090u; // 800C0A74
  c->lr=0x800C0A7Cu; f_800BDA50(c); // 800C0A78
  c->r[3]=R32(c->r[31]+0x00000070u); // 800C0A7C
  c->r[4]=c->r[1]+0x00000090u; // 800C0A80
  c->r[5]=0u+0x00000000u; // 800C0A84
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0A88
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C0A8C
  c->ctr=c->r[12]; // 800C0A90
  if (true) { c->lr=0x800C0A98u; dispatch(c,c->ctr); } // 800C0A94
  c->r[4]=c->r[3]|c->r[3]; // 800C0A98
  c->r[3]=c->r[31]+0x00000010u; // 800C0A9C
  c->lr=0x800C0AA4u; f_800BA030(c); // 800C0AA0
  c->r[0]=R32(c->r[1]+0x00000090u); // 800C0AA4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0AA8
  if (crb(c,2)) { goto L_800C0AB8; } // 800C0AAC
  c->r[3]=R32(c->r[1]+0x00000098u); // 800C0AB0
  c->lr=0x800C0AB8u; f_800B9AD0(c); // 800C0AB4
L_800C0AB8:;
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 800C0AB8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0ABC
  if (crb(c,2)) { goto L_800C0DB0; } // 800C0AC0
  c->r[3]=R32(c->r[1]+0x000000A4u); // 800C0AC4
  c->lr=0x800C0ACCu; f_800B9AD0(c); // 800C0AC8
  goto L_800C0DB0; // 800C0ACC
L_800C0AD0:;
  c->r[0]=0u+0x00000000u; // 800C0AD0
  c->r[29]=c->r[30]+0x000003E4u; // 800C0AD4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C0AD8
  c->r[3]=c->r[29]|c->r[29]; // 800C0ADC
  c->r[30]=c->r[1]+0x00000084u; // 800C0AE0
  W32(c->r[1]+0x00000088u,c->r[0]); // 800C0AE4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800C0AE8
  c->lr=0x800C0AF0u; f_80216B70(c); // 800C0AEC
  c->r[28]=c->r[3]|c->r[3]; // 800C0AF0
  c->r[3]=c->r[30]|c->r[30]; // 800C0AF4
  c->r[4]=c->r[28]|c->r[28]; // 800C0AF8
  c->lr=0x800C0B00u; f_80007C00(c); // 800C0AFC
  c->r[0]=R8(c->r[1]+0x00000024u); // 800C0B00
  c->r[3]=c->r[30]|c->r[30]; // 800C0B04
  W8(c->r[1]+0x00000020u,c->r[0]); // 800C0B08
  c->r[6]=c->r[29]|c->r[29]; // 800C0B0C
  c->r[7]=c->r[29]+c->r[28]; // 800C0B10
  c->r[8]=c->r[1]+0x00000020u; // 800C0B14
  c->r[4]=0u+0x00000000u; // 800C0B18
  c->r[5]=0u+0x00000000u; // 800C0B1C
  c->lr=0x800C0B24u; f_80007DC0(c); // 800C0B20
  c->r[4]=R32(c->r[31]+0x00000074u); // 800C0B24
  c->r[5]=c->r[30]|c->r[30]; // 800C0B28
  c->r[3]=c->r[1]+0x00000078u; // 800C0B2C
  c->lr=0x800C0B34u; f_800BDA50(c); // 800C0B30
  c->r[3]=R32(c->r[31]+0x00000070u); // 800C0B34
  c->r[4]=c->r[1]+0x00000078u; // 800C0B38
  c->r[5]=0u+0x00000000u; // 800C0B3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0B40
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C0B44
  c->ctr=c->r[12]; // 800C0B48
  if (true) { c->lr=0x800C0B50u; dispatch(c,c->ctr); } // 800C0B4C
  c->r[4]=c->r[3]|c->r[3]; // 800C0B50
  c->r[3]=c->r[31]+0x00000010u; // 800C0B54
  c->lr=0x800C0B5Cu; f_800BA030(c); // 800C0B58
  c->r[0]=R32(c->r[1]+0x00000078u); // 800C0B5C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0B60
  if (crb(c,2)) { goto L_800C0B70; } // 800C0B64
  c->r[3]=R32(c->r[1]+0x00000080u); // 800C0B68
  c->lr=0x800C0B70u; f_800B9AD0(c); // 800C0B6C
L_800C0B70:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C0B70
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0B74
  if (crb(c,2)) { goto L_800C0DB0; } // 800C0B78
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 800C0B7C
  c->lr=0x800C0B84u; f_800B9AD0(c); // 800C0B80
  goto L_800C0DB0; // 800C0B84
L_800C0B88:;
  c->lr=0x800C0B8Cu; f_800C2570(c); // 800C0B88
  c->r[0]=0u+0x00000000u; // 800C0B8C
  c->r[29]=c->r[30]+0x000003F8u; // 800C0B90
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800C0B94
  c->r[3]=c->r[29]|c->r[29]; // 800C0B98
  c->r[30]=c->r[1]+0x0000006Cu; // 800C0B9C
  W32(c->r[1]+0x00000070u,c->r[0]); // 800C0BA0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C0BA4
  c->lr=0x800C0BACu; f_80216B70(c); // 800C0BA8
  c->r[28]=c->r[3]|c->r[3]; // 800C0BAC
  c->r[3]=c->r[30]|c->r[30]; // 800C0BB0
  c->r[4]=c->r[28]|c->r[28]; // 800C0BB4
  c->lr=0x800C0BBCu; f_80007C00(c); // 800C0BB8
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800C0BBC
  c->r[3]=c->r[30]|c->r[30]; // 800C0BC0
  W8(c->r[1]+0x00000018u,c->r[0]); // 800C0BC4
  c->r[6]=c->r[29]|c->r[29]; // 800C0BC8
  c->r[7]=c->r[29]+c->r[28]; // 800C0BCC
  c->r[8]=c->r[1]+0x00000018u; // 800C0BD0
  c->r[4]=0u+0x00000000u; // 800C0BD4
  c->r[5]=0u+0x00000000u; // 800C0BD8
  c->lr=0x800C0BE0u; f_80007DC0(c); // 800C0BDC
  c->r[4]=R32(c->r[31]+0x00000074u); // 800C0BE0
  c->r[5]=c->r[30]|c->r[30]; // 800C0BE4
  c->r[3]=c->r[1]+0x00000060u; // 800C0BE8
  c->lr=0x800C0BF0u; f_800BDA50(c); // 800C0BEC
  c->r[3]=R32(c->r[31]+0x00000070u); // 800C0BF0
  c->r[4]=c->r[1]+0x00000060u; // 800C0BF4
  c->r[5]=0u+0x00000000u; // 800C0BF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0BFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C0C00
  c->ctr=c->r[12]; // 800C0C04
  if (true) { c->lr=0x800C0C0Cu; dispatch(c,c->ctr); } // 800C0C08
  c->r[4]=c->r[3]|c->r[3]; // 800C0C0C
  c->r[3]=c->r[31]+0x00000010u; // 800C0C10
  c->lr=0x800C0C18u; f_800BA030(c); // 800C0C14
  c->r[0]=R32(c->r[1]+0x00000060u); // 800C0C18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0C1C
  if (crb(c,2)) { goto L_800C0C2C; } // 800C0C20
  c->r[3]=R32(c->r[1]+0x00000068u); // 800C0C24
  c->lr=0x800C0C2Cu; f_800B9AD0(c); // 800C0C28
L_800C0C2C:;
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800C0C2C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0C30
  if (crb(c,2)) { goto L_800C0DB0; } // 800C0C34
  c->r[3]=R32(c->r[1]+0x00000074u); // 800C0C38
  c->lr=0x800C0C40u; f_800B9AD0(c); // 800C0C3C
  goto L_800C0DB0; // 800C0C40
L_800C0C44:;
  c->r[0]=0u+0x00000000u; // 800C0C44
  c->r[29]=c->r[30]+0x00000410u; // 800C0C48
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C0C4C
  c->r[3]=c->r[29]|c->r[29]; // 800C0C50
  c->r[30]=c->r[1]+0x00000054u; // 800C0C54
  W32(c->r[1]+0x00000058u,c->r[0]); // 800C0C58
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800C0C5C
  c->lr=0x800C0C64u; f_80216B70(c); // 800C0C60
  c->r[28]=c->r[3]|c->r[3]; // 800C0C64
  c->r[3]=c->r[30]|c->r[30]; // 800C0C68
  c->r[4]=c->r[28]|c->r[28]; // 800C0C6C
  c->lr=0x800C0C74u; f_80007C00(c); // 800C0C70
  c->r[0]=R8(c->r[1]+0x00000014u); // 800C0C74
  c->r[3]=c->r[30]|c->r[30]; // 800C0C78
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C0C7C
  c->r[6]=c->r[29]|c->r[29]; // 800C0C80
  c->r[7]=c->r[29]+c->r[28]; // 800C0C84
  c->r[8]=c->r[1]+0x00000010u; // 800C0C88
  c->r[4]=0u+0x00000000u; // 800C0C8C
  c->r[5]=0u+0x00000000u; // 800C0C90
  c->lr=0x800C0C98u; f_80007DC0(c); // 800C0C94
  c->r[4]=R32(c->r[31]+0x00000074u); // 800C0C98
  c->r[5]=c->r[30]|c->r[30]; // 800C0C9C
  c->r[3]=c->r[1]+0x00000048u; // 800C0CA0
  c->lr=0x800C0CA8u; f_800BDA50(c); // 800C0CA4
  c->r[3]=R32(c->r[31]+0x00000070u); // 800C0CA8
  c->r[4]=c->r[1]+0x00000048u; // 800C0CAC
  c->r[5]=0u+0x00000000u; // 800C0CB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0CB4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C0CB8
  c->ctr=c->r[12]; // 800C0CBC
  if (true) { c->lr=0x800C0CC4u; dispatch(c,c->ctr); } // 800C0CC0
  c->r[4]=c->r[3]|c->r[3]; // 800C0CC4
  c->r[3]=c->r[31]+0x00000010u; // 800C0CC8
  c->lr=0x800C0CD0u; f_800BA030(c); // 800C0CCC
  c->r[0]=R32(c->r[1]+0x00000048u); // 800C0CD0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0CD4
  if (crb(c,2)) { goto L_800C0CE4; } // 800C0CD8
  c->r[3]=R32(c->r[1]+0x00000050u); // 800C0CDC
  c->lr=0x800C0CE4u; f_800B9AD0(c); // 800C0CE0
L_800C0CE4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C0CE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0CE8
  if (crb(c,2)) { goto L_800C0DB0; } // 800C0CEC
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 800C0CF0
  c->lr=0x800C0CF8u; f_800B9AD0(c); // 800C0CF4
  goto L_800C0DB0; // 800C0CF8
L_800C0CFC:;
  c->r[0]=0u+0x00000000u; // 800C0CFC
  c->r[29]=c->r[30]+0x00000430u; // 800C0D00
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800C0D04
  c->r[3]=c->r[29]|c->r[29]; // 800C0D08
  c->r[30]=c->r[1]+0x0000003Cu; // 800C0D0C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C0D10
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C0D14
  c->lr=0x800C0D1Cu; f_80216B70(c); // 800C0D18
  c->r[28]=c->r[3]|c->r[3]; // 800C0D1C
  c->r[3]=c->r[30]|c->r[30]; // 800C0D20
  c->r[4]=c->r[28]|c->r[28]; // 800C0D24
  c->lr=0x800C0D2Cu; f_80007C00(c); // 800C0D28
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C0D2C
  c->r[3]=c->r[30]|c->r[30]; // 800C0D30
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C0D34
  c->r[6]=c->r[29]|c->r[29]; // 800C0D38
  c->r[7]=c->r[29]+c->r[28]; // 800C0D3C
  c->r[8]=c->r[1]+0x00000008u; // 800C0D40
  c->r[4]=0u+0x00000000u; // 800C0D44
  c->r[5]=0u+0x00000000u; // 800C0D48
  c->lr=0x800C0D50u; f_80007DC0(c); // 800C0D4C
  c->r[4]=R32(c->r[31]+0x00000074u); // 800C0D50
  c->r[5]=c->r[30]|c->r[30]; // 800C0D54
  c->r[3]=c->r[1]+0x00000030u; // 800C0D58
  c->lr=0x800C0D60u; f_800BDA50(c); // 800C0D5C
  c->r[3]=R32(c->r[31]+0x00000070u); // 800C0D60
  c->r[4]=c->r[1]+0x00000030u; // 800C0D64
  c->r[5]=0u+0x00000000u; // 800C0D68
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0D6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C0D70
  c->ctr=c->r[12]; // 800C0D74
  if (true) { c->lr=0x800C0D7Cu; dispatch(c,c->ctr); } // 800C0D78
  c->r[4]=c->r[3]|c->r[3]; // 800C0D7C
  c->r[3]=c->r[31]+0x00000010u; // 800C0D80
  c->lr=0x800C0D88u; f_800BA030(c); // 800C0D84
  c->r[0]=R32(c->r[1]+0x00000030u); // 800C0D88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0D8C
  if (crb(c,2)) { goto L_800C0D9C; } // 800C0D90
  c->r[3]=R32(c->r[1]+0x00000038u); // 800C0D94
  c->lr=0x800C0D9Cu; f_800B9AD0(c); // 800C0D98
L_800C0D9C:;
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800C0D9C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0DA0
  if (crb(c,2)) { goto L_800C0DB0; } // 800C0DA4
  c->r[3]=R32(c->r[1]+0x00000044u); // 800C0DA8
  c->lr=0x800C0DB0u; f_800B9AD0(c); // 800C0DAC
L_800C0DB0:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800C0DB0
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800C0DB4
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800C0DB8
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800C0DBC
  c->r[28]=R32(c->r[1]+0x000000B0u); // 800C0DC0
  c->lr=c->r[0]; // 800C0DC4
  c->r[1]=c->r[1]+0x000000C0u; // 800C0DC8
  return; // 800C0DCC
}

// fn_800C0DD0
void f_800C0DD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0DD0
  c->r[0]=c->lr; // 800C0DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0DD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C0DDC
  c->r[31]=c->r[6]|c->r[6]; // 800C0DE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C0DE4
  c->r[30]=c->r[5]|c->r[5]; // 800C0DE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C0DEC
  c->r[29]=c->r[4]|c->r[4]; // 800C0DF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C0DF4
  c->r[28]=c->r[3]|c->r[3]; // 800C0DF8
  c->lr=0x800C0E00u; f_800BA6C0(c); // 800C0DFC
  c->r[3]=0u+0x802A0000u; // 800C0E00
  c->r[0]=0u+0x00000000u; // 800C0E04
  c->r[3]=c->r[3]+0xFFFFF704u; // 800C0E08
  W32(c->r[28]+0x00000000u,c->r[3]); // 800C0E0C
  c->r[4]=0u+0x802A0000u; // 800C0E10
  c->r[6]=0u+0x802A0000u; // 800C0E14
  W32(c->r[28]+0x00000070u,c->r[29]); // 800C0E18
  c->r[4]=c->r[4]+0xFFFFF6BCu; // 800C0E1C
  c->r[3]=c->r[28]|c->r[28]; // 800C0E20
  W32(c->r[28]+0x00000074u,c->r[30]); // 800C0E24
  W32(c->r[28]+0x00000094u,c->r[31]); // 800C0E28
  W8(c->r[28]+0x0000009Cu,c->r[0]); // 800C0E2C
  {uint32_t ea=c->r[6]+0xFFFFF458u; c->r[5]=R32(ea); c->r[6]=ea;} // 800C0E30
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C0E34
  W32(c->r[28]+0x00000080u,c->r[0]); // 800C0E38
  W32(c->r[28]+0x0000007Cu,c->r[5]); // 800C0E3C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C0E40
  W32(c->r[28]+0x00000084u,c->r[0]); // 800C0E44
  W32(c->r[28]+0x00000000u,c->r[4]); // 800C0E48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C0E4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C0E50
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C0E54
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C0E58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0E5C
  c->lr=c->r[0]; // 800C0E60
  c->r[1]=c->r[1]+0x00000020u; // 800C0E64
  return; // 800C0E68
}

// fn_800C0E70
void f_800C0E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0E70
  c->r[0]=c->lr; // 800C0E74
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C0E78
  c->r[11]=c->r[1]+0x00000050u; // 800C0E7C
  c->lr=0x800C0E84u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0E80
  c->r[29]=0u+0x802A0000u; // 800C0E84
  c->r[0]=0u+0x00000000u; // 800C0E88
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C0E8C
  c->r[29]=c->r[29]+0xFFFFF470u; // 800C0E90
  c->r[30]=c->r[3]|c->r[3]; // 800C0E94
  c->r[31]=c->r[1]+0x00000028u; // 800C0E98
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C0E9C
  c->r[3]=c->r[29]|c->r[29]; // 800C0EA0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800C0EA4
  c->lr=0x800C0EACu; f_80216B70(c); // 800C0EA8
  c->r[26]=c->r[3]|c->r[3]; // 800C0EAC
  c->r[3]=c->r[31]|c->r[31]; // 800C0EB0
  c->r[4]=c->r[26]|c->r[26]; // 800C0EB4
  c->lr=0x800C0EBCu; f_80007C00(c); // 800C0EB8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C0EBC
  c->r[3]=c->r[31]|c->r[31]; // 800C0EC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C0EC4
  c->r[6]=c->r[29]|c->r[29]; // 800C0EC8
  c->r[7]=c->r[29]+c->r[26]; // 800C0ECC
  c->r[8]=c->r[1]+0x00000008u; // 800C0ED0
  c->r[4]=0u+0x00000000u; // 800C0ED4
  c->r[5]=0u+0x00000000u; // 800C0ED8
  c->lr=0x800C0EE0u; f_80007DC0(c); // 800C0EDC
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C0EE0
  c->r[5]=c->r[31]|c->r[31]; // 800C0EE4
  c->r[3]=c->r[1]+0x0000001Cu; // 800C0EE8
  c->lr=0x800C0EF0u; f_800BDA50(c); // 800C0EEC
  c->r[3]=R32(c->r[30]+0x00000070u); // 800C0EF0
  c->r[4]=c->r[1]+0x0000001Cu; // 800C0EF4
  c->r[5]=0u+0x00000000u; // 800C0EF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0EFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C0F00
  c->ctr=c->r[12]; // 800C0F04
  if (true) { c->lr=0x800C0F0Cu; dispatch(c,c->ctr); } // 800C0F08
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C0F0C
  c->r[26]=c->r[3]|c->r[3]; // 800C0F10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0F14
  if (crb(c,2)) { goto L_800C0F24; } // 800C0F18
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C0F1C
  c->lr=0x800C0F24u; f_800B9AD0(c); // 800C0F20
L_800C0F24:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C0F24
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C0F28
  if (crb(c,2)) { goto L_800C0F38; } // 800C0F2C
  c->r[3]=R32(c->r[1]+0x00000030u); // 800C0F30
  c->lr=0x800C0F38u; f_800B9AD0(c); // 800C0F34
L_800C0F38:;
  c->r[4]=c->r[26]|c->r[26]; // 800C0F38
  c->r[3]=c->r[30]+0x00000040u; // 800C0F3C
  c->lr=0x800C0F44u; f_800BA030(c); // 800C0F40
  c->r[3]=c->r[26]|c->r[26]; // 800C0F44
  c->lr=0x800C0F4Cu; f_800B9E20(c); // 800C0F48
  c->r[31]=c->r[3]|c->r[3]; // 800C0F4C
  c->r[3]=0u+0x00000014u; // 800C0F50
  c->lr=0x800C0F58u; f_800B98F0(c); // 800C0F54
  cmps(c,0,(int32_t)c->r[3],0); // 800C0F58
  if (crb(c,2)) { goto L_800C0F80; } // 800C0F5C
  c->r[5]=0u+0x00000000u; // 800C0F60
  W32(c->r[3]+0x00000008u,c->r[5]); // 800C0F64
  c->r[4]=0u+0x802A0000u; // 800C0F68
  c->r[0]=0u+0x0000001Eu; // 800C0F6C
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 800C0F70
  c->r[4]=c->r[4]+0xFFFFEE78u; // 800C0F74
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C0F78
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C0F7C
L_800C0F80:;
  c->r[6]=0u+0x802A0000u; // 800C0F80
  {uint32_t ea=c->r[6]+0xFFFFF464u; c->r[5]=R32(ea); c->r[6]=ea;} // 800C0F84
  c->r[28]=c->r[3]|c->r[3]; // 800C0F88
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C0F8C
  c->r[4]=R32(c->r[6]+0x00000004u); // 800C0F90
  c->r[3]=0u+0x00000040u; // 800C0F94
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C0F98
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C0F9C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C0FA0
  c->lr=0x800C0FA8u; f_800B98F0(c); // 800C0FA4
  cmps(c,0,(int32_t)c->r[3],0); // 800C0FA8
  c->r[26]=c->r[3]|c->r[3]; // 800C0FAC
  if (crb(c,2)) { goto L_800C0FE4; } // 800C0FB0
  c->r[4]=0u+0x00000001u; // 800C0FB4
  c->lr=0x800C0FBCu; f_800BB770(c); // 800C0FB8
  c->r[3]=0u+0x802A0000u; // 800C0FBC
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C0FC0
  c->r[3]=c->r[3]+0xFFFFF590u; // 800C0FC4
  W32(c->r[26]+0x00000000u,c->r[3]); // 800C0FC8
  c->r[3]=R32(c->r[1]+0x00000014u); // 800C0FCC
  W32(c->r[26]+0x00000030u,c->r[30]); // 800C0FD0
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C0FD4
  W32(c->r[26]+0x00000034u,c->r[4]); // 800C0FD8
  W32(c->r[26]+0x00000038u,c->r[3]); // 800C0FDC
  W32(c->r[26]+0x0000003Cu,c->r[0]); // 800C0FE0
L_800C0FE4:;
  c->r[3]=0u+0x00000030u; // 800C0FE4
  c->lr=0x800C0FECu; f_800B98F0(c); // 800C0FE8
  cmps(c,0,(int32_t)c->r[3],0); // 800C0FEC
  c->r[27]=c->r[3]|c->r[3]; // 800C0FF0
  if (crb(c,2)) { goto L_800C1040; } // 800C0FF4
  c->r[29]=0u+0x00000000u; // 800C0FF8
  W32(c->r[3]+0x00000008u,c->r[29]); // 800C0FFC
  c->r[4]=0u+0x80240000u; // 800C1000
  W8(c->r[3]+0x0000000Cu,c->r[29]); // 800C1004
  c->r[4]=c->r[4]+0xFFFFD634u; // 800C1008
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C100C
  c->r[3]=c->r[3]+0x00000018u; // 800C1010
  c->lr=0x800C1018u; f_800CCD10(c); // 800C1014
  W8(c->r[27]+0x0000000Du,c->r[29]); // 800C1018
  c->r[3]=0u+0x802A0000u; // 800C101C
  c->r[4]=c->r[27]+0x00000010u; // 800C1020
  c->r[0]=0u+0x00000001u; // 800C1024
  W8(c->r[27]+0x0000000Fu,c->r[29]); // 800C1028
  c->r[3]=c->r[3]+0xFFFFED30u; // 800C102C
  W32(c->r[27]+0x00000010u,c->r[29]); // 800C1030
  W32(c->r[27]+0x00000014u,c->r[4]); // 800C1034
  W32(c->r[27]+0x00000000u,c->r[3]); // 800C1038
  W8(c->r[27]+0x0000000Eu,c->r[0]); // 800C103C
L_800C1040:;
  c->r[3]=c->r[27]|c->r[27]; // 800C1040
  c->r[4]=c->r[26]|c->r[26]; // 800C1044
  c->lr=0x800C104Cu; f_800BA030(c); // 800C1048
  c->r[3]=c->r[27]|c->r[27]; // 800C104C
  c->r[4]=c->r[28]|c->r[28]; // 800C1050
  c->lr=0x800C1058u; f_800BA030(c); // 800C1054
  c->r[28]=c->r[30]+0x00000010u; // 800C1058
  c->r[4]=c->r[27]|c->r[27]; // 800C105C
  c->r[3]=c->r[28]|c->r[28]; // 800C1060
  c->lr=0x800C1068u; f_800BA030(c); // 800C1064
  c->r[3]=c->r[28]|c->r[28]; // 800C1068
  c->r[4]=c->r[31]|c->r[31]; // 800C106C
  c->lr=0x800C1074u; f_800BA030(c); // 800C1070
  c->r[11]=c->r[1]+0x00000050u; // 800C1074
  c->lr=0x800C107Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1078
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C107C
  c->lr=c->r[0]; // 800C1080
  c->r[1]=c->r[1]+0x00000050u; // 800C1084
  return; // 800C1088
}

// fn_800C1090
void f_800C1090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1090
  c->r[0]=c->lr; // 800C1094
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C109C
  c->r[31]=c->r[3]|c->r[3]; // 800C10A0
  c->r[3]=R32(c->r[3]+0x00000074u); // 800C10A4
  c->lr=0x800C10ACu; f_800BE2E0(c); // 800C10A8
  W8(c->r[31]+0x00000078u,c->r[3]); // 800C10AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C10B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C10B4
  c->lr=c->r[0]; // 800C10B8
  c->r[1]=c->r[1]+0x00000010u; // 800C10BC
  return; // 800C10C0
}

// fn_800C10D0
void f_800C10D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C10D0
  c->r[0]=c->lr; // 800C10D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C10D8
  c->r[11]=c->r[1]+0x00000020u; // 800C10DC
  c->lr=0x800C10E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C10E0
  c->r[26]=c->r[3]|c->r[3]; // 800C10E4
  c->r[27]=c->r[4]|c->r[4]; // 800C10E8
  c->r[28]=c->r[5]|c->r[5]; // 800C10EC
  c->r[29]=c->r[6]|c->r[6]; // 800C10F0
  c->r[30]=c->r[7]|c->r[7]; // 800C10F4
  c->r[31]=c->r[8]|c->r[8]; // 800C10F8
  c->lr=0x800C1100u; f_800BA6C0(c); // 800C10FC
  c->r[3]=0u+0x802A0000u; // 800C1100
  c->r[0]=0u+0x00000000u; // 800C1104
  c->r[3]=c->r[3]+0xFFFFF704u; // 800C1108
  W32(c->r[26]+0x00000000u,c->r[3]); // 800C110C
  c->r[4]=0u+0x802A0000u; // 800C1110
  c->r[6]=0u+0x802A0000u; // 800C1114
  W32(c->r[26]+0x00000070u,c->r[27]); // 800C1118
  c->r[4]=c->r[4]+0xFFFFF674u; // 800C111C
  c->r[11]=c->r[1]+0x00000020u; // 800C1120
  c->r[3]=c->r[26]|c->r[26]; // 800C1124
  W32(c->r[26]+0x00000074u,c->r[28]); // 800C1128
  W32(c->r[26]+0x00000094u,c->r[29]); // 800C112C
  W8(c->r[26]+0x0000009Cu,c->r[0]); // 800C1130
  {uint32_t ea=c->r[6]+0xFFFFF490u; c->r[5]=R32(ea); c->r[6]=ea;} // 800C1134
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C1138
  W32(c->r[26]+0x00000080u,c->r[0]); // 800C113C
  W32(c->r[26]+0x0000007Cu,c->r[5]); // 800C1140
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1144
  W32(c->r[26]+0x00000084u,c->r[0]); // 800C1148
  W32(c->r[26]+0x00000000u,c->r[4]); // 800C114C
  W32(c->r[26]+0x000000B0u,c->r[30]); // 800C1150
  W32(c->r[26]+0x000000B4u,c->r[31]); // 800C1154
  c->lr=0x800C115Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1158
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C115C
  c->lr=c->r[0]; // 800C1160
  c->r[1]=c->r[1]+0x00000020u; // 800C1164
  return; // 800C1168
}

// fn_800C1170
void f_800C1170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1170
  c->r[0]=c->lr; // 800C1174
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1178
  c->r[11]=c->r[1]+0x00000050u; // 800C117C
  c->lr=0x800C1184u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1180
  c->r[29]=0u+0x802A0000u; // 800C1184
  c->r[0]=0u+0x00000000u; // 800C1188
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C118C
  c->r[29]=c->r[29]+0xFFFFF4A8u; // 800C1190
  c->r[30]=c->r[3]|c->r[3]; // 800C1194
  c->r[31]=c->r[1]+0x00000028u; // 800C1198
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C119C
  c->r[3]=c->r[29]|c->r[29]; // 800C11A0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800C11A4
  c->lr=0x800C11ACu; f_80216B70(c); // 800C11A8
  c->r[26]=c->r[3]|c->r[3]; // 800C11AC
  c->r[3]=c->r[31]|c->r[31]; // 800C11B0
  c->r[4]=c->r[26]|c->r[26]; // 800C11B4
  c->lr=0x800C11BCu; f_80007C00(c); // 800C11B8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C11BC
  c->r[3]=c->r[31]|c->r[31]; // 800C11C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C11C4
  c->r[6]=c->r[29]|c->r[29]; // 800C11C8
  c->r[7]=c->r[29]+c->r[26]; // 800C11CC
  c->r[8]=c->r[1]+0x00000008u; // 800C11D0
  c->r[4]=0u+0x00000000u; // 800C11D4
  c->r[5]=0u+0x00000000u; // 800C11D8
  c->lr=0x800C11E0u; f_80007DC0(c); // 800C11DC
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C11E0
  c->r[5]=c->r[31]|c->r[31]; // 800C11E4
  c->r[3]=c->r[1]+0x0000001Cu; // 800C11E8
  c->lr=0x800C11F0u; f_800BDA50(c); // 800C11EC
  c->r[3]=R32(c->r[30]+0x00000070u); // 800C11F0
  c->r[4]=c->r[1]+0x0000001Cu; // 800C11F4
  c->r[5]=0u+0x00000000u; // 800C11F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C11FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C1200
  c->ctr=c->r[12]; // 800C1204
  if (true) { c->lr=0x800C120Cu; dispatch(c,c->ctr); } // 800C1208
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C120C
  c->r[26]=c->r[3]|c->r[3]; // 800C1210
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1214
  if (crb(c,2)) { goto L_800C1224; } // 800C1218
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C121C
  c->lr=0x800C1224u; f_800B9AD0(c); // 800C1220
L_800C1224:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C1224
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1228
  if (crb(c,2)) { goto L_800C1238; } // 800C122C
  c->r[3]=R32(c->r[1]+0x00000030u); // 800C1230
  c->lr=0x800C1238u; f_800B9AD0(c); // 800C1234
L_800C1238:;
  c->r[4]=c->r[26]|c->r[26]; // 800C1238
  c->r[3]=c->r[30]+0x00000040u; // 800C123C
  c->lr=0x800C1244u; f_800BA030(c); // 800C1240
  c->r[3]=c->r[26]|c->r[26]; // 800C1244
  c->lr=0x800C124Cu; f_800B9E20(c); // 800C1248
  c->r[31]=c->r[3]|c->r[3]; // 800C124C
  c->r[3]=0u+0x00000014u; // 800C1250
  c->lr=0x800C1258u; f_800B98F0(c); // 800C1254
  cmps(c,0,(int32_t)c->r[3],0); // 800C1258
  if (crb(c,2)) { goto L_800C1280; } // 800C125C
  c->r[5]=0u+0x00000000u; // 800C1260
  W32(c->r[3]+0x00000008u,c->r[5]); // 800C1264
  c->r[4]=0u+0x802A0000u; // 800C1268
  c->r[0]=0u+0x0000001Eu; // 800C126C
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 800C1270
  c->r[4]=c->r[4]+0xFFFFEE78u; // 800C1274
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C1278
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C127C
L_800C1280:;
  c->r[6]=0u+0x802A0000u; // 800C1280
  {uint32_t ea=c->r[6]+0xFFFFF49Cu; c->r[5]=R32(ea); c->r[6]=ea;} // 800C1284
  c->r[28]=c->r[3]|c->r[3]; // 800C1288
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C128C
  c->r[4]=R32(c->r[6]+0x00000004u); // 800C1290
  c->r[3]=0u+0x00000040u; // 800C1294
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1298
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C129C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C12A0
  c->lr=0x800C12A8u; f_800B98F0(c); // 800C12A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C12A8
  c->r[26]=c->r[3]|c->r[3]; // 800C12AC
  if (crb(c,2)) { goto L_800C12E4; } // 800C12B0
  c->r[4]=0u+0x00000001u; // 800C12B4
  c->lr=0x800C12BCu; f_800BB770(c); // 800C12B8
  c->r[3]=0u+0x802A0000u; // 800C12BC
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C12C0
  c->r[3]=c->r[3]+0xFFFFF540u; // 800C12C4
  W32(c->r[26]+0x00000000u,c->r[3]); // 800C12C8
  c->r[3]=R32(c->r[1]+0x00000014u); // 800C12CC
  W32(c->r[26]+0x00000030u,c->r[30]); // 800C12D0
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C12D4
  W32(c->r[26]+0x00000034u,c->r[4]); // 800C12D8
  W32(c->r[26]+0x00000038u,c->r[3]); // 800C12DC
  W32(c->r[26]+0x0000003Cu,c->r[0]); // 800C12E0
L_800C12E4:;
  c->r[3]=0u+0x00000030u; // 800C12E4
  c->lr=0x800C12ECu; f_800B98F0(c); // 800C12E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C12EC
  c->r[27]=c->r[3]|c->r[3]; // 800C12F0
  if (crb(c,2)) { goto L_800C1340; } // 800C12F4
  c->r[29]=0u+0x00000000u; // 800C12F8
  W32(c->r[3]+0x00000008u,c->r[29]); // 800C12FC
  c->r[4]=0u+0x80240000u; // 800C1300
  W8(c->r[3]+0x0000000Cu,c->r[29]); // 800C1304
  c->r[4]=c->r[4]+0xFFFFD634u; // 800C1308
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C130C
  c->r[3]=c->r[3]+0x00000018u; // 800C1310
  c->lr=0x800C1318u; f_800CCD10(c); // 800C1314
  W8(c->r[27]+0x0000000Du,c->r[29]); // 800C1318
  c->r[3]=0u+0x802A0000u; // 800C131C
  c->r[4]=c->r[27]+0x00000010u; // 800C1320
  c->r[0]=0u+0x00000001u; // 800C1324
  W8(c->r[27]+0x0000000Fu,c->r[29]); // 800C1328
  c->r[3]=c->r[3]+0xFFFFED30u; // 800C132C
  W32(c->r[27]+0x00000010u,c->r[29]); // 800C1330
  W32(c->r[27]+0x00000014u,c->r[4]); // 800C1334
  W32(c->r[27]+0x00000000u,c->r[3]); // 800C1338
  W8(c->r[27]+0x0000000Eu,c->r[0]); // 800C133C
L_800C1340:;
  c->r[3]=c->r[27]|c->r[27]; // 800C1340
  c->r[4]=c->r[26]|c->r[26]; // 800C1344
  c->lr=0x800C134Cu; f_800BA030(c); // 800C1348
  c->r[3]=c->r[27]|c->r[27]; // 800C134C
  c->r[4]=c->r[28]|c->r[28]; // 800C1350
  c->lr=0x800C1358u; f_800BA030(c); // 800C1354
  c->r[28]=c->r[30]+0x00000010u; // 800C1358
  c->r[4]=c->r[27]|c->r[27]; // 800C135C
  c->r[3]=c->r[28]|c->r[28]; // 800C1360
  c->lr=0x800C1368u; f_800BA030(c); // 800C1364
  c->r[3]=c->r[28]|c->r[28]; // 800C1368
  c->r[4]=c->r[31]|c->r[31]; // 800C136C
  c->lr=0x800C1374u; f_800BA030(c); // 800C1370
  c->r[11]=c->r[1]+0x00000050u; // 800C1374
  c->lr=0x800C137Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1378
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C137C
  c->lr=c->r[0]; // 800C1380
  c->r[1]=c->r[1]+0x00000050u; // 800C1384
  return; // 800C1388
}

// fn_800C1390
void f_800C1390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1390
  c->r[0]=c->lr; // 800C1394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C139C
  c->r[31]=c->r[3]|c->r[3]; // 800C13A0
  c->r[3]=R32(c->r[3]+0x00000074u); // 800C13A4
  c->r[4]=R32(c->r[31]+0x000000B0u); // 800C13A8
  c->r[5]=R32(c->r[31]+0x000000B4u); // 800C13AC
  c->lr=0x800C13B4u; f_800BEF70(c); // 800C13B0
  W8(c->r[31]+0x00000078u,c->r[3]); // 800C13B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C13B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C13BC
  c->lr=c->r[0]; // 800C13C0
  c->r[1]=c->r[1]+0x00000010u; // 800C13C4
  return; // 800C13C8
}

// fn_800C13D0
void f_800C13D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C13D0
  c->r[0]=c->lr; // 800C13D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C13D8
  c->r[11]=c->r[1]+0x00000020u; // 800C13DC
  c->lr=0x800C13E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C13E0
  c->r[26]=c->r[3]|c->r[3]; // 800C13E4
  c->r[27]=c->r[4]|c->r[4]; // 800C13E8
  c->r[28]=c->r[5]|c->r[5]; // 800C13EC
  c->r[29]=c->r[6]|c->r[6]; // 800C13F0
  c->r[30]=c->r[7]|c->r[7]; // 800C13F4
  c->r[31]=c->r[8]|c->r[8]; // 800C13F8
  c->lr=0x800C1400u; f_800BA6C0(c); // 800C13FC
  c->r[3]=0u+0x802A0000u; // 800C1400
  c->r[0]=0u+0x00000000u; // 800C1404
  c->r[3]=c->r[3]+0xFFFFF704u; // 800C1408
  W32(c->r[26]+0x00000000u,c->r[3]); // 800C140C
  c->r[4]=0u+0x802A0000u; // 800C1410
  c->r[6]=0u+0x802A0000u; // 800C1414
  W32(c->r[26]+0x00000070u,c->r[27]); // 800C1418
  c->r[4]=c->r[4]+0xFFFFF628u; // 800C141C
  c->r[11]=c->r[1]+0x00000020u; // 800C1420
  c->r[3]=c->r[26]|c->r[26]; // 800C1424
  W32(c->r[26]+0x00000074u,c->r[28]); // 800C1428
  W32(c->r[26]+0x00000094u,c->r[29]); // 800C142C
  W8(c->r[26]+0x0000009Cu,c->r[0]); // 800C1430
  {uint32_t ea=c->r[6]+0xFFFFF4C0u; c->r[5]=R32(ea); c->r[6]=ea;} // 800C1434
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C1438
  W32(c->r[26]+0x00000080u,c->r[0]); // 800C143C
  W32(c->r[26]+0x0000007Cu,c->r[5]); // 800C1440
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1444
  W32(c->r[26]+0x00000084u,c->r[0]); // 800C1448
  W32(c->r[26]+0x00000000u,c->r[4]); // 800C144C
  W32(c->r[26]+0x000000B0u,c->r[30]); // 800C1450
  W32(c->r[26]+0x000000B4u,c->r[31]); // 800C1454
  c->lr=0x800C145Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1458
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C145C
  c->lr=c->r[0]; // 800C1460
  c->r[1]=c->r[1]+0x00000020u; // 800C1464
  return; // 800C1468
}

// fn_800C1470
void f_800C1470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1470
  c->r[0]=c->lr; // 800C1474
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1478
  c->r[11]=c->r[1]+0x00000050u; // 800C147C
  c->lr=0x800C1484u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1480
  c->r[29]=0u+0x802A0000u; // 800C1484
  c->r[0]=0u+0x00000000u; // 800C1488
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C148C
  c->r[29]=c->r[29]+0xFFFFF4D8u; // 800C1490
  c->r[30]=c->r[3]|c->r[3]; // 800C1494
  c->r[31]=c->r[1]+0x00000028u; // 800C1498
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C149C
  c->r[3]=c->r[29]|c->r[29]; // 800C14A0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800C14A4
  c->lr=0x800C14ACu; f_80216B70(c); // 800C14A8
  c->r[26]=c->r[3]|c->r[3]; // 800C14AC
  c->r[3]=c->r[31]|c->r[31]; // 800C14B0
  c->r[4]=c->r[26]|c->r[26]; // 800C14B4
  c->lr=0x800C14BCu; f_80007C00(c); // 800C14B8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C14BC
  c->r[3]=c->r[31]|c->r[31]; // 800C14C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C14C4
  c->r[6]=c->r[29]|c->r[29]; // 800C14C8
  c->r[7]=c->r[29]+c->r[26]; // 800C14CC
  c->r[8]=c->r[1]+0x00000008u; // 800C14D0
  c->r[4]=0u+0x00000000u; // 800C14D4
  c->r[5]=0u+0x00000000u; // 800C14D8
  c->lr=0x800C14E0u; f_80007DC0(c); // 800C14DC
  c->r[4]=R32(c->r[30]+0x00000074u); // 800C14E0
  c->r[5]=c->r[31]|c->r[31]; // 800C14E4
  c->r[3]=c->r[1]+0x0000001Cu; // 800C14E8
  c->lr=0x800C14F0u; f_800BDA50(c); // 800C14EC
  c->r[3]=R32(c->r[30]+0x00000070u); // 800C14F0
  c->r[4]=c->r[1]+0x0000001Cu; // 800C14F4
  c->r[5]=0u+0x00000000u; // 800C14F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C14FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C1500
  c->ctr=c->r[12]; // 800C1504
  if (true) { c->lr=0x800C150Cu; dispatch(c,c->ctr); } // 800C1508
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C150C
  c->r[26]=c->r[3]|c->r[3]; // 800C1510
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1514
  if (crb(c,2)) { goto L_800C1524; } // 800C1518
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C151C
  c->lr=0x800C1524u; f_800B9AD0(c); // 800C1520
L_800C1524:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C1524
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1528
  if (crb(c,2)) { goto L_800C1538; } // 800C152C
  c->r[3]=R32(c->r[1]+0x00000030u); // 800C1530
  c->lr=0x800C1538u; f_800B9AD0(c); // 800C1534
L_800C1538:;
  c->r[4]=c->r[26]|c->r[26]; // 800C1538
  c->r[3]=c->r[30]+0x00000040u; // 800C153C
  c->lr=0x800C1544u; f_800BA030(c); // 800C1540
  c->r[3]=c->r[26]|c->r[26]; // 800C1544
  c->lr=0x800C154Cu; f_800B9E20(c); // 800C1548
  c->r[31]=c->r[3]|c->r[3]; // 800C154C
  c->r[3]=0u+0x00000014u; // 800C1550
  c->lr=0x800C1558u; f_800B98F0(c); // 800C1554
  cmps(c,0,(int32_t)c->r[3],0); // 800C1558
  if (crb(c,2)) { goto L_800C1580; } // 800C155C
  c->r[5]=0u+0x00000000u; // 800C1560
  W32(c->r[3]+0x00000008u,c->r[5]); // 800C1564
  c->r[4]=0u+0x802A0000u; // 800C1568
  c->r[0]=0u+0x0000001Eu; // 800C156C
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 800C1570
  c->r[4]=c->r[4]+0xFFFFEE78u; // 800C1574
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C1578
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C157C
L_800C1580:;
  c->r[6]=0u+0x802A0000u; // 800C1580
  {uint32_t ea=c->r[6]+0xFFFFF4CCu; c->r[5]=R32(ea); c->r[6]=ea;} // 800C1584
  c->r[28]=c->r[3]|c->r[3]; // 800C1588
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C158C
  c->r[4]=R32(c->r[6]+0x00000004u); // 800C1590
  c->r[3]=0u+0x00000040u; // 800C1594
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1598
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C159C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C15A0
  c->lr=0x800C15A8u; f_800B98F0(c); // 800C15A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C15A8
  c->r[26]=c->r[3]|c->r[3]; // 800C15AC
  if (crb(c,2)) { goto L_800C15E4; } // 800C15B0
  c->r[4]=0u+0x00000001u; // 800C15B4
  c->lr=0x800C15BCu; f_800BB770(c); // 800C15B8
  c->r[3]=0u+0x802A0000u; // 800C15BC
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C15C0
  c->r[3]=c->r[3]+0xFFFFF4F0u; // 800C15C4
  W32(c->r[26]+0x00000000u,c->r[3]); // 800C15C8
  c->r[3]=R32(c->r[1]+0x00000014u); // 800C15CC
  W32(c->r[26]+0x00000030u,c->r[30]); // 800C15D0
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C15D4
  W32(c->r[26]+0x00000034u,c->r[4]); // 800C15D8
  W32(c->r[26]+0x00000038u,c->r[3]); // 800C15DC
  W32(c->r[26]+0x0000003Cu,c->r[0]); // 800C15E0
L_800C15E4:;
  c->r[3]=0u+0x00000030u; // 800C15E4
  c->lr=0x800C15ECu; f_800B98F0(c); // 800C15E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C15EC
  c->r[27]=c->r[3]|c->r[3]; // 800C15F0
  if (crb(c,2)) { goto L_800C1640; } // 800C15F4
  c->r[29]=0u+0x00000000u; // 800C15F8
  W32(c->r[3]+0x00000008u,c->r[29]); // 800C15FC
  c->r[4]=0u+0x80240000u; // 800C1600
  W8(c->r[3]+0x0000000Cu,c->r[29]); // 800C1604
  c->r[4]=c->r[4]+0xFFFFD634u; // 800C1608
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C160C
  c->r[3]=c->r[3]+0x00000018u; // 800C1610
  c->lr=0x800C1618u; f_800CCD10(c); // 800C1614
  W8(c->r[27]+0x0000000Du,c->r[29]); // 800C1618
  c->r[3]=0u+0x802A0000u; // 800C161C
  c->r[4]=c->r[27]+0x00000010u; // 800C1620
  c->r[0]=0u+0x00000001u; // 800C1624
  W8(c->r[27]+0x0000000Fu,c->r[29]); // 800C1628
  c->r[3]=c->r[3]+0xFFFFED30u; // 800C162C
  W32(c->r[27]+0x00000010u,c->r[29]); // 800C1630
  W32(c->r[27]+0x00000014u,c->r[4]); // 800C1634
  W32(c->r[27]+0x00000000u,c->r[3]); // 800C1638
  W8(c->r[27]+0x0000000Eu,c->r[0]); // 800C163C
L_800C1640:;
  c->r[3]=c->r[27]|c->r[27]; // 800C1640
  c->r[4]=c->r[26]|c->r[26]; // 800C1644
  c->lr=0x800C164Cu; f_800BA030(c); // 800C1648
  c->r[3]=c->r[27]|c->r[27]; // 800C164C
  c->r[4]=c->r[28]|c->r[28]; // 800C1650
  c->lr=0x800C1658u; f_800BA030(c); // 800C1654
  c->r[28]=c->r[30]+0x00000010u; // 800C1658
  c->r[4]=c->r[27]|c->r[27]; // 800C165C
  c->r[3]=c->r[28]|c->r[28]; // 800C1660
  c->lr=0x800C1668u; f_800BA030(c); // 800C1664
  c->r[3]=c->r[28]|c->r[28]; // 800C1668
  c->r[4]=c->r[31]|c->r[31]; // 800C166C
  c->lr=0x800C1674u; f_800BA030(c); // 800C1670
  c->r[11]=c->r[1]+0x00000050u; // 800C1674
  c->lr=0x800C167Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1678
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C167C
  c->lr=c->r[0]; // 800C1680
  c->r[1]=c->r[1]+0x00000050u; // 800C1684
  return; // 800C1688
}

// fn_800C1690
void f_800C1690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1690
  c->r[0]=c->lr; // 800C1694
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C169C
  c->r[31]=c->r[3]|c->r[3]; // 800C16A0
  c->r[3]=R32(c->r[3]+0x00000074u); // 800C16A4
  c->r[4]=R32(c->r[31]+0x000000B0u); // 800C16A8
  c->r[5]=R32(c->r[31]+0x000000B4u); // 800C16AC
  c->lr=0x800C16B4u; f_800BF190(c); // 800C16B0
  W8(c->r[31]+0x00000078u,c->r[3]); // 800C16B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C16B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C16BC
  c->lr=c->r[0]; // 800C16C0
  c->r[1]=c->r[1]+0x00000010u; // 800C16C4
  return; // 800C16C8
}

// fn_800C16D0
void f_800C16D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C16D0
  c->r[0]=c->lr; // 800C16D4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C16D8
  c->r[11]=c->r[1]+0x00000050u; // 800C16DC
  c->lr=0x800C16E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C16E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C16E4
  c->r[29]=c->r[3]|c->r[3]; // 800C16E8
  c->r[30]=c->r[4]|c->r[4]; // 800C16EC
  cmps(c,0,(int32_t)c->r[0],0); // 800C16F0
  if (crb(c,2)) { goto L_800C1CDC; } // 800C16F4
  c->r[3]=0u+0x00000024u; // 800C16F8
  c->lr=0x800C1700u; f_800B98F0(c); // 800C16FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1700
  c->r[27]=c->r[3]|c->r[3]; // 800C1704
  if (!crb(c,2)) { goto L_800C172C; } // 800C1708
  c->r[3]=0u+0x802D0000u; // 800C170C
  c->r[4]=0u+0x80240000u; // 800C1710
  c->r[3]=c->r[3]+0x000050B0u; // 800C1714
  c->r[3]=c->r[3]+0x000000A0u; // 800C1718
  c->r[4]=c->r[4]+0x00006DFCu; // 800C171C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C1720
  c->lr=0x800C1728u; f_8021E5C0(c); // 800C1724
  c->lr=0x800C172Cu; f_802247E0(c); // 800C1728
L_800C172C:;
  c->r[31]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[31]); // 800C172C
  c->r[0]=c->r[29]+0x00000004u; // 800C1730
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1734
  c->r[28]=R32(c->r[30]+0x00000004u); // 800C1738
  W32(c->r[1]+0x0000001Cu,c->r[27]); // 800C173C
  if (crb(c,2)) { goto L_800C181C; } // 800C1740
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800C1744
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C1748
  if (!crb(c,2)) { goto L_800C1768; } // 800C174C
  c->r[0]=R32(c->r[28]+0x00000010u); // 800C1750
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C1754
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C1758
  c->r[0]=R32(c->r[28]+0x00000014u); // 800C175C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C1760
  goto L_800C17B0; // 800C1764
L_800C1768:;
  c->r[0]=0u+0x00000000u; // 800C1768
  W32(c->r[31]+0x00000000u,c->r[0]); // 800C176C
  c->r[27]=c->r[28]+0x00000010u; // 800C1770
  c->r[3]=c->r[31]|c->r[31]; // 800C1774
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C1778
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C177C
  c->r[4]=R32(c->r[28]+0x00000010u); // 800C1780
  c->lr=0x800C1788u; f_80007C00(c); // 800C1784
  c->r[0]=R8(c->r[1]+0x00000014u); // 800C1788
  c->r[3]=c->r[31]|c->r[31]; // 800C178C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C1790
  c->r[8]=c->r[1]+0x00000010u; // 800C1794
  c->r[4]=0u+0x00000000u; // 800C1798
  c->r[5]=0u+0x00000000u; // 800C179C
  c->r[6]=R32(c->r[28]+0x00000014u); // 800C17A0
  c->r[0]=R32(c->r[27]+0x00000000u); // 800C17A4
  c->r[7]=c->r[6]+c->r[0]; // 800C17A8
  c->lr=0x800C17B0u; f_80007DC0(c); // 800C17AC
L_800C17B0:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 800C17B0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C17B4
  if (!crb(c,2)) { goto L_800C17D4; } // 800C17B8
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 800C17BC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800C17C0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C17C4
  c->r[0]=R32(c->r[28]+0x00000020u); // 800C17C8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C17CC
  goto L_800C181C; // 800C17D0
L_800C17D4:;
  c->r[0]=0u+0x00000000u; // 800C17D4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800C17D8
  c->r[3]=c->r[31]+0x0000000Cu; // 800C17DC
  c->r[27]=c->r[28]+0x0000001Cu; // 800C17E0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C17E4
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C17E8
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800C17EC
  c->lr=0x800C17F4u; f_80007C00(c); // 800C17F0
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C17F4
  c->r[3]=c->r[31]+0x0000000Cu; // 800C17F8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C17FC
  c->r[8]=c->r[1]+0x00000008u; // 800C1800
  c->r[4]=0u+0x00000000u; // 800C1804
  c->r[5]=0u+0x00000000u; // 800C1808
  c->r[6]=R32(c->r[28]+0x00000020u); // 800C180C
  c->r[0]=R32(c->r[27]+0x00000000u); // 800C1810
  c->r[7]=c->r[6]+c->r[0]; // 800C1814
  c->lr=0x800C181Cu; f_80007DC0(c); // 800C1818
L_800C181C:;
  c->r[5]=0u+0x00000000u; // 800C181C
  W32(c->r[1]+0x00000020u,c->r[5]); // 800C1820
  c->r[4]=c->r[1]+0x00000024u; // 800C1824
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 800C1828
  W32(c->r[1]+0x00000024u,c->r[5]); // 800C182C
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C1830
  c->r[0]=R8(c->r[29]+0x00000008u); // 800C1834
  W8(c->r[1]+0x00000028u,c->r[0]); // 800C1838
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800C183C
  W32(c->r[6]+0x00000004u,c->r[5]); // 800C1840
  W32(c->r[6]+0x00000000u,c->r[5]); // 800C1844
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1848
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C184C
  c->r[0]=c->r[4]|c->r[0]; // 800C1850
  W32(c->r[6]+0x00000008u,c->r[0]); // 800C1854
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C1858
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C185C
  if (crb(c,2)) { goto L_800C1874; } // 800C1860
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1864
  c->r[0]=c->r[0]|0x00000001u; // 800C1868
  W32(c->r[6]+0x00000008u,c->r[0]); // 800C186C
  goto L_800C1880; // 800C1870
L_800C1874:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C1874
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800C1878
  W32(c->r[6]+0x00000008u,c->r[0]); // 800C187C
L_800C1880:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800C1880
  c->r[0]=0u+0x00000001u; // 800C1884
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C1888
  c->r[3]=0u+0x00000000u; // 800C188C
  c->r[5]=R32(c->r[30]+0x00000004u); // 800C1890
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C1894
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800C1898
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C189C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800C18A0
  cmps(c,0,(int32_t)c->r[0],0); // 800C18A4
  if (crb(c,2)) { goto L_800C18B8; } // 800C18A8
  c->r[3]=c->r[1]+0x00000020u; // 800C18AC
  c->r[6]=0u+0x00000000u; // 800C18B0
  c->lr=0x800C18B8u; f_800C1D00(c); // 800C18B4
L_800C18B8:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 800C18B8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800C18BC
  cmps(c,0,(int32_t)c->r[0],0); // 800C18C0
  if (crb(c,2)) { goto L_800C18D8; } // 800C18C4
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C18C8
  c->r[3]=c->r[1]+0x00000020u; // 800C18CC
  c->r[6]=0u+0x00000001u; // 800C18D0
  c->lr=0x800C18D8u; f_800C1D00(c); // 800C18D4
L_800C18D8:;
  c->r[0]=c->r[1]+0x00000020u; // 800C18D8
  cmpu(c,0,c->r[29],c->r[0]); // 800C18DC
  if (crb(c,2)) { goto L_800C1978; } // 800C18E0
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C18E4
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C18E8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800C18EC
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C18F0
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C18F4
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C18F8
  cmps(c,0,(int32_t)c->r[4],0); // 800C18FC
  W32(c->r[29]+0x00000004u,c->r[4]); // 800C1900
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C1904
  c->r[0]=R8(c->r[1]+0x00000028u); // 800C1908
  c->r[3]=R8(c->r[29]+0x00000008u); // 800C190C
  W8(c->r[29]+0x00000008u,c->r[0]); // 800C1910
  W8(c->r[1]+0x00000028u,c->r[3]); // 800C1914
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C1918
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C191C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C1920
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800C1924
  if (crb(c,2)) { goto L_800C1944; } // 800C1928
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C192C
  c->r[3]=c->r[29]+0x00000004u; // 800C1930
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C1934
  c->r[0]=c->r[3]|c->r[0]; // 800C1938
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C193C
  goto L_800C194C; // 800C1940
L_800C1944:;
  c->r[0]=c->r[29]+0x00000004u; // 800C1944
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C1948
L_800C194C:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C194C
  cmps(c,0,(int32_t)c->r[4],0); // 800C1950
  if (crb(c,2)) { goto L_800C1970; } // 800C1954
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C1958
  c->r[3]=c->r[1]+0x00000024u; // 800C195C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C1960
  c->r[0]=c->r[3]|c->r[0]; // 800C1964
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C1968
  goto L_800C1978; // 800C196C
L_800C1970:;
  c->r[0]=c->r[1]+0x00000024u; // 800C1970
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C1974
L_800C1978:;
  c->r[28]=R32(c->r[1]+0x00000024u); // 800C1978
  cmps(c,0,(int32_t)c->r[28],0); // 800C197C
  if (crb(c,2)) { goto L_800C1CCC; } // 800C1980
  c->r[27]=R32(c->r[28]+0x00000000u); // 800C1984
  cmps(c,0,(int32_t)c->r[27],0); // 800C1988
  if (crb(c,2)) { goto L_800C1B04; } // 800C198C
  c->r[29]=R32(c->r[27]+0x00000000u); // 800C1990
  cmps(c,0,(int32_t)c->r[29],0); // 800C1994
  if (crb(c,2)) { goto L_800C1A40; } // 800C1998
  c->r[30]=R32(c->r[29]+0x00000000u); // 800C199C
  cmps(c,0,(int32_t)c->r[30],0); // 800C19A0
  if (crb(c,2)) { goto L_800C19E4; } // 800C19A4
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C19A8
  cmps(c,0,(int32_t)c->r[4],0); // 800C19AC
  if (crb(c,2)) { goto L_800C19BC; } // 800C19B0
  c->r[3]=c->r[1]+0x00000020u; // 800C19B4
  c->lr=0x800C19BCu; f_800B2C80(c); // 800C19B8
L_800C19BC:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C19BC
  cmps(c,0,(int32_t)c->r[4],0); // 800C19C0
  if (crb(c,2)) { goto L_800C19D0; } // 800C19C4
  c->r[3]=c->r[1]+0x00000020u; // 800C19C8
  c->lr=0x800C19D0u; f_800B2C80(c); // 800C19CC
L_800C19D0:;
  c->r[3]=c->r[1]+0x00000020u; // 800C19D0
  c->r[4]=c->r[30]+0x0000000Cu; // 800C19D4
  c->lr=0x800C19DCu; f_800B3090(c); // 800C19D8
  c->r[3]=c->r[30]|c->r[30]; // 800C19DC
  c->lr=0x800C19E4u; f_800B9AD0(c); // 800C19E0
L_800C19E4:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 800C19E4
  cmps(c,0,(int32_t)c->r[30],0); // 800C19E8
  if (crb(c,2)) { goto L_800C1A2C; } // 800C19EC
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C19F0
  cmps(c,0,(int32_t)c->r[4],0); // 800C19F4
  if (crb(c,2)) { goto L_800C1A04; } // 800C19F8
  c->r[3]=c->r[1]+0x00000020u; // 800C19FC
  c->lr=0x800C1A04u; f_800B2C80(c); // 800C1A00
L_800C1A04:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1A04
  cmps(c,0,(int32_t)c->r[4],0); // 800C1A08
  if (crb(c,2)) { goto L_800C1A18; } // 800C1A0C
  c->r[3]=c->r[1]+0x00000020u; // 800C1A10
  c->lr=0x800C1A18u; f_800B2C80(c); // 800C1A14
L_800C1A18:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1A18
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1A1C
  c->lr=0x800C1A24u; f_800B3090(c); // 800C1A20
  c->r[3]=c->r[30]|c->r[30]; // 800C1A24
  c->lr=0x800C1A2Cu; f_800B9AD0(c); // 800C1A28
L_800C1A2C:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1A2C
  c->r[4]=c->r[29]+0x0000000Cu; // 800C1A30
  c->lr=0x800C1A38u; f_800B3090(c); // 800C1A34
  c->r[3]=c->r[29]|c->r[29]; // 800C1A38
  c->lr=0x800C1A40u; f_800B9AD0(c); // 800C1A3C
L_800C1A40:;
  c->r[29]=R32(c->r[27]+0x00000004u); // 800C1A40
  cmps(c,0,(int32_t)c->r[29],0); // 800C1A44
  if (crb(c,2)) { goto L_800C1AF0; } // 800C1A48
  c->r[30]=R32(c->r[29]+0x00000000u); // 800C1A4C
  cmps(c,0,(int32_t)c->r[30],0); // 800C1A50
  if (crb(c,2)) { goto L_800C1A94; } // 800C1A54
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1A58
  cmps(c,0,(int32_t)c->r[4],0); // 800C1A5C
  if (crb(c,2)) { goto L_800C1A6C; } // 800C1A60
  c->r[3]=c->r[1]+0x00000020u; // 800C1A64
  c->lr=0x800C1A6Cu; f_800B2C80(c); // 800C1A68
L_800C1A6C:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1A6C
  cmps(c,0,(int32_t)c->r[4],0); // 800C1A70
  if (crb(c,2)) { goto L_800C1A80; } // 800C1A74
  c->r[3]=c->r[1]+0x00000020u; // 800C1A78
  c->lr=0x800C1A80u; f_800B2C80(c); // 800C1A7C
L_800C1A80:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1A80
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1A84
  c->lr=0x800C1A8Cu; f_800B3090(c); // 800C1A88
  c->r[3]=c->r[30]|c->r[30]; // 800C1A8C
  c->lr=0x800C1A94u; f_800B9AD0(c); // 800C1A90
L_800C1A94:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 800C1A94
  cmps(c,0,(int32_t)c->r[30],0); // 800C1A98
  if (crb(c,2)) { goto L_800C1ADC; } // 800C1A9C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1AA0
  cmps(c,0,(int32_t)c->r[4],0); // 800C1AA4
  if (crb(c,2)) { goto L_800C1AB4; } // 800C1AA8
  c->r[3]=c->r[1]+0x00000020u; // 800C1AAC
  c->lr=0x800C1AB4u; f_800B2C80(c); // 800C1AB0
L_800C1AB4:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1AB4
  cmps(c,0,(int32_t)c->r[4],0); // 800C1AB8
  if (crb(c,2)) { goto L_800C1AC8; } // 800C1ABC
  c->r[3]=c->r[1]+0x00000020u; // 800C1AC0
  c->lr=0x800C1AC8u; f_800B2C80(c); // 800C1AC4
L_800C1AC8:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1AC8
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1ACC
  c->lr=0x800C1AD4u; f_800B3090(c); // 800C1AD0
  c->r[3]=c->r[30]|c->r[30]; // 800C1AD4
  c->lr=0x800C1ADCu; f_800B9AD0(c); // 800C1AD8
L_800C1ADC:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1ADC
  c->r[4]=c->r[29]+0x0000000Cu; // 800C1AE0
  c->lr=0x800C1AE8u; f_800B3090(c); // 800C1AE4
  c->r[3]=c->r[29]|c->r[29]; // 800C1AE8
  c->lr=0x800C1AF0u; f_800B9AD0(c); // 800C1AEC
L_800C1AF0:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1AF0
  c->r[4]=c->r[27]+0x0000000Cu; // 800C1AF4
  c->lr=0x800C1AFCu; f_800B3090(c); // 800C1AF8
  c->r[3]=c->r[27]|c->r[27]; // 800C1AFC
  c->lr=0x800C1B04u; f_800B9AD0(c); // 800C1B00
L_800C1B04:;
  c->r[27]=R32(c->r[28]+0x00000004u); // 800C1B04
  cmps(c,0,(int32_t)c->r[27],0); // 800C1B08
  if (crb(c,2)) { goto L_800C1C84; } // 800C1B0C
  c->r[29]=R32(c->r[27]+0x00000000u); // 800C1B10
  cmps(c,0,(int32_t)c->r[29],0); // 800C1B14
  if (crb(c,2)) { goto L_800C1BC0; } // 800C1B18
  c->r[30]=R32(c->r[29]+0x00000000u); // 800C1B1C
  cmps(c,0,(int32_t)c->r[30],0); // 800C1B20
  if (crb(c,2)) { goto L_800C1B64; } // 800C1B24
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1B28
  cmps(c,0,(int32_t)c->r[4],0); // 800C1B2C
  if (crb(c,2)) { goto L_800C1B3C; } // 800C1B30
  c->r[3]=c->r[1]+0x00000020u; // 800C1B34
  c->lr=0x800C1B3Cu; f_800B2C80(c); // 800C1B38
L_800C1B3C:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1B3C
  cmps(c,0,(int32_t)c->r[4],0); // 800C1B40
  if (crb(c,2)) { goto L_800C1B50; } // 800C1B44
  c->r[3]=c->r[1]+0x00000020u; // 800C1B48
  c->lr=0x800C1B50u; f_800B2C80(c); // 800C1B4C
L_800C1B50:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1B50
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1B54
  c->lr=0x800C1B5Cu; f_800B3090(c); // 800C1B58
  c->r[3]=c->r[30]|c->r[30]; // 800C1B5C
  c->lr=0x800C1B64u; f_800B9AD0(c); // 800C1B60
L_800C1B64:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 800C1B64
  cmps(c,0,(int32_t)c->r[30],0); // 800C1B68
  if (crb(c,2)) { goto L_800C1BAC; } // 800C1B6C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1B70
  cmps(c,0,(int32_t)c->r[4],0); // 800C1B74
  if (crb(c,2)) { goto L_800C1B84; } // 800C1B78
  c->r[3]=c->r[1]+0x00000020u; // 800C1B7C
  c->lr=0x800C1B84u; f_800B2C80(c); // 800C1B80
L_800C1B84:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1B84
  cmps(c,0,(int32_t)c->r[4],0); // 800C1B88
  if (crb(c,2)) { goto L_800C1B98; } // 800C1B8C
  c->r[3]=c->r[1]+0x00000020u; // 800C1B90
  c->lr=0x800C1B98u; f_800B2C80(c); // 800C1B94
L_800C1B98:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1B98
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1B9C
  c->lr=0x800C1BA4u; f_800B3090(c); // 800C1BA0
  c->r[3]=c->r[30]|c->r[30]; // 800C1BA4
  c->lr=0x800C1BACu; f_800B9AD0(c); // 800C1BA8
L_800C1BAC:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1BAC
  c->r[4]=c->r[29]+0x0000000Cu; // 800C1BB0
  c->lr=0x800C1BB8u; f_800B3090(c); // 800C1BB4
  c->r[3]=c->r[29]|c->r[29]; // 800C1BB8
  c->lr=0x800C1BC0u; f_800B9AD0(c); // 800C1BBC
L_800C1BC0:;
  c->r[29]=R32(c->r[27]+0x00000004u); // 800C1BC0
  cmps(c,0,(int32_t)c->r[29],0); // 800C1BC4
  if (crb(c,2)) { goto L_800C1C70; } // 800C1BC8
  c->r[30]=R32(c->r[29]+0x00000000u); // 800C1BCC
  cmps(c,0,(int32_t)c->r[30],0); // 800C1BD0
  if (crb(c,2)) { goto L_800C1C14; } // 800C1BD4
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1BD8
  cmps(c,0,(int32_t)c->r[4],0); // 800C1BDC
  if (crb(c,2)) { goto L_800C1BEC; } // 800C1BE0
  c->r[3]=c->r[1]+0x00000020u; // 800C1BE4
  c->lr=0x800C1BECu; f_800B2C80(c); // 800C1BE8
L_800C1BEC:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1BEC
  cmps(c,0,(int32_t)c->r[4],0); // 800C1BF0
  if (crb(c,2)) { goto L_800C1C00; } // 800C1BF4
  c->r[3]=c->r[1]+0x00000020u; // 800C1BF8
  c->lr=0x800C1C00u; f_800B2C80(c); // 800C1BFC
L_800C1C00:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1C00
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1C04
  c->lr=0x800C1C0Cu; f_800B3090(c); // 800C1C08
  c->r[3]=c->r[30]|c->r[30]; // 800C1C0C
  c->lr=0x800C1C14u; f_800B9AD0(c); // 800C1C10
L_800C1C14:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 800C1C14
  cmps(c,0,(int32_t)c->r[30],0); // 800C1C18
  if (crb(c,2)) { goto L_800C1C5C; } // 800C1C1C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1C20
  cmps(c,0,(int32_t)c->r[4],0); // 800C1C24
  if (crb(c,2)) { goto L_800C1C34; } // 800C1C28
  c->r[3]=c->r[1]+0x00000020u; // 800C1C2C
  c->lr=0x800C1C34u; f_800B2C80(c); // 800C1C30
L_800C1C34:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C1C34
  cmps(c,0,(int32_t)c->r[4],0); // 800C1C38
  if (crb(c,2)) { goto L_800C1C48; } // 800C1C3C
  c->r[3]=c->r[1]+0x00000020u; // 800C1C40
  c->lr=0x800C1C48u; f_800B2C80(c); // 800C1C44
L_800C1C48:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1C48
  c->r[4]=c->r[30]+0x0000000Cu; // 800C1C4C
  c->lr=0x800C1C54u; f_800B3090(c); // 800C1C50
  c->r[3]=c->r[30]|c->r[30]; // 800C1C54
  c->lr=0x800C1C5Cu; f_800B9AD0(c); // 800C1C58
L_800C1C5C:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1C5C
  c->r[4]=c->r[29]+0x0000000Cu; // 800C1C60
  c->lr=0x800C1C68u; f_800B3090(c); // 800C1C64
  c->r[3]=c->r[29]|c->r[29]; // 800C1C68
  c->lr=0x800C1C70u; f_800B9AD0(c); // 800C1C6C
L_800C1C70:;
  c->r[3]=c->r[1]+0x00000020u; // 800C1C70
  c->r[4]=c->r[27]+0x0000000Cu; // 800C1C74
  c->lr=0x800C1C7Cu; f_800B3090(c); // 800C1C78
  c->r[3]=c->r[27]|c->r[27]; // 800C1C7C
  c->lr=0x800C1C84u; f_800B9AD0(c); // 800C1C80
L_800C1C84:;
  c->r[27]=addc(c,c->r[28],0x0000000Cu,0); cr0(c,c->r[27]); // 800C1C84
  if (crb(c,2)) { goto L_800C1CC4; } // 800C1C88
  c->r[0]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[0]); // 800C1C8C
  if (crb(c,2)) { goto L_800C1CA8; } // 800C1C90
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800C1C94
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1C98
  if (crb(c,2)) { goto L_800C1CA8; } // 800C1C9C
  c->r[3]=R32(c->r[27]+0x00000014u); // 800C1CA0
  c->lr=0x800C1CA8u; f_800B9AD0(c); // 800C1CA4
L_800C1CA8:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C1CA8
  if (crb(c,2)) { goto L_800C1CC4; } // 800C1CAC
  c->r[0]=R32(c->r[27]+0x00000000u); // 800C1CB0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1CB4
  if (crb(c,2)) { goto L_800C1CC4; } // 800C1CB8
  c->r[3]=R32(c->r[27]+0x00000008u); // 800C1CBC
  c->lr=0x800C1CC4u; f_800B9AD0(c); // 800C1CC0
L_800C1CC4:;
  c->r[3]=c->r[28]|c->r[28]; // 800C1CC4
  c->lr=0x800C1CCCu; f_800B9AD0(c); // 800C1CC8
L_800C1CCC:;
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800C1CCC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1CD0
  if (crb(c,2)) { goto L_800C1CDC; } // 800C1CD4
  c->lr=0x800C1CDCu; f_800B9AD0(c); // 800C1CD8
L_800C1CDC:;
  c->r[11]=c->r[1]+0x00000050u; // 800C1CDC
  c->lr=0x800C1CE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1CE0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1CE4
  c->lr=c->r[0]; // 800C1CE8
  c->r[1]=c->r[1]+0x00000050u; // 800C1CEC
  return; // 800C1CF0
}

// fn_800C1D00
void f_800C1D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1D00
  c->r[0]=c->lr; // 800C1D04
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1D08
  c->r[11]=c->r[1]+0x00000050u; // 800C1D0C
  c->lr=0x800C1D14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1D10
  c->r[28]=c->r[3]|c->r[3]; // 800C1D14
  c->r[29]=c->r[4]|c->r[4]; // 800C1D18
  c->r[30]=c->r[5]|c->r[5]; // 800C1D1C
  c->r[26]=c->r[6]|c->r[6]; // 800C1D20
  c->r[3]=0u+0x00000024u; // 800C1D24
  c->lr=0x800C1D2Cu; f_800B98F0(c); // 800C1D28
  cmps(c,0,(int32_t)c->r[3],0); // 800C1D2C
  c->r[27]=c->r[3]|c->r[3]; // 800C1D30
  if (!crb(c,2)) { goto L_800C1D58; } // 800C1D34
  c->r[3]=0u+0x802D0000u; // 800C1D38
  c->r[4]=0u+0x80240000u; // 800C1D3C
  c->r[3]=c->r[3]+0x000050B0u; // 800C1D40
  c->r[3]=c->r[3]+0x000000A0u; // 800C1D44
  c->r[4]=c->r[4]+0x00006DFCu; // 800C1D48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C1D4C
  c->lr=0x800C1D54u; f_8021E5C0(c); // 800C1D50
  c->lr=0x800C1D58u; f_802247E0(c); // 800C1D54
L_800C1D58:;
  c->r[4]=0u+0x00000000u; // 800C1D58
  W32(c->r[27]+0x00000004u,c->r[4]); // 800C1D5C
  c->r[3]=c->r[28]+0x00000004u; // 800C1D60
  cmps(c,0,(int32_t)c->r[26],0); // 800C1D64
  W32(c->r[27]+0x00000000u,c->r[4]); // 800C1D68
  c->r[0]=R32(c->r[27]+0x00000008u); // 800C1D6C
  W32(c->r[1]+0x00000028u,c->r[3]); // 800C1D70
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C1D74
  c->r[0]=c->r[29]|c->r[0]; // 800C1D78
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 800C1D7C
  W32(c->r[27]+0x00000008u,c->r[0]); // 800C1D80
  if (crb(c,2)) { goto L_800C1E88; } // 800C1D84
  c->r[31]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[31]); // 800C1D88
  c->r[27]=R32(c->r[30]+0x00000000u); // 800C1D8C
  if (crb(c,2)) { goto L_800C1E68; } // 800C1D90
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800C1D94
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C1D98
  if (!crb(c,2)) { goto L_800C1DB8; } // 800C1D9C
  c->r[0]=R32(c->r[27]+0x00000010u); // 800C1DA0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C1DA4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C1DA8
  c->r[0]=R32(c->r[27]+0x00000014u); // 800C1DAC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C1DB0
  goto L_800C1DFC; // 800C1DB4
L_800C1DB8:;
  W32(c->r[31]+0x00000000u,c->r[4]); // 800C1DB8
  c->r[26]=c->r[27]+0x00000010u; // 800C1DBC
  c->r[3]=c->r[31]|c->r[31]; // 800C1DC0
  W32(c->r[31]+0x00000004u,c->r[4]); // 800C1DC4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800C1DC8
  c->r[4]=R32(c->r[27]+0x00000010u); // 800C1DCC
  c->lr=0x800C1DD4u; f_80007C00(c); // 800C1DD0
  c->r[0]=R8(c->r[1]+0x00000024u); // 800C1DD4
  c->r[3]=c->r[31]|c->r[31]; // 800C1DD8
  W8(c->r[1]+0x00000020u,c->r[0]); // 800C1DDC
  c->r[8]=c->r[1]+0x00000020u; // 800C1DE0
  c->r[4]=0u+0x00000000u; // 800C1DE4
  c->r[5]=0u+0x00000000u; // 800C1DE8
  c->r[6]=R32(c->r[27]+0x00000014u); // 800C1DEC
  c->r[0]=R32(c->r[26]+0x00000000u); // 800C1DF0
  c->r[7]=c->r[6]+c->r[0]; // 800C1DF4
  c->lr=0x800C1DFCu; f_80007DC0(c); // 800C1DF8
L_800C1DFC:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800C1DFC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C1E00
  if (!crb(c,2)) { goto L_800C1E20; } // 800C1E04
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800C1E08
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800C1E0C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C1E10
  c->r[0]=R32(c->r[27]+0x00000020u); // 800C1E14
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C1E18
  goto L_800C1E68; // 800C1E1C
L_800C1E20:;
  c->r[0]=0u+0x00000000u; // 800C1E20
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800C1E24
  c->r[3]=c->r[31]+0x0000000Cu; // 800C1E28
  c->r[26]=c->r[27]+0x0000001Cu; // 800C1E2C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C1E30
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C1E34
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800C1E38
  c->lr=0x800C1E40u; f_80007C00(c); // 800C1E3C
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800C1E40
  c->r[3]=c->r[31]+0x0000000Cu; // 800C1E44
  W8(c->r[1]+0x00000018u,c->r[0]); // 800C1E48
  c->r[8]=c->r[1]+0x00000018u; // 800C1E4C
  c->r[4]=0u+0x00000000u; // 800C1E50
  c->r[5]=0u+0x00000000u; // 800C1E54
  c->r[6]=R32(c->r[27]+0x00000020u); // 800C1E58
  c->r[0]=R32(c->r[26]+0x00000000u); // 800C1E5C
  c->r[7]=c->r[6]+c->r[0]; // 800C1E60
  c->lr=0x800C1E68u; f_80007DC0(c); // 800C1E64
L_800C1E68:;
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800C1E68
  c->r[0]=0u+0x00000000u; // 800C1E6C
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 800C1E70
  W32(c->r[29]+0x00000000u,c->r[3]); // 800C1E74
  c->r[29]=c->r[3]|c->r[3]; // 800C1E78
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C1E7C
  c->r[30]=R32(c->r[30]+0x00000000u); // 800C1E80
  goto L_800C1F80; // 800C1E84
L_800C1E88:;
  c->r[31]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[31]); // 800C1E88
  c->r[27]=R32(c->r[30]+0x00000004u); // 800C1E8C
  if (crb(c,2)) { goto L_800C1F68; } // 800C1E90
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800C1E94
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C1E98
  if (!crb(c,2)) { goto L_800C1EB8; } // 800C1E9C
  c->r[0]=R32(c->r[27]+0x00000010u); // 800C1EA0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C1EA4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C1EA8
  c->r[0]=R32(c->r[27]+0x00000014u); // 800C1EAC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C1EB0
  goto L_800C1EFC; // 800C1EB4
L_800C1EB8:;
  W32(c->r[31]+0x00000000u,c->r[4]); // 800C1EB8
  c->r[26]=c->r[27]+0x00000010u; // 800C1EBC
  c->r[3]=c->r[31]|c->r[31]; // 800C1EC0
  W32(c->r[31]+0x00000004u,c->r[4]); // 800C1EC4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800C1EC8
  c->r[4]=R32(c->r[27]+0x00000010u); // 800C1ECC
  c->lr=0x800C1ED4u; f_80007C00(c); // 800C1ED0
  c->r[0]=R8(c->r[1]+0x00000014u); // 800C1ED4
  c->r[3]=c->r[31]|c->r[31]; // 800C1ED8
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C1EDC
  c->r[8]=c->r[1]+0x00000010u; // 800C1EE0
  c->r[4]=0u+0x00000000u; // 800C1EE4
  c->r[5]=0u+0x00000000u; // 800C1EE8
  c->r[6]=R32(c->r[27]+0x00000014u); // 800C1EEC
  c->r[0]=R32(c->r[26]+0x00000000u); // 800C1EF0
  c->r[7]=c->r[6]+c->r[0]; // 800C1EF4
  c->lr=0x800C1EFCu; f_80007DC0(c); // 800C1EF8
L_800C1EFC:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800C1EFC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C1F00
  if (!crb(c,2)) { goto L_800C1F20; } // 800C1F04
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800C1F08
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800C1F0C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C1F10
  c->r[0]=R32(c->r[27]+0x00000020u); // 800C1F14
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C1F18
  goto L_800C1F68; // 800C1F1C
L_800C1F20:;
  c->r[0]=0u+0x00000000u; // 800C1F20
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800C1F24
  c->r[3]=c->r[31]+0x0000000Cu; // 800C1F28
  c->r[26]=c->r[27]+0x0000001Cu; // 800C1F2C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C1F30
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C1F34
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800C1F38
  c->lr=0x800C1F40u; f_80007C00(c); // 800C1F3C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C1F40
  c->r[3]=c->r[31]+0x0000000Cu; // 800C1F44
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C1F48
  c->r[8]=c->r[1]+0x00000008u; // 800C1F4C
  c->r[4]=0u+0x00000000u; // 800C1F50
  c->r[5]=0u+0x00000000u; // 800C1F54
  c->r[6]=R32(c->r[27]+0x00000020u); // 800C1F58
  c->r[0]=R32(c->r[26]+0x00000000u); // 800C1F5C
  c->r[7]=c->r[6]+c->r[0]; // 800C1F60
  c->lr=0x800C1F68u; f_80007DC0(c); // 800C1F64
L_800C1F68:;
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800C1F68
  c->r[0]=0u+0x00000000u; // 800C1F6C
  W32(c->r[29]+0x00000004u,c->r[3]); // 800C1F70
  c->r[29]=c->r[3]|c->r[3]; // 800C1F74
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C1F78
  c->r[30]=R32(c->r[30]+0x00000004u); // 800C1F7C
L_800C1F80:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C1F80
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C1F84
  if (crb(c,2)) { goto L_800C1F9C; } // 800C1F88
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C1F8C
  c->r[0]=c->r[0]|0x00000001u; // 800C1F90
  W32(c->r[29]+0x00000008u,c->r[0]); // 800C1F94
  goto L_800C1FA8; // 800C1F98
L_800C1F9C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C1F9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800C1FA0
  W32(c->r[29]+0x00000008u,c->r[0]); // 800C1FA4
L_800C1FA8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C1FA8
  c->r[0]=c->r[3]+0x00000001u; // 800C1FAC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C1FB0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800C1FB4
  cmps(c,0,(int32_t)c->r[0],0); // 800C1FB8
  if (crb(c,2)) { goto L_800C1FD4; } // 800C1FBC
  c->r[3]=c->r[28]|c->r[28]; // 800C1FC0
  c->r[4]=c->r[29]|c->r[29]; // 800C1FC4
  c->r[5]=c->r[30]|c->r[30]; // 800C1FC8
  c->r[6]=0u+0x00000000u; // 800C1FCC
  c->lr=0x800C1FD4u; f_800C1D00(c); // 800C1FD0
L_800C1FD4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800C1FD4
  cmps(c,0,(int32_t)c->r[0],0); // 800C1FD8
  if (crb(c,2)) { goto L_800C1FF4; } // 800C1FDC
  c->r[3]=c->r[28]|c->r[28]; // 800C1FE0
  c->r[4]=c->r[29]|c->r[29]; // 800C1FE4
  c->r[5]=c->r[30]|c->r[30]; // 800C1FE8
  c->r[6]=0u+0x00000001u; // 800C1FEC
  c->lr=0x800C1FF4u; f_800C1D00(c); // 800C1FF0
L_800C1FF4:;
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800C1FF4
  cmps(c,0,(int32_t)c->r[3],0); // 800C1FF8
  if (crb(c,2)) { goto L_800C2004; } // 800C1FFC
  c->lr=0x800C2004u; f_800B9AD0(c); // 800C2000
L_800C2004:;
  c->r[11]=c->r[1]+0x00000050u; // 800C2004
  c->lr=0x800C200Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2008
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C200C
  c->lr=c->r[0]; // 800C2010
  c->r[1]=c->r[1]+0x00000050u; // 800C2014
  return; // 800C2018
}

// fn_800C2020
void f_800C2020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2020
  c->r[0]=c->lr; // 800C2024
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C2028
  c->r[0]=0u+0x00000000u; // 800C202C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C2030
  c->r[31]=c->r[5]|c->r[5]; // 800C2034
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C2038
  c->r[30]=c->r[4]|c->r[4]; // 800C203C
  c->r[4]=c->r[31]|c->r[31]; // 800C2040
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C2044
  c->r[29]=c->r[3]|c->r[3]; // 800C2048
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C204C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C2050
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C2054
  c->lr=0x800C205Cu; f_80007C00(c); // 800C2058
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C205C
  c->r[3]=c->r[29]|c->r[29]; // 800C2060
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C2064
  c->r[6]=c->r[30]|c->r[30]; // 800C2068
  c->r[7]=c->r[30]+c->r[31]; // 800C206C
  c->r[8]=c->r[1]+0x0000000Cu; // 800C2070
  c->r[4]=0u+0x00000000u; // 800C2074
  c->r[5]=0u+0x00000000u; // 800C2078
  c->lr=0x800C2080u; f_80007DC0(c); // 800C207C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C2080
  c->r[3]=c->r[29]|c->r[29]; // 800C2084
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C2088
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C208C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C2090
  c->lr=c->r[0]; // 800C2094
  c->r[1]=c->r[1]+0x00000020u; // 800C2098
  return; // 800C209C
}

// fn_800C20A0
void f_800C20A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C20A0
  c->r[0]=c->lr; // 800C20A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C20A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C20AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C20B0
  c->r[31]=c->r[4]|c->r[4]; // 800C20B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C20B8
  c->r[30]=c->r[3]|c->r[3]; // 800C20BC
  if (crb(c,2)) { goto L_800C20F0; } // 800C20C0
  c->r[4]=0u+0x802A0000u; // 800C20C4
  c->r[4]=c->r[4]+0xFFFFF4F0u; // 800C20C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C20CC
  c->lr=0x800C20D4u; f_800BBA30(c); // 800C20D0
  c->r[3]=c->r[30]|c->r[30]; // 800C20D4
  c->r[4]=0u+0x00000000u; // 800C20D8
  c->lr=0x800C20E0u; f_800BB9A0(c); // 800C20DC
  cmps(c,0,(int32_t)c->r[31],0); // 800C20E0
  if (!crb(c,1)) { goto L_800C20F0; } // 800C20E4
  c->r[3]=c->r[30]|c->r[30]; // 800C20E8
  c->lr=0x800C20F0u; f_800B9AD0(c); // 800C20EC
L_800C20F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C20F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C20F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C20F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C20FC
  c->lr=c->r[0]; // 800C2100
  c->r[1]=c->r[1]+0x00000010u; // 800C2104
  return; // 800C2108
}

// fn_800C2110
void f_800C2110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2110
  c->r[0]=c->lr; // 800C2114
  c->r[4]=c->r[3]|c->r[3]; // 800C2118
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C211C
  c->r[12]=c->r[4]+0x00000034u; // 800C2120
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C2124
  c->lr=0x800C212Cu; f_802174B4(c); // 800C2128
  c->r[0]=c->r[0]|0x00000000u; // 800C212C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2130
  c->lr=c->r[0]; // 800C2134
  c->r[1]=c->r[1]+0x00000010u; // 800C2138
  return; // 800C213C
}

// fn_800C2140
void f_800C2140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2140
  c->r[0]=c->lr; // 800C2144
  cmps(c,0,(int32_t)c->r[3],0); // 800C2148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C214C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2150
  c->r[31]=c->r[4]|c->r[4]; // 800C2154
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C2158
  c->r[30]=c->r[3]|c->r[3]; // 800C215C
  if (crb(c,2)) { goto L_800C2190; } // 800C2160
  c->r[4]=0u+0x802A0000u; // 800C2164
  c->r[4]=c->r[4]+0xFFFFF540u; // 800C2168
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C216C
  c->lr=0x800C2174u; f_800BBA30(c); // 800C2170
  c->r[3]=c->r[30]|c->r[30]; // 800C2174
  c->r[4]=0u+0x00000000u; // 800C2178
  c->lr=0x800C2180u; f_800BB9A0(c); // 800C217C
  cmps(c,0,(int32_t)c->r[31],0); // 800C2180
  if (!crb(c,1)) { goto L_800C2190; } // 800C2184
  c->r[3]=c->r[30]|c->r[30]; // 800C2188
  c->lr=0x800C2190u; f_800B9AD0(c); // 800C218C
L_800C2190:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2194
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C2198
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C219C
  c->lr=c->r[0]; // 800C21A0
  c->r[1]=c->r[1]+0x00000010u; // 800C21A4
  return; // 800C21A8
}

// fn_800C21B0
void f_800C21B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C21B0
  c->r[0]=c->lr; // 800C21B4
  c->r[4]=c->r[3]|c->r[3]; // 800C21B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C21BC
  c->r[12]=c->r[4]+0x00000034u; // 800C21C0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C21C4
  c->lr=0x800C21CCu; f_802174B4(c); // 800C21C8
  c->r[0]=c->r[0]|0x00000000u; // 800C21CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C21D0
  c->lr=c->r[0]; // 800C21D4
  c->r[1]=c->r[1]+0x00000010u; // 800C21D8
  return; // 800C21DC
}

// fn_800C21E0
void f_800C21E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C21E0
  c->r[0]=c->lr; // 800C21E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C21E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C21EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C21F0
  c->r[31]=c->r[4]|c->r[4]; // 800C21F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C21F8
  c->r[30]=c->r[3]|c->r[3]; // 800C21FC
  if (crb(c,2)) { goto L_800C2230; } // 800C2200
  c->r[4]=0u+0x802A0000u; // 800C2204
  c->r[4]=c->r[4]+0xFFFFF590u; // 800C2208
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C220C
  c->lr=0x800C2214u; f_800BBA30(c); // 800C2210
  c->r[3]=c->r[30]|c->r[30]; // 800C2214
  c->r[4]=0u+0x00000000u; // 800C2218
  c->lr=0x800C2220u; f_800BB9A0(c); // 800C221C
  cmps(c,0,(int32_t)c->r[31],0); // 800C2220
  if (!crb(c,1)) { goto L_800C2230; } // 800C2224
  c->r[3]=c->r[30]|c->r[30]; // 800C2228
  c->lr=0x800C2230u; f_800B9AD0(c); // 800C222C
L_800C2230:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2234
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C2238
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C223C
  c->lr=c->r[0]; // 800C2240
  c->r[1]=c->r[1]+0x00000010u; // 800C2244
  return; // 800C2248
}

// fn_800C2250
void f_800C2250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2250
  c->r[0]=c->lr; // 800C2254
  c->r[4]=c->r[3]|c->r[3]; // 800C2258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C225C
  c->r[12]=c->r[4]+0x00000034u; // 800C2260
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C2264
  c->lr=0x800C226Cu; f_802174B4(c); // 800C2268
  c->r[0]=c->r[0]|0x00000000u; // 800C226C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2270
  c->lr=c->r[0]; // 800C2274
  c->r[1]=c->r[1]+0x00000010u; // 800C2278
  return; // 800C227C
}

// fn_800C2280
void f_800C2280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2280
  c->r[0]=c->lr; // 800C2284
  cmps(c,0,(int32_t)c->r[3],0); // 800C2288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C228C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2290
  c->r[31]=c->r[4]|c->r[4]; // 800C2294
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C2298
  c->r[30]=c->r[3]|c->r[3]; // 800C229C
  if (crb(c,2)) { goto L_800C22D0; } // 800C22A0
  c->r[4]=0u+0x802A0000u; // 800C22A4
  c->r[4]=c->r[4]+0xFFFFF5E0u; // 800C22A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C22AC
  c->lr=0x800C22B4u; f_800BBA30(c); // 800C22B0
  c->r[3]=c->r[30]|c->r[30]; // 800C22B4
  c->r[4]=0u+0x00000000u; // 800C22B8
  c->lr=0x800C22C0u; f_800BB9A0(c); // 800C22BC
  cmps(c,0,(int32_t)c->r[31],0); // 800C22C0
  if (!crb(c,1)) { goto L_800C22D0; } // 800C22C4
  c->r[3]=c->r[30]|c->r[30]; // 800C22C8
  c->lr=0x800C22D0u; f_800B9AD0(c); // 800C22CC
L_800C22D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C22D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C22D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C22D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C22DC
  c->lr=c->r[0]; // 800C22E0
  c->r[1]=c->r[1]+0x00000010u; // 800C22E4
  return; // 800C22E8
}

// fn_800C22F0
void f_800C22F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C22F0
  c->r[0]=c->lr; // 800C22F4
  c->r[4]=c->r[3]|c->r[3]; // 800C22F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C22FC
  c->r[12]=c->r[4]+0x00000034u; // 800C2300
  c->r[3]=R32(c->r[3]+0x00000030u); // 800C2304
  c->lr=0x800C230Cu; f_802174B4(c); // 800C2308
  c->r[0]=c->r[0]|0x00000000u; // 800C230C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2310
  c->lr=c->r[0]; // 800C2314
  c->r[1]=c->r[1]+0x00000010u; // 800C2318
  return; // 800C231C
}

// fn_800C2320
void f_800C2320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2320
  c->r[0]=c->lr; // 800C2324
  cmps(c,0,(int32_t)c->r[3],0); // 800C2328
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C232C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2330
  c->r[31]=c->r[4]|c->r[4]; // 800C2334
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C2338
  c->r[30]=c->r[3]|c->r[3]; // 800C233C
  if (crb(c,2)) { goto L_800C2394; } // 800C2340
  if (crb(c,2)) { goto L_800C2384; } // 800C2344
  c->r[4]=0u+0x802A0000u; // 800C2348
  c->r[4]=c->r[4]+0xFFFFF704u; // 800C234C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C2350
  c->r[3]=R32(c->r[3]+0x00000070u); // 800C2354
  c->lr=0x800C235Cu; f_800B9AD0(c); // 800C2358
  cmps(c,0,(int32_t)c->r[30],0); // 800C235C
  if (crb(c,2)) { goto L_800C2384; } // 800C2360
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800C2364
  if (crb(c,2)) { goto L_800C2374; } // 800C2368
  c->r[4]=0u+0x00000000u; // 800C236C
  c->lr=0x800C2374u; f_800B9EC0(c); // 800C2370
L_800C2374:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800C2374
  if (crb(c,2)) { goto L_800C2384; } // 800C2378
  c->r[4]=0u+0x00000000u; // 800C237C
  c->lr=0x800C2384u; f_800B9EC0(c); // 800C2380
L_800C2384:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C2384
  if (!crb(c,1)) { goto L_800C2394; } // 800C2388
  c->r[3]=c->r[30]|c->r[30]; // 800C238C
  c->lr=0x800C2394u; f_800B9AD0(c); // 800C2390
L_800C2394:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2398
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C239C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C23A0
  c->lr=c->r[0]; // 800C23A4
  c->r[1]=c->r[1]+0x00000010u; // 800C23A8
  return; // 800C23AC
}

// fn_800C23B0
void f_800C23B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C23B0
  c->r[0]=c->lr; // 800C23B4
  cmps(c,0,(int32_t)c->r[3],0); // 800C23B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C23BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C23C0
  c->r[31]=c->r[4]|c->r[4]; // 800C23C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C23C8
  c->r[30]=c->r[3]|c->r[3]; // 800C23CC
  if (crb(c,2)) { goto L_800C2424; } // 800C23D0
  if (crb(c,2)) { goto L_800C2414; } // 800C23D4
  c->r[4]=0u+0x802A0000u; // 800C23D8
  c->r[4]=c->r[4]+0xFFFFF704u; // 800C23DC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C23E0
  c->r[3]=R32(c->r[3]+0x00000070u); // 800C23E4
  c->lr=0x800C23ECu; f_800B9AD0(c); // 800C23E8
  cmps(c,0,(int32_t)c->r[30],0); // 800C23EC
  if (crb(c,2)) { goto L_800C2414; } // 800C23F0
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800C23F4
  if (crb(c,2)) { goto L_800C2404; } // 800C23F8
  c->r[4]=0u+0x00000000u; // 800C23FC
  c->lr=0x800C2404u; f_800B9EC0(c); // 800C2400
L_800C2404:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800C2404
  if (crb(c,2)) { goto L_800C2414; } // 800C2408
  c->r[4]=0u+0x00000000u; // 800C240C
  c->lr=0x800C2414u; f_800B9EC0(c); // 800C2410
L_800C2414:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C2414
  if (!crb(c,1)) { goto L_800C2424; } // 800C2418
  c->r[3]=c->r[30]|c->r[30]; // 800C241C
  c->lr=0x800C2424u; f_800B9AD0(c); // 800C2420
L_800C2424:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2428
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C242C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2430
  c->lr=c->r[0]; // 800C2434
  c->r[1]=c->r[1]+0x00000010u; // 800C2438
  return; // 800C243C
}

// fn_800C2440
void f_800C2440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2440
  c->r[0]=c->lr; // 800C2444
  cmps(c,0,(int32_t)c->r[3],0); // 800C2448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C244C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2450
  c->r[31]=c->r[4]|c->r[4]; // 800C2454
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C2458
  c->r[30]=c->r[3]|c->r[3]; // 800C245C
  if (crb(c,2)) { goto L_800C24B4; } // 800C2460
  if (crb(c,2)) { goto L_800C24A4; } // 800C2464
  c->r[4]=0u+0x802A0000u; // 800C2468
  c->r[4]=c->r[4]+0xFFFFF704u; // 800C246C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C2470
  c->r[3]=R32(c->r[3]+0x00000070u); // 800C2474
  c->lr=0x800C247Cu; f_800B9AD0(c); // 800C2478
  cmps(c,0,(int32_t)c->r[30],0); // 800C247C
  if (crb(c,2)) { goto L_800C24A4; } // 800C2480
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800C2484
  if (crb(c,2)) { goto L_800C2494; } // 800C2488
  c->r[4]=0u+0x00000000u; // 800C248C
  c->lr=0x800C2494u; f_800B9EC0(c); // 800C2490
L_800C2494:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800C2494
  if (crb(c,2)) { goto L_800C24A4; } // 800C2498
  c->r[4]=0u+0x00000000u; // 800C249C
  c->lr=0x800C24A4u; f_800B9EC0(c); // 800C24A0
L_800C24A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C24A4
  if (!crb(c,1)) { goto L_800C24B4; } // 800C24A8
  c->r[3]=c->r[30]|c->r[30]; // 800C24AC
  c->lr=0x800C24B4u; f_800B9AD0(c); // 800C24B0
L_800C24B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800C24B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C24B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C24BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C24C0
  c->lr=c->r[0]; // 800C24C4
  c->r[1]=c->r[1]+0x00000010u; // 800C24C8
  return; // 800C24CC
}

// fn_800C24D0
void f_800C24D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C24D0
  c->r[0]=c->lr; // 800C24D4
  c->r[4]=0u+0x802F0000u; // 800C24D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C24DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C24E0
  c->r[31]=c->r[3]|c->r[3]; // 800C24E4
  c->r[3]=c->r[4]+0xFFFF9308u; // 800C24E8
  c->lr=0x800C24F0u; f_800CCD50(c); // 800C24EC
  c->r[3]=c->r[31]|c->r[31]; // 800C24F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C24F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C24F8
  c->lr=c->r[0]; // 800C24FC
  c->r[1]=c->r[1]+0x00000010u; // 800C2500
  return; // 800C2504
}

// fn_800C2510
void f_800C2510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2510
  c->r[0]=c->lr; // 800C2514
  cmps(c,0,(int32_t)c->r[3],0); // 800C2518
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C251C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2520
  c->r[31]=c->r[4]|c->r[4]; // 800C2524
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C2528
  c->r[30]=c->r[3]|c->r[3]; // 800C252C
  if (crb(c,2)) { goto L_800C2550; } // 800C2530
  c->r[3]=0u+0x802F0000u; // 800C2534
  c->r[3]=c->r[3]+0xFFFF9308u; // 800C2538
  c->lr=0x800C2540u; f_800CCE30(c); // 800C253C
  cmps(c,0,(int32_t)c->r[31],0); // 800C2540
  if (!crb(c,1)) { goto L_800C2550; } // 800C2544
  c->r[3]=c->r[30]|c->r[30]; // 800C2548
  c->lr=0x800C2550u; f_800B9AD0(c); // 800C254C
L_800C2550:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2554
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C2558
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C255C
  c->lr=c->r[0]; // 800C2560
  c->r[1]=c->r[1]+0x00000010u; // 800C2564
  return; // 800C2568
}

// fn_800C2570
void f_800C2570(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800C2570
  W8(c->r[13]+0xFFFFA440u,c->r[0]); // 800C2574
  return; // 800C2578
}

// fn_800C2580
void f_800C2580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2580
  c->r[0]=c->lr; // 800C2584
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C2588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C258C
  c->r[31]=c->r[3]|c->r[3]; // 800C2590
  c->r[0]=R8(c->r[13]+0xFFFFA440u); // 800C2594
  cmps(c,0,(int32_t)c->r[0],0); // 800C2598
  if (crb(c,2)) { goto L_800C25B8; } // 800C259C
  c->r[3]=0u+0x802A0000u; // 800C25A0
  c->r[4]=0u+0x00000034u; // 800C25A4
  c->r[3]=c->r[3]+0xFFFFF858u; // 800C25A8
  c->r[5]=c->r[13]+0xFFFF8EA0u; // 800C25AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C25B0
  c->lr=0x800C25B8u; f_800C84E0(c); // 800C25B4
L_800C25B8:;
  c->r[3]=0u+0x802F0000u; // 800C25B8
  c->r[0]=0u+0x00000001u; // 800C25BC
  c->r[3]=c->r[3]+0xFFFF9308u; // 800C25C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C25C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C25C8
  c->lr=0x800C25D0u; f_800CCD50(c); // 800C25CC
  c->r[3]=0u+0xF0000000u; // 800C25D0
  c->lr=0x800C25D8u; f_800FE270(c); // 800C25D4
  c->r[3]=c->r[31]|c->r[31]; // 800C25D8
  c->lr=0x800C25E0u; f_800CD630(c); // 800C25DC
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C25E0
  cmps(c,0,(int32_t)c->r[0],0); // 800C25E4
  if (crb(c,2)) { goto L_800C25F4; } // 800C25E8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C25EC
  c->lr=0x800C25F4u; f_800CCE30(c); // 800C25F0
L_800C25F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C25F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C25F8
  c->lr=c->r[0]; // 800C25FC
  c->r[1]=c->r[1]+0x00000020u; // 800C2600
  return; // 800C2604
}

// fn_800C2610
void f_800C2610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2610
  c->r[0]=c->lr; // 800C2614
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2618
  c->r[0]=R8(c->r[13]+0xFFFFA440u); // 800C261C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2620
  if (crb(c,2)) { goto L_800C2640; } // 800C2624
  c->r[3]=0u+0x802A0000u; // 800C2628
  c->r[4]=0u+0x00000040u; // 800C262C
  c->r[3]=c->r[3]+0xFFFFF858u; // 800C2630
  c->r[5]=c->r[13]+0xFFFF8EA0u; // 800C2634
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C2638
  c->lr=0x800C2640u; f_800C84E0(c); // 800C263C
L_800C2640:;
  c->r[3]=0u+0x802F0000u; // 800C2640
  c->r[0]=0u+0x00000001u; // 800C2644
  c->r[3]=c->r[3]+0xFFFF9308u; // 800C2648
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C264C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C2650
  c->lr=0x800C2658u; f_800CCD50(c); // 800C2654
  c->lr=0x800C265Cu; f_800CD9A0(c); // 800C2658
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C265C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2660
  if (crb(c,2)) { goto L_800C2670; } // 800C2664
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C2668
  c->lr=0x800C2670u; f_800CCE30(c); // 800C266C
L_800C2670:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2670
  c->lr=c->r[0]; // 800C2674
  c->r[1]=c->r[1]+0x00000010u; // 800C2678
  return; // 800C267C
}

// fn_800C2680
void f_800C2680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2680
  c->r[0]=c->lr; // 800C2684
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2688
  c->r[0]=R8(c->r[13]+0xFFFFA440u); // 800C268C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2690
  if (crb(c,2)) { goto L_800C26B0; } // 800C2694
  c->r[3]=0u+0x802A0000u; // 800C2698
  c->r[4]=0u+0x0000004Bu; // 800C269C
  c->r[3]=c->r[3]+0xFFFFF858u; // 800C26A0
  c->r[5]=c->r[13]+0xFFFF8EA0u; // 800C26A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C26A8
  c->lr=0x800C26B0u; f_800C84E0(c); // 800C26AC
L_800C26B0:;
  c->r[3]=0u+0x802F0000u; // 800C26B0
  c->r[0]=0u+0x00000001u; // 800C26B4
  c->r[3]=c->r[3]+0xFFFF9308u; // 800C26B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C26BC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C26C0
  c->lr=0x800C26C8u; f_800CCD50(c); // 800C26C4
  c->lr=0x800C26CCu; f_800CD510(c); // 800C26C8
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C26CC
  cmps(c,0,(int32_t)c->r[0],0); // 800C26D0
  if (crb(c,2)) { goto L_800C26E0; } // 800C26D4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C26D8
  c->lr=0x800C26E0u; f_800CCE30(c); // 800C26DC
L_800C26E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C26E0
  c->lr=c->r[0]; // 800C26E4
  c->r[1]=c->r[1]+0x00000010u; // 800C26E8
  return; // 800C26EC
}

// fn_800C26F0
void f_800C26F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C26F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C26F4
  if (!crb(c,2)) { goto L_800C2704; } // 800C26F8
  c->r[3]=c->r[3]+0x00000001u; // 800C26FC
  goto L_800C2708; // 800C2700
L_800C2704:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C2704
L_800C2708:;
  f_800D3690(c); return; // 800C2708
}

// fn_800C2710
void f_800C2710(Ctx* __restrict c) {
  c->r[3]=0u+0x802F0000u; // 800C2710
  c->r[3]=c->r[3]+0xFFFF9308u; // 800C2714
  f_800CCD10(c); return; // 800C2718
}

// fn_800C2720
void f_800C2720(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2720
  c->r[0]=c->lr; // 800C2724
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C2728
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C272C
  c->r[31]=c->r[3]|c->r[3]; // 800C2730
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C2734
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C2738
  W32(c->r[1]+0x00000020u,c->r[28]); // 800C273C
  c->r[28]=c->r[4]|c->r[4]; // 800C2740
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C2744
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 800C2748
  if (!crb(c,2)) { goto L_800C275C; } // 800C274C
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C2750
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800C2754
  goto L_800C2760; // 800C2758
L_800C275C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C275C
L_800C2760:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C2760
  if (!crb(c,2)) { goto L_800C27D4; } // 800C2764
  cmps(c,0,(int32_t)c->r[5],0); // 800C2768
  if (!crb(c,2)) { goto L_800C278C; } // 800C276C
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C2770
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2774
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C2778
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C277C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C2780
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C2784
  goto L_800C28EC; // 800C2788
L_800C278C:;
  c->r[0]=0u+0x00000000u; // 800C278C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C2790
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C2794
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C2798
  c->r[3]=c->r[31]|c->r[31]; // 800C279C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800C27A0
  c->lr=0x800C27A8u; f_80007C00(c); // 800C27A4
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 800C27A8
  c->r[3]=c->r[31]|c->r[31]; // 800C27AC
  W8(c->r[1]+0x00000018u,c->r[0]); // 800C27B0
  c->r[8]=c->r[1]+0x00000018u; // 800C27B4
  c->r[4]=0u+0x00000000u; // 800C27B8
  c->r[5]=0u+0x00000000u; // 800C27BC
  c->r[6]=R32(c->r[28]+0x00000008u); // 800C27C0
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C27C4
  c->r[7]=c->r[6]+c->r[0]; // 800C27C8
  c->lr=0x800C27D0u; f_80007DC0(c); // 800C27CC
  goto L_800C28EC; // 800C27D0
L_800C27D4:;
  c->r[30]=c->r[13]+0xFFFF8EA8u; // 800C27D4
  c->r[3]=c->r[30]|c->r[30]; // 800C27D8
  c->lr=0x800C27E0u; f_80216B70(c); // 800C27DC
  c->r[6]=c->r[3]|c->r[3]; // 800C27E0
  c->r[3]=c->r[28]|c->r[28]; // 800C27E4
  c->r[4]=c->r[30]|c->r[30]; // 800C27E8
  c->r[5]=0u+0x00000000u; // 800C27EC
  c->lr=0x800C27F4u; f_800BD270(c); // 800C27F0
  c->r[30]=c->r[13]+0xFFFF8EA8u; // 800C27F4
  c->r[29]=c->r[3]|c->r[3]; // 800C27F8
  c->r[3]=c->r[30]|c->r[30]; // 800C27FC
  c->lr=0x800C2804u; f_80216B70(c); // 800C2800
  c->r[6]=c->r[3]|c->r[3]; // 800C2804
  c->r[3]=c->r[28]|c->r[28]; // 800C2808
  c->r[4]=c->r[30]|c->r[30]; // 800C280C
  c->r[5]=0u+0xFFFFFFFFu; // 800C2810
  c->lr=0x800C2818u; f_800BD310(c); // 800C2814
  c->r[0]=c->r[29]+0x00010000u; // 800C2818
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800C281C
  if (!crb(c,2)) { goto L_800C2878; } // 800C2820
  c->r[0]=0u+0x00000000u; // 800C2824
  c->r[30]=c->r[13]+0xFFFF8EACu; // 800C2828
  W32(c->r[31]+0x00000000u,c->r[0]); // 800C282C
  c->r[3]=c->r[30]|c->r[30]; // 800C2830
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C2834
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2838
  c->lr=0x800C2840u; f_80216B70(c); // 800C283C
  c->r[29]=c->r[3]|c->r[3]; // 800C2840
  c->r[3]=c->r[31]|c->r[31]; // 800C2844
  c->r[4]=c->r[29]|c->r[29]; // 800C2848
  c->lr=0x800C2850u; f_80007C00(c); // 800C284C
  c->r[0]=R8(c->r[1]+0x00000014u); // 800C2850
  c->r[3]=c->r[31]|c->r[31]; // 800C2854
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C2858
  c->r[6]=c->r[30]|c->r[30]; // 800C285C
  c->r[7]=c->r[30]+c->r[29]; // 800C2860
  c->r[8]=c->r[1]+0x00000010u; // 800C2864
  c->r[4]=0u+0x00000000u; // 800C2868
  c->r[5]=0u+0x00000000u; // 800C286C
  c->lr=0x800C2874u; f_80007DC0(c); // 800C2870
  goto L_800C28EC; // 800C2874
L_800C2878:;
  cmpu(c,0,c->r[29],c->r[3]); // 800C2878
  if (!crb(c,1)) { goto L_800C28D4; } // 800C287C
  c->r[0]=0u+0x00000000u; // 800C2880
  c->r[30]=c->r[13]+0xFFFF8EACu; // 800C2884
  W32(c->r[31]+0x00000000u,c->r[0]); // 800C2888
  c->r[3]=c->r[30]|c->r[30]; // 800C288C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C2890
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2894
  c->lr=0x800C289Cu; f_80216B70(c); // 800C2898
  c->r[29]=c->r[3]|c->r[3]; // 800C289C
  c->r[3]=c->r[31]|c->r[31]; // 800C28A0
  c->r[4]=c->r[29]|c->r[29]; // 800C28A4
  c->lr=0x800C28ACu; f_80007C00(c); // 800C28A8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C28AC
  c->r[3]=c->r[31]|c->r[31]; // 800C28B0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C28B4
  c->r[6]=c->r[30]|c->r[30]; // 800C28B8
  c->r[7]=c->r[30]+c->r[29]; // 800C28BC
  c->r[8]=c->r[1]+0x00000008u; // 800C28C0
  c->r[4]=0u+0x00000000u; // 800C28C4
  c->r[5]=0u+0x00000000u; // 800C28C8
  c->lr=0x800C28D0u; f_80007DC0(c); // 800C28CC
  goto L_800C28EC; // 800C28D0
L_800C28D4:;
  c->r[6]=c->r[3]-c->r[29]; // 800C28D4
  c->r[3]=c->r[31]|c->r[31]; // 800C28D8
  c->r[4]=c->r[28]|c->r[28]; // 800C28DC
  c->r[5]=c->r[29]|c->r[29]; // 800C28E0
  c->r[6]=c->r[6]+0x00000001u; // 800C28E4
  c->lr=0x800C28ECu; f_800710C0(c); // 800C28E8
L_800C28EC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C28EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C28F0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C28F4
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C28F8
  c->r[28]=R32(c->r[1]+0x00000020u); // 800C28FC
  c->lr=c->r[0]; // 800C2900
  c->r[1]=c->r[1]+0x00000030u; // 800C2904
  return; // 800C2908
}

// fn_800C2910
void f_800C2910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2910
  c->r[0]=c->lr; // 800C2914
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2918
  c->r[11]=c->r[1]+0x00000050u; // 800C291C
  c->lr=0x800C2924u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2920
  c->r[0]=0u+0x00000000u; // 800C2924
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C2928
  c->r[29]=c->r[3]|c->r[3]; // 800C292C
  c->r[30]=c->r[4]|c->r[4]; // 800C2930
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C2934
  c->r[24]=c->r[5]|c->r[5]; // 800C2938
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C293C
  W8(c->r[1]+0x00000020u,c->r[5]); // 800C2940
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C2944
  c->r[4]=rotl(c->r[0],0)&0x0000007Fu; // 800C2948
  c->r[0]=R8(c->r[1]+0x00000018u); // 800C294C
  c->r[3]=c->r[29]|c->r[29]; // 800C2950
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800C2954
  c->r[6]=c->r[1]+0x00000020u; // 800C2958
  c->r[7]=c->r[1]+0x00000021u; // 800C295C
  c->r[8]=c->r[1]+0x0000001Cu; // 800C2960
  c->r[5]=0u+0x00000000u; // 800C2964
  c->lr=0x800C296Cu; f_80007DC0(c); // 800C2968
  c->r[3]=0u+0x80230000u; // 800C296C
  c->r[0]=rotl(c->r[24],30)&0x0000003Cu; // 800C2970
  c->r[3]=c->r[3]+0x000019B0u; // 800C2974
  c->r[28]=R8(c->r[1]+0x0000000Cu); // 800C2978
  c->r[31]=R32(c->r[3]+c->r[0]); // 800C297C
  c->r[26]=0u+0x00000001u; // 800C2980
  c->r[27]=0u+0x802A0000u; // 800C2984
  goto L_800C2A7C; // 800C2988
L_800C298C:;
  c->r[4]=c->r[30]|c->r[30]; // 800C298C
  c->r[3]=c->r[1]+0x00000008u; // 800C2990
  c->r[24]=0u+0xFFFFFFFFu; // 800C2994
  c->r[5]=0u+0x00000001u; // 800C2998
  c->lr=0x800C29A0u; f_800C44C0(c); // 800C299C
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C29A0
  cmps(c,0,(int32_t)c->r[0],0); // 800C29A4
  if (crb(c,2)) { goto L_800C2A40; } // 800C29A8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C29AC
  c->r[25]=0u+0x00000000u; // 800C29B0
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C29B4
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C29B8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C29BC
  cmpu(c,0,c->r[4],c->r[0]); // 800C29C0
  if (!crb(c,0)) { goto L_800C29D8; } // 800C29C4
  c->r[0]=c->r[4]+0x00000001u; // 800C29C8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C29CC
  c->r[3]=R8(c->r[4]+0x00000000u); // 800C29D0
  goto L_800C29E8; // 800C29D4
L_800C29D8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C29D8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C29DC
  c->ctr=c->r[12]; // 800C29E0
  if (true) { c->lr=0x800C29E8u; dispatch(c,c->ctr); } // 800C29E4
L_800C29E8:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C29E8
  c->r[24]=c->r[3]|c->r[3]; // 800C29EC
  if (crb(c,2)) { goto L_800C29FC; } // 800C29F0
  W32(c->r[30]+0x00000004u,c->r[26]); // 800C29F4
  goto L_800C2A00; // 800C29F8
L_800C29FC:;
  c->r[25]=0u+0x00000006u; // 800C29FC
L_800C2A00:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C2A00
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C2A04
  c->r[0]=c->r[0]|c->r[25]; // 800C2A08
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C2A0C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C2A10
  cmps(c,0,(int32_t)c->r[0],0); // 800C2A14
  if (!crb(c,2)) { goto L_800C2A28; } // 800C2A18
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C2A1C
  c->r[0]=c->r[0]|0x00000001u; // 800C2A20
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C2A24
L_800C2A28:;
  c->r[0]=R8(c->r[3]+0x00000033u); // 800C2A28
  c->r[4]=R8(c->r[3]+0x00000032u); // 800C2A2C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800C2A30
  if (crb(c,2)) { goto L_800C2A40; } // 800C2A34
  c->r[4]=c->r[27]+0xFFFFFA34u; // 800C2A38
  c->lr=0x800C2A40u; f_8022893C(c); // 800C2A3C
L_800C2A40:;
  W8(c->r[1]+0x00000014u,c->r[24]); // 800C2A40
  c->r[0]=R32(c->r[29]+0x00000000u); // 800C2A44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C2A48
  if (!crb(c,2)) { goto L_800C2A5C; } // 800C2A4C
  c->r[0]=R8(c->r[29]+0x00000000u); // 800C2A50
  c->r[4]=rotl(c->r[0],0)&0x0000007Fu; // 800C2A54
  goto L_800C2A60; // 800C2A58
L_800C2A5C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800C2A5C
L_800C2A60:;
  W8(c->r[1]+0x00000010u,c->r[28]); // 800C2A60
  c->r[3]=c->r[29]|c->r[29]; // 800C2A64
  c->r[6]=c->r[1]+0x00000014u; // 800C2A68
  c->r[7]=c->r[1]+0x00000015u; // 800C2A6C
  c->r[8]=c->r[1]+0x00000010u; // 800C2A70
  c->r[5]=0u+0x00000000u; // 800C2A74
  c->lr=0x800C2A7Cu; f_80007DC0(c); // 800C2A78
L_800C2A7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C2A7C
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800C2A80
  if (!crb(c,2)) { IRQCHK(c); goto L_800C298C; } // 800C2A84
  c->r[11]=c->r[1]+0x00000050u; // 800C2A88
  c->lr=0x800C2A90u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2A8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2A90
  c->lr=c->r[0]; // 800C2A94
  c->r[1]=c->r[1]+0x00000050u; // 800C2A98
  return; // 800C2A9C
}

// fn_800C2AA0
void f_800C2AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2AA0
  c->r[0]=c->lr; // 800C2AA4
  W32(c->r[1]+0x00000184u,c->r[0]); // 800C2AA8
  c->r[11]=c->r[1]+0x00000180u; // 800C2AAC
  c->lr=0x800C2AB4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2AB0
  c->r[25]=c->r[3]|c->r[3]; // 800C2AB4
  c->r[3]=c->r[4]|c->r[4]; // 800C2AB8
  c->r[26]=c->r[5]|c->r[5]; // 800C2ABC
  c->lr=0x800C2AC4u; f_80074180(c); // 800C2AC0
  c->r[5]=c->r[3]|c->r[3]; // 800C2AC4
  c->r[3]=c->r[1]+0x000000D8u; // 800C2AC8
  c->r[4]=0u+0x00000001u; // 800C2ACC
  c->lr=0x800C2AD4u; f_800C2FC0(c); // 800C2AD0
  c->r[3]=c->r[25]|c->r[25]; // 800C2AD4
  c->lr=0x800C2ADCu; f_800C34A0(c); // 800C2AD8
  c->r[3]=c->r[1]+0x000000CCu; // 800C2ADC
  c->lr=0x800C2AE4u; f_8007D150(c); // 800C2AE0
  c->r[3]=c->r[1]+0x000000C0u; // 800C2AE4
  c->lr=0x800C2AECu; f_8009DBC0(c); // 800C2AE8
  c->r[28]=0u+0x00000000u; // 800C2AEC
  W32(c->r[1]+0x00000014u,c->r[28]); // 800C2AF0
  c->r[27]=0u+0x00000000u; // 800C2AF4
  c->r[30]=0u+0x802A0000u; // 800C2AF8
  c->r[31]=0u+0x802A0000u; // 800C2AFC
  goto L_800C2E78; // 800C2B00
L_800C2B04:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C2B04
  if (crb(c,2)) { goto L_800C2B20; } // 800C2B08
  cmps(c,0,(int32_t)c->r[27],2); // 800C2B0C
  if (crb(c,2)) { goto L_800C2C7C; } // 800C2B10
  cmps(c,0,(int32_t)c->r[27],1); // 800C2B14
  if (crb(c,2)) { goto L_800C2DA8; } // 800C2B18
  goto L_800C2E78; // 800C2B1C
L_800C2B20:;
  c->r[3]=c->r[1]+0x000000D8u; // 800C2B20
  c->lr=0x800C2B28u; f_800C3F40(c); // 800C2B24
  cmps(c,0,(int32_t)c->r[3],13); // 800C2B28
  if (crb(c,2)) { goto L_800C2E78; } // 800C2B2C
  cmps(c,0,(int32_t)c->r[3],-1); // 800C2B30
  if (crb(c,2)) { goto L_800C2B64; } // 800C2B34
  cmps(c,0,(int32_t)c->r[3],10); // 800C2B38
  if (crb(c,2)) { goto L_800C2B64; } // 800C2B3C
  cmps(c,0,(int32_t)c->r[3],44); // 800C2B40
  if (crb(c,2)) { goto L_800C2BF4; } // 800C2B44
  cmps(c,0,(int32_t)c->r[3],32); // 800C2B48
  if (crb(c,2)) { goto L_800C2E78; } // 800C2B4C
  cmps(c,0,(int32_t)c->r[3],34); // 800C2B50
  if (crb(c,2)) { goto L_800C2C40; } // 800C2B54
  cmps(c,0,(int32_t)c->r[3],39); // 800C2B58
  if (crb(c,2)) { goto L_800C2C40; } // 800C2B5C
  goto L_800C2C4C; // 800C2B60
L_800C2B64:;
  c->r[3]=c->r[1]+0x000000C0u; // 800C2B64
  c->lr=0x800C2B6Cu; f_800B4570(c); // 800C2B68
  cmps(c,0,(int32_t)c->r[3],0); // 800C2B6C
  if (!crb(c,2)) { goto L_800C2BB0; } // 800C2B70
  c->r[3]=c->r[1]+0x000000B4u; // 800C2B74
  c->r[4]=c->r[1]+0x000000C0u; // 800C2B78
  c->lr=0x800C2B80u; f_800835D0(c); // 800C2B7C
  c->r[3]=c->r[1]+0x000000A8u; // 800C2B80
  c->r[4]=c->r[1]+0x000000B4u; // 800C2B84
  c->lr=0x800C2B8Cu; f_800C2720(c); // 800C2B88
  c->r[3]=c->r[1]+0x000000CCu; // 800C2B8C
  c->r[4]=c->r[1]+0x000000A8u; // 800C2B90
  c->lr=0x800C2B98u; f_800B3B80(c); // 800C2B94
  c->r[3]=c->r[1]+0x000000A8u; // 800C2B98
  c->r[4]=0u+0xFFFFFFFFu; // 800C2B9C
  c->lr=0x800C2BA4u; f_80007B90(c); // 800C2BA0
  c->r[3]=c->r[1]+0x000000B4u; // 800C2BA4
  c->r[4]=0u+0xFFFFFFFFu; // 800C2BA8
  c->lr=0x800C2BB0u; f_80007B90(c); // 800C2BAC
L_800C2BB0:;
  c->r[3]=c->r[1]+0x000000C0u; // 800C2BB0
  c->r[4]=c->r[13]+0xFFFF8EACu; // 800C2BB4
  c->lr=0x800C2BBCu; f_800B44A0(c); // 800C2BB8
  c->r[3]=c->r[1]+0x000000CCu; // 800C2BBC
  c->lr=0x800C2BC4u; f_8007D220(c); // 800C2BC0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C2BC4
  c->r[3]=c->r[1]+0x00000010u; // 800C2BC8
  c->r[4]=c->r[1]+0x00000014u; // 800C2BCC
  c->lr=0x800C2BD4u; f_800C3480(c); // 800C2BD0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C2BD4
  c->r[3]=c->r[25]|c->r[25]; // 800C2BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2BDC
  c->r[4]=c->r[1]+0x000000CCu; // 800C2BE0
  c->lr=0x800C2BE8u; f_800C34C0(c); // 800C2BE4
  c->r[3]=c->r[1]+0x000000CCu; // 800C2BE8
  c->lr=0x800C2BF0u; f_800C3B40(c); // 800C2BEC
  goto L_800C2E78; // 800C2BF0
L_800C2BF4:;
  c->r[3]=c->r[1]+0x0000009Cu; // 800C2BF4
  c->r[4]=c->r[1]+0x000000C0u; // 800C2BF8
  c->lr=0x800C2C00u; f_800835D0(c); // 800C2BFC
  c->r[3]=c->r[1]+0x00000090u; // 800C2C00
  c->r[4]=c->r[1]+0x0000009Cu; // 800C2C04
  c->lr=0x800C2C0Cu; f_800C2720(c); // 800C2C08
  c->r[3]=c->r[1]+0x000000CCu; // 800C2C0C
  c->r[4]=c->r[1]+0x00000090u; // 800C2C10
  c->lr=0x800C2C18u; f_800B3B80(c); // 800C2C14
  c->r[3]=c->r[1]+0x00000090u; // 800C2C18
  c->r[4]=0u+0xFFFFFFFFu; // 800C2C1C
  c->lr=0x800C2C24u; f_80007B90(c); // 800C2C20
  c->r[3]=c->r[1]+0x0000009Cu; // 800C2C24
  c->r[4]=0u+0xFFFFFFFFu; // 800C2C28
  c->lr=0x800C2C30u; f_80007B90(c); // 800C2C2C
  c->r[3]=c->r[1]+0x000000C0u; // 800C2C30
  c->r[4]=c->r[13]+0xFFFF8EACu; // 800C2C34
  c->lr=0x800C2C3Cu; f_800B44A0(c); // 800C2C38
  goto L_800C2E78; // 800C2C3C
L_800C2C40:;
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C2C40
  c->r[27]=0u+0x00000001u; // 800C2C44
  goto L_800C2E78; // 800C2C48
L_800C2C4C:;
  c->r[5]=c->r[3]|c->r[3]; // 800C2C4C
  c->r[3]=c->r[1]+0x00000084u; // 800C2C50
  c->r[4]=c->r[1]+0x000000D8u; // 800C2C54
  c->lr=0x800C2C5Cu; f_800C2910(c); // 800C2C58
  c->r[3]=c->r[1]+0x000000C0u; // 800C2C5C
  c->r[4]=c->r[1]+0x00000084u; // 800C2C60
  c->lr=0x800C2C68u; f_800B1820(c); // 800C2C64
  c->r[3]=c->r[1]+0x00000084u; // 800C2C68
  c->r[4]=0u+0xFFFFFFFFu; // 800C2C6C
  c->lr=0x800C2C74u; f_80007B90(c); // 800C2C70
  c->r[27]=0u+0x00000002u; // 800C2C74
  goto L_800C2E78; // 800C2C78
L_800C2C7C:;
  c->r[3]=c->r[1]+0x000000D8u; // 800C2C7C
  c->lr=0x800C2C84u; f_800C3F40(c); // 800C2C80
  cmps(c,0,(int32_t)c->r[3],13); // 800C2C84
  if (crb(c,2)) { goto L_800C2E78; } // 800C2C88
  cmps(c,0,(int32_t)c->r[3],10); // 800C2C8C
  if (crb(c,2)) { goto L_800C2CA8; } // 800C2C90
  cmps(c,0,(int32_t)c->r[3],-1); // 800C2C94
  if (crb(c,2)) { goto L_800C2CA8; } // 800C2C98
  cmps(c,0,(int32_t)c->r[3],44); // 800C2C9C
  if (crb(c,2)) { goto L_800C2D2C; } // 800C2CA0
  goto L_800C2D7C; // 800C2CA4
L_800C2CA8:;
  c->r[3]=c->r[1]+0x00000078u; // 800C2CA8
  c->r[4]=c->r[1]+0x000000C0u; // 800C2CAC
  c->lr=0x800C2CB4u; f_800835D0(c); // 800C2CB0
  c->r[3]=c->r[1]+0x0000006Cu; // 800C2CB4
  c->r[4]=c->r[1]+0x00000078u; // 800C2CB8
  c->lr=0x800C2CC0u; f_800C2720(c); // 800C2CBC
  c->r[3]=c->r[1]+0x000000CCu; // 800C2CC0
  c->r[4]=c->r[1]+0x0000006Cu; // 800C2CC4
  c->lr=0x800C2CCCu; f_800B3B80(c); // 800C2CC8
  c->r[3]=c->r[1]+0x0000006Cu; // 800C2CCC
  c->r[4]=0u+0xFFFFFFFFu; // 800C2CD0
  c->lr=0x800C2CD8u; f_80007B90(c); // 800C2CD4
  c->r[3]=c->r[1]+0x00000078u; // 800C2CD8
  c->r[4]=0u+0xFFFFFFFFu; // 800C2CDC
  c->lr=0x800C2CE4u; f_80007B90(c); // 800C2CE0
  c->r[3]=c->r[1]+0x000000C0u; // 800C2CE4
  c->r[4]=c->r[13]+0xFFFF8EACu; // 800C2CE8
  c->lr=0x800C2CF0u; f_800B44A0(c); // 800C2CEC
  c->r[3]=c->r[1]+0x000000CCu; // 800C2CF0
  c->lr=0x800C2CF8u; f_8007D220(c); // 800C2CF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C2CF8
  c->r[3]=c->r[1]+0x0000000Cu; // 800C2CFC
  c->r[4]=c->r[1]+0x00000014u; // 800C2D00
  c->lr=0x800C2D08u; f_800C3480(c); // 800C2D04
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C2D08
  c->r[3]=c->r[25]|c->r[25]; // 800C2D0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2D10
  c->r[4]=c->r[1]+0x000000CCu; // 800C2D14
  c->lr=0x800C2D1Cu; f_800C34C0(c); // 800C2D18
  c->r[3]=c->r[1]+0x000000CCu; // 800C2D1C
  c->lr=0x800C2D24u; f_800C3B40(c); // 800C2D20
  c->r[27]=0u+0x00000000u; // 800C2D24
  goto L_800C2E78; // 800C2D28
L_800C2D2C:;
  c->r[3]=c->r[1]+0x00000060u; // 800C2D2C
  c->r[4]=c->r[1]+0x000000C0u; // 800C2D30
  c->r[27]=0u+0x00000000u; // 800C2D34
  c->lr=0x800C2D3Cu; f_800835D0(c); // 800C2D38
  c->r[3]=c->r[1]+0x00000054u; // 800C2D3C
  c->r[4]=c->r[1]+0x00000060u; // 800C2D40
  c->lr=0x800C2D48u; f_800C2720(c); // 800C2D44
  c->r[3]=c->r[1]+0x000000CCu; // 800C2D48
  c->r[4]=c->r[1]+0x00000054u; // 800C2D4C
  c->lr=0x800C2D54u; f_800B3B80(c); // 800C2D50
  c->r[3]=c->r[1]+0x00000054u; // 800C2D54
  c->r[4]=0u+0xFFFFFFFFu; // 800C2D58
  c->lr=0x800C2D60u; f_80007B90(c); // 800C2D5C
  c->r[3]=c->r[1]+0x00000060u; // 800C2D60
  c->r[4]=0u+0xFFFFFFFFu; // 800C2D64
  c->lr=0x800C2D6Cu; f_80007B90(c); // 800C2D68
  c->r[3]=c->r[1]+0x000000C0u; // 800C2D6C
  c->r[4]=c->r[13]+0xFFFF8EACu; // 800C2D70
  c->lr=0x800C2D78u; f_800B44A0(c); // 800C2D74
  goto L_800C2E78; // 800C2D78
L_800C2D7C:;
  c->r[5]=c->r[3]|c->r[3]; // 800C2D7C
  c->r[3]=c->r[1]+0x00000048u; // 800C2D80
  c->r[4]=c->r[1]+0x000000D8u; // 800C2D84
  c->lr=0x800C2D8Cu; f_800C2910(c); // 800C2D88
  c->r[3]=c->r[1]+0x000000C0u; // 800C2D8C
  c->r[4]=c->r[1]+0x00000048u; // 800C2D90
  c->lr=0x800C2D98u; f_800B1820(c); // 800C2D94
  c->r[3]=c->r[1]+0x00000048u; // 800C2D98
  c->r[4]=0u+0xFFFFFFFFu; // 800C2D9C
  c->lr=0x800C2DA4u; f_80007B90(c); // 800C2DA0
  goto L_800C2E78; // 800C2DA4
L_800C2DA8:;
  c->r[3]=c->r[1]+0x000000D8u; // 800C2DA8
  c->lr=0x800C2DB0u; f_800C3F40(c); // 800C2DAC
  cmps(c,0,(int32_t)c->r[3],13); // 800C2DB0
  c->r[29]=c->r[3]|c->r[3]; // 800C2DB4
  if (crb(c,2)) { goto L_800C2E78; } // 800C2DB8
  cmps(c,0,(int32_t)c->r[3],34); // 800C2DBC
  if (crb(c,2)) { goto L_800C2DD8; } // 800C2DC0
  cmps(c,0,(int32_t)c->r[3],39); // 800C2DC4
  if (crb(c,2)) { goto L_800C2DD8; } // 800C2DC8
  cmps(c,0,(int32_t)c->r[3],-1); // 800C2DCC
  if (crb(c,2)) { goto L_800C2E20; } // 800C2DD0
  goto L_800C2E50; // 800C2DD4
L_800C2DD8:;
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C2DD8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 800C2DDC
  if (!crb(c,2)) { goto L_800C2E14; } // 800C2DE0
  c->r[3]=c->r[1]+0x000000D8u; // 800C2DE4
  c->lr=0x800C2DECu; f_800C4090(c); // 800C2DE8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800C2DEC
  if (!crb(c,2)) { goto L_800C2E0C; } // 800C2DF0
  c->r[3]=c->r[1]+0x000000D8u; // 800C2DF4
  c->lr=0x800C2DFCu; f_800C3F40(c); // 800C2DF8
  c->r[3]=c->r[1]+0x000000C0u; // 800C2DFC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 800C2E00
  c->lr=0x800C2E08u; f_800B45E0(c); // 800C2E04
  goto L_800C2E78; // 800C2E08
L_800C2E0C:;
  c->r[27]=0u+0x00000000u; // 800C2E0C
  goto L_800C2E78; // 800C2E10
L_800C2E14:;
  c->r[3]=c->r[1]+0x000000C0u; // 800C2E14
  c->lr=0x800C2E1Cu; f_800B45E0(c); // 800C2E18
  goto L_800C2E78; // 800C2E1C
L_800C2E20:;
  c->r[3]=c->r[25]|c->r[25]; // 800C2E20
  c->lr=0x800C2E28u; f_800C3BB0(c); // 800C2E24
  c->r[4]=c->r[3]|c->r[3]; // 800C2E28
  c->r[3]=c->r[30]+0xFFFFF868u; // 800C2E2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C2E30
  c->lr=0x800C2E38u; f_800C8450(c); // 800C2E34
  c->r[5]=c->r[31]+0xFFFFF880u; // 800C2E38
  c->r[3]=c->r[13]+0xFFFF8EB0u; // 800C2E3C
  c->r[4]=0u+0x000000A2u; // 800C2E40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C2E44
  c->lr=0x800C2E4Cu; f_800C84E0(c); // 800C2E48
  goto L_800C2E78; // 800C2E4C
L_800C2E50:;
  c->r[5]=c->r[29]|c->r[29]; // 800C2E50
  c->r[3]=c->r[1]+0x0000003Cu; // 800C2E54
  c->r[4]=c->r[1]+0x000000D8u; // 800C2E58
  c->lr=0x800C2E60u; f_800C2910(c); // 800C2E5C
  c->r[3]=c->r[1]+0x000000C0u; // 800C2E60
  c->r[4]=c->r[1]+0x0000003Cu; // 800C2E64
  c->lr=0x800C2E6Cu; f_800B1820(c); // 800C2E68
  c->r[3]=c->r[1]+0x0000003Cu; // 800C2E6C
  c->r[4]=0u+0xFFFFFFFFu; // 800C2E70
  c->lr=0x800C2E78u; f_80007B90(c); // 800C2E74
L_800C2E78:;
  c->r[3]=R32(c->r[1]+0x000000D8u); // 800C2E78
  c->lr=0x800C2E80u; f_800C3460(c); // 800C2E7C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2E80
  if (!crb(c,2)) { IRQCHK(c); goto L_800C2B04; } // 800C2E84
  c->r[3]=c->r[1]+0x000000C0u; // 800C2E88
  c->lr=0x800C2E90u; f_800B4570(c); // 800C2E8C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2E90
  if (!crb(c,2)) { goto L_800C2ED4; } // 800C2E94
  c->r[3]=c->r[1]+0x00000030u; // 800C2E98
  c->r[4]=c->r[1]+0x000000C0u; // 800C2E9C
  c->lr=0x800C2EA4u; f_800835D0(c); // 800C2EA0
  c->r[3]=c->r[1]+0x00000024u; // 800C2EA4
  c->r[4]=c->r[1]+0x00000030u; // 800C2EA8
  c->lr=0x800C2EB0u; f_800C2720(c); // 800C2EAC
  c->r[3]=c->r[1]+0x000000CCu; // 800C2EB0
  c->r[4]=c->r[1]+0x00000024u; // 800C2EB4
  c->lr=0x800C2EBCu; f_800B3B80(c); // 800C2EB8
  c->r[3]=c->r[1]+0x00000024u; // 800C2EBC
  c->r[4]=0u+0xFFFFFFFFu; // 800C2EC0
  c->lr=0x800C2EC8u; f_80007B90(c); // 800C2EC4
  c->r[3]=c->r[1]+0x00000030u; // 800C2EC8
  c->r[4]=0u+0xFFFFFFFFu; // 800C2ECC
  c->lr=0x800C2ED4u; f_80007B90(c); // 800C2ED0
L_800C2ED4:;
  c->r[3]=c->r[1]+0x000000CCu; // 800C2ED4
  c->lr=0x800C2EDCu; f_800C3BC0(c); // 800C2ED8
  cmps(c,0,(int32_t)c->r[3],0); // 800C2EDC
  if (!crb(c,2)) { goto L_800C2EF0; } // 800C2EE0
  c->r[3]=c->r[25]|c->r[25]; // 800C2EE4
  c->r[4]=c->r[1]+0x000000CCu; // 800C2EE8
  c->lr=0x800C2EF0u; f_800C34C0(c); // 800C2EEC
L_800C2EF0:;
  c->r[3]=c->r[1]+0x000000CCu; // 800C2EF0
  c->lr=0x800C2EF8u; f_8007D220(c); // 800C2EF4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2EF8
  c->r[3]=c->r[1]+0x00000008u; // 800C2EFC
  c->r[4]=c->r[1]+0x00000014u; // 800C2F00
  c->lr=0x800C2F08u; f_800C3480(c); // 800C2F04
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C2F08
  cmps(c,0,(int32_t)c->r[26],0); // 800C2F0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2F10
  if (crb(c,2)) { goto L_800C2F80; } // 800C2F14
  c->r[27]=0u+0x00000000u; // 800C2F18
  goto L_800C2F70; // 800C2F1C
  goto L_800C2F50; // 800C2F20
L_800C2F24:;
  c->r[3]=c->r[1]+0x00000018u; // 800C2F24
  c->r[4]=c->r[13]+0xFFFF8EACu; // 800C2F28
  c->lr=0x800C2F30u; f_8009C810(c); // 800C2F2C
  c->r[3]=c->r[25]|c->r[25]; // 800C2F30
  c->r[4]=c->r[27]|c->r[27]; // 800C2F34
  c->lr=0x800C2F3Cu; f_800C3BD0(c); // 800C2F38
  c->r[4]=c->r[1]+0x00000018u; // 800C2F3C
  c->lr=0x800C2F44u; f_800B3B80(c); // 800C2F40
  c->r[3]=c->r[1]+0x00000018u; // 800C2F44
  c->r[4]=0u+0xFFFFFFFFu; // 800C2F48
  c->lr=0x800C2F50u; f_80007B90(c); // 800C2F4C
L_800C2F50:;
  c->r[3]=c->r[25]|c->r[25]; // 800C2F50
  c->r[4]=c->r[27]|c->r[27]; // 800C2F54
  c->lr=0x800C2F5Cu; f_800C3BD0(c); // 800C2F58
  c->lr=0x800C2F60u; f_8007D220(c); // 800C2F5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2F60
  cmpu(c,0,c->r[3],c->r[0]); // 800C2F64
  if (crb(c,0)) { IRQCHK(c); goto L_800C2F24; } // 800C2F68
  c->r[27]=c->r[27]+0x00000001u; // 800C2F6C
L_800C2F70:;
  c->r[3]=c->r[25]|c->r[25]; // 800C2F70
  c->lr=0x800C2F78u; f_800C3BB0(c); // 800C2F74
  cmpu(c,0,c->r[27],c->r[3]); // 800C2F78
  if (crb(c,0)) { IRQCHK(c); goto L_800C2F50; } // 800C2F7C
L_800C2F80:;
  c->r[3]=c->r[1]+0x000000C0u; // 800C2F80
  c->r[4]=0u+0xFFFFFFFFu; // 800C2F84
  c->lr=0x800C2F8Cu; f_80007B90(c); // 800C2F88
  c->r[3]=c->r[1]+0x000000CCu; // 800C2F8C
  c->r[4]=0u+0xFFFFFFFFu; // 800C2F90
  c->lr=0x800C2F98u; f_80007580(c); // 800C2F94
  c->r[3]=c->r[1]+0x000000D8u; // 800C2F98
  c->r[4]=0u+0xFFFFFFFFu; // 800C2F9C
  c->lr=0x800C2FA4u; f_800C33C0(c); // 800C2FA0
  c->r[11]=c->r[1]+0x00000180u; // 800C2FA4
  c->lr=0x800C2FACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2FA8
  c->r[0]=R32(c->r[1]+0x00000184u); // 800C2FAC
  c->lr=c->r[0]; // 800C2FB0
  c->r[1]=c->r[1]+0x00000180u; // 800C2FB4
  return; // 800C2FB8
}

// fn_800C2FC0
void f_800C2FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2FC0
  c->r[0]=c->lr; // 800C2FC4
  cmps(c,0,(int32_t)c->r[4],0); // 800C2FC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C2FCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C2FD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C2FD4
  c->r[30]=c->r[5]|c->r[5]; // 800C2FD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C2FDC
  c->r[29]=c->r[3]|c->r[3]; // 800C2FE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C2FE4
  if (crb(c,2)) { goto L_800C3000; } // 800C2FE8
  c->r[4]=0u+0x802A0000u; // 800C2FEC
  c->r[5]=c->r[3]+0x00000040u; // 800C2FF0
  c->r[4]=c->r[4]+0xFFFFF934u; // 800C2FF4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C2FF8
  W32(c->r[3]+0x00000040u,c->r[4]); // 800C2FFC
L_800C3000:;
  c->r[6]=0u+0x802A0000u; // 800C3000
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C3004
  c->r[6]=c->r[6]+0xFFFFFA00u; // 800C3008
  W32(c->r[3]+0x00000008u,c->r[6]); // 800C300C
  c->r[0]=c->r[6]+0x0000000Cu; // 800C3010
  c->r[4]=c->r[3]+0x0000000Cu; // 800C3014
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C3018
  c->r[6]=0u+0x00000000u; // 800C301C
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C3020
  c->r[0]=c->r[4]-c->r[5]; // 800C3024
  W32(c->r[5]+0x0000003Cu,c->r[0]); // 800C3028
  c->r[28]=R32(c->r[3]+0x00000000u); // 800C302C
  W32(c->r[3]+0x00000004u,c->r[6]); // 800C3030
  c->r[3]=c->r[28]|c->r[28]; // 800C3034
  c->lr=0x800C303Cu; f_80228BAC(c); // 800C3038
  c->r[0]=0u+0x00000000u; // 800C303C
  W32(c->r[28]+0x00000034u,c->r[0]); // 800C3040
  c->r[4]=c->r[28]|c->r[28]; // 800C3044
  c->r[3]=c->r[1]+0x00000008u; // 800C3048
  c->lr=0x800C3050u; f_800C4490(c); // 800C304C
  c->r[31]=R32(c->r[13]+0xFFFFAF98u); // 800C3050
  cmps(c,0,(int32_t)c->r[31],0); // 800C3054
  if (!crb(c,2)) { goto L_800C306C; } // 800C3058
  c->r[3]=R32(c->r[13]+0xFFFFAF68u); // 800C305C
  c->r[31]=c->r[3]+0x00000001u; // 800C3060
  W32(c->r[13]+0xFFFFAF68u,c->r[31]); // 800C3064
  W32(c->r[13]+0xFFFFAF98u,c->r[31]); // 800C3068
L_800C306C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C306C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C3070
  cmpu(c,0,c->r[31],c->r[0]); // 800C3074
  if (!crb(c,0)) { goto L_800C3090; } // 800C3078
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C307C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800C3080
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C3084
  cmps(c,0,(int32_t)c->r[3],0); // 800C3088
  if (!crb(c,2)) { goto L_800C30EC; } // 800C308C
L_800C3090:;
  c->r[3]=0u+0x00000018u; // 800C3090
  c->lr=0x800C3098u; f_800B98F0(c); // 800C3094
  cmps(c,0,(int32_t)c->r[3],0); // 800C3098
  c->r[4]=c->r[3]|c->r[3]; // 800C309C
  if (crb(c,2)) { goto L_800C30B8; } // 800C30A0
  c->r[4]=0u+0x00000000u; // 800C30A4
  c->r[5]=0u+0x00000000u; // 800C30A8
  c->r[6]=0u+0x00000000u; // 800C30AC
  c->lr=0x800C30B4u; f_802298AC(c); // 800C30B0
  c->r[4]=c->r[3]|c->r[3]; // 800C30B4
L_800C30B8:;
  c->r[5]=R32(c->r[13]+0xFFFFAF98u); // 800C30B8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C30BC
  cmps(c,0,(int32_t)c->r[5],0); // 800C30C0
  if (!crb(c,2)) { goto L_800C30D8; } // 800C30C4
  c->r[5]=R32(c->r[13]+0xFFFFAF68u); // 800C30C8
  c->r[5]=c->r[5]+0x00000001u; // 800C30CC
  W32(c->r[13]+0xFFFFAF68u,c->r[5]); // 800C30D0
  W32(c->r[13]+0xFFFFAF98u,c->r[5]); // 800C30D4
L_800C30D8:;
  c->lr=0x800C30DCu; f_80229030(c); // 800C30D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C30DC
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800C30E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C30E4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C30E8
L_800C30EC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C30EC
  c->r[4]=0u+0x00000020u; // 800C30F0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C30F4
  c->ctr=c->r[12]; // 800C30F8
  if (true) { c->lr=0x800C3100u; dispatch(c,c->ctr); } // 800C30FC
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800C3100
  c->r[31]=c->r[3]|c->r[3]; // 800C3104
  if (crb(c,2)) { goto L_800C311C; } // 800C3108
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C310C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3110
  if (crb(c,2)) { goto L_800C311C; } // 800C3114
  c->lr=0x800C311Cu; f_8022A708(c); // 800C3118
L_800C311C:;
  W8(c->r[28]+0x00000038u,c->r[31]); // 800C311C
  c->r[4]=0u+0x802A0000u; // 800C3120
  c->r[4]=c->r[4]+0xFFFFF8A8u; // 800C3124
  c->r[3]=0u+0x802A0000u; // 800C3128
  W32(c->r[29]+0x00000008u,c->r[4]); // 800C312C
  c->r[0]=c->r[4]+0x0000000Cu; // 800C3130
  c->r[5]=R32(c->r[29]+0x00000000u); // 800C3134
  c->r[4]=c->r[29]+0x00000040u; // 800C3138
  c->r[3]=c->r[3]+0xFFFFF97Cu; // 800C313C
  c->r[31]=c->r[29]+0x0000000Cu; // 800C3140
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C3144
  c->r[0]=0u+0x00000000u; // 800C3148
  c->r[5]=R32(c->r[29]+0x00000000u); // 800C314C
  c->r[4]=c->r[4]-c->r[5]; // 800C3150
  W32(c->r[5]+0x0000003Cu,c->r[4]); // 800C3154
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800C3158
  W32(c->r[29]+0x00000010u,c->r[0]); // 800C315C
  W32(c->r[29]+0x00000014u,c->r[0]); // 800C3160
  W32(c->r[29]+0x00000018u,c->r[0]); // 800C3164
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800C3168
  W32(c->r[29]+0x00000020u,c->r[0]); // 800C316C
  W32(c->r[29]+0x00000024u,c->r[0]); // 800C3170
  c->lr=0x800C3178u; f_80229644(c); // 800C3174
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C3178
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800C317C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C3180
  W32(c->r[31]+0x00000020u,c->r[4]); // 800C3184
  cmps(c,0,(int32_t)c->r[4],0); // 800C3188
  if (crb(c,2)) { goto L_800C319C; } // 800C318C
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C3190
  c->r[0]=c->r[3]+0x00000001u; // 800C3194
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C3198
L_800C319C:;
  c->r[3]=0u+0x802D0000u; // 800C319C
  c->r[7]=0u+0x00000000u; // 800C31A0
  c->r[3]=c->r[3]+0x00005D80u; // 800C31A4
  c->r[5]=0u+0x00000080u; // 800C31A8
  c->r[0]=0u+0x00000002u; // 800C31AC
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C31B0
  c->r[3]=c->r[31]|c->r[31]; // 800C31B4
  c->r[4]=c->r[30]|c->r[30]; // 800C31B8
  W32(c->r[31]+0x00000024u,c->r[5]); // 800C31BC
  c->r[5]=0u+0x00000000u; // 800C31C0
  c->r[6]=0u+0x00000000u; // 800C31C4
  W32(c->r[31]+0x00000028u,c->r[7]); // 800C31C8
  W32(c->r[31]+0x0000002Cu,c->r[7]); // 800C31CC
  W8(c->r[31]+0x00000030u,c->r[0]); // 800C31D0
  c->lr=0x800C31D8u; f_8022A66C(c); // 800C31D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C31D8
  c->r[3]=c->r[29]|c->r[29]; // 800C31DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C31E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C31E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C31E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C31EC
  c->lr=c->r[0]; // 800C31F0
  c->r[1]=c->r[1]+0x00000020u; // 800C31F4
  return; // 800C31F8
}

// fn_800C3200
void f_800C3200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3200
  c->r[0]=c->lr; // 800C3204
  cmps(c,0,(int32_t)c->r[3],0); // 800C3208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C320C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3210
  c->r[31]=c->r[4]|c->r[4]; // 800C3214
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3218
  c->r[30]=c->r[3]|c->r[3]; // 800C321C
  if (crb(c,2)) { goto L_800C323C; } // 800C3220
  c->r[4]=0u+0x00000000u; // 800C3224
  c->lr=0x800C322Cu; f_80228AAC(c); // 800C3228
  cmps(c,0,(int32_t)c->r[31],0); // 800C322C
  if (!crb(c,1)) { goto L_800C323C; } // 800C3230
  c->r[3]=c->r[30]|c->r[30]; // 800C3234
  c->lr=0x800C323Cu; f_800B9AD0(c); // 800C3238
L_800C323C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C323C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3240
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3244
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3248
  c->lr=c->r[0]; // 800C324C
  c->r[1]=c->r[1]+0x00000010u; // 800C3250
  return; // 800C3254
}

// fn_800C3260
void f_800C3260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3260
  c->r[0]=c->lr; // 800C3264
  cmps(c,0,(int32_t)c->r[3],0); // 800C3268
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C326C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3270
  c->r[31]=c->r[4]|c->r[4]; // 800C3274
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3278
  c->r[30]=c->r[3]|c->r[3]; // 800C327C
  if (crb(c,2)) { goto L_800C32BC; } // 800C3280
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C3284
  c->r[3]=c->r[3]+0x0000000Cu; // 800C3288
  cmps(c,0,(int32_t)c->r[4],0); // 800C328C
  c->r[0]=c->r[3]-c->r[5]; // 800C3290
  W32(c->r[5]+0x0000003Cu,c->r[0]); // 800C3294
  if (crb(c,2)) { goto L_800C32AC; } // 800C3298
  cmps(c,0,(int32_t)c->r[3],0); // 800C329C
  if (crb(c,2)) { goto L_800C32AC; } // 800C32A0
  c->r[4]=0u+0x00000000u; // 800C32A4
  c->lr=0x800C32ACu; f_80228AAC(c); // 800C32A8
L_800C32AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C32AC
  if (!crb(c,1)) { goto L_800C32BC; } // 800C32B0
  c->r[3]=c->r[30]|c->r[30]; // 800C32B4
  c->lr=0x800C32BCu; f_800B9AD0(c); // 800C32B8
L_800C32BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800C32BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C32C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C32C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C32C8
  c->lr=c->r[0]; // 800C32CC
  c->r[1]=c->r[1]+0x00000010u; // 800C32D0
  return; // 800C32D4
}

// fn_800C32E0
void f_800C32E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C32E0
  c->r[0]=c->lr; // 800C32E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C32E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C32EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C32F0
  c->r[31]=c->r[4]|c->r[4]; // 800C32F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C32F8
  c->r[30]=c->r[3]|c->r[3]; // 800C32FC
  if (crb(c,2)) { goto L_800C3328; } // 800C3300
  if (crb(c,2)) { goto L_800C3318; } // 800C3304
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C3308
  cmps(c,0,(int32_t)c->r[3],0); // 800C330C
  if (crb(c,2)) { goto L_800C3318; } // 800C3310
  c->lr=0x800C3318u; f_8022A708(c); // 800C3314
L_800C3318:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C3318
  if (!crb(c,1)) { goto L_800C3328; } // 800C331C
  c->r[3]=c->r[30]|c->r[30]; // 800C3320
  c->lr=0x800C3328u; f_800B9AD0(c); // 800C3324
L_800C3328:;
  c->r[3]=c->r[30]|c->r[30]; // 800C3328
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C332C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3330
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3334
  c->lr=c->r[0]; // 800C3338
  c->r[1]=c->r[1]+0x00000010u; // 800C333C
  return; // 800C3340
}

// dtor_800C3350
void f_800C3350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3350
  c->r[0]=c->lr; // 800C3354
  cmps(c,0,(int32_t)c->r[3],0); // 800C3358
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C335C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3360
  c->r[31]=c->r[4]|c->r[4]; // 800C3364
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3368
  c->r[30]=c->r[3]|c->r[3]; // 800C336C
  if (crb(c,2)) { goto L_800C33A0; } // 800C3370
  c->r[3]=addc(c,c->r[3],0x0000001Cu,0); cr0(c,c->r[3]); // 800C3374
  if (crb(c,2)) { goto L_800C3390; } // 800C3378
  if (crb(c,2)) { goto L_800C3390; } // 800C337C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C3380
  cmps(c,0,(int32_t)c->r[3],0); // 800C3384
  if (crb(c,2)) { goto L_800C3390; } // 800C3388
  c->lr=0x800C3390u; f_8022A708(c); // 800C338C
L_800C3390:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C3390
  if (!crb(c,1)) { goto L_800C33A0; } // 800C3394
  c->r[3]=c->r[30]|c->r[30]; // 800C3398
  c->lr=0x800C33A0u; f_800B9AD0(c); // 800C339C
L_800C33A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C33A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C33A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C33A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C33AC
  c->lr=c->r[0]; // 800C33B0
  c->r[1]=c->r[1]+0x00000010u; // 800C33B4
  return; // 800C33B8
}

// fn_800C33C0
void f_800C33C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C33C0
  c->r[0]=c->lr; // 800C33C4
  cmps(c,0,(int32_t)c->r[3],0); // 800C33C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C33CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C33D0
  c->r[31]=c->r[4]|c->r[4]; // 800C33D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C33D8
  c->r[30]=c->r[3]|c->r[3]; // 800C33DC
  if (crb(c,2)) { goto L_800C3440; } // 800C33E0
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C33E4
  c->r[0]=c->r[3]+0x00000040u; // 800C33E8
  c->r[4]=0u+0xFFFFFFFFu; // 800C33EC
  c->r[3]=c->r[3]+0x0000000Cu; // 800C33F0
  c->r[0]=c->r[0]-c->r[5]; // 800C33F4
  W32(c->r[5]+0x0000003Cu,c->r[0]); // 800C33F8
  c->lr=0x800C3400u; f_80229E28(c); // 800C33FC
  cmps(c,0,(int32_t)c->r[30],0); // 800C3400
  if (crb(c,2)) { goto L_800C3418; } // 800C3404
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C3408
  c->r[0]=c->r[30]+0x0000000Cu; // 800C340C
  c->r[0]=c->r[0]-c->r[3]; // 800C3410
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800C3414
L_800C3418:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C3418
  if (crb(c,2)) { goto L_800C3430; } // 800C341C
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800C3420
  if (crb(c,2)) { goto L_800C3430; } // 800C3424
  c->r[4]=0u+0x00000000u; // 800C3428
  c->lr=0x800C3430u; f_80228AAC(c); // 800C342C
L_800C3430:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C3430
  if (!crb(c,1)) { goto L_800C3440; } // 800C3434
  c->r[3]=c->r[30]|c->r[30]; // 800C3438
  c->lr=0x800C3440u; f_800B9AD0(c); // 800C343C
L_800C3440:;
  c->r[3]=c->r[30]|c->r[30]; // 800C3440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3444
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3448
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C344C
  c->lr=c->r[0]; // 800C3450
  c->r[1]=c->r[1]+0x00000010u; // 800C3454
  return; // 800C3458
}

// fn_800C3460
void f_800C3460(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C3460
  c->r[0]=c->r[0]&0x00000005u; cr0(c,c->r[0]); // 800C3464
  if (crb(c,2)) { goto L_800C3474; } // 800C3468
  c->r[3]=0u+0x00000000u; // 800C346C
  return; // 800C3470
L_800C3474:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C3474
  return; // 800C3478
}

// fn_800C3480
void f_800C3480(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C3480
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C3484
  cmpu(c,0,c->r[5],c->r[0]); // 800C3488
  if (!crb(c,0)) return; // 800C348C
  c->r[3]=c->r[4]|c->r[4]; // 800C3490
  return; // 800C3494
}

// fn_800C34A0
void f_800C34A0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800C34A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C34A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C34A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C34AC
  return; // 800C34B0
}

// fn_800C34C0
void f_800C34C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C34C0
  c->r[0]=c->lr; // 800C34C4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C34C8
  c->r[11]=c->r[1]+0x00000060u; // 800C34CC
  c->lr=0x800C34D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C34D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C34D4
  c->r[28]=c->r[3]|c->r[3]; // 800C34D8
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C34DC
  c->r[29]=c->r[4]|c->r[4]; // 800C34E0
  cmpu(c,0,c->r[0],c->r[5]); // 800C34E4
  if (!crb(c,0)) { goto L_800C3654; } // 800C34E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C34EC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C34F0
  c->r[31]=c->r[3]+c->r[0]; cr0(c,c->r[31]); // 800C34F4
  if (crb(c,2)) { goto L_800C3644; } // 800C34F8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C34FC
  c->r[3]=0u+0x2AAB0000u; // 800C3500
  c->r[29]=R32(c->r[4]+0x00000000u); // 800C3504
  c->r[4]=0u+0x00000000u; // 800C3508
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C350C
  W32(c->r[31]+0x00000000u,c->r[4]); // 800C3510
  c->r[3]=c->r[3]+0xFFFFAAABu; // 800C3514
  W32(c->r[31]+0x00000004u,c->r[4]); // 800C3518
  c->r[30]=c->r[29]+c->r[0]; // 800C351C
  c->r[0]=c->r[30]-c->r[29]; // 800C3520
  W32(c->r[31]+0x00000008u,c->r[4]); // 800C3524
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800C3528
  c->r[0]=sraw(c,c->r[0],1); // 800C352C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C3530
  c->r[26]=c->r[0]+c->r[3]; cr0(c,c->r[26]); // 800C3534
  if (crb(c,2)) { goto L_800C3644; } // 800C3538
  c->r[3]=0u+0x15550000u; // 800C353C
  c->r[0]=c->r[3]+0x00005555u; // 800C3540
  cmpu(c,0,c->r[26],c->r[0]); // 800C3544
  if (!crb(c,1)) { goto L_800C356C; } // 800C3548
  c->r[3]=0u+0x802D0000u; // 800C354C
  c->r[4]=0u+0x802A0000u; // 800C3550
  c->r[3]=c->r[3]+0x000050B0u; // 800C3554
  c->r[4]=c->r[4]+0xFFFFF894u; // 800C3558
  c->r[3]=c->r[3]+0x000000A0u; // 800C355C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3560
  c->lr=0x800C3568u; f_8021E5C0(c); // 800C3564
  c->lr=0x800C356Cu; f_802247E0(c); // 800C3568
L_800C356C:;
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 800C356C
  c->lr=0x800C3574u; f_800B98F0(c); // 800C3570
  cmps(c,0,(int32_t)c->r[3],0); // 800C3574
  c->r[25]=c->r[3]|c->r[3]; // 800C3578
  if (!crb(c,2)) { goto L_800C35A0; } // 800C357C
  c->r[3]=0u+0x802D0000u; // 800C3580
  c->r[4]=0u+0x80240000u; // 800C3584
  c->r[3]=c->r[3]+0x000050B0u; // 800C3588
  c->r[3]=c->r[3]+0x000000A0u; // 800C358C
  c->r[4]=c->r[4]+0x00002470u; // 800C3590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3594
  c->lr=0x800C359Cu; f_8021E5C0(c); // 800C3598
  c->lr=0x800C35A0u; f_802247E0(c); // 800C359C
L_800C35A0:;
  W32(c->r[31]+0x00000000u,c->r[25]); // 800C35A0
  c->r[24]=0u+0x00000000u; // 800C35A4
  W32(c->r[31]+0x00000008u,c->r[26]); // 800C35A8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C35AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C35B0
  c->r[25]=c->r[25]+c->r[0]; // 800C35B4
  goto L_800C363C; // 800C35B8
L_800C35BC:;
  cmps(c,0,(int32_t)c->r[25],0); // 800C35BC
  if (crb(c,2)) { goto L_800C3628; } // 800C35C0
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C35C4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C35C8
  if (!crb(c,2)) { goto L_800C35E8; } // 800C35CC
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C35D0
  W32(c->r[25]+0x00000000u,c->r[3]); // 800C35D4
  W32(c->r[25]+0x00000004u,c->r[0]); // 800C35D8
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C35DC
  W32(c->r[25]+0x00000008u,c->r[0]); // 800C35E0
  goto L_800C3628; // 800C35E4
L_800C35E8:;
  W32(c->r[25]+0x00000000u,c->r[24]); // 800C35E8
  c->r[3]=c->r[25]|c->r[25]; // 800C35EC
  W32(c->r[25]+0x00000004u,c->r[24]); // 800C35F0
  W32(c->r[25]+0x00000008u,c->r[24]); // 800C35F4
  c->r[4]=R32(c->r[29]+0x00000004u); // 800C35F8
  c->lr=0x800C3600u; f_80007C00(c); // 800C35FC
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C3600
  c->r[3]=c->r[25]|c->r[25]; // 800C3604
  W8(c->r[1]+0x00000014u,c->r[0]); // 800C3608
  c->r[8]=c->r[1]+0x00000014u; // 800C360C
  c->r[4]=0u+0x00000000u; // 800C3610
  c->r[5]=0u+0x00000000u; // 800C3614
  c->r[6]=R32(c->r[29]+0x00000008u); // 800C3618
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C361C
  c->r[7]=c->r[6]+c->r[0]; // 800C3620
  c->lr=0x800C3628u; f_80007DC0(c); // 800C3624
L_800C3628:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800C3628
  c->r[29]=c->r[29]+0x0000000Cu; // 800C362C
  c->r[25]=c->r[25]+0x0000000Cu; // 800C3630
  c->r[0]=c->r[3]+0x00000001u; // 800C3634
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C3638
L_800C363C:;
  cmpu(c,0,c->r[29],c->r[30]); // 800C363C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C35BC; } // 800C3640
L_800C3644:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800C3644
  c->r[0]=c->r[3]+0x00000001u; // 800C3648
  W32(c->r[28]+0x00000004u,c->r[0]); // 800C364C
  goto L_800C3B1C; // 800C3650
L_800C3654:;
  c->r[3]=0u+0x15550000u; // 800C3654
  c->r[0]=c->r[3]+0x00005555u; // 800C3658
  c->r[0]=c->r[0]-c->r[5]; // 800C365C
  cmpu(c,0,c->r[0],0x00000001u); // 800C3660
  if (!crb(c,0)) { goto L_800C3688; } // 800C3664
  c->r[3]=0u+0x802D0000u; // 800C3668
  c->r[4]=0u+0x802A0000u; // 800C366C
  c->r[3]=c->r[3]+0x000050B0u; // 800C3670
  c->r[4]=c->r[4]+0xFFFFF894u; // 800C3674
  c->r[3]=c->r[3]+0x000000A0u; // 800C3678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C367C
  c->lr=0x800C3684u; f_8021E5C0(c); // 800C3680
  c->lr=0x800C3688u; f_802247E0(c); // 800C3684
L_800C3688:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 800C3688
  c->r[6]=0u+0x00000000u; // 800C368C
  c->r[3]=0u+0x15550000u; // 800C3690
  c->r[31]=R32(c->r[28]+0x00000008u); // 800C3694
  c->r[0]=c->r[3]+0x00005555u; // 800C3698
  c->r[4]=c->r[4]+0x00000001u; // 800C369C
  c->r[3]=c->r[4]-c->r[31]; // 800C36A0
  c->r[5]=c->r[28]+0x00000008u; // 800C36A4
  c->r[0]=c->r[0]-c->r[31]; // 800C36A8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800C36AC
  cmpu(c,0,c->r[3],c->r[0]); // 800C36B0
  W32(c->r[1]+0x00000028u,c->r[6]); // 800C36B4
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800C36B8
  W32(c->r[1]+0x00000030u,c->r[5]); // 800C36BC
  W32(c->r[1]+0x00000034u,c->r[6]); // 800C36C0
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C36C4
  if (!crb(c,1)) { goto L_800C36EC; } // 800C36C8
  c->r[3]=0u+0x802D0000u; // 800C36CC
  c->r[4]=0u+0x802A0000u; // 800C36D0
  c->r[3]=c->r[3]+0x000050B0u; // 800C36D4
  c->r[4]=c->r[4]+0xFFFFF894u; // 800C36D8
  c->r[3]=c->r[3]+0x000000A0u; // 800C36DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C36E0
  c->lr=0x800C36E8u; f_8021E5C0(c); // 800C36E4
  c->lr=0x800C36ECu; f_802247E0(c); // 800C36E8
L_800C36EC:;
  c->r[3]=0u+0x071C0000u; // 800C36EC
  c->r[0]=c->r[3]+0x000071C7u; // 800C36F0
  cmpu(c,0,c->r[31],c->r[0]); // 800C36F4
  if (!crb(c,0)) { goto L_800C373C; } // 800C36F8
  c->r[5]=c->r[31]+0x00000001u; // 800C36FC
  c->r[3]=0u+0xCCCD0000u; // 800C3700
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800C3704
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C3708
  c->r[4]=c->r[4]-c->r[5]; // 800C370C
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 800C3710
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800C3714
  c->r[3]=c->r[1]+0x00000020u; // 800C3718
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800C371C
  W32(c->r[1]+0x00000020u,c->r[4]); // 800C3720
  cmpu(c,0,c->r[4],c->r[0]); // 800C3724
  if (!crb(c,0)) { goto L_800C3730; } // 800C3728
  c->r[3]=c->r[1]+0x00000018u; // 800C372C
L_800C3730:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C3730
  c->r[25]=c->r[31]+c->r[0]; // 800C3734
  goto L_800C3780; // 800C3738
L_800C373C:;
  c->r[3]=0u+0x0E390000u; // 800C373C
  c->r[0]=c->r[3]+0xFFFFE38Eu; // 800C3740
  cmpu(c,0,c->r[31],c->r[0]); // 800C3744
  if (!crb(c,0)) { goto L_800C3778; } // 800C3748
  c->r[3]=c->r[31]+0x00000001u; // 800C374C
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C3750
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800C3754
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800C3758
  cmpu(c,0,c->r[3],c->r[0]); // 800C375C
  c->r[3]=c->r[1]+0x0000001Cu; // 800C3760
  if (!crb(c,0)) { goto L_800C376C; } // 800C3764
  c->r[3]=c->r[1]+0x00000018u; // 800C3768
L_800C376C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C376C
  c->r[25]=c->r[31]+c->r[0]; // 800C3770
  goto L_800C3780; // 800C3774
L_800C3778:;
  c->r[3]=0u+0x15550000u; // 800C3778
  c->r[25]=c->r[3]+0x00005555u; // 800C377C
L_800C3780:;
  c->r[3]=0u+0x15550000u; // 800C3780
  c->r[0]=c->r[3]+0x00005555u; // 800C3784
  cmpu(c,0,c->r[25],c->r[0]); // 800C3788
  if (!crb(c,1)) { goto L_800C37B0; } // 800C378C
  c->r[3]=0u+0x802D0000u; // 800C3790
  c->r[4]=0u+0x802A0000u; // 800C3794
  c->r[3]=c->r[3]+0x000050B0u; // 800C3798
  c->r[4]=c->r[4]+0xFFFFF894u; // 800C379C
  c->r[3]=c->r[3]+0x000000A0u; // 800C37A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C37A4
  c->lr=0x800C37ACu; f_8021E5C0(c); // 800C37A8
  c->lr=0x800C37B0u; f_802247E0(c); // 800C37AC
L_800C37B0:;
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)12); // 800C37B0
  c->lr=0x800C37B8u; f_800B98F0(c); // 800C37B4
  cmps(c,0,(int32_t)c->r[3],0); // 800C37B8
  c->r[23]=c->r[3]|c->r[3]; // 800C37BC
  if (!crb(c,2)) { goto L_800C37E4; } // 800C37C0
  c->r[3]=0u+0x802D0000u; // 800C37C4
  c->r[4]=0u+0x802A0000u; // 800C37C8
  c->r[3]=c->r[3]+0x000050B0u; // 800C37CC
  c->r[3]=c->r[3]+0x000000A0u; // 800C37D0
  c->r[4]=c->r[4]+0xFFFFFA18u; // 800C37D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C37D8
  c->lr=0x800C37E0u; f_8021E5C0(c); // 800C37DC
  c->lr=0x800C37E4u; f_802247E0(c); // 800C37E0
L_800C37E4:;
  c->r[5]=R32(c->r[28]+0x00000004u); // 800C37E4
  c->r[24]=0u+0x802D0000u; // 800C37E8
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C37EC
  c->r[27]=0u+0x00000000u; // 800C37F0
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 800C37F4
  W32(c->r[1]+0x00000034u,c->r[5]); // 800C37F8
  c->r[24]=c->r[24]+0x000050B0u; // 800C37FC
  W32(c->r[1]+0x00000024u,c->r[23]); // 800C3800
  c->r[26]=0u+0x80240000u; // 800C3804
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C3808
  c->r[0]=c->r[23]+c->r[4]; // 800C380C
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 800C3810
  c->r[4]=0u+0x15550000u; // 800C3814
  c->r[31]=c->r[3]+c->r[0]; cr0(c,c->r[31]); // 800C3818
  c->r[5]=0u+0x2AAB0000u; // 800C381C
  c->r[3]=0u+0x802A0000u; // 800C3820
  if (crb(c,2)) { goto L_800C3948; } // 800C3824
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C3828
  c->r[5]=c->r[5]+0xFFFFAAABu; // 800C382C
  W32(c->r[31]+0x00000000u,c->r[27]); // 800C3830
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C3834
  c->r[29]=R32(c->r[29]+0x00000000u); // 800C3838
  W32(c->r[31]+0x00000004u,c->r[27]); // 800C383C
  c->r[30]=c->r[29]+c->r[0]; // 800C3840
  W32(c->r[31]+0x00000008u,c->r[27]); // 800C3844
  c->r[0]=c->r[30]-c->r[29]; // 800C3848
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[0])>>32); // 800C384C
  c->r[0]=sraw(c,c->r[0],1); // 800C3850
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800C3854
  c->r[23]=c->r[0]+c->r[5]; cr0(c,c->r[23]); // 800C3858
  if (crb(c,2)) { goto L_800C3948; } // 800C385C
  c->r[0]=c->r[4]+0x00005555u; // 800C3860
  cmpu(c,0,c->r[23],c->r[0]); // 800C3864
  if (!crb(c,1)) { goto L_800C3880; } // 800C3868
  c->r[4]=c->r[3]+0xFFFFF894u; // 800C386C
  c->r[3]=c->r[24]+0x000000A0u; // 800C3870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3874
  c->lr=0x800C387Cu; f_8021E5C0(c); // 800C3878
  c->lr=0x800C3880u; f_802247E0(c); // 800C387C
L_800C3880:;
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)12); // 800C3880
  c->lr=0x800C3888u; f_800B98F0(c); // 800C3884
  cmps(c,0,(int32_t)c->r[3],0); // 800C3888
  c->r[25]=c->r[3]|c->r[3]; // 800C388C
  if (!crb(c,2)) { goto L_800C38A8; } // 800C3890
  c->r[3]=c->r[24]+0x000000A0u; // 800C3894
  c->r[4]=c->r[26]+0x00002470u; // 800C3898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C389C
  c->lr=0x800C38A4u; f_8021E5C0(c); // 800C38A0
  c->lr=0x800C38A8u; f_802247E0(c); // 800C38A4
L_800C38A8:;
  W32(c->r[31]+0x00000000u,c->r[25]); // 800C38A8
  W32(c->r[31]+0x00000008u,c->r[23]); // 800C38AC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C38B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C38B4
  c->r[24]=c->r[25]+c->r[0]; // 800C38B8
  goto L_800C3940; // 800C38BC
L_800C38C0:;
  cmps(c,0,(int32_t)c->r[24],0); // 800C38C0
  if (crb(c,2)) { goto L_800C392C; } // 800C38C4
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C38C8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C38CC
  if (!crb(c,2)) { goto L_800C38EC; } // 800C38D0
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C38D4
  W32(c->r[24]+0x00000000u,c->r[3]); // 800C38D8
  W32(c->r[24]+0x00000004u,c->r[0]); // 800C38DC
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C38E0
  W32(c->r[24]+0x00000008u,c->r[0]); // 800C38E4
  goto L_800C392C; // 800C38E8
L_800C38EC:;
  W32(c->r[24]+0x00000000u,c->r[27]); // 800C38EC
  c->r[3]=c->r[24]|c->r[24]; // 800C38F0
  W32(c->r[24]+0x00000004u,c->r[27]); // 800C38F4
  W32(c->r[24]+0x00000008u,c->r[27]); // 800C38F8
  c->r[4]=R32(c->r[29]+0x00000004u); // 800C38FC
  c->lr=0x800C3904u; f_80007C00(c); // 800C3900
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C3904
  c->r[3]=c->r[24]|c->r[24]; // 800C3908
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C390C
  c->r[8]=c->r[1]+0x00000008u; // 800C3910
  c->r[4]=0u+0x00000000u; // 800C3914
  c->r[5]=0u+0x00000000u; // 800C3918
  c->r[6]=R32(c->r[29]+0x00000008u); // 800C391C
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C3920
  c->r[7]=c->r[6]+c->r[0]; // 800C3924
  c->lr=0x800C392Cu; f_80007DC0(c); // 800C3928
L_800C392C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800C392C
  c->r[29]=c->r[29]+0x0000000Cu; // 800C3930
  c->r[24]=c->r[24]+0x0000000Cu; // 800C3934
  c->r[0]=c->r[3]+0x00000001u; // 800C3938
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C393C
L_800C3940:;
  cmpu(c,0,c->r[29],c->r[30]); // 800C3940
  if (!crb(c,2)) { IRQCHK(c); goto L_800C38C0; } // 800C3944
L_800C3948:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C3948
  c->r[3]=0u+0x2AAB0000u; // 800C394C
  c->r[29]=R32(c->r[28]+0x00000000u); // 800C3950
  c->r[6]=c->r[3]+0xFFFFAAABu; // 800C3954
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C3958
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C395C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C3960
  c->r[4]=c->r[29]|c->r[29]; // 800C3964
  c->r[7]=c->r[3]+0x00000001u; // 800C3968
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C396C
  c->r[5]=c->r[29]+c->r[5]; // 800C3970
  W32(c->r[1]+0x00000028u,c->r[7]); // 800C3974
  c->r[5]=c->r[5]-c->r[29]; // 800C3978
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[5])>>32); // 800C397C
  c->r[5]=sraw(c,c->r[5],1); // 800C3980
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800C3984
  c->r[24]=c->r[5]+c->r[6]; // 800C3988
  c->r[0]=c->r[0]-c->r[24]; // 800C398C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C3990
  c->r[23]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 800C3994
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C3998
  c->r[5]=c->r[23]|c->r[23]; // 800C399C
  c->r[3]=c->r[3]+c->r[0]; // 800C39A0
  c->lr=0x800C39A8u; f_80004364(c); // 800C39A4
  c->r[3]=c->r[29]|c->r[29]; // 800C39A8
  c->r[5]=c->r[23]|c->r[23]; // 800C39AC
  c->r[4]=0u+0x00000000u; // 800C39B0
  c->lr=0x800C39B8u; f_800046B4(c); // 800C39B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C39B8
  c->r[31]=c->r[1]+0x00000024u; // 800C39BC
  c->r[6]=R32(c->r[28]+0x00000004u); // 800C39C0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C39C4
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C39C8
  c->r[7]=R32(c->r[28]+0x00000000u); // 800C39CC
  c->r[5]=c->r[0]+c->r[24]; // 800C39D0
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C39D4
  c->r[24]=c->r[7]+c->r[3]; // 800C39D8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 800C39DC
  c->r[8]=R32(c->r[28]+0x00000008u); // 800C39E0
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800C39E4
  W32(c->r[28]+0x00000008u,c->r[3]); // 800C39E8
  c->r[25]=c->r[24]+c->r[0]; // 800C39EC
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 800C39F0
  W32(c->r[28]+0x00000000u,c->r[4]); // 800C39F4
  W32(c->r[1]+0x00000024u,c->r[7]); // 800C39F8
  W32(c->r[28]+0x00000004u,c->r[5]); // 800C39FC
  W32(c->r[1]+0x00000028u,c->r[6]); // 800C3A00
  goto L_800C3A6C; // 800C3A04
L_800C3A08:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFF4u,0); cr0(c,c->r[25]); // 800C3A08
  if (crb(c,2)) { goto L_800C3A6C; } // 800C3A0C
  if (crb(c,2)) { goto L_800C3A6C; } // 800C3A10
  if (crb(c,2)) { goto L_800C3A6C; } // 800C3A14
  c->r[4]=R32(c->r[25]+0x00000000u); // 800C3A18
  cmps(c,0,(int32_t)c->r[4],0); // 800C3A1C
  if (crb(c,2)) { goto L_800C3A6C; } // 800C3A20
  c->r[27]=R32(c->r[25]+0x00000004u); // 800C3A24
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 800C3A28
  c->r[0]=c->r[27]-c->r[27]; // 800C3A2C
  W32(c->r[25]+0x00000004u,c->r[0]); // 800C3A30
  c->r[26]=c->r[4]+c->r[3]; // 800C3A34
  goto L_800C3A5C; // 800C3A38
L_800C3A3C:;
  c->r[26]=addc(c,c->r[26],0xFFFFFFF4u,0); cr0(c,c->r[26]); // 800C3A3C
  if (crb(c,2)) { goto L_800C3A58; } // 800C3A40
  c->r[0]=R32(c->r[26]+0x00000000u); // 800C3A44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3A48
  if (crb(c,2)) { goto L_800C3A58; } // 800C3A4C
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C3A50
  c->lr=0x800C3A58u; f_800B9AD0(c); // 800C3A54
L_800C3A58:;
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800C3A58
L_800C3A5C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C3A5C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C3A3C; } // 800C3A60
  c->r[3]=R32(c->r[25]+0x00000000u); // 800C3A64
  c->lr=0x800C3A6Cu; f_800B9AD0(c); // 800C3A68
L_800C3A6C:;
  cmpu(c,0,c->r[25],c->r[24]); // 800C3A6C
  if (crb(c,1)) { IRQCHK(c); goto L_800C3A08; } // 800C3A70
  cmps(c,0,(int32_t)c->r[31],0); // 800C3A74
  c->r[0]=0u+0x00000000u; // 800C3A78
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C3A7C
  if (crb(c,2)) { goto L_800C3B1C; } // 800C3A80
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C3A84
  cmps(c,0,(int32_t)c->r[3],0); // 800C3A88
  if (crb(c,2)) { goto L_800C3B1C; } // 800C3A8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800C3A90
  c->r[27]=0u+0x00000000u; // 800C3A94
  W32(c->r[1]+0x00000028u,c->r[27]); // 800C3A98
  c->r[24]=c->r[3]+c->r[0]; // 800C3A9C
  goto L_800C3B0C; // 800C3AA0
L_800C3AA4:;
  c->r[24]=addc(c,c->r[24],0xFFFFFFF4u,0); cr0(c,c->r[24]); // 800C3AA4
  if (crb(c,2)) { goto L_800C3B08; } // 800C3AA8
  if (crb(c,2)) { goto L_800C3B08; } // 800C3AAC
  if (crb(c,2)) { goto L_800C3B08; } // 800C3AB0
  c->r[4]=R32(c->r[24]+0x00000000u); // 800C3AB4
  cmps(c,0,(int32_t)c->r[4],0); // 800C3AB8
  if (crb(c,2)) { goto L_800C3B08; } // 800C3ABC
  c->r[26]=R32(c->r[24]+0x00000004u); // 800C3AC0
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 800C3AC4
  c->r[0]=c->r[26]-c->r[26]; // 800C3AC8
  W32(c->r[24]+0x00000004u,c->r[0]); // 800C3ACC
  c->r[25]=c->r[4]+c->r[3]; // 800C3AD0
  goto L_800C3AF8; // 800C3AD4
L_800C3AD8:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFF4u,0); cr0(c,c->r[25]); // 800C3AD8
  if (crb(c,2)) { goto L_800C3AF4; } // 800C3ADC
  c->r[0]=R32(c->r[25]+0x00000000u); // 800C3AE0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3AE4
  if (crb(c,2)) { goto L_800C3AF4; } // 800C3AE8
  c->r[3]=R32(c->r[25]+0x00000008u); // 800C3AEC
  c->lr=0x800C3AF4u; f_800B9AD0(c); // 800C3AF0
L_800C3AF4:;
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 800C3AF4
L_800C3AF8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800C3AF8
  if (!crb(c,2)) { IRQCHK(c); goto L_800C3AD8; } // 800C3AFC
  c->r[3]=R32(c->r[24]+0x00000000u); // 800C3B00
  c->lr=0x800C3B08u; f_800B9AD0(c); // 800C3B04
L_800C3B08:;
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800C3B08
L_800C3B0C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C3B0C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C3AA4; } // 800C3B10
  c->r[3]=R32(c->r[1]+0x00000024u); // 800C3B14
  c->lr=0x800C3B1Cu; f_800B9AD0(c); // 800C3B18
L_800C3B1C:;
  c->r[11]=c->r[1]+0x00000060u; // 800C3B1C
  c->lr=0x800C3B24u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3B20
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C3B24
  c->lr=c->r[0]; // 800C3B28
  c->r[1]=c->r[1]+0x00000060u; // 800C3B2C
  return; // 800C3B30
}

// fn_800C3B40
void f_800C3B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B40
  c->r[0]=c->lr; // 800C3B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3B48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3B4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3B50
  c->r[30]=R32(c->r[3]+0x00000004u); // 800C3B54
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C3B58
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 800C3B5C
  c->r[0]=c->r[30]-c->r[30]; // 800C3B60
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C3B64
  c->r[31]=c->r[5]+c->r[4]; // 800C3B68
  goto L_800C3B90; // 800C3B6C
L_800C3B70:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFF4u,0); cr0(c,c->r[31]); // 800C3B70
  if (crb(c,2)) { goto L_800C3B8C; } // 800C3B74
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C3B78
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3B7C
  if (crb(c,2)) { goto L_800C3B8C; } // 800C3B80
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C3B84
  c->lr=0x800C3B8Cu; f_800B9AD0(c); // 800C3B88
L_800C3B8C:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800C3B8C
L_800C3B90:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C3B90
  if (!crb(c,2)) { IRQCHK(c); goto L_800C3B70; } // 800C3B94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3B98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3B9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3BA0
  c->lr=c->r[0]; // 800C3BA4
  c->r[1]=c->r[1]+0x00000010u; // 800C3BA8
  return; // 800C3BAC
}

// fn_800C3BB0
void f_800C3BB0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C3BB0
  return; // 800C3BB4
}

// fn_800C3BC0
void f_800C3BC0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C3BC0
  c->r[0]=cntlz(c->r[0]); // 800C3BC4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C3BC8
  return; // 800C3BCC
}

// fn_800C3BD0
void f_800C3BD0(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800C3BD0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C3BD4
  c->r[3]=c->r[3]+c->r[0]; // 800C3BD8
  return; // 800C3BDC
}

// fn_800C3BE0
void f_800C3BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3BE0
  c->r[0]=c->lr; // 800C3BE4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C3BE8
  c->r[11]=c->r[1]+0x00000090u; // 800C3BEC
  c->lr=0x800C3BF4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3BF0
  c->r[25]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 800C3BF4
  c->r[31]=0u+0x00000000u; // 800C3BF8
  c->r[0]=c->r[3]+0x00000004u; // 800C3BFC
  W32(c->r[3]+0x00000000u,c->r[31]); // 800C3C00
  c->r[21]=c->r[3]|c->r[3]; // 800C3C04
  W32(c->r[3]+0x00000004u,c->r[31]); // 800C3C08
  c->r[22]=c->r[4]|c->r[4]; // 800C3C0C
  c->r[30]=c->r[1]+0x00000048u; // 800C3C10
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C3C14
  c->r[23]=0u+0x00000000u; // 800C3C18
  c->r[26]=0u+0x00000000u; // 800C3C1C
  goto L_800C3F14; // 800C3C20
L_800C3C24:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 800C3C24
  c->r[3]=c->r[0]+c->r[26]; // 800C3C28
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C3C2C
  cmps(c,0,(int32_t)c->r[0],2); // 800C3C30
  if (crb(c,0)) { goto L_800C3F0C; } // 800C3C34
  c->r[27]=R32(c->r[3]+0x00000000u); // 800C3C38
  c->r[3]=c->r[21]|c->r[21]; // 800C3C3C
  c->r[5]=c->r[1]+0x00000024u; // 800C3C40
  c->r[6]=c->r[1]+0x00000010u; // 800C3C44
  c->r[4]=c->r[27]|c->r[27]; // 800C3C48
  c->r[7]=c->r[1]+0x00000011u; // 800C3C4C
  c->lr=0x800C3C54u; f_800B16C0(c); // 800C3C50
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C3C54
  c->r[28]=c->r[3]|c->r[3]; // 800C3C58
  cmps(c,0,(int32_t)c->r[4],0); // 800C3C5C
  if (crb(c,2)) { goto L_800C3D3C; } // 800C3C60
  c->r[0]=R32(c->r[27]+0x00000000u); // 800C3C64
  c->r[24]=c->r[4]+0x0000000Cu; // 800C3C68
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3C6C
  if (!crb(c,2)) { goto L_800C3C84; } // 800C3C70
  c->r[0]=R8(c->r[27]+0x00000000u); // 800C3C74
  c->r[4]=c->r[27]+0x00000001u; // 800C3C78
  c->r[29]=rotl(c->r[0],0)&0x0000007Fu; // 800C3C7C
  goto L_800C3C8C; // 800C3C80
L_800C3C84:;
  c->r[4]=R32(c->r[27]+0x00000008u); // 800C3C84
  c->r[29]=R32(c->r[27]+0x00000004u); // 800C3C88
L_800C3C8C:;
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800C3C8C
  c->r[0]=R32(c->r[24]+0x00000000u); // 800C3C90
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3C94
  if (!crb(c,2)) { goto L_800C3CA8; } // 800C3C98
  c->r[0]=R8(c->r[24]+0x00000000u); // 800C3C9C
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800C3CA0
  goto L_800C3CAC; // 800C3CA4
L_800C3CA8:;
  c->r[5]=R32(c->r[24]+0x00000004u); // 800C3CA8
L_800C3CAC:;
  W32(c->r[1]+0x00000028u,c->r[5]); // 800C3CAC
  c->r[0]=R32(c->r[24]+0x00000000u); // 800C3CB0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3CB4
  if (!crb(c,2)) { goto L_800C3CCC; } // 800C3CB8
  c->r[0]=R8(c->r[24]+0x00000000u); // 800C3CBC
  c->r[3]=c->r[24]+0x00000001u; // 800C3CC0
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800C3CC4
  goto L_800C3CD4; // 800C3CC8
L_800C3CCC:;
  c->r[3]=R32(c->r[24]+0x00000008u); // 800C3CCC
  c->r[0]=R32(c->r[24]+0x00000004u); // 800C3CD0
L_800C3CD4:;
  cmpu(c,0,c->r[5],c->r[0]); // 800C3CD4
  W32(c->r[1]+0x00000030u,c->r[0]); // 800C3CD8
  c->r[5]=c->r[1]+0x00000030u; // 800C3CDC
  if (!crb(c,0)) { goto L_800C3CE8; } // 800C3CE0
  c->r[5]=c->r[1]+0x00000028u; // 800C3CE4
L_800C3CE8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800C3CE8
  c->r[5]=c->r[1]+0x00000034u; // 800C3CEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C3CF0
  cmpu(c,0,c->r[29],c->r[0]); // 800C3CF4
  if (!crb(c,0)) { goto L_800C3D00; } // 800C3CF8
  c->r[5]=c->r[1]+0x0000002Cu; // 800C3CFC
L_800C3D00:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800C3D00
  c->lr=0x800C3D08u; f_8021C08C(c); // 800C3D04
  cmps(c,0,(int32_t)c->r[3],0); // 800C3D08
  if (!crb(c,2)) { goto L_800C3D34; } // 800C3D0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C3D10
  cmpu(c,0,c->r[0],c->r[29]); // 800C3D14
  if (!crb(c,0)) { goto L_800C3D24; } // 800C3D18
  c->r[3]=0u+0xFFFFFFFFu; // 800C3D1C
  goto L_800C3D34; // 800C3D20
L_800C3D24:;
  if (!crb(c,2)) { goto L_800C3D30; } // 800C3D24
  c->r[3]=0u+0x00000000u; // 800C3D28
  goto L_800C3D34; // 800C3D2C
L_800C3D30:;
  c->r[3]=0u+0x00000001u; // 800C3D30
L_800C3D34:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C3D34
  if (!crb(c,0)) { goto L_800C3E78; } // 800C3D38
L_800C3D3C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C3D3C
  W32(c->r[1]+0x00000038u,c->r[31]); // 800C3D40
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C3D44
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C3D48
  W32(c->r[1]+0x00000040u,c->r[31]); // 800C3D4C
  if (!crb(c,2)) { goto L_800C3D6C; } // 800C3D50
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C3D54
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C3D58
  W32(c->r[1]+0x00000048u,c->r[3]); // 800C3D5C
  c->r[0]=R32(c->r[27]+0x00000008u); // 800C3D60
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C3D64
  goto L_800C3DAC; // 800C3D68
L_800C3D6C:;
  W32(c->r[1]+0x00000048u,c->r[31]); // 800C3D6C
  c->r[3]=c->r[30]|c->r[30]; // 800C3D70
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C3D74
  W32(c->r[1]+0x00000050u,c->r[31]); // 800C3D78
  c->r[4]=R32(c->r[27]+0x00000004u); // 800C3D7C
  c->lr=0x800C3D84u; f_80007C00(c); // 800C3D80
  c->r[0]=R8(c->r[1]+0x00000020u); // 800C3D84
  c->r[3]=c->r[30]|c->r[30]; // 800C3D88
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800C3D8C
  c->r[8]=c->r[1]+0x0000001Cu; // 800C3D90
  c->r[4]=0u+0x00000000u; // 800C3D94
  c->r[5]=0u+0x00000000u; // 800C3D98
  c->r[6]=R32(c->r[27]+0x00000008u); // 800C3D9C
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C3DA0
  c->r[7]=c->r[6]+c->r[0]; // 800C3DA4
  c->lr=0x800C3DACu; f_80007DC0(c); // 800C3DA8
L_800C3DAC:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 800C3DAC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 800C3DB0
  if (!crb(c,2)) { goto L_800C3DD0; } // 800C3DB4
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800C3DB8
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C3DBC
  W32(c->r[1]+0x00000054u,c->r[4]); // 800C3DC0
  W32(c->r[1]+0x00000058u,c->r[3]); // 800C3DC4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800C3DC8
  goto L_800C3E10; // 800C3DCC
L_800C3DD0:;
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800C3DD0
  c->r[3]=c->r[30]+0x0000000Cu; // 800C3DD4
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800C3DD8
  W32(c->r[30]+0x00000010u,c->r[31]); // 800C3DDC
  W32(c->r[30]+0x00000014u,c->r[31]); // 800C3DE0
  c->lr=0x800C3DE8u; f_80007C00(c); // 800C3DE4
  c->r[5]=R8(c->r[1]+0x00000018u); // 800C3DE8
  c->r[3]=c->r[30]+0x0000000Cu; // 800C3DEC
  W8(c->r[1]+0x00000014u,c->r[5]); // 800C3DF0
  c->r[8]=c->r[1]+0x00000014u; // 800C3DF4
  c->r[6]=R32(c->r[1]+0x00000040u); // 800C3DF8
  c->r[4]=0u+0x00000000u; // 800C3DFC
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800C3E00
  c->r[5]=0u+0x00000000u; // 800C3E04
  c->r[7]=c->r[6]+c->r[0]; // 800C3E08
  c->lr=0x800C3E10u; f_80007DC0(c); // 800C3E0C
L_800C3E10:;
  c->r[5]=R8(c->r[1]+0x00000010u); // 800C3E10
  c->r[3]=c->r[21]|c->r[21]; // 800C3E14
  c->r[6]=R8(c->r[1]+0x00000011u); // 800C3E18
  c->r[4]=c->r[28]|c->r[28]; // 800C3E1C
  c->r[7]=c->r[1]+0x00000048u; // 800C3E20
  c->lr=0x800C3E28u; f_800B2A80(c); // 800C3E24
  c->r[0]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[0]); // 800C3E28
  c->r[24]=c->r[3]+0x0000000Cu; // 800C3E2C
  if (crb(c,2)) { goto L_800C3E48; } // 800C3E30
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C3E34
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3E38
  if (crb(c,2)) { goto L_800C3E48; } // 800C3E3C
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 800C3E40
  c->lr=0x800C3E48u; f_800B9AD0(c); // 800C3E44
L_800C3E48:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C3E48
  if (crb(c,2)) { goto L_800C3E64; } // 800C3E4C
  c->r[0]=R32(c->r[1]+0x00000048u); // 800C3E50
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3E54
  if (crb(c,2)) { goto L_800C3E64; } // 800C3E58
  c->r[3]=R32(c->r[1]+0x00000050u); // 800C3E5C
  c->lr=0x800C3E64u; f_800B9AD0(c); // 800C3E60
L_800C3E64:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 800C3E64
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3E68
  if (crb(c,2)) { goto L_800C3E78; } // 800C3E6C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800C3E70
  c->lr=0x800C3E78u; f_800B9AD0(c); // 800C3E74
L_800C3E78:;
  c->r[4]=R32(c->r[22]+0x00000000u); // 800C3E78
  c->r[3]=c->r[24]+0x0000000Cu; // 800C3E7C
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 800C3E80
  c->r[4]=R32(c->r[4]+c->r[26]); // 800C3E84
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 800C3E88
  c->r[7]=c->r[4]+c->r[25]; // 800C3E8C
  if (!crb(c,2)) { goto L_800C3EB8; } // 800C3E90
  c->r[4]=R32(c->r[7]+0x00000000u); // 800C3E94
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 800C3E98
  if (!crb(c,2)) { goto L_800C3EB8; } // 800C3E9C
  c->r[0]=R32(c->r[7]+0x00000004u); // 800C3EA0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C3EA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C3EA8
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C3EAC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C3EB0
  goto L_800C3F0C; // 800C3EB4
L_800C3EB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C3EB8
  if (crb(c,2)) { goto L_800C3EC8; } // 800C3EBC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800C3EC0
  goto L_800C3ED0; // 800C3EC4
L_800C3EC8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C3EC8
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800C3ECC
L_800C3ED0:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 800C3ED0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C3ED4
  if (!crb(c,2)) { goto L_800C3EEC; } // 800C3ED8
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C3EDC
  c->r[6]=c->r[7]+0x00000001u; // 800C3EE0
  c->r[4]=rotl(c->r[0],0)&0x0000007Fu; // 800C3EE4
  goto L_800C3EF4; // 800C3EE8
L_800C3EEC:;
  c->r[6]=R32(c->r[7]+0x00000008u); // 800C3EEC
  c->r[4]=R32(c->r[7]+0x00000004u); // 800C3EF0
L_800C3EF4:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C3EF4
  c->r[7]=c->r[6]+c->r[4]; // 800C3EF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C3EFC
  c->r[8]=c->r[1]+0x00000008u; // 800C3F00
  c->r[4]=0u+0x00000000u; // 800C3F04
  c->lr=0x800C3F0Cu; f_80007DC0(c); // 800C3F08
L_800C3F0C:;
  c->r[26]=c->r[26]+0x0000000Cu; // 800C3F0C
  c->r[23]=c->r[23]+0x00000001u; // 800C3F10
L_800C3F14:;
  c->r[0]=R32(c->r[22]+0x00000004u); // 800C3F14
  cmpu(c,0,c->r[23],c->r[0]); // 800C3F18
  if (crb(c,0)) { IRQCHK(c); goto L_800C3C24; } // 800C3F1C
  c->r[11]=c->r[1]+0x00000090u; // 800C3F20
  c->lr=0x800C3F28u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3F24
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C3F28
  c->lr=c->r[0]; // 800C3F2C
  c->r[1]=c->r[1]+0x00000090u; // 800C3F30
  return; // 800C3F34
}

// fn_800C3F40
void f_800C3F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3F40
  c->r[0]=c->lr; // 800C3F44
  c->r[5]=0u+0x00000001u; // 800C3F48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3F4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C3F50
  c->r[31]=0u+0xFFFFFFFFu; // 800C3F54
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C3F58
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C3F5C
  c->r[29]=c->r[3]|c->r[3]; // 800C3F60
  c->r[3]=c->r[1]+0x00000008u; // 800C3F64
  c->r[4]=c->r[29]|c->r[29]; // 800C3F68
  c->lr=0x800C3F70u; f_800C44C0(c); // 800C3F6C
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C3F70
  cmps(c,0,(int32_t)c->r[0],0); // 800C3F74
  if (crb(c,2)) { goto L_800C4018; } // 800C3F78
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C3F7C
  c->r[30]=0u+0x00000000u; // 800C3F80
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C3F84
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C3F88
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C3F8C
  cmpu(c,0,c->r[4],c->r[0]); // 800C3F90
  if (!crb(c,0)) { goto L_800C3FA8; } // 800C3F94
  c->r[0]=c->r[4]+0x00000001u; // 800C3F98
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C3F9C
  c->r[3]=R8(c->r[4]+0x00000000u); // 800C3FA0
  goto L_800C3FB8; // 800C3FA4
L_800C3FA8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3FA8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C3FAC
  c->ctr=c->r[12]; // 800C3FB0
  if (true) { c->lr=0x800C3FB8u; dispatch(c,c->ctr); } // 800C3FB4
L_800C3FB8:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C3FB8
  c->r[31]=c->r[3]|c->r[3]; // 800C3FBC
  if (crb(c,2)) { goto L_800C3FD0; } // 800C3FC0
  c->r[0]=0u+0x00000001u; // 800C3FC4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800C3FC8
  goto L_800C3FD4; // 800C3FCC
L_800C3FD0:;
  c->r[30]=0u+0x00000006u; // 800C3FD0
L_800C3FD4:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C3FD4
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C3FD8
  c->r[0]=c->r[0]|c->r[30]; // 800C3FDC
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C3FE0
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C3FE4
  cmps(c,0,(int32_t)c->r[0],0); // 800C3FE8
  if (!crb(c,2)) { goto L_800C3FFC; } // 800C3FEC
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C3FF0
  c->r[0]=c->r[0]|0x00000001u; // 800C3FF4
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C3FF8
L_800C3FFC:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C3FFC
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4000
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C4004
  if (crb(c,2)) { goto L_800C4018; } // 800C4008
  c->r[4]=0u+0x802A0000u; // 800C400C
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4010
  c->lr=0x800C4018u; f_8022893C(c); // 800C4014
L_800C4018:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4018
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C401C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4020
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4024
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4028
  c->lr=c->r[0]; // 800C402C
  c->r[1]=c->r[1]+0x00000020u; // 800C4030
  return; // 800C4034
}

// fn_800C4040
void f_800C4040(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4040
  c->r[5]=R8(c->r[3]+0x00000032u); // 800C4044
  cmps(c,0,(int32_t)c->r[0],0); // 800C4048
  c->r[0]=c->r[5]|c->r[4]; // 800C404C
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4050
  if (!crb(c,2)) { goto L_800C4064; } // 800C4054
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C4058
  c->r[0]=c->r[0]|0x00000001u; // 800C405C
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4060
L_800C4064:;
  c->r[0]=R8(c->r[3]+0x00000033u); // 800C4064
  c->r[4]=R8(c->r[3]+0x00000032u); // 800C4068
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800C406C
  if (crb(c,2)) return; // 800C4070
  c->r[4]=0u+0x802A0000u; // 800C4074
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4078
  f_8022893C(c); return; // 800C407C
  return; // 800C4080
}

// fn_800C4090
void f_800C4090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4090
  c->r[0]=c->lr; // 800C4094
  c->r[5]=0u+0x00000001u; // 800C4098
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C409C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C40A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C40A4
  c->r[30]=c->r[3]|c->r[3]; // 800C40A8
  c->r[3]=c->r[1]+0x00000008u; // 800C40AC
  c->r[4]=c->r[30]|c->r[30]; // 800C40B0
  c->lr=0x800C40B8u; f_800C44C0(c); // 800C40B4
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C40B8
  cmps(c,0,(int32_t)c->r[0],0); // 800C40BC
  if (crb(c,2)) { goto L_800C414C; } // 800C40C0
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C40C4
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C40C8
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C40CC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C40D0
  cmpu(c,0,c->r[4],c->r[0]); // 800C40D4
  if (!crb(c,0)) { goto L_800C40E4; } // 800C40D8
  c->r[3]=R8(c->r[4]+0x00000000u); // 800C40DC
  goto L_800C40F4; // 800C40E0
L_800C40E4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C40E4
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C40E8
  c->ctr=c->r[12]; // 800C40EC
  if (true) { c->lr=0x800C40F4u; dispatch(c,c->ctr); } // 800C40F0
L_800C40F4:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C40F4
  c->r[31]=c->r[3]|c->r[3]; // 800C40F8
  if (!crb(c,2)) { goto L_800C4144; } // 800C40FC
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C4100
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4104
  c->r[0]=c->r[0]|0x00000002u; // 800C4108
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C410C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4110
  cmps(c,0,(int32_t)c->r[0],0); // 800C4114
  if (!crb(c,2)) { goto L_800C4128; } // 800C4118
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C411C
  c->r[0]=c->r[0]|0x00000001u; // 800C4120
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4124
L_800C4128:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C4128
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C412C
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C4130
  if (crb(c,2)) { goto L_800C4144; } // 800C4134
  c->r[4]=0u+0x802A0000u; // 800C4138
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C413C
  c->lr=0x800C4144u; f_8022893C(c); // 800C4140
L_800C4144:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4144
  goto L_800C4150; // 800C4148
L_800C414C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C414C
L_800C4150:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4150
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4154
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4158
  c->lr=c->r[0]; // 800C415C
  c->r[1]=c->r[1]+0x00000020u; // 800C4160
  return; // 800C4164
}

// fn_800C4170
void f_800C4170(Ctx* __restrict c) {
  return; // 800C4170
}

// fn_800C4180
void f_800C4180(Ctx* __restrict c) {
  return; // 800C4180
}

// fn_800C4190
void f_800C4190(Ctx* __restrict c) {
  c->r[4]=0u+0xFFFFFFFFu; // 800C4190
  c->r[0]=0u+0x00000000u; // 800C4194
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C4198
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C419C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C41A0
  return; // 800C41A4
}

// fn_800C41B0
void f_800C41B0(Ctx* __restrict c) {
  c->r[4]=0u+0xFFFFFFFFu; // 800C41B0
  c->r[0]=0u+0x00000000u; // 800C41B4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C41B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C41BC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C41C0
  return; // 800C41C4
}

// fn_800C41D0
void f_800C41D0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800C41D0
  return; // 800C41D4
}

// fn_800C41E0
void f_800C41E0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800C41E0
  return; // 800C41E4
}

// fn_800C41F0
void f_800C41F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C41F0
  c->r[0]=c->lr; // 800C41F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C41F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C41FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4200
  c->r[30]=c->r[4]|c->r[4]; // 800C4204
  c->r[4]=c->r[1]+0x00000008u; // 800C4208
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C420C
  c->r[29]=c->r[3]|c->r[3]; // 800C4210
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C4214
  c->r[6]=R32(c->r[3]+0x00000008u); // 800C4218
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C421C
  c->r[0]=c->r[0]-c->r[6]; // 800C4220
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C4224
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800C4228
  if (!crb(c,0)) { goto L_800C4234; } // 800C422C
  c->r[4]=c->r[1]+0x0000000Cu; // 800C4230
L_800C4234:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 800C4234
  cmps(c,0,(int32_t)c->r[31],0); // 800C4238
  if (!crb(c,1)) { goto L_800C42C4; } // 800C423C
  c->r[4]=R32(c->r[29]+0x00000008u); // 800C4240
  c->r[3]=c->r[30]|c->r[30]; // 800C4244
  c->r[5]=c->r[31]|c->r[31]; // 800C4248
  c->lr=0x800C4250u; f_80004364(c); // 800C424C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C4250
  c->r[30]=c->r[30]+c->r[31]; // 800C4254
  c->r[0]=c->r[0]+c->r[31]; // 800C4258
  W32(c->r[29]+0x00000008u,c->r[0]); // 800C425C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C4260
  c->r[5]=c->r[0]-c->r[31]; // 800C4264
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C4268
  goto L_800C42C4; // 800C426C
L_800C4270:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 800C4270
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800C4274
  cmpu(c,0,c->r[3],c->r[0]); // 800C4278
  if (!crb(c,0)) { goto L_800C4290; } // 800C427C
  c->r[0]=c->r[3]+0x00000001u; // 800C4280
  W32(c->r[29]+0x00000008u,c->r[0]); // 800C4284
  c->r[3]=R8(c->r[3]+0x00000000u); // 800C4288
  goto L_800C42A4; // 800C428C
L_800C4290:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800C4290
  c->r[3]=c->r[29]|c->r[29]; // 800C4294
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C4298
  c->ctr=c->r[12]; // 800C429C
  if (true) { c->lr=0x800C42A4u; dispatch(c,c->ctr); } // 800C42A0
L_800C42A4:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C42A4
  if (crb(c,2)) { goto L_800C42CC; } // 800C42A8
  W8(c->r[30]+0x00000000u,c->r[3]); // 800C42AC
  c->r[31]=c->r[31]+0x00000001u; // 800C42B0
  c->r[30]=c->r[30]+0x00000001u; // 800C42B4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C42B8
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800C42BC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C42C0
L_800C42C4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C42C4
  if (crb(c,1)) { IRQCHK(c); goto L_800C4270; } // 800C42C8
L_800C42CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C42CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C42D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C42D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C42D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C42DC
  c->lr=c->r[0]; // 800C42E0
  c->r[1]=c->r[1]+0x00000020u; // 800C42E4
  return; // 800C42E8
}

// fn_800C42F0
void f_800C42F0(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 800C42F0
  return; // 800C42F4
}

// fn_800C4300
void f_800C4300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4300
  c->r[0]=c->lr; // 800C4304
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C430C
  c->r[31]=c->r[3]|c->r[3]; // 800C4310
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4314
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C4318
  c->ctr=c->r[12]; // 800C431C
  if (true) { c->lr=0x800C4324u; dispatch(c,c->ctr); } // 800C4320
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4324
  if (!crb(c,2)) { goto L_800C4334; } // 800C4328
  c->r[3]=0u+0xFFFFFFFFu; // 800C432C
  goto L_800C4344; // 800C4330
L_800C4334:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C4334
  c->r[0]=c->r[3]+0x00000001u; // 800C4338
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C433C
  c->r[3]=R8(c->r[3]+0x00000000u); // 800C4340
L_800C4344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4348
  c->lr=c->r[0]; // 800C434C
  c->r[1]=c->r[1]+0x00000010u; // 800C4350
  return; // 800C4354
}

// fn_800C4360
void f_800C4360(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 800C4360
  return; // 800C4364
}

// fn_800C4370
void f_800C4370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4370
  c->r[0]=c->lr; // 800C4374
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4378
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C437C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4380
  c->r[30]=c->r[4]|c->r[4]; // 800C4384
  c->r[4]=c->r[1]+0x00000008u; // 800C4388
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C438C
  c->r[29]=c->r[3]|c->r[3]; // 800C4390
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C4394
  c->r[6]=R32(c->r[3]+0x00000014u); // 800C4398
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C439C
  c->r[0]=c->r[0]-c->r[6]; // 800C43A0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C43A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800C43A8
  if (!crb(c,0)) { goto L_800C43B4; } // 800C43AC
  c->r[4]=c->r[1]+0x0000000Cu; // 800C43B0
L_800C43B4:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 800C43B4
  cmps(c,0,(int32_t)c->r[31],0); // 800C43B8
  if (!crb(c,1)) { goto L_800C4450; } // 800C43BC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800C43C0
  c->r[4]=c->r[30]|c->r[30]; // 800C43C4
  c->r[5]=c->r[31]|c->r[31]; // 800C43C8
  c->lr=0x800C43D0u; f_80004364(c); // 800C43CC
  c->r[0]=R32(c->r[29]+0x00000014u); // 800C43D0
  c->r[30]=c->r[30]+c->r[31]; // 800C43D4
  c->r[0]=c->r[0]+c->r[31]; // 800C43D8
  W32(c->r[29]+0x00000014u,c->r[0]); // 800C43DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C43E0
  c->r[5]=c->r[0]-c->r[31]; // 800C43E4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C43E8
  goto L_800C4450; // 800C43EC
L_800C43F0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 800C43F0
  c->r[0]=R32(c->r[29]+0x00000018u); // 800C43F4
  c->r[4]=R8(c->r[30]+0x00000000u); // 800C43F8
  c->r[30]=c->r[30]+0x00000001u; // 800C43FC
  cmpu(c,0,c->r[3],c->r[0]); // 800C4400
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800C4404
  if (!crb(c,0)) { goto L_800C4420; } // 800C4408
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C440C
  c->r[0]=c->r[3]+0x00000001u; // 800C4410
  W32(c->r[29]+0x00000014u,c->r[0]); // 800C4414
  c->r[3]=R8(c->r[3]+0x00000000u); // 800C4418
  goto L_800C4438; // 800C441C
L_800C4420:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800C4420
  c->r[3]=c->r[29]|c->r[29]; // 800C4424
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800C4428
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C442C
  c->ctr=c->r[12]; // 800C4430
  if (true) { c->lr=0x800C4438u; dispatch(c,c->ctr); } // 800C4434
L_800C4438:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4438
  if (crb(c,2)) { goto L_800C4458; } // 800C443C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C4440
  c->r[31]=c->r[31]+0x00000001u; // 800C4444
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800C4448
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C444C
L_800C4450:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C4450
  if (crb(c,1)) { IRQCHK(c); goto L_800C43F0; } // 800C4454
L_800C4458:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4458
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C445C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4460
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4464
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4468
  c->lr=c->r[0]; // 800C446C
  c->r[1]=c->r[1]+0x00000020u; // 800C4470
  return; // 800C4474
}

// fn_800C4480
void f_800C4480(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 800C4480
  return; // 800C4484
}

// fn_800C4490
void f_800C4490(Ctx* __restrict c) {
  c->r[4]=R32(c->r[4]+0x00000020u); // 800C4490
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4494
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C4498
  c->r[4]=R32(c->r[4]+0x00000004u); // 800C449C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C44A0
  cmps(c,0,(int32_t)c->r[4],0); // 800C44A4
  if (crb(c,2)) return; // 800C44A8
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C44AC
  c->r[0]=c->r[3]+0x00000001u; // 800C44B0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C44B4
  return; // 800C44B8
}

// fn_800C44C0
void f_800C44C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C44C0
  c->r[0]=c->lr; // 800C44C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C44C8
  c->r[11]=c->r[1]+0x00000050u; // 800C44CC
  c->lr=0x800C44D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C44D0
  cmps(c,0,(int32_t)c->r[5],0); // 800C44D4
  c->r[0]=0u+0x00000000u; // 800C44D8
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C44DC
  c->r[28]=c->r[3]|c->r[3]; // 800C44E0
  c->r[29]=c->r[4]|c->r[4]; // 800C44E4
  c->r[30]=c->r[5]|c->r[5]; // 800C44E8
  if (crb(c,2)) { goto L_800C44F4; } // 800C44EC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C44F0
L_800C44F4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C44F4
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C44F8
  cmps(c,0,(int32_t)c->r[0],0); // 800C44FC
  if (!crb(c,2)) { goto L_800C4A10; } // 800C4500
  c->r[31]=R32(c->r[3]+0x00000034u); // 800C4504
  cmps(c,0,(int32_t)c->r[31],0); // 800C4508
  if (crb(c,2)) { goto L_800C47D4; } // 800C450C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C4510
  c->r[4]=0u+0x00000000u; // 800C4514
  W8(c->r[1]+0x00000008u,c->r[4]); // 800C4518
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C451C
  W8(c->r[1]+0x00000009u,c->r[4]); // 800C4520
  cmps(c,0,(int32_t)c->r[0],0); // 800C4524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4528
  if (!crb(c,2)) { goto L_800C4600; } // 800C452C
  c->r[26]=R32(c->r[3]+0x00000034u); // 800C4530
  cmps(c,0,(int32_t)c->r[26],0); // 800C4534
  if (crb(c,2)) { goto L_800C45A0; } // 800C4538
  c->r[4]=c->r[26]|c->r[26]; // 800C453C
  c->r[3]=c->r[1]+0x00000010u; // 800C4540
  c->lr=0x800C4548u; f_800C4A70(c); // 800C4544
  c->r[0]=0u+0x00000001u; // 800C4548
  W8(c->r[1]+0x00000011u,c->r[0]); // 800C454C
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C4550
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4554
  cmps(c,0,(int32_t)c->r[3],0); // 800C4558
  if (crb(c,2)) { goto L_800C4594; } // 800C455C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4560
  c->r[27]=0u+0x00000000u; // 800C4564
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C4568
  c->ctr=c->r[12]; // 800C456C
  if (true) { c->lr=0x800C4574u; dispatch(c,c->ctr); } // 800C4570
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4574
  if (!crb(c,2)) { goto L_800C4580; } // 800C4578
  c->r[27]=0u+0x00000001u; // 800C457C
L_800C4580:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C4580
  if (crb(c,2)) { goto L_800C4594; } // 800C4584
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C4588
  c->r[4]=0u+0x00000001u; // 800C458C
  c->lr=0x800C4594u; f_800C4040(c); // 800C4590
L_800C4594:;
  c->r[3]=c->r[1]+0x00000010u; // 800C4594
  c->r[4]=0u+0xFFFFFFFFu; // 800C4598
  c->lr=0x800C45A0u; f_800C4BE0(c); // 800C459C
L_800C45A0:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C45A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C45A4
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C45A8
  cmps(c,0,(int32_t)c->r[0],0); // 800C45AC
  if (!crb(c,2)) { goto L_800C45C0; } // 800C45B0
  c->r[0]=0u+0x00000001u; // 800C45B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C45B8
  goto L_800C463C; // 800C45BC
L_800C45C0:;
  c->r[0]=c->r[0]|0x00000004u; // 800C45C0
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C45C4
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C45C8
  cmps(c,0,(int32_t)c->r[0],0); // 800C45CC
  if (!crb(c,2)) { goto L_800C45E0; } // 800C45D0
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C45D4
  c->r[0]=c->r[0]|0x00000001u; // 800C45D8
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C45DC
L_800C45E0:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C45E0
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C45E4
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C45E8
  if (crb(c,2)) { goto L_800C463C; } // 800C45EC
  c->r[4]=0u+0x802A0000u; // 800C45F0
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C45F4
  c->lr=0x800C45FCu; f_8022893C(c); // 800C45F8
  goto L_800C463C; // 800C45FC
L_800C4600:;
  c->r[0]=c->r[0]|0x00000004u; // 800C4600
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4604
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4608
  cmps(c,0,(int32_t)c->r[0],0); // 800C460C
  if (!crb(c,2)) { goto L_800C4620; } // 800C4610
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4614
  c->r[0]=c->r[0]|0x00000001u; // 800C4618
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C461C
L_800C4620:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C4620
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4624
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C4628
  if (crb(c,2)) { goto L_800C463C; } // 800C462C
  c->r[4]=0u+0x802A0000u; // 800C4630
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4634
  c->lr=0x800C463Cu; f_8022893C(c); // 800C4638
L_800C463C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C463C
  c->r[0]=0u+0x00000001u; // 800C4640
  W8(c->r[1]+0x00000009u,c->r[0]); // 800C4644
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4648
  cmps(c,0,(int32_t)c->r[3],0); // 800C464C
  if (crb(c,2)) { goto L_800C46C0; } // 800C4650
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4654
  c->r[27]=0u+0x00000000u; // 800C4658
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C465C
  c->ctr=c->r[12]; // 800C4660
  if (true) { c->lr=0x800C4668u; dispatch(c,c->ctr); } // 800C4664
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4668
  if (!crb(c,2)) { goto L_800C4674; } // 800C466C
  c->r[27]=0u+0x00000001u; // 800C4670
L_800C4674:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C4674
  if (crb(c,2)) { goto L_800C46C0; } // 800C4678
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C467C
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4680
  c->r[0]=c->r[0]|0x00000001u; // 800C4684
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4688
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C468C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4690
  if (!crb(c,2)) { goto L_800C46A4; } // 800C4694
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4698
  c->r[0]=c->r[0]|0x00000001u; // 800C469C
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C46A0
L_800C46A4:;
  c->r[0]=R8(c->r[3]+0x00000033u); // 800C46A4
  c->r[4]=R8(c->r[3]+0x00000032u); // 800C46A8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800C46AC
  if (crb(c,2)) { goto L_800C46C0; } // 800C46B0
  c->r[4]=0u+0x802A0000u; // 800C46B4
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C46B8
  c->lr=0x800C46C0u; f_8022893C(c); // 800C46BC
L_800C46C0:;
  c->r[26]=R32(c->r[1]+0x0000000Cu); // 800C46C0
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C46C4
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C46C8
  c->r[0]=c->r[0]&0x00000005u; cr0(c,c->r[0]); // 800C46CC
  if (!crb(c,2)) { goto L_800C47D4; } // 800C46D0
  c->r[0]=R16(c->r[3]+0x00000030u); // 800C46D4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C46D8
  if (crb(c,2)) { goto L_800C47D4; } // 800C46DC
  c->r[0]=R8(c->r[1]+0x00000009u); // 800C46E0
  cmps(c,0,(int32_t)c->r[0],0); // 800C46E4
  if (!crb(c,2)) { goto L_800C47D4; } // 800C46E8
  c->r[4]=c->r[26]|c->r[26]; // 800C46EC
  c->r[3]=c->r[1]+0x00000020u; // 800C46F0
  c->lr=0x800C46F8u; f_800C4A70(c); // 800C46F4
  c->r[0]=0u+0x00000001u; // 800C46F8
  W8(c->r[1]+0x00000021u,c->r[0]); // 800C46FC
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C4700
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4704
  cmps(c,0,(int32_t)c->r[3],0); // 800C4708
  if (crb(c,2)) { goto L_800C4744; } // 800C470C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4710
  c->r[31]=0u+0x00000000u; // 800C4714
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C4718
  c->ctr=c->r[12]; // 800C471C
  if (true) { c->lr=0x800C4724u; dispatch(c,c->ctr); } // 800C4720
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4724
  if (!crb(c,2)) { goto L_800C4730; } // 800C4728
  c->r[31]=0u+0x00000001u; // 800C472C
L_800C4730:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C4730
  if (crb(c,2)) { goto L_800C4744; } // 800C4734
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C4738
  c->r[4]=0u+0x00000001u; // 800C473C
  c->lr=0x800C4744u; f_800C4040(c); // 800C4740
L_800C4744:;
  c->r[26]=R32(c->r[1]+0x00000024u); // 800C4744
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C4748
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C474C
  c->r[0]=c->r[0]&0x00000005u; cr0(c,c->r[0]); // 800C4750
  if (!crb(c,2)) { goto L_800C47D4; } // 800C4754
  c->r[0]=R16(c->r[3]+0x00000030u); // 800C4758
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C475C
  if (crb(c,2)) { goto L_800C47D4; } // 800C4760
  c->r[0]=R8(c->r[1]+0x00000021u); // 800C4764
  cmps(c,0,(int32_t)c->r[0],0); // 800C4768
  if (!crb(c,2)) { goto L_800C47D4; } // 800C476C
  c->r[4]=c->r[26]|c->r[26]; // 800C4770
  c->r[3]=c->r[1]+0x00000018u; // 800C4774
  c->lr=0x800C477Cu; f_800C4A70(c); // 800C4778
  c->r[0]=0u+0x00000001u; // 800C477C
  W8(c->r[1]+0x00000019u,c->r[0]); // 800C4780
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C4784
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4788
  cmps(c,0,(int32_t)c->r[3],0); // 800C478C
  if (crb(c,2)) { goto L_800C47C8; } // 800C4790
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4794
  c->r[31]=0u+0x00000000u; // 800C4798
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C479C
  c->ctr=c->r[12]; // 800C47A0
  if (true) { c->lr=0x800C47A8u; dispatch(c,c->ctr); } // 800C47A4
  cmps(c,0,(int32_t)c->r[3],-1); // 800C47A8
  if (!crb(c,2)) { goto L_800C47B4; } // 800C47AC
  c->r[31]=0u+0x00000001u; // 800C47B0
L_800C47B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C47B4
  if (crb(c,2)) { goto L_800C47C8; } // 800C47B8
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C47BC
  c->r[4]=0u+0x00000001u; // 800C47C0
  c->lr=0x800C47C8u; f_800C4040(c); // 800C47C4
L_800C47C8:;
  c->r[3]=c->r[1]+0x00000018u; // 800C47C8
  c->r[4]=0u+0xFFFFFFFFu; // 800C47CC
  c->lr=0x800C47D4u; f_800C4BE0(c); // 800C47D0
L_800C47D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C47D4
  if (!crb(c,2)) { goto L_800C49B4; } // 800C47D8
  c->r[4]=R32(c->r[29]+0x00000000u); // 800C47DC
  c->r[0]=R16(c->r[4]+0x00000030u); // 800C47E0
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 800C47E4
  if (crb(c,2)) { goto L_800C49B4; } // 800C47E8
  c->r[3]=c->r[1]+0x00000028u; // 800C47EC
  c->lr=0x800C47F4u; f_800C4490(c); // 800C47F0
  c->r[30]=R32(c->r[13]+0xFFFFAF98u); // 800C47F4
  cmps(c,0,(int32_t)c->r[30],0); // 800C47F8
  if (!crb(c,2)) { goto L_800C4810; } // 800C47FC
  c->r[3]=R32(c->r[13]+0xFFFFAF68u); // 800C4800
  c->r[30]=c->r[3]+0x00000001u; // 800C4804
  W32(c->r[13]+0xFFFFAF68u,c->r[30]); // 800C4808
  W32(c->r[13]+0xFFFFAF98u,c->r[30]); // 800C480C
L_800C4810:;
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C4810
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4814
  cmpu(c,0,c->r[30],c->r[0]); // 800C4818
  if (!crb(c,0)) { goto L_800C4834; } // 800C481C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4820
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800C4824
  c->r[27]=R32(c->r[3]+c->r[0]); // 800C4828
  cmps(c,0,(int32_t)c->r[27],0); // 800C482C
  if (!crb(c,2)) { goto L_800C4890; } // 800C4830
L_800C4834:;
  c->r[3]=0u+0x00000018u; // 800C4834
  c->lr=0x800C483Cu; f_800B98F0(c); // 800C4838
  cmps(c,0,(int32_t)c->r[3],0); // 800C483C
  c->r[4]=c->r[3]|c->r[3]; // 800C4840
  if (crb(c,2)) { goto L_800C485C; } // 800C4844
  c->r[4]=0u+0x00000000u; // 800C4848
  c->r[5]=0u+0x00000000u; // 800C484C
  c->r[6]=0u+0x00000000u; // 800C4850
  c->lr=0x800C4858u; f_802298AC(c); // 800C4854
  c->r[4]=c->r[3]|c->r[3]; // 800C4858
L_800C485C:;
  c->r[5]=R32(c->r[13]+0xFFFFAF98u); // 800C485C
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C4860
  cmps(c,0,(int32_t)c->r[5],0); // 800C4864
  if (!crb(c,2)) { goto L_800C487C; } // 800C4868
  c->r[5]=R32(c->r[13]+0xFFFFAF68u); // 800C486C
  c->r[5]=c->r[5]+0x00000001u; // 800C4870
  W32(c->r[13]+0xFFFFAF68u,c->r[5]); // 800C4874
  W32(c->r[13]+0xFFFFAF98u,c->r[5]); // 800C4878
L_800C487C:;
  c->lr=0x800C4880u; f_80229030(c); // 800C487C
  c->r[3]=R32(c->r[1]+0x00000028u); // 800C4880
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800C4884
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4888
  c->r[27]=R32(c->r[3]+c->r[0]); // 800C488C
L_800C4890:;
  c->r[0]=addc(c,c->r[1],0x00000028u,0); cr0(c,c->r[0]); // 800C4890
  if (crb(c,2)) { goto L_800C48A8; } // 800C4894
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800C4898
  cmps(c,0,(int32_t)c->r[3],0); // 800C489C
  if (crb(c,2)) { goto L_800C48A8; } // 800C48A0
  c->lr=0x800C48A8u; f_8022A708(c); // 800C48A4
L_800C48A8:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C48A8
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C48AC
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C48B0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C48B4
  cmpu(c,0,c->r[4],c->r[0]); // 800C48B8
  if (!crb(c,0)) { goto L_800C48C8; } // 800C48BC
  c->r[3]=R8(c->r[4]+0x00000000u); // 800C48C0
  goto L_800C4954; // 800C48C4
L_800C48C8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C48C8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C48CC
  c->ctr=c->r[12]; // 800C48D0
  if (true) { c->lr=0x800C48D8u; dispatch(c,c->ctr); } // 800C48D4
  goto L_800C4954; // 800C48D8
L_800C48DC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C48DC
  c->r[30]=R32(c->r[3]+0x00000024u); // 800C48E0
  c->r[3]=R32(c->r[30]+0x00000008u); // 800C48E4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800C48E8
  cmpu(c,0,c->r[3],c->r[0]); // 800C48EC
  if (!crb(c,0)) { goto L_800C4904; } // 800C48F0
  c->r[0]=c->r[3]+0x00000001u; // 800C48F4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C48F8
  c->r[3]=R8(c->r[3]+0x00000000u); // 800C48FC
  goto L_800C4918; // 800C4900
L_800C4904:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800C4904
  c->r[3]=c->r[30]|c->r[30]; // 800C4908
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C490C
  c->ctr=c->r[12]; // 800C4910
  if (true) { c->lr=0x800C4918u; dispatch(c,c->ctr); } // 800C4914
L_800C4918:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4918
  if (!crb(c,2)) { goto L_800C4928; } // 800C491C
  c->r[3]=0u+0xFFFFFFFFu; // 800C4920
  goto L_800C4954; // 800C4924
L_800C4928:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800C4928
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800C492C
  cmpu(c,0,c->r[3],c->r[0]); // 800C4930
  if (!crb(c,0)) { goto L_800C4940; } // 800C4934
  c->r[3]=R8(c->r[3]+0x00000000u); // 800C4938
  goto L_800C4954; // 800C493C
L_800C4940:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800C4940
  c->r[3]=c->r[30]|c->r[30]; // 800C4944
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C4948
  c->ctr=c->r[12]; // 800C494C
  if (true) { c->lr=0x800C4954u; dispatch(c,c->ctr); } // 800C4950
L_800C4954:;
  c->r[4]=R32(c->r[27]+0x00000008u); // 800C4954
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 800C4958
  c->r[0]=R16(c->r[4]+c->r[0]); // 800C495C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 800C4960
  if (!crb(c,2)) { IRQCHK(c); goto L_800C48DC; } // 800C4964
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4968
  if (!crb(c,2)) { goto L_800C49B4; } // 800C496C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C4970
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4974
  c->r[0]=c->r[0]|0x00000006u; // 800C4978
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C497C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4980
  cmps(c,0,(int32_t)c->r[0],0); // 800C4984
  if (!crb(c,2)) { goto L_800C4998; } // 800C4988
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C498C
  c->r[0]=c->r[0]|0x00000001u; // 800C4990
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4994
L_800C4998:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C4998
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C499C
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C49A0
  if (crb(c,2)) { goto L_800C49B4; } // 800C49A4
  c->r[4]=0u+0x802A0000u; // 800C49A8
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C49AC
  c->lr=0x800C49B4u; f_8022893C(c); // 800C49B0
L_800C49B4:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C49B4
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C49B8
  cmps(c,0,(int32_t)c->r[0],0); // 800C49BC
  if (!crb(c,2)) { goto L_800C49D0; } // 800C49C0
  c->r[0]=0u+0x00000001u; // 800C49C4
  W8(c->r[28]+0x00000000u,c->r[0]); // 800C49C8
  goto L_800C4A4C; // 800C49CC
L_800C49D0:;
  c->r[0]=c->r[0]|0x00000004u; // 800C49D0
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C49D4
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C49D8
  cmps(c,0,(int32_t)c->r[0],0); // 800C49DC
  if (!crb(c,2)) { goto L_800C49F0; } // 800C49E0
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C49E4
  c->r[0]=c->r[0]|0x00000001u; // 800C49E8
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C49EC
L_800C49F0:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C49F0
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C49F4
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C49F8
  if (crb(c,2)) { goto L_800C4A4C; } // 800C49FC
  c->r[4]=0u+0x802A0000u; // 800C4A00
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4A04
  c->lr=0x800C4A0Cu; f_8022893C(c); // 800C4A08
  goto L_800C4A4C; // 800C4A0C
L_800C4A10:;
  c->r[0]=c->r[0]|0x00000004u; // 800C4A10
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4A14
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4A18
  cmps(c,0,(int32_t)c->r[0],0); // 800C4A1C
  if (!crb(c,2)) { goto L_800C4A30; } // 800C4A20
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4A24
  c->r[0]=c->r[0]|0x00000001u; // 800C4A28
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4A2C
L_800C4A30:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C4A30
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4A34
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C4A38
  if (crb(c,2)) { goto L_800C4A4C; } // 800C4A3C
  c->r[4]=0u+0x802A0000u; // 800C4A40
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4A44
  c->lr=0x800C4A4Cu; f_8022893C(c); // 800C4A48
L_800C4A4C:;
  c->r[11]=c->r[1]+0x00000050u; // 800C4A4C
  c->r[3]=c->r[28]|c->r[28]; // 800C4A50
  c->lr=0x800C4A58u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4A54
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C4A58
  c->lr=c->r[0]; // 800C4A5C
  c->r[1]=c->r[1]+0x00000050u; // 800C4A60
  return; // 800C4A64
}

// fn_800C4A70
void f_800C4A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4A70
  c->r[0]=c->lr; // 800C4A74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4A78
  c->r[0]=0u+0x00000000u; // 800C4A7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4A80
  c->r[31]=c->r[3]|c->r[3]; // 800C4A84
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4A88
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C4A8C
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C4A90
  W8(c->r[3]+0x00000001u,c->r[0]); // 800C4A94
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C4A98
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C4A9C
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4AA0
  cmps(c,0,(int32_t)c->r[0],0); // 800C4AA4
  if (!crb(c,2)) { goto L_800C4B7C; } // 800C4AA8
  c->r[29]=R32(c->r[3]+0x00000034u); // 800C4AAC
  cmps(c,0,(int32_t)c->r[29],0); // 800C4AB0
  if (crb(c,2)) { goto L_800C4B1C; } // 800C4AB4
  c->r[4]=c->r[29]|c->r[29]; // 800C4AB8
  c->r[3]=c->r[1]+0x00000008u; // 800C4ABC
  c->lr=0x800C4AC4u; f_800C4A70(c); // 800C4AC0
  c->r[0]=0u+0x00000001u; // 800C4AC4
  W8(c->r[1]+0x00000009u,c->r[0]); // 800C4AC8
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C4ACC
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4AD0
  cmps(c,0,(int32_t)c->r[3],0); // 800C4AD4
  if (crb(c,2)) { goto L_800C4B10; } // 800C4AD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4ADC
  c->r[30]=0u+0x00000000u; // 800C4AE0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C4AE4
  c->ctr=c->r[12]; // 800C4AE8
  if (true) { c->lr=0x800C4AF0u; dispatch(c,c->ctr); } // 800C4AEC
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4AF0
  if (!crb(c,2)) { goto L_800C4AFC; } // 800C4AF4
  c->r[30]=0u+0x00000001u; // 800C4AF8
L_800C4AFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C4AFC
  if (crb(c,2)) { goto L_800C4B10; } // 800C4B00
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C4B04
  c->r[4]=0u+0x00000001u; // 800C4B08
  c->lr=0x800C4B10u; f_800C4040(c); // 800C4B0C
L_800C4B10:;
  c->r[3]=c->r[1]+0x00000008u; // 800C4B10
  c->r[4]=0u+0xFFFFFFFFu; // 800C4B14
  c->lr=0x800C4B1Cu; f_800C4BE0(c); // 800C4B18
L_800C4B1C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800C4B1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4B20
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4B24
  cmps(c,0,(int32_t)c->r[0],0); // 800C4B28
  if (!crb(c,2)) { goto L_800C4B3C; } // 800C4B2C
  c->r[0]=0u+0x00000001u; // 800C4B30
  W8(c->r[31]+0x00000000u,c->r[0]); // 800C4B34
  goto L_800C4BB8; // 800C4B38
L_800C4B3C:;
  c->r[0]=c->r[0]|0x00000004u; // 800C4B3C
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4B40
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4B44
  cmps(c,0,(int32_t)c->r[0],0); // 800C4B48
  if (!crb(c,2)) { goto L_800C4B5C; } // 800C4B4C
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4B50
  c->r[0]=c->r[0]|0x00000001u; // 800C4B54
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4B58
L_800C4B5C:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C4B5C
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4B60
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C4B64
  if (crb(c,2)) { goto L_800C4BB8; } // 800C4B68
  c->r[4]=0u+0x802A0000u; // 800C4B6C
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4B70
  c->lr=0x800C4B78u; f_8022893C(c); // 800C4B74
  goto L_800C4BB8; // 800C4B78
L_800C4B7C:;
  c->r[0]=c->r[0]|0x00000004u; // 800C4B7C
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4B80
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C4B84
  cmps(c,0,(int32_t)c->r[0],0); // 800C4B88
  if (!crb(c,2)) { goto L_800C4B9C; } // 800C4B8C
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4B90
  c->r[0]=c->r[0]|0x00000001u; // 800C4B94
  W8(c->r[3]+0x00000032u,c->r[0]); // 800C4B98
L_800C4B9C:;
  c->r[4]=R8(c->r[3]+0x00000033u); // 800C4B9C
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4BA0
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 800C4BA4
  if (crb(c,2)) { goto L_800C4BB8; } // 800C4BA8
  c->r[4]=0u+0x802A0000u; // 800C4BAC
  c->r[4]=c->r[4]+0xFFFFFA34u; // 800C4BB0
  c->lr=0x800C4BB8u; f_8022893C(c); // 800C4BB4
L_800C4BB8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4BB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4BBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4BC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4BC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4BC8
  c->lr=c->r[0]; // 800C4BCC
  c->r[1]=c->r[1]+0x00000020u; // 800C4BD0
  return; // 800C4BD4
}

// fn_800C4BE0
void f_800C4BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4BE0
  c->r[0]=c->lr; // 800C4BE4
  cmps(c,0,(int32_t)c->r[3],0); // 800C4BE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C4BEC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C4BF0
  c->r[31]=c->r[4]|c->r[4]; // 800C4BF4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C4BF8
  c->r[30]=c->r[3]|c->r[3]; // 800C4BFC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C4C00
  W32(c->r[1]+0x00000020u,c->r[28]); // 800C4C04
  if (crb(c,2)) { goto L_800C4D30; } // 800C4C08
  c->r[28]=R32(c->r[3]+0x00000004u); // 800C4C0C
  c->r[4]=R32(c->r[28]+0x00000000u); // 800C4C10
  c->r[0]=R8(c->r[4]+0x00000032u); // 800C4C14
  c->r[0]=c->r[0]&0x00000005u; cr0(c,c->r[0]); // 800C4C18
  if (!crb(c,2)) { goto L_800C4D20; } // 800C4C1C
  c->r[0]=R16(c->r[4]+0x00000030u); // 800C4C20
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C4C24
  if (crb(c,2)) { goto L_800C4D20; } // 800C4C28
  c->r[0]=R8(c->r[3]+0x00000001u); // 800C4C2C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4C30
  if (!crb(c,2)) { goto L_800C4D20; } // 800C4C34
  c->r[4]=c->r[28]|c->r[28]; // 800C4C38
  c->r[3]=c->r[1]+0x00000010u; // 800C4C3C
  c->lr=0x800C4C44u; f_800C4A70(c); // 800C4C40
  c->r[0]=0u+0x00000001u; // 800C4C44
  W8(c->r[1]+0x00000011u,c->r[0]); // 800C4C48
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C4C4C
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4C50
  cmps(c,0,(int32_t)c->r[3],0); // 800C4C54
  if (crb(c,2)) { goto L_800C4C90; } // 800C4C58
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4C5C
  c->r[29]=0u+0x00000000u; // 800C4C60
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C4C64
  c->ctr=c->r[12]; // 800C4C68
  if (true) { c->lr=0x800C4C70u; dispatch(c,c->ctr); } // 800C4C6C
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4C70
  if (!crb(c,2)) { goto L_800C4C7C; } // 800C4C74
  c->r[29]=0u+0x00000001u; // 800C4C78
L_800C4C7C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C4C7C
  if (crb(c,2)) { goto L_800C4C90; } // 800C4C80
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C4C84
  c->r[4]=0u+0x00000001u; // 800C4C88
  c->lr=0x800C4C90u; f_800C4040(c); // 800C4C8C
L_800C4C90:;
  c->r[28]=R32(c->r[1]+0x00000014u); // 800C4C90
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C4C94
  c->r[0]=R8(c->r[3]+0x00000032u); // 800C4C98
  c->r[0]=c->r[0]&0x00000005u; cr0(c,c->r[0]); // 800C4C9C
  if (!crb(c,2)) { goto L_800C4D20; } // 800C4CA0
  c->r[0]=R16(c->r[3]+0x00000030u); // 800C4CA4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800C4CA8
  if (crb(c,2)) { goto L_800C4D20; } // 800C4CAC
  c->r[0]=R8(c->r[1]+0x00000011u); // 800C4CB0
  cmps(c,0,(int32_t)c->r[0],0); // 800C4CB4
  if (!crb(c,2)) { goto L_800C4D20; } // 800C4CB8
  c->r[4]=c->r[28]|c->r[28]; // 800C4CBC
  c->r[3]=c->r[1]+0x00000008u; // 800C4CC0
  c->lr=0x800C4CC8u; f_800C4A70(c); // 800C4CC4
  c->r[0]=0u+0x00000001u; // 800C4CC8
  W8(c->r[1]+0x00000009u,c->r[0]); // 800C4CCC
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C4CD0
  c->r[3]=R32(c->r[3]+0x00000024u); // 800C4CD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C4CD8
  if (crb(c,2)) { goto L_800C4D14; } // 800C4CDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4CE0
  c->r[29]=0u+0x00000000u; // 800C4CE4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C4CE8
  c->ctr=c->r[12]; // 800C4CEC
  if (true) { c->lr=0x800C4CF4u; dispatch(c,c->ctr); } // 800C4CF0
  cmps(c,0,(int32_t)c->r[3],-1); // 800C4CF4
  if (!crb(c,2)) { goto L_800C4D00; } // 800C4CF8
  c->r[29]=0u+0x00000001u; // 800C4CFC
L_800C4D00:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C4D00
  if (crb(c,2)) { goto L_800C4D14; } // 800C4D04
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C4D08
  c->r[4]=0u+0x00000001u; // 800C4D0C
  c->lr=0x800C4D14u; f_800C4040(c); // 800C4D10
L_800C4D14:;
  c->r[3]=c->r[1]+0x00000008u; // 800C4D14
  c->r[4]=0u+0xFFFFFFFFu; // 800C4D18
  c->lr=0x800C4D20u; f_800C4BE0(c); // 800C4D1C
L_800C4D20:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C4D20
  if (!crb(c,1)) { goto L_800C4D30; } // 800C4D24
  c->r[3]=c->r[30]|c->r[30]; // 800C4D28
  c->lr=0x800C4D30u; f_800B9AD0(c); // 800C4D2C
L_800C4D30:;
  c->r[3]=c->r[30]|c->r[30]; // 800C4D30
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C4D34
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C4D38
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C4D3C
  c->r[28]=R32(c->r[1]+0x00000020u); // 800C4D40
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C4D44
  c->lr=c->r[0]; // 800C4D48
  c->r[1]=c->r[1]+0x00000030u; // 800C4D4C
  return; // 800C4D50
}

// fn_800C4D60
void f_800C4D60(Ctx* __restrict c) {
  c->r[11]=0u+0x0000003Cu; // 800C4D60
  c->r[11]=R32(c->r[3]+c->r[11]); // 800C4D64
  c->r[3]=c->r[3]+c->r[11]; // 800C4D68
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800C4D6C
  f_800C3260(c); return; // 800C4D70
}

// fn_800C4D80
void f_800C4D80(Ctx* __restrict c) {
  c->r[11]=0u+0x0000003Cu; // 800C4D80
  c->r[11]=R32(c->r[3]+c->r[11]); // 800C4D84
  c->r[3]=c->r[3]+c->r[11]; // 800C4D88
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 800C4D8C
  f_800C33C0(c); return; // 800C4D90
}

// fn_800C4DA0
void f_800C4DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4DA0
  c->r[0]=c->lr; // 800C4DA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4DA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4DAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4DB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C4DB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C4DB8
  c->r[28]=c->r[3]|c->r[3]; // 800C4DBC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4DC0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C4DC4
  if (!crb(c,2)) { goto L_800C4DD4; } // 800C4DC8
  c->r[31]=c->r[4]+0x00000001u; // 800C4DCC
  goto L_800C4DD8; // 800C4DD0
L_800C4DD4:;
  c->r[31]=R32(c->r[4]+0x00000008u); // 800C4DD4
L_800C4DD8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4DD8
  c->lr=0x800C4DE0u; f_800F1E60(c); // 800C4DDC
  c->r[30]=c->r[3]|c->r[3]; // 800C4DE0
  c->lr=0x800C4DE8u; f_800B99E0(c); // 800C4DE4
  c->r[29]=c->r[3]|c->r[3]; // 800C4DE8
  c->r[3]=c->r[31]|c->r[31]; // 800C4DEC
  c->r[4]=c->r[29]|c->r[29]; // 800C4DF0
  c->lr=0x800C4DF8u; f_800F1EA0(c); // 800C4DF4
  c->r[0]=0u+0x00000000u; // 800C4DF8
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C4DFC
  c->r[3]=c->r[28]|c->r[28]; // 800C4E00
  c->r[4]=c->r[30]|c->r[30]; // 800C4E04
  W32(c->r[28]+0x00000004u,c->r[0]); // 800C4E08
  W32(c->r[28]+0x00000008u,c->r[0]); // 800C4E0C
  c->lr=0x800C4E14u; f_80007C00(c); // 800C4E10
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C4E14
  c->r[3]=c->r[28]|c->r[28]; // 800C4E18
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C4E1C
  c->r[6]=c->r[29]|c->r[29]; // 800C4E20
  c->r[7]=c->r[29]+c->r[30]; // 800C4E24
  c->r[8]=c->r[1]+0x00000008u; // 800C4E28
  c->r[4]=0u+0x00000000u; // 800C4E2C
  c->r[5]=0u+0x00000000u; // 800C4E30
  c->lr=0x800C4E38u; f_80007DC0(c); // 800C4E34
  c->r[3]=c->r[29]|c->r[29]; // 800C4E38
  c->lr=0x800C4E40u; f_800B9AF0(c); // 800C4E3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4E40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4E44
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4E48
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4E4C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C4E50
  c->lr=c->r[0]; // 800C4E54
  c->r[1]=c->r[1]+0x00000020u; // 800C4E58
  return; // 800C4E5C
}

// fn_800C4E60
void f_800C4E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4E60
  c->r[0]=c->lr; // 800C4E64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4E68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4E6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4E70
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C4E74
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C4E78
  c->r[28]=c->r[3]|c->r[3]; // 800C4E7C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4E80
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C4E84
  if (!crb(c,2)) { goto L_800C4E94; } // 800C4E88
  c->r[31]=c->r[4]+0x00000001u; // 800C4E8C
  goto L_800C4E98; // 800C4E90
L_800C4E94:;
  c->r[31]=R32(c->r[4]+0x00000008u); // 800C4E94
L_800C4E98:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4E98
  c->lr=0x800C4EA0u; f_800F1E60(c); // 800C4E9C
  c->r[30]=c->r[3]|c->r[3]; // 800C4EA0
  c->lr=0x800C4EA8u; f_800B99E0(c); // 800C4EA4
  c->r[29]=c->r[3]|c->r[3]; // 800C4EA8
  c->r[3]=c->r[31]|c->r[31]; // 800C4EAC
  c->r[4]=c->r[29]|c->r[29]; // 800C4EB0
  c->lr=0x800C4EB8u; f_800F1FF0(c); // 800C4EB4
  c->r[0]=0u+0x00000000u; // 800C4EB8
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C4EBC
  c->r[3]=c->r[28]|c->r[28]; // 800C4EC0
  c->r[4]=c->r[30]|c->r[30]; // 800C4EC4
  W32(c->r[28]+0x00000004u,c->r[0]); // 800C4EC8
  W32(c->r[28]+0x00000008u,c->r[0]); // 800C4ECC
  c->lr=0x800C4ED4u; f_80007C00(c); // 800C4ED0
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C4ED4
  c->r[3]=c->r[28]|c->r[28]; // 800C4ED8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C4EDC
  c->r[6]=c->r[29]|c->r[29]; // 800C4EE0
  c->r[7]=c->r[29]+c->r[30]; // 800C4EE4
  c->r[8]=c->r[1]+0x00000008u; // 800C4EE8
  c->r[4]=0u+0x00000000u; // 800C4EEC
  c->r[5]=0u+0x00000000u; // 800C4EF0
  c->lr=0x800C4EF8u; f_80007DC0(c); // 800C4EF4
  c->r[3]=c->r[29]|c->r[29]; // 800C4EF8
  c->lr=0x800C4F00u; f_800B9AF0(c); // 800C4EFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4F00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4F04
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4F08
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4F0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C4F10
  c->lr=c->r[0]; // 800C4F14
  c->r[1]=c->r[1]+0x00000020u; // 800C4F18
  return; // 800C4F1C
}

// PPCMfmsr
void f_800C4F20(Ctx* __restrict c) {
  trace_call(0x800C4F20u);
  c->r[3]=c->msr; // 800C4F20
  return; // 800C4F24
}

// PPCMtmsr
void f_800C4F30(Ctx* __restrict c) {
  trace_call(0x800C4F30u);
  c->msr=c->r[3]; // 800C4F30
  return; // 800C4F34
}

// PPCMfhid0
void f_800C4F40(Ctx* __restrict c) {
  trace_call(0x800C4F40u);
  c->r[3]=mfspr(c,1008); // 800C4F40
  return; // 800C4F44
}

// fn_800C4F50
void f_800C4F50(Ctx* __restrict c) {
  mtspr(c,1008,c->r[3]); // 800C4F50
  return; // 800C4F54
}

// PPCMfl2cr
void f_800C4F60(Ctx* __restrict c) {
  trace_call(0x800C4F60u);
  c->r[3]=mfspr(c,1017); // 800C4F60
  return; // 800C4F64
}

// PPCMtl2cr
void f_800C4F70(Ctx* __restrict c) {
  trace_call(0x800C4F70u);
  mtspr(c,1017,c->r[3]); // 800C4F70
  return; // 800C4F74
}

// PPCMtdec
void f_800C4F80(Ctx* __restrict c) {
  trace_call(0x800C4F80u);
  mtspr(c,22,c->r[3]); // 800C4F80
  return; // 800C4F84
}

// fn_800C4F90
void f_800C4F90(Ctx* __restrict c) {
  sc(c,0x800C4F90u); // 800C4F90
  return; // 800C4F94
}

// PPCHalt
void f_800C4FA0(Ctx* __restrict c) {
  trace_call(0x800C4FA0u);
  /* sync */ // 800C4FA0
L_800C4FA4:;
  c->r[0]=c->r[0]|0x00000000u; // 800C4FA4
  c->r[3]=0u+0x00000000u; // 800C4FA8
  c->r[0]=c->r[0]|0x00000000u; // 800C4FAC
  IRQCHK(c); goto L_800C4FA4; // 800C4FB0
}

// PPCMtmmcr0
void f_800C4FC0(Ctx* __restrict c) {
  trace_call(0x800C4FC0u);
  mtspr(c,952,c->r[3]); // 800C4FC0
  return; // 800C4FC4
}

// PPCMtmmcr1
void f_800C4FD0(Ctx* __restrict c) {
  trace_call(0x800C4FD0u);
  mtspr(c,956,c->r[3]); // 800C4FD0
  return; // 800C4FD4
}

// PPCMtpmc1
void f_800C4FE0(Ctx* __restrict c) {
  trace_call(0x800C4FE0u);
  mtspr(c,953,c->r[3]); // 800C4FE0
  return; // 800C4FE4
}

// PPCMtpmc2
void f_800C4FF0(Ctx* __restrict c) {
  trace_call(0x800C4FF0u);
  mtspr(c,954,c->r[3]); // 800C4FF0
  return; // 800C4FF4
}

// PPCMtpmc3
void f_800C5000(Ctx* __restrict c) {
  trace_call(0x800C5000u);
  mtspr(c,957,c->r[3]); // 800C5000
  return; // 800C5004
}

// PPCMtpmc4
void f_800C5010(Ctx* __restrict c) {
  trace_call(0x800C5010u);
  mtspr(c,958,c->r[3]); // 800C5010
  return; // 800C5014
}

// PPCMffpscr
void f_800C5020(Ctx* __restrict c) {
  trace_call(0x800C5020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5020
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800C5024
  c->f[31]=u2d((uint64_t)c->fpscr); // 800C5028
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800C502C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800C5030
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C5034
  c->r[1]=c->r[1]+0x00000020u; // 800C5038
  return; // 800C503C
}

// PPCMtfpscr
void f_800C5040(Ctx* __restrict c) {
  trace_call(0x800C5040u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5040
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800C5044
  c->r[4]=0u+0x00000000u; // 800C5048
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C504C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C5050
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800C5054
  c->fpscr=(uint32_t)d2u(c->f[31]); // 800C5058
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800C505C
  c->r[1]=c->r[1]+0x00000020u; // 800C5060
  return; // 800C5064
}

// PPCMfhid2
void f_800C5070(Ctx* __restrict c) {
  trace_call(0x800C5070u);
  c->r[3]=mfspr(c,920); // 800C5070
  return; // 800C5074
}

// PPCMthid2
void f_800C5080(Ctx* __restrict c) {
  trace_call(0x800C5080u);
  mtspr(c,920,c->r[3]); // 800C5080
  return; // 800C5084
}

// PPCMtwpar
void f_800C5090(Ctx* __restrict c) {
  trace_call(0x800C5090u);
  mtspr(c,921,c->r[3]); // 800C5090
  return; // 800C5094
}

// PPCDisableSpeculation
void f_800C50A0(Ctx* __restrict c) {
  trace_call(0x800C50A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C50A0
  c->r[0]=c->lr; // 800C50A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C50A8
  c->lr=0x800C50B0u; f_800C4F40(c); // 800C50AC
  c->r[3]=c->r[3]|0x00000200u; // 800C50B0
  c->lr=0x800C50B8u; f_800C4F50(c); // 800C50B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C50B8
  c->lr=c->r[0]; // 800C50BC
  c->r[1]=c->r[1]+0x00000010u; // 800C50C0
  return; // 800C50C4
}

// PPCSetFpNonIEEEMode
void f_800C50D0(Ctx* __restrict c) {
  trace_call(0x800C50D0u);
  c->fpscr|=0x00000004u; // 800C50D0
  return; // 800C50D4
}

// PPCMthid4
void f_800C50E0(Ctx* __restrict c) {
  trace_call(0x800C50E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C50E0
  c->r[0]=c->lr; // 800C50E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C50E8
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800C50EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C50F0
  c->r[31]=c->r[3]|c->r[3]; // 800C50F4
  if (crb(c,2)) { goto L_800C5104; } // 800C50F8
  mtspr(c,1011,c->r[3]); // 800C50FC
  goto L_800C511C; // 800C5100
L_800C5104:;
  c->r[3]=0u+0x802A0000u; // 800C5104
  c->r[3]=c->r[3]+0xFFFFFA50u; // 800C5108
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C510C
  c->lr=0x800C5114u; f_800C8450(c); // 800C5110
  c->r[31]=c->r[31]|0x80000000u; // 800C5114
  mtspr(c,1011,c->r[31]); // 800C5118
L_800C511C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C511C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5120
  c->lr=c->r[0]; // 800C5124
  c->r[1]=c->r[1]+0x00000010u; // 800C5128
  return; // 800C512C
}

// __OSFPRInit
void f_800C5130(Ctx* __restrict c) {
  trace_call(0x800C5130u);
  c->r[3]=c->msr; // 800C5130
  c->r[3]=c->r[3]|0x00002000u; // 800C5134
  c->msr=c->r[3]; // 800C5138
  c->r[3]=mfspr(c,920); // 800C513C
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 800C5140
  if (crb(c,2)) { goto L_800C51D0; } // 800C5144
  c->r[3]=0u+0x803A0000u; // 800C5148
  c->r[3]=c->r[3]+0xFFFFAA00u; // 800C514C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800C5150
  {double t0=c->f[0], t1=c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 800C5154
  {double t0=c->f[0], t1=c->ps1[0]; c->f[2]=t0; c->ps1[2]=t1;} // 800C5158
  {double t0=c->f[0], t1=c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 800C515C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[4]=t0; c->ps1[4]=t1;} // 800C5160
  {double t0=c->f[0], t1=c->ps1[0]; c->f[5]=t0; c->ps1[5]=t1;} // 800C5164
  {double t0=c->f[0], t1=c->ps1[0]; c->f[6]=t0; c->ps1[6]=t1;} // 800C5168
  {double t0=c->f[0], t1=c->ps1[0]; c->f[7]=t0; c->ps1[7]=t1;} // 800C516C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[8]=t0; c->ps1[8]=t1;} // 800C5170
  {double t0=c->f[0], t1=c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 800C5174
  {double t0=c->f[0], t1=c->ps1[0]; c->f[10]=t0; c->ps1[10]=t1;} // 800C5178
  {double t0=c->f[0], t1=c->ps1[0]; c->f[11]=t0; c->ps1[11]=t1;} // 800C517C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[12]=t0; c->ps1[12]=t1;} // 800C5180
  {double t0=c->f[0], t1=c->ps1[0]; c->f[13]=t0; c->ps1[13]=t1;} // 800C5184
  {double t0=c->f[0], t1=c->ps1[0]; c->f[14]=t0; c->ps1[14]=t1;} // 800C5188
  {double t0=c->f[0], t1=c->ps1[0]; c->f[15]=t0; c->ps1[15]=t1;} // 800C518C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[16]=t0; c->ps1[16]=t1;} // 800C5190
  {double t0=c->f[0], t1=c->ps1[0]; c->f[17]=t0; c->ps1[17]=t1;} // 800C5194
  {double t0=c->f[0], t1=c->ps1[0]; c->f[18]=t0; c->ps1[18]=t1;} // 800C5198
  {double t0=c->f[0], t1=c->ps1[0]; c->f[19]=t0; c->ps1[19]=t1;} // 800C519C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[20]=t0; c->ps1[20]=t1;} // 800C51A0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[21]=t0; c->ps1[21]=t1;} // 800C51A4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[22]=t0; c->ps1[22]=t1;} // 800C51A8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[23]=t0; c->ps1[23]=t1;} // 800C51AC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[24]=t0; c->ps1[24]=t1;} // 800C51B0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[25]=t0; c->ps1[25]=t1;} // 800C51B4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[26]=t0; c->ps1[26]=t1;} // 800C51B8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[27]=t0; c->ps1[27]=t1;} // 800C51BC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[28]=t0; c->ps1[28]=t1;} // 800C51C0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[29]=t0; c->ps1[29]=t1;} // 800C51C4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[30]=t0; c->ps1[30]=t1;} // 800C51C8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[31]=t0; c->ps1[31]=t1;} // 800C51CC
L_800C51D0:;
  {uint32_t ea=c->r[13]+0xFFFFA468u; c->f[0]=RF64(ea);} // 800C51D0
  c->f[1]=c->f[0]; // 800C51D4
  c->f[2]=c->f[0]; // 800C51D8
  c->f[3]=c->f[0]; // 800C51DC
  c->f[4]=c->f[0]; // 800C51E0
  c->f[5]=c->f[0]; // 800C51E4
  c->f[6]=c->f[0]; // 800C51E8
  c->f[7]=c->f[0]; // 800C51EC
  c->f[8]=c->f[0]; // 800C51F0
  c->f[9]=c->f[0]; // 800C51F4
  c->f[10]=c->f[0]; // 800C51F8
  c->f[11]=c->f[0]; // 800C51FC
  c->f[12]=c->f[0]; // 800C5200
  c->f[13]=c->f[0]; // 800C5204
  c->f[14]=c->f[0]; // 800C5208
  c->f[15]=c->f[0]; // 800C520C
  c->f[16]=c->f[0]; // 800C5210
  c->f[17]=c->f[0]; // 800C5214
  c->f[18]=c->f[0]; // 800C5218
  c->f[19]=c->f[0]; // 800C521C
  c->f[20]=c->f[0]; // 800C5220
  c->f[21]=c->f[0]; // 800C5224
  c->f[22]=c->f[0]; // 800C5228
  c->f[23]=c->f[0]; // 800C522C
  c->f[24]=c->f[0]; // 800C5230
  c->f[25]=c->f[0]; // 800C5234
  c->f[26]=c->f[0]; // 800C5238
  c->f[27]=c->f[0]; // 800C523C
  c->f[28]=c->f[0]; // 800C5240
  c->f[29]=c->f[0]; // 800C5244
  c->f[30]=c->f[0]; // 800C5248
  c->f[31]=c->f[0]; // 800C524C
  c->fpscr=(uint32_t)d2u(c->f[0]); // 800C5250
  return; // 800C5254
}

// __OSGetIOSRev
void f_800C5260(Ctx* __restrict c) {
  trace_call(0x800C5260u);
  c->r[4]=0u+0xC0000000u; // 800C5260
  c->r[10]=R32(c->r[4]+0x00003144u); // 800C5264
  c->r[9]=R32(c->r[4]+0x00003140u); // 800C5268
  c->r[0]=rotl(c->r[10],28)&0x0000000Fu; // 800C526C
  c->r[6]=rotl(c->r[10],12)&0x0000000Fu; // 800C5270
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C5274
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800C5278
  c->r[0]=rotl(c->r[10],0)&0x0000000Fu; // 800C527C
  W8(c->r[3]+0x00000000u,c->r[7]); // 800C5280
  c->r[8]=rotl(c->r[9],16)&0x000000FFu; // 800C5284
  c->r[4]=c->r[0]+c->r[4]; // 800C5288
  c->r[0]=c->r[4]+0x000007D0u; // 800C528C
  c->r[5]=rotl(c->r[10],20)&0x0000000Fu; // 800C5290
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 800C5294
  W8(c->r[3]+0x00000001u,c->r[8]); // 800C5298
  c->r[5]=rotl(c->r[10],24)&0x0000000Fu; // 800C529C
  c->r[8]=rotl(c->r[9],24)&0x000000FFu; // 800C52A0
  W8(c->r[3]+0x00000002u,c->r[8]); // 800C52A4
  c->r[4]=c->r[5]+c->r[4]; // 800C52A8
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 800C52AC
  c->r[7]=rotl(c->r[10],16)&0x0000000Fu; // 800C52B0
  W8(c->r[3]+0x00000003u,c->r[9]); // 800C52B4
  c->r[6]=c->r[7]+c->r[6]; // 800C52B8
  W8(c->r[3]+0x00000004u,c->r[6]); // 800C52BC
  W8(c->r[3]+0x00000005u,c->r[4]); // 800C52C0
  W16(c->r[3]+0x00000006u,c->r[0]); // 800C52C4
  return; // 800C52C8
}

// OSGetConsoleType
void f_800C52D0(Ctx* __restrict c) {
  trace_call(0x800C52D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C52D0
  c->r[0]=c->lr; // 800C52D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C52D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C52DC
  c->r[3]=R32(c->r[13]+0xFFFFA480u); // 800C52E0
  cmps(c,0,(int32_t)c->r[3],0); // 800C52E4
  if (crb(c,2)) { goto L_800C52F8; } // 800C52E8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800C52EC
  cmps(c,0,(int32_t)c->r[0],0); // 800C52F0
  if (!crb(c,2)) { goto L_800C5304; } // 800C52F4
L_800C52F8:;
  c->r[3]=0u+0x10000000u; // 800C52F8
  c->r[3]=c->r[3]+0x00000002u; // 800C52FC
  goto L_800C5510; // 800C5300
L_800C5304:;
  c->r[3]=0u+0x80000000u; // 800C5304
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800C5308
  c->r[31]=R32(c->r[3]+0x00003138u); // 800C530C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800C5310
  if (crb(c,2)) { goto L_800C542C; } // 800C5314
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800C5318
  c->r[3]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800C531C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800C5320
  cmpu(c,0,c->r[0],0x00000001u); // 800C5324
  if (!crb(c,1)) { goto L_800C534C; } // 800C5328
  c->r[0]=c->r[3]+0xFFFFFDFFu; // 800C532C
  cmpu(c,0,c->r[0],0x00000001u); // 800C5330
  if (!crb(c,1)) { goto L_800C53AC; } // 800C5334
  cmps(c,0,(int32_t)c->r[3],515); // 800C5338
  if (crb(c,2)) { goto L_800C534C; } // 800C533C
  cmps(c,0,(int32_t)c->r[3],768); // 800C5340
  if (crb(c,2)) { goto L_800C5424; } // 800C5344
  goto L_800C542C; // 800C5348
L_800C534C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C534C
  if (crb(c,2)) { goto L_800C5378; } // 800C5350
  cmpu(c,0,c->r[31],0x00000001u); // 800C5354
  if (crb(c,2)) { goto L_800C5380; } // 800C5358
  cmpu(c,0,c->r[31],0x00000002u); // 800C535C
  if (crb(c,2)) { goto L_800C5388; } // 800C5360
  cmpu(c,0,c->r[31],0x00000010u); // 800C5364
  if (crb(c,2)) { goto L_800C5390; } // 800C5368
  cmpu(c,0,c->r[31],0x00000011u); // 800C536C
  if (crb(c,2)) { goto L_800C5398; } // 800C5370
  goto L_800C53A0; // 800C5374
L_800C5378:;
  c->r[3]=0u+0x00000010u; // 800C5378
  goto L_800C5510; // 800C537C
L_800C5380:;
  c->r[3]=0u+0x00000011u; // 800C5380
  goto L_800C5510; // 800C5384
L_800C5388:;
  c->r[3]=0u+0x00000012u; // 800C5388
  goto L_800C5510; // 800C538C
L_800C5390:;
  c->r[3]=0u+0x00000020u; // 800C5390
  goto L_800C5510; // 800C5394
L_800C5398:;
  c->r[3]=0u+0x00000021u; // 800C5398
  goto L_800C5510; // 800C539C
L_800C53A0:;
  if (!crb(c,1)) { goto L_800C53AC; } // 800C53A0
  c->r[3]=0u+0x00000021u; // 800C53A4
  goto L_800C5510; // 800C53A8
L_800C53AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C53AC
  if (crb(c,2)) { goto L_800C53D8; } // 800C53B0
  cmpu(c,0,c->r[31],0x00000001u); // 800C53B4
  if (crb(c,2)) { goto L_800C53E4; } // 800C53B8
  cmpu(c,0,c->r[31],0x00000002u); // 800C53BC
  if (crb(c,2)) { goto L_800C53F0; } // 800C53C0
  cmpu(c,0,c->r[31],0x00000010u); // 800C53C4
  if (crb(c,2)) { goto L_800C53FC; } // 800C53C8
  cmpu(c,0,c->r[31],0x00000011u); // 800C53CC
  if (crb(c,2)) { goto L_800C5408; } // 800C53D0
  goto L_800C5414; // 800C53D4
L_800C53D8:;
  c->r[3]=0u+0x10000000u; // 800C53D8
  c->r[3]=c->r[3]+0x00000010u; // 800C53DC
  goto L_800C5510; // 800C53E0
L_800C53E4:;
  c->r[3]=0u+0x10000000u; // 800C53E4
  c->r[3]=c->r[3]+0x00000011u; // 800C53E8
  goto L_800C5510; // 800C53EC
L_800C53F0:;
  c->r[3]=0u+0x10000000u; // 800C53F0
  c->r[3]=c->r[3]+0x00000012u; // 800C53F4
  goto L_800C5510; // 800C53F8
L_800C53FC:;
  c->r[3]=0u+0x10000000u; // 800C53FC
  c->r[3]=c->r[3]+0x00000020u; // 800C5400
  goto L_800C5510; // 800C5404
L_800C5408:;
  c->r[3]=0u+0x10000000u; // 800C5408
  c->r[3]=c->r[3]+0x00000021u; // 800C540C
  goto L_800C5510; // 800C5410
L_800C5414:;
  if (!crb(c,1)) { goto L_800C5424; } // 800C5414
  c->r[3]=0u+0x10000000u; // 800C5418
  c->r[3]=c->r[3]+0x00000021u; // 800C541C
  goto L_800C5510; // 800C5420
L_800C5424:;
  c->r[3]=0u+0x00000100u; // 800C5424
  goto L_800C5510; // 800C5428
L_800C542C:;
  c->lr=0x800C5430u; f_800CC570(c); // 800C542C
  cmps(c,0,(int32_t)c->r[31],0); // 800C5430
  if (crb(c,2)) { goto L_800C545C; } // 800C5434
  cmpu(c,0,c->r[31],0x00000001u); // 800C5438
  if (crb(c,2)) { goto L_800C5478; } // 800C543C
  cmpu(c,0,c->r[31],0x00000002u); // 800C5440
  if (crb(c,2)) { goto L_800C5494; } // 800C5444
  cmpu(c,0,c->r[31],0x00000010u); // 800C5448
  if (crb(c,2)) { goto L_800C54B0; } // 800C544C
  cmpu(c,0,c->r[31],0x00000011u); // 800C5450
  if (crb(c,2)) { goto L_800C54CC; } // 800C5454
  goto L_800C54E8; // 800C5458
L_800C545C:;
  c->r[0]=c->r[3]+0xFC000000u; // 800C545C
  c->r[3]=0u+0x10000000u; // 800C5460
  cmpu(c,0,c->r[0],0x00000000u); // 800C5464
  c->r[3]=c->r[3]+0x00000010u; // 800C5468
  if (!crb(c,2)) { goto L_800C5510; } // 800C546C
  c->r[3]=0u+0x00000010u; // 800C5470
  goto L_800C5510; // 800C5474
L_800C5478:;
  c->r[0]=c->r[3]+0xFC000000u; // 800C5478
  c->r[3]=0u+0x10000000u; // 800C547C
  cmpu(c,0,c->r[0],0x00000000u); // 800C5480
  c->r[3]=c->r[3]+0x00000011u; // 800C5484
  if (!crb(c,2)) { goto L_800C5510; } // 800C5488
  c->r[3]=0u+0x00000011u; // 800C548C
  goto L_800C5510; // 800C5490
L_800C5494:;
  c->r[0]=c->r[3]+0xFC000000u; // 800C5494
  c->r[3]=0u+0x10000000u; // 800C5498
  cmpu(c,0,c->r[0],0x00000000u); // 800C549C
  c->r[3]=c->r[3]+0x00000012u; // 800C54A0
  if (!crb(c,2)) { goto L_800C5510; } // 800C54A4
  c->r[3]=0u+0x00000012u; // 800C54A8
  goto L_800C5510; // 800C54AC
L_800C54B0:;
  c->r[0]=c->r[3]+0xFC000000u; // 800C54B0
  c->r[3]=0u+0x10000000u; // 800C54B4
  cmpu(c,0,c->r[0],0x00000000u); // 800C54B8
  c->r[3]=c->r[3]+0x00000020u; // 800C54BC
  if (!crb(c,2)) { goto L_800C5510; } // 800C54C0
  c->r[3]=0u+0x00000020u; // 800C54C4
  goto L_800C5510; // 800C54C8
L_800C54CC:;
  c->r[0]=c->r[3]+0xFC000000u; // 800C54CC
  c->r[3]=0u+0x10000000u; // 800C54D0
  cmpu(c,0,c->r[0],0x00000000u); // 800C54D4
  c->r[3]=c->r[3]+0x00000021u; // 800C54D8
  if (!crb(c,2)) { goto L_800C5510; } // 800C54DC
  c->r[3]=0u+0x00000021u; // 800C54E0
  goto L_800C5510; // 800C54E4
L_800C54E8:;
  if (!crb(c,1)) { goto L_800C5508; } // 800C54E8
  c->r[0]=c->r[3]+0xFC000000u; // 800C54EC
  c->r[3]=0u+0x10000000u; // 800C54F0
  cmpu(c,0,c->r[0],0x00000000u); // 800C54F4
  c->r[3]=c->r[3]+0x00000021u; // 800C54F8
  if (!crb(c,2)) { goto L_800C5510; } // 800C54FC
  c->r[3]=0u+0x00000021u; // 800C5500
  goto L_800C5510; // 800C5504
L_800C5508:;
  c->r[3]=R32(c->r[13]+0xFFFFA480u); // 800C5508
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800C550C
L_800C5510:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5514
  c->lr=c->r[0]; // 800C5518
  c->r[1]=c->r[1]+0x00000010u; // 800C551C
  return; // 800C5520
}

// ClearArena
void f_800C5530(Ctx* __restrict c) {
  trace_call(0x800C5530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5530
  c->r[0]=c->lr; // 800C5534
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C553C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5540
  c->lr=0x800C5548u; f_800CDB30(c); // 800C5544
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C5548
  if (!crb(c,2)) { goto L_800C5598; } // 800C554C
  c->lr=0x800C5554u; f_800C7190(c); // 800C5550
  c->r[31]=c->r[3]|c->r[3]; // 800C5554
  c->lr=0x800C555Cu; f_800C71C0(c); // 800C5558
  c->r[31]=c->r[31]-c->r[3]; // 800C555C
  c->lr=0x800C5564u; f_800C71C0(c); // 800C5560
  c->r[0]=0u+0x00040000u; // 800C5564
  cmpu(c,0,c->r[31],c->r[0]); // 800C5568
  if (!crb(c,1)) { goto L_800C557C; } // 800C556C
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C5570
  c->r[30]=c->r[3]+c->r[30]; // 800C5574
  goto L_800C5580; // 800C5578
L_800C557C:;
  c->r[30]=c->r[3]|c->r[3]; // 800C557C
L_800C5580:;
  c->r[4]=c->r[31]|c->r[31]; // 800C5580
  c->lr=0x800C5588u; f_800C7810(c); // 800C5584
  c->r[3]=c->r[30]|c->r[30]; // 800C5588
  c->r[4]=0u+0x00040000u; // 800C558C
  c->lr=0x800C5594u; f_800C7780(c); // 800C5590
  goto L_800C56F4; // 800C5594
L_800C5598:;
  c->r[31]=0u+0x802F0000u; // 800C5598
  c->r[31]=c->r[31]+0xFFFF9320u; // 800C559C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C55A0
  cmps(c,0,(int32_t)c->r[0],0); // 800C55A4
  if (crb(c,2)) { goto L_800C55B4; } // 800C55A8
  c->r[0]=rotl(c->r[0],0)&0x30000000u; cr0(c,c->r[0]); // 800C55AC
  if (crb(c,2)) { goto L_800C55FC; } // 800C55B0
L_800C55B4:;
  c->lr=0x800C55B8u; f_800C7190(c); // 800C55B4
  c->r[31]=c->r[3]|c->r[3]; // 800C55B8
  c->lr=0x800C55C0u; f_800C71C0(c); // 800C55BC
  c->r[31]=c->r[31]-c->r[3]; // 800C55C0
  c->lr=0x800C55C8u; f_800C71C0(c); // 800C55C4
  c->r[0]=0u+0x00040000u; // 800C55C8
  cmpu(c,0,c->r[31],c->r[0]); // 800C55CC
  if (!crb(c,1)) { goto L_800C55E0; } // 800C55D0
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C55D4
  c->r[30]=c->r[3]+c->r[30]; // 800C55D8
  goto L_800C55E4; // 800C55DC
L_800C55E0:;
  c->r[30]=c->r[3]|c->r[3]; // 800C55E0
L_800C55E4:;
  c->r[4]=c->r[31]|c->r[31]; // 800C55E4
  c->lr=0x800C55ECu; f_800C7810(c); // 800C55E8
  c->r[3]=c->r[30]|c->r[30]; // 800C55EC
  c->r[4]=0u+0x00040000u; // 800C55F0
  c->lr=0x800C55F8u; f_800C7780(c); // 800C55F4
  goto L_800C56F4; // 800C55F8
L_800C55FC:;
  c->lr=0x800C5600u; f_800C71C0(c); // 800C55FC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C5600
  cmpu(c,0,c->r[3],c->r[0]); // 800C5604
  if (!crb(c,0)) { goto L_800C56F4; } // 800C5608
  c->lr=0x800C5610u; f_800C7190(c); // 800C560C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C5610
  cmpu(c,0,c->r[3],c->r[0]); // 800C5614
  if (crb(c,1)) { goto L_800C5664; } // 800C5618
  c->lr=0x800C5620u; f_800C7190(c); // 800C561C
  c->r[31]=c->r[3]|c->r[3]; // 800C5620
  c->lr=0x800C5628u; f_800C71C0(c); // 800C5624
  c->r[31]=c->r[31]-c->r[3]; // 800C5628
  c->lr=0x800C5630u; f_800C71C0(c); // 800C562C
  c->r[0]=0u+0x00040000u; // 800C5630
  cmpu(c,0,c->r[31],c->r[0]); // 800C5634
  if (!crb(c,1)) { goto L_800C5648; } // 800C5638
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C563C
  c->r[30]=c->r[3]+c->r[30]; // 800C5640
  goto L_800C564C; // 800C5644
L_800C5648:;
  c->r[30]=c->r[3]|c->r[3]; // 800C5648
L_800C564C:;
  c->r[4]=c->r[31]|c->r[31]; // 800C564C
  c->lr=0x800C5654u; f_800C7810(c); // 800C5650
  c->r[3]=c->r[30]|c->r[30]; // 800C5654
  c->r[4]=0u+0x00040000u; // 800C5658
  c->lr=0x800C5660u; f_800C7780(c); // 800C565C
  goto L_800C56F4; // 800C5660
L_800C5664:;
  c->lr=0x800C5668u; f_800C71C0(c); // 800C5664
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C5668
  c->r[31]=c->r[0]-c->r[3]; // 800C566C
  c->lr=0x800C5674u; f_800C71C0(c); // 800C5670
  c->r[0]=0u+0x00040000u; // 800C5674
  cmpu(c,0,c->r[31],c->r[0]); // 800C5678
  if (!crb(c,1)) { goto L_800C568C; } // 800C567C
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C5680
  c->r[30]=c->r[3]+c->r[30]; // 800C5684
  goto L_800C5690; // 800C5688
L_800C568C:;
  c->r[30]=c->r[3]|c->r[3]; // 800C568C
L_800C5690:;
  c->r[4]=c->r[31]|c->r[31]; // 800C5690
  c->lr=0x800C5698u; f_800C7810(c); // 800C5694
  c->r[3]=c->r[30]|c->r[30]; // 800C5698
  c->r[4]=0u+0x00040000u; // 800C569C
  c->lr=0x800C56A4u; f_800C7780(c); // 800C56A0
  c->r[3]=0u+0x802F0000u; // 800C56A4
  c->r[3]=c->r[3]+0xFFFF9320u; // 800C56A8
  c->r[31]=R32(c->r[3]+0x00000010u); // 800C56AC
  c->lr=0x800C56B4u; f_800C7190(c); // 800C56B0
  cmpu(c,0,c->r[3],c->r[31]); // 800C56B4
  if (!crb(c,1)) { goto L_800C56F4; } // 800C56B8
  c->lr=0x800C56C0u; f_800C7190(c); // 800C56BC
  c->r[4]=c->r[3]-c->r[31]; // 800C56C0
  c->r[0]=0u+0x00040000u; // 800C56C4
  cmpu(c,0,c->r[4],c->r[0]); // 800C56C8
  if (!crb(c,1)) { goto L_800C56DC; } // 800C56CC
  c->r[30]=c->r[4]+0xFFFC0000u; // 800C56D0
  c->r[30]=c->r[31]+c->r[30]; // 800C56D4
  goto L_800C56E0; // 800C56D8
L_800C56DC:;
  c->r[30]=c->r[31]|c->r[31]; // 800C56DC
L_800C56E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C56E0
  c->lr=0x800C56E8u; f_800C7810(c); // 800C56E4
  c->r[3]=c->r[30]|c->r[30]; // 800C56E8
  c->r[4]=0u+0x00040000u; // 800C56EC
  c->lr=0x800C56F4u; f_800C7780(c); // 800C56F0
L_800C56F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C56F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C56F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C56FC
  c->lr=c->r[0]; // 800C5700
  c->r[1]=c->r[1]+0x00000010u; // 800C5704
  return; // 800C5708
}

// ClearMEM2Arena
void f_800C5710(Ctx* __restrict c) {
  trace_call(0x800C5710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5710
  c->r[0]=c->lr; // 800C5714
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C571C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5720
  c->lr=0x800C5728u; f_800CDB30(c); // 800C5724
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800C5728
  if (!crb(c,2)) { goto L_800C5778; } // 800C572C
  c->lr=0x800C5734u; f_800C7180(c); // 800C5730
  c->r[31]=c->r[3]|c->r[3]; // 800C5734
  c->lr=0x800C573Cu; f_800C71B0(c); // 800C5738
  c->r[31]=c->r[31]-c->r[3]; // 800C573C
  c->lr=0x800C5744u; f_800C71B0(c); // 800C5740
  c->r[0]=0u+0x00040000u; // 800C5744
  cmpu(c,0,c->r[31],c->r[0]); // 800C5748
  if (!crb(c,1)) { goto L_800C575C; } // 800C574C
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C5750
  c->r[30]=c->r[3]+c->r[30]; // 800C5754
  goto L_800C5760; // 800C5758
L_800C575C:;
  c->r[30]=c->r[3]|c->r[3]; // 800C575C
L_800C5760:;
  c->r[4]=c->r[31]|c->r[31]; // 800C5760
  c->lr=0x800C5768u; f_800C7810(c); // 800C5764
  c->r[3]=c->r[30]|c->r[30]; // 800C5768
  c->r[4]=0u+0x00040000u; // 800C576C
  c->lr=0x800C5774u; f_800C7780(c); // 800C5770
  goto L_800C58DC; // 800C5774
L_800C5778:;
  c->r[31]=0u+0x802F0000u; // 800C5778
  c->r[31]=c->r[31]+0xFFFF9320u; // 800C577C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C5780
  cmps(c,0,(int32_t)c->r[0],0); // 800C5784
  if (crb(c,2)) { goto L_800C579C; } // 800C5788
  c->r[3]=rotl(c->r[0],0)&0x30000000u; // 800C578C
  c->r[0]=c->r[3]+0xF0000000u; // 800C5790
  cmpu(c,0,c->r[0],0x00000000u); // 800C5794
  if (crb(c,2)) { goto L_800C57E4; } // 800C5798
L_800C579C:;
  c->lr=0x800C57A0u; f_800C7180(c); // 800C579C
  c->r[31]=c->r[3]|c->r[3]; // 800C57A0
  c->lr=0x800C57A8u; f_800C71B0(c); // 800C57A4
  c->r[31]=c->r[31]-c->r[3]; // 800C57A8
  c->lr=0x800C57B0u; f_800C71B0(c); // 800C57AC
  c->r[0]=0u+0x00040000u; // 800C57B0
  cmpu(c,0,c->r[31],c->r[0]); // 800C57B4
  if (!crb(c,1)) { goto L_800C57C8; } // 800C57B8
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C57BC
  c->r[30]=c->r[3]+c->r[30]; // 800C57C0
  goto L_800C57CC; // 800C57C4
L_800C57C8:;
  c->r[30]=c->r[3]|c->r[3]; // 800C57C8
L_800C57CC:;
  c->r[4]=c->r[31]|c->r[31]; // 800C57CC
  c->lr=0x800C57D4u; f_800C7810(c); // 800C57D0
  c->r[3]=c->r[30]|c->r[30]; // 800C57D4
  c->r[4]=0u+0x00040000u; // 800C57D8
  c->lr=0x800C57E0u; f_800C7780(c); // 800C57DC
  goto L_800C58DC; // 800C57E0
L_800C57E4:;
  c->lr=0x800C57E8u; f_800C71B0(c); // 800C57E4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C57E8
  cmpu(c,0,c->r[3],c->r[0]); // 800C57EC
  if (!crb(c,0)) { goto L_800C58DC; } // 800C57F0
  c->lr=0x800C57F8u; f_800C7180(c); // 800C57F4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C57F8
  cmpu(c,0,c->r[3],c->r[0]); // 800C57FC
  if (crb(c,1)) { goto L_800C584C; } // 800C5800
  c->lr=0x800C5808u; f_800C7180(c); // 800C5804
  c->r[31]=c->r[3]|c->r[3]; // 800C5808
  c->lr=0x800C5810u; f_800C71B0(c); // 800C580C
  c->r[31]=c->r[31]-c->r[3]; // 800C5810
  c->lr=0x800C5818u; f_800C71B0(c); // 800C5814
  c->r[0]=0u+0x00040000u; // 800C5818
  cmpu(c,0,c->r[31],c->r[0]); // 800C581C
  if (!crb(c,1)) { goto L_800C5830; } // 800C5820
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C5824
  c->r[30]=c->r[3]+c->r[30]; // 800C5828
  goto L_800C5834; // 800C582C
L_800C5830:;
  c->r[30]=c->r[3]|c->r[3]; // 800C5830
L_800C5834:;
  c->r[4]=c->r[31]|c->r[31]; // 800C5834
  c->lr=0x800C583Cu; f_800C7810(c); // 800C5838
  c->r[3]=c->r[30]|c->r[30]; // 800C583C
  c->r[4]=0u+0x00040000u; // 800C5840
  c->lr=0x800C5848u; f_800C7780(c); // 800C5844
  goto L_800C58DC; // 800C5848
L_800C584C:;
  c->lr=0x800C5850u; f_800C71B0(c); // 800C584C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C5850
  c->r[31]=c->r[0]-c->r[3]; // 800C5854
  c->lr=0x800C585Cu; f_800C71B0(c); // 800C5858
  c->r[0]=0u+0x00040000u; // 800C585C
  cmpu(c,0,c->r[31],c->r[0]); // 800C5860
  if (!crb(c,1)) { goto L_800C5874; } // 800C5864
  c->r[30]=c->r[31]+0xFFFC0000u; // 800C5868
  c->r[30]=c->r[3]+c->r[30]; // 800C586C
  goto L_800C5878; // 800C5870
L_800C5874:;
  c->r[30]=c->r[3]|c->r[3]; // 800C5874
L_800C5878:;
  c->r[4]=c->r[31]|c->r[31]; // 800C5878
  c->lr=0x800C5880u; f_800C7810(c); // 800C587C
  c->r[3]=c->r[30]|c->r[30]; // 800C5880
  c->r[4]=0u+0x00040000u; // 800C5884
  c->lr=0x800C588Cu; f_800C7780(c); // 800C5888
  c->r[3]=0u+0x802F0000u; // 800C588C
  c->r[3]=c->r[3]+0xFFFF9320u; // 800C5890
  c->r[31]=R32(c->r[3]+0x00000010u); // 800C5894
  c->lr=0x800C589Cu; f_800C7180(c); // 800C5898
  cmpu(c,0,c->r[3],c->r[31]); // 800C589C
  if (!crb(c,1)) { goto L_800C58DC; } // 800C58A0
  c->lr=0x800C58A8u; f_800C7180(c); // 800C58A4
  c->r[4]=c->r[3]-c->r[31]; // 800C58A8
  c->r[0]=0u+0x00040000u; // 800C58AC
  cmpu(c,0,c->r[4],c->r[0]); // 800C58B0
  if (!crb(c,1)) { goto L_800C58C4; } // 800C58B4
  c->r[30]=c->r[4]+0xFFFC0000u; // 800C58B8
  c->r[30]=c->r[31]+c->r[30]; // 800C58BC
  goto L_800C58C8; // 800C58C0
L_800C58C4:;
  c->r[30]=c->r[31]|c->r[31]; // 800C58C4
L_800C58C8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C58C8
  c->lr=0x800C58D0u; f_800C7810(c); // 800C58CC
  c->r[3]=c->r[30]|c->r[30]; // 800C58D0
  c->r[4]=0u+0x00040000u; // 800C58D4
  c->lr=0x800C58DCu; f_800C7780(c); // 800C58D8
L_800C58DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C58DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C58E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C58E4
  c->lr=c->r[0]; // 800C58E8
  c->r[1]=c->r[1]+0x00000010u; // 800C58EC
  return; // 800C58F0
}

// InquiryCallback
void f_800C5900(Ctx* __restrict c) {
  trace_call(0x800C5900u);
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C5900
  cmps(c,0,(int32_t)c->r[0],0); // 800C5904
  if (crb(c,2)) { goto L_800C5910; } // 800C5908
  goto L_800C592C; // 800C590C
L_800C5910:;
  c->r[4]=0u+0x802F0000u; // 800C5910
  c->r[3]=0u+0x80000000u; // 800C5914
  c->r[4]=c->r[4]+0xFFFF9340u; // 800C5918
  c->r[0]=R16(c->r[4]+0x00000002u); // 800C591C
  c->r[0]=c->r[0]|0x00008000u; // 800C5920
  W16(c->r[3]+0x000030E6u,c->r[0]); // 800C5924
  return; // 800C5928
L_800C592C:;
  c->r[3]=0u+0x80000000u; // 800C592C
  c->r[0]=0u+0x00000001u; // 800C5930
  W16(c->r[3]+0x000030E6u,c->r[0]); // 800C5934
  return; // 800C5938
}

// ReportOSInfo
void f_800C5940(Ctx* __restrict c) {
  trace_call(0x800C5940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5940
  c->r[0]=c->lr; // 800C5944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C594C
  c->r[31]=0u+0x802A0000u; // 800C5950
  c->r[31]=c->r[31]+0xFFFFFA88u; // 800C5954
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5958
  c->r[3]=c->r[31]+0x00000048u; // 800C595C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5960
  c->lr=0x800C5968u; f_800C8450(c); // 800C5964
  c->r[3]=c->r[31]+0x00000058u; // 800C5968
  c->r[4]=c->r[31]+0x00000070u; // 800C596C
  c->r[5]=c->r[31]+0x0000007Cu; // 800C5970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5974
  c->lr=0x800C597Cu; f_800C8450(c); // 800C5978
  c->r[3]=c->r[31]+0x00000088u; // 800C597C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5980
  c->lr=0x800C5988u; f_800C8450(c); // 800C5984
  c->lr=0x800C598Cu; f_800C52D0(c); // 800C5988
  c->r[4]=rotl(c->r[3],0)&0xF0000000u; cr0(c,c->r[4]); // 800C598C
  if (crb(c,2)) { goto L_800C59B0; } // 800C5990
  c->r[0]=c->r[4]+0xF0000000u; // 800C5994
  cmpu(c,0,c->r[0],0x00000000u); // 800C5998
  if (crb(c,2)) { goto L_800C5A28; } // 800C599C
  c->r[0]=c->r[4]+0xE0000000u; // 800C59A0
  cmpu(c,0,c->r[0],0x00000000u); // 800C59A4
  if (crb(c,2)) { goto L_800C5AD4; } // 800C59A8
  goto L_800C5AEC; // 800C59AC
L_800C59B0:;
  cmpu(c,0,c->r[3],0x00000011u); // 800C59B0
  if (crb(c,2)) { goto L_800C59D4; } // 800C59B4
  cmpu(c,0,c->r[3],0x00000012u); // 800C59B8
  if (crb(c,2)) { goto L_800C59E4; } // 800C59BC
  cmpu(c,0,c->r[3],0x00000020u); // 800C59C0
  if (crb(c,2)) { goto L_800C59F4; } // 800C59C4
  cmpu(c,0,c->r[3],0x00000100u); // 800C59C8
  if (crb(c,2)) { goto L_800C5A04; } // 800C59CC
  goto L_800C5A14; // 800C59D0
L_800C59D4:;
  c->r[3]=c->r[31]+0x00000098u; // 800C59D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C59D8
  c->lr=0x800C59E0u; f_800C8450(c); // 800C59DC
  goto L_800C5AFC; // 800C59E0
L_800C59E4:;
  c->r[3]=c->r[31]+0x000000B0u; // 800C59E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C59E8
  c->lr=0x800C59F0u; f_800C8450(c); // 800C59EC
  goto L_800C5AFC; // 800C59F0
L_800C59F4:;
  c->r[3]=c->r[31]+0x000000CCu; // 800C59F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C59F8
  c->lr=0x800C5A00u; f_800C8450(c); // 800C59FC
  goto L_800C5AFC; // 800C5A00
L_800C5A04:;
  c->r[3]=c->r[13]+0xFFFF8EE4u; // 800C5A04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5A08
  c->lr=0x800C5A10u; f_800C8450(c); // 800C5A0C
  goto L_800C5AFC; // 800C5A10
L_800C5A14:;
  c->r[4]=c->r[3]|c->r[3]; // 800C5A14
  c->r[3]=c->r[31]+0x000000E8u; // 800C5A18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5A1C
  c->lr=0x800C5A24u; f_800C8450(c); // 800C5A20
  goto L_800C5AFC; // 800C5A24
L_800C5A28:;
  c->r[0]=c->r[3]+0xF0000000u; // 800C5A28
  cmpu(c,0,c->r[0],0x00000021u); // 800C5A2C
  if (crb(c,2)) { goto L_800C5A60; } // 800C5A30
  cmpu(c,0,c->r[0],0x00000020u); // 800C5A34
  if (crb(c,2)) { goto L_800C5A70; } // 800C5A38
  cmpu(c,0,c->r[0],0x00000012u); // 800C5A3C
  if (crb(c,2)) { goto L_800C5A80; } // 800C5A40
  cmpu(c,0,c->r[0],0x00000011u); // 800C5A44
  if (crb(c,2)) { goto L_800C5A90; } // 800C5A48
  cmpu(c,0,c->r[0],0x00000010u); // 800C5A4C
  if (crb(c,2)) { goto L_800C5AA0; } // 800C5A50
  cmpu(c,0,c->r[0],0x00000008u); // 800C5A54
  if (crb(c,2)) { goto L_800C5AB0; } // 800C5A58
  goto L_800C5AC0; // 800C5A5C
L_800C5A60:;
  c->r[3]=c->r[31]+0x000000F4u; // 800C5A60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5A64
  c->lr=0x800C5A6Cu; f_800C8450(c); // 800C5A68
  goto L_800C5AFC; // 800C5A6C
L_800C5A70:;
  c->r[3]=c->r[31]+0x00000100u; // 800C5A70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5A74
  c->lr=0x800C5A7Cu; f_800C8450(c); // 800C5A78
  goto L_800C5AFC; // 800C5A7C
L_800C5A80:;
  c->r[3]=c->r[31]+0x0000010Cu; // 800C5A80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5A84
  c->lr=0x800C5A8Cu; f_800C8450(c); // 800C5A88
  goto L_800C5AFC; // 800C5A8C
L_800C5A90:;
  c->r[3]=c->r[31]+0x00000118u; // 800C5A90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5A94
  c->lr=0x800C5A9Cu; f_800C8450(c); // 800C5A98
  goto L_800C5AFC; // 800C5A9C
L_800C5AA0:;
  c->r[3]=c->r[31]+0x00000124u; // 800C5AA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5AA4
  c->lr=0x800C5AACu; f_800C8450(c); // 800C5AA8
  goto L_800C5AFC; // 800C5AAC
L_800C5AB0:;
  c->r[3]=c->r[31]+0x00000130u; // 800C5AB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5AB4
  c->lr=0x800C5ABCu; f_800C8450(c); // 800C5AB8
  goto L_800C5AFC; // 800C5ABC
L_800C5AC0:;
  c->r[4]=c->r[3]|c->r[3]; // 800C5AC0
  c->r[3]=c->r[31]+0x00000148u; // 800C5AC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5AC8
  c->lr=0x800C5AD0u; f_800C8450(c); // 800C5ACC
  goto L_800C5AFC; // 800C5AD0
L_800C5AD4:;
  c->r[4]=rotl(c->r[3],0)&0x0FFFFFFFu; // 800C5AD4
  c->r[3]=c->r[31]+0x00000164u; // 800C5AD8
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 800C5ADC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5AE0
  c->lr=0x800C5AE8u; f_800C8450(c); // 800C5AE4
  goto L_800C5AFC; // 800C5AE8
L_800C5AEC:;
  c->r[4]=c->r[3]|c->r[3]; // 800C5AEC
  c->r[3]=c->r[13]+0xFFFF8EECu; // 800C5AF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5AF4
  c->lr=0x800C5AFCu; f_800C8450(c); // 800C5AF8
L_800C5AFC:;
  c->r[4]=0u+0xC0000000u; // 800C5AFC
  c->r[3]=c->r[31]+0x00000180u; // 800C5B00
  c->r[0]=R32(c->r[4]+0x00003140u); // 800C5B04
  c->r[30]=R32(c->r[4]+0x00003144u); // 800C5B08
  c->r[4]=rotl(c->r[0],16)&0x000000FFu; // 800C5B0C
  c->r[5]=rotl(c->r[0],24)&0x000000FFu; // 800C5B10
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 800C5B14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5B18
  c->lr=0x800C5B20u; f_800C8450(c); // 800C5B1C
  c->r[3]=rotl(c->r[30],28)&0x0000000Fu; // 800C5B20
  c->r[6]=rotl(c->r[30],12)&0x0000000Fu; // 800C5B24
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 800C5B28
  c->r[5]=rotl(c->r[30],20)&0x0000000Fu; // 800C5B2C
  c->r[0]=rotl(c->r[30],0)&0x0000000Fu; // 800C5B30
  c->r[8]=rotl(c->r[30],16)&0x0000000Fu; // 800C5B34
  c->r[4]=c->r[0]+c->r[4]; // 800C5B38
  c->r[7]=rotl(c->r[30],24)&0x0000000Fu; // 800C5B3C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 800C5B40
  c->r[3]=c->r[31]+0x0000019Cu; // 800C5B44
  c->r[0]=c->r[4]+0x000007D0u; // 800C5B48
  c->r[4]=c->r[8]+c->r[6]; // 800C5B4C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 800C5B50
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800C5B54
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800C5B58
  c->r[0]=c->r[7]+c->r[5]; // 800C5B5C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800C5B60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5B64
  c->lr=0x800C5B6Cu; f_800C8450(c); // 800C5B68
  c->lr=0x800C5B70u; f_800CC590(c); // 800C5B6C
  c->r[30]=c->r[3]|c->r[3]; // 800C5B70
  c->lr=0x800C5B78u; f_800CC580(c); // 800C5B74
  c->r[0]=c->r[3]+c->r[30]; // 800C5B78
  c->r[3]=c->r[31]+0x000001A8u; // 800C5B7C
  c->r[4]=rotl(c->r[0],12)&0x00000FFFu; // 800C5B80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5B84
  c->lr=0x800C5B8Cu; f_800C8450(c); // 800C5B88
  c->lr=0x800C5B90u; f_800C7170(c); // 800C5B8C
  c->r[30]=c->r[3]|c->r[3]; // 800C5B90
  c->lr=0x800C5B98u; f_800C71A0(c); // 800C5B94
  c->r[4]=c->r[3]|c->r[3]; // 800C5B98
  c->r[5]=c->r[30]|c->r[30]; // 800C5B9C
  c->r[3]=c->r[31]+0x000001B8u; // 800C5BA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5BA4
  c->lr=0x800C5BACu; f_800C8450(c); // 800C5BA8
  c->lr=0x800C5BB0u; f_800C7180(c); // 800C5BAC
  c->r[30]=c->r[3]|c->r[3]; // 800C5BB0
  c->lr=0x800C5BB8u; f_800C71B0(c); // 800C5BB4
  c->r[4]=c->r[3]|c->r[3]; // 800C5BB8
  c->r[5]=c->r[30]|c->r[30]; // 800C5BBC
  c->r[3]=c->r[31]+0x000001D4u; // 800C5BC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5BC4
  c->lr=0x800C5BCCu; f_800C8450(c); // 800C5BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5BCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5BD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C5BD4
  c->lr=c->r[0]; // 800C5BD8
  c->r[1]=c->r[1]+0x00000010u; // 800C5BDC
  return; // 800C5BE0
}

// OSInit
void f_800C5BF0(Ctx* __restrict c) {
  trace_call(0x800C5BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5BF0
  c->r[0]=c->lr; // 800C5BF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C5BF8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C5BFC
  c->r[31]=0u+0x802A0000u; // 800C5C00
  c->r[31]=c->r[31]+0xFFFFFA88u; // 800C5C04
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C5C08
  c->r[30]=0u+0x802F0000u; // 800C5C0C
  c->r[30]=c->r[30]+0xFFFF9320u; // 800C5C10
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C5C14
  W32(c->r[1]+0x00000020u,c->r[28]); // 800C5C18
  c->r[0]=R32(c->r[13]+0xFFFFA454u); // 800C5C1C
  cmps(c,0,(int32_t)c->r[0],0); // 800C5C20
  if (!crb(c,2)) { goto L_800C6124; } // 800C5C24
  c->r[0]=0u+0x00000001u; // 800C5C28
  W32(c->r[13]+0xFFFFA454u,c->r[0]); // 800C5C2C
  c->lr=0x800C5C34u; f_800D0540(c); // 800C5C30
  W32(c->r[13]+0xFFFFA48Cu,c->r[4]); // 800C5C34
  W32(c->r[13]+0xFFFFA488u,c->r[3]); // 800C5C38
  c->lr=0x800C5C40u; f_800CBAA0(c); // 800C5C3C
  c->r[3]=c->r[30]+0x00000000u; // 800C5C40
  c->lr=0x800C5C48u; f_800C90A0(c); // 800C5C44
  c->r[3]=0u+0x00000000u; // 800C5C48
  c->lr=0x800C5C50u; f_800C4FC0(c); // 800C5C4C
  c->r[3]=0u+0x00000000u; // 800C5C50
  c->lr=0x800C5C58u; f_800C4FD0(c); // 800C5C54
  c->r[3]=0u+0x00000000u; // 800C5C58
  c->lr=0x800C5C60u; f_800C4FE0(c); // 800C5C5C
  c->r[3]=0u+0x00000000u; // 800C5C60
  c->lr=0x800C5C68u; f_800C4FF0(c); // 800C5C64
  c->r[3]=0u+0x00000000u; // 800C5C68
  c->lr=0x800C5C70u; f_800C5000(c); // 800C5C6C
  c->r[3]=0u+0x00000000u; // 800C5C70
  c->lr=0x800C5C78u; f_800C5010(c); // 800C5C74
  c->r[3]=0u+0x83900000u; // 800C5C78
  c->lr=0x800C5C80u; f_800C50E0(c); // 800C5C7C
  c->lr=0x800C5C84u; f_800C50A0(c); // 800C5C80
  c->lr=0x800C5C88u; f_800C50D0(c); // 800C5C84
  c->r[0]=0u+0x00000000u; // 800C5C88
  c->r[4]=0u+0x80000000u; // 800C5C8C
  W32(c->r[13]+0xFFFFA480u,c->r[4]); // 800C5C90
  W32(c->r[13]+0xFFFFA47Cu,c->r[0]); // 800C5C94
  W32(c->r[13]+0xFFFF9020u,c->r[0]); // 800C5C98
  c->r[5]=R32(c->r[4]+0x000000F4u); // 800C5C9C
  cmps(c,0,(int32_t)c->r[5],0); // 800C5CA0
  if (crb(c,2)) { goto L_800C5CCC; } // 800C5CA4
  c->r[3]=c->r[5]+0x0000000Cu; // 800C5CA8
  W32(c->r[13]+0xFFFFA47Cu,c->r[3]); // 800C5CAC
  c->r[0]=R32(c->r[5]+0x00000024u); // 800C5CB0
  W32(c->r[13]+0xFFFFAA38u,c->r[0]); // 800C5CB4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800C5CB8
  W8(c->r[4]+0x000030E8u,c->r[0]); // 800C5CBC
  c->r[0]=R32(c->r[13]+0xFFFFAA38u); // 800C5CC0
  W8(c->r[4]+0x000030E9u,c->r[0]); // 800C5CC4
  goto L_800C5CF0; // 800C5CC8
L_800C5CCC:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 800C5CCC
  cmps(c,0,(int32_t)c->r[0],0); // 800C5CD0
  if (crb(c,2)) { goto L_800C5CF0; } // 800C5CD4
  c->r[3]=R8(c->r[4]+0x000030E8u); // 800C5CD8
  c->r[0]=c->r[13]+0xFFFFA478u; // 800C5CDC
  W32(c->r[13]+0xFFFFA478u,c->r[3]); // 800C5CE0
  W32(c->r[13]+0xFFFFA47Cu,c->r[0]); // 800C5CE4
  c->r[0]=R8(c->r[4]+0x000030E9u); // 800C5CE8
  W32(c->r[13]+0xFFFFAA38u,c->r[0]); // 800C5CEC
L_800C5CF0:;
  c->r[0]=0u+0x00000001u; // 800C5CF0
  W32(c->r[13]+0xFFFF9020u,c->r[0]); // 800C5CF4
  c->r[4]=0u+0x80000000u; // 800C5CF8
  c->r[3]=R32(c->r[4]+0x0000310Cu); // 800C5CFC
  cmps(c,0,(int32_t)c->r[3],0); // 800C5D00
  if (!crb(c,2)) { goto L_800C5D70; } // 800C5D04
  c->r[3]=0u+0x803B0000u; // 800C5D08
  c->r[3]=c->r[3]+0xFFFFFB60u; // 800C5D0C
  c->r[0]=rotl(c->r[3],0)&0x30000000u; cr0(c,c->r[0]); // 800C5D10
  if (!crb(c,2)) { goto L_800C5D6C; } // 800C5D14
  c->r[4]=R32(c->r[13]+0xFFFFA480u); // 800C5D18
  c->r[0]=R32(c->r[4]+0x00000030u); // 800C5D1C
  cmps(c,0,(int32_t)c->r[0],0); // 800C5D20
  if (!crb(c,2)) { goto L_800C5D2C; } // 800C5D24
  goto L_800C5D30; // 800C5D28
L_800C5D2C:;
  c->r[3]=c->r[0]|c->r[0]; // 800C5D2C
L_800C5D30:;
  c->r[4]=R32(c->r[13]+0xFFFFA480u); // 800C5D30
  c->r[0]=R32(c->r[4]+0x00000030u); // 800C5D34
  cmps(c,0,(int32_t)c->r[0],0); // 800C5D38
  if (!crb(c,2)) { goto L_800C5D70; } // 800C5D3C
  c->r[4]=R32(c->r[13]+0xFFFFA47Cu); // 800C5D40
  cmps(c,0,(int32_t)c->r[4],0); // 800C5D44
  if (crb(c,2)) { goto L_800C5D70; } // 800C5D48
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C5D4C
  cmpu(c,0,c->r[0],0x00000002u); // 800C5D50
  if (!crb(c,0)) { goto L_800C5D70; } // 800C5D54
  c->r[3]=0u+0x803B0000u; // 800C5D58
  c->r[3]=c->r[3]+0xFFFFDB60u; // 800C5D5C
  c->r[0]=c->r[3]+0x0000001Fu; // 800C5D60
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C5D64
  goto L_800C5D70; // 800C5D68
L_800C5D6C:;
  c->r[3]=c->r[4]+0x00004000u; // 800C5D6C
L_800C5D70:;
  c->lr=0x800C5D74u; f_800C7200(c); // 800C5D70
  c->r[3]=0u+0x80000000u; // 800C5D74
  c->r[3]=R32(c->r[3]+0x00003110u); // 800C5D78
  cmps(c,0,(int32_t)c->r[3],0); // 800C5D7C
  if (!crb(c,2)) { goto L_800C5D9C; } // 800C5D80
  c->r[3]=R32(c->r[13]+0xFFFFA480u); // 800C5D84
  c->r[3]=R32(c->r[3]+0x00000034u); // 800C5D88
  cmps(c,0,(int32_t)c->r[3],0); // 800C5D8C
  if (!crb(c,2)) { goto L_800C5D9C; } // 800C5D90
  c->r[3]=0u+0x81700000u; // 800C5D94
  c->r[3]=c->r[3]+0x00000000u; // 800C5D98
L_800C5D9C:;
  c->lr=0x800C5DA0u; f_800C71D0(c); // 800C5D9C
  c->r[3]=0u+0x80000000u; // 800C5DA0
  c->r[3]=R32(c->r[3]+0x00003124u); // 800C5DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800C5DA8
  if (crb(c,2)) { goto L_800C5E18; } // 800C5DAC
  c->r[5]=0u+0x803B0000u; // 800C5DB0
  c->r[5]=c->r[5]+0xFFFFFB60u; // 800C5DB4
  c->r[4]=rotl(c->r[5],0)&0x30000000u; // 800C5DB8
  c->r[0]=c->r[4]+0xF0000000u; // 800C5DBC
  cmpu(c,0,c->r[0],0x00000000u); // 800C5DC0
  if (!crb(c,2)) { goto L_800C5DF8; } // 800C5DC4
  c->r[4]=R32(c->r[13]+0xFFFFA47Cu); // 800C5DC8
  c->r[3]=c->r[5]|c->r[5]; // 800C5DCC
  cmps(c,0,(int32_t)c->r[4],0); // 800C5DD0
  if (crb(c,2)) { goto L_800C5E14; } // 800C5DD4
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C5DD8
  cmpu(c,0,c->r[0],0x00000002u); // 800C5DDC
  if (!crb(c,0)) { goto L_800C5E14; } // 800C5DE0
  c->r[3]=0u+0x803B0000u; // 800C5DE4
  c->r[3]=c->r[3]+0xFFFFDB60u; // 800C5DE8
  c->r[0]=c->r[3]+0x0000001Fu; // 800C5DEC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C5DF0
  goto L_800C5E14; // 800C5DF4
L_800C5DF8:;
  c->r[4]=0u+0x90000000u; // 800C5DF8
  cmpu(c,0,c->r[3],c->r[4]); // 800C5DFC
  if (crb(c,0)) { goto L_800C5E14; } // 800C5E00
  c->r[0]=c->r[4]+0x00000800u; // 800C5E04
  cmpu(c,0,c->r[3],c->r[0]); // 800C5E08
  if (!crb(c,0)) { goto L_800C5E14; } // 800C5E0C
  c->r[3]=c->r[0]|c->r[0]; // 800C5E10
L_800C5E14:;
  c->lr=0x800C5E18u; f_800C7210(c); // 800C5E14
L_800C5E18:;
  c->r[3]=0u+0x80000000u; // 800C5E18
  c->r[3]=R32(c->r[3]+0x00003128u); // 800C5E1C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5E20
  if (crb(c,2)) { goto L_800C5E2C; } // 800C5E24
  c->lr=0x800C5E2Cu; f_800C71E0(c); // 800C5E28
L_800C5E2C:;
  c->lr=0x800C5E30u; f_800D0E50(c); // 800C5E2C
  c->lr=0x800C5E34u; f_800C6150(c); // 800C5E30
  c->lr=0x800C5E38u; f_800CE650(c); // 800C5E34
  c->lr=0x800C5E3Cu; f_800C6670(c); // 800C5E38
  c->lr=0x800C5E40u; f_800CC270(c); // 800C5E3C
  c->lr=0x800C5E44u; f_800CBB40(c); // 800C5E40
  c->lr=0x800C5E48u; f_800C8400(c); // 800C5E44
  c->lr=0x800C5E4Cu; f_800C7A30(c); // 800C5E48
  c->lr=0x800C5E50u; f_800D49F0(c); // 800C5E4C
  c->lr=0x800C5E54u; f_800D5F10(c); // 800C5E50
  c->lr=0x800C5E58u; f_800CDCC0(c); // 800C5E54
  c->lr=0x800C5E5Cu; f_800CE6C0(c); // 800C5E58
  c->lr=0x800C5E60u; f_800C7490(c); // 800C5E5C
  c->lr=0x800C5E64u; f_800C5070(c); // 800C5E60
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 800C5E64
  c->lr=0x800C5E6Cu; f_800C5080(c); // 800C5E68
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C5E6C
  cmps(c,0,(int32_t)c->r[0],0); // 800C5E70
  if (!crb(c,2)) { goto L_800C5E7C; } // 800C5E74
  c->lr=0x800C5E7Cu; f_800CCC40(c); // 800C5E78
L_800C5E7C:;
  c->lr=0x800C5E80u; f_800C5940(c); // 800C5E7C
  c->r[4]=R32(c->r[13]+0xFFFF8EE0u); // 800C5E80
  c->r[3]=c->r[13]+0xFFFF8EF4u; // 800C5E84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5E88
  c->lr=0x800C5E90u; f_800C8450(c); // 800C5E8C
  c->r[3]=R32(c->r[13]+0xFFFFA47Cu); // 800C5E90
  cmps(c,0,(int32_t)c->r[3],0); // 800C5E94
  if (crb(c,2)) { goto L_800C5EAC; } // 800C5E98
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C5E9C
  cmpu(c,0,c->r[0],0x00000002u); // 800C5EA0
  if (crb(c,0)) { goto L_800C5EAC; } // 800C5EA4
  c->lr=0x800C5EACu; f_8022B2A0(c); // 800C5EA8
L_800C5EAC:;
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800C5EAC
  cmps(c,0,(int32_t)c->r[0],0); // 800C5EB0
  if (!crb(c,2)) { goto L_800C5ECC; } // 800C5EB4
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C5EB8
  cmps(c,0,(int32_t)c->r[0],0); // 800C5EBC
  if (!crb(c,2)) { goto L_800C5ECC; } // 800C5EC0
  c->lr=0x800C5EC8u; f_800C5530(c); // 800C5EC4
  c->lr=0x800C5ECCu; f_800C5710(c); // 800C5EC8
L_800C5ECC:;
  c->lr=0x800C5ED0u; f_800CBAC0(c); // 800C5ECC
  c->lr=0x800C5ED4u; f_800FA490(c); // 800C5ED0
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800C5ED4
  cmps(c,0,(int32_t)c->r[0],0); // 800C5ED8
  if (!crb(c,2)) { goto L_800C5F04; } // 800C5EDC
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C5EE0
  cmps(c,0,(int32_t)c->r[0],0); // 800C5EE4
  if (!crb(c,2)) { goto L_800C5F04; } // 800C5EE8
  c->lr=0x800C5EF0u; f_800D1050(c); // 800C5EEC
  c->lr=0x800C5EF4u; f_800F5DB0(c); // 800C5EF0
L_800C5EF4:;
  c->lr=0x800C5EF8u; f_800F5E50(c); // 800C5EF4
  cmpu(c,0,c->r[3],0x00000001u); // 800C5EF8
  if (crb(c,2)) { IRQCHK(c); goto L_800C5EF4; } // 800C5EFC
  c->lr=0x800C5F04u; f_800D1F00(c); // 800C5F00
L_800C5F04:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C5F04
  cmps(c,0,(int32_t)c->r[0],0); // 800C5F08
  if (!crb(c,2)) { goto L_800C60E0; } // 800C5F0C
  c->r[3]=0u+0x80000000u; // 800C5F10
  c->r[0]=R8(c->r[3]+0x0000315Cu); // 800C5F14
  cmps(c,0,(int32_t)c->r[0],129); // 800C5F18
  if (crb(c,2)) { goto L_800C5F28; } // 800C5F1C
  if (!crb(c,0)) { goto L_800C5F48; } // 800C5F20
  goto L_800C5F48; // 800C5F24
L_800C5F28:;
  c->r[3]=c->r[31]+0x000001F0u; // 800C5F28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5F2C
  c->lr=0x800C5F34u; f_800C8450(c); // 800C5F30
  c->r[5]=c->r[31]+0x00000240u; // 800C5F34
  c->r[3]=c->r[13]+0xFFFF8EF8u; // 800C5F38
  c->r[4]=0u+0x00000481u; // 800C5F3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5F40
  c->lr=0x800C5F48u; f_800C84E0(c); // 800C5F44
L_800C5F48:;
  c->r[3]=0u+0x80000000u; // 800C5F48
  c->r[0]=R8(c->r[3]+0x0000315Du); // 800C5F4C
  cmps(c,0,(int32_t)c->r[0],129); // 800C5F50
  if (crb(c,2)) { goto L_800C5F60; } // 800C5F54
  if (!crb(c,0)) { goto L_800C5F80; } // 800C5F58
  goto L_800C5F80; // 800C5F5C
L_800C5F60:;
  c->r[3]=c->r[31]+0x00000258u; // 800C5F60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5F64
  c->lr=0x800C5F6Cu; f_800C8450(c); // 800C5F68
  c->r[5]=c->r[31]+0x00000240u; // 800C5F6C
  c->r[3]=c->r[13]+0xFFFF8EF8u; // 800C5F70
  c->r[4]=0u+0x00000493u; // 800C5F74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5F78
  c->lr=0x800C5F80u; f_800C84E0(c); // 800C5F7C
L_800C5F80:;
  c->r[4]=0u+0xC0000000u; // 800C5F80
  c->r[3]=0u+0x80000000u; // 800C5F84
  c->r[12]=R32(c->r[4]+0x00003144u); // 800C5F88
  c->r[11]=R32(c->r[4]+0x00003140u); // 800C5F8C
  c->r[0]=rotl(c->r[12],28)&0x0000000Fu; // 800C5F90
  c->r[7]=rotl(c->r[12],12)&0x0000000Fu; // 800C5F94
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C5F98
  c->r[3]=R32(c->r[3]+0x00003188u); // 800C5F9C
  c->r[4]=rotl(c->r[12],0)&0x0000000Fu; // 800C5FA0
  c->r[29]=R32(c->r[2]+0xFFFF99F8u); // 800C5FA4
  c->r[8]=rotl(c->r[11],16)&0x000000FFu; // 800C5FA8
  W8(c->r[1]+0x00000011u,c->r[8]); // 800C5FAC
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 800C5FB0
  c->r[4]=c->r[4]+c->r[5]; // 800C5FB4
  cmpu(c,0,c->r[8],c->r[0]); // 800C5FB8
  c->r[6]=rotl(c->r[12],20)&0x0000000Fu; // 800C5FBC
  c->r[0]=c->r[4]+0x000007D0u; // 800C5FC0
  c->r[8]=rotl(c->r[12],16)&0x0000000Fu; // 800C5FC4
  c->r[10]=rotl(c->r[11],8)&0x000000FFu; // 800C5FC8
  c->r[9]=rotl(c->r[11],24)&0x000000FFu; // 800C5FCC
  W8(c->r[1]+0x00000010u,c->r[10]); // 800C5FD0
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)10); // 800C5FD4
  c->r[5]=rotl(c->r[12],24)&0x0000000Fu; // 800C5FD8
  c->r[28]=R32(c->r[2]+0xFFFF99FCu); // 800C5FDC
  W8(c->r[1]+0x00000012u,c->r[9]); // 800C5FE0
  c->r[10]=rotl(c->r[11],0)&0x00FFFFFFu; // 800C5FE4
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 800C5FE8
  c->r[6]=c->r[8]+c->r[7]; // 800C5FEC
  W8(c->r[1]+0x00000013u,c->r[11]); // 800C5FF0
  c->r[4]=c->r[5]+c->r[4]; // 800C5FF4
  W8(c->r[1]+0x00000014u,c->r[6]); // 800C5FF8
  W8(c->r[1]+0x00000015u,c->r[4]); // 800C5FFC
  W16(c->r[1]+0x00000016u,c->r[0]); // 800C6000
  if (!crb(c,2)) { goto L_800C6014; } // 800C6004
  if (!crb(c,2)) { goto L_800C604C; } // 800C6008
  cmpu(c,0,c->r[10],c->r[3]); // 800C600C
  if (!crb(c,0)) { goto L_800C604C; } // 800C6010
L_800C6014:;
  c->r[3]=c->r[31]+0x000002B0u; // 800C6014
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C6018
  c->lr=0x800C6020u; f_800C8450(c); // 800C601C
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800C6020
  c->r[4]=c->r[1]+0x0000000Cu; // 800C6024
  c->r[3]=c->r[1]+0x00000008u; // 800C6028
  c->r[5]=c->r[31]+0x00000310u; // 800C602C
  W32(c->r[1]+0x00000008u,c->r[28]); // 800C6030
  c->lr=0x800C6038u; f_800CA5D0(c); // 800C6034
  c->r[5]=c->r[31]+0x00000240u; // 800C6038
  c->r[3]=c->r[13]+0xFFFF8EF8u; // 800C603C
  c->r[4]=0u+0x000004D4u; // 800C6040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C6044
  c->lr=0x800C604Cu; f_800C84E0(c); // 800C6048
L_800C604C:;
  c->lr=0x800C6050u; f_800E3BC0(c); // 800C604C
  c->r[0]=R32(c->r[13]+0xFFFFA450u); // 800C6050
  cmps(c,0,(int32_t)c->r[0],0); // 800C6054
  if (crb(c,2)) { goto L_800C6070; } // 800C6058
  c->r[4]=0u+0x00010000u; // 800C605C
  c->r[3]=0u+0x80000000u; // 800C6060
  c->r[0]=c->r[4]+0xFFFF9000u; // 800C6064
  W16(c->r[3]+0x000030E6u,c->r[0]); // 800C6068
  goto L_800C60A0; // 800C606C
L_800C6070:;
  c->r[3]=0u+0x80000000u; // 800C6070
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800C6074
  cmps(c,0,(int32_t)c->r[0],0); // 800C6078
  if (!crb(c,2)) { goto L_800C60A0; } // 800C607C
  c->r[3]=c->r[30]+0x00000020u; // 800C6080
  c->r[4]=0u+0x00000020u; // 800C6084
  c->lr=0x800C608Cu; f_800C7750(c); // 800C6088
  c->r[5]=0u+0x800C0000u; // 800C608C
  c->r[3]=c->r[30]+0x00000040u; // 800C6090
  c->r[4]=c->r[30]+0x00000020u; // 800C6094
  c->r[5]=c->r[5]+0x00005900u; // 800C6098
  c->lr=0x800C60A0u; f_800E7C40(c); // 800C609C
L_800C60A0:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C60A0
  cmps(c,0,(int32_t)c->r[0],0); // 800C60A4
  if (crb(c,2)) { goto L_800C60B4; } // 800C60A8
  c->r[0]=0u+0x00000040u; // 800C60AC
  goto L_800C60BC; // 800C60B0
L_800C60B4:;
  c->r[3]=0u+0x80000000u; // 800C60B4
  c->r[0]=R8(c->r[3]+0x00003184u); // 800C60B8
L_800C60BC:;
  cmpu(c,0,c->r[0],0x00000080u); // 800C60BC
  if (!crb(c,2)) { goto L_800C60E0; } // 800C60C0
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C60C4
  cmps(c,0,(int32_t)c->r[0],0); // 800C60C8
  if (!crb(c,2)) { goto L_800C60E0; } // 800C60CC
  c->lr=0x800C60D4u; f_800E9630(c); // 800C60D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C60D4
  if (!crb(c,2)) { goto L_800C60E0; } // 800C60D8
  c->lr=0x800C60E0u; f_800CD9A0(c); // 800C60DC
L_800C60E0:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C60E0
  cmps(c,0,(int32_t)c->r[0],0); // 800C60E4
  if (!crb(c,2)) { goto L_800C60FC; } // 800C60E8
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800C60EC
  cmps(c,0,(int32_t)c->r[0],0); // 800C60F0
  if (!crb(c,2)) { goto L_800C60FC; } // 800C60F4
  c->lr=0x800C60FCu; f_800D2850(c); // 800C60F8
L_800C60FC:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C60FC
  cmps(c,0,(int32_t)c->r[0],0); // 800C6100
  if (!crb(c,2)) { goto L_800C6124; } // 800C6104
  c->r[0]=R32(c->r[13]+0xFFFFA44Cu); // 800C6108
  cmps(c,0,(int32_t)c->r[0],0); // 800C610C
  if (!crb(c,2)) { goto L_800C6124; } // 800C6110
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C6114
  cmps(c,0,(int32_t)c->r[0],0); // 800C6118
  if (!crb(c,2)) { goto L_800C6124; } // 800C611C
  c->lr=0x800C6124u; f_800D1A90(c); // 800C6120
L_800C6124:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C6124
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C6128
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C612C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C6130
  c->r[28]=R32(c->r[1]+0x00000020u); // 800C6134
  c->lr=c->r[0]; // 800C6138
  c->r[1]=c->r[1]+0x00000030u; // 800C613C
  return; // 800C6140
}

// OSExceptionInit
void f_800C6150(Ctx* __restrict c) {
  trace_call(0x800C6150u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6150
  c->r[0]=c->lr; // 800C6154
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C6158
  c->r[11]=c->r[1]+0x00000040u; // 800C615C
  c->lr=0x800C6164u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6160
  c->r[22]=0u+0x80000000u; // 800C6164
  c->r[26]=0u+0x800C0000u; // 800C6168
  c->r[0]=R32(c->r[22]+0x00000060u); // 800C616C
  c->r[3]=0u+0x800C0000u; // 800C6170
  c->r[28]=0u+0x800C0000u; // 800C6174
  c->r[30]=0u+0x802A0000u; // 800C6178
  cmps(c,0,(int32_t)c->r[0],0); // 800C617C
  c->r[26]=c->r[26]+0x00006440u; // 800C6180
  c->r[3]=c->r[3]+0x000064D8u; // 800C6184
  {uint32_t ea=c->r[28]+0x000064A8u; c->r[27]=R32(ea); c->r[28]=ea;} // 800C6188
  c->r[30]=c->r[30]+0xFFFFFA88u; // 800C618C
  c->r[25]=c->r[3]-c->r[26]; // 800C6190
  if (!crb(c,2)) { goto L_800C61E0; } // 800C6194
  c->r[3]=c->r[30]+0x0000040Cu; // 800C6198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C619C
  c->lr=0x800C61A4u; f_800D6DE0(c); // 800C61A0
  c->r[4]=0u+0x800C0000u; // 800C61A4
  c->r[5]=0u+0x800C0000u; // 800C61A8
  c->r[4]=c->r[4]+0x000063D0u; // 800C61AC
  c->r[3]=c->r[22]+0x00000060u; // 800C61B0
  c->r[5]=c->r[5]+0x000063F4u; // 800C61B4
  c->r[21]=c->r[5]-c->r[4]; // 800C61B8
  c->r[5]=c->r[21]|c->r[21]; // 800C61BC
  c->lr=0x800C61C4u; f_80004364(c); // 800C61C0
  c->r[4]=c->r[21]|c->r[21]; // 800C61C4
  c->r[3]=c->r[22]+0x00000060u; // 800C61C8
  c->lr=0x800C61D0u; f_800C77E0(c); // 800C61CC
  /* sync */ // 800C61D0
  c->r[4]=c->r[21]|c->r[21]; // 800C61D4
  c->r[3]=c->r[22]+0x00000060u; // 800C61D8
  c->lr=0x800C61E0u; f_800C7840(c); // 800C61DC
L_800C61E0:;
  c->r[31]=0u+0x800C0000u; // 800C61E0
  c->r[3]=0u+0x800C0000u; // 800C61E4
  c->r[0]=c->r[31]+0x00006400u; // 800C61E8
  c->r[24]=c->r[30]+0x000003D0u; // 800C61EC
  c->r[3]=c->r[3]+0x00006404u; // 800C61F0
  c->r[29]=0u+0x00000000u; // 800C61F4
  c->r[21]=c->r[3]-c->r[0]; // 800C61F8
  c->r[23]=0u+0x60000000u; // 800C61FC
  c->r[22]=0u+0x800C0000u; // 800C6200
L_800C6204:;
  c->r[3]=R32(c->r[13]+0xFFFFA47Cu); // 800C6204
  cmps(c,0,(int32_t)c->r[3],0); // 800C6208
  if (crb(c,2)) { goto L_800C6240; } // 800C620C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C6210
  cmpu(c,0,c->r[0],0x00000002u); // 800C6214
  if (crb(c,0)) { goto L_800C6240; } // 800C6218
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800C621C
  c->lr=0x800C6224u; f_800D6DC0(c); // 800C6220
  cmps(c,0,(int32_t)c->r[3],0); // 800C6224
  if (crb(c,2)) { goto L_800C6240; } // 800C6228
  c->r[3]=c->r[30]+0x00000428u; // 800C622C
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800C6230
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C6234
  c->lr=0x800C623Cu; f_800D6DE0(c); // 800C6238
  goto L_800C6314; // 800C623C
L_800C6240:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800C6240
  c->r[0]=c->r[27]|c->r[3]; // 800C6244
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C6248
  c->lr=0x800C6250u; f_800D6DC0(c); // 800C624C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6250
  if (crb(c,2)) { goto L_800C627C; } // 800C6254
  c->r[3]=c->r[30]+0x00000458u; // 800C6258
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800C625C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C6260
  c->lr=0x800C6268u; f_800D6DE0(c); // 800C6264
  c->r[5]=c->r[21]|c->r[21]; // 800C6268
  c->r[3]=c->r[22]+0x00006498u; // 800C626C
  c->r[4]=c->r[31]+0x00006400u; // 800C6270
  c->lr=0x800C6278u; f_80004364(c); // 800C6274
  goto L_800C62DC; // 800C6278
L_800C627C:;
  cmpu(c,0,c->r[21],0x00000000u); // 800C627C
  c->r[3]=c->r[21]+0x00000003u; // 800C6280
  c->r[4]=c->r[22]+0x00006498u; // 800C6284
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800C6288
  if (!crb(c,1)) { goto L_800C62DC; } // 800C628C
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800C6290
  c->ctr=c->r[0]; // 800C6294
  if (crb(c,2)) { goto L_800C62CC; } // 800C6298
L_800C629C:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 800C629C
  W32(c->r[4]+0x00000004u,c->r[23]); // 800C62A0
  W32(c->r[4]+0x00000008u,c->r[23]); // 800C62A4
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 800C62A8
  W32(c->r[4]+0x00000010u,c->r[23]); // 800C62AC
  W32(c->r[4]+0x00000014u,c->r[23]); // 800C62B0
  W32(c->r[4]+0x00000018u,c->r[23]); // 800C62B4
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 800C62B8
  c->r[4]=c->r[4]+0x00000020u; // 800C62BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C629C; } // 800C62C0
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800C62C4
  if (crb(c,2)) { goto L_800C62DC; } // 800C62C8
L_800C62CC:;
  c->ctr=c->r[3]; // 800C62CC
L_800C62D0:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 800C62D0
  c->r[4]=c->r[4]+0x00000004u; // 800C62D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C62D0; } // 800C62D8
L_800C62DC:;
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 800C62DC
  c->r[4]=c->r[26]|c->r[26]; // 800C62E0
  c->r[3]=R32(c->r[24]+c->r[0]); // 800C62E4
  c->r[5]=c->r[25]|c->r[25]; // 800C62E8
  c->r[20]=c->r[3]+0x80000000u; // 800C62EC
  c->r[3]=c->r[20]|c->r[20]; // 800C62F0
  c->lr=0x800C62F8u; f_80004364(c); // 800C62F4
  c->r[3]=c->r[20]|c->r[20]; // 800C62F8
  c->r[4]=c->r[25]|c->r[25]; // 800C62FC
  c->lr=0x800C6304u; f_800C77E0(c); // 800C6300
  /* sync */ // 800C6304
  c->r[3]=c->r[20]|c->r[20]; // 800C6308
  c->r[4]=c->r[25]|c->r[25]; // 800C630C
  c->lr=0x800C6314u; f_800C7840(c); // 800C6310
L_800C6314:;
  c->r[29]=c->r[29]+0x00000001u; // 800C6314
  cmpu(c,0,c->r[29],0x0000000Fu); // 800C6318
  if (crb(c,0)) { IRQCHK(c); goto L_800C6204; } // 800C631C
  c->r[3]=0u+0x80000000u; // 800C6320
  c->r[5]=0u+0x800C0000u; // 800C6324
  c->r[4]=c->r[3]+0x00003000u; // 800C6328
  W32(c->r[13]+0xFFFFA458u,c->r[4]); // 800C632C
  c->r[5]=c->r[5]+0x000064E0u; // 800C6330
  c->r[3]=c->r[30]+0x00000488u; // 800C6334
  W32(c->r[4]+0x00000000u,c->r[5]); // 800C6338
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C633C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800C6340
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6344
  W32(c->r[4]+0x00000008u,c->r[5]); // 800C6348
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C634C
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 800C6350
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6354
  W32(c->r[4]+0x00000010u,c->r[5]); // 800C6358
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C635C
  W32(c->r[4]+0x00000014u,c->r[5]); // 800C6360
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6364
  W32(c->r[4]+0x00000018u,c->r[5]); // 800C6368
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C636C
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 800C6370
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6374
  W32(c->r[4]+0x00000020u,c->r[5]); // 800C6378
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C637C
  W32(c->r[4]+0x00000024u,c->r[5]); // 800C6380
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6384
  W32(c->r[4]+0x00000028u,c->r[5]); // 800C6388
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C638C
  W32(c->r[4]+0x0000002Cu,c->r[5]); // 800C6390
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6394
  W32(c->r[4]+0x00000030u,c->r[5]); // 800C6398
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C639C
  W32(c->r[4]+0x00000034u,c->r[5]); // 800C63A0
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C63A4
  W32(c->r[4]+0x00000038u,c->r[5]); // 800C63A8
  W32(c->r[28]+0x00000000u,c->r[27]); // 800C63AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C63B0
  c->lr=0x800C63B8u; f_800D6DE0(c); // 800C63B4
  c->r[11]=c->r[1]+0x00000040u; // 800C63B8
  c->lr=0x800C63C0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C63BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C63C0
  c->lr=c->r[0]; // 800C63C4
  c->r[1]=c->r[1]+0x00000040u; // 800C63C8
  return; // 800C63CC
}

// __OSDBIntegrator
void f_800C63D0(Ctx* __restrict c) {
  trace_call(0x800C63D0u);
  c->r[5]=0u+0x00000040u; // 800C63D0
  c->r[3]=c->lr; // 800C63D4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800C63D8
  c->r[3]=R32(c->r[5]+0x00000008u); // 800C63DC
  c->r[3]=c->r[3]|0x80000000u; // 800C63E0
  c->lr=c->r[3]; // 800C63E4
  c->r[3]=0u+0x00000030u; // 800C63E8
  c->msr=c->r[3]; // 800C63EC
  return; // 800C63F0
}

// __OSDBJump
void f_800C6400(Ctx* __restrict c) {
  trace_call(0x800C6400u);
  c->lr=0x800C6404u; dispatch(c,0x00000060u); // 800C6400
}

// __OSSetExceptionHandler
void f_800C6410(Ctx* __restrict c) {
  trace_call(0x800C6410u);
  c->r[5]=R32(c->r[13]+0xFFFFA458u); // 800C6410
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800C6414
  c->r[3]=R32(c->r[5]+c->r[0]); // 800C6418
  W32(c->r[5]+c->r[0],c->r[4]); // 800C641C
  return; // 800C6420
}

// __OSGetExceptionHandler
void f_800C6430(Ctx* __restrict c) {
  trace_call(0x800C6430u);
  c->r[4]=R32(c->r[13]+0xFFFFA458u); // 800C6430
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800C6434
  c->r[3]=R32(c->r[4]+c->r[0]); // 800C6438
  return; // 800C643C
}

// OSExceptionVector
void f_800C6440(Ctx* __restrict c) {
  trace_call(0x800C6440u);
  mtspr(c,272,c->r[4]); // 800C6440
  c->r[4]=R32(0u+0x000000C0u); // 800C6444
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800C6448
  c->r[3]=mfspr(c,272); // 800C644C
  W32(c->r[4]+0x00000010u,c->r[3]); // 800C6450
  W32(c->r[4]+0x00000014u,c->r[5]); // 800C6454
  c->r[3]=R16(c->r[4]+0x000001A2u); // 800C6458
  c->r[3]=c->r[3]|0x00000002u; // 800C645C
  W16(c->r[4]+0x000001A2u,c->r[3]); // 800C6460
  c->r[3]=c->cr; // 800C6464
  W32(c->r[4]+0x00000080u,c->r[3]); // 800C6468
  c->r[3]=c->lr; // 800C646C
  W32(c->r[4]+0x00000084u,c->r[3]); // 800C6470
  c->r[3]=c->ctr; // 800C6474
  W32(c->r[4]+0x00000088u,c->r[3]); // 800C6478
  c->r[3]=mfspr(c,1); // 800C647C
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 800C6480
  c->r[3]=mfspr(c,26); // 800C6484
  W32(c->r[4]+0x00000198u,c->r[3]); // 800C6488
  c->r[3]=mfspr(c,27); // 800C648C
  W32(c->r[4]+0x0000019Cu,c->r[3]); // 800C6490
  c->r[5]=c->r[3]|c->r[3]; // 800C6494
  c->r[0]=c->r[0]|0x00000000u; // 800C6498
  c->r[3]=c->msr; // 800C649C
  c->r[3]=c->r[3]|0x00000030u; // 800C64A0
  mtspr(c,27,c->r[3]); // 800C64A4
  c->r[3]=0u+0x00000000u; // 800C64A8
  c->r[4]=R32(0u+0x000000D4u); // 800C64AC
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 800C64B0
  if (!crb(c,2)) { goto L_800C64C8; } // 800C64B4
  c->r[5]=0u+0x800C0000u; // 800C64B8
  c->r[5]=c->r[5]+0x000064E0u; // 800C64BC
  mtspr(c,26,c->r[5]); // 800C64C0
  return; /* rfi */ // 800C64C4
L_800C64C8:;
  c->r[5]=rotl(c->r[3],2)&0x000003FCu; // 800C64C8
  c->r[5]=R32(c->r[5]+0x00003000u); // 800C64CC
  mtspr(c,26,c->r[5]); // 800C64D0
  return; /* rfi */ // 800C64D4
  c->r[0]=c->r[0]|0x00000000u; // 800C64D8
}

// OSDefaultExceptionHandler
void f_800C64E0(Ctx* __restrict c) {
  trace_call(0x800C64E0u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C64E0
  W32(c->r[4]+0x00000004u,c->r[1]); // 800C64E4
  W32(c->r[4]+0x00000008u,c->r[2]); // 800C64E8
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C64EC
  c->r[0]=mfspr(c,913); // 800C64F0
  W32(c->r[4]+0x000001A8u,c->r[0]); // 800C64F4
  c->r[0]=mfspr(c,914); // 800C64F8
  W32(c->r[4]+0x000001ACu,c->r[0]); // 800C64FC
  c->r[0]=mfspr(c,915); // 800C6500
  W32(c->r[4]+0x000001B0u,c->r[0]); // 800C6504
  c->r[0]=mfspr(c,916); // 800C6508
  W32(c->r[4]+0x000001B4u,c->r[0]); // 800C650C
  c->r[0]=mfspr(c,917); // 800C6510
  W32(c->r[4]+0x000001B8u,c->r[0]); // 800C6514
  c->r[0]=mfspr(c,918); // 800C6518
  W32(c->r[4]+0x000001BCu,c->r[0]); // 800C651C
  c->r[0]=mfspr(c,919); // 800C6520
  W32(c->r[4]+0x000001C0u,c->r[0]); // 800C6524
  c->r[5]=mfspr(c,18); // 800C6528
  c->r[6]=mfspr(c,19); // 800C652C
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6530
  f_800C88A0(c); return; // 800C6534
}

// __OSPSInit
void f_800C6540(Ctx* __restrict c) {
  trace_call(0x800C6540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6540
  c->r[0]=c->lr; // 800C6544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6548
  c->lr=0x800C6550u; f_800C5070(c); // 800C654C
  c->r[3]=c->r[3]|0xA0000000u; // 800C6550
  c->lr=0x800C6558u; f_800C5080(c); // 800C6554
  c->lr=0x800C655Cu; f_800C7880(c); // 800C6558
  /* sync */ // 800C655C
  c->r[3]=0u+0x00000000u; // 800C6560
  mtspr(c,912,c->r[3]); // 800C6564
  mtspr(c,913,c->r[3]); // 800C6568
  mtspr(c,914,c->r[3]); // 800C656C
  mtspr(c,915,c->r[3]); // 800C6570
  mtspr(c,916,c->r[3]); // 800C6574
  mtspr(c,917,c->r[3]); // 800C6578
  mtspr(c,918,c->r[3]); // 800C657C
  mtspr(c,919,c->r[3]); // 800C6580
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6584
  c->lr=c->r[0]; // 800C6588
  c->r[1]=c->r[1]+0x00000010u; // 800C658C
  return; // 800C6590
}

// __OSGetDIConfig
void f_800C65A0(Ctx* __restrict c) {
  trace_call(0x800C65A0u);
  c->r[3]=0u+0xCD000000u; // 800C65A0
  c->r[0]=R32(c->r[3]+0x00006024u); // 800C65A4
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800C65A8
  return; // 800C65AC
}

// OSRegisterVersion
void f_800C65B0(Ctx* __restrict c) {
  trace_call(0x800C65B0u);
  c->r[4]=c->r[3]|c->r[3]; // 800C65B0
  c->r[3]=c->r[13]+0xFFFF8EF4u; // 800C65B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C65B8
  f_800C8450(c); return; // 800C65BC
}

// OSGetAppGamename
void f_800C65C0(Ctx* __restrict c) {
  trace_call(0x800C65C0u);
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C65C0
  c->r[3]=0u+0x80000000u; // 800C65C4
  c->r[6]=c->r[3]+0x00003194u; // 800C65C8
  cmps(c,0,(int32_t)c->r[0],0); // 800C65CC
  if (crb(c,2)) { goto L_800C65DC; } // 800C65D0
  c->r[6]=R32(c->r[13]+0xFFFF8F08u); // 800C65D4
  goto L_800C6610; // 800C65D8
L_800C65DC:;
  c->r[3]=R8(c->r[3]+0x00003194u); // 800C65DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C65E0
  cmps(c,0,(int32_t)c->r[0],48); // 800C65E4
  if (crb(c,0)) { goto L_800C6608; } // 800C65E8
  cmps(c,0,(int32_t)c->r[0],57); // 800C65EC
  if (!crb(c,1)) { goto L_800C65FC; } // 800C65F0
  cmps(c,0,(int32_t)c->r[0],65); // 800C65F4
  if (crb(c,0)) { goto L_800C6608; } // 800C65F8
L_800C65FC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C65FC
  cmps(c,0,(int32_t)c->r[0],90); // 800C6600
  if (!crb(c,1)) { goto L_800C6610; } // 800C6604
L_800C6608:;
  c->r[3]=0u+0x80000000u; // 800C6608
  c->r[6]=c->r[3]+0x00003180u; // 800C660C
L_800C6610:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C6610
  c->r[5]=c->r[13]+0xFFFFA470u; // 800C6614
  W8(c->r[13]+0xFFFFA470u,c->r[0]); // 800C6618
  c->r[0]=0u+0x00000000u; // 800C661C
  c->r[3]=R8(c->r[6]+0x00000001u); // 800C6620
  W8(c->r[5]+0x00000001u,c->r[3]); // 800C6624
  c->r[3]=c->r[13]+0xFFFFA470u; // 800C6628
  c->r[4]=R8(c->r[6]+0x00000002u); // 800C662C
  W8(c->r[5]+0x00000002u,c->r[4]); // 800C6630
  c->r[4]=R8(c->r[6]+0x00000003u); // 800C6634
  W8(c->r[5]+0x00000003u,c->r[4]); // 800C6638
  W8(c->r[5]+0x00000004u,c->r[0]); // 800C663C
  return; // 800C6640
}

// OSGetAppType
void f_800C6650(Ctx* __restrict c) {
  trace_call(0x800C6650u);
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800C6650
  cmps(c,0,(int32_t)c->r[0],0); // 800C6654
  if (crb(c,2)) { goto L_800C6664; } // 800C6658
  c->r[3]=0u+0x00000040u; // 800C665C
  return; // 800C6660
L_800C6664:;
  c->r[3]=0u+0x80000000u; // 800C6664
  c->r[3]=R8(c->r[3]+0x00003184u); // 800C6668
  return; // 800C666C
}

// __OSInitAlarm
void f_800C6670(Ctx* __restrict c) {
  trace_call(0x800C6670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6670
  c->r[0]=c->lr; // 800C6674
  c->r[3]=0u+0x00000008u; // 800C6678
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C667C
  c->lr=0x800C6684u; f_800C6430(c); // 800C6680
  c->r[4]=0u+0x800C0000u; // 800C6684
  c->r[4]=c->r[4]+0x00006D80u; // 800C6688
  cmpu(c,0,c->r[3],c->r[4]); // 800C668C
  if (crb(c,2)) { goto L_800C66B8; } // 800C6690
  c->r[3]=c->r[13]+0xFFFFA490u; // 800C6694
  c->r[0]=0u+0x00000000u; // 800C6698
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C669C
  c->r[3]=0u+0x00000008u; // 800C66A0
  W32(c->r[13]+0xFFFFA490u,c->r[0]); // 800C66A4
  c->lr=0x800C66ACu; f_800C6410(c); // 800C66A8
  c->r[3]=0u+0x802A0000u; // 800C66AC
  c->r[3]=c->r[3]+0xFFFFFF30u; // 800C66B0
  c->lr=0x800C66B8u; f_800CD1E0(c); // 800C66B4
L_800C66B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C66B8
  c->lr=c->r[0]; // 800C66BC
  c->r[1]=c->r[1]+0x00000010u; // 800C66C0
  return; // 800C66C4
}

// OSCreateAlarm
void f_800C66D0(Ctx* __restrict c) {
  trace_call(0x800C66D0u);
  c->r[0]=0u+0x00000000u; // 800C66D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C66D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C66D8
  return; // 800C66DC
}

// InsertAlarm
void f_800C66E0(Ctx* __restrict c) {
  trace_call(0x800C66E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C66E0
  c->r[0]=c->lr; // 800C66E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C66E8
  c->r[11]=c->r[1]+0x00000030u; // 800C66EC
  c->lr=0x800C66F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C66F0
  c->r[4]=R32(c->r[3]+0x00000018u); // 800C66F4
  c->r[29]=0u+0x00000000u; // 800C66F8
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 800C66FC
  c->r[30]=c->r[3]|c->r[3]; // 800C6700
  c->r[0]=c->r[29]^0x80000000u; // 800C6704
  c->r[4]=c->r[4]^0x80000000u; // 800C6708
  c->r[3]=addc(c,~c->r[8],c->r[29],1); // 800C670C
  c->r[31]=c->r[7]|c->r[7]; // 800C6710
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800C6714
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800C6718
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800C671C
  if (crb(c,2)) { goto L_800C679C; } // 800C6720
  c->lr=0x800C6728u; f_800D0540(c); // 800C6724
  c->r[28]=R32(c->r[30]+0x00000020u); // 800C6728
  c->r[7]=c->r[3]^0x80000000u; // 800C672C
  c->r[27]=R32(c->r[30]+0x00000024u); // 800C6730
  c->r[0]=c->r[28]^0x80000000u; // 800C6734
  c->r[5]=c->r[28]|c->r[28]; // 800C6738
  c->r[6]=addc(c,~c->r[4],c->r[27],1); // 800C673C
  c->r[7]=addc(c,~c->r[7],c->r[0],c->xer_ca); // 800C6740
  c->r[7]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800C6744
  c->r[6]=c->r[27]|c->r[27]; // 800C6748
  c->r[7]=0u-c->r[7]; cr0(c,c->r[7]); // 800C674C
  if (crb(c,2)) { goto L_800C679C; } // 800C6750
  c->r[26]=R32(c->r[30]+0x00000018u); // 800C6754
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 800C6758
  c->r[25]=R32(c->r[30]+0x0000001Cu); // 800C675C
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 800C6760
  c->r[5]=c->r[26]|c->r[26]; // 800C6764
  c->r[6]=c->r[25]|c->r[25]; // 800C6768
  c->lr=0x800C6770u; f_802179FC(c); // 800C676C
  c->r[0]=0u+0x00000001u; // 800C6770
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 800C6774
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[4])>>32); // 800C6778
  c->r[5]=addc(c,c->r[3],c->r[29],c->xer_ca); // 800C677C
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[4]); // 800C6780
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[4]); // 800C6784
  c->r[3]=c->r[0]+c->r[3]; // 800C6788
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[5]); // 800C678C
  c->r[6]=addc(c,c->r[27],c->r[4],0); // 800C6790
  c->r[0]=c->r[3]+c->r[0]; // 800C6794
  c->r[5]=addc(c,c->r[28],c->r[0],c->xer_ca); // 800C6798
L_800C679C:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 800C679C
  c->r[0]=c->r[5]^0x80000000u; // 800C67A0
  W32(c->r[30]+0x0000000Cu,c->r[6]); // 800C67A4
  W32(c->r[30]+0x00000008u,c->r[5]); // 800C67A8
  c->r[7]=R32(c->r[13]+0xFFFFA490u); // 800C67AC
  goto L_800C6874; // 800C67B0
L_800C67B4:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 800C67B4
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 800C67B8
  c->r[4]=c->r[3]^0x80000000u; // 800C67BC
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 800C67C0
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800C67C4
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800C67C8
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800C67CC
  if (crb(c,2)) { goto L_800C6870; } // 800C67D0
  c->r[0]=R32(c->r[7]+0x00000010u); // 800C67D4
  W32(c->r[30]+0x00000010u,c->r[0]); // 800C67D8
  W32(c->r[7]+0x00000010u,c->r[30]); // 800C67DC
  c->r[3]=R32(c->r[30]+0x00000010u); // 800C67E0
  W32(c->r[30]+0x00000014u,c->r[7]); // 800C67E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C67E8
  if (crb(c,2)) { goto L_800C67F8; } // 800C67EC
  W32(c->r[3]+0x00000014u,c->r[30]); // 800C67F0
  goto L_800C6918; // 800C67F4
L_800C67F8:;
  W32(c->r[13]+0xFFFFA490u,c->r[30]); // 800C67F8
  c->lr=0x800C6800u; f_800D0540(c); // 800C67FC
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 800C6800
  c->r[7]=0u+0x00000000u; // 800C6804
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C6808
  c->r[6]=c->r[7]^0x80000000u; // 800C680C
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800C6810
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800C6814
  c->r[5]=c->r[0]^0x80000000u; // 800C6818
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800C681C
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800C6820
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6824
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800C6828
  if (crb(c,2)) { goto L_800C683C; } // 800C682C
  c->r[3]=0u+0x00000000u; // 800C6830
  c->lr=0x800C6838u; f_800C4F80(c); // 800C6834
  goto L_800C6918; // 800C6838
L_800C683C:;
  c->r[4]=0u+0x80000000u; // 800C683C
  c->r[3]=c->r[7]^0x80000000u; // 800C6840
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800C6844
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800C6848
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C684C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800C6850
  if (crb(c,2)) { goto L_800C6864; } // 800C6854
  c->r[3]=c->r[8]|c->r[8]; // 800C6858
  c->lr=0x800C6860u; f_800C4F80(c); // 800C685C
  goto L_800C6918; // 800C6860
L_800C6864:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800C6864
  c->lr=0x800C686Cu; f_800C4F80(c); // 800C6868
  goto L_800C6918; // 800C686C
L_800C6870:;
  c->r[7]=R32(c->r[7]+0x00000014u); // 800C6870
L_800C6874:;
  cmps(c,0,(int32_t)c->r[7],0); // 800C6874
  if (!crb(c,2)) { IRQCHK(c); goto L_800C67B4; } // 800C6878
  c->r[31]=0u+0x00000000u; // 800C687C
  W32(c->r[30]+0x00000014u,c->r[31]); // 800C6880
  c->r[3]=c->r[13]+0xFFFFA490u; // 800C6884
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C6888
  W32(c->r[3]+0x00000004u,c->r[30]); // 800C688C
  cmps(c,0,(int32_t)c->r[4],0); // 800C6890
  W32(c->r[30]+0x00000010u,c->r[4]); // 800C6894
  if (crb(c,2)) { goto L_800C68A4; } // 800C6898
  W32(c->r[4]+0x00000014u,c->r[30]); // 800C689C
  goto L_800C6918; // 800C68A0
L_800C68A4:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 800C68A4
  W32(c->r[13]+0xFFFFA490u,c->r[30]); // 800C68A8
  c->lr=0x800C68B0u; f_800D0540(c); // 800C68AC
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 800C68B0
  c->r[6]=c->r[31]^0x80000000u; // 800C68B4
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C68B8
  c->r[7]=addc(c,~c->r[4],c->r[5],1); // 800C68BC
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800C68C0
  c->r[5]=c->r[0]^0x80000000u; // 800C68C4
  c->r[0]=addc(c,~c->r[31],c->r[7],1); // 800C68C8
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800C68CC
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C68D0
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800C68D4
  if (crb(c,2)) { goto L_800C68E8; } // 800C68D8
  c->r[3]=0u+0x00000000u; // 800C68DC
  c->lr=0x800C68E4u; f_800C4F80(c); // 800C68E0
  goto L_800C6918; // 800C68E4
L_800C68E8:;
  c->r[4]=0u+0x80000000u; // 800C68E8
  c->r[3]=c->r[31]^0x80000000u; // 800C68EC
  c->r[0]=addc(c,~c->r[4],c->r[7],1); // 800C68F0
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800C68F4
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C68F8
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800C68FC
  if (crb(c,2)) { goto L_800C6910; } // 800C6900
  c->r[3]=c->r[7]|c->r[7]; // 800C6904
  c->lr=0x800C690Cu; f_800C4F80(c); // 800C6908
  goto L_800C6918; // 800C690C
L_800C6910:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800C6910
  c->lr=0x800C6918u; f_800C4F80(c); // 800C6914
L_800C6918:;
  c->r[11]=c->r[1]+0x00000030u; // 800C6918
  c->lr=0x800C6920u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C691C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C6920
  c->lr=c->r[0]; // 800C6924
  c->r[1]=c->r[1]+0x00000030u; // 800C6928
  return; // 800C692C
}

// OSSetAlarm
void f_800C6930(Ctx* __restrict c) {
  trace_call(0x800C6930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6930
  c->r[0]=c->lr; // 800C6934
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6938
  c->r[11]=c->r[1]+0x00000020u; // 800C693C
  c->lr=0x800C6944u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6940
  c->r[27]=c->r[3]|c->r[3]; // 800C6944
  c->r[29]=c->r[5]|c->r[5]; // 800C6948
  c->r[28]=c->r[6]|c->r[6]; // 800C694C
  c->r[30]=c->r[7]|c->r[7]; // 800C6950
  c->lr=0x800C6958u; f_800CBAA0(c); // 800C6954
  c->r[0]=0u+0x00000000u; // 800C6958
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 800C695C
  c->r[31]=c->r[3]|c->r[3]; // 800C6960
  W32(c->r[27]+0x00000018u,c->r[0]); // 800C6964
  c->lr=0x800C696Cu; f_800D0540(c); // 800C6968
  c->r[6]=addc(c,c->r[28],c->r[4],0); // 800C696C
  c->r[7]=c->r[30]|c->r[30]; // 800C6970
  c->r[5]=addc(c,c->r[29],c->r[3],c->xer_ca); // 800C6974
  c->r[3]=c->r[27]|c->r[27]; // 800C6978
  c->lr=0x800C6980u; f_800C66E0(c); // 800C697C
  c->r[3]=c->r[31]|c->r[31]; // 800C6980
  c->lr=0x800C6988u; f_800CBAE0(c); // 800C6984
  c->r[11]=c->r[1]+0x00000020u; // 800C6988
  c->lr=0x800C6990u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C698C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6990
  c->lr=c->r[0]; // 800C6994
  c->r[1]=c->r[1]+0x00000020u; // 800C6998
  return; // 800C699C
}

// OSSetPeriodicAlarm
void f_800C69A0(Ctx* __restrict c) {
  trace_call(0x800C69A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C69A0
  c->r[0]=c->lr; // 800C69A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C69A8
  c->r[11]=c->r[1]+0x00000020u; // 800C69AC
  c->lr=0x800C69B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C69B0
  c->r[26]=c->r[3]|c->r[3]; // 800C69B4
  c->r[28]=c->r[5]|c->r[5]; // 800C69B8
  c->r[27]=c->r[6]|c->r[6]; // 800C69BC
  c->r[29]=c->r[7]|c->r[7]; // 800C69C0
  c->r[31]=c->r[8]|c->r[8]; // 800C69C4
  c->r[30]=c->r[9]|c->r[9]; // 800C69C8
  c->lr=0x800C69D0u; f_800CBAA0(c); // 800C69CC
  W32(c->r[26]+0x0000001Cu,c->r[31]); // 800C69D0
  c->r[31]=c->r[3]|c->r[3]; // 800C69D4
  c->r[4]=c->r[27]|c->r[27]; // 800C69D8
  c->r[3]=c->r[28]|c->r[28]; // 800C69DC
  W32(c->r[26]+0x00000018u,c->r[29]); // 800C69E0
  c->lr=0x800C69E8u; f_800D05B0(c); // 800C69E4
  W32(c->r[26]+0x00000020u,c->r[3]); // 800C69E8
  c->r[3]=c->r[26]|c->r[26]; // 800C69EC
  c->r[7]=c->r[30]|c->r[30]; // 800C69F0
  c->r[6]=0u+0x00000000u; // 800C69F4
  W32(c->r[26]+0x00000024u,c->r[4]); // 800C69F8
  c->r[5]=0u+0x00000000u; // 800C69FC
  c->lr=0x800C6A04u; f_800C66E0(c); // 800C6A00
  c->r[3]=c->r[31]|c->r[31]; // 800C6A04
  c->lr=0x800C6A0Cu; f_800CBAE0(c); // 800C6A08
  c->r[11]=c->r[1]+0x00000020u; // 800C6A0C
  c->lr=0x800C6A14u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6A10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6A14
  c->lr=c->r[0]; // 800C6A18
  c->r[1]=c->r[1]+0x00000020u; // 800C6A1C
  return; // 800C6A20
}

// OSCancelAlarm
void f_800C6A30(Ctx* __restrict c) {
  trace_call(0x800C6A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6A30
  c->r[0]=c->lr; // 800C6A34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6A38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C6A3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C6A40
  c->r[30]=c->r[3]|c->r[3]; // 800C6A44
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C6A48
  c->lr=0x800C6A50u; f_800CBAA0(c); // 800C6A4C
  c->r[0]=R32(c->r[30]+0x00000000u); // 800C6A50
  c->r[31]=c->r[3]|c->r[3]; // 800C6A54
  cmps(c,0,(int32_t)c->r[0],0); // 800C6A58
  if (!crb(c,2)) { goto L_800C6A68; } // 800C6A5C
  c->lr=0x800C6A64u; f_800CBAE0(c); // 800C6A60
  goto L_800C6B2C; // 800C6A64
L_800C6A68:;
  c->r[29]=R32(c->r[30]+0x00000014u); // 800C6A68
  cmps(c,0,(int32_t)c->r[29],0); // 800C6A6C
  if (!crb(c,2)) { goto L_800C6A84; } // 800C6A70
  c->r[0]=R32(c->r[30]+0x00000010u); // 800C6A74
  c->r[3]=c->r[13]+0xFFFFA490u; // 800C6A78
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C6A7C
  goto L_800C6A8C; // 800C6A80
L_800C6A84:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 800C6A84
  W32(c->r[29]+0x00000010u,c->r[0]); // 800C6A88
L_800C6A8C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800C6A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6A90
  if (crb(c,2)) { goto L_800C6AA0; } // 800C6A94
  W32(c->r[3]+0x00000014u,c->r[29]); // 800C6A98
  goto L_800C6B1C; // 800C6A9C
L_800C6AA0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C6AA0
  W32(c->r[13]+0xFFFFA490u,c->r[29]); // 800C6AA4
  if (crb(c,2)) { goto L_800C6B1C; } // 800C6AA8
  c->lr=0x800C6AB0u; f_800D0540(c); // 800C6AAC
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 800C6AB0
  c->r[7]=0u+0x00000000u; // 800C6AB4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C6AB8
  c->r[6]=c->r[7]^0x80000000u; // 800C6ABC
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800C6AC0
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800C6AC4
  c->r[5]=c->r[0]^0x80000000u; // 800C6AC8
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800C6ACC
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800C6AD0
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6AD4
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800C6AD8
  if (crb(c,2)) { goto L_800C6AEC; } // 800C6ADC
  c->r[3]=0u+0x00000000u; // 800C6AE0
  c->lr=0x800C6AE8u; f_800C4F80(c); // 800C6AE4
  goto L_800C6B1C; // 800C6AE8
L_800C6AEC:;
  c->r[4]=0u+0x80000000u; // 800C6AEC
  c->r[3]=c->r[7]^0x80000000u; // 800C6AF0
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800C6AF4
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800C6AF8
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6AFC
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800C6B00
  if (crb(c,2)) { goto L_800C6B14; } // 800C6B04
  c->r[3]=c->r[8]|c->r[8]; // 800C6B08
  c->lr=0x800C6B10u; f_800C4F80(c); // 800C6B0C
  goto L_800C6B1C; // 800C6B10
L_800C6B14:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800C6B14
  c->lr=0x800C6B1Cu; f_800C4F80(c); // 800C6B18
L_800C6B1C:;
  c->r[0]=0u+0x00000000u; // 800C6B1C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800C6B20
  c->r[3]=c->r[31]|c->r[31]; // 800C6B24
  c->lr=0x800C6B2Cu; f_800CBAE0(c); // 800C6B28
L_800C6B2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6B2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C6B30
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C6B34
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C6B38
  c->lr=c->r[0]; // 800C6B3C
  c->r[1]=c->r[1]+0x00000020u; // 800C6B40
  return; // 800C6B44
}

// DecrementerExceptionCallback
void f_800C6B50(Ctx* __restrict c) {
  trace_call(0x800C6B50u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6B50
  c->r[0]=c->lr; // 800C6B54
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800C6B58
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800C6B5C
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800C6B60
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800C6B64
  c->r[29]=c->r[4]|c->r[4]; // 800C6B68
  W32(c->r[1]+0x000002D0u,c->r[28]); // 800C6B6C
  c->lr=0x800C6B74u; f_800D0540(c); // 800C6B70
  c->r[31]=R32(c->r[13]+0xFFFFA490u); // 800C6B74
  c->r[28]=c->r[4]|c->r[4]; // 800C6B78
  c->r[30]=c->r[3]|c->r[3]; // 800C6B7C
  cmps(c,0,(int32_t)c->r[31],0); // 800C6B80
  if (!crb(c,2)) { goto L_800C6B90; } // 800C6B84
  c->r[3]=c->r[29]|c->r[29]; // 800C6B88
  c->lr=0x800C6B90u; f_800C7ED0(c); // 800C6B8C
L_800C6B90:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C6B90
  c->r[0]=c->r[30]^0x80000000u; // 800C6B94
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 800C6B98
  c->r[4]=c->r[3]^0x80000000u; // 800C6B9C
  c->r[3]=addc(c,~c->r[5],c->r[28],1); // 800C6BA0
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800C6BA4
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800C6BA8
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800C6BAC
  if (crb(c,2)) { goto L_800C6C2C; } // 800C6BB0
  c->lr=0x800C6BB8u; f_800D0540(c); // 800C6BB4
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 800C6BB8
  c->r[7]=0u+0x00000000u; // 800C6BBC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C6BC0
  c->r[6]=c->r[7]^0x80000000u; // 800C6BC4
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800C6BC8
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800C6BCC
  c->r[5]=c->r[0]^0x80000000u; // 800C6BD0
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800C6BD4
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800C6BD8
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6BDC
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800C6BE0
  if (crb(c,2)) { goto L_800C6BF4; } // 800C6BE4
  c->r[3]=0u+0x00000000u; // 800C6BE8
  c->lr=0x800C6BF0u; f_800C4F80(c); // 800C6BEC
  goto L_800C6C24; // 800C6BF0
L_800C6BF4:;
  c->r[4]=0u+0x80000000u; // 800C6BF4
  c->r[3]=c->r[7]^0x80000000u; // 800C6BF8
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800C6BFC
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800C6C00
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6C04
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800C6C08
  if (crb(c,2)) { goto L_800C6C1C; } // 800C6C0C
  c->r[3]=c->r[8]|c->r[8]; // 800C6C10
  c->lr=0x800C6C18u; f_800C4F80(c); // 800C6C14
  goto L_800C6C24; // 800C6C18
L_800C6C1C:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800C6C1C
  c->lr=0x800C6C24u; f_800C4F80(c); // 800C6C20
L_800C6C24:;
  c->r[3]=c->r[29]|c->r[29]; // 800C6C24
  c->lr=0x800C6C2Cu; f_800C7ED0(c); // 800C6C28
L_800C6C2C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800C6C2C
  W32(c->r[13]+0xFFFFA490u,c->r[3]); // 800C6C30
  cmps(c,0,(int32_t)c->r[3],0); // 800C6C34
  if (!crb(c,2)) { goto L_800C6C4C; } // 800C6C38
  c->r[3]=c->r[13]+0xFFFFA490u; // 800C6C3C
  c->r[0]=0u+0x00000000u; // 800C6C40
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C6C44
  goto L_800C6C54; // 800C6C48
L_800C6C4C:;
  c->r[0]=0u+0x00000000u; // 800C6C4C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C6C50
L_800C6C54:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 800C6C54
  c->r[6]=0u+0x00000000u; // 800C6C58
  c->r[0]=c->r[6]^0x80000000u; // 800C6C5C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C6C60
  c->r[3]=R32(c->r[31]+0x00000018u); // 800C6C64
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 800C6C68
  c->r[4]=c->r[3]^0x80000000u; // 800C6C6C
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 800C6C70
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800C6C74
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800C6C78
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800C6C7C
  if (crb(c,2)) { goto L_800C6C98; } // 800C6C80
  c->r[3]=c->r[31]|c->r[31]; // 800C6C84
  c->r[7]=c->r[30]|c->r[30]; // 800C6C88
  c->r[6]=0u+0x00000000u; // 800C6C8C
  c->r[5]=0u+0x00000000u; // 800C6C90
  c->lr=0x800C6C98u; f_800C66E0(c); // 800C6C94
L_800C6C98:;
  c->r[28]=R32(c->r[13]+0xFFFFA490u); // 800C6C98
  cmps(c,0,(int32_t)c->r[28],0); // 800C6C9C
  if (crb(c,2)) { goto L_800C6D14; } // 800C6CA0
  c->lr=0x800C6CA8u; f_800D0540(c); // 800C6CA4
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 800C6CA8
  c->r[7]=0u+0x00000000u; // 800C6CAC
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6CB0
  c->r[6]=c->r[7]^0x80000000u; // 800C6CB4
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800C6CB8
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800C6CBC
  c->r[5]=c->r[0]^0x80000000u; // 800C6CC0
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800C6CC4
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800C6CC8
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6CCC
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800C6CD0
  if (crb(c,2)) { goto L_800C6CE4; } // 800C6CD4
  c->r[3]=0u+0x00000000u; // 800C6CD8
  c->lr=0x800C6CE0u; f_800C4F80(c); // 800C6CDC
  goto L_800C6D14; // 800C6CE0
L_800C6CE4:;
  c->r[4]=0u+0x80000000u; // 800C6CE4
  c->r[3]=c->r[7]^0x80000000u; // 800C6CE8
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800C6CEC
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800C6CF0
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800C6CF4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800C6CF8
  if (crb(c,2)) { goto L_800C6D0C; } // 800C6CFC
  c->r[3]=c->r[8]|c->r[8]; // 800C6D00
  c->lr=0x800C6D08u; f_800C4F80(c); // 800C6D04
  goto L_800C6D14; // 800C6D08
L_800C6D0C:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800C6D0C
  c->lr=0x800C6D14u; f_800C4F80(c); // 800C6D10
L_800C6D14:;
  c->lr=0x800C6D18u; f_800CE9A0(c); // 800C6D14
  c->r[3]=c->r[1]+0x00000008u; // 800C6D18
  c->lr=0x800C6D20u; f_800C8020(c); // 800C6D1C
  c->r[3]=c->r[1]+0x00000008u; // 800C6D20
  c->lr=0x800C6D28u; f_800C7DE0(c); // 800C6D24
  c->r[12]=c->r[30]|c->r[30]; // 800C6D28
  c->r[3]=c->r[31]|c->r[31]; // 800C6D2C
  c->r[4]=c->r[29]|c->r[29]; // 800C6D30
  c->ctr=c->r[12]; // 800C6D34
  if (true) { c->lr=0x800C6D3Cu; dispatch(c,c->ctr); } // 800C6D38
  c->r[3]=c->r[1]+0x00000008u; // 800C6D3C
  c->lr=0x800C6D44u; f_800C8020(c); // 800C6D40
  c->r[3]=c->r[29]|c->r[29]; // 800C6D44
  c->lr=0x800C6D4Cu; f_800C7DE0(c); // 800C6D48
  c->lr=0x800C6D50u; f_800CE9E0(c); // 800C6D4C
  c->lr=0x800C6D54u; f_800CEF00(c); // 800C6D50
  c->r[3]=c->r[29]|c->r[29]; // 800C6D54
  c->lr=0x800C6D5Cu; f_800C7ED0(c); // 800C6D58
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800C6D5C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800C6D60
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800C6D64
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800C6D68
  c->r[28]=R32(c->r[1]+0x000002D0u); // 800C6D6C
  c->lr=c->r[0]; // 800C6D70
  c->r[1]=c->r[1]+0x000002E0u; // 800C6D74
  return; // 800C6D78
}

// DecrementerExceptionHandler
void f_800C6D80(Ctx* __restrict c) {
  trace_call(0x800C6D80u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C6D80
  W32(c->r[4]+0x00000004u,c->r[1]); // 800C6D84
  W32(c->r[4]+0x00000008u,c->r[2]); // 800C6D88
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6D8C
  c->r[0]=mfspr(c,913); // 800C6D90
  W32(c->r[4]+0x000001A8u,c->r[0]); // 800C6D94
  c->r[0]=mfspr(c,914); // 800C6D98
  W32(c->r[4]+0x000001ACu,c->r[0]); // 800C6D9C
  c->r[0]=mfspr(c,915); // 800C6DA0
  W32(c->r[4]+0x000001B0u,c->r[0]); // 800C6DA4
  c->r[0]=mfspr(c,916); // 800C6DA8
  W32(c->r[4]+0x000001B4u,c->r[0]); // 800C6DAC
  c->r[0]=mfspr(c,917); // 800C6DB0
  W32(c->r[4]+0x000001B8u,c->r[0]); // 800C6DB4
  c->r[0]=mfspr(c,918); // 800C6DB8
  W32(c->r[4]+0x000001BCu,c->r[0]); // 800C6DBC
  c->r[0]=mfspr(c,919); // 800C6DC0
  W32(c->r[4]+0x000001C0u,c->r[0]); // 800C6DC4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6DC8
  f_800C6B50(c); return; // 800C6DCC
}

// OnReset
void f_800C6DD0(Ctx* __restrict c) {
  trace_call(0x800C6DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6DD0
  c->r[0]=c->lr; // 800C6DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C6DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6DE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C6DE4
  if (crb(c,2)) { goto L_800C6E40; } // 800C6DE8
  c->r[31]=R32(c->r[13]+0xFFFFA490u); // 800C6DEC
  cmps(c,0,(int32_t)c->r[31],0); // 800C6DF0
  if (crb(c,2)) { goto L_800C6E00; } // 800C6DF4
  c->r[30]=R32(c->r[31]+0x00000014u); // 800C6DF8
  goto L_800C6E38; // 800C6DFC
L_800C6E00:;
  c->r[30]=0u+0x00000000u; // 800C6E00
  goto L_800C6E38; // 800C6E04
L_800C6E08:;
  c->r[3]=c->r[31]|c->r[31]; // 800C6E08
  c->lr=0x800C6E10u; f_800E86E0(c); // 800C6E0C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6E10
  if (!crb(c,2)) { goto L_800C6E20; } // 800C6E14
  c->r[3]=c->r[31]|c->r[31]; // 800C6E18
  c->lr=0x800C6E20u; f_800C6A30(c); // 800C6E1C
L_800C6E20:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6E20
  c->r[31]=c->r[30]|c->r[30]; // 800C6E24
  if (crb(c,2)) { goto L_800C6E34; } // 800C6E28
  c->r[30]=R32(c->r[30]+0x00000014u); // 800C6E2C
  goto L_800C6E38; // 800C6E30
L_800C6E34:;
  c->r[30]=0u+0x00000000u; // 800C6E34
L_800C6E38:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C6E38
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6E08; } // 800C6E3C
L_800C6E40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6E40
  c->r[3]=0u+0x00000001u; // 800C6E44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C6E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6E4C
  c->lr=c->r[0]; // 800C6E50
  c->r[1]=c->r[1]+0x00000010u; // 800C6E54
  return; // 800C6E58
}

// OSSetAlarmUserData
void f_800C6E60(Ctx* __restrict c) {
  trace_call(0x800C6E60u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 800C6E60
  return; // 800C6E64
}

// OSGetAlarmUserData
void f_800C6E70(Ctx* __restrict c) {
  trace_call(0x800C6E70u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 800C6E70
  return; // 800C6E74
}

// fn_800C6E80
void f_800C6E80(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 800C6E80
  W32(c->r[3]+0x00000028u,c->r[4]); // 800C6E84
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C6E88
  return; // 800C6E8C
}

// __OSCancelInternalAlarms
void f_800C6E90(Ctx* __restrict c) {
  trace_call(0x800C6E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6E90
  c->r[0]=c->lr; // 800C6E94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6E98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C6E9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C6EA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C6EA4
  c->r[29]=c->r[3]|c->r[3]; // 800C6EA8
  c->lr=0x800C6EB0u; f_800CBAA0(c); // 800C6EAC
  c->r[4]=R32(c->r[13]+0xFFFFA490u); // 800C6EB0
  c->r[31]=c->r[3]|c->r[3]; // 800C6EB4
  cmps(c,0,(int32_t)c->r[4],0); // 800C6EB8
  if (crb(c,2)) { goto L_800C6EC8; } // 800C6EBC
  c->r[30]=R32(c->r[4]+0x00000014u); // 800C6EC0
  goto L_800C6F0C; // 800C6EC4
L_800C6EC8:;
  c->r[30]=0u+0x00000000u; // 800C6EC8
  goto L_800C6F0C; // 800C6ECC
L_800C6ED0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6ED0
  c->r[0]=c->r[3]+0x00010000u; // 800C6ED4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800C6ED8
  if (!crb(c,2)) { goto L_800C6EF4; } // 800C6EDC
  c->r[0]=R32(c->r[4]+0x00000028u); // 800C6EE0
  cmpu(c,0,c->r[0],c->r[29]); // 800C6EE4
  if (!crb(c,2)) { goto L_800C6EF4; } // 800C6EE8
  c->r[3]=c->r[4]|c->r[4]; // 800C6EEC
  c->lr=0x800C6EF4u; f_800C6A30(c); // 800C6EF0
L_800C6EF4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6EF4
  c->r[4]=c->r[30]|c->r[30]; // 800C6EF8
  if (crb(c,2)) { goto L_800C6F08; } // 800C6EFC
  c->r[30]=R32(c->r[30]+0x00000014u); // 800C6F00
  goto L_800C6F0C; // 800C6F04
L_800C6F08:;
  c->r[30]=0u+0x00000000u; // 800C6F08
L_800C6F0C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C6F0C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6ED0; } // 800C6F10
  c->r[3]=c->r[31]|c->r[31]; // 800C6F14
  c->lr=0x800C6F1Cu; f_800CBAE0(c); // 800C6F18
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6F1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C6F20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C6F24
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C6F28
  c->lr=c->r[0]; // 800C6F2C
  c->r[1]=c->r[1]+0x00000020u; // 800C6F30
  return; // 800C6F34
}

// DLInsert
void f_800C6F40(Ctx* __restrict c) {
  trace_call(0x800C6F40u);
  c->r[7]=c->r[3]|c->r[3]; // 800C6F40
  c->r[6]=0u+0x00000000u; // 800C6F44
  goto L_800C6F60; // 800C6F48
  c->r[0]=c->r[0]|0x00000000u; // 800C6F4C
L_800C6F50:;
  cmpu(c,0,c->r[4],c->r[7]); // 800C6F50
  if (!crb(c,1)) { goto L_800C6F68; } // 800C6F54
  c->r[6]=c->r[7]|c->r[7]; // 800C6F58
  c->r[7]=R32(c->r[7]+0x00000004u); // 800C6F5C
L_800C6F60:;
  cmps(c,0,(int32_t)c->r[7],0); // 800C6F60
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6F50; } // 800C6F64
L_800C6F68:;
  cmps(c,0,(int32_t)c->r[7],0); // 800C6F68
  W32(c->r[4]+0x00000004u,c->r[7]); // 800C6F6C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800C6F70
  if (crb(c,2)) { goto L_800C6FAC; } // 800C6F74
  W32(c->r[7]+0x00000000u,c->r[4]); // 800C6F78
  c->r[5]=R32(c->r[4]+0x00000008u); // 800C6F7C
  c->r[0]=c->r[4]+c->r[5]; // 800C6F80
  cmpu(c,0,c->r[0],c->r[7]); // 800C6F84
  if (!crb(c,2)) { goto L_800C6FAC; } // 800C6F88
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C6F8C
  c->r[0]=c->r[5]+c->r[0]; // 800C6F90
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C6F94
  c->r[7]=R32(c->r[7]+0x00000004u); // 800C6F98
  W32(c->r[4]+0x00000004u,c->r[7]); // 800C6F9C
  cmps(c,0,(int32_t)c->r[7],0); // 800C6FA0
  if (crb(c,2)) { goto L_800C6FAC; } // 800C6FA4
  W32(c->r[7]+0x00000000u,c->r[4]); // 800C6FA8
L_800C6FAC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C6FAC
  if (crb(c,2)) { goto L_800C6FE8; } // 800C6FB0
  W32(c->r[6]+0x00000004u,c->r[4]); // 800C6FB4
  c->r[5]=R32(c->r[6]+0x00000008u); // 800C6FB8
  c->r[0]=c->r[6]+c->r[5]; // 800C6FBC
  cmpu(c,0,c->r[0],c->r[4]); // 800C6FC0
  if (!crb(c,2)) return; // 800C6FC4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C6FC8
  cmps(c,0,(int32_t)c->r[7],0); // 800C6FCC
  c->r[0]=c->r[5]+c->r[0]; // 800C6FD0
  W32(c->r[6]+0x00000008u,c->r[0]); // 800C6FD4
  W32(c->r[6]+0x00000004u,c->r[7]); // 800C6FD8
  if (crb(c,2)) return; // 800C6FDC
  W32(c->r[7]+0x00000000u,c->r[6]); // 800C6FE0
  return; // 800C6FE4
L_800C6FE8:;
  c->r[3]=c->r[4]|c->r[4]; // 800C6FE8
  return; // 800C6FEC
}

// OSAllocFromHeap
void f_800C6FF0(Ctx* __restrict c) {
  trace_call(0x800C6FF0u);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800C6FF0
  c->r[5]=R32(c->r[13]+0xFFFFA498u); // 800C6FF4
  c->r[0]=c->r[4]+0x0000003Fu; // 800C6FF8
  c->r[5]=c->r[5]+c->r[3]; // 800C6FFC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C7000
  c->r[3]=R32(c->r[5]+0x00000004u); // 800C7004
  c->r[6]=c->r[3]|c->r[3]; // 800C7008
  goto L_800C7020; // 800C700C
L_800C7010:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C7010
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C7014
  if (!crb(c,1)) { goto L_800C7028; } // 800C7018
  c->r[6]=R32(c->r[6]+0x00000004u); // 800C701C
L_800C7020:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C7020
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7010; } // 800C7024
L_800C7028:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C7028
  if (!crb(c,2)) { goto L_800C7038; } // 800C702C
  c->r[3]=0u+0x00000000u; // 800C7030
  return; // 800C7034
L_800C7038:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C7038
  c->r[0]=c->r[0]-c->r[4]; // 800C703C
  cmpu(c,0,c->r[0],0x00000040u); // 800C7040
  if (!crb(c,0)) { goto L_800C7080; } // 800C7044
  c->r[4]=R32(c->r[6]+0x00000004u); // 800C7048
  cmps(c,0,(int32_t)c->r[4],0); // 800C704C
  if (crb(c,2)) { goto L_800C705C; } // 800C7050
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C7054
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C7058
L_800C705C:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800C705C
  cmps(c,0,(int32_t)c->r[4],0); // 800C7060
  if (!crb(c,2)) { goto L_800C7070; } // 800C7064
  c->r[3]=R32(c->r[6]+0x00000004u); // 800C7068
  goto L_800C7078; // 800C706C
L_800C7070:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C7070
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C7074
L_800C7078:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7078
  goto L_800C70C0; // 800C707C
L_800C7080:;
  W32(c->r[6]+0x00000008u,c->r[4]); // 800C7080
  c->r[4]=c->r[6]+c->r[4]; // 800C7084
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C7088
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C708C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C7090
  c->r[3]=R32(c->r[6]+0x00000004u); // 800C7094
  W32(c->r[4]+0x00000004u,c->r[3]); // 800C7098
  cmps(c,0,(int32_t)c->r[3],0); // 800C709C
  if (crb(c,2)) { goto L_800C70A8; } // 800C70A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C70A4
L_800C70A8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C70A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C70AC
  if (crb(c,2)) { goto L_800C70BC; } // 800C70B0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C70B4
  goto L_800C70C0; // 800C70B8
L_800C70BC:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 800C70BC
L_800C70C0:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 800C70C0
  c->r[0]=0u+0x00000000u; // 800C70C4
  W32(c->r[6]+0x00000004u,c->r[3]); // 800C70C8
  cmps(c,0,(int32_t)c->r[3],0); // 800C70CC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800C70D0
  if (crb(c,2)) { goto L_800C70DC; } // 800C70D4
  W32(c->r[3]+0x00000000u,c->r[6]); // 800C70D8
L_800C70DC:;
  W32(c->r[5]+0x00000008u,c->r[6]); // 800C70DC
  c->r[3]=c->r[6]+0x00000020u; // 800C70E0
  return; // 800C70E4
}

// OSFreeToHeap
void f_800C70F0(Ctx* __restrict c) {
  trace_call(0x800C70F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C70F0
  c->r[0]=c->lr; // 800C70F4
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 800C70F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C70FC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800C7100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7104
  c->r[5]=R32(c->r[13]+0xFFFFA498u); // 800C7108
  c->r[6]=R32(c->r[4]+0x00000004u); // 800C710C
  c->r[31]=c->r[5]+c->r[0]; // 800C7110
  cmps(c,0,(int32_t)c->r[6],0); // 800C7114
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C7118
  if (crb(c,2)) { goto L_800C7128; } // 800C711C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C7120
  W32(c->r[6]+0x00000000u,c->r[0]); // 800C7124
L_800C7128:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C7128
  cmps(c,0,(int32_t)c->r[5],0); // 800C712C
  if (!crb(c,2)) { goto L_800C713C; } // 800C7130
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7134
  goto L_800C7144; // 800C7138
L_800C713C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C713C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7140
L_800C7144:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 800C7144
  c->r[3]=R32(c->r[31]+0x00000004u); // 800C7148
  c->lr=0x800C7150u; f_800C6F40(c); // 800C714C
  W32(c->r[31]+0x00000004u,c->r[3]); // 800C7150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7154
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7158
  c->lr=c->r[0]; // 800C715C
  c->r[1]=c->r[1]+0x00000010u; // 800C7160
  return; // 800C7164
}

// OSGetMEM1ArenaHi
void f_800C7170(Ctx* __restrict c) {
  trace_call(0x800C7170u);
  c->r[3]=R32(c->r[13]+0xFFFFA4A0u); // 800C7170
  return; // 800C7174
}

// OSGetMEM2ArenaHi
void f_800C7180(Ctx* __restrict c) {
  trace_call(0x800C7180u);
  c->r[3]=R32(c->r[13]+0xFFFFA4A4u); // 800C7180
  return; // 800C7184
}

// OSGetArenaHi
void f_800C7190(Ctx* __restrict c) {
  trace_call(0x800C7190u);
  c->r[3]=R32(c->r[13]+0xFFFFA4A0u); // 800C7190
  return; // 800C7194
}

// OSGetMEM1ArenaLo
void f_800C71A0(Ctx* __restrict c) {
  trace_call(0x800C71A0u);
  c->r[3]=R32(c->r[13]+0xFFFF8F18u); // 800C71A0
  return; // 800C71A4
}

// OSGetMEM2ArenaLo
void f_800C71B0(Ctx* __restrict c) {
  trace_call(0x800C71B0u);
  c->r[3]=R32(c->r[13]+0xFFFF8F1Cu); // 800C71B0
  return; // 800C71B4
}

// OSGetArenaLo
void f_800C71C0(Ctx* __restrict c) {
  trace_call(0x800C71C0u);
  c->r[3]=R32(c->r[13]+0xFFFF8F18u); // 800C71C0
  return; // 800C71C4
}

// OSSetMEM1ArenaHi
void f_800C71D0(Ctx* __restrict c) {
  trace_call(0x800C71D0u);
  W32(c->r[13]+0xFFFFA4A0u,c->r[3]); // 800C71D0
  return; // 800C71D4
}

// OSSetMEM2ArenaHi
void f_800C71E0(Ctx* __restrict c) {
  trace_call(0x800C71E0u);
  W32(c->r[13]+0xFFFFA4A4u,c->r[3]); // 800C71E0
  return; // 800C71E4
}

// OSSetArenaHi
void f_800C71F0(Ctx* __restrict c) {
  trace_call(0x800C71F0u);
  W32(c->r[13]+0xFFFFA4A0u,c->r[3]); // 800C71F0
  return; // 800C71F4
}

// OSSetMEM1ArenaLo
void f_800C7200(Ctx* __restrict c) {
  trace_call(0x800C7200u);
  W32(c->r[13]+0xFFFF8F18u,c->r[3]); // 800C7200
  return; // 800C7204
}

// OSSetMEM2ArenaLo
void f_800C7210(Ctx* __restrict c) {
  trace_call(0x800C7210u);
  W32(c->r[13]+0xFFFF8F1Cu,c->r[3]); // 800C7210
  return; // 800C7214
}

// OSSetArenaLo
void f_800C7220(Ctx* __restrict c) {
  trace_call(0x800C7220u);
  W32(c->r[13]+0xFFFF8F18u,c->r[3]); // 800C7220
  return; // 800C7224
}

// OSAllocFromMEM1ArenaLo
void f_800C7230(Ctx* __restrict c) {
  trace_call(0x800C7230u);
  c->r[0]=R32(c->r[13]+0xFFFF8F18u); // 800C7230
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 800C7234
  c->r[6]=~(c->r[5]|c->r[5]); // 800C7238
  c->r[5]=c->r[4]+c->r[0]; // 800C723C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800C7240
  c->r[0]=c->r[6]&c->r[0]; // 800C7244
  c->r[3]=c->r[0]+c->r[3]; // 800C7248
  c->r[4]=c->r[3]+c->r[4]; // 800C724C
  c->r[3]=c->r[0]|c->r[0]; // 800C7250
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800C7254
  c->r[0]=c->r[6]&c->r[0]; // 800C7258
  W32(c->r[13]+0xFFFF8F18u,c->r[0]); // 800C725C
  return; // 800C7260
}

// __AIClockInit
void f_800C7270(Ctx* __restrict c) {
  trace_call(0x800C7270u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7270
  c->r[0]=c->lr; // 800C7274
  c->r[4]=0u+0xCD800000u; // 800C7278
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C727C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800C7280
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C7284
  c->r[31]=c->r[3]|c->r[3]; // 800C7288
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C728C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C7290
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C7294
  c->r[5]=R32(c->r[4]+0x00000180u); // 800C7298
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 800C729C
  c->r[5]=c->r[5]|c->r[0]; // 800C72A0
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 800C72A4
  W32(c->r[4]+0x00000180u,c->r[0]); // 800C72A8
  c->r[0]=R32(c->r[4]+0x000001D0u); // 800C72AC
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800C72B0
  W32(c->r[4]+0x000001D0u,c->r[0]); // 800C72B4
  c->lr=0x800C72BCu; f_800D0530(c); // 800C72B8
  c->r[4]=0u+0x431C0000u; // 800C72BC
  c->r[28]=c->r[3]|c->r[3]; // 800C72C0
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800C72C4
  c->r[29]=0u+0x80000000u; // 800C72C8
L_800C72CC:;
  c->lr=0x800C72D0u; f_800D0530(c); // 800C72CC
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800C72D0
  c->r[3]=c->r[3]-c->r[28]; // 800C72D4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800C72D8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C72DC
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800C72E0
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800C72E4
  c->r[0]=divwu(c->r[3],c->r[0]); // 800C72E8
  cmpu(c,0,c->r[0],0x00000064u); // 800C72EC
  if (crb(c,0)) { IRQCHK(c); goto L_800C72CC; } // 800C72F0
  cmps(c,0,(int32_t)c->r[31],0); // 800C72F4
  if (!crb(c,2)) { goto L_800C7324; } // 800C72F8
  c->r[4]=0u+0xCD800000u; // 800C72FC
  c->r[3]=0u+0xF8040000u; // 800C7300
  c->r[5]=R32(c->r[4]+0x000001CCu); // 800C7304
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 800C7308
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 800C730C
  c->r[3]=c->r[3]|0x00000FC0u; // 800C7310
  c->r[0]=c->r[3]&c->r[0]; // 800C7314
  c->r[0]=c->r[0]|0x04640000u; // 800C7318
  W32(c->r[4]+0x000001CCu,c->r[0]); // 800C731C
  goto L_800C7348; // 800C7320
L_800C7324:;
  c->r[3]=0u+0xCD800000u; // 800C7324
  c->r[0]=R32(c->r[3]+0x000001CCu); // 800C7328
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 800C732C
  c->r[0]=c->r[0]|0x0000FFC0u; // 800C7330
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 800C7334
  c->r[0]=c->r[0]|0x0000000Eu; // 800C7338
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 800C733C
  c->r[0]=c->r[0]|0x04B00000u; // 800C7340
  W32(c->r[3]+0x000001CCu,c->r[0]); // 800C7344
L_800C7348:;
  c->lr=0x800C734Cu; f_800D0530(c); // 800C7348
  c->r[4]=0u+0x431C0000u; // 800C734C
  c->r[31]=c->r[3]|c->r[3]; // 800C7350
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800C7354
  c->r[29]=0u+0x80000000u; // 800C7358
L_800C735C:;
  c->lr=0x800C7360u; f_800D0530(c); // 800C735C
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800C7360
  c->r[3]=c->r[3]-c->r[31]; // 800C7364
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800C7368
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C736C
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800C7370
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800C7374
  c->r[0]=divwu(c->r[3],c->r[0]); // 800C7378
  cmpu(c,0,c->r[0],0x00000064u); // 800C737C
  if (crb(c,0)) { IRQCHK(c); goto L_800C735C; } // 800C7380
  c->r[3]=0u+0xCD800000u; // 800C7384
  c->r[0]=R32(c->r[3]+0x000001D0u); // 800C7388
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800C738C
  W32(c->r[3]+0x000001D0u,c->r[0]); // 800C7390
  c->lr=0x800C7398u; f_800D0530(c); // 800C7394
  c->r[4]=0u+0x431C0000u; // 800C7398
  c->r[31]=c->r[3]|c->r[3]; // 800C739C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800C73A0
  c->r[29]=0u+0x80000000u; // 800C73A4
L_800C73A8:;
  c->lr=0x800C73ACu; f_800D0530(c); // 800C73A8
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800C73AC
  c->r[3]=c->r[3]-c->r[31]; // 800C73B0
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800C73B4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C73B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800C73BC
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800C73C0
  c->r[0]=divwu(c->r[3],c->r[0]); // 800C73C4
  cmpu(c,0,c->r[0],0x000003E8u); // 800C73C8
  if (crb(c,0)) { IRQCHK(c); goto L_800C73A8; } // 800C73CC
  c->r[3]=0u+0xCD800000u; // 800C73D0
  c->r[0]=R32(c->r[3]+0x000001D0u); // 800C73D4
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 800C73D8
  c->r[0]=c->r[0]|0x40000000u; // 800C73DC
  W32(c->r[3]+0x000001D0u,c->r[0]); // 800C73E0
  c->lr=0x800C73E8u; f_800D0530(c); // 800C73E4
  c->r[4]=0u+0x431C0000u; // 800C73E8
  c->r[31]=c->r[3]|c->r[3]; // 800C73EC
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800C73F0
  c->r[29]=0u+0x80000000u; // 800C73F4
L_800C73F8:;
  c->lr=0x800C73FCu; f_800D0530(c); // 800C73F8
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800C73FC
  c->r[3]=c->r[3]-c->r[31]; // 800C7400
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800C7404
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C7408
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800C740C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800C7410
  c->r[0]=divwu(c->r[3],c->r[0]); // 800C7414
  cmpu(c,0,c->r[0],0x000003E8u); // 800C7418
  if (crb(c,0)) { IRQCHK(c); goto L_800C73F8; } // 800C741C
  c->r[3]=0u+0xCD800000u; // 800C7420
  c->r[0]=R32(c->r[3]+0x000001D0u); // 800C7424
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800C7428
  c->r[0]=c->r[0]|0x80000000u; // 800C742C
  W32(c->r[3]+0x000001D0u,c->r[0]); // 800C7430
  c->lr=0x800C7438u; f_800D0530(c); // 800C7434
  c->r[4]=0u+0x431C0000u; // 800C7438
  c->r[29]=c->r[3]|c->r[3]; // 800C743C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800C7440
  c->r[31]=0u+0x80000000u; // 800C7444
L_800C7448:;
  c->lr=0x800C744Cu; f_800D0530(c); // 800C7448
  c->r[0]=R32(c->r[31]+0x000000F8u); // 800C744C
  c->r[3]=c->r[3]-c->r[29]; // 800C7450
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800C7454
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C7458
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800C745C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800C7460
  c->r[0]=divwu(c->r[3],c->r[0]); // 800C7464
  cmpu(c,0,c->r[0],0x000003E8u); // 800C7468
  if (crb(c,0)) { IRQCHK(c); goto L_800C7448; } // 800C746C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C7470
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C7474
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C7478
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C747C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C7480
  c->lr=c->r[0]; // 800C7484
  c->r[1]=c->r[1]+0x00000020u; // 800C7488
  return; // 800C748C
}

// __OSInitAudioSystem
void f_800C7490(Ctx* __restrict c) {
  stub_log(0x800C7490u);  return;
}

// __OSStopAudioSystem
void f_800C7660(Ctx* __restrict c) {
  trace_call(0x800C7660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7660
  c->r[0]=c->lr; // 800C7664
  c->r[3]=0u+0xCC000000u; // 800C7668
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C766C
  c->r[0]=0u+0x00000804u; // 800C7670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7674
  W16(c->r[3]+0x0000500Au,c->r[0]); // 800C7678
  c->r[0]=R16(c->r[3]+0x00005036u); // 800C767C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800C7680
  W16(c->r[3]+0x00005036u,c->r[0]); // 800C7684
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C7688
  goto L_800C7694; // 800C768C
L_800C7690:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C7690
L_800C7694:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 800C7694
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7690; } // 800C7698
  c->r[3]=0u+0xCC000000u; // 800C769C
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C76A0
  goto L_800C76AC; // 800C76A4
L_800C76A8:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C76A8
L_800C76AC:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 800C76AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C76A8; } // 800C76B0
  c->r[4]=0u+0xCC000000u; // 800C76B4
  c->r[0]=0u+0x000008ACu; // 800C76B8
  W16(c->r[4]+0x0000500Au,c->r[0]); // 800C76BC
  c->r[0]=0u+0x00000000u; // 800C76C0
  W16(c->r[4]+0x00005000u,c->r[0]); // 800C76C4
L_800C76C8:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 800C76C8
  c->r[0]=R16(c->r[4]+0x00005006u); // 800C76CC
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 800C76D0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800C76D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C76C8; } // 800C76D8
  c->lr=0x800C76E0u; f_800D0530(c); // 800C76DC
  c->r[31]=c->r[3]|c->r[3]; // 800C76E0
L_800C76E4:;
  c->lr=0x800C76E8u; f_800D0530(c); // 800C76E4
  c->r[0]=c->r[3]-c->r[31]; // 800C76E8
  cmps(c,0,(int32_t)c->r[0],44); // 800C76EC
  if (crb(c,0)) { IRQCHK(c); goto L_800C76E4; } // 800C76F0
  c->r[3]=0u+0xCC000000u; // 800C76F4
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C76F8
  c->r[0]=c->r[0]|0x00000001u; // 800C76FC
  W16(c->r[3]+0x0000500Au,c->r[0]); // 800C7700
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C7704
  goto L_800C7714; // 800C7708
  c->r[0]=c->r[0]|0x00000000u; // 800C770C
L_800C7710:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800C7710
L_800C7714:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C7714
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7710; } // 800C7718
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C771C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7720
  c->lr=c->r[0]; // 800C7724
  c->r[1]=c->r[1]+0x00000010u; // 800C7728
  return; // 800C772C
}

// DCEnable
void f_800C7730(Ctx* __restrict c) {
  trace_call(0x800C7730u);
  /* sync */ // 800C7730
  c->r[3]=mfspr(c,1008); // 800C7734
  c->r[3]=c->r[3]|0x00004000u; // 800C7738
  mtspr(c,1008,c->r[3]); // 800C773C
  return; // 800C7740
}

// DCInvalidateRange
void f_800C7750(Ctx* __restrict c) {
  trace_call(0x800C7750u);
  cmpu(c,0,c->r[4],0x00000000u); // 800C7750
  if (!crb(c,1)) return; // 800C7754
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800C7758
  c->r[4]=c->r[4]+c->r[5]; // 800C775C
  c->r[4]=c->r[4]+0x0000001Fu; // 800C7760
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800C7764
  c->ctr=c->r[4]; // 800C7768
L_800C776C:;
  /* dcbi */ // 800C776C
  c->r[3]=c->r[3]+0x00000020u; // 800C7770
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C776C; } // 800C7774
  return; // 800C7778
}

// DCFlushRange
void f_800C7780(Ctx* __restrict c) {
  trace_call(0x800C7780u);
  cmpu(c,0,c->r[4],0x00000000u); // 800C7780
  if (!crb(c,1)) return; // 800C7784
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800C7788
  c->r[4]=c->r[4]+c->r[5]; // 800C778C
  c->r[4]=c->r[4]+0x0000001Fu; // 800C7790
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800C7794
  c->ctr=c->r[4]; // 800C7798
L_800C779C:;
  /* dcbf */ // 800C779C
  c->r[3]=c->r[3]+0x00000020u; // 800C77A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C779C; } // 800C77A4
  sc(c,0x800C77A8u); // 800C77A8
  return; // 800C77AC
}

// DCStoreRange
void f_800C77B0(Ctx* __restrict c) {
  trace_call(0x800C77B0u);
  cmpu(c,0,c->r[4],0x00000000u); // 800C77B0
  if (!crb(c,1)) return; // 800C77B4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800C77B8
  c->r[4]=c->r[4]+c->r[5]; // 800C77BC
  c->r[4]=c->r[4]+0x0000001Fu; // 800C77C0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800C77C4
  c->ctr=c->r[4]; // 800C77C8
L_800C77CC:;
  /* dcbst */ // 800C77CC
  c->r[3]=c->r[3]+0x00000020u; // 800C77D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C77CC; } // 800C77D4
  sc(c,0x800C77D8u); // 800C77D8
  return; // 800C77DC
}

// DCFlushRangeNoSync
void f_800C77E0(Ctx* __restrict c) {
  trace_call(0x800C77E0u);
  cmpu(c,0,c->r[4],0x00000000u); // 800C77E0
  if (!crb(c,1)) return; // 800C77E4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800C77E8
  c->r[4]=c->r[4]+c->r[5]; // 800C77EC
  c->r[4]=c->r[4]+0x0000001Fu; // 800C77F0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800C77F4
  c->ctr=c->r[4]; // 800C77F8
L_800C77FC:;
  /* dcbf */ // 800C77FC
  c->r[3]=c->r[3]+0x00000020u; // 800C7800
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C77FC; } // 800C7804
  return; // 800C7808
}

// DCZeroRange
void f_800C7810(Ctx* __restrict c) {
  trace_call(0x800C7810u);
  cmpu(c,0,c->r[4],0x00000000u); // 800C7810
  if (!crb(c,1)) return; // 800C7814
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800C7818
  c->r[4]=c->r[4]+c->r[5]; // 800C781C
  c->r[4]=c->r[4]+0x0000001Fu; // 800C7820
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800C7824
  c->ctr=c->r[4]; // 800C7828
L_800C782C:;
  dcbz(0u+c->r[3]); // 800C782C
  c->r[3]=c->r[3]+0x00000020u; // 800C7830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C782C; } // 800C7834
  return; // 800C7838
}

// ICInvalidateRange
void f_800C7840(Ctx* __restrict c) {
  trace_call(0x800C7840u);
  cmpu(c,0,c->r[4],0x00000000u); // 800C7840
  if (!crb(c,1)) return; // 800C7844
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800C7848
  c->r[4]=c->r[4]+c->r[5]; // 800C784C
  c->r[4]=c->r[4]+0x0000001Fu; // 800C7850
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800C7854
  c->ctr=c->r[4]; // 800C7858
L_800C785C:;
  /* icbi */ // 800C785C
  c->r[3]=c->r[3]+0x00000020u; // 800C7860
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C785C; } // 800C7864
  /* sync */ // 800C7868
  /* isync */ // 800C786C
  return; // 800C7870
}

// ICFlashInvalidate
void f_800C7880(Ctx* __restrict c) {
  trace_call(0x800C7880u);
  c->r[3]=mfspr(c,1008); // 800C7880
  c->r[3]=c->r[3]|0x00000800u; // 800C7884
  mtspr(c,1008,c->r[3]); // 800C7888
  return; // 800C788C
}

// ICEnable
void f_800C7890(Ctx* __restrict c) {
  trace_call(0x800C7890u);
  /* isync */ // 800C7890
  c->r[3]=mfspr(c,1008); // 800C7894
  c->r[3]=c->r[3]|0x00008000u; // 800C7898
  mtspr(c,1008,c->r[3]); // 800C789C
  return; // 800C78A0
}

// LCDisable
void f_800C78B0(Ctx* __restrict c) {
  trace_call(0x800C78B0u);
  c->r[3]=0u+0xE0000000u; // 800C78B0
  c->r[4]=0u+0x00000200u; // 800C78B4
  c->ctr=c->r[4]; // 800C78B8
L_800C78BC:;
  /* dcbi */ // 800C78BC
  c->r[3]=c->r[3]+0x00000020u; // 800C78C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C78BC; } // 800C78C4
  c->r[4]=mfspr(c,920); // 800C78C8
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 800C78CC
  mtspr(c,920,c->r[4]); // 800C78D0
  return; // 800C78D4
}

// DMAErrorHandler
void f_800C78E0(Ctx* __restrict c) {
  trace_call(0x800C78E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C78E0
  c->r[0]=c->lr; // 800C78E4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C78E8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800C78EC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800C78F0
  W32(c->r[1]+0x00000074u,c->r[29]); // 800C78F4
  c->r[29]=c->r[4]|c->r[4]; // 800C78F8
  if (!crb(c,6)) { goto L_800C7920; } // 800C78FC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800C7900
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800C7904
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800C7908
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800C790C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800C7910
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800C7914
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800C7918
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800C791C
L_800C7920:;
  c->r[31]=0u+0x802A0000u; // 800C7920
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C7924
  c->r[31]=c->r[31]+0xFFFFFFC0u; // 800C7928
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C792C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C7930
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C7934
  W32(c->r[1]+0x00000018u,c->r[7]); // 800C7938
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800C793C
  W32(c->r[1]+0x00000020u,c->r[9]); // 800C7940
  W32(c->r[1]+0x00000024u,c->r[10]); // 800C7944
  c->lr=0x800C794Cu; f_800C5070(c); // 800C7948
  c->r[30]=c->r[3]|c->r[3]; // 800C794C
  c->r[3]=c->r[31]+0x00000030u; // 800C7950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7954
  c->lr=0x800C795Cu; f_800C8450(c); // 800C7958
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 800C795C
  c->r[4]=c->r[30]|c->r[30]; // 800C7960
  c->r[3]=c->r[31]+0x00000048u; // 800C7964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7968
  c->lr=0x800C7970u; f_800C8450(c); // 800C796C
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 800C7970
  if (crb(c,2)) { goto L_800C7984; } // 800C7974
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 800C7978
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 800C797C
  if (!crb(c,2)) { goto L_800C799C; } // 800C7980
L_800C7984:;
  c->r[3]=c->r[31]+0x00000068u; // 800C7984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7988
  c->lr=0x800C7990u; f_800C8450(c); // 800C798C
  c->r[3]=c->r[29]|c->r[29]; // 800C7990
  c->lr=0x800C7998u; f_800C8110(c); // 800C7994
  c->lr=0x800C799Cu; f_800C4FA0(c); // 800C7998
L_800C799C:;
  c->r[3]=c->r[31]+0x00000098u; // 800C799C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C79A0
  c->lr=0x800C79A8u; f_800C8450(c); // 800C79A4
  c->r[3]=c->r[31]+0x000000D4u; // 800C79A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C79AC
  c->lr=0x800C79B4u; f_800C8450(c); // 800C79B0
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 800C79B4
  if (crb(c,2)) { goto L_800C79C8; } // 800C79B8
  c->r[3]=c->r[31]+0x0000010Cu; // 800C79BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C79C0
  c->lr=0x800C79C8u; f_800C8450(c); // 800C79C4
L_800C79C8:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 800C79C8
  if (crb(c,2)) { goto L_800C79DC; } // 800C79CC
  c->r[3]=c->r[31]+0x0000014Cu; // 800C79D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C79D4
  c->lr=0x800C79DCu; f_800C8450(c); // 800C79D8
L_800C79DC:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 800C79DC
  if (crb(c,2)) { goto L_800C79F0; } // 800C79E0
  c->r[3]=c->r[31]+0x00000178u; // 800C79E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C79E8
  c->lr=0x800C79F0u; f_800C8450(c); // 800C79EC
L_800C79F0:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 800C79F0
  if (crb(c,2)) { goto L_800C7A04; } // 800C79F4
  c->r[3]=c->r[31]+0x00000198u; // 800C79F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C79FC
  c->lr=0x800C7A04u; f_800C8450(c); // 800C7A00
L_800C7A04:;
  c->r[3]=c->r[30]|c->r[30]; // 800C7A04
  c->lr=0x800C7A0Cu; f_800C5080(c); // 800C7A08
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C7A0C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800C7A10
  c->r[30]=R32(c->r[1]+0x00000078u); // 800C7A14
  c->r[29]=R32(c->r[1]+0x00000074u); // 800C7A18
  c->lr=c->r[0]; // 800C7A1C
  c->r[1]=c->r[1]+0x00000080u; // 800C7A20
  return; // 800C7A24
}

// __OSCacheInit
void f_800C7A30(Ctx* __restrict c) {
  trace_call(0x800C7A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7A30
  c->r[0]=c->lr; // 800C7A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7A3C
  c->r[31]=0u+0x802A0000u; // 800C7A40
  c->r[31]=c->r[31]+0xFFFFFFC0u; // 800C7A44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C7A48
  c->lr=0x800C7A50u; f_800C4F40(c); // 800C7A4C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800C7A50
  if (!crb(c,2)) { goto L_800C7A68; } // 800C7A54
  c->lr=0x800C7A5Cu; f_800C7890(c); // 800C7A58
  c->r[3]=c->r[31]+0x000001B4u; // 800C7A5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7A60
  c->lr=0x800C7A68u; f_800D6DE0(c); // 800C7A64
L_800C7A68:;
  c->lr=0x800C7A6Cu; f_800C4F40(c); // 800C7A68
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 800C7A6C
  if (!crb(c,2)) { goto L_800C7A84; } // 800C7A70
  c->lr=0x800C7A78u; f_800C7730(c); // 800C7A74
  c->r[3]=c->r[31]+0x000001D0u; // 800C7A78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7A7C
  c->lr=0x800C7A84u; f_800D6DE0(c); // 800C7A80
L_800C7A84:;
  c->lr=0x800C7A88u; f_800C4F60(c); // 800C7A84
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800C7A88
  if (!crb(c,2)) { goto L_800C7B34; } // 800C7A8C
  c->lr=0x800C7A94u; f_800C4F20(c); // 800C7A90
  c->r[30]=c->r[3]|c->r[3]; // 800C7A94
  /* sync */ // 800C7A98
  c->r[3]=0u+0x00000030u; // 800C7A9C
  c->lr=0x800C7AA4u; f_800C4F30(c); // 800C7AA0
  /* sync */ // 800C7AA4
  /* sync */ // 800C7AA8
  c->lr=0x800C7AB0u; f_800C4F60(c); // 800C7AAC
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800C7AB0
  c->lr=0x800C7AB8u; f_800C4F70(c); // 800C7AB4
  /* sync */ // 800C7AB8
  /* sync */ // 800C7ABC
  c->lr=0x800C7AC4u; f_800C4F60(c); // 800C7AC0
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800C7AC4
  c->lr=0x800C7ACCu; f_800C4F70(c); // 800C7AC8
  /* sync */ // 800C7ACC
  c->lr=0x800C7AD4u; f_800C4F60(c); // 800C7AD0
  c->r[3]=c->r[3]|0x00200000u; // 800C7AD4
  c->lr=0x800C7ADCu; f_800C4F70(c); // 800C7AD8
L_800C7ADC:;
  c->lr=0x800C7AE0u; f_800C4F60(c); // 800C7ADC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C7AE0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7ADC; } // 800C7AE4
  c->lr=0x800C7AECu; f_800C4F60(c); // 800C7AE8
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 800C7AEC
  c->lr=0x800C7AF4u; f_800C4F70(c); // 800C7AF0
  goto L_800C7B04; // 800C7AF4
L_800C7AF8:;
  c->r[3]=c->r[31]+0x00000000u; // 800C7AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7AFC
  c->lr=0x800C7B04u; f_800D6DE0(c); // 800C7B00
L_800C7B04:;
  c->lr=0x800C7B08u; f_800C4F60(c); // 800C7B04
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C7B08
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7AF8; } // 800C7B0C
  c->r[3]=c->r[30]|c->r[30]; // 800C7B10
  c->lr=0x800C7B18u; f_800C4F30(c); // 800C7B14
  c->lr=0x800C7B1Cu; f_800C4F60(c); // 800C7B18
  c->r[0]=c->r[3]|0x80000000u; // 800C7B1C
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 800C7B20
  c->lr=0x800C7B28u; f_800C4F70(c); // 800C7B24
  c->r[3]=c->r[31]+0x000001ECu; // 800C7B28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7B2C
  c->lr=0x800C7B34u; f_800D6DE0(c); // 800C7B30
L_800C7B34:;
  c->r[4]=0u+0x800C0000u; // 800C7B34
  c->r[3]=0u+0x00000001u; // 800C7B38
  c->r[4]=c->r[4]+0x000078E0u; // 800C7B3C
  c->lr=0x800C7B44u; f_800C8610(c); // 800C7B40
  c->r[3]=c->r[31]+0x00000204u; // 800C7B44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C7B48
  c->lr=0x800C7B50u; f_800D6DE0(c); // 800C7B4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7B50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7B54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C7B58
  c->lr=c->r[0]; // 800C7B5C
  c->r[1]=c->r[1]+0x00000010u; // 800C7B60
  return; // 800C7B64
}

// __OSLoadFPUContext
void f_800C7B70(Ctx* __restrict c) {
  trace_call(0x800C7B70u);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 800C7B70
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 800C7B74
  if (crb(c,2)) { goto L_800C7C90; } // 800C7B78
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 800C7B7C
  c->fpscr=(uint32_t)d2u(c->f[0]); // 800C7B80
  c->r[5]=mfspr(c,920); // 800C7B84
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 800C7B88
  if (crb(c,2)) { goto L_800C7C10; } // 800C7B8C
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 800C7B90
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 800C7B94
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 800C7B98
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 800C7B9C
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 800C7BA0
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 800C7BA4
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 800C7BA8
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 800C7BAC
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 800C7BB0
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 800C7BB4
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 800C7BB8
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 800C7BBC
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 800C7BC0
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 800C7BC4
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 800C7BC8
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 800C7BCC
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 800C7BD0
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 800C7BD4
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 800C7BD8
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 800C7BDC
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 800C7BE0
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 800C7BE4
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 800C7BE8
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 800C7BEC
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 800C7BF0
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 800C7BF4
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 800C7BF8
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 800C7BFC
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 800C7C00
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 800C7C04
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 800C7C08
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 800C7C0C
L_800C7C10:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 800C7C10
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 800C7C14
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 800C7C18
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 800C7C1C
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 800C7C20
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 800C7C24
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 800C7C28
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 800C7C2C
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 800C7C30
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 800C7C34
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 800C7C38
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 800C7C3C
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 800C7C40
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 800C7C44
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 800C7C48
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 800C7C4C
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 800C7C50
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 800C7C54
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 800C7C58
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 800C7C5C
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 800C7C60
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 800C7C64
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 800C7C68
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 800C7C6C
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 800C7C70
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 800C7C74
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 800C7C78
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 800C7C7C
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 800C7C80
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 800C7C84
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 800C7C88
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 800C7C8C
L_800C7C90:;
  return; // 800C7C90
}

// __OSSaveFPUContext
void f_800C7CA0(Ctx* __restrict c) {
  trace_call(0x800C7CA0u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 800C7CA0
  c->r[3]=c->r[3]|0x00000001u; // 800C7CA4
  W16(c->r[5]+0x000001A2u,c->r[3]); // 800C7CA8
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 800C7CAC
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 800C7CB0
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 800C7CB4
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 800C7CB8
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 800C7CBC
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 800C7CC0
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 800C7CC4
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 800C7CC8
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 800C7CCC
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 800C7CD0
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 800C7CD4
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 800C7CD8
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 800C7CDC
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 800C7CE0
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 800C7CE4
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 800C7CE8
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 800C7CEC
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 800C7CF0
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 800C7CF4
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 800C7CF8
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 800C7CFC
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 800C7D00
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 800C7D04
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 800C7D08
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 800C7D0C
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 800C7D10
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 800C7D14
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 800C7D18
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 800C7D1C
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 800C7D20
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 800C7D24
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 800C7D28
  c->f[0]=u2d((uint64_t)c->fpscr); // 800C7D2C
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 800C7D30
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 800C7D34
  c->r[3]=mfspr(c,920); // 800C7D38
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 800C7D3C
  if (crb(c,2)) { goto L_800C7DC4; } // 800C7D40
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 800C7D44
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 800C7D48
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 800C7D4C
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 800C7D50
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 800C7D54
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 800C7D58
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 800C7D5C
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 800C7D60
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 800C7D64
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 800C7D68
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 800C7D6C
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 800C7D70
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 800C7D74
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 800C7D78
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 800C7D7C
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 800C7D80
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 800C7D84
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 800C7D88
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 800C7D8C
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 800C7D90
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 800C7D94
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 800C7D98
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 800C7D9C
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 800C7DA0
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 800C7DA4
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 800C7DA8
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 800C7DAC
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 800C7DB0
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 800C7DB4
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 800C7DB8
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 800C7DBC
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 800C7DC0
L_800C7DC4:;
  return; // 800C7DC4
}

// OSSaveFPUContext
void f_800C7DD0(Ctx* __restrict c) {
  trace_call(0x800C7DD0u);
  c->r[5]=c->r[3]+0x00000000u; // 800C7DD0
  f_800C7CA0(c); return; // 800C7DD4
}

// OSSetCurrentContext
void f_800C7DE0(Ctx* __restrict c) {
  trace_call(0x800C7DE0u);
  c->r[4]=0u+0x80000000u; // 800C7DE0
  W32(c->r[4]+0x000000D4u,c->r[3]); // 800C7DE4
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800C7DE8
  W32(c->r[4]+0x000000C0u,c->r[5]); // 800C7DEC
  c->r[5]=R32(c->r[4]+0x000000D8u); // 800C7DF0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 800C7DF4
  if (!crb(c,2)) { goto L_800C7E18; } // 800C7DF8
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 800C7DFC
  c->r[6]=c->r[6]|0x00002000u; // 800C7E00
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 800C7E04
  c->r[6]=c->msr; // 800C7E08
  c->r[6]=c->r[6]|0x00000002u; // 800C7E0C
  c->msr=c->r[6]; // 800C7E10
  return; // 800C7E14
L_800C7E18:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 800C7E18
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800C7E1C
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 800C7E20
  c->r[6]=c->msr; // 800C7E24
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800C7E28
  c->r[6]=c->r[6]|0x00000002u; // 800C7E2C
  c->msr=c->r[6]; // 800C7E30
  /* isync */ // 800C7E34
  return; // 800C7E38
}

// OSGetCurrentContext
void f_800C7E40(Ctx* __restrict c) {
  trace_call(0x800C7E40u);
  c->r[3]=0u+0x80000000u; // 800C7E40
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800C7E44
  return; // 800C7E48
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_800C7E50(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_800C7ED0(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_800C7FB0(Ctx* __restrict c) {
  trace_call(0x800C7FB0u);
  c->r[3]=c->r[1]|c->r[1]; // 800C7FB0
  return; // 800C7FB4
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_800C7FC0(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_800C7FF0(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_800C8020(Ctx* __restrict c) {
  trace_call(0x800C8020u);
  c->r[5]=0u+0x00000000u; // 800C8020
  W16(c->r[3]+0x000001A0u,c->r[5]); // 800C8024
  c->r[4]=0u+0x80000000u; // 800C8028
  W16(c->r[3]+0x000001A2u,c->r[5]); // 800C802C
  c->r[0]=R32(c->r[4]+0x000000D8u); // 800C8030
  cmpu(c,0,c->r[3],c->r[0]); // 800C8034
  if (!crb(c,2)) return; // 800C8038
  W32(c->r[4]+0x000000D8u,c->r[5]); // 800C803C
  return; // 800C8040
}

// OSInitContext
void f_800C8050(Ctx* __restrict c) {
  trace_call(0x800C8050u);
  W32(c->r[3]+0x00000198u,c->r[4]); // 800C8050
  W32(c->r[3]+0x00000004u,c->r[5]); // 800C8054
  c->r[11]=0u+0x00000000u; // 800C8058
  c->r[11]=c->r[11]|0x00009032u; // 800C805C
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 800C8060
  c->r[0]=0u+0x00000000u; // 800C8064
  W32(c->r[3]+0x00000080u,c->r[0]); // 800C8068
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800C806C
  W32(c->r[3]+0x00000008u,c->r[2]); // 800C8070
  W32(c->r[3]+0x00000034u,c->r[13]); // 800C8074
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C8078
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C807C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800C8080
  W32(c->r[3]+0x00000018u,c->r[0]); // 800C8084
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800C8088
  W32(c->r[3]+0x00000020u,c->r[0]); // 800C808C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800C8090
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C8094
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800C8098
  W32(c->r[3]+0x00000030u,c->r[0]); // 800C809C
  W32(c->r[3]+0x00000038u,c->r[0]); // 800C80A0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800C80A4
  W32(c->r[3]+0x00000040u,c->r[0]); // 800C80A8
  W32(c->r[3]+0x00000044u,c->r[0]); // 800C80AC
  W32(c->r[3]+0x00000048u,c->r[0]); // 800C80B0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800C80B4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800C80B8
  W32(c->r[3]+0x00000054u,c->r[0]); // 800C80BC
  W32(c->r[3]+0x00000058u,c->r[0]); // 800C80C0
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800C80C4
  W32(c->r[3]+0x00000060u,c->r[0]); // 800C80C8
  W32(c->r[3]+0x00000064u,c->r[0]); // 800C80CC
  W32(c->r[3]+0x00000068u,c->r[0]); // 800C80D0
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800C80D4
  W32(c->r[3]+0x00000070u,c->r[0]); // 800C80D8
  W32(c->r[3]+0x00000074u,c->r[0]); // 800C80DC
  W32(c->r[3]+0x00000078u,c->r[0]); // 800C80E0
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800C80E4
  W32(c->r[3]+0x000001A4u,c->r[0]); // 800C80E8
  W32(c->r[3]+0x000001A8u,c->r[0]); // 800C80EC
  W32(c->r[3]+0x000001ACu,c->r[0]); // 800C80F0
  W32(c->r[3]+0x000001B0u,c->r[0]); // 800C80F4
  W32(c->r[3]+0x000001B4u,c->r[0]); // 800C80F8
  W32(c->r[3]+0x000001B8u,c->r[0]); // 800C80FC
  W32(c->r[3]+0x000001BCu,c->r[0]); // 800C8100
  W32(c->r[3]+0x000001C0u,c->r[0]); // 800C8104
  f_800C8020(c); return; // 800C8108
}

// OSDumpContext
void f_800C8110(Ctx* __restrict c) {
  trace_call(0x800C8110u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8110
  c->r[0]=c->lr; // 800C8114
  W32(c->r[1]+0x000002F4u,c->r[0]); // 800C8118
  c->r[11]=c->r[1]+0x000002F0u; // 800C811C
  c->lr=0x800C8124u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C8120
  c->r[28]=0u+0x802A0000u; // 800C8124
  c->r[30]=c->r[3]|c->r[3]; // 800C8128
  c->r[28]=c->r[28]+0x000001F8u; // 800C812C
  c->r[4]=c->r[30]|c->r[30]; // 800C8130
  c->r[3]=c->r[28]+0x00000000u; // 800C8134
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8138
  c->lr=0x800C8140u; f_800C8450(c); // 800C813C
  c->r[26]=c->r[30]|c->r[30]; // 800C8140
  c->r[25]=0u+0x00000000u; // 800C8144
L_800C8148:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 800C8148
  c->r[4]=c->r[25]|c->r[25]; // 800C814C
  c->r[5]=R32(c->r[26]+0x00000000u); // 800C8150
  c->r[3]=c->r[28]+0x00000048u; // 800C8154
  c->r[9]=c->r[8]|c->r[8]; // 800C8158
  c->r[7]=c->r[25]+0x00000010u; // 800C815C
  c->r[6]=c->r[5]|c->r[5]; // 800C8160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8164
  c->lr=0x800C816Cu; f_800C8450(c); // 800C8168
  c->r[25]=c->r[25]+0x00000001u; // 800C816C
  c->r[26]=c->r[26]+0x00000004u; // 800C8170
  cmpu(c,0,c->r[25],0x00000010u); // 800C8174
  if (crb(c,0)) { IRQCHK(c); goto L_800C8148; } // 800C8178
  c->r[4]=R32(c->r[30]+0x00000084u); // 800C817C
  c->r[3]=c->r[28]+0x00000078u; // 800C8180
  c->r[5]=R32(c->r[30]+0x00000080u); // 800C8184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8188
  c->lr=0x800C8190u; f_800C8450(c); // 800C818C
  c->r[4]=R32(c->r[30]+0x00000198u); // 800C8190
  c->r[3]=c->r[28]+0x000000A8u; // 800C8194
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 800C8198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C819C
  c->lr=0x800C81A4u; f_800C8450(c); // 800C81A0
  c->r[3]=c->r[28]+0x000000D8u; // 800C81A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C81A8
  c->lr=0x800C81B0u; f_800C8450(c); // 800C81AC
  c->r[26]=c->r[30]|c->r[30]; // 800C81B0
  c->r[25]=0u+0x00000000u; // 800C81B4
L_800C81B8:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 800C81B8
  c->r[4]=c->r[25]|c->r[25]; // 800C81BC
  c->r[7]=R32(c->r[26]+0x000001B4u); // 800C81C0
  c->r[3]=c->r[28]+0x000000ECu; // 800C81C4
  c->r[6]=c->r[25]+0x00000004u; // 800C81C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C81CC
  c->lr=0x800C81D4u; f_800C8450(c); // 800C81D0
  c->r[25]=c->r[25]+0x00000001u; // 800C81D4
  c->r[26]=c->r[26]+0x00000004u; // 800C81D8
  cmpu(c,0,c->r[25],0x00000004u); // 800C81DC
  if (crb(c,0)) { IRQCHK(c); goto L_800C81B8; } // 800C81E0
  c->r[0]=R16(c->r[30]+0x000001A2u); // 800C81E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C81E8
  if (crb(c,2)) { goto L_800C8304; } // 800C81EC
  c->lr=0x800C81F4u; f_800CBAA0(c); // 800C81F0
  c->r[6]=0u+0x80000000u; // 800C81F4
  c->r[5]=0u+0x00000000u; // 800C81F8
  c->r[27]=R32(c->r[6]+0x000000D4u); // 800C81FC
  c->r[4]=c->r[1]+0x00000008u; // 800C8200
  c->r[31]=c->r[3]|c->r[3]; // 800C8204
  W16(c->r[1]+0x000001A8u,c->r[5]); // 800C8208
  W16(c->r[1]+0x000001AAu,c->r[5]); // 800C820C
  c->r[0]=R32(c->r[6]+0x000000D8u); // 800C8210
  cmpu(c,0,c->r[4],c->r[0]); // 800C8214
  if (!crb(c,2)) { goto L_800C8220; } // 800C8218
  W32(c->r[6]+0x000000D8u,c->r[5]); // 800C821C
L_800C8220:;
  c->r[3]=c->r[1]+0x00000008u; // 800C8220
  c->lr=0x800C8228u; f_800C7DE0(c); // 800C8224
  c->r[3]=c->r[28]+0x00000110u; // 800C8228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C822C
  c->lr=0x800C8234u; f_800C8450(c); // 800C8230
  c->r[26]=c->r[30]|c->r[30]; // 800C8234
  c->r[25]=0u+0x00000000u; // 800C8238
L_800C823C:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 800C823C
  c->lr=0x800C8244u; f_80217784(c); // 800C8240
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 800C8244
  c->r[29]=c->r[3]|c->r[3]; // 800C8248
  c->lr=0x800C8250u; f_80217784(c); // 800C824C
  c->r[5]=c->r[3]|c->r[3]; // 800C8250
  c->r[4]=c->r[25]|c->r[25]; // 800C8254
  c->r[7]=c->r[29]|c->r[29]; // 800C8258
  c->r[3]=c->r[28]+0x00000124u; // 800C825C
  c->r[6]=c->r[25]+0x00000001u; // 800C8260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8264
  c->lr=0x800C826Cu; f_800C8450(c); // 800C8268
  c->r[25]=c->r[25]+0x00000002u; // 800C826C
  c->r[26]=c->r[26]+0x00000010u; // 800C8270
  cmpu(c,0,c->r[25],0x00000020u); // 800C8274
  if (crb(c,0)) { IRQCHK(c); goto L_800C823C; } // 800C8278
  c->r[3]=c->r[28]+0x00000140u; // 800C827C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8280
  c->lr=0x800C8288u; f_800C8450(c); // 800C8284
  c->r[26]=c->r[30]|c->r[30]; // 800C8288
  c->r[25]=0u+0x00000000u; // 800C828C
L_800C8290:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 800C8290
  c->lr=0x800C8298u; f_80217784(c); // 800C8294
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 800C8298
  c->r[29]=c->r[3]|c->r[3]; // 800C829C
  c->lr=0x800C82A4u; f_80217784(c); // 800C82A0
  c->r[5]=c->r[3]|c->r[3]; // 800C82A4
  c->r[4]=c->r[25]|c->r[25]; // 800C82A8
  c->r[7]=c->r[29]|c->r[29]; // 800C82AC
  c->r[3]=c->r[28]+0x00000154u; // 800C82B0
  c->r[6]=c->r[25]+0x00000001u; // 800C82B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C82B8
  c->lr=0x800C82C0u; f_800C8450(c); // 800C82BC
  c->r[25]=c->r[25]+0x00000002u; // 800C82C0
  c->r[26]=c->r[26]+0x00000010u; // 800C82C4
  cmpu(c,0,c->r[25],0x00000020u); // 800C82C8
  if (crb(c,0)) { IRQCHK(c); goto L_800C8290; } // 800C82CC
  c->r[5]=0u+0x00000000u; // 800C82D0
  W16(c->r[1]+0x000001A8u,c->r[5]); // 800C82D4
  c->r[3]=0u+0x80000000u; // 800C82D8
  c->r[4]=c->r[1]+0x00000008u; // 800C82DC
  W16(c->r[1]+0x000001AAu,c->r[5]); // 800C82E0
  c->r[0]=R32(c->r[3]+0x000000D8u); // 800C82E4
  cmpu(c,0,c->r[4],c->r[0]); // 800C82E8
  if (!crb(c,2)) { goto L_800C82F4; } // 800C82EC
  W32(c->r[3]+0x000000D8u,c->r[5]); // 800C82F0
L_800C82F4:;
  c->r[3]=c->r[27]|c->r[27]; // 800C82F4
  c->lr=0x800C82FCu; f_800C7DE0(c); // 800C82F8
  c->r[3]=c->r[31]|c->r[31]; // 800C82FC
  c->lr=0x800C8304u; f_800CBAE0(c); // 800C8300
L_800C8304:;
  c->r[3]=c->r[28]+0x00000174u; // 800C8304
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8308
  c->lr=0x800C8310u; f_800C8450(c); // 800C830C
  c->r[25]=R32(c->r[30]+0x00000004u); // 800C8310
  c->r[26]=0u+0x00000000u; // 800C8314
  goto L_800C8338; // 800C8318
L_800C831C:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 800C831C
  c->r[4]=c->r[25]|c->r[25]; // 800C8320
  c->r[6]=R32(c->r[25]+0x00000004u); // 800C8324
  c->r[3]=c->r[28]+0x0000019Cu; // 800C8328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C832C
  c->lr=0x800C8334u; f_800C8450(c); // 800C8330
  c->r[25]=R32(c->r[25]+0x00000000u); // 800C8334
L_800C8338:;
  cmps(c,0,(int32_t)c->r[25],0); // 800C8338
  if (crb(c,2)) { goto L_800C8358; } // 800C833C
  c->r[0]=c->r[25]+0x00010000u; // 800C8340
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800C8344
  if (crb(c,2)) { goto L_800C8358; } // 800C8348
  cmpu(c,0,c->r[26],0x00000010u); // 800C834C
  c->r[26]=c->r[26]+0x00000001u; // 800C8350
  if (crb(c,0)) { IRQCHK(c); goto L_800C831C; } // 800C8354
L_800C8358:;
  c->r[11]=c->r[1]+0x000002F0u; // 800C8358
  c->lr=0x800C8360u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C835C
  c->r[0]=R32(c->r[1]+0x000002F4u); // 800C8360
  c->lr=c->r[0]; // 800C8364
  c->r[1]=c->r[1]+0x000002F0u; // 800C8368
  return; // 800C836C
}

// OSSwitchFPUContext
void f_800C8370(Ctx* __restrict c) {
  trace_call(0x800C8370u);
  c->r[5]=c->msr; // 800C8370
  c->r[5]=c->r[5]|0x00002000u; // 800C8374
  c->msr=c->r[5]; // 800C8378
  /* isync */ // 800C837C
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 800C8380
  c->r[5]=c->r[5]|0x00002000u; // 800C8384
  mtspr(c,27,c->r[5]); // 800C8388
  c->r[3]=0u+0x80000000u; // 800C838C
  c->r[5]=R32(c->r[3]+0x000000D8u); // 800C8390
  W32(c->r[3]+0x000000D8u,c->r[4]); // 800C8394
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800C8398
  if (crb(c,2)) { goto L_800C83B0; } // 800C839C
  cmps(c,0,(int32_t)c->r[5],0); // 800C83A0
  if (crb(c,2)) { goto L_800C83AC; } // 800C83A4
  c->lr=0x800C83ACu; f_800C7CA0(c); // 800C83A8
L_800C83AC:;
  c->lr=0x800C83B0u; f_800C7B70(c); // 800C83AC
L_800C83B0:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 800C83B0
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800C83B4
  c->r[3]=R32(c->r[4]+0x00000084u); // 800C83B8
  c->lr=c->r[3]; // 800C83BC
  c->r[3]=R32(c->r[4]+0x00000198u); // 800C83C0
  mtspr(c,26,c->r[3]); // 800C83C4
  c->r[3]=R32(c->r[4]+0x00000088u); // 800C83C8
  c->ctr=c->r[3]; // 800C83CC
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 800C83D0
  mtspr(c,1,c->r[3]); // 800C83D4
  c->r[3]=R16(c->r[4]+0x000001A2u); // 800C83D8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800C83DC
  W16(c->r[4]+0x000001A2u,c->r[3]); // 800C83E0
  c->r[5]=R32(c->r[4]+0x00000014u); // 800C83E4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800C83E8
  c->r[4]=R32(c->r[4]+0x00000010u); // 800C83EC
  return; /* rfi */ // 800C83F0
}

// __OSContextInit
void f_800C8400(Ctx* __restrict c) {
  trace_call(0x800C8400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8400
  c->r[0]=c->lr; // 800C8404
  c->r[4]=0u+0x800D0000u; // 800C8408
  c->r[3]=0u+0x00000007u; // 800C840C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8410
  c->r[4]=c->r[4]+0xFFFF8370u; // 800C8414
  c->lr=0x800C841Cu; f_800C6410(c); // 800C8418
  c->r[4]=0u+0x80000000u; // 800C841C
  c->r[0]=0u+0x00000000u; // 800C8420
  c->r[3]=0u+0x802A0000u; // 800C8424
  W32(c->r[4]+0x000000D8u,c->r[0]); // 800C8428
  c->r[3]=c->r[3]+0x000003B0u; // 800C842C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8430
  c->lr=0x800C8438u; f_800D6DE0(c); // 800C8434
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8438
  c->lr=c->r[0]; // 800C843C
  c->r[1]=c->r[1]+0x00000010u; // 800C8440
  return; // 800C8444
}

void hle_OSReport(Ctx*);
// OSReport
void f_800C8450(Ctx* __restrict c) {
  hle_OSReport(c);
}

// OSVReport
void f_800C84D0(Ctx* __restrict c) {
  trace_call(0x800C84D0u);
  f_8021E688(c); return; // 800C84D0
}

void hle_OSPanic(Ctx*);
// OSPanic
void f_800C84E0(Ctx* __restrict c) {
  hle_OSPanic(c);
}

// OSSetErrorHandler
void f_800C8610(Ctx* __restrict c) {
  trace_call(0x800C8610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8610
  c->r[0]=c->lr; // 800C8614
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C8618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C861C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C8620
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C8624
  c->r[29]=c->r[3]|c->r[3]; // 800C8628
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C862C
  c->r[28]=c->r[4]|c->r[4]; // 800C8630
  c->lr=0x800C8638u; f_800CBAA0(c); // 800C8634
  c->r[4]=0u+0x802F0000u; // 800C8638
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 800C863C
  c->r[4]=c->r[4]+0xFFFF9390u; // 800C8640
  cmpu(c,0,c->r[29],0x00000010u); // 800C8644
  c->r[30]=R32(c->r[4]+c->r[0]); // 800C8648
  c->r[29]=c->r[3]|c->r[3]; // 800C864C
  W32(c->r[4]+c->r[0],c->r[28]); // 800C8650
  if (!crb(c,2)) { goto L_800C8870; } // 800C8654
  c->lr=0x800C865Cu; f_800C4F20(c); // 800C8658
  c->r[31]=c->r[3]|c->r[3]; // 800C865C
  c->r[3]=c->r[3]|0x00002000u; // 800C8660
  c->lr=0x800C8668u; f_800C4F30(c); // 800C8664
  c->lr=0x800C866Cu; f_800C5020(c); // 800C8668
  cmps(c,0,(int32_t)c->r[28],0); // 800C866C
  if (crb(c,2)) { goto L_800C880C; } // 800C8670
  c->r[5]=0u+0x80000000u; // 800C8674
  c->r[4]=0u+0x60060000u; // 800C8678
  c->r[9]=R32(c->r[5]+0x000000DCu); // 800C867C
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 800C8680
  c->r[8]=0u+0xFFFFFFFFu; // 800C8684
  c->r[7]=0u+0x00000004u; // 800C8688
  c->r[0]=0u+0x00000002u; // 800C868C
  goto L_800C87F0; // 800C8690
  c->r[0]=c->r[0]|0x00000000u; // 800C8694
L_800C8698:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 800C8698
  c->r[4]=c->r[4]|0x00000900u; // 800C869C
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 800C86A0
  c->r[6]=R16(c->r[9]+0x000001A2u); // 800C86A4
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 800C86A8
  if (!crb(c,2)) { goto L_800C87D4; } // 800C86AC
  c->r[4]=c->r[6]|0x00000001u; // 800C86B0
  W16(c->r[9]+0x000001A2u,c->r[4]); // 800C86B4
  c->r[4]=c->r[9]+0x00000090u; // 800C86B8
  c->r[6]=c->r[9]+0x000001C8u; // 800C86BC
  c->ctr=c->r[0]; // 800C86C0
L_800C86C4:;
  W32(c->r[4]+0x00000004u,c->r[8]); // 800C86C4
  W32(c->r[4]+0x00000000u,c->r[8]); // 800C86C8
  W32(c->r[6]+0x00000004u,c->r[8]); // 800C86CC
  W32(c->r[6]+0x00000000u,c->r[8]); // 800C86D0
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 800C86D4
  W32(c->r[4]+0x00000008u,c->r[8]); // 800C86D8
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 800C86DC
  W32(c->r[6]+0x00000008u,c->r[8]); // 800C86E0
  W32(c->r[4]+0x00000014u,c->r[8]); // 800C86E4
  W32(c->r[4]+0x00000010u,c->r[8]); // 800C86E8
  W32(c->r[6]+0x00000014u,c->r[8]); // 800C86EC
  W32(c->r[6]+0x00000010u,c->r[8]); // 800C86F0
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 800C86F4
  W32(c->r[4]+0x00000018u,c->r[8]); // 800C86F8
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 800C86FC
  W32(c->r[6]+0x00000018u,c->r[8]); // 800C8700
  W32(c->r[4]+0x00000024u,c->r[8]); // 800C8704
  W32(c->r[4]+0x00000020u,c->r[8]); // 800C8708
  W32(c->r[6]+0x00000024u,c->r[8]); // 800C870C
  W32(c->r[6]+0x00000020u,c->r[8]); // 800C8710
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 800C8714
  W32(c->r[4]+0x00000028u,c->r[8]); // 800C8718
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 800C871C
  W32(c->r[6]+0x00000028u,c->r[8]); // 800C8720
  W32(c->r[4]+0x00000034u,c->r[8]); // 800C8724
  W32(c->r[4]+0x00000030u,c->r[8]); // 800C8728
  W32(c->r[6]+0x00000034u,c->r[8]); // 800C872C
  W32(c->r[6]+0x00000030u,c->r[8]); // 800C8730
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 800C8734
  W32(c->r[4]+0x00000038u,c->r[8]); // 800C8738
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 800C873C
  W32(c->r[6]+0x00000038u,c->r[8]); // 800C8740
  W32(c->r[4]+0x00000044u,c->r[8]); // 800C8744
  W32(c->r[4]+0x00000040u,c->r[8]); // 800C8748
  W32(c->r[6]+0x00000044u,c->r[8]); // 800C874C
  W32(c->r[6]+0x00000040u,c->r[8]); // 800C8750
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 800C8754
  W32(c->r[4]+0x00000048u,c->r[8]); // 800C8758
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 800C875C
  W32(c->r[6]+0x00000048u,c->r[8]); // 800C8760
  W32(c->r[4]+0x00000054u,c->r[8]); // 800C8764
  W32(c->r[4]+0x00000050u,c->r[8]); // 800C8768
  W32(c->r[6]+0x00000054u,c->r[8]); // 800C876C
  W32(c->r[6]+0x00000050u,c->r[8]); // 800C8770
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 800C8774
  W32(c->r[4]+0x00000058u,c->r[8]); // 800C8778
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 800C877C
  W32(c->r[6]+0x00000058u,c->r[8]); // 800C8780
  W32(c->r[4]+0x00000064u,c->r[8]); // 800C8784
  W32(c->r[4]+0x00000060u,c->r[8]); // 800C8788
  W32(c->r[6]+0x00000064u,c->r[8]); // 800C878C
  W32(c->r[6]+0x00000060u,c->r[8]); // 800C8790
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 800C8794
  W32(c->r[4]+0x00000068u,c->r[8]); // 800C8798
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 800C879C
  W32(c->r[6]+0x00000068u,c->r[8]); // 800C87A0
  W32(c->r[4]+0x00000074u,c->r[8]); // 800C87A4
  W32(c->r[4]+0x00000070u,c->r[8]); // 800C87A8
  W32(c->r[6]+0x00000074u,c->r[8]); // 800C87AC
  W32(c->r[6]+0x00000070u,c->r[8]); // 800C87B0
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 800C87B4
  W32(c->r[4]+0x00000078u,c->r[8]); // 800C87B8
  c->r[4]=c->r[4]+0x00000080u; // 800C87BC
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 800C87C0
  W32(c->r[6]+0x00000078u,c->r[8]); // 800C87C4
  c->r[6]=c->r[6]+0x00000080u; // 800C87C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C86C4; } // 800C87CC
  W32(c->r[9]+0x00000194u,c->r[7]); // 800C87D0
L_800C87D4:;
  c->r[4]=R32(c->r[13]+0xFFFF8F20u); // 800C87D4
  c->r[6]=R32(c->r[9]+0x00000194u); // 800C87D8
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 800C87DC
  c->r[4]=c->r[6]|c->r[4]; // 800C87E0
  c->r[4]=c->r[4]&c->r[5]; // 800C87E4
  W32(c->r[9]+0x00000194u,c->r[4]); // 800C87E8
  c->r[9]=R32(c->r[9]+0x000002FCu); // 800C87EC
L_800C87F0:;
  cmps(c,0,(int32_t)c->r[9],0); // 800C87F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C8698; } // 800C87F4
  c->r[0]=R32(c->r[13]+0xFFFF8F20u); // 800C87F8
  c->r[31]=c->r[31]|0x00000900u; // 800C87FC
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 800C8800
  c->r[4]=c->r[3]|c->r[0]; // 800C8804
  goto L_800C8858; // 800C8808
L_800C880C:;
  c->r[5]=0u+0x80000000u; // 800C880C
  c->r[4]=0u+0x60060000u; // 800C8810
  c->r[6]=R32(c->r[5]+0x000000DCu); // 800C8814
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 800C8818
  c->r[5]=0u+0xFFFFF6FFu; // 800C881C
  goto L_800C8844; // 800C8820
L_800C8824:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 800C8824
  c->r[0]=c->r[0]&c->r[5]; // 800C8828
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 800C882C
  c->r[0]=R32(c->r[6]+0x00000194u); // 800C8830
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 800C8834
  c->r[0]=c->r[0]&c->r[4]; // 800C8838
  W32(c->r[6]+0x00000194u,c->r[0]); // 800C883C
  c->r[6]=R32(c->r[6]+0x000002FCu); // 800C8840
L_800C8844:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C8844
  if (!crb(c,2)) { IRQCHK(c); goto L_800C8824; } // 800C8848
  c->r[0]=0u+0xFFFFF6FFu; // 800C884C
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 800C8850
  c->r[31]=c->r[31]&c->r[0]; // 800C8854
L_800C8858:;
  c->r[3]=0u+0x60060000u; // 800C8858
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 800C885C
  c->r[3]=c->r[4]&c->r[0]; // 800C8860
  c->lr=0x800C8868u; f_800C5040(c); // 800C8864
  c->r[3]=c->r[31]|c->r[31]; // 800C8868
  c->lr=0x800C8870u; f_800C4F30(c); // 800C886C
L_800C8870:;
  c->r[3]=c->r[29]|c->r[29]; // 800C8870
  c->lr=0x800C8878u; f_800CBAE0(c); // 800C8874
  c->r[3]=c->r[30]|c->r[30]; // 800C8878
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C887C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C8880
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C8884
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C8888
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C888C
  c->lr=c->r[0]; // 800C8890
  c->r[1]=c->r[1]+0x00000020u; // 800C8894
  return; // 800C8898
}

// __OSUnhandledException
void f_800C88A0(Ctx* __restrict c) {
  trace_call(0x800C88A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C88A0
  c->r[0]=c->lr; // 800C88A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C88A8
  c->r[11]=c->r[1]+0x00000030u; // 800C88AC
  c->lr=0x800C88B4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C88B0
  c->r[31]=0u+0x802A0000u; // 800C88B4
  c->r[25]=c->r[3]|c->r[3]; // 800C88B8
  c->r[26]=c->r[4]|c->r[4]; // 800C88BC
  c->r[27]=c->r[5]|c->r[5]; // 800C88C0
  c->r[28]=c->r[6]|c->r[6]; // 800C88C4
  c->r[31]=c->r[31]+0x000003D8u; // 800C88C8
  c->lr=0x800C88D0u; f_800D0510(c); // 800C88CC
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 800C88D0
  c->r[29]=c->r[4]|c->r[4]; // 800C88D4
  c->r[30]=c->r[3]|c->r[3]; // 800C88D8
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 800C88DC
  if (!crb(c,2)) { goto L_800C88F8; } // 800C88E0
  c->r[4]=c->r[25]|c->r[25]; // 800C88E4
  c->r[3]=c->r[31]+0x0000005Cu; // 800C88E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C88EC
  c->lr=0x800C88F4u; f_800C8450(c); // 800C88F0
  goto L_800C8A54; // 800C88F4
L_800C88F8:;
  cmpu(c,0,c->r[25],0x00000006u); // 800C88F8
  if (!crb(c,2)) { goto L_800C89E8; } // 800C88FC
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 800C8900
  if (crb(c,2)) { goto L_800C89E8; } // 800C8904
  c->r[3]=0u+0x802F0000u; // 800C8908
  c->r[3]=c->r[3]+0xFFFF9390u; // 800C890C
  c->r[0]=R32(c->r[3]+0x00000040u); // 800C8910
  cmps(c,0,(int32_t)c->r[0],0); // 800C8914
  if (crb(c,2)) { goto L_800C89E8; } // 800C8918
  c->r[25]=0u+0x00000010u; // 800C891C
  c->lr=0x800C8924u; f_800C4F20(c); // 800C8920
  c->r[23]=c->r[3]|c->r[3]; // 800C8924
  c->r[3]=c->r[3]|0x00002000u; // 800C8928
  c->lr=0x800C8930u; f_800C4F30(c); // 800C892C
  c->r[3]=0u+0x80000000u; // 800C8930
  c->r[3]=R32(c->r[3]+0x000000D8u); // 800C8934
  cmps(c,0,(int32_t)c->r[3],0); // 800C8938
  if (crb(c,2)) { goto L_800C8944; } // 800C893C
  c->lr=0x800C8944u; f_800C7DD0(c); // 800C8940
L_800C8944:;
  c->lr=0x800C8948u; f_800C5020(c); // 800C8944
  c->r[24]=0u+0x60060000u; // 800C8948
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 800C894C
  c->r[3]=c->r[3]&c->r[0]; // 800C8950
  c->lr=0x800C8958u; f_800C5040(c); // 800C8954
  c->r[3]=c->r[23]|c->r[23]; // 800C8958
  c->lr=0x800C8960u; f_800C4F30(c); // 800C895C
  c->r[23]=0u+0x80000000u; // 800C8960
  c->r[0]=R32(c->r[23]+0x000000D8u); // 800C8964
  cmpu(c,0,c->r[0],c->r[26]); // 800C8968
  if (!crb(c,2)) { goto L_800C89CC; } // 800C896C
  c->lr=0x800C8974u; f_800CE9A0(c); // 800C8970
  c->r[4]=c->r[26]|c->r[26]; // 800C8974
  c->r[5]=c->r[27]|c->r[27]; // 800C8978
  c->r[6]=c->r[28]|c->r[28]; // 800C897C
  c->r[3]=0u+0x00000010u; // 800C8980
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8984
  c->r[7]=0u+0x802F0000u; // 800C8988
  c->r[7]=c->r[7]+0xFFFF9390u; // 800C898C
  c->r[12]=R32(c->r[7]+0x00000040u); // 800C8990
  c->ctr=c->r[12]; // 800C8994
  if (true) { c->lr=0x800C899Cu; dispatch(c,c->ctr); } // 800C8998
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 800C899C
  c->r[3]=0u+0x00000000u; // 800C89A0
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 800C89A4
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800C89A8
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 800C89AC
  W32(c->r[23]+0x000000D8u,c->r[3]); // 800C89B0
  c->r[3]=R32(c->r[26]+0x00000194u); // 800C89B4
  c->r[0]=c->r[3]&c->r[0]; // 800C89B8
  W32(c->r[26]+0x00000194u,c->r[0]); // 800C89BC
  c->lr=0x800C89C4u; f_800CE9E0(c); // 800C89C0
  c->lr=0x800C89C8u; f_800CEF00(c); // 800C89C4
  goto L_800C89E0; // 800C89C8
L_800C89CC:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 800C89CC
  c->r[0]=0u+0x00000000u; // 800C89D0
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800C89D4
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 800C89D8
  W32(c->r[23]+0x000000D8u,c->r[0]); // 800C89DC
L_800C89E0:;
  c->r[3]=c->r[26]|c->r[26]; // 800C89E0
  c->lr=0x800C89E8u; f_800C7ED0(c); // 800C89E4
L_800C89E8:;
  c->r[24]=0u+0x802F0000u; // 800C89E8
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 800C89EC
  c->r[24]=c->r[24]+0xFFFF9390u; // 800C89F0
  c->r[0]=R32(c->r[24]+c->r[23]); // 800C89F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C89F8
  if (crb(c,2)) { goto L_800C8A34; } // 800C89FC
  c->lr=0x800C8A04u; f_800CE9A0(c); // 800C8A00
  c->r[3]=c->r[25]|c->r[25]; // 800C8A04
  c->r[4]=c->r[26]|c->r[26]; // 800C8A08
  c->r[5]=c->r[27]|c->r[27]; // 800C8A0C
  c->r[6]=c->r[28]|c->r[28]; // 800C8A10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8A14
  c->r[12]=R32(c->r[24]+c->r[23]); // 800C8A18
  c->ctr=c->r[12]; // 800C8A1C
  if (true) { c->lr=0x800C8A24u; dispatch(c,c->ctr); } // 800C8A20
  c->lr=0x800C8A28u; f_800CE9E0(c); // 800C8A24
  c->lr=0x800C8A2Cu; f_800CEF00(c); // 800C8A28
  c->r[3]=c->r[26]|c->r[26]; // 800C8A2C
  c->lr=0x800C8A34u; f_800C7ED0(c); // 800C8A30
L_800C8A34:;
  cmpu(c,0,c->r[25],0x00000008u); // 800C8A34
  if (!crb(c,2)) { goto L_800C8A44; } // 800C8A38
  c->r[3]=c->r[26]|c->r[26]; // 800C8A3C
  c->lr=0x800C8A44u; f_800C7ED0(c); // 800C8A40
L_800C8A44:;
  c->r[4]=c->r[25]|c->r[25]; // 800C8A44
  c->r[3]=c->r[31]+0x0000007Cu; // 800C8A48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8A4C
  c->lr=0x800C8A54u; f_800C8450(c); // 800C8A50
L_800C8A54:;
  c->r[3]=c->r[13]+0xFFFF8F24u; // 800C8A54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8A58
  c->lr=0x800C8A60u; f_800C8450(c); // 800C8A5C
  c->r[3]=c->r[26]|c->r[26]; // 800C8A60
  c->lr=0x800C8A68u; f_800C8110(c); // 800C8A64
  c->r[4]=c->r[27]|c->r[27]; // 800C8A68
  c->r[5]=c->r[28]|c->r[28]; // 800C8A6C
  c->r[3]=c->r[31]+0x00000094u; // 800C8A70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8A74
  c->lr=0x800C8A7Cu; f_800C8450(c); // 800C8A78
  c->r[6]=c->r[29]|c->r[29]; // 800C8A7C
  c->r[5]=c->r[30]|c->r[30]; // 800C8A80
  c->r[3]=c->r[31]+0x000000C8u; // 800C8A84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8A88
  c->lr=0x800C8A90u; f_800C8450(c); // 800C8A8C
  cmps(c,0,(int32_t)c->r[25],2); // 800C8A90
  if (crb(c,2)) { goto L_800C8ABC; } // 800C8A94
  cmps(c,0,(int32_t)c->r[25],3); // 800C8A98
  if (crb(c,2)) { goto L_800C8AD4; } // 800C8A9C
  cmps(c,0,(int32_t)c->r[25],5); // 800C8AA0
  if (crb(c,2)) { goto L_800C8AE8; } // 800C8AA4
  cmps(c,0,(int32_t)c->r[25],6); // 800C8AA8
  if (crb(c,2)) { goto L_800C8B00; } // 800C8AAC
  cmps(c,0,(int32_t)c->r[25],15); // 800C8AB0
  if (crb(c,2)) { goto L_800C8B18; } // 800C8AB4
  goto L_800C8B64; // 800C8AB8
L_800C8ABC:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800C8ABC
  c->r[5]=c->r[28]|c->r[28]; // 800C8AC0
  c->r[3]=c->r[31]+0x000000D8u; // 800C8AC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8AC8
  c->lr=0x800C8AD0u; f_800C8450(c); // 800C8ACC
  goto L_800C8B64; // 800C8AD0
L_800C8AD4:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800C8AD4
  c->r[3]=c->r[31]+0x00000138u; // 800C8AD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8ADC
  c->lr=0x800C8AE4u; f_800C8450(c); // 800C8AE0
  goto L_800C8B64; // 800C8AE4
L_800C8AE8:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800C8AE8
  c->r[5]=c->r[28]|c->r[28]; // 800C8AEC
  c->r[3]=c->r[31]+0x00000184u; // 800C8AF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8AF4
  c->lr=0x800C8AFCu; f_800C8450(c); // 800C8AF8
  goto L_800C8B64; // 800C8AFC
L_800C8B00:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800C8B00
  c->r[5]=c->r[28]|c->r[28]; // 800C8B04
  c->r[3]=c->r[31]+0x000001E8u; // 800C8B08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8B0C
  c->lr=0x800C8B14u; f_800C8450(c); // 800C8B10
  goto L_800C8B64; // 800C8B14
L_800C8B18:;
  c->r[3]=c->r[13]+0xFFFF8F24u; // 800C8B18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8B1C
  c->lr=0x800C8B24u; f_800C8450(c); // 800C8B20
  c->r[25]=0u+0xCC000000u; // 800C8B24
  c->r[3]=c->r[31]+0x00000248u; // 800C8B28
  c->r[4]=R16(c->r[25]+0x00005030u); // 800C8B2C
  c->r[5]=R16(c->r[25]+0x00005032u); // 800C8B30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8B34
  c->lr=0x800C8B3Cu; f_800C8450(c); // 800C8B38
  c->r[4]=R16(c->r[25]+0x00005020u); // 800C8B3C
  c->r[3]=c->r[31]+0x00000268u; // 800C8B40
  c->r[5]=R16(c->r[25]+0x00005022u); // 800C8B44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8B48
  c->lr=0x800C8B50u; f_800C8450(c); // 800C8B4C
  c->r[4]=0u+0xCD000000u; // 800C8B50
  c->r[3]=c->r[31]+0x00000288u; // 800C8B54
  c->r[4]=R32(c->r[4]+0x00006014u); // 800C8B58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8B5C
  c->lr=0x800C8B64u; f_800C8450(c); // 800C8B60
L_800C8B64:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFA4D4u); // 800C8B64
  c->r[3]=c->r[31]+0x000002A4u; // 800C8B68
  c->r[5]=R32(c->r[13]+0xFFFFA4D0u); // 800C8B6C
  c->r[7]=R32(c->r[13]+0xFFFFA4D8u); // 800C8B70
  c->r[8]=R32(c->r[13]+0xFFFFA4DCu); // 800C8B74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C8B78
  c->lr=0x800C8B80u; f_800C8450(c); // 800C8B7C
  c->lr=0x800C8B84u; f_800C4FA0(c); // 800C8B80
  c->r[11]=c->r[1]+0x00000030u; // 800C8B84
  c->lr=0x800C8B8Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C8B88
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C8B8C
  c->lr=c->r[0]; // 800C8B90
  c->r[1]=c->r[1]+0x00000030u; // 800C8B94
  return; // 800C8B98
}

// PackArgs
void f_800C8BA0(Ctx* __restrict c) {
  trace_call(0x800C8BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8BA0
  c->r[0]=c->lr; // 800C8BA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C8BA8
  c->r[11]=c->r[1]+0x00000030u; // 800C8BAC
  c->lr=0x800C8BB4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C8BB0
  c->r[25]=c->r[4]|c->r[4]; // 800C8BB4
  c->r[29]=c->r[5]|c->r[5]; // 800C8BB8
  c->r[30]=c->r[3]|c->r[3]; // 800C8BBC
  c->r[4]=0u+0x00000000u; // 800C8BC0
  c->r[5]=0u+0x00002000u; // 800C8BC4
  c->lr=0x800C8BCCu; f_800046B4(c); // 800C8BC8
  cmps(c,0,(int32_t)c->r[25],0); // 800C8BCC
  if (!crb(c,2)) { goto L_800C8BE0; } // 800C8BD0
  c->r[0]=0u+0x00000000u; // 800C8BD4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C8BD8
  goto L_800C8D04; // 800C8BDC
L_800C8BE0:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800C8BE0
  c->r[31]=c->r[25]|c->r[25]; // 800C8BE4
  c->r[26]=c->r[30]+0x00002000u; // 800C8BE8
  c->r[28]=c->r[29]+c->r[0]; // 800C8BEC
  goto L_800C8C1C; // 800C8BF0
L_800C8BF4:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 800C8BF4
  c->r[3]=c->r[27]|c->r[27]; // 800C8BF8
  c->lr=0x800C8C00u; f_80216B70(c); // 800C8BFC
  c->r[0]=c->r[3]+0x00000001u; // 800C8C00
  c->r[4]=c->r[27]|c->r[27]; // 800C8C04
  c->r[26]=c->r[26]-c->r[0]; // 800C8C08
  c->r[3]=c->r[26]|c->r[26]; // 800C8C0C
  c->lr=0x800C8C14u; f_8021FF8C(c); // 800C8C10
  c->r[0]=c->r[26]-c->r[30]; // 800C8C14
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C8C18
L_800C8C1C:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 800C8C1C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 800C8C20
  if (!crb(c,0)) { IRQCHK(c); goto L_800C8BF4; } // 800C8C24
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 800C8C28
  c->r[0]=c->r[26]-c->r[30]; // 800C8C2C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C8C30
  c->r[7]=0u+0x00000000u; // 800C8C34
  c->r[6]=c->r[30]+c->r[4]; // 800C8C38
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C8C3C
  c->r[6]=c->r[6]-c->r[0]; // 800C8C40
  if (crb(c,2)) { goto L_800C8CF4; } // 800C8C44
  cmpu(c,0,c->r[3],0x00000008u); // 800C8C48
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 800C8C4C
  if (!crb(c,1)) { goto L_800C8CC0; } // 800C8C50
  c->r[0]=c->r[3]+0x00000007u; // 800C8C54
  c->r[4]=c->r[29]|c->r[29]; // 800C8C58
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C8C5C
  c->r[5]=c->r[6]|c->r[6]; // 800C8C60
  c->ctr=c->r[0]; // 800C8C64
  cmpu(c,0,c->r[3],0x00000000u); // 800C8C68
  if (!crb(c,1)) { goto L_800C8CC0; } // 800C8C6C
L_800C8C70:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C8C70
  c->r[7]=c->r[7]+0x00000008u; // 800C8C74
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C8C78
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8C7C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8C80
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C8C84
  W32(c->r[5]+0x00000008u,c->r[0]); // 800C8C88
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C8C8C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800C8C90
  c->r[0]=R32(c->r[4]+0x00000010u); // 800C8C94
  W32(c->r[5]+0x00000010u,c->r[0]); // 800C8C98
  c->r[0]=R32(c->r[4]+0x00000014u); // 800C8C9C
  W32(c->r[5]+0x00000014u,c->r[0]); // 800C8CA0
  c->r[0]=R32(c->r[4]+0x00000018u); // 800C8CA4
  W32(c->r[5]+0x00000018u,c->r[0]); // 800C8CA8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800C8CAC
  c->r[4]=c->r[4]+0x00000020u; // 800C8CB0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800C8CB4
  c->r[5]=c->r[5]+0x00000020u; // 800C8CB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8C70; } // 800C8CBC
L_800C8CC0:;
  c->r[3]=c->r[31]+0x00000001u; // 800C8CC0
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800C8CC4
  c->r[0]=c->r[3]-c->r[7]; // 800C8CC8
  c->r[4]=c->r[29]+c->r[5]; // 800C8CCC
  c->r[5]=c->r[6]+c->r[5]; // 800C8CD0
  c->ctr=c->r[0]; // 800C8CD4
  cmpu(c,0,c->r[7],c->r[3]); // 800C8CD8
  if (!crb(c,0)) { goto L_800C8CF4; } // 800C8CDC
L_800C8CE0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C8CE0
  c->r[4]=c->r[4]+0x00000004u; // 800C8CE4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C8CE8
  c->r[5]=c->r[5]+0x00000004u; // 800C8CEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8CE0; } // 800C8CF0
L_800C8CF4:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 800C8CF4
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 800C8CF8
  c->r[0]=c->r[0]-c->r[30]; // 800C8CFC
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C8D00
L_800C8D04:;
  c->r[11]=c->r[1]+0x00000030u; // 800C8D04
  c->r[3]=0u+0x00000001u; // 800C8D08
  c->lr=0x800C8D10u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C8D0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C8D10
  c->lr=c->r[0]; // 800C8D14
  c->r[1]=c->r[1]+0x00000030u; // 800C8D18
  return; // 800C8D1C
}

// Utf16ToArg
void f_800C8D20(Ctx* __restrict c) {
  trace_call(0x800C8D20u);
  cmps(c,0,(int32_t)c->r[4],0); // 800C8D20
  if (crb(c,2)) { goto L_800C8E70; } // 800C8D24
  c->r[6]=0u+0x00000004u; // 800C8D28
  c->r[0]=0u+0x00000002u; // 800C8D2C
  goto L_800C8E48; // 800C8D30
  c->r[0]=c->r[0]|0x00000000u; // 800C8D34
L_800C8D38:;
  c->r[10]=0u+0x00000000u; // 800C8D38
  c->ctr=c->r[0]; // 800C8D3C
L_800C8D40:;
  c->r[9]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[9]); // 800C8D40
  c->r[8]=0u+0x000000F0u; // 800C8D44
  if (crb(c,2)) { goto L_800C8D50; } // 800C8D48
  c->r[8]=0u+0x0000000Fu; // 800C8D4C
L_800C8D50:;
  c->r[5]=0u-c->r[9]; // 800C8D50
  c->r[7]=R8(c->r[4]+0x00000000u); // 800C8D54
  c->r[5]=c->r[5]|c->r[9]; // 800C8D58
  c->r[5]=sraw(c,c->r[5],31); // 800C8D5C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800C8D60
  c->r[5]=c->r[6]&~c->r[5]; // 800C8D64
  c->r[7]=c->r[7]&c->r[8]; // 800C8D68
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 800C8D6C
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); cr0(c,c->r[5]); // 800C8D70
  if (crb(c,0)) { goto L_800C8D8C; } // 800C8D74
  cmps(c,0,(int32_t)c->r[5],10); // 800C8D78
  if (!crb(c,0)) { goto L_800C8D8C; } // 800C8D7C
  c->r[5]=c->r[5]+0x00000030u; // 800C8D80
  W8(c->r[3]+0x00000000u,c->r[5]); // 800C8D84
  goto L_800C8DB0; // 800C8D88
L_800C8D8C:;
  cmps(c,0,(int32_t)c->r[5],10); // 800C8D8C
  if (crb(c,0)) { goto L_800C8DA8; } // 800C8D90
  cmps(c,0,(int32_t)c->r[5],16); // 800C8D94
  if (!crb(c,0)) { goto L_800C8DA8; } // 800C8D98
  c->r[5]=c->r[5]+0x00000057u; // 800C8D9C
  W8(c->r[3]+0x00000000u,c->r[5]); // 800C8DA0
  goto L_800C8DB0; // 800C8DA4
L_800C8DA8:;
  c->r[3]=0u+0x00000000u; // 800C8DA8
  return; // 800C8DAC
L_800C8DB0:;
  cmps(c,0,(int32_t)c->r[9],0); // 800C8DB0
  if (crb(c,2)) { goto L_800C8DBC; } // 800C8DB4
  c->r[4]=c->r[4]+0x00000001u; // 800C8DB8
L_800C8DBC:;
  c->r[10]=c->r[10]+0x00000001u; // 800C8DBC
  c->r[8]=0u+0x000000F0u; // 800C8DC0
  c->r[9]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[9]); // 800C8DC4
  if (crb(c,2)) { goto L_800C8DD0; } // 800C8DC8
  c->r[8]=0u+0x0000000Fu; // 800C8DCC
L_800C8DD0:;
  c->r[5]=0u-c->r[9]; // 800C8DD0
  c->r[7]=R8(c->r[4]+0x00000000u); // 800C8DD4
  c->r[5]=c->r[5]|c->r[9]; // 800C8DD8
  c->r[5]=sraw(c,c->r[5],31); // 800C8DDC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800C8DE0
  c->r[5]=c->r[6]&~c->r[5]; // 800C8DE4
  c->r[7]=c->r[7]&c->r[8]; // 800C8DE8
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 800C8DEC
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); cr0(c,c->r[5]); // 800C8DF0
  if (crb(c,0)) { goto L_800C8E0C; } // 800C8DF4
  cmps(c,0,(int32_t)c->r[5],10); // 800C8DF8
  if (!crb(c,0)) { goto L_800C8E0C; } // 800C8DFC
  c->r[5]=c->r[5]+0x00000030u; // 800C8E00
  W8(c->r[3]+0x00000001u,c->r[5]); // 800C8E04
  goto L_800C8E30; // 800C8E08
L_800C8E0C:;
  cmps(c,0,(int32_t)c->r[5],10); // 800C8E0C
  if (crb(c,0)) { goto L_800C8E28; } // 800C8E10
  cmps(c,0,(int32_t)c->r[5],16); // 800C8E14
  if (!crb(c,0)) { goto L_800C8E28; } // 800C8E18
  c->r[5]=c->r[5]+0x00000057u; // 800C8E1C
  W8(c->r[3]+0x00000001u,c->r[5]); // 800C8E20
  goto L_800C8E30; // 800C8E24
L_800C8E28:;
  c->r[3]=0u+0x00000000u; // 800C8E28
  return; // 800C8E2C
L_800C8E30:;
  cmps(c,0,(int32_t)c->r[9],0); // 800C8E30
  c->r[3]=c->r[3]+0x00000002u; // 800C8E34
  if (crb(c,2)) { goto L_800C8E40; } // 800C8E38
  c->r[4]=c->r[4]+0x00000001u; // 800C8E3C
L_800C8E40:;
  c->r[10]=c->r[10]+0x00000001u; // 800C8E40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8D40; } // 800C8E44
L_800C8E48:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 800C8E48
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 800C8E4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C8D38; } // 800C8E50
  c->r[5]=R8(c->r[4]+0x00000001u); // 800C8E54
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 800C8E58
  if (!crb(c,2)) { IRQCHK(c); goto L_800C8D38; } // 800C8E5C
  c->r[0]=0u+0x00000000u; // 800C8E60
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C8E64
  c->r[3]=0u+0x00000001u; // 800C8E68
  return; // 800C8E6C
L_800C8E70:;
  c->r[3]=0u+0x00000000u; // 800C8E70
  return; // 800C8E74
}

// PackInstallerArgs
void f_800C8E80(Ctx* __restrict c) {
  trace_call(0x800C8E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8E80
  c->r[0]=c->lr; // 800C8E84
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C8E88
  c->r[11]=c->r[1]+0x00000030u; // 800C8E8C
  c->lr=0x800C8E94u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C8E90
  c->r[27]=c->r[4]|c->r[4]; // 800C8E94
  c->r[28]=c->r[5]|c->r[5]; // 800C8E98
  c->r[30]=c->r[3]|c->r[3]; // 800C8E9C
  c->r[4]=0u+0x00000000u; // 800C8EA0
  c->r[5]=0u+0x00002000u; // 800C8EA4
  c->lr=0x800C8EACu; f_800046B4(c); // 800C8EA8
  cmps(c,0,(int32_t)c->r[27],0); // 800C8EAC
  if (!crb(c,2)) { goto L_800C8EC0; } // 800C8EB0
  c->r[0]=0u+0x00000000u; // 800C8EB4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C8EB8
  goto L_800C9030; // 800C8EBC
L_800C8EC0:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800C8EC0
  c->r[31]=c->r[27]|c->r[27]; // 800C8EC4
  c->r[29]=c->r[30]+0x00002000u; // 800C8EC8
  c->r[26]=c->r[28]+c->r[0]; // 800C8ECC
  goto L_800C8F48; // 800C8ED0
L_800C8ED4:;
  cmps(c,0,(int32_t)c->r[27],2); // 800C8ED4
  if (crb(c,0)) { goto L_800C8EF0; } // 800C8ED8
  c->r[3]=rotl(c->r[27],1)&0x00000001u; // 800C8EDC
  c->r[0]=rotl(c->r[27],0)&0x00000001u; // 800C8EE0
  c->r[0]=c->r[0]^c->r[3]; // 800C8EE4
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 800C8EE8
  if (crb(c,2)) { goto L_800C8F1C; } // 800C8EEC
L_800C8EF0:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 800C8EF0
  c->r[3]=c->r[25]|c->r[25]; // 800C8EF4
  c->lr=0x800C8EFCu; f_80216B70(c); // 800C8EF8
  c->r[0]=c->r[3]+0x00000001u; // 800C8EFC
  c->r[4]=c->r[25]|c->r[25]; // 800C8F00
  c->r[29]=c->r[29]-c->r[0]; // 800C8F04
  c->r[3]=c->r[29]|c->r[29]; // 800C8F08
  c->lr=0x800C8F10u; f_8021FF8C(c); // 800C8F0C
  c->r[0]=c->r[29]-c->r[30]; // 800C8F10
  W32(c->r[26]+0x00000000u,c->r[0]); // 800C8F14
  goto L_800C8F48; // 800C8F18
L_800C8F1C:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 800C8F1C
  c->r[3]=c->r[25]|c->r[25]; // 800C8F20
  c->lr=0x800C8F28u; f_802245B4(c); // 800C8F24
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C8F28
  c->r[4]=c->r[25]|c->r[25]; // 800C8F2C
  c->r[0]=c->r[3]+0x00000001u; // 800C8F30
  c->r[29]=c->r[29]-c->r[0]; // 800C8F34
  c->r[3]=c->r[29]|c->r[29]; // 800C8F38
  c->lr=0x800C8F40u; f_800C8D20(c); // 800C8F3C
  c->r[0]=c->r[29]-c->r[30]; // 800C8F40
  W32(c->r[26]+0x00000000u,c->r[0]); // 800C8F44
L_800C8F48:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 800C8F48
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 800C8F4C
  if (!crb(c,0)) { IRQCHK(c); goto L_800C8ED4; } // 800C8F50
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 800C8F54
  c->r[0]=c->r[29]-c->r[30]; // 800C8F58
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800C8F5C
  c->r[7]=0u+0x00000000u; // 800C8F60
  c->r[6]=c->r[30]+c->r[4]; // 800C8F64
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C8F68
  c->r[6]=c->r[6]-c->r[0]; // 800C8F6C
  if (crb(c,2)) { goto L_800C9020; } // 800C8F70
  cmpu(c,0,c->r[3],0x00000008u); // 800C8F74
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 800C8F78
  if (!crb(c,1)) { goto L_800C8FEC; } // 800C8F7C
  c->r[0]=c->r[3]+0x00000007u; // 800C8F80
  c->r[4]=c->r[28]|c->r[28]; // 800C8F84
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C8F88
  c->r[5]=c->r[6]|c->r[6]; // 800C8F8C
  c->ctr=c->r[0]; // 800C8F90
  cmpu(c,0,c->r[3],0x00000000u); // 800C8F94
  if (!crb(c,1)) { goto L_800C8FEC; } // 800C8F98
L_800C8F9C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C8F9C
  c->r[7]=c->r[7]+0x00000008u; // 800C8FA0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C8FA4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8FA8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8FAC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C8FB0
  W32(c->r[5]+0x00000008u,c->r[0]); // 800C8FB4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C8FB8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800C8FBC
  c->r[0]=R32(c->r[4]+0x00000010u); // 800C8FC0
  W32(c->r[5]+0x00000010u,c->r[0]); // 800C8FC4
  c->r[0]=R32(c->r[4]+0x00000014u); // 800C8FC8
  W32(c->r[5]+0x00000014u,c->r[0]); // 800C8FCC
  c->r[0]=R32(c->r[4]+0x00000018u); // 800C8FD0
  W32(c->r[5]+0x00000018u,c->r[0]); // 800C8FD4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800C8FD8
  c->r[4]=c->r[4]+0x00000020u; // 800C8FDC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800C8FE0
  c->r[5]=c->r[5]+0x00000020u; // 800C8FE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8F9C; } // 800C8FE8
L_800C8FEC:;
  c->r[3]=c->r[31]+0x00000001u; // 800C8FEC
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800C8FF0
  c->r[0]=c->r[3]-c->r[7]; // 800C8FF4
  c->r[4]=c->r[28]+c->r[5]; // 800C8FF8
  c->r[5]=c->r[6]+c->r[5]; // 800C8FFC
  c->ctr=c->r[0]; // 800C9000
  cmpu(c,0,c->r[7],c->r[3]); // 800C9004
  if (!crb(c,0)) { goto L_800C9020; } // 800C9008
L_800C900C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C900C
  c->r[4]=c->r[4]+0x00000004u; // 800C9010
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C9014
  c->r[5]=c->r[5]+0x00000004u; // 800C9018
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C900C; } // 800C901C
L_800C9020:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 800C9020
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 800C9024
  c->r[0]=c->r[0]-c->r[30]; // 800C9028
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C902C
L_800C9030:;
  c->r[11]=c->r[1]+0x00000030u; // 800C9030
  c->r[3]=0u+0x00000001u; // 800C9034
  c->lr=0x800C903Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C9038
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C903C
  c->lr=c->r[0]; // 800C9040
  c->r[1]=c->r[1]+0x00000030u; // 800C9044
  return; // 800C9048
}

// Run
void f_800C9050(Ctx* __restrict c) {
  trace_call(0x800C9050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9050
  c->r[0]=c->lr; // 800C9054
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C905C
  c->r[31]=c->r[3]|c->r[3]; // 800C9060
  c->lr=0x800C9068u; f_800C7880(c); // 800C9064
  /* sync */ // 800C9068
  /* isync */ // 800C906C
  c->ctr=c->r[31]; // 800C9070
  if (true) { dispatch(c,c->ctr); return; } // 800C9074
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9078
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C907C
  c->lr=c->r[0]; // 800C9080
  c->r[1]=c->r[1]+0x00000010u; // 800C9084
  return; // 800C9088
}

// Callback
void f_800C9090(Ctx* __restrict c) {
  trace_call(0x800C9090u);
  c->r[0]=0u+0x00000001u; // 800C9090
  W32(c->r[13]+0xFFFFA4B8u,c->r[0]); // 800C9094
  return; // 800C9098
}

// __OSGetExecParams
void f_800C90A0(Ctx* __restrict c) {
  trace_call(0x800C90A0u);
  c->r[5]=0u+0x80000000u; // 800C90A0
  c->r[4]=R32(c->r[5]+0x000030F0u); // 800C90A4
  cmpu(c,0,c->r[4],c->r[5]); // 800C90A8
  if (crb(c,0)) { goto L_800C90B8; } // 800C90AC
  c->r[5]=0u+0x0000001Cu; // 800C90B0
  f_80004364(c); return; // 800C90B4
L_800C90B8:;
  c->r[0]=0u+0x00000000u; // 800C90B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C90BC
  return; // 800C90C0
}

// callback
void f_800C90D0(Ctx* __restrict c) {
  trace_call(0x800C90D0u);
  W32(c->r[13]+0xFFFFA4B0u,c->r[3]); // 800C90D0
  return; // 800C90D4
}

// __OSLaunchNextFirmware
void f_800C90E0(Ctx* __restrict c) {
  trace_call(0x800C90E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C90E0
  c->r[0]=c->lr; // 800C90E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C90E8
  c->r[11]=c->r[1]+0x00000040u; // 800C90EC
  c->lr=0x800C90F4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C90F0
  c->r[3]=0u+0x00000001u; // 800C90F4
  c->r[0]=0u+0x00000000u; // 800C90F8
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C90FC
  c->r[31]=0u+0xFFFFFFFFu; // 800C9100
  c->r[3]=0u+0x00000020u; // 800C9104
  c->r[4]=0u+0x00000020u; // 800C9108
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C910C
  c->lr=0x800C9114u; f_800C7230(c); // 800C9110
  c->r[28]=c->r[3]|c->r[3]; // 800C9114
  c->r[3]=0u+0x00000800u; // 800C9118
  c->r[4]=0u+0x00000020u; // 800C911C
  c->lr=0x800C9124u; f_800C7230(c); // 800C9120
  c->r[29]=c->r[3]|c->r[3]; // 800C9124
  c->r[3]=0u+0x00004A00u; // 800C9128
  c->r[4]=0u+0x00000040u; // 800C912C
  c->lr=0x800C9134u; f_800C7230(c); // 800C9130
  c->r[26]=c->r[3]|c->r[3]; // 800C9134
  c->r[3]=0u+0x000000E0u; // 800C9138
  c->r[4]=0u+0x00000020u; // 800C913C
  c->lr=0x800C9144u; f_800C7230(c); // 800C9140
  c->r[4]=0u+0x80000000u; // 800C9144
  c->r[5]=R32(c->r[13]+0xFFFFA4A8u); // 800C9148
  c->r[0]=R32(c->r[4]+0x00003194u); // 800C914C
  c->r[30]=c->r[3]|c->r[3]; // 800C9150
  cmpu(c,0,c->r[5],c->r[0]); // 800C9154
  if (!crb(c,2)) { goto L_800C91FC; } // 800C9158
  c->r[0]=R32(c->r[4]+0x00003198u); // 800C915C
  cmps(c,0,(int32_t)c->r[0],0); // 800C9160
  if (crb(c,2)) { goto L_800C91FC; } // 800C9164
  c->lr=0x800C916Cu; f_800F9610(c); // 800C9168
  cmps(c,0,(int32_t)c->r[3],0); // 800C916C
  c->r[31]=c->r[3]|c->r[3]; // 800C9170
  if (!crb(c,2)) { goto L_800C9188; } // 800C9174
  c->r[4]=c->r[30]|c->r[30]; // 800C9178
  c->r[3]=0u+0x00000000u; // 800C917C
  c->lr=0x800C9184u; f_800F9AA0(c); // 800C9180
  c->r[31]=c->r[3]|c->r[3]; // 800C9184
L_800C9188:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C9188
  if (!crb(c,2)) { goto L_800C91A0; } // 800C918C
  c->r[4]=c->r[1]+0x00000010u; // 800C9190
  c->r[3]=0u+0x00000000u; // 800C9194
  c->lr=0x800C919Cu; f_800F9B50(c); // 800C9198
  c->r[31]=c->r[3]|c->r[3]; // 800C919C
L_800C91A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C91A0
  if (!crb(c,2)) { goto L_800C91B8; } // 800C91A4
  c->r[3]=c->r[26]|c->r[26]; // 800C91A8
  c->r[4]=c->r[1]+0x00000010u; // 800C91AC
  c->lr=0x800C91B4u; f_800F9B50(c); // 800C91B0
  c->r[31]=c->r[3]|c->r[3]; // 800C91B4
L_800C91B8:;
  c->lr=0x800C91BCu; f_800F9670(c); // 800C91B8
  c->lr=0x800C91C0u; f_800D21D0(c); // 800C91BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C91C0
  if (crb(c,2)) { goto L_800C91FC; } // 800C91C4
  c->r[3]=0u+0x00000000u; // 800C91C8
  c->r[0]=0u+0xFFFFFFFFu; // 800C91CC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C91D0
  c->r[3]=c->r[30]|c->r[30]; // 800C91D4
  c->r[4]=c->r[1]+0x0000000Cu; // 800C91D8
  c->r[5]=c->r[1]+0x00000008u; // 800C91DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C91E0
  c->lr=0x800C91E8u; f_800D2680(c); // 800C91E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C91E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C91EC
  if (!crb(c,2)) { goto L_800C91FC; } // 800C91F0
  c->lr=0x800C91F8u; f_800D23B0(c); // 800C91F4
  c->lr=0x800C91FCu; f_800CDA20(c); // 800C91F8
L_800C91FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C91FC
  if (!crb(c,2)) { goto L_800C9220; } // 800C9200
  c->r[3]=0u+0x80000000u; // 800C9204
  c->r[27]=c->r[29]|c->r[29]; // 800C9208
  c->r[0]=R32(c->r[3]+0x00003194u); // 800C920C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800C9210
  c->r[0]=R32(c->r[3]+0x00003198u); // 800C9214
  W32(c->r[29]+0x00000000u,c->r[0]); // 800C9218
  goto L_800C94A4; // 800C921C
L_800C9220:;
  c->r[0]=0u+0x00000000u; // 800C9220
  c->r[3]=0u+0x800D0000u; // 800C9224
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C9228
  c->r[3]=c->r[3]+0xFFFF90D0u; // 800C922C
  c->lr=0x800C9234u; f_800EA810(c); // 800C9230
  c->r[0]=c->r[0]|0x00000000u; // 800C9234
L_800C9238:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9238
  cmps(c,0,(int32_t)c->r[0],0); // 800C923C
  if (crb(c,2)) { IRQCHK(c); goto L_800C9238; } // 800C9240
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9244
  cmpu(c,0,c->r[0],0x00000001u); // 800C9248
  if (crb(c,2)) { goto L_800C926C; } // 800C924C
  c->r[3]=0u+0x802A0000u; // 800C9250
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C9254
  c->r[3]=c->r[3]+0x000006B8u; // 800C9258
  c->r[5]=0u+0x00000398u; // 800C925C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9260
  c->lr=0x800C9268u; f_800C8450(c); // 800C9264
  c->lr=0x800C926Cu; f_800CDA20(c); // 800C9268
L_800C926C:;
  c->r[0]=0u+0x00000000u; // 800C926C
  c->r[6]=0u+0x800D0000u; // 800C9270
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C9274
  c->r[3]=c->r[28]|c->r[28]; // 800C9278
  c->r[6]=c->r[6]+0xFFFF90D0u; // 800C927C
  c->r[4]=0u+0x00000020u; // 800C9280
  c->r[5]=0u+0x00010000u; // 800C9284
  c->lr=0x800C928Cu; f_800EA980(c); // 800C9288
  c->r[0]=c->r[0]|0x00000000u; // 800C928C
L_800C9290:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9290
  cmps(c,0,(int32_t)c->r[0],0); // 800C9294
  if (crb(c,2)) { IRQCHK(c); goto L_800C9290; } // 800C9298
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C929C
  cmpu(c,0,c->r[0],0x00000001u); // 800C92A0
  if (crb(c,2)) { goto L_800C92C4; } // 800C92A4
  c->r[3]=0u+0x802A0000u; // 800C92A8
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C92AC
  c->r[3]=c->r[3]+0x000006B8u; // 800C92B0
  c->r[5]=0u+0x000003A2u; // 800C92B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C92B8
  c->lr=0x800C92C0u; f_800C8450(c); // 800C92BC
  c->lr=0x800C92C4u; f_800CDA20(c); // 800C92C0
L_800C92C4:;
  c->r[0]=0u+0x00000000u; // 800C92C4
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C92C8
  c->r[6]=0u+0x800D0000u; // 800C92CC
  c->r[3]=c->r[29]|c->r[29]; // 800C92D0
  c->r[5]=R32(c->r[28]+0x00000004u); // 800C92D4
  c->r[6]=c->r[6]+0xFFFF90D0u; // 800C92D8
  c->r[4]=0u+0x00000800u; // 800C92DC
  c->lr=0x800C92E4u; f_800EA980(c); // 800C92E0
  c->r[0]=c->r[0]|0x00000000u; // 800C92E4
L_800C92E8:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C92E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C92EC
  if (crb(c,2)) { IRQCHK(c); goto L_800C92E8; } // 800C92F0
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C92F4
  cmpu(c,0,c->r[0],0x00000001u); // 800C92F8
  if (crb(c,2)) { goto L_800C931C; } // 800C92FC
  c->r[3]=0u+0x802A0000u; // 800C9300
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C9304
  c->r[3]=c->r[3]+0x000006B8u; // 800C9308
  c->r[5]=0u+0x000003AEu; // 800C930C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9310
  c->lr=0x800C9318u; f_800C8450(c); // 800C9314
  c->lr=0x800C931Cu; f_800CDA20(c); // 800C9318
L_800C931C:;
  c->r[4]=R32(c->r[13]+0xFFFFA4A8u); // 800C931C
  c->r[6]=c->r[29]|c->r[29]; // 800C9320
  c->r[27]=0u+0x00000000u; // 800C9324
  c->r[5]=0u+0x00000000u; // 800C9328
  goto L_800C9348; // 800C932C
L_800C9330:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C9330
  cmpu(c,0,c->r[0],c->r[4]); // 800C9334
  if (!crb(c,2)) { goto L_800C9340; } // 800C9338
  c->r[27]=c->r[6]|c->r[6]; // 800C933C
L_800C9340:;
  c->r[6]=c->r[6]+0x00000008u; // 800C9340
  c->r[5]=c->r[5]+0x00000001u; // 800C9344
L_800C9348:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800C9348
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 800C934C
  cmpu(c,0,c->r[3],c->r[0]); // 800C9350
  if (crb(c,0)) { IRQCHK(c); goto L_800C9330; } // 800C9354
  cmps(c,0,(int32_t)c->r[27],0); // 800C9358
  if (!crb(c,2)) { goto L_800C9398; } // 800C935C
  c->r[4]=R32(c->r[13]+0xFFFFA4A8u); // 800C9360
  c->r[6]=c->r[29]+0x00000020u; // 800C9364
  c->r[5]=0u+0x00000000u; // 800C9368
  goto L_800C9388; // 800C936C
L_800C9370:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C9370
  cmpu(c,0,c->r[0],c->r[4]); // 800C9374
  if (!crb(c,2)) { goto L_800C9380; } // 800C9378
  c->r[27]=c->r[6]|c->r[6]; // 800C937C
L_800C9380:;
  c->r[6]=c->r[6]+0x00000008u; // 800C9380
  c->r[5]=c->r[5]+0x00000001u; // 800C9384
L_800C9388:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C9388
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 800C938C
  cmpu(c,0,c->r[3],c->r[0]); // 800C9390
  if (crb(c,0)) { IRQCHK(c); goto L_800C9370; } // 800C9394
L_800C9398:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C9398
  if (!crb(c,2)) { goto L_800C93B4; } // 800C939C
  c->r[3]=0u+0x802A0000u; // 800C93A0
  c->r[3]=c->r[3]+0x000006DCu; // 800C93A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C93A8
  c->lr=0x800C93B0u; f_800C8450(c); // 800C93AC
  c->lr=0x800C93B4u; f_800CDA20(c); // 800C93B0
L_800C93B4:;
  c->r[4]=0u+0x80000000u; // 800C93B4
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C93B8
  W32(c->r[4]+0x00003194u,c->r[0]); // 800C93BC
  c->r[0]=0u+0x00000000u; // 800C93C0
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C93C4
  W32(c->r[4]+0x00003198u,c->r[3]); // 800C93C8
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C93CC
  c->r[0]=R8(c->r[4]+0x00003187u); // 800C93D0
  cmpu(c,0,c->r[0],0x00000080u); // 800C93D4
  if (!crb(c,2)) { goto L_800C9404; } // 800C93D8
  c->r[9]=0u+0x800D0000u; // 800C93DC
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C93E0
  c->r[5]=R32(c->r[1]+0x00000010u); // 800C93E4
  c->r[4]=c->r[30]|c->r[30]; // 800C93E8
  c->r[6]=c->r[26]|c->r[26]; // 800C93EC
  c->r[9]=c->r[9]+0xFFFF90D0u; // 800C93F0
  c->r[7]=0u+0x00000000u; // 800C93F4
  c->r[8]=0u+0x00000000u; // 800C93F8
  c->lr=0x800C9400u; f_800EA0F0(c); // 800C93FC
  goto L_800C9428; // 800C9400
L_800C9404:;
  c->r[8]=0u+0x800D0000u; // 800C9404
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C9408
  c->r[7]=c->r[26]|c->r[26]; // 800C940C
  c->r[4]=0u+0x00000000u; // 800C9410
  c->r[8]=c->r[8]+0xFFFF90D0u; // 800C9414
  c->r[5]=0u+0x00000000u; // 800C9418
  c->r[6]=0u+0x00000000u; // 800C941C
  c->lr=0x800C9424u; f_800E9E80(c); // 800C9420
  c->r[0]=c->r[0]|0x00000000u; // 800C9424
L_800C9428:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9428
  cmps(c,0,(int32_t)c->r[0],0); // 800C942C
  if (crb(c,2)) { IRQCHK(c); goto L_800C9428; } // 800C9430
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9434
  cmpu(c,0,c->r[0],0x00000001u); // 800C9438
  if (crb(c,2)) { goto L_800C945C; } // 800C943C
  c->r[3]=0u+0x802A0000u; // 800C9440
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C9444
  c->r[3]=c->r[3]+0x000006B8u; // 800C9448
  c->r[5]=0u+0x000003EBu; // 800C944C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9450
  c->lr=0x800C9458u; f_800C8450(c); // 800C9454
  c->lr=0x800C945Cu; f_800CDA20(c); // 800C9458
L_800C945C:;
  c->r[0]=0u+0x00000000u; // 800C945C
  c->r[3]=0u+0x800D0000u; // 800C9460
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C9464
  c->r[3]=c->r[3]+0xFFFF90D0u; // 800C9468
  c->lr=0x800C9470u; f_800EA810(c); // 800C946C
L_800C9470:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9470
  cmps(c,0,(int32_t)c->r[0],0); // 800C9474
  if (crb(c,2)) { IRQCHK(c); goto L_800C9470; } // 800C9478
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C947C
  cmpu(c,0,c->r[0],0x00000001u); // 800C9480
  if (crb(c,2)) { goto L_800C94A4; } // 800C9484
  c->r[3]=0u+0x802A0000u; // 800C9488
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C948C
  c->r[3]=c->r[3]+0x000006B8u; // 800C9490
  c->r[5]=0u+0x000003F5u; // 800C9494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9498
  c->lr=0x800C94A0u; f_800C8450(c); // 800C949C
  c->lr=0x800C94A4u; f_800CDA20(c); // 800C94A0
L_800C94A4:;
  c->r[24]=R32(c->r[26]+0x00000184u); // 800C94A4
  c->r[23]=R32(c->r[26]+0x00000188u); // 800C94A8
  c->lr=0x800C94B0u; f_800F9610(c); // 800C94AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C94B0
  c->r[31]=c->r[3]|c->r[3]; // 800C94B4
  if (crb(c,2)) { goto L_800C94D8; } // 800C94B8
  c->r[3]=0u+0x802A0000u; // 800C94BC
  c->r[4]=c->r[31]|c->r[31]; // 800C94C0
  c->r[3]=c->r[3]+0x000006B8u; // 800C94C4
  c->r[5]=0u+0x00000400u; // 800C94C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C94CC
  c->lr=0x800C94D4u; f_800C8450(c); // 800C94D0
  c->lr=0x800C94D8u; f_800CDAD0(c); // 800C94D4
L_800C94D8:;
  c->r[4]=c->r[23]|c->r[23]; // 800C94D8
  c->r[3]=c->r[24]|c->r[24]; // 800C94DC
  c->r[6]=c->r[1]+0x00000014u; // 800C94E0
  c->r[5]=0u+0x00000000u; // 800C94E4
  c->lr=0x800C94ECu; f_800F9980(c); // 800C94E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C94EC
  c->r[31]=c->r[3]|c->r[3]; // 800C94F0
  cmpu(c,0,c->r[0],0x00000001u); // 800C94F4
  if (!crb(c,2)) { goto L_800C9504; } // 800C94F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C94FC
  if (crb(c,2)) { goto L_800C9520; } // 800C9500
L_800C9504:;
  c->r[3]=0u+0x802A0000u; // 800C9504
  c->r[4]=c->r[31]|c->r[31]; // 800C9508
  c->r[3]=c->r[3]+0x000006B8u; // 800C950C
  c->r[5]=0u+0x00000409u; // 800C9510
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9514
  c->lr=0x800C951Cu; f_800C8450(c); // 800C9518
  c->lr=0x800C9520u; f_800CDAD0(c); // 800C951C
L_800C9520:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9520
  c->r[4]=0u+0x00000020u; // 800C9524
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800C9528
  c->r[0]=c->r[3]+0x0000001Fu; // 800C952C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C9530
  c->lr=0x800C9538u; f_800C7230(c); // 800C9534
  c->r[25]=c->r[3]|c->r[3]; // 800C9538
  c->r[4]=c->r[23]|c->r[23]; // 800C953C
  c->r[3]=c->r[24]|c->r[24]; // 800C9540
  c->r[6]=c->r[1]+0x00000014u; // 800C9544
  c->r[5]=c->r[25]|c->r[25]; // 800C9548
  c->lr=0x800C9550u; f_800F9980(c); // 800C954C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9550
  c->r[31]=c->r[3]|c->r[3]; // 800C9554
  if (crb(c,2)) { goto L_800C9578; } // 800C9558
  c->r[3]=0u+0x802A0000u; // 800C955C
  c->r[4]=c->r[31]|c->r[31]; // 800C9560
  c->r[3]=c->r[3]+0x000006B8u; // 800C9564
  c->r[5]=0u+0x00000412u; // 800C9568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C956C
  c->lr=0x800C9574u; f_800C8450(c); // 800C9570
  c->lr=0x800C9578u; f_800CDAD0(c); // 800C9574
L_800C9578:;
  c->lr=0x800C957Cu; f_800E9A30(c); // 800C9578
  c->r[5]=0u+0x80000000u; // 800C957C
  c->r[4]=0u+0x00000100u; // 800C9580
  c->r[29]=R32(c->r[5]+0x0000311Cu); // 800C9584
  c->r[3]=c->r[5]+0x00003100u; // 800C9588
  c->r[28]=R32(c->r[5]+0x00003120u); // 800C958C
  c->lr=0x800C9594u; f_800C77B0(c); // 800C9590
  c->r[4]=c->r[23]|c->r[23]; // 800C9594
  c->r[3]=c->r[24]|c->r[24]; // 800C9598
  c->r[5]=c->r[25]|c->r[25]; // 800C959C
  c->lr=0x800C95A4u; f_800F96C0(c); // 800C95A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C95A4
  c->r[31]=c->r[3]|c->r[3]; // 800C95A8
  if (crb(c,2)) { goto L_800C95CC; } // 800C95AC
  c->r[3]=0u+0x802A0000u; // 800C95B0
  c->r[4]=c->r[31]|c->r[31]; // 800C95B4
  c->r[3]=c->r[3]+0x000006B8u; // 800C95B8
  c->r[5]=0u+0x00000422u; // 800C95BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C95C0
  c->lr=0x800C95C8u; f_800C8450(c); // 800C95C4
  c->lr=0x800C95CCu; f_800CDAD0(c); // 800C95C8
L_800C95CC:;
  c->lr=0x800C95D0u; f_800F9670(c); // 800C95CC
  c->r[31]=0u+0x80000000u; // 800C95D0
  c->r[4]=0u+0x00000100u; // 800C95D4
  c->r[3]=c->r[31]+0x00003100u; // 800C95D8
  c->lr=0x800C95E0u; f_800C7750(c); // 800C95DC
  c->r[3]=R32(c->r[31]+0x0000311Cu); // 800C95E0
  cmpu(c,0,c->r[29],c->r[3]); // 800C95E4
  if (!crb(c,0)) { goto L_800C963C; } // 800C95E8
  c->r[0]=R32(c->r[31]+0x00003120u); // 800C95EC
  c->r[0]=c->r[3]-c->r[0]; // 800C95F0
  c->r[0]=c->r[29]-c->r[0]; // 800C95F4
  W32(c->r[31]+0x00003120u,c->r[0]); // 800C95F8
  c->r[3]=R32(c->r[31]+0x00003128u); // 800C95FC
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 800C9600
  c->r[0]=c->r[0]-c->r[3]; // 800C9604
  c->r[0]=c->r[29]-c->r[0]; // 800C9608
  W32(c->r[31]+0x00003128u,c->r[0]); // 800C960C
  c->r[3]=R32(c->r[31]+0x00003130u); // 800C9610
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 800C9614
  c->r[0]=c->r[0]-c->r[3]; // 800C9618
  c->r[0]=c->r[29]-c->r[0]; // 800C961C
  W32(c->r[31]+0x00003130u,c->r[0]); // 800C9620
  c->r[3]=R32(c->r[31]+0x00003134u); // 800C9624
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 800C9628
  c->r[0]=c->r[0]-c->r[3]; // 800C962C
  c->r[0]=c->r[29]-c->r[0]; // 800C9630
  W32(c->r[31]+0x00003134u,c->r[0]); // 800C9634
  W32(c->r[31]+0x0000311Cu,c->r[29]); // 800C9638
L_800C963C:;
  c->r[3]=0u+0x80000000u; // 800C963C
  c->r[0]=R32(c->r[3]+0x00003120u); // 800C9640
  cmpu(c,0,c->r[28],c->r[0]); // 800C9644
  if (!crb(c,0)) { goto L_800C9650; } // 800C9648
  c->lr=0x800C9650u; f_800CCC40(c); // 800C964C
L_800C9650:;
  c->lr=0x800C9654u; f_800D0E50(c); // 800C9650
  c->lr=0x800C9658u; f_800F9FB0(c); // 800C9654
  c->lr=0x800C965Cu; f_800FA550(c); // 800C9658
  c->lr=0x800C9660u; f_800E9A80(c); // 800C965C
  c->r[0]=0u+0x00000000u; // 800C9660
  c->r[3]=0u+0x802F0000u; // 800C9664
  c->r[4]=0u+0x800D0000u; // 800C9668
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C966C
  c->r[3]=c->r[3]+0xFFFF93E0u; // 800C9670
  c->r[4]=c->r[4]+0xFFFF90D0u; // 800C9674
  c->lr=0x800C967Cu; f_800E9CF0(c); // 800C9678
  c->r[0]=c->r[0]|0x00000000u; // 800C967C
L_800C9680:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9680
  cmps(c,0,(int32_t)c->r[0],0); // 800C9684
  if (crb(c,2)) { IRQCHK(c); goto L_800C9680; } // 800C9688
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C968C
  cmpu(c,0,c->r[0],0x00000001u); // 800C9690
  if (crb(c,2)) { goto L_800C96B4; } // 800C9694
  c->r[3]=0u+0x802A0000u; // 800C9698
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C969C
  c->r[3]=c->r[3]+0x000006B8u; // 800C96A0
  c->r[5]=0u+0x0000044Eu; // 800C96A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C96A8
  c->lr=0x800C96B0u; f_800C8450(c); // 800C96AC
  c->lr=0x800C96B4u; f_800CDA20(c); // 800C96B0
L_800C96B4:;
  c->r[0]=0u+0x00000000u; // 800C96B4
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 800C96B8
  c->r[3]=0u+0x80000000u; // 800C96BC
  c->r[0]=R8(c->r[3]+0x00003187u); // 800C96C0
  cmpu(c,0,c->r[0],0x00000080u); // 800C96C4
  if (!crb(c,2)) { goto L_800C96F4; } // 800C96C8
  c->r[9]=0u+0x800D0000u; // 800C96CC
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C96D0
  c->r[5]=R32(c->r[1]+0x00000010u); // 800C96D4
  c->r[4]=c->r[30]|c->r[30]; // 800C96D8
  c->r[6]=c->r[26]|c->r[26]; // 800C96DC
  c->r[9]=c->r[9]+0xFFFF90D0u; // 800C96E0
  c->r[7]=0u+0x00000000u; // 800C96E4
  c->r[8]=0u+0x00000000u; // 800C96E8
  c->lr=0x800C96F0u; f_800EA0F0(c); // 800C96EC
  goto L_800C9718; // 800C96F0
L_800C96F4:;
  c->r[8]=0u+0x800D0000u; // 800C96F4
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C96F8
  c->r[7]=c->r[26]|c->r[26]; // 800C96FC
  c->r[4]=0u+0x00000000u; // 800C9700
  c->r[8]=c->r[8]+0xFFFF90D0u; // 800C9704
  c->r[5]=0u+0x00000000u; // 800C9708
  c->r[6]=0u+0x00000000u; // 800C970C
  c->lr=0x800C9714u; f_800E9E80(c); // 800C9710
  c->r[0]=c->r[0]|0x00000000u; // 800C9714
L_800C9718:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9718
  cmps(c,0,(int32_t)c->r[0],0); // 800C971C
  if (crb(c,2)) { IRQCHK(c); goto L_800C9718; } // 800C9720
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800C9724
  cmpu(c,0,c->r[0],0x00000001u); // 800C9728
  if (crb(c,2)) { goto L_800C974C; } // 800C972C
  c->r[3]=0u+0x802A0000u; // 800C9730
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 800C9734
  c->r[3]=c->r[3]+0x000006B8u; // 800C9738
  c->r[5]=0u+0x00000465u; // 800C973C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9740
  c->lr=0x800C9748u; f_800C8450(c); // 800C9744
  c->lr=0x800C974Cu; f_800CDA20(c); // 800C9748
L_800C974C:;
  c->r[11]=c->r[1]+0x00000040u; // 800C974C
  c->lr=0x800C9754u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C9750
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C9754
  c->lr=c->r[0]; // 800C9758
  c->r[1]=c->r[1]+0x00000040u; // 800C975C
  return; // 800C9760
}

// __OSLaunchMenu
void f_800C9770(Ctx* __restrict c) {
  trace_call(0x800C9770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9770
  c->r[0]=c->lr; // 800C9774
  c->r[3]=0u+0x81280000u; // 800C9778
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C977C
  c->r[0]=0u+0x00000001u; // 800C9780
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C9784
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C9788
  c->lr=0x800C9790u; f_800C7220(c); // 800C978C
  c->r[3]=0u+0x812F0000u; // 800C9790
  c->lr=0x800C9798u; f_800C71F0(c); // 800C9794
  c->lr=0x800C979Cu; f_800F9610(c); // 800C9798
  cmps(c,0,(int32_t)c->r[3],0); // 800C979C
  if (!crb(c,2)) { goto L_800C9824; } // 800C97A0
  c->r[6]=c->r[1]+0x00000008u; // 800C97A4
  c->r[4]=0u+0x00000002u; // 800C97A8
  c->r[3]=0u+0x00000001u; // 800C97AC
  c->r[5]=0u+0x00000000u; // 800C97B0
  c->lr=0x800C97B8u; f_800F9980(c); // 800C97B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C97B8
  cmpu(c,0,c->r[0],0x00000001u); // 800C97BC
  if (!crb(c,2)) { goto L_800C9824; } // 800C97C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C97C4
  if (crb(c,2)) { goto L_800C97D0; } // 800C97C8
  goto L_800C9824; // 800C97CC
L_800C97D0:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800C97D0
  c->r[4]=0u+0x00000020u; // 800C97D4
  c->r[0]=c->r[3]+0x0000001Fu; // 800C97D8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C97DC
  c->lr=0x800C97E4u; f_800C7230(c); // 800C97E0
  c->r[31]=c->r[3]|c->r[3]; // 800C97E4
  c->r[6]=c->r[1]+0x00000008u; // 800C97E8
  c->r[5]=c->r[31]|c->r[31]; // 800C97EC
  c->r[4]=0u+0x00000002u; // 800C97F0
  c->r[3]=0u+0x00000001u; // 800C97F4
  c->lr=0x800C97FCu; f_800F9980(c); // 800C97F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C97FC
  if (!crb(c,2)) { goto L_800C9824; } // 800C9800
  c->r[5]=c->r[31]|c->r[31]; // 800C9804
  c->r[4]=0u+0x00000002u; // 800C9808
  c->r[3]=0u+0x00000001u; // 800C980C
  c->lr=0x800C9814u; f_800F96C0(c); // 800C9810
  cmps(c,0,(int32_t)c->r[3],0); // 800C9814
  if (!crb(c,2)) { goto L_800C9824; } // 800C9818
  c->r[0]=c->r[0]|0x00000000u; // 800C981C
L_800C9820:;
  IRQCHK(c); goto L_800C9820; // 800C9820
L_800C9824:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C9824
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C9828
  c->lr=c->r[0]; // 800C982C
  c->r[1]=c->r[1]+0x00000020u; // 800C9830
  return; // 800C9834
}

// __OSBootDolSimple
void f_800C9840(Ctx* __restrict c) {
  trace_call(0x800C9840u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800C9840
  c->r[12]=c->r[1]|c->r[1]; // 800C9844
  c->r[11]=addc(c,~c->r[11],0xFFFFFE00u,1); // 800C9848
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800C984C
  c->r[0]=c->lr; // 800C9850
  c->r[11]=c->r[12]|c->r[12]; // 800C9854
  W32(c->r[12]+0x00000004u,c->r[0]); // 800C9858
  c->lr=0x800C9860u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C985C
  c->r[27]=c->r[3]|c->r[3]; // 800C9860
  c->r[24]=c->r[4]|c->r[4]; // 800C9864
  c->r[28]=c->r[5]|c->r[5]; // 800C9868
  c->r[29]=c->r[6]|c->r[6]; // 800C986C
  c->r[25]=c->r[7]|c->r[7]; // 800C9870
  c->r[31]=c->r[8]|c->r[8]; // 800C9874
  c->r[26]=c->r[9]|c->r[9]; // 800C9878
  c->lr=0x800C9880u; f_800CBAA0(c); // 800C987C
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C9880
  cmps(c,0,(int32_t)c->r[0],0); // 800C9884
  if (crb(c,2)) { goto L_800C9898; } // 800C9888
  c->r[3]=0u+0x80000000u; // 800C988C
  c->r[0]=R32(c->r[3]+0x00003194u); // 800C9890
  W32(c->r[13]+0xFFFFA4A8u,c->r[0]); // 800C9894
L_800C9898:;
  c->r[3]=0u+0x000C0000u; // 800C9898
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 800C989C
  c->lr=0x800C98A4u; f_800CCBF0(c); // 800C98A0
  c->r[3]=0u+0x0000001Cu; // 800C98A4
  c->r[4]=0u+0x00000001u; // 800C98A8
  c->lr=0x800C98B0u; f_800C7230(c); // 800C98AC
  c->r[0]=0u+0x00000001u; // 800C98B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C98B4
  cmps(c,0,(int32_t)c->r[25],0); // 800C98B8
  c->r[30]=c->r[3]|c->r[3]; // 800C98BC
  W32(c->r[3]+0x00000004u,c->r[24]); // 800C98C0
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 800C98C4
  W32(c->r[3]+0x00000010u,c->r[29]); // 800C98C8
  W32(c->r[3]+0x00000014u,c->r[25]); // 800C98CC
  if (!crb(c,2)) { goto L_800C9920; } // 800C98D0
  c->r[3]=0u+0x00002000u; // 800C98D4
  c->r[4]=0u+0x00000001u; // 800C98D8
  c->lr=0x800C98E0u; f_800C7230(c); // 800C98DC
  W32(c->r[30]+0x00000018u,c->r[3]); // 800C98E0
  c->r[0]=R32(c->r[13]+0xFFFFA4A8u); // 800C98E4
  cmpu(c,0,c->r[0],0x00000002u); // 800C98E8
  if (!crb(c,2)) { goto L_800C9910; } // 800C98EC
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C98F0
  cmps(c,0,(int32_t)c->r[0],0); // 800C98F4
  if (!crb(c,2)) { goto L_800C9910; } // 800C98F8
  c->r[3]=R32(c->r[30]+0x00000018u); // 800C98FC
  c->r[4]=c->r[31]|c->r[31]; // 800C9900
  c->r[5]=c->r[26]|c->r[26]; // 800C9904
  c->lr=0x800C990Cu; f_800C8E80(c); // 800C9908
  goto L_800C9920; // 800C990C
L_800C9910:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800C9910
  c->r[4]=c->r[31]|c->r[31]; // 800C9914
  c->r[5]=c->r[26]|c->r[26]; // 800C9918
  c->lr=0x800C9920u; f_800C8BA0(c); // 800C991C
L_800C9920:;
  c->lr=0x800C9924u; f_800E3BC0(c); // 800C9920
  c->r[3]=0u+0x00000001u; // 800C9924
  c->lr=0x800C992Cu; f_800E7E90(c); // 800C9928
  c->lr=0x800C9930u; f_800E7EA0(c); // 800C992C
  c->r[0]=0u+0x00000000u; // 800C9930
  c->r[3]=0u+0x800D0000u; // 800C9934
  W32(c->r[13]+0xFFFFA4B8u,c->r[0]); // 800C9938
  c->r[3]=c->r[3]+0xFFFF9090u; // 800C993C
  c->lr=0x800C9944u; f_800E8470(c); // 800C9940
  c->r[3]=0u+0xFFFFFFF0u; // 800C9944
  c->lr=0x800C994Cu; f_800CBE70(c); // 800C9948
  c->r[3]=0u+0x00000010u; // 800C994C
  c->lr=0x800C9954u; f_800CBEF0(c); // 800C9950
  c->lr=0x800C9958u; f_800CBAC0(c); // 800C9954
L_800C9958:;
  c->r[0]=R32(c->r[13]+0xFFFFA4B8u); // 800C9958
  cmps(c,0,(int32_t)c->r[0],1); // 800C995C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9958; } // 800C9960
  c->lr=0x800C9968u; f_800C90E0(c); // 800C9964
  c->r[0]=c->r[24]+0x60000000u; // 800C9968
  cmpu(c,0,c->r[0],0x00000000u); // 800C996C
  if (!crb(c,2)) { goto L_800C99CC; } // 800C9970
  c->r[0]=R32(c->r[13]+0xFFFFA4B4u); // 800C9974
  cmps(c,0,(int32_t)c->r[0],0); // 800C9978
  if (!crb(c,2)) { goto L_800C99CC; } // 800C997C
  c->lr=0x800C9984u; f_800F9610(c); // 800C9980
  cmps(c,0,(int32_t)c->r[3],0); // 800C9984
  if (!crb(c,2)) { goto L_800C9F78; } // 800C9988
  c->r[3]=c->r[1]+0x00000040u; // 800C998C
  c->lr=0x800C9994u; f_800F9DF0(c); // 800C9990
  cmps(c,0,(int32_t)c->r[3],0); // 800C9994
  if (!crb(c,2)) { goto L_800C9F78; } // 800C9998
  c->lr=0x800C99A0u; f_800F9670(c); // 800C999C
  cmps(c,0,(int32_t)c->r[3],0); // 800C99A0
  if (!crb(c,2)) { goto L_800C9F78; } // 800C99A4
  c->r[3]=R32(c->r[30]+0x00000018u); // 800C99A8
  c->r[4]=0u+0x00000011u; // 800C99AC
  c->r[0]=R32(c->r[26]+0x00000004u); // 800C99B0
  c->r[5]=c->r[13]+0xFFFF8F28u; // 800C99B4
  c->r[7]=R32(c->r[1]+0x00000040u); // 800C99B8
  c->r[8]=R32(c->r[1]+0x00000044u); // 800C99BC
  c->r[3]=c->r[3]+c->r[0]; // 800C99C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C99C4
  c->lr=0x800C99CCu; f_8021E810(c); // 800C99C8
L_800C99CC:;
  c->r[3]=0u+0x00000020u; // 800C99CC
  c->r[4]=0u+0x00000020u; // 800C99D0
  c->lr=0x800C99D8u; f_800C7230(c); // 800C99D4
  c->r[6]=R32(c->r[13]+0xFFFFA4ACu); // 800C99D8
  c->r[31]=c->r[3]|c->r[3]; // 800C99DC
  cmps(c,0,(int32_t)c->r[6],0); // 800C99E0
  if (crb(c,2)) { goto L_800C99EC; } // 800C99E4
  goto L_800C9A88; // 800C99E8
L_800C99EC:;
  c->r[26]=0u+0x80000000u; // 800C99EC
  c->r[0]=R32(c->r[26]+0x000030F4u); // 800C99F0
  cmps(c,0,(int32_t)c->r[0],0); // 800C99F4
  if (crb(c,2)) { goto L_800C9A80; } // 800C99F8
  c->r[3]=0u+0x00000040u; // 800C99FC
  c->r[4]=0u+0x00000020u; // 800C9A00
  c->lr=0x800C9A08u; f_800C7230(c); // 800C9A04
  c->r[0]=R32(c->r[26]+0x000030F4u); // 800C9A08
  c->r[26]=c->r[3]|c->r[3]; // 800C9A0C
  c->r[3]=c->r[1]+0x00000120u; // 800C9A10
  c->r[5]=0u+0x00000040u; // 800C9A14
  c->r[4]=c->r[26]|c->r[26]; // 800C9A18
  c->r[6]=sraw(c,c->r[0],2); // 800C9A1C
  c->r[7]=0u+0x00000000u; // 800C9A20
  c->r[8]=0u+0x00000000u; // 800C9A24
  c->lr=0x800C9A2Cu; f_800E7B50(c); // 800C9A28
  goto L_800C9A54; // 800C9A2C
L_800C9A30:;
  c->r[3]=c->r[1]+0x00000120u; // 800C9A30
  c->lr=0x800C9A38u; f_800E7D20(c); // 800C9A34
  cmps(c,0,(int32_t)c->r[3],2); // 800C9A38
  if (crb(c,1)) { goto L_800C9A50; } // 800C9A3C
  c->r[3]=c->r[1]+0x00000120u; // 800C9A40
  c->lr=0x800C9A48u; f_800E7D20(c); // 800C9A44
  cmps(c,0,(int32_t)c->r[3],0); // 800C9A48
  if (!crb(c,0)) { goto L_800C9A54; } // 800C9A4C
L_800C9A50:;
  c->lr=0x800C9A54u; f_800CDA20(c); // 800C9A50
L_800C9A54:;
  c->r[3]=c->r[1]+0x00000120u; // 800C9A54
  c->lr=0x800C9A5Cu; f_800E7D20(c); // 800C9A58
  cmps(c,0,(int32_t)c->r[3],0); // 800C9A5C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9A30; } // 800C9A60
  c->r[3]=0u+0x80000000u; // 800C9A64
  c->r[4]=R32(c->r[26]+0x00000038u); // 800C9A68
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800C9A6C
  c->r[0]=c->r[0]+c->r[4]; // 800C9A70
  c->r[6]=sraw(c,c->r[0],2); // 800C9A74
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9A78
  goto L_800C9A88; // 800C9A7C
L_800C9A80:;
  c->r[6]=0u+0x00000910u; // 800C9A80
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9A84
L_800C9A88:;
  c->r[4]=c->r[31]|c->r[31]; // 800C9A88
  c->r[3]=c->r[1]+0x00000150u; // 800C9A8C
  c->r[5]=0u+0x00000020u; // 800C9A90
  c->r[7]=0u+0x00000000u; // 800C9A94
  c->r[8]=0u+0x00000000u; // 800C9A98
  c->lr=0x800C9AA0u; f_800E7B50(c); // 800C9A9C
  goto L_800C9AC8; // 800C9AA0
L_800C9AA4:;
  c->r[3]=c->r[1]+0x00000150u; // 800C9AA4
  c->lr=0x800C9AACu; f_800E7D20(c); // 800C9AA8
  cmps(c,0,(int32_t)c->r[3],2); // 800C9AAC
  if (crb(c,1)) { goto L_800C9AC4; } // 800C9AB0
  c->r[3]=c->r[1]+0x00000150u; // 800C9AB4
  c->lr=0x800C9ABCu; f_800E7D20(c); // 800C9AB8
  cmps(c,0,(int32_t)c->r[3],0); // 800C9ABC
  if (!crb(c,0)) { goto L_800C9AC8; } // 800C9AC0
L_800C9AC4:;
  c->lr=0x800C9AC8u; f_800CDA20(c); // 800C9AC4
L_800C9AC8:;
  c->r[3]=c->r[1]+0x00000150u; // 800C9AC8
  c->lr=0x800C9AD0u; f_800E7D20(c); // 800C9ACC
  cmps(c,0,(int32_t)c->r[3],0); // 800C9AD0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9AA4; } // 800C9AD4
  c->r[6]=R32(c->r[13]+0xFFFFA4ACu); // 800C9AD8
  cmps(c,0,(int32_t)c->r[6],0); // 800C9ADC
  if (crb(c,2)) { goto L_800C9AE8; } // 800C9AE0
  goto L_800C9B84; // 800C9AE4
L_800C9AE8:;
  c->r[26]=0u+0x80000000u; // 800C9AE8
  c->r[0]=R32(c->r[26]+0x000030F4u); // 800C9AEC
  cmps(c,0,(int32_t)c->r[0],0); // 800C9AF0
  if (crb(c,2)) { goto L_800C9B7C; } // 800C9AF4
  c->r[3]=0u+0x00000040u; // 800C9AF8
  c->r[4]=0u+0x00000020u; // 800C9AFC
  c->lr=0x800C9B04u; f_800C7230(c); // 800C9B00
  c->r[0]=R32(c->r[26]+0x000030F4u); // 800C9B04
  c->r[26]=c->r[3]|c->r[3]; // 800C9B08
  c->r[3]=c->r[1]+0x00000180u; // 800C9B0C
  c->r[5]=0u+0x00000040u; // 800C9B10
  c->r[4]=c->r[26]|c->r[26]; // 800C9B14
  c->r[6]=sraw(c,c->r[0],2); // 800C9B18
  c->r[7]=0u+0x00000000u; // 800C9B1C
  c->r[8]=0u+0x00000000u; // 800C9B20
  c->lr=0x800C9B28u; f_800E7B50(c); // 800C9B24
  goto L_800C9B50; // 800C9B28
L_800C9B2C:;
  c->r[3]=c->r[1]+0x00000180u; // 800C9B2C
  c->lr=0x800C9B34u; f_800E7D20(c); // 800C9B30
  cmps(c,0,(int32_t)c->r[3],2); // 800C9B34
  if (crb(c,1)) { goto L_800C9B4C; } // 800C9B38
  c->r[3]=c->r[1]+0x00000180u; // 800C9B3C
  c->lr=0x800C9B44u; f_800E7D20(c); // 800C9B40
  cmps(c,0,(int32_t)c->r[3],0); // 800C9B44
  if (!crb(c,0)) { goto L_800C9B50; } // 800C9B48
L_800C9B4C:;
  c->lr=0x800C9B50u; f_800CDA20(c); // 800C9B4C
L_800C9B50:;
  c->r[3]=c->r[1]+0x00000180u; // 800C9B50
  c->lr=0x800C9B58u; f_800E7D20(c); // 800C9B54
  cmps(c,0,(int32_t)c->r[3],0); // 800C9B58
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9B2C; } // 800C9B5C
  c->r[3]=0u+0x80000000u; // 800C9B60
  c->r[4]=R32(c->r[26]+0x00000038u); // 800C9B64
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800C9B68
  c->r[0]=c->r[0]+c->r[4]; // 800C9B6C
  c->r[6]=sraw(c,c->r[0],2); // 800C9B70
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9B74
  goto L_800C9B84; // 800C9B78
L_800C9B7C:;
  c->r[6]=0u+0x00000910u; // 800C9B7C
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9B80
L_800C9B84:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 800C9B84
  c->r[3]=c->r[1]+0x000001B0u; // 800C9B88
  c->r[6]=c->r[6]+0x00000008u; // 800C9B8C
  c->r[4]=0u+0x81200000u; // 800C9B90
  c->r[0]=c->r[5]+0x0000001Fu; // 800C9B94
  c->r[7]=0u+0x00000000u; // 800C9B98
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C9B9C
  c->r[8]=0u+0x00000000u; // 800C9BA0
  c->lr=0x800C9BA8u; f_800E7B50(c); // 800C9BA4
  goto L_800C9BD0; // 800C9BA8
L_800C9BAC:;
  c->r[3]=c->r[1]+0x000001B0u; // 800C9BAC
  c->lr=0x800C9BB4u; f_800E7D20(c); // 800C9BB0
  cmps(c,0,(int32_t)c->r[3],2); // 800C9BB4
  if (crb(c,1)) { goto L_800C9BCC; } // 800C9BB8
  c->r[3]=c->r[1]+0x000001B0u; // 800C9BBC
  c->lr=0x800C9BC4u; f_800E7D20(c); // 800C9BC0
  cmps(c,0,(int32_t)c->r[3],0); // 800C9BC4
  if (!crb(c,0)) { goto L_800C9BD0; } // 800C9BC8
L_800C9BCC:;
  c->lr=0x800C9BD0u; f_800CDA20(c); // 800C9BCC
L_800C9BD0:;
  c->r[3]=c->r[1]+0x000001B0u; // 800C9BD0
  c->lr=0x800C9BD8u; f_800E7D20(c); // 800C9BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C9BD8
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9BAC; } // 800C9BDC
  c->r[4]=R32(c->r[31]+0x00000014u); // 800C9BE0
  c->r[3]=0u+0x81200000u; // 800C9BE4
  c->r[0]=c->r[4]+0x0000001Fu; // 800C9BE8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C9BEC
  c->lr=0x800C9BF4u; f_800C7840(c); // 800C9BF0
  c->r[4]=0u+0x802A0000u; // 800C9BF4
  c->r[3]=c->r[31]|c->r[31]; // 800C9BF8
  c->r[4]=c->r[4]+0x00000718u; // 800C9BFC
  c->r[5]=0u+0x0000000Au; // 800C9C00
  c->lr=0x800C9C08u; f_80220224(c); // 800C9C04
  cmps(c,0,(int32_t)c->r[3],0); // 800C9C08
  if (!crb(c,1)) { goto L_800C9C18; } // 800C9C0C
  c->r[0]=0u+0x00000001u; // 800C9C10
  goto L_800C9C1C; // 800C9C14
L_800C9C18:;
  c->r[0]=0u+0x00000000u; // 800C9C18
L_800C9C1C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C1C
  if (crb(c,2)) { goto L_800C9E2C; } // 800C9C20
  c->r[0]=c->r[27]+0x00010000u; // 800C9C24
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800C9C28
  if (!crb(c,2)) { goto L_800C9CEC; } // 800C9C2C
  c->r[6]=R32(c->r[13]+0xFFFFA4ACu); // 800C9C30
  cmps(c,0,(int32_t)c->r[6],0); // 800C9C34
  if (crb(c,2)) { goto L_800C9C40; } // 800C9C38
  goto L_800C9CDC; // 800C9C3C
L_800C9C40:;
  c->r[27]=0u+0x80000000u; // 800C9C40
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800C9C44
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C48
  if (crb(c,2)) { goto L_800C9CD4; } // 800C9C4C
  c->r[3]=0u+0x00000040u; // 800C9C50
  c->r[4]=0u+0x00000020u; // 800C9C54
  c->lr=0x800C9C5Cu; f_800C7230(c); // 800C9C58
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800C9C5C
  c->r[26]=c->r[3]|c->r[3]; // 800C9C60
  c->r[3]=c->r[1]+0x000000F0u; // 800C9C64
  c->r[5]=0u+0x00000040u; // 800C9C68
  c->r[4]=c->r[26]|c->r[26]; // 800C9C6C
  c->r[6]=sraw(c,c->r[0],2); // 800C9C70
  c->r[7]=0u+0x00000000u; // 800C9C74
  c->r[8]=0u+0x00000000u; // 800C9C78
  c->lr=0x800C9C80u; f_800E7B50(c); // 800C9C7C
  goto L_800C9CA8; // 800C9C80
L_800C9C84:;
  c->r[3]=c->r[1]+0x000000F0u; // 800C9C84
  c->lr=0x800C9C8Cu; f_800E7D20(c); // 800C9C88
  cmps(c,0,(int32_t)c->r[3],2); // 800C9C8C
  if (crb(c,1)) { goto L_800C9CA4; } // 800C9C90
  c->r[3]=c->r[1]+0x000000F0u; // 800C9C94
  c->lr=0x800C9C9Cu; f_800E7D20(c); // 800C9C98
  cmps(c,0,(int32_t)c->r[3],0); // 800C9C9C
  if (!crb(c,0)) { goto L_800C9CA8; } // 800C9CA0
L_800C9CA4:;
  c->lr=0x800C9CA8u; f_800CDA20(c); // 800C9CA4
L_800C9CA8:;
  c->r[3]=c->r[1]+0x000000F0u; // 800C9CA8
  c->lr=0x800C9CB0u; f_800E7D20(c); // 800C9CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C9CB0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9C84; } // 800C9CB4
  c->r[3]=0u+0x80000000u; // 800C9CB8
  c->r[4]=R32(c->r[26]+0x00000038u); // 800C9CBC
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800C9CC0
  c->r[0]=c->r[0]+c->r[4]; // 800C9CC4
  c->r[6]=sraw(c,c->r[0],2); // 800C9CC8
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9CCC
  goto L_800C9CDC; // 800C9CD0
L_800C9CD4:;
  c->r[6]=0u+0x00000910u; // 800C9CD4
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9CD8
L_800C9CDC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800C9CDC
  c->r[0]=c->r[3]+0x00000020u; // 800C9CE0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C9CE4
  c->r[27]=c->r[0]+c->r[6]; // 800C9CE8
L_800C9CEC:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 800C9CEC
  c->r[3]=c->r[1]+0x00000020u; // 800C9CF0
  c->r[4]=c->r[1]+0x00000024u; // 800C9CF4
  c->r[5]=c->r[1]+0x00000028u; // 800C9CF8
  c->r[12]=R32(c->r[31]+0x00000010u); // 800C9CFC
  c->ctr=c->r[12]; // 800C9D00
  if (true) { c->lr=0x800C9D08u; dispatch(c,c->ctr); } // 800C9D04
  c->r[3]=0u+0x0000001Cu; // 800C9D08
  c->r[4]=0u+0x00000001u; // 800C9D0C
  c->lr=0x800C9D14u; f_800C7230(c); // 800C9D10
  c->r[26]=c->r[3]|c->r[3]; // 800C9D14
  c->r[4]=c->r[30]|c->r[30]; // 800C9D18
  c->r[5]=0u+0x0000001Cu; // 800C9D1C
  c->lr=0x800C9D24u; f_80004364(c); // 800C9D20
  c->r[4]=0u+0x80000000u; // 800C9D24
  c->r[3]=0u+0x800D0000u; // 800C9D28
  W32(c->r[4]+0x000030F0u,c->r[26]); // 800C9D2C
  c->r[3]=c->r[3]+0xFFFF8450u; // 800C9D30
  c->r[12]=R32(c->r[1]+0x00000020u); // 800C9D34
  c->ctr=c->r[12]; // 800C9D38
  if (true) { c->lr=0x800C9D40u; dispatch(c,c->ctr); } // 800C9D3C
  c->r[3]=c->r[26]|c->r[26]; // 800C9D40
  c->lr=0x800C9D48u; f_800C7220(c); // 800C9D44
  goto L_800C9DA8; // 800C9D48
L_800C9D4C:;
  c->r[6]=R32(c->r[1]+0x00000034u); // 800C9D4C
  c->r[3]=c->r[1]+0x000000C0u; // 800C9D50
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800C9D54
  c->r[7]=0u+0x00000000u; // 800C9D58
  c->r[5]=R32(c->r[1]+0x00000030u); // 800C9D5C
  c->r[8]=0u+0x00000000u; // 800C9D60
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800C9D64
  c->r[6]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 800C9D68
  c->lr=0x800C9D70u; f_800E7B50(c); // 800C9D6C
  goto L_800C9D98; // 800C9D70
L_800C9D74:;
  c->r[3]=c->r[1]+0x000000C0u; // 800C9D74
  c->lr=0x800C9D7Cu; f_800E7D20(c); // 800C9D78
  cmps(c,0,(int32_t)c->r[3],2); // 800C9D7C
  if (crb(c,1)) { goto L_800C9D94; } // 800C9D80
  c->r[3]=c->r[1]+0x000000C0u; // 800C9D84
  c->lr=0x800C9D8Cu; f_800E7D20(c); // 800C9D88
  cmps(c,0,(int32_t)c->r[3],0); // 800C9D8C
  if (!crb(c,0)) { goto L_800C9D98; } // 800C9D90
L_800C9D94:;
  c->lr=0x800C9D98u; f_800CDA20(c); // 800C9D94
L_800C9D98:;
  c->r[3]=c->r[1]+0x000000C0u; // 800C9D98
  c->lr=0x800C9DA0u; f_800E7D20(c); // 800C9D9C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9DA0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9D74; } // 800C9DA4
L_800C9DA8:;
  c->r[12]=R32(c->r[1]+0x00000024u); // 800C9DA8
  c->r[3]=c->r[1]+0x0000002Cu; // 800C9DAC
  c->r[4]=c->r[1]+0x00000030u; // 800C9DB0
  c->r[5]=c->r[1]+0x00000034u; // 800C9DB4
  c->ctr=c->r[12]; // 800C9DB8
  if (true) { c->lr=0x800C9DC0u; dispatch(c,c->ctr); } // 800C9DBC
  cmps(c,0,(int32_t)c->r[3],0); // 800C9DC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9D4C; } // 800C9DC4
  c->r[12]=R32(c->r[1]+0x00000028u); // 800C9DC8
  c->ctr=c->r[12]; // 800C9DCC
  if (true) { c->lr=0x800C9DD4u; dispatch(c,c->ctr); } // 800C9DD0
  c->r[5]=0u+0x80000000u; // 800C9DD4
  c->r[27]=c->r[3]|c->r[3]; // 800C9DD8
  c->r[3]=R32(c->r[5]+0x00000000u); // 800C9DDC
  c->r[0]=0u+0x00000080u; // 800C9DE0
  W32(c->r[5]+0x00003180u,c->r[3]); // 800C9DE4
  c->r[3]=0u+0x0000001Cu; // 800C9DE8
  c->r[4]=0u+0x00000001u; // 800C9DEC
  W8(c->r[5]+0x00003184u,c->r[0]); // 800C9DF0
  c->lr=0x800C9DF8u; f_800C7230(c); // 800C9DF4
  c->r[26]=c->r[3]|c->r[3]; // 800C9DF8
  c->r[4]=c->r[30]|c->r[30]; // 800C9DFC
  c->r[5]=0u+0x0000001Cu; // 800C9E00
  c->lr=0x800C9E08u; f_80004364(c); // 800C9E04
  c->r[4]=0u+0x80000000u; // 800C9E08
  c->r[3]=0u+0xCC000000u; // 800C9E0C
  W32(c->r[4]+0x000030F0u,c->r[26]); // 800C9E10
  c->r[0]=0u+0x00000007u; // 800C9E14
  W32(c->r[3]+0x00003024u,c->r[0]); // 800C9E18
  c->lr=0x800C9E20u; f_800CBAA0(c); // 800C9E1C
  c->r[3]=c->r[27]|c->r[27]; // 800C9E20
  c->lr=0x800C9E28u; f_800C9050(c); // 800C9E24
  goto L_800C9F78; // 800C9E28
L_800C9E2C:;
  c->r[3]=0u+0x81300000u; // 800C9E2C
  c->r[27]=0u+0x80000000u; // 800C9E30
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 800C9E34
  c->r[0]=0u+0x00000001u; // 800C9E38
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 800C9E3C
  W8(c->r[27]+0x000030E2u,c->r[0]); // 800C9E40
  c->r[6]=R32(c->r[13]+0xFFFFA4ACu); // 800C9E44
  cmps(c,0,(int32_t)c->r[6],0); // 800C9E48
  if (crb(c,2)) { goto L_800C9E54; } // 800C9E4C
  goto L_800C9EEC; // 800C9E50
L_800C9E54:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800C9E54
  cmps(c,0,(int32_t)c->r[0],0); // 800C9E58
  if (crb(c,2)) { goto L_800C9EE4; } // 800C9E5C
  c->r[3]=0u+0x00000040u; // 800C9E60
  c->r[4]=0u+0x00000020u; // 800C9E64
  c->lr=0x800C9E6Cu; f_800C7230(c); // 800C9E68
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800C9E6C
  c->r[26]=c->r[3]|c->r[3]; // 800C9E70
  c->r[3]=c->r[1]+0x00000090u; // 800C9E74
  c->r[5]=0u+0x00000040u; // 800C9E78
  c->r[4]=c->r[26]|c->r[26]; // 800C9E7C
  c->r[6]=sraw(c,c->r[0],2); // 800C9E80
  c->r[7]=0u+0x00000000u; // 800C9E84
  c->r[8]=0u+0x00000000u; // 800C9E88
  c->lr=0x800C9E90u; f_800E7B50(c); // 800C9E8C
  goto L_800C9EB8; // 800C9E90
L_800C9E94:;
  c->r[3]=c->r[1]+0x00000090u; // 800C9E94
  c->lr=0x800C9E9Cu; f_800E7D20(c); // 800C9E98
  cmps(c,0,(int32_t)c->r[3],2); // 800C9E9C
  if (crb(c,1)) { goto L_800C9EB4; } // 800C9EA0
  c->r[3]=c->r[1]+0x00000090u; // 800C9EA4
  c->lr=0x800C9EACu; f_800E7D20(c); // 800C9EA8
  cmps(c,0,(int32_t)c->r[3],0); // 800C9EAC
  if (!crb(c,0)) { goto L_800C9EB8; } // 800C9EB0
L_800C9EB4:;
  c->lr=0x800C9EB8u; f_800CDA20(c); // 800C9EB4
L_800C9EB8:;
  c->r[3]=c->r[1]+0x00000090u; // 800C9EB8
  c->lr=0x800C9EC0u; f_800E7D20(c); // 800C9EBC
  cmps(c,0,(int32_t)c->r[3],0); // 800C9EC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9E94; } // 800C9EC4
  c->r[3]=0u+0x80000000u; // 800C9EC8
  c->r[4]=R32(c->r[26]+0x00000038u); // 800C9ECC
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800C9ED0
  c->r[0]=c->r[0]+c->r[4]; // 800C9ED4
  c->r[6]=sraw(c,c->r[0],2); // 800C9ED8
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9EDC
  goto L_800C9EEC; // 800C9EE0
L_800C9EE4:;
  c->r[6]=0u+0x00000910u; // 800C9EE4
  W32(c->r[13]+0xFFFFA4ACu,c->r[6]); // 800C9EE8
L_800C9EEC:;
  c->r[7]=R32(c->r[31]+0x00000014u); // 800C9EEC
  c->r[3]=c->r[1]+0x00000060u; // 800C9EF0
  c->r[5]=R32(c->r[31]+0x00000018u); // 800C9EF4
  c->r[4]=0u+0x81330000u; // 800C9EF8
  c->r[0]=c->r[7]+0x00000020u; // 800C9EFC
  c->r[7]=0u+0x00000000u; // 800C9F00
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800C9F04
  c->r[0]=c->r[5]+0x0000001Fu; // 800C9F08
  c->r[6]=c->r[8]+c->r[6]; // 800C9F0C
  c->r[8]=0u+0x00000000u; // 800C9F10
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C9F14
  c->lr=0x800C9F1Cu; f_800E7B50(c); // 800C9F18
  goto L_800C9F44; // 800C9F1C
L_800C9F20:;
  c->r[3]=c->r[1]+0x00000060u; // 800C9F20
  c->lr=0x800C9F28u; f_800E7D20(c); // 800C9F24
  cmps(c,0,(int32_t)c->r[3],2); // 800C9F28
  if (crb(c,1)) { goto L_800C9F40; } // 800C9F2C
  c->r[3]=c->r[1]+0x00000060u; // 800C9F30
  c->lr=0x800C9F38u; f_800E7D20(c); // 800C9F34
  cmps(c,0,(int32_t)c->r[3],0); // 800C9F38
  if (!crb(c,0)) { goto L_800C9F44; } // 800C9F3C
L_800C9F40:;
  c->lr=0x800C9F44u; f_800CDA20(c); // 800C9F40
L_800C9F44:;
  c->r[3]=c->r[1]+0x00000060u; // 800C9F44
  c->lr=0x800C9F4Cu; f_800E7D20(c); // 800C9F48
  cmps(c,0,(int32_t)c->r[3],0); // 800C9F4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9F20; } // 800C9F50
  c->r[4]=R32(c->r[31]+0x00000018u); // 800C9F54
  c->r[3]=0u+0x81330000u; // 800C9F58
  c->r[0]=c->r[4]+0x0000001Fu; // 800C9F5C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C9F60
  c->lr=0x800C9F68u; f_800C7840(c); // 800C9F64
  c->lr=0x800C9F6Cu; f_800CBAA0(c); // 800C9F68
  c->lr=0x800C9F70u; f_800C7880(c); // 800C9F6C
  c->r[3]=0u+0x81330000u; // 800C9F70
  c->lr=0x800C9F78u; f_800C9050(c); // 800C9F74
L_800C9F78:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C9F78
  c->r[11]=c->r[10]|c->r[10]; // 800C9F7C
  c->lr=0x800C9F84u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C9F80
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C9F84
  c->lr=c->r[0]; // 800C9F88
  c->r[1]=c->r[10]|c->r[10]; // 800C9F8C
  return; // 800C9F90
}

// __OSBootDol
void f_800C9FA0(Ctx* __restrict c) {
  trace_call(0x800C9FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9FA0
  c->r[0]=c->lr; // 800C9FA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C9FA8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C9FAC
  c->r[31]=c->r[3]|c->r[3]; // 800C9FB0
  c->r[3]=c->r[1]+0x0000000Cu; // 800C9FB4
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C9FB8
  c->r[30]=c->r[5]|c->r[5]; // 800C9FBC
  W32(c->r[1]+0x00000034u,c->r[29]); // 800C9FC0
  c->r[29]=c->r[4]|c->r[4]; // 800C9FC4
  c->r[4]=c->r[1]+0x00000008u; // 800C9FC8
  c->lr=0x800C9FD0u; f_800CD1C0(c); // 800C9FCC
  c->r[5]=c->r[31]|c->r[31]; // 800C9FD0
  c->r[3]=c->r[1]+0x00000010u; // 800C9FD4
  c->r[4]=c->r[13]+0xFFFF8F30u; // 800C9FD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C9FDC
  c->lr=0x800C9FE4u; f_8021E904(c); // 800C9FE0
  cmps(c,0,(int32_t)c->r[30],0); // 800C9FE4
  c->r[31]=0u+0x00000000u; // 800C9FE8
  if (crb(c,2)) { goto L_800CA00C; } // 800C9FEC
  c->r[3]=c->r[30]|c->r[30]; // 800C9FF0
  goto L_800CA000; // 800C9FF4
L_800C9FF8:;
  c->r[3]=c->r[3]+0x00000004u; // 800C9FF8
  c->r[31]=c->r[31]+0x00000001u; // 800C9FFC
L_800CA000:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CA000
  cmps(c,0,(int32_t)c->r[0],0); // 800CA004
  if (!crb(c,2)) { IRQCHK(c); goto L_800C9FF8; } // 800CA008
L_800CA00C:;
  c->r[0]=c->r[31]+0x00000002u; // 800CA00C
  c->r[4]=0u+0x00000001u; // 800CA010
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CA014
  c->lr=0x800CA01Cu; f_800C7230(c); // 800CA018
  c->r[6]=c->r[31]+0x00000001u; // 800CA01C
  c->r[0]=c->r[1]+0x00000010u; // 800CA020
  cmps(c,1,(int32_t)c->r[6],1); // 800CA024
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CA028
  c->r[4]=0u+0x00000001u; // 800CA02C
  if (!crb(c,5)) { goto L_800CA144; } // 800CA030
  cmps(c,0,(int32_t)c->r[31],8); // 800CA034
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 800CA038
  if (!crb(c,1)) { goto L_800CA110; } // 800CA03C
  c->r[8]=0u+0x00000000u; // 800CA040
  c->r[9]=0u+0x00000000u; // 800CA044
  if (crb(c,4)) { goto L_800CA060; } // 800CA048
  c->r[5]=0u+0x80000000u; // 800CA04C
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 800CA050
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CA054
  if (crb(c,1)) { goto L_800CA060; } // 800CA058
  c->r[9]=0u+0x00000001u; // 800CA05C
L_800CA060:;
  cmps(c,0,(int32_t)c->r[9],0); // 800CA060
  if (crb(c,2)) { goto L_800CA09C; } // 800CA064
  c->r[0]=c->r[31]+0x00000001u; // 800CA068
  c->r[5]=0u+0x00000001u; // 800CA06C
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 800CA070
  c->r[0]=c->r[6]+0x80000000u; // 800CA074
  cmpu(c,0,c->r[0],0x00000000u); // 800CA078
  if (!crb(c,2)) { goto L_800CA090; } // 800CA07C
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 800CA080
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CA084
  if (crb(c,2)) { goto L_800CA090; } // 800CA088
  c->r[5]=0u+0x00000000u; // 800CA08C
L_800CA090:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CA090
  if (crb(c,2)) { goto L_800CA09C; } // 800CA094
  c->r[8]=0u+0x00000001u; // 800CA098
L_800CA09C:;
  cmps(c,0,(int32_t)c->r[8],0); // 800CA09C
  if (crb(c,2)) { goto L_800CA110; } // 800CA0A0
  c->r[0]=c->r[7]+0x00000006u; // 800CA0A4
  c->r[5]=c->r[30]+0x00000004u; // 800CA0A8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800CA0AC
  c->r[6]=c->r[3]+0x00000004u; // 800CA0B0
  c->ctr=c->r[0]; // 800CA0B4
  cmps(c,0,(int32_t)c->r[7],1); // 800CA0B8
  if (!crb(c,1)) { goto L_800CA110; } // 800CA0BC
L_800CA0C0:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 800CA0C0
  c->r[4]=c->r[4]+0x00000008u; // 800CA0C4
  W32(c->r[6]+0x00000000u,c->r[0]); // 800CA0C8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800CA0CC
  W32(c->r[6]+0x00000004u,c->r[0]); // 800CA0D0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800CA0D4
  W32(c->r[6]+0x00000008u,c->r[0]); // 800CA0D8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800CA0DC
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800CA0E0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800CA0E4
  W32(c->r[6]+0x00000010u,c->r[0]); // 800CA0E8
  c->r[0]=R32(c->r[5]+0x00000010u); // 800CA0EC
  W32(c->r[6]+0x00000014u,c->r[0]); // 800CA0F0
  c->r[0]=R32(c->r[5]+0x00000014u); // 800CA0F4
  W32(c->r[6]+0x00000018u,c->r[0]); // 800CA0F8
  c->r[0]=R32(c->r[5]+0x00000018u); // 800CA0FC
  c->r[5]=c->r[5]+0x00000020u; // 800CA100
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 800CA104
  c->r[6]=c->r[6]+0x00000020u; // 800CA108
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA0C0; } // 800CA10C
L_800CA110:;
  c->r[5]=c->r[31]+0x00000001u; // 800CA110
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800CA114
  c->r[0]=c->r[5]-c->r[4]; // 800CA118
  c->r[6]=c->r[30]+c->r[7]; // 800CA11C
  c->r[7]=c->r[3]+c->r[7]; // 800CA120
  c->ctr=c->r[0]; // 800CA124
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 800CA128
  if (!crb(c,0)) { goto L_800CA144; } // 800CA12C
L_800CA130:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800CA130
  c->r[6]=c->r[6]+0x00000004u; // 800CA134
  W32(c->r[7]+0x00000000u,c->r[0]); // 800CA138
  c->r[7]=c->r[7]+0x00000004u; // 800CA13C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA130; } // 800CA140
L_800CA144:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CA144
  c->r[9]=c->r[3]|c->r[3]; // 800CA148
  c->r[6]=R32(c->r[1]+0x00000008u); // 800CA14C
  c->r[4]=c->r[29]|c->r[29]; // 800CA150
  c->r[8]=c->r[31]+0x00000001u; // 800CA154
  c->r[3]=0u+0xFFFFFFFFu; // 800CA158
  c->r[7]=0u+0x00000000u; // 800CA15C
  c->lr=0x800CA164u; f_800C9840(c); // 800CA160
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CA164
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CA168
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CA16C
  c->r[29]=R32(c->r[1]+0x00000034u); // 800CA170
  c->lr=c->r[0]; // 800CA174
  c->r[1]=c->r[1]+0x00000040u; // 800CA178
  return; // 800CA17C
}

// ScreenReport
void f_800CA180(Ctx* __restrict c) {
  trace_call(0x800CA180u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA180
  c->r[0]=c->lr; // 800CA184
  W32(c->r[1]+0x00000184u,c->r[0]); // 800CA188
  c->r[11]=c->r[1]+0x00000180u; // 800CA18C
  c->lr=0x800CA194u; f_80217878(c); // 800CA190
  c->r[0]=c->r[5]+0xFFFFFFE8u; // 800CA194
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA198
  c->r[24]=c->r[4]|c->r[4]; // 800CA19C
  c->r[25]=c->r[6]|c->r[6]; // 800CA1A0
  W32(c->r[1]+0x00000130u,c->r[0]); // 800CA1A4
  c->r[26]=c->r[7]|c->r[7]; // 800CA1A8
  c->r[27]=c->r[8]|c->r[8]; // 800CA1AC
  c->r[14]=c->r[9]|c->r[9]; // 800CA1B0
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 800CA1B4
  c->r[20]=0u+0x80810000u; // 800CA1B8
  c->r[21]=0u+0x88890000u; // 800CA1BC
  c->r[31]=0u+0x00000000u; // 800CA1C0
  c->r[23]=0u+0x00000018u; // 800CA1C4
  c->r[22]=0u+0x00000003u; // 800CA1C8
L_800CA1CC:;
  c->r[0]=R32(c->r[1]+0x00000130u); // 800CA1CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 800CA1D0
  if (crb(c,0)) { goto L_800CA490; } // 800CA1D4
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[24]); // 800CA1D8
  c->r[28]=c->r[26]|c->r[26]; // 800CA1DC
  c->r[0]=c->r[26]+c->r[0]; // 800CA1E0
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CA1E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CA1E8
  c->r[29]=c->r[0]+c->r[3]; // 800CA1EC
  goto L_800CA484; // 800CA1F0
L_800CA1F4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800CA1F4
  cmps(c,0,(int32_t)c->r[0],10); // 800CA1F8
  if (!crb(c,2)) { goto L_800CA20C; } // 800CA1FC
  c->r[27]=c->r[27]+c->r[14]; // 800CA200
  c->r[10]=c->r[10]+0x00000001u; // 800CA204
  IRQCHK(c); goto L_800CA1CC; // 800CA208
L_800CA20C:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 800CA20C
  if (!crb(c,0)) { goto L_800CA21C; } // 800CA210
  c->r[27]=c->r[27]+c->r[14]; // 800CA214
  IRQCHK(c); goto L_800CA1CC; // 800CA218
L_800CA21C:;
  c->r[5]=0u+0x00000000u; // 800CA21C
  c->r[6]=0u+0x00000000u; // 800CA220
  c->ctr=c->r[22]; // 800CA224
L_800CA228:;
  c->r[0]=rotl(c->r[5],0)&0x00000007u; // 800CA228
  c->r[8]=c->r[5]+0x00000001u; // 800CA22C
  c->r[9]=c->r[0]+c->r[6]; // 800CA230
  c->r[16]=c->r[5]+0x00000003u; // 800CA234
  c->r[0]=rotl(c->r[8],29)&0x1FFFFFFFu; // 800CA238
  c->r[4]=c->r[1]+0x00000010u; // 800CA23C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800CA240
  c->r[8]=rotl(c->r[8],0)&0x00000007u; // 800CA244
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800CA248
  c->r[7]=c->r[5]+0x00000002u; // 800CA24C
  c->r[4]=c->r[4]+c->r[0]; // 800CA250
  c->r[18]=c->r[5]+0x00000004u; // 800CA254
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 800CA258
  c->r[8]=c->r[8]+c->r[3]; // 800CA25C
  W32(c->r[4]+0x00000000u,c->r[31]); // 800CA260
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800CA264
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800CA268
  c->r[7]=rotl(c->r[7],0)&0x00000007u; // 800CA26C
  W32(c->r[4]+0x00000020u,c->r[31]); // 800CA270
  c->r[3]=c->r[1]+0x00000010u; // 800CA274
  c->r[17]=rotl(c->r[16],29)&0x1FFFFFFFu; // 800CA278
  W32(c->r[4]+0x00000040u,c->r[31]); // 800CA27C
  c->r[0]=c->r[7]+c->r[0]; // 800CA280
  c->r[12]=c->r[5]+0x00000005u; // 800CA284
  c->r[11]=rotl(c->r[12],29)&0x1FFFFFFFu; // 800CA288
  {uint32_t ea=c->r[3]+c->r[8]; W32(ea,c->r[31]); c->r[3]=ea;} // 800CA28C
  c->r[9]=c->r[5]+0x00000006u; // 800CA290
  c->r[15]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CA294
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 800CA298
  W32(c->r[3]+0x00000020u,c->r[31]); // 800CA29C
  c->r[19]=rotl(c->r[18],29)&0x1FFFFFFFu; // 800CA2A0
  c->r[4]=c->r[1]+0x00000010u; // 800CA2A4
  W32(c->r[3]+0x00000040u,c->r[31]); // 800CA2A8
  c->r[3]=rotl(c->r[16],0)&0x00000007u; // 800CA2AC
  c->r[16]=(uint32_t)((int32_t)c->r[17]*(int32_t)24); // 800CA2B0
  c->r[7]=c->r[5]+0x00000007u; // 800CA2B4
  {uint32_t ea=c->r[4]+c->r[15]; W32(ea,c->r[31]); c->r[4]=ea;} // 800CA2B8
  c->r[15]=c->r[1]+0x00000010u; // 800CA2BC
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 800CA2C0
  W32(c->r[4]+0x00000020u,c->r[31]); // 800CA2C4
  c->r[3]=c->r[3]+c->r[16]; // 800CA2C8
  c->r[17]=rotl(c->r[18],0)&0x00000007u; // 800CA2CC
  c->r[16]=(uint32_t)((int32_t)c->r[19]*(int32_t)24); // 800CA2D0
  W32(c->r[4]+0x00000040u,c->r[31]); // 800CA2D4
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CA2D8
  c->r[3]=c->r[15]|c->r[15]; // 800CA2DC
  {uint32_t ea=c->r[15]+c->r[4]; W32(ea,c->r[31]); c->r[15]=ea;} // 800CA2E0
  c->r[16]=c->r[17]+c->r[16]; // 800CA2E4
  W32(c->r[15]+0x00000020u,c->r[31]); // 800CA2E8
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)24); // 800CA2EC
  c->r[12]=rotl(c->r[12],0)&0x00000007u; // 800CA2F0
  c->r[16]=rotl(c->r[16],2)&0xFFFFFFFCu; // 800CA2F4
  W32(c->r[15]+0x00000040u,c->r[31]); // 800CA2F8
  c->r[4]=c->r[3]|c->r[3]; // 800CA2FC
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 800CA300
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 800CA304
  {uint32_t ea=c->r[3]+c->r[16]; W32(ea,c->r[31]); c->r[3]=ea;} // 800CA308
  c->r[11]=c->r[12]+c->r[11]; // 800CA30C
  W32(c->r[3]+0x00000020u,c->r[31]); // 800CA310
  c->r[7]=rotl(c->r[7],0)&0x00000007u; // 800CA314
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800CA318
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800CA31C
  W32(c->r[3]+0x00000040u,c->r[31]); // 800CA320
  c->r[8]=c->r[9]+c->r[8]; // 800CA324
  {uint32_t ea=c->r[4]+c->r[11]; W32(ea,c->r[31]); c->r[4]=ea;} // 800CA328
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800CA32C
  c->r[8]=c->r[1]+0x00000010u; // 800CA330
  c->r[0]=c->r[7]+c->r[0]; // 800CA334
  W32(c->r[4]+0x00000020u,c->r[31]); // 800CA338
  c->r[8]=c->r[8]+c->r[3]; // 800CA33C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CA340
  c->r[3]=c->r[1]+0x00000010u; // 800CA344
  W32(c->r[4]+0x00000040u,c->r[31]); // 800CA348
  c->r[6]=c->r[6]+0x00000018u; // 800CA34C
  c->r[5]=c->r[5]+0x00000008u; // 800CA350
  W32(c->r[8]+0x00000000u,c->r[31]); // 800CA354
  W32(c->r[8]+0x00000020u,c->r[31]); // 800CA358
  W32(c->r[8]+0x00000040u,c->r[31]); // 800CA35C
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[31]); c->r[3]=ea;} // 800CA360
  W32(c->r[3]+0x00000020u,c->r[31]); // 800CA364
  W32(c->r[3]+0x00000040u,c->r[31]); // 800CA368
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA228; } // 800CA36C
  c->r[3]=c->r[10]|c->r[10]; // 800CA370
  c->r[4]=c->r[1]+0x00000010u; // 800CA374
  c->r[7]=c->r[1]+0x0000000Cu; // 800CA378
  c->r[5]=0u+0x00000000u; // 800CA37C
  c->r[6]=0u+0x00000006u; // 800CA380
  c->lr=0x800CA388u; f_800CB810(c); // 800CA384
  c->r[10]=c->r[3]|c->r[3]; // 800CA388
  c->r[7]=0u+0x00000000u; // 800CA38C
  c->r[3]=0u+0x00000000u; // 800CA390
L_800CA394:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 800CA394
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 800CA398
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800CA39C
  c->r[5]=c->r[1]+0x00000010u; // 800CA3A0
  c->r[4]=c->r[28]|c->r[28]; // 800CA3A4
  c->r[8]=0u+0x00000000u; // 800CA3A8
  c->r[0]=c->r[6]+c->r[0]; // 800CA3AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CA3B0
  c->r[5]=c->r[5]+c->r[0]; // 800CA3B4
  c->ctr=c->r[23]; // 800CA3B8
L_800CA3BC:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 800CA3BC
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 800CA3C0
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 800CA3C4
  c->r[6]=R32(c->r[5]+c->r[6]); // 800CA3C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CA3CC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 800CA3D0
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 800CA3D4
  if (crb(c,2)) { goto L_800CA458; } // 800CA3D8
  c->r[6]=R8(c->r[25]+0x00000000u); // 800CA3DC
  c->r[0]=c->r[8]+c->r[3]; // 800CA3E0
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CA3E4
  c->r[11]=c->r[20]+0xFFFF8081u; // 800CA3E8
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 800CA3EC
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800CA3F0
  c->r[6]=c->r[29]+c->r[12]; // 800CA3F4
  c->r[0]=c->r[21]+0xFFFF8889u; // 800CA3F8
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 800CA3FC
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 800CA400
  c->r[9]=c->r[11]+c->r[9]; // 800CA404
  c->r[9]=sraw(c,c->r[9],7); // 800CA408
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 800CA40C
  c->r[9]=c->r[9]+c->r[11]; // 800CA410
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 800CA414
  c->r[0]=c->r[0]+c->r[9]; // 800CA418
  c->r[0]=sraw(c,c->r[0],3); // 800CA41C
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 800CA420
  c->r[9]=c->r[0]+c->r[9]; // 800CA424
  c->r[0]=c->r[9]+0x00000010u; // 800CA428
  W8(c->r[29]+c->r[12],c->r[0]); // 800CA42C
  if (crb(c,2)) { goto L_800CA448; } // 800CA430
  c->r[0]=R8(c->r[25]+0x00000001u); // 800CA434
  W8(c->r[6]+0xFFFFFFFFu,c->r[0]); // 800CA438
  c->r[0]=R8(c->r[25]+0x00000002u); // 800CA43C
  W8(c->r[6]+0x00000001u,c->r[0]); // 800CA440
  goto L_800CA458; // 800CA444
L_800CA448:;
  c->r[0]=R8(c->r[25]+0x00000002u); // 800CA448
  W8(c->r[6]+0xFFFFFFFFu,c->r[0]); // 800CA44C
  c->r[0]=R8(c->r[25]+0x00000001u); // 800CA450
  W8(c->r[6]+0x00000001u,c->r[0]); // 800CA454
L_800CA458:;
  c->r[4]=c->r[4]+0x00000001u; // 800CA458
  c->r[8]=c->r[8]+0x00000001u; // 800CA45C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA3BC; } // 800CA460
  c->r[7]=c->r[7]+0x00000001u; // 800CA464
  c->r[3]=c->r[3]+c->r[24]; // 800CA468
  cmpu(c,0,c->r[7],0x00000018u); // 800CA46C
  if (crb(c,0)) { IRQCHK(c); goto L_800CA394; } // 800CA470
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CA474
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800CA478
  c->r[28]=c->r[28]+c->r[3]; // 800CA47C
  c->r[29]=c->r[29]+c->r[0]; // 800CA480
L_800CA484:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 800CA484
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800CA488
  if (!crb(c,2)) { IRQCHK(c); goto L_800CA1F4; } // 800CA48C
L_800CA490:;
  c->r[11]=c->r[1]+0x00000180u; // 800CA490
  c->lr=0x800CA498u; f_802178C4(c); // 800CA494
  c->r[0]=R32(c->r[1]+0x00000184u); // 800CA498
  c->lr=c->r[0]; // 800CA49C
  c->r[1]=c->r[1]+0x00000180u; // 800CA4A0
  return; // 800CA4A4
}

// ConfigureVideo
void f_800CA4B0(Ctx* __restrict c) {
  trace_call(0x800CA4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA4B0
  c->r[0]=c->lr; // 800CA4B4
  c->r[6]=0u+0x000001E0u; // 800CA4B8
  c->r[5]=0u+0x00000028u; // 800CA4BC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CA4C0
  c->r[0]=0u+0x00000280u; // 800CA4C4
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 800CA4C8
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 800CA4CC
  W16(c->r[1]+0x00000010u,c->r[4]); // 800CA4D0
  W16(c->r[1]+0x00000012u,c->r[5]); // 800CA4D4
  W16(c->r[1]+0x00000016u,c->r[0]); // 800CA4D8
  W16(c->r[1]+0x00000018u,c->r[4]); // 800CA4DC
  c->lr=0x800CA4E4u; f_800D9410(c); // 800CA4E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CA4E4
  if (crb(c,2)) { goto L_800CA508; } // 800CA4E8
  cmpu(c,0,c->r[3],0x00000002u); // 800CA4EC
  if (crb(c,2)) { goto L_800CA508; } // 800CA4F0
  cmpu(c,0,c->r[3],0x00000005u); // 800CA4F4
  if (crb(c,2)) { goto L_800CA548; } // 800CA4F8
  cmpu(c,0,c->r[3],0x00000001u); // 800CA4FC
  if (crb(c,2)) { goto L_800CA58C; } // 800CA500
  goto L_800CA5A4; // 800CA504
L_800CA508:;
  c->r[3]=0u+0xCC000000u; // 800CA508
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 800CA50C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800CA510
  if (crb(c,2)) { goto L_800CA530; } // 800CA514
  c->r[0]=0u+0x00000000u; // 800CA518
  c->r[3]=0u+0x00000002u; // 800CA51C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA520
  W16(c->r[1]+0x00000014u,c->r[0]); // 800CA524
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA528
  goto L_800CA5A4; // 800CA52C
L_800CA530:;
  c->r[3]=0u+0x00000000u; // 800CA530
  c->r[0]=0u+0x00000001u; // 800CA534
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA538
  W16(c->r[1]+0x00000014u,c->r[3]); // 800CA53C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA540
  goto L_800CA5A4; // 800CA544
L_800CA548:;
  c->r[3]=0u+0xCC000000u; // 800CA548
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 800CA54C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800CA550
  if (crb(c,2)) { goto L_800CA570; } // 800CA554
  c->r[0]=0u+0x00000000u; // 800CA558
  c->r[3]=0u+0x00000016u; // 800CA55C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA560
  W16(c->r[1]+0x00000014u,c->r[0]); // 800CA564
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA568
  goto L_800CA5A4; // 800CA56C
L_800CA570:;
  c->r[4]=0u+0x00000014u; // 800CA570
  c->r[3]=0u+0x00000000u; // 800CA574
  c->r[0]=0u+0x00000001u; // 800CA578
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CA57C
  W16(c->r[1]+0x00000014u,c->r[3]); // 800CA580
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA584
  goto L_800CA5A4; // 800CA588
L_800CA58C:;
  c->r[4]=0u+0x00000004u; // 800CA58C
  c->r[3]=0u+0x0000002Fu; // 800CA590
  c->r[0]=0u+0x00000001u; // 800CA594
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CA598
  W16(c->r[1]+0x00000014u,c->r[3]); // 800CA59C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CA5A0
L_800CA5A4:;
  c->r[3]=c->r[1]+0x00000008u; // 800CA5A4
  c->lr=0x800CA5ACu; f_800D8680(c); // 800CA5A8
  c->r[3]=0u+0x00000000u; // 800CA5AC
  c->r[4]=0u+0x00000000u; // 800CA5B0
  c->r[5]=0u+0x00000280u; // 800CA5B4
  c->r[6]=0u+0x000001E0u; // 800CA5B8
  c->lr=0x800CA5C0u; f_800D8D50(c); // 800CA5BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CA5C0
  c->lr=c->r[0]; // 800CA5C4
  c->r[1]=c->r[1]+0x00000050u; // 800CA5C8
  return; // 800CA5CC
}

// OSFatal
void f_800CA5D0(Ctx* __restrict c) {
  trace_call(0x800CA5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA5D0
  c->r[0]=c->lr; // 800CA5D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CA5D8
  c->r[11]=c->r[1]+0x00000030u; // 800CA5DC
  c->lr=0x800CA5E4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CA5E0
  c->r[27]=c->r[3]|c->r[3]; // 800CA5E4
  c->r[28]=c->r[4]|c->r[4]; // 800CA5E8
  c->r[29]=c->r[5]|c->r[5]; // 800CA5EC
  c->lr=0x800CA5F4u; f_800CBAA0(c); // 800CA5F0
  c->lr=0x800CA5F8u; f_800CE9A0(c); // 800CA5F4
  c->r[24]=0u+0x802F0000u; // 800CA5F8
  c->r[3]=c->r[24]+0xFFFF9400u; // 800CA5FC
  c->lr=0x800CA604u; f_800C8020(c); // 800CA600
  c->r[3]=c->r[24]+0xFFFF9400u; // 800CA604
  c->lr=0x800CA60Cu; f_800C7DE0(c); // 800CA608
  c->lr=0x800CA610u; f_800C7660(c); // 800CA60C
  c->lr=0x800CA614u; f_800D7BA0(c); // 800CA610
  c->r[3]=0u+0x00000080u; // 800CA614
  c->lr=0x800CA61Cu; f_800CBEF0(c); // 800CA618
  c->r[3]=0u+0x00000001u; // 800CA61C
  c->lr=0x800CA624u; f_800D9250(c); // 800CA620
  c->lr=0x800CA628u; f_800D90B0(c); // 800CA624
  c->r[3]=0u+0x00000000u; // 800CA628
  c->lr=0x800CA630u; f_800D77E0(c); // 800CA62C
  c->r[3]=0u+0x00000000u; // 800CA630
  c->lr=0x800CA638u; f_800D7830(c); // 800CA634
  c->lr=0x800CA63Cu; f_800CBAC0(c); // 800CA638
  c->lr=0x800CA640u; f_800D92D0(c); // 800CA63C
  c->r[24]=c->r[3]|c->r[3]; // 800CA640
L_800CA644:;
  c->lr=0x800CA648u; f_800D92D0(c); // 800CA644
  c->r[0]=c->r[3]-c->r[24]; // 800CA648
  cmps(c,0,(int32_t)c->r[0],1); // 800CA64C
  if (crb(c,0)) { IRQCHK(c); goto L_800CA644; } // 800CA650
  c->lr=0x800CA658u; f_800D0510(c); // 800CA654
  c->r[5]=0u+0x10620000u; // 800CA658
  c->r[30]=c->r[4]|c->r[4]; // 800CA65C
  c->r[31]=c->r[3]|c->r[3]; // 800CA660
  c->r[25]=0u+0x80000000u; // 800CA664
  c->r[24]=c->r[5]+0x00004DD3u; // 800CA668
  c->r[26]=0u+0x00000000u; // 800CA66C
L_800CA670:;
  c->r[3]=0u+0x00000000u; // 800CA670
  c->r[4]=0u+0x00000000u; // 800CA674
  c->lr=0x800CA67Cu; f_800CD270(c); // 800CA678
  cmps(c,0,(int32_t)c->r[3],0); // 800CA67C
  if (!crb(c,2)) { goto L_800CA6C0; } // 800CA680
  c->lr=0x800CA688u; f_800D0510(c); // 800CA684
  c->r[0]=R32(c->r[25]+0x000000F8u); // 800CA688
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 800CA68C
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 800CA690
  c->r[4]=c->r[26]^0x80000000u; // 800CA694
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800CA698
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 800CA69C
  c->r[0]=c->r[5]^0x80000000u; // 800CA6A0
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 800CA6A4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 800CA6A8
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 800CA6AC
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800CA6B0
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800CA6B4
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800CA6B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CA670; } // 800CA6BC
L_800CA6C0:;
  c->lr=0x800CA6C4u; f_800CBAA0(c); // 800CA6C0
  c->r[3]=0u+0x00000001u; // 800CA6C4
  c->r[4]=0u+0x00000000u; // 800CA6C8
  c->lr=0x800CA6D0u; f_800CD270(c); // 800CA6CC
  c->r[3]=0u+0x00000000u; // 800CA6D0
  c->r[4]=0u+0x00000000u; // 800CA6D4
  c->lr=0x800CA6DCu; f_800D4020(c); // 800CA6D8
  c->r[3]=0u+0x00000002u; // 800CA6DC
  c->r[4]=0u+0x00000000u; // 800CA6E0
  c->lr=0x800CA6E8u; f_800D4020(c); // 800CA6E4
  goto L_800CA704; // 800CA6E8
L_800CA6EC:;
  c->r[3]=0u+0x00000000u; // 800CA6EC
  c->lr=0x800CA6F4u; f_800D3DA0(c); // 800CA6F0
  c->r[3]=0u+0x00000000u; // 800CA6F4
  c->lr=0x800CA6FCu; f_800D4540(c); // 800CA6F8
  c->r[3]=0u+0x00000000u; // 800CA6FC
  c->lr=0x800CA704u; f_800D4CC0(c); // 800CA700
L_800CA704:;
  c->r[3]=0u+0x00000000u; // 800CA704
  c->r[4]=0u+0x00000001u; // 800CA708
  c->r[5]=0u+0x00000000u; // 800CA70C
  c->lr=0x800CA714u; f_800D4BC0(c); // 800CA710
  cmps(c,0,(int32_t)c->r[3],0); // 800CA714
  if (crb(c,2)) { IRQCHK(c); goto L_800CA6EC; } // 800CA718
  c->r[3]=0u+0x00000000u; // 800CA71C
  c->lr=0x800CA724u; f_800D4CC0(c); // 800CA720
  c->r[3]=0u+0xCD000000u; // 800CA724
L_800CA728:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800CA728
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CA72C
  cmpu(c,0,c->r[0],0x00000001u); // 800CA730
  if (crb(c,2)) { IRQCHK(c); goto L_800CA728; } // 800CA734
  c->r[4]=0u+0x800C0000u; // 800CA738
  c->r[3]=0u+0x00000008u; // 800CA73C
  c->r[4]=c->r[4]+0x000064E0u; // 800CA740
  c->lr=0x800CA748u; f_800C6410(c); // 800CA744
  c->lr=0x800CA74Cu; f_800DE970(c); // 800CA748
  c->r[3]=0u+0x81400000u; // 800CA74C
  c->lr=0x800CA754u; f_800C7220(c); // 800CA750
  c->r[4]=0u+0x80000000u; // 800CA754
  c->r[3]=R32(c->r[4]+0x00000038u); // 800CA758
  cmps(c,0,(int32_t)c->r[3],0); // 800CA75C
  if (!crb(c,2)) { goto L_800CA770; } // 800CA760
  c->r[3]=R32(c->r[4]+0x00003110u); // 800CA764
  c->lr=0x800CA76Cu; f_800C71F0(c); // 800CA768
  goto L_800CA774; // 800CA76C
L_800CA770:;
  c->lr=0x800CA774u; f_800C71F0(c); // 800CA770
L_800CA774:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800CA774
  c->r[3]=0u+0x802F0000u; // 800CA778
  {uint32_t ea=c->r[3]+0xFFFF96C8u; W32(ea,c->r[0]); c->r[3]=ea;} // 800CA77C
  c->r[0]=R32(c->r[28]+0x00000000u); // 800CA780
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CA784
  W32(c->r[3]+0x00000008u,c->r[29]); // 800CA788
  c->lr=0x800CA790u; f_800C7190(c); // 800CA78C
  c->r[5]=0u+0x800D0000u; // 800CA790
  c->r[4]=c->r[3]|c->r[3]; // 800CA794
  c->r[3]=c->r[5]+0xFFFFA7C0u; // 800CA798
  c->lr=0x800CA7A0u; f_800C7FC0(c); // 800CA79C
  c->r[11]=c->r[1]+0x00000030u; // 800CA7A0
  c->lr=0x800CA7A8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CA7A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CA7A8
  c->lr=c->r[0]; // 800CA7AC
  c->r[1]=c->r[1]+0x00000030u; // 800CA7B0
  return; // 800CA7B4
}

// Halt
void f_800CA7C0(Ctx* __restrict c) {
  trace_call(0x800CA7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA7C0
  c->r[0]=c->lr; // 800CA7C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CA7C8
  c->r[0]=0u+0x43300000u; // 800CA7CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CA7D0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CA7D4
  W32(c->r[1]+0x00000044u,c->r[29]); // 800CA7D8
  W32(c->r[1]+0x00000040u,c->r[28]); // 800CA7DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CA7E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CA7E4
  c->lr=0x800CA7ECu; f_800CBAC0(c); // 800CA7E8
  c->r[29]=0u+0x802F0000u; // 800CA7EC
  c->r[29]=c->r[29]+0xFFFF96C8u; // 800CA7F0
  c->r[28]=R32(c->r[29]+0x00000008u); // 800CA7F4
  c->r[3]=c->r[28]|c->r[28]; // 800CA7F8
  c->lr=0x800CA800u; f_80216B70(c); // 800CA7FC
  c->r[30]=c->r[3]+0x00000001u; // 800CA800
  c->r[4]=0u+0x00000020u; // 800CA804
  c->r[3]=c->r[30]|c->r[30]; // 800CA808
  c->lr=0x800CA810u; f_800C7230(c); // 800CA80C
  c->r[4]=c->r[28]|c->r[28]; // 800CA810
  c->r[5]=c->r[30]|c->r[30]; // 800CA814
  c->lr=0x800CA81Cu; f_8021BF68(c); // 800CA818
  W32(c->r[29]+0x00000008u,c->r[3]); // 800CA81C
  c->r[3]=0u+0x000A0000u; // 800CA820
  c->r[3]=c->r[3]+0x00001004u; // 800CA824
  c->r[4]=0u+0x00000020u; // 800CA828
  c->lr=0x800CA830u; f_800C7230(c); // 800CA82C
  c->r[31]=c->r[3]|c->r[3]; // 800CA830
  c->lr=0x800CA838u; f_800C71C0(c); // 800CA834
  c->r[4]=c->r[3]|c->r[3]; // 800CA838
  c->r[3]=c->r[31]|c->r[31]; // 800CA83C
  c->lr=0x800CA844u; f_800CB430(c); // 800CA840
  c->r[3]=0u+0x00090000u; // 800CA844
  c->r[4]=0u+0x00000020u; // 800CA848
  c->r[3]=c->r[3]+0x00006000u; // 800CA84C
  c->lr=0x800CA854u; f_800C7230(c); // 800CA850
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CA854
  c->r[30]=c->r[3]|c->r[3]; // 800CA858
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CA85C
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[0]=RF64(ea);} // 800CA860
  c->r[4]=R8(c->r[1]+0x0000001Au); // 800CA864
  W32(c->r[1]+0x00000024u,c->r[4]); // 800CA868
  c->r[0]=R8(c->r[1]+0x00000018u); // 800CA86C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CA870
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800CA874
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CA878
  c->r[3]=R8(c->r[1]+0x00000019u); // 800CA87C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 800CA880
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CA884
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 800CA888
  {uint32_t ea=c->r[2]+0xFFFF9A0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA88C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CA890
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 800CA894
  {uint32_t ea=c->r[2]+0xFFFF9A08u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA898
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800CA89C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800CA8A0
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA8A4
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[6]); // 800CA8A8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CA8AC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800CA8B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA8B4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800CA8B8
  {uint32_t ea=c->r[2]+0xFFFF9A18u; c->f[9]=c->ps1[9]=RF32(ea);} // 800CA8BC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CA8C0
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[3]); // 800CA8C4
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800CA8C8
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 800CA8CC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CA8D0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 800CA8D4
  {uint32_t ea=c->r[2]+0xFFFF9A1Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800CA8D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA8DC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 800CA8E0
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA8E4
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[6]); // 800CA8E8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CA8EC
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 800CA8F0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800CA8F4
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 800CA8F8
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA8FC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CA900
  W32(c->r[1]+0x00000024u,c->r[4]); // 800CA904
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800CA908
  {uint32_t ea=c->r[2]+0xFFFF9A28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA90C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800CA910
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[5]); // 800CA914
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 800CA918
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[9]=c->ps1[9]=RF32(ea);} // 800CA91C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800CA920
  {uint32_t ea=c->r[2]+0xFFFF9A00u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CA924
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800CA928
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[10]); // 800CA92C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 800CA930
  {uint32_t ea=c->r[2]+0xFFFF9A14u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA934
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CA938
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[6]); // 800CA93C
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800CA940
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[7]); // 800CA944
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800CA948
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800CA94C
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 800CA950
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800CA954
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[1]); // 800CA958
  fcmp(c,0,c->f[5],c->f[6]); // 800CA95C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800CA960
  if (!crb(c,1)) { goto L_800CA96C; } // 800CA964
  goto L_800CA980; // 800CA968
L_800CA96C:;
  fcmp(c,0,c->f[5],c->f[9]); // 800CA96C
  if (!crb(c,0)) { goto L_800CA978; } // 800CA970
  goto L_800CA97C; // 800CA974
L_800CA978:;
  c->f[9]=c->f[5]; // 800CA978
L_800CA97C:;
  c->f[6]=c->f[9]; // 800CA97C
L_800CA980:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 800CA980
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA984
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CA988
  fcmp(c,0,c->f[2],c->f[3]); // 800CA98C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CA990
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CA994
  if (!crb(c,1)) { goto L_800CA9A0; } // 800CA998
  goto L_800CA9B4; // 800CA99C
L_800CA9A0:;
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA9A0
  fcmp(c,0,c->f[2],c->f[3]); // 800CA9A4
  if (!crb(c,0)) { goto L_800CA9B0; } // 800CA9A8
  goto L_800CA9B4; // 800CA9AC
L_800CA9B0:;
  c->f[3]=c->f[2]; // 800CA9B0
L_800CA9B4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800CA9B4
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA9B8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CA9BC
  fcmp(c,0,c->f[1],c->f[2]); // 800CA9C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CA9C4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800CA9C8
  if (!crb(c,1)) { goto L_800CA9D4; } // 800CA9CC
  goto L_800CA9E8; // 800CA9D0
L_800CA9D4:;
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA9D4
  fcmp(c,0,c->f[1],c->f[2]); // 800CA9D8
  if (!crb(c,0)) { goto L_800CA9E4; } // 800CA9DC
  goto L_800CA9E8; // 800CA9E0
L_800CA9E4:;
  c->f[2]=c->f[1]; // 800CA9E4
L_800CA9E8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CA9E8
  c->r[0]=0u+0x00000000u; // 800CA9EC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800CA9F0
  c->r[4]=c->r[30]|c->r[30]; // 800CA9F4
  c->r[5]=0u+0x00000000u; // 800CA9F8
  c->r[0]=0u+0x00000014u; // 800CA9FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CAA00
  c->r[3]=R32(c->r[1]+0x00000034u); // 800CAA04
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800CAA08
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CAA0C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800CAA10
  c->r[6]=R8(c->r[1]+0x0000001Du); // 800CAA14
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 800CAA18
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 800CAA1C
L_800CAA20:;
  c->ctr=c->r[0]; // 800CAA20
L_800CAA24:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800CAA24
  W8(c->r[4]+0x00000001u,c->r[6]); // 800CAA28
  W8(c->r[4]+0x00000002u,c->r[3]); // 800CAA2C
  W8(c->r[4]+0x00000003u,c->r[7]); // 800CAA30
  W8(c->r[4]+0x00000004u,c->r[3]); // 800CAA34
  W8(c->r[4]+0x00000005u,c->r[6]); // 800CAA38
  W8(c->r[4]+0x00000006u,c->r[3]); // 800CAA3C
  W8(c->r[4]+0x00000007u,c->r[7]); // 800CAA40
  W8(c->r[4]+0x00000008u,c->r[3]); // 800CAA44
  W8(c->r[4]+0x00000009u,c->r[6]); // 800CAA48
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800CAA4C
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 800CAA50
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800CAA54
  W8(c->r[4]+0x0000000Du,c->r[6]); // 800CAA58
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800CAA5C
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 800CAA60
  W8(c->r[4]+0x00000010u,c->r[3]); // 800CAA64
  W8(c->r[4]+0x00000011u,c->r[6]); // 800CAA68
  W8(c->r[4]+0x00000012u,c->r[3]); // 800CAA6C
  W8(c->r[4]+0x00000013u,c->r[7]); // 800CAA70
  W8(c->r[4]+0x00000014u,c->r[3]); // 800CAA74
  W8(c->r[4]+0x00000015u,c->r[6]); // 800CAA78
  W8(c->r[4]+0x00000016u,c->r[3]); // 800CAA7C
  W8(c->r[4]+0x00000017u,c->r[7]); // 800CAA80
  W8(c->r[4]+0x00000018u,c->r[3]); // 800CAA84
  W8(c->r[4]+0x00000019u,c->r[6]); // 800CAA88
  W8(c->r[4]+0x0000001Au,c->r[3]); // 800CAA8C
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 800CAA90
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 800CAA94
  W8(c->r[4]+0x0000001Du,c->r[6]); // 800CAA98
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 800CAA9C
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 800CAAA0
  W8(c->r[4]+0x00000020u,c->r[3]); // 800CAAA4
  W8(c->r[4]+0x00000021u,c->r[6]); // 800CAAA8
  W8(c->r[4]+0x00000022u,c->r[3]); // 800CAAAC
  W8(c->r[4]+0x00000023u,c->r[7]); // 800CAAB0
  W8(c->r[4]+0x00000024u,c->r[3]); // 800CAAB4
  W8(c->r[4]+0x00000025u,c->r[6]); // 800CAAB8
  W8(c->r[4]+0x00000026u,c->r[3]); // 800CAABC
  W8(c->r[4]+0x00000027u,c->r[7]); // 800CAAC0
  W8(c->r[4]+0x00000028u,c->r[3]); // 800CAAC4
  W8(c->r[4]+0x00000029u,c->r[6]); // 800CAAC8
  W8(c->r[4]+0x0000002Au,c->r[3]); // 800CAACC
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 800CAAD0
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 800CAAD4
  W8(c->r[4]+0x0000002Du,c->r[6]); // 800CAAD8
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 800CAADC
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 800CAAE0
  W8(c->r[4]+0x00000030u,c->r[3]); // 800CAAE4
  W8(c->r[4]+0x00000031u,c->r[6]); // 800CAAE8
  W8(c->r[4]+0x00000032u,c->r[3]); // 800CAAEC
  W8(c->r[4]+0x00000033u,c->r[7]); // 800CAAF0
  W8(c->r[4]+0x00000034u,c->r[3]); // 800CAAF4
  W8(c->r[4]+0x00000035u,c->r[6]); // 800CAAF8
  W8(c->r[4]+0x00000036u,c->r[3]); // 800CAAFC
  W8(c->r[4]+0x00000037u,c->r[7]); // 800CAB00
  W8(c->r[4]+0x00000038u,c->r[3]); // 800CAB04
  W8(c->r[4]+0x00000039u,c->r[6]); // 800CAB08
  W8(c->r[4]+0x0000003Au,c->r[3]); // 800CAB0C
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 800CAB10
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 800CAB14
  W8(c->r[4]+0x0000003Du,c->r[6]); // 800CAB18
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 800CAB1C
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 800CAB20
  c->r[4]=c->r[4]+0x00000040u; // 800CAB24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAA24; } // 800CAB28
  c->r[5]=c->r[5]+0x00000001u; // 800CAB2C
  cmps(c,0,(int32_t)c->r[5],480); // 800CAB30
  if (crb(c,0)) { IRQCHK(c); goto L_800CAA20; } // 800CAB34
  c->r[3]=c->r[30]|c->r[30]; // 800CAB38
  c->lr=0x800CAB40u; f_800D91D0(c); // 800CAB3C
  c->r[3]=0u+0x00000280u; // 800CAB40
  c->r[4]=0u+0x000001E0u; // 800CAB44
  c->lr=0x800CAB4Cu; f_800CA4B0(c); // 800CAB48
  c->lr=0x800CAB50u; f_800D90B0(c); // 800CAB4C
  c->lr=0x800CAB54u; f_800D92D0(c); // 800CAB50
  c->r[28]=c->r[3]|c->r[3]; // 800CAB54
L_800CAB58:;
  c->lr=0x800CAB5Cu; f_800D92D0(c); // 800CAB58
  c->r[0]=c->r[3]-c->r[28]; // 800CAB5C
  cmps(c,0,(int32_t)c->r[0],2); // 800CAB60
  if (crb(c,0)) { IRQCHK(c); goto L_800CAB58; } // 800CAB64
  c->r[0]=R32(c->r[29]+0x00000000u); // 800CAB68
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CAB6C
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[0]=RF64(ea);} // 800CAB70
  c->r[4]=R8(c->r[1]+0x00000012u); // 800CAB74
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800CAB78
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CAB7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAB80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800CAB84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CAB88
  c->r[3]=R8(c->r[1]+0x00000011u); // 800CAB8C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 800CAB90
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800CAB94
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 800CAB98
  {uint32_t ea=c->r[2]+0xFFFF9A0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAB9C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CABA0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 800CABA4
  {uint32_t ea=c->r[2]+0xFFFF9A08u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CABA8
  W32(c->r[1]+0x00000024u,c->r[4]); // 800CABAC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800CABB0
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CABB4
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[6]); // 800CABB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CABBC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800CABC0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CABC4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800CABC8
  {uint32_t ea=c->r[2]+0xFFFF9A18u; c->f[9]=c->ps1[9]=RF32(ea);} // 800CABCC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CABD0
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[3]); // 800CABD4
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CABD8
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 800CABDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CABE0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 800CABE4
  {uint32_t ea=c->r[2]+0xFFFF9A1Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800CABE8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CABEC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 800CABF0
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CABF4
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[6]); // 800CABF8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800CABFC
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 800CAC00
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CAC04
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 800CAC08
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAC0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CAC10
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800CAC14
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800CAC18
  {uint32_t ea=c->r[2]+0xFFFF9A28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAC1C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800CAC20
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[5]); // 800CAC24
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 800CAC28
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[9]=c->ps1[9]=RF32(ea);} // 800CAC2C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800CAC30
  {uint32_t ea=c->r[2]+0xFFFF9A00u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CAC34
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800CAC38
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[10]); // 800CAC3C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 800CAC40
  {uint32_t ea=c->r[2]+0xFFFF9A14u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAC44
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CAC48
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[6]); // 800CAC4C
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800CAC50
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[7]); // 800CAC54
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800CAC58
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800CAC5C
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 800CAC60
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800CAC64
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[1]); // 800CAC68
  fcmp(c,0,c->f[5],c->f[6]); // 800CAC6C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800CAC70
  if (!crb(c,1)) { goto L_800CAC7C; } // 800CAC74
  goto L_800CAC90; // 800CAC78
L_800CAC7C:;
  fcmp(c,0,c->f[5],c->f[9]); // 800CAC7C
  if (!crb(c,0)) { goto L_800CAC88; } // 800CAC80
  goto L_800CAC8C; // 800CAC84
L_800CAC88:;
  c->f[9]=c->f[5]; // 800CAC88
L_800CAC8C:;
  c->f[6]=c->f[9]; // 800CAC8C
L_800CAC90:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 800CAC90
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAC94
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CAC98
  fcmp(c,0,c->f[2],c->f[3]); // 800CAC9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CACA0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800CACA4
  if (!crb(c,1)) { goto L_800CACB0; } // 800CACA8
  goto L_800CACC4; // 800CACAC
L_800CACB0:;
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CACB0
  fcmp(c,0,c->f[2],c->f[3]); // 800CACB4
  if (!crb(c,0)) { goto L_800CACC0; } // 800CACB8
  goto L_800CACC4; // 800CACBC
L_800CACC0:;
  c->f[3]=c->f[2]; // 800CACC0
L_800CACC4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800CACC4
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CACC8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CACCC
  fcmp(c,0,c->f[1],c->f[2]); // 800CACD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CACD4
  W8(c->r[1]+0x00000009u,c->r[0]); // 800CACD8
  if (!crb(c,1)) { goto L_800CACE4; } // 800CACDC
  goto L_800CACF8; // 800CACE0
L_800CACE4:;
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CACE4
  fcmp(c,0,c->f[1],c->f[2]); // 800CACE8
  if (!crb(c,0)) { goto L_800CACF4; } // 800CACEC
  goto L_800CACF8; // 800CACF0
L_800CACF4:;
  c->f[2]=c->f[1]; // 800CACF4
L_800CACF8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CACF8
  c->r[0]=0u+0x00000000u; // 800CACFC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CAD00
  c->r[3]=c->r[30]|c->r[30]; // 800CAD04
  c->r[10]=R32(c->r[29]+0x00000008u); // 800CAD08
  c->r[6]=c->r[1]+0x00000014u; // 800CAD0C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CAD10
  c->r[4]=0u+0x00000280u; // 800CAD14
  c->r[5]=0u+0x000001E0u; // 800CAD18
  c->r[7]=0u+0x00000030u; // 800CAD1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CAD20
  c->r[8]=0u+0x00000064u; // 800CAD24
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CAD28
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CAD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAD30
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 800CAD34
  c->lr=0x800CAD3Cu; f_800CA180(c); // 800CAD38
  c->r[4]=0u+0x00090000u; // 800CAD3C
  c->r[3]=c->r[30]|c->r[30]; // 800CAD40
  c->r[4]=c->r[4]+0x00006000u; // 800CAD44
  c->lr=0x800CAD4Cu; f_800C7780(c); // 800CAD48
  c->r[3]=0u+0x00000000u; // 800CAD4C
  c->lr=0x800CAD54u; f_800D9250(c); // 800CAD50
  c->lr=0x800CAD58u; f_800D90B0(c); // 800CAD54
  c->lr=0x800CAD5Cu; f_800D92D0(c); // 800CAD58
  c->r[30]=c->r[3]|c->r[3]; // 800CAD5C
L_800CAD60:;
  c->lr=0x800CAD64u; f_800D92D0(c); // 800CAD60
  c->r[0]=c->r[3]-c->r[30]; // 800CAD64
  cmps(c,0,(int32_t)c->r[0],1); // 800CAD68
  if (crb(c,0)) { IRQCHK(c); goto L_800CAD60; } // 800CAD6C
  c->lr=0x800CAD74u; f_800CBAA0(c); // 800CAD70
  c->r[4]=R32(c->r[29]+0x00000008u); // 800CAD74
  c->r[3]=c->r[13]+0xFFFF8F38u; // 800CAD78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CAD7C
  c->lr=0x800CAD84u; f_800C8450(c); // 800CAD80
  c->lr=0x800CAD88u; f_800C4FA0(c); // 800CAD84
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CAD88
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CAD8C
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CAD90
  c->r[29]=R32(c->r[1]+0x00000044u); // 800CAD94
  c->r[28]=R32(c->r[1]+0x00000040u); // 800CAD98
  c->lr=c->r[0]; // 800CAD9C
  c->r[1]=c->r[1]+0x00000050u; // 800CADA0
  return; // 800CADA4
}

// GetFontCode
void f_800CADB0(Ctx* __restrict c) {
  trace_call(0x800CADB0u);
  cmpu(c,0,c->r[3],0x00000001u); // 800CADB0
  if (!crb(c,2)) { goto L_800CAEC4; } // 800CADB4
  cmpu(c,0,c->r[4],0x00000020u); // 800CADB8
  if (crb(c,0)) { goto L_800CADE0; } // 800CADBC
  cmpu(c,0,c->r[4],0x000000DFu); // 800CADC0
  if (crb(c,1)) { goto L_800CADE0; } // 800CADC4
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 800CADC8
  c->r[3]=0u+0x802A0000u; // 800CADCC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CADD0
  c->r[3]=c->r[3]+0x00000728u; // 800CADD4
  c->r[3]=R16(c->r[3]+c->r[0]); // 800CADD8
  return; // 800CADDC
L_800CADE0:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 800CADE0
  if (!crb(c,1)) { goto L_800CAE4C; } // 800CADE4
  cmpu(c,0,c->r[4],0x00009872u); // 800CADE8
  if (crb(c,1)) { goto L_800CAE4C; } // 800CADEC
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 800CADF0
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800CADF4
  c->r[3]=c->r[3]+0xFFFFFF78u; // 800CADF8
  c->r[0]=0u+0x00000000u; // 800CADFC
  cmpu(c,0,c->r[4],0x00000040u); // 800CAE00
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 800CAE04
  if (crb(c,0)) { goto L_800CAE20; } // 800CAE08
  cmpu(c,0,c->r[4],0x000000FCu); // 800CAE0C
  if (crb(c,1)) { goto L_800CAE20; } // 800CAE10
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CAE14
  if (crb(c,2)) { goto L_800CAE20; } // 800CAE18
  c->r[0]=0u+0x00000001u; // 800CAE1C
L_800CAE20:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CAE20
  if (!crb(c,2)) { goto L_800CAE30; } // 800CAE24
  c->r[3]=0u+0x00000000u; // 800CAE28
  return; // 800CAE2C
L_800CAE30:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800CAE30
  cmps(c,0,(int32_t)c->r[4],64); // 800CAE34
  if (crb(c,0)) { goto L_800CAE40; } // 800CAE38
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CAE3C
L_800CAE40:;
  c->r[3]=c->r[3]+c->r[4]; // 800CAE40
  c->r[3]=c->r[3]+0x000002BEu; // 800CAE44
  return; // 800CAE48
L_800CAE4C:;
  cmpu(c,0,c->r[4],0x00008140u); // 800CAE4C
  if (crb(c,0)) { goto L_800CAEE0; } // 800CAE50
  cmpu(c,0,c->r[4],0x0000879Eu); // 800CAE54
  if (!crb(c,0)) { goto L_800CAEE0; } // 800CAE58
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 800CAE5C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800CAE60
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 800CAE64
  c->r[0]=0u+0x00000000u; // 800CAE68
  cmpu(c,0,c->r[4],0x00000040u); // 800CAE6C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 800CAE70
  if (crb(c,0)) { goto L_800CAE8C; } // 800CAE74
  cmpu(c,0,c->r[4],0x000000FCu); // 800CAE78
  if (crb(c,1)) { goto L_800CAE8C; } // 800CAE7C
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CAE80
  if (crb(c,2)) { goto L_800CAE8C; } // 800CAE84
  c->r[0]=0u+0x00000001u; // 800CAE88
L_800CAE8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CAE8C
  if (!crb(c,2)) { goto L_800CAE9C; } // 800CAE90
  c->r[3]=0u+0x00000000u; // 800CAE94
  return; // 800CAE98
L_800CAE9C:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800CAE9C
  cmps(c,0,(int32_t)c->r[4],64); // 800CAEA0
  if (crb(c,0)) { goto L_800CAEAC; } // 800CAEA4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CAEA8
L_800CAEAC:;
  c->r[0]=c->r[3]+c->r[4]; // 800CAEAC
  c->r[3]=0u+0x802A0000u; // 800CAEB0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800CAEB4
  c->r[3]=c->r[3]+0x000008A8u; // 800CAEB8
  c->r[3]=R16(c->r[3]+c->r[0]); // 800CAEBC
  return; // 800CAEC0
L_800CAEC4:;
  c->r[3]=c->r[4]+0x00010000u; // 800CAEC4
  c->r[0]=c->r[3]+0xFFFFFFDFu; // 800CAEC8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800CAECC
  cmpu(c,0,c->r[0],0x000000DEu); // 800CAED0
  if (crb(c,1)) { goto L_800CAEE0; } // 800CAED4
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 800CAED8
  return; // 800CAEDC
L_800CAEE0:;
  c->r[3]=0u+0x00000000u; // 800CAEE0
  return; // 800CAEE4
}

// Decode
void f_800CAEF0(Ctx* __restrict c) {
  trace_call(0x800CAEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAEF0
  c->r[0]=c->lr; // 800CAEF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAEF8
  c->r[11]=c->r[1]+0x00000020u; // 800CAEFC
  c->lr=0x800CAF04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CAF00
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800CAF04
  c->r[30]=c->r[3]+0x00000010u; // 800CAF08
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CAF0C
  c->r[8]=0u+0x00000000u; // 800CAF10
  c->r[29]=c->r[3]+c->r[5]; // 800CAF14
  c->r[9]=R32(c->r[3]+0x00000008u); // 800CAF18
  c->r[11]=0u+0x00000000u; // 800CAF1C
  c->r[5]=0u+0x80000000u; // 800CAF20
  c->r[0]=c->r[0]|0x00000000u; // 800CAF24
L_800CAF28:;
  cmps(c,0,(int32_t)c->r[11],0); // 800CAF28
  if (!crb(c,2)) { goto L_800CAF3C; } // 800CAF2C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800CAF30
  c->r[11]=0u+0x00000020u; // 800CAF34
  c->r[30]=c->r[30]+0x00000004u; // 800CAF38
L_800CAF3C:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 800CAF3C
  if (crb(c,2)) { goto L_800CAF58; } // 800CAF40
  c->r[6]=R8(c->r[29]+0x00000000u); // 800CAF44
  c->r[29]=c->r[29]+0x00000001u; // 800CAF48
  W8(c->r[4]+c->r[8],c->r[6]); // 800CAF4C
  c->r[8]=c->r[8]+0x00000001u; // 800CAF50
  goto L_800CB070; // 800CAF54
L_800CAF58:;
  c->r[7]=c->r[3]+c->r[9]; // 800CAF58
  c->r[6]=R8(c->r[3]+c->r[9]); // 800CAF5C
  c->r[7]=R8(c->r[7]+0x00000001u); // 800CAF60
  c->r[9]=c->r[9]+0x00000002u; // 800CAF64
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800CAF68
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 800CAF6C
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 800CAF70
  c->r[7]=c->r[8]-c->r[6]; // 800CAF74
  if (!crb(c,2)) { goto L_800CAF8C; } // 800CAF78
  c->r[6]=R8(c->r[29]+0x00000000u); // 800CAF7C
  c->r[29]=c->r[29]+0x00000001u; // 800CAF80
  c->r[10]=c->r[6]+0x00000012u; // 800CAF84
  goto L_800CAF90; // 800CAF88
L_800CAF8C:;
  c->r[10]=c->r[10]+0x00000002u; // 800CAF8C
L_800CAF90:;
  cmps(c,1,(int32_t)c->r[10],0); // 800CAF90
  c->r[6]=0u+0x00000000u; // 800CAF94
  if (!crb(c,5)) { goto L_800CB070; } // 800CAF98
  cmps(c,0,(int32_t)c->r[10],8); // 800CAF9C
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 800CAFA0
  if (!crb(c,1)) { goto L_800CB03C; } // 800CAFA4
  c->r[28]=0u+0x00000000u; // 800CAFA8
  if (crb(c,4)) { goto L_800CAFC0; } // 800CAFAC
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 800CAFB0
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 800CAFB4
  if (crb(c,1)) { goto L_800CAFC0; } // 800CAFB8
  c->r[28]=0u+0x00000001u; // 800CAFBC
L_800CAFC0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CAFC0
  if (crb(c,2)) { goto L_800CB03C; } // 800CAFC4
  c->r[31]=c->r[27]+0x00000007u; // 800CAFC8
  c->r[28]=c->r[4]+c->r[8]; // 800CAFCC
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 800CAFD0
  c->ctr=c->r[31]; // 800CAFD4
  cmps(c,0,(int32_t)c->r[27],0); // 800CAFD8
  if (!crb(c,1)) { goto L_800CB03C; } // 800CAFDC
L_800CAFE0:;
  c->r[26]=c->r[4]+c->r[7]; // 800CAFE0
  c->r[27]=c->r[8]+c->r[4]; // 800CAFE4
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 800CAFE8
  c->r[8]=c->r[8]+0x00000008u; // 800CAFEC
  W8(c->r[28]+0x00000000u,c->r[31]); // 800CAFF0
  c->r[28]=c->r[28]+0x00000008u; // 800CAFF4
  c->r[6]=c->r[6]+0x00000008u; // 800CAFF8
  c->r[31]=R8(c->r[4]+c->r[7]); // 800CAFFC
  c->r[7]=c->r[7]+0x00000008u; // 800CB000
  W8(c->r[27]+0x00000001u,c->r[31]); // 800CB004
  c->r[31]=R8(c->r[26]+0x00000001u); // 800CB008
  W8(c->r[27]+0x00000002u,c->r[31]); // 800CB00C
  c->r[31]=R8(c->r[26]+0x00000002u); // 800CB010
  W8(c->r[27]+0x00000003u,c->r[31]); // 800CB014
  c->r[31]=R8(c->r[26]+0x00000003u); // 800CB018
  W8(c->r[27]+0x00000004u,c->r[31]); // 800CB01C
  c->r[31]=R8(c->r[26]+0x00000004u); // 800CB020
  W8(c->r[27]+0x00000005u,c->r[31]); // 800CB024
  c->r[31]=R8(c->r[26]+0x00000005u); // 800CB028
  W8(c->r[27]+0x00000006u,c->r[31]); // 800CB02C
  c->r[31]=R8(c->r[26]+0x00000006u); // 800CB030
  W8(c->r[27]+0x00000007u,c->r[31]); // 800CB034
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAFE0; } // 800CB038
L_800CB03C:;
  c->r[31]=c->r[10]-c->r[6]; // 800CB03C
  c->r[28]=c->r[4]+c->r[8]; // 800CB040
  c->ctr=c->r[31]; // 800CB044
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 800CB048
  if (!crb(c,0)) { goto L_800CB070; } // 800CB04C
L_800CB050:;
  c->r[10]=c->r[4]+c->r[7]; // 800CB050
  c->r[7]=c->r[7]+0x00000001u; // 800CB054
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 800CB058
  c->r[6]=c->r[6]+0x00000001u; // 800CB05C
  W8(c->r[28]+0x00000000u,c->r[10]); // 800CB060
  c->r[28]=c->r[28]+0x00000001u; // 800CB064
  c->r[8]=c->r[8]+0x00000001u; // 800CB068
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB050; } // 800CB06C
L_800CB070:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800CB070
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 800CB074
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 800CB078
  if (crb(c,0)) { IRQCHK(c); goto L_800CAF28; } // 800CB07C
  c->r[11]=c->r[1]+0x00000020u; // 800CB080
  c->lr=0x800CB088u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB084
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB088
  c->lr=c->r[0]; // 800CB08C
  c->r[1]=c->r[1]+0x00000020u; // 800CB090
  return; // 800CB094
}

// OSSetFontEncode
void f_800CB0A0(Ctx* __restrict c) {
  trace_call(0x800CB0A0u);
  c->r[0]=R16(c->r[13]+0xFFFF8F40u); // 800CB0A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800CB0A4
  if (crb(c,2)) { goto L_800CB0B0; } // 800CB0A8
  goto L_800CB0EC; // 800CB0AC
L_800CB0B0:;
  c->r[4]=0u+0x80000000u; // 800CB0B0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800CB0B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CB0B8
  if (!crb(c,2)) { goto L_800CB0D4; } // 800CB0BC
  c->r[4]=0u+0xCC000000u; // 800CB0C0
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800CB0C4
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800CB0C8
  W16(c->r[13]+0xFFFF8F40u,c->r[0]); // 800CB0CC
  goto L_800CB0DC; // 800CB0D0
L_800CB0D4:;
  c->r[0]=0u+0x00000000u; // 800CB0D4
  W16(c->r[13]+0xFFFF8F40u,c->r[0]); // 800CB0D8
L_800CB0DC:;
  c->r[4]=0u+0x800D0000u; // 800CB0DC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB0E0
  c->r[4]=c->r[4]+0xFFFFB550u; // 800CB0E4
  W32(c->r[13]+0xFFFFA4C0u,c->r[4]); // 800CB0E8
L_800CB0EC:;
  cmpu(c,1,c->r[3],0x00000005u); // 800CB0EC
  if (crb(c,5)) { goto L_800CB110; } // 800CB0F0
  cmpu(c,0,c->r[3],0x00000003u); // 800CB0F4
  W16(c->r[13]+0xFFFF8F40u,c->r[3]); // 800CB0F8
  if (crb(c,0)) { goto L_800CB110; } // 800CB0FC
  if (crb(c,5)) { goto L_800CB110; } // 800CB100
  c->r[3]=0u+0x800D0000u; // 800CB104
  c->r[3]=c->r[3]+0xFFFFB650u; // 800CB108
  W32(c->r[13]+0xFFFFA4C0u,c->r[3]); // 800CB10C
L_800CB110:;
  c->r[3]=c->r[0]|c->r[0]; // 800CB110
  return; // 800CB114
}

// ReadFont
void f_800CB120(Ctx* __restrict c) {
  trace_call(0x800CB120u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB120
  c->r[0]=c->lr; // 800CB124
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB128
  c->r[11]=c->r[1]+0x00000030u; // 800CB12C
  c->lr=0x800CB134u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB130
  cmpu(c,0,c->r[4],0x00000001u); // 800CB134
  c->r[28]=c->r[3]|c->r[3]; // 800CB138
  c->r[29]=c->r[4]|c->r[4]; // 800CB13C
  c->r[30]=c->r[5]|c->r[5]; // 800CB140
  if (!crb(c,2)) { goto L_800CB1A0; } // 800CB144
  c->r[4]=0u+0x001B0000u; // 800CB148
  c->r[3]=0u+0x00050000u; // 800CB14C
  c->r[31]=c->r[28]|c->r[28]; // 800CB150
  c->r[26]=c->r[4]+0xFFFFFF00u; // 800CB154
  c->r[27]=c->r[3]+0xFFFFD000u; // 800CB158
  goto L_800CB194; // 800CB15C
L_800CB160:;
  cmps(c,0,(int32_t)c->r[27],256); // 800CB160
  c->r[25]=0u+0x00000100u; // 800CB164
  if (crb(c,1)) { goto L_800CB170; } // 800CB168
  c->r[25]=c->r[27]|c->r[27]; // 800CB16C
L_800CB170:;
  c->r[27]=c->r[27]-c->r[25]; // 800CB170
L_800CB174:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB174
  c->r[4]=c->r[25]|c->r[25]; // 800CB178
  c->r[5]=c->r[26]|c->r[26]; // 800CB17C
  c->lr=0x800CB184u; f_800CE1B0(c); // 800CB180
  cmps(c,0,(int32_t)c->r[3],0); // 800CB184
  if (crb(c,2)) { IRQCHK(c); goto L_800CB174; } // 800CB188
  c->r[26]=c->r[26]+c->r[25]; // 800CB18C
  c->r[31]=c->r[31]+c->r[25]; // 800CB190
L_800CB194:;
  cmps(c,0,(int32_t)c->r[27],0); // 800CB194
  if (crb(c,1)) { IRQCHK(c); goto L_800CB160; } // 800CB198
  goto L_800CB1F0; // 800CB19C
L_800CB1A0:;
  c->r[3]=0u+0x00200000u; // 800CB1A0
  c->r[26]=c->r[28]|c->r[28]; // 800CB1A4
  c->r[31]=c->r[3]+0xFFFFCF00u; // 800CB1A8
  c->r[27]=0u+0x00003000u; // 800CB1AC
  goto L_800CB1E8; // 800CB1B0
L_800CB1B4:;
  cmps(c,0,(int32_t)c->r[27],256); // 800CB1B4
  c->r[25]=0u+0x00000100u; // 800CB1B8
  if (crb(c,1)) { goto L_800CB1C4; } // 800CB1BC
  c->r[25]=c->r[27]|c->r[27]; // 800CB1C0
L_800CB1C4:;
  c->r[27]=c->r[27]-c->r[25]; // 800CB1C4
L_800CB1C8:;
  c->r[3]=c->r[26]|c->r[26]; // 800CB1C8
  c->r[4]=c->r[25]|c->r[25]; // 800CB1CC
  c->r[5]=c->r[31]|c->r[31]; // 800CB1D0
  c->lr=0x800CB1D8u; f_800CE1B0(c); // 800CB1D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CB1D8
  if (crb(c,2)) { IRQCHK(c); goto L_800CB1C8; } // 800CB1DC
  c->r[31]=c->r[31]+c->r[25]; // 800CB1E0
  c->r[26]=c->r[26]+c->r[25]; // 800CB1E4
L_800CB1E8:;
  cmps(c,0,(int32_t)c->r[27],0); // 800CB1E8
  if (crb(c,1)) { IRQCHK(c); goto L_800CB1B4; } // 800CB1EC
L_800CB1F0:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 800CB1F0
  cmpu(c,0,c->r[0],0x00000059u); // 800CB1F4
  if (!crb(c,2)) { goto L_800CB21C; } // 800CB1F8
  c->r[0]=R8(c->r[28]+0x00000001u); // 800CB1FC
  cmpu(c,0,c->r[0],0x00000061u); // 800CB200
  if (!crb(c,2)) { goto L_800CB21C; } // 800CB204
  c->r[0]=R8(c->r[28]+0x00000002u); // 800CB208
  cmpu(c,0,c->r[0],0x00000079u); // 800CB20C
  if (!crb(c,2)) { goto L_800CB21C; } // 800CB210
  c->r[31]=R32(c->r[28]+0x00000004u); // 800CB214
  goto L_800CB220; // 800CB218
L_800CB21C:;
  c->r[31]=0u+0x00000000u; // 800CB21C
L_800CB220:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CB220
  if (!crb(c,2)) { goto L_800CB230; } // 800CB224
  c->r[3]=0u+0x00000000u; // 800CB228
  goto L_800CB418; // 800CB22C
L_800CB230:;
  c->r[3]=c->r[28]|c->r[28]; // 800CB230
  c->r[4]=c->r[30]|c->r[30]; // 800CB234
  c->lr=0x800CB23Cu; f_800CAEF0(c); // 800CB238
  cmpu(c,0,c->r[29],0x00000001u); // 800CB23C
  if (!crb(c,2)) { goto L_800CB414; } // 800CB240
  c->r[5]=R32(c->r[2]+0xFFFF9A40u); // 800CB244
  c->r[3]=c->r[29]|c->r[29]; // 800CB248
  c->r[0]=R32(c->r[2]+0xFFFF9A44u); // 800CB24C
  c->r[4]=0u+0x00000054u; // 800CB250
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CB254
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CB258
  c->lr=0x800CB260u; f_800CADB0(c); // 800CB25C
  c->r[11]=R16(c->r[30]+0x0000001Au); // 800CB260
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 800CB264
  c->r[0]=R16(c->r[30]+0x0000001Eu); // 800CB268
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[4]); // 800CB26C
  c->r[5]=R32(c->r[30]+0x00000024u); // 800CB270
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 800CB274
  c->r[6]=R16(c->r[30]+0x00000012u); // 800CB278
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800CB27C
  c->r[7]=R16(c->r[30]+0x00000010u); // 800CB280
  c->r[25]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 800CB284
  c->r[0]=c->r[0]+c->r[4]; // 800CB288
  c->r[10]=R32(c->r[30]+0x00000014u); // 800CB28C
  c->r[4]=c->r[30]+c->r[5]; // 800CB290
  c->r[28]=sraw(c,c->r[0],1); // 800CB294
  c->r[8]=R16(c->r[1]+0x00000008u); // 800CB298
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[9]); // 800CB29C
  c->r[9]=R16(c->r[1]+0x0000000Au); // 800CB2A0
  c->r[3]=c->r[3]-c->r[0]; // 800CB2A4
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[11]); // 800CB2A8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 800CB2AC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800CB2B0
  c->r[26]=c->r[3]-c->r[0]; // 800CB2B4
  c->r[6]=c->r[5]+0x00000004u; // 800CB2B8
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[7]); // 800CB2BC
  c->r[11]=c->r[5]+0x00000005u; // 800CB2C0
  c->r[3]=sraw(c,c->r[6],3); // 800CB2C4
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 800CB2C8
  c->r[12]=addc(c,c->r[3],0,c->xer_ca); // 800CB2CC
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 800CB2D0
  c->r[29]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 800CB2D4
  c->r[3]=sraw(c,c->r[26],3); // 800CB2D8
  c->r[0]=c->r[0]-c->r[7]; // 800CB2DC
  c->r[10]=addc(c,c->r[3],0,c->xer_ca); // 800CB2E0
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800CB2E4
  c->r[0]=rotl(c->r[26],29)&0xE0000000u; // 800CB2E8
  c->r[6]=rotl(c->r[26],1)&0x00000001u; // 800CB2EC
  c->r[29]=rotl(c->r[29],31)&0x7FFFFFFFu; // 800CB2F0
  c->r[12]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[12]); // 800CB2F4
  c->r[7]=c->r[3]+c->r[7]; // 800CB2F8
  c->r[0]=c->r[0]-c->r[6]; // 800CB2FC
  c->r[4]=c->r[4]+c->r[29]; // 800CB300
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800CB304
  c->r[0]=rotl(c->r[10],4)&0xFFFFFFF0u; // 800CB308
  c->r[3]=c->r[3]+c->r[6]; // 800CB30C
  c->r[12]=c->r[4]+c->r[12]; // 800CB310
  c->r[10]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800CB314
  c->r[6]=rotl(c->r[11],29)&0xE0000000u; // 800CB318
  c->r[3]=sraw(c,c->r[3],2); // 800CB31C
  c->r[12]=c->r[12]+c->r[0]; // 800CB320
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 800CB324
  c->r[6]=c->r[6]-c->r[7]; // 800CB328
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 800CB32C
  c->r[12]=c->r[12]+c->r[10]; // 800CB330
  W16(c->r[12]+c->r[3],c->r[8]); // 800CB334
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800CB338
  c->r[6]=c->r[6]+c->r[7]; // 800CB33C
  c->r[8]=c->r[5]+0x00000006u; // 800CB340
  c->r[12]=R16(c->r[30]+0x0000001Eu); // 800CB344
  c->r[10]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800CB348
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 800CB34C
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 800CB350
  c->r[28]=rotl(c->r[12],2)&0xFFFFFFE0u; // 800CB354
  c->r[12]=rotl(c->r[12],3)&0x00000001u; // 800CB358
  c->r[12]=c->r[12]+c->r[28]; // 800CB35C
  c->r[6]=c->r[6]-c->r[7]; // 800CB360
  c->r[12]=sraw(c,c->r[12],1); // 800CB364
  c->r[11]=sraw(c,c->r[11],3); // 800CB368
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800CB36C
  c->r[11]=addc(c,c->r[11],0,c->xer_ca); // 800CB370
  c->r[6]=c->r[6]+c->r[7]; // 800CB374
  c->r[11]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800CB378
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800CB37C
  c->r[7]=c->r[4]+c->r[11]; // 800CB380
  c->r[7]=c->r[7]+c->r[0]; // 800CB384
  c->r[7]=c->r[7]+c->r[10]; // 800CB388
  W16(c->r[7]+c->r[3],c->r[9]); // 800CB38C
  c->r[7]=R16(c->r[30]+0x0000001Eu); // 800CB390
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 800CB394
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 800CB398
  c->r[7]=c->r[7]+c->r[9]; // 800CB39C
  c->r[9]=sraw(c,c->r[7],1); // 800CB3A0
  c->r[7]=sraw(c,c->r[8],3); // 800CB3A4
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 800CB3A8
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 800CB3AC
  c->r[7]=c->r[4]+c->r[7]; // 800CB3B0
  c->r[7]=c->r[7]+c->r[0]; // 800CB3B4
  c->r[7]=c->r[7]+c->r[6]; // 800CB3B8
  c->r[6]=R16(c->r[1]+0x0000000Cu); // 800CB3BC
  c->r[8]=c->r[5]+0x00000007u; // 800CB3C0
  W16(c->r[7]+c->r[3],c->r[6]); // 800CB3C4
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 800CB3C8
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 800CB3CC
  c->r[5]=R16(c->r[1]+0x0000000Eu); // 800CB3D0
  c->r[9]=R16(c->r[30]+0x0000001Eu); // 800CB3D4
  c->r[6]=c->r[6]-c->r[7]; // 800CB3D8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800CB3DC
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFE0u; // 800CB3E0
  c->r[9]=rotl(c->r[9],3)&0x00000001u; // 800CB3E4
  c->r[9]=c->r[9]+c->r[10]; // 800CB3E8
  c->r[6]=c->r[6]+c->r[7]; // 800CB3EC
  c->r[9]=sraw(c,c->r[9],1); // 800CB3F0
  c->r[7]=sraw(c,c->r[8],3); // 800CB3F4
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800CB3F8
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 800CB3FC
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 800CB400
  c->r[4]=c->r[4]+c->r[7]; // 800CB404
  c->r[4]=c->r[4]+c->r[0]; // 800CB408
  c->r[4]=c->r[4]+c->r[6]; // 800CB40C
  W16(c->r[4]+c->r[3],c->r[5]); // 800CB410
L_800CB414:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB414
L_800CB418:;
  c->r[11]=c->r[1]+0x00000030u; // 800CB418
  c->lr=0x800CB420u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB41C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CB420
  c->lr=c->r[0]; // 800CB424
  c->r[1]=c->r[1]+0x00000030u; // 800CB428
  return; // 800CB42C
}

// OSLoadFont
void f_800CB430(Ctx* __restrict c) {
  trace_call(0x800CB430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB430
  c->r[0]=c->lr; // 800CB434
  c->r[5]=c->r[3]|c->r[3]; // 800CB438
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB43C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB440
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB444
  c->r[30]=c->r[4]|c->r[4]; // 800CB448
  c->r[0]=R16(c->r[13]+0xFFFF8F40u); // 800CB44C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800CB450
  if (crb(c,2)) { goto L_800CB45C; } // 800CB454
  goto L_800CB498; // 800CB458
L_800CB45C:;
  c->r[4]=0u+0x80000000u; // 800CB45C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800CB460
  cmps(c,0,(int32_t)c->r[0],0); // 800CB464
  if (!crb(c,2)) { goto L_800CB480; } // 800CB468
  c->r[4]=0u+0xCC000000u; // 800CB46C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800CB470
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800CB474
  W16(c->r[13]+0xFFFF8F40u,c->r[0]); // 800CB478
  goto L_800CB488; // 800CB47C
L_800CB480:;
  c->r[0]=0u+0x00000000u; // 800CB480
  W16(c->r[13]+0xFFFF8F40u,c->r[0]); // 800CB484
L_800CB488:;
  c->r[4]=0u+0x800D0000u; // 800CB488
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB48C
  c->r[4]=c->r[4]+0xFFFFB550u; // 800CB490
  W32(c->r[13]+0xFFFFA4C0u,c->r[4]); // 800CB494
L_800CB498:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB498
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 800CB49C
  cmpu(c,0,c->r[0],0x00000002u); // 800CB4A0
  if (!crb(c,1)) { goto L_800CB4EC; } // 800CB4A4
  cmps(c,0,(int32_t)c->r[4],0); // 800CB4A8
  if (crb(c,2)) { goto L_800CB4BC; } // 800CB4AC
  cmps(c,0,(int32_t)c->r[4],1); // 800CB4B0
  if (crb(c,2)) { goto L_800CB4D4; } // 800CB4B4
  goto L_800CB528; // 800CB4B8
L_800CB4BC:;
  W32(c->r[13]+0xFFFFA4CCu,c->r[3]); // 800CB4BC
  c->r[3]=c->r[30]|c->r[30]; // 800CB4C0
  c->r[4]=0u+0x00000000u; // 800CB4C4
  c->lr=0x800CB4CCu; f_800CB120(c); // 800CB4C8
  c->r[31]=c->r[3]|c->r[3]; // 800CB4CC
  goto L_800CB52C; // 800CB4D0
L_800CB4D4:;
  W32(c->r[13]+0xFFFFA4C8u,c->r[3]); // 800CB4D4
  c->r[3]=c->r[30]|c->r[30]; // 800CB4D8
  c->r[4]=0u+0x00000001u; // 800CB4DC
  c->lr=0x800CB4E4u; f_800CB120(c); // 800CB4E0
  c->r[31]=c->r[3]|c->r[3]; // 800CB4E4
  goto L_800CB52C; // 800CB4E8
L_800CB4EC:;
  W32(c->r[13]+0xFFFFA4CCu,c->r[3]); // 800CB4EC
  c->r[3]=c->r[30]|c->r[30]; // 800CB4F0
  c->r[4]=0u+0x00000000u; // 800CB4F4
  c->lr=0x800CB4FCu; f_800CB120(c); // 800CB4F8
  cmps(c,0,(int32_t)c->r[3],0); // 800CB4FC
  c->r[31]=c->r[3]|c->r[3]; // 800CB500
  if (crb(c,2)) { goto L_800CB52C; } // 800CB504
  c->r[0]=R32(c->r[13]+0xFFFFA4CCu); // 800CB508
  c->r[4]=0u+0x00000001u; // 800CB50C
  c->r[5]=c->r[0]+c->r[3]; // 800CB510
  W32(c->r[13]+0xFFFFA4C8u,c->r[5]); // 800CB514
  c->r[3]=c->r[30]|c->r[30]; // 800CB518
  c->lr=0x800CB520u; f_800CB120(c); // 800CB51C
  c->r[31]=c->r[31]+c->r[3]; // 800CB520
  goto L_800CB52C; // 800CB524
L_800CB528:;
  c->r[31]=0u+0x00000000u; // 800CB528
L_800CB52C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB52C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB530
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB534
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB538
  c->lr=c->r[0]; // 800CB53C
  c->r[1]=c->r[1]+0x00000010u; // 800CB540
  return; // 800CB544
}

// ParseStringS
void f_800CB550(Ctx* __restrict c) {
  trace_call(0x800CB550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB550
  c->r[0]=c->lr; // 800CB554
  cmps(c,0,(int32_t)c->r[3],0); // 800CB558
  c->r[7]=0u+0x00000000u; // 800CB55C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB564
  c->r[31]=c->r[6]|c->r[6]; // 800CB568
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB56C
  c->r[30]=c->r[4]|c->r[4]; // 800CB570
  if (crb(c,2)) { goto L_800CB584; } // 800CB574
  cmps(c,0,(int32_t)c->r[3],1); // 800CB578
  if (crb(c,2)) { goto L_800CB59C; } // 800CB57C
  goto L_800CB61C; // 800CB580
L_800CB584:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 800CB584
  c->r[6]=R32(c->r[13]+0xFFFFA4CCu); // 800CB588
  cmps(c,0,(int32_t)c->r[7],0); // 800CB58C
  if (crb(c,2)) { goto L_800CB61C; } // 800CB590
  c->r[30]=c->r[4]+0x00000001u; // 800CB594
  goto L_800CB61C; // 800CB598
L_800CB59C:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 800CB59C
  c->r[6]=R32(c->r[13]+0xFFFFA4C8u); // 800CB5A0
  cmps(c,0,(int32_t)c->r[7],0); // 800CB5A4
  if (crb(c,2)) { goto L_800CB61C; } // 800CB5A8
  cmpu(c,0,c->r[7],0x00000081u); // 800CB5AC
  c->r[30]=c->r[4]+0x00000001u; // 800CB5B0
  c->r[0]=0u+0x00000000u; // 800CB5B4
  if (crb(c,0)) { goto L_800CB5C4; } // 800CB5B8
  cmpu(c,0,c->r[7],0x0000009Fu); // 800CB5BC
  if (!crb(c,1)) { goto L_800CB5D4; } // 800CB5C0
L_800CB5C4:;
  cmpu(c,0,c->r[7],0x000000E0u); // 800CB5C4
  if (crb(c,0)) { goto L_800CB5D8; } // 800CB5C8
  cmpu(c,0,c->r[7],0x000000FCu); // 800CB5CC
  if (crb(c,1)) { goto L_800CB5D8; } // 800CB5D0
L_800CB5D4:;
  c->r[0]=0u+0x00000001u; // 800CB5D4
L_800CB5D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB5D8
  if (crb(c,2)) { goto L_800CB61C; } // 800CB5DC
  c->r[4]=R8(c->r[30]+0x00000000u); // 800CB5E0
  c->r[0]=0u+0x00000000u; // 800CB5E4
  cmpu(c,0,c->r[4],0x00000040u); // 800CB5E8
  if (crb(c,0)) { goto L_800CB604; } // 800CB5EC
  cmpu(c,0,c->r[4],0x000000FCu); // 800CB5F0
  if (crb(c,1)) { goto L_800CB604; } // 800CB5F4
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CB5F8
  if (crb(c,2)) { goto L_800CB604; } // 800CB5FC
  c->r[0]=0u+0x00000001u; // 800CB600
L_800CB604:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB604
  if (crb(c,2)) { goto L_800CB61C; } // 800CB608
  c->r[0]=R8(c->r[30]+0x00000000u); // 800CB60C
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 800CB610
  c->r[30]=c->r[30]+0x00000001u; // 800CB614
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB618
L_800CB61C:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 800CB61C
  c->r[4]=c->r[7]|c->r[7]; // 800CB620
  c->lr=0x800CB628u; f_800CADB0(c); // 800CB624
  W32(c->r[31]+0x00000000u,c->r[3]); // 800CB628
  c->r[3]=c->r[30]|c->r[30]; // 800CB62C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB630
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB638
  c->lr=c->r[0]; // 800CB63C
  c->r[1]=c->r[1]+0x00000010u; // 800CB640
  return; // 800CB644
}

// ParseStringW
void f_800CB650(Ctx* __restrict c) {
  trace_call(0x800CB650u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB650
  c->r[0]=c->lr; // 800CB654
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB658
  c->r[11]=c->r[1]+0x00000030u; // 800CB65C
  c->lr=0x800CB664u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB660
  cmps(c,0,(int32_t)c->r[3],0); // 800CB664
  c->r[30]=0u+0x00000000u; // 800CB668
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB66C
  c->r[26]=c->r[3]|c->r[3]; // 800CB670
  c->r[27]=c->r[4]|c->r[4]; // 800CB674
  c->r[28]=c->r[5]|c->r[5]; // 800CB678
  c->r[29]=c->r[6]|c->r[6]; // 800CB67C
  if (crb(c,2)) { goto L_800CB6A8; } // 800CB680
  cmps(c,0,(int32_t)c->r[3],1); // 800CB684
  if (crb(c,2)) { goto L_800CB6C0; } // 800CB688
  cmps(c,0,(int32_t)c->r[3],3); // 800CB68C
  if (crb(c,2)) { goto L_800CB744; } // 800CB690
  cmps(c,0,(int32_t)c->r[3],4); // 800CB694
  if (crb(c,2)) { goto L_800CB758; } // 800CB698
  cmps(c,0,(int32_t)c->r[3],5); // 800CB69C
  if (crb(c,2)) { goto L_800CB76C; } // 800CB6A0
  goto L_800CB780; // 800CB6A4
L_800CB6A8:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 800CB6A8
  c->r[31]=R32(c->r[13]+0xFFFFA4CCu); // 800CB6AC
  cmps(c,0,(int32_t)c->r[30],0); // 800CB6B0
  if (crb(c,2)) { goto L_800CB780; } // 800CB6B4
  c->r[27]=c->r[4]+0x00000001u; // 800CB6B8
  goto L_800CB780; // 800CB6BC
L_800CB6C0:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 800CB6C0
  c->r[31]=R32(c->r[13]+0xFFFFA4C8u); // 800CB6C4
  cmps(c,0,(int32_t)c->r[30],0); // 800CB6C8
  if (crb(c,2)) { goto L_800CB780; } // 800CB6CC
  cmpu(c,0,c->r[30],0x00000081u); // 800CB6D0
  c->r[27]=c->r[4]+0x00000001u; // 800CB6D4
  c->r[0]=0u+0x00000000u; // 800CB6D8
  if (crb(c,0)) { goto L_800CB6E8; } // 800CB6DC
  cmpu(c,0,c->r[30],0x0000009Fu); // 800CB6E0
  if (!crb(c,1)) { goto L_800CB6F8; } // 800CB6E4
L_800CB6E8:;
  cmpu(c,0,c->r[30],0x000000E0u); // 800CB6E8
  if (crb(c,0)) { goto L_800CB6FC; } // 800CB6EC
  cmpu(c,0,c->r[30],0x000000FCu); // 800CB6F0
  if (crb(c,1)) { goto L_800CB6FC; } // 800CB6F4
L_800CB6F8:;
  c->r[0]=0u+0x00000001u; // 800CB6F8
L_800CB6FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB6FC
  if (crb(c,2)) { goto L_800CB780; } // 800CB700
  c->r[3]=R8(c->r[27]+0x00000000u); // 800CB704
  c->r[0]=0u+0x00000000u; // 800CB708
  cmpu(c,0,c->r[3],0x00000040u); // 800CB70C
  if (crb(c,0)) { goto L_800CB728; } // 800CB710
  cmpu(c,0,c->r[3],0x000000FCu); // 800CB714
  if (crb(c,1)) { goto L_800CB728; } // 800CB718
  cmpu(c,0,c->r[3],0x0000007Fu); // 800CB71C
  if (crb(c,2)) { goto L_800CB728; } // 800CB720
  c->r[0]=0u+0x00000001u; // 800CB724
L_800CB728:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB728
  if (crb(c,2)) { goto L_800CB780; } // 800CB72C
  c->r[0]=R8(c->r[27]+0x00000000u); // 800CB730
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 800CB734
  c->r[27]=c->r[27]+0x00000001u; // 800CB738
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB73C
  goto L_800CB780; // 800CB740
L_800CB744:;
  c->r[3]=c->r[27]|c->r[27]; // 800CB744
  c->r[4]=c->r[1]+0x00000008u; // 800CB748
  c->lr=0x800CB750u; f_800D0BE0(c); // 800CB74C
  c->r[27]=c->r[3]|c->r[3]; // 800CB750
  goto L_800CB780; // 800CB754
L_800CB758:;
  c->r[3]=c->r[27]|c->r[27]; // 800CB758
  c->r[4]=c->r[1]+0x00000008u; // 800CB75C
  c->lr=0x800CB764u; f_800D0D00(c); // 800CB760
  c->r[27]=c->r[3]|c->r[3]; // 800CB764
  goto L_800CB780; // 800CB768
L_800CB76C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800CB76C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CB770
  cmps(c,0,(int32_t)c->r[0],0); // 800CB774
  if (crb(c,2)) { goto L_800CB780; } // 800CB778
  c->r[27]=c->r[4]+0x00000004u; // 800CB77C
L_800CB780:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CB780
  cmps(c,0,(int32_t)c->r[3],0); // 800CB784
  if (crb(c,2)) { goto L_800CB7D4; } // 800CB788
  c->r[31]=R32(c->r[13]+0xFFFFA4CCu); // 800CB78C
  c->r[26]=0u+0x00000000u; // 800CB790
  c->lr=0x800CB798u; f_800D0D70(c); // 800CB794
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 800CB798
  if (crb(c,2)) { goto L_800CB7B8; } // 800CB79C
  c->r[0]=R32(c->r[13]+0xFFFFA4C4u); // 800CB7A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CB7A4
  if (crb(c,2)) { goto L_800CB7D4; } // 800CB7A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CB7AC
  cmpu(c,0,c->r[0],0x0000007Fu); // 800CB7B0
  if (crb(c,1)) { goto L_800CB7D4; } // 800CB7B4
L_800CB7B8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CB7B8
  c->lr=0x800CB7C0u; f_800D0DF0(c); // 800CB7BC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800CB7C0
  c->r[30]=c->r[3]|c->r[3]; // 800CB7C4
  if (crb(c,2)) { goto L_800CB7D4; } // 800CB7C8
  c->r[26]=0u+0x00000001u; // 800CB7CC
  c->r[31]=R32(c->r[13]+0xFFFFA4C8u); // 800CB7D0
L_800CB7D4:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 800CB7D4
  c->r[3]=c->r[26]|c->r[26]; // 800CB7D8
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 800CB7DC
  c->lr=0x800CB7E4u; f_800CADB0(c); // 800CB7E0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800CB7E4
  c->r[11]=c->r[1]+0x00000030u; // 800CB7E8
  c->r[3]=c->r[27]|c->r[27]; // 800CB7EC
  c->lr=0x800CB7F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB7F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CB7F4
  c->lr=c->r[0]; // 800CB7F8
  c->r[1]=c->r[1]+0x00000030u; // 800CB7FC
  return; // 800CB800
}

// OSGetFontTexel
void f_800CB810(Ctx* __restrict c) {
  trace_call(0x800CB810u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB810
  c->r[0]=c->lr; // 800CB814
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CB818
  c->r[11]=c->r[1]+0x00000050u; // 800CB81C
  c->lr=0x800CB824u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB820
  c->r[0]=R16(c->r[13]+0xFFFF8F40u); // 800CB824
  c->r[29]=c->r[4]|c->r[4]; // 800CB828
  c->r[30]=c->r[5]|c->r[5]; // 800CB82C
  c->r[17]=c->r[6]|c->r[6]; // 800CB830
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800CB834
  c->r[31]=c->r[7]|c->r[7]; // 800CB838
  if (crb(c,2)) { goto L_800CB844; } // 800CB83C
  goto L_800CB880; // 800CB840
L_800CB844:;
  c->r[4]=0u+0x80000000u; // 800CB844
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800CB848
  cmps(c,0,(int32_t)c->r[0],0); // 800CB84C
  if (!crb(c,2)) { goto L_800CB868; } // 800CB850
  c->r[4]=0u+0xCC000000u; // 800CB854
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800CB858
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800CB85C
  W16(c->r[13]+0xFFFF8F40u,c->r[0]); // 800CB860
  goto L_800CB870; // 800CB864
L_800CB868:;
  c->r[0]=0u+0x00000000u; // 800CB868
  W16(c->r[13]+0xFFFF8F40u,c->r[0]); // 800CB86C
L_800CB870:;
  c->r[4]=0u+0x800D0000u; // 800CB870
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB874
  c->r[4]=c->r[4]+0xFFFFB550u; // 800CB878
  W32(c->r[13]+0xFFFFA4C0u,c->r[4]); // 800CB87C
L_800CB880:;
  c->r[12]=R32(c->r[13]+0xFFFFA4C0u); // 800CB880
  c->r[4]=c->r[3]|c->r[3]; // 800CB884
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800CB888
  c->r[5]=c->r[1]+0x0000000Cu; // 800CB88C
  c->r[6]=c->r[1]+0x00000008u; // 800CB890
  c->ctr=c->r[12]; // 800CB894
  if (true) { c->lr=0x800CB89Cu; dispatch(c,c->ctr); } // 800CB898
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CB89C
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 800CB8A0
  c->r[0]=sraw(c,c->r[0],3); // 800CB8A4
  c->r[11]=R32(c->r[1]+0x00000008u); // 800CB8A8
  c->r[9]=R16(c->r[4]+0x0000001Au); // 800CB8AC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800CB8B0
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 800CB8B4
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800CB8B8
  c->r[6]=R32(c->r[4]+0x00000024u); // 800CB8BC
  c->r[23]=c->r[4]+0x0000002Cu; // 800CB8C0
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 800CB8C4
  c->r[5]=R32(c->r[4]+0x00000014u); // 800CB8C8
  c->r[22]=c->r[4]+c->r[6]; // 800CB8CC
  c->r[7]=R16(c->r[4]+0x00000012u); // 800CB8D0
  c->r[6]=R16(c->r[4]+0x00000010u); // 800CB8D4
  c->r[24]=0u+0x00000000u; // 800CB8D8
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 800CB8DC
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 800CB8E0
  c->r[11]=c->r[11]-c->r[0]; // 800CB8E4
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 800CB8E8
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 800CB8EC
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 800CB8F0
  c->r[26]=c->r[11]-c->r[9]; // 800CB8F4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800CB8F8
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 800CB8FC
  c->r[22]=c->r[22]+c->r[0]; // 800CB900
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 800CB904
  goto L_800CBA54; // 800CB908
L_800CB90C:;
  c->r[7]=c->r[27]+c->r[24]; // 800CB90C
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 800CB910
  c->r[5]=sraw(c,c->r[7],3); // 800CB914
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 800CB918
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 800CB91C
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 800CB920
  c->r[5]=sraw(c,c->r[24],3); // 800CB924
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800CB928
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 800CB92C
  c->r[0]=c->r[0]-c->r[4]; // 800CB930
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 800CB934
  c->r[6]=c->r[6]-c->r[7]; // 800CB938
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800CB93C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800CB940
  c->r[0]=c->r[0]+c->r[4]; // 800CB944
  c->r[4]=c->r[6]+c->r[7]; // 800CB948
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CB94C
  c->r[11]=c->r[29]+c->r[5]; // 800CB950
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CB954
  c->r[25]=0u+0x00000000u; // 800CB958
  goto L_800CBA40; // 800CB95C
L_800CB960:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 800CB960
  c->r[28]=c->r[30]+c->r[25]; // 800CB964
  c->r[5]=c->r[26]+c->r[25]; // 800CB968
  c->r[0]=0u+0x000000F0u; // 800CB96C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 800CB970
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 800CB974
  c->r[4]=c->r[4]+c->r[6]; // 800CB978
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 800CB97C
  c->r[7]=sraw(c,c->r[4],1); // 800CB980
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 800CB984
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 800CB988
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 800CB98C
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 800CB990
  c->r[18]=sraw(c,c->r[5],3); // 800CB994
  c->r[6]=c->r[6]-c->r[4]; // 800CB998
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 800CB99C
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800CB9A0
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 800CB9A4
  c->r[17]=c->r[17]+c->r[4]; // 800CB9A8
  c->r[20]=c->r[20]-c->r[19]; // 800CB9AC
  c->r[21]=c->r[21]^c->r[19]; // 800CB9B0
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 800CB9B4
  c->r[18]=sraw(c,c->r[17],2); // 800CB9B8
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 800CB9BC
  c->r[17]=c->r[5]-c->r[4]; // 800CB9C0
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 800CB9C4
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 800CB9C8
  c->r[20]=c->r[20]+c->r[19]; // 800CB9CC
  c->r[18]=sraw(c,c->r[28],3); // 800CB9D0
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 800CB9D4
  c->r[7]=c->r[22]+c->r[7]; // 800CB9D8
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800CB9DC
  c->r[7]=c->r[7]+c->r[6]; // 800CB9E0
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 800CB9E4
  c->r[7]=c->r[7]+c->r[10]; // 800CB9E8
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 800CB9EC
  c->r[28]=c->r[17]+c->r[4]; // 800CB9F0
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 800CB9F4
  c->r[4]=c->r[21]+c->r[20]; // 800CB9F8
  c->r[7]=R8(c->r[7]+c->r[5]); // 800CB9FC
  c->r[6]=c->r[11]+c->r[6]; // 800CBA00
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 800CBA04
  c->r[4]=sraw(c,c->r[4],1); // 800CBA08
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 800CBA0C
  c->r[6]=c->r[6]+c->r[12]; // 800CBA10
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 800CBA14
  c->r[7]=R8(c->r[6]+c->r[4]); // 800CBA18
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 800CBA1C
  c->r[5]=R8(c->r[23]+c->r[5]); // 800CBA20
  if (crb(c,2)) { goto L_800CBA2C; } // 800CBA24
  c->r[0]=0u+0x0000000Fu; // 800CBA28
L_800CBA2C:;
  c->r[0]=c->r[5]&c->r[0]; // 800CBA2C
  c->r[25]=c->r[25]+0x00000001u; // 800CBA30
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CBA34
  c->r[0]=c->r[7]|c->r[0]; // 800CBA38
  W8(c->r[6]+c->r[4],c->r[0]); // 800CBA3C
L_800CBA40:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CBA40
  c->r[0]=R16(c->r[4]+0x00000010u); // 800CBA44
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800CBA48
  if (crb(c,0)) { IRQCHK(c); goto L_800CB960; } // 800CBA4C
  c->r[24]=c->r[24]+0x00000001u; // 800CBA50
L_800CBA54:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 800CBA54
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800CBA58
  if (crb(c,0)) { IRQCHK(c); goto L_800CB90C; } // 800CBA5C
  cmps(c,0,(int32_t)c->r[31],0); // 800CBA60
  if (crb(c,2)) { goto L_800CBA80; } // 800CBA64
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CBA68
  c->r[4]=R32(c->r[1]+0x00000008u); // 800CBA6C
  c->r[0]=R16(c->r[5]+0x00000022u); // 800CBA70
  c->r[0]=c->r[5]+c->r[0]; // 800CBA74
  c->r[0]=R8(c->r[4]+c->r[0]); // 800CBA78
  W32(c->r[31]+0x00000000u,c->r[0]); // 800CBA7C
L_800CBA80:;
  c->r[11]=c->r[1]+0x00000050u; // 800CBA80
  c->lr=0x800CBA88u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CBA84
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CBA88
  c->lr=c->r[0]; // 800CBA8C
  c->r[1]=c->r[1]+0x00000050u; // 800CBA90
  return; // 800CBA94
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_800CBAA0(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_800CBAC0(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_800CBAE0(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_800CBB10(Ctx* __restrict c) {
  trace_call(0x800CBB10u);
  c->r[5]=R32(c->r[13]+0xFFFFA4E0u); // 800CBB10
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CBB14
  c->r[3]=R32(c->r[5]+c->r[0]); // 800CBB18
  W32(c->r[5]+c->r[0],c->r[4]); // 800CBB1C
  return; // 800CBB20
}

// __OSGetInterruptHandler
void f_800CBB30(Ctx* __restrict c) {
  trace_call(0x800CBB30u);
  c->r[4]=R32(c->r[13]+0xFFFFA4E0u); // 800CBB30
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CBB34
  c->r[3]=R32(c->r[4]+c->r[0]); // 800CBB38
  return; // 800CBB3C
}

// __OSInterruptInit
void f_800CBB40(Ctx* __restrict c) {
  trace_call(0x800CBB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBB40
  c->r[0]=c->lr; // 800CBB44
  c->r[4]=0u+0x00000000u; // 800CBB48
  c->r[5]=0u+0x00000080u; // 800CBB4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBB50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CBB54
  c->r[31]=0u+0x80000000u; // 800CBB58
  c->r[3]=c->r[31]+0x00003040u; // 800CBB5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CBB60
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CBB64
  W32(c->r[13]+0xFFFFA4E0u,c->r[3]); // 800CBB68
  c->lr=0x800CBB70u; f_800046B4(c); // 800CBB6C
  c->r[0]=0u+0x00000000u; // 800CBB70
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800CBB74
  c->r[4]=0u+0xCC000000u; // 800CBB78
  c->r[5]=0u+0x000000F0u; // 800CBB7C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800CBB80
  c->r[3]=0u+0xCD000000u; // 800CBB84
  c->r[0]=0u+0x40000000u; // 800CBB88
  c->r[30]=0u+0xFFFFFFF0u; // 800CBB8C
  W32(c->r[4]+0x00003004u,c->r[5]); // 800CBB90
  W32(c->r[3]+0x00000034u,c->r[0]); // 800CBB94
  c->lr=0x800CBB9Cu; f_800CBAA0(c); // 800CBB98
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800CBB9C
  c->r[29]=c->r[3]|c->r[3]; // 800CBBA0
  c->r[4]=R32(c->r[31]+0x000000C8u); // 800CBBA4
  c->r[30]=c->r[30]|c->r[0]; // 800CBBA8
  c->r[0]=~(c->r[0]|c->r[4]); // 800CBBAC
  W32(c->r[31]+0x000000C4u,c->r[30]); // 800CBBB0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 800CBBB4
  c->r[30]=c->r[30]|c->r[4]; // 800CBBB8
  goto L_800CBBC8; // 800CBBBC
L_800CBBC0:;
  c->r[4]=c->r[30]|c->r[30]; // 800CBBC0
  c->lr=0x800CBBC8u; f_800CBC10(c); // 800CBBC4
L_800CBBC8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CBBC8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBBC0; } // 800CBBCC
  c->r[3]=c->r[29]|c->r[29]; // 800CBBD0
  c->lr=0x800CBBD8u; f_800CBAE0(c); // 800CBBD4
  c->r[4]=0u+0x800D0000u; // 800CBBD8
  c->r[3]=0u+0x00000004u; // 800CBBDC
  c->r[4]=c->r[4]+0xFFFFC220u; // 800CBBE0
  c->lr=0x800CBBE8u; f_800C6410(c); // 800CBBE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBBE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CBBEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CBBF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CBBF4
  c->lr=c->r[0]; // 800CBBF8
  c->r[1]=c->r[1]+0x00000020u; // 800CBBFC
  return; // 800CBC00
}

// SetInterruptMask
void f_800CBC10(Ctx* __restrict c) {
  trace_call(0x800CBC10u);
  c->r[0]=cntlz(c->r[3]); // 800CBC10
  cmps(c,0,(int32_t)c->r[0],12); // 800CBC14
  if (!crb(c,0)) { goto L_800CBC3C; } // 800CBC18
  cmps(c,0,(int32_t)c->r[0],8); // 800CBC1C
  if (crb(c,2)) { goto L_800CBCEC; } // 800CBC20
  if (!crb(c,0)) { goto L_800CBD18; } // 800CBC24
  cmps(c,0,(int32_t)c->r[0],5); // 800CBC28
  if (!crb(c,0)) { goto L_800CBCAC; } // 800CBC2C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBC30
  if (!crb(c,0)) { goto L_800CBC5C; } // 800CBC34
  return; // 800CBC38
L_800CBC3C:;
  cmps(c,0,(int32_t)c->r[0],17); // 800CBC3C
  if (!crb(c,0)) { goto L_800CBC50; } // 800CBC40
  cmps(c,0,(int32_t)c->r[0],15); // 800CBC44
  if (!crb(c,0)) { goto L_800CBDA0; } // 800CBC48
  goto L_800CBD5C; // 800CBC4C
L_800CBC50:;
  cmps(c,0,(int32_t)c->r[0],28); // 800CBC50
  if (!crb(c,0)) return; // 800CBC54
  goto L_800CBDD4; // 800CBC58
L_800CBC5C:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 800CBC5C
  c->r[5]=0u+0x00000000u; // 800CBC60
  if (!crb(c,2)) { goto L_800CBC6C; } // 800CBC64
  c->r[5]=c->r[5]|0x00000001u; // 800CBC68
L_800CBC6C:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 800CBC6C
  if (!crb(c,2)) { goto L_800CBC78; } // 800CBC70
  c->r[5]=c->r[5]|0x00000002u; // 800CBC74
L_800CBC78:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 800CBC78
  if (!crb(c,2)) { goto L_800CBC84; } // 800CBC7C
  c->r[5]=c->r[5]|0x00000004u; // 800CBC80
L_800CBC84:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 800CBC84
  if (!crb(c,2)) { goto L_800CBC90; } // 800CBC88
  c->r[5]=c->r[5]|0x00000008u; // 800CBC8C
L_800CBC90:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 800CBC90
  if (!crb(c,2)) { goto L_800CBC9C; } // 800CBC94
  c->r[5]=c->r[5]|0x00000010u; // 800CBC98
L_800CBC9C:;
  c->r[4]=0u+0xCC000000u; // 800CBC9C
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 800CBCA0
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 800CBCA4
  return; // 800CBCA8
L_800CBCAC:;
  c->r[5]=0u+0xCC000000u; // 800CBCAC
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 800CBCB0
  c->r[5]=R16(c->r[5]+0x0000500Au); // 800CBCB4
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 800CBCB8
  if (!crb(c,2)) { goto L_800CBCC4; } // 800CBCBC
  c->r[5]=c->r[5]|0x00000010u; // 800CBCC0
L_800CBCC4:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 800CBCC4
  if (!crb(c,2)) { goto L_800CBCD0; } // 800CBCC8
  c->r[5]=c->r[5]|0x00000040u; // 800CBCCC
L_800CBCD0:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 800CBCD0
  if (!crb(c,2)) { goto L_800CBCDC; } // 800CBCD4
  c->r[5]=c->r[5]|0x00000100u; // 800CBCD8
L_800CBCDC:;
  c->r[4]=0u+0xCC000000u; // 800CBCDC
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 800CBCE0
  W16(c->r[4]+0x0000500Au,c->r[5]); // 800CBCE4
  return; // 800CBCE8
L_800CBCEC:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 800CBCEC
  c->r[4]=0u+0xCD000000u; // 800CBCF0
  c->r[5]=R32(c->r[4]+0x00006C00u); // 800CBCF4
  c->r[0]=0u+0xFFFFFFD3u; // 800CBCF8
  c->r[5]=c->r[5]&c->r[0]; // 800CBCFC
  if (!crb(c,2)) { goto L_800CBD08; } // 800CBD00
  c->r[5]=c->r[5]|0x00000004u; // 800CBD04
L_800CBD08:;
  c->r[4]=0u+0xCD000000u; // 800CBD08
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 800CBD0C
  W32(c->r[4]+0x00006C00u,c->r[5]); // 800CBD10
  return; // 800CBD14
L_800CBD18:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 800CBD18
  c->r[5]=0u+0xCD000000u; // 800CBD1C
  c->r[5]=R32(c->r[5]+0x00006800u); // 800CBD20
  c->r[0]=0u+0xFFFFD3F0u; // 800CBD24
  c->r[5]=c->r[5]&c->r[0]; // 800CBD28
  if (!crb(c,2)) { goto L_800CBD34; } // 800CBD2C
  c->r[5]=c->r[5]|0x00000001u; // 800CBD30
L_800CBD34:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 800CBD34
  if (!crb(c,2)) { goto L_800CBD40; } // 800CBD38
  c->r[5]=c->r[5]|0x00000004u; // 800CBD3C
L_800CBD40:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 800CBD40
  if (!crb(c,2)) { goto L_800CBD4C; } // 800CBD44
  c->r[5]=c->r[5]|0x00000400u; // 800CBD48
L_800CBD4C:;
  c->r[4]=0u+0xCD000000u; // 800CBD4C
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 800CBD50
  W32(c->r[4]+0x00006800u,c->r[5]); // 800CBD54
  return; // 800CBD58
L_800CBD5C:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 800CBD5C
  c->r[5]=0u+0xCD000000u; // 800CBD60
  c->r[5]=R32(c->r[5]+0x00006814u); // 800CBD64
  c->r[0]=0u+0xFFFFF3F0u; // 800CBD68
  c->r[5]=c->r[5]&c->r[0]; // 800CBD6C
  if (!crb(c,2)) { goto L_800CBD78; } // 800CBD70
  c->r[5]=c->r[5]|0x00000001u; // 800CBD74
L_800CBD78:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 800CBD78
  if (!crb(c,2)) { goto L_800CBD84; } // 800CBD7C
  c->r[5]=c->r[5]|0x00000004u; // 800CBD80
L_800CBD84:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 800CBD84
  if (!crb(c,2)) { goto L_800CBD90; } // 800CBD88
  c->r[5]=c->r[5]|0x00000400u; // 800CBD8C
L_800CBD90:;
  c->r[4]=0u+0xCD000000u; // 800CBD90
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 800CBD94
  W32(c->r[4]+0x00006814u,c->r[5]); // 800CBD98
  return; // 800CBD9C
L_800CBDA0:;
  c->r[5]=0u+0xCD000000u; // 800CBDA0
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 800CBDA4
  c->r[5]=R32(c->r[5]+0x00006828u); // 800CBDA8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 800CBDAC
  if (!crb(c,2)) { goto L_800CBDB8; } // 800CBDB0
  c->r[5]=c->r[5]|0x00000001u; // 800CBDB4
L_800CBDB8:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 800CBDB8
  if (!crb(c,2)) { goto L_800CBDC4; } // 800CBDBC
  c->r[5]=c->r[5]|0x00000004u; // 800CBDC0
L_800CBDC4:;
  c->r[4]=0u+0xCD000000u; // 800CBDC4
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 800CBDC8
  W32(c->r[4]+0x00006828u,c->r[5]); // 800CBDCC
  return; // 800CBDD0
L_800CBDD4:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 800CBDD4
  c->r[5]=0u+0x000000F0u; // 800CBDD8
  if (!crb(c,2)) { goto L_800CBDE4; } // 800CBDDC
  c->r[5]=c->r[5]|0x00000800u; // 800CBDE0
L_800CBDE4:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 800CBDE4
  if (!crb(c,2)) { goto L_800CBDF0; } // 800CBDE8
  c->r[5]=c->r[5]|0x00000008u; // 800CBDEC
L_800CBDF0:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 800CBDF0
  if (!crb(c,2)) { goto L_800CBDFC; } // 800CBDF4
  c->r[5]=c->r[5]|0x00000004u; // 800CBDF8
L_800CBDFC:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 800CBDFC
  if (!crb(c,2)) { goto L_800CBE08; } // 800CBE00
  c->r[5]=c->r[5]|0x00000002u; // 800CBE04
L_800CBE08:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 800CBE08
  if (!crb(c,2)) { goto L_800CBE14; } // 800CBE0C
  c->r[5]=c->r[5]|0x00000001u; // 800CBE10
L_800CBE14:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 800CBE14
  if (!crb(c,2)) { goto L_800CBE20; } // 800CBE18
  c->r[5]=c->r[5]|0x00000100u; // 800CBE1C
L_800CBE20:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 800CBE20
  if (!crb(c,2)) { goto L_800CBE2C; } // 800CBE24
  c->r[5]=c->r[5]|0x00001000u; // 800CBE28
L_800CBE2C:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 800CBE2C
  if (!crb(c,2)) { goto L_800CBE38; } // 800CBE30
  c->r[5]=c->r[5]|0x00000200u; // 800CBE34
L_800CBE38:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 800CBE38
  if (!crb(c,2)) { goto L_800CBE44; } // 800CBE3C
  c->r[5]=c->r[5]|0x00000400u; // 800CBE40
L_800CBE44:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 800CBE44
  if (!crb(c,2)) { goto L_800CBE50; } // 800CBE48
  c->r[5]=c->r[5]|0x00002000u; // 800CBE4C
L_800CBE50:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800CBE50
  if (!crb(c,2)) { goto L_800CBE5C; } // 800CBE54
  c->r[5]=c->r[5]|0x00004000u; // 800CBE58
L_800CBE5C:;
  c->r[4]=0u+0xCC000000u; // 800CBE5C
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 800CBE60
  W32(c->r[4]+0x00003004u,c->r[5]); // 800CBE64
  return; // 800CBE68
}

// __OSMaskInterrupts
void f_800CBE70(Ctx* __restrict c) {
  trace_call(0x800CBE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBE70
  c->r[0]=c->lr; // 800CBE74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBE78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CBE7C
  c->r[31]=c->r[3]|c->r[3]; // 800CBE80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CBE84
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CBE88
  c->lr=0x800CBE90u; f_800CBAA0(c); // 800CBE8C
  c->r[4]=0u+0x80000000u; // 800CBE90
  c->r[30]=c->r[3]|c->r[3]; // 800CBE94
  c->r[29]=R32(c->r[4]+0x000000C4u); // 800CBE98
  c->r[5]=R32(c->r[4]+0x000000C8u); // 800CBE9C
  c->r[0]=c->r[29]|c->r[5]; // 800CBEA0
  c->r[3]=c->r[31]&~c->r[0]; // 800CBEA4
  c->r[31]=c->r[31]|c->r[29]; // 800CBEA8
  W32(c->r[4]+0x000000C4u,c->r[31]); // 800CBEAC
  c->r[31]=c->r[31]|c->r[5]; // 800CBEB0
  goto L_800CBEC0; // 800CBEB4
L_800CBEB8:;
  c->r[4]=c->r[31]|c->r[31]; // 800CBEB8
  c->lr=0x800CBEC0u; f_800CBC10(c); // 800CBEBC
L_800CBEC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CBEC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBEB8; } // 800CBEC4
  c->r[3]=c->r[30]|c->r[30]; // 800CBEC8
  c->lr=0x800CBED0u; f_800CBAE0(c); // 800CBECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CBED0
  c->r[3]=c->r[29]|c->r[29]; // 800CBED4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CBED8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CBEDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBEE0
  c->lr=c->r[0]; // 800CBEE4
  c->r[1]=c->r[1]+0x00000020u; // 800CBEE8
  return; // 800CBEEC
}

// __OSUnmaskInterrupts
void f_800CBEF0(Ctx* __restrict c) {
  trace_call(0x800CBEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBEF0
  c->r[0]=c->lr; // 800CBEF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBEF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CBEFC
  c->r[31]=c->r[3]|c->r[3]; // 800CBF00
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CBF04
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CBF08
  c->lr=0x800CBF10u; f_800CBAA0(c); // 800CBF0C
  c->r[4]=0u+0x80000000u; // 800CBF10
  c->r[30]=c->r[3]|c->r[3]; // 800CBF14
  c->r[29]=R32(c->r[4]+0x000000C4u); // 800CBF18
  c->r[5]=R32(c->r[4]+0x000000C8u); // 800CBF1C
  c->r[0]=c->r[29]|c->r[5]; // 800CBF20
  c->r[3]=c->r[31]&c->r[0]; // 800CBF24
  c->r[31]=c->r[29]&~c->r[31]; // 800CBF28
  W32(c->r[4]+0x000000C4u,c->r[31]); // 800CBF2C
  c->r[31]=c->r[31]|c->r[5]; // 800CBF30
  goto L_800CBF40; // 800CBF34
L_800CBF38:;
  c->r[4]=c->r[31]|c->r[31]; // 800CBF38
  c->lr=0x800CBF40u; f_800CBC10(c); // 800CBF3C
L_800CBF40:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CBF40
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBF38; } // 800CBF44
  c->r[3]=c->r[30]|c->r[30]; // 800CBF48
  c->lr=0x800CBF50u; f_800CBAE0(c); // 800CBF4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CBF50
  c->r[3]=c->r[29]|c->r[29]; // 800CBF54
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CBF58
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CBF5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBF60
  c->lr=c->r[0]; // 800CBF64
  c->r[1]=c->r[1]+0x00000020u; // 800CBF68
  return; // 800CBF6C
}

// __OSDispatchInterrupt
void f_800CBF70(Ctx* __restrict c) {
  trace_call(0x800CBF70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF70
  c->r[0]=c->lr; // 800CBF74
  c->r[3]=0u+0xCC000000u; // 800CBF78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBF7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CBF80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CBF84
  c->r[30]=c->r[4]|c->r[4]; // 800CBF88
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CBF8C
  c->r[31]=R32(c->r[3]+0x00003000u); // 800CBF90
  c->r[0]=R32(c->r[3]+0x00003004u); // 800CBF94
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 800CBF98
  if (crb(c,2)) { goto L_800CBFA8; } // 800CBF9C
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 800CBFA0
  if (!crb(c,2)) { goto L_800CBFB0; } // 800CBFA4
L_800CBFA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBFA8
  c->lr=0x800CBFB0u; f_800C7ED0(c); // 800CBFAC
L_800CBFB0:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 800CBFB0
  c->r[0]=0u+0x00000000u; // 800CBFB4
  if (crb(c,2)) { goto L_800CC000; } // 800CBFB8
  c->r[3]=0u+0xCC000000u; // 800CBFBC
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 800CBFC0
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 800CBFC4
  if (crb(c,2)) { goto L_800CBFD0; } // 800CBFC8
  c->r[0]=c->r[0]|0x80000000u; // 800CBFCC
L_800CBFD0:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800CBFD0
  if (crb(c,2)) { goto L_800CBFDC; } // 800CBFD4
  c->r[0]=c->r[0]|0x40000000u; // 800CBFD8
L_800CBFDC:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 800CBFDC
  if (crb(c,2)) { goto L_800CBFE8; } // 800CBFE0
  c->r[0]=c->r[0]|0x20000000u; // 800CBFE4
L_800CBFE8:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800CBFE8
  if (crb(c,2)) { goto L_800CBFF4; } // 800CBFEC
  c->r[0]=c->r[0]|0x10000000u; // 800CBFF0
L_800CBFF4:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 800CBFF4
  if (crb(c,2)) { goto L_800CC000; } // 800CBFF8
  c->r[0]=c->r[0]|0x08000000u; // 800CBFFC
L_800CC000:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 800CC000
  if (crb(c,2)) { goto L_800CC034; } // 800CC004
  c->r[3]=0u+0xCC000000u; // 800CC008
  c->r[4]=R16(c->r[3]+0x0000500Au); // 800CC00C
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800CC010
  if (crb(c,2)) { goto L_800CC01C; } // 800CC014
  c->r[0]=c->r[0]|0x04000000u; // 800CC018
L_800CC01C:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 800CC01C
  if (crb(c,2)) { goto L_800CC028; } // 800CC020
  c->r[0]=c->r[0]|0x02000000u; // 800CC024
L_800CC028:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 800CC028
  if (crb(c,2)) { goto L_800CC034; } // 800CC02C
  c->r[0]=c->r[0]|0x01000000u; // 800CC030
L_800CC034:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 800CC034
  if (crb(c,2)) { goto L_800CC050; } // 800CC038
  c->r[3]=0u+0xCD000000u; // 800CC03C
  c->r[3]=R32(c->r[3]+0x00006C00u); // 800CC040
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 800CC044
  if (crb(c,2)) { goto L_800CC050; } // 800CC048
  c->r[0]=c->r[0]|0x00800000u; // 800CC04C
L_800CC050:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 800CC050
  if (crb(c,2)) { goto L_800CC0D0; } // 800CC054
  c->r[3]=0u+0xCD000000u; // 800CC058
  c->r[4]=R32(c->r[3]+0x00006800u); // 800CC05C
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800CC060
  if (crb(c,2)) { goto L_800CC06C; } // 800CC064
  c->r[0]=c->r[0]|0x00400000u; // 800CC068
L_800CC06C:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800CC06C
  if (crb(c,2)) { goto L_800CC078; } // 800CC070
  c->r[0]=c->r[0]|0x00200000u; // 800CC074
L_800CC078:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 800CC078
  if (crb(c,2)) { goto L_800CC084; } // 800CC07C
  c->r[0]=c->r[0]|0x00100000u; // 800CC080
L_800CC084:;
  c->r[3]=0u+0xCD000000u; // 800CC084
  c->r[4]=R32(c->r[3]+0x00006814u); // 800CC088
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800CC08C
  if (crb(c,2)) { goto L_800CC098; } // 800CC090
  c->r[0]=c->r[0]|0x00080000u; // 800CC094
L_800CC098:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800CC098
  if (crb(c,2)) { goto L_800CC0A4; } // 800CC09C
  c->r[0]=c->r[0]|0x00040000u; // 800CC0A0
L_800CC0A4:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 800CC0A4
  if (crb(c,2)) { goto L_800CC0B0; } // 800CC0A8
  c->r[0]=c->r[0]|0x00020000u; // 800CC0AC
L_800CC0B0:;
  c->r[3]=0u+0xCD000000u; // 800CC0B0
  c->r[4]=R32(c->r[3]+0x00006828u); // 800CC0B4
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800CC0B8
  if (crb(c,2)) { goto L_800CC0C4; } // 800CC0BC
  c->r[0]=c->r[0]|0x00010000u; // 800CC0C0
L_800CC0C4:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800CC0C4
  if (crb(c,2)) { goto L_800CC0D0; } // 800CC0C8
  c->r[0]=c->r[0]|0x00008000u; // 800CC0CC
L_800CC0D0:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 800CC0D0
  if (crb(c,2)) { goto L_800CC0DC; } // 800CC0D4
  c->r[0]=c->r[0]|0x00000020u; // 800CC0D8
L_800CC0DC:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 800CC0DC
  if (crb(c,2)) { goto L_800CC0E8; } // 800CC0E0
  c->r[0]=c->r[0]|0x00000040u; // 800CC0E4
L_800CC0E8:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 800CC0E8
  if (crb(c,2)) { goto L_800CC0F4; } // 800CC0EC
  c->r[0]=c->r[0]|0x00001000u; // 800CC0F0
L_800CC0F4:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 800CC0F4
  if (crb(c,2)) { goto L_800CC100; } // 800CC0F8
  c->r[0]=c->r[0]|0x00002000u; // 800CC0FC
L_800CC100:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 800CC100
  if (crb(c,2)) { goto L_800CC10C; } // 800CC104
  c->r[0]=c->r[0]|0x00000080u; // 800CC108
L_800CC10C:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 800CC10C
  if (crb(c,2)) { goto L_800CC118; } // 800CC110
  c->r[0]=c->r[0]|0x00000800u; // 800CC114
L_800CC118:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 800CC118
  if (crb(c,2)) { goto L_800CC124; } // 800CC11C
  c->r[0]=c->r[0]|0x00000400u; // 800CC120
L_800CC124:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 800CC124
  if (crb(c,2)) { goto L_800CC130; } // 800CC128
  c->r[0]=c->r[0]|0x00000200u; // 800CC12C
L_800CC130:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 800CC130
  if (crb(c,2)) { goto L_800CC13C; } // 800CC134
  c->r[0]=c->r[0]|0x00004000u; // 800CC138
L_800CC13C:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 800CC13C
  if (crb(c,2)) { goto L_800CC148; } // 800CC140
  c->r[0]=c->r[0]|0x00000100u; // 800CC144
L_800CC148:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 800CC148
  if (crb(c,2)) { goto L_800CC154; } // 800CC14C
  c->r[0]=c->r[0]|0x00000010u; // 800CC150
L_800CC154:;
  c->r[3]=0u+0x80000000u; // 800CC154
  c->r[4]=R32(c->r[3]+0x000000C4u); // 800CC158
  c->r[3]=R32(c->r[3]+0x000000C8u); // 800CC15C
  c->r[3]=c->r[4]|c->r[3]; // 800CC160
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 800CC164
  if (crb(c,2)) { goto L_800CC1F4; } // 800CC168
  c->r[4]=0u+0x802A0000u; // 800CC16C
  c->r[4]=c->r[4]+0x00001238u; // 800CC170
  c->r[0]=c->r[0]|0x00000000u; // 800CC174
L_800CC178:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800CC178
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800CC17C
  if (crb(c,2)) { goto L_800CC190; } // 800CC180
  c->r[0]=cntlz(c->r[0]); // 800CC184
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CC188
  goto L_800CC198; // 800CC18C
L_800CC190:;
  c->r[4]=c->r[4]+0x00000004u; // 800CC190
  IRQCHK(c); goto L_800CC178; // 800CC194
L_800CC198:;
  c->r[3]=R32(c->r[13]+0xFFFFA4E0u); // 800CC198
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800CC19C
  c->r[31]=R32(c->r[3]+c->r[0]); // 800CC1A0
  cmps(c,0,(int32_t)c->r[31],0); // 800CC1A4
  if (crb(c,2)) { goto L_800CC1F4; } // 800CC1A8
  cmps(c,0,(int32_t)c->r[29],4); // 800CC1AC
  if (!crb(c,1)) { goto L_800CC1CC; } // 800CC1B0
  W16(c->r[13]+0xFFFFA4D4u,c->r[29]); // 800CC1B4
  c->lr=0x800CC1BCu; f_800D0510(c); // 800CC1B8
  W32(c->r[13]+0xFFFFA4DCu,c->r[4]); // 800CC1BC
  W32(c->r[13]+0xFFFFA4D8u,c->r[3]); // 800CC1C0
  c->r[0]=R32(c->r[30]+0x00000198u); // 800CC1C4
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800CC1C8
L_800CC1CC:;
  c->lr=0x800CC1D0u; f_800CE9A0(c); // 800CC1CC
  c->r[12]=c->r[31]|c->r[31]; // 800CC1D0
  c->r[3]=c->r[29]|c->r[29]; // 800CC1D4
  c->r[4]=c->r[30]|c->r[30]; // 800CC1D8
  c->ctr=c->r[12]; // 800CC1DC
  if (true) { c->lr=0x800CC1E4u; dispatch(c,c->ctr); } // 800CC1E0
  c->lr=0x800CC1E8u; f_800CE9E0(c); // 800CC1E4
  c->lr=0x800CC1ECu; f_800CEF00(c); // 800CC1E8
  c->r[3]=c->r[30]|c->r[30]; // 800CC1EC
  c->lr=0x800CC1F4u; f_800C7ED0(c); // 800CC1F0
L_800CC1F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC1F4
  c->lr=0x800CC1FCu; f_800C7ED0(c); // 800CC1F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC1FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CC200
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CC204
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CC208
  c->lr=c->r[0]; // 800CC20C
  c->r[1]=c->r[1]+0x00000020u; // 800CC210
  return; // 800CC214
}

// ExternalInterruptHandler
void f_800CC220(Ctx* __restrict c) {
  trace_call(0x800CC220u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 800CC220
  W32(c->r[4]+0x00000004u,c->r[1]); // 800CC224
  W32(c->r[4]+0x00000008u,c->r[2]); // 800CC228
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC22C
  c->r[0]=mfspr(c,913); // 800CC230
  W32(c->r[4]+0x000001A8u,c->r[0]); // 800CC234
  c->r[0]=mfspr(c,914); // 800CC238
  W32(c->r[4]+0x000001ACu,c->r[0]); // 800CC23C
  c->r[0]=mfspr(c,915); // 800CC240
  W32(c->r[4]+0x000001B0u,c->r[0]); // 800CC244
  c->r[0]=mfspr(c,916); // 800CC248
  W32(c->r[4]+0x000001B4u,c->r[0]); // 800CC24C
  c->r[0]=mfspr(c,917); // 800CC250
  W32(c->r[4]+0x000001B8u,c->r[0]); // 800CC254
  c->r[0]=mfspr(c,918); // 800CC258
  W32(c->r[4]+0x000001BCu,c->r[0]); // 800CC25C
  c->r[0]=mfspr(c,919); // 800CC260
  W32(c->r[4]+0x000001C0u,c->r[0]); // 800CC264
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC268
  f_800CBF70(c); return; // 800CC26C
}

// __OSModuleInit
void f_800CC270(Ctx* __restrict c) {
  trace_call(0x800CC270u);
  c->r[3]=0u+0x80000000u; // 800CC270
  c->r[0]=0u+0x00000000u; // 800CC274
  W32(c->r[3]+0x000030CCu,c->r[0]); // 800CC278
  W32(c->r[3]+0x000030C8u,c->r[0]); // 800CC27C
  W32(c->r[3]+0x000030D0u,c->r[0]); // 800CC280
  return; // 800CC284
}

// OSInitMessageQueue
void f_800CC290(Ctx* __restrict c) {
  trace_call(0x800CC290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC290
  c->r[0]=c->lr; // 800CC294
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC298
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CC29C
  c->r[31]=c->r[5]|c->r[5]; // 800CC2A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CC2A4
  c->r[30]=c->r[4]|c->r[4]; // 800CC2A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CC2AC
  c->r[29]=c->r[3]|c->r[3]; // 800CC2B0
  c->lr=0x800CC2B8u; f_800CE950(c); // 800CC2B4
  c->r[3]=c->r[29]+0x00000008u; // 800CC2B8
  c->lr=0x800CC2C0u; f_800CE950(c); // 800CC2BC
  c->r[0]=0u+0x00000000u; // 800CC2C0
  W32(c->r[29]+0x00000010u,c->r[30]); // 800CC2C4
  W32(c->r[29]+0x00000014u,c->r[31]); // 800CC2C8
  W32(c->r[29]+0x00000018u,c->r[0]); // 800CC2CC
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800CC2D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CC2D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CC2D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CC2DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC2E0
  c->lr=c->r[0]; // 800CC2E4
  c->r[1]=c->r[1]+0x00000020u; // 800CC2E8
  return; // 800CC2EC
}

// OSSendMessage
void f_800CC2F0(Ctx* __restrict c) {
  trace_call(0x800CC2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC2F0
  c->r[0]=c->lr; // 800CC2F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC2F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CC2FC
  c->r[31]=c->r[5]|c->r[5]; // 800CC300
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CC304
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CC308
  c->r[29]=c->r[4]|c->r[4]; // 800CC30C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CC310
  c->r[28]=c->r[3]|c->r[3]; // 800CC314
  c->lr=0x800CC31Cu; f_800CBAA0(c); // 800CC318
  c->r[30]=c->r[3]|c->r[3]; // 800CC31C
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 800CC320
  goto L_800CC348; // 800CC324
L_800CC328:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CC328
  if (!crb(c,2)) { goto L_800CC340; } // 800CC32C
  c->r[3]=c->r[30]|c->r[30]; // 800CC330
  c->lr=0x800CC338u; f_800CBAE0(c); // 800CC334
  c->r[3]=0u+0x00000000u; // 800CC338
  goto L_800CC398; // 800CC33C
L_800CC340:;
  c->r[3]=c->r[28]|c->r[28]; // 800CC340
  c->lr=0x800CC348u; f_800CF9E0(c); // 800CC344
L_800CC348:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800CC348
  c->r[6]=R32(c->r[28]+0x00000014u); // 800CC34C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 800CC350
  if (!crb(c,1)) { IRQCHK(c); goto L_800CC328; } // 800CC354
  c->r[0]=R32(c->r[28]+0x00000018u); // 800CC358
  c->r[3]=c->r[28]+0x00000008u; // 800CC35C
  c->r[5]=R32(c->r[28]+0x00000010u); // 800CC360
  c->r[4]=c->r[0]+c->r[4]; // 800CC364
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800CC368
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800CC36C
  c->r[0]=c->r[4]-c->r[0]; // 800CC370
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CC374
  W32(c->r[5]+c->r[0],c->r[29]); // 800CC378
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800CC37C
  c->r[0]=c->r[4]+0x00000001u; // 800CC380
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800CC384
  c->lr=0x800CC38Cu; f_800CFAD0(c); // 800CC388
  c->r[3]=c->r[30]|c->r[30]; // 800CC38C
  c->lr=0x800CC394u; f_800CBAE0(c); // 800CC390
  c->r[3]=0u+0x00000001u; // 800CC394
L_800CC398:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC398
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CC39C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CC3A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CC3A4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CC3A8
  c->lr=c->r[0]; // 800CC3AC
  c->r[1]=c->r[1]+0x00000020u; // 800CC3B0
  return; // 800CC3B4
}

// OSReceiveMessage
void f_800CC3C0(Ctx* __restrict c) {
  trace_call(0x800CC3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC3C0
  c->r[0]=c->lr; // 800CC3C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC3C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CC3CC
  c->r[31]=c->r[3]|c->r[3]; // 800CC3D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CC3D4
  c->r[30]=c->r[5]|c->r[5]; // 800CC3D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CC3DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CC3E0
  c->r[28]=c->r[4]|c->r[4]; // 800CC3E4
  c->lr=0x800CC3ECu; f_800CBAA0(c); // 800CC3E8
  c->r[29]=c->r[3]|c->r[3]; // 800CC3EC
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 800CC3F0
  goto L_800CC418; // 800CC3F4
L_800CC3F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CC3F8
  if (!crb(c,2)) { goto L_800CC410; } // 800CC3FC
  c->r[3]=c->r[29]|c->r[29]; // 800CC400
  c->lr=0x800CC408u; f_800CBAE0(c); // 800CC404
  c->r[3]=0u+0x00000000u; // 800CC408
  goto L_800CC47C; // 800CC40C
L_800CC410:;
  c->r[3]=c->r[31]+0x00000008u; // 800CC410
  c->lr=0x800CC418u; f_800CF9E0(c); // 800CC414
L_800CC418:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800CC418
  cmps(c,0,(int32_t)c->r[0],0); // 800CC41C
  if (crb(c,2)) { IRQCHK(c); goto L_800CC3F8; } // 800CC420
  cmps(c,0,(int32_t)c->r[28],0); // 800CC424
  if (crb(c,2)) { goto L_800CC440; } // 800CC428
  c->r[0]=R32(c->r[31]+0x00000018u); // 800CC42C
  c->r[3]=R32(c->r[31]+0x00000010u); // 800CC430
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CC434
  c->r[0]=R32(c->r[3]+c->r[0]); // 800CC438
  W32(c->r[28]+0x00000000u,c->r[0]); // 800CC43C
L_800CC440:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 800CC440
  c->r[3]=c->r[31]|c->r[31]; // 800CC444
  c->r[6]=R32(c->r[31]+0x00000014u); // 800CC448
  c->r[7]=c->r[4]+0x00000001u; // 800CC44C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800CC450
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 800CC454
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800CC458
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800CC45C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800CC460
  c->r[0]=c->r[7]-c->r[0]; // 800CC464
  W32(c->r[31]+0x00000018u,c->r[0]); // 800CC468
  c->lr=0x800CC470u; f_800CFAD0(c); // 800CC46C
  c->r[3]=c->r[29]|c->r[29]; // 800CC470
  c->lr=0x800CC478u; f_800CBAE0(c); // 800CC474
  c->r[3]=0u+0x00000001u; // 800CC478
L_800CC47C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC47C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CC480
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CC484
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CC488
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CC48C
  c->lr=c->r[0]; // 800CC490
  c->r[1]=c->r[1]+0x00000020u; // 800CC494
  return; // 800CC498
}

// OSJamMessage
void f_800CC4A0(Ctx* __restrict c) {
  trace_call(0x800CC4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC4A0
  c->r[0]=c->lr; // 800CC4A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC4A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CC4AC
  c->r[31]=c->r[5]|c->r[5]; // 800CC4B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CC4B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CC4B8
  c->r[29]=c->r[4]|c->r[4]; // 800CC4BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CC4C0
  c->r[28]=c->r[3]|c->r[3]; // 800CC4C4
  c->lr=0x800CC4CCu; f_800CBAA0(c); // 800CC4C8
  c->r[30]=c->r[3]|c->r[3]; // 800CC4CC
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 800CC4D0
  goto L_800CC4F8; // 800CC4D4
L_800CC4D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CC4D8
  if (!crb(c,2)) { goto L_800CC4F0; } // 800CC4DC
  c->r[3]=c->r[30]|c->r[30]; // 800CC4E0
  c->lr=0x800CC4E8u; f_800CBAE0(c); // 800CC4E4
  c->r[3]=0u+0x00000000u; // 800CC4E8
  goto L_800CC550; // 800CC4EC
L_800CC4F0:;
  c->r[3]=c->r[28]|c->r[28]; // 800CC4F0
  c->lr=0x800CC4F8u; f_800CF9E0(c); // 800CC4F4
L_800CC4F8:;
  c->r[6]=R32(c->r[28]+0x00000014u); // 800CC4F8
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 800CC4FC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CC500
  if (!crb(c,1)) { IRQCHK(c); goto L_800CC4D8; } // 800CC504
  c->r[0]=R32(c->r[28]+0x00000018u); // 800CC508
  c->r[3]=c->r[28]+0x00000008u; // 800CC50C
  c->r[4]=R32(c->r[28]+0x00000010u); // 800CC510
  c->r[5]=c->r[6]+c->r[0]; // 800CC514
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800CC518
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800CC51C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800CC520
  c->r[0]=c->r[5]-c->r[0]; // 800CC524
  W32(c->r[28]+0x00000018u,c->r[0]); // 800CC528
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CC52C
  W32(c->r[4]+c->r[0],c->r[29]); // 800CC530
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800CC534
  c->r[0]=c->r[4]+0x00000001u; // 800CC538
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800CC53C
  c->lr=0x800CC544u; f_800CFAD0(c); // 800CC540
  c->r[3]=c->r[30]|c->r[30]; // 800CC544
  c->lr=0x800CC54Cu; f_800CBAE0(c); // 800CC548
  c->r[3]=0u+0x00000001u; // 800CC54C
L_800CC550:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC550
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CC554
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CC558
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CC55C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CC560
  c->lr=c->r[0]; // 800CC564
  c->r[1]=c->r[1]+0x00000020u; // 800CC568
  return; // 800CC56C
}

// OSGetPhysicalMem2Size
void f_800CC570(Ctx* __restrict c) {
  trace_call(0x800CC570u);
  c->r[3]=0u+0x80000000u; // 800CC570
  c->r[3]=R32(c->r[3]+0x00003118u); // 800CC574
  return; // 800CC578
}

// OSGetConsoleSimulatedMem1Size
void f_800CC580(Ctx* __restrict c) {
  trace_call(0x800CC580u);
  c->r[3]=0u+0x80000000u; // 800CC580
  c->r[3]=R32(c->r[3]+0x00003104u); // 800CC584
  return; // 800CC588
}

// OSGetConsoleSimulatedMem2Size
void f_800CC590(Ctx* __restrict c) {
  trace_call(0x800CC590u);
  c->r[3]=0u+0x80000000u; // 800CC590
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 800CC594
  return; // 800CC598
}

// OnShutdown
void f_800CC5A0(Ctx* __restrict c) {
  trace_call(0x800CC5A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC5A0
  c->r[0]=c->lr; // 800CC5A4
  cmps(c,0,(int32_t)c->r[3],0); // 800CC5A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC5AC
  if (crb(c,2)) { goto L_800CC5C8; } // 800CC5B0
  c->r[3]=0u+0xCC000000u; // 800CC5B4
  c->r[0]=0u+0x000000FFu; // 800CC5B8
  W16(c->r[3]+0x00004010u,c->r[0]); // 800CC5BC
  c->r[3]=0u+0xF0000000u; // 800CC5C0
  c->lr=0x800CC5C8u; f_800CBE70(c); // 800CC5C4
L_800CC5C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC5C8
  c->r[3]=0u+0x00000001u; // 800CC5CC
  c->lr=c->r[0]; // 800CC5D0
  c->r[1]=c->r[1]+0x00000010u; // 800CC5D4
  return; // 800CC5D8
}

// MEMIntrruptHandler
void f_800CC5E0(Ctx* __restrict c) {
  trace_call(0x800CC5E0u);
  c->r[8]=0u+0xCC000000u; // 800CC5E0
  c->r[3]=0u+0x802F0000u; // 800CC5E4
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 800CC5E8
  c->r[0]=0u+0x00000000u; // 800CC5EC
  c->r[7]=R16(c->r[8]+0x00004024u); // 800CC5F0
  c->r[3]=c->r[3]+0xFFFF9390u; // 800CC5F4
  c->r[6]=R16(c->r[8]+0x00004022u); // 800CC5F8
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 800CC5FC
  W16(c->r[8]+0x00004020u,c->r[0]); // 800CC600
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 800CC604
  cmps(c,0,(int32_t)c->r[12],0); // 800CC608
  if (crb(c,2)) { goto L_800CC620; } // 800CC60C
  c->r[3]=0u+0x0000000Fu; // 800CC610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CC614
  c->ctr=c->r[12]; // 800CC618
  if (true) { dispatch(c,c->ctr); return; } // 800CC61C
L_800CC620:;
  c->r[3]=0u+0x0000000Fu; // 800CC620
  f_800C88A0(c); return; // 800CC624
}

// ConfigMEM1_24MB
void f_800CC630(Ctx* __restrict c) {
  trace_call(0x800CC630u);
  c->r[7]=0u+0x00000000u; // 800CC630
  c->r[4]=0u+0x00000000u; // 800CC634
  c->r[4]=c->r[4]+0x00000002u; // 800CC638
  c->r[3]=0u+0x80000000u; // 800CC63C
  c->r[3]=c->r[3]+0x000001FFu; // 800CC640
  c->r[6]=0u+0x01000000u; // 800CC644
  c->r[6]=c->r[6]+0x00000002u; // 800CC648
  c->r[5]=0u+0x81000000u; // 800CC64C
  c->r[5]=c->r[5]+0x000000FFu; // 800CC650
  /* isync */ // 800CC654
  mtspr(c,536,c->r[7]); // 800CC658
  mtspr(c,537,c->r[4]); // 800CC65C
  mtspr(c,536,c->r[3]); // 800CC660
  /* isync */ // 800CC664
  mtspr(c,528,c->r[7]); // 800CC668
  mtspr(c,529,c->r[4]); // 800CC66C
  mtspr(c,528,c->r[3]); // 800CC670
  /* isync */ // 800CC674
  mtspr(c,540,c->r[7]); // 800CC678
  mtspr(c,541,c->r[6]); // 800CC67C
  mtspr(c,540,c->r[5]); // 800CC680
  /* isync */ // 800CC684
  mtspr(c,532,c->r[7]); // 800CC688
  mtspr(c,533,c->r[6]); // 800CC68C
  mtspr(c,532,c->r[5]); // 800CC690
  /* isync */ // 800CC694
  c->r[3]=c->msr; // 800CC698
  c->r[3]=c->r[3]|0x00000030u; // 800CC69C
  mtspr(c,27,c->r[3]); // 800CC6A0
  c->r[3]=c->lr; // 800CC6A4
  mtspr(c,26,c->r[3]); // 800CC6A8
  return; /* rfi */ // 800CC6AC
}

// ConfigMEM2_52MB
void f_800CC6B0(Ctx* __restrict c) {
  trace_call(0x800CC6B0u);
  c->r[7]=0u+0x00000000u; // 800CC6B0
  c->r[4]=0u+0x10000000u; // 800CC6B4
  c->r[4]=c->r[4]+0x00000002u; // 800CC6B8
  c->r[3]=0u+0x90000000u; // 800CC6BC
  c->r[3]=c->r[3]+0x000003FFu; // 800CC6C0
  c->r[6]=0u+0x10000000u; // 800CC6C4
  c->r[6]=c->r[6]+0x0000002Au; // 800CC6C8
  c->r[5]=0u+0xD0000000u; // 800CC6CC
  c->r[5]=c->r[5]+0x000007FFu; // 800CC6D0
  /* isync */ // 800CC6D4
  mtspr(c,568,c->r[7]); // 800CC6D8
  mtspr(c,569,c->r[4]); // 800CC6DC
  mtspr(c,568,c->r[3]); // 800CC6E0
  /* isync */ // 800CC6E4
  mtspr(c,560,c->r[7]); // 800CC6E8
  mtspr(c,561,c->r[7]); // 800CC6EC
  /* isync */ // 800CC6F0
  mtspr(c,570,c->r[7]); // 800CC6F4
  mtspr(c,571,c->r[6]); // 800CC6F8
  mtspr(c,570,c->r[5]); // 800CC6FC
  /* isync */ // 800CC700
  mtspr(c,562,c->r[7]); // 800CC704
  mtspr(c,563,c->r[7]); // 800CC708
  /* isync */ // 800CC70C
  c->r[4]=0u+0x12000000u; // 800CC710
  c->r[4]=c->r[4]+0x00000002u; // 800CC714
  c->r[3]=0u+0x92000000u; // 800CC718
  c->r[3]=c->r[3]+0x000001FFu; // 800CC71C
  c->r[6]=0u+0x13000000u; // 800CC720
  c->r[6]=c->r[6]+0x00000002u; // 800CC724
  c->r[5]=0u+0x93000000u; // 800CC728
  c->r[5]=c->r[5]+0x0000007Fu; // 800CC72C
  /* isync */ // 800CC730
  mtspr(c,572,c->r[7]); // 800CC734
  mtspr(c,573,c->r[4]); // 800CC738
  mtspr(c,572,c->r[3]); // 800CC73C
  /* isync */ // 800CC740
  mtspr(c,564,c->r[7]); // 800CC744
  mtspr(c,565,c->r[7]); // 800CC748
  /* isync */ // 800CC74C
  mtspr(c,574,c->r[7]); // 800CC750
  mtspr(c,575,c->r[6]); // 800CC754
  mtspr(c,574,c->r[5]); // 800CC758
  /* isync */ // 800CC75C
  mtspr(c,566,c->r[7]); // 800CC760
  mtspr(c,567,c->r[7]); // 800CC764
  /* isync */ // 800CC768
  c->r[3]=c->msr; // 800CC76C
  c->r[3]=c->r[3]|0x00000030u; // 800CC770
  mtspr(c,27,c->r[3]); // 800CC774
  c->r[3]=c->lr; // 800CC778
  mtspr(c,26,c->r[3]); // 800CC77C
  return; /* rfi */ // 800CC780
}

// ConfigMEM2_56MB
void f_800CC790(Ctx* __restrict c) {
  trace_call(0x800CC790u);
  c->r[7]=0u+0x00000000u; // 800CC790
  c->r[4]=0u+0x10000000u; // 800CC794
  c->r[4]=c->r[4]+0x00000002u; // 800CC798
  c->r[3]=0u+0x90000000u; // 800CC79C
  c->r[3]=c->r[3]+0x000003FFu; // 800CC7A0
  c->r[6]=0u+0x10000000u; // 800CC7A4
  c->r[6]=c->r[6]+0x0000002Au; // 800CC7A8
  c->r[5]=0u+0xD0000000u; // 800CC7AC
  c->r[5]=c->r[5]+0x000007FFu; // 800CC7B0
  /* isync */ // 800CC7B4
  mtspr(c,568,c->r[7]); // 800CC7B8
  mtspr(c,569,c->r[4]); // 800CC7BC
  mtspr(c,568,c->r[3]); // 800CC7C0
  /* isync */ // 800CC7C4
  mtspr(c,560,c->r[7]); // 800CC7C8
  mtspr(c,561,c->r[7]); // 800CC7CC
  /* isync */ // 800CC7D0
  mtspr(c,570,c->r[7]); // 800CC7D4
  mtspr(c,571,c->r[6]); // 800CC7D8
  mtspr(c,570,c->r[5]); // 800CC7DC
  /* isync */ // 800CC7E0
  mtspr(c,562,c->r[7]); // 800CC7E4
  mtspr(c,563,c->r[7]); // 800CC7E8
  /* isync */ // 800CC7EC
  c->r[4]=0u+0x12000000u; // 800CC7F0
  c->r[4]=c->r[4]+0x00000002u; // 800CC7F4
  c->r[3]=0u+0x92000000u; // 800CC7F8
  c->r[3]=c->r[3]+0x000001FFu; // 800CC7FC
  c->r[6]=0u+0x13000000u; // 800CC800
  c->r[6]=c->r[6]+0x00000002u; // 800CC804
  c->r[5]=0u+0x93000000u; // 800CC808
  c->r[5]=c->r[5]+0x000000FFu; // 800CC80C
  /* isync */ // 800CC810
  mtspr(c,572,c->r[7]); // 800CC814
  mtspr(c,573,c->r[4]); // 800CC818
  mtspr(c,572,c->r[3]); // 800CC81C
  /* isync */ // 800CC820
  mtspr(c,564,c->r[7]); // 800CC824
  mtspr(c,565,c->r[7]); // 800CC828
  /* isync */ // 800CC82C
  mtspr(c,574,c->r[7]); // 800CC830
  mtspr(c,575,c->r[6]); // 800CC834
  mtspr(c,574,c->r[5]); // 800CC838
  /* isync */ // 800CC83C
  mtspr(c,566,c->r[7]); // 800CC840
  mtspr(c,567,c->r[7]); // 800CC844
  /* isync */ // 800CC848
  c->r[3]=c->msr; // 800CC84C
  c->r[3]=c->r[3]|0x00000030u; // 800CC850
  mtspr(c,27,c->r[3]); // 800CC854
  c->r[3]=c->lr; // 800CC858
  mtspr(c,26,c->r[3]); // 800CC85C
  return; /* rfi */ // 800CC860
}

// ConfigMEM2_64MB
void f_800CC870(Ctx* __restrict c) {
  trace_call(0x800CC870u);
  c->r[7]=0u+0x00000000u; // 800CC870
  c->r[4]=0u+0x10000000u; // 800CC874
  c->r[4]=c->r[4]+0x00000002u; // 800CC878
  c->r[3]=0u+0x90000000u; // 800CC87C
  c->r[3]=c->r[3]+0x000007FFu; // 800CC880
  c->r[6]=0u+0x10000000u; // 800CC884
  c->r[6]=c->r[6]+0x0000002Au; // 800CC888
  c->r[5]=0u+0xD0000000u; // 800CC88C
  c->r[5]=c->r[5]+0x000007FFu; // 800CC890
  /* isync */ // 800CC894
  mtspr(c,568,c->r[7]); // 800CC898
  mtspr(c,569,c->r[4]); // 800CC89C
  mtspr(c,568,c->r[3]); // 800CC8A0
  /* isync */ // 800CC8A4
  mtspr(c,560,c->r[7]); // 800CC8A8
  mtspr(c,561,c->r[7]); // 800CC8AC
  /* isync */ // 800CC8B0
  mtspr(c,570,c->r[7]); // 800CC8B4
  mtspr(c,571,c->r[6]); // 800CC8B8
  mtspr(c,570,c->r[5]); // 800CC8BC
  /* isync */ // 800CC8C0
  mtspr(c,562,c->r[7]); // 800CC8C4
  mtspr(c,563,c->r[7]); // 800CC8C8
  /* isync */ // 800CC8CC
  mtspr(c,564,c->r[7]); // 800CC8D0
  mtspr(c,565,c->r[7]); // 800CC8D4
  /* isync */ // 800CC8D8
  mtspr(c,566,c->r[7]); // 800CC8DC
  mtspr(c,567,c->r[7]); // 800CC8E0
  /* isync */ // 800CC8E4
  mtspr(c,572,c->r[7]); // 800CC8E8
  mtspr(c,573,c->r[7]); // 800CC8EC
  /* isync */ // 800CC8F0
  mtspr(c,574,c->r[7]); // 800CC8F4
  mtspr(c,575,c->r[7]); // 800CC8F8
  /* isync */ // 800CC8FC
  c->r[3]=c->msr; // 800CC900
  c->r[3]=c->r[3]|0x00000030u; // 800CC904
  mtspr(c,27,c->r[3]); // 800CC908
  c->r[3]=c->lr; // 800CC90C
  mtspr(c,26,c->r[3]); // 800CC910
  return; /* rfi */ // 800CC914
}

// ConfigMEM2_112MB
void f_800CC920(Ctx* __restrict c) {
  trace_call(0x800CC920u);
  c->r[7]=0u+0x00000000u; // 800CC920
  c->r[4]=0u+0x10000000u; // 800CC924
  c->r[4]=c->r[4]+0x00000002u; // 800CC928
  c->r[3]=0u+0x90000000u; // 800CC92C
  c->r[3]=c->r[3]+0x000007FFu; // 800CC930
  c->r[6]=0u+0x10000000u; // 800CC934
  c->r[6]=c->r[6]+0x0000002Au; // 800CC938
  c->r[5]=0u+0xD0000000u; // 800CC93C
  c->r[5]=c->r[5]+0x00000FFFu; // 800CC940
  /* isync */ // 800CC944
  mtspr(c,568,c->r[7]); // 800CC948
  mtspr(c,569,c->r[4]); // 800CC94C
  mtspr(c,568,c->r[3]); // 800CC950
  /* isync */ // 800CC954
  mtspr(c,560,c->r[7]); // 800CC958
  mtspr(c,561,c->r[7]); // 800CC95C
  /* isync */ // 800CC960
  mtspr(c,570,c->r[7]); // 800CC964
  mtspr(c,571,c->r[6]); // 800CC968
  mtspr(c,570,c->r[5]); // 800CC96C
  /* isync */ // 800CC970
  mtspr(c,562,c->r[7]); // 800CC974
  mtspr(c,563,c->r[7]); // 800CC978
  /* isync */ // 800CC97C
  c->r[4]=0u+0x14000000u; // 800CC980
  c->r[4]=c->r[4]+0x00000002u; // 800CC984
  c->r[3]=0u+0x94000000u; // 800CC988
  c->r[3]=c->r[3]+0x000003FFu; // 800CC98C
  c->r[6]=0u+0x16000000u; // 800CC990
  c->r[6]=c->r[6]+0x00000002u; // 800CC994
  c->r[5]=0u+0x96000000u; // 800CC998
  c->r[5]=c->r[5]+0x000001FFu; // 800CC99C
  /* isync */ // 800CC9A0
  mtspr(c,572,c->r[7]); // 800CC9A4
  mtspr(c,573,c->r[4]); // 800CC9A8
  mtspr(c,572,c->r[3]); // 800CC9AC
  /* isync */ // 800CC9B0
  mtspr(c,564,c->r[7]); // 800CC9B4
  mtspr(c,565,c->r[7]); // 800CC9B8
  /* isync */ // 800CC9BC
  mtspr(c,574,c->r[7]); // 800CC9C0
  mtspr(c,575,c->r[6]); // 800CC9C4
  mtspr(c,574,c->r[5]); // 800CC9C8
  /* isync */ // 800CC9CC
  mtspr(c,566,c->r[7]); // 800CC9D0
  mtspr(c,567,c->r[7]); // 800CC9D4
  /* isync */ // 800CC9D8
  c->r[3]=c->msr; // 800CC9DC
  c->r[3]=c->r[3]|0x00000030u; // 800CC9E0
  mtspr(c,27,c->r[3]); // 800CC9E4
  c->r[3]=c->lr; // 800CC9E8
  mtspr(c,26,c->r[3]); // 800CC9EC
  return; /* rfi */ // 800CC9F0
}

// ConfigMEM2_128MB
void f_800CCA00(Ctx* __restrict c) {
  trace_call(0x800CCA00u);
  c->r[7]=0u+0x00000000u; // 800CCA00
  c->r[4]=0u+0x10000000u; // 800CCA04
  c->r[4]=c->r[4]+0x00000002u; // 800CCA08
  c->r[3]=0u+0x90000000u; // 800CCA0C
  c->r[3]=c->r[3]+0x00000FFFu; // 800CCA10
  c->r[6]=0u+0x10000000u; // 800CCA14
  c->r[6]=c->r[6]+0x0000002Au; // 800CCA18
  c->r[5]=0u+0xD0000000u; // 800CCA1C
  c->r[5]=c->r[5]+0x00000FFFu; // 800CCA20
  /* isync */ // 800CCA24
  mtspr(c,568,c->r[7]); // 800CCA28
  mtspr(c,569,c->r[4]); // 800CCA2C
  mtspr(c,568,c->r[3]); // 800CCA30
  /* isync */ // 800CCA34
  mtspr(c,560,c->r[7]); // 800CCA38
  mtspr(c,561,c->r[7]); // 800CCA3C
  /* isync */ // 800CCA40
  mtspr(c,570,c->r[7]); // 800CCA44
  mtspr(c,571,c->r[6]); // 800CCA48
  mtspr(c,570,c->r[5]); // 800CCA4C
  /* isync */ // 800CCA50
  mtspr(c,562,c->r[7]); // 800CCA54
  mtspr(c,563,c->r[7]); // 800CCA58
  /* isync */ // 800CCA5C
  mtspr(c,564,c->r[7]); // 800CCA60
  mtspr(c,565,c->r[7]); // 800CCA64
  /* isync */ // 800CCA68
  mtspr(c,566,c->r[7]); // 800CCA6C
  mtspr(c,567,c->r[7]); // 800CCA70
  /* isync */ // 800CCA74
  mtspr(c,572,c->r[7]); // 800CCA78
  mtspr(c,573,c->r[7]); // 800CCA7C
  /* isync */ // 800CCA80
  mtspr(c,574,c->r[7]); // 800CCA84
  mtspr(c,575,c->r[7]); // 800CCA88
  /* isync */ // 800CCA8C
  c->r[3]=c->msr; // 800CCA90
  c->r[3]=c->r[3]|0x00000030u; // 800CCA94
  mtspr(c,27,c->r[3]); // 800CCA98
  c->r[3]=c->lr; // 800CCA9C
  mtspr(c,26,c->r[3]); // 800CCAA0
  return; /* rfi */ // 800CCAA4
}

// RealMode
void f_800CCAB0(Ctx* __restrict c) {
  trace_call(0x800CCAB0u);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800CCAB0
  mtspr(c,26,c->r[3]); // 800CCAB4
  c->r[3]=c->msr; // 800CCAB8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 800CCABC
  mtspr(c,27,c->r[3]); // 800CCAC0
  return; /* rfi */ // 800CCAC4
}

// BATConfig
void f_800CCAD0(Ctx* __restrict c) {
  trace_call(0x800CCAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCAD0
  c->r[0]=c->lr; // 800CCAD4
  c->r[4]=0u+0x80000000u; // 800CCAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCAE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CCAE4
  c->r[30]=c->r[3]|c->r[3]; // 800CCAE8
  c->r[31]=R32(c->r[4]+0x00003104u); // 800CCAEC
  c->r[0]=R32(c->r[4]+0x00003100u); // 800CCAF0
  cmpu(c,0,c->r[31],c->r[0]); // 800CCAF4
  if (!crb(c,0)) { goto L_800CCB20; } // 800CCAF8
  c->r[0]=c->r[31]+0xFE800000u; // 800CCAFC
  cmpu(c,0,c->r[0],0x00000000u); // 800CCB00
  if (!crb(c,2)) { goto L_800CCB20; } // 800CCB04
  c->r[3]=0u+0x81800000u; // 800CCB08
  c->r[4]=0u+0x01800000u; // 800CCB0C
  c->lr=0x800CCB14u; f_800C7750(c); // 800CCB10
  c->r[3]=0u+0xCC000000u; // 800CCB14
  c->r[0]=0u+0x00000002u; // 800CCB18
  W16(c->r[3]+0x00004028u,c->r[0]); // 800CCB1C
L_800CCB20:;
  c->r[0]=0u+0x01800000u; // 800CCB20
  cmpu(c,0,c->r[31],c->r[0]); // 800CCB24
  if (crb(c,1)) { goto L_800CCB38; } // 800CCB28
  c->r[3]=0u+0x800D0000u; // 800CCB2C
  c->r[3]=c->r[3]+0xFFFFC630u; // 800CCB30
  c->lr=0x800CCB38u; f_800CCAB0(c); // 800CCB34
L_800CCB38:;
  c->r[3]=0u+0x80000000u; // 800CCB38
  c->r[0]=0u+0x04000000u; // 800CCB3C
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 800CCB40
  c->r[3]=R32(c->r[3]+0x00003120u); // 800CCB44
  cmpu(c,0,c->r[4],c->r[0]); // 800CCB48
  if (crb(c,1)) { goto L_800CCB98; } // 800CCB4C
  c->r[0]=0u+0x93400000u; // 800CCB50
  cmpu(c,0,c->r[3],c->r[0]); // 800CCB54
  if (crb(c,1)) { goto L_800CCB6C; } // 800CCB58
  c->r[3]=0u+0x800D0000u; // 800CCB5C
  c->r[3]=c->r[3]+0xFFFFC6B0u; // 800CCB60
  c->lr=0x800CCB68u; f_800CCAB0(c); // 800CCB64
  goto L_800CCBCC; // 800CCB68
L_800CCB6C:;
  c->r[0]=0u+0x93800000u; // 800CCB6C
  cmpu(c,0,c->r[3],c->r[0]); // 800CCB70
  if (crb(c,1)) { goto L_800CCB88; } // 800CCB74
  c->r[3]=0u+0x800D0000u; // 800CCB78
  c->r[3]=c->r[3]+0xFFFFC790u; // 800CCB7C
  c->lr=0x800CCB84u; f_800CCAB0(c); // 800CCB80
  goto L_800CCBCC; // 800CCB84
L_800CCB88:;
  c->r[3]=0u+0x800D0000u; // 800CCB88
  c->r[3]=c->r[3]+0xFFFFC870u; // 800CCB8C
  c->lr=0x800CCB94u; f_800CCAB0(c); // 800CCB90
  goto L_800CCBCC; // 800CCB94
L_800CCB98:;
  c->r[0]=0u+0x08000000u; // 800CCB98
  cmpu(c,0,c->r[4],c->r[0]); // 800CCB9C
  if (crb(c,1)) { goto L_800CCBCC; } // 800CCBA0
  c->r[0]=0u+0x97000000u; // 800CCBA4
  cmpu(c,0,c->r[3],c->r[0]); // 800CCBA8
  if (crb(c,1)) { goto L_800CCBC0; } // 800CCBAC
  c->r[3]=0u+0x800D0000u; // 800CCBB0
  c->r[3]=c->r[3]+0xFFFFC920u; // 800CCBB4
  c->lr=0x800CCBBCu; f_800CCAB0(c); // 800CCBB8
  goto L_800CCBCC; // 800CCBBC
L_800CCBC0:;
  c->r[3]=0u+0x800D0000u; // 800CCBC0
  c->r[3]=c->r[3]+0xFFFFCA00u; // 800CCBC4
  c->lr=0x800CCBCCu; f_800CCAB0(c); // 800CCBC8
L_800CCBCC:;
  c->r[0]=c->r[30]+0xFFF50000u; // 800CCBCC
L_800CCBD0:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 800CCBD0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CCBD0; } // 800CCBD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCBD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCBDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CCBE0
  c->lr=c->r[0]; // 800CCBE4
  c->r[1]=c->r[1]+0x00000010u; // 800CCBE8
  return; // 800CCBEC
}

// __OSRestoreCodeExecOnMEM1
void f_800CCBF0(Ctx* __restrict c) {
  trace_call(0x800CCBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCBF0
  c->r[0]=c->lr; // 800CCBF4
  c->r[4]=0u+0x800D0000u; // 800CCBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCBFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCC00
  c->r[31]=c->r[3]|c->r[3]; // 800CCC04
  c->r[3]=c->r[4]+0xFFFFC630u; // 800CCC08
  c->lr=0x800CCC10u; f_800CCAB0(c); // 800CCC0C
  c->r[0]=c->r[31]+0xFFF50000u; // 800CCC10
  c->r[0]=c->r[0]|0x00000000u; // 800CCC14
L_800CCC18:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 800CCC18
  if (!crb(c,2)) { IRQCHK(c); goto L_800CCC18; } // 800CCC1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCC20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCC24
  c->lr=c->r[0]; // 800CCC28
  c->r[1]=c->r[1]+0x00000010u; // 800CCC2C
  return; // 800CCC30
}

// __OSInitMemoryProtection
void f_800CCC40(Ctx* __restrict c) {
  trace_call(0x800CCC40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCC40
  c->r[0]=c->lr; // 800CCC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCC48
  c->r[0]=R32(c->r[13]+0xFFFFA4E8u); // 800CCC4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCC50
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CCC58
  if (!crb(c,2)) { goto L_800CCCF4; } // 800CCC5C
  c->lr=0x800CCC64u; f_800CBAA0(c); // 800CCC60
  c->r[4]=0u+0xCC000000u; // 800CCC64
  c->r[0]=0u+0x00000000u; // 800CCC68
  W16(c->r[4]+0x00004020u,c->r[0]); // 800CCC6C
  c->r[0]=0u+0x000000FFu; // 800CCC70
  c->r[30]=c->r[3]|c->r[3]; // 800CCC74
  c->r[3]=0u+0xF0000000u; // 800CCC78
  W16(c->r[4]+0x00004010u,c->r[0]); // 800CCC7C
  c->lr=0x800CCC84u; f_800CBE70(c); // 800CCC80
  c->r[31]=0u+0x800D0000u; // 800CCC84
  c->r[3]=0u+0x00000000u; // 800CCC88
  c->r[4]=c->r[31]+0xFFFFC5E0u; // 800CCC8C
  c->lr=0x800CCC94u; f_800CBB10(c); // 800CCC90
  c->r[4]=c->r[31]+0xFFFFC5E0u; // 800CCC94
  c->r[3]=0u+0x00000001u; // 800CCC98
  c->lr=0x800CCCA0u; f_800CBB10(c); // 800CCC9C
  c->r[4]=c->r[31]+0xFFFFC5E0u; // 800CCCA0
  c->r[3]=0u+0x00000002u; // 800CCCA4
  c->lr=0x800CCCACu; f_800CBB10(c); // 800CCCA8
  c->r[4]=c->r[31]+0xFFFFC5E0u; // 800CCCAC
  c->r[3]=0u+0x00000003u; // 800CCCB0
  c->lr=0x800CCCB8u; f_800CBB10(c); // 800CCCB4
  c->r[4]=c->r[31]+0xFFFFC5E0u; // 800CCCB8
  c->r[3]=0u+0x00000004u; // 800CCCBC
  c->lr=0x800CCCC4u; f_800CBB10(c); // 800CCCC0
  c->r[3]=0u+0x802A0000u; // 800CCCC4
  c->r[3]=c->r[3]+0x00001268u; // 800CCCC8
  c->lr=0x800CCCD0u; f_800CD1E0(c); // 800CCCCC
  c->r[3]=0u+0x000C0000u; // 800CCCD0
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 800CCCD4
  c->lr=0x800CCCDCu; f_800CCAD0(c); // 800CCCD8
  c->r[3]=0u+0x08000000u; // 800CCCDC
  c->lr=0x800CCCE4u; f_800CBEF0(c); // 800CCCE0
  c->r[0]=0u+0x00000001u; // 800CCCE4
  W32(c->r[13]+0xFFFFA4E8u,c->r[0]); // 800CCCE8
  c->r[3]=c->r[30]|c->r[30]; // 800CCCEC
  c->lr=0x800CCCF4u; f_800CBAE0(c); // 800CCCF0
L_800CCCF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCCF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CCCFC
  c->lr=c->r[0]; // 800CCD00
  c->r[1]=c->r[1]+0x00000010u; // 800CCD04
  return; // 800CCD08
}

// OSInitMutex
void f_800CCD10(Ctx* __restrict c) {
  trace_call(0x800CCD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCD10
  c->r[0]=c->lr; // 800CCD14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCD18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCD1C
  c->r[31]=c->r[3]|c->r[3]; // 800CCD20
  c->lr=0x800CCD28u; f_800CE950(c); // 800CCD24
  c->r[0]=0u+0x00000000u; // 800CCD28
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CCD2C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800CCD30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCD34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCD38
  c->lr=c->r[0]; // 800CCD3C
  c->r[1]=c->r[1]+0x00000010u; // 800CCD40
  return; // 800CCD44
}

