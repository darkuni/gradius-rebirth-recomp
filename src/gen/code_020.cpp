#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801DE810
void f_801DE810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE810
  c->r[0]=c->lr; // 801DE814
  W32(c->r[1]+0x00000144u,c->r[0]); // 801DE818
  c->r[11]=c->r[1]+0x00000140u; // 801DE81C
  c->lr=0x801DE824u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DE820
  c->r[25]=c->r[3]|c->r[3]; // 801DE824
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE828
  c->r[26]=c->r[5]|c->r[5]; // 801DE82C
  c->r[27]=c->r[6]|c->r[6]; // 801DE830
  c->r[5]=c->r[1]+0x00000008u; // 801DE834
  c->lr=0x801DE83Cu; f_801DF600(c); // 801DE838
  cmps(c,0,(int32_t)c->r[3],0); // 801DE83C
  if (!crb(c,2)) { goto L_801DE84C; } // 801DE840
  c->r[3]=0u+0x00000000u; // 801DE844
  goto L_801DE934; // 801DE848
L_801DE84C:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 801DE84C
  cmps(c,0,(int32_t)c->r[28],0); // 801DE850
  if (crb(c,2)) { goto L_801DE910; } // 801DE854
  c->r[0]=R8(c->r[28]+0x00000000u); // 801DE858
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE85C
  cmps(c,0,(int32_t)c->r[0],47); // 801DE860
  c->r[30]=R32(c->r[1]+0x00000010u); // 801DE864
  if (!crb(c,2)) { goto L_801DE870; } // 801DE868
  goto L_801DE8E4; // 801DE86C
L_801DE870:;
  c->r[3]=c->r[28]|c->r[28]; // 801DE870
  c->lr=0x801DE878u; f_80216B70(c); // 801DE874
  c->r[31]=c->r[3]|c->r[3]; // 801DE878
  c->r[3]=c->r[25]+0x00000008u; // 801DE87C
  c->lr=0x801DE884u; f_80216B70(c); // 801DE880
  c->r[0]=c->r[31]+c->r[3]; // 801DE884
  c->r[5]=c->r[3]|c->r[3]; // 801DE888
  cmpu(c,0,c->r[0],0x00000100u); // 801DE88C
  if (crb(c,0)) { goto L_801DE8C0; } // 801DE890
  c->r[3]=0u+0x802D0000u; // 801DE894
  c->r[5]=0u+0x802D0000u; // 801DE898
  c->r[7]=c->r[28]|c->r[28]; // 801DE89C
  c->r[6]=c->r[25]+0x00000008u; // 801DE8A0
  c->r[3]=c->r[3]+0xFFFFF5A0u; // 801DE8A4
  c->r[5]=c->r[5]+0xFFFFF5E4u; // 801DE8A8
  c->r[4]=0u+0x0000015Du; // 801DE8AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE8B0
  c->lr=0x801DE8B8u; f_801F9810(c); // 801DE8B4
  c->r[3]=0u+0x00000000u; // 801DE8B8
  goto L_801DE934; // 801DE8BC
L_801DE8C0:;
  c->r[3]=c->r[1]+0x00000020u; // 801DE8C0
  c->r[4]=c->r[25]+0x00000008u; // 801DE8C4
  c->r[5]=c->r[5]+0x00000001u; // 801DE8C8
  c->lr=0x801DE8D0u; f_8022004C(c); // 801DE8CC
  c->r[4]=c->r[28]|c->r[28]; // 801DE8D0
  c->r[3]=c->r[1]+0x00000020u; // 801DE8D4
  c->r[5]=c->r[31]+0x00000001u; // 801DE8D8
  c->lr=0x801DE8E0u; f_802200BC(c); // 801DE8DC
  c->r[28]=c->r[1]+0x00000020u; // 801DE8E0
L_801DE8E4:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801DE8E4
  c->r[3]=c->r[25]|c->r[25]; // 801DE8E8
  c->r[4]=c->r[26]|c->r[26]; // 801DE8EC
  c->r[5]=c->r[27]|c->r[27]; // 801DE8F0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801DE8F4
  c->r[6]=c->r[28]|c->r[28]; // 801DE8F8
  c->r[7]=c->r[30]|c->r[30]; // 801DE8FC
  c->r[8]=c->r[29]|c->r[29]; // 801DE900
  c->ctr=c->r[12]; // 801DE904
  if (true) { c->lr=0x801DE90Cu; dispatch(c,c->ctr); } // 801DE908
  goto L_801DE934; // 801DE90C
L_801DE910:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801DE910
  c->r[3]=c->r[25]|c->r[25]; // 801DE914
  c->r[4]=c->r[26]|c->r[26]; // 801DE918
  c->r[5]=c->r[27]|c->r[27]; // 801DE91C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801DE920
  c->r[6]=R32(c->r[1]+0x00000010u); // 801DE924
  c->r[7]=R32(c->r[1]+0x00000014u); // 801DE928
  c->ctr=c->r[12]; // 801DE92C
  if (true) { c->lr=0x801DE934u; dispatch(c,c->ctr); } // 801DE930
L_801DE934:;
  c->r[11]=c->r[1]+0x00000140u; // 801DE934
  c->lr=0x801DE93Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DE938
  c->r[0]=R32(c->r[1]+0x00000144u); // 801DE93C
  c->lr=c->r[0]; // 801DE940
  c->r[1]=c->r[1]+0x00000140u; // 801DE944
  return; // 801DE948
}

// fn_801DE950
void f_801DE950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE950
  c->r[0]=c->lr; // 801DE954
  W32(c->r[1]+0x00000144u,c->r[0]); // 801DE958
  c->r[11]=c->r[1]+0x00000140u; // 801DE95C
  c->lr=0x801DE964u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DE960
  c->r[25]=c->r[3]|c->r[3]; // 801DE964
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE968
  c->r[26]=c->r[5]|c->r[5]; // 801DE96C
  c->r[27]=c->r[6]|c->r[6]; // 801DE970
  c->r[5]=c->r[1]+0x00000008u; // 801DE974
  c->lr=0x801DE97Cu; f_801DF600(c); // 801DE978
  cmps(c,0,(int32_t)c->r[3],0); // 801DE97C
  if (!crb(c,2)) { goto L_801DE98C; } // 801DE980
  c->r[3]=0u+0x00000000u; // 801DE984
  goto L_801DEA74; // 801DE988
L_801DE98C:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 801DE98C
  cmps(c,0,(int32_t)c->r[28],0); // 801DE990
  if (crb(c,2)) { goto L_801DEA50; } // 801DE994
  c->r[0]=R8(c->r[28]+0x00000000u); // 801DE998
  c->r[29]=R32(c->r[1]+0x0000001Cu); // 801DE99C
  cmps(c,0,(int32_t)c->r[0],47); // 801DE9A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE9A4
  if (!crb(c,2)) { goto L_801DE9B0; } // 801DE9A8
  goto L_801DEA24; // 801DE9AC
L_801DE9B0:;
  c->r[3]=c->r[28]|c->r[28]; // 801DE9B0
  c->lr=0x801DE9B8u; f_80216B70(c); // 801DE9B4
  c->r[31]=c->r[3]|c->r[3]; // 801DE9B8
  c->r[3]=c->r[25]+0x00000008u; // 801DE9BC
  c->lr=0x801DE9C4u; f_80216B70(c); // 801DE9C0
  c->r[0]=c->r[31]+c->r[3]; // 801DE9C4
  c->r[5]=c->r[3]|c->r[3]; // 801DE9C8
  cmpu(c,0,c->r[0],0x00000100u); // 801DE9CC
  if (crb(c,0)) { goto L_801DEA00; } // 801DE9D0
  c->r[3]=0u+0x802D0000u; // 801DE9D4
  c->r[5]=0u+0x802D0000u; // 801DE9D8
  c->r[7]=c->r[28]|c->r[28]; // 801DE9DC
  c->r[6]=c->r[25]+0x00000008u; // 801DE9E0
  c->r[3]=c->r[3]+0xFFFFF5A0u; // 801DE9E4
  c->r[5]=c->r[5]+0xFFFFF5E4u; // 801DE9E8
  c->r[4]=0u+0x0000015Du; // 801DE9EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE9F0
  c->lr=0x801DE9F8u; f_801F9810(c); // 801DE9F4
  c->r[3]=0u+0x00000000u; // 801DE9F8
  goto L_801DEA74; // 801DE9FC
L_801DEA00:;
  c->r[3]=c->r[1]+0x00000020u; // 801DEA00
  c->r[4]=c->r[25]+0x00000008u; // 801DEA04
  c->r[5]=c->r[5]+0x00000001u; // 801DEA08
  c->lr=0x801DEA10u; f_8022004C(c); // 801DEA0C
  c->r[4]=c->r[28]|c->r[28]; // 801DEA10
  c->r[3]=c->r[1]+0x00000020u; // 801DEA14
  c->r[5]=c->r[31]+0x00000001u; // 801DEA18
  c->lr=0x801DEA20u; f_802200BC(c); // 801DEA1C
  c->r[28]=c->r[1]+0x00000020u; // 801DEA20
L_801DEA24:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801DEA24
  c->r[3]=c->r[25]|c->r[25]; // 801DEA28
  c->r[4]=c->r[26]|c->r[26]; // 801DEA2C
  c->r[5]=c->r[27]|c->r[27]; // 801DEA30
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801DEA34
  c->r[6]=c->r[28]|c->r[28]; // 801DEA38
  c->r[7]=c->r[30]|c->r[30]; // 801DEA3C
  c->r[8]=c->r[29]|c->r[29]; // 801DEA40
  c->ctr=c->r[12]; // 801DEA44
  if (true) { c->lr=0x801DEA4Cu; dispatch(c,c->ctr); } // 801DEA48
  goto L_801DEA74; // 801DEA4C
L_801DEA50:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801DEA50
  c->r[3]=c->r[25]|c->r[25]; // 801DEA54
  c->r[4]=c->r[26]|c->r[26]; // 801DEA58
  c->r[5]=c->r[27]|c->r[27]; // 801DEA5C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801DEA60
  c->r[6]=R32(c->r[1]+0x00000018u); // 801DEA64
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 801DEA68
  c->ctr=c->r[12]; // 801DEA6C
  if (true) { c->lr=0x801DEA74u; dispatch(c,c->ctr); } // 801DEA70
L_801DEA74:;
  c->r[11]=c->r[1]+0x00000140u; // 801DEA74
  c->lr=0x801DEA7Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DEA78
  c->r[0]=R32(c->r[1]+0x00000144u); // 801DEA7C
  c->lr=c->r[0]; // 801DEA80
  c->r[1]=c->r[1]+0x00000140u; // 801DEA84
  return; // 801DEA88
}

// fn_801DEA90
void f_801DEA90(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801DEA90
  W32(c->r[3]+0x00000028u,c->r[0]); // 801DEA94
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801DEA98
  W32(c->r[3]+0x00000030u,c->r[0]); // 801DEA9C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801DEAA0
  W32(c->r[3]+0x00000038u,c->r[0]); // 801DEAA4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801DEAA8
  W32(c->r[3]+0x00000040u,c->r[0]); // 801DEAAC
  return; // 801DEAB0
}

// fn_801DEAC0
void f_801DEAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEAC0
  c->r[0]=c->lr; // 801DEAC4
  cmps(c,0,(int32_t)c->r[4],0); // 801DEAC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEACC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEAD0
  c->r[31]=c->r[4]|c->r[4]; // 801DEAD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEAD8
  c->r[30]=c->r[3]|c->r[3]; // 801DEADC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEAE0
  c->r[29]=0u+0x802D0000u; // 801DEAE4
  c->r[29]=c->r[29]+0xFFFFF620u; // 801DEAE8
  if (!crb(c,2)) { goto L_801DEB04; } // 801DEAEC
  c->r[3]=c->r[29]+0x00000000u; // 801DEAF0
  c->r[5]=c->r[29]+0x0000001Cu; // 801DEAF4
  c->r[4]=0u+0x00000032u; // 801DEAF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEAFC
  c->lr=0x801DEB04u; f_801F9770(c); // 801DEB00
L_801DEB04:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DEB04
  c->r[0]=c->r[3]+0xADAD0000u; // 801DEB08
  cmpu(c,0,c->r[0],0x00004152u); // 801DEB0C
  if (crb(c,2)) { goto L_801DEB28; } // 801DEB10
  c->r[3]=c->r[29]+0x00000000u; // 801DEB14
  c->r[5]=c->r[29]+0x00000050u; // 801DEB18
  c->r[4]=0u+0x0000004Bu; // 801DEB1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEB20
  c->lr=0x801DEB28u; f_801F9770(c); // 801DEB24
L_801DEB28:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DEB28
  c->r[0]=c->r[3]+0xADAD0000u; // 801DEB2C
  cmpu(c,0,c->r[0],0x00004152u); // 801DEB30
  if (crb(c,2)) { goto L_801DEB40; } // 801DEB34
  c->r[0]=0u+0x00000000u; // 801DEB38
  goto L_801DEBAC; // 801DEB3C
L_801DEB40:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DEB40
  cmpu(c,0,c->r[0],0x00000100u); // 801DEB44
  if (!crb(c,0)) { goto L_801DEB60; } // 801DEB48
  c->r[3]=c->r[29]+0x00000000u; // 801DEB4C
  c->r[5]=c->r[29]+0x00000090u; // 801DEB50
  c->r[4]=0u+0x00000053u; // 801DEB54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEB58
  c->lr=0x801DEB60u; f_801F9770(c); // 801DEB5C
L_801DEB60:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DEB60
  cmpu(c,0,c->r[0],0x00000100u); // 801DEB64
  if (!crb(c,0)) { goto L_801DEB74; } // 801DEB68
  c->r[0]=0u+0x00000000u; // 801DEB6C
  goto L_801DEBAC; // 801DEB70
L_801DEB74:;
  cmpu(c,0,c->r[0],0x00000104u); // 801DEB74
  if (!crb(c,1)) { goto L_801DEB90; } // 801DEB78
  c->r[3]=c->r[29]+0x00000000u; // 801DEB7C
  c->r[5]=c->r[29]+0x00000090u; // 801DEB80
  c->r[4]=0u+0x00000059u; // 801DEB84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEB88
  c->lr=0x801DEB90u; f_801F9770(c); // 801DEB8C
L_801DEB90:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 801DEB90
  c->r[3]=0u+0x00000104u; // 801DEB94
  c->r[0]=addc(c,~c->r[4],0x00000104u,1); // 801DEB98
  c->r[3]=c->r[3]|~c->r[4]; // 801DEB9C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801DEBA0
  c->r[0]=c->r[3]-c->r[0]; // 801DEBA4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DEBA8
L_801DEBAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DEBAC
  if (crb(c,2)) { goto L_801DEC04; } // 801DEBB0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DEBB4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DEBB8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DEBBC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801DEBC0
  c->r[3]=R32(c->r[31]+0x00000008u); // 801DEBC4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801DEBC8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DEBCC
  W32(c->r[30]+0x00000008u,c->r[3]); // 801DEBD0
  c->r[0]=R32(c->r[31]+0x00000010u); // 801DEBD4
  W32(c->r[30]+0x00000010u,c->r[0]); // 801DEBD8
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DEBDC
  W32(c->r[30]+0x00000014u,c->r[0]); // 801DEBE0
  c->r[0]=R32(c->r[31]+0x00000018u); // 801DEBE4
  W32(c->r[30]+0x00000018u,c->r[0]); // 801DEBE8
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801DEBEC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801DEBF0
  c->r[0]=R32(c->r[31]+0x00000020u); // 801DEBF4
  W32(c->r[30]+0x00000020u,c->r[0]); // 801DEBF8
  c->r[0]=R32(c->r[31]+0x00000024u); // 801DEBFC
  W32(c->r[30]+0x00000024u,c->r[0]); // 801DEC00
L_801DEC04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEC04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEC08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEC0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEC10
  c->lr=c->r[0]; // 801DEC14
  c->r[1]=c->r[1]+0x00000020u; // 801DEC18
  return; // 801DEC1C
}

// fn_801DEC20
void f_801DEC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEC20
  c->r[0]=c->lr; // 801DEC24
  cmps(c,0,(int32_t)c->r[4],0); // 801DEC28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEC2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEC30
  c->r[31]=c->r[3]|c->r[3]; // 801DEC34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEC38
  c->r[30]=0u+0x802D0000u; // 801DEC3C
  c->r[30]=c->r[30]+0xFFFFF620u; // 801DEC40
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEC44
  c->r[29]=c->r[4]|c->r[4]; // 801DEC48
  if (!crb(c,2)) { goto L_801DEC64; } // 801DEC4C
  c->r[3]=c->r[30]+0x00000000u; // 801DEC50
  c->r[5]=c->r[30]+0x000000F0u; // 801DEC54
  c->r[4]=0u+0x00000063u; // 801DEC58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEC5C
  c->lr=0x801DEC64u; f_801F9770(c); // 801DEC60
L_801DEC64:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801DEC64
  c->r[0]=c->r[3]+0xACA70000u; // 801DEC68
  cmpu(c,0,c->r[0],0x00004D42u); // 801DEC6C
  if (crb(c,2)) { goto L_801DEC88; } // 801DEC70
  c->r[3]=c->r[30]+0x00000000u; // 801DEC74
  c->r[5]=c->r[30]+0x0000011Cu; // 801DEC78
  c->r[4]=0u+0x00000066u; // 801DEC7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEC80
  c->lr=0x801DEC88u; f_801F9770(c); // 801DEC84
L_801DEC88:;
  c->r[4]=c->r[29]+0x00000008u; // 801DEC88
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 801DEC8C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801DEC90
  cmps(c,0,(int32_t)c->r[0],0); // 801DEC94
  if (!crb(c,2)) { goto L_801DECA4; } // 801DEC98
  c->r[0]=0u+0x00000000u; // 801DEC9C
  goto L_801DECA8; // 801DECA0
L_801DECA4:;
  c->r[0]=c->r[0]+c->r[4]; // 801DECA4
L_801DECA8:;
  W32(c->r[31]+0x00000030u,c->r[0]); // 801DECA8
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801DECAC
  c->r[3]=R32(c->r[4]+0x00000004u); // 801DECB0
  cmps(c,0,(int32_t)c->r[3],0); // 801DECB4
  if (!crb(c,2)) { goto L_801DECC4; } // 801DECB8
  c->r[0]=0u+0x00000000u; // 801DECBC
  goto L_801DECC8; // 801DECC0
L_801DECC4:;
  c->r[0]=c->r[3]+c->r[0]; // 801DECC4
L_801DECC8:;
  W32(c->r[31]+0x00000034u,c->r[0]); // 801DECC8
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801DECCC
  c->r[3]=R32(c->r[4]+0x00000008u); // 801DECD0
  cmps(c,0,(int32_t)c->r[3],0); // 801DECD4
  if (!crb(c,2)) { goto L_801DECE4; } // 801DECD8
  c->r[0]=0u+0x00000000u; // 801DECDC
  goto L_801DECE8; // 801DECE0
L_801DECE4:;
  c->r[0]=c->r[3]+c->r[0]; // 801DECE4
L_801DECE8:;
  W32(c->r[31]+0x00000038u,c->r[0]); // 801DECE8
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801DECEC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801DECF0
  cmps(c,0,(int32_t)c->r[3],0); // 801DECF4
  if (!crb(c,2)) { goto L_801DED04; } // 801DECF8
  c->r[0]=0u+0x00000000u; // 801DECFC
  goto L_801DED08; // 801DED00
L_801DED04:;
  c->r[0]=c->r[3]+c->r[0]; // 801DED04
L_801DED08:;
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801DED08
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801DED0C
  c->r[3]=R32(c->r[4]+0x00000010u); // 801DED10
  cmps(c,0,(int32_t)c->r[3],0); // 801DED14
  if (!crb(c,2)) { goto L_801DED24; } // 801DED18
  c->r[0]=0u+0x00000000u; // 801DED1C
  goto L_801DED28; // 801DED20
L_801DED24:;
  c->r[0]=c->r[3]+c->r[0]; // 801DED24
L_801DED28:;
  W32(c->r[31]+0x00000040u,c->r[0]); // 801DED28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DED2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DED30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DED34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DED38
  c->lr=c->r[0]; // 801DED3C
  c->r[1]=c->r[1]+0x00000020u; // 801DED40
  return; // 801DED44
}

// fn_801DED50
void f_801DED50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DED50
  c->r[0]=c->lr; // 801DED54
  cmps(c,0,(int32_t)c->r[4],0); // 801DED58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DED5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DED60
  c->r[31]=0u+0x802D0000u; // 801DED64
  c->r[31]=c->r[31]+0xFFFFF620u; // 801DED68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DED6C
  c->r[30]=c->r[4]|c->r[4]; // 801DED70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DED74
  c->r[29]=c->r[3]|c->r[3]; // 801DED78
  if (!crb(c,2)) { goto L_801DED94; } // 801DED7C
  c->r[3]=c->r[31]+0x00000000u; // 801DED80
  c->r[5]=c->r[31]+0x0000017Cu; // 801DED84
  c->r[4]=0u+0x0000007Bu; // 801DED88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DED8C
  c->lr=0x801DED94u; f_801F9770(c); // 801DED90
L_801DED94:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DED94
  c->r[0]=c->r[3]+0xB6B20000u; // 801DED98
  cmpu(c,0,c->r[0],0x0000464Fu); // 801DED9C
  if (crb(c,2)) { goto L_801DEDB8; } // 801DEDA0
  c->r[3]=c->r[31]+0x00000000u; // 801DEDA4
  c->r[5]=c->r[31]+0x000001A8u; // 801DEDA8
  c->r[4]=0u+0x0000007Eu; // 801DEDAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEDB0
  c->lr=0x801DEDB8u; f_801F9770(c); // 801DEDB4
L_801DEDB8:;
  c->r[0]=c->r[30]+0x00000008u; // 801DEDB8
  W32(c->r[29]+0x00000028u,c->r[0]); // 801DEDBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEDC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEDC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEDC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEDCC
  c->lr=c->r[0]; // 801DEDD0
  c->r[1]=c->r[1]+0x00000020u; // 801DEDD4
  return; // 801DEDD8
}

// fn_801DEDE0
void f_801DEDE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEDE0
  c->r[0]=c->lr; // 801DEDE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEDE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEDEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEDF0
  c->r[30]=R32(c->r[3]+0x00000028u); // 801DEDF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEDF8
  c->r[29]=c->r[4]|c->r[4]; // 801DEDFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DEE00
  c->r[28]=c->r[3]|c->r[3]; // 801DEE04
  c->r[0]=R8(c->r[30]+0x00000001u); // 801DEE08
  cmps(c,0,(int32_t)c->r[0],0); // 801DEE0C
  if (crb(c,2)) { goto L_801DEE2C; } // 801DEE10
  c->r[5]=0u+0x802D0000u; // 801DEE14
  c->r[3]=c->r[13]+0xFFFF9E80u; // 801DEE18
  c->r[5]=c->r[5]+0xFFFFFB30u; // 801DEE1C
  c->r[4]=0u+0x0000008Du; // 801DEE20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEE24
  c->lr=0x801DEE2Cu; f_801F9770(c); // 801DEE28
L_801DEE2C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801DEE2C
  c->r[5]=c->r[30]|c->r[30]; // 801DEE30
  c->r[4]=R32(c->r[30]+0x00000004u); // 801DEE34
  c->lr=0x801DEE3Cu; f_801EF600(c); // 801DEE38
  cmps(c,0,(int32_t)c->r[3],0); // 801DEE3C
  c->r[31]=c->r[3]|c->r[3]; // 801DEE40
  if (!crb(c,2)) { goto L_801DEE50; } // 801DEE44
  c->r[3]=0u+0x00000000u; // 801DEE48
  goto L_801DEF10; // 801DEE4C
L_801DEE50:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DEE50
  cmpu(c,0,c->r[29],c->r[0]); // 801DEE54
  if (crb(c,0)) { goto L_801DEE64; } // 801DEE58
  c->r[3]=0u+0x00000000u; // 801DEE5C
  goto L_801DEF10; // 801DEE60
L_801DEE64:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801DEE64
  cmpu(c,0,c->r[0],0x00000101u); // 801DEE68
  if (crb(c,0)) { goto L_801DEECC; } // 801DEE6C
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801DEE70
  c->r[30]=R32(c->r[28]+0x00000028u); // 801DEE74
  c->r[3]=c->r[3]+c->r[29]; // 801DEE78
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DEE7C
  cmps(c,0,(int32_t)c->r[0],0); // 801DEE80
  if (crb(c,2)) { goto L_801DEEA0; } // 801DEE84
  c->r[5]=0u+0x802D0000u; // 801DEE88
  c->r[3]=c->r[13]+0xFFFF9E88u; // 801DEE8C
  c->r[5]=c->r[5]+0xFFFFFB58u; // 801DEE90
  c->r[4]=0u+0x0000008Du; // 801DEE94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEE98
  c->lr=0x801DEEA0u; f_801F9770(c); // 801DEE9C
L_801DEEA0:;
  c->r[4]=c->r[31]+c->r[29]; // 801DEEA0
  c->r[5]=c->r[30]|c->r[30]; // 801DEEA4
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DEEA8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DEEAC
  c->lr=0x801DEEB4u; f_801EF600(c); // 801DEEB0
  cmps(c,0,(int32_t)c->r[3],0); // 801DEEB4
  if (!crb(c,2)) { goto L_801DEEC4; } // 801DEEB8
  c->r[3]=0u+0x00000000u; // 801DEEBC
  goto L_801DEF10; // 801DEEC0
L_801DEEC4:;
  c->r[0]=R8(c->r[3]+0x00000016u); // 801DEEC4
  goto L_801DEED8; // 801DEEC8
L_801DEECC:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801DEECC
  c->r[3]=c->r[3]+c->r[0]; // 801DEED0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DEED4
L_801DEED8:;
  cmps(c,0,(int32_t)c->r[0],1); // 801DEED8
  if (crb(c,2)) { goto L_801DEEF4; } // 801DEEDC
  cmps(c,0,(int32_t)c->r[0],2); // 801DEEE0
  if (crb(c,2)) { goto L_801DEEFC; } // 801DEEE4
  cmps(c,0,(int32_t)c->r[0],3); // 801DEEE8
  if (crb(c,2)) { goto L_801DEF04; } // 801DEEEC
  goto L_801DEF0C; // 801DEEF0
L_801DEEF4:;
  c->r[3]=0u+0x00000001u; // 801DEEF4
  goto L_801DEF10; // 801DEEF8
L_801DEEFC:;
  c->r[3]=0u+0x00000002u; // 801DEEFC
  goto L_801DEF10; // 801DEF00
L_801DEF04:;
  c->r[3]=0u+0x00000003u; // 801DEF04
  goto L_801DEF10; // 801DEF08
L_801DEF0C:;
  c->r[3]=0u+0x00000000u; // 801DEF0C
L_801DEF10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEF10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEF14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEF18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEF1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DEF20
  c->lr=c->r[0]; // 801DEF24
  c->r[1]=c->r[1]+0x00000020u; // 801DEF28
  return; // 801DEF2C
}

// fn_801DEF30
void f_801DEF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEF30
  c->r[0]=c->lr; // 801DEF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEF38
  c->r[11]=c->r[1]+0x00000020u; // 801DEF3C
  c->lr=0x801DEF44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DEF40
  c->r[28]=R32(c->r[3]+0x00000028u); // 801DEF44
  c->r[30]=c->r[3]|c->r[3]; // 801DEF48
  c->r[27]=c->r[4]|c->r[4]; // 801DEF4C
  c->r[31]=c->r[5]|c->r[5]; // 801DEF50
  c->r[0]=R8(c->r[28]+0x00000001u); // 801DEF54
  cmps(c,0,(int32_t)c->r[0],0); // 801DEF58
  if (crb(c,2)) { goto L_801DEF78; } // 801DEF5C
  c->r[5]=0u+0x802D0000u; // 801DEF60
  c->r[3]=c->r[13]+0xFFFF9E80u; // 801DEF64
  c->r[5]=c->r[5]+0xFFFFFB30u; // 801DEF68
  c->r[4]=0u+0x0000008Du; // 801DEF6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEF70
  c->lr=0x801DEF78u; f_801F9770(c); // 801DEF74
L_801DEF78:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 801DEF78
  c->r[5]=c->r[28]|c->r[28]; // 801DEF7C
  c->r[4]=R32(c->r[28]+0x00000004u); // 801DEF80
  c->lr=0x801DEF88u; f_801EF600(c); // 801DEF84
  cmps(c,0,(int32_t)c->r[3],0); // 801DEF88
  c->r[29]=c->r[3]|c->r[3]; // 801DEF8C
  if (!crb(c,2)) { goto L_801DEF9C; } // 801DEF90
  c->r[3]=0u+0x00000000u; // 801DEF94
  goto L_801DF018; // 801DEF98
L_801DEF9C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DEF9C
  cmpu(c,0,c->r[27],c->r[0]); // 801DEFA0
  if (crb(c,0)) { goto L_801DEFB0; } // 801DEFA4
  c->r[3]=0u+0x00000000u; // 801DEFA8
  goto L_801DF018; // 801DEFAC
L_801DEFB0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DEFB0
  cmpu(c,0,c->r[0],0x00000101u); // 801DEFB4
  if (crb(c,0)) { goto L_801DF004; } // 801DEFB8
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801DEFBC
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DEFC0
  c->r[3]=c->r[3]+c->r[27]; // 801DEFC4
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DEFC8
  cmps(c,0,(int32_t)c->r[0],0); // 801DEFCC
  if (crb(c,2)) { goto L_801DEFEC; } // 801DEFD0
  c->r[5]=0u+0x802D0000u; // 801DEFD4
  c->r[3]=c->r[13]+0xFFFF9E88u; // 801DEFD8
  c->r[5]=c->r[5]+0xFFFFFB58u; // 801DEFDC
  c->r[4]=0u+0x0000008Du; // 801DEFE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DEFE4
  c->lr=0x801DEFECu; f_801F9770(c); // 801DEFE8
L_801DEFEC:;
  c->r[4]=c->r[29]+c->r[27]; // 801DEFEC
  c->r[5]=c->r[28]|c->r[28]; // 801DEFF0
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DEFF4
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DEFF8
  c->lr=0x801DF000u; f_801EF600(c); // 801DEFFC
  goto L_801DF018; // 801DF000
L_801DF004:;
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801DF004
  c->r[0]=R32(c->r[30]+0x00000028u); // 801DF008
  c->r[3]=c->r[3]+c->r[4]; // 801DF00C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DF010
  c->r[3]=c->r[3]+c->r[0]; // 801DF014
L_801DF018:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DF018
  if (!crb(c,2)) { goto L_801DF028; } // 801DF01C
  c->r[3]=0u+0x00000000u; // 801DF020
  goto L_801DF08C; // 801DF024
L_801DF028:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DF028
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DF02C
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DF030
  c->r[4]=R32(c->r[3]+0x00000008u); // 801DF034
  W32(c->r[31]+0x00000004u,c->r[4]); // 801DF038
  cmpu(c,0,c->r[0],0x00000102u); // 801DF03C
  c->r[0]=R8(c->r[3]+0x0000002Au); // 801DF040
  W32(c->r[31]+0x00000008u,c->r[0]); // 801DF044
  c->r[0]=R8(c->r[3]+0x00000015u); // 801DF048
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801DF04C
  c->r[0]=R8(c->r[3]+0x00000014u); // 801DF050
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DF054
  c->r[0]=R8(c->r[3]+0x00000017u); // 801DF058
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DF05C
  if (crb(c,0)) { goto L_801DF078; } // 801DF060
  c->r[0]=R8(c->r[3]+0x00000028u); // 801DF064
  W32(c->r[31]+0x00000018u,c->r[0]); // 801DF068
  c->r[0]=R8(c->r[3]+0x00000029u); // 801DF06C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801DF070
  goto L_801DF088; // 801DF074
L_801DF078:;
  c->r[3]=0u+0x00000001u; // 801DF078
  c->r[0]=0u+0x00000000u; // 801DF07C
  W32(c->r[31]+0x00000018u,c->r[3]); // 801DF080
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801DF084
L_801DF088:;
  c->r[3]=0u+0x00000001u; // 801DF088
L_801DF08C:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF08C
  c->lr=0x801DF094u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF090
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF094
  c->lr=c->r[0]; // 801DF098
  c->r[1]=c->r[1]+0x00000020u; // 801DF09C
  return; // 801DF0A0
}

// fn_801DF0B0
void f_801DF0B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF0B0
  c->r[0]=c->lr; // 801DF0B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF0B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF0BC
  c->r[31]=c->r[4]|c->r[4]; // 801DF0C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF0C4
  c->r[30]=c->r[5]|c->r[5]; // 801DF0C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DF0CC
  c->r[29]=c->r[3]|c->r[3]; // 801DF0D0
  c->lr=0x801DF0D8u; f_801DEDE0(c); // 801DF0D4
  cmps(c,0,(int32_t)c->r[3],1); // 801DF0D8
  if (crb(c,2)) { goto L_801DF0E8; } // 801DF0DC
  c->r[3]=0u+0x00000000u; // 801DF0E0
  goto L_801DF140; // 801DF0E4
L_801DF0E8:;
  c->r[3]=c->r[29]|c->r[29]; // 801DF0E8
  c->r[4]=c->r[31]|c->r[31]; // 801DF0EC
  c->r[5]=c->r[1]+0x00000008u; // 801DF0F0
  c->lr=0x801DF0F8u; f_801E0090(c); // 801DF0F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF0F8
  if (!crb(c,2)) { goto L_801DF108; } // 801DF0FC
  c->r[3]=0u+0x00000000u; // 801DF100
  goto L_801DF140; // 801DF104
L_801DF108:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801DF108
  c->r[31]=R32(c->r[29]+0x00000028u); // 801DF10C
  cmpu(c,0,c->r[0],0x00000001u); // 801DF110
  if (crb(c,2)) { goto L_801DF130; } // 801DF114
  c->r[5]=0u+0x802D0000u; // 801DF118
  c->r[3]=c->r[13]+0xFFFF9E28u; // 801DF11C
  c->r[5]=c->r[5]+0xFFFFF928u; // 801DF120
  c->r[4]=0u+0x0000008Eu; // 801DF124
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF128
  c->lr=0x801DF130u; f_801F9770(c); // 801DF12C
L_801DF130:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801DF130
  c->r[5]=c->r[31]|c->r[31]; // 801DF134
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801DF138
  c->lr=0x801DF140u; f_801EF600(c); // 801DF13C
L_801DF140:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DF140
  if (!crb(c,2)) { goto L_801DF150; } // 801DF144
  c->r[3]=0u+0x00000000u; // 801DF148
  goto L_801DF1A0; // 801DF14C
L_801DF150:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF150
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DF154
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DF158
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DF15C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801DF160
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DF164
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DF168
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DF16C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DF170
  cmpu(c,0,c->r[0],0x00000103u); // 801DF174
  if (crb(c,0)) { goto L_801DF194; } // 801DF178
  c->r[3]=R8(c->r[3]+0x0000000Du); // 801DF17C
  c->r[0]=0u-c->r[3]; // 801DF180
  c->r[0]=c->r[0]|c->r[3]; // 801DF184
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DF188
  W8(c->r[30]+0x00000010u,c->r[0]); // 801DF18C
  goto L_801DF19C; // 801DF190
L_801DF194:;
  c->r[0]=0u+0x00000000u; // 801DF194
  W8(c->r[30]+0x00000010u,c->r[0]); // 801DF198
L_801DF19C:;
  c->r[3]=0u+0x00000001u; // 801DF19C
L_801DF1A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF1A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF1A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF1A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF1AC
  c->lr=c->r[0]; // 801DF1B0
  c->r[1]=c->r[1]+0x00000020u; // 801DF1B4
  return; // 801DF1B8
}

// fn_801DF1C0
void f_801DF1C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF1C0
  c->r[0]=c->lr; // 801DF1C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF1C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF1CC
  c->r[31]=c->r[4]|c->r[4]; // 801DF1D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF1D4
  c->r[30]=c->r[5]|c->r[5]; // 801DF1D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DF1DC
  c->r[29]=c->r[3]|c->r[3]; // 801DF1E0
  c->lr=0x801DF1E8u; f_801DEDE0(c); // 801DF1E4
  cmps(c,0,(int32_t)c->r[3],2); // 801DF1E8
  if (crb(c,2)) { goto L_801DF1F8; } // 801DF1EC
  c->r[3]=0u+0x00000000u; // 801DF1F0
  goto L_801DF250; // 801DF1F4
L_801DF1F8:;
  c->r[3]=c->r[29]|c->r[29]; // 801DF1F8
  c->r[4]=c->r[31]|c->r[31]; // 801DF1FC
  c->r[5]=c->r[1]+0x00000008u; // 801DF200
  c->lr=0x801DF208u; f_801E0090(c); // 801DF204
  cmps(c,0,(int32_t)c->r[3],0); // 801DF208
  if (!crb(c,2)) { goto L_801DF218; } // 801DF20C
  c->r[3]=0u+0x00000000u; // 801DF210
  goto L_801DF250; // 801DF214
L_801DF218:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801DF218
  c->r[31]=R32(c->r[29]+0x00000028u); // 801DF21C
  cmpu(c,0,c->r[0],0x00000002u); // 801DF220
  if (crb(c,2)) { goto L_801DF240; } // 801DF224
  c->r[5]=0u+0x802D0000u; // 801DF228
  c->r[3]=c->r[13]+0xFFFF9E20u; // 801DF22C
  c->r[5]=c->r[5]+0xFFFFF900u; // 801DF230
  c->r[4]=0u+0x0000008Fu; // 801DF234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF238
  c->lr=0x801DF240u; f_801F9770(c); // 801DF23C
L_801DF240:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801DF240
  c->r[5]=c->r[31]|c->r[31]; // 801DF244
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801DF248
  c->lr=0x801DF250u; f_801EF600(c); // 801DF24C
L_801DF250:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DF250
  if (!crb(c,2)) { goto L_801DF260; } // 801DF254
  c->r[3]=0u+0x00000000u; // 801DF258
  goto L_801DF2D0; // 801DF25C
L_801DF260:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF260
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DF264
  c->r[0]=R16(c->r[3]+0x00000006u); // 801DF268
  W16(c->r[30]+0x00000006u,c->r[0]); // 801DF26C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DF270
  cmpu(c,0,c->r[0],0x00000104u); // 801DF274
  if (crb(c,0)) { goto L_801DF288; } // 801DF278
  c->r[0]=R16(c->r[3]+0x00000004u); // 801DF27C
  W16(c->r[30]+0x00000004u,c->r[0]); // 801DF280
  goto L_801DF2CC; // 801DF284
L_801DF288:;
  c->r[0]=0u+0x00000000u; // 801DF288
  W16(c->r[30]+0x00000004u,c->r[0]); // 801DF28C
  c->r[4]=R16(c->r[3]+0x00000004u); // 801DF290
  goto L_801DF2C4; // 801DF294
L_801DF298:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801DF298
  if (crb(c,2)) { goto L_801DF2B0; } // 801DF29C
  c->r[3]=R16(c->r[30]+0x00000004u); // 801DF2A0
  c->r[0]=c->r[3]+0x00000001u; // 801DF2A4
  W16(c->r[30]+0x00000004u,c->r[0]); // 801DF2A8
  goto L_801DF2C0; // 801DF2AC
L_801DF2B0:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DF2B0
  if (crb(c,2)) { goto L_801DF2C0; } // 801DF2B4
  c->r[3]=0u+0x00000000u; // 801DF2B8
  goto L_801DF2D0; // 801DF2BC
L_801DF2C0:;
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 801DF2C0
L_801DF2C4:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DF2C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF298; } // 801DF2C8
L_801DF2CC:;
  c->r[3]=0u+0x00000001u; // 801DF2CC
L_801DF2D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF2D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF2D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF2D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF2DC
  c->lr=c->r[0]; // 801DF2E0
  c->r[1]=c->r[1]+0x00000020u; // 801DF2E4
  return; // 801DF2E8
}

// fn_801DF2F0
void f_801DF2F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF2F0
  c->r[0]=c->lr; // 801DF2F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF2F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF2FC
  c->r[31]=c->r[4]|c->r[4]; // 801DF300
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF304
  c->r[30]=c->r[5]|c->r[5]; // 801DF308
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DF30C
  c->r[29]=c->r[3]|c->r[3]; // 801DF310
  c->lr=0x801DF318u; f_801DEDE0(c); // 801DF314
  cmps(c,0,(int32_t)c->r[3],3); // 801DF318
  if (crb(c,2)) { goto L_801DF328; } // 801DF31C
  c->r[3]=0u+0x00000000u; // 801DF320
  goto L_801DF380; // 801DF324
L_801DF328:;
  c->r[3]=c->r[29]|c->r[29]; // 801DF328
  c->r[4]=c->r[31]|c->r[31]; // 801DF32C
  c->r[5]=c->r[1]+0x00000008u; // 801DF330
  c->lr=0x801DF338u; f_801E0090(c); // 801DF334
  cmps(c,0,(int32_t)c->r[3],0); // 801DF338
  if (!crb(c,2)) { goto L_801DF348; } // 801DF33C
  c->r[3]=0u+0x00000000u; // 801DF340
  goto L_801DF380; // 801DF344
L_801DF348:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801DF348
  c->r[31]=R32(c->r[29]+0x00000028u); // 801DF34C
  cmpu(c,0,c->r[0],0x00000003u); // 801DF350
  if (crb(c,2)) { goto L_801DF370; } // 801DF354
  c->r[5]=0u+0x802D0000u; // 801DF358
  c->r[3]=c->r[13]+0xFFFF9E18u; // 801DF35C
  c->r[5]=c->r[5]+0xFFFFF8D8u; // 801DF360
  c->r[4]=0u+0x00000090u; // 801DF364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF368
  c->lr=0x801DF370u; f_801F9770(c); // 801DF36C
L_801DF370:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801DF370
  c->r[5]=c->r[31]|c->r[31]; // 801DF374
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801DF378
  c->lr=0x801DF380u; f_801EF600(c); // 801DF37C
L_801DF380:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DF380
  if (!crb(c,2)) { goto L_801DF390; } // 801DF384
  c->r[3]=0u+0x00000000u; // 801DF388
  goto L_801DF3D0; // 801DF38C
L_801DF390:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF390
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DF394
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DF398
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DF39C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DF3A0
  cmpu(c,0,c->r[0],0x00000103u); // 801DF3A4
  if (crb(c,0)) { goto L_801DF3C4; } // 801DF3A8
  c->r[3]=R8(c->r[3]+0x00000009u); // 801DF3AC
  c->r[0]=0u-c->r[3]; // 801DF3B0
  c->r[0]=c->r[0]|c->r[3]; // 801DF3B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DF3B8
  W8(c->r[30]+0x00000008u,c->r[0]); // 801DF3BC
  goto L_801DF3CC; // 801DF3C0
L_801DF3C4:;
  c->r[0]=0u+0x00000000u; // 801DF3C4
  W8(c->r[30]+0x00000008u,c->r[0]); // 801DF3C8
L_801DF3CC:;
  c->r[3]=0u+0x00000001u; // 801DF3CC
L_801DF3D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF3D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF3D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF3D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF3DC
  c->lr=c->r[0]; // 801DF3E0
  c->r[1]=c->r[1]+0x00000020u; // 801DF3E4
  return; // 801DF3E8
}

// fn_801DF3F0
void f_801DF3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF3F0
  c->r[0]=c->lr; // 801DF3F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF3F8
  c->r[11]=c->r[1]+0x00000020u; // 801DF3FC
  c->lr=0x801DF404u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF400
  c->r[30]=R32(c->r[3]+0x00000028u); // 801DF404
  c->r[27]=c->r[3]|c->r[3]; // 801DF408
  c->r[29]=c->r[4]|c->r[4]; // 801DF40C
  c->r[28]=c->r[5]|c->r[5]; // 801DF410
  c->r[0]=R8(c->r[30]+0x00000009u); // 801DF414
  cmps(c,0,(int32_t)c->r[0],0); // 801DF418
  if (crb(c,2)) { goto L_801DF438; } // 801DF41C
  c->r[5]=0u+0x802D0000u; // 801DF420
  c->r[3]=c->r[13]+0xFFFF9E50u; // 801DF424
  c->r[5]=c->r[5]+0xFFFFF9F0u; // 801DF428
  c->r[4]=0u+0x0000008Du; // 801DF42C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF430
  c->lr=0x801DF438u; f_801F9770(c); // 801DF434
L_801DF438:;
  c->r[3]=R8(c->r[30]+0x00000008u); // 801DF438
  c->r[5]=c->r[30]|c->r[30]; // 801DF43C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801DF440
  c->lr=0x801DF448u; f_801EF600(c); // 801DF444
  cmps(c,0,(int32_t)c->r[3],0); // 801DF448
  c->r[31]=c->r[3]|c->r[3]; // 801DF44C
  if (!crb(c,2)) { goto L_801DF45C; } // 801DF450
  c->r[3]=0u+0x00000000u; // 801DF454
  goto L_801DF4B4; // 801DF458
L_801DF45C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF45C
  cmpu(c,0,c->r[29],c->r[0]); // 801DF460
  if (crb(c,0)) { goto L_801DF470; } // 801DF464
  c->r[3]=0u+0x00000000u; // 801DF468
  goto L_801DF4B4; // 801DF46C
L_801DF470:;
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801DF470
  c->r[30]=R32(c->r[27]+0x00000028u); // 801DF474
  c->r[3]=c->r[3]+c->r[29]; // 801DF478
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DF47C
  cmps(c,0,(int32_t)c->r[0],0); // 801DF480
  if (crb(c,2)) { goto L_801DF4A0; } // 801DF484
  c->r[5]=0u+0x802D0000u; // 801DF488
  c->r[3]=c->r[13]+0xFFFF9E10u; // 801DF48C
  c->r[5]=c->r[5]+0xFFFFF8B0u; // 801DF490
  c->r[4]=0u+0x0000008Du; // 801DF494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF498
  c->lr=0x801DF4A0u; f_801F9770(c); // 801DF49C
L_801DF4A0:;
  c->r[4]=c->r[31]+c->r[29]; // 801DF4A0
  c->r[5]=c->r[30]|c->r[30]; // 801DF4A4
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DF4A8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DF4AC
  c->lr=0x801DF4B4u; f_801EF600(c); // 801DF4B0
L_801DF4B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4B4
  if (!crb(c,2)) { goto L_801DF4C4; } // 801DF4B8
  c->r[3]=0u+0x00000000u; // 801DF4BC
  goto L_801DF4D0; // 801DF4C0
L_801DF4C4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DF4C4
  c->r[3]=0u+0x00000001u; // 801DF4C8
  W32(c->r[28]+0x00000000u,c->r[0]); // 801DF4CC
L_801DF4D0:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF4D0
  c->lr=0x801DF4D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF4D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF4D8
  c->lr=c->r[0]; // 801DF4DC
  c->r[1]=c->r[1]+0x00000020u; // 801DF4E0
  return; // 801DF4E4
}

// fn_801DF4F0
void f_801DF4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF4F0
  c->r[0]=c->lr; // 801DF4F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF4F8
  c->r[11]=c->r[1]+0x00000020u; // 801DF4FC
  c->lr=0x801DF504u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF500
  c->r[30]=R32(c->r[3]+0x00000028u); // 801DF504
  c->r[27]=c->r[3]|c->r[3]; // 801DF508
  c->r[29]=c->r[4]|c->r[4]; // 801DF50C
  c->r[28]=c->r[5]|c->r[5]; // 801DF510
  c->r[0]=R8(c->r[30]+0x00000011u); // 801DF514
  cmps(c,0,(int32_t)c->r[0],0); // 801DF518
  if (crb(c,2)) { goto L_801DF538; } // 801DF51C
  c->r[5]=0u+0x802D0000u; // 801DF520
  c->r[3]=c->r[13]+0xFFFF9E60u; // 801DF524
  c->r[5]=c->r[5]+0xFFFFFA40u; // 801DF528
  c->r[4]=0u+0x0000008Du; // 801DF52C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF530
  c->lr=0x801DF538u; f_801F9770(c); // 801DF534
L_801DF538:;
  c->r[3]=R8(c->r[30]+0x00000010u); // 801DF538
  c->r[5]=c->r[30]|c->r[30]; // 801DF53C
  c->r[4]=R32(c->r[30]+0x00000014u); // 801DF540
  c->lr=0x801DF548u; f_801EF600(c); // 801DF544
  cmps(c,0,(int32_t)c->r[3],0); // 801DF548
  c->r[31]=c->r[3]|c->r[3]; // 801DF54C
  if (!crb(c,2)) { goto L_801DF55C; } // 801DF550
  c->r[4]=0u+0x00000000u; // 801DF554
  goto L_801DF5B8; // 801DF558
L_801DF55C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF55C
  cmpu(c,0,c->r[29],c->r[0]); // 801DF560
  if (crb(c,0)) { goto L_801DF570; } // 801DF564
  c->r[4]=0u+0x00000000u; // 801DF568
  goto L_801DF5B8; // 801DF56C
L_801DF570:;
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801DF570
  c->r[30]=R32(c->r[27]+0x00000028u); // 801DF574
  c->r[3]=c->r[3]+c->r[29]; // 801DF578
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DF57C
  cmps(c,0,(int32_t)c->r[0],0); // 801DF580
  if (crb(c,2)) { goto L_801DF5A0; } // 801DF584
  c->r[5]=0u+0x802D0000u; // 801DF588
  c->r[3]=c->r[13]+0xFFFF9E08u; // 801DF58C
  c->r[5]=c->r[5]+0xFFFFF888u; // 801DF590
  c->r[4]=0u+0x0000008Du; // 801DF594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF598
  c->lr=0x801DF5A0u; f_801F9770(c); // 801DF59C
L_801DF5A0:;
  c->r[4]=c->r[31]+c->r[29]; // 801DF5A0
  c->r[5]=c->r[30]|c->r[30]; // 801DF5A4
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DF5A8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DF5AC
  c->lr=0x801DF5B4u; f_801EF600(c); // 801DF5B0
  c->r[4]=c->r[3]|c->r[3]; // 801DF5B4
L_801DF5B8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DF5B8
  if (!crb(c,2)) { goto L_801DF5C8; } // 801DF5BC
  c->r[3]=0u+0x00000000u; // 801DF5C0
  goto L_801DF5DC; // 801DF5C4
L_801DF5C8:;
  c->r[0]=R8(c->r[4]+0x00000004u); // 801DF5C8
  c->r[3]=0u+0x00000001u; // 801DF5CC
  W32(c->r[28]+0x00000000u,c->r[0]); // 801DF5D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801DF5D4
  W32(c->r[28]+0x00000004u,c->r[0]); // 801DF5D8
L_801DF5DC:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF5DC
  c->lr=0x801DF5E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF5E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF5E4
  c->lr=c->r[0]; // 801DF5E8
  c->r[1]=c->r[1]+0x00000020u; // 801DF5EC
  return; // 801DF5F0
}

// fn_801DF600
void f_801DF600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF600
  c->r[0]=c->lr; // 801DF604
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF608
  c->r[11]=c->r[1]+0x00000020u; // 801DF60C
  c->lr=0x801DF614u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF610
  c->r[28]=R32(c->r[3]+0x00000028u); // 801DF614
  c->r[27]=c->r[3]|c->r[3]; // 801DF618
  c->r[29]=c->r[4]|c->r[4]; // 801DF61C
  c->r[31]=c->r[5]|c->r[5]; // 801DF620
  c->r[0]=R8(c->r[28]+0x00000021u); // 801DF624
  cmps(c,0,(int32_t)c->r[0],0); // 801DF628
  if (crb(c,2)) { goto L_801DF648; } // 801DF62C
  c->r[5]=0u+0x802D0000u; // 801DF630
  c->r[3]=c->r[13]+0xFFFF9E58u; // 801DF634
  c->r[5]=c->r[5]+0xFFFFFA18u; // 801DF638
  c->r[4]=0u+0x0000008Du; // 801DF63C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF640
  c->lr=0x801DF648u; f_801F9770(c); // 801DF644
L_801DF648:;
  c->r[3]=R8(c->r[28]+0x00000020u); // 801DF648
  c->r[5]=c->r[28]|c->r[28]; // 801DF64C
  c->r[4]=R32(c->r[28]+0x00000024u); // 801DF650
  c->lr=0x801DF658u; f_801EF600(c); // 801DF654
  cmps(c,0,(int32_t)c->r[3],0); // 801DF658
  c->r[30]=c->r[3]|c->r[3]; // 801DF65C
  if (!crb(c,2)) { goto L_801DF66C; } // 801DF660
  c->r[29]=0u+0x00000000u; // 801DF664
  goto L_801DF6C8; // 801DF668
L_801DF66C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF66C
  cmpu(c,0,c->r[29],c->r[0]); // 801DF670
  if (crb(c,0)) { goto L_801DF680; } // 801DF674
  c->r[29]=0u+0x00000000u; // 801DF678
  goto L_801DF6C8; // 801DF67C
L_801DF680:;
  c->r[28]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801DF680
  c->r[29]=R32(c->r[27]+0x00000028u); // 801DF684
  c->r[3]=c->r[3]+c->r[28]; // 801DF688
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DF68C
  cmps(c,0,(int32_t)c->r[0],0); // 801DF690
  if (crb(c,2)) { goto L_801DF6B0; } // 801DF694
  c->r[5]=0u+0x802D0000u; // 801DF698
  c->r[3]=c->r[13]+0xFFFF9E00u; // 801DF69C
  c->r[5]=c->r[5]+0xFFFFF860u; // 801DF6A0
  c->r[4]=0u+0x0000008Du; // 801DF6A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF6A8
  c->lr=0x801DF6B0u; f_801F9770(c); // 801DF6AC
L_801DF6B0:;
  c->r[4]=c->r[30]+c->r[28]; // 801DF6B0
  c->r[5]=c->r[29]|c->r[29]; // 801DF6B4
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DF6B8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DF6BC
  c->lr=0x801DF6C4u; f_801EF600(c); // 801DF6C0
  c->r[29]=c->r[3]|c->r[3]; // 801DF6C4
L_801DF6C8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DF6C8
  if (!crb(c,2)) { goto L_801DF6D8; } // 801DF6CC
  c->r[3]=0u+0x00000000u; // 801DF6D0
  goto L_801DF78C; // 801DF6D4
L_801DF6D8:;
  c->r[0]=R8(c->r[29]+0x00000021u); // 801DF6D8
  c->r[30]=R32(c->r[27]+0x00000028u); // 801DF6DC
  cmps(c,0,(int32_t)c->r[0],0); // 801DF6E0
  if (crb(c,2)) { goto L_801DF700; } // 801DF6E4
  c->r[5]=0u+0x802D0000u; // 801DF6E8
  c->r[3]=c->r[13]+0xFFFF9E78u; // 801DF6EC
  c->r[5]=c->r[5]+0xFFFFFAB8u; // 801DF6F0
  c->r[4]=0u+0x0000008Du; // 801DF6F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF6F8
  c->lr=0x801DF700u; f_801F9770(c); // 801DF6FC
L_801DF700:;
  c->r[3]=R8(c->r[29]+0x00000020u); // 801DF700
  c->r[5]=c->r[30]|c->r[30]; // 801DF704
  c->r[4]=R32(c->r[29]+0x00000024u); // 801DF708
  c->lr=0x801DF710u; f_801EF600(c); // 801DF70C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF710
  c->r[30]=c->r[3]|c->r[3]; // 801DF714
  if (!crb(c,2)) { goto L_801DF724; } // 801DF718
  c->r[3]=0u+0x00000000u; // 801DF71C
  goto L_801DF78C; // 801DF720
L_801DF724:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 801DF724
  c->r[28]=R32(c->r[27]+0x00000028u); // 801DF728
  cmps(c,0,(int32_t)c->r[0],0); // 801DF72C
  if (crb(c,2)) { goto L_801DF74C; } // 801DF730
  c->r[5]=0u+0x802D0000u; // 801DF734
  c->r[3]=c->r[13]+0xFFFF9DA8u; // 801DF738
  c->r[5]=c->r[5]+0xFFFFCE10u; // 801DF73C
  c->r[4]=0u+0x0000008Du; // 801DF740
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF744
  c->lr=0x801DF74Cu; f_801F9770(c); // 801DF748
L_801DF74C:;
  c->r[3]=R8(c->r[29]+0x00000008u); // 801DF74C
  c->r[5]=c->r[28]|c->r[28]; // 801DF750
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801DF754
  c->lr=0x801DF75Cu; f_801EF600(c); // 801DF758
  W32(c->r[31]+0x00000004u,c->r[3]); // 801DF75C
  c->r[3]=0u+0x00000001u; // 801DF760
  c->r[0]=R32(c->r[29]+0x00000010u); // 801DF764
  W32(c->r[31]+0x00000008u,c->r[0]); // 801DF768
  c->r[0]=R32(c->r[29]+0x00000014u); // 801DF76C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801DF770
  c->r[0]=R32(c->r[29]+0x00000018u); // 801DF774
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DF778
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801DF77C
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DF780
  c->r[0]=R32(c->r[30]+0x00000000u); // 801DF784
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DF788
L_801DF78C:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF78C
  c->lr=0x801DF794u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF790
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF794
  c->lr=c->r[0]; // 801DF798
  c->r[1]=c->r[1]+0x00000020u; // 801DF79C
  return; // 801DF7A0
}

// fn_801DF7B0
void f_801DF7B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF7B0
  c->r[0]=c->lr; // 801DF7B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF7B8
  c->r[11]=c->r[1]+0x00000020u; // 801DF7BC
  c->lr=0x801DF7C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF7C0
  c->r[28]=R32(c->r[3]+0x00000028u); // 801DF7C4
  c->r[30]=c->r[3]|c->r[3]; // 801DF7C8
  c->r[27]=c->r[4]|c->r[4]; // 801DF7CC
  c->r[26]=c->r[5]|c->r[5]; // 801DF7D0
  c->r[0]=R8(c->r[28]+0x00000021u); // 801DF7D4
  c->r[31]=c->r[6]|c->r[6]; // 801DF7D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DF7DC
  if (crb(c,2)) { goto L_801DF7FC; } // 801DF7E0
  c->r[5]=0u+0x802D0000u; // 801DF7E4
  c->r[3]=c->r[13]+0xFFFF9E58u; // 801DF7E8
  c->r[5]=c->r[5]+0xFFFFFA18u; // 801DF7EC
  c->r[4]=0u+0x0000008Du; // 801DF7F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF7F4
  c->lr=0x801DF7FCu; f_801F9770(c); // 801DF7F8
L_801DF7FC:;
  c->r[3]=R8(c->r[28]+0x00000020u); // 801DF7FC
  c->r[5]=c->r[28]|c->r[28]; // 801DF800
  c->r[4]=R32(c->r[28]+0x00000024u); // 801DF804
  c->lr=0x801DF80Cu; f_801EF600(c); // 801DF808
  cmps(c,0,(int32_t)c->r[3],0); // 801DF80C
  c->r[29]=c->r[3]|c->r[3]; // 801DF810
  if (!crb(c,2)) { goto L_801DF820; } // 801DF814
  c->r[29]=0u+0x00000000u; // 801DF818
  goto L_801DF87C; // 801DF81C
L_801DF820:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF820
  cmpu(c,0,c->r[27],c->r[0]); // 801DF824
  if (crb(c,0)) { goto L_801DF834; } // 801DF828
  c->r[29]=0u+0x00000000u; // 801DF82C
  goto L_801DF87C; // 801DF830
L_801DF834:;
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801DF834
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DF838
  c->r[3]=c->r[3]+c->r[27]; // 801DF83C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DF840
  cmps(c,0,(int32_t)c->r[0],0); // 801DF844
  if (crb(c,2)) { goto L_801DF864; } // 801DF848
  c->r[5]=0u+0x802D0000u; // 801DF84C
  c->r[3]=c->r[13]+0xFFFF9E00u; // 801DF850
  c->r[5]=c->r[5]+0xFFFFF860u; // 801DF854
  c->r[4]=0u+0x0000008Du; // 801DF858
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF85C
  c->lr=0x801DF864u; f_801F9770(c); // 801DF860
L_801DF864:;
  c->r[4]=c->r[29]+c->r[27]; // 801DF864
  c->r[5]=c->r[28]|c->r[28]; // 801DF868
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DF86C
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DF870
  c->lr=0x801DF878u; f_801EF600(c); // 801DF874
  c->r[29]=c->r[3]|c->r[3]; // 801DF878
L_801DF87C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DF87C
  if (!crb(c,2)) { goto L_801DF88C; } // 801DF880
  c->r[3]=0u+0x00000000u; // 801DF884
  goto L_801DF96C; // 801DF888
L_801DF88C:;
  c->r[0]=R8(c->r[29]+0x00000021u); // 801DF88C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DF890
  cmps(c,0,(int32_t)c->r[0],0); // 801DF894
  if (crb(c,2)) { goto L_801DF8B4; } // 801DF898
  c->r[5]=0u+0x802D0000u; // 801DF89C
  c->r[3]=c->r[13]+0xFFFF9E78u; // 801DF8A0
  c->r[5]=c->r[5]+0xFFFFFAB8u; // 801DF8A4
  c->r[4]=0u+0x0000008Du; // 801DF8A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF8AC
  c->lr=0x801DF8B4u; f_801F9770(c); // 801DF8B0
L_801DF8B4:;
  c->r[3]=R8(c->r[29]+0x00000020u); // 801DF8B4
  c->r[5]=c->r[28]|c->r[28]; // 801DF8B8
  c->r[4]=R32(c->r[29]+0x00000024u); // 801DF8BC
  c->lr=0x801DF8C4u; f_801EF600(c); // 801DF8C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF8C4
  c->r[29]=c->r[3]|c->r[3]; // 801DF8C8
  if (!crb(c,2)) { goto L_801DF8D8; } // 801DF8CC
  c->r[3]=0u+0x00000000u; // 801DF8D0
  goto L_801DF96C; // 801DF8D4
L_801DF8D8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF8D8
  cmpu(c,0,c->r[26],c->r[0]); // 801DF8DC
  if (crb(c,0)) { goto L_801DF8EC; } // 801DF8E0
  c->r[3]=0u+0x00000000u; // 801DF8E4
  goto L_801DF96C; // 801DF8E8
L_801DF8EC:;
  c->r[27]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801DF8EC
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DF8F0
  c->r[3]=c->r[3]+c->r[27]; // 801DF8F4
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DF8F8
  cmps(c,0,(int32_t)c->r[0],0); // 801DF8FC
  if (crb(c,2)) { goto L_801DF91C; } // 801DF900
  c->r[5]=0u+0x802D0000u; // 801DF904
  c->r[3]=c->r[13]+0xFFFF9E70u; // 801DF908
  c->r[5]=c->r[5]+0xFFFFFA90u; // 801DF90C
  c->r[4]=0u+0x0000008Du; // 801DF910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF914
  c->lr=0x801DF91Cu; f_801F9770(c); // 801DF918
L_801DF91C:;
  c->r[4]=c->r[29]+c->r[27]; // 801DF91C
  c->r[5]=c->r[28]|c->r[28]; // 801DF920
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DF924
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DF928
  c->lr=0x801DF930u; f_801EF600(c); // 801DF92C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF930
  if (!crb(c,2)) { goto L_801DF940; } // 801DF934
  c->r[3]=0u+0x00000000u; // 801DF938
  goto L_801DF96C; // 801DF93C
L_801DF940:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DF940
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DF944
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DF948
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DF94C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DF950
  W32(c->r[31]+0x00000008u,c->r[0]); // 801DF954
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801DF958
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801DF95C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DF960
  c->r[3]=0u+0x00000001u; // 801DF964
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DF968
L_801DF96C:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF96C
  c->lr=0x801DF974u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF970
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF974
  c->lr=c->r[0]; // 801DF978
  c->r[1]=c->r[1]+0x00000020u; // 801DF97C
  return; // 801DF980
}

// fn_801DF990
void f_801DF990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF990
  c->r[0]=c->lr; // 801DF994
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF99C
  c->r[31]=R32(c->r[3]+0x00000028u); // 801DF9A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF9A4
  c->r[30]=c->r[4]|c->r[4]; // 801DF9A8
  c->r[0]=R8(c->r[31]+0x00000029u); // 801DF9AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DF9B0
  if (crb(c,2)) { goto L_801DF9D0; } // 801DF9B4
  c->r[5]=0u+0x802D0000u; // 801DF9B8
  c->r[3]=c->r[13]+0xFFFF9E68u; // 801DF9BC
  c->r[5]=c->r[5]+0xFFFFFA68u; // 801DF9C0
  c->r[4]=0u+0x0000008Du; // 801DF9C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF9C8
  c->lr=0x801DF9D0u; f_801F9770(c); // 801DF9CC
L_801DF9D0:;
  c->r[3]=R8(c->r[31]+0x00000028u); // 801DF9D0
  c->r[5]=c->r[31]|c->r[31]; // 801DF9D4
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 801DF9D8
  c->lr=0x801DF9E0u; f_801EF600(c); // 801DF9DC
  cmps(c,0,(int32_t)c->r[30],0); // 801DF9E0
  if (!crb(c,2)) { goto L_801DF9F0; } // 801DF9E4
  c->r[3]=0u+0x00000000u; // 801DF9E8
  goto L_801DFA2C; // 801DF9EC
L_801DF9F0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 801DF9F0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DF9F4
  c->r[0]=R16(c->r[3]+0x00000002u); // 801DF9F8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DF9FC
  c->r[0]=R16(c->r[3]+0x00000004u); // 801DFA00
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DFA04
  c->r[0]=R16(c->r[3]+0x00000006u); // 801DFA08
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DFA0C
  c->r[0]=R16(c->r[3]+0x00000008u); // 801DFA10
  W32(c->r[30]+0x00000010u,c->r[0]); // 801DFA14
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801DFA18
  W32(c->r[30]+0x00000014u,c->r[0]); // 801DFA1C
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 801DFA20
  c->r[3]=0u+0x00000001u; // 801DFA24
  W32(c->r[30]+0x00000018u,c->r[0]); // 801DFA28
L_801DFA2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFA2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFA30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFA34
  c->lr=c->r[0]; // 801DFA38
  c->r[1]=c->r[1]+0x00000010u; // 801DFA3C
  return; // 801DFA40
}

// fn_801DFA50
void f_801DFA50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFA50
  c->r[0]=c->lr; // 801DFA54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFA58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFA5C
  c->r[31]=R32(c->r[3]+0x00000028u); // 801DFA60
  c->r[0]=R8(c->r[31]+0x00000011u); // 801DFA64
  cmps(c,0,(int32_t)c->r[0],0); // 801DFA68
  if (crb(c,2)) { goto L_801DFA88; } // 801DFA6C
  c->r[5]=0u+0x802D0000u; // 801DFA70
  c->r[3]=c->r[13]+0xFFFF9E60u; // 801DFA74
  c->r[5]=c->r[5]+0xFFFFFA40u; // 801DFA78
  c->r[4]=0u+0x0000008Du; // 801DFA7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFA80
  c->lr=0x801DFA88u; f_801F9770(c); // 801DFA84
L_801DFA88:;
  c->r[3]=R8(c->r[31]+0x00000010u); // 801DFA88
  c->r[5]=c->r[31]|c->r[31]; // 801DFA8C
  c->r[4]=R32(c->r[31]+0x00000014u); // 801DFA90
  c->lr=0x801DFA98u; f_801EF600(c); // 801DFA94
  cmps(c,0,(int32_t)c->r[3],0); // 801DFA98
  if (!crb(c,2)) { goto L_801DFAA8; } // 801DFA9C
  c->r[3]=0u+0x00000000u; // 801DFAA0
  goto L_801DFAAC; // 801DFAA4
L_801DFAA8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DFAA8
L_801DFAAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFAAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFAB0
  c->lr=c->r[0]; // 801DFAB4
  c->r[1]=c->r[1]+0x00000010u; // 801DFAB8
  return; // 801DFABC
}

// fn_801DFAC0
void f_801DFAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFAC0
  c->r[0]=c->lr; // 801DFAC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFAC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFACC
  c->r[31]=R32(c->r[3]+0x00000028u); // 801DFAD0
  c->r[0]=R8(c->r[31]+0x00000021u); // 801DFAD4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFAD8
  if (crb(c,2)) { goto L_801DFAF8; } // 801DFADC
  c->r[5]=0u+0x802D0000u; // 801DFAE0
  c->r[3]=c->r[13]+0xFFFF9E58u; // 801DFAE4
  c->r[5]=c->r[5]+0xFFFFFA18u; // 801DFAE8
  c->r[4]=0u+0x0000008Du; // 801DFAEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFAF0
  c->lr=0x801DFAF8u; f_801F9770(c); // 801DFAF4
L_801DFAF8:;
  c->r[3]=R8(c->r[31]+0x00000020u); // 801DFAF8
  c->r[5]=c->r[31]|c->r[31]; // 801DFAFC
  c->r[4]=R32(c->r[31]+0x00000024u); // 801DFB00
  c->lr=0x801DFB08u; f_801EF600(c); // 801DFB04
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB08
  if (!crb(c,2)) { goto L_801DFB18; } // 801DFB0C
  c->r[3]=0u+0x00000000u; // 801DFB10
  goto L_801DFB20; // 801DFB14
L_801DFB18:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DFB18
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DFB1C
L_801DFB20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFB20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFB24
  c->lr=c->r[0]; // 801DFB28
  c->r[1]=c->r[1]+0x00000010u; // 801DFB2C
  return; // 801DFB30
}

// fn_801DFB40
void f_801DFB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFB40
  c->r[0]=c->lr; // 801DFB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFB48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFB4C
  c->r[31]=R32(c->r[3]+0x00000028u); // 801DFB50
  c->r[0]=R8(c->r[31]+0x00000019u); // 801DFB54
  cmps(c,0,(int32_t)c->r[0],0); // 801DFB58
  if (crb(c,2)) { goto L_801DFB78; } // 801DFB5C
  c->r[5]=0u+0x802D0000u; // 801DFB60
  c->r[3]=c->r[13]+0xFFFF9E48u; // 801DFB64
  c->r[5]=c->r[5]+0xFFFFF9C8u; // 801DFB68
  c->r[4]=0u+0x0000008Du; // 801DFB6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFB70
  c->lr=0x801DFB78u; f_801F9770(c); // 801DFB74
L_801DFB78:;
  c->r[3]=R8(c->r[31]+0x00000018u); // 801DFB78
  c->r[5]=c->r[31]|c->r[31]; // 801DFB7C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801DFB80
  c->lr=0x801DFB88u; f_801EF600(c); // 801DFB84
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB88
  if (!crb(c,2)) { goto L_801DFB98; } // 801DFB8C
  c->r[3]=0u+0x00000000u; // 801DFB90
  goto L_801DFB9C; // 801DFB94
L_801DFB98:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DFB98
L_801DFB9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFB9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFBA0
  c->lr=c->r[0]; // 801DFBA4
  c->r[1]=c->r[1]+0x00000010u; // 801DFBA8
  return; // 801DFBAC
}

// fn_801DFBB0
void f_801DFBB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFBB0
  c->r[0]=c->lr; // 801DFBB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFBB8
  c->r[11]=c->r[1]+0x00000020u; // 801DFBBC
  c->lr=0x801DFBC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFBC0
  c->r[28]=R32(c->r[3]+0x00000028u); // 801DFBC4
  c->r[27]=c->r[3]|c->r[3]; // 801DFBC8
  c->r[30]=c->r[4]|c->r[4]; // 801DFBCC
  c->r[31]=c->r[5]|c->r[5]; // 801DFBD0
  c->r[0]=R8(c->r[28]+0x00000019u); // 801DFBD4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFBD8
  if (crb(c,2)) { goto L_801DFBF8; } // 801DFBDC
  c->r[5]=0u+0x802D0000u; // 801DFBE0
  c->r[3]=c->r[13]+0xFFFF9E48u; // 801DFBE4
  c->r[5]=c->r[5]+0xFFFFF9C8u; // 801DFBE8
  c->r[4]=0u+0x0000008Du; // 801DFBEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFBF0
  c->lr=0x801DFBF8u; f_801F9770(c); // 801DFBF4
L_801DFBF8:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 801DFBF8
  c->r[5]=c->r[28]|c->r[28]; // 801DFBFC
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801DFC00
  c->lr=0x801DFC08u; f_801EF600(c); // 801DFC04
  cmps(c,0,(int32_t)c->r[3],0); // 801DFC08
  c->r[29]=c->r[3]|c->r[3]; // 801DFC0C
  if (!crb(c,2)) { goto L_801DFC1C; } // 801DFC10
  c->r[3]=0u+0x00000000u; // 801DFC14
  goto L_801DFD2C; // 801DFC18
L_801DFC1C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFC1C
  cmpu(c,0,c->r[30],c->r[0]); // 801DFC20
  if (crb(c,0)) { goto L_801DFC30; } // 801DFC24
  c->r[3]=0u+0x00000000u; // 801DFC28
  goto L_801DFD2C; // 801DFC2C
L_801DFC30:;
  c->r[28]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801DFC30
  c->r[30]=R32(c->r[27]+0x00000028u); // 801DFC34
  c->r[3]=c->r[3]+c->r[28]; // 801DFC38
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DFC3C
  cmps(c,0,(int32_t)c->r[0],0); // 801DFC40
  if (crb(c,2)) { goto L_801DFC60; } // 801DFC44
  c->r[5]=0u+0x802D0000u; // 801DFC48
  c->r[3]=c->r[13]+0xFFFF9E38u; // 801DFC4C
  c->r[5]=c->r[5]+0xFFFFF978u; // 801DFC50
  c->r[4]=0u+0x0000008Du; // 801DFC54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFC58
  c->lr=0x801DFC60u; f_801F9770(c); // 801DFC5C
L_801DFC60:;
  c->r[4]=c->r[29]+c->r[28]; // 801DFC60
  c->r[5]=c->r[30]|c->r[30]; // 801DFC64
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DFC68
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DFC6C
  c->lr=0x801DFC74u; f_801EF600(c); // 801DFC70
  cmps(c,0,(int32_t)c->r[3],0); // 801DFC74
  c->r[29]=c->r[3]|c->r[3]; // 801DFC78
  if (!crb(c,2)) { goto L_801DFC88; } // 801DFC7C
  c->r[3]=0u+0x00000000u; // 801DFC80
  goto L_801DFD2C; // 801DFC84
L_801DFC88:;
  c->r[0]=R8(c->r[3]+0x00000015u); // 801DFC88
  c->r[30]=R32(c->r[27]+0x00000028u); // 801DFC8C
  cmps(c,0,(int32_t)c->r[0],0); // 801DFC90
  if (crb(c,2)) { goto L_801DFCB0; } // 801DFC94
  c->r[5]=0u+0x802D0000u; // 801DFC98
  c->r[3]=c->r[13]+0xFFFF9E40u; // 801DFC9C
  c->r[5]=c->r[5]+0xFFFFF9A0u; // 801DFCA0
  c->r[4]=0u+0x0000008Du; // 801DFCA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFCA8
  c->lr=0x801DFCB0u; f_801F9770(c); // 801DFCAC
L_801DFCB0:;
  c->r[3]=R8(c->r[29]+0x00000014u); // 801DFCB0
  c->r[5]=c->r[30]|c->r[30]; // 801DFCB4
  c->r[4]=R32(c->r[29]+0x00000018u); // 801DFCB8
  c->lr=0x801DFCC0u; f_801EF600(c); // 801DFCBC
  cmps(c,0,(int32_t)c->r[3],0); // 801DFCC0
  c->r[30]=c->r[3]|c->r[3]; // 801DFCC4
  if (!crb(c,2)) { goto L_801DFCD4; } // 801DFCC8
  c->r[3]=0u+0x00000000u; // 801DFCCC
  goto L_801DFD2C; // 801DFCD0
L_801DFCD4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DFCD4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DFCD8
  c->r[28]=R32(c->r[27]+0x00000028u); // 801DFCDC
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DFCE0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DFCE4
  c->r[0]=R8(c->r[29]+0x0000000Du); // 801DFCE8
  cmps(c,0,(int32_t)c->r[0],0); // 801DFCEC
  if (crb(c,2)) { goto L_801DFD0C; } // 801DFCF0
  c->r[5]=0u+0x802D0000u; // 801DFCF4
  c->r[3]=c->r[13]+0xFFFF9DA8u; // 801DFCF8
  c->r[5]=c->r[5]+0xFFFFCE10u; // 801DFCFC
  c->r[4]=0u+0x0000008Du; // 801DFD00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFD04
  c->lr=0x801DFD0Cu; f_801F9770(c); // 801DFD08
L_801DFD0C:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 801DFD0C
  c->r[5]=c->r[28]|c->r[28]; // 801DFD10
  c->r[4]=R32(c->r[29]+0x00000010u); // 801DFD14
  c->lr=0x801DFD1Cu; f_801EF600(c); // 801DFD18
  W32(c->r[31]+0x00000008u,c->r[3]); // 801DFD1C
  c->r[3]=0u+0x00000001u; // 801DFD20
  c->r[0]=R32(c->r[30]+0x00000000u); // 801DFD24
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801DFD28
L_801DFD2C:;
  c->r[11]=c->r[1]+0x00000020u; // 801DFD2C
  c->lr=0x801DFD34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DFD30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFD34
  c->lr=c->r[0]; // 801DFD38
  c->r[1]=c->r[1]+0x00000020u; // 801DFD3C
  return; // 801DFD40
}

// fn_801DFD50
void f_801DFD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFD50
  c->r[0]=c->lr; // 801DFD54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFD58
  c->r[11]=c->r[1]+0x00000020u; // 801DFD5C
  c->lr=0x801DFD64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFD60
  c->r[28]=R32(c->r[3]+0x00000028u); // 801DFD64
  c->r[30]=c->r[3]|c->r[3]; // 801DFD68
  c->r[27]=c->r[4]|c->r[4]; // 801DFD6C
  c->r[26]=c->r[5]|c->r[5]; // 801DFD70
  c->r[0]=R8(c->r[28]+0x00000019u); // 801DFD74
  c->r[31]=c->r[6]|c->r[6]; // 801DFD78
  cmps(c,0,(int32_t)c->r[0],0); // 801DFD7C
  if (crb(c,2)) { goto L_801DFD9C; } // 801DFD80
  c->r[5]=0u+0x802D0000u; // 801DFD84
  c->r[3]=c->r[13]+0xFFFF9E48u; // 801DFD88
  c->r[5]=c->r[5]+0xFFFFF9C8u; // 801DFD8C
  c->r[4]=0u+0x0000008Du; // 801DFD90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFD94
  c->lr=0x801DFD9Cu; f_801F9770(c); // 801DFD98
L_801DFD9C:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 801DFD9C
  c->r[5]=c->r[28]|c->r[28]; // 801DFDA0
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801DFDA4
  c->lr=0x801DFDACu; f_801EF600(c); // 801DFDA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DFDAC
  c->r[29]=c->r[3]|c->r[3]; // 801DFDB0
  if (!crb(c,2)) { goto L_801DFDC0; } // 801DFDB4
  c->r[3]=0u+0x00000000u; // 801DFDB8
  goto L_801DFEF4; // 801DFDBC
L_801DFDC0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFDC0
  cmpu(c,0,c->r[27],c->r[0]); // 801DFDC4
  if (crb(c,0)) { goto L_801DFDD4; } // 801DFDC8
  c->r[3]=0u+0x00000000u; // 801DFDCC
  goto L_801DFEF4; // 801DFDD0
L_801DFDD4:;
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801DFDD4
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DFDD8
  c->r[3]=c->r[3]+c->r[27]; // 801DFDDC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DFDE0
  cmps(c,0,(int32_t)c->r[0],0); // 801DFDE4
  if (crb(c,2)) { goto L_801DFE04; } // 801DFDE8
  c->r[5]=0u+0x802D0000u; // 801DFDEC
  c->r[3]=c->r[13]+0xFFFF9E38u; // 801DFDF0
  c->r[5]=c->r[5]+0xFFFFF978u; // 801DFDF4
  c->r[4]=0u+0x0000008Du; // 801DFDF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFDFC
  c->lr=0x801DFE04u; f_801F9770(c); // 801DFE00
L_801DFE04:;
  c->r[4]=c->r[29]+c->r[27]; // 801DFE04
  c->r[5]=c->r[28]|c->r[28]; // 801DFE08
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DFE0C
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DFE10
  c->lr=0x801DFE18u; f_801EF600(c); // 801DFE14
  cmps(c,0,(int32_t)c->r[3],0); // 801DFE18
  c->r[29]=c->r[3]|c->r[3]; // 801DFE1C
  if (!crb(c,2)) { goto L_801DFE2C; } // 801DFE20
  c->r[3]=0u+0x00000000u; // 801DFE24
  goto L_801DFEF4; // 801DFE28
L_801DFE2C:;
  c->r[0]=R8(c->r[3]+0x00000015u); // 801DFE2C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DFE30
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE34
  if (crb(c,2)) { goto L_801DFE54; } // 801DFE38
  c->r[5]=0u+0x802D0000u; // 801DFE3C
  c->r[3]=c->r[13]+0xFFFF9E40u; // 801DFE40
  c->r[5]=c->r[5]+0xFFFFF9A0u; // 801DFE44
  c->r[4]=0u+0x0000008Du; // 801DFE48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFE4C
  c->lr=0x801DFE54u; f_801F9770(c); // 801DFE50
L_801DFE54:;
  c->r[3]=R8(c->r[29]+0x00000014u); // 801DFE54
  c->r[5]=c->r[28]|c->r[28]; // 801DFE58
  c->r[4]=R32(c->r[29]+0x00000018u); // 801DFE5C
  c->lr=0x801DFE64u; f_801EF600(c); // 801DFE60
  cmps(c,0,(int32_t)c->r[3],0); // 801DFE64
  c->r[29]=c->r[3]|c->r[3]; // 801DFE68
  if (!crb(c,2)) { goto L_801DFE78; } // 801DFE6C
  c->r[3]=0u+0x00000000u; // 801DFE70
  goto L_801DFEF4; // 801DFE74
L_801DFE78:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFE78
  cmpu(c,0,c->r[26],c->r[0]); // 801DFE7C
  if (crb(c,0)) { goto L_801DFE8C; } // 801DFE80
  c->r[3]=0u+0x00000000u; // 801DFE84
  goto L_801DFEF4; // 801DFE88
L_801DFE8C:;
  c->r[27]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801DFE8C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801DFE90
  c->r[3]=c->r[3]+c->r[27]; // 801DFE94
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DFE98
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE9C
  if (crb(c,2)) { goto L_801DFEBC; } // 801DFEA0
  c->r[5]=0u+0x802D0000u; // 801DFEA4
  c->r[3]=c->r[13]+0xFFFF9E30u; // 801DFEA8
  c->r[5]=c->r[5]+0xFFFFF950u; // 801DFEAC
  c->r[4]=0u+0x0000008Du; // 801DFEB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DFEB4
  c->lr=0x801DFEBCu; f_801F9770(c); // 801DFEB8
L_801DFEBC:;
  c->r[4]=c->r[29]+c->r[27]; // 801DFEBC
  c->r[5]=c->r[28]|c->r[28]; // 801DFEC0
  c->r[3]=R8(c->r[4]+0x00000004u); // 801DFEC4
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DFEC8
  c->lr=0x801DFED0u; f_801EF600(c); // 801DFECC
  cmps(c,0,(int32_t)c->r[3],0); // 801DFED0
  if (!crb(c,2)) { goto L_801DFEE0; } // 801DFED4
  c->r[3]=0u+0x00000000u; // 801DFED8
  goto L_801DFEF4; // 801DFEDC
L_801DFEE0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFEE0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DFEE4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DFEE8
  c->r[3]=0u+0x00000001u; // 801DFEEC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DFEF0
L_801DFEF4:;
  c->r[11]=c->r[1]+0x00000020u; // 801DFEF4
  c->lr=0x801DFEFCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DFEF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFEFC
  c->lr=c->r[0]; // 801DFF00
  c->r[1]=c->r[1]+0x00000020u; // 801DFF04
  return; // 801DFF08
}

// fn_801DFF10
void f_801DFF10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFF10
  c->r[0]=c->lr; // 801DFF14
  cmps(c,0,(int32_t)c->r[4],0); // 801DFF18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFF1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFF20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFF24
  c->r[30]=c->r[5]|c->r[5]; // 801DFF28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFF2C
  c->r[29]=c->r[4]|c->r[4]; // 801DFF30
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DFF34
  c->r[28]=c->r[3]|c->r[3]; // 801DFF38
  if (!crb(c,2)) { goto L_801DFF48; } // 801DFF3C
  c->r[3]=0u+0xFFFFFFFFu; // 801DFF40
  goto L_801E0068; // 801DFF44
L_801DFF48:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801DFF48
  c->r[0]=R32(c->r[4]+0x00000004u); // 801DFF4C
  cmpu(c,0,c->r[3],c->r[0]); // 801DFF50
  if (crb(c,0)) { goto L_801DFF60; } // 801DFF54
  c->r[3]=0u+0xFFFFFFFFu; // 801DFF58
  goto L_801E0068; // 801DFF5C
L_801DFF60:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801DFF60
  c->r[3]=c->r[30]|c->r[30]; // 801DFF64
  c->r[4]=c->r[4]+c->r[0]; // 801DFF68
  c->r[31]=c->r[4]+0x00000008u; // 801DFF6C
  c->lr=0x801DFF74u; f_80216B70(c); // 801DFF70
  c->r[5]=0u+0x00000001u; // 801DFF74
  goto L_801DFFC4; // 801DFF78
  c->r[0]=c->r[0]|0x00000000u; // 801DFF7C
L_801DFF80:;
  c->r[0]=R16(c->r[31]+0x00000002u); // 801DFF80
  c->r[4]=sraw(c,c->r[0],3); // 801DFF84
  c->r[6]=rotl(c->r[0],0)&0x00000007u; // 801DFF88
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801DFF8C
  if (!crb(c,0)) { goto L_801DFFB4; } // 801DFF90
  c->r[0]=R8(c->r[30]+c->r[4]); // 801DFF94
  c->r[4]=addc(c,~c->r[6],0x00000007u,1); // 801DFF98
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801DFF9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DFFA0
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801DFFA4
  if (crb(c,2)) { goto L_801DFFB4; } // 801DFFA8
  c->r[0]=R32(c->r[31]+0x00000008u); // 801DFFAC
  goto L_801DFFB8; // 801DFFB0
L_801DFFB4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DFFB4
L_801DFFB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801DFFB8
  c->r[4]=c->r[29]+c->r[0]; // 801DFFBC
  c->r[31]=c->r[4]+0x00000008u; // 801DFFC0
L_801DFFC4:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801DFFC4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DFFC8
  if (crb(c,2)) { IRQCHK(c); goto L_801DFF80; } // 801DFFCC
  c->r[29]=R32(c->r[31]+0x0000000Cu); // 801DFFD0
  c->r[0]=c->r[29]+0x00010000u; // 801DFFD4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DFFD8
  if (!crb(c,2)) { goto L_801DFFE8; } // 801DFFDC
  c->r[4]=0u+0x00000000u; // 801DFFE0
  goto L_801E004C; // 801DFFE4
L_801DFFE8:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 801DFFE8
  cmps(c,0,(int32_t)c->r[3],0); // 801DFFEC
  if (!crb(c,2)) { goto L_801DFFFC; } // 801DFFF0
  c->r[4]=0u+0x00000000u; // 801DFFF4
  goto L_801E004C; // 801DFFF8
L_801DFFFC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFFFC
  cmpu(c,0,c->r[29],c->r[0]); // 801E0000
  if (crb(c,0)) { goto L_801E0024; } // 801E0004
  c->r[3]=0u+0x802D0000u; // 801E0008
  c->r[5]=0u+0x802D0000u; // 801E000C
  c->r[3]=c->r[3]+0xFFFFF620u; // 801E0010
  c->r[4]=0u+0x000001FCu; // 801E0014
  c->r[5]=c->r[5]+0xFFFFF824u; // 801E0018
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E001C
  c->lr=0x801E0024u; f_801F9770(c); // 801E0020
L_801E0024:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 801E0024
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801E0028
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 801E002C
  c->r[3]=c->r[3]+c->r[0]; // 801E0030
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E0034
  cmps(c,0,(int32_t)c->r[0],0); // 801E0038
  if (!crb(c,2)) { goto L_801E0048; } // 801E003C
  c->r[4]=0u+0x00000000u; // 801E0040
  goto L_801E004C; // 801E0044
L_801E0048:;
  c->r[4]=c->r[0]+c->r[4]; // 801E0048
L_801E004C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E004C
  c->lr=0x801E0054u; f_80220108(c); // 801E0050
  cmps(c,0,(int32_t)c->r[3],0); // 801E0054
  if (!crb(c,2)) { goto L_801E0064; } // 801E0058
  c->r[3]=R32(c->r[31]+0x00000010u); // 801E005C
  goto L_801E0068; // 801E0060
L_801E0064:;
  c->r[3]=0u+0xFFFFFFFFu; // 801E0064
L_801E0068:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0068
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E006C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0070
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0074
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E0078
  c->lr=c->r[0]; // 801E007C
  c->r[1]=c->r[1]+0x00000020u; // 801E0080
  return; // 801E0084
}

// fn_801E0090
void f_801E0090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0090
  c->r[0]=c->lr; // 801E0094
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0098
  c->r[11]=c->r[1]+0x00000020u; // 801E009C
  c->lr=0x801E00A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E00A0
  c->r[29]=R32(c->r[3]+0x00000028u); // 801E00A4
  c->r[27]=c->r[3]|c->r[3]; // 801E00A8
  c->r[28]=c->r[4]|c->r[4]; // 801E00AC
  c->r[31]=c->r[5]|c->r[5]; // 801E00B0
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E00B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E00B8
  if (crb(c,2)) { goto L_801E00D8; } // 801E00BC
  c->r[5]=0u+0x802D0000u; // 801E00C0
  c->r[3]=c->r[13]+0xFFFF9E80u; // 801E00C4
  c->r[5]=c->r[5]+0xFFFFFB30u; // 801E00C8
  c->r[4]=0u+0x0000008Du; // 801E00CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E00D0
  c->lr=0x801E00D8u; f_801F9770(c); // 801E00D4
L_801E00D8:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801E00D8
  c->r[5]=c->r[29]|c->r[29]; // 801E00DC
  c->r[4]=R32(c->r[29]+0x00000004u); // 801E00E0
  c->lr=0x801E00E8u; f_801EF600(c); // 801E00E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E00E8
  c->r[30]=c->r[3]|c->r[3]; // 801E00EC
  if (!crb(c,2)) { goto L_801E00FC; } // 801E00F0
  c->r[3]=0u+0x00000000u; // 801E00F4
  goto L_801E01C4; // 801E00F8
L_801E00FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E00FC
  cmpu(c,0,c->r[28],c->r[0]); // 801E0100
  if (crb(c,0)) { goto L_801E0110; } // 801E0104
  c->r[3]=0u+0x00000000u; // 801E0108
  goto L_801E01C4; // 801E010C
L_801E0110:;
  c->r[0]=R16(c->r[27]+0x00000006u); // 801E0110
  cmpu(c,0,c->r[0],0x00000101u); // 801E0114
  if (crb(c,0)) { goto L_801E0198; } // 801E0118
  c->r[28]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801E011C
  c->r[29]=R32(c->r[27]+0x00000028u); // 801E0120
  c->r[3]=c->r[3]+c->r[28]; // 801E0124
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E0128
  cmps(c,0,(int32_t)c->r[0],0); // 801E012C
  if (crb(c,2)) { goto L_801E014C; } // 801E0130
  c->r[5]=0u+0x802D0000u; // 801E0134
  c->r[3]=c->r[13]+0xFFFF9E88u; // 801E0138
  c->r[5]=c->r[5]+0xFFFFFB58u; // 801E013C
  c->r[4]=0u+0x0000008Du; // 801E0140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0144
  c->lr=0x801E014Cu; f_801F9770(c); // 801E0148
L_801E014C:;
  c->r[4]=c->r[30]+c->r[28]; // 801E014C
  c->r[5]=c->r[29]|c->r[29]; // 801E0150
  c->r[3]=R8(c->r[4]+0x00000004u); // 801E0154
  c->r[4]=R32(c->r[4]+0x00000008u); // 801E0158
  c->lr=0x801E0160u; f_801EF600(c); // 801E015C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0160
  if (!crb(c,2)) { goto L_801E0170; } // 801E0164
  c->r[3]=0u+0x00000000u; // 801E0168
  goto L_801E01C4; // 801E016C
L_801E0170:;
  c->r[0]=R8(c->r[3]+0x00000018u); // 801E0170
  W8(c->r[31]+0x00000000u,c->r[0]); // 801E0174
  c->r[0]=R8(c->r[3]+0x00000019u); // 801E0178
  W8(c->r[31]+0x00000001u,c->r[0]); // 801E017C
  c->r[0]=R16(c->r[3]+0x0000001Au); // 801E0180
  W16(c->r[31]+0x00000002u,c->r[0]); // 801E0184
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801E0188
  c->r[3]=0u+0x00000001u; // 801E018C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E0190
  goto L_801E01C4; // 801E0194
L_801E0198:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801E0198
  c->r[6]=c->r[3]+c->r[0]; // 801E019C
  c->r[3]=0u+0x00000001u; // 801E01A0
  c->r[4]=R32(c->r[6]+0x00000008u); // 801E01A4
  c->r[5]=R8(c->r[6]+0x00000005u); // 801E01A8
  c->r[0]=R8(c->r[6]+0x00000004u); // 801E01AC
  c->r[4]=c->r[4]+0x0000001Cu; // 801E01B0
  W8(c->r[31]+0x00000000u,c->r[0]); // 801E01B4
  W8(c->r[31]+0x00000001u,c->r[5]); // 801E01B8
  W16(c->r[31]+0x00000002u,c->r[29]); // 801E01BC
  W32(c->r[31]+0x00000004u,c->r[4]); // 801E01C0
L_801E01C4:;
  c->r[11]=c->r[1]+0x00000020u; // 801E01C4
  c->lr=0x801E01CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E01C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E01CC
  c->lr=c->r[0]; // 801E01D0
  c->r[1]=c->r[1]+0x00000020u; // 801E01D4
  return; // 801E01D8
}

// __ct__Q44nw4r3snd6detail18SoundArchiveLoaderFRCQ34nw4r3snd12SoundArchive
void f_801E01E0(Ctx* __restrict c) {
  trace_call(0x801E01E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E01E0
  c->r[0]=c->lr; // 801E01E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E01E8
  c->r[0]=0u+0x00000000u; // 801E01EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E01F0
  c->r[31]=c->r[3]|c->r[3]; // 801E01F4
  W32(c->r[3]+0x00000018u,c->r[4]); // 801E01F8
  W32(c->r[3]+0x0000021Cu,c->r[0]); // 801E01FC
  c->lr=0x801E0204u; f_800CCD10(c); // 801E0200
  c->r[3]=c->r[31]|c->r[31]; // 801E0204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0208
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E020C
  c->lr=c->r[0]; // 801E0210
  c->r[1]=c->r[1]+0x00000010u; // 801E0214
  return; // 801E0218
}

// fn_801E0220
void f_801E0220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0220
  c->r[0]=c->lr; // 801E0224
  cmps(c,0,(int32_t)c->r[3],0); // 801E0228
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E022C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0230
  c->r[31]=c->r[3]|c->r[3]; // 801E0234
  if (crb(c,2)) { goto L_801E0248; } // 801E0238
  cmps(c,0,(int32_t)c->r[4],0); // 801E023C
  if (!crb(c,1)) { goto L_801E0248; } // 801E0240
  c->lr=0x801E0248u; f_800B9AD0(c); // 801E0244
L_801E0248:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0248
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E024C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0250
  c->lr=c->r[0]; // 801E0254
  c->r[1]=c->r[1]+0x00000010u; // 801E0258
  return; // 801E025C
}

// fn_801E0260
void f_801E0260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0260
  c->r[0]=c->lr; // 801E0264
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E0268
  c->r[11]=c->r[1]+0x00000050u; // 801E026C
  c->lr=0x801E0274u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E0270
  cmps(c,0,(int32_t)c->r[5],0); // 801E0274
  c->r[31]=c->r[3]|c->r[3]; // 801E0278
  c->r[26]=c->r[4]|c->r[4]; // 801E027C
  c->r[25]=c->r[5]|c->r[5]; // 801E0280
  c->r[23]=c->r[6]|c->r[6]; // 801E0284
  c->r[24]=c->r[7]|c->r[7]; // 801E0288
  if (!crb(c,2)) { goto L_801E02AC; } // 801E028C
  c->r[3]=0u+0x802D0000u; // 801E0290
  c->r[5]=0u+0x802D0000u; // 801E0294
  c->r[3]=c->r[3]+0xFFFFFB80u; // 801E0298
  c->r[4]=0u+0x0000004Cu; // 801E029C
  c->r[5]=c->r[5]+0xFFFFFB9Cu; // 801E02A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E02A4
  c->lr=0x801E02ACu; f_801F9770(c); // 801E02A8
L_801E02AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E02AC
  c->lr=0x801E02B4u; f_800CCD50(c); // 801E02B0
  c->r[3]=R32(c->r[31]+0x00000018u); // 801E02B4
  c->r[4]=c->r[26]|c->r[26]; // 801E02B8
  c->r[5]=c->r[31]+0x0000001Cu; // 801E02BC
  c->r[6]=0u+0x00000200u; // 801E02C0
  c->lr=0x801E02C8u; f_801DE810(c); // 801E02C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E02C8
  c->r[29]=c->r[3]|c->r[3]; // 801E02CC
  if (!crb(c,2)) { goto L_801E02F8; } // 801E02D0
  if (crb(c,2)) { goto L_801E02E8; } // 801E02D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E02D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E02DC
  c->ctr=c->r[12]; // 801E02E0
  if (true) { c->lr=0x801E02E8u; dispatch(c,c->ctr); } // 801E02E4
L_801E02E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E02E8
  c->lr=0x801E02F0u; f_800CCE30(c); // 801E02EC
  c->r[3]=0u+0x00000000u; // 801E02F0
  goto L_801E0844; // 801E02F4
L_801E02F8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E02F8
  c->r[12]=R32(c->r[12]+0x00000050u); // 801E02FC
  c->ctr=c->r[12]; // 801E0300
  if (true) { c->lr=0x801E0308u; dispatch(c,c->ctr); } // 801E0304
  cmps(c,0,(int32_t)c->r[3],0); // 801E0308
  if (crb(c,2)) { goto L_801E032C; } // 801E030C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0310
  c->r[3]=c->r[29]|c->r[29]; // 801E0314
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801E0318
  c->ctr=c->r[12]; // 801E031C
  if (true) { c->lr=0x801E0324u; dispatch(c,c->ctr); } // 801E0320
  cmps(c,0,(int32_t)c->r[3],0); // 801E0324
  if (!crb(c,2)) { goto L_801E0358; } // 801E0328
L_801E032C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E032C
  if (crb(c,2)) { goto L_801E0348; } // 801E0330
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0334
  c->r[3]=c->r[29]|c->r[29]; // 801E0338
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E033C
  c->ctr=c->r[12]; // 801E0340
  if (true) { c->lr=0x801E0348u; dispatch(c,c->ctr); } // 801E0344
L_801E0348:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0348
  c->lr=0x801E0350u; f_800CCE30(c); // 801E034C
  c->r[3]=0u+0x00000000u; // 801E0350
  goto L_801E0844; // 801E0354
L_801E0358:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0358
  c->r[3]=c->r[29]|c->r[29]; // 801E035C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E0360
  c->ctr=c->r[12]; // 801E0364
  if (true) { c->lr=0x801E036Cu; dispatch(c,c->ctr); } // 801E0368
  c->r[12]=R32(c->r[25]+0x00000000u); // 801E036C
  c->r[4]=c->r[3]|c->r[3]; // 801E0370
  c->r[3]=c->r[25]|c->r[25]; // 801E0374
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E0378
  c->ctr=c->r[12]; // 801E037C
  if (true) { c->lr=0x801E0384u; dispatch(c,c->ctr); } // 801E0380
  cmps(c,0,(int32_t)c->r[3],0); // 801E0384
  c->r[27]=c->r[3]|c->r[3]; // 801E0388
  if (!crb(c,2)) { goto L_801E03BC; } // 801E038C
  cmps(c,0,(int32_t)c->r[29],0); // 801E0390
  if (crb(c,2)) { goto L_801E03AC; } // 801E0394
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0398
  c->r[3]=c->r[29]|c->r[29]; // 801E039C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E03A0
  c->ctr=c->r[12]; // 801E03A4
  if (true) { c->lr=0x801E03ACu; dispatch(c,c->ctr); } // 801E03A8
L_801E03AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E03AC
  c->lr=0x801E03B4u; f_800CCE30(c); // 801E03B0
  c->r[3]=0u+0x00000000u; // 801E03B4
  goto L_801E0844; // 801E03B8
L_801E03BC:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E03BC
  W32(c->r[31]+0x0000021Cu,c->r[29]); // 801E03C0
  if (!crb(c,2)) { goto L_801E0434; } // 801E03C4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E03C8
  c->r[3]=c->r[29]|c->r[29]; // 801E03CC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E03D0
  c->ctr=c->r[12]; // 801E03D4
  if (true) { c->lr=0x801E03DCu; dispatch(c,c->ctr); } // 801E03D8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E03DC
  c->r[5]=c->r[3]|c->r[3]; // 801E03E0
  c->r[3]=c->r[29]|c->r[29]; // 801E03E4
  c->r[4]=c->r[27]|c->r[27]; // 801E03E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E03EC
  c->ctr=c->r[12]; // 801E03F0
  if (true) { c->lr=0x801E03F8u; dispatch(c,c->ctr); } // 801E03F4
  cmps(c,0,(int32_t)c->r[3],0); // 801E03F8
  if (!crb(c,0)) { goto L_801E04D8; } // 801E03FC
  cmps(c,0,(int32_t)c->r[29],0); // 801E0400
  c->r[0]=0u+0x00000000u; // 801E0404
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801E0408
  if (crb(c,2)) { goto L_801E0424; } // 801E040C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0410
  c->r[3]=c->r[29]|c->r[29]; // 801E0414
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0418
  c->ctr=c->r[12]; // 801E041C
  if (true) { c->lr=0x801E0424u; dispatch(c,c->ctr); } // 801E0420
L_801E0424:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0424
  c->lr=0x801E042Cu; f_800CCE30(c); // 801E0428
  c->r[3]=0u+0x00000000u; // 801E042C
  goto L_801E0844; // 801E0430
L_801E0434:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0434
  c->r[3]=c->r[29]|c->r[29]; // 801E0438
  c->r[28]=c->r[27]|c->r[27]; // 801E043C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E0440
  c->ctr=c->r[12]; // 801E0444
  if (true) { c->lr=0x801E044Cu; dispatch(c,c->ctr); } // 801E0448
  c->r[30]=c->r[3]|c->r[3]; // 801E044C
  goto L_801E04D0; // 801E0450
L_801E0454:;
  cmpu(c,0,c->r[24],c->r[30]); // 801E0454
  c->r[3]=c->r[29]|c->r[29]; // 801E0458
  c->r[4]=c->r[28]|c->r[28]; // 801E045C
  c->r[5]=c->r[24]|c->r[24]; // 801E0460
  if (!crb(c,1)) { goto L_801E046C; } // 801E0464
  c->r[5]=c->r[30]|c->r[30]; // 801E0468
L_801E046C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E046C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E0470
  c->ctr=c->r[12]; // 801E0474
  if (true) { c->lr=0x801E047Cu; dispatch(c,c->ctr); } // 801E0478
  cmps(c,0,(int32_t)c->r[3],0); // 801E047C
  if (!crb(c,0)) { goto L_801E04B8; } // 801E0480
  cmps(c,0,(int32_t)c->r[29],0); // 801E0484
  c->r[0]=0u+0x00000000u; // 801E0488
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801E048C
  if (crb(c,2)) { goto L_801E04A8; } // 801E0490
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0494
  c->r[3]=c->r[29]|c->r[29]; // 801E0498
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E049C
  c->ctr=c->r[12]; // 801E04A0
  if (true) { c->lr=0x801E04A8u; dispatch(c,c->ctr); } // 801E04A4
L_801E04A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E04A8
  c->lr=0x801E04B0u; f_800CCE30(c); // 801E04AC
  c->r[3]=0u+0x00000000u; // 801E04B0
  goto L_801E0844; // 801E04B4
L_801E04B8:;
  cmpu(c,0,c->r[30],c->r[3]); // 801E04B8
  if (!crb(c,1)) { goto L_801E04CC; } // 801E04BC
  c->r[30]=c->r[30]-c->r[3]; // 801E04C0
  c->r[28]=c->r[28]+c->r[3]; // 801E04C4
  goto L_801E04D0; // 801E04C8
L_801E04CC:;
  c->r[30]=0u+0x00000000u; // 801E04CC
L_801E04D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E04D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E0454; } // 801E04D4
L_801E04D8:;
  c->r[30]=0u+0x00000000u; // 801E04D8
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 801E04DC
  c->r[3]=R32(c->r[31]+0x00000018u); // 801E04E0
  c->r[4]=c->r[26]|c->r[26]; // 801E04E4
  c->r[5]=c->r[1]+0x00000008u; // 801E04E8
  c->lr=0x801E04F0u; f_801DE550(c); // 801E04EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E04F0
  if (!crb(c,2)) { goto L_801E0524; } // 801E04F4
  cmps(c,0,(int32_t)c->r[29],0); // 801E04F8
  if (crb(c,2)) { goto L_801E0514; } // 801E04FC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0500
  c->r[3]=c->r[29]|c->r[29]; // 801E0504
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0508
  c->ctr=c->r[12]; // 801E050C
  if (true) { c->lr=0x801E0514u; dispatch(c,c->ctr); } // 801E0510
L_801E0514:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0514
  c->lr=0x801E051Cu; f_800CCE30(c); // 801E0518
  c->r[3]=0u+0x00000000u; // 801E051C
  goto L_801E0844; // 801E0520
L_801E0524:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801E0524
  cmps(c,0,(int32_t)c->r[0],0); // 801E0528
  if (crb(c,2)) { goto L_801E0810; } // 801E052C
  c->r[3]=R32(c->r[31]+0x00000018u); // 801E0530
  c->r[4]=c->r[26]|c->r[26]; // 801E0534
  c->r[5]=c->r[31]+0x0000001Cu; // 801E0538
  c->r[6]=0u+0x00000200u; // 801E053C
  c->lr=0x801E0544u; f_801DE950(c); // 801E0540
  cmps(c,0,(int32_t)c->r[3],0); // 801E0544
  c->r[28]=c->r[3]|c->r[3]; // 801E0548
  if (!crb(c,2)) { goto L_801E0590; } // 801E054C
  if (crb(c,2)) { goto L_801E0564; } // 801E0550
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E0554
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0558
  c->ctr=c->r[12]; // 801E055C
  if (true) { c->lr=0x801E0564u; dispatch(c,c->ctr); } // 801E0560
L_801E0564:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E0564
  if (crb(c,2)) { goto L_801E0580; } // 801E0568
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E056C
  c->r[3]=c->r[29]|c->r[29]; // 801E0570
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0574
  c->ctr=c->r[12]; // 801E0578
  if (true) { c->lr=0x801E0580u; dispatch(c,c->ctr); } // 801E057C
L_801E0580:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0580
  c->lr=0x801E0588u; f_800CCE30(c); // 801E0584
  c->r[3]=0u+0x00000000u; // 801E0588
  goto L_801E0844; // 801E058C
L_801E0590:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E0590
  c->r[12]=R32(c->r[12]+0x00000050u); // 801E0594
  c->ctr=c->r[12]; // 801E0598
  if (true) { c->lr=0x801E05A0u; dispatch(c,c->ctr); } // 801E059C
  cmps(c,0,(int32_t)c->r[3],0); // 801E05A0
  if (crb(c,2)) { goto L_801E05C4; } // 801E05A4
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E05A8
  c->r[3]=c->r[28]|c->r[28]; // 801E05AC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801E05B0
  c->ctr=c->r[12]; // 801E05B4
  if (true) { c->lr=0x801E05BCu; dispatch(c,c->ctr); } // 801E05B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E05BC
  if (!crb(c,2)) { goto L_801E060C; } // 801E05C0
L_801E05C4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E05C4
  if (crb(c,2)) { goto L_801E05E0; } // 801E05C8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E05CC
  c->r[3]=c->r[28]|c->r[28]; // 801E05D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E05D4
  c->ctr=c->r[12]; // 801E05D8
  if (true) { c->lr=0x801E05E0u; dispatch(c,c->ctr); } // 801E05DC
L_801E05E0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E05E0
  if (crb(c,2)) { goto L_801E05FC; } // 801E05E4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E05E8
  c->r[3]=c->r[29]|c->r[29]; // 801E05EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E05F0
  c->ctr=c->r[12]; // 801E05F4
  if (true) { c->lr=0x801E05FCu; dispatch(c,c->ctr); } // 801E05F8
L_801E05FC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E05FC
  c->lr=0x801E0604u; f_800CCE30(c); // 801E0600
  c->r[3]=0u+0x00000000u; // 801E0604
  goto L_801E0844; // 801E0608
L_801E060C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E060C
  c->r[3]=c->r[28]|c->r[28]; // 801E0610
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E0614
  c->ctr=c->r[12]; // 801E0618
  if (true) { c->lr=0x801E0620u; dispatch(c,c->ctr); } // 801E061C
  c->r[12]=R32(c->r[25]+0x00000000u); // 801E0620
  c->r[4]=c->r[3]|c->r[3]; // 801E0624
  c->r[3]=c->r[25]|c->r[25]; // 801E0628
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E062C
  c->ctr=c->r[12]; // 801E0630
  if (true) { c->lr=0x801E0638u; dispatch(c,c->ctr); } // 801E0634
  cmps(c,0,(int32_t)c->r[3],0); // 801E0638
  c->r[26]=c->r[3]|c->r[3]; // 801E063C
  if (!crb(c,2)) { goto L_801E068C; } // 801E0640
  cmps(c,0,(int32_t)c->r[28],0); // 801E0644
  if (crb(c,2)) { goto L_801E0660; } // 801E0648
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E064C
  c->r[3]=c->r[28]|c->r[28]; // 801E0650
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0654
  c->ctr=c->r[12]; // 801E0658
  if (true) { c->lr=0x801E0660u; dispatch(c,c->ctr); } // 801E065C
L_801E0660:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E0660
  if (crb(c,2)) { goto L_801E067C; } // 801E0664
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0668
  c->r[3]=c->r[29]|c->r[29]; // 801E066C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0670
  c->ctr=c->r[12]; // 801E0674
  if (true) { c->lr=0x801E067Cu; dispatch(c,c->ctr); } // 801E0678
L_801E067C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E067C
  c->lr=0x801E0684u; f_800CCE30(c); // 801E0680
  c->r[3]=0u+0x00000000u; // 801E0684
  goto L_801E0844; // 801E0688
L_801E068C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E068C
  W32(c->r[31]+0x0000021Cu,c->r[28]); // 801E0690
  if (!crb(c,2)) { goto L_801E071C; } // 801E0694
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E0698
  c->r[3]=c->r[28]|c->r[28]; // 801E069C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E06A0
  c->ctr=c->r[12]; // 801E06A4
  if (true) { c->lr=0x801E06ACu; dispatch(c,c->ctr); } // 801E06A8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E06AC
  c->r[5]=c->r[3]|c->r[3]; // 801E06B0
  c->r[3]=c->r[28]|c->r[28]; // 801E06B4
  c->r[4]=c->r[26]|c->r[26]; // 801E06B8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E06BC
  c->ctr=c->r[12]; // 801E06C0
  if (true) { c->lr=0x801E06C8u; dispatch(c,c->ctr); } // 801E06C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E06C8
  if (!crb(c,0)) { goto L_801E07DC; } // 801E06CC
  cmps(c,0,(int32_t)c->r[28],0); // 801E06D0
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 801E06D4
  if (crb(c,2)) { goto L_801E06F0; } // 801E06D8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E06DC
  c->r[3]=c->r[28]|c->r[28]; // 801E06E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E06E4
  c->ctr=c->r[12]; // 801E06E8
  if (true) { c->lr=0x801E06F0u; dispatch(c,c->ctr); } // 801E06EC
L_801E06F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E06F0
  if (crb(c,2)) { goto L_801E070C; } // 801E06F4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E06F8
  c->r[3]=c->r[29]|c->r[29]; // 801E06FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0700
  c->ctr=c->r[12]; // 801E0704
  if (true) { c->lr=0x801E070Cu; dispatch(c,c->ctr); } // 801E0708
L_801E070C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E070C
  c->lr=0x801E0714u; f_800CCE30(c); // 801E0710
  c->r[3]=0u+0x00000000u; // 801E0714
  goto L_801E0844; // 801E0718
L_801E071C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E071C
  c->r[3]=c->r[28]|c->r[28]; // 801E0720
  c->r[30]=c->r[26]|c->r[26]; // 801E0724
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E0728
  c->ctr=c->r[12]; // 801E072C
  if (true) { c->lr=0x801E0734u; dispatch(c,c->ctr); } // 801E0730
  c->r[25]=c->r[3]|c->r[3]; // 801E0734
  goto L_801E07D4; // 801E0738
L_801E073C:;
  cmpu(c,0,c->r[24],c->r[25]); // 801E073C
  c->r[3]=c->r[28]|c->r[28]; // 801E0740
  c->r[4]=c->r[30]|c->r[30]; // 801E0744
  c->r[5]=c->r[24]|c->r[24]; // 801E0748
  if (!crb(c,1)) { goto L_801E0754; } // 801E074C
  c->r[5]=c->r[25]|c->r[25]; // 801E0750
L_801E0754:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E0754
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E0758
  c->ctr=c->r[12]; // 801E075C
  if (true) { c->lr=0x801E0764u; dispatch(c,c->ctr); } // 801E0760
  cmps(c,0,(int32_t)c->r[3],0); // 801E0764
  if (!crb(c,0)) { goto L_801E07BC; } // 801E0768
  cmps(c,0,(int32_t)c->r[28],0); // 801E076C
  c->r[0]=0u+0x00000000u; // 801E0770
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801E0774
  if (crb(c,2)) { goto L_801E0790; } // 801E0778
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E077C
  c->r[3]=c->r[28]|c->r[28]; // 801E0780
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0784
  c->ctr=c->r[12]; // 801E0788
  if (true) { c->lr=0x801E0790u; dispatch(c,c->ctr); } // 801E078C
L_801E0790:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E0790
  if (crb(c,2)) { goto L_801E07AC; } // 801E0794
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0798
  c->r[3]=c->r[29]|c->r[29]; // 801E079C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E07A0
  c->ctr=c->r[12]; // 801E07A4
  if (true) { c->lr=0x801E07ACu; dispatch(c,c->ctr); } // 801E07A8
L_801E07AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E07AC
  c->lr=0x801E07B4u; f_800CCE30(c); // 801E07B0
  c->r[3]=0u+0x00000000u; // 801E07B4
  goto L_801E0844; // 801E07B8
L_801E07BC:;
  cmpu(c,0,c->r[25],c->r[3]); // 801E07BC
  if (!crb(c,1)) { goto L_801E07D0; } // 801E07C0
  c->r[25]=c->r[25]-c->r[3]; // 801E07C4
  c->r[30]=c->r[30]+c->r[3]; // 801E07C8
  goto L_801E07D4; // 801E07CC
L_801E07D0:;
  c->r[25]=0u+0x00000000u; // 801E07D0
L_801E07D4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801E07D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E073C; } // 801E07D8
L_801E07DC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E07DC
  c->r[0]=0u+0x00000000u; // 801E07E0
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801E07E4
  if (crb(c,2)) { goto L_801E07F0; } // 801E07E8
  W32(c->r[23]+0x00000000u,c->r[26]); // 801E07EC
L_801E07F0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E07F0
  if (crb(c,2)) { goto L_801E081C; } // 801E07F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E07F8
  c->r[3]=c->r[28]|c->r[28]; // 801E07FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E0800
  c->ctr=c->r[12]; // 801E0804
  if (true) { c->lr=0x801E080Cu; dispatch(c,c->ctr); } // 801E0808
  goto L_801E081C; // 801E080C
L_801E0810:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E0810
  if (crb(c,2)) { goto L_801E081C; } // 801E0814
  W32(c->r[23]+0x00000000u,c->r[30]); // 801E0818
L_801E081C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E081C
  if (crb(c,2)) { goto L_801E0838; } // 801E0820
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E0824
  c->r[3]=c->r[29]|c->r[29]; // 801E0828
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E082C
  c->ctr=c->r[12]; // 801E0830
  if (true) { c->lr=0x801E0838u; dispatch(c,c->ctr); } // 801E0834
L_801E0838:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0838
  c->lr=0x801E0840u; f_800CCE30(c); // 801E083C
  c->r[3]=c->r[27]|c->r[27]; // 801E0840
L_801E0844:;
  c->r[11]=c->r[1]+0x00000050u; // 801E0844
  c->lr=0x801E084Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E0848
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E084C
  c->lr=c->r[0]; // 801E0850
  c->r[1]=c->r[1]+0x00000050u; // 801E0854
  return; // 801E0858
}

// fn_801E0860
void f_801E0860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0860
  c->r[0]=c->lr; // 801E0864
  c->r[6]=0u+0x802D0000u; // 801E0868
  c->r[5]=0u+0x802D0000u; // 801E086C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0870
  c->r[6]=c->r[6]+0x00000630u; // 801E0874
  c->r[4]=0u+0x802D0000u; // 801E0878
  c->r[7]=c->r[3]+0x0000004Cu; // 801E087C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0880
  c->r[31]=0u+0x00000000u; // 801E0884
  c->r[0]=c->r[6]+0x00000014u; // 801E0888
  c->r[5]=c->r[5]+0x00000670u; // 801E088C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0890
  c->r[4]=c->r[4]+0x00000660u; // 801E0894
  c->r[30]=c->r[3]|c->r[3]; // 801E0898
  W32(c->r[3]+0x00000000u,c->r[31]); // 801E089C
  W32(c->r[3]+0x00000004u,c->r[31]); // 801E08A0
  W32(c->r[3]+0x00000008u,c->r[6]); // 801E08A4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E08A8
  W32(c->r[3]+0x00000010u,c->r[31]); // 801E08AC
  W32(c->r[3]+0x00000014u,c->r[31]); // 801E08B0
  W32(c->r[3]+0x00000018u,c->r[31]); // 801E08B4
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801E08B8
  W32(c->r[3]+0x00000020u,c->r[5]); // 801E08BC
  W32(c->r[3]+0x00000024u,c->r[3]); // 801E08C0
  W32(c->r[3]+0x00000028u,c->r[4]); // 801E08C4
  W32(c->r[3]+0x0000002Cu,c->r[3]); // 801E08C8
  W32(c->r[3]+0x00000034u,c->r[31]); // 801E08CC
  W32(c->r[3]+0x00000038u,c->r[31]); // 801E08D0
  W32(c->r[3]+0x0000003Cu,c->r[31]); // 801E08D4
  W32(c->r[3]+0x00000040u,c->r[31]); // 801E08D8
  W32(c->r[3]+0x00000044u,c->r[31]); // 801E08DC
  W32(c->r[3]+0x00000048u,c->r[31]); // 801E08E0
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 801E08E4
  W32(c->r[3]+0x00000050u,c->r[7]); // 801E08E8
  c->r[3]=c->r[3]+0x00000054u; // 801E08EC
  c->lr=0x801E08F4u; f_800CCD10(c); // 801E08F0
  c->r[0]=c->r[30]+0x00000074u; // 801E08F4
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 801E08F8
  c->r[3]=c->r[30]+0x0000007Cu; // 801E08FC
  W32(c->r[30]+0x00000070u,c->r[31]); // 801E0900
  W32(c->r[30]+0x00000074u,c->r[0]); // 801E0904
  W32(c->r[30]+0x00000078u,c->r[0]); // 801E0908
  c->lr=0x801E0910u; f_800CCD10(c); // 801E090C
  c->r[0]=c->r[30]+0x0000009Cu; // 801E0910
  W32(c->r[30]+0x00000094u,c->r[31]); // 801E0914
  c->r[3]=c->r[30]+0x000000A4u; // 801E0918
  W32(c->r[30]+0x00000098u,c->r[31]); // 801E091C
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 801E0920
  W32(c->r[30]+0x000000A0u,c->r[0]); // 801E0924
  c->lr=0x801E092Cu; f_800CCD10(c); // 801E0928
  c->r[4]=0u+0x802D0000u; // 801E092C
  c->r[3]=0u+0x802D0000u; // 801E0930
  c->r[4]=c->r[4]+0xFFFFE768u; // 801E0934
  c->r[0]=c->r[30]+0x000000E0u; // 801E0938
  c->r[3]=c->r[3]+0xFFFFE700u; // 801E093C
  W32(c->r[30]+0x000000BCu,c->r[4]); // 801E0940
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801E0944
  W32(c->r[30]+0x000000C4u,c->r[31]); // 801E0948
  W32(c->r[30]+0x000000E0u,c->r[3]); // 801E094C
  W32(c->r[30]+0x000000E4u,c->r[31]); // 801E0950
  W32(c->r[30]+0x000000E8u,c->r[31]); // 801E0954
  c->lr=0x801E095Cu; f_801D5DD0(c); // 801E0958
  c->r[4]=c->r[30]|c->r[30]; // 801E095C
  c->lr=0x801E0964u; f_801D5EC0(c); // 801E0960
  c->r[3]=c->r[30]|c->r[30]; // 801E0964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0968
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E096C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0970
  c->lr=c->r[0]; // 801E0974
  c->r[1]=c->r[1]+0x00000010u; // 801E0978
  return; // 801E097C
}

// fn_801E0980
void f_801E0980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0980
  c->r[0]=c->lr; // 801E0984
  cmps(c,0,(int32_t)c->r[3],0); // 801E0988
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E098C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0990
  c->r[31]=c->r[3]|c->r[3]; // 801E0994
  if (crb(c,2)) { goto L_801E09A8; } // 801E0998
  cmps(c,0,(int32_t)c->r[4],0); // 801E099C
  if (!crb(c,1)) { goto L_801E09A8; } // 801E09A0
  c->lr=0x801E09A8u; f_800B9AD0(c); // 801E09A4
L_801E09A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E09A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E09AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E09B0
  c->lr=c->r[0]; // 801E09B4
  c->r[1]=c->r[1]+0x00000010u; // 801E09B8
  return; // 801E09BC
}

// fn_801E09C0
void f_801E09C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E09C0
  c->r[0]=c->lr; // 801E09C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E09C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E09CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E09D0
  c->r[31]=c->r[3]|c->r[3]; // 801E09D4
  if (crb(c,2)) { goto L_801E09E8; } // 801E09D8
  cmps(c,0,(int32_t)c->r[4],0); // 801E09DC
  if (!crb(c,1)) { goto L_801E09E8; } // 801E09E0
  c->lr=0x801E09E8u; f_800B9AD0(c); // 801E09E4
L_801E09E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E09E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E09EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E09F0
  c->lr=c->r[0]; // 801E09F4
  c->r[1]=c->r[1]+0x00000010u; // 801E09F8
  return; // 801E09FC
}

// fn_801E0A00
void f_801E0A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0A00
  c->r[0]=c->lr; // 801E0A04
  cmps(c,0,(int32_t)c->r[3],0); // 801E0A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0A10
  c->r[31]=c->r[3]|c->r[3]; // 801E0A14
  if (crb(c,2)) { goto L_801E0A28; } // 801E0A18
  cmps(c,0,(int32_t)c->r[4],0); // 801E0A1C
  if (!crb(c,1)) { goto L_801E0A28; } // 801E0A20
  c->lr=0x801E0A28u; f_800B9AD0(c); // 801E0A24
L_801E0A28:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0A28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0A2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0A30
  c->lr=c->r[0]; // 801E0A34
  c->r[1]=c->r[1]+0x00000010u; // 801E0A38
  return; // 801E0A3C
}

// fn_801E0A40
void f_801E0A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0A40
  c->r[0]=c->lr; // 801E0A44
  cmps(c,0,(int32_t)c->r[3],0); // 801E0A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0A50
  c->r[31]=c->r[3]|c->r[3]; // 801E0A54
  if (crb(c,2)) { goto L_801E0A68; } // 801E0A58
  cmps(c,0,(int32_t)c->r[4],0); // 801E0A5C
  if (!crb(c,1)) { goto L_801E0A68; } // 801E0A60
  c->lr=0x801E0A68u; f_800B9AD0(c); // 801E0A64
L_801E0A68:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0A68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0A6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0A70
  c->lr=c->r[0]; // 801E0A74
  c->r[1]=c->r[1]+0x00000010u; // 801E0A78
  return; // 801E0A7C
}

// fn_801E0A80
void f_801E0A80(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 801E0A80
  c->r[0]=0u+0x00000000u; // 801E0A84
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E0A88
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E0A8C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E0A90
  return; // 801E0A94
}

// fn_801E0AA0
void f_801E0AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0AA0
  c->r[0]=c->lr; // 801E0AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E0AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0AAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0AB0
  c->r[31]=c->r[4]|c->r[4]; // 801E0AB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0AB8
  c->r[30]=c->r[3]|c->r[3]; // 801E0ABC
  if (crb(c,2)) { goto L_801E0ADC; } // 801E0AC0
  c->r[4]=0u+0x00000000u; // 801E0AC4
  c->lr=0x801E0ACCu; f_801F9DB0(c); // 801E0AC8
  cmps(c,0,(int32_t)c->r[31],0); // 801E0ACC
  if (!crb(c,1)) { goto L_801E0ADC; } // 801E0AD0
  c->r[3]=c->r[30]|c->r[30]; // 801E0AD4
  c->lr=0x801E0ADCu; f_800B9AD0(c); // 801E0AD8
L_801E0ADC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0ADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0AE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0AE8
  c->lr=c->r[0]; // 801E0AEC
  c->r[1]=c->r[1]+0x00000010u; // 801E0AF0
  return; // 801E0AF4
}

// fn_801E0B00
void f_801E0B00(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 801E0B00
  c->r[0]=0u+0x00000000u; // 801E0B04
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E0B08
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E0B0C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E0B10
  return; // 801E0B14
}

// fn_801E0B20
void f_801E0B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0B20
  c->r[0]=c->lr; // 801E0B24
  cmps(c,0,(int32_t)c->r[3],0); // 801E0B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0B30
  c->r[31]=c->r[4]|c->r[4]; // 801E0B34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0B38
  c->r[30]=c->r[3]|c->r[3]; // 801E0B3C
  if (crb(c,2)) { goto L_801E0B5C; } // 801E0B40
  c->r[4]=0u+0x00000000u; // 801E0B44
  c->lr=0x801E0B4Cu; f_801F9DB0(c); // 801E0B48
  cmps(c,0,(int32_t)c->r[31],0); // 801E0B4C
  if (!crb(c,1)) { goto L_801E0B5C; } // 801E0B50
  c->r[3]=c->r[30]|c->r[30]; // 801E0B54
  c->lr=0x801E0B5Cu; f_800B9AD0(c); // 801E0B58
L_801E0B5C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0B5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0B60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0B64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0B68
  c->lr=c->r[0]; // 801E0B6C
  c->r[1]=c->r[1]+0x00000010u; // 801E0B70
  return; // 801E0B74
}

// fn_801E0B80
void f_801E0B80(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 801E0B80
  c->r[0]=0u+0x00000000u; // 801E0B84
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E0B88
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E0B8C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E0B90
  return; // 801E0B94
}

// fn_801E0BA0
void f_801E0BA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0BA0
  c->r[0]=c->lr; // 801E0BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E0BA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0BAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0BB0
  c->r[31]=c->r[4]|c->r[4]; // 801E0BB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0BB8
  c->r[30]=c->r[3]|c->r[3]; // 801E0BBC
  if (crb(c,2)) { goto L_801E0BDC; } // 801E0BC0
  c->r[4]=0u+0x00000000u; // 801E0BC4
  c->lr=0x801E0BCCu; f_801F9DB0(c); // 801E0BC8
  cmps(c,0,(int32_t)c->r[31],0); // 801E0BCC
  if (!crb(c,1)) { goto L_801E0BDC; } // 801E0BD0
  c->r[3]=c->r[30]|c->r[30]; // 801E0BD4
  c->lr=0x801E0BDCu; f_800B9AD0(c); // 801E0BD8
L_801E0BDC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0BDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0BE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0BE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0BE8
  c->lr=c->r[0]; // 801E0BEC
  c->r[1]=c->r[1]+0x00000010u; // 801E0BF0
  return; // 801E0BF4
}

// fn_801E0C00
void f_801E0C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0C00
  c->r[0]=c->lr; // 801E0C04
  cmps(c,0,(int32_t)c->r[3],0); // 801E0C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0C0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0C10
  c->r[31]=c->r[4]|c->r[4]; // 801E0C14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0C18
  c->r[30]=c->r[3]|c->r[3]; // 801E0C1C
  if (crb(c,2)) { goto L_801E0C9C; } // 801E0C20
  c->r[4]=0u+0x802D0000u; // 801E0C24
  c->r[4]=c->r[4]+0x00000630u; // 801E0C28
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E0C2C
  c->r[0]=c->r[4]+0x00000014u; // 801E0C30
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E0C34
  c->lr=0x801E0C3Cu; f_801D5DD0(c); // 801E0C38
  c->r[4]=c->r[30]|c->r[30]; // 801E0C3C
  c->lr=0x801E0C44u; f_801D5F40(c); // 801E0C40
  c->r[0]=addc(c,c->r[30],0x00000094u,0); cr0(c,c->r[0]); // 801E0C44
  if (crb(c,2)) { goto L_801E0C5C; } // 801E0C48
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 801E0C4C
  if (crb(c,2)) { goto L_801E0C5C; } // 801E0C50
  c->r[4]=0u+0x00000000u; // 801E0C54
  c->lr=0x801E0C5Cu; f_801F9DB0(c); // 801E0C58
L_801E0C5C:;
  c->r[0]=addc(c,c->r[30],0x0000006Cu,0); cr0(c,c->r[0]); // 801E0C5C
  if (crb(c,2)) { goto L_801E0C74; } // 801E0C60
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 801E0C64
  if (crb(c,2)) { goto L_801E0C74; } // 801E0C68
  c->r[4]=0u+0x00000000u; // 801E0C6C
  c->lr=0x801E0C74u; f_801F9DB0(c); // 801E0C70
L_801E0C74:;
  c->r[0]=addc(c,c->r[30],0x00000044u,0); cr0(c,c->r[0]); // 801E0C74
  if (crb(c,2)) { goto L_801E0C8C; } // 801E0C78
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 801E0C7C
  if (crb(c,2)) { goto L_801E0C8C; } // 801E0C80
  c->r[4]=0u+0x00000000u; // 801E0C84
  c->lr=0x801E0C8Cu; f_801F9DB0(c); // 801E0C88
L_801E0C8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E0C8C
  if (!crb(c,1)) { goto L_801E0C9C; } // 801E0C90
  c->r[3]=c->r[30]|c->r[30]; // 801E0C94
  c->lr=0x801E0C9Cu; f_800B9AD0(c); // 801E0C98
L_801E0C9C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0C9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0CA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0CA8
  c->lr=c->r[0]; // 801E0CAC
  c->r[1]=c->r[1]+0x00000010u; // 801E0CB0
  return; // 801E0CB4
}

// fn_801E0CC0
void f_801E0CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0CC0
  c->r[0]=c->lr; // 801E0CC4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E0CC8
  c->r[11]=c->r[1]+0x00000080u; // 801E0CCC
  c->lr=0x801E0CD4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E0CD0
  c->r[30]=0u+0x802D0000u; // 801E0CD4
  c->r[31]=c->r[3]|c->r[3]; // 801E0CD8
  c->r[24]=c->r[4]|c->r[4]; // 801E0CDC
  c->r[25]=c->r[5]|c->r[5]; // 801E0CE0
  c->r[26]=c->r[6]|c->r[6]; // 801E0CE4
  c->r[27]=c->r[7]|c->r[7]; // 801E0CE8
  c->r[28]=c->r[8]|c->r[8]; // 801E0CEC
  c->r[30]=c->r[30]+0xFFFFFBC8u; // 801E0CF0
  c->lr=0x801E0CF8u; f_801E57E0(c); // 801E0CF4
  cmps(c,0,(int32_t)c->r[3],0); // 801E0CF8
  if (!crb(c,2)) { goto L_801E0D14; } // 801E0CFC
  c->r[3]=c->r[30]+0x00000000u; // 801E0D00
  c->r[5]=c->r[30]+0x0000001Cu; // 801E0D04
  c->r[4]=0u+0x00000083u; // 801E0D08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0D0C
  c->lr=0x801E0D14u; f_801F9770(c); // 801E0D10
L_801E0D14:;
  c->lr=0x801E0D18u; f_801E57E0(c); // 801E0D14
  cmps(c,0,(int32_t)c->r[3],0); // 801E0D18
  if (!crb(c,2)) { goto L_801E0D28; } // 801E0D1C
  c->r[3]=0u+0x00000000u; // 801E0D20
  goto L_801E0EAC; // 801E0D24
L_801E0D28:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E0D28
  if (!crb(c,2)) { goto L_801E0D44; } // 801E0D2C
  c->r[3]=c->r[30]+0x00000000u; // 801E0D30
  c->r[5]=c->r[30]+0x0000005Cu; // 801E0D34
  c->r[4]=0u+0x00000089u; // 801E0D38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0D3C
  c->lr=0x801E0D44u; f_801F9770(c); // 801E0D40
L_801E0D44:;
  cmps(c,0,(int32_t)c->r[25],0); // 801E0D44
  if (!crb(c,2)) { goto L_801E0D60; } // 801E0D48
  c->r[3]=c->r[30]+0x00000000u; // 801E0D4C
  c->r[5]=c->r[30]+0x00000080u; // 801E0D50
  c->r[4]=0u+0x0000008Au; // 801E0D54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0D58
  c->lr=0x801E0D60u; f_801F9770(c); // 801E0D5C
L_801E0D60:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E0D60
  if (crb(c,2)) { goto L_801E0D84; } // 801E0D64
  cmps(c,0,(int32_t)c->r[27],0); // 801E0D68
  if (!crb(c,2)) { goto L_801E0D84; } // 801E0D6C
  c->r[3]=c->r[30]+0x00000000u; // 801E0D70
  c->r[5]=c->r[30]+0x000000A8u; // 801E0D74
  c->r[4]=0u+0x0000008Cu; // 801E0D78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0D7C
  c->lr=0x801E0D84u; f_801F9770(c); // 801E0D80
L_801E0D84:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E0D84
  if (!crb(c,2)) { goto L_801E0DA0; } // 801E0D88
  c->r[3]=c->r[30]+0x00000000u; // 801E0D8C
  c->r[5]=c->r[30]+0x0000005Cu; // 801E0D90
  c->r[4]=0u+0x00000110u; // 801E0D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0D98
  c->lr=0x801E0DA0u; f_801F9770(c); // 801E0D9C
L_801E0DA0:;
  c->r[3]=c->r[24]|c->r[24]; // 801E0DA0
  c->r[4]=c->r[1]+0x00000040u; // 801E0DA4
  c->r[29]=0u+0x00000000u; // 801E0DA8
  c->lr=0x801E0DB0u; f_801DE530(c); // 801E0DAC
  cmps(c,0,(int32_t)c->r[3],0); // 801E0DB0
  if (crb(c,2)) { goto L_801E0DBC; } // 801E0DB4
  c->r[29]=R32(c->r[1]+0x00000050u); // 801E0DB8
L_801E0DBC:;
  c->r[3]=0u+0x00010000u; // 801E0DBC
  c->r[0]=c->r[3]+0xFFFFA000u; // 801E0DC0
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 801E0DC4
  cmpu(c,0,c->r[28],c->r[0]); // 801E0DC8
  if (!crb(c,0)) { goto L_801E0DE4; } // 801E0DCC
  c->r[3]=c->r[30]+0x00000000u; // 801E0DD0
  c->r[5]=c->r[30]+0x000000D4u; // 801E0DD4
  c->r[4]=0u+0x0000008Eu; // 801E0DD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0DDC
  c->lr=0x801E0DE4u; f_801F9770(c); // 801E0DE0
L_801E0DE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0DE4
  c->r[4]=c->r[24]|c->r[24]; // 801E0DE8
  c->r[5]=c->r[25]|c->r[25]; // 801E0DEC
  c->r[6]=c->r[26]|c->r[26]; // 801E0DF0
  c->lr=0x801E0DF8u; f_801E10C0(c); // 801E0DF4
  cmps(c,0,(int32_t)c->r[3],0); // 801E0DF8
  if (!crb(c,2)) { goto L_801E0E08; } // 801E0DFC
  c->r[3]=0u+0x00000000u; // 801E0E00
  goto L_801E0EAC; // 801E0E04
L_801E0E08:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E0E08
  if (!crb(c,2)) { goto L_801E0E24; } // 801E0E0C
  c->r[3]=c->r[30]+0x00000000u; // 801E0E10
  c->r[5]=c->r[30]+0x0000005Cu; // 801E0E14
  c->r[4]=0u+0x00000110u; // 801E0E18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0E1C
  c->lr=0x801E0E24u; f_801F9770(c); // 801E0E20
L_801E0E24:;
  c->r[3]=c->r[24]|c->r[24]; // 801E0E24
  c->r[4]=c->r[1]+0x00000024u; // 801E0E28
  c->r[29]=0u+0x00000000u; // 801E0E2C
  c->lr=0x801E0E34u; f_801DE530(c); // 801E0E30
  cmps(c,0,(int32_t)c->r[3],0); // 801E0E34
  if (crb(c,2)) { goto L_801E0E40; } // 801E0E38
  c->r[29]=R32(c->r[1]+0x00000034u); // 801E0E3C
L_801E0E40:;
  c->r[3]=0u+0x00010000u; // 801E0E40
  c->r[0]=c->r[3]+0xFFFFA000u; // 801E0E44
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 801E0E48
  cmpu(c,0,c->r[28],c->r[0]); // 801E0E4C
  if (!crb(c,0)) { goto L_801E0E5C; } // 801E0E50
  c->r[0]=0u+0x00000000u; // 801E0E54
  goto L_801E0E90; // 801E0E58
L_801E0E5C:;
  c->r[3]=c->r[24]|c->r[24]; // 801E0E5C
  c->r[4]=c->r[1]+0x00000008u; // 801E0E60
  c->r[29]=0u+0x00000000u; // 801E0E64
  c->lr=0x801E0E6Cu; f_801DE530(c); // 801E0E68
  cmps(c,0,(int32_t)c->r[3],0); // 801E0E6C
  if (crb(c,2)) { goto L_801E0E78; } // 801E0E70
  c->r[29]=R32(c->r[1]+0x00000018u); // 801E0E74
L_801E0E78:;
  c->r[4]=c->r[27]|c->r[27]; // 801E0E78
  c->r[5]=c->r[28]|c->r[28]; // 801E0E7C
  c->r[6]=c->r[29]|c->r[29]; // 801E0E80
  c->r[3]=c->r[31]+0x000000C8u; // 801E0E84
  c->lr=0x801E0E8Cu; f_801E5FF0(c); // 801E0E88
  c->r[0]=0u+0x00000001u; // 801E0E8C
L_801E0E90:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E0E90
  if (!crb(c,2)) { goto L_801E0EA0; } // 801E0E94
  c->r[3]=0u+0x00000000u; // 801E0E98
  goto L_801E0EAC; // 801E0E9C
L_801E0EA0:;
  c->r[0]=c->r[31]+0x000000BCu; // 801E0EA0
  W32(c->r[31]+0x00000030u,c->r[0]); // 801E0EA4
  c->r[3]=0u+0x00000001u; // 801E0EA8
L_801E0EAC:;
  c->r[11]=c->r[1]+0x00000080u; // 801E0EAC
  c->lr=0x801E0EB4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E0EB0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801E0EB4
  c->lr=c->r[0]; // 801E0EB8
  c->r[1]=c->r[1]+0x00000080u; // 801E0EBC
  return; // 801E0EC0
}

// fn_801E0ED0
void f_801E0ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0ED0
  c->r[0]=c->lr; // 801E0ED4
  cmps(c,0,(int32_t)c->r[4],0); // 801E0ED8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E0EDC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E0EE0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E0EE4
  c->r[30]=c->r[4]|c->r[4]; // 801E0EE8
  W32(c->r[1]+0x00000034u,c->r[29]); // 801E0EEC
  W32(c->r[1]+0x00000030u,c->r[28]); // 801E0EF0
  if (!crb(c,2)) { goto L_801E0F14; } // 801E0EF4
  c->r[3]=0u+0x802D0000u; // 801E0EF8
  c->r[5]=0u+0x802D0000u; // 801E0EFC
  c->r[3]=c->r[3]+0xFFFFFBC8u; // 801E0F00
  c->r[4]=0u+0x000000D2u; // 801E0F04
  c->r[5]=c->r[5]+0xFFFFFC24u; // 801E0F08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0F0C
  c->lr=0x801E0F14u; f_801F9770(c); // 801E0F10
L_801E0F14:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0F14
  c->lr=0x801E0F1Cu; f_801DE4A0(c); // 801E0F18
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801E0F1C
  c->r[29]=c->r[3]|c->r[3]; // 801E0F20
  c->r[28]=0u+0x00000000u; // 801E0F24
  c->r[0]=c->r[4]+0x00000003u; // 801E0F28
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E0F2C
  goto L_801E0F84; // 801E0F30
L_801E0F34:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0F34
  c->r[4]=c->r[28]|c->r[28]; // 801E0F38
  c->r[5]=c->r[1]+0x00000008u; // 801E0F3C
  c->lr=0x801E0F44u; f_801DE520(c); // 801E0F40
  cmps(c,0,(int32_t)c->r[3],0); // 801E0F44
  if (crb(c,2)) { goto L_801E0F80; } // 801E0F48
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E0F4C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E0F50
  c->r[0]=c->r[3]+0x00000003u; // 801E0F54
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E0F58
  c->ctr=c->r[5]; // 801E0F5C
  cmps(c,0,(int32_t)c->r[5],0); // 801E0F60
  if (!crb(c,1)) { goto L_801E0F80; } // 801E0F64
L_801E0F68:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E0F68
  if (crb(c,2)) { goto L_801E0F7C; } // 801E0F6C
  c->r[0]=c->r[31]+0x0000003Fu; // 801E0F70
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801E0F74
  c->r[31]=c->r[31]+c->r[4]; // 801E0F78
L_801E0F7C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0F68; } // 801E0F7C
L_801E0F80:;
  c->r[28]=c->r[28]+0x00000001u; // 801E0F80
L_801E0F84:;
  cmpu(c,0,c->r[28],c->r[29]); // 801E0F84
  if (crb(c,0)) { IRQCHK(c); goto L_801E0F34; } // 801E0F88
  c->r[3]=c->r[30]|c->r[30]; // 801E0F8C
  c->lr=0x801E0F94u; f_801DE4B0(c); // 801E0F90
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E0F94
  c->r[3]=c->r[30]|c->r[30]; // 801E0F98
  c->r[0]=c->r[4]+0x00000007u; // 801E0F9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E0FA0
  c->r[4]=c->r[1]+0x00000010u; // 801E0FA4
  c->r[31]=c->r[31]+c->r[0]; // 801E0FA8
  c->lr=0x801E0FB0u; f_801DE530(c); // 801E0FAC
  cmps(c,0,(int32_t)c->r[3],0); // 801E0FB0
  if (crb(c,2)) { goto L_801E1008; } // 801E0FB4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E0FB8
  c->r[4]=R32(c->r[1]+0x00000018u); // 801E0FBC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1204); // 801E0FC0
  c->r[3]=R32(c->r[1]+0x00000024u); // 801E0FC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0FC8
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)4276); // 801E0FCC
  c->r[6]=c->r[6]+0x00000003u; // 801E0FD0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)564); // 801E0FD4
  c->r[3]=rotl(c->r[6],0)&0xFFFFFFFCu; // 801E0FD8
  c->r[5]=c->r[5]+0x00000003u; // 801E0FDC
  c->r[31]=c->r[31]+c->r[3]; // 801E0FE0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)208); // 801E0FE4
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFCu; // 801E0FE8
  c->r[0]=c->r[4]+0x00000003u; // 801E0FEC
  c->r[31]=c->r[31]+c->r[5]; // 801E0FF0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E0FF4
  c->r[0]=c->r[3]+0x00000003u; // 801E0FF8
  c->r[31]=c->r[31]+c->r[4]; // 801E0FFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E1000
  c->r[31]=c->r[31]+c->r[0]; // 801E1004
L_801E1008:;
  c->r[3]=c->r[30]|c->r[30]; // 801E1008
  c->lr=0x801E1010u; f_801DE570(c); // 801E100C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E1010
  c->r[0]=c->r[3]+0x00000007u; // 801E1014
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E1018
  c->r[3]=c->r[31]+c->r[0]; // 801E101C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E1020
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E1024
  c->r[29]=R32(c->r[1]+0x00000034u); // 801E1028
  c->r[28]=R32(c->r[1]+0x00000030u); // 801E102C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E1030
  c->lr=c->r[0]; // 801E1034
  c->r[1]=c->r[1]+0x00000040u; // 801E1038
  return; // 801E103C
}

// fn_801E1040
void f_801E1040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1040
  c->r[0]=c->lr; // 801E1044
  cmps(c,0,(int32_t)c->r[4],0); // 801E1048
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E104C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E1050
  c->r[31]=c->r[4]|c->r[4]; // 801E1054
  if (!crb(c,2)) { goto L_801E1078; } // 801E1058
  c->r[3]=0u+0x802D0000u; // 801E105C
  c->r[5]=0u+0x802D0000u; // 801E1060
  c->r[3]=c->r[3]+0xFFFFFBC8u; // 801E1064
  c->r[4]=0u+0x00000110u; // 801E1068
  c->r[5]=c->r[5]+0xFFFFFC24u; // 801E106C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1070
  c->lr=0x801E1078u; f_801F9770(c); // 801E1074
L_801E1078:;
  c->r[3]=c->r[31]|c->r[31]; // 801E1078
  c->r[4]=c->r[1]+0x00000008u; // 801E107C
  c->r[31]=0u+0x00000000u; // 801E1080
  c->lr=0x801E1088u; f_801DE530(c); // 801E1084
  cmps(c,0,(int32_t)c->r[3],0); // 801E1088
  if (crb(c,2)) { goto L_801E1094; } // 801E108C
  c->r[31]=R32(c->r[1]+0x00000018u); // 801E1090
L_801E1094:;
  c->r[3]=0u+0x00010000u; // 801E1094
  c->r[0]=c->r[3]+0xFFFFA000u; // 801E1098
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801E109C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E10A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E10A4
  c->lr=c->r[0]; // 801E10A8
  c->r[1]=c->r[1]+0x00000030u; // 801E10AC
  return; // 801E10B0
}

// fn_801E10C0
void f_801E10C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E10C0
  c->r[0]=c->lr; // 801E10C4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801E10C8
  c->r[11]=c->r[1]+0x00000060u; // 801E10CC
  c->lr=0x801E10D4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E10D0
  cmps(c,0,(int32_t)c->r[4],0); // 801E10D4
  c->r[31]=0u+0x802D0000u; // 801E10D8
  c->r[26]=c->r[3]|c->r[3]; // 801E10DC
  c->r[27]=c->r[4]|c->r[4]; // 801E10E0
  c->r[28]=c->r[5]|c->r[5]; // 801E10E4
  c->r[29]=c->r[6]|c->r[6]; // 801E10E8
  c->r[31]=c->r[31]+0xFFFFFBC8u; // 801E10EC
  if (!crb(c,2)) { goto L_801E1108; } // 801E10F0
  c->r[3]=c->r[31]+0x00000000u; // 801E10F4
  c->r[5]=c->r[31]+0x0000005Cu; // 801E10F8
  c->r[4]=0u+0x00000130u; // 801E10FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1100
  c->lr=0x801E1108u; f_801F9770(c); // 801E1104
L_801E1108:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E1108
  if (!crb(c,2)) { goto L_801E1124; } // 801E110C
  c->r[3]=c->r[31]+0x00000000u; // 801E1110
  c->r[5]=c->r[31]+0x00000080u; // 801E1114
  c->r[4]=0u+0x00000131u; // 801E1118
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E111C
  c->lr=0x801E1124u; f_801F9770(c); // 801E1120
L_801E1124:;
  c->r[0]=rotl(c->r[28],0)&0x00000003u; cr0(c,c->r[0]); // 801E1124
  if (crb(c,2)) { goto L_801E1144; } // 801E1128
  c->r[6]=c->r[28]|c->r[28]; // 801E112C
  c->r[3]=c->r[31]+0x00000000u; // 801E1130
  c->r[5]=c->r[31]+0x00000120u; // 801E1134
  c->r[4]=0u+0x00000132u; // 801E1138
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E113C
  c->lr=0x801E1144u; f_801F9770(c); // 801E1140
L_801E1144:;
  c->r[3]=c->r[26]|c->r[26]; // 801E1144
  c->r[4]=c->r[27]|c->r[27]; // 801E1148
  c->lr=0x801E1150u; f_801E0ED0(c); // 801E114C
  cmpu(c,0,c->r[29],c->r[3]); // 801E1150
  if (!crb(c,0)) { goto L_801E116C; } // 801E1154
  c->r[3]=c->r[31]+0x00000000u; // 801E1158
  c->r[5]=c->r[31]+0x00000168u; // 801E115C
  c->r[4]=0u+0x00000133u; // 801E1160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1164
  c->lr=0x801E116Cu; f_801F9770(c); // 801E1168
L_801E116C:;
  c->r[30]=c->r[28]+c->r[29]; // 801E116C
  W32(c->r[1]+0x00000008u,c->r[28]); // 801E1170
  c->r[3]=c->r[26]|c->r[26]; // 801E1174
  c->r[4]=c->r[27]|c->r[27]; // 801E1178
  c->r[6]=c->r[30]|c->r[30]; // 801E117C
  c->r[5]=c->r[1]+0x00000008u; // 801E1180
  c->lr=0x801E1188u; f_801E1670(c); // 801E1184
  cmps(c,0,(int32_t)c->r[3],0); // 801E1188
  if (!crb(c,2)) { goto L_801E1198; } // 801E118C
  c->r[3]=0u+0x00000000u; // 801E1190
  goto L_801E1584; // 801E1194
L_801E1198:;
  c->r[3]=c->r[27]|c->r[27]; // 801E1198
  c->lr=0x801E11A0u; f_801DE4B0(c); // 801E119C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E11A0
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E11A4
  c->r[0]=c->r[3]+0x00000004u; // 801E11A8
  c->r[3]=c->r[0]+c->r[5]; // 801E11AC
  c->r[0]=c->r[3]+0x00000003u; // 801E11B0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E11B4
  c->r[0]=c->r[4]-c->r[30]; cr0(c,c->r[0]); // 801E11B8
  if (!crb(c,1)) { goto L_801E11C8; } // 801E11BC
  c->r[0]=0u+0x00000000u; // 801E11C0
  goto L_801E1220; // 801E11C4
L_801E11C8:;
  W32(c->r[26]+0x00000014u,c->r[5]); // 801E11C8
  c->r[3]=c->r[27]|c->r[27]; // 801E11CC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E11D0
  c->lr=0x801E11D8u; f_801DE4B0(c); // 801E11D4
  c->r[5]=R32(c->r[26]+0x00000014u); // 801E11D8
  c->r[6]=0u+0x00000000u; // 801E11DC
  c->r[7]=0u+0x00000000u; // 801E11E0
  c->r[4]=0u+0x00000000u; // 801E11E4
  W32(c->r[5]+0x00000000u,c->r[3]); // 801E11E8
  goto L_801E120C; // 801E11EC
L_801E11F0:;
  c->r[3]=c->r[3]+c->r[7]; // 801E11F0
  c->r[6]=c->r[6]+0x00000001u; // 801E11F4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E11F8
  c->r[0]=R32(c->r[26]+0x00000014u); // 801E11FC
  c->r[3]=c->r[0]+c->r[7]; // 801E1200
  c->r[7]=c->r[7]+0x00000008u; // 801E1204
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E1208
L_801E120C:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801E120C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E1210
  cmpu(c,0,c->r[6],c->r[0]); // 801E1214
  if (crb(c,0)) { IRQCHK(c); goto L_801E11F0; } // 801E1218
  c->r[0]=0u+0x00000001u; // 801E121C
L_801E1220:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1220
  if (!crb(c,2)) { goto L_801E1230; } // 801E1224
  c->r[3]=0u+0x00000000u; // 801E1228
  goto L_801E1584; // 801E122C
L_801E1230:;
  c->r[3]=c->r[27]|c->r[27]; // 801E1230
  c->lr=0x801E1238u; f_801DE570(c); // 801E1234
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E1238
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E123C
  c->r[0]=c->r[3]+0x00000004u; // 801E1240
  c->r[3]=c->r[0]+c->r[5]; // 801E1244
  c->r[0]=c->r[3]+0x00000003u; // 801E1248
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E124C
  c->r[0]=c->r[4]-c->r[30]; cr0(c,c->r[0]); // 801E1250
  if (!crb(c,1)) { goto L_801E1260; } // 801E1254
  c->r[0]=0u+0x00000000u; // 801E1258
  goto L_801E12B8; // 801E125C
L_801E1260:;
  W32(c->r[26]+0x00000018u,c->r[5]); // 801E1260
  c->r[3]=c->r[27]|c->r[27]; // 801E1264
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E1268
  c->lr=0x801E1270u; f_801DE570(c); // 801E126C
  c->r[5]=R32(c->r[26]+0x00000018u); // 801E1270
  c->r[6]=0u+0x00000000u; // 801E1274
  c->r[7]=0u+0x00000000u; // 801E1278
  c->r[4]=0u+0x00000000u; // 801E127C
  W32(c->r[5]+0x00000000u,c->r[3]); // 801E1280
  goto L_801E12A4; // 801E1284
L_801E1288:;
  c->r[3]=c->r[3]+c->r[7]; // 801E1288
  c->r[6]=c->r[6]+0x00000001u; // 801E128C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E1290
  c->r[0]=R32(c->r[26]+0x00000018u); // 801E1294
  c->r[3]=c->r[0]+c->r[7]; // 801E1298
  c->r[7]=c->r[7]+0x00000008u; // 801E129C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E12A0
L_801E12A4:;
  c->r[3]=R32(c->r[26]+0x00000018u); // 801E12A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E12A8
  cmpu(c,0,c->r[6],c->r[0]); // 801E12AC
  if (crb(c,0)) { IRQCHK(c); goto L_801E1288; } // 801E12B0
  c->r[0]=0u+0x00000001u; // 801E12B4
L_801E12B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E12B8
  if (!crb(c,2)) { goto L_801E12C8; } // 801E12BC
  c->r[3]=0u+0x00000000u; // 801E12C0
  goto L_801E1584; // 801E12C4
L_801E12C8:;
  c->r[3]=c->r[27]|c->r[27]; // 801E12C8
  c->r[4]=c->r[1]+0x0000000Cu; // 801E12CC
  c->lr=0x801E12D4u; f_801DE530(c); // 801E12D0
  cmps(c,0,(int32_t)c->r[3],0); // 801E12D4
  if (crb(c,2)) { goto L_801E1544; } // 801E12D8
  c->r[22]=R32(c->r[1]+0x0000000Cu); // 801E12DC
  c->r[21]=R32(c->r[1]+0x00000008u); // 801E12E0
  c->r[24]=(uint32_t)((int32_t)c->r[22]*(int32_t)1204); // 801E12E4
  c->r[3]=c->r[24]+c->r[21]; // 801E12E8
  c->r[0]=c->r[3]+0x00000003u; // 801E12EC
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E12F0
  c->r[0]=c->r[23]-c->r[30]; cr0(c,c->r[0]); // 801E12F4
  if (!crb(c,1)) { goto L_801E1304; } // 801E12F8
  c->r[0]=0u+0x00000000u; // 801E12FC
  goto L_801E1378; // 801E1300
L_801E1304:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E1304
  if (!crb(c,2)) { goto L_801E1328; } // 801E1308
  c->r[3]=0u+0x802D0000u; // 801E130C
  c->r[5]=0u+0x802D0000u; // 801E1310
  c->r[3]=c->r[3]+0x00000AC8u; // 801E1314
  c->r[4]=0u+0x00000043u; // 801E1318
  c->r[5]=c->r[5]+0x00000AA0u; // 801E131C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1320
  c->lr=0x801E1328u; f_801F9770(c); // 801E1324
L_801E1328:;
  c->r[25]=c->r[26]+0x00000054u; // 801E1328
  c->r[3]=c->r[25]|c->r[25]; // 801E132C
  c->lr=0x801E1334u; f_800CCD50(c); // 801E1330
  c->r[4]=c->r[21]|c->r[21]; // 801E1334
  c->r[5]=c->r[24]|c->r[24]; // 801E1338
  c->r[3]=c->r[26]+0x00000044u; // 801E133C
  c->r[6]=0u+0x000004B4u; // 801E1340
  c->lr=0x801E1348u; f_801D7660(c); // 801E1344
  c->r[24]=c->r[3]|c->r[3]; // 801E1348
  c->r[3]=c->r[25]|c->r[25]; // 801E134C
  c->lr=0x801E1354u; f_800CCE30(c); // 801E1350
  cmpu(c,0,c->r[24],c->r[22]); // 801E1354
  if (crb(c,2)) { goto L_801E1370; } // 801E1358
  c->r[3]=c->r[31]+0x00000000u; // 801E135C
  c->r[5]=c->r[31]+0x000001A0u; // 801E1360
  c->r[4]=0u+0x00000218u; // 801E1364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1368
  c->lr=0x801E1370u; f_801F9770(c); // 801E136C
L_801E1370:;
  W32(c->r[1]+0x00000008u,c->r[23]); // 801E1370
  c->r[0]=0u+0x00000001u; // 801E1374
L_801E1378:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1378
  if (!crb(c,2)) { goto L_801E1388; } // 801E137C
  c->r[3]=0u+0x00000000u; // 801E1380
  goto L_801E1584; // 801E1384
L_801E1388:;
  c->r[23]=R32(c->r[1]+0x00000014u); // 801E1388
  c->r[21]=R32(c->r[1]+0x00000008u); // 801E138C
  c->r[24]=(uint32_t)((int32_t)c->r[23]*(int32_t)4276); // 801E1390
  c->r[3]=c->r[24]+c->r[21]; // 801E1394
  c->r[0]=c->r[3]+0x00000003u; // 801E1398
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E139C
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 801E13A0
  if (!crb(c,1)) { goto L_801E13B0; } // 801E13A4
  c->r[0]=0u+0x00000000u; // 801E13A8
  goto L_801E1424; // 801E13AC
L_801E13B0:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E13B0
  if (!crb(c,2)) { goto L_801E13D4; } // 801E13B4
  c->r[3]=0u+0x802D0000u; // 801E13B8
  c->r[5]=0u+0x802D0000u; // 801E13BC
  c->r[3]=c->r[3]+0x00000A48u; // 801E13C0
  c->r[4]=0u+0x00000043u; // 801E13C4
  c->r[5]=c->r[5]+0x00000A20u; // 801E13C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E13CC
  c->lr=0x801E13D4u; f_801F9770(c); // 801E13D0
L_801E13D4:;
  c->r[25]=c->r[26]+0x0000007Cu; // 801E13D4
  c->r[3]=c->r[25]|c->r[25]; // 801E13D8
  c->lr=0x801E13E0u; f_800CCD50(c); // 801E13DC
  c->r[4]=c->r[21]|c->r[21]; // 801E13E0
  c->r[5]=c->r[24]|c->r[24]; // 801E13E4
  c->r[3]=c->r[26]+0x0000006Cu; // 801E13E8
  c->r[6]=0u+0x000010B4u; // 801E13EC
  c->lr=0x801E13F4u; f_801D7660(c); // 801E13F0
  c->r[24]=c->r[3]|c->r[3]; // 801E13F4
  c->r[3]=c->r[25]|c->r[25]; // 801E13F8
  c->lr=0x801E1400u; f_800CCE30(c); // 801E13FC
  cmpu(c,0,c->r[24],c->r[23]); // 801E1400
  if (crb(c,2)) { goto L_801E141C; } // 801E1404
  c->r[3]=c->r[31]+0x00000000u; // 801E1408
  c->r[5]=c->r[31]+0x000001A0u; // 801E140C
  c->r[4]=0u+0x00000258u; // 801E1410
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1414
  c->lr=0x801E141Cu; f_801F9770(c); // 801E1418
L_801E141C:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 801E141C
  c->r[0]=0u+0x00000001u; // 801E1420
L_801E1424:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1424
  if (!crb(c,2)) { goto L_801E1434; } // 801E1428
  c->r[3]=0u+0x00000000u; // 801E142C
  goto L_801E1584; // 801E1430
L_801E1434:;
  c->r[23]=R32(c->r[1]+0x00000020u); // 801E1434
  c->r[21]=R32(c->r[1]+0x00000008u); // 801E1438
  c->r[25]=(uint32_t)((int32_t)c->r[23]*(int32_t)564); // 801E143C
  c->r[3]=c->r[25]+c->r[21]; // 801E1440
  c->r[0]=c->r[3]+0x00000003u; // 801E1444
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E1448
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 801E144C
  if (!crb(c,1)) { goto L_801E145C; } // 801E1450
  c->r[0]=0u+0x00000000u; // 801E1454
  goto L_801E14D0; // 801E1458
L_801E145C:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E145C
  if (!crb(c,2)) { goto L_801E1480; } // 801E1460
  c->r[3]=0u+0x802D0000u; // 801E1464
  c->r[5]=0u+0x802D0000u; // 801E1468
  c->r[3]=c->r[3]+0x00000A88u; // 801E146C
  c->r[4]=0u+0x00000043u; // 801E1470
  c->r[5]=c->r[5]+0x00000A60u; // 801E1474
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1478
  c->lr=0x801E1480u; f_801F9770(c); // 801E147C
L_801E1480:;
  c->r[24]=c->r[26]+0x000000A4u; // 801E1480
  c->r[3]=c->r[24]|c->r[24]; // 801E1484
  c->lr=0x801E148Cu; f_800CCD50(c); // 801E1488
  c->r[4]=c->r[21]|c->r[21]; // 801E148C
  c->r[5]=c->r[25]|c->r[25]; // 801E1490
  c->r[3]=c->r[26]+0x00000094u; // 801E1494
  c->r[6]=0u+0x00000234u; // 801E1498
  c->lr=0x801E14A0u; f_801D7660(c); // 801E149C
  c->r[25]=c->r[3]|c->r[3]; // 801E14A0
  c->r[3]=c->r[24]|c->r[24]; // 801E14A4
  c->lr=0x801E14ACu; f_800CCE30(c); // 801E14A8
  cmpu(c,0,c->r[25],c->r[23]); // 801E14AC
  if (crb(c,2)) { goto L_801E14C8; } // 801E14B0
  c->r[3]=c->r[31]+0x00000000u; // 801E14B4
  c->r[5]=c->r[31]+0x000001A0u; // 801E14B8
  c->r[4]=0u+0x00000238u; // 801E14BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E14C0
  c->lr=0x801E14C8u; f_801F9770(c); // 801E14C4
L_801E14C8:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 801E14C8
  c->r[0]=0u+0x00000001u; // 801E14CC
L_801E14D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E14D0
  if (!crb(c,2)) { goto L_801E14E0; } // 801E14D4
  c->r[3]=0u+0x00000000u; // 801E14D8
  goto L_801E1584; // 801E14DC
L_801E14E0:;
  c->r[23]=R32(c->r[1]+0x00000010u); // 801E14E0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E14E4
  c->r[5]=(uint32_t)((int32_t)c->r[23]*(int32_t)208); // 801E14E8
  c->r[3]=c->r[5]+c->r[4]; // 801E14EC
  c->r[0]=c->r[3]+0x00000003u; // 801E14F0
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E14F4
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 801E14F8
  if (!crb(c,1)) { goto L_801E1508; } // 801E14FC
  c->r[0]=0u+0x00000000u; // 801E1500
  goto L_801E1534; // 801E1504
L_801E1508:;
  c->r[3]=c->r[26]+0x000000BCu; // 801E1508
  c->lr=0x801E1510u; f_801D93A0(c); // 801E150C
  cmpu(c,0,c->r[3],c->r[23]); // 801E1510
  if (crb(c,2)) { goto L_801E152C; } // 801E1514
  c->r[3]=c->r[31]+0x00000000u; // 801E1518
  c->r[5]=c->r[31]+0x000001D0u; // 801E151C
  c->r[4]=0u+0x00000278u; // 801E1520
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1524
  c->lr=0x801E152Cu; f_801F9770(c); // 801E1528
L_801E152C:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 801E152C
  c->r[0]=0u+0x00000001u; // 801E1530
L_801E1534:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1534
  if (!crb(c,2)) { goto L_801E1544; } // 801E1538
  c->r[3]=0u+0x00000000u; // 801E153C
  goto L_801E1584; // 801E1540
L_801E1544:;
  c->r[3]=c->r[26]|c->r[26]; // 801E1544
  c->r[4]=c->r[27]|c->r[27]; // 801E1548
  c->lr=0x801E1550u; f_801E0ED0(c); // 801E154C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E1550
  c->r[0]=c->r[0]-c->r[28]; // 801E1554
  cmpu(c,0,c->r[0],c->r[3]); // 801E1558
  if (crb(c,2)) { goto L_801E1574; } // 801E155C
  c->r[3]=c->r[31]+0x00000000u; // 801E1560
  c->r[5]=c->r[31]+0x00000200u; // 801E1564
  c->r[4]=0u+0x0000015Fu; // 801E1568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E156C
  c->lr=0x801E1574u; f_801F9770(c); // 801E1570
L_801E1574:;
  W32(c->r[26]+0x00000010u,c->r[27]); // 801E1574
  c->r[3]=0u+0x00000001u; // 801E1578
  W32(c->r[26]+0x000000E4u,c->r[28]); // 801E157C
  W32(c->r[26]+0x000000E8u,c->r[29]); // 801E1580
L_801E1584:;
  c->r[11]=c->r[1]+0x00000060u; // 801E1584
  c->lr=0x801E158Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E1588
  c->r[0]=R32(c->r[1]+0x00000064u); // 801E158C
  c->lr=c->r[0]; // 801E1590
  c->r[1]=c->r[1]+0x00000060u; // 801E1594
  return; // 801E1598
}

// fn_801E15A0
void f_801E15A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E15A0
  c->r[0]=c->lr; // 801E15A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E15A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E15AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E15B0
  c->r[30]=c->r[6]|c->r[6]; // 801E15B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E15B8
  c->r[29]=c->r[5]|c->r[5]; // 801E15BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E15C0
  c->r[28]=c->r[4]|c->r[4]; // 801E15C4
  c->r[31]=R32(c->r[4]+0x00000000u); // 801E15C8
  c->r[0]=c->r[31]+0x00000023u; // 801E15CC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E15D0
  c->r[0]=c->r[3]-c->r[5]; cr0(c,c->r[0]); // 801E15D4
  if (!crb(c,1)) { goto L_801E15E4; } // 801E15D8
  c->r[3]=0u+0x00000000u; // 801E15DC
  goto L_801E164C; // 801E15E0
L_801E15E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E15E4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801E15E8
  if (crb(c,2)) { goto L_801E15FC; } // 801E15EC
  c->r[3]=c->r[31]|c->r[31]; // 801E15F0
  c->lr=0x801E15F8u; f_801D9400(c); // 801E15F4
  c->r[31]=c->r[3]|c->r[3]; // 801E15F8
L_801E15FC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E15FC
  c->r[0]=c->r[3]+0x0000001Fu; // 801E1600
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801E1604
  W32(c->r[28]+0x00000000u,c->r[4]); // 801E1608
  c->r[3]=c->r[30]+c->r[4]; // 801E160C
  c->r[0]=c->r[3]+0x00000003u; // 801E1610
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E1614
  c->r[0]=c->r[3]-c->r[29]; cr0(c,c->r[0]); // 801E1618
  if (!crb(c,1)) { goto L_801E1628; } // 801E161C
  c->r[3]=0u+0x00000000u; // 801E1620
  goto L_801E164C; // 801E1624
L_801E1628:;
  W32(c->r[28]+0x00000000u,c->r[3]); // 801E1628
  c->r[3]=c->r[31]|c->r[31]; // 801E162C
  c->r[5]=c->r[30]|c->r[30]; // 801E1630
  c->lr=0x801E1638u; f_801D9540(c); // 801E1634
  cmps(c,0,(int32_t)c->r[3],0); // 801E1638
  if (crb(c,2)) { goto L_801E1648; } // 801E163C
  c->r[3]=c->r[31]|c->r[31]; // 801E1640
  goto L_801E164C; // 801E1644
L_801E1648:;
  c->r[3]=0u+0x00000000u; // 801E1648
L_801E164C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E164C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1650
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1654
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1658
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E165C
  c->lr=c->r[0]; // 801E1660
  c->r[1]=c->r[1]+0x00000020u; // 801E1664
  return; // 801E1668
}

// fn_801E1670
void f_801E1670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1670
  c->r[0]=c->lr; // 801E1674
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E1678
  c->r[11]=c->r[1]+0x00000040u; // 801E167C
  c->lr=0x801E1684u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E1680
  c->r[29]=c->r[4]|c->r[4]; // 801E1684
  c->r[28]=c->r[3]|c->r[3]; // 801E1688
  c->r[30]=c->r[5]|c->r[5]; // 801E168C
  c->r[31]=c->r[6]|c->r[6]; // 801E1690
  c->r[3]=c->r[29]|c->r[29]; // 801E1694
  c->lr=0x801E169Cu; f_801DE4A0(c); // 801E1698
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801E169C
  c->r[24]=R32(c->r[30]+0x00000000u); // 801E16A0
  c->r[25]=c->r[3]|c->r[3]; // 801E16A4
  c->r[4]=c->r[0]+c->r[24]; // 801E16A8
  c->r[0]=c->r[4]+0x00000003u; // 801E16AC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E16B0
  c->r[0]=c->r[4]-c->r[31]; cr0(c,c->r[0]); // 801E16B4
  if (!crb(c,1)) { goto L_801E16C4; } // 801E16B8
  c->r[3]=0u+0x00000000u; // 801E16BC
  goto L_801E17B0; // 801E16C0
L_801E16C4:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E16C4
  c->r[23]=0u+0x00000000u; // 801E16C8
  c->r[26]=0u+0x802D0000u; // 801E16CC
  c->r[27]=0u+0x802D0000u; // 801E16D0
  W32(c->r[28]+0x00000040u,c->r[24]); // 801E16D4
  W32(c->r[28]+0x0000003Cu,c->r[3]); // 801E16D8
  goto L_801E17A4; // 801E16DC
L_801E16E0:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E16E0
  c->r[22]=c->r[24]|c->r[24]; // 801E16E4
  if (crb(c,2)) { goto L_801E16F8; } // 801E16E8
  c->r[3]=c->r[24]|c->r[24]; // 801E16EC
  c->lr=0x801E16F4u; f_801E4410(c); // 801E16F0
  c->r[22]=c->r[3]|c->r[3]; // 801E16F4
L_801E16F8:;
  c->r[3]=c->r[29]|c->r[29]; // 801E16F8
  c->r[4]=c->r[23]|c->r[23]; // 801E16FC
  c->r[5]=c->r[1]+0x00000008u; // 801E1700
  c->lr=0x801E1708u; f_801DE520(c); // 801E1704
  cmps(c,0,(int32_t)c->r[3],0); // 801E1708
  if (crb(c,2)) { goto L_801E179C; } // 801E170C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E1710
  c->r[3]=c->r[22]|c->r[22]; // 801E1714
  c->lr=0x801E171Cu; f_801E4E20(c); // 801E1718
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E171C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1720
  if (crb(c,2)) { goto L_801E179C; } // 801E1724
  c->r[21]=0u+0x00000000u; // 801E1728
  goto L_801E1788; // 801E172C
L_801E1730:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801E1730
  c->r[3]=c->r[28]|c->r[28]; // 801E1734
  c->r[4]=c->r[30]|c->r[30]; // 801E1738
  c->r[5]=c->r[31]|c->r[31]; // 801E173C
  c->lr=0x801E1744u; f_801E15A0(c); // 801E1740
  cmps(c,0,(int32_t)c->r[3],0); // 801E1744
  c->r[20]=c->r[3]|c->r[3]; // 801E1748
  if (!crb(c,2)) { goto L_801E1768; } // 801E174C
  c->r[6]=c->r[23]|c->r[23]; // 801E1750
  c->r[3]=c->r[26]+0xFFFFFBC8u; // 801E1754
  c->r[5]=c->r[27]+0xFFFFFE30u; // 801E1758
  c->r[4]=0u+0x000001BAu; // 801E175C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1760
  c->lr=0x801E1768u; f_801F9810(c); // 801E1764
L_801E1768:;
  cmps(c,0,(int32_t)c->r[20],0); // 801E1768
  if (!crb(c,2)) { goto L_801E1778; } // 801E176C
  c->r[3]=0u+0x00000000u; // 801E1770
  goto L_801E17B0; // 801E1774
L_801E1778:;
  c->r[3]=c->r[22]|c->r[22]; // 801E1778
  c->r[4]=c->r[20]|c->r[20]; // 801E177C
  c->lr=0x801E1784u; f_801E5140(c); // 801E1780
  c->r[21]=c->r[21]+0x00000001u; // 801E1784
L_801E1788:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E1788
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[4]); // 801E178C
  if (crb(c,0)) { IRQCHK(c); goto L_801E1730; } // 801E1790
  c->r[3]=c->r[22]|c->r[22]; // 801E1794
  c->lr=0x801E179Cu; f_801E4F90(c); // 801E1798
L_801E179C:;
  c->r[23]=c->r[23]+0x00000001u; // 801E179C
  c->r[24]=c->r[24]+0x00000064u; // 801E17A0
L_801E17A4:;
  cmpu(c,0,c->r[23],c->r[25]); // 801E17A4
  if (crb(c,0)) { IRQCHK(c); goto L_801E16E0; } // 801E17A8
  c->r[3]=0u+0x00000001u; // 801E17AC
L_801E17B0:;
  c->r[11]=c->r[1]+0x00000040u; // 801E17B0
  c->lr=0x801E17B8u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E17B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E17B8
  c->lr=c->r[0]; // 801E17BC
  c->r[1]=c->r[1]+0x00000040u; // 801E17C0
  return; // 801E17C4
}

// fn_801E17D0
void f_801E17D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFED90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E17D0
  c->r[0]=c->lr; // 801E17D4
  W32(c->r[1]+0x00001274u,c->r[0]); // 801E17D8
  c->r[11]=c->r[1]+0x00001270u; // 801E17DC
  c->lr=0x801E17E4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E17E0
  c->r[31]=c->r[3]|c->r[3]; // 801E17E4
  c->r[19]=0u+0x00000000u; // 801E17E8
  c->r[18]=0u+0x00000000u; // 801E17EC
  c->r[21]=0u+0x802D0000u; // 801E17F0
  c->r[20]=0u+0x802D0000u; // 801E17F4
  goto L_801E1834; // 801E17F8
L_801E17FC:;
  cmpu(c,0,c->r[19],c->r[8]); // 801E17FC
  if (crb(c,0)) { goto L_801E1820; } // 801E1800
  c->r[6]=c->r[19]|c->r[19]; // 801E1804
  c->r[3]=c->r[21]+0xFFFFFBC8u; // 801E1808
  c->r[5]=c->r[20]+0xFFFFFE64u; // 801E180C
  c->r[4]=0u+0x000002B9u; // 801E1810
  c->r[7]=0u+0x00000000u; // 801E1814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1818
  c->lr=0x801E1820u; f_801F9770(c); // 801E181C
L_801E1820:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 801E1820
  c->r[3]=c->r[0]+c->r[18]; // 801E1824
  c->lr=0x801E182Cu; f_801E4520(c); // 801E1828
  c->r[18]=c->r[18]+0x00000064u; // 801E182C
  c->r[19]=c->r[19]+0x00000001u; // 801E1830
L_801E1834:;
  c->r[8]=R32(c->r[31]+0x0000003Cu); // 801E1834
  cmpu(c,0,c->r[19],c->r[8]); // 801E1838
  if (crb(c,0)) { IRQCHK(c); goto L_801E17FC; } // 801E183C
  c->r[0]=R32(c->r[31]+0x00000048u); // 801E1840
  cmpu(c,0,c->r[0],0x00000002u); // 801E1844
  if (crb(c,0)) { goto L_801E1A8C; } // 801E1848
  c->r[30]=c->r[31]+0x00000054u; // 801E184C
  c->r[3]=c->r[30]|c->r[30]; // 801E1850
  c->lr=0x801E1858u; f_800CCD50(c); // 801E1854
  c->r[4]=0u+0x801E0000u; // 801E1858
  c->r[5]=0u+0x801E0000u; // 801E185C
  c->r[3]=c->r[1]+0x00000C38u; // 801E1860
  c->r[6]=0u+0x0000000Cu; // 801E1864
  c->r[4]=c->r[4]+0x00000A80u; // 801E1868
  c->r[5]=c->r[5]+0x00000AA0u; // 801E186C
  c->r[7]=0u+0x00000080u; // 801E1870
  c->lr=0x801E1878u; f_80217288(c); // 801E1874
  c->r[29]=0u+0x802D0000u; // 801E1878
  c->r[28]=0u+0x802D0000u; // 801E187C
  c->r[27]=0u+0x802D0000u; // 801E1880
  c->r[26]=0u+0x802D0000u; // 801E1884
  c->r[25]=0u+0x802D0000u; // 801E1888
  c->r[24]=0u+0x802D0000u; // 801E188C
  c->r[21]=0u+0x802D0000u; // 801E1890
  c->r[20]=0u+0x802D0000u; // 801E1894
  goto L_801E196C; // 801E1898
L_801E189C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E189C
  if (!crb(c,2)) { goto L_801E18B8; } // 801E18A0
  c->r[3]=c->r[29]+0x00000A14u; // 801E18A4
  c->r[5]=c->r[28]+0x000009F0u; // 801E18A8
  c->r[4]=0u+0x000001F1u; // 801E18AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E18B0
  c->lr=0x801E18B8u; f_801F9770(c); // 801E18B4
L_801E18B8:;
  c->r[22]=R32(c->r[31]+0x0000004Cu); // 801E18B8
  cmps(c,0,(int32_t)c->r[22],0); // 801E18BC
  if (!crb(c,2)) { goto L_801E18D8; } // 801E18C0
  c->r[3]=c->r[27]+0xFFFFF1B4u; // 801E18C4
  c->r[5]=c->r[26]+0xFFFFF190u; // 801E18C8
  c->r[4]=0u+0x0000023Du; // 801E18CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E18D0
  c->lr=0x801E18D8u; f_801F9770(c); // 801E18D4
L_801E18D8:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 801E18D8
  if (!crb(c,2)) { goto L_801E18F4; } // 801E18DC
  c->r[3]=c->r[25]+0x000009E4u; // 801E18E0
  c->r[5]=c->r[24]+0x000009C0u; // 801E18E4
  c->r[4]=0u+0x00000193u; // 801E18E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E18EC
  c->lr=0x801E18F4u; f_801F9770(c); // 801E18F0
L_801E18F4:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 801E18F4
  c->r[3]=c->r[31]+0x00000048u; // 801E18F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801E18FC
  c->r[4]=c->r[1]+0x00000028u; // 801E1900
  c->lr=0x801E1908u; f_801F9EE0(c); // 801E1904
  c->r[3]=R8(c->r[23]+0x00000098u); // 801E1908
  c->r[0]=R32(c->r[23]+0x00000050u); // 801E190C
  c->r[3]=c->r[3]+c->r[0]; // 801E1910
  cmps(c,0,(int32_t)c->r[3],127); // 801E1914
  if (!crb(c,1)) { goto L_801E1924; } // 801E1918
  c->r[0]=0u+0x0000007Fu; // 801E191C
  goto L_801E192C; // 801E1920
L_801E1924:;
  c->r[0]=sraw(c,c->r[3],31); // 801E1924
  c->r[0]=c->r[3]&~c->r[0]; // 801E1928
L_801E192C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E192C
  c->r[19]=c->r[1]+0x00000C38u; // 801E1930
  cmps(c,0,(int32_t)c->r[23],0); // 801E1934
  c->r[19]=c->r[19]+c->r[0]; // 801E1938
  c->r[22]=c->r[19]+0x00000004u; // 801E193C
  if (!crb(c,2)) { goto L_801E1958; } // 801E1940
  c->r[3]=c->r[21]+0xFFFFF1E4u; // 801E1944
  c->r[5]=c->r[20]+0xFFFFF1C0u; // 801E1948
  c->r[4]=0u+0x00000233u; // 801E194C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1950
  c->lr=0x801E1958u; f_801F9770(c); // 801E1954
L_801E1958:;
  W32(c->r[1]+0x0000002Cu,c->r[22]); // 801E1958
  c->r[3]=c->r[19]|c->r[19]; // 801E195C
  c->r[4]=c->r[1]+0x0000002Cu; // 801E1960
  c->r[5]=c->r[23]+0x000000F0u; // 801E1964
  c->lr=0x801E196Cu; f_801FA130(c); // 801E1968
L_801E196C:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 801E196C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1970
  if (!crb(c,2)) { IRQCHK(c); goto L_801E189C; } // 801E1974
  c->r[18]=c->r[1]+0x00000C38u; // 801E1978
  c->r[19]=0u+0x00000000u; // 801E197C
  c->r[29]=0u+0x802D0000u; // 801E1980
  c->r[28]=0u+0x802D0000u; // 801E1984
  c->r[26]=0u+0x802D0000u; // 801E1988
  c->r[25]=0u+0x802D0000u; // 801E198C
  c->r[24]=0u+0x802D0000u; // 801E1990
  c->r[22]=0u+0x802D0000u; // 801E1994
  c->r[21]=0u+0x802D0000u; // 801E1998
  c->r[20]=0u+0x802D0000u; // 801E199C
L_801E19A0:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801E19A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E19A4
  if (crb(c,2)) { goto L_801E1A5C; } // 801E19A8
  c->r[23]=c->r[31]+0x0000004Cu; // 801E19AC
  goto L_801E1A50; // 801E19B0
L_801E19B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E19B4
  if (!crb(c,2)) { goto L_801E19D0; } // 801E19B8
  c->r[3]=c->r[29]+0x00000A14u; // 801E19BC
  c->r[5]=c->r[28]+0x000009F0u; // 801E19C0
  c->r[4]=0u+0x000001F1u; // 801E19C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E19C8
  c->lr=0x801E19D0u; f_801F9770(c); // 801E19CC
L_801E19D0:;
  c->r[27]=R32(c->r[18]+0x00000004u); // 801E19D0
  cmps(c,0,(int32_t)c->r[27],0); // 801E19D4
  if (!crb(c,2)) { goto L_801E19F0; } // 801E19D8
  c->r[3]=c->r[26]+0xFFFFF1B4u; // 801E19DC
  c->r[5]=c->r[25]+0xFFFFF190u; // 801E19E0
  c->r[4]=0u+0x0000023Du; // 801E19E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E19E8
  c->lr=0x801E19F0u; f_801F9770(c); // 801E19EC
L_801E19F0:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF10u,0); cr0(c,c->r[27]); // 801E19F0
  if (!crb(c,2)) { goto L_801E1A0C; } // 801E19F4
  c->r[3]=c->r[24]+0x000009E4u; // 801E19F8
  c->r[5]=c->r[22]+0x000009C0u; // 801E19FC
  c->r[4]=0u+0x00000193u; // 801E1A00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1A04
  c->lr=0x801E1A0Cu; f_801F9770(c); // 801E1A08
L_801E1A0C:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801E1A0C
  c->r[3]=c->r[18]|c->r[18]; // 801E1A10
  W32(c->r[1]+0x00000030u,c->r[0]); // 801E1A14
  c->r[4]=c->r[1]+0x00000030u; // 801E1A18
  c->lr=0x801E1A20u; f_801F9EE0(c); // 801E1A1C
  cmps(c,0,(int32_t)c->r[27],0); // 801E1A20
  if (!crb(c,2)) { goto L_801E1A3C; } // 801E1A24
  c->r[3]=c->r[21]+0xFFFFF1E4u; // 801E1A28
  c->r[5]=c->r[20]+0xFFFFF1C0u; // 801E1A2C
  c->r[4]=0u+0x00000233u; // 801E1A30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1A34
  c->lr=0x801E1A3Cu; f_801F9770(c); // 801E1A38
L_801E1A3C:;
  W32(c->r[1]+0x00000034u,c->r[23]); // 801E1A3C
  c->r[3]=c->r[31]+0x00000048u; // 801E1A40
  c->r[4]=c->r[1]+0x00000034u; // 801E1A44
  c->r[5]=c->r[27]+0x000000F0u; // 801E1A48
  c->lr=0x801E1A50u; f_801FA130(c); // 801E1A4C
L_801E1A50:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801E1A50
  cmps(c,0,(int32_t)c->r[0],0); // 801E1A54
  if (!crb(c,2)) { IRQCHK(c); goto L_801E19B4; } // 801E1A58
L_801E1A5C:;
  c->r[19]=c->r[19]+0x00000001u; // 801E1A5C
  c->r[18]=c->r[18]+0x0000000Cu; // 801E1A60
  cmps(c,0,(int32_t)c->r[19],128); // 801E1A64
  if (crb(c,0)) { IRQCHK(c); goto L_801E19A0; } // 801E1A68
  c->r[4]=0u+0x801E0000u; // 801E1A6C
  c->r[3]=c->r[1]+0x00000C38u; // 801E1A70
  c->r[4]=c->r[4]+0x00000AA0u; // 801E1A74
  c->r[5]=0u+0x0000000Cu; // 801E1A78
  c->r[6]=0u+0x00000080u; // 801E1A7C
  c->lr=0x801E1A84u; f_80217380(c); // 801E1A80
  c->r[3]=c->r[30]|c->r[30]; // 801E1A84
  c->lr=0x801E1A8Cu; f_800CCE30(c); // 801E1A88
L_801E1A8C:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801E1A8C
  cmpu(c,0,c->r[0],0x00000002u); // 801E1A90
  if (crb(c,0)) { goto L_801E1CD8; } // 801E1A94
  c->r[30]=c->r[31]+0x0000007Cu; // 801E1A98
  c->r[3]=c->r[30]|c->r[30]; // 801E1A9C
  c->lr=0x801E1AA4u; f_800CCD50(c); // 801E1AA0
  c->r[4]=0u+0x801E0000u; // 801E1AA4
  c->r[5]=0u+0x801E0000u; // 801E1AA8
  c->r[3]=c->r[1]+0x00000638u; // 801E1AAC
  c->r[6]=0u+0x0000000Cu; // 801E1AB0
  c->r[4]=c->r[4]+0x00000B00u; // 801E1AB4
  c->r[5]=c->r[5]+0x00000B20u; // 801E1AB8
  c->r[7]=0u+0x00000080u; // 801E1ABC
  c->lr=0x801E1AC4u; f_80217288(c); // 801E1AC0
  c->r[29]=0u+0x802D0000u; // 801E1AC4
  c->r[28]=0u+0x802D0000u; // 801E1AC8
  c->r[27]=0u+0x802D0000u; // 801E1ACC
  c->r[26]=0u+0x802D0000u; // 801E1AD0
  c->r[25]=0u+0x802D0000u; // 801E1AD4
  c->r[24]=0u+0x802D0000u; // 801E1AD8
  c->r[21]=0u+0x802D0000u; // 801E1ADC
  c->r[20]=0u+0x802D0000u; // 801E1AE0
  goto L_801E1BB8; // 801E1AE4
L_801E1AE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1AE8
  if (!crb(c,2)) { goto L_801E1B04; } // 801E1AEC
  c->r[3]=c->r[29]+0x00000954u; // 801E1AF0
  c->r[5]=c->r[28]+0x00000930u; // 801E1AF4
  c->r[4]=0u+0x000001F1u; // 801E1AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1AFC
  c->lr=0x801E1B04u; f_801F9770(c); // 801E1B00
L_801E1B04:;
  c->r[22]=R32(c->r[31]+0x00000074u); // 801E1B04
  cmps(c,0,(int32_t)c->r[22],0); // 801E1B08
  if (!crb(c,2)) { goto L_801E1B24; } // 801E1B0C
  c->r[3]=c->r[27]+0x000008F4u; // 801E1B10
  c->r[5]=c->r[26]+0x000008D0u; // 801E1B14
  c->r[4]=0u+0x0000023Du; // 801E1B18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1B1C
  c->lr=0x801E1B24u; f_801F9770(c); // 801E1B20
L_801E1B24:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 801E1B24
  if (!crb(c,2)) { goto L_801E1B40; } // 801E1B28
  c->r[3]=c->r[25]+0x00000924u; // 801E1B2C
  c->r[5]=c->r[24]+0x00000900u; // 801E1B30
  c->r[4]=0u+0x00000193u; // 801E1B34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1B38
  c->lr=0x801E1B40u; f_801F9770(c); // 801E1B3C
L_801E1B40:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 801E1B40
  c->r[3]=c->r[31]+0x00000070u; // 801E1B44
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E1B48
  c->r[4]=c->r[1]+0x00000018u; // 801E1B4C
  c->lr=0x801E1B54u; f_801F9EE0(c); // 801E1B50
  c->r[3]=R8(c->r[23]+0x00000098u); // 801E1B54
  c->r[0]=R32(c->r[23]+0x00000050u); // 801E1B58
  c->r[3]=c->r[3]+c->r[0]; // 801E1B5C
  cmps(c,0,(int32_t)c->r[3],127); // 801E1B60
  if (!crb(c,1)) { goto L_801E1B70; } // 801E1B64
  c->r[0]=0u+0x0000007Fu; // 801E1B68
  goto L_801E1B78; // 801E1B6C
L_801E1B70:;
  c->r[0]=sraw(c,c->r[3],31); // 801E1B70
  c->r[0]=c->r[3]&~c->r[0]; // 801E1B74
L_801E1B78:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E1B78
  c->r[19]=c->r[1]+0x00000638u; // 801E1B7C
  cmps(c,0,(int32_t)c->r[23],0); // 801E1B80
  c->r[19]=c->r[19]+c->r[0]; // 801E1B84
  c->r[22]=c->r[19]+0x00000004u; // 801E1B88
  if (!crb(c,2)) { goto L_801E1BA4; } // 801E1B8C
  c->r[3]=c->r[21]+0x000008C4u; // 801E1B90
  c->r[5]=c->r[20]+0x000008A0u; // 801E1B94
  c->r[4]=0u+0x00000233u; // 801E1B98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1B9C
  c->lr=0x801E1BA4u; f_801F9770(c); // 801E1BA0
L_801E1BA4:;
  W32(c->r[1]+0x0000001Cu,c->r[22]); // 801E1BA4
  c->r[3]=c->r[19]|c->r[19]; // 801E1BA8
  c->r[4]=c->r[1]+0x0000001Cu; // 801E1BAC
  c->r[5]=c->r[23]+0x000000F0u; // 801E1BB0
  c->lr=0x801E1BB8u; f_801FA130(c); // 801E1BB4
L_801E1BB8:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801E1BB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E1BBC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1AE8; } // 801E1BC0
  c->r[18]=c->r[1]+0x00000638u; // 801E1BC4
  c->r[19]=0u+0x00000000u; // 801E1BC8
  c->r[29]=0u+0x802D0000u; // 801E1BCC
  c->r[28]=0u+0x802D0000u; // 801E1BD0
  c->r[26]=0u+0x802D0000u; // 801E1BD4
  c->r[25]=0u+0x802D0000u; // 801E1BD8
  c->r[24]=0u+0x802D0000u; // 801E1BDC
  c->r[22]=0u+0x802D0000u; // 801E1BE0
  c->r[21]=0u+0x802D0000u; // 801E1BE4
  c->r[20]=0u+0x802D0000u; // 801E1BE8
L_801E1BEC:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801E1BEC
  cmps(c,0,(int32_t)c->r[0],0); // 801E1BF0
  if (crb(c,2)) { goto L_801E1CA8; } // 801E1BF4
  c->r[23]=c->r[31]+0x00000074u; // 801E1BF8
  goto L_801E1C9C; // 801E1BFC
L_801E1C00:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1C00
  if (!crb(c,2)) { goto L_801E1C1C; } // 801E1C04
  c->r[3]=c->r[29]+0x00000954u; // 801E1C08
  c->r[5]=c->r[28]+0x00000930u; // 801E1C0C
  c->r[4]=0u+0x000001F1u; // 801E1C10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1C14
  c->lr=0x801E1C1Cu; f_801F9770(c); // 801E1C18
L_801E1C1C:;
  c->r[27]=R32(c->r[18]+0x00000004u); // 801E1C1C
  cmps(c,0,(int32_t)c->r[27],0); // 801E1C20
  if (!crb(c,2)) { goto L_801E1C3C; } // 801E1C24
  c->r[3]=c->r[26]+0x000008F4u; // 801E1C28
  c->r[5]=c->r[25]+0x000008D0u; // 801E1C2C
  c->r[4]=0u+0x0000023Du; // 801E1C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1C34
  c->lr=0x801E1C3Cu; f_801F9770(c); // 801E1C38
L_801E1C3C:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF10u,0); cr0(c,c->r[27]); // 801E1C3C
  if (!crb(c,2)) { goto L_801E1C58; } // 801E1C40
  c->r[3]=c->r[24]+0x00000924u; // 801E1C44
  c->r[5]=c->r[22]+0x00000900u; // 801E1C48
  c->r[4]=0u+0x00000193u; // 801E1C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1C50
  c->lr=0x801E1C58u; f_801F9770(c); // 801E1C54
L_801E1C58:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801E1C58
  c->r[3]=c->r[18]|c->r[18]; // 801E1C5C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801E1C60
  c->r[4]=c->r[1]+0x00000020u; // 801E1C64
  c->lr=0x801E1C6Cu; f_801F9EE0(c); // 801E1C68
  cmps(c,0,(int32_t)c->r[27],0); // 801E1C6C
  if (!crb(c,2)) { goto L_801E1C88; } // 801E1C70
  c->r[3]=c->r[21]+0x000008C4u; // 801E1C74
  c->r[5]=c->r[20]+0x000008A0u; // 801E1C78
  c->r[4]=0u+0x00000233u; // 801E1C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1C80
  c->lr=0x801E1C88u; f_801F9770(c); // 801E1C84
L_801E1C88:;
  W32(c->r[1]+0x00000024u,c->r[23]); // 801E1C88
  c->r[3]=c->r[31]+0x00000070u; // 801E1C8C
  c->r[4]=c->r[1]+0x00000024u; // 801E1C90
  c->r[5]=c->r[27]+0x000000F0u; // 801E1C94
  c->lr=0x801E1C9Cu; f_801FA130(c); // 801E1C98
L_801E1C9C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801E1C9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1CA0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1C00; } // 801E1CA4
L_801E1CA8:;
  c->r[19]=c->r[19]+0x00000001u; // 801E1CA8
  c->r[18]=c->r[18]+0x0000000Cu; // 801E1CAC
  cmps(c,0,(int32_t)c->r[19],128); // 801E1CB0
  if (crb(c,0)) { IRQCHK(c); goto L_801E1BEC; } // 801E1CB4
  c->r[4]=0u+0x801E0000u; // 801E1CB8
  c->r[3]=c->r[1]+0x00000638u; // 801E1CBC
  c->r[4]=c->r[4]+0x00000B20u; // 801E1CC0
  c->r[5]=0u+0x0000000Cu; // 801E1CC4
  c->r[6]=0u+0x00000080u; // 801E1CC8
  c->lr=0x801E1CD0u; f_80217380(c); // 801E1CCC
  c->r[3]=c->r[30]|c->r[30]; // 801E1CD0
  c->lr=0x801E1CD8u; f_800CCE30(c); // 801E1CD4
L_801E1CD8:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 801E1CD8
  cmpu(c,0,c->r[0],0x00000002u); // 801E1CDC
  if (crb(c,0)) { goto L_801E1F24; } // 801E1CE0
  c->r[24]=c->r[31]+0x000000A4u; // 801E1CE4
  c->r[3]=c->r[24]|c->r[24]; // 801E1CE8
  c->lr=0x801E1CF0u; f_800CCD50(c); // 801E1CEC
  c->r[4]=0u+0x801E0000u; // 801E1CF0
  c->r[5]=0u+0x801E0000u; // 801E1CF4
  c->r[3]=c->r[1]+0x00000038u; // 801E1CF8
  c->r[6]=0u+0x0000000Cu; // 801E1CFC
  c->r[4]=c->r[4]+0x00000B80u; // 801E1D00
  c->r[5]=c->r[5]+0x00000BA0u; // 801E1D04
  c->r[7]=0u+0x00000080u; // 801E1D08
  c->lr=0x801E1D10u; f_80217288(c); // 801E1D0C
  c->r[25]=0u+0x802D0000u; // 801E1D10
  c->r[26]=0u+0x802D0000u; // 801E1D14
  c->r[27]=0u+0x802D0000u; // 801E1D18
  c->r[28]=0u+0x802D0000u; // 801E1D1C
  c->r[29]=0u+0x802D0000u; // 801E1D20
  c->r[30]=0u+0x802D0000u; // 801E1D24
  c->r[21]=0u+0x802D0000u; // 801E1D28
  c->r[20]=0u+0x802D0000u; // 801E1D2C
  goto L_801E1E04; // 801E1D30
L_801E1D34:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1D34
  if (!crb(c,2)) { goto L_801E1D50; } // 801E1D38
  c->r[3]=c->r[25]+0x00000894u; // 801E1D3C
  c->r[5]=c->r[26]+0x00000870u; // 801E1D40
  c->r[4]=0u+0x000001F1u; // 801E1D44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1D48
  c->lr=0x801E1D50u; f_801F9770(c); // 801E1D4C
L_801E1D50:;
  c->r[22]=R32(c->r[31]+0x0000009Cu); // 801E1D50
  cmps(c,0,(int32_t)c->r[22],0); // 801E1D54
  if (!crb(c,2)) { goto L_801E1D70; } // 801E1D58
  c->r[3]=c->r[27]+0x00000834u; // 801E1D5C
  c->r[5]=c->r[28]+0x00000810u; // 801E1D60
  c->r[4]=0u+0x0000023Du; // 801E1D64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1D68
  c->lr=0x801E1D70u; f_801F9770(c); // 801E1D6C
L_801E1D70:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 801E1D70
  if (!crb(c,2)) { goto L_801E1D8C; } // 801E1D74
  c->r[3]=c->r[29]+0x00000864u; // 801E1D78
  c->r[5]=c->r[30]+0x00000840u; // 801E1D7C
  c->r[4]=0u+0x00000193u; // 801E1D80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1D84
  c->lr=0x801E1D8Cu; f_801F9770(c); // 801E1D88
L_801E1D8C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 801E1D8C
  c->r[3]=c->r[31]+0x00000098u; // 801E1D90
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E1D94
  c->r[4]=c->r[1]+0x00000008u; // 801E1D98
  c->lr=0x801E1DA0u; f_801F9EE0(c); // 801E1D9C
  c->r[3]=R8(c->r[23]+0x00000098u); // 801E1DA0
  c->r[0]=R32(c->r[23]+0x00000050u); // 801E1DA4
  c->r[3]=c->r[3]+c->r[0]; // 801E1DA8
  cmps(c,0,(int32_t)c->r[3],127); // 801E1DAC
  if (!crb(c,1)) { goto L_801E1DBC; } // 801E1DB0
  c->r[0]=0u+0x0000007Fu; // 801E1DB4
  goto L_801E1DC4; // 801E1DB8
L_801E1DBC:;
  c->r[0]=sraw(c,c->r[3],31); // 801E1DBC
  c->r[0]=c->r[3]&~c->r[0]; // 801E1DC0
L_801E1DC4:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E1DC4
  c->r[19]=c->r[1]+0x00000038u; // 801E1DC8
  cmps(c,0,(int32_t)c->r[23],0); // 801E1DCC
  c->r[19]=c->r[19]+c->r[0]; // 801E1DD0
  c->r[22]=c->r[19]+0x00000004u; // 801E1DD4
  if (!crb(c,2)) { goto L_801E1DF0; } // 801E1DD8
  c->r[3]=c->r[21]+0x00000804u; // 801E1DDC
  c->r[5]=c->r[20]+0x000007E0u; // 801E1DE0
  c->r[4]=0u+0x00000233u; // 801E1DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1DE8
  c->lr=0x801E1DF0u; f_801F9770(c); // 801E1DEC
L_801E1DF0:;
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 801E1DF0
  c->r[3]=c->r[19]|c->r[19]; // 801E1DF4
  c->r[4]=c->r[1]+0x0000000Cu; // 801E1DF8
  c->r[5]=c->r[23]+0x000000F0u; // 801E1DFC
  c->lr=0x801E1E04u; f_801FA130(c); // 801E1E00
L_801E1E04:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 801E1E04
  cmps(c,0,(int32_t)c->r[0],0); // 801E1E08
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1D34; } // 801E1E0C
  c->r[18]=c->r[1]+0x00000038u; // 801E1E10
  c->r[19]=0u+0x00000000u; // 801E1E14
  c->r[20]=0u+0x802D0000u; // 801E1E18
  c->r[21]=0u+0x802D0000u; // 801E1E1C
  c->r[30]=0u+0x802D0000u; // 801E1E20
  c->r[29]=0u+0x802D0000u; // 801E1E24
  c->r[28]=0u+0x802D0000u; // 801E1E28
  c->r[27]=0u+0x802D0000u; // 801E1E2C
  c->r[26]=0u+0x802D0000u; // 801E1E30
  c->r[25]=0u+0x802D0000u; // 801E1E34
L_801E1E38:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801E1E38
  cmps(c,0,(int32_t)c->r[0],0); // 801E1E3C
  if (crb(c,2)) { goto L_801E1EF4; } // 801E1E40
  c->r[23]=c->r[31]+0x0000009Cu; // 801E1E44
  goto L_801E1EE8; // 801E1E48
L_801E1E4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1E4C
  if (!crb(c,2)) { goto L_801E1E68; } // 801E1E50
  c->r[3]=c->r[20]+0x00000894u; // 801E1E54
  c->r[5]=c->r[21]+0x00000870u; // 801E1E58
  c->r[4]=0u+0x000001F1u; // 801E1E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1E60
  c->lr=0x801E1E68u; f_801F9770(c); // 801E1E64
L_801E1E68:;
  c->r[22]=R32(c->r[18]+0x00000004u); // 801E1E68
  cmps(c,0,(int32_t)c->r[22],0); // 801E1E6C
  if (!crb(c,2)) { goto L_801E1E88; } // 801E1E70
  c->r[3]=c->r[30]+0x00000834u; // 801E1E74
  c->r[5]=c->r[29]+0x00000810u; // 801E1E78
  c->r[4]=0u+0x0000023Du; // 801E1E7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1E80
  c->lr=0x801E1E88u; f_801F9770(c); // 801E1E84
L_801E1E88:;
  c->r[22]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[22]); // 801E1E88
  if (!crb(c,2)) { goto L_801E1EA4; } // 801E1E8C
  c->r[3]=c->r[28]+0x00000864u; // 801E1E90
  c->r[5]=c->r[27]+0x00000840u; // 801E1E94
  c->r[4]=0u+0x00000193u; // 801E1E98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1E9C
  c->lr=0x801E1EA4u; f_801F9770(c); // 801E1EA0
L_801E1EA4:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801E1EA4
  c->r[3]=c->r[18]|c->r[18]; // 801E1EA8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E1EAC
  c->r[4]=c->r[1]+0x00000010u; // 801E1EB0
  c->lr=0x801E1EB8u; f_801F9EE0(c); // 801E1EB4
  cmps(c,0,(int32_t)c->r[22],0); // 801E1EB8
  if (!crb(c,2)) { goto L_801E1ED4; } // 801E1EBC
  c->r[3]=c->r[26]+0x00000804u; // 801E1EC0
  c->r[5]=c->r[25]+0x000007E0u; // 801E1EC4
  c->r[4]=0u+0x00000233u; // 801E1EC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1ECC
  c->lr=0x801E1ED4u; f_801F9770(c); // 801E1ED0
L_801E1ED4:;
  W32(c->r[1]+0x00000014u,c->r[23]); // 801E1ED4
  c->r[3]=c->r[31]+0x00000098u; // 801E1ED8
  c->r[4]=c->r[1]+0x00000014u; // 801E1EDC
  c->r[5]=c->r[22]+0x000000F0u; // 801E1EE0
  c->lr=0x801E1EE8u; f_801FA130(c); // 801E1EE4
L_801E1EE8:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801E1EE8
  cmps(c,0,(int32_t)c->r[0],0); // 801E1EEC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1E4C; } // 801E1EF0
L_801E1EF4:;
  c->r[19]=c->r[19]+0x00000001u; // 801E1EF4
  c->r[18]=c->r[18]+0x0000000Cu; // 801E1EF8
  cmps(c,0,(int32_t)c->r[19],128); // 801E1EFC
  if (crb(c,0)) { IRQCHK(c); goto L_801E1E38; } // 801E1F00
  c->r[4]=0u+0x801E0000u; // 801E1F04
  c->r[3]=c->r[1]+0x00000038u; // 801E1F08
  c->r[4]=c->r[4]+0x00000BA0u; // 801E1F0C
  c->r[5]=0u+0x0000000Cu; // 801E1F10
  c->r[6]=0u+0x00000080u; // 801E1F14
  c->lr=0x801E1F1Cu; f_80217380(c); // 801E1F18
  c->r[3]=c->r[24]|c->r[24]; // 801E1F1C
  c->lr=0x801E1F24u; f_800CCE30(c); // 801E1F20
L_801E1F24:;
  c->r[11]=c->r[1]+0x00001270u; // 801E1F24
  c->lr=0x801E1F2Cu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E1F28
  c->r[0]=R32(c->r[1]+0x00001274u); // 801E1F2C
  c->lr=c->r[0]; // 801E1F30
  c->r[1]=c->r[1]+0x00001270u; // 801E1F34
  return; // 801E1F38
}

// fn_801E1F40
void f_801E1F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1F40
  c->r[0]=c->lr; // 801E1F44
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E1F48
  c->r[11]=c->r[1]+0x00000050u; // 801E1F4C
  c->lr=0x801E1F54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E1F50
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801E1F54
  c->r[31]=0u+0x802D0000u; // 801E1F58
  c->r[27]=c->r[3]|c->r[3]; // 801E1F5C
  c->r[28]=c->r[4]|c->r[4]; // 801E1F60
  cmps(c,0,(int32_t)c->r[0],0); // 801E1F64
  c->r[31]=c->r[31]+0xFFFFFBC8u; // 801E1F68
  if (crb(c,2)) { goto L_801E1F90; } // 801E1F6C
  c->r[3]=c->r[0]|c->r[0]; // 801E1F70
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E1F74
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E1F78
  c->ctr=c->r[12]; // 801E1F7C
  if (true) { c->lr=0x801E1F84u; dispatch(c,c->ctr); } // 801E1F80
  cmps(c,0,(int32_t)c->r[3],0); // 801E1F84
  if (crb(c,2)) { goto L_801E1F90; } // 801E1F88
  goto L_801E20E4; // 801E1F8C
L_801E1F90:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E1F90
  c->r[4]=c->r[28]|c->r[28]; // 801E1F94
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E1F98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E1F9C
  c->ctr=c->r[12]; // 801E1FA0
  if (true) { c->lr=0x801E1FA8u; dispatch(c,c->ctr); } // 801E1FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E1FA8
  if (crb(c,2)) { goto L_801E1FB4; } // 801E1FAC
  goto L_801E20E4; // 801E1FB0
L_801E1FB4:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 801E1FB4
  cmps(c,0,(int32_t)c->r[3],0); // 801E1FB8
  if (!crb(c,2)) { goto L_801E1FE0; } // 801E1FBC
  if (!crb(c,2)) { goto L_801E1FD8; } // 801E1FC0
  c->r[3]=c->r[31]+0x00000000u; // 801E1FC4
  c->r[5]=c->r[31]+0x00000328u; // 801E1FC8
  c->r[4]=0u+0x000003AEu; // 801E1FCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1FD0
  c->lr=0x801E1FD8u; f_801F9810(c); // 801E1FD4
L_801E1FD8:;
  c->r[3]=0u+0x00000000u; // 801E1FD8
  goto L_801E2000; // 801E1FDC
L_801E1FE0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E1FE0
  cmpu(c,0,c->r[28],c->r[0]); // 801E1FE4
  if (crb(c,0)) { goto L_801E1FF4; } // 801E1FE8
  c->r[3]=0u+0x00000000u; // 801E1FEC
  goto L_801E2000; // 801E1FF0
L_801E1FF4:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801E1FF4
  c->r[3]=c->r[3]+c->r[0]; // 801E1FF8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E1FFC
L_801E2000:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E2000
  if (crb(c,2)) { goto L_801E200C; } // 801E2004
  goto L_801E20E4; // 801E2008
L_801E200C:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E200C
  c->r[4]=c->r[28]|c->r[28]; // 801E2010
  c->r[5]=c->r[1]+0x00000010u; // 801E2014
  c->lr=0x801E201Cu; f_801DE580(c); // 801E2018
  cmps(c,0,(int32_t)c->r[3],0); // 801E201C
  if (!crb(c,2)) { goto L_801E202C; } // 801E2020
  c->r[3]=0u+0x00000000u; // 801E2024
  goto L_801E20E4; // 801E2028
L_801E202C:;
  c->r[29]=0u+0x00000000u; // 801E202C
  goto L_801E20D4; // 801E2030
L_801E2034:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E2034
  c->r[4]=c->r[28]|c->r[28]; // 801E2038
  c->r[5]=c->r[29]|c->r[29]; // 801E203C
  c->r[6]=c->r[1]+0x00000008u; // 801E2040
  c->lr=0x801E2048u; f_801DE590(c); // 801E2044
  cmps(c,0,(int32_t)c->r[3],0); // 801E2048
  if (crb(c,2)) { goto L_801E20D0; } // 801E204C
  c->r[4]=R32(c->r[27]+0x00000014u); // 801E2050
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E2054
  cmps(c,0,(int32_t)c->r[4],0); // 801E2058
  if (!crb(c,2)) { goto L_801E2080; } // 801E205C
  if (!crb(c,2)) { goto L_801E2078; } // 801E2060
  c->r[3]=c->r[31]+0x00000000u; // 801E2064
  c->r[5]=c->r[31]+0x0000037Cu; // 801E2068
  c->r[4]=0u+0x00000348u; // 801E206C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2070
  c->lr=0x801E2078u; f_801F9810(c); // 801E2074
L_801E2078:;
  c->r[30]=0u+0x00000000u; // 801E2078
  goto L_801E20A0; // 801E207C
L_801E2080:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E2080
  cmpu(c,0,c->r[3],c->r[0]); // 801E2084
  if (crb(c,0)) { goto L_801E2094; } // 801E2088
  c->r[30]=0u+0x00000000u; // 801E208C
  goto L_801E20A0; // 801E2090
L_801E2094:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E2094
  c->r[3]=c->r[4]+c->r[0]; // 801E2098
  c->r[30]=R32(c->r[3]+0x00000004u); // 801E209C
L_801E20A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E20A0
  if (crb(c,2)) { goto L_801E20D0; } // 801E20A4
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E20A8
  c->r[6]=c->r[1]+0x00000020u; // 801E20AC
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E20B0
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801E20B4
  c->lr=0x801E20BCu; f_801DE560(c); // 801E20B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E20BC
  if (crb(c,2)) { goto L_801E20D0; } // 801E20C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E20C4
  c->r[3]=c->r[30]+c->r[0]; // 801E20C8
  goto L_801E20E4; // 801E20CC
L_801E20D0:;
  c->r[29]=c->r[29]+0x00000001u; // 801E20D0
L_801E20D4:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801E20D4
  cmpu(c,0,c->r[29],c->r[0]); // 801E20D8
  if (crb(c,0)) { IRQCHK(c); goto L_801E2034; } // 801E20DC
  c->r[3]=0u+0x00000000u; // 801E20E0
L_801E20E4:;
  c->r[11]=c->r[1]+0x00000050u; // 801E20E4
  c->lr=0x801E20ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E20E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E20EC
  c->lr=c->r[0]; // 801E20F0
  c->r[1]=c->r[1]+0x00000050u; // 801E20F4
  return; // 801E20F8
}

// fn_801E2100
void f_801E2100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2100
  c->r[0]=c->lr; // 801E2104
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E2108
  c->r[11]=c->r[1]+0x00000050u; // 801E210C
  c->lr=0x801E2114u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E2110
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801E2114
  c->r[31]=0u+0x802D0000u; // 801E2118
  c->r[27]=c->r[3]|c->r[3]; // 801E211C
  c->r[28]=c->r[4]|c->r[4]; // 801E2120
  cmps(c,0,(int32_t)c->r[0],0); // 801E2124
  c->r[31]=c->r[31]+0xFFFFFBC8u; // 801E2128
  if (crb(c,2)) { goto L_801E2150; } // 801E212C
  c->r[3]=c->r[0]|c->r[0]; // 801E2130
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E2134
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E2138
  c->ctr=c->r[12]; // 801E213C
  if (true) { c->lr=0x801E2144u; dispatch(c,c->ctr); } // 801E2140
  cmps(c,0,(int32_t)c->r[3],0); // 801E2144
  if (crb(c,2)) { goto L_801E2150; } // 801E2148
  goto L_801E22A4; // 801E214C
L_801E2150:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E2150
  c->r[4]=c->r[28]|c->r[28]; // 801E2154
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E2158
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E215C
  c->ctr=c->r[12]; // 801E2160
  if (true) { c->lr=0x801E2168u; dispatch(c,c->ctr); } // 801E2164
  cmps(c,0,(int32_t)c->r[3],0); // 801E2168
  if (crb(c,2)) { goto L_801E2174; } // 801E216C
  goto L_801E22A4; // 801E2170
L_801E2174:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 801E2174
  cmps(c,0,(int32_t)c->r[3],0); // 801E2178
  if (!crb(c,2)) { goto L_801E21A0; } // 801E217C
  if (!crb(c,2)) { goto L_801E2198; } // 801E2180
  c->r[3]=c->r[31]+0x00000000u; // 801E2184
  c->r[5]=c->r[31]+0x000003D4u; // 801E2188
  c->r[4]=0u+0x000003E1u; // 801E218C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2190
  c->lr=0x801E2198u; f_801F9810(c); // 801E2194
L_801E2198:;
  c->r[3]=0u+0x00000000u; // 801E2198
  goto L_801E21C0; // 801E219C
L_801E21A0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E21A0
  cmpu(c,0,c->r[28],c->r[0]); // 801E21A4
  if (crb(c,0)) { goto L_801E21B4; } // 801E21A8
  c->r[3]=0u+0x00000000u; // 801E21AC
  goto L_801E21C0; // 801E21B0
L_801E21B4:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801E21B4
  c->r[3]=c->r[3]+c->r[0]; // 801E21B8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E21BC
L_801E21C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E21C0
  if (crb(c,2)) { goto L_801E21CC; } // 801E21C4
  goto L_801E22A4; // 801E21C8
L_801E21CC:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E21CC
  c->r[4]=c->r[28]|c->r[28]; // 801E21D0
  c->r[5]=c->r[1]+0x00000010u; // 801E21D4
  c->lr=0x801E21DCu; f_801DE580(c); // 801E21D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E21DC
  if (!crb(c,2)) { goto L_801E21EC; } // 801E21E0
  c->r[3]=0u+0x00000000u; // 801E21E4
  goto L_801E22A4; // 801E21E8
L_801E21EC:;
  c->r[29]=0u+0x00000000u; // 801E21EC
  goto L_801E2294; // 801E21F0
L_801E21F4:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E21F4
  c->r[4]=c->r[28]|c->r[28]; // 801E21F8
  c->r[5]=c->r[29]|c->r[29]; // 801E21FC
  c->r[6]=c->r[1]+0x00000008u; // 801E2200
  c->lr=0x801E2208u; f_801DE590(c); // 801E2204
  cmps(c,0,(int32_t)c->r[3],0); // 801E2208
  if (crb(c,2)) { goto L_801E2290; } // 801E220C
  c->r[4]=R32(c->r[27]+0x00000014u); // 801E2210
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E2214
  cmps(c,0,(int32_t)c->r[4],0); // 801E2218
  if (!crb(c,2)) { goto L_801E2240; } // 801E221C
  if (!crb(c,2)) { goto L_801E2238; } // 801E2220
  c->r[3]=c->r[31]+0x00000000u; // 801E2224
  c->r[5]=c->r[31]+0x00000430u; // 801E2228
  c->r[4]=0u+0x0000037Bu; // 801E222C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2230
  c->lr=0x801E2238u; f_801F9810(c); // 801E2234
L_801E2238:;
  c->r[30]=0u+0x00000000u; // 801E2238
  goto L_801E2260; // 801E223C
L_801E2240:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E2240
  cmpu(c,0,c->r[3],c->r[0]); // 801E2244
  if (crb(c,0)) { goto L_801E2254; } // 801E2248
  c->r[30]=0u+0x00000000u; // 801E224C
  goto L_801E2260; // 801E2250
L_801E2254:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E2254
  c->r[3]=c->r[4]+c->r[0]; // 801E2258
  c->r[30]=R32(c->r[3]+0x00000008u); // 801E225C
L_801E2260:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E2260
  if (crb(c,2)) { goto L_801E2290; } // 801E2264
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E2268
  c->r[6]=c->r[1]+0x00000020u; // 801E226C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E2270
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801E2274
  c->lr=0x801E227Cu; f_801DE560(c); // 801E2278
  cmps(c,0,(int32_t)c->r[3],0); // 801E227C
  if (crb(c,2)) { goto L_801E2290; } // 801E2280
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801E2284
  c->r[3]=c->r[30]+c->r[0]; // 801E2288
  goto L_801E22A4; // 801E228C
L_801E2290:;
  c->r[29]=c->r[29]+0x00000001u; // 801E2290
L_801E2294:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801E2294
  cmpu(c,0,c->r[29],c->r[0]); // 801E2298
  if (crb(c,0)) { IRQCHK(c); goto L_801E21F4; } // 801E229C
  c->r[3]=0u+0x00000000u; // 801E22A0
L_801E22A4:;
  c->r[11]=c->r[1]+0x00000050u; // 801E22A4
  c->lr=0x801E22ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E22A8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E22AC
  c->lr=c->r[0]; // 801E22B0
  c->r[1]=c->r[1]+0x00000050u; // 801E22B4
  return; // 801E22B8
}

// fn_801E22C0
void f_801E22C0(Ctx* __restrict c) {
  c->r[8]=c->r[6]|c->r[6]; // 801E22C0
  c->r[9]=c->r[7]|c->r[7]; // 801E22C4
  c->r[6]=0u+0x00000000u; // 801E22C8
  c->r[7]=0u+0x00000000u; // 801E22CC
  f_801E22E0(c); return; // 801E22D0
}

// fn_801E22E0
void f_801E22E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E22E0
  c->r[0]=c->lr; // 801E22E4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801E22E8
  c->r[11]=c->r[1]+0x000000D0u; // 801E22EC
  c->lr=0x801E22F4u; f_80217878(c); // 801E22F0
  cmps(c,0,(int32_t)c->r[4],0); // 801E22F4
  c->r[27]=0u+0x802D0000u; // 801E22F8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E22FC
  c->r[15]=c->r[3]|c->r[3]; // 801E2300
  c->r[16]=c->r[5]|c->r[5]; // 801E2304
  c->r[17]=c->r[6]|c->r[6]; // 801E2308
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801E230C
  c->r[14]=c->r[9]|c->r[9]; // 801E2310
  c->r[27]=c->r[27]+0xFFFFFBC8u; // 801E2314
  W8(c->r[1]+0x00000010u,c->r[8]); // 801E2318
  if (!crb(c,2)) { goto L_801E2334; } // 801E231C
  c->r[3]=c->r[27]+0x00000000u; // 801E2320
  c->r[5]=c->r[27]+0x00000678u; // 801E2324
  c->r[4]=0u+0x00000454u; // 801E2328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E232C
  c->lr=0x801E2334u; f_801F9770(c); // 801E2330
L_801E2334:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E2334
  cmps(c,0,(int32_t)c->r[3],0); // 801E2338
  if (!crb(c,2)) { goto L_801E2348; } // 801E233C
  c->r[3]=0u+0x00000000u; // 801E2340
  goto L_801E234C; // 801E2344
L_801E2348:;
  c->lr=0x801E234Cu; f_801DE400(c); // 801E2348
L_801E234C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E234C
  if (!crb(c,2)) { goto L_801E235C; } // 801E2350
  c->r[3]=0u+0x00000007u; // 801E2354
  goto L_801E3188; // 801E2358
L_801E235C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E235C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E2360
  cmps(c,0,(int32_t)c->r[0],0); // 801E2364
  if (crb(c,2)) { goto L_801E2370; } // 801E2368
  c->lr=0x801E2370u; f_801E4210(c); // 801E236C
L_801E2370:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E2370
  c->r[4]=c->r[16]|c->r[16]; // 801E2374
  c->r[5]=c->r[1]+0x00000048u; // 801E2378
  c->lr=0x801E2380u; f_801DE4E0(c); // 801E237C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2380
  if (!crb(c,2)) { goto L_801E2390; } // 801E2384
  c->r[3]=0u+0x00000003u; // 801E2388
  goto L_801E3188; // 801E238C
L_801E2390:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E2390
  cmps(c,0,(int32_t)c->r[14],0); // 801E2394
  W32(c->r[1]+0x00000070u,c->r[0]); // 801E2398
  c->r[0]=0u+0x00000000u; // 801E239C
  c->r[18]=R32(c->r[1]+0x0000004Cu); // 801E23A0
  W32(c->r[1]+0x00000078u,c->r[0]); // 801E23A4
  c->r[0]=0u+0x00000000u; // 801E23A8
  c->r[19]=R32(c->r[1]+0x00000050u); // 801E23AC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E23B0
  c->r[0]=0u+0x00000000u; // 801E23B4
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801E23B8
  c->r[0]=0u+0x00000000u; // 801E23BC
  W32(c->r[1]+0x00000068u,c->r[0]); // 801E23C0
  if (crb(c,2)) { goto L_801E2424; } // 801E23C4
  c->r[3]=R32(c->r[14]+0x00000000u); // 801E23C8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801E23CC
  if (crb(c,2)) { goto L_801E23E4; } // 801E23D0
  c->r[0]=R32(c->r[14]+0x00000004u); // 801E23D4
  W32(c->r[1]+0x00000078u,c->r[0]); // 801E23D8
  c->r[0]=R32(c->r[14]+0x00000008u); // 801E23DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E23E0
L_801E23E4:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801E23E4
  if (crb(c,2)) { goto L_801E23F4; } // 801E23E8
  c->r[0]=R32(c->r[14]+0x00000010u); // 801E23EC
  W32(c->r[1]+0x00000070u,c->r[0]); // 801E23F0
L_801E23F4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801E23F4
  if (crb(c,2)) { goto L_801E2400; } // 801E23F8
  c->r[18]=R32(c->r[14]+0x0000000Cu); // 801E23FC
L_801E2400:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801E2400
  if (crb(c,2)) { goto L_801E240C; } // 801E2404
  c->r[19]=R32(c->r[14]+0x00000014u); // 801E2408
L_801E240C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801E240C
  if (crb(c,2)) { goto L_801E2424; } // 801E2410
  c->r[0]=R32(c->r[14]+0x00000018u); // 801E2414
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801E2418
  c->r[0]=R32(c->r[14]+0x0000001Cu); // 801E241C
  W32(c->r[1]+0x00000068u,c->r[0]); // 801E2420
L_801E2424:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801E2424
  c->r[23]=R32(c->r[1]+0x00000070u); // 801E2428
  cmps(c,0,(int32_t)c->r[0],0); // 801E242C
  if (crb(c,2)) { goto L_801E243C; } // 801E2430
  c->r[3]=c->r[23]|c->r[23]; // 801E2434
  c->r[23]=c->r[3]+0xFFFFFFFFu; // 801E2438
L_801E243C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801E243C
  c->r[22]=0u+0x00000000u; // 801E2440
  if (crb(c,2)) { goto L_801E2458; } // 801E2444
  c->r[3]=c->r[17]|c->r[17]; // 801E2448
  c->r[4]=c->r[16]|c->r[16]; // 801E244C
  c->lr=0x801E2454u; f_801D46B0(c); // 801E2450
  c->r[22]=c->r[3]|c->r[3]; // 801E2454
L_801E2458:;
  c->r[24]=c->r[23]+c->r[22]; // 801E2458
  cmps(c,0,(int32_t)c->r[24],127); // 801E245C
  if (!crb(c,1)) { goto L_801E246C; } // 801E2460
  c->r[14]=0u+0x0000007Fu; // 801E2464
  goto L_801E2474; // 801E2468
L_801E246C:;
  c->r[0]=sraw(c,c->r[24],31); // 801E246C
  c->r[14]=c->r[24]&~c->r[0]; // 801E2470
L_801E2474:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E2474
  c->r[21]=0u+0x00000000u; // 801E2478
  cmps(c,0,(int32_t)c->r[0],0); // 801E247C
  if (crb(c,2)) { goto L_801E24D4; } // 801E2480
  cmps(c,0,(int32_t)c->r[19],0); // 801E2484
  if (crb(c,0)) { goto L_801E2494; } // 801E2488
  cmps(c,0,(int32_t)c->r[19],4); // 801E248C
  if (crb(c,0)) { goto L_801E249C; } // 801E2490
L_801E2494:;
  c->r[21]=0u+0x00000000u; // 801E2494
  goto L_801E24A8; // 801E2498
L_801E249C:;
  c->r[3]=rotl(c->r[19],4)&0xFFFFFFF0u; // 801E249C
  c->r[3]=c->r[0]+c->r[3]; // 801E24A0
  c->r[21]=c->r[3]+0x00000008u; // 801E24A4
L_801E24A8:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E24A8
  if (!crb(c,2)) { goto L_801E24D4; } // 801E24AC
  c->r[6]=c->r[19]|c->r[19]; // 801E24B0
  c->r[3]=c->r[27]+0x00000000u; // 801E24B4
  c->r[5]=c->r[27]+0x000006A0u; // 801E24B8
  c->r[4]=0u+0x0000049Du; // 801E24BC
  c->r[7]=0u+0x00000003u; // 801E24C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E24C4
  c->lr=0x801E24CCu; f_801F9810(c); // 801E24C8
  c->r[3]=0u+0x0000000Au; // 801E24CC
  goto L_801E3188; // 801E24D0
L_801E24D4:;
  c->lr=0x801E24D8u; f_801E5840(c); // 801E24D4
  c->r[3]=c->r[3]+0x00000354u; // 801E24D8
  c->lr=0x801E24E0u; f_800CCD50(c); // 801E24DC
  c->r[8]=R32(c->r[15]+0x0000003Cu); // 801E24E0
  cmpu(c,0,c->r[18],c->r[8]); // 801E24E4
  if (crb(c,0)) { goto L_801E2508; } // 801E24E8
  c->r[6]=c->r[18]|c->r[18]; // 801E24EC
  c->r[3]=c->r[27]+0x00000000u; // 801E24F0
  c->r[5]=c->r[27]+0x0000029Cu; // 801E24F4
  c->r[4]=0u+0x000002B9u; // 801E24F8
  c->r[7]=0u+0x00000000u; // 801E24FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2500
  c->lr=0x801E2508u; f_801F9770(c); // 801E2504
L_801E2508:;
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)100); // 801E2508
  c->r[3]=R32(c->r[15]+0x00000040u); // 801E250C
  c->r[4]=c->r[14]|c->r[14]; // 801E2510
  c->r[0]=c->r[3]+c->r[0]; // 801E2514
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801E2518
  c->r[3]=c->r[0]|c->r[0]; // 801E251C
  c->lr=0x801E2524u; f_801E4FF0(c); // 801E2520
  cmps(c,0,(int32_t)c->r[3],0); // 801E2524
  if (!crb(c,2)) { goto L_801E2540; } // 801E2528
  c->lr=0x801E2530u; f_801E5840(c); // 801E252C
  c->r[3]=c->r[3]+0x00000354u; // 801E2530
  c->lr=0x801E2538u; f_800CCE30(c); // 801E2534
  c->r[3]=0u+0x00000001u; // 801E2538
  goto L_801E3188; // 801E253C
L_801E2540:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E2540
  if (crb(c,2)) { goto L_801E2570; } // 801E2544
  c->r[3]=c->r[21]|c->r[21]; // 801E2548
  c->r[4]=c->r[14]|c->r[14]; // 801E254C
  c->lr=0x801E2554u; f_801D6D50(c); // 801E2550
  cmps(c,0,(int32_t)c->r[3],0); // 801E2554
  if (!crb(c,2)) { goto L_801E2570; } // 801E2558
  c->lr=0x801E2560u; f_801E5840(c); // 801E255C
  c->r[3]=c->r[3]+0x00000354u; // 801E2560
  c->lr=0x801E2568u; f_800CCE30(c); // 801E2564
  c->r[3]=0u+0x00000001u; // 801E2568
  goto L_801E3188; // 801E256C
L_801E2570:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E2570
  c->r[4]=c->r[16]|c->r[16]; // 801E2574
  c->r[20]=0u+0x00000000u; // 801E2578
  c->r[19]=0u+0x00000000u; // 801E257C
  c->r[18]=0u+0x00000000u; // 801E2580
  c->lr=0x801E2588u; f_801DE4D0(c); // 801E2584
  cmps(c,0,(int32_t)c->r[3],1); // 801E2588
  if (crb(c,2)) { goto L_801E25A4; } // 801E258C
  cmps(c,0,(int32_t)c->r[3],2); // 801E2590
  if (crb(c,2)) { goto L_801E287C; } // 801E2594
  cmps(c,0,(int32_t)c->r[3],3); // 801E2598
  if (crb(c,2)) { goto L_801E2B54; } // 801E259C
  goto L_801E2E2C; // 801E25A0
L_801E25A4:;
  c->r[0]=addc(c,c->r[15],0x00000044u,0); cr0(c,c->r[0]); // 801E25A4
  if (!crb(c,2)) { goto L_801E25C0; } // 801E25A8
  c->r[3]=c->r[27]+0x00000000u; // 801E25AC
  c->r[5]=c->r[27]+0x000006D0u; // 801E25B0
  c->r[4]=0u+0x0000041Au; // 801E25B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E25B8
  c->lr=0x801E25C0u; f_801F9770(c); // 801E25BC
L_801E25C0:;
  cmps(c,0,(int32_t)c->r[24],127); // 801E25C0
  if (!crb(c,1)) { goto L_801E25D0; } // 801E25C4
  c->r[26]=0u+0x0000007Fu; // 801E25C8
  goto L_801E25D8; // 801E25CC
L_801E25D0:;
  c->r[0]=sraw(c,c->r[24],31); // 801E25D0
  c->r[26]=c->r[24]&~c->r[0]; // 801E25D4
L_801E25D8:;
  c->r[28]=c->r[15]+0x00000054u; // 801E25D8
  c->r[3]=c->r[28]|c->r[28]; // 801E25DC
  c->lr=0x801E25E4u; f_800CCD50(c); // 801E25E0
  c->r[20]=0u+0x00000000u; // 801E25E4
  c->r[29]=0u+0x802D0000u; // 801E25E8
  c->r[30]=0u+0x802D0000u; // 801E25EC
  c->r[31]=0u+0x802D0000u; // 801E25F0
  c->r[14]=0u+0x802D0000u; // 801E25F4
  goto L_801E2750; // 801E25F8
L_801E25FC:;
  c->r[3]=c->r[15]+0x00000044u; // 801E25FC
  c->lr=0x801E2604u; f_801D78E0(c); // 801E2600
  cmps(c,0,(int32_t)c->r[3],0); // 801E2604
  if (crb(c,2)) { goto L_801E262C; } // 801E2608
  c->r[20]=c->r[3]|c->r[3]; // 801E260C
  if (crb(c,2)) { goto L_801E2750; } // 801E2610
  c->r[5]=c->r[23]|c->r[23]; // 801E2614
  c->r[6]=c->r[22]|c->r[22]; // 801E2618
  c->r[4]=c->r[15]+0x00000044u; // 801E261C
  c->lr=0x801E2624u; f_801DBFE0(c); // 801E2620
  c->r[20]=c->r[3]|c->r[3]; // 801E2624
  goto L_801E2750; // 801E2628
L_801E262C:;
  c->r[0]=R32(c->r[15]+0x00000048u); // 801E262C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2630
  if (!crb(c,2)) { goto L_801E2640; } // 801E2634
  c->r[25]=0u+0x00000000u; // 801E2638
  goto L_801E269C; // 801E263C
L_801E2640:;
  if (!crb(c,2)) { goto L_801E2658; } // 801E2640
  c->r[3]=c->r[29]+0x00000A14u; // 801E2644
  c->r[5]=c->r[30]+0x000009F0u; // 801E2648
  c->r[4]=0u+0x000001F1u; // 801E264C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2650
  c->lr=0x801E2658u; f_801F9770(c); // 801E2654
L_801E2658:;
  c->r[24]=R32(c->r[15]+0x0000004Cu); // 801E2658
  cmps(c,0,(int32_t)c->r[24],0); // 801E265C
  if (!crb(c,2)) { goto L_801E2678; } // 801E2660
  c->r[3]=c->r[31]+0xFFFFF1B4u; // 801E2664
  c->r[5]=c->r[14]+0xFFFFF190u; // 801E2668
  c->r[4]=0u+0x0000023Du; // 801E266C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2670
  c->lr=0x801E2678u; f_801F9770(c); // 801E2674
L_801E2678:;
  c->r[25]=addc(c,c->r[24],0xFFFFFF10u,0); cr0(c,c->r[25]); // 801E2678
  if (!crb(c,2)) { goto L_801E269C; } // 801E267C
  c->r[3]=0u+0x802D0000u; // 801E2680
  c->r[4]=0u+0x802D0000u; // 801E2684
  c->r[5]=c->r[4]+0x000009C0u; // 801E2688
  c->r[3]=c->r[3]+0x000009E4u; // 801E268C
  c->r[4]=0u+0x00000193u; // 801E2690
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2694
  c->lr=0x801E269Cu; f_801F9770(c); // 801E2698
L_801E269C:;
  cmps(c,0,(int32_t)c->r[25],0); // 801E269C
  if (!crb(c,2)) { goto L_801E26B4; } // 801E26A0
  c->r[3]=c->r[28]|c->r[28]; // 801E26A4
  c->lr=0x801E26ACu; f_800CCE30(c); // 801E26A8
  c->r[20]=0u+0x00000000u; // 801E26AC
  goto L_801E2800; // 801E26B0
L_801E26B4:;
  c->r[3]=R8(c->r[25]+0x00000098u); // 801E26B4
  c->r[0]=R32(c->r[25]+0x00000050u); // 801E26B8
  c->r[3]=c->r[3]+c->r[0]; // 801E26BC
  cmps(c,0,(int32_t)c->r[3],127); // 801E26C0
  if (!crb(c,1)) { goto L_801E26D0; } // 801E26C4
  c->r[0]=0u+0x0000007Fu; // 801E26C8
  goto L_801E26D8; // 801E26CC
L_801E26D0:;
  c->r[0]=sraw(c,c->r[3],31); // 801E26D0
  c->r[0]=c->r[3]&~c->r[0]; // 801E26D4
L_801E26D8:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801E26D8
  if (!crb(c,0)) { goto L_801E26F0; } // 801E26DC
  c->r[3]=c->r[28]|c->r[28]; // 801E26E0
  c->lr=0x801E26E8u; f_800CCE30(c); // 801E26E4
  c->r[20]=0u+0x00000000u; // 801E26E8
  goto L_801E2800; // 801E26EC
L_801E26F0:;
  c->r[3]=c->r[15]+0x00000054u; // 801E26F0
  c->lr=0x801E26F8u; f_800CCE30(c); // 801E26F4
  c->r[3]=0u+0x00000000u; // 801E26F8
  c->lr=0x801E2700u; f_801D62D0(c); // 801E26FC
  c->lr=0x801E2704u; f_801D6250(c); // 801E2700
  cmps(c,0,(int32_t)c->r[3],0); // 801E2704
  if (crb(c,2)) { goto L_801E273C; } // 801E2708
  c->r[24]=R32(c->r[25]+0x0000009Cu); // 801E270C
  c->r[3]=0u+0x00000000u; // 801E2710
  c->lr=0x801E2718u; f_801D6340(c); // 801E2714
  c->r[7]=c->r[3]|c->r[3]; // 801E2718
  c->r[3]=0u+0x802D0000u; // 801E271C
  c->r[4]=0u+0x802D0000u; // 801E2720
  c->r[6]=c->r[24]|c->r[24]; // 801E2724
  c->r[5]=c->r[4]+0x000006E4u; // 801E2728
  c->r[3]=c->r[3]+0x00000720u; // 801E272C
  c->r[4]=0u+0x00000085u; // 801E2730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2734
  c->lr=0x801E273Cu; f_801F9810(c); // 801E2738
L_801E273C:;
  c->r[3]=c->r[25]|c->r[25]; // 801E273C
  c->r[4]=0u+0x00000000u; // 801E2740
  c->lr=0x801E2748u; f_801D2EE0(c); // 801E2744
  c->r[3]=c->r[15]+0x00000054u; // 801E2748
  c->lr=0x801E2750u; f_800CCD50(c); // 801E274C
L_801E2750:;
  cmps(c,0,(int32_t)c->r[20],0); // 801E2750
  if (crb(c,2)) { IRQCHK(c); goto L_801E25FC; } // 801E2754
  c->r[23]=R32(c->r[15]+0x0000004Cu); // 801E2758
  c->r[24]=c->r[15]+0x0000004Cu; // 801E275C
  c->r[22]=0u+0x802D0000u; // 801E2760
  c->r[14]=0u+0x802D0000u; // 801E2764
  goto L_801E27B8; // 801E2768
L_801E276C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E276C
  if (!crb(c,2)) { goto L_801E2788; } // 801E2770
  c->r[3]=c->r[22]+0xFFFFF1B4u; // 801E2774
  c->r[5]=c->r[14]+0xFFFFF190u; // 801E2778
  c->r[4]=0u+0x0000023Du; // 801E277C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2780
  c->lr=0x801E2788u; f_801F9770(c); // 801E2784
L_801E2788:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 801E2788
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 801E278C
  c->r[3]=c->r[3]+c->r[0]; // 801E2790
  cmps(c,0,(int32_t)c->r[3],127); // 801E2794
  if (!crb(c,1)) { goto L_801E27A4; } // 801E2798
  c->r[0]=0u+0x0000007Fu; // 801E279C
  goto L_801E27AC; // 801E27A0
L_801E27A4:;
  c->r[0]=sraw(c,c->r[3],31); // 801E27A4
  c->r[0]=c->r[3]&~c->r[0]; // 801E27A8
L_801E27AC:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801E27AC
  if (crb(c,0)) { goto L_801E27C0; } // 801E27B0
  c->r[23]=R32(c->r[23]+0x00000000u); // 801E27B4
L_801E27B8:;
  cmpu(c,0,c->r[23],c->r[24]); // 801E27B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801E276C; } // 801E27BC
L_801E27C0:;
  cmps(c,0,(int32_t)c->r[20],0); // 801E27C0
  if (!crb(c,2)) { goto L_801E27E4; } // 801E27C4
  c->r[3]=0u+0x802D0000u; // 801E27C8
  c->r[5]=0u+0x802D0000u; // 801E27CC
  c->r[3]=c->r[3]+0xFFFFF1E4u; // 801E27D0
  c->r[4]=0u+0x00000233u; // 801E27D4
  c->r[5]=c->r[5]+0xFFFFF1C0u; // 801E27D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E27DC
  c->lr=0x801E27E4u; f_801F9770(c); // 801E27E0
L_801E27E4:;
  W32(c->r[1]+0x0000001Cu,c->r[23]); // 801E27E4
  c->r[3]=c->r[15]+0x00000048u; // 801E27E8
  c->r[4]=c->r[1]+0x0000001Cu; // 801E27EC
  c->r[5]=c->r[20]+0x000000F0u; // 801E27F0
  c->lr=0x801E27F8u; f_801FA130(c); // 801E27F4
  c->r[3]=c->r[28]|c->r[28]; // 801E27F8
  c->lr=0x801E2800u; f_800CCE30(c); // 801E27FC
L_801E2800:;
  cmps(c,0,(int32_t)c->r[20],0); // 801E2800
  if (!crb(c,2)) { goto L_801E2810; } // 801E2804
  c->r[20]=0u+0x00000000u; // 801E2808
  goto L_801E2830; // 801E280C
L_801E2810:;
  c->r[3]=c->r[20]|c->r[20]; // 801E2810
  c->r[4]=c->r[16]|c->r[16]; // 801E2814
  c->lr=0x801E281Cu; f_801D4720(c); // 801E2818
  cmps(c,0,(int32_t)c->r[17],0); // 801E281C
  if (crb(c,2)) { goto L_801E2830; } // 801E2820
  c->r[3]=c->r[20]|c->r[20]; // 801E2824
  c->r[4]=c->r[17]|c->r[17]; // 801E2828
  c->lr=0x801E2830u; f_801D45A0(c); // 801E282C
L_801E2830:;
  cmps(c,0,(int32_t)c->r[20],0); // 801E2830
  if (!crb(c,2)) { goto L_801E2874; } // 801E2834
  c->r[3]=0u+0x00000001u; // 801E2838
  c->lr=0x801E2840u; f_801D6250(c); // 801E283C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2840
  if (crb(c,2)) { goto L_801E2860; } // 801E2844
  c->r[6]=c->r[16]|c->r[16]; // 801E2848
  c->r[3]=c->r[27]+0x00000000u; // 801E284C
  c->r[5]=c->r[27]+0x000006F8u; // 801E2850
  c->r[4]=0u+0x000004C4u; // 801E2854
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2858
  c->lr=0x801E2860u; f_801F9810(c); // 801E285C
L_801E2860:;
  c->lr=0x801E2864u; f_801E5840(c); // 801E2860
  c->r[3]=c->r[3]+0x00000354u; // 801E2864
  c->lr=0x801E286Cu; f_800CCE30(c); // 801E2868
  c->r[3]=0u+0x00000009u; // 801E286C
  goto L_801E3188; // 801E2870
L_801E2874:;
  c->r[14]=c->r[20]|c->r[20]; // 801E2874
  goto L_801E2E40; // 801E2878
L_801E287C:;
  c->r[0]=addc(c,c->r[15],0x0000006Cu,0); cr0(c,c->r[0]); // 801E287C
  if (!crb(c,2)) { goto L_801E2898; } // 801E2880
  c->r[3]=c->r[27]+0x00000000u; // 801E2884
  c->r[5]=c->r[27]+0x000006D0u; // 801E2888
  c->r[4]=0u+0x0000041Au; // 801E288C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2890
  c->lr=0x801E2898u; f_801F9770(c); // 801E2894
L_801E2898:;
  cmps(c,0,(int32_t)c->r[24],127); // 801E2898
  if (!crb(c,1)) { goto L_801E28A8; } // 801E289C
  c->r[28]=0u+0x0000007Fu; // 801E28A0
  goto L_801E28B0; // 801E28A4
L_801E28A8:;
  c->r[0]=sraw(c,c->r[24],31); // 801E28A8
  c->r[28]=c->r[24]&~c->r[0]; // 801E28AC
L_801E28B0:;
  c->r[26]=c->r[15]+0x0000007Cu; // 801E28B0
  c->r[3]=c->r[26]|c->r[26]; // 801E28B4
  c->lr=0x801E28BCu; f_800CCD50(c); // 801E28B8
  c->r[19]=0u+0x00000000u; // 801E28BC
  c->r[25]=0u+0x802D0000u; // 801E28C0
  c->r[24]=0u+0x802D0000u; // 801E28C4
  c->r[14]=0u+0x802D0000u; // 801E28C8
  c->r[31]=0u+0x802D0000u; // 801E28CC
  goto L_801E2A28; // 801E28D0
L_801E28D4:;
  c->r[3]=c->r[15]+0x0000006Cu; // 801E28D4
  c->lr=0x801E28DCu; f_801D78E0(c); // 801E28D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E28DC
  if (crb(c,2)) { goto L_801E2904; } // 801E28E0
  c->r[19]=c->r[3]|c->r[3]; // 801E28E4
  if (crb(c,2)) { goto L_801E2A28; } // 801E28E8
  c->r[5]=c->r[23]|c->r[23]; // 801E28EC
  c->r[6]=c->r[22]|c->r[22]; // 801E28F0
  c->r[4]=c->r[15]+0x0000006Cu; // 801E28F4
  c->lr=0x801E28FCu; f_801EA250(c); // 801E28F8
  c->r[19]=c->r[3]|c->r[3]; // 801E28FC
  goto L_801E2A28; // 801E2900
L_801E2904:;
  c->r[0]=R32(c->r[15]+0x00000070u); // 801E2904
  cmps(c,0,(int32_t)c->r[0],0); // 801E2908
  if (!crb(c,2)) { goto L_801E2918; } // 801E290C
  c->r[29]=0u+0x00000000u; // 801E2910
  goto L_801E2974; // 801E2914
L_801E2918:;
  if (!crb(c,2)) { goto L_801E2930; } // 801E2918
  c->r[3]=c->r[25]+0x00000954u; // 801E291C
  c->r[5]=c->r[24]+0x00000930u; // 801E2920
  c->r[4]=0u+0x000001F1u; // 801E2924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2928
  c->lr=0x801E2930u; f_801F9770(c); // 801E292C
L_801E2930:;
  c->r[29]=R32(c->r[15]+0x00000074u); // 801E2930
  cmps(c,0,(int32_t)c->r[29],0); // 801E2934
  if (!crb(c,2)) { goto L_801E2950; } // 801E2938
  c->r[3]=c->r[14]+0x000008F4u; // 801E293C
  c->r[5]=c->r[31]+0x000008D0u; // 801E2940
  c->r[4]=0u+0x0000023Du; // 801E2944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2948
  c->lr=0x801E2950u; f_801F9770(c); // 801E294C
L_801E2950:;
  c->r[29]=addc(c,c->r[29],0xFFFFFF10u,0); cr0(c,c->r[29]); // 801E2950
  if (!crb(c,2)) { goto L_801E2974; } // 801E2954
  c->r[3]=0u+0x802D0000u; // 801E2958
  c->r[4]=0u+0x802D0000u; // 801E295C
  c->r[5]=c->r[4]+0x00000900u; // 801E2960
  c->r[3]=c->r[3]+0x00000924u; // 801E2964
  c->r[4]=0u+0x00000193u; // 801E2968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E296C
  c->lr=0x801E2974u; f_801F9770(c); // 801E2970
L_801E2974:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E2974
  if (!crb(c,2)) { goto L_801E298C; } // 801E2978
  c->r[3]=c->r[26]|c->r[26]; // 801E297C
  c->lr=0x801E2984u; f_800CCE30(c); // 801E2980
  c->r[19]=0u+0x00000000u; // 801E2984
  goto L_801E2AD8; // 801E2988
L_801E298C:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 801E298C
  c->r[0]=R32(c->r[29]+0x00000050u); // 801E2990
  c->r[3]=c->r[3]+c->r[0]; // 801E2994
  cmps(c,0,(int32_t)c->r[3],127); // 801E2998
  if (!crb(c,1)) { goto L_801E29A8; } // 801E299C
  c->r[0]=0u+0x0000007Fu; // 801E29A0
  goto L_801E29B0; // 801E29A4
L_801E29A8:;
  c->r[0]=sraw(c,c->r[3],31); // 801E29A8
  c->r[0]=c->r[3]&~c->r[0]; // 801E29AC
L_801E29B0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E29B0
  if (!crb(c,0)) { goto L_801E29C8; } // 801E29B4
  c->r[3]=c->r[26]|c->r[26]; // 801E29B8
  c->lr=0x801E29C0u; f_800CCE30(c); // 801E29BC
  c->r[19]=0u+0x00000000u; // 801E29C0
  goto L_801E2AD8; // 801E29C4
L_801E29C8:;
  c->r[3]=c->r[15]+0x0000007Cu; // 801E29C8
  c->lr=0x801E29D0u; f_800CCE30(c); // 801E29CC
  c->r[3]=0u+0x00000001u; // 801E29D0
  c->lr=0x801E29D8u; f_801D62D0(c); // 801E29D4
  c->lr=0x801E29DCu; f_801D6250(c); // 801E29D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E29DC
  if (crb(c,2)) { goto L_801E2A14; } // 801E29E0
  c->r[30]=R32(c->r[29]+0x0000009Cu); // 801E29E4
  c->r[3]=0u+0x00000001u; // 801E29E8
  c->lr=0x801E29F0u; f_801D6340(c); // 801E29EC
  c->r[7]=c->r[3]|c->r[3]; // 801E29F0
  c->r[3]=0u+0x802D0000u; // 801E29F4
  c->r[4]=0u+0x802D0000u; // 801E29F8
  c->r[6]=c->r[30]|c->r[30]; // 801E29FC
  c->r[5]=c->r[4]+0x00000738u; // 801E2A00
  c->r[3]=c->r[3]+0x00000774u; // 801E2A04
  c->r[4]=0u+0x00000085u; // 801E2A08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2A0C
  c->lr=0x801E2A14u; f_801F9810(c); // 801E2A10
L_801E2A14:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2A14
  c->r[4]=0u+0x00000000u; // 801E2A18
  c->lr=0x801E2A20u; f_801D2EE0(c); // 801E2A1C
  c->r[3]=c->r[15]+0x0000007Cu; // 801E2A20
  c->lr=0x801E2A28u; f_800CCD50(c); // 801E2A24
L_801E2A28:;
  cmps(c,0,(int32_t)c->r[19],0); // 801E2A28
  if (crb(c,2)) { IRQCHK(c); goto L_801E28D4; } // 801E2A2C
  c->r[23]=R32(c->r[15]+0x00000074u); // 801E2A30
  c->r[24]=c->r[15]+0x00000074u; // 801E2A34
  c->r[22]=0u+0x802D0000u; // 801E2A38
  c->r[14]=0u+0x802D0000u; // 801E2A3C
  goto L_801E2A90; // 801E2A40
L_801E2A44:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E2A44
  if (!crb(c,2)) { goto L_801E2A60; } // 801E2A48
  c->r[3]=c->r[22]+0x000008F4u; // 801E2A4C
  c->r[5]=c->r[14]+0x000008D0u; // 801E2A50
  c->r[4]=0u+0x0000023Du; // 801E2A54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2A58
  c->lr=0x801E2A60u; f_801F9770(c); // 801E2A5C
L_801E2A60:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 801E2A60
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 801E2A64
  c->r[3]=c->r[3]+c->r[0]; // 801E2A68
  cmps(c,0,(int32_t)c->r[3],127); // 801E2A6C
  if (!crb(c,1)) { goto L_801E2A7C; } // 801E2A70
  c->r[0]=0u+0x0000007Fu; // 801E2A74
  goto L_801E2A84; // 801E2A78
L_801E2A7C:;
  c->r[0]=sraw(c,c->r[3],31); // 801E2A7C
  c->r[0]=c->r[3]&~c->r[0]; // 801E2A80
L_801E2A84:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E2A84
  if (crb(c,0)) { goto L_801E2A98; } // 801E2A88
  c->r[23]=R32(c->r[23]+0x00000000u); // 801E2A8C
L_801E2A90:;
  cmpu(c,0,c->r[23],c->r[24]); // 801E2A90
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2A44; } // 801E2A94
L_801E2A98:;
  cmps(c,0,(int32_t)c->r[19],0); // 801E2A98
  if (!crb(c,2)) { goto L_801E2ABC; } // 801E2A9C
  c->r[3]=0u+0x802D0000u; // 801E2AA0
  c->r[5]=0u+0x802D0000u; // 801E2AA4
  c->r[3]=c->r[3]+0x000008C4u; // 801E2AA8
  c->r[4]=0u+0x00000233u; // 801E2AAC
  c->r[5]=c->r[5]+0x000008A0u; // 801E2AB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2AB4
  c->lr=0x801E2ABCu; f_801F9770(c); // 801E2AB8
L_801E2ABC:;
  W32(c->r[1]+0x00000018u,c->r[23]); // 801E2ABC
  c->r[3]=c->r[15]+0x00000070u; // 801E2AC0
  c->r[4]=c->r[1]+0x00000018u; // 801E2AC4
  c->r[5]=c->r[19]+0x000000F0u; // 801E2AC8
  c->lr=0x801E2AD0u; f_801FA130(c); // 801E2ACC
  c->r[3]=c->r[26]|c->r[26]; // 801E2AD0
  c->lr=0x801E2AD8u; f_800CCE30(c); // 801E2AD4
L_801E2AD8:;
  cmps(c,0,(int32_t)c->r[19],0); // 801E2AD8
  if (!crb(c,2)) { goto L_801E2AE8; } // 801E2ADC
  c->r[19]=0u+0x00000000u; // 801E2AE0
  goto L_801E2B08; // 801E2AE4
L_801E2AE8:;
  c->r[3]=c->r[19]|c->r[19]; // 801E2AE8
  c->r[4]=c->r[16]|c->r[16]; // 801E2AEC
  c->lr=0x801E2AF4u; f_801D4720(c); // 801E2AF0
  cmps(c,0,(int32_t)c->r[17],0); // 801E2AF4
  if (crb(c,2)) { goto L_801E2B08; } // 801E2AF8
  c->r[3]=c->r[19]|c->r[19]; // 801E2AFC
  c->r[4]=c->r[17]|c->r[17]; // 801E2B00
  c->lr=0x801E2B08u; f_801D45A0(c); // 801E2B04
L_801E2B08:;
  cmps(c,0,(int32_t)c->r[19],0); // 801E2B08
  if (!crb(c,2)) { goto L_801E2B4C; } // 801E2B0C
  c->r[3]=0u+0x00000002u; // 801E2B10
  c->lr=0x801E2B18u; f_801D6250(c); // 801E2B14
  cmps(c,0,(int32_t)c->r[3],0); // 801E2B18
  if (crb(c,2)) { goto L_801E2B38; } // 801E2B1C
  c->r[6]=c->r[16]|c->r[16]; // 801E2B20
  c->r[3]=c->r[27]+0x00000000u; // 801E2B24
  c->r[5]=c->r[27]+0x00000738u; // 801E2B28
  c->r[4]=0u+0x000004D8u; // 801E2B2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2B30
  c->lr=0x801E2B38u; f_801F9810(c); // 801E2B34
L_801E2B38:;
  c->lr=0x801E2B3Cu; f_801E5840(c); // 801E2B38
  c->r[3]=c->r[3]+0x00000354u; // 801E2B3C
  c->lr=0x801E2B44u; f_800CCE30(c); // 801E2B40
  c->r[3]=0u+0x00000009u; // 801E2B44
  goto L_801E3188; // 801E2B48
L_801E2B4C:;
  c->r[14]=c->r[19]|c->r[19]; // 801E2B4C
  goto L_801E2E40; // 801E2B50
L_801E2B54:;
  c->r[0]=addc(c,c->r[15],0x00000094u,0); cr0(c,c->r[0]); // 801E2B54
  if (!crb(c,2)) { goto L_801E2B70; } // 801E2B58
  c->r[3]=c->r[27]+0x00000000u; // 801E2B5C
  c->r[5]=c->r[27]+0x000006D0u; // 801E2B60
  c->r[4]=0u+0x0000041Au; // 801E2B64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2B68
  c->lr=0x801E2B70u; f_801F9770(c); // 801E2B6C
L_801E2B70:;
  cmps(c,0,(int32_t)c->r[24],127); // 801E2B70
  if (!crb(c,1)) { goto L_801E2B80; } // 801E2B74
  c->r[28]=0u+0x0000007Fu; // 801E2B78
  goto L_801E2B88; // 801E2B7C
L_801E2B80:;
  c->r[0]=sraw(c,c->r[24],31); // 801E2B80
  c->r[28]=c->r[24]&~c->r[0]; // 801E2B84
L_801E2B88:;
  c->r[26]=c->r[15]+0x000000A4u; // 801E2B88
  c->r[3]=c->r[26]|c->r[26]; // 801E2B8C
  c->lr=0x801E2B94u; f_800CCD50(c); // 801E2B90
  c->r[18]=0u+0x00000000u; // 801E2B94
  c->r[25]=0u+0x802D0000u; // 801E2B98
  c->r[24]=0u+0x802D0000u; // 801E2B9C
  c->r[14]=0u+0x802D0000u; // 801E2BA0
  c->r[31]=0u+0x802D0000u; // 801E2BA4
  goto L_801E2D00; // 801E2BA8
L_801E2BAC:;
  c->r[3]=c->r[15]+0x00000094u; // 801E2BAC
  c->lr=0x801E2BB4u; f_801D78E0(c); // 801E2BB0
  cmps(c,0,(int32_t)c->r[3],0); // 801E2BB4
  if (crb(c,2)) { goto L_801E2BDC; } // 801E2BB8
  c->r[18]=c->r[3]|c->r[3]; // 801E2BBC
  if (crb(c,2)) { goto L_801E2D00; } // 801E2BC0
  c->r[5]=c->r[23]|c->r[23]; // 801E2BC4
  c->r[6]=c->r[22]|c->r[22]; // 801E2BC8
  c->r[4]=c->r[15]+0x00000094u; // 801E2BCC
  c->lr=0x801E2BD4u; f_801EFC80(c); // 801E2BD0
  c->r[18]=c->r[3]|c->r[3]; // 801E2BD4
  goto L_801E2D00; // 801E2BD8
L_801E2BDC:;
  c->r[0]=R32(c->r[15]+0x00000098u); // 801E2BDC
  cmps(c,0,(int32_t)c->r[0],0); // 801E2BE0
  if (!crb(c,2)) { goto L_801E2BF0; } // 801E2BE4
  c->r[29]=0u+0x00000000u; // 801E2BE8
  goto L_801E2C4C; // 801E2BEC
L_801E2BF0:;
  if (!crb(c,2)) { goto L_801E2C08; } // 801E2BF0
  c->r[3]=c->r[25]+0x00000894u; // 801E2BF4
  c->r[5]=c->r[24]+0x00000870u; // 801E2BF8
  c->r[4]=0u+0x000001F1u; // 801E2BFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2C00
  c->lr=0x801E2C08u; f_801F9770(c); // 801E2C04
L_801E2C08:;
  c->r[29]=R32(c->r[15]+0x0000009Cu); // 801E2C08
  cmps(c,0,(int32_t)c->r[29],0); // 801E2C0C
  if (!crb(c,2)) { goto L_801E2C28; } // 801E2C10
  c->r[3]=c->r[14]+0x00000834u; // 801E2C14
  c->r[5]=c->r[31]+0x00000810u; // 801E2C18
  c->r[4]=0u+0x0000023Du; // 801E2C1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2C20
  c->lr=0x801E2C28u; f_801F9770(c); // 801E2C24
L_801E2C28:;
  c->r[29]=addc(c,c->r[29],0xFFFFFF10u,0); cr0(c,c->r[29]); // 801E2C28
  if (!crb(c,2)) { goto L_801E2C4C; } // 801E2C2C
  c->r[3]=0u+0x802D0000u; // 801E2C30
  c->r[4]=0u+0x802D0000u; // 801E2C34
  c->r[5]=c->r[4]+0x00000840u; // 801E2C38
  c->r[3]=c->r[3]+0x00000864u; // 801E2C3C
  c->r[4]=0u+0x00000193u; // 801E2C40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2C44
  c->lr=0x801E2C4Cu; f_801F9770(c); // 801E2C48
L_801E2C4C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E2C4C
  if (!crb(c,2)) { goto L_801E2C64; } // 801E2C50
  c->r[3]=c->r[26]|c->r[26]; // 801E2C54
  c->lr=0x801E2C5Cu; f_800CCE30(c); // 801E2C58
  c->r[18]=0u+0x00000000u; // 801E2C5C
  goto L_801E2DB0; // 801E2C60
L_801E2C64:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 801E2C64
  c->r[0]=R32(c->r[29]+0x00000050u); // 801E2C68
  c->r[3]=c->r[3]+c->r[0]; // 801E2C6C
  cmps(c,0,(int32_t)c->r[3],127); // 801E2C70
  if (!crb(c,1)) { goto L_801E2C80; } // 801E2C74
  c->r[0]=0u+0x0000007Fu; // 801E2C78
  goto L_801E2C88; // 801E2C7C
L_801E2C80:;
  c->r[0]=sraw(c,c->r[3],31); // 801E2C80
  c->r[0]=c->r[3]&~c->r[0]; // 801E2C84
L_801E2C88:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E2C88
  if (!crb(c,0)) { goto L_801E2CA0; } // 801E2C8C
  c->r[3]=c->r[26]|c->r[26]; // 801E2C90
  c->lr=0x801E2C98u; f_800CCE30(c); // 801E2C94
  c->r[18]=0u+0x00000000u; // 801E2C98
  goto L_801E2DB0; // 801E2C9C
L_801E2CA0:;
  c->r[3]=c->r[15]+0x000000A4u; // 801E2CA0
  c->lr=0x801E2CA8u; f_800CCE30(c); // 801E2CA4
  c->r[3]=0u+0x00000002u; // 801E2CA8
  c->lr=0x801E2CB0u; f_801D62D0(c); // 801E2CAC
  c->lr=0x801E2CB4u; f_801D6250(c); // 801E2CB0
  cmps(c,0,(int32_t)c->r[3],0); // 801E2CB4
  if (crb(c,2)) { goto L_801E2CEC; } // 801E2CB8
  c->r[30]=R32(c->r[29]+0x0000009Cu); // 801E2CBC
  c->r[3]=0u+0x00000002u; // 801E2CC0
  c->lr=0x801E2CC8u; f_801D6340(c); // 801E2CC4
  c->r[7]=c->r[3]|c->r[3]; // 801E2CC8
  c->r[3]=0u+0x802D0000u; // 801E2CCC
  c->r[4]=0u+0x802D0000u; // 801E2CD0
  c->r[6]=c->r[30]|c->r[30]; // 801E2CD4
  c->r[5]=c->r[4]+0x0000078Cu; // 801E2CD8
  c->r[3]=c->r[3]+0x000007C8u; // 801E2CDC
  c->r[4]=0u+0x00000085u; // 801E2CE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2CE4
  c->lr=0x801E2CECu; f_801F9810(c); // 801E2CE8
L_801E2CEC:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2CEC
  c->r[4]=0u+0x00000000u; // 801E2CF0
  c->lr=0x801E2CF8u; f_801D2EE0(c); // 801E2CF4
  c->r[3]=c->r[15]+0x000000A4u; // 801E2CF8
  c->lr=0x801E2D00u; f_800CCD50(c); // 801E2CFC
L_801E2D00:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E2D00
  if (crb(c,2)) { IRQCHK(c); goto L_801E2BAC; } // 801E2D04
  c->r[23]=R32(c->r[15]+0x0000009Cu); // 801E2D08
  c->r[24]=c->r[15]+0x0000009Cu; // 801E2D0C
  c->r[22]=0u+0x802D0000u; // 801E2D10
  c->r[14]=0u+0x802D0000u; // 801E2D14
  goto L_801E2D68; // 801E2D18
L_801E2D1C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E2D1C
  if (!crb(c,2)) { goto L_801E2D38; } // 801E2D20
  c->r[3]=c->r[22]+0x00000834u; // 801E2D24
  c->r[5]=c->r[14]+0x00000810u; // 801E2D28
  c->r[4]=0u+0x0000023Du; // 801E2D2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2D30
  c->lr=0x801E2D38u; f_801F9770(c); // 801E2D34
L_801E2D38:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 801E2D38
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 801E2D3C
  c->r[3]=c->r[3]+c->r[0]; // 801E2D40
  cmps(c,0,(int32_t)c->r[3],127); // 801E2D44
  if (!crb(c,1)) { goto L_801E2D54; } // 801E2D48
  c->r[0]=0u+0x0000007Fu; // 801E2D4C
  goto L_801E2D5C; // 801E2D50
L_801E2D54:;
  c->r[0]=sraw(c,c->r[3],31); // 801E2D54
  c->r[0]=c->r[3]&~c->r[0]; // 801E2D58
L_801E2D5C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E2D5C
  if (crb(c,0)) { goto L_801E2D70; } // 801E2D60
  c->r[23]=R32(c->r[23]+0x00000000u); // 801E2D64
L_801E2D68:;
  cmpu(c,0,c->r[23],c->r[24]); // 801E2D68
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2D1C; } // 801E2D6C
L_801E2D70:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E2D70
  if (!crb(c,2)) { goto L_801E2D94; } // 801E2D74
  c->r[3]=0u+0x802D0000u; // 801E2D78
  c->r[5]=0u+0x802D0000u; // 801E2D7C
  c->r[3]=c->r[3]+0x00000804u; // 801E2D80
  c->r[4]=0u+0x00000233u; // 801E2D84
  c->r[5]=c->r[5]+0x000007E0u; // 801E2D88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2D8C
  c->lr=0x801E2D94u; f_801F9770(c); // 801E2D90
L_801E2D94:;
  W32(c->r[1]+0x00000014u,c->r[23]); // 801E2D94
  c->r[3]=c->r[15]+0x00000098u; // 801E2D98
  c->r[4]=c->r[1]+0x00000014u; // 801E2D9C
  c->r[5]=c->r[18]+0x000000F0u; // 801E2DA0
  c->lr=0x801E2DA8u; f_801FA130(c); // 801E2DA4
  c->r[3]=c->r[26]|c->r[26]; // 801E2DA8
  c->lr=0x801E2DB0u; f_800CCE30(c); // 801E2DAC
L_801E2DB0:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E2DB0
  if (!crb(c,2)) { goto L_801E2DC0; } // 801E2DB4
  c->r[18]=0u+0x00000000u; // 801E2DB8
  goto L_801E2DE0; // 801E2DBC
L_801E2DC0:;
  c->r[3]=c->r[18]|c->r[18]; // 801E2DC0
  c->r[4]=c->r[16]|c->r[16]; // 801E2DC4
  c->lr=0x801E2DCCu; f_801D4720(c); // 801E2DC8
  cmps(c,0,(int32_t)c->r[17],0); // 801E2DCC
  if (crb(c,2)) { goto L_801E2DE0; } // 801E2DD0
  c->r[3]=c->r[18]|c->r[18]; // 801E2DD4
  c->r[4]=c->r[17]|c->r[17]; // 801E2DD8
  c->lr=0x801E2DE0u; f_801D45A0(c); // 801E2DDC
L_801E2DE0:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E2DE0
  if (!crb(c,2)) { goto L_801E2E24; } // 801E2DE4
  c->r[3]=0u+0x00000003u; // 801E2DE8
  c->lr=0x801E2DF0u; f_801D6250(c); // 801E2DEC
  cmps(c,0,(int32_t)c->r[3],0); // 801E2DF0
  if (crb(c,2)) { goto L_801E2E10; } // 801E2DF4
  c->r[6]=c->r[16]|c->r[16]; // 801E2DF8
  c->r[3]=c->r[27]+0x00000000u; // 801E2DFC
  c->r[5]=c->r[27]+0x0000077Cu; // 801E2E00
  c->r[4]=0u+0x000004ECu; // 801E2E04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2E08
  c->lr=0x801E2E10u; f_801F9810(c); // 801E2E0C
L_801E2E10:;
  c->lr=0x801E2E14u; f_801E5840(c); // 801E2E10
  c->r[3]=c->r[3]+0x00000354u; // 801E2E14
  c->lr=0x801E2E1Cu; f_800CCE30(c); // 801E2E18
  c->r[3]=0u+0x00000009u; // 801E2E1C
  goto L_801E3188; // 801E2E20
L_801E2E24:;
  c->r[14]=c->r[18]|c->r[18]; // 801E2E24
  goto L_801E2E40; // 801E2E28
L_801E2E2C:;
  c->lr=0x801E2E30u; f_801E5840(c); // 801E2E2C
  c->r[3]=c->r[3]+0x00000354u; // 801E2E30
  c->lr=0x801E2E38u; f_800CCE30(c); // 801E2E34
  c->r[3]=0u+0x00000003u; // 801E2E38
  goto L_801E3188; // 801E2E3C
L_801E2E40:;
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 801E2E40
  c->r[4]=c->r[14]|c->r[14]; // 801E2E44
  c->lr=0x801E2E4Cu; f_801E4A70(c); // 801E2E48
  cmps(c,0,(int32_t)c->r[3],0); // 801E2E4C
  if (!crb(c,2)) { goto L_801E2E7C; } // 801E2E50
  c->r[12]=R32(c->r[14]+0x00000000u); // 801E2E54
  c->r[3]=c->r[14]|c->r[14]; // 801E2E58
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E2E5C
  c->ctr=c->r[12]; // 801E2E60
  if (true) { c->lr=0x801E2E68u; dispatch(c,c->ctr); } // 801E2E64
  c->lr=0x801E2E6Cu; f_801E5840(c); // 801E2E68
  c->r[3]=c->r[3]+0x00000354u; // 801E2E6C
  c->lr=0x801E2E74u; f_800CCE30(c); // 801E2E70
  c->r[3]=0u+0x000000FFu; // 801E2E74
  goto L_801E3188; // 801E2E78
L_801E2E7C:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E2E7C
  c->r[4]=c->r[16]|c->r[16]; // 801E2E80
  c->lr=0x801E2E88u; f_801DE4D0(c); // 801E2E84
  cmps(c,0,(int32_t)c->r[3],1); // 801E2E88
  if (crb(c,2)) { goto L_801E2EA4; } // 801E2E8C
  cmps(c,0,(int32_t)c->r[3],2); // 801E2E90
  if (crb(c,2)) { goto L_801E2F64; } // 801E2E94
  cmps(c,0,(int32_t)c->r[3],3); // 801E2E98
  if (crb(c,2)) { goto L_801E3010; } // 801E2E9C
  goto L_801E30BC; // 801E2EA0
L_801E2EA4:;
  cmps(c,0,(int32_t)c->r[20],0); // 801E2EA4
  if (!crb(c,2)) { goto L_801E2EC0; } // 801E2EA8
  c->r[3]=c->r[27]+0x00000000u; // 801E2EAC
  c->r[5]=c->r[27]+0x000007C0u; // 801E2EB0
  c->r[4]=0u+0x00000502u; // 801E2EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2EB8
  c->lr=0x801E2EC0u; f_801F9770(c); // 801E2EBC
L_801E2EC0:;
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 801E2EC0
  c->r[4]=c->r[20]|c->r[20]; // 801E2EC4
  c->lr=0x801E2ECCu; f_801E5200(c); // 801E2EC8
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E2ECC
  c->r[4]=c->r[16]|c->r[16]; // 801E2ED0
  c->r[5]=c->r[1]+0x00000034u; // 801E2ED4
  c->lr=0x801E2EDCu; f_801DE4F0(c); // 801E2ED8
  cmps(c,0,(int32_t)c->r[3],0); // 801E2EDC
  if (!crb(c,2)) { goto L_801E2F0C; } // 801E2EE0
  c->r[12]=R32(c->r[20]+0x00000000u); // 801E2EE4
  c->r[3]=c->r[20]|c->r[20]; // 801E2EE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E2EEC
  c->ctr=c->r[12]; // 801E2EF0
  if (true) { c->lr=0x801E2EF8u; dispatch(c,c->ctr); } // 801E2EF4
  c->lr=0x801E2EFCu; f_801E5840(c); // 801E2EF8
  c->r[3]=c->r[3]+0x00000354u; // 801E2EFC
  c->lr=0x801E2F04u; f_800CCE30(c); // 801E2F00
  c->r[3]=0u+0x00000003u; // 801E2F04
  goto L_801E3188; // 801E2F08
L_801E2F0C:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 801E2F0C
  c->r[3]=c->r[15]|c->r[15]; // 801E2F10
  c->r[8]=R32(c->r[1]+0x00000074u); // 801E2F14
  c->r[4]=c->r[20]|c->r[20]; // 801E2F18
  c->r[9]=R32(c->r[1]+0x0000006Cu); // 801E2F1C
  c->r[5]=c->r[1]+0x00000048u; // 801E2F20
  c->r[10]=R32(c->r[1]+0x00000068u); // 801E2F24
  c->r[6]=c->r[1]+0x00000034u; // 801E2F28
  c->lr=0x801E2F30u; f_801E31A0(c); // 801E2F2C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2F30
  c->r[15]=c->r[3]|c->r[3]; // 801E2F34
  if (crb(c,2)) { goto L_801E30F8; } // 801E2F38
  c->r[12]=R32(c->r[20]+0x00000000u); // 801E2F3C
  c->r[3]=c->r[20]|c->r[20]; // 801E2F40
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E2F44
  c->ctr=c->r[12]; // 801E2F48
  if (true) { c->lr=0x801E2F50u; dispatch(c,c->ctr); } // 801E2F4C
  c->lr=0x801E2F54u; f_801E5840(c); // 801E2F50
  c->r[3]=c->r[3]+0x00000354u; // 801E2F54
  c->lr=0x801E2F5Cu; f_800CCE30(c); // 801E2F58
  c->r[3]=c->r[15]|c->r[15]; // 801E2F5C
  goto L_801E3188; // 801E2F60
L_801E2F64:;
  cmps(c,0,(int32_t)c->r[19],0); // 801E2F64
  if (!crb(c,2)) { goto L_801E2F80; } // 801E2F68
  c->r[3]=c->r[27]+0x00000000u; // 801E2F6C
  c->r[5]=c->r[27]+0x000007ECu; // 801E2F70
  c->r[4]=0u+0x00000522u; // 801E2F74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E2F78
  c->lr=0x801E2F80u; f_801F9770(c); // 801E2F7C
L_801E2F80:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E2F80
  c->r[4]=c->r[16]|c->r[16]; // 801E2F84
  c->r[5]=c->r[1]+0x00000020u; // 801E2F88
  c->lr=0x801E2F90u; f_801DE500(c); // 801E2F8C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2F90
  if (!crb(c,2)) { goto L_801E2FC0; } // 801E2F94
  c->r[12]=R32(c->r[19]+0x00000000u); // 801E2F98
  c->r[3]=c->r[19]|c->r[19]; // 801E2F9C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E2FA0
  c->ctr=c->r[12]; // 801E2FA4
  if (true) { c->lr=0x801E2FACu; dispatch(c,c->ctr); } // 801E2FA8
  c->lr=0x801E2FB0u; f_801E5840(c); // 801E2FAC
  c->r[3]=c->r[3]+0x00000354u; // 801E2FB0
  c->lr=0x801E2FB8u; f_800CCE30(c); // 801E2FB4
  c->r[3]=0u+0x00000003u; // 801E2FB8
  goto L_801E3188; // 801E2FBC
L_801E2FC0:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 801E2FC0
  c->r[3]=c->r[15]|c->r[15]; // 801E2FC4
  c->r[8]=R32(c->r[1]+0x00000074u); // 801E2FC8
  c->r[4]=c->r[19]|c->r[19]; // 801E2FCC
  c->r[5]=c->r[1]+0x00000048u; // 801E2FD0
  c->r[6]=c->r[1]+0x00000020u; // 801E2FD4
  c->lr=0x801E2FDCu; f_801E3670(c); // 801E2FD8
  cmps(c,0,(int32_t)c->r[3],0); // 801E2FDC
  c->r[15]=c->r[3]|c->r[3]; // 801E2FE0
  if (crb(c,2)) { goto L_801E30F8; } // 801E2FE4
  c->r[12]=R32(c->r[19]+0x00000000u); // 801E2FE8
  c->r[3]=c->r[19]|c->r[19]; // 801E2FEC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E2FF0
  c->ctr=c->r[12]; // 801E2FF4
  if (true) { c->lr=0x801E2FFCu; dispatch(c,c->ctr); } // 801E2FF8
  c->lr=0x801E3000u; f_801E5840(c); // 801E2FFC
  c->r[3]=c->r[3]+0x00000354u; // 801E3000
  c->lr=0x801E3008u; f_800CCE30(c); // 801E3004
  c->r[3]=c->r[15]|c->r[15]; // 801E3008
  goto L_801E3188; // 801E300C
L_801E3010:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E3010
  if (!crb(c,2)) { goto L_801E302C; } // 801E3014
  c->r[3]=c->r[27]+0x00000000u; // 801E3018
  c->r[5]=c->r[27]+0x00000818u; // 801E301C
  c->r[4]=0u+0x0000053Du; // 801E3020
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3024
  c->lr=0x801E302Cu; f_801F9770(c); // 801E3028
L_801E302C:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801E302C
  c->r[4]=c->r[16]|c->r[16]; // 801E3030
  c->r[5]=c->r[1]+0x00000028u; // 801E3034
  c->lr=0x801E303Cu; f_801DE510(c); // 801E3038
  cmps(c,0,(int32_t)c->r[3],0); // 801E303C
  if (!crb(c,2)) { goto L_801E306C; } // 801E3040
  c->r[12]=R32(c->r[18]+0x00000000u); // 801E3044
  c->r[3]=c->r[18]|c->r[18]; // 801E3048
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E304C
  c->ctr=c->r[12]; // 801E3050
  if (true) { c->lr=0x801E3058u; dispatch(c,c->ctr); } // 801E3054
  c->lr=0x801E305Cu; f_801E5840(c); // 801E3058
  c->r[3]=c->r[3]+0x00000354u; // 801E305C
  c->lr=0x801E3064u; f_800CCE30(c); // 801E3060
  c->r[3]=0u+0x00000003u; // 801E3064
  goto L_801E3188; // 801E3068
L_801E306C:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 801E306C
  c->r[3]=c->r[15]|c->r[15]; // 801E3070
  c->r[8]=R32(c->r[1]+0x00000074u); // 801E3074
  c->r[4]=c->r[18]|c->r[18]; // 801E3078
  c->r[5]=c->r[1]+0x00000048u; // 801E307C
  c->r[6]=c->r[1]+0x00000028u; // 801E3080
  c->lr=0x801E3088u; f_801E3960(c); // 801E3084
  cmps(c,0,(int32_t)c->r[3],0); // 801E3088
  c->r[15]=c->r[3]|c->r[3]; // 801E308C
  if (crb(c,2)) { goto L_801E30F8; } // 801E3090
  c->r[12]=R32(c->r[18]+0x00000000u); // 801E3094
  c->r[3]=c->r[18]|c->r[18]; // 801E3098
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E309C
  c->ctr=c->r[12]; // 801E30A0
  if (true) { c->lr=0x801E30A8u; dispatch(c,c->ctr); } // 801E30A4
  c->lr=0x801E30ACu; f_801E5840(c); // 801E30A8
  c->r[3]=c->r[3]+0x00000354u; // 801E30AC
  c->lr=0x801E30B4u; f_800CCE30(c); // 801E30B0
  c->r[3]=c->r[15]|c->r[15]; // 801E30B4
  goto L_801E3188; // 801E30B8
L_801E30BC:;
  c->r[3]=c->r[27]+0x00000000u; // 801E30BC
  c->r[5]=c->r[27]+0x00000844u; // 801E30C0
  c->r[4]=0u+0x00000557u; // 801E30C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E30C8
  c->lr=0x801E30D0u; f_801F9770(c); // 801E30CC
  c->r[12]=R32(c->r[14]+0x00000000u); // 801E30D0
  c->r[3]=c->r[14]|c->r[14]; // 801E30D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E30D8
  c->ctr=c->r[12]; // 801E30DC
  if (true) { c->lr=0x801E30E4u; dispatch(c,c->ctr); } // 801E30E0
  c->lr=0x801E30E8u; f_801E5840(c); // 801E30E4
  c->r[3]=c->r[3]+0x00000354u; // 801E30E8
  c->lr=0x801E30F0u; f_800CCE30(c); // 801E30EC
  c->r[3]=0u+0x00000003u; // 801E30F0
  goto L_801E3188; // 801E30F4
L_801E30F8:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E30F8
  if (crb(c,2)) { goto L_801E313C; } // 801E30FC
  c->r[3]=c->r[21]|c->r[21]; // 801E3100
  c->r[4]=c->r[14]|c->r[14]; // 801E3104
  c->lr=0x801E310Cu; f_801D6AA0(c); // 801E3108
  cmps(c,0,(int32_t)c->r[3],0); // 801E310C
  if (!crb(c,2)) { goto L_801E313C; } // 801E3110
  c->r[12]=R32(c->r[14]+0x00000000u); // 801E3114
  c->r[3]=c->r[14]|c->r[14]; // 801E3118
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E311C
  c->ctr=c->r[12]; // 801E3120
  if (true) { c->lr=0x801E3128u; dispatch(c,c->ctr); } // 801E3124
  c->lr=0x801E312Cu; f_801E5840(c); // 801E3128
  c->r[3]=c->r[3]+0x00000354u; // 801E312C
  c->lr=0x801E3134u; f_800CCE30(c); // 801E3130
  c->r[3]=0u+0x000000FFu; // 801E3134
  goto L_801E3188; // 801E3138
L_801E313C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E313C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3140
  if (crb(c,2)) { goto L_801E3154; } // 801E3144
  c->r[3]=c->r[14]|c->r[14]; // 801E3148
  c->r[4]=c->r[0]|c->r[0]; // 801E314C
  c->lr=0x801E3154u; f_801D40F0(c); // 801E3150
L_801E3154:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801E3154
  cmps(c,0,(int32_t)c->r[0],0); // 801E3158
  if (crb(c,2)) { goto L_801E316C; } // 801E315C
  c->r[4]=R32(c->r[1]+0x00000070u); // 801E3160
  c->r[3]=c->r[14]|c->r[14]; // 801E3164
  c->lr=0x801E316Cu; f_801D42B0(c); // 801E3168
L_801E316C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E316C
  c->r[4]=c->r[14]|c->r[14]; // 801E3170
  c->lr=0x801E3178u; f_801E4190(c); // 801E3174
  c->lr=0x801E317Cu; f_801E5840(c); // 801E3178
  c->r[3]=c->r[3]+0x00000354u; // 801E317C
  c->lr=0x801E3184u; f_800CCE30(c); // 801E3180
  c->r[3]=0u+0x00000000u; // 801E3184
L_801E3188:;
  c->r[11]=c->r[1]+0x000000D0u; // 801E3188
  c->lr=0x801E3190u; f_802178C4(c); // 801E318C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801E3190
  c->lr=c->r[0]; // 801E3194
  c->r[1]=c->r[1]+0x000000D0u; // 801E3198
  return; // 801E319C
}

// fn_801E31A0
void f_801E31A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E31A0
  c->r[0]=c->lr; // 801E31A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E31A8
  c->r[11]=c->r[1]+0x00000070u; // 801E31AC
  c->lr=0x801E31B4u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E31B0
  cmps(c,0,(int32_t)c->r[6],0); // 801E31B4
  c->r[31]=0u+0x802D0000u; // 801E31B8
  c->r[23]=c->r[3]|c->r[3]; // 801E31BC
  c->r[24]=c->r[4]|c->r[4]; // 801E31C0
  c->r[25]=c->r[5]|c->r[5]; // 801E31C4
  c->r[26]=c->r[6]|c->r[6]; // 801E31C8
  c->r[27]=c->r[7]|c->r[7]; // 801E31CC
  c->r[28]=c->r[8]|c->r[8]; // 801E31D0
  c->r[17]=c->r[9]|c->r[9]; // 801E31D4
  c->r[16]=c->r[10]|c->r[10]; // 801E31D8
  c->r[31]=c->r[31]+0xFFFFFBC8u; // 801E31DC
  if (!crb(c,2)) { goto L_801E31F8; } // 801E31E0
  c->r[3]=c->r[31]+0x00000000u; // 801E31E4
  c->r[5]=c->r[31]+0x00000860u; // 801E31E8
  c->r[4]=0u+0x0000058Eu; // 801E31EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E31F0
  c->lr=0x801E31F8u; f_801F9770(c); // 801E31F4
L_801E31F8:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 801E31F8
  cmps(c,0,(int32_t)c->r[17],0); // 801E31FC
  c->r[30]=0u+0x00000000u; // 801E3200
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801E3204
  c->r[29]=0u+0x00000000u; // 801E3208
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E320C
  if (crb(c,2)) { goto L_801E326C; } // 801E3210
  c->r[0]=0u+0x00000000u; // 801E3214
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E3218
  c->r[30]=c->r[17]|c->r[17]; // 801E321C
  c->r[4]=c->r[17]|c->r[17]; // 801E3220
  c->r[3]=c->r[1]+0x00000020u; // 801E3224
  c->lr=0x801E322Cu; f_801DA440(c); // 801E3228
  cmps(c,0,(int32_t)c->r[16],0); // 801E322C
  if (crb(c,2)) { goto L_801E3254; } // 801E3230
  c->r[4]=c->r[16]|c->r[16]; // 801E3234
  c->r[3]=c->r[1]+0x00000020u; // 801E3238
  c->r[5]=c->r[1]+0x0000000Cu; // 801E323C
  c->lr=0x801E3244u; f_801DA600(c); // 801E3240
  cmps(c,0,(int32_t)c->r[3],0); // 801E3244
  if (!crb(c,2)) { goto L_801E3254; } // 801E3248
  c->r[3]=0u+0x0000000Bu; // 801E324C
  goto L_801E364C; // 801E3250
L_801E3254:;
  c->r[3]=c->r[1]+0x00000020u; // 801E3254
  c->lr=0x801E325Cu; f_801DA5A0(c); // 801E3258
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E325C
  c->r[5]=c->r[1]+0x00000008u; // 801E3260
  c->lr=0x801E3268u; f_801D9120(c); // 801E3264
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801E3268
L_801E326C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E326C
  if (!crb(c,2)) { goto L_801E32C0; } // 801E3270
  c->r[4]=R32(c->r[25]+0x00000000u); // 801E3274
  c->r[3]=c->r[23]|c->r[23]; // 801E3278
  c->lr=0x801E3280u; f_801E1F40(c); // 801E327C
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E3280
  cmps(c,0,(int32_t)c->r[16],0); // 801E3284
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E3288
  c->r[30]=c->r[3]|c->r[3]; // 801E328C
  if (crb(c,2)) { goto L_801E32C0; } // 801E3290
  c->r[4]=c->r[30]|c->r[30]; // 801E3294
  c->r[3]=c->r[1]+0x00000018u; // 801E3298
  c->lr=0x801E32A0u; f_801DA440(c); // 801E329C
  c->r[4]=c->r[16]|c->r[16]; // 801E32A0
  c->r[3]=c->r[1]+0x00000018u; // 801E32A4
  c->r[5]=c->r[1]+0x0000000Cu; // 801E32A8
  c->lr=0x801E32B0u; f_801DA600(c); // 801E32AC
  cmps(c,0,(int32_t)c->r[3],0); // 801E32B0
  if (!crb(c,2)) { goto L_801E32C0; } // 801E32B4
  c->r[3]=0u+0x0000000Bu; // 801E32B8
  goto L_801E364C; // 801E32BC
L_801E32C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E32C0
  if (!crb(c,2)) { goto L_801E3360; } // 801E32C4
  c->r[17]=R32(c->r[24]+0x00000004u); // 801E32C8
  cmps(c,0,(int32_t)c->r[17],0); // 801E32CC
  if (!crb(c,2)) { goto L_801E32DC; } // 801E32D0
  c->r[3]=0u+0x00000004u; // 801E32D4
  goto L_801E364C; // 801E32D8
L_801E32DC:;
  c->r[16]=addc(c,c->r[24],0x00000290u,0); cr0(c,c->r[16]); // 801E32DC
  if (!crb(c,2)) { goto L_801E32F8; } // 801E32E0
  c->r[3]=c->r[31]+0x00000000u; // 801E32E4
  c->r[5]=c->r[31]+0x00000888u; // 801E32E8
  c->r[4]=0u+0x000005C5u; // 801E32EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E32F0
  c->lr=0x801E32F8u; f_801F9770(c); // 801E32F4
L_801E32F8:;
  c->r[3]=R32(c->r[23]+0x00000010u); // 801E32F8
  c->r[5]=c->r[16]|c->r[16]; // 801E32FC
  c->r[4]=R32(c->r[25]+0x00000000u); // 801E3300
  c->r[6]=0u+0x00000200u; // 801E3304
  c->lr=0x801E330Cu; f_801DE5A0(c); // 801E3308
  cmps(c,0,(int32_t)c->r[3],0); // 801E330C
  c->r[29]=c->r[3]|c->r[3]; // 801E3310
  if (!crb(c,2)) { goto L_801E3320; } // 801E3314
  c->r[3]=0u+0x00000006u; // 801E3318
  goto L_801E364C; // 801E331C
L_801E3320:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E3320
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E3324
  c->ctr=c->r[12]; // 801E3328
  if (true) { c->lr=0x801E3330u; dispatch(c,c->ctr); } // 801E332C
  c->r[16]=c->r[3]|c->r[3]; // 801E3330
  c->r[3]=c->r[17]|c->r[17]; // 801E3334
  c->lr=0x801E333Cu; f_801D9690(c); // 801E3338
  cmpu(c,0,c->r[3],c->r[16]); // 801E333C
  if (!crb(c,0)) { goto L_801E3360; } // 801E3340
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E3344
  c->r[3]=c->r[29]|c->r[29]; // 801E3348
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E334C
  c->ctr=c->r[12]; // 801E3350
  if (true) { c->lr=0x801E3358u; dispatch(c,c->ctr); } // 801E3354
  c->r[3]=0u+0x00000005u; // 801E3358
  goto L_801E364C; // 801E335C
L_801E3360:;
  c->r[4]=R32(c->r[23]+0x00000030u); // 801E3360
  c->r[3]=c->r[24]|c->r[24]; // 801E3364
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E3368
  c->r[6]=c->r[23]+0x00000020u; // 801E336C
  c->lr=0x801E3374u; f_801DC120(c); // 801E3370
  c->r[16]=0u+0x802D0000u; // 801E3374
  c->r[17]=0u+0x802D0000u; // 801E3378
  c->r[19]=0u+0x802D0000u; // 801E337C
  c->r[20]=0u+0x802D0000u; // 801E3380
  c->r[21]=0u+0x802D0000u; // 801E3384
  c->r[22]=0u+0x802D0000u; // 801E3388
  goto L_801E34FC; // 801E338C
L_801E3390:;
  cmps(c,0,(int32_t)c->r[3],1); // 801E3390
  if (!crb(c,2)) { goto L_801E34F4; } // 801E3394
  c->r[0]=R32(c->r[23]+0x00000048u); // 801E3398
  cmpu(c,0,c->r[0],0x00000001u); // 801E339C
  if (!crb(c,2)) { goto L_801E33F0; } // 801E33A0
  cmps(c,0,(int32_t)c->r[29],0); // 801E33A4
  if (crb(c,2)) { goto L_801E33C0; } // 801E33A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E33AC
  c->r[3]=c->r[29]|c->r[29]; // 801E33B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E33B4
  c->ctr=c->r[12]; // 801E33B8
  if (true) { c->lr=0x801E33C0u; dispatch(c,c->ctr); } // 801E33BC
L_801E33C0:;
  c->r[3]=0u+0x00000004u; // 801E33C0
  c->lr=0x801E33C8u; f_801D6250(c); // 801E33C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E33C8
  if (crb(c,2)) { goto L_801E33E8; } // 801E33CC
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 801E33D0
  c->r[3]=c->r[31]+0x00000000u; // 801E33D4
  c->r[5]=c->r[31]+0x000008C0u; // 801E33D8
  c->r[4]=0u+0x000005F0u; // 801E33DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E33E0
  c->lr=0x801E33E8u; f_801F9810(c); // 801E33E4
L_801E33E8:;
  c->r[3]=0u+0x00000009u; // 801E33E8
  goto L_801E364C; // 801E33EC
L_801E33F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E33F0
  if (!crb(c,2)) { goto L_801E3400; } // 801E33F4
  c->r[18]=0u+0x00000000u; // 801E33F8
  goto L_801E3454; // 801E33FC
L_801E3400:;
  if (!crb(c,2)) { goto L_801E3418; } // 801E3400
  c->r[3]=c->r[16]+0x00000A14u; // 801E3404
  c->r[5]=c->r[17]+0x000009F0u; // 801E3408
  c->r[4]=0u+0x000001F1u; // 801E340C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3410
  c->lr=0x801E3418u; f_801F9770(c); // 801E3414
L_801E3418:;
  c->r[18]=R32(c->r[23]+0x0000004Cu); // 801E3418
  cmps(c,0,(int32_t)c->r[18],0); // 801E341C
  if (!crb(c,2)) { goto L_801E3438; } // 801E3420
  c->r[3]=c->r[19]+0xFFFFF1B4u; // 801E3424
  c->r[5]=c->r[20]+0xFFFFF190u; // 801E3428
  c->r[4]=0u+0x0000023Du; // 801E342C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3430
  c->lr=0x801E3438u; f_801F9770(c); // 801E3434
L_801E3438:;
  c->r[18]=addc(c,c->r[18],0xFFFFFF10u,0); cr0(c,c->r[18]); // 801E3438
  if (!crb(c,2)) { goto L_801E3454; } // 801E343C
  c->r[3]=c->r[21]+0x000009E4u; // 801E3440
  c->r[5]=c->r[22]+0x000009C0u; // 801E3444
  c->r[4]=0u+0x00000193u; // 801E3448
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E344C
  c->lr=0x801E3454u; f_801F9770(c); // 801E3450
L_801E3454:;
  cmpu(c,0,c->r[24],c->r[18]); // 801E3454
  if (!crb(c,2)) { goto L_801E34A8; } // 801E3458
  cmps(c,0,(int32_t)c->r[29],0); // 801E345C
  if (crb(c,2)) { goto L_801E3478; } // 801E3460
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E3464
  c->r[3]=c->r[29]|c->r[29]; // 801E3468
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E346C
  c->ctr=c->r[12]; // 801E3470
  if (true) { c->lr=0x801E3478u; dispatch(c,c->ctr); } // 801E3474
L_801E3478:;
  c->r[3]=0u+0x00000004u; // 801E3478
  c->lr=0x801E3480u; f_801D6250(c); // 801E347C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3480
  if (crb(c,2)) { goto L_801E34A0; } // 801E3484
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 801E3488
  c->r[3]=c->r[31]+0x00000000u; // 801E348C
  c->r[5]=c->r[31]+0x000008C0u; // 801E3490
  c->r[4]=0u+0x00000600u; // 801E3494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3498
  c->lr=0x801E34A0u; f_801F9810(c); // 801E349C
L_801E34A0:;
  c->r[3]=0u+0x00000009u; // 801E34A0
  goto L_801E364C; // 801E34A4
L_801E34A8:;
  c->r[3]=0u+0x00000004u; // 801E34A8
  c->lr=0x801E34B0u; f_801D6250(c); // 801E34AC
  cmps(c,0,(int32_t)c->r[3],0); // 801E34B0
  if (crb(c,2)) { goto L_801E34D0; } // 801E34B4
  c->r[6]=R32(c->r[18]+0x0000009Cu); // 801E34B8
  c->r[3]=c->r[31]+0x00000000u; // 801E34BC
  c->r[5]=c->r[31]+0x00000900u; // 801E34C0
  c->r[4]=0u+0x00000609u; // 801E34C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E34C8
  c->lr=0x801E34D0u; f_801F9810(c); // 801E34CC
L_801E34D0:;
  c->r[3]=c->r[18]|c->r[18]; // 801E34D0
  c->r[4]=0u+0x00000000u; // 801E34D4
  c->lr=0x801E34DCu; f_801D2EE0(c); // 801E34D8
  c->r[4]=R32(c->r[23]+0x00000030u); // 801E34DC
  c->r[3]=c->r[24]|c->r[24]; // 801E34E0
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E34E4
  c->r[6]=c->r[23]+0x00000020u; // 801E34E8
  c->lr=0x801E34F0u; f_801DC120(c); // 801E34EC
  goto L_801E34FC; // 801E34F0
L_801E34F4:;
  c->r[3]=0u+0x000000FFu; // 801E34F4
  goto L_801E364C; // 801E34F8
L_801E34FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E34FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E3390; } // 801E3500
  cmps(c,0,(int32_t)c->r[24],0); // 801E3504
  if (!crb(c,2)) { goto L_801E3520; } // 801E3508
  c->r[3]=c->r[31]+0x00000000u; // 801E350C
  c->r[5]=c->r[31]+0x0000093Cu; // 801E3510
  c->r[4]=0u+0x00000716u; // 801E3514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3518
  c->lr=0x801E3520u; f_801F9770(c); // 801E351C
L_801E3520:;
  cmps(c,0,(int32_t)c->r[25],0); // 801E3520
  if (!crb(c,2)) { goto L_801E353C; } // 801E3524
  c->r[3]=c->r[31]+0x00000000u; // 801E3528
  c->r[5]=c->r[31]+0x00000964u; // 801E352C
  c->r[4]=0u+0x00000717u; // 801E3530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3534
  c->lr=0x801E353Cu; f_801F9770(c); // 801E3538
L_801E353C:;
  c->r[4]=R32(c->r[25]+0x00000010u); // 801E353C
  c->r[0]=0u+0x43300000u; // 801E3540
  W32(c->r[1]+0x00000028u,c->r[0]); // 801E3544
  c->r[3]=c->r[24]|c->r[24]; // 801E3548
  c->r[0]=c->r[4]^0x80000000u; // 801E354C
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[2]=RF64(ea);} // 801E3550
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E3554
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3558
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801E355C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E3560
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801E3564
  c->lr=0x801E356Cu; f_801D4360(c); // 801E3568
  c->r[4]=R32(c->r[25]+0x00000014u); // 801E356C
  c->r[3]=c->r[24]|c->r[24]; // 801E3570
  c->lr=0x801E3578u; f_801D44E0(c); // 801E3574
  c->r[4]=R32(c->r[25]+0x00000018u); // 801E3578
  c->r[3]=c->r[24]|c->r[24]; // 801E357C
  c->lr=0x801E3584u; f_801D4520(c); // 801E3580
  c->r[4]=R32(c->r[25]+0x0000001Cu); // 801E3584
  c->r[3]=c->r[24]|c->r[24]; // 801E3588
  c->lr=0x801E3590u; f_801D4560(c); // 801E358C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801E3590
  c->r[3]=c->r[24]|c->r[24]; // 801E3594
  c->lr=0x801E359Cu; f_801DC5F0(c); // 801E3598
  c->r[4]=R8(c->r[26]+0x00000010u); // 801E359C
  c->r[3]=c->r[24]|c->r[24]; // 801E35A0
  c->lr=0x801E35A8u; f_801DC670(c); // 801E35A4
  c->r[4]=R32(c->r[23]+0x00000034u); // 801E35A8
  c->r[3]=c->r[24]|c->r[24]; // 801E35AC
  c->r[5]=R32(c->r[23]+0x00000038u); // 801E35B0
  c->lr=0x801E35B8u; f_801DC680(c); // 801E35B4
  cmps(c,0,(int32_t)c->r[27],0); // 801E35B8
  if (crb(c,2)) { goto L_801E35D4; } // 801E35BC
  cmps(c,0,(int32_t)c->r[27],1); // 801E35C0
  if (crb(c,2)) { goto L_801E35DC; } // 801E35C4
  cmps(c,0,(int32_t)c->r[27],2); // 801E35C8
  if (crb(c,2)) { goto L_801E35E4; } // 801E35CC
  goto L_801E35F0; // 801E35D0
L_801E35D4:;
  c->r[16]=0u+0x00000001u; // 801E35D4
  goto L_801E35F8; // 801E35D8
L_801E35DC:;
  c->r[16]=0u+0x00000000u; // 801E35DC
  goto L_801E35F8; // 801E35E0
L_801E35E4:;
  c->r[16]=0u+0x00000000u; // 801E35E4
  c->r[28]=0u+0x00000000u; // 801E35E8
  goto L_801E35F8; // 801E35EC
L_801E35F0:;
  c->r[16]=0u+0x00000000u; // 801E35F0
  c->r[28]=0u+0x00000000u; // 801E35F4
L_801E35F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E35F8
  if (crb(c,2)) { goto L_801E3630; } // 801E35FC
  c->r[4]=c->r[30]|c->r[30]; // 801E3600
  c->r[3]=c->r[1]+0x00000010u; // 801E3604
  c->lr=0x801E360Cu; f_801DA440(c); // 801E3608
  c->r[3]=c->r[1]+0x00000010u; // 801E360C
  c->lr=0x801E3614u; f_801DA5A0(c); // 801E3610
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801E3614
  c->r[4]=c->r[3]|c->r[3]; // 801E3618
  c->r[3]=c->r[24]|c->r[24]; // 801E361C
  c->r[6]=c->r[16]|c->r[16]; // 801E3620
  c->r[7]=c->r[28]|c->r[28]; // 801E3624
  c->lr=0x801E362Cu; f_801DC1D0(c); // 801E3628
  goto L_801E3648; // 801E362C
L_801E3630:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801E3630
  c->r[3]=c->r[24]|c->r[24]; // 801E3634
  c->r[4]=c->r[29]|c->r[29]; // 801E3638
  c->r[6]=c->r[16]|c->r[16]; // 801E363C
  c->r[7]=c->r[28]|c->r[28]; // 801E3640
  c->lr=0x801E3648u; f_801DC270(c); // 801E3644
L_801E3648:;
  c->r[3]=0u+0x00000000u; // 801E3648
L_801E364C:;
  c->r[11]=c->r[1]+0x00000070u; // 801E364C
  c->lr=0x801E3654u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3650
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E3654
  c->lr=c->r[0]; // 801E3658
  c->r[1]=c->r[1]+0x00000070u; // 801E365C
  return; // 801E3660
}

// fn_801E3670
void f_801E3670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3670
  c->r[0]=c->lr; // 801E3674
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E3678
  c->r[11]=c->r[1]+0x00000050u; // 801E367C
  c->lr=0x801E3684u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E3680
  c->r[31]=c->r[5]|c->r[5]; // 801E3684
  c->r[21]=0u+0x802D0000u; // 801E3688
  c->r[29]=c->r[3]|c->r[3]; // 801E368C
  c->r[30]=c->r[4]|c->r[4]; // 801E3690
  c->r[18]=c->r[6]|c->r[6]; // 801E3694
  c->r[5]=R16(c->r[6]+0x00000004u); // 801E3698
  c->r[6]=R16(c->r[6]+0x00000006u); // 801E369C
  c->r[19]=c->r[7]|c->r[7]; // 801E36A0
  c->r[20]=c->r[8]|c->r[8]; // 801E36A4
  c->r[3]=c->r[30]|c->r[30]; // 801E36A8
  c->r[21]=c->r[21]+0xFFFFFBC8u; // 801E36AC
  c->r[4]=c->r[29]+0x000000C8u; // 801E36B0
  c->lr=0x801E36B8u; f_801EA450(c); // 801E36B4
  c->r[22]=0u+0x802D0000u; // 801E36B8
  c->r[23]=0u+0x802D0000u; // 801E36BC
  c->r[25]=0u+0x802D0000u; // 801E36C0
  c->r[26]=0u+0x802D0000u; // 801E36C4
  c->r[27]=0u+0x802D0000u; // 801E36C8
  c->r[28]=0u+0x802D0000u; // 801E36CC
  goto L_801E3808; // 801E36D0
L_801E36D4:;
  cmps(c,0,(int32_t)c->r[3],1); // 801E36D4
  if (!crb(c,2)) { goto L_801E3800; } // 801E36D8
  c->r[0]=R32(c->r[29]+0x00000070u); // 801E36DC
  cmpu(c,0,c->r[0],0x00000001u); // 801E36E0
  if (!crb(c,2)) { goto L_801E3718; } // 801E36E4
  c->r[3]=0u+0x00000004u; // 801E36E8
  c->lr=0x801E36F0u; f_801D6250(c); // 801E36EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E36F0
  if (crb(c,2)) { goto L_801E3710; } // 801E36F4
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 801E36F8
  c->r[3]=c->r[21]+0x00000000u; // 801E36FC
  c->r[5]=c->r[21]+0x00000990u; // 801E3700
  c->r[4]=0u+0x00000670u; // 801E3704
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3708
  c->lr=0x801E3710u; f_801F9810(c); // 801E370C
L_801E3710:;
  c->r[3]=0u+0x00000009u; // 801E3710
  goto L_801E3944; // 801E3714
L_801E3718:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E3718
  if (!crb(c,2)) { goto L_801E3728; } // 801E371C
  c->r[24]=0u+0x00000000u; // 801E3720
  goto L_801E377C; // 801E3724
L_801E3728:;
  if (!crb(c,2)) { goto L_801E3740; } // 801E3728
  c->r[3]=c->r[22]+0x00000954u; // 801E372C
  c->r[5]=c->r[23]+0x00000930u; // 801E3730
  c->r[4]=0u+0x000001F1u; // 801E3734
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3738
  c->lr=0x801E3740u; f_801F9770(c); // 801E373C
L_801E3740:;
  c->r[24]=R32(c->r[29]+0x00000074u); // 801E3740
  cmps(c,0,(int32_t)c->r[24],0); // 801E3744
  if (!crb(c,2)) { goto L_801E3760; } // 801E3748
  c->r[3]=c->r[25]+0x000008F4u; // 801E374C
  c->r[5]=c->r[26]+0x000008D0u; // 801E3750
  c->r[4]=0u+0x0000023Du; // 801E3754
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3758
  c->lr=0x801E3760u; f_801F9770(c); // 801E375C
L_801E3760:;
  c->r[24]=addc(c,c->r[24],0xFFFFFF10u,0); cr0(c,c->r[24]); // 801E3760
  if (!crb(c,2)) { goto L_801E377C; } // 801E3764
  c->r[3]=c->r[27]+0x00000924u; // 801E3768
  c->r[5]=c->r[28]+0x00000900u; // 801E376C
  c->r[4]=0u+0x00000193u; // 801E3770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3774
  c->lr=0x801E377Cu; f_801F9770(c); // 801E3778
L_801E377C:;
  cmpu(c,0,c->r[30],c->r[24]); // 801E377C
  if (!crb(c,2)) { goto L_801E37B4; } // 801E3780
  c->r[3]=0u+0x00000004u; // 801E3784
  c->lr=0x801E378Cu; f_801D6250(c); // 801E3788
  cmps(c,0,(int32_t)c->r[3],0); // 801E378C
  if (crb(c,2)) { goto L_801E37AC; } // 801E3790
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 801E3794
  c->r[3]=c->r[21]+0x00000000u; // 801E3798
  c->r[5]=c->r[21]+0x00000990u; // 801E379C
  c->r[4]=0u+0x0000067Cu; // 801E37A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E37A4
  c->lr=0x801E37ACu; f_801F9810(c); // 801E37A8
L_801E37AC:;
  c->r[3]=0u+0x00000009u; // 801E37AC
  goto L_801E3944; // 801E37B0
L_801E37B4:;
  c->r[3]=0u+0x00000005u; // 801E37B4
  c->lr=0x801E37BCu; f_801D6250(c); // 801E37B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E37BC
  if (crb(c,2)) { goto L_801E37DC; } // 801E37C0
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 801E37C4
  c->r[3]=c->r[21]+0x00000000u; // 801E37C8
  c->r[5]=c->r[21]+0x000009D4u; // 801E37CC
  c->r[4]=0u+0x00000685u; // 801E37D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E37D4
  c->lr=0x801E37DCu; f_801F9810(c); // 801E37D8
L_801E37DC:;
  c->r[3]=c->r[24]|c->r[24]; // 801E37DC
  c->r[4]=0u+0x00000000u; // 801E37E0
  c->lr=0x801E37E8u; f_801D2EE0(c); // 801E37E4
  c->r[5]=R16(c->r[18]+0x00000004u); // 801E37E8
  c->r[3]=c->r[30]|c->r[30]; // 801E37EC
  c->r[6]=R16(c->r[18]+0x00000006u); // 801E37F0
  c->r[4]=c->r[29]+0x000000C8u; // 801E37F4
  c->lr=0x801E37FCu; f_801EA450(c); // 801E37F8
  goto L_801E3808; // 801E37FC
L_801E3800:;
  c->r[3]=0u+0x000000FFu; // 801E3800
  goto L_801E3944; // 801E3804
L_801E3808:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E3808
  if (!crb(c,2)) { IRQCHK(c); goto L_801E36D4; } // 801E380C
  cmps(c,0,(int32_t)c->r[19],0); // 801E3810
  if (crb(c,2)) { goto L_801E382C; } // 801E3814
  cmps(c,0,(int32_t)c->r[19],1); // 801E3818
  if (crb(c,2)) { goto L_801E3834; } // 801E381C
  cmps(c,0,(int32_t)c->r[19],2); // 801E3820
  if (crb(c,2)) { goto L_801E3840; } // 801E3824
  goto L_801E3848; // 801E3828
L_801E382C:;
  c->r[23]=0u+0x00000001u; // 801E382C
  goto L_801E3850; // 801E3830
L_801E3834:;
  c->r[23]=0u+0x00000000u; // 801E3834
  c->r[20]=0u+0x00000000u; // 801E3838
  goto L_801E3850; // 801E383C
L_801E3840:;
  c->r[23]=0u+0x00000000u; // 801E3840
  goto L_801E3850; // 801E3844
L_801E3848:;
  c->r[23]=0u+0x00000000u; // 801E3848
  c->r[20]=0u+0x00000000u; // 801E384C
L_801E3850:;
  c->r[22]=addc(c,c->r[30],0x00000EB4u,0); cr0(c,c->r[22]); // 801E3850
  if (!crb(c,2)) { goto L_801E386C; } // 801E3854
  c->r[3]=c->r[21]+0x00000000u; // 801E3858
  c->r[5]=c->r[21]+0x00000888u; // 801E385C
  c->r[4]=0u+0x000006A8u; // 801E3860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3864
  c->lr=0x801E386Cu; f_801F9770(c); // 801E3868
L_801E386C:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801E386C
  c->r[5]=c->r[22]|c->r[22]; // 801E3870
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E3874
  c->r[6]=0u+0x00000200u; // 801E3878
  c->lr=0x801E3880u; f_801DE5A0(c); // 801E387C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3880
  c->r[6]=c->r[3]|c->r[3]; // 801E3884
  if (!crb(c,2)) { goto L_801E3894; } // 801E3888
  c->r[3]=0u+0x00000006u; // 801E388C
  goto L_801E3944; // 801E3890
L_801E3894:;
  c->r[3]=c->r[30]|c->r[30]; // 801E3894
  c->r[4]=c->r[23]|c->r[23]; // 801E3898
  c->r[5]=c->r[20]|c->r[20]; // 801E389C
  c->lr=0x801E38A4u; f_801EA500(c); // 801E38A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E38A4
  if (!crb(c,2)) { goto L_801E38B4; } // 801E38A8
  c->r[3]=0u+0x000000FFu; // 801E38AC
  goto L_801E3944; // 801E38B0
L_801E38B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E38B4
  if (!crb(c,2)) { goto L_801E38D0; } // 801E38B8
  c->r[3]=c->r[21]+0x00000000u; // 801E38BC
  c->r[5]=c->r[21]+0x0000093Cu; // 801E38C0
  c->r[4]=0u+0x00000716u; // 801E38C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E38C8
  c->lr=0x801E38D0u; f_801F9770(c); // 801E38CC
L_801E38D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E38D0
  if (!crb(c,2)) { goto L_801E38EC; } // 801E38D4
  c->r[3]=c->r[21]+0x00000000u; // 801E38D8
  c->r[5]=c->r[21]+0x00000964u; // 801E38DC
  c->r[4]=0u+0x00000717u; // 801E38E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E38E4
  c->lr=0x801E38ECu; f_801F9770(c); // 801E38E8
L_801E38EC:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 801E38EC
  c->r[0]=0u+0x43300000u; // 801E38F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E38F4
  c->r[3]=c->r[30]|c->r[30]; // 801E38F8
  c->r[0]=c->r[4]^0x80000000u; // 801E38FC
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[2]=RF64(ea);} // 801E3900
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E3904
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3908
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E390C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E3910
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801E3914
  c->lr=0x801E391Cu; f_801D4360(c); // 801E3918
  c->r[4]=R32(c->r[31]+0x00000014u); // 801E391C
  c->r[3]=c->r[30]|c->r[30]; // 801E3920
  c->lr=0x801E3928u; f_801D44E0(c); // 801E3924
  c->r[4]=R32(c->r[31]+0x00000018u); // 801E3928
  c->r[3]=c->r[30]|c->r[30]; // 801E392C
  c->lr=0x801E3934u; f_801D4520(c); // 801E3930
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801E3934
  c->r[3]=c->r[30]|c->r[30]; // 801E3938
  c->lr=0x801E3940u; f_801D4560(c); // 801E393C
  c->r[3]=0u+0x00000000u; // 801E3940
L_801E3944:;
  c->r[11]=c->r[1]+0x00000050u; // 801E3944
  c->lr=0x801E394Cu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3948
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E394C
  c->lr=c->r[0]; // 801E3950
  c->r[1]=c->r[1]+0x00000050u; // 801E3954
  return; // 801E3958
}

// fn_801E3960
void f_801E3960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3960
  c->r[0]=c->lr; // 801E3964
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3968
  c->r[11]=c->r[1]+0x00000030u; // 801E396C
  c->lr=0x801E3974u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E3970
  cmps(c,0,(int32_t)c->r[6],0); // 801E3974
  c->r[31]=0u+0x802D0000u; // 801E3978
  c->r[25]=c->r[3]|c->r[3]; // 801E397C
  c->r[26]=c->r[4]|c->r[4]; // 801E3980
  c->r[27]=c->r[5]|c->r[5]; // 801E3984
  c->r[28]=c->r[6]|c->r[6]; // 801E3988
  c->r[29]=c->r[7]|c->r[7]; // 801E398C
  c->r[30]=c->r[8]|c->r[8]; // 801E3990
  c->r[31]=c->r[31]+0xFFFFFBC8u; // 801E3994
  if (!crb(c,2)) { goto L_801E39B0; } // 801E3998
  c->r[3]=c->r[31]+0x00000000u; // 801E399C
  c->r[5]=c->r[31]+0x00000860u; // 801E39A0
  c->r[4]=0u+0x000006D7u; // 801E39A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E39A8
  c->lr=0x801E39B0u; f_801F9770(c); // 801E39AC
L_801E39B0:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 801E39B0
  c->r[3]=c->r[25]|c->r[25]; // 801E39B4
  c->lr=0x801E39BCu; f_801E1F40(c); // 801E39B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E39BC
  c->r[4]=c->r[3]|c->r[3]; // 801E39C0
  if (!crb(c,2)) { goto L_801E39D0; } // 801E39C4
  c->r[3]=0u+0x00000004u; // 801E39C8
  goto L_801E3AE0; // 801E39CC
L_801E39D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E39D0
  if (crb(c,2)) { goto L_801E39EC; } // 801E39D4
  cmps(c,0,(int32_t)c->r[29],1); // 801E39D8
  if (crb(c,2)) { goto L_801E39F4; } // 801E39DC
  cmps(c,0,(int32_t)c->r[29],2); // 801E39E0
  if (crb(c,2)) { goto L_801E3A00; } // 801E39E4
  goto L_801E3A08; // 801E39E8
L_801E39EC:;
  c->r[6]=0u+0x00000001u; // 801E39EC
  goto L_801E3A10; // 801E39F0
L_801E39F4:;
  c->r[6]=0u+0x00000000u; // 801E39F4
  c->r[30]=0u+0x00000000u; // 801E39F8
  goto L_801E3A10; // 801E39FC
L_801E3A00:;
  c->r[6]=0u+0x00000000u; // 801E3A00
  goto L_801E3A10; // 801E3A04
L_801E3A08:;
  c->r[6]=0u+0x00000000u; // 801E3A08
  c->r[30]=0u+0x00000000u; // 801E3A0C
L_801E3A10:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 801E3A10
  c->r[3]=c->r[26]|c->r[26]; // 801E3A14
  c->r[9]=R32(c->r[27]+0x00000000u); // 801E3A18
  c->r[7]=c->r[30]|c->r[30]; // 801E3A1C
  c->r[8]=c->r[25]+0x00000028u; // 801E3A20
  c->lr=0x801E3A28u; f_801EFD30(c); // 801E3A24
  cmps(c,0,(int32_t)c->r[3],0); // 801E3A28
  if (!crb(c,2)) { goto L_801E3A38; } // 801E3A2C
  c->r[3]=0u+0x000000FFu; // 801E3A30
  goto L_801E3AE0; // 801E3A34
L_801E3A38:;
  cmps(c,0,(int32_t)c->r[26],0); // 801E3A38
  if (!crb(c,2)) { goto L_801E3A54; } // 801E3A3C
  c->r[3]=c->r[31]+0x00000000u; // 801E3A40
  c->r[5]=c->r[31]+0x0000093Cu; // 801E3A44
  c->r[4]=0u+0x00000716u; // 801E3A48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3A4C
  c->lr=0x801E3A54u; f_801F9770(c); // 801E3A50
L_801E3A54:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E3A54
  if (!crb(c,2)) { goto L_801E3A70; } // 801E3A58
  c->r[3]=c->r[31]+0x00000000u; // 801E3A5C
  c->r[5]=c->r[31]+0x00000964u; // 801E3A60
  c->r[4]=0u+0x00000717u; // 801E3A64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3A68
  c->lr=0x801E3A70u; f_801F9770(c); // 801E3A6C
L_801E3A70:;
  c->r[4]=R32(c->r[27]+0x00000010u); // 801E3A70
  c->r[0]=0u+0x43300000u; // 801E3A74
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E3A78
  c->r[3]=c->r[26]|c->r[26]; // 801E3A7C
  c->r[0]=c->r[4]^0x80000000u; // 801E3A80
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[2]=RF64(ea);} // 801E3A84
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E3A88
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3A8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E3A90
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E3A94
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801E3A98
  c->lr=0x801E3AA0u; f_801D4360(c); // 801E3A9C
  c->r[4]=R32(c->r[27]+0x00000014u); // 801E3AA0
  c->r[3]=c->r[26]|c->r[26]; // 801E3AA4
  c->lr=0x801E3AACu; f_801D44E0(c); // 801E3AA8
  c->r[4]=R32(c->r[27]+0x00000018u); // 801E3AAC
  c->r[3]=c->r[26]|c->r[26]; // 801E3AB0
  c->lr=0x801E3AB8u; f_801D4520(c); // 801E3AB4
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 801E3AB8
  c->r[3]=c->r[26]|c->r[26]; // 801E3ABC
  c->lr=0x801E3AC4u; f_801D4560(c); // 801E3AC0
  c->r[4]=R32(c->r[28]+0x00000004u); // 801E3AC4
  c->r[3]=c->r[26]|c->r[26]; // 801E3AC8
  c->lr=0x801E3AD0u; f_801EFF50(c); // 801E3ACC
  c->r[4]=R8(c->r[28]+0x00000008u); // 801E3AD0
  c->r[3]=c->r[26]|c->r[26]; // 801E3AD4
  c->lr=0x801E3ADCu; f_801EFFD0(c); // 801E3AD8
  c->r[3]=0u+0x00000000u; // 801E3ADC
L_801E3AE0:;
  c->r[11]=c->r[1]+0x00000030u; // 801E3AE0
  c->lr=0x801E3AE8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3AE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E3AE8
  c->lr=c->r[0]; // 801E3AEC
  c->r[1]=c->r[1]+0x00000030u; // 801E3AF0
  return; // 801E3AF4
}

// fn_801E3B00
void f_801E3B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3B00
  c->r[0]=c->lr; // 801E3B04
  W32(c->r[1]+0x00000254u,c->r[0]); // 801E3B08
  c->r[11]=c->r[1]+0x00000250u; // 801E3B0C
  c->lr=0x801E3B14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E3B10
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E3B14
  c->r[28]=0u+0x802D0000u; // 801E3B18
  c->r[30]=c->r[3]|c->r[3]; // 801E3B1C
  c->r[31]=c->r[4]|c->r[4]; // 801E3B20
  cmps(c,0,(int32_t)c->r[0],0); // 801E3B24
  c->r[27]=c->r[5]|c->r[5]; // 801E3B28
  c->r[29]=c->r[6]|c->r[6]; // 801E3B2C
  c->r[28]=c->r[28]+0xFFFFFBC8u; // 801E3B30
  if (!crb(c,2)) { goto L_801E3B4C; } // 801E3B34
  c->r[3]=c->r[28]+0x00000000u; // 801E3B38
  c->r[5]=c->r[28]+0x000002F8u; // 801E3B3C
  c->r[4]=0u+0x0000072Fu; // 801E3B40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3B44
  c->lr=0x801E3B4Cu; f_801F9770(c); // 801E3B48
L_801E3B4C:;
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E3B4C
  if (crb(c,2)) { goto L_801E3B6C; } // 801E3B50
  c->r[6]=c->r[29]|c->r[29]; // 801E3B54
  c->r[3]=c->r[28]+0x00000000u; // 801E3B58
  c->r[5]=c->r[28]+0x00000A14u; // 801E3B5C
  c->r[4]=0u+0x00000730u; // 801E3B60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3B64
  c->lr=0x801E3B6Cu; f_801F9770(c); // 801E3B68
L_801E3B6C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801E3B6C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3B70
  if (!crb(c,2)) { goto L_801E3B80; } // 801E3B74
  c->r[3]=0u+0x00000000u; // 801E3B78
  goto L_801E3B84; // 801E3B7C
L_801E3B80:;
  c->lr=0x801E3B84u; f_801DE400(c); // 801E3B80
L_801E3B84:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E3B84
  if (!crb(c,2)) { goto L_801E3B94; } // 801E3B88
  c->r[3]=0u+0x00000000u; // 801E3B8C
  goto L_801E3D30; // 801E3B90
L_801E3B94:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801E3B94
  c->lr=0x801E3B9Cu; f_801DE4B0(c); // 801E3B98
  cmpu(c,0,c->r[31],c->r[3]); // 801E3B9C
  if (crb(c,0)) { goto L_801E3BAC; } // 801E3BA0
  c->r[3]=0u+0x00000000u; // 801E3BA4
  goto L_801E3D30; // 801E3BA8
L_801E3BAC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801E3BAC
  cmps(c,0,(int32_t)c->r[3],0); // 801E3BB0
  if (!crb(c,2)) { goto L_801E3BD8; } // 801E3BB4
  if (!crb(c,2)) { goto L_801E3BD0; } // 801E3BB8
  c->r[3]=c->r[28]+0x00000000u; // 801E3BBC
  c->r[5]=c->r[28]+0x0000037Cu; // 801E3BC0
  c->r[4]=0u+0x00000348u; // 801E3BC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3BC8
  c->lr=0x801E3BD0u; f_801F9810(c); // 801E3BCC
L_801E3BD0:;
  c->r[0]=0u+0x00000000u; // 801E3BD0
  goto L_801E3BF8; // 801E3BD4
L_801E3BD8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E3BD8
  cmpu(c,0,c->r[31],c->r[0]); // 801E3BDC
  if (crb(c,0)) { goto L_801E3BEC; } // 801E3BE0
  c->r[0]=0u+0x00000000u; // 801E3BE4
  goto L_801E3BF8; // 801E3BE8
L_801E3BEC:;
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801E3BEC
  c->r[3]=c->r[3]+c->r[0]; // 801E3BF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E3BF4
L_801E3BF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BF8
  if (crb(c,2)) { goto L_801E3C08; } // 801E3BFC
  c->r[3]=0u+0x00000001u; // 801E3C00
  goto L_801E3D30; // 801E3C04
L_801E3C08:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E3C08
  if (!crb(c,2)) { goto L_801E3C18; } // 801E3C0C
  c->r[3]=0u+0x00000000u; // 801E3C10
  goto L_801E3D30; // 801E3C14
L_801E3C18:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 801E3C18
  c->r[3]=c->r[1]+0x00000010u; // 801E3C1C
  c->lr=0x801E3C24u; f_801E01E0(c); // 801E3C20
  c->r[4]=c->r[31]|c->r[31]; // 801E3C24
  c->r[5]=c->r[27]|c->r[27]; // 801E3C28
  c->r[7]=c->r[29]|c->r[29]; // 801E3C2C
  c->r[3]=c->r[1]+0x00000010u; // 801E3C30
  c->r[6]=c->r[1]+0x00000008u; // 801E3C34
  c->lr=0x801E3C3Cu; f_801E0260(c); // 801E3C38
  cmps(c,0,(int32_t)c->r[3],0); // 801E3C3C
  c->r[29]=c->r[3]|c->r[3]; // 801E3C40
  if (!crb(c,2)) { goto L_801E3C5C; } // 801E3C44
  c->r[3]=c->r[1]+0x00000010u; // 801E3C48
  c->r[4]=0u+0xFFFFFFFFu; // 801E3C4C
  c->lr=0x801E3C54u; f_801E0220(c); // 801E3C50
  c->r[3]=0u+0x00000000u; // 801E3C54
  goto L_801E3D30; // 801E3C58
L_801E3C5C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801E3C5C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3C60
  if (!crb(c,2)) { goto L_801E3C84; } // 801E3C64
  if (!crb(c,2)) { goto L_801E3CBC; } // 801E3C68
  c->r[3]=c->r[28]+0x00000000u; // 801E3C6C
  c->r[5]=c->r[28]+0x00000490u; // 801E3C70
  c->r[4]=0u+0x00000362u; // 801E3C74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3C78
  c->lr=0x801E3C80u; f_801F9810(c); // 801E3C7C
  goto L_801E3CBC; // 801E3C80
L_801E3C84:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 801E3C84
  cmpu(c,0,c->r[31],c->r[8]); // 801E3C88
  if (crb(c,0)) { goto L_801E3CAC; } // 801E3C8C
  c->r[6]=c->r[31]|c->r[31]; // 801E3C90
  c->r[3]=c->r[28]+0x00000000u; // 801E3C94
  c->r[5]=c->r[28]+0x000004E8u; // 801E3C98
  c->r[4]=0u+0x00000366u; // 801E3C9C
  c->r[7]=0u+0x00000000u; // 801E3CA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3CA4
  c->lr=0x801E3CACu; f_801F9770(c); // 801E3CA8
L_801E3CAC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801E3CAC
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801E3CB0
  c->r[3]=c->r[3]+c->r[0]; // 801E3CB4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801E3CB8
L_801E3CBC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801E3CBC
  c->r[29]=R32(c->r[1]+0x00000008u); // 801E3CC0
  cmps(c,0,(int32_t)c->r[3],0); // 801E3CC4
  if (!crb(c,2)) { goto L_801E3CE8; } // 801E3CC8
  if (!crb(c,2)) { goto L_801E3D20; } // 801E3CCC
  c->r[3]=c->r[28]+0x00000000u; // 801E3CD0
  c->r[5]=c->r[28]+0x00000528u; // 801E3CD4
  c->r[4]=0u+0x00000395u; // 801E3CD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3CDC
  c->lr=0x801E3CE4u; f_801F9810(c); // 801E3CE0
  goto L_801E3D20; // 801E3CE4
L_801E3CE8:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 801E3CE8
  cmpu(c,0,c->r[31],c->r[8]); // 801E3CEC
  if (crb(c,0)) { goto L_801E3D10; } // 801E3CF0
  c->r[6]=c->r[31]|c->r[31]; // 801E3CF4
  c->r[3]=c->r[28]+0x00000000u; // 801E3CF8
  c->r[5]=c->r[28]+0x000004E8u; // 801E3CFC
  c->r[4]=0u+0x00000399u; // 801E3D00
  c->r[7]=0u+0x00000000u; // 801E3D04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3D08
  c->lr=0x801E3D10u; f_801F9770(c); // 801E3D0C
L_801E3D10:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801E3D10
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801E3D14
  c->r[3]=c->r[3]+c->r[0]; // 801E3D18
  W32(c->r[3]+0x00000008u,c->r[29]); // 801E3D1C
L_801E3D20:;
  c->r[3]=c->r[1]+0x00000010u; // 801E3D20
  c->r[4]=0u+0xFFFFFFFFu; // 801E3D24
  c->lr=0x801E3D2Cu; f_801E0220(c); // 801E3D28
  c->r[3]=0u+0x00000001u; // 801E3D2C
L_801E3D30:;
  c->r[11]=c->r[1]+0x00000250u; // 801E3D30
  c->lr=0x801E3D38u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3D34
  c->r[0]=R32(c->r[1]+0x00000254u); // 801E3D38
  c->lr=c->r[0]; // 801E3D3C
  c->r[1]=c->r[1]+0x00000250u; // 801E3D40
  return; // 801E3D44
}

// fn_801E3D50
void f_801E3D50(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E3D50
  cmps(c,0,(int32_t)c->r[0],0); // 801E3D54
  if (crb(c,2)) { goto L_801E3DA4; } // 801E3D58
  c->r[9]=0u+0x00000000u; // 801E3D5C
  c->r[7]=0u+0x00000000u; // 801E3D60
  c->r[6]=0u+0x00000000u; // 801E3D64
  goto L_801E3D94; // 801E3D68
  c->r[0]=c->r[0]|0x00000000u; // 801E3D6C
L_801E3D70:;
  c->r[8]=c->r[8]+c->r[7]; // 801E3D70
  c->r[0]=R32(c->r[8]+0x00000004u); // 801E3D74
  cmpu(c,0,c->r[4],c->r[0]); // 801E3D78
  if (crb(c,1)) { goto L_801E3D8C; } // 801E3D7C
  cmpu(c,0,c->r[0],c->r[5]); // 801E3D80
  if (crb(c,1)) { goto L_801E3D8C; } // 801E3D84
  W32(c->r[8]+0x00000004u,c->r[6]); // 801E3D88
L_801E3D8C:;
  c->r[7]=c->r[7]+0x00000008u; // 801E3D8C
  c->r[9]=c->r[9]+0x00000001u; // 801E3D90
L_801E3D94:;
  c->r[8]=R32(c->r[3]+0x00000018u); // 801E3D94
  c->r[0]=R32(c->r[8]+0x00000000u); // 801E3D98
  cmpu(c,0,c->r[9],c->r[0]); // 801E3D9C
  if (crb(c,0)) { IRQCHK(c); goto L_801E3D70; } // 801E3DA0
L_801E3DA4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E3DA4
  cmps(c,0,(int32_t)c->r[0],0); // 801E3DA8
  if (crb(c,2)) return; // 801E3DAC
  c->r[9]=0u+0x00000000u; // 801E3DB0
  c->r[7]=0u+0x00000000u; // 801E3DB4
  c->r[6]=0u+0x00000000u; // 801E3DB8
  goto L_801E3DE4; // 801E3DBC
L_801E3DC0:;
  c->r[8]=c->r[8]+c->r[7]; // 801E3DC0
  c->r[0]=R32(c->r[8]+0x00000004u); // 801E3DC4
  cmpu(c,0,c->r[4],c->r[0]); // 801E3DC8
  if (crb(c,1)) { goto L_801E3DDC; } // 801E3DCC
  cmpu(c,0,c->r[0],c->r[5]); // 801E3DD0
  if (crb(c,1)) { goto L_801E3DDC; } // 801E3DD4
  W32(c->r[8]+0x00000004u,c->r[6]); // 801E3DD8
L_801E3DDC:;
  c->r[7]=c->r[7]+0x00000008u; // 801E3DDC
  c->r[9]=c->r[9]+0x00000001u; // 801E3DE0
L_801E3DE4:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 801E3DE4
  c->r[0]=R32(c->r[8]+0x00000000u); // 801E3DE8
  cmpu(c,0,c->r[9],c->r[0]); // 801E3DEC
  if (crb(c,0)) { IRQCHK(c); goto L_801E3DC0; } // 801E3DF0
  return; // 801E3DF4
}

// fn_801E3E00
void f_801E3E00(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E3E00
  cmps(c,0,(int32_t)c->r[0],0); // 801E3E04
  if (crb(c,2)) { goto L_801E3E54; } // 801E3E08
  c->r[9]=0u+0x00000000u; // 801E3E0C
  c->r[7]=0u+0x00000000u; // 801E3E10
  c->r[6]=0u+0x00000000u; // 801E3E14
  goto L_801E3E44; // 801E3E18
  c->r[0]=c->r[0]|0x00000000u; // 801E3E1C
L_801E3E20:;
  c->r[8]=c->r[8]+c->r[7]; // 801E3E20
  c->r[0]=R32(c->r[8]+0x00000008u); // 801E3E24
  cmpu(c,0,c->r[4],c->r[0]); // 801E3E28
  if (crb(c,1)) { goto L_801E3E3C; } // 801E3E2C
  cmpu(c,0,c->r[0],c->r[5]); // 801E3E30
  if (crb(c,1)) { goto L_801E3E3C; } // 801E3E34
  W32(c->r[8]+0x00000008u,c->r[6]); // 801E3E38
L_801E3E3C:;
  c->r[7]=c->r[7]+0x00000008u; // 801E3E3C
  c->r[9]=c->r[9]+0x00000001u; // 801E3E40
L_801E3E44:;
  c->r[8]=R32(c->r[3]+0x00000018u); // 801E3E44
  c->r[0]=R32(c->r[8]+0x00000000u); // 801E3E48
  cmpu(c,0,c->r[9],c->r[0]); // 801E3E4C
  if (crb(c,0)) { IRQCHK(c); goto L_801E3E20; } // 801E3E50
L_801E3E54:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E3E54
  cmps(c,0,(int32_t)c->r[0],0); // 801E3E58
  if (crb(c,2)) return; // 801E3E5C
  c->r[9]=0u+0x00000000u; // 801E3E60
  c->r[7]=0u+0x00000000u; // 801E3E64
  c->r[6]=0u+0x00000000u; // 801E3E68
  goto L_801E3E94; // 801E3E6C
L_801E3E70:;
  c->r[8]=c->r[8]+c->r[7]; // 801E3E70
  c->r[0]=R32(c->r[8]+0x00000008u); // 801E3E74
  cmpu(c,0,c->r[4],c->r[0]); // 801E3E78
  if (crb(c,1)) { goto L_801E3E8C; } // 801E3E7C
  cmpu(c,0,c->r[0],c->r[5]); // 801E3E80
  if (crb(c,1)) { goto L_801E3E8C; } // 801E3E84
  W32(c->r[8]+0x00000008u,c->r[6]); // 801E3E88
L_801E3E8C:;
  c->r[7]=c->r[7]+0x00000008u; // 801E3E8C
  c->r[9]=c->r[9]+0x00000001u; // 801E3E90
L_801E3E94:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 801E3E94
  c->r[0]=R32(c->r[8]+0x00000000u); // 801E3E98
  cmpu(c,0,c->r[9],c->r[0]); // 801E3E9C
  if (crb(c,0)) { IRQCHK(c); goto L_801E3E70; } // 801E3EA0
  return; // 801E3EA4
}

// fn_801E3EB0
void f_801E3EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3EB0
  c->r[0]=c->lr; // 801E3EB4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E3EB8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801E3EBC
  W32(c->r[1]+0x00000048u,c->r[30]); // 801E3EC0
  c->r[30]=c->r[6]|c->r[6]; // 801E3EC4
  W32(c->r[1]+0x00000044u,c->r[29]); // 801E3EC8
  c->r[29]=c->r[4]|c->r[4]; // 801E3ECC
  W32(c->r[1]+0x00000040u,c->r[28]); // 801E3ED0
  c->r[28]=c->r[3]|c->r[3]; // 801E3ED4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E3ED8
  c->r[3]=R32(c->r[5]+0x00000010u); // 801E3EDC
  cmps(c,0,(int32_t)c->r[3],0); // 801E3EE0
  if (!crb(c,2)) { goto L_801E3EF0; } // 801E3EE4
  c->r[3]=0u+0x00000000u; // 801E3EE8
  goto L_801E3EF4; // 801E3EEC
L_801E3EF0:;
  c->lr=0x801E3EF4u; f_801DE400(c); // 801E3EF0
L_801E3EF4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E3EF4
  if (!crb(c,2)) { goto L_801E3F04; } // 801E3EF8
  c->r[3]=0u+0x00000000u; // 801E3EFC
  goto L_801E4008; // 801E3F00
L_801E3F04:;
  c->r[31]=R32(c->r[28]+0x00000004u); // 801E3F04
  c->r[0]=R32(c->r[31]+0x00000010u); // 801E3F08
  cmps(c,0,(int32_t)c->r[0],0); // 801E3F0C
  if (!crb(c,2)) { goto L_801E3F30; } // 801E3F10
  c->r[3]=0u+0x802D0000u; // 801E3F14
  c->r[5]=0u+0x802D0000u; // 801E3F18
  c->r[3]=c->r[3]+0xFFFFFBC8u; // 801E3F1C
  c->r[4]=0u+0x000002B3u; // 801E3F20
  c->r[5]=c->r[5]+0xFFFFFEA8u; // 801E3F24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3F28
  c->lr=0x801E3F30u; f_801F9770(c); // 801E3F2C
L_801E3F30:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 801E3F30
  c->r[5]=c->r[1]+0x00000020u; // 801E3F34
  c->r[4]=R32(c->r[29]+0x000000B0u); // 801E3F38
  c->r[3]=c->r[31]|c->r[31]; // 801E3F3C
  c->lr=0x801E3F44u; f_801DE4F0(c); // 801E3F40
  cmps(c,0,(int32_t)c->r[3],0); // 801E3F44
  if (!crb(c,2)) { goto L_801E3F54; } // 801E3F48
  c->r[3]=0u+0x00000000u; // 801E3F4C
  goto L_801E4008; // 801E3F50
L_801E3F54:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 801E3F54
  c->r[3]=c->r[31]|c->r[31]; // 801E3F58
  c->r[5]=c->r[1]+0x00000008u; // 801E3F5C
  c->lr=0x801E3F64u; f_801DE540(c); // 801E3F60
  cmps(c,0,(int32_t)c->r[3],0); // 801E3F64
  if (!crb(c,2)) { goto L_801E3F74; } // 801E3F68
  c->r[3]=0u+0x00000000u; // 801E3F6C
  goto L_801E4008; // 801E3F70
L_801E3F74:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801E3F74
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E3F78
  c->lr=0x801E3F80u; f_801E1F40(c); // 801E3F7C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3F80
  if (!crb(c,2)) { goto L_801E3F90; } // 801E3F84
  c->r[3]=0u+0x00000000u; // 801E3F88
  goto L_801E4008; // 801E3F8C
L_801E3F90:;
  c->r[4]=c->r[3]|c->r[3]; // 801E3F90
  c->r[3]=c->r[1]+0x00000010u; // 801E3F94
  c->lr=0x801E3F9Cu; f_801D1A90(c); // 801E3F98
  c->r[3]=R32(c->r[28]+0x00000004u); // 801E3F9C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E3FA0
  c->lr=0x801E3FA8u; f_801E2100(c); // 801E3FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E3FA8
  c->r[31]=c->r[3]|c->r[3]; // 801E3FAC
  if (!crb(c,2)) { goto L_801E3FC8; } // 801E3FB0
  c->r[3]=c->r[1]+0x00000010u; // 801E3FB4
  c->r[4]=0u+0xFFFFFFFFu; // 801E3FB8
  c->lr=0x801E3FC0u; f_801D1AD0(c); // 801E3FBC
  c->r[3]=0u+0x00000000u; // 801E3FC0
  goto L_801E4008; // 801E3FC4
L_801E3FC8:;
  if (!crb(c,2)) { goto L_801E3FE4; } // 801E3FC8
  c->r[5]=0u+0x802D0000u; // 801E3FCC
  c->r[3]=c->r[13]+0xFFFF9E90u; // 801E3FD0
  c->r[5]=c->r[5]+0x00000BA0u; // 801E3FD4
  c->r[4]=0u+0x00000032u; // 801E3FD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3FDC
  c->lr=0x801E3FE4u; f_801F9770(c); // 801E3FE0
L_801E3FE4:;
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3FE4
  c->r[4]=c->r[30]|c->r[30]; // 801E3FE8
  c->r[3]=c->r[1]+0x00000010u; // 801E3FEC
  c->lr=0x801E3FF4u; f_801D1B10(c); // 801E3FF0
  c->r[31]=c->r[3]|c->r[3]; // 801E3FF4
  c->r[3]=c->r[1]+0x00000010u; // 801E3FF8
  c->r[4]=0u+0xFFFFFFFFu; // 801E3FFC
  c->lr=0x801E4004u; f_801D1AD0(c); // 801E4000
  c->r[3]=c->r[31]|c->r[31]; // 801E4004
L_801E4008:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E4008
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801E400C
  c->r[30]=R32(c->r[1]+0x00000048u); // 801E4010
  c->r[29]=R32(c->r[1]+0x00000044u); // 801E4014
  c->r[28]=R32(c->r[1]+0x00000040u); // 801E4018
  c->lr=c->r[0]; // 801E401C
  c->r[1]=c->r[1]+0x00000050u; // 801E4020
  return; // 801E4024
}

// fn_801E4030
void f_801E4030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4030
  c->r[0]=c->lr; // 801E4034
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E4038
  c->r[11]=c->r[1]+0x00000040u; // 801E403C
  c->lr=0x801E4044u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4040
  c->r[11]=R32(c->r[3]+0x00000004u); // 801E4044
  c->r[24]=c->r[3]|c->r[3]; // 801E4048
  c->r[25]=c->r[4]|c->r[4]; // 801E404C
  c->r[26]=c->r[5]|c->r[5]; // 801E4050
  c->r[3]=R32(c->r[11]+0x00000010u); // 801E4054
  c->r[27]=c->r[6]|c->r[6]; // 801E4058
  c->r[28]=c->r[7]|c->r[7]; // 801E405C
  c->r[29]=c->r[8]|c->r[8]; // 801E4060
  cmps(c,0,(int32_t)c->r[3],0); // 801E4064
  c->r[30]=c->r[9]|c->r[9]; // 801E4068
  c->r[31]=c->r[10]|c->r[10]; // 801E406C
  if (!crb(c,2)) { goto L_801E407C; } // 801E4070
  c->r[3]=0u+0x00000000u; // 801E4074
  goto L_801E4080; // 801E4078
L_801E407C:;
  c->lr=0x801E4080u; f_801DE400(c); // 801E407C
L_801E4080:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E4080
  if (!crb(c,2)) { goto L_801E4090; } // 801E4084
  c->r[3]=0u+0x00000000u; // 801E4088
  goto L_801E4140; // 801E408C
L_801E4090:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 801E4090
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E4094
  cmps(c,0,(int32_t)c->r[0],0); // 801E4098
  if (!crb(c,2)) { goto L_801E40BC; } // 801E409C
  c->r[3]=0u+0x802D0000u; // 801E40A0
  c->r[5]=0u+0x802D0000u; // 801E40A4
  c->r[3]=c->r[3]+0xFFFFFBC8u; // 801E40A8
  c->r[4]=0u+0x000002B3u; // 801E40AC
  c->r[5]=c->r[5]+0xFFFFFEA8u; // 801E40B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E40B4
  c->lr=0x801E40BCu; f_801F9770(c); // 801E40B8
L_801E40BC:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 801E40BC
  c->r[4]=c->r[31]|c->r[31]; // 801E40C0
  c->lr=0x801E40C8u; f_801E2100(c); // 801E40C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E40C8
  c->r[31]=c->r[3]|c->r[3]; // 801E40CC
  if (!crb(c,2)) { goto L_801E40DC; } // 801E40D0
  c->r[3]=0u+0x00000000u; // 801E40D4
  goto L_801E4140; // 801E40D8
L_801E40DC:;
  c->r[4]=c->r[28]|c->r[28]; // 801E40DC
  c->r[3]=c->r[1]+0x00000008u; // 801E40E0
  c->lr=0x801E40E8u; f_801F01E0(c); // 801E40E4
  c->r[4]=c->r[25]|c->r[25]; // 801E40E8
  c->r[5]=c->r[29]|c->r[29]; // 801E40EC
  c->r[3]=c->r[1]+0x00000008u; // 801E40F0
  c->lr=0x801E40F8u; f_801F0390(c); // 801E40F4
  cmps(c,0,(int32_t)c->r[3],0); // 801E40F8
  if (!crb(c,2)) { goto L_801E4108; } // 801E40FC
  c->r[3]=0u+0x00000000u; // 801E4100
  goto L_801E4140; // 801E4104
L_801E4108:;
  c->r[4]=c->r[26]|c->r[26]; // 801E4108
  c->r[5]=c->r[29]|c->r[29]; // 801E410C
  c->r[6]=c->r[30]|c->r[30]; // 801E4110
  c->r[3]=c->r[1]+0x00000008u; // 801E4114
  c->lr=0x801E411Cu; f_801F0510(c); // 801E4118
  cmps(c,0,(int32_t)c->r[3],0); // 801E411C
  if (!crb(c,2)) { goto L_801E412C; } // 801E4120
  c->r[3]=0u+0x00000000u; // 801E4124
  goto L_801E4140; // 801E4128
L_801E412C:;
  c->r[4]=R32(c->r[26]+0x00000000u); // 801E412C
  c->r[5]=c->r[27]|c->r[27]; // 801E4130
  c->r[6]=c->r[31]|c->r[31]; // 801E4134
  c->r[3]=c->r[1]+0x00000008u; // 801E4138
  c->lr=0x801E4140u; f_801F06A0(c); // 801E413C
L_801E4140:;
  c->r[11]=c->r[1]+0x00000040u; // 801E4140
  c->lr=0x801E4148u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4144
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E4148
  c->lr=c->r[0]; // 801E414C
  c->r[1]=c->r[1]+0x00000040u; // 801E4150
  return; // 801E4154
}

// fn_801E4160
void f_801E4160(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 801E4160
  f_801DE320(c); return; // 801E4164
}

// fn_801E4170
void f_801E4170(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 801E4170
  f_801E22C0(c); return; // 801E4174
}

// fn_801E4180
void f_801E4180(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 801E4180
  f_801E0C00(c); return; // 801E4184
}

// fn_801E4190
void f_801E4190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4190
  c->r[0]=c->lr; // 801E4194
  cmps(c,0,(int32_t)c->r[4],0); // 801E4198
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E419C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E41A0
  c->r[31]=c->r[4]|c->r[4]; // 801E41A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E41A8
  c->r[30]=c->r[3]|c->r[3]; // 801E41AC
  if (!crb(c,2)) { goto L_801E41D0; } // 801E41B0
  c->r[3]=0u+0x802D0000u; // 801E41B4
  c->r[5]=0u+0x802D0000u; // 801E41B8
  c->r[3]=c->r[3]+0x00000C18u; // 801E41BC
  c->r[4]=0u+0x00000051u; // 801E41C0
  c->r[5]=c->r[5]+0x00000C2Cu; // 801E41C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E41C8
  c->lr=0x801E41D0u; f_801F9770(c); // 801E41CC
L_801E41D0:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 801E41D0
  c->r[3]=c->r[31]|c->r[31]; // 801E41D4
  c->lr=0x801E41DCu; f_801D46F0(c); // 801E41D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E41DC
  if (crb(c,2)) { goto L_801E41EC; } // 801E41E0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E41E4
  c->lr=0x801E41ECu; f_801D4710(c); // 801E41E8
L_801E41EC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E41EC
  W32(c->r[3]+0x00000008u,c->r[30]); // 801E41F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E41F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E41F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E41FC
  c->lr=c->r[0]; // 801E4200
  c->r[1]=c->r[1]+0x00000010u; // 801E4204
  return; // 801E4208
}

// fn_801E4210
void f_801E4210(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E4210
  cmps(c,0,(int32_t)c->r[4],0); // 801E4214
  if (crb(c,2)) { goto L_801E4248; } // 801E4218
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E421C
  cmpu(c,0,c->r[0],c->r[3]); // 801E4220
  if (!crb(c,2)) { goto L_801E4230; } // 801E4224
  c->r[0]=0u+0x00000000u; // 801E4228
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E422C
L_801E4230:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E4230
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E4234
  cmpu(c,0,c->r[0],c->r[3]); // 801E4238
  if (!crb(c,2)) { goto L_801E4248; } // 801E423C
  c->r[0]=0u+0x00000000u; // 801E4240
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E4244
L_801E4248:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E4248
  cmps(c,0,(int32_t)c->r[0],0); // 801E424C
  if (crb(c,2)) return; // 801E4250
  c->r[0]=0u+0x00000000u; // 801E4254
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E4258
  return; // 801E425C
}

// fn_801E4260
void f_801E4260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4260
  c->r[0]=c->lr; // 801E4264
  c->r[4]=0u+0x802D0000u; // 801E4268
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E426C
  c->r[4]=c->r[4]+0x00000C58u; // 801E4270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4274
  c->r[31]=c->r[3]|c->r[3]; // 801E4278
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E427C
  c->r[3]=c->r[3]+0x0000001Cu; // 801E4280
  c->lr=0x801E4288u; f_801D6EB0(c); // 801E4284
  c->r[3]=c->r[31]+0x00000004u; // 801E4288
  c->lr=0x801E4290u; f_800CCD10(c); // 801E428C
  c->r[3]=c->r[31]|c->r[31]; // 801E4290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4294
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4298
  c->lr=c->r[0]; // 801E429C
  c->r[1]=c->r[1]+0x00000010u; // 801E42A0
  return; // 801E42A4
}

// fn_801E42B0
void f_801E42B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E42B0
  c->r[0]=c->lr; // 801E42B4
  cmps(c,0,(int32_t)c->r[3],0); // 801E42B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E42BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E42C0
  c->r[31]=c->r[4]|c->r[4]; // 801E42C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E42C8
  c->r[30]=c->r[3]|c->r[3]; // 801E42CC
  if (crb(c,2)) { goto L_801E4304; } // 801E42D0
  c->r[4]=0u+0x802D0000u; // 801E42D4
  c->r[4]=c->r[4]+0x00000C58u; // 801E42D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E42DC
  c->r[3]=c->r[3]+0x0000001Cu; // 801E42E0
  c->lr=0x801E42E8u; f_801D7330(c); // 801E42E4
  c->r[3]=c->r[30]+0x0000001Cu; // 801E42E8
  c->r[4]=0u+0xFFFFFFFFu; // 801E42EC
  c->lr=0x801E42F4u; f_801D6ED0(c); // 801E42F0
  cmps(c,0,(int32_t)c->r[31],0); // 801E42F4
  if (!crb(c,1)) { goto L_801E4304; } // 801E42F8
  c->r[3]=c->r[30]|c->r[30]; // 801E42FC
  c->lr=0x801E4304u; f_800B9AD0(c); // 801E4300
L_801E4304:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4308
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E430C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4310
  c->lr=c->r[0]; // 801E4314
  c->r[1]=c->r[1]+0x00000010u; // 801E4318
  return; // 801E431C
}

// fn_801E4320
void f_801E4320(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000001Cu; // 801E4320
  f_801D7090(c); return; // 801E4324
}

// fn_801E4330
void f_801E4330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4330
  c->r[0]=c->lr; // 801E4334
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4338
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E433C
  c->r[31]=c->r[3]+0x00000004u; // 801E4340
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4344
  c->r[30]=c->r[4]|c->r[4]; // 801E4348
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E434C
  c->r[29]=c->r[3]|c->r[3]; // 801E4350
  c->r[3]=c->r[31]|c->r[31]; // 801E4354
  c->lr=0x801E435Cu; f_800CCD50(c); // 801E4358
  c->r[5]=0u+0x801E0000u; // 801E435C
  c->r[4]=c->r[30]|c->r[30]; // 801E4360
  c->r[3]=c->r[29]+0x0000001Cu; // 801E4364
  c->r[6]=0u+0x00000000u; // 801E4368
  c->r[5]=c->r[5]+0x000043A0u; // 801E436C
  c->lr=0x801E4374u; f_801D74D0(c); // 801E4370
  c->r[30]=c->r[3]|c->r[3]; // 801E4374
  c->r[3]=c->r[31]|c->r[31]; // 801E4378
  c->lr=0x801E4380u; f_800CCE30(c); // 801E437C
  c->r[3]=c->r[30]|c->r[30]; // 801E4380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4384
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4388
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E438C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4390
  c->lr=c->r[0]; // 801E4394
  c->r[1]=c->r[1]+0x00000020u; // 801E4398
  return; // 801E439C
}

// fn_801E43A0
void f_801E43A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E43A0
  c->r[0]=c->lr; // 801E43A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E43A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E43AC
  c->r[31]=c->r[5]|c->r[5]; // 801E43B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E43B4
  c->r[30]=c->r[4]|c->r[4]; // 801E43B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E43BC
  c->r[29]=c->r[3]|c->r[3]; // 801E43C0
  c->lr=0x801E43C8u; f_801D5DD0(c); // 801E43C4
  c->r[4]=c->r[29]|c->r[29]; // 801E43C8
  c->r[5]=c->r[30]|c->r[30]; // 801E43CC
  c->r[6]=c->r[31]|c->r[31]; // 801E43D0
  c->lr=0x801E43D8u; f_801D5FB0(c); // 801E43D4
  c->lr=0x801E43DCu; f_801D5DD0(c); // 801E43D8
  c->r[4]=c->r[29]|c->r[29]; // 801E43DC
  c->r[5]=c->r[30]|c->r[30]; // 801E43E0
  c->r[6]=c->r[31]|c->r[31]; // 801E43E4
  c->lr=0x801E43ECu; f_801D6100(c); // 801E43E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E43EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E43F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E43F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E43F8
  c->lr=c->r[0]; // 801E43FC
  c->r[1]=c->r[1]+0x00000020u; // 801E4400
  return; // 801E4404
}

// fn_801E4410
void f_801E4410(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9EC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4410
  c->r[4]=0u+0x80000000u; // 801E4414
  {uint32_t ea=c->r[2]+0xFFFF9EC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4418
  c->r[6]=0u+0x00000000u; // 801E441C
  c->r[7]=c->r[3]+0x00000004u; // 801E4420
  c->r[8]=c->r[3]+0x00000010u; // 801E4424
  c->r[9]=c->r[3]+0x0000001Cu; // 801E4428
  c->r[5]=0u+0x00000001u; // 801E442C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E4430
  W32(c->r[3]+0x00000000u,c->r[6]); // 801E4434
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E4438
  W32(c->r[3]+0x00000008u,c->r[7]); // 801E443C
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801E4440
  W32(c->r[3]+0x00000010u,c->r[8]); // 801E4444
  W32(c->r[3]+0x00000014u,c->r[8]); // 801E4448
  W32(c->r[3]+0x00000018u,c->r[6]); // 801E444C
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 801E4450
  W32(c->r[3]+0x00000020u,c->r[9]); // 801E4454
  W32(c->r[3]+0x00000024u,c->r[5]); // 801E4458
  W32(c->r[3]+0x00000028u,c->r[0]); // 801E445C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801E4460
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801E4464
  W32(c->r[3]+0x00000034u,c->r[5]); // 801E4468
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 801E446C
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 801E4470
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801E4474
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801E4478
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801E447C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801E4480
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 801E4484
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801E4488
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801E448C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E4490
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801E4494
  return; // 801E4498
}

// fn_801E44A0
void f_801E44A0(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 801E44A0
  c->r[0]=0u+0x00000000u; // 801E44A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E44A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E44AC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E44B0
  return; // 801E44B4
}

// fn_801E44C0
void f_801E44C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E44C0
  c->r[0]=c->lr; // 801E44C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E44C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E44CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E44D0
  c->r[31]=c->r[4]|c->r[4]; // 801E44D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E44D8
  c->r[30]=c->r[3]|c->r[3]; // 801E44DC
  if (crb(c,2)) { goto L_801E44FC; } // 801E44E0
  c->r[4]=0u+0x00000000u; // 801E44E4
  c->lr=0x801E44ECu; f_801F9DB0(c); // 801E44E8
  cmps(c,0,(int32_t)c->r[31],0); // 801E44EC
  if (!crb(c,1)) { goto L_801E44FC; } // 801E44F0
  c->r[3]=c->r[30]|c->r[30]; // 801E44F4
  c->lr=0x801E44FCu; f_800B9AD0(c); // 801E44F8
L_801E44FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E44FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4500
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4504
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4508
  c->lr=c->r[0]; // 801E450C
  c->r[1]=c->r[1]+0x00000010u; // 801E4510
  return; // 801E4514
}

// fn_801E4520
void f_801E4520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4520
  c->r[0]=c->lr; // 801E4524
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4528
  c->r[11]=c->r[1]+0x00000020u; // 801E452C
  c->lr=0x801E4534u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4530
  c->r[26]=c->r[3]|c->r[3]; // 801E4534
  c->lr=0x801E453Cu; f_801E5840(c); // 801E4538
  c->r[3]=c->r[3]+0x00000354u; // 801E453C
  c->lr=0x801E4544u; f_800CCD50(c); // 801E4540
  c->r[31]=R32(c->r[26]+0x00000004u); // 801E4544
  c->r[30]=c->r[26]+0x00000004u; // 801E4548
  c->r[28]=0u+0x802D0000u; // 801E454C
  c->r[29]=0u+0x802D0000u; // 801E4550
  goto L_801E4580; // 801E4554
L_801E4558:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801E4558
  c->r[31]=R32(c->r[31]+0x00000000u); // 801E455C
  if (!crb(c,2)) { goto L_801E4578; } // 801E4560
  c->r[3]=c->r[28]+0x00000F50u; // 801E4564
  c->r[5]=c->r[29]+0x00000F2Cu; // 801E4568
  c->r[4]=0u+0x0000023Du; // 801E456C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4570
  c->lr=0x801E4578u; f_801F9770(c); // 801E4574
L_801E4578:;
  c->r[3]=c->r[27]+0xFFFFFF08u; // 801E4578
  c->lr=0x801E4580u; f_801D33A0(c); // 801E457C
L_801E4580:;
  cmpu(c,0,c->r[31],c->r[30]); // 801E4580
  if (!crb(c,2)) { IRQCHK(c); goto L_801E4558; } // 801E4584
  c->r[3]=c->r[26]|c->r[26]; // 801E4588
  c->lr=0x801E4590u; f_801E47A0(c); // 801E458C
  c->lr=0x801E4594u; f_801E5840(c); // 801E4590
  c->r[3]=c->r[3]+0x00000354u; // 801E4594
  c->lr=0x801E459Cu; f_800CCE30(c); // 801E4598
  c->r[11]=c->r[1]+0x00000020u; // 801E459C
  c->lr=0x801E45A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E45A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E45A4
  c->lr=c->r[0]; // 801E45A8
  c->r[1]=c->r[1]+0x00000020u; // 801E45AC
  return; // 801E45B0
}

// fn_801E45C0
void f_801E45C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E45C0
  c->r[0]=c->lr; // 801E45C4
  cmpu(c,0,c->r[4],0x00000003u); // 801E45C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E45CC
  c->r[0]=0u+0x00000000u; // 801E45D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E45D4
  c->r[31]=c->r[4]|c->r[4]; // 801E45D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E45DC
  c->r[30]=c->r[3]|c->r[3]; // 801E45E0
  if (crb(c,1)) { goto L_801E45EC; } // 801E45E4
  c->r[0]=0u+0x00000001u; // 801E45E8
L_801E45EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E45EC
  if (!crb(c,2)) { goto L_801E461C; } // 801E45F0
  c->r[3]=0u+0x802D0000u; // 801E45F4
  c->r[5]=0u+0x802D0000u; // 801E45F8
  c->r[6]=c->r[31]|c->r[31]; // 801E45FC
  c->r[4]=0u+0x000000FBu; // 801E4600
  c->r[3]=c->r[3]+0x00000C68u; // 801E4604
  c->r[5]=c->r[5]+0x00000CA4u; // 801E4608
  c->r[7]=0u+0x00000000u; // 801E460C
  c->r[8]=0u+0x00000004u; // 801E4610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4614
  c->lr=0x801E461Cu; f_801F9770(c); // 801E4618
L_801E461C:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801E461C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4620
  c->r[3]=c->r[30]+c->r[0]; // 801E4624
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4628
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E462C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4630
  c->lr=c->r[0]; // 801E4634
  c->r[1]=c->r[1]+0x00000010u; // 801E4638
  return; // 801E463C
}

// fn_801E4640
void f_801E4640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4640
  c->r[0]=c->lr; // 801E4644
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4648
  c->r[11]=c->r[1]+0x00000030u; // 801E464C
  c->lr=0x801E4654u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4650
  c->r[25]=c->r[3]|c->r[3]; // 801E4654
  c->r[26]=c->r[4]|c->r[4]; // 801E4658
  c->lr=0x801E4660u; f_801E5840(c); // 801E465C
  c->r[3]=c->r[3]+0x00000354u; // 801E4660
  c->lr=0x801E4668u; f_800CCD50(c); // 801E4664
  cmps(c,0,(int32_t)c->r[26],0); // 801E4668
  if (!crb(c,2)) { goto L_801E468C; } // 801E466C
  c->r[3]=0u+0x802D0000u; // 801E4670
  c->r[5]=0u+0x802D0000u; // 801E4674
  c->r[3]=c->r[3]+0x00000EF0u; // 801E4678
  c->r[4]=0u+0x00000233u; // 801E467C
  c->r[5]=c->r[5]+0x00000ECCu; // 801E4680
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4684
  c->lr=0x801E468Cu; f_801F9770(c); // 801E4688
L_801E468C:;
  c->r[27]=c->r[26]+0x00000100u; // 801E468C
  c->r[3]=c->r[25]+0x0000000Cu; // 801E4690
  c->r[4]=c->r[27]|c->r[27]; // 801E4694
  c->lr=0x801E469Cu; f_801FA230(c); // 801E4698
  c->lr=0x801E46A0u; f_801E5840(c); // 801E469C
  c->r[3]=c->r[3]+0x00000354u; // 801E46A0
  c->lr=0x801E46A8u; f_800CCE30(c); // 801E46A4
  c->lr=0x801E46ACu; f_801E5840(c); // 801E46A8
  c->r[3]=c->r[3]+0x00000354u; // 801E46AC
  c->lr=0x801E46B4u; f_800CCD50(c); // 801E46B0
  c->r[31]=R32(c->r[25]+0x00000010u); // 801E46B4
  c->r[30]=c->r[25]+0x00000010u; // 801E46B8
  c->r[28]=0u+0x802D0000u; // 801E46BC
  c->r[29]=0u+0x802D0000u; // 801E46C0
  goto L_801E4738; // 801E46C4
L_801E46C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E46C8
  if (!crb(c,2)) { goto L_801E46E4; } // 801E46CC
  c->r[3]=c->r[28]+0x00000F80u; // 801E46D0
  c->r[5]=c->r[29]+0x00000F5Cu; // 801E46D4
  c->r[4]=0u+0x0000023Du; // 801E46D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E46DC
  c->lr=0x801E46E4u; f_801F9770(c); // 801E46E0
L_801E46E4:;
  c->r[3]=R8(c->r[31]+0xFFFFFF98u); // 801E46E4
  c->r[0]=R32(c->r[31]+0xFFFFFF50u); // 801E46E8
  c->r[3]=c->r[3]+c->r[0]; // 801E46EC
  cmps(c,0,(int32_t)c->r[3],127); // 801E46F0
  if (!crb(c,1)) { goto L_801E4700; } // 801E46F4
  c->r[4]=0u+0x0000007Fu; // 801E46F8
  goto L_801E4708; // 801E46FC
L_801E4700:;
  c->r[0]=sraw(c,c->r[3],31); // 801E4700
  c->r[4]=c->r[3]&~c->r[0]; // 801E4704
L_801E4708:;
  c->r[3]=R8(c->r[26]+0x00000098u); // 801E4708
  c->r[0]=R32(c->r[26]+0x00000050u); // 801E470C
  c->r[3]=c->r[3]+c->r[0]; // 801E4710
  cmps(c,0,(int32_t)c->r[3],127); // 801E4714
  if (!crb(c,1)) { goto L_801E4724; } // 801E4718
  c->r[0]=0u+0x0000007Fu; // 801E471C
  goto L_801E472C; // 801E4720
L_801E4724:;
  c->r[0]=sraw(c,c->r[3],31); // 801E4724
  c->r[0]=c->r[3]&~c->r[0]; // 801E4728
L_801E472C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801E472C
  if (crb(c,0)) { goto L_801E4740; } // 801E4730
  c->r[31]=R32(c->r[31]+0x00000000u); // 801E4734
L_801E4738:;
  cmpu(c,0,c->r[31],c->r[30]); // 801E4738
  if (!crb(c,2)) { IRQCHK(c); goto L_801E46C8; } // 801E473C
L_801E4740:;
  cmps(c,0,(int32_t)c->r[26],0); // 801E4740
  if (!crb(c,2)) { goto L_801E4764; } // 801E4744
  c->r[3]=0u+0x802D0000u; // 801E4748
  c->r[5]=0u+0x802D0000u; // 801E474C
  c->r[3]=c->r[3]+0x00000EF0u; // 801E4750
  c->r[4]=0u+0x00000233u; // 801E4754
  c->r[5]=c->r[5]+0x00000ECCu; // 801E4758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E475C
  c->lr=0x801E4764u; f_801F9770(c); // 801E4760
L_801E4764:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E4764
  c->r[5]=c->r[27]|c->r[27]; // 801E4768
  c->r[3]=c->r[25]+0x0000000Cu; // 801E476C
  c->r[4]=c->r[1]+0x00000008u; // 801E4770
  c->lr=0x801E4778u; f_801FA130(c); // 801E4774
  c->lr=0x801E477Cu; f_801E5840(c); // 801E4778
  c->r[3]=c->r[3]+0x00000354u; // 801E477C
  c->lr=0x801E4784u; f_800CCE30(c); // 801E4780
  c->r[11]=c->r[1]+0x00000030u; // 801E4784
  c->lr=0x801E478Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4788
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E478C
  c->lr=c->r[0]; // 801E4790
  c->r[1]=c->r[1]+0x00000030u; // 801E4794
  return; // 801E4798
}

// fn_801E47A0
void f_801E47A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E47A0
  c->r[0]=c->lr; // 801E47A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E47A8
  c->r[11]=c->r[1]+0x00000050u; // 801E47AC
  c->lr=0x801E47B4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E47B0
  c->r[24]=c->r[3]|c->r[3]; // 801E47B4
  c->lr=0x801E47BCu; f_801E5840(c); // 801E47B8
  c->r[3]=c->r[3]+0x00000354u; // 801E47BC
  c->lr=0x801E47C4u; f_800CCD50(c); // 801E47C0
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801E47C4
  cmpu(c,0,c->r[0],0x00000002u); // 801E47C8
  if (!crb(c,0)) { goto L_801E47E0; } // 801E47CC
  c->lr=0x801E47D4u; f_801E5840(c); // 801E47D0
  c->r[3]=c->r[3]+0x00000354u; // 801E47D4
  c->lr=0x801E47DCu; f_800CCE30(c); // 801E47D8
  goto L_801E4A38; // 801E47DC
L_801E47E0:;
  c->r[0]=R8(c->r[13]+0xFFFFAE68u); // 801E47E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E47E4
  if (!crb(c,2)) { goto L_801E4830; } // 801E47E8
  c->r[3]=0u+0x80380000u; // 801E47EC
  c->r[4]=0u+0x801E0000u; // 801E47F0
  c->r[5]=0u+0x801E0000u; // 801E47F4
  c->r[6]=0u+0x0000000Cu; // 801E47F8
  c->r[3]=c->r[3]+0xFFFFAEB8u; // 801E47FC
  c->r[4]=c->r[4]+0x000044A0u; // 801E4800
  c->r[5]=c->r[5]+0x000044C0u; // 801E4804
  c->r[7]=0u+0x00000080u; // 801E4808
  c->lr=0x801E4810u; f_80217288(c); // 801E480C
  c->r[4]=0u+0x801E0000u; // 801E4810
  c->r[5]=0u+0x80380000u; // 801E4814
  c->r[4]=c->r[4]+0x00004A50u; // 801E4818
  c->r[3]=0u+0x00000000u; // 801E481C
  c->r[5]=c->r[5]+0xFFFFAEA8u; // 801E4820
  c->lr=0x801E4828u; f_80216C54(c); // 801E4824
  c->r[0]=0u+0x00000001u; // 801E4828
  W8(c->r[13]+0xFFFFAE68u,c->r[0]); // 801E482C
L_801E4830:;
  c->r[20]=0u+0x80380000u; // 801E4830
  c->r[26]=0u+0x802D0000u; // 801E4834
  c->r[20]=c->r[20]+0xFFFFAEB8u; // 801E4838
  c->r[27]=0u+0x802D0000u; // 801E483C
  c->r[28]=0u+0x802D0000u; // 801E4840
  c->r[29]=0u+0x802D0000u; // 801E4844
  c->r[30]=0u+0x802D0000u; // 801E4848
  c->r[31]=0u+0x802D0000u; // 801E484C
  c->r[22]=0u+0x802D0000u; // 801E4850
  c->r[21]=0u+0x802D0000u; // 801E4854
  goto L_801E4928; // 801E4858
L_801E485C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E485C
  if (!crb(c,2)) { goto L_801E4878; } // 801E4860
  c->r[3]=c->r[26]+0x00000FE0u; // 801E4864
  c->r[5]=c->r[27]+0x00000FBCu; // 801E4868
  c->r[4]=0u+0x000001F1u; // 801E486C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4870
  c->lr=0x801E4878u; f_801F9770(c); // 801E4874
L_801E4878:;
  c->r[23]=R32(c->r[24]+0x00000010u); // 801E4878
  cmps(c,0,(int32_t)c->r[23],0); // 801E487C
  if (!crb(c,2)) { goto L_801E4898; } // 801E4880
  c->r[3]=c->r[28]+0x00000F80u; // 801E4884
  c->r[5]=c->r[29]+0x00000F5Cu; // 801E4888
  c->r[4]=0u+0x0000023Du; // 801E488C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4890
  c->lr=0x801E4898u; f_801F9770(c); // 801E4894
L_801E4898:;
  c->r[25]=addc(c,c->r[23],0xFFFFFF00u,0); cr0(c,c->r[25]); // 801E4898
  if (!crb(c,2)) { goto L_801E48B4; } // 801E489C
  c->r[3]=c->r[30]+0x00000FB0u; // 801E48A0
  c->r[5]=c->r[31]+0x00000F8Cu; // 801E48A4
  c->r[4]=0u+0x00000193u; // 801E48A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E48AC
  c->lr=0x801E48B4u; f_801F9770(c); // 801E48B0
L_801E48B4:;
  c->r[0]=R32(c->r[24]+0x00000010u); // 801E48B4
  c->r[3]=c->r[24]+0x0000000Cu; // 801E48B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E48BC
  c->r[4]=c->r[1]+0x00000014u; // 801E48C0
  c->lr=0x801E48C8u; f_801F9EE0(c); // 801E48C4
  c->r[3]=R8(c->r[25]+0x00000098u); // 801E48C8
  c->r[0]=R32(c->r[25]+0x00000050u); // 801E48CC
  c->r[3]=c->r[3]+c->r[0]; // 801E48D0
  cmps(c,0,(int32_t)c->r[3],127); // 801E48D4
  if (!crb(c,1)) { goto L_801E48E4; } // 801E48D8
  c->r[0]=0u+0x0000007Fu; // 801E48DC
  goto L_801E48EC; // 801E48E0
L_801E48E4:;
  c->r[0]=sraw(c,c->r[3],31); // 801E48E4
  c->r[0]=c->r[3]&~c->r[0]; // 801E48E8
L_801E48EC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E48EC
  cmps(c,0,(int32_t)c->r[25],0); // 801E48F0
  c->r[19]=c->r[20]+c->r[0]; // 801E48F4
  c->r[23]=c->r[19]+0x00000004u; // 801E48F8
  if (!crb(c,2)) { goto L_801E4914; } // 801E48FC
  c->r[3]=c->r[22]+0x00000EF0u; // 801E4900
  c->r[5]=c->r[21]+0x00000ECCu; // 801E4904
  c->r[4]=0u+0x00000233u; // 801E4908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E490C
  c->lr=0x801E4914u; f_801F9770(c); // 801E4910
L_801E4914:;
  W32(c->r[1]+0x00000010u,c->r[23]); // 801E4914
  c->r[3]=c->r[19]|c->r[19]; // 801E4918
  c->r[4]=c->r[1]+0x00000010u; // 801E491C
  c->r[5]=c->r[25]+0x00000100u; // 801E4920
  c->lr=0x801E4928u; f_801FA130(c); // 801E4924
L_801E4928:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801E4928
  cmps(c,0,(int32_t)c->r[0],0); // 801E492C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E485C; } // 801E4930
  c->r[20]=0u+0x80380000u; // 801E4934
  c->r[18]=0u+0x00000000u; // 801E4938
  c->r[20]=c->r[20]+0xFFFFAEB8u; // 801E493C
  c->r[21]=0u+0x802D0000u; // 801E4940
  c->r[22]=0u+0x802D0000u; // 801E4944
  c->r[31]=0u+0x802D0000u; // 801E4948
  c->r[30]=0u+0x802D0000u; // 801E494C
  c->r[29]=0u+0x802D0000u; // 801E4950
  c->r[28]=0u+0x802D0000u; // 801E4954
  c->r[27]=0u+0x802D0000u; // 801E4958
  c->r[26]=0u+0x802D0000u; // 801E495C
L_801E4960:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 801E4960
  cmps(c,0,(int32_t)c->r[0],0); // 801E4964
  if (crb(c,2)) { goto L_801E4A1C; } // 801E4968
  c->r[25]=c->r[24]+0x00000010u; // 801E496C
  goto L_801E4A10; // 801E4970
L_801E4974:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E4974
  if (!crb(c,2)) { goto L_801E4990; } // 801E4978
  c->r[3]=c->r[21]+0x00000FE0u; // 801E497C
  c->r[5]=c->r[22]+0x00000FBCu; // 801E4980
  c->r[4]=0u+0x000001F1u; // 801E4984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4988
  c->lr=0x801E4990u; f_801F9770(c); // 801E498C
L_801E4990:;
  c->r[23]=R32(c->r[20]+0x00000004u); // 801E4990
  cmps(c,0,(int32_t)c->r[23],0); // 801E4994
  if (!crb(c,2)) { goto L_801E49B0; } // 801E4998
  c->r[3]=c->r[31]+0x00000F80u; // 801E499C
  c->r[5]=c->r[30]+0x00000F5Cu; // 801E49A0
  c->r[4]=0u+0x0000023Du; // 801E49A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E49A8
  c->lr=0x801E49B0u; f_801F9770(c); // 801E49AC
L_801E49B0:;
  c->r[19]=addc(c,c->r[23],0xFFFFFF00u,0); cr0(c,c->r[19]); // 801E49B0
  if (!crb(c,2)) { goto L_801E49CC; } // 801E49B4
  c->r[3]=c->r[29]+0x00000FB0u; // 801E49B8
  c->r[5]=c->r[28]+0x00000F8Cu; // 801E49BC
  c->r[4]=0u+0x00000193u; // 801E49C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E49C4
  c->lr=0x801E49CCu; f_801F9770(c); // 801E49C8
L_801E49CC:;
  c->r[0]=R32(c->r[20]+0x00000004u); // 801E49CC
  c->r[3]=c->r[20]|c->r[20]; // 801E49D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E49D4
  c->r[4]=c->r[1]+0x0000000Cu; // 801E49D8
  c->lr=0x801E49E0u; f_801F9EE0(c); // 801E49DC
  cmps(c,0,(int32_t)c->r[19],0); // 801E49E0
  if (!crb(c,2)) { goto L_801E49FC; } // 801E49E4
  c->r[3]=c->r[27]+0x00000EF0u; // 801E49E8
  c->r[5]=c->r[26]+0x00000ECCu; // 801E49EC
  c->r[4]=0u+0x00000233u; // 801E49F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E49F4
  c->lr=0x801E49FCu; f_801F9770(c); // 801E49F8
L_801E49FC:;
  W32(c->r[1]+0x00000008u,c->r[25]); // 801E49FC
  c->r[3]=c->r[24]+0x0000000Cu; // 801E4A00
  c->r[4]=c->r[1]+0x00000008u; // 801E4A04
  c->r[5]=c->r[19]+0x00000100u; // 801E4A08
  c->lr=0x801E4A10u; f_801FA130(c); // 801E4A0C
L_801E4A10:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 801E4A10
  cmps(c,0,(int32_t)c->r[0],0); // 801E4A14
  if (!crb(c,2)) { IRQCHK(c); goto L_801E4974; } // 801E4A18
L_801E4A1C:;
  c->r[18]=c->r[18]+0x00000001u; // 801E4A1C
  c->r[20]=c->r[20]+0x0000000Cu; // 801E4A20
  cmps(c,0,(int32_t)c->r[18],128); // 801E4A24
  if (crb(c,0)) { IRQCHK(c); goto L_801E4960; } // 801E4A28
  c->lr=0x801E4A30u; f_801E5840(c); // 801E4A2C
  c->r[3]=c->r[3]+0x00000354u; // 801E4A30
  c->lr=0x801E4A38u; f_800CCE30(c); // 801E4A34
L_801E4A38:;
  c->r[11]=c->r[1]+0x00000050u; // 801E4A38
  c->lr=0x801E4A40u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4A3C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E4A40
  c->lr=c->r[0]; // 801E4A44
  c->r[1]=c->r[1]+0x00000050u; // 801E4A48
  return; // 801E4A4C
}

// fn_801E4A50
void f_801E4A50(Ctx* __restrict c) {
  c->r[3]=0u+0x80380000u; // 801E4A50
  c->r[4]=0u+0x801E0000u; // 801E4A54
  c->r[3]=c->r[3]+0xFFFFAEB8u; // 801E4A58
  c->r[5]=0u+0x0000000Cu; // 801E4A5C
  c->r[4]=c->r[4]+0x000044C0u; // 801E4A60
  c->r[6]=0u+0x00000080u; // 801E4A64
  f_80217380(c); return; // 801E4A68
}

// fn_801E4A70
void f_801E4A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4A70
  c->r[0]=c->lr; // 801E4A74
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E4A78
  c->r[11]=c->r[1]+0x00000040u; // 801E4A7C
  c->lr=0x801E4A84u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4A80
  cmps(c,0,(int32_t)c->r[4],0); // 801E4A84
  c->r[29]=c->r[3]|c->r[3]; // 801E4A88
  c->r[30]=c->r[4]|c->r[4]; // 801E4A8C
  if (!crb(c,2)) { goto L_801E4AB0; } // 801E4A90
  c->r[3]=0u+0x802D0000u; // 801E4A94
  c->r[5]=0u+0x802D0000u; // 801E4A98
  c->r[3]=c->r[3]+0x00000C68u; // 801E4A9C
  c->r[4]=0u+0x00000195u; // 801E4AA0
  c->r[5]=c->r[5]+0x00000D24u; // 801E4AA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4AA8
  c->lr=0x801E4AB0u; f_801F9770(c); // 801E4AAC
L_801E4AB0:;
  c->lr=0x801E4AB4u; f_801E5840(c); // 801E4AB0
  c->r[3]=c->r[3]+0x00000354u; // 801E4AB4
  c->lr=0x801E4ABCu; f_800CCD50(c); // 801E4AB8
  c->r[3]=R8(c->r[30]+0x00000098u); // 801E4ABC
  c->r[0]=R32(c->r[30]+0x00000050u); // 801E4AC0
  c->r[3]=c->r[3]+c->r[0]; // 801E4AC4
  cmps(c,0,(int32_t)c->r[3],127); // 801E4AC8
  if (!crb(c,1)) { goto L_801E4AD8; } // 801E4ACC
  c->r[31]=0u+0x0000007Fu; // 801E4AD0
  goto L_801E4AE0; // 801E4AD4
L_801E4AD8:;
  c->r[0]=sraw(c,c->r[3],31); // 801E4AD8
  c->r[31]=c->r[3]&~c->r[0]; // 801E4ADC
L_801E4AE0:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 801E4AE0
  cmps(c,0,(int32_t)c->r[0],0); // 801E4AE4
  if (!crb(c,2)) { goto L_801E4B00; } // 801E4AE8
  c->lr=0x801E4AF0u; f_801E5840(c); // 801E4AEC
  c->r[3]=c->r[3]+0x00000354u; // 801E4AF0
  c->lr=0x801E4AF8u; f_800CCE30(c); // 801E4AF4
  c->r[3]=0u+0x00000000u; // 801E4AF8
  goto L_801E4D2C; // 801E4AFC
L_801E4B00:;
  c->r[22]=0u+0x802D0000u; // 801E4B00
  c->r[23]=0u+0x802D0000u; // 801E4B04
  c->r[25]=0u+0x802D0000u; // 801E4B08
  c->r[28]=0u+0x802D0000u; // 801E4B0C
  c->r[27]=0u+0x802D0000u; // 801E4B10
  c->r[26]=0u+0x802D0000u; // 801E4B14
  goto L_801E4BE8; // 801E4B18
L_801E4B1C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801E4B1C
  cmps(c,0,(int32_t)c->r[0],0); // 801E4B20
  if (!crb(c,2)) { goto L_801E4B3C; } // 801E4B24
  c->r[3]=c->r[22]+0x00000FE0u; // 801E4B28
  c->r[5]=c->r[23]+0x00000FBCu; // 801E4B2C
  c->r[4]=0u+0x000001F1u; // 801E4B30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4B34
  c->lr=0x801E4B3Cu; f_801F9770(c); // 801E4B38
L_801E4B3C:;
  c->r[24]=R32(c->r[29]+0x00000010u); // 801E4B3C
  cmps(c,0,(int32_t)c->r[24],0); // 801E4B40
  if (!crb(c,2)) { goto L_801E4B5C; } // 801E4B44
  c->r[3]=c->r[25]+0x00000F80u; // 801E4B48
  c->r[5]=c->r[28]+0x00000F5Cu; // 801E4B4C
  c->r[4]=0u+0x0000023Du; // 801E4B50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4B54
  c->lr=0x801E4B5Cu; f_801F9770(c); // 801E4B58
L_801E4B5C:;
  c->r[24]=addc(c,c->r[24],0xFFFFFF00u,0); cr0(c,c->r[24]); // 801E4B5C
  if (!crb(c,2)) { goto L_801E4B78; } // 801E4B60
  c->r[3]=c->r[27]+0x00000FB0u; // 801E4B64
  c->r[5]=c->r[26]+0x00000F8Cu; // 801E4B68
  c->r[4]=0u+0x00000193u; // 801E4B6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4B70
  c->lr=0x801E4B78u; f_801F9770(c); // 801E4B74
L_801E4B78:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E4B78
  if (!crb(c,2)) { goto L_801E4B94; } // 801E4B7C
  c->lr=0x801E4B84u; f_801E5840(c); // 801E4B80
  c->r[3]=c->r[3]+0x00000354u; // 801E4B84
  c->lr=0x801E4B8Cu; f_800CCE30(c); // 801E4B88
  c->r[3]=0u+0x00000000u; // 801E4B8C
  goto L_801E4D2C; // 801E4B90
L_801E4B94:;
  c->r[3]=R8(c->r[24]+0x00000098u); // 801E4B94
  c->r[0]=R32(c->r[24]+0x00000050u); // 801E4B98
  c->r[3]=c->r[3]+c->r[0]; // 801E4B9C
  cmps(c,0,(int32_t)c->r[3],127); // 801E4BA0
  if (!crb(c,1)) { goto L_801E4BB0; } // 801E4BA4
  c->r[0]=0u+0x0000007Fu; // 801E4BA8
  goto L_801E4BB8; // 801E4BAC
L_801E4BB0:;
  c->r[0]=sraw(c,c->r[3],31); // 801E4BB0
  c->r[0]=c->r[3]&~c->r[0]; // 801E4BB4
L_801E4BB8:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801E4BB8
  if (!crb(c,0)) { goto L_801E4BD4; } // 801E4BBC
  c->lr=0x801E4BC4u; f_801E5840(c); // 801E4BC0
  c->r[3]=c->r[3]+0x00000354u; // 801E4BC4
  c->lr=0x801E4BCCu; f_800CCE30(c); // 801E4BC8
  c->r[3]=0u+0x00000000u; // 801E4BCC
  goto L_801E4D2C; // 801E4BD0
L_801E4BD4:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 801E4BD4
  c->r[3]=c->r[24]|c->r[24]; // 801E4BD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4BDC
  c->ctr=c->r[12]; // 801E4BE0
  if (true) { c->lr=0x801E4BE8u; dispatch(c,c->ctr); } // 801E4BE4
L_801E4BE8:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E4BE8
  c->r[0]=R32(c->r[29]+0x00000024u); // 801E4BEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E4BF0
  if (!crb(c,0)) { IRQCHK(c); goto L_801E4B1C; } // 801E4BF4
  cmps(c,0,(int32_t)c->r[30],0); // 801E4BF8
  c->r[26]=c->r[29]+0x00000004u; // 801E4BFC
  if (!crb(c,2)) { goto L_801E4C20; } // 801E4C00
  c->r[3]=0u+0x802D0000u; // 801E4C04
  c->r[5]=0u+0x802D0000u; // 801E4C08
  c->r[3]=c->r[3]+0x00000F20u; // 801E4C0C
  c->r[4]=0u+0x00000233u; // 801E4C10
  c->r[5]=c->r[5]+0x00000EFCu; // 801E4C14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4C18
  c->lr=0x801E4C20u; f_801F9770(c); // 801E4C1C
L_801E4C20:;
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 801E4C20
  c->r[3]=c->r[29]|c->r[29]; // 801E4C24
  c->r[4]=c->r[1]+0x0000000Cu; // 801E4C28
  c->r[5]=c->r[30]+0x000000F8u; // 801E4C2C
  c->lr=0x801E4C34u; f_801FA130(c); // 801E4C30
  c->lr=0x801E4C38u; f_801E5840(c); // 801E4C34
  c->r[3]=c->r[3]+0x00000354u; // 801E4C38
  c->lr=0x801E4C40u; f_800CCD50(c); // 801E4C3C
  c->r[31]=R32(c->r[29]+0x00000010u); // 801E4C40
  c->r[28]=c->r[29]+0x00000010u; // 801E4C44
  c->r[26]=0u+0x802D0000u; // 801E4C48
  c->r[27]=0u+0x802D0000u; // 801E4C4C
  goto L_801E4CC4; // 801E4C50
L_801E4C54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E4C54
  if (!crb(c,2)) { goto L_801E4C70; } // 801E4C58
  c->r[3]=c->r[26]+0x00000F80u; // 801E4C5C
  c->r[5]=c->r[27]+0x00000F5Cu; // 801E4C60
  c->r[4]=0u+0x0000023Du; // 801E4C64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4C68
  c->lr=0x801E4C70u; f_801F9770(c); // 801E4C6C
L_801E4C70:;
  c->r[3]=R8(c->r[31]+0xFFFFFF98u); // 801E4C70
  c->r[0]=R32(c->r[31]+0xFFFFFF50u); // 801E4C74
  c->r[3]=c->r[3]+c->r[0]; // 801E4C78
  cmps(c,0,(int32_t)c->r[3],127); // 801E4C7C
  if (!crb(c,1)) { goto L_801E4C8C; } // 801E4C80
  c->r[4]=0u+0x0000007Fu; // 801E4C84
  goto L_801E4C94; // 801E4C88
L_801E4C8C:;
  c->r[0]=sraw(c,c->r[3],31); // 801E4C8C
  c->r[4]=c->r[3]&~c->r[0]; // 801E4C90
L_801E4C94:;
  c->r[3]=R8(c->r[30]+0x00000098u); // 801E4C94
  c->r[0]=R32(c->r[30]+0x00000050u); // 801E4C98
  c->r[3]=c->r[3]+c->r[0]; // 801E4C9C
  cmps(c,0,(int32_t)c->r[3],127); // 801E4CA0
  if (!crb(c,1)) { goto L_801E4CB0; } // 801E4CA4
  c->r[0]=0u+0x0000007Fu; // 801E4CA8
  goto L_801E4CB8; // 801E4CAC
L_801E4CB0:;
  c->r[0]=sraw(c,c->r[3],31); // 801E4CB0
  c->r[0]=c->r[3]&~c->r[0]; // 801E4CB4
L_801E4CB8:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801E4CB8
  if (crb(c,0)) { goto L_801E4CCC; } // 801E4CBC
  c->r[31]=R32(c->r[31]+0x00000000u); // 801E4CC0
L_801E4CC4:;
  cmpu(c,0,c->r[31],c->r[28]); // 801E4CC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E4C54; } // 801E4CC8
L_801E4CCC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4CCC
  if (!crb(c,2)) { goto L_801E4CF0; } // 801E4CD0
  c->r[3]=0u+0x802D0000u; // 801E4CD4
  c->r[5]=0u+0x802D0000u; // 801E4CD8
  c->r[3]=c->r[3]+0x00000EF0u; // 801E4CDC
  c->r[4]=0u+0x00000233u; // 801E4CE0
  c->r[5]=c->r[5]+0x00000ECCu; // 801E4CE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4CE8
  c->lr=0x801E4CF0u; f_801F9770(c); // 801E4CEC
L_801E4CF0:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E4CF0
  c->r[3]=c->r[29]+0x0000000Cu; // 801E4CF4
  c->r[4]=c->r[1]+0x00000008u; // 801E4CF8
  c->r[5]=c->r[30]+0x00000100u; // 801E4CFC
  c->lr=0x801E4D04u; f_801FA130(c); // 801E4D00
  c->lr=0x801E4D08u; f_801E5840(c); // 801E4D04
  c->r[3]=c->r[3]+0x00000354u; // 801E4D08
  c->lr=0x801E4D10u; f_800CCE30(c); // 801E4D0C
  c->r[3]=c->r[30]|c->r[30]; // 801E4D10
  c->r[4]=c->r[29]|c->r[29]; // 801E4D14
  c->lr=0x801E4D1Cu; f_801D3FD0(c); // 801E4D18
  c->lr=0x801E4D20u; f_801E5840(c); // 801E4D1C
  c->r[3]=c->r[3]+0x00000354u; // 801E4D20
  c->lr=0x801E4D28u; f_800CCE30(c); // 801E4D24
  c->r[3]=0u+0x00000001u; // 801E4D28
L_801E4D2C:;
  c->r[11]=c->r[1]+0x00000040u; // 801E4D2C
  c->lr=0x801E4D34u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4D30
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E4D34
  c->lr=c->r[0]; // 801E4D38
  c->r[1]=c->r[1]+0x00000040u; // 801E4D3C
  return; // 801E4D40
}

// fn_801E4D50
void f_801E4D50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4D50
  c->r[0]=c->lr; // 801E4D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4D5C
  c->r[31]=c->r[4]|c->r[4]; // 801E4D60
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4D64
  c->r[30]=c->r[3]|c->r[3]; // 801E4D68
  c->lr=0x801E4D70u; f_801E5840(c); // 801E4D6C
  c->r[3]=c->r[3]+0x00000354u; // 801E4D70
  c->lr=0x801E4D78u; f_800CCD50(c); // 801E4D74
  cmps(c,0,(int32_t)c->r[31],0); // 801E4D78
  if (!crb(c,2)) { goto L_801E4D9C; } // 801E4D7C
  c->r[3]=0u+0x802D0000u; // 801E4D80
  c->r[5]=0u+0x802D0000u; // 801E4D84
  c->r[3]=c->r[3]+0x00000EF0u; // 801E4D88
  c->r[4]=0u+0x00000233u; // 801E4D8C
  c->r[5]=c->r[5]+0x00000ECCu; // 801E4D90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4D94
  c->lr=0x801E4D9Cu; f_801F9770(c); // 801E4D98
L_801E4D9C:;
  c->r[3]=c->r[30]+0x0000000Cu; // 801E4D9C
  c->r[4]=c->r[31]+0x00000100u; // 801E4DA0
  c->lr=0x801E4DA8u; f_801FA230(c); // 801E4DA4
  c->lr=0x801E4DACu; f_801E5840(c); // 801E4DA8
  c->r[3]=c->r[3]+0x00000354u; // 801E4DAC
  c->lr=0x801E4DB4u; f_800CCE30(c); // 801E4DB0
  c->lr=0x801E4DB8u; f_801E5840(c); // 801E4DB4
  c->r[3]=c->r[3]+0x00000354u; // 801E4DB8
  c->lr=0x801E4DC0u; f_800CCD50(c); // 801E4DBC
  cmps(c,0,(int32_t)c->r[31],0); // 801E4DC0
  if (!crb(c,2)) { goto L_801E4DE4; } // 801E4DC4
  c->r[3]=0u+0x802D0000u; // 801E4DC8
  c->r[5]=0u+0x802D0000u; // 801E4DCC
  c->r[3]=c->r[3]+0x00000F20u; // 801E4DD0
  c->r[4]=0u+0x00000233u; // 801E4DD4
  c->r[5]=c->r[5]+0x00000EFCu; // 801E4DD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4DDC
  c->lr=0x801E4DE4u; f_801F9770(c); // 801E4DE0
L_801E4DE4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4DE4
  c->r[4]=c->r[31]+0x000000F8u; // 801E4DE8
  c->lr=0x801E4DF0u; f_801FA230(c); // 801E4DEC
  c->r[3]=c->r[31]|c->r[31]; // 801E4DF0
  c->r[4]=c->r[30]|c->r[30]; // 801E4DF4
  c->lr=0x801E4DFCu; f_801D4060(c); // 801E4DF8
  c->lr=0x801E4E00u; f_801E5840(c); // 801E4DFC
  c->r[3]=c->r[3]+0x00000354u; // 801E4E00
  c->lr=0x801E4E08u; f_800CCE30(c); // 801E4E04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4E08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4E0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4E10
  c->lr=c->r[0]; // 801E4E14
  c->r[1]=c->r[1]+0x00000010u; // 801E4E18
  return; // 801E4E1C
}

// fn_801E4E20
void f_801E4E20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4E20
  c->r[0]=c->lr; // 801E4E24
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4E28
  c->r[11]=c->r[1]+0x00000030u; // 801E4E2C
  c->lr=0x801E4E34u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4E30
  cmps(c,0,(int32_t)c->r[4],0); // 801E4E34
  c->r[24]=0u+0x802D0000u; // 801E4E38
  c->r[23]=c->r[3]|c->r[3]; // 801E4E3C
  c->r[25]=c->r[4]|c->r[4]; // 801E4E40
  c->r[24]=c->r[24]+0x00000C68u; // 801E4E44
  if (!crb(c,0)) { goto L_801E4E60; } // 801E4E48
  c->r[3]=c->r[24]+0x00000000u; // 801E4E4C
  c->r[5]=c->r[24]+0x000000E4u; // 801E4E50
  c->r[4]=0u+0x000001C8u; // 801E4E54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4E58
  c->lr=0x801E4E60u; f_801F9770(c); // 801E4E5C
L_801E4E60:;
  c->lr=0x801E4E64u; f_801E5840(c); // 801E4E60
  c->r[3]=c->r[3]+0x00000354u; // 801E4E64
  c->lr=0x801E4E6Cu; f_800CCD50(c); // 801E4E68
  c->r[0]=R32(c->r[23]+0x00000028u); // 801E4E6C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801E4E70
  if (!crb(c,1)) { goto L_801E4E8C; } // 801E4E74
  c->r[3]=c->r[24]+0x00000000u; // 801E4E78
  c->r[5]=c->r[24]+0x00000108u; // 801E4E7C
  c->r[4]=0u+0x000001CDu; // 801E4E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4E84
  c->lr=0x801E4E8Cu; f_801F9810(c); // 801E4E88
L_801E4E8C:;
  c->r[0]=R32(c->r[23]+0x00000028u); // 801E4E8C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801E4E90
  if (!crb(c,1)) { goto L_801E4E9C; } // 801E4E94
  goto L_801E4EA4; // 801E4E98
L_801E4E9C:;
  c->r[0]=sraw(c,c->r[25],31); // 801E4E9C
  c->r[0]=c->r[25]&~c->r[0]; // 801E4EA0
L_801E4EA4:;
  W32(c->r[23]+0x00000024u,c->r[0]); // 801E4EA4
  c->r[25]=0u+0x802D0000u; // 801E4EA8
  c->r[26]=0u+0x802D0000u; // 801E4EAC
  c->r[28]=0u+0x802D0000u; // 801E4EB0
  c->r[29]=0u+0x802D0000u; // 801E4EB4
  c->r[30]=0u+0x802D0000u; // 801E4EB8
  c->r[31]=0u+0x802D0000u; // 801E4EBC
  goto L_801E4F50; // 801E4EC0
L_801E4EC4:;
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 801E4EC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E4EC8
  if (!crb(c,2)) { goto L_801E4EE4; } // 801E4ECC
  c->r[3]=c->r[25]+0x00000FE0u; // 801E4ED0
  c->r[5]=c->r[26]+0x00000FBCu; // 801E4ED4
  c->r[4]=0u+0x000001F1u; // 801E4ED8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4EDC
  c->lr=0x801E4EE4u; f_801F9770(c); // 801E4EE0
L_801E4EE4:;
  c->r[27]=R32(c->r[23]+0x00000010u); // 801E4EE4
  cmps(c,0,(int32_t)c->r[27],0); // 801E4EE8
  if (!crb(c,2)) { goto L_801E4F04; } // 801E4EEC
  c->r[3]=c->r[28]+0x00000F80u; // 801E4EF0
  c->r[5]=c->r[29]+0x00000F5Cu; // 801E4EF4
  c->r[4]=0u+0x0000023Du; // 801E4EF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4EFC
  c->lr=0x801E4F04u; f_801F9770(c); // 801E4F00
L_801E4F04:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF00u,0); cr0(c,c->r[27]); // 801E4F04
  if (!crb(c,2)) { goto L_801E4F20; } // 801E4F08
  c->r[3]=c->r[30]+0x00000FB0u; // 801E4F0C
  c->r[5]=c->r[31]+0x00000F8Cu; // 801E4F10
  c->r[4]=0u+0x00000193u; // 801E4F14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4F18
  c->lr=0x801E4F20u; f_801F9770(c); // 801E4F1C
L_801E4F20:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E4F20
  if (!crb(c,2)) { goto L_801E4F3C; } // 801E4F24
  c->r[3]=c->r[24]+0x00000000u; // 801E4F28
  c->r[5]=c->r[24]+0x0000012Cu; // 801E4F2C
  c->r[4]=0u+0x000001D6u; // 801E4F30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4F34
  c->lr=0x801E4F3Cu; f_801F9770(c); // 801E4F38
L_801E4F3C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801E4F3C
  c->r[3]=c->r[27]|c->r[27]; // 801E4F40
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4F44
  c->ctr=c->r[12]; // 801E4F48
  if (true) { c->lr=0x801E4F50u; dispatch(c,c->ctr); } // 801E4F4C
L_801E4F50:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 801E4F50
  c->r[0]=R32(c->r[23]+0x00000024u); // 801E4F54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E4F58
  if (crb(c,1)) { IRQCHK(c); goto L_801E4EC4; } // 801E4F5C
  c->lr=0x801E4F64u; f_801E5840(c); // 801E4F60
  c->r[3]=c->r[3]+0x00000354u; // 801E4F64
  c->lr=0x801E4F6Cu; f_800CCE30(c); // 801E4F68
  c->r[11]=c->r[1]+0x00000030u; // 801E4F6C
  c->lr=0x801E4F74u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4F70
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E4F74
  c->lr=c->r[0]; // 801E4F78
  c->r[1]=c->r[1]+0x00000030u; // 801E4F7C
  return; // 801E4F80
}

// fn_801E4F90
void f_801E4F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4F90
  c->r[0]=c->lr; // 801E4F94
  cmps(c,0,(int32_t)c->r[4],0); // 801E4F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4FA0
  c->r[31]=c->r[4]|c->r[4]; // 801E4FA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4FA8
  c->r[30]=c->r[3]|c->r[3]; // 801E4FAC
  if (!crb(c,0)) { goto L_801E4FD0; } // 801E4FB0
  c->r[3]=0u+0x802D0000u; // 801E4FB4
  c->r[5]=0u+0x802D0000u; // 801E4FB8
  c->r[3]=c->r[3]+0x00000C68u; // 801E4FBC
  c->r[4]=0u+0x000001E6u; // 801E4FC0
  c->r[5]=c->r[5]+0x00000DC0u; // 801E4FC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4FC8
  c->lr=0x801E4FD0u; f_801F9770(c); // 801E4FCC
L_801E4FD0:;
  W32(c->r[30]+0x00000028u,c->r[31]); // 801E4FD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4FD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4FD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4FDC
  c->lr=c->r[0]; // 801E4FE0
  c->r[1]=c->r[1]+0x00000010u; // 801E4FE4
  return; // 801E4FE8
}

// fn_801E4FF0
void f_801E4FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4FF0
  c->r[0]=c->lr; // 801E4FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4FFC
  c->r[31]=c->r[3]|c->r[3]; // 801E5000
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5004
  c->r[30]=c->r[4]|c->r[4]; // 801E5008
  c->lr=0x801E5010u; f_801E5840(c); // 801E500C
  c->r[3]=c->r[3]+0x00000354u; // 801E5010
  c->lr=0x801E5018u; f_800CCD50(c); // 801E5014
  c->r[3]=R32(c->r[31]+0x00000024u); // 801E5018
  cmps(c,0,(int32_t)c->r[3],0); // 801E501C
  if (!crb(c,2)) { goto L_801E5038; } // 801E5020
  c->lr=0x801E5028u; f_801E5840(c); // 801E5024
  c->r[3]=c->r[3]+0x00000354u; // 801E5028
  c->lr=0x801E5030u; f_800CCE30(c); // 801E502C
  c->r[3]=0u+0x00000000u; // 801E5030
  goto L_801E5124; // 801E5034
L_801E5038:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E5038
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801E503C
  if (crb(c,0)) { goto L_801E5114; } // 801E5040
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E5044
  cmps(c,0,(int32_t)c->r[0],0); // 801E5048
  if (!crb(c,2)) { goto L_801E506C; } // 801E504C
  c->r[3]=0u+0x802D0000u; // 801E5050
  c->r[5]=0u+0x802D0000u; // 801E5054
  c->r[3]=c->r[3]+0x00000FE0u; // 801E5058
  c->r[4]=0u+0x000001F1u; // 801E505C
  c->r[5]=c->r[5]+0x00000FBCu; // 801E5060
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5064
  c->lr=0x801E506Cu; f_801F9770(c); // 801E5068
L_801E506C:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 801E506C
  cmps(c,0,(int32_t)c->r[31],0); // 801E5070
  if (!crb(c,2)) { goto L_801E5094; } // 801E5074
  c->r[3]=0u+0x802D0000u; // 801E5078
  c->r[5]=0u+0x802D0000u; // 801E507C
  c->r[3]=c->r[3]+0x00000F80u; // 801E5080
  c->r[4]=0u+0x0000023Du; // 801E5084
  c->r[5]=c->r[5]+0x00000F5Cu; // 801E5088
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E508C
  c->lr=0x801E5094u; f_801F9770(c); // 801E5090
L_801E5094:;
  c->r[31]=addc(c,c->r[31],0xFFFFFF00u,0); cr0(c,c->r[31]); // 801E5094
  if (!crb(c,2)) { goto L_801E50B8; } // 801E5098
  c->r[3]=0u+0x802D0000u; // 801E509C
  c->r[5]=0u+0x802D0000u; // 801E50A0
  c->r[3]=c->r[3]+0x00000FB0u; // 801E50A4
  c->r[4]=0u+0x00000193u; // 801E50A8
  c->r[5]=c->r[5]+0x00000F8Cu; // 801E50AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E50B0
  c->lr=0x801E50B8u; f_801F9770(c); // 801E50B4
L_801E50B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E50B8
  if (!crb(c,2)) { goto L_801E50D4; } // 801E50BC
  c->lr=0x801E50C4u; f_801E5840(c); // 801E50C0
  c->r[3]=c->r[3]+0x00000354u; // 801E50C4
  c->lr=0x801E50CCu; f_800CCE30(c); // 801E50C8
  c->r[3]=0u+0x00000000u; // 801E50CC
  goto L_801E5124; // 801E50D0
L_801E50D4:;
  c->r[3]=R8(c->r[31]+0x00000098u); // 801E50D4
  c->r[0]=R32(c->r[31]+0x00000050u); // 801E50D8
  c->r[3]=c->r[3]+c->r[0]; // 801E50DC
  cmps(c,0,(int32_t)c->r[3],127); // 801E50E0
  if (!crb(c,1)) { goto L_801E50F0; } // 801E50E4
  c->r[0]=0u+0x0000007Fu; // 801E50E8
  goto L_801E50F8; // 801E50EC
L_801E50F0:;
  c->r[0]=sraw(c,c->r[3],31); // 801E50F0
  c->r[0]=c->r[3]&~c->r[0]; // 801E50F4
L_801E50F8:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801E50F8
  if (!crb(c,0)) { goto L_801E5114; } // 801E50FC
  c->lr=0x801E5104u; f_801E5840(c); // 801E5100
  c->r[3]=c->r[3]+0x00000354u; // 801E5104
  c->lr=0x801E510Cu; f_800CCE30(c); // 801E5108
  c->r[3]=0u+0x00000000u; // 801E510C
  goto L_801E5124; // 801E5110
L_801E5114:;
  c->lr=0x801E5118u; f_801E5840(c); // 801E5114
  c->r[3]=c->r[3]+0x00000354u; // 801E5118
  c->lr=0x801E5120u; f_800CCE30(c); // 801E511C
  c->r[3]=0u+0x00000001u; // 801E5120
L_801E5124:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5128
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E512C
  c->lr=c->r[0]; // 801E5130
  c->r[1]=c->r[1]+0x00000010u; // 801E5134
  return; // 801E5138
}

// fn_801E5140
void f_801E5140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5140
  c->r[0]=c->lr; // 801E5144
  cmps(c,0,(int32_t)c->r[4],0); // 801E5148
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E514C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5150
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5154
  c->r[30]=c->r[4]|c->r[4]; // 801E5158
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E515C
  c->r[29]=c->r[3]|c->r[3]; // 801E5160
  if (!crb(c,2)) { goto L_801E5184; } // 801E5164
  c->r[3]=0u+0x802D0000u; // 801E5168
  c->r[5]=0u+0x802D0000u; // 801E516C
  c->r[3]=c->r[3]+0x00000C68u; // 801E5170
  c->r[4]=0u+0x0000020Fu; // 801E5174
  c->r[5]=c->r[5]+0x00000DE4u; // 801E5178
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E517C
  c->lr=0x801E5184u; f_801F9770(c); // 801E5180
L_801E5184:;
  c->lr=0x801E5188u; f_801E5840(c); // 801E5184
  c->r[3]=c->r[3]+0x00000354u; // 801E5188
  c->lr=0x801E5190u; f_800CCD50(c); // 801E518C
  cmps(c,0,(int32_t)c->r[30],0); // 801E5190
  W32(c->r[30]+0x00000008u,c->r[29]); // 801E5194
  c->r[31]=c->r[29]+0x0000001Cu; // 801E5198
  if (!crb(c,2)) { goto L_801E51BC; } // 801E519C
  c->r[3]=0u+0x802D0000u; // 801E51A0
  c->r[5]=0u+0x802D0000u; // 801E51A4
  c->r[3]=c->r[3]+0x00000EC0u; // 801E51A8
  c->r[4]=0u+0x00000233u; // 801E51AC
  c->r[5]=c->r[5]+0x00000E9Cu; // 801E51B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E51B4
  c->lr=0x801E51BCu; f_801F9770(c); // 801E51B8
L_801E51BC:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E51BC
  c->r[3]=c->r[29]+0x00000018u; // 801E51C0
  c->r[4]=c->r[1]+0x00000008u; // 801E51C4
  c->r[5]=c->r[30]+0x00000018u; // 801E51C8
  c->lr=0x801E51D0u; f_801FA130(c); // 801E51CC
  c->lr=0x801E51D4u; f_801E5840(c); // 801E51D0
  c->r[3]=c->r[3]+0x00000354u; // 801E51D4
  c->lr=0x801E51DCu; f_800CCE30(c); // 801E51D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E51DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E51E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E51E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E51E8
  c->lr=c->r[0]; // 801E51EC
  c->r[1]=c->r[1]+0x00000020u; // 801E51F0
  return; // 801E51F4
}

// fn_801E5200
void f_801E5200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5200
  c->r[0]=c->lr; // 801E5204
  cmps(c,0,(int32_t)c->r[4],0); // 801E5208
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E520C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5210
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5214
  c->r[30]=c->r[4]|c->r[4]; // 801E5218
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E521C
  c->r[29]=c->r[3]|c->r[3]; // 801E5220
  if (!crb(c,2)) { goto L_801E5244; } // 801E5224
  c->r[3]=0u+0x802D0000u; // 801E5228
  c->r[5]=0u+0x802D0000u; // 801E522C
  c->r[3]=c->r[3]+0x00000C68u; // 801E5230
  c->r[4]=0u+0x00000230u; // 801E5234
  c->r[5]=c->r[5]+0x00000D24u; // 801E5238
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E523C
  c->lr=0x801E5244u; f_801F9770(c); // 801E5240
L_801E5244:;
  c->lr=0x801E5248u; f_801E5840(c); // 801E5244
  c->r[3]=c->r[3]+0x00000354u; // 801E5248
  c->lr=0x801E5250u; f_800CCD50(c); // 801E524C
  c->r[0]=R32(c->r[29]+0x00000018u); // 801E5250
  cmps(c,0,(int32_t)c->r[0],0); // 801E5254
  if (!crb(c,2)) { goto L_801E5270; } // 801E5258
  c->lr=0x801E5260u; f_801E5840(c); // 801E525C
  c->r[3]=c->r[3]+0x00000354u; // 801E5260
  c->lr=0x801E5268u; f_800CCE30(c); // 801E5264
  c->r[3]=0u+0x00000000u; // 801E5268
  goto L_801E5320; // 801E526C
L_801E5270:;
  if (!crb(c,2)) { goto L_801E5290; } // 801E5270
  c->r[3]=0u+0x802D0000u; // 801E5274
  c->r[5]=0u+0x802D0000u; // 801E5278
  c->r[3]=c->r[3]+0x00000E90u; // 801E527C
  c->r[4]=0u+0x000001F1u; // 801E5280
  c->r[5]=c->r[5]+0x00000E6Cu; // 801E5284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5288
  c->lr=0x801E5290u; f_801F9770(c); // 801E528C
L_801E5290:;
  c->r[31]=R32(c->r[29]+0x0000001Cu); // 801E5290
  cmps(c,0,(int32_t)c->r[31],0); // 801E5294
  if (!crb(c,2)) { goto L_801E52B8; } // 801E5298
  c->r[3]=0u+0x802D0000u; // 801E529C
  c->r[5]=0u+0x802D0000u; // 801E52A0
  c->r[3]=c->r[3]+0x00000E30u; // 801E52A4
  c->r[4]=0u+0x0000023Du; // 801E52A8
  c->r[5]=c->r[5]+0x00000E0Cu; // 801E52AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E52B0
  c->lr=0x801E52B8u; f_801F9770(c); // 801E52B4
L_801E52B8:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE8u,0); cr0(c,c->r[31]); // 801E52B8
  if (!crb(c,2)) { goto L_801E52DC; } // 801E52BC
  c->r[3]=0u+0x802D0000u; // 801E52C0
  c->r[5]=0u+0x802D0000u; // 801E52C4
  c->r[3]=c->r[3]+0x00000E60u; // 801E52C8
  c->r[4]=0u+0x00000193u; // 801E52CC
  c->r[5]=c->r[5]+0x00000E3Cu; // 801E52D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E52D4
  c->lr=0x801E52DCu; f_801F9770(c); // 801E52D8
L_801E52DC:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801E52DC
  c->r[3]=c->r[29]+0x00000018u; // 801E52E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E52E4
  c->r[4]=c->r[1]+0x00000008u; // 801E52E8
  c->lr=0x801E52F0u; f_801F9EE0(c); // 801E52EC
  c->r[3]=c->r[31]|c->r[31]; // 801E52F0
  c->r[4]=c->r[30]|c->r[30]; // 801E52F4
  c->lr=0x801E52FCu; f_801D96F0(c); // 801E52F8
  c->r[3]=c->r[30]|c->r[30]; // 801E52FC
  c->r[4]=c->r[31]|c->r[31]; // 801E5300
  c->lr=0x801E5308u; f_801D3EB0(c); // 801E5304
  c->r[3]=c->r[31]|c->r[31]; // 801E5308
  c->lr=0x801E5310u; f_801D9600(c); // 801E530C
  c->lr=0x801E5314u; f_801E5840(c); // 801E5310
  c->r[3]=c->r[3]+0x00000354u; // 801E5314
  c->lr=0x801E531Cu; f_800CCE30(c); // 801E5318
  c->r[3]=c->r[31]|c->r[31]; // 801E531C
L_801E5320:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5320
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5324
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5328
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E532C
  c->lr=c->r[0]; // 801E5330
  c->r[1]=c->r[1]+0x00000020u; // 801E5334
  return; // 801E5338
}

// fn_801E5340
void f_801E5340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5340
  c->r[0]=c->lr; // 801E5344
  cmps(c,0,(int32_t)c->r[4],0); // 801E5348
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E534C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5350
  c->r[31]=c->r[4]|c->r[4]; // 801E5354
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5358
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E535C
  c->r[29]=c->r[3]|c->r[3]; // 801E5360
  if (!crb(c,2)) { goto L_801E5384; } // 801E5364
  c->r[3]=0u+0x802D0000u; // 801E5368
  c->r[5]=0u+0x802D0000u; // 801E536C
  c->r[3]=c->r[3]+0x00000C68u; // 801E5370
  c->r[4]=0u+0x0000024Eu; // 801E5374
  c->r[5]=c->r[5]+0x00000D24u; // 801E5378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E537C
  c->lr=0x801E5384u; f_801F9770(c); // 801E5380
L_801E5384:;
  c->lr=0x801E5388u; f_801E5840(c); // 801E5384
  c->r[3]=c->r[3]+0x00000354u; // 801E5388
  c->lr=0x801E5390u; f_800CCD50(c); // 801E538C
  c->r[30]=R32(c->r[31]+0x00000004u); // 801E5390
  cmps(c,0,(int32_t)c->r[30],0); // 801E5394
  if (!crb(c,2)) { goto L_801E53AC; } // 801E5398
  c->lr=0x801E53A0u; f_801E5840(c); // 801E539C
  c->r[3]=c->r[3]+0x00000354u; // 801E53A0
  c->lr=0x801E53A8u; f_800CCE30(c); // 801E53A4
  goto L_801E540C; // 801E53A8
L_801E53AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E53AC
  c->r[4]=c->r[31]|c->r[31]; // 801E53B0
  c->lr=0x801E53B8u; f_801D9780(c); // 801E53B4
  c->r[3]=c->r[31]|c->r[31]; // 801E53B8
  c->r[4]=c->r[30]|c->r[30]; // 801E53BC
  c->lr=0x801E53C4u; f_801D3F40(c); // 801E53C0
  cmps(c,0,(int32_t)c->r[30],0); // 801E53C4
  c->r[31]=c->r[29]+0x0000001Cu; // 801E53C8
  if (!crb(c,2)) { goto L_801E53EC; } // 801E53CC
  c->r[3]=0u+0x802D0000u; // 801E53D0
  c->r[5]=0u+0x802D0000u; // 801E53D4
  c->r[3]=c->r[3]+0x00000EC0u; // 801E53D8
  c->r[4]=0u+0x00000233u; // 801E53DC
  c->r[5]=c->r[5]+0x00000E9Cu; // 801E53E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E53E4
  c->lr=0x801E53ECu; f_801F9770(c); // 801E53E8
L_801E53EC:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E53EC
  c->r[3]=c->r[29]+0x00000018u; // 801E53F0
  c->r[4]=c->r[1]+0x00000008u; // 801E53F4
  c->r[5]=c->r[30]+0x00000018u; // 801E53F8
  c->lr=0x801E5400u; f_801FA130(c); // 801E53FC
  c->lr=0x801E5404u; f_801E5840(c); // 801E5400
  c->r[3]=c->r[3]+0x00000354u; // 801E5404
  c->lr=0x801E540Cu; f_800CCE30(c); // 801E5408
L_801E540C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E540C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5410
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5414
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5418
  c->lr=c->r[0]; // 801E541C
  c->r[1]=c->r[1]+0x00000020u; // 801E5420
  return; // 801E5424
}

// detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo
void f_801E5430(Ctx* __restrict c) {
  trace_call(0x801E5430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5430
  c->r[0]=c->lr; // 801E5434
  c->r[7]=c->r[6]|c->r[6]; // 801E5438
  c->r[6]=0u+0x00000000u; // 801E543C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5444
  c->r[31]=c->r[4]|c->r[4]; // 801E5448
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E544C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E5450
  c->ctr=c->r[12]; // 801E5454
  if (true) { c->lr=0x801E545Cu; dispatch(c,c->ctr); } // 801E5458
  cmps(c,0,(int32_t)c->r[3],0); // 801E545C
  if (crb(c,2)) { goto L_801E5468; } // 801E5460
  goto L_801E547C; // 801E5464
L_801E5468:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E5468
  cmps(c,0,(int32_t)c->r[3],0); // 801E546C
  if (crb(c,2)) { goto L_801E5478; } // 801E5470
  c->lr=0x801E5478u; f_801D2EC0(c); // 801E5474
L_801E5478:;
  c->r[3]=0u+0x00000000u; // 801E5478
L_801E547C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E547C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5480
  c->lr=c->r[0]; // 801E5484
  c->r[1]=c->r[1]+0x00000010u; // 801E5488
  return; // 801E548C
}

// fn_801E5490
void f_801E5490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5490
  c->r[0]=c->lr; // 801E5494
  c->r[5]=0u+0x00010000u; // 801E5498
  c->r[6]=0u+0x80380000u; // 801E549C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E54A0
  c->r[0]=0u+0x00004000u; // 801E54A4
  c->r[5]=c->r[5]+0x000055E0u; // 801E54A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E54AC
  c->r[3]=c->r[1]+0x00000008u; // 801E54B0
  W32(c->r[1]+0x00000010u,c->r[4]); // 801E54B4
  c->r[4]=c->r[6]+0xFFFFB800u; // 801E54B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E54BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E54C0
  c->lr=0x801E54C8u; f_801E54E0(c); // 801E54C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E54C8
  c->lr=c->r[0]; // 801E54CC
  c->r[1]=c->r[1]+0x00000020u; // 801E54D0
  return; // 801E54D4
}

// fn_801E54E0
void f_801E54E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E54E0
  c->r[0]=c->lr; // 801E54E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E54E8
  c->r[11]=c->r[1]+0x00000030u; // 801E54EC
  c->lr=0x801E54F4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E54F0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E54F4
  c->r[31]=0u+0x802D0000u; // 801E54F8
  c->r[28]=c->r[3]|c->r[3]; // 801E54FC
  c->r[29]=c->r[4]|c->r[4]; // 801E5500
  c->r[30]=c->r[5]|c->r[5]; // 801E5504
  c->r[31]=c->r[31]+0x00000FF0u; // 801E5508
  if (crb(c,2)) { goto L_801E5528; } // 801E550C
  c->r[6]=c->r[29]|c->r[29]; // 801E5510
  c->r[3]=c->r[31]+0x00000048u; // 801E5514
  c->r[5]=c->r[31]+0x000000D0u; // 801E5518
  c->r[4]=0u+0x00000090u; // 801E551C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5520
  c->lr=0x801E5528u; f_801F9770(c); // 801E5524
L_801E5528:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801E5528
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 801E552C
  if (crb(c,2)) { goto L_801E5548; } // 801E5530
  c->r[3]=c->r[31]+0x00000048u; // 801E5534
  c->r[5]=c->r[31]+0x0000005Cu; // 801E5538
  c->r[4]=0u+0x0000006Au; // 801E553C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5540
  c->lr=0x801E5548u; f_801F9770(c); // 801E5544
L_801E5548:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E5548
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 801E554C
  if (crb(c,2)) { goto L_801E5568; } // 801E5550
  c->r[3]=c->r[31]+0x00000048u; // 801E5554
  c->r[5]=c->r[31]+0x00000098u; // 801E5558
  c->r[4]=0u+0x0000006Bu; // 801E555C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5560
  c->lr=0x801E5568u; f_801F9770(c); // 801E5564
L_801E5568:;
  c->lr=0x801E556Cu; f_800EF800(c); // 801E5568
  c->r[25]=c->r[3]|c->r[3]; // 801E556C
  c->lr=0x801E5574u; f_801EE4D0(c); // 801E5570
  c->r[4]=c->r[25]|c->r[25]; // 801E5574
  c->lr=0x801E557Cu; f_801EE5C0(c); // 801E5578
  c->r[27]=c->r[3]|c->r[3]; // 801E557C
  c->lr=0x801E5584u; f_801D0E80(c); // 801E5580
  c->r[4]=c->r[25]|c->r[25]; // 801E5584
  c->lr=0x801E558Cu; f_801D0FA0(c); // 801E5588
  c->r[4]=R32(c->r[28]+0x00000004u); // 801E558C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E5590
  c->r[26]=c->r[3]+c->r[4]; // 801E5594
  c->r[27]=c->r[27]+c->r[0]; // 801E5598
  c->lr=0x801E55A0u; f_801D4C00(c); // 801E559C
  c->r[4]=c->r[25]|c->r[25]; // 801E55A0
  c->lr=0x801E55A8u; f_801D4CE0(c); // 801E55A4
  c->r[0]=c->r[26]+c->r[27]; // 801E55A8
  c->r[0]=c->r[3]+c->r[0]; // 801E55AC
  cmpu(c,0,c->r[30],c->r[0]); // 801E55B0
  if (!crb(c,0)) { goto L_801E55CC; } // 801E55B4
  c->r[3]=c->r[31]+0x00000048u; // 801E55B8
  c->r[5]=c->r[31]+0x0000011Cu; // 801E55BC
  c->r[4]=0u+0x00000091u; // 801E55C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E55C4
  c->lr=0x801E55CCu; f_801F9770(c); // 801E55C8
L_801E55CC:;
  c->r[0]=R8(c->r[13]+0xFFFFAE70u); // 801E55CC
  cmps(c,0,(int32_t)c->r[0],0); // 801E55D0
  if (!crb(c,2)) { goto L_801E57C0; } // 801E55D4
  c->r[0]=0u+0x00000001u; // 801E55D8
  W8(c->r[13]+0xFFFFAE70u,c->r[0]); // 801E55DC
  c->r[3]=R32(c->r[13]+0xFFFF9E98u); // 801E55E0
  c->lr=0x801E55E8u; f_800C65B0(c); // 801E55E4
  c->lr=0x801E55ECu; f_801CD130(c); // 801E55E8
  c->lr=0x801E55F0u; f_801CD220(c); // 801E55EC
  c->lr=0x801E55F4u; f_800F5DB0(c); // 801E55F0
L_801E55F4:;
  c->lr=0x801E55F8u; f_800F5E50(c); // 801E55F4
  cmpu(c,0,c->r[3],0x00000001u); // 801E55F8
  if (crb(c,2)) { IRQCHK(c); goto L_801E55F4; } // 801E55FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E5600
  if (crb(c,2)) { goto L_801E561C; } // 801E5604
  c->r[3]=c->r[31]+0x00000048u; // 801E5608
  c->r[5]=c->r[31]+0x00000160u; // 801E560C
  c->r[4]=0u+0x000000ABu; // 801E5610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5614
  c->lr=0x801E561Cu; f_801F9770(c); // 801E5618
L_801E561C:;
  c->lr=0x801E5620u; f_800F7900(c); // 801E561C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E5620
  if (crb(c,2)) { goto L_801E563C; } // 801E5624
  cmps(c,0,(int32_t)c->r[0],1); // 801E5628
  if (crb(c,2)) { goto L_801E564C; } // 801E562C
  cmps(c,0,(int32_t)c->r[0],2); // 801E5630
  if (crb(c,2)) { goto L_801E565C; } // 801E5634
  goto L_801E566C; // 801E5638
L_801E563C:;
  c->lr=0x801E5640u; f_801CD130(c); // 801E563C
  c->r[4]=0u+0x00000003u; // 801E5640
  c->lr=0x801E5648u; f_801CD930(c); // 801E5644
  goto L_801E5678; // 801E5648
L_801E564C:;
  c->lr=0x801E5650u; f_801CD130(c); // 801E564C
  c->r[4]=0u+0x00000000u; // 801E5650
  c->lr=0x801E5658u; f_801CD930(c); // 801E5654
  goto L_801E5678; // 801E5658
L_801E565C:;
  c->lr=0x801E5660u; f_801CD130(c); // 801E565C
  c->r[4]=0u+0x00000002u; // 801E5660
  c->lr=0x801E5668u; f_801CD930(c); // 801E5664
  goto L_801E5678; // 801E5668
L_801E566C:;
  c->lr=0x801E5670u; f_801CD130(c); // 801E566C
  c->r[4]=0u+0x00000000u; // 801E5670
  c->lr=0x801E5678u; f_801CD930(c); // 801E5674
L_801E5678:;
  c->lr=0x801E567Cu; f_801DA140(c); // 801E5678
  c->lr=0x801E5680u; f_801DA260(c); // 801E567C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801E5680
  c->r[0]=R32(c->r[28]+0x00000004u); // 801E5684
  c->r[25]=c->r[29]+c->r[3]; // 801E5688
  c->r[26]=c->r[25]|c->r[25]; // 801E568C
  c->r[25]=c->r[25]+c->r[0]; // 801E5690
  c->lr=0x801E5698u; f_800EF800(c); // 801E5694
  W32(c->r[13]+0xFFFFAE74u,c->r[3]); // 801E5698
  c->r[24]=c->r[25]|c->r[25]; // 801E569C
  c->lr=0x801E56A4u; f_801D0E80(c); // 801E56A0
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 801E56A4
  c->lr=0x801E56ACu; f_801D0FA0(c); // 801E56A8
  c->r[25]=c->r[25]+c->r[3]; // 801E56AC
  c->lr=0x801E56B4u; f_801D0E80(c); // 801E56B0
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 801E56B4
  c->lr=0x801E56BCu; f_801D0FA0(c); // 801E56B8
  c->r[27]=c->r[3]|c->r[3]; // 801E56BC
  c->lr=0x801E56C4u; f_801D0E80(c); // 801E56C0
  c->r[4]=c->r[24]|c->r[24]; // 801E56C4
  c->r[5]=c->r[27]|c->r[27]; // 801E56C8
  c->lr=0x801E56D0u; f_801D0FB0(c); // 801E56CC
  c->r[24]=c->r[25]|c->r[25]; // 801E56D0
  c->lr=0x801E56D8u; f_801EE4D0(c); // 801E56D4
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 801E56D8
  c->lr=0x801E56E0u; f_801EE5C0(c); // 801E56DC
  c->r[25]=c->r[25]+c->r[3]; // 801E56E0
  c->lr=0x801E56E8u; f_801EE4D0(c); // 801E56E4
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 801E56E8
  c->lr=0x801E56F0u; f_801EE5C0(c); // 801E56EC
  c->r[27]=c->r[3]|c->r[3]; // 801E56F0
  c->lr=0x801E56F8u; f_801EE4D0(c); // 801E56F4
  c->r[4]=c->r[24]|c->r[24]; // 801E56F8
  c->r[5]=c->r[27]|c->r[27]; // 801E56FC
  c->lr=0x801E5704u; f_801EE5D0(c); // 801E5700
  c->r[24]=c->r[25]|c->r[25]; // 801E5704
  c->lr=0x801E570Cu; f_801D4C00(c); // 801E5708
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 801E570C
  c->lr=0x801E5714u; f_801D4CE0(c); // 801E5710
  c->r[25]=c->r[25]+c->r[3]; // 801E5714
  c->lr=0x801E571Cu; f_801D4C00(c); // 801E5718
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 801E571C
  c->lr=0x801E5724u; f_801D4CE0(c); // 801E5720
  c->r[27]=c->r[3]|c->r[3]; // 801E5724
  c->lr=0x801E572Cu; f_801D4C00(c); // 801E5728
  c->r[4]=c->r[24]|c->r[24]; // 801E572C
  c->r[5]=c->r[27]|c->r[27]; // 801E5730
  c->lr=0x801E5738u; f_801D4CF0(c); // 801E5734
  c->lr=0x801E573Cu; f_801DA700(c); // 801E5738
  c->r[3]=0u+0x80380000u; // 801E573C
  c->r[4]=R32(c->r[28]+0x00000008u); // 801E5740
  c->r[6]=R32(c->r[28]+0x0000000Cu); // 801E5744
  c->r[5]=c->r[29]|c->r[29]; // 801E5748
  c->r[3]=c->r[3]+0xFFFFB4D0u; // 801E574C
  c->lr=0x801E5754u; f_801EB590(c); // 801E5750
  cmps(c,0,(int32_t)c->r[3],0); // 801E5754
  if (!crb(c,2)) { goto L_801E5770; } // 801E5758
  c->r[3]=c->r[31]+0x00000048u; // 801E575C
  c->r[5]=c->r[31]+0x00000194u; // 801E5760
  c->r[4]=0u+0x000000F7u; // 801E5764
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5768
  c->lr=0x801E5770u; f_801F9770(c); // 801E576C
L_801E5770:;
  c->lr=0x801E5774u; f_801E5840(c); // 801E5770
  c->r[4]=R32(c->r[28]+0x00000000u); // 801E5774
  c->r[5]=c->r[26]|c->r[26]; // 801E5778
  c->r[6]=R32(c->r[28]+0x00000004u); // 801E577C
  c->lr=0x801E5784u; f_801E5970(c); // 801E5780
  cmps(c,0,(int32_t)c->r[3],0); // 801E5784
  if (!crb(c,2)) { goto L_801E57A0; } // 801E5788
  c->r[3]=c->r[31]+0x00000048u; // 801E578C
  c->r[5]=c->r[31]+0x00000194u; // 801E5790
  c->r[4]=0u+0x000000FFu; // 801E5794
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5798
  c->lr=0x801E57A0u; f_801F9770(c); // 801E579C
L_801E57A0:;
  c->r[0]=c->r[29]+c->r[30]; // 801E57A0
  cmpu(c,0,c->r[25],c->r[0]); // 801E57A4
  if (!crb(c,1)) { goto L_801E57C0; } // 801E57A8
  c->r[3]=c->r[31]+0x00000048u; // 801E57AC
  c->r[5]=c->r[31]+0x000001B4u; // 801E57B0
  c->r[4]=0u+0x00000101u; // 801E57B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E57B8
  c->lr=0x801E57C0u; f_801F9770(c); // 801E57BC
L_801E57C0:;
  c->r[11]=c->r[1]+0x00000030u; // 801E57C0
  c->lr=0x801E57C8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E57C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E57C8
  c->lr=c->r[0]; // 801E57CC
  c->r[1]=c->r[1]+0x00000030u; // 801E57D0
  return; // 801E57D4
}

// fn_801E57E0
void f_801E57E0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFAE70u); // 801E57E0
  return; // 801E57E4
}

// fn_801E57F0
void f_801E57F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E57F0
  c->r[0]=c->lr; // 801E57F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E57F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E57FC
  c->r[31]=0u+0x80380000u; // 801E5800
  c->r[3]=c->r[31]+0xFFFFB4D0u; // 801E5804
  c->lr=0x801E580Cu; f_801EB4C0(c); // 801E5808
  c->r[4]=0u+0x801F0000u; // 801E580C
  c->r[5]=0u+0x80380000u; // 801E5810
  c->r[3]=c->r[31]+0xFFFFB4D0u; // 801E5814
  c->r[4]=c->r[4]+0xFFFFB4E0u; // 801E5818
  c->r[5]=c->r[5]+0xFFFFB4C0u; // 801E581C
  c->lr=0x801E5824u; f_80216C54(c); // 801E5820
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5828
  c->lr=c->r[0]; // 801E582C
  c->r[1]=c->r[1]+0x00000010u; // 801E5830
  return; // 801E5834
}

// fn_801E5840
void f_801E5840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5840
  c->r[0]=c->lr; // 801E5844
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E584C
  c->r[0]=R8(c->r[13]+0xFFFFAE78u); // 801E5850
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E5854
  if (!crb(c,2)) { goto L_801E58DC; } // 801E5858
  c->r[31]=0u+0x80390000u; // 801E585C
  c->r[0]=0u+0x00000000u; // 801E5860
  c->r[31]=c->r[31]+0x00000DF0u; // 801E5864
  c->r[5]=0u+0x00000004u; // 801E5868
  c->r[7]=c->r[31]+0x0000037Cu; // 801E586C
  W32(c->r[31]+0x00000350u,c->r[0]); // 801E5870
  c->r[6]=c->r[31]+0x00000388u; // 801E5874
  c->r[3]=c->r[31]+0x00000320u; // 801E5878
  W32(c->r[31]+0x0000036Cu,c->r[0]); // 801E587C
  c->r[4]=c->r[31]+0x00000340u; // 801E5880
  W32(c->r[31]+0x00000370u,c->r[0]); // 801E5884
  W32(c->r[31]+0x00000378u,c->r[0]); // 801E5888
  W32(c->r[31]+0x0000037Cu,c->r[7]); // 801E588C
  W32(c->r[31]+0x00000380u,c->r[7]); // 801E5890
  W32(c->r[31]+0x00000384u,c->r[0]); // 801E5894
  W32(c->r[31]+0x00000388u,c->r[6]); // 801E5898
  W32(c->r[31]+0x0000038Cu,c->r[6]); // 801E589C
  W8(c->r[31]+0x00000394u,c->r[0]); // 801E58A0
  W8(c->r[31]+0x00000395u,c->r[0]); // 801E58A4
  c->lr=0x801E58ACu; f_800CC290(c); // 801E58A8
  c->r[3]=c->r[31]+0x00000318u; // 801E58AC
  c->lr=0x801E58B4u; f_800CE950(c); // 801E58B0
  c->r[3]=c->r[31]+0x00000354u; // 801E58B4
  c->lr=0x801E58BCu; f_800CCD10(c); // 801E58B8
  c->r[4]=0u+0x801E0000u; // 801E58BC
  c->r[5]=0u+0x80390000u; // 801E58C0
  c->r[3]=c->r[31]|c->r[31]; // 801E58C4
  c->r[4]=c->r[4]+0x00005900u; // 801E58C8
  c->r[5]=c->r[5]+0x00000DE0u; // 801E58CC
  c->lr=0x801E58D4u; f_80216C54(c); // 801E58D0
  c->r[0]=0u+0x00000001u; // 801E58D4
  W8(c->r[13]+0xFFFFAE78u,c->r[0]); // 801E58D8
L_801E58DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E58DC
  c->r[3]=0u+0x80390000u; // 801E58E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E58E4
  c->r[3]=c->r[3]+0x00000DF0u; // 801E58E8
  c->lr=c->r[0]; // 801E58EC
  c->r[1]=c->r[1]+0x00000010u; // 801E58F0
  return; // 801E58F4
}

// fn_801E5900
void f_801E5900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5900
  c->r[0]=c->lr; // 801E5904
  cmps(c,0,(int32_t)c->r[3],0); // 801E5908
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E590C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5910
  c->r[31]=c->r[4]|c->r[4]; // 801E5914
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5918
  c->r[30]=c->r[3]|c->r[3]; // 801E591C
  if (crb(c,2)) { goto L_801E5954; } // 801E5920
  c->r[3]=addc(c,c->r[3],0x00000384u,0); cr0(c,c->r[3]); // 801E5924
  if (crb(c,2)) { goto L_801E5934; } // 801E5928
  c->r[4]=0u+0x00000000u; // 801E592C
  c->lr=0x801E5934u; f_801F9DB0(c); // 801E5930
L_801E5934:;
  c->r[3]=addc(c,c->r[30],0x00000378u,0); cr0(c,c->r[3]); // 801E5934
  if (crb(c,2)) { goto L_801E5944; } // 801E5938
  c->r[4]=0u+0x00000000u; // 801E593C
  c->lr=0x801E5944u; f_801F9DB0(c); // 801E5940
L_801E5944:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5944
  if (!crb(c,1)) { goto L_801E5954; } // 801E5948
  c->r[3]=c->r[30]|c->r[30]; // 801E594C
  c->lr=0x801E5954u; f_800B9AD0(c); // 801E5950
L_801E5954:;
  c->r[3]=c->r[30]|c->r[30]; // 801E5954
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5958
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E595C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5960
  c->lr=c->r[0]; // 801E5964
  c->r[1]=c->r[1]+0x00000010u; // 801E5968
  return; // 801E596C
}

// fn_801E5970
void f_801E5970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5970
  c->r[0]=c->lr; // 801E5974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5978
  c->r[11]=c->r[1]+0x00000020u; // 801E597C
  c->lr=0x801E5984u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E5980
  c->r[31]=0u+0x802D0000u; // 801E5984
  c->r[26]=c->r[3]|c->r[3]; // 801E5988
  c->r[27]=c->r[4]|c->r[4]; // 801E598C
  c->r[28]=c->r[5]|c->r[5]; // 801E5990
  c->r[29]=c->r[6]|c->r[6]; // 801E5994
  c->r[31]=c->r[31]+0x00001220u; // 801E5998
  c->lr=0x801E59A0u; f_801CD130(c); // 801E599C
  c->r[0]=R8(c->r[3]+0x00000018u); // 801E59A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E59A4
  if (!crb(c,2)) { goto L_801E59C0; } // 801E59A8
  c->r[3]=c->r[31]+0x00000000u; // 801E59AC
  c->r[5]=c->r[31]+0x00000014u; // 801E59B0
  c->r[4]=0u+0x0000004Fu; // 801E59B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E59B8
  c->lr=0x801E59C0u; f_801F9770(c); // 801E59BC
L_801E59C0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E59C0
  if (!crb(c,2)) { goto L_801E59DC; } // 801E59C4
  c->r[3]=c->r[31]+0x00000000u; // 801E59C8
  c->r[5]=c->r[31]+0x00000038u; // 801E59CC
  c->r[4]=0u+0x00000050u; // 801E59D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E59D4
  c->lr=0x801E59DCu; f_801F9770(c); // 801E59D8
L_801E59DC:;
  c->r[0]=rotl(c->r[28],0)&0x00000003u; cr0(c,c->r[0]); // 801E59DC
  if (crb(c,2)) { goto L_801E59FC; } // 801E59E0
  c->r[6]=c->r[28]|c->r[28]; // 801E59E4
  c->r[3]=c->r[31]+0x00000000u; // 801E59E8
  c->r[5]=c->r[31]+0x00000060u; // 801E59EC
  c->r[4]=0u+0x00000051u; // 801E59F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E59F4
  c->lr=0x801E59FCu; f_801F9770(c); // 801E59F8
L_801E59FC:;
  c->r[0]=R8(c->r[26]+0x00000394u); // 801E59FC
  cmps(c,0,(int32_t)c->r[0],0); // 801E5A00
  if (crb(c,2)) { goto L_801E5A10; } // 801E5A04
  c->r[3]=0u+0x00000001u; // 801E5A08
  goto L_801E5AEC; // 801E5A0C
L_801E5A10:;
  c->r[31]=0u+0x00000001u; // 801E5A10
  W8(c->r[26]+0x00000394u,c->r[31]); // 801E5A14
  W32(c->r[26]+0x00000350u,c->r[28]); // 801E5A18
  c->r[0]=R8(c->r[13]+0xFFFFAE78u); // 801E5A1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E5A20
  if (!crb(c,2)) { goto L_801E5AA4; } // 801E5A24
  c->r[30]=0u+0x80390000u; // 801E5A28
  c->r[0]=0u+0x00000000u; // 801E5A2C
  c->r[30]=c->r[30]+0x00000DF0u; // 801E5A30
  c->r[5]=0u+0x00000004u; // 801E5A34
  c->r[6]=c->r[30]+0x0000037Cu; // 801E5A38
  W32(c->r[30]+0x00000350u,c->r[0]); // 801E5A3C
  c->r[7]=c->r[30]+0x00000388u; // 801E5A40
  c->r[3]=c->r[30]+0x00000320u; // 801E5A44
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 801E5A48
  c->r[4]=c->r[30]+0x00000340u; // 801E5A4C
  W32(c->r[30]+0x00000370u,c->r[0]); // 801E5A50
  W32(c->r[30]+0x00000378u,c->r[0]); // 801E5A54
  W32(c->r[30]+0x0000037Cu,c->r[6]); // 801E5A58
  W32(c->r[30]+0x00000380u,c->r[6]); // 801E5A5C
  W32(c->r[30]+0x00000384u,c->r[0]); // 801E5A60
  W32(c->r[30]+0x00000388u,c->r[7]); // 801E5A64
  W32(c->r[30]+0x0000038Cu,c->r[7]); // 801E5A68
  W8(c->r[30]+0x00000394u,c->r[0]); // 801E5A6C
  W8(c->r[30]+0x00000395u,c->r[0]); // 801E5A70
  c->lr=0x801E5A78u; f_800CC290(c); // 801E5A74
  c->r[3]=c->r[30]+0x00000318u; // 801E5A78
  c->lr=0x801E5A80u; f_800CE950(c); // 801E5A7C
  c->r[3]=c->r[30]+0x00000354u; // 801E5A80
  c->lr=0x801E5A88u; f_800CCD10(c); // 801E5A84
  c->r[4]=0u+0x801E0000u; // 801E5A88
  c->r[5]=0u+0x80390000u; // 801E5A8C
  c->r[3]=c->r[30]|c->r[30]; // 801E5A90
  c->r[4]=c->r[4]+0x00005900u; // 801E5A94
  c->r[5]=c->r[5]+0x00000DE0u; // 801E5A98
  c->lr=0x801E5AA0u; f_80216C54(c); // 801E5A9C
  W8(c->r[13]+0xFFFFAE78u,c->r[31]); // 801E5AA0
L_801E5AA4:;
  c->r[4]=0u+0x801E0000u; // 801E5AA4
  c->r[5]=0u+0x80390000u; // 801E5AA8
  c->r[3]=c->r[26]|c->r[26]; // 801E5AAC
  c->r[7]=c->r[29]|c->r[29]; // 801E5AB0
  c->r[8]=c->r[27]|c->r[27]; // 801E5AB4
  c->r[4]=c->r[4]+0x00005C50u; // 801E5AB8
  c->r[5]=c->r[5]+0x00000DF0u; // 801E5ABC
  c->r[6]=c->r[28]+c->r[29]; // 801E5AC0
  c->r[9]=0u+0x00000000u; // 801E5AC4
  c->lr=0x801E5ACCu; f_800CEF20(c); // 801E5AC8
  cmps(c,0,(int32_t)c->r[3],0); // 801E5ACC
  c->r[31]=c->r[3]|c->r[3]; // 801E5AD0
  if (crb(c,2)) { goto L_801E5AE0; } // 801E5AD4
  c->r[3]=c->r[26]|c->r[26]; // 801E5AD8
  c->lr=0x801E5AE0u; f_800CF5B0(c); // 801E5ADC
L_801E5AE0:;
  c->r[0]=0u-c->r[31]; // 801E5AE0
  c->r[0]=c->r[0]|c->r[31]; // 801E5AE4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E5AE8
L_801E5AEC:;
  c->r[11]=c->r[1]+0x00000020u; // 801E5AEC
  c->lr=0x801E5AF4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E5AF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5AF4
  c->lr=c->r[0]; // 801E5AF8
  c->r[1]=c->r[1]+0x00000020u; // 801E5AFC
  return; // 801E5B00
}

// fn_801E5B10
void f_801E5B10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5B10
  c->r[0]=c->lr; // 801E5B14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5B18
  c->r[11]=c->r[1]+0x00000020u; // 801E5B1C
  c->lr=0x801E5B24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E5B20
  c->r[0]=R8(c->r[13]+0xFFFFAE78u); // 801E5B24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E5B28
  if (!crb(c,2)) { goto L_801E5BB0; } // 801E5B2C
  c->r[28]=0u+0x80390000u; // 801E5B30
  c->r[0]=0u+0x00000000u; // 801E5B34
  c->r[28]=c->r[28]+0x00000DF0u; // 801E5B38
  c->r[5]=0u+0x00000004u; // 801E5B3C
  c->r[6]=c->r[28]+0x0000037Cu; // 801E5B40
  W32(c->r[28]+0x00000350u,c->r[0]); // 801E5B44
  c->r[7]=c->r[28]+0x00000388u; // 801E5B48
  c->r[3]=c->r[28]+0x00000320u; // 801E5B4C
  W32(c->r[28]+0x0000036Cu,c->r[0]); // 801E5B50
  c->r[4]=c->r[28]+0x00000340u; // 801E5B54
  W32(c->r[28]+0x00000370u,c->r[0]); // 801E5B58
  W32(c->r[28]+0x00000378u,c->r[0]); // 801E5B5C
  W32(c->r[28]+0x0000037Cu,c->r[6]); // 801E5B60
  W32(c->r[28]+0x00000380u,c->r[6]); // 801E5B64
  W32(c->r[28]+0x00000384u,c->r[0]); // 801E5B68
  W32(c->r[28]+0x00000388u,c->r[7]); // 801E5B6C
  W32(c->r[28]+0x0000038Cu,c->r[7]); // 801E5B70
  W8(c->r[28]+0x00000394u,c->r[0]); // 801E5B74
  W8(c->r[28]+0x00000395u,c->r[0]); // 801E5B78
  c->lr=0x801E5B80u; f_800CC290(c); // 801E5B7C
  c->r[3]=c->r[28]+0x00000318u; // 801E5B80
  c->lr=0x801E5B88u; f_800CE950(c); // 801E5B84
  c->r[3]=c->r[28]+0x00000354u; // 801E5B88
  c->lr=0x801E5B90u; f_800CCD10(c); // 801E5B8C
  c->r[4]=0u+0x801E0000u; // 801E5B90
  c->r[5]=0u+0x80390000u; // 801E5B94
  c->r[3]=c->r[28]|c->r[28]; // 801E5B98
  c->r[4]=c->r[4]+0x00005900u; // 801E5B9C
  c->r[5]=c->r[5]+0x00000DE0u; // 801E5BA0
  c->lr=0x801E5BA8u; f_80216C54(c); // 801E5BA4
  c->r[0]=0u+0x00000001u; // 801E5BA8
  W8(c->r[13]+0xFFFFAE78u,c->r[0]); // 801E5BAC
L_801E5BB0:;
  c->r[28]=0u+0x80390000u; // 801E5BB0
  c->r[28]=c->r[28]+0x00000DF0u; // 801E5BB4
  c->r[0]=R8(c->r[28]+0x00000395u); // 801E5BB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E5BBC
  if (!crb(c,2)) { goto L_801E5BD4; } // 801E5BC0
  c->r[3]=c->r[28]+0x00000320u; // 801E5BC4
  c->r[4]=0u+0x00000001u; // 801E5BC8
  c->r[5]=0u+0x00000000u; // 801E5BCC
  c->lr=0x801E5BD4u; f_800CC2F0(c); // 801E5BD0
L_801E5BD4:;
  c->r[31]=R32(c->r[28]+0x00000388u); // 801E5BD4
  c->r[30]=c->r[28]+0x00000388u; // 801E5BD8
  c->r[28]=0u+0x802D0000u; // 801E5BDC
  c->r[29]=0u+0x802D0000u; // 801E5BE0
  goto L_801E5C1C; // 801E5BE4
L_801E5BE8:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801E5BE8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801E5BEC
  if (!crb(c,2)) { goto L_801E5C08; } // 801E5BF0
  c->r[3]=c->r[28]+0x000013D8u; // 801E5BF4
  c->r[5]=c->r[29]+0x000013B4u; // 801E5BF8
  c->r[4]=0u+0x0000023Du; // 801E5BFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5C00
  c->lr=0x801E5C08u; f_801F9770(c); // 801E5C04
L_801E5C08:;
  c->r[12]=R32(c->r[27]+0x00000008u); // 801E5C08
  c->r[3]=c->r[27]|c->r[27]; // 801E5C0C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E5C10
  c->ctr=c->r[12]; // 801E5C14
  if (true) { c->lr=0x801E5C1Cu; dispatch(c,c->ctr); } // 801E5C18
L_801E5C1C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801E5C1C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E5BE8; } // 801E5C20
  c->lr=0x801E5C28u; f_801EE4D0(c); // 801E5C24
  c->lr=0x801E5C2Cu; f_801EED20(c); // 801E5C28
  c->r[11]=c->r[1]+0x00000020u; // 801E5C2C
  c->lr=0x801E5C34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E5C30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5C34
  c->lr=c->r[0]; // 801E5C38
  c->r[1]=c->r[1]+0x00000020u; // 801E5C3C
  return; // 801E5C40
}

// fn_801E5C50
void f_801E5C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5C50
  c->r[0]=c->lr; // 801E5C54
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E5C58
  c->r[11]=c->r[1]+0x00000030u; // 801E5C5C
  c->lr=0x801E5C64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E5C60
  c->r[26]=c->r[3]|c->r[3]; // 801E5C64
  c->lr=0x801E5C6Cu; f_801CD130(c); // 801E5C68
  c->r[5]=0u+0x801E0000u; // 801E5C6C
  c->r[4]=c->r[26]+0x0000036Cu; // 801E5C70
  c->r[5]=c->r[5]+0x00005B10u; // 801E5C74
  c->lr=0x801E5C7Cu; f_801CD810(c); // 801E5C78
  c->r[29]=0u+0x802D0000u; // 801E5C7C
  c->r[28]=0u+0x802D0000u; // 801E5C80
L_801E5C84:;
  c->r[3]=c->r[26]+0x00000320u; // 801E5C84
  c->r[4]=c->r[1]+0x00000008u; // 801E5C88
  c->r[5]=0u+0x00000001u; // 801E5C8C
  c->lr=0x801E5C94u; f_800CC3C0(c); // 801E5C90
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E5C94
  cmpu(c,0,c->r[0],0x00000001u); // 801E5C98
  if (!crb(c,2)) { goto L_801E5CAC; } // 801E5C9C
  c->r[3]=c->r[26]|c->r[26]; // 801E5CA0
  c->lr=0x801E5CA8u; f_801E5E80(c); // 801E5CA4
  goto L_801E5CB4; // 801E5CA8
L_801E5CAC:;
  cmpu(c,0,c->r[0],0x00000002u); // 801E5CAC
  if (crb(c,2)) { goto L_801E5CE0; } // 801E5CB0
L_801E5CB4:;
  c->r[3]=R32(c->r[26]+0x00000350u); // 801E5CB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E5CB8
  c->r[0]=c->r[3]+0x21530000u; // 801E5CBC
  cmpu(c,0,c->r[0],0x0000BABEu); // 801E5CC0
  if (crb(c,2)) { IRQCHK(c); goto L_801E5C84; } // 801E5CC4
  c->r[3]=c->r[29]+0x00001220u; // 801E5CC8
  c->r[5]=c->r[28]+0x000012E8u; // 801E5CCC
  c->r[4]=0u+0x0000014Bu; // 801E5CD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5CD4
  c->lr=0x801E5CDCu; f_801F9770(c); // 801E5CD8
  IRQCHK(c); goto L_801E5C84; // 801E5CDC
L_801E5CE0:;
  c->r[31]=R32(c->r[26]+0x00000388u); // 801E5CE0
  c->r[30]=c->r[26]+0x00000388u; // 801E5CE4
  c->r[28]=0u+0x802D0000u; // 801E5CE8
  c->r[29]=0u+0x802D0000u; // 801E5CEC
  goto L_801E5D28; // 801E5CF0
L_801E5CF4:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801E5CF4
  c->r[31]=R32(c->r[31]+0x00000000u); // 801E5CF8
  if (!crb(c,2)) { goto L_801E5D14; } // 801E5CFC
  c->r[3]=c->r[28]+0x000013D8u; // 801E5D00
  c->r[5]=c->r[29]+0x000013B4u; // 801E5D04
  c->r[4]=0u+0x0000023Du; // 801E5D08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5D0C
  c->lr=0x801E5D14u; f_801F9770(c); // 801E5D10
L_801E5D14:;
  c->r[12]=R32(c->r[27]+0x00000008u); // 801E5D14
  c->r[3]=c->r[27]|c->r[27]; // 801E5D18
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E5D1C
  c->ctr=c->r[12]; // 801E5D20
  if (true) { c->lr=0x801E5D28u; dispatch(c,c->ctr); } // 801E5D24
L_801E5D28:;
  cmpu(c,0,c->r[31],c->r[30]); // 801E5D28
  if (!crb(c,2)) { IRQCHK(c); goto L_801E5CF4; } // 801E5D2C
  c->lr=0x801E5D34u; f_801CD130(c); // 801E5D30
  c->r[4]=c->r[26]+0x0000036Cu; // 801E5D34
  c->lr=0x801E5D3Cu; f_801CD8B0(c); // 801E5D38
  c->r[11]=c->r[1]+0x00000030u; // 801E5D3C
  c->r[3]=0u+0x00000000u; // 801E5D40
  c->lr=0x801E5D48u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E5D44
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E5D48
  c->lr=c->r[0]; // 801E5D4C
  c->r[1]=c->r[1]+0x00000030u; // 801E5D50
  return; // 801E5D54
}

// fn_801E5D60
void f_801E5D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5D60
  c->r[0]=c->lr; // 801E5D64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5D68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5D6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5D70
  c->r[30]=c->r[3]+0x00000354u; // 801E5D74
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5D78
  c->r[29]=c->r[4]|c->r[4]; // 801E5D7C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E5D80
  c->r[28]=c->r[3]|c->r[3]; // 801E5D84
  c->r[3]=c->r[30]|c->r[30]; // 801E5D88
  c->lr=0x801E5D90u; f_800CCD50(c); // 801E5D8C
  cmps(c,0,(int32_t)c->r[29],0); // 801E5D90
  c->r[31]=c->r[28]+0x00000388u; // 801E5D94
  if (!crb(c,2)) { goto L_801E5DB8; } // 801E5D98
  c->r[3]=0u+0x802D0000u; // 801E5D9C
  c->r[5]=0u+0x802D0000u; // 801E5DA0
  c->r[3]=c->r[3]+0x00001378u; // 801E5DA4
  c->r[4]=0u+0x00000233u; // 801E5DA8
  c->r[5]=c->r[5]+0x00001354u; // 801E5DAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5DB0
  c->lr=0x801E5DB8u; f_801F9770(c); // 801E5DB4
L_801E5DB8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E5DB8
  c->r[5]=c->r[29]|c->r[29]; // 801E5DBC
  c->r[3]=c->r[28]+0x00000384u; // 801E5DC0
  c->r[4]=c->r[1]+0x00000008u; // 801E5DC4
  c->lr=0x801E5DCCu; f_801FA130(c); // 801E5DC8
  c->r[3]=c->r[30]|c->r[30]; // 801E5DCC
  c->lr=0x801E5DD4u; f_800CCE30(c); // 801E5DD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5DD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5DD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5DDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5DE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E5DE4
  c->lr=c->r[0]; // 801E5DE8
  c->r[1]=c->r[1]+0x00000020u; // 801E5DEC
  return; // 801E5DF0
}

// fn_801E5E00
void f_801E5E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5E00
  c->r[0]=c->lr; // 801E5E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5E08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5E0C
  c->r[31]=c->r[3]+0x00000354u; // 801E5E10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5E14
  c->r[30]=c->r[4]|c->r[4]; // 801E5E18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5E1C
  c->r[29]=c->r[3]|c->r[3]; // 801E5E20
  c->r[3]=c->r[31]|c->r[31]; // 801E5E24
  c->lr=0x801E5E2Cu; f_800CCD50(c); // 801E5E28
  cmps(c,0,(int32_t)c->r[30],0); // 801E5E2C
  if (!crb(c,2)) { goto L_801E5E50; } // 801E5E30
  c->r[3]=0u+0x802D0000u; // 801E5E34
  c->r[5]=0u+0x802D0000u; // 801E5E38
  c->r[3]=c->r[3]+0x00001378u; // 801E5E3C
  c->r[4]=0u+0x00000233u; // 801E5E40
  c->r[5]=c->r[5]+0x00001354u; // 801E5E44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5E48
  c->lr=0x801E5E50u; f_801F9770(c); // 801E5E4C
L_801E5E50:;
  c->r[4]=c->r[30]|c->r[30]; // 801E5E50
  c->r[3]=c->r[29]+0x00000384u; // 801E5E54
  c->lr=0x801E5E5Cu; f_801FA230(c); // 801E5E58
  c->r[3]=c->r[31]|c->r[31]; // 801E5E5C
  c->lr=0x801E5E64u; f_800CCE30(c); // 801E5E60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5E64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5E68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5E6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5E70
  c->lr=c->r[0]; // 801E5E74
  c->r[1]=c->r[1]+0x00000020u; // 801E5E78
  return; // 801E5E7C
}

// fn_801E5E80
void f_801E5E80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5E80
  c->r[0]=c->lr; // 801E5E84
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E5E88
  c->r[11]=c->r[1]+0x00000030u; // 801E5E8C
  c->lr=0x801E5E94u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E5E90
  c->r[26]=c->r[3]+0x00000354u; // 801E5E94
  c->r[24]=c->r[3]|c->r[3]; // 801E5E98
  c->r[3]=c->r[26]|c->r[26]; // 801E5E9C
  c->lr=0x801E5EA4u; f_800CCD50(c); // 801E5EA0
  c->r[31]=R32(c->r[24]+0x0000037Cu); // 801E5EA4
  c->r[30]=c->r[24]+0x0000037Cu; // 801E5EA8
  c->r[28]=0u+0x802D0000u; // 801E5EAC
  c->r[27]=0u+0x802D0000u; // 801E5EB0
  goto L_801E5EEC; // 801E5EB4
L_801E5EB8:;
  c->r[29]=c->r[31]|c->r[31]; cr0(c,c->r[29]); // 801E5EB8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801E5EBC
  if (!crb(c,2)) { goto L_801E5ED8; } // 801E5EC0
  c->r[3]=c->r[28]+0x00001348u; // 801E5EC4
  c->r[5]=c->r[27]+0x00001324u; // 801E5EC8
  c->r[4]=0u+0x0000023Du; // 801E5ECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5ED0
  c->lr=0x801E5ED8u; f_801F9770(c); // 801E5ED4
L_801E5ED8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 801E5ED8
  c->r[3]=c->r[29]|c->r[29]; // 801E5EDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E5EE0
  c->ctr=c->r[12]; // 801E5EE4
  if (true) { c->lr=0x801E5EECu; dispatch(c,c->ctr); } // 801E5EE8
L_801E5EEC:;
  cmpu(c,0,c->r[31],c->r[30]); // 801E5EEC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E5EB8; } // 801E5EF0
  c->lr=0x801E5EF8u; f_800D0530(c); // 801E5EF4
  c->r[27]=c->r[3]|c->r[3]; // 801E5EF8
  c->lr=0x801E5F00u; f_801D0E80(c); // 801E5EFC
  c->lr=0x801E5F04u; f_801D1820(c); // 801E5F00
  c->lr=0x801E5F08u; f_801CD130(c); // 801E5F04
  c->lr=0x801E5F0Cu; f_801CD3E0(c); // 801E5F08
  c->r[30]=R32(c->r[24]+0x00000388u); // 801E5F0C
  c->r[31]=c->r[24]+0x00000388u; // 801E5F10
  c->r[29]=0u+0x802D0000u; // 801E5F14
  c->r[28]=0u+0x802D0000u; // 801E5F18
  goto L_801E5F54; // 801E5F1C
L_801E5F20:;
  c->r[25]=c->r[30]|c->r[30]; cr0(c,c->r[25]); // 801E5F20
  c->r[30]=R32(c->r[30]+0x00000000u); // 801E5F24
  if (!crb(c,2)) { goto L_801E5F40; } // 801E5F28
  c->r[3]=c->r[29]+0x000013D8u; // 801E5F2C
  c->r[5]=c->r[28]+0x000013B4u; // 801E5F30
  c->r[4]=0u+0x0000023Du; // 801E5F34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5F38
  c->lr=0x801E5F40u; f_801F9770(c); // 801E5F3C
L_801E5F40:;
  c->r[12]=R32(c->r[25]+0x00000008u); // 801E5F40
  c->r[3]=c->r[25]|c->r[25]; // 801E5F44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E5F48
  c->ctr=c->r[12]; // 801E5F4C
  if (true) { c->lr=0x801E5F54u; dispatch(c,c->ctr); } // 801E5F50
L_801E5F54:;
  cmpu(c,0,c->r[30],c->r[31]); // 801E5F54
  if (!crb(c,2)) { IRQCHK(c); goto L_801E5F20; } // 801E5F58
  c->lr=0x801E5F60u; f_801D4C00(c); // 801E5F5C
  c->lr=0x801E5F64u; f_801D4D90(c); // 801E5F60
  c->lr=0x801E5F68u; f_801EF5D0(c); // 801E5F64
  c->lr=0x801E5F6Cu; f_801EE4D0(c); // 801E5F68
  c->lr=0x801E5F70u; f_801EEC10(c); // 801E5F6C
  c->lr=0x801E5F74u; f_800D0530(c); // 801E5F70
  c->r[0]=c->r[3]-c->r[27]; // 801E5F74
  c->r[30]=R32(c->r[24]+0x0000037Cu); // 801E5F78
  W32(c->r[24]+0x00000390u,c->r[0]); // 801E5F7C
  c->r[31]=c->r[24]+0x0000037Cu; // 801E5F80
  c->r[28]=0u+0x802D0000u; // 801E5F84
  c->r[29]=0u+0x802D0000u; // 801E5F88
  goto L_801E5FC4; // 801E5F8C
L_801E5F90:;
  c->r[25]=c->r[30]|c->r[30]; cr0(c,c->r[25]); // 801E5F90
  c->r[30]=R32(c->r[30]+0x00000000u); // 801E5F94
  if (!crb(c,2)) { goto L_801E5FB0; } // 801E5F98
  c->r[3]=c->r[28]+0x00001348u; // 801E5F9C
  c->r[5]=c->r[29]+0x00001324u; // 801E5FA0
  c->r[4]=0u+0x0000023Du; // 801E5FA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5FA8
  c->lr=0x801E5FB0u; f_801F9770(c); // 801E5FAC
L_801E5FB0:;
  c->r[12]=R32(c->r[25]+0x00000008u); // 801E5FB0
  c->r[3]=c->r[25]|c->r[25]; // 801E5FB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E5FB8
  c->ctr=c->r[12]; // 801E5FBC
  if (true) { c->lr=0x801E5FC4u; dispatch(c,c->ctr); } // 801E5FC0
L_801E5FC4:;
  cmpu(c,0,c->r[30],c->r[31]); // 801E5FC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E5F90; } // 801E5FC8
  c->r[3]=c->r[26]|c->r[26]; // 801E5FCC
  c->lr=0x801E5FD4u; f_800CCE30(c); // 801E5FD0
  c->r[11]=c->r[1]+0x00000030u; // 801E5FD4
  c->lr=0x801E5FDCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E5FD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E5FDC
  c->lr=c->r[0]; // 801E5FE0
  c->r[1]=c->r[1]+0x00000030u; // 801E5FE4
  return; // 801E5FE8
}

// fn_801E5FF0
void f_801E5FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5FF0
  c->r[0]=c->lr; // 801E5FF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5FF8
  c->r[11]=c->r[1]+0x00000020u; // 801E5FFC
  c->lr=0x801E6004u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E6000
  cmps(c,0,(int32_t)c->r[6],0); // 801E6004
  c->r[27]=c->r[3]|c->r[3]; // 801E6008
  c->r[28]=c->r[4]|c->r[4]; // 801E600C
  c->r[29]=c->r[5]|c->r[5]; // 801E6010
  c->r[30]=c->r[6]|c->r[6]; // 801E6014
  if (crb(c,2)) { goto L_801E6080; } // 801E6018
  c->lr=0x801E6020u; f_800CBAA0(c); // 801E601C
  c->r[4]=divwu(c->r[29],c->r[30]); // 801E6020
  c->r[0]=0u+0x00000000u; // 801E6024
  c->r[31]=c->r[3]|c->r[3]; // 801E6028
  W32(c->r[27]+0x00000000u,c->r[28]); // 801E602C
  c->r[3]=c->r[27]+0x00000014u; // 801E6030
  W32(c->r[27]+0x00000004u,c->r[29]); // 801E6034
  W32(c->r[27]+0x00000008u,c->r[4]); // 801E6038
  c->r[4]=0u+0x00000000u; // 801E603C
  c->r[5]=0u+0x00000004u; // 801E6040
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 801E6044
  W32(c->r[27]+0x00000010u,c->r[0]); // 801E6048
  c->lr=0x801E6050u; f_800046B4(c); // 801E604C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801E6050
  cmps(c,0,(int32_t)c->r[0],32); // 801E6054
  if (!crb(c,1)) { goto L_801E6078; } // 801E6058
  c->r[3]=0u+0x802D0000u; // 801E605C
  c->r[5]=0u+0x802D0000u; // 801E6060
  c->r[3]=c->r[3]+0x000013E8u; // 801E6064
  c->r[4]=0u+0x0000002Au; // 801E6068
  c->r[5]=c->r[5]+0x000013FCu; // 801E606C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6070
  c->lr=0x801E6078u; f_801F9770(c); // 801E6074
L_801E6078:;
  c->r[3]=c->r[31]|c->r[31]; // 801E6078
  c->lr=0x801E6080u; f_800CBAE0(c); // 801E607C
L_801E6080:;
  c->r[11]=c->r[1]+0x00000020u; // 801E6080
  c->lr=0x801E6088u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E6084
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6088
  c->lr=c->r[0]; // 801E608C
  c->r[1]=c->r[1]+0x00000020u; // 801E6090
  return; // 801E6094
}

// fn_801E60A0
void f_801E60A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E60A0
  c->r[0]=c->lr; // 801E60A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E60A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E60AC
  c->r[31]=c->r[3]|c->r[3]; // 801E60B0
  c->lr=0x801E60B8u; f_800CBAA0(c); // 801E60B4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801E60B8
  c->r[0]=R32(c->r[31]+0x00000010u); // 801E60BC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801E60C0
  if (crb(c,0)) { goto L_801E60D4; } // 801E60C4
  c->lr=0x801E60CCu; f_800CBAE0(c); // 801E60C8
  c->r[3]=0u+0x00000000u; // 801E60CC
  goto L_801E6174; // 801E60D0
L_801E60D4:;
  c->r[0]=c->r[4]+0x00000007u; // 801E60D4
  c->r[8]=0u+0x00000000u; // 801E60D8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E60DC
  c->r[4]=sraw(c,c->r[4],3); // 801E60E0
  c->r[0]=0u+0x00000008u; // 801E60E4
  c->r[7]=addc(c,c->r[4],0,c->xer_ca); // 801E60E8
  goto L_801E6164; // 801E60EC
L_801E60F0:;
  c->r[6]=c->r[31]+c->r[8]; // 801E60F0
  c->r[5]=R8(c->r[6]+0x00000014u); // 801E60F4
  cmpu(c,0,c->r[5],0x000000FFu); // 801E60F8
  if (crb(c,2)) { goto L_801E6160; } // 801E60FC
  c->r[9]=0u+0x00000001u; // 801E6100
  c->r[10]=0u+0x00000000u; // 801E6104
  c->ctr=c->r[0]; // 801E6108
  c->r[0]=c->r[0]|0x00000000u; // 801E610C
L_801E6110:;
  c->r[4]=c->r[5]&c->r[9]; cr0(c,c->r[4]); // 801E6110
  if (!crb(c,2)) { goto L_801E6154; } // 801E6114
  c->r[4]=R8(c->r[6]+0x00000014u); // 801E6118
  c->r[0]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801E611C
  c->r[0]=c->r[10]+c->r[0]; // 801E6120
  c->r[4]=c->r[4]|c->r[9]; // 801E6124
  W8(c->r[6]+0x00000014u,c->r[4]); // 801E6128
  c->r[4]=R32(c->r[31]+0x00000008u); // 801E612C
  c->r[5]=R32(c->r[31]+0x00000010u); // 801E6130
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801E6134
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E6138
  c->r[5]=c->r[5]+0x00000001u; // 801E613C
  W32(c->r[31]+0x00000010u,c->r[5]); // 801E6140
  c->r[31]=c->r[4]+c->r[0]; // 801E6144
  c->lr=0x801E614Cu; f_800CBAE0(c); // 801E6148
  c->r[3]=c->r[31]|c->r[31]; // 801E614C
  goto L_801E6174; // 801E6150
L_801E6154:;
  c->r[9]=rotl(c->r[9],1)&0x000000FEu; // 801E6154
  c->r[10]=c->r[10]+0x00000001u; // 801E6158
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E6110; } // 801E615C
L_801E6160:;
  c->r[8]=c->r[8]+0x00000001u; // 801E6160
L_801E6164:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801E6164
  if (crb(c,0)) { IRQCHK(c); goto L_801E60F0; } // 801E6168
  c->lr=0x801E6170u; f_800CBAE0(c); // 801E616C
  c->r[3]=0u+0x00000000u; // 801E6170
L_801E6174:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6178
  c->lr=c->r[0]; // 801E617C
  c->r[1]=c->r[1]+0x00000010u; // 801E6180
  return; // 801E6184
}

// fn_801E6190
void f_801E6190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6190
  c->r[0]=c->lr; // 801E6194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6198
  c->r[11]=c->r[1]+0x00000020u; // 801E619C
  c->lr=0x801E61A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E61A0
  c->r[28]=0u+0x802D0000u; // 801E61A4
  c->r[31]=c->r[3]|c->r[3]; // 801E61A8
  c->r[27]=c->r[4]|c->r[4]; // 801E61AC
  c->r[28]=c->r[28]+0x000013E8u; // 801E61B0
  c->lr=0x801E61B8u; f_800CBAA0(c); // 801E61B4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E61B8
  c->r[30]=c->r[3]|c->r[3]; // 801E61BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E61C0
  c->r[3]=c->r[27]-c->r[4]; // 801E61C4
  c->r[29]=divwu(c->r[3],c->r[0]); // 801E61C8
  cmpu(c,0,c->r[29],0x00000020u); // 801E61CC
  if (crb(c,0)) { goto L_801E61E8; } // 801E61D0
  c->r[3]=c->r[28]+0x00000000u; // 801E61D4
  c->r[5]=c->r[28]+0x00000034u; // 801E61D8
  c->r[4]=0u+0x0000005Cu; // 801E61DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E61E0
  c->lr=0x801E61E8u; f_801F9770(c); // 801E61E4
L_801E61E8:;
  c->r[0]=rotl(c->r[29],29)&0x1FFFFFFFu; // 801E61E8
  c->r[3]=rotl(c->r[29],0)&0x00000007u; // 801E61EC
  c->r[29]=c->r[31]+c->r[0]; // 801E61F0
  c->r[4]=0u+0x00000001u; // 801E61F4
  c->r[0]=R8(c->r[29]+0x00000014u); // 801E61F8
  c->r[27]=((c->r[3])&0x20)?0u:(c->r[4]<<((c->r[3])&31)); // 801E61FC
  c->r[0]=c->r[27]&c->r[0]; cr0(c,c->r[0]); // 801E6200
  if (!crb(c,2)) { goto L_801E621C; } // 801E6204
  c->r[3]=c->r[28]+0x00000000u; // 801E6208
  c->r[5]=c->r[28]+0x00000064u; // 801E620C
  c->r[4]=0u+0x00000061u; // 801E6210
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6214
  c->lr=0x801E621Cu; f_801F9770(c); // 801E6218
L_801E621C:;
  c->r[0]=R8(c->r[29]+0x00000014u); // 801E621C
  c->r[0]=c->r[0]&~c->r[27]; // 801E6220
  W8(c->r[29]+0x00000014u,c->r[0]); // 801E6224
  c->r[3]=R32(c->r[31]+0x00000010u); // 801E6228
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E622C
  W32(c->r[31]+0x00000010u,c->r[0]); // 801E6230
  if (!crb(c,0)) { goto L_801E624C; } // 801E6234
  c->r[3]=c->r[28]+0x00000000u; // 801E6238
  c->r[5]=c->r[28]+0x000000A4u; // 801E623C
  c->r[4]=0u+0x00000064u; // 801E6240
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6244
  c->lr=0x801E624Cu; f_801F9770(c); // 801E6248
L_801E624C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E624C
  c->lr=0x801E6254u; f_800CBAE0(c); // 801E6250
  c->r[11]=c->r[1]+0x00000020u; // 801E6254
  c->lr=0x801E625Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E6258
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E625C
  c->lr=c->r[0]; // 801E6260
  c->r[1]=c->r[1]+0x00000020u; // 801E6264
  return; // 801E6268
}

// fn_801E6270
void f_801E6270(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E6270
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E6274
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E6278
  return; // 801E627C
}

// fn_801E6280
void f_801E6280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6280
  c->r[0]=c->lr; // 801E6284
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6288
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E628C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E6290
  c->r[31]=c->r[3]|c->r[3]; // 801E6294
  cmps(c,0,(int32_t)c->r[0],0); // 801E6298
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E629C
  c->r[30]=c->r[4]|c->r[4]; // 801E62A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E62A4
  c->r[29]=0u+0x802D0000u; // 801E62A8
  c->r[29]=c->r[29]+0x000014B8u; // 801E62AC
  if (!crb(c,2)) { goto L_801E62C8; } // 801E62B0
  c->r[3]=c->r[29]+0x00000000u; // 801E62B4
  c->r[5]=c->r[29]+0x00000158u; // 801E62B8
  c->r[4]=0u+0x000000B8u; // 801E62BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E62C0
  c->lr=0x801E62C8u; f_801F9770(c); // 801E62C4
L_801E62C8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801E62C8
  c->r[0]=R8(c->r[3]+0x00000009u); // 801E62CC
  c->r[31]=c->r[3]+0x00000008u; // 801E62D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E62D4
  if (crb(c,2)) { goto L_801E62F4; } // 801E62D8
  c->r[5]=0u+0x802D0000u; // 801E62DC
  c->r[3]=c->r[13]+0xFFFF9ED0u; // 801E62E0
  c->r[5]=c->r[5]+0x000018F8u; // 801E62E4
  c->r[4]=0u+0x0000008Du; // 801E62E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E62EC
  c->lr=0x801E62F4u; f_801F9770(c); // 801E62F0
L_801E62F4:;
  c->r[3]=R8(c->r[31]+0x00000000u); // 801E62F4
  c->r[5]=c->r[31]|c->r[31]; // 801E62F8
  c->r[4]=R32(c->r[31]+0x00000004u); // 801E62FC
  c->lr=0x801E6304u; f_801EF600(c); // 801E6300
  c->r[6]=R16(c->r[3]+0x00000006u); // 801E6304
  c->r[31]=c->r[3]|c->r[3]; // 801E6308
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E630C
  if (crb(c,2)) { goto L_801E6328; } // 801E6310
  c->r[3]=c->r[29]+0x00000000u; // 801E6314
  c->r[5]=c->r[29]+0x00000180u; // 801E6318
  c->r[4]=0u+0x000000C0u; // 801E631C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6320
  c->lr=0x801E6328u; f_801F9770(c); // 801E6324
L_801E6328:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 801E6328
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E632C
  if (crb(c,2)) { goto L_801E6348; } // 801E6330
  c->r[3]=c->r[29]+0x00000000u; // 801E6334
  c->r[5]=c->r[29]+0x000001DCu; // 801E6338
  c->r[4]=0u+0x000000C1u; // 801E633C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6340
  c->lr=0x801E6348u; f_801F9770(c); // 801E6344
L_801E6348:;
  c->r[6]=R32(c->r[31]+0x00000028u); // 801E6348
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E634C
  if (crb(c,2)) { goto L_801E6368; } // 801E6350
  c->r[3]=c->r[29]+0x00000000u; // 801E6354
  c->r[5]=c->r[29]+0x00000230u; // 801E6358
  c->r[4]=0u+0x000000C2u; // 801E635C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6360
  c->lr=0x801E6368u; f_801F9770(c); // 801E6364
L_801E6368:;
  c->r[6]=R8(c->r[31]+0x00000000u); // 801E6368
  cmps(c,0,(int32_t)c->r[6],2); // 801E636C
  if (crb(c,2)) { goto L_801E6388; } // 801E6370
  cmps(c,0,(int32_t)c->r[6],1); // 801E6374
  if (crb(c,2)) { goto L_801E6390; } // 801E6378
  cmps(c,0,(int32_t)c->r[6],0); // 801E637C
  if (crb(c,2)) { goto L_801E6398; } // 801E6380
  goto L_801E63A0; // 801E6384
L_801E6388:;
  c->r[0]=0u+0x00000003u; // 801E6388
  goto L_801E63B8; // 801E638C
L_801E6390:;
  c->r[0]=0u+0x00000001u; // 801E6390
  goto L_801E63B8; // 801E6394
L_801E6398:;
  c->r[0]=0u+0x00000002u; // 801E6398
  goto L_801E63B8; // 801E639C
L_801E63A0:;
  c->r[3]=c->r[29]+0x00000000u; // 801E63A0
  c->r[5]=c->r[29]+0x0000028Cu; // 801E63A4
  c->r[4]=0u+0x0000014Du; // 801E63A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E63AC
  c->lr=0x801E63B4u; f_801F9770(c); // 801E63B0
  c->r[0]=0u+0x00000003u; // 801E63B4
L_801E63B8:;
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E63B8
  c->r[3]=0u+0x00000001u; // 801E63BC
  c->r[4]=R8(c->r[31]+0x00000001u); // 801E63C0
  c->r[0]=0u-c->r[4]; // 801E63C4
  c->r[0]=c->r[0]|c->r[4]; // 801E63C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E63CC
  W8(c->r[30]+0x00000004u,c->r[0]); // 801E63D0
  c->r[0]=R8(c->r[31]+0x00000002u); // 801E63D4
  W32(c->r[30]+0x00000008u,c->r[0]); // 801E63D8
  c->r[4]=R8(c->r[31]+0x00000003u); // 801E63DC
  c->r[0]=R16(c->r[31]+0x00000004u); // 801E63E0
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801E63E4
  c->r[0]=c->r[4]+c->r[0]; // 801E63E8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801E63EC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801E63F0
  W16(c->r[30]+0x00000010u,c->r[0]); // 801E63F4
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E63F8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801E63FC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E6400
  W32(c->r[30]+0x00000018u,c->r[0]); // 801E6404
  c->r[0]=R32(c->r[31]+0x00000010u); // 801E6408
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801E640C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801E6410
  W32(c->r[30]+0x00000020u,c->r[0]); // 801E6414
  c->r[0]=R32(c->r[31]+0x00000018u); // 801E6418
  W32(c->r[30]+0x00000024u,c->r[0]); // 801E641C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801E6420
  W32(c->r[30]+0x00000028u,c->r[0]); // 801E6424
  c->r[0]=R32(c->r[31]+0x00000020u); // 801E6428
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801E642C
  c->r[0]=R32(c->r[31]+0x00000024u); // 801E6430
  W32(c->r[30]+0x00000030u,c->r[0]); // 801E6434
  c->r[0]=R32(c->r[31]+0x00000028u); // 801E6438
  W32(c->r[30]+0x00000034u,c->r[0]); // 801E643C
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801E6440
  W32(c->r[30]+0x00000038u,c->r[0]); // 801E6444
  c->r[0]=R32(c->r[31]+0x00000030u); // 801E6448
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801E644C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6450
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6454
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6458
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E645C
  c->lr=c->r[0]; // 801E6460
  c->r[1]=c->r[1]+0x00000020u; // 801E6464
  return; // 801E6468
}

// fn_801E6470
void f_801E6470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6470
  c->r[0]=c->lr; // 801E6474
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6478
  c->r[11]=c->r[1]+0x00000020u; // 801E647C
  c->lr=0x801E6484u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E6480
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6484
  c->r[29]=0u+0x802D0000u; // 801E6488
  c->r[26]=c->r[3]|c->r[3]; // 801E648C
  c->r[31]=c->r[4]|c->r[4]; // 801E6490
  cmps(c,0,(int32_t)c->r[0],0); // 801E6494
  c->r[27]=c->r[5]|c->r[5]; // 801E6498
  c->r[29]=c->r[29]+0x000014B8u; // 801E649C
  if (!crb(c,2)) { goto L_801E64B8; } // 801E64A0
  c->r[3]=c->r[29]+0x00000000u; // 801E64A4
  c->r[5]=c->r[29]+0x00000158u; // 801E64A8
  c->r[4]=0u+0x000000DAu; // 801E64AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E64B0
  c->lr=0x801E64B8u; f_801F9770(c); // 801E64B4
L_801E64B8:;
  c->r[28]=R32(c->r[26]+0x00000004u); // 801E64B8
  c->r[0]=R8(c->r[28]+0x00000011u); // 801E64BC
  c->r[30]=c->r[28]+0x00000008u; // 801E64C0
  cmps(c,0,(int32_t)c->r[0],0); // 801E64C4
  if (crb(c,2)) { goto L_801E64E4; } // 801E64C8
  c->r[5]=0u+0x802D0000u; // 801E64CC
  c->r[3]=c->r[13]+0xFFFF9EC8u; // 801E64D0
  c->r[5]=c->r[5]+0x000018D0u; // 801E64D4
  c->r[4]=0u+0x0000008Du; // 801E64D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E64DC
  c->lr=0x801E64E4u; f_801F9770(c); // 801E64E0
L_801E64E4:;
  c->r[3]=R8(c->r[28]+0x00000010u); // 801E64E4
  c->r[5]=c->r[30]|c->r[30]; // 801E64E8
  c->r[4]=R32(c->r[28]+0x00000014u); // 801E64EC
  c->lr=0x801E64F4u; f_801EF600(c); // 801E64F0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E64F4
  c->r[30]=c->r[3]|c->r[3]; // 801E64F8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E64FC
  if (crb(c,0)) { goto L_801E650C; } // 801E6500
  c->r[3]=0u+0x00000000u; // 801E6504
  goto L_801E67D4; // 801E6508
L_801E650C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E650C
  cmps(c,0,(int32_t)c->r[0],0); // 801E6510
  if (crb(c,2)) { goto L_801E6524; } // 801E6514
  cmps(c,0,(int32_t)c->r[0],1); // 801E6518
  if (crb(c,2)) { goto L_801E6670; } // 801E651C
  goto L_801E67BC; // 801E6520
L_801E6524:;
  c->r[28]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801E6524
  c->r[4]=R32(c->r[26]+0x00000004u); // 801E6528
  c->r[3]=c->r[3]+c->r[28]; // 801E652C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E6530
  c->r[29]=c->r[4]+0x00000008u; // 801E6534
  cmps(c,0,(int32_t)c->r[0],0); // 801E6538
  if (crb(c,2)) { goto L_801E6558; } // 801E653C
  c->r[5]=0u+0x802D0000u; // 801E6540
  c->r[3]=c->r[13]+0xFFFF9EB0u; // 801E6544
  c->r[5]=c->r[5]+0x00001858u; // 801E6548
  c->r[4]=0u+0x0000008Du; // 801E654C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6550
  c->lr=0x801E6558u; f_801F9770(c); // 801E6554
L_801E6558:;
  c->r[4]=c->r[30]+c->r[28]; // 801E6558
  c->r[5]=c->r[29]|c->r[29]; // 801E655C
  c->r[3]=R8(c->r[4]+0x00000004u); // 801E6560
  c->r[4]=R32(c->r[4]+0x00000008u); // 801E6564
  c->lr=0x801E656Cu; f_801EF600(c); // 801E6568
  cmps(c,0,(int32_t)c->r[3],0); // 801E656C
  if (!crb(c,2)) { goto L_801E657C; } // 801E6570
  c->r[3]=0u+0x00000000u; // 801E6574
  goto L_801E67D4; // 801E6578
L_801E657C:;
  c->r[4]=0u+0x0000007Fu; // 801E657C
  c->r[0]=0u+0x00000040u; // 801E6580
  W8(c->r[31]+0x00000000u,c->r[4]); // 801E6584
  c->r[5]=0u+0x00000020u; // 801E6588
  W8(c->r[31]+0x00000001u,c->r[0]); // 801E658C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E6590
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E6594
  cmps(c,0,(int32_t)c->r[0],32); // 801E6598
  if (crb(c,1)) { goto L_801E65A4; } // 801E659C
  c->r[5]=c->r[0]|c->r[0]; // 801E65A0
L_801E65A4:;
  cmps(c,1,(int32_t)c->r[5],0); // 801E65A4
  c->r[8]=0u+0x00000000u; // 801E65A8
  if (!crb(c,5)) { goto L_801E67D0; } // 801E65AC
  cmps(c,0,(int32_t)c->r[5],8); // 801E65B0
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 801E65B4
  if (!crb(c,1)) { goto L_801E6644; } // 801E65B8
  c->r[7]=0u+0x00000000u; // 801E65BC
  if (crb(c,4)) { goto L_801E65D8; } // 801E65C0
  c->r[4]=0u+0x80000000u; // 801E65C4
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801E65C8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E65CC
  if (crb(c,1)) { goto L_801E65D8; } // 801E65D0
  c->r[7]=0u+0x00000001u; // 801E65D4
L_801E65D8:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E65D8
  if (crb(c,2)) { goto L_801E6644; } // 801E65DC
  c->r[0]=c->r[6]+0x00000007u; // 801E65E0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E65E4
  c->ctr=c->r[0]; // 801E65E8
  cmps(c,0,(int32_t)c->r[6],0); // 801E65EC
  if (!crb(c,1)) { goto L_801E6644; } // 801E65F0
L_801E65F4:;
  c->r[4]=c->r[3]+c->r[8]; // 801E65F4
  c->r[6]=c->r[31]+c->r[8]; // 801E65F8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E65FC
  c->r[8]=c->r[8]+0x00000008u; // 801E6600
  W8(c->r[6]+0x00000008u,c->r[0]); // 801E6604
  c->r[0]=R8(c->r[4]+0x00000002u); // 801E6608
  W8(c->r[6]+0x00000009u,c->r[0]); // 801E660C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E6610
  W8(c->r[6]+0x0000000Au,c->r[0]); // 801E6614
  c->r[0]=R8(c->r[4]+0x00000004u); // 801E6618
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 801E661C
  c->r[0]=R8(c->r[4]+0x00000005u); // 801E6620
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 801E6624
  c->r[0]=R8(c->r[4]+0x00000006u); // 801E6628
  W8(c->r[6]+0x0000000Du,c->r[0]); // 801E662C
  c->r[0]=R8(c->r[4]+0x00000007u); // 801E6630
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 801E6634
  c->r[0]=R8(c->r[4]+0x00000008u); // 801E6638
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 801E663C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E65F4; } // 801E6640
L_801E6644:;
  c->r[0]=c->r[5]-c->r[8]; // 801E6644
  c->ctr=c->r[0]; // 801E6648
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801E664C
  if (!crb(c,0)) { goto L_801E67D0; } // 801E6650
L_801E6654:;
  c->r[5]=c->r[3]+c->r[8]; // 801E6654
  c->r[4]=c->r[31]+c->r[8]; // 801E6658
  c->r[0]=R8(c->r[5]+0x00000001u); // 801E665C
  c->r[8]=c->r[8]+0x00000001u; // 801E6660
  W8(c->r[4]+0x00000008u,c->r[0]); // 801E6664
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E6654; } // 801E6668
  goto L_801E67D0; // 801E666C
L_801E6670:;
  c->r[28]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801E6670
  c->r[4]=R32(c->r[26]+0x00000004u); // 801E6674
  c->r[3]=c->r[3]+c->r[28]; // 801E6678
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E667C
  c->r[29]=c->r[4]+0x00000008u; // 801E6680
  cmpu(c,0,c->r[0],0x00000001u); // 801E6684
  if (crb(c,2)) { goto L_801E66A4; } // 801E6688
  c->r[5]=0u+0x802D0000u; // 801E668C
  c->r[3]=c->r[13]+0xFFFF9EB8u; // 801E6690
  c->r[5]=c->r[5]+0x00001880u; // 801E6694
  c->r[4]=0u+0x0000008Eu; // 801E6698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E669C
  c->lr=0x801E66A4u; f_801F9770(c); // 801E66A0
L_801E66A4:;
  c->r[4]=c->r[30]+c->r[28]; // 801E66A4
  c->r[5]=c->r[29]|c->r[29]; // 801E66A8
  c->r[3]=R8(c->r[4]+0x00000004u); // 801E66AC
  c->r[4]=R32(c->r[4]+0x00000008u); // 801E66B0
  c->lr=0x801E66B8u; f_801EF600(c); // 801E66B4
  cmps(c,0,(int32_t)c->r[3],0); // 801E66B8
  if (!crb(c,2)) { goto L_801E66C8; } // 801E66BC
  c->r[3]=0u+0x00000000u; // 801E66C0
  goto L_801E67D4; // 801E66C4
L_801E66C8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E66C8
  c->r[5]=0u+0x00000020u; // 801E66CC
  W8(c->r[31]+0x00000000u,c->r[0]); // 801E66D0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E66D4
  W8(c->r[31]+0x00000001u,c->r[0]); // 801E66D8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801E66DC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E66E0
  cmps(c,0,(int32_t)c->r[0],32); // 801E66E4
  if (crb(c,1)) { goto L_801E66F0; } // 801E66E8
  c->r[5]=c->r[0]|c->r[0]; // 801E66EC
L_801E66F0:;
  cmps(c,1,(int32_t)c->r[5],0); // 801E66F0
  c->r[8]=0u+0x00000000u; // 801E66F4
  if (!crb(c,5)) { goto L_801E67D0; } // 801E66F8
  cmps(c,0,(int32_t)c->r[5],8); // 801E66FC
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 801E6700
  if (!crb(c,1)) { goto L_801E6790; } // 801E6704
  c->r[7]=0u+0x00000000u; // 801E6708
  if (crb(c,4)) { goto L_801E6724; } // 801E670C
  c->r[4]=0u+0x80000000u; // 801E6710
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801E6714
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E6718
  if (crb(c,1)) { goto L_801E6724; } // 801E671C
  c->r[7]=0u+0x00000001u; // 801E6720
L_801E6724:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E6724
  if (crb(c,2)) { goto L_801E6790; } // 801E6728
  c->r[0]=c->r[6]+0x00000007u; // 801E672C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E6730
  c->ctr=c->r[0]; // 801E6734
  cmps(c,0,(int32_t)c->r[6],0); // 801E6738
  if (!crb(c,1)) { goto L_801E6790; } // 801E673C
L_801E6740:;
  c->r[4]=c->r[3]+c->r[8]; // 801E6740
  c->r[6]=c->r[31]+c->r[8]; // 801E6744
  c->r[0]=R8(c->r[4]+0x00000009u); // 801E6748
  c->r[8]=c->r[8]+0x00000008u; // 801E674C
  W8(c->r[6]+0x00000008u,c->r[0]); // 801E6750
  c->r[0]=R8(c->r[4]+0x0000000Au); // 801E6754
  W8(c->r[6]+0x00000009u,c->r[0]); // 801E6758
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 801E675C
  W8(c->r[6]+0x0000000Au,c->r[0]); // 801E6760
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 801E6764
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 801E6768
  c->r[0]=R8(c->r[4]+0x0000000Du); // 801E676C
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 801E6770
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801E6774
  W8(c->r[6]+0x0000000Du,c->r[0]); // 801E6778
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801E677C
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 801E6780
  c->r[0]=R8(c->r[4]+0x00000010u); // 801E6784
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 801E6788
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E6740; } // 801E678C
L_801E6790:;
  c->r[0]=c->r[5]-c->r[8]; // 801E6790
  c->ctr=c->r[0]; // 801E6794
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801E6798
  if (!crb(c,0)) { goto L_801E67D0; } // 801E679C
L_801E67A0:;
  c->r[5]=c->r[3]+c->r[8]; // 801E67A0
  c->r[4]=c->r[31]+c->r[8]; // 801E67A4
  c->r[0]=R8(c->r[5]+0x00000009u); // 801E67A8
  c->r[8]=c->r[8]+0x00000001u; // 801E67AC
  W8(c->r[4]+0x00000008u,c->r[0]); // 801E67B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E67A0; } // 801E67B4
  goto L_801E67D0; // 801E67B8
L_801E67BC:;
  c->r[3]=c->r[29]+0x00000000u; // 801E67BC
  c->r[5]=c->r[29]+0x000002A8u; // 801E67C0
  c->r[4]=0u+0x0000010Cu; // 801E67C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E67C8
  c->lr=0x801E67D0u; f_801F9770(c); // 801E67CC
L_801E67D0:;
  c->r[3]=0u+0x00000001u; // 801E67D0
L_801E67D4:;
  c->r[11]=c->r[1]+0x00000020u; // 801E67D4
  c->lr=0x801E67DCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E67D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E67DC
  c->lr=c->r[0]; // 801E67E0
  c->r[1]=c->r[1]+0x00000020u; // 801E67E4
  return; // 801E67E8
}

// fn_801E67F0
void f_801E67F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E67F0
  c->r[0]=c->lr; // 801E67F4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E67F8
  c->r[11]=c->r[1]+0x00000080u; // 801E67FC
  c->lr=0x801E6804u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E6800
  c->r[27]=c->r[3]|c->r[3]; // 801E6804
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E6808
  c->r[31]=0u+0x802D0000u; // 801E680C
  c->r[28]=c->r[4]|c->r[4]; // 801E6810
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E6814
  c->r[29]=c->r[5]|c->r[5]; // 801E6818
  c->r[31]=c->r[31]+0x000014B8u; // 801E681C
  c->r[4]=0u+0x00000000u; // 801E6820
  c->r[12]=R32(c->r[12]+0x00000044u); // 801E6824
  c->r[5]=0u+0x00000000u; // 801E6828
  c->ctr=c->r[12]; // 801E682C
  if (true) { c->lr=0x801E6834u; dispatch(c,c->ctr); } // 801E6830
  c->r[3]=R32(c->r[27]+0x00000000u); // 801E6834
  c->r[0]=c->r[1]+0x00000027u; // 801E6838
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801E683C
  c->r[5]=0u+0x00000040u; // 801E6840
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E6844
  c->r[4]=c->r[30]|c->r[30]; // 801E6848
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E684C
  c->ctr=c->r[12]; // 801E6850
  if (true) { c->lr=0x801E6858u; dispatch(c,c->ctr); } // 801E6854
  cmpu(c,0,c->r[3],0x00000040u); // 801E6858
  if (crb(c,2)) { goto L_801E6868; } // 801E685C
  c->r[3]=0u+0x00000000u; // 801E6860
  goto L_801E6B18; // 801E6864
L_801E6868:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E6868
  if (!crb(c,2)) { goto L_801E6884; } // 801E686C
  c->r[3]=c->r[31]+0x00000000u; // 801E6870
  c->r[5]=c->r[31]+0x00000014u; // 801E6874
  c->r[4]=0u+0x0000002Au; // 801E6878
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E687C
  c->lr=0x801E6884u; f_801F9770(c); // 801E6880
L_801E6884:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E6884
  c->r[0]=c->r[3]+0xADAD0000u; // 801E6888
  cmpu(c,0,c->r[0],0x0000544Du); // 801E688C
  if (crb(c,2)) { goto L_801E68A8; } // 801E6890
  c->r[3]=c->r[31]+0x00000000u; // 801E6894
  c->r[5]=c->r[31]+0x00000040u; // 801E6898
  c->r[4]=0u+0x00000033u; // 801E689C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E68A0
  c->lr=0x801E68A8u; f_801F9770(c); // 801E68A4
L_801E68A8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E68A8
  c->r[0]=c->r[3]+0xADAD0000u; // 801E68AC
  cmpu(c,0,c->r[0],0x0000544Du); // 801E68B0
  if (crb(c,2)) { goto L_801E68C0; } // 801E68B4
  c->r[0]=0u+0x00000000u; // 801E68B8
  goto L_801E6928; // 801E68BC
L_801E68C0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801E68C0
  cmpu(c,0,c->r[0],0x00000100u); // 801E68C4
  if (!crb(c,0)) { goto L_801E68E0; } // 801E68C8
  c->r[3]=c->r[31]+0x00000000u; // 801E68CC
  c->r[5]=c->r[31]+0x00000074u; // 801E68D0
  c->r[4]=0u+0x0000003Bu; // 801E68D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E68D8
  c->lr=0x801E68E0u; f_801F9770(c); // 801E68DC
L_801E68E0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801E68E0
  cmpu(c,0,c->r[0],0x00000100u); // 801E68E4
  if (!crb(c,0)) { goto L_801E68F4; } // 801E68E8
  c->r[0]=0u+0x00000000u; // 801E68EC
  goto L_801E6928; // 801E68F0
L_801E68F4:;
  if (!crb(c,1)) { goto L_801E690C; } // 801E68F4
  c->r[3]=c->r[31]+0x00000000u; // 801E68F8
  c->r[5]=c->r[31]+0x00000074u; // 801E68FC
  c->r[4]=0u+0x00000041u; // 801E6900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6904
  c->lr=0x801E690Cu; f_801F9770(c); // 801E6908
L_801E690C:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 801E690C
  c->r[3]=0u+0x00000100u; // 801E6910
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 801E6914
  c->r[3]=c->r[3]|~c->r[4]; // 801E6918
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801E691C
  c->r[0]=c->r[3]-c->r[0]; // 801E6920
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E6924
L_801E6928:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E6928
  if (!crb(c,2)) { goto L_801E6938; } // 801E692C
  c->r[3]=0u+0x00000000u; // 801E6930
  goto L_801E6B18; // 801E6934
L_801E6938:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 801E6938
  cmpu(c,0,c->r[0],c->r[29]); // 801E693C
  if (!crb(c,1)) { goto L_801E694C; } // 801E6940
  c->r[3]=0u+0x00000000u; // 801E6944
  goto L_801E6B18; // 801E6948
L_801E694C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801E694C
  c->r[4]=0u+0x00000000u; // 801E6950
  c->r[6]=R32(c->r[30]+0x00000010u); // 801E6954
  c->r[5]=0u+0x00000000u; // 801E6958
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E695C
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E6960
  c->r[12]=R32(c->r[12]+0x00000044u); // 801E6964
  c->r[29]=c->r[6]+c->r[0]; // 801E6968
  c->ctr=c->r[12]; // 801E696C
  if (true) { c->lr=0x801E6974u; dispatch(c,c->ctr); } // 801E6970
  c->r[3]=R32(c->r[27]+0x00000000u); // 801E6974
  c->r[4]=c->r[28]|c->r[28]; // 801E6978
  c->r[5]=c->r[29]|c->r[29]; // 801E697C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E6980
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E6984
  c->ctr=c->r[12]; // 801E6988
  if (true) { c->lr=0x801E6990u; dispatch(c,c->ctr); } // 801E698C
  cmpu(c,0,c->r[3],c->r[29]); // 801E6990
  if (crb(c,2)) { goto L_801E69A0; } // 801E6994
  c->r[3]=0u+0x00000000u; // 801E6998
  goto L_801E6B18; // 801E699C
L_801E69A0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E69A0
  if (!crb(c,2)) { goto L_801E69BC; } // 801E69A4
  c->r[3]=c->r[31]+0x00000000u; // 801E69A8
  c->r[5]=c->r[31]+0x00000014u; // 801E69AC
  c->r[4]=0u+0x00000061u; // 801E69B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E69B4
  c->lr=0x801E69BCu; f_801F9770(c); // 801E69B8
L_801E69BC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E69BC
  if (!crb(c,2)) { goto L_801E69D8; } // 801E69C0
  c->r[3]=c->r[31]+0x00000000u; // 801E69C4
  c->r[5]=c->r[31]+0x00000014u; // 801E69C8
  c->r[4]=0u+0x0000002Au; // 801E69CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E69D0
  c->lr=0x801E69D8u; f_801F9770(c); // 801E69D4
L_801E69D8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E69D8
  c->r[0]=c->r[3]+0xADAD0000u; // 801E69DC
  cmpu(c,0,c->r[0],0x0000544Du); // 801E69E0
  if (crb(c,2)) { goto L_801E69FC; } // 801E69E4
  c->r[3]=c->r[31]+0x00000000u; // 801E69E8
  c->r[5]=c->r[31]+0x00000040u; // 801E69EC
  c->r[4]=0u+0x00000033u; // 801E69F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E69F4
  c->lr=0x801E69FCu; f_801F9770(c); // 801E69F8
L_801E69FC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E69FC
  c->r[0]=c->r[3]+0xADAD0000u; // 801E6A00
  cmpu(c,0,c->r[0],0x0000544Du); // 801E6A04
  if (crb(c,2)) { goto L_801E6A14; } // 801E6A08
  c->r[0]=0u+0x00000000u; // 801E6A0C
  goto L_801E6A7C; // 801E6A10
L_801E6A14:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801E6A14
  cmpu(c,0,c->r[0],0x00000100u); // 801E6A18
  if (!crb(c,0)) { goto L_801E6A34; } // 801E6A1C
  c->r[3]=c->r[31]+0x00000000u; // 801E6A20
  c->r[5]=c->r[31]+0x00000074u; // 801E6A24
  c->r[4]=0u+0x0000003Bu; // 801E6A28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6A2C
  c->lr=0x801E6A34u; f_801F9770(c); // 801E6A30
L_801E6A34:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801E6A34
  cmpu(c,0,c->r[0],0x00000100u); // 801E6A38
  if (!crb(c,0)) { goto L_801E6A48; } // 801E6A3C
  c->r[0]=0u+0x00000000u; // 801E6A40
  goto L_801E6A7C; // 801E6A44
L_801E6A48:;
  if (!crb(c,1)) { goto L_801E6A60; } // 801E6A48
  c->r[3]=c->r[31]+0x00000000u; // 801E6A4C
  c->r[5]=c->r[31]+0x00000074u; // 801E6A50
  c->r[4]=0u+0x00000041u; // 801E6A54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6A58
  c->lr=0x801E6A60u; f_801F9770(c); // 801E6A5C
L_801E6A60:;
  c->r[4]=R16(c->r[28]+0x00000006u); // 801E6A60
  c->r[3]=0u+0x00000100u; // 801E6A64
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 801E6A68
  c->r[3]=c->r[3]|~c->r[4]; // 801E6A6C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801E6A70
  c->r[0]=c->r[3]-c->r[0]; // 801E6A74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E6A78
L_801E6A7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E6A7C
  if (crb(c,2)) { goto L_801E6B14; } // 801E6A80
  W32(c->r[27]+0x00000004u,c->r[28]); // 801E6A84
  c->r[0]=R32(c->r[28]+0x00000010u); // 801E6A88
  c->r[3]=c->r[0]+c->r[28]; // 801E6A8C
  W32(c->r[27]+0x00000008u,c->r[3]); // 801E6A90
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E6A94
  c->r[0]=c->r[3]+0xB7BB0000u; // 801E6A98
  cmpu(c,0,c->r[0],0x00004144u); // 801E6A9C
  if (crb(c,2)) { goto L_801E6AB8; } // 801E6AA0
  c->r[3]=c->r[31]+0x00000000u; // 801E6AA4
  c->r[5]=c->r[31]+0x000000CCu; // 801E6AA8
  c->r[4]=0u+0x0000006Au; // 801E6AAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6AB0
  c->lr=0x801E6AB8u; f_801F9770(c); // 801E6AB4
L_801E6AB8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801E6AB8
  c->r[0]=R8(c->r[3]+0x00000009u); // 801E6ABC
  c->r[27]=c->r[3]+0x00000008u; // 801E6AC0
  cmps(c,0,(int32_t)c->r[0],0); // 801E6AC4
  if (crb(c,2)) { goto L_801E6AE4; } // 801E6AC8
  c->r[5]=0u+0x802D0000u; // 801E6ACC
  c->r[3]=c->r[13]+0xFFFF9ED0u; // 801E6AD0
  c->r[5]=c->r[5]+0x000018F8u; // 801E6AD4
  c->r[4]=0u+0x0000008Du; // 801E6AD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6ADC
  c->lr=0x801E6AE4u; f_801F9770(c); // 801E6AE0
L_801E6AE4:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 801E6AE4
  c->r[5]=c->r[27]|c->r[27]; // 801E6AE8
  c->r[4]=R32(c->r[27]+0x00000004u); // 801E6AEC
  c->lr=0x801E6AF4u; f_801EF600(c); // 801E6AF0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E6AF4
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E6AF8
  if (crb(c,2)) { goto L_801E6B14; } // 801E6AFC
  c->r[3]=c->r[31]+0x00000000u; // 801E6B00
  c->r[5]=c->r[31]+0x00000128u; // 801E6B04
  c->r[4]=0u+0x00000071u; // 801E6B08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6B0C
  c->lr=0x801E6B14u; f_801F9770(c); // 801E6B10
L_801E6B14:;
  c->r[3]=0u+0x00000001u; // 801E6B14
L_801E6B18:;
  c->r[11]=c->r[1]+0x00000080u; // 801E6B18
  c->lr=0x801E6B20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E6B1C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801E6B20
  c->lr=c->r[0]; // 801E6B24
  c->r[1]=c->r[1]+0x00000080u; // 801E6B28
  return; // 801E6B2C
}

// fn_801E6B30
void f_801E6B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6B30
  c->r[0]=c->lr; // 801E6B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6B38
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6B40
  cmps(c,0,(int32_t)c->r[0],0); // 801E6B44
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6B48
  c->r[30]=c->r[3]|c->r[3]; // 801E6B4C
  if (!crb(c,2)) { goto L_801E6B5C; } // 801E6B50
  c->r[3]=0u+0x00000000u; // 801E6B54
  goto L_801E6BBC; // 801E6B58
L_801E6B5C:;
  if (!crb(c,2)) { goto L_801E6B7C; } // 801E6B5C
  c->r[3]=0u+0x802D0000u; // 801E6B60
  c->r[5]=0u+0x802D0000u; // 801E6B64
  c->r[3]=c->r[3]+0x000014B8u; // 801E6B68
  c->r[4]=0u+0x0000008Eu; // 801E6B6C
  c->r[5]=c->r[5]+0x00001610u; // 801E6B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6B74
  c->lr=0x801E6B7Cu; f_801F9770(c); // 801E6B78
L_801E6B7C:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 801E6B7C
  c->r[0]=R8(c->r[30]+0x00000011u); // 801E6B80
  c->r[31]=c->r[30]+0x00000008u; // 801E6B84
  cmps(c,0,(int32_t)c->r[0],0); // 801E6B88
  if (crb(c,2)) { goto L_801E6BA8; } // 801E6B8C
  c->r[5]=0u+0x802D0000u; // 801E6B90
  c->r[3]=c->r[13]+0xFFFF9EC8u; // 801E6B94
  c->r[5]=c->r[5]+0x000018D0u; // 801E6B98
  c->r[4]=0u+0x0000008Du; // 801E6B9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6BA0
  c->lr=0x801E6BA8u; f_801F9770(c); // 801E6BA4
L_801E6BA8:;
  c->r[3]=R8(c->r[30]+0x00000010u); // 801E6BA8
  c->r[5]=c->r[31]|c->r[31]; // 801E6BAC
  c->r[4]=R32(c->r[30]+0x00000014u); // 801E6BB0
  c->lr=0x801E6BB8u; f_801EF600(c); // 801E6BB4
  c->r[3]=R8(c->r[3]+0x00000000u); // 801E6BB8
L_801E6BBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6BBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6BC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6BC4
  c->lr=c->r[0]; // 801E6BC8
  c->r[1]=c->r[1]+0x00000010u; // 801E6BCC
  return; // 801E6BD0
}

// fn_801E6BE0
void f_801E6BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6BE0
  c->r[0]=c->lr; // 801E6BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6BE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6BF0
  cmps(c,0,(int32_t)c->r[0],0); // 801E6BF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6BF8
  c->r[30]=c->r[3]|c->r[3]; // 801E6BFC
  if (!crb(c,2)) { goto L_801E6C0C; } // 801E6C00
  c->r[3]=0u+0x00000000u; // 801E6C04
  goto L_801E6C6C; // 801E6C08
L_801E6C0C:;
  if (!crb(c,2)) { goto L_801E6C2C; } // 801E6C0C
  c->r[3]=0u+0x802D0000u; // 801E6C10
  c->r[5]=0u+0x802D0000u; // 801E6C14
  c->r[3]=c->r[3]+0x000014B8u; // 801E6C18
  c->r[4]=0u+0x000000A3u; // 801E6C1C
  c->r[5]=c->r[5]+0x00001610u; // 801E6C20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6C24
  c->lr=0x801E6C2Cu; f_801F9770(c); // 801E6C28
L_801E6C2C:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 801E6C2C
  c->r[0]=R8(c->r[30]+0x00000019u); // 801E6C30
  c->r[31]=c->r[30]+0x00000008u; // 801E6C34
  cmps(c,0,(int32_t)c->r[0],0); // 801E6C38
  if (crb(c,2)) { goto L_801E6C58; } // 801E6C3C
  c->r[5]=0u+0x802D0000u; // 801E6C40
  c->r[3]=c->r[13]+0xFFFF9EC0u; // 801E6C44
  c->r[5]=c->r[5]+0x000018A8u; // 801E6C48
  c->r[4]=0u+0x0000008Du; // 801E6C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6C50
  c->lr=0x801E6C58u; f_801F9770(c); // 801E6C54
L_801E6C58:;
  c->r[3]=R8(c->r[30]+0x00000018u); // 801E6C58
  c->r[5]=c->r[31]|c->r[31]; // 801E6C5C
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 801E6C60
  c->lr=0x801E6C68u; f_801EF600(c); // 801E6C64
  c->r[3]=R8(c->r[3]+0x00000000u); // 801E6C68
L_801E6C6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6C6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6C70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6C74
  c->lr=c->r[0]; // 801E6C78
  c->r[1]=c->r[1]+0x00000010u; // 801E6C7C
  return; // 801E6C80
}

// fn_801E6C90
void f_801E6C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6C90
  c->r[0]=c->lr; // 801E6C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6C98
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6C9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E6CA0
  if (!crb(c,2)) { goto L_801E6CB0; } // 801E6CA4
  c->r[3]=0u+0x00000000u; // 801E6CA8
  goto L_801E6CBC; // 801E6CAC
L_801E6CB0:;
  c->r[3]=c->r[3]+0x00000004u; // 801E6CB0
  c->lr=0x801E6CB8u; f_801E6280(c); // 801E6CB4
  c->r[3]=0u+0x00000001u; // 801E6CB8
L_801E6CBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6CBC
  c->lr=c->r[0]; // 801E6CC0
  c->r[1]=c->r[1]+0x00000010u; // 801E6CC4
  return; // 801E6CC8
}

// fn_801E6CD0
void f_801E6CD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6CD0
  c->r[0]=c->lr; // 801E6CD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6CD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6CDC
  cmps(c,0,(int32_t)c->r[0],0); // 801E6CE0
  if (!crb(c,2)) { goto L_801E6CF0; } // 801E6CE4
  c->r[3]=0u+0x00000000u; // 801E6CE8
  goto L_801E6CFC; // 801E6CEC
L_801E6CF0:;
  c->r[3]=c->r[3]+0x00000004u; // 801E6CF0
  c->lr=0x801E6CF8u; f_801E6470(c); // 801E6CF4
  c->r[3]=0u+0x00000001u; // 801E6CF8
L_801E6CFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6CFC
  c->lr=c->r[0]; // 801E6D00
  c->r[1]=c->r[1]+0x00000010u; // 801E6D04
  return; // 801E6D08
}

// fn_801E6D10
void f_801E6D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6D10
  c->r[0]=c->lr; // 801E6D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6D18
  c->r[11]=c->r[1]+0x00000020u; // 801E6D1C
  c->lr=0x801E6D24u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E6D20
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6D24
  c->r[28]=0u+0x802D0000u; // 801E6D28
  c->r[29]=c->r[3]|c->r[3]; // 801E6D2C
  c->r[30]=c->r[4]|c->r[4]; // 801E6D30
  cmps(c,0,(int32_t)c->r[0],0); // 801E6D34
  c->r[31]=c->r[5]|c->r[5]; // 801E6D38
  c->r[26]=c->r[6]|c->r[6]; // 801E6D3C
  c->r[28]=c->r[28]+0x000014B8u; // 801E6D40
  if (!crb(c,2)) { goto L_801E6D50; } // 801E6D44
  c->r[3]=0u+0x00000000u; // 801E6D48
  goto L_801E6F38; // 801E6D4C
L_801E6D50:;
  if (!crb(c,2)) { goto L_801E6D68; } // 801E6D50
  c->r[3]=c->r[28]+0x00000000u; // 801E6D54
  c->r[5]=c->r[28]+0x00000158u; // 801E6D58
  c->r[4]=0u+0x00000121u; // 801E6D5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6D60
  c->lr=0x801E6D68u; f_801F9770(c); // 801E6D64
L_801E6D68:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E6D68
  if (!crb(c,2)) { goto L_801E6D84; } // 801E6D6C
  c->r[3]=c->r[28]+0x00000000u; // 801E6D70
  c->r[5]=c->r[28]+0x000002C4u; // 801E6D74
  c->r[4]=0u+0x00000122u; // 801E6D78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6D7C
  c->lr=0x801E6D84u; f_801F9770(c); // 801E6D80
L_801E6D84:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E6D84
  if (!crb(c,2)) { goto L_801E6DA0; } // 801E6D88
  c->r[3]=c->r[28]+0x00000000u; // 801E6D8C
  c->r[5]=c->r[28]+0x000002F0u; // 801E6D90
  c->r[4]=0u+0x00000123u; // 801E6D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6D98
  c->lr=0x801E6DA0u; f_801F9770(c); // 801E6D9C
L_801E6DA0:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 801E6DA0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801E6DA4
  c->r[27]=c->r[3]+0x00000008u; // 801E6DA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E6DAC
  if (crb(c,2)) { goto L_801E6DCC; } // 801E6DB0
  c->r[5]=0u+0x802D0000u; // 801E6DB4
  c->r[3]=c->r[13]+0xFFFF9ED0u; // 801E6DB8
  c->r[5]=c->r[5]+0x000018F8u; // 801E6DBC
  c->r[4]=0u+0x0000008Du; // 801E6DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6DC4
  c->lr=0x801E6DCCu; f_801F9770(c); // 801E6DC8
L_801E6DCC:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 801E6DCC
  c->r[5]=c->r[27]|c->r[27]; // 801E6DD0
  c->r[4]=R32(c->r[27]+0x00000004u); // 801E6DD4
  c->lr=0x801E6DDCu; f_801EF600(c); // 801E6DD8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E6DDC
  cmpu(c,0,c->r[0],0x00000002u); // 801E6DE0
  if (!crb(c,2)) { goto L_801E6F34; } // 801E6DE4
  c->r[28]=R32(c->r[29]+0x00000008u); // 801E6DE8
  c->r[0]=R8(c->r[28]+0x00000019u); // 801E6DEC
  c->r[27]=c->r[28]+0x00000008u; // 801E6DF0
  cmps(c,0,(int32_t)c->r[0],0); // 801E6DF4
  if (crb(c,2)) { goto L_801E6E14; } // 801E6DF8
  c->r[5]=0u+0x802D0000u; // 801E6DFC
  c->r[3]=c->r[13]+0xFFFF9EC0u; // 801E6E00
  c->r[5]=c->r[5]+0x000018A8u; // 801E6E04
  c->r[4]=0u+0x0000008Du; // 801E6E08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6E0C
  c->lr=0x801E6E14u; f_801F9770(c); // 801E6E10
L_801E6E14:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 801E6E14
  c->r[5]=c->r[27]|c->r[27]; // 801E6E18
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801E6E1C
  c->lr=0x801E6E24u; f_801EF600(c); // 801E6E20
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E6E24
  c->r[28]=c->r[3]|c->r[3]; // 801E6E28
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801E6E2C
  if (!crb(c,0)) { goto L_801E6F34; } // 801E6E30
  c->r[26]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801E6E34
  c->r[4]=R32(c->r[29]+0x00000008u); // 801E6E38
  c->r[3]=c->r[3]+c->r[26]; // 801E6E3C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E6E40
  c->r[27]=c->r[4]+0x00000008u; // 801E6E44
  cmps(c,0,(int32_t)c->r[0],0); // 801E6E48
  if (crb(c,2)) { goto L_801E6E68; } // 801E6E4C
  c->r[5]=0u+0x802D0000u; // 801E6E50
  c->r[3]=c->r[13]+0xFFFF9EA0u; // 801E6E54
  c->r[5]=c->r[5]+0x00001808u; // 801E6E58
  c->r[4]=0u+0x0000008Du; // 801E6E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6E60
  c->lr=0x801E6E68u; f_801F9770(c); // 801E6E64
L_801E6E68:;
  c->r[4]=c->r[28]+c->r[26]; // 801E6E68
  c->r[5]=c->r[27]|c->r[27]; // 801E6E6C
  c->r[3]=R8(c->r[4]+0x00000004u); // 801E6E70
  c->r[4]=R32(c->r[4]+0x00000008u); // 801E6E74
  c->lr=0x801E6E7Cu; f_801EF600(c); // 801E6E78
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E6E7C
  c->r[28]=c->r[3]|c->r[3]; // 801E6E80
  c->r[3]=R32(c->r[29]+0x00000008u); // 801E6E84
  cmps(c,0,(int32_t)c->r[0],0); // 801E6E88
  c->r[29]=c->r[3]+0x00000008u; // 801E6E8C
  if (crb(c,2)) { goto L_801E6EAC; } // 801E6E90
  c->r[5]=0u+0x802D0000u; // 801E6E94
  c->r[3]=c->r[13]+0xFFFF9EA8u; // 801E6E98
  c->r[5]=c->r[5]+0x00001830u; // 801E6E9C
  c->r[4]=0u+0x0000008Du; // 801E6EA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6EA4
  c->lr=0x801E6EACu; f_801F9770(c); // 801E6EA8
L_801E6EAC:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 801E6EAC
  c->r[5]=c->r[29]|c->r[29]; // 801E6EB0
  c->r[4]=R32(c->r[28]+0x00000004u); // 801E6EB4
  c->lr=0x801E6EBCu; f_801EF600(c); // 801E6EB8
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E6EBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6EC0
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E6EC4
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E6EC8
  c->r[4]=R32(c->r[3]+0x00000008u); // 801E6ECC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E6ED0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801E6ED4
  W32(c->r[30]+0x00000008u,c->r[4]); // 801E6ED8
  c->r[4]=R32(c->r[3]+0x00000010u); // 801E6EDC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E6EE0
  W32(c->r[30]+0x00000014u,c->r[0]); // 801E6EE4
  W32(c->r[30]+0x00000010u,c->r[4]); // 801E6EE8
  c->r[4]=R32(c->r[3]+0x00000018u); // 801E6EEC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801E6EF0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801E6EF4
  W32(c->r[30]+0x00000018u,c->r[4]); // 801E6EF8
  c->r[0]=R16(c->r[3]+0x00000020u); // 801E6EFC
  W16(c->r[30]+0x00000020u,c->r[0]); // 801E6F00
  c->r[0]=R16(c->r[3]+0x00000022u); // 801E6F04
  W16(c->r[30]+0x00000022u,c->r[0]); // 801E6F08
  c->r[0]=R16(c->r[3]+0x00000024u); // 801E6F0C
  W16(c->r[30]+0x00000024u,c->r[0]); // 801E6F10
  c->r[0]=R16(c->r[3]+0x00000026u); // 801E6F14
  W16(c->r[30]+0x00000026u,c->r[0]); // 801E6F18
  c->r[0]=R16(c->r[3]+0x00000028u); // 801E6F1C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801E6F20
  c->r[0]=R16(c->r[3]+0x0000002Au); // 801E6F24
  W16(c->r[31]+0x00000002u,c->r[0]); // 801E6F28
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 801E6F2C
  W16(c->r[31]+0x00000004u,c->r[0]); // 801E6F30
L_801E6F34:;
  c->r[3]=0u+0x00000001u; // 801E6F34
L_801E6F38:;
  c->r[11]=c->r[1]+0x00000020u; // 801E6F38
  c->lr=0x801E6F40u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E6F3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6F40
  c->lr=c->r[0]; // 801E6F44
  c->r[1]=c->r[1]+0x00000020u; // 801E6F48
  return; // 801E6F4C
}

// fn_801E6F50
void f_801E6F50(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801E6F50
  c->r[12]=c->r[1]|c->r[1]; // 801E6F54
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 801E6F58
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6F5C
  c->r[0]=c->lr; // 801E6F60
  W32(c->r[12]+0x00000004u,c->r[0]); // 801E6F64
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801E6F68
  c->r[31]=c->r[7]|c->r[7]; // 801E6F6C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801E6F70
  c->r[30]=c->r[5]|c->r[5]; // 801E6F74
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801E6F78
  c->r[29]=c->r[4]|c->r[4]; // 801E6F7C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 801E6F80
  c->r[28]=c->r[3]|c->r[3]; // 801E6F84
  c->r[8]=R32(c->r[3]+0x00000004u); // 801E6F88
  c->r[0]=0u-c->r[8]; // 801E6F8C
  c->r[0]=c->r[0]|c->r[8]; // 801E6F90
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801E6F94
  if (!crb(c,2)) { goto L_801E6FA4; } // 801E6F98
  c->r[3]=0u+0x00000000u; // 801E6F9C
  goto L_801E7108; // 801E6FA0
L_801E6FA4:;
  if (crb(c,2)) { goto L_801E6FB0; } // 801E6FA4
  c->r[4]=R32(c->r[8]+0x00000018u); // 801E6FA8
  goto L_801E6FB4; // 801E6FAC
L_801E6FB0:;
  c->r[4]=0u+0x00000000u; // 801E6FB0
L_801E6FB4:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 801E6FB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E6FB8
  c->r[5]=0u+0x00000000u; // 801E6FBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E6FC0
  c->r[12]=R32(c->r[12]+0x00000044u); // 801E6FC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E6FC8
  c->r[4]=c->r[4]+c->r[0]; // 801E6FCC
  c->r[4]=c->r[4]+0x00000008u; // 801E6FD0
  c->ctr=c->r[12]; // 801E6FD4
  if (true) { c->lr=0x801E6FDCu; dispatch(c,c->ctr); } // 801E6FD8
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801E6FDC
  cmpu(c,0,c->r[0],0x00000020u); // 801E6FE0
  if (!crb(c,1)) { goto L_801E7004; } // 801E6FE4
  c->r[3]=0u+0x802D0000u; // 801E6FE8
  c->r[5]=0u+0x802D0000u; // 801E6FEC
  c->r[3]=c->r[3]+0x000014B8u; // 801E6FF0
  c->r[4]=0u+0x000001F3u; // 801E6FF4
  c->r[5]=c->r[5]+0x000017D8u; // 801E6FF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E6FFC
  c->lr=0x801E7004u; f_801F9770(c); // 801E7000
L_801E7004:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E7004
  c->r[4]=c->r[1]+0x00000020u; // 801E7008
  c->r[5]=0u+0x00000020u; // 801E700C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E7010
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E7014
  c->ctr=c->r[12]; // 801E7018
  if (true) { c->lr=0x801E7020u; dispatch(c,c->ctr); } // 801E701C
  cmpu(c,0,c->r[3],0x00000020u); // 801E7020
  if (crb(c,2)) { goto L_801E7030; } // 801E7024
  c->r[3]=0u+0x00000000u; // 801E7028
  goto L_801E7108; // 801E702C
L_801E7030:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E7030
  c->r[6]=c->r[1]+0x00000020u; // 801E7034
  c->r[3]=0u+0x00000000u; // 801E7038
  c->r[4]=0u+0x00000000u; // 801E703C
  if (!crb(c,1)) { goto L_801E7104; } // 801E7040
  c->r[0]=rotl(c->r[31],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801E7044
  c->ctr=c->r[0]; // 801E7048
  if (crb(c,2)) { goto L_801E70DC; } // 801E704C
L_801E7050:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 801E7050
  c->r[0]=c->r[4]+0x00000001u; // 801E7054
  W16(c->r[29]+c->r[4],c->r[5]); // 801E7058
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E705C
  c->r[3]=c->r[3]+0x00000004u; // 801E7060
  c->r[0]=R16(c->r[6]+c->r[0]); // 801E7064
  W16(c->r[30]+c->r[4],c->r[0]); // 801E7068
  c->r[0]=c->r[4]+0x00000003u; // 801E706C
  c->r[4]=c->r[4]+0x00000002u; // 801E7070
  c->r[5]=R16(c->r[6]+c->r[3]); // 801E7074
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E7078
  W16(c->r[29]+c->r[4],c->r[5]); // 801E707C
  c->r[3]=c->r[3]+0x00000004u; // 801E7080
  c->r[0]=R16(c->r[6]+c->r[0]); // 801E7084
  W16(c->r[30]+c->r[4],c->r[0]); // 801E7088
  c->r[0]=c->r[4]+0x00000003u; // 801E708C
  c->r[4]=c->r[4]+0x00000002u; // 801E7090
  c->r[5]=R16(c->r[6]+c->r[3]); // 801E7094
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E7098
  W16(c->r[29]+c->r[4],c->r[5]); // 801E709C
  c->r[3]=c->r[3]+0x00000004u; // 801E70A0
  c->r[0]=R16(c->r[6]+c->r[0]); // 801E70A4
  W16(c->r[30]+c->r[4],c->r[0]); // 801E70A8
  c->r[0]=c->r[4]+0x00000003u; // 801E70AC
  c->r[4]=c->r[4]+0x00000002u; // 801E70B0
  c->r[5]=R16(c->r[6]+c->r[3]); // 801E70B4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E70B8
  W16(c->r[29]+c->r[4],c->r[5]); // 801E70BC
  c->r[3]=c->r[3]+0x00000004u; // 801E70C0
  c->r[0]=R16(c->r[6]+c->r[0]); // 801E70C4
  W16(c->r[30]+c->r[4],c->r[0]); // 801E70C8
  c->r[4]=c->r[4]+0x00000002u; // 801E70CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7050; } // 801E70D0
  c->r[31]=c->r[31]&0x00000003u; cr0(c,c->r[31]); // 801E70D4
  if (crb(c,2)) { goto L_801E7104; } // 801E70D8
L_801E70DC:;
  c->ctr=c->r[31]; // 801E70DC
L_801E70E0:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 801E70E0
  c->r[0]=c->r[4]+0x00000001u; // 801E70E4
  W16(c->r[29]+c->r[4],c->r[5]); // 801E70E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E70EC
  c->r[3]=c->r[3]+0x00000004u; // 801E70F0
  c->r[0]=R16(c->r[6]+c->r[0]); // 801E70F4
  W16(c->r[30]+c->r[4],c->r[0]); // 801E70F8
  c->r[4]=c->r[4]+0x00000002u; // 801E70FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E70E0; } // 801E7100
L_801E7104:;
  c->r[3]=0u+0x00000001u; // 801E7104
L_801E7108:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E7108
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E710C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801E7110
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801E7114
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801E7118
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 801E711C
  c->lr=c->r[0]; // 801E7120
  c->r[1]=c->r[10]|c->r[10]; // 801E7124
  return; // 801E7128
}

// fn_801E7130
void f_801E7130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7130
  c->r[0]=c->lr; // 801E7134
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E713C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7140
  c->r[30]=c->r[3]|c->r[3]; // 801E7144
  c->lr=0x801E714Cu; f_801D2750(c); // 801E7148
  c->r[6]=0u+0x802D0000u; // 801E714C
  c->r[31]=0u+0x00000000u; // 801E7150
  c->r[6]=c->r[6]+0x00001EA8u; // 801E7154
  c->r[8]=0u+0x802D0000u; // 801E7158
  c->r[9]=c->r[30]+0x00000178u; // 801E715C
  c->r[4]=0u+0x801F0000u; // 801E7160
  c->r[0]=c->r[6]+0x00000024u; // 801E7164
  c->r[8]=c->r[8]+0x00001F08u; // 801E7168
  c->r[5]=0u+0x801E0000u; // 801E716C
  W32(c->r[30]+0x00000000u,c->r[6]); // 801E7170
  c->r[3]=c->r[30]+0x00000184u; // 801E7174
  c->r[4]=c->r[4]+0xFFFF9EF0u; // 801E7178
  W32(c->r[30]+0x000000B4u,c->r[31]); // 801E717C
  c->r[5]=c->r[5]+0x000072B0u; // 801E7180
  c->r[6]=0u+0x00000034u; // 801E7184
  c->r[7]=0u+0x00000020u; // 801E7188
  W32(c->r[30]+0x000000B8u,c->r[31]); // 801E718C
  W32(c->r[30]+0x000000BCu,c->r[0]); // 801E7190
  W8(c->r[30]+0x00000100u,c->r[31]); // 801E7194
  W8(c->r[30]+0x00000101u,c->r[31]); // 801E7198
  W32(c->r[30]+0x00000158u,c->r[31]); // 801E719C
  W32(c->r[30]+0x0000015Cu,c->r[31]); // 801E71A0
  W8(c->r[30]+0x00000160u,c->r[31]); // 801E71A4
  W32(c->r[30]+0x00000154u,c->r[8]); // 801E71A8
  W32(c->r[30]+0x00000164u,c->r[31]); // 801E71AC
  W32(c->r[30]+0x00000168u,c->r[31]); // 801E71B0
  W32(c->r[30]+0x00000170u,c->r[31]); // 801E71B4
  W32(c->r[30]+0x00000174u,c->r[31]); // 801E71B8
  W32(c->r[30]+0x00000178u,c->r[9]); // 801E71BC
  W32(c->r[30]+0x0000017Cu,c->r[9]); // 801E71C0
  W32(c->r[30]+0x00000180u,c->r[31]); // 801E71C4
  c->lr=0x801E71CCu; f_80217288(c); // 801E71C8
  W32(c->r[30]+0x00000808u,c->r[31]); // 801E71CC
  c->r[0]=R8(c->r[13]+0xFFFFAE80u); // 801E71D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E71D4
  if (!crb(c,2)) { goto L_801E71F0; } // 801E71D8
  c->r[3]=0u+0x80390000u; // 801E71DC
  c->r[3]=c->r[3]+0x000051A0u; // 801E71E0
  c->lr=0x801E71E8u; f_800CCD10(c); // 801E71E4
  c->r[0]=0u+0x00000001u; // 801E71E8
  W8(c->r[13]+0xFFFFAE80u,c->r[0]); // 801E71EC
L_801E71F0:;
  c->r[3]=c->r[30]+0x00000180u; // 801E71F0
  c->r[4]=c->r[30]+0x00000184u; // 801E71F4
  c->r[5]=0u+0x00000680u; // 801E71F8
  c->r[6]=0u+0x00000034u; // 801E71FC
  c->lr=0x801E7204u; f_801D7660(c); // 801E7200
  cmpu(c,0,c->r[3],0x00000020u); // 801E7204
  if (crb(c,2)) { goto L_801E7228; } // 801E7208
  c->r[3]=0u+0x802D0000u; // 801E720C
  c->r[5]=0u+0x802D0000u; // 801E7210
  c->r[3]=c->r[3]+0x00001920u; // 801E7214
  c->r[4]=0u+0x00000046u; // 801E7218
  c->r[5]=c->r[5]+0x00001934u; // 801E721C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7220
  c->lr=0x801E7228u; f_801F9770(c); // 801E7224
L_801E7228:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E722C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7230
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7234
  c->lr=c->r[0]; // 801E7238
  c->r[1]=c->r[1]+0x00000010u; // 801E723C
  return; // 801E7240
}

// fn_801E7250
void f_801E7250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7250
  c->r[0]=c->lr; // 801E7254
  cmps(c,0,(int32_t)c->r[3],0); // 801E7258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E725C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7260
  c->r[31]=c->r[4]|c->r[4]; // 801E7264
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7268
  c->r[30]=c->r[3]|c->r[3]; // 801E726C
  if (crb(c,2)) { goto L_801E728C; } // 801E7270
  c->r[4]=0u+0x00000000u; // 801E7274
  c->lr=0x801E727Cu; f_801EAA10(c); // 801E7278
  cmps(c,0,(int32_t)c->r[31],0); // 801E727C
  if (!crb(c,1)) { goto L_801E728C; } // 801E7280
  c->r[3]=c->r[30]|c->r[30]; // 801E7284
  c->lr=0x801E728Cu; f_800B9AD0(c); // 801E7288
L_801E728C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E728C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7290
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7294
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7298
  c->lr=c->r[0]; // 801E729C
  c->r[1]=c->r[1]+0x00000010u; // 801E72A0
  return; // 801E72A4
}

// fn_801E72B0
void f_801E72B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E72B0
  c->r[0]=c->lr; // 801E72B4
  cmps(c,0,(int32_t)c->r[3],0); // 801E72B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E72BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E72C0
  c->r[31]=c->r[4]|c->r[4]; // 801E72C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E72C8
  c->r[30]=c->r[3]|c->r[3]; // 801E72CC
  if (crb(c,2)) { goto L_801E72EC; } // 801E72D0
  c->r[4]=0u+0x00000000u; // 801E72D4
  c->lr=0x801E72DCu; f_801EAA10(c); // 801E72D8
  cmps(c,0,(int32_t)c->r[31],0); // 801E72DC
  if (!crb(c,1)) { goto L_801E72EC; } // 801E72E0
  c->r[3]=c->r[30]|c->r[30]; // 801E72E4
  c->lr=0x801E72ECu; f_800B9AD0(c); // 801E72E8
L_801E72EC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E72EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E72F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E72F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E72F8
  c->lr=c->r[0]; // 801E72FC
  c->r[1]=c->r[1]+0x00000010u; // 801E7300
  return; // 801E7304
}

// fn_801E7310
void f_801E7310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7310
  c->r[0]=c->lr; // 801E7314
  cmps(c,0,(int32_t)c->r[3],0); // 801E7318
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E731C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7320
  c->r[31]=c->r[4]|c->r[4]; // 801E7324
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7328
  c->r[30]=c->r[3]|c->r[3]; // 801E732C
  if (crb(c,2)) { goto L_801E741C; } // 801E7330
  c->r[12]=0u+0x802D0000u; // 801E7334
  c->r[12]=c->r[12]+0x00001EA8u; // 801E7338
  W32(c->r[3]+0x00000000u,c->r[12]); // 801E733C
  c->r[0]=c->r[12]+0x00000024u; // 801E7340
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801E7344
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E7348
  c->ctr=c->r[12]; // 801E734C
  if (true) { c->lr=0x801E7354u; dispatch(c,c->ctr); } // 801E7350
  c->lr=0x801E7358u; f_801E5840(c); // 801E7354
  c->r[3]=c->r[3]+0x00000354u; // 801E7358
  c->lr=0x801E7360u; f_800CCD50(c); // 801E735C
  c->r[0]=R8(c->r[30]+0x00000100u); // 801E7360
  cmps(c,0,(int32_t)c->r[0],0); // 801E7364
  if (!crb(c,2)) { goto L_801E737C; } // 801E7368
  c->lr=0x801E7370u; f_801E5840(c); // 801E736C
  c->r[3]=c->r[3]+0x00000354u; // 801E7370
  c->lr=0x801E7378u; f_800CCE30(c); // 801E7374
  goto L_801E73D4; // 801E7378
L_801E737C:;
  c->r[0]=0u+0x00000000u; // 801E737C
  W32(c->r[30]+0x00000804u,c->r[0]); // 801E7380
  c->r[3]=c->r[30]+0x00000180u; // 801E7384
  c->lr=0x801E738Cu; f_801D7880(c); // 801E7388
  cmps(c,0,(int32_t)c->r[3],32); // 801E738C
  if (crb(c,2)) { goto L_801E73B0; } // 801E7390
  c->r[3]=0u+0x802D0000u; // 801E7394
  c->r[5]=0u+0x802D0000u; // 801E7398
  c->r[3]=c->r[3]+0x00001920u; // 801E739C
  c->r[4]=0u+0x000000BFu; // 801E73A0
  c->r[5]=c->r[5]+0x00001970u; // 801E73A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E73A8
  c->lr=0x801E73B0u; f_801F9770(c); // 801E73AC
L_801E73B0:;
  c->r[3]=c->r[30]+0x00000180u; // 801E73B0
  c->r[4]=c->r[30]+0x00000184u; // 801E73B4
  c->r[5]=0u+0x00000680u; // 801E73B8
  c->lr=0x801E73C0u; f_801D77D0(c); // 801E73BC
  c->r[0]=0u+0x00000000u; // 801E73C0
  W8(c->r[30]+0x00000100u,c->r[0]); // 801E73C4
  c->lr=0x801E73CCu; f_801E5840(c); // 801E73C8
  c->r[3]=c->r[3]+0x00000354u; // 801E73CC
  c->lr=0x801E73D4u; f_800CCE30(c); // 801E73D0
L_801E73D4:;
  c->r[4]=0u+0x801E0000u; // 801E73D4
  c->r[3]=c->r[30]+0x00000184u; // 801E73D8
  c->r[4]=c->r[4]+0x000072B0u; // 801E73DC
  c->r[5]=0u+0x00000034u; // 801E73E0
  c->r[6]=0u+0x00000020u; // 801E73E4
  c->lr=0x801E73ECu; f_80217380(c); // 801E73E8
  c->r[3]=addc(c,c->r[30],0x00000174u,0); cr0(c,c->r[3]); // 801E73EC
  if (crb(c,2)) { goto L_801E73FC; } // 801E73F0
  c->r[4]=0u+0x00000000u; // 801E73F4
  c->lr=0x801E73FCu; f_801F9DB0(c); // 801E73F8
L_801E73FC:;
  c->r[3]=addc(c,c->r[30],0x00000154u,0); cr0(c,c->r[3]); // 801E73FC
  if (crb(c,2)) { goto L_801E740C; } // 801E7400
  c->r[4]=0u+0x00000000u; // 801E7404
  c->lr=0x801E740Cu; f_801EAA10(c); // 801E7408
L_801E740C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E740C
  if (!crb(c,1)) { goto L_801E741C; } // 801E7410
  c->r[3]=c->r[30]|c->r[30]; // 801E7414
  c->lr=0x801E741Cu; f_800B9AD0(c); // 801E7418
L_801E741C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E741C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7420
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7424
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7428
  c->lr=c->r[0]; // 801E742C
  c->r[1]=c->r[1]+0x00000010u; // 801E7430
  return; // 801E7434
}

// fn_801E7440
void f_801E7440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7440
  c->r[0]=c->lr; // 801E7444
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7448
  c->r[11]=c->r[1]+0x00000020u; // 801E744C
  c->lr=0x801E7454u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7450
  c->r[29]=0u+0x802D0000u; // 801E7454
  c->r[31]=c->r[3]|c->r[3]; // 801E7458
  c->r[30]=c->r[4]|c->r[4]; // 801E745C
  c->r[26]=c->r[5]|c->r[5]; // 801E7460
  c->r[28]=c->r[6]|c->r[6]; // 801E7464
  c->r[27]=c->r[7]|c->r[7]; // 801E7468
  c->r[29]=c->r[29]+0x00001920u; // 801E746C
  c->lr=0x801E7474u; f_801E5840(c); // 801E7470
  c->r[3]=c->r[3]+0x00000354u; // 801E7474
  c->lr=0x801E747Cu; f_800CCD50(c); // 801E7478
  cmps(c,0,(int32_t)c->r[30],0); // 801E747C
  if (!crb(c,2)) { goto L_801E7498; } // 801E7480
  c->r[3]=c->r[29]+0x00000000u; // 801E7484
  c->r[5]=c->r[29]+0x000000A0u; // 801E7488
  c->r[4]=0u+0x00000069u; // 801E748C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7490
  c->lr=0x801E7498u; f_801F9770(c); // 801E7494
L_801E7498:;
  c->r[0]=R8(c->r[31]+0x00000100u); // 801E7498
  cmps(c,0,(int32_t)c->r[0],0); // 801E749C
  if (crb(c,2)) { goto L_801E7530; } // 801E74A0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E74A4
  c->r[3]=c->r[31]|c->r[31]; // 801E74A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E74AC
  c->ctr=c->r[12]; // 801E74B0
  if (true) { c->lr=0x801E74B8u; dispatch(c,c->ctr); } // 801E74B4
  c->lr=0x801E74BCu; f_801E5840(c); // 801E74B8
  c->r[3]=c->r[3]+0x00000354u; // 801E74BC
  c->lr=0x801E74C4u; f_800CCD50(c); // 801E74C0
  c->r[0]=R8(c->r[31]+0x00000100u); // 801E74C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E74C8
  if (!crb(c,2)) { goto L_801E74E0; } // 801E74CC
  c->lr=0x801E74D4u; f_801E5840(c); // 801E74D0
  c->r[3]=c->r[3]+0x00000354u; // 801E74D4
  c->lr=0x801E74DCu; f_800CCE30(c); // 801E74D8
  goto L_801E7530; // 801E74DC
L_801E74E0:;
  c->r[0]=0u+0x00000000u; // 801E74E0
  W32(c->r[31]+0x00000804u,c->r[0]); // 801E74E4
  c->r[3]=c->r[31]+0x00000180u; // 801E74E8
  c->lr=0x801E74F0u; f_801D7880(c); // 801E74EC
  cmps(c,0,(int32_t)c->r[3],32); // 801E74F0
  if (crb(c,2)) { goto L_801E750C; } // 801E74F4
  c->r[3]=c->r[29]+0x00000000u; // 801E74F8
  c->r[5]=c->r[29]+0x00000050u; // 801E74FC
  c->r[4]=0u+0x000000BFu; // 801E7500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7504
  c->lr=0x801E750Cu; f_801F9770(c); // 801E7508
L_801E750C:;
  c->r[3]=c->r[31]+0x00000180u; // 801E750C
  c->r[4]=c->r[31]+0x00000184u; // 801E7510
  c->r[5]=0u+0x00000680u; // 801E7514
  c->lr=0x801E751Cu; f_801D77D0(c); // 801E7518
  c->r[0]=0u+0x00000000u; // 801E751C
  W8(c->r[31]+0x00000100u,c->r[0]); // 801E7520
  c->lr=0x801E7528u; f_801E5840(c); // 801E7524
  c->r[3]=c->r[3]+0x00000354u; // 801E7528
  c->lr=0x801E7530u; f_800CCE30(c); // 801E752C
L_801E7530:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7530
  c->lr=0x801E7538u; f_801E7F60(c); // 801E7534
  cmps(c,0,(int32_t)c->r[26],16); // 801E7538
  c->r[0]=0u+0x00000010u; // 801E753C
  if (crb(c,1)) { goto L_801E7548; } // 801E7540
  c->r[0]=c->r[26]|c->r[26]; // 801E7544
L_801E7548:;
  W32(c->r[31]+0x00000810u,c->r[0]); // 801E7548
  c->r[4]=c->r[31]|c->r[31]; // 801E754C
  c->r[26]=0u+0x00000000u; // 801E7550
  c->r[0]=0u+0x00000001u; // 801E7554
  goto L_801E75A0; // 801E7558
  c->r[0]=c->r[0]|0x00000000u; // 801E755C
L_801E7560:;
  c->r[3]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[3]); // 801E7560
  if (crb(c,2)) { goto L_801E7594; } // 801E7564
  cmps(c,0,(int32_t)c->r[26],8); // 801E7568
  if (crb(c,0)) { goto L_801E7590; } // 801E756C
  c->r[6]=c->r[26]|c->r[26]; // 801E7570
  c->r[3]=c->r[29]+0x00000000u; // 801E7574
  c->r[5]=c->r[29]+0x000000CCu; // 801E7578
  c->r[4]=0u+0x00000085u; // 801E757C
  c->r[7]=0u+0x00000007u; // 801E7580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7584
  c->lr=0x801E758Cu; f_801F9810(c); // 801E7588
  goto L_801E75A8; // 801E758C
L_801E7590:;
  W8(c->r[4]+0x00000B58u,c->r[0]); // 801E7590
L_801E7594:;
  c->r[28]=rotl(c->r[28],31)&0x7FFFFFFFu; // 801E7594
  c->r[4]=c->r[4]+0x00000038u; // 801E7598
  c->r[26]=c->r[26]+0x00000001u; // 801E759C
L_801E75A0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E75A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E7560; } // 801E75A4
L_801E75A8:;
  cmps(c,0,(int32_t)c->r[26],8); // 801E75A8
  c->r[0]=0u+0x00000008u; // 801E75AC
  if (crb(c,1)) { goto L_801E75B8; } // 801E75B0
  c->r[0]=c->r[26]|c->r[26]; // 801E75B4
L_801E75B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E75B8
  W32(c->r[31]+0x0000080Cu,c->r[0]); // 801E75BC
  if (!crb(c,2)) { goto L_801E75D8; } // 801E75C0
  c->lr=0x801E75C8u; f_801E5840(c); // 801E75C4
  c->r[3]=c->r[3]+0x00000354u; // 801E75C8
  c->lr=0x801E75D0u; f_800CCE30(c); // 801E75CC
  c->r[3]=0u+0x00000002u; // 801E75D0
  goto L_801E76B0; // 801E75D4
L_801E75D8:;
  W32(c->r[31]+0x00000814u,c->r[27]); // 801E75D8
  W32(c->r[31]+0x00000804u,c->r[30]); // 801E75DC
  c->lr=0x801E75E4u; f_800CBAA0(c); // 801E75E0
  c->r[0]=R32(c->r[31]+0x00000810u); // 801E75E4
  c->r[30]=c->r[3]|c->r[3]; // 801E75E8
  cmps(c,0,(int32_t)c->r[0],0); // 801E75EC
  if (!crb(c,1)) { goto L_801E7690; } // 801E75F0
  c->r[28]=c->r[31]|c->r[31]; // 801E75F4
  c->r[27]=0u+0x00000000u; // 801E75F8
  goto L_801E7654; // 801E75FC
L_801E7600:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801E7600
  c->lr=0x801E7608u; f_801E60A0(c); // 801E7604
  cmps(c,0,(int32_t)c->r[3],0); // 801E7608
  if (!crb(c,2)) { goto L_801E7648; } // 801E760C
  c->r[26]=c->r[31]|c->r[31]; // 801E7610
  c->r[28]=0u+0x00000000u; // 801E7614
  c->r[29]=0u+0x00000000u; // 801E7618
  goto L_801E7638; // 801E761C
L_801E7620:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801E7620
  c->r[4]=R32(c->r[26]+0x00000818u); // 801E7624
  c->lr=0x801E762Cu; f_801E6190(c); // 801E7628
  W32(c->r[26]+0x00000818u,c->r[29]); // 801E762C
  c->r[26]=c->r[26]+0x00000034u; // 801E7630
  c->r[28]=c->r[28]+0x00000001u; // 801E7634
L_801E7638:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801E7638
  if (crb(c,0)) { IRQCHK(c); goto L_801E7620; } // 801E763C
  c->r[0]=0u+0x00000000u; // 801E7640
  goto L_801E7664; // 801E7644
L_801E7648:;
  W32(c->r[28]+0x00000818u,c->r[3]); // 801E7648
  c->r[28]=c->r[28]+0x00000034u; // 801E764C
  c->r[27]=c->r[27]+0x00000001u; // 801E7650
L_801E7654:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 801E7654
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E7658
  if (crb(c,0)) { IRQCHK(c); goto L_801E7600; } // 801E765C
  c->r[0]=0u+0x00000001u; // 801E7660
L_801E7664:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E7664
  if (!crb(c,2)) { goto L_801E7688; } // 801E7668
  c->r[3]=c->r[30]|c->r[30]; // 801E766C
  c->lr=0x801E7674u; f_800CBAE0(c); // 801E7670
  c->lr=0x801E7678u; f_801E5840(c); // 801E7674
  c->r[3]=c->r[3]+0x00000354u; // 801E7678
  c->lr=0x801E7680u; f_800CCE30(c); // 801E767C
  c->r[3]=0u+0x00000001u; // 801E7680
  goto L_801E76B0; // 801E7684
L_801E7688:;
  c->r[0]=0u+0x00000001u; // 801E7688
  W8(c->r[31]+0x0000010Fu,c->r[0]); // 801E768C
L_801E7690:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7690
  c->lr=0x801E7698u; f_800CBAE0(c); // 801E7694
  c->r[0]=0u+0x00000001u; // 801E7698
  W8(c->r[31]+0x00000100u,c->r[0]); // 801E769C
  c->lr=0x801E76A4u; f_801E5840(c); // 801E76A0
  c->r[3]=c->r[3]+0x00000354u; // 801E76A4
  c->lr=0x801E76ACu; f_800CCE30(c); // 801E76A8
  c->r[3]=0u+0x00000000u; // 801E76AC
L_801E76B0:;
  c->r[11]=c->r[1]+0x00000020u; // 801E76B0
  c->lr=0x801E76B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E76B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E76B8
  c->lr=c->r[0]; // 801E76BC
  c->r[1]=c->r[1]+0x00000020u; // 801E76C0
  return; // 801E76C4
}

// fn_801E76D0
void f_801E76D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E76D0
  c->r[0]=c->lr; // 801E76D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E76D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E76DC
  c->r[31]=c->r[3]|c->r[3]; // 801E76E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E76E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E76E8
  c->ctr=c->r[12]; // 801E76EC
  if (true) { c->lr=0x801E76F4u; dispatch(c,c->ctr); } // 801E76F0
  c->lr=0x801E76F8u; f_801E5840(c); // 801E76F4
  c->r[3]=c->r[3]+0x00000354u; // 801E76F8
  c->lr=0x801E7700u; f_800CCD50(c); // 801E76FC
  c->r[0]=R8(c->r[31]+0x00000100u); // 801E7700
  cmps(c,0,(int32_t)c->r[0],0); // 801E7704
  if (!crb(c,2)) { goto L_801E771C; } // 801E7708
  c->lr=0x801E7710u; f_801E5840(c); // 801E770C
  c->r[3]=c->r[3]+0x00000354u; // 801E7710
  c->lr=0x801E7718u; f_800CCE30(c); // 801E7714
  goto L_801E7774; // 801E7718
L_801E771C:;
  c->r[0]=0u+0x00000000u; // 801E771C
  W32(c->r[31]+0x00000804u,c->r[0]); // 801E7720
  c->r[3]=c->r[31]+0x00000180u; // 801E7724
  c->lr=0x801E772Cu; f_801D7880(c); // 801E7728
  cmps(c,0,(int32_t)c->r[3],32); // 801E772C
  if (crb(c,2)) { goto L_801E7750; } // 801E7730
  c->r[3]=0u+0x802D0000u; // 801E7734
  c->r[5]=0u+0x802D0000u; // 801E7738
  c->r[3]=c->r[3]+0x00001920u; // 801E773C
  c->r[4]=0u+0x000000BFu; // 801E7740
  c->r[5]=c->r[5]+0x00001970u; // 801E7744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7748
  c->lr=0x801E7750u; f_801F9770(c); // 801E774C
L_801E7750:;
  c->r[3]=c->r[31]+0x00000180u; // 801E7750
  c->r[4]=c->r[31]+0x00000184u; // 801E7754
  c->r[5]=0u+0x00000680u; // 801E7758
  c->lr=0x801E7760u; f_801D77D0(c); // 801E775C
  c->r[0]=0u+0x00000000u; // 801E7760
  W8(c->r[31]+0x00000100u,c->r[0]); // 801E7764
  c->lr=0x801E776Cu; f_801E5840(c); // 801E7768
  c->r[3]=c->r[3]+0x00000354u; // 801E776C
  c->lr=0x801E7774u; f_800CCE30(c); // 801E7770
L_801E7774:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7778
  c->lr=c->r[0]; // 801E777C
  c->r[1]=c->r[1]+0x00000010u; // 801E7780
  return; // 801E7784
}

// fn_801E7790
void f_801E7790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7790
  c->r[0]=c->lr; // 801E7794
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7798
  c->r[11]=c->r[1]+0x00000020u; // 801E779C
  c->lr=0x801E77A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E77A0
  c->r[31]=0u+0x802D0000u; // 801E77A4
  c->r[27]=c->r[3]|c->r[3]; // 801E77A8
  c->r[28]=c->r[4]|c->r[4]; // 801E77AC
  c->r[29]=c->r[5]|c->r[5]; // 801E77B0
  c->r[30]=c->r[6]|c->r[6]; // 801E77B4
  c->r[31]=c->r[31]+0x00001920u; // 801E77B8
  c->lr=0x801E77C0u; f_801E5840(c); // 801E77BC
  c->r[3]=c->r[3]+0x00000354u; // 801E77C0
  c->lr=0x801E77C8u; f_800CCD50(c); // 801E77C4
  c->r[0]=R8(c->r[27]+0x00000100u); // 801E77C8
  cmps(c,0,(int32_t)c->r[0],0); // 801E77CC
  if (!crb(c,2)) { goto L_801E77E8; } // 801E77D0
  c->r[3]=c->r[31]+0x00000000u; // 801E77D4
  c->r[5]=c->r[31]+0x00000100u; // 801E77D8
  c->r[4]=0u+0x000000DAu; // 801E77DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E77E0
  c->lr=0x801E77E8u; f_801F9770(c); // 801E77E4
L_801E77E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E77E8
  if (!crb(c,2)) { goto L_801E7804; } // 801E77EC
  c->r[3]=c->r[31]+0x00000000u; // 801E77F0
  c->r[5]=c->r[31]+0x00000124u; // 801E77F4
  c->r[4]=0u+0x000000DBu; // 801E77F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E77FC
  c->lr=0x801E7804u; f_801F9770(c); // 801E7800
L_801E7804:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E7804
  c->r[3]=c->r[28]|c->r[28]; // 801E7808
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801E780C
  c->ctr=c->r[12]; // 801E7810
  if (true) { c->lr=0x801E7818u; dispatch(c,c->ctr); } // 801E7814
  cmps(c,0,(int32_t)c->r[3],0); // 801E7818
  if (!crb(c,2)) { goto L_801E7834; } // 801E781C
  c->r[3]=c->r[31]+0x00000000u; // 801E7820
  c->r[5]=c->r[31]+0x00000150u; // 801E7824
  c->r[4]=0u+0x000000DCu; // 801E7828
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E782C
  c->lr=0x801E7834u; f_801F9770(c); // 801E7830
L_801E7834:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E7834
  c->r[3]=c->r[28]|c->r[28]; // 801E7838
  c->r[12]=R32(c->r[12]+0x00000050u); // 801E783C
  c->ctr=c->r[12]; // 801E7840
  if (true) { c->lr=0x801E7848u; dispatch(c,c->ctr); } // 801E7844
  cmps(c,0,(int32_t)c->r[3],0); // 801E7848
  if (!crb(c,2)) { goto L_801E7864; } // 801E784C
  c->r[3]=c->r[31]+0x00000000u; // 801E7850
  c->r[5]=c->r[31]+0x0000017Cu; // 801E7854
  c->r[4]=0u+0x000000DDu; // 801E7858
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E785C
  c->lr=0x801E7864u; f_801F9770(c); // 801E7860
L_801E7864:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E7864
  c->r[3]=0u+0x00000000u; // 801E7868
  c->r[0]=0u+0x00000001u; // 801E786C
  W32(c->r[27]+0x00000808u,c->r[28]); // 801E7870
  c->r[31]=c->r[27]|c->r[27]; // 801E7874
  W32(c->r[27]+0x0000014Cu,c->r[29]); // 801E7878
  W32(c->r[27]+0x00000150u,c->r[30]); // 801E787C
  W8(c->r[27]+0x00000104u,c->r[3]); // 801E7880
  W8(c->r[27]+0x00000105u,c->r[3]); // 801E7884
  W8(c->r[27]+0x00000106u,c->r[3]); // 801E7888
  W8(c->r[27]+0x00000101u,c->r[0]); // 801E788C
  if (crb(c,2)) { goto L_801E7898; } // 801E7890
  c->r[31]=c->r[27]+0x000000B4u; // 801E7894
L_801E7898:;
  c->lr=0x801E789Cu; f_801E5840(c); // 801E7898
  c->r[4]=c->r[31]|c->r[31]; // 801E789C
  c->lr=0x801E78A4u; f_801E5D60(c); // 801E78A0
  c->r[4]=R32(c->r[27]+0x00000808u); // 801E78A4
  c->r[31]=c->r[27]+0x00000154u; // 801E78A8
  c->r[3]=R32(c->r[27]+0x0000014Cu); // 801E78AC
  c->r[0]=R32(c->r[27]+0x00000150u); // 801E78B0
  W32(c->r[27]+0x00000164u,c->r[27]); // 801E78B4
  W32(c->r[27]+0x00000168u,c->r[4]); // 801E78B8
  W32(c->r[27]+0x0000016Cu,c->r[3]); // 801E78BC
  W32(c->r[27]+0x00000170u,c->r[0]); // 801E78C0
  c->lr=0x801E78C8u; f_801EAAA0(c); // 801E78C4
  c->r[4]=c->r[31]|c->r[31]; // 801E78C8
  c->r[5]=0u+0x00000001u; // 801E78CC
  c->lr=0x801E78D4u; f_801EAC30(c); // 801E78D0
  c->lr=0x801E78D8u; f_801E5840(c); // 801E78D4
  c->r[3]=c->r[3]+0x00000354u; // 801E78D8
  c->lr=0x801E78E0u; f_800CCE30(c); // 801E78DC
  c->r[11]=c->r[1]+0x00000020u; // 801E78E0
  c->r[3]=0u+0x00000001u; // 801E78E4
  c->lr=0x801E78ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E78E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E78EC
  c->lr=c->r[0]; // 801E78F0
  c->r[1]=c->r[1]+0x00000020u; // 801E78F4
  return; // 801E78F8
}

// fn_801E7900
void f_801E7900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7900
  c->r[0]=c->lr; // 801E7904
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801E7908
  c->r[11]=c->r[1]+0x000000C0u; // 801E790C
  c->lr=0x801E7914u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7910
  c->r[25]=0u+0x802D0000u; // 801E7914
  c->r[26]=c->r[3]|c->r[3]; // 801E7918
  c->r[25]=c->r[25]+0x00001920u; // 801E791C
  c->lr=0x801E7924u; f_801E5840(c); // 801E7920
  c->r[3]=c->r[3]+0x00000354u; // 801E7924
  c->lr=0x801E792Cu; f_800CCD50(c); // 801E7928
  c->r[0]=R8(c->r[26]+0x00000103u); // 801E792C
  cmps(c,0,(int32_t)c->r[0],0); // 801E7930
  if (!crb(c,2)) { goto L_801E794C; } // 801E7934
  c->lr=0x801E793Cu; f_801E5840(c); // 801E7938
  c->r[3]=c->r[3]+0x00000354u; // 801E793C
  c->lr=0x801E7944u; f_800CCE30(c); // 801E7940
  c->r[3]=0u+0x00000000u; // 801E7944
  goto L_801E7C74; // 801E7948
L_801E794C:;
  c->r[0]=R8(c->r[26]+0x00000102u); // 801E794C
  cmps(c,0,(int32_t)c->r[0],0); // 801E7950
  if (!crb(c,2)) { goto L_801E7C64; } // 801E7954
  c->r[4]=R32(c->r[26]+0x00000814u); // 801E7958
  c->r[3]=c->r[26]|c->r[26]; // 801E795C
  c->lr=0x801E7964u; f_801E89A0(c); // 801E7960
  cmps(c,0,(int32_t)c->r[3],0); // 801E7964
  if (!crb(c,2)) { goto L_801E79BC; } // 801E7968
  c->r[28]=c->r[26]|c->r[26]; // 801E796C
  c->r[27]=0u+0x00000000u; // 801E7970
  c->r[25]=0u+0x00000000u; // 801E7974
  goto L_801E799C; // 801E7978
L_801E797C:;
  c->r[4]=R32(c->r[28]+0x00000818u); // 801E797C
  cmps(c,0,(int32_t)c->r[4],0); // 801E7980
  if (crb(c,2)) { goto L_801E7994; } // 801E7984
  c->r[3]=R32(c->r[26]+0x00000804u); // 801E7988
  c->lr=0x801E7990u; f_801E6190(c); // 801E798C
  W32(c->r[28]+0x00000818u,c->r[25]); // 801E7990
L_801E7994:;
  c->r[28]=c->r[28]+0x00000034u; // 801E7994
  c->r[27]=c->r[27]+0x00000001u; // 801E7998
L_801E799C:;
  c->r[0]=R32(c->r[26]+0x00000810u); // 801E799C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E79A0
  if (crb(c,0)) { IRQCHK(c); goto L_801E797C; } // 801E79A4
  c->lr=0x801E79ACu; f_801E5840(c); // 801E79A8
  c->r[3]=c->r[3]+0x00000354u; // 801E79AC
  c->lr=0x801E79B4u; f_800CCE30(c); // 801E79B0
  c->r[3]=0u+0x00000000u; // 801E79B4
  goto L_801E7C74; // 801E79B8
L_801E79BC:;
  c->r[0]=0u+0x00000000u; // 801E79BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E79C0
  c->r[3]=c->r[26]|c->r[26]; // 801E79C4
  c->r[4]=c->r[1]+0x00000010u; // 801E79C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E79CC
  c->r[5]=c->r[1]+0x0000000Cu; // 801E79D0
  c->r[6]=c->r[1]+0x00000008u; // 801E79D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E79D8
  c->lr=0x801E79E0u; f_801E9B00(c); // 801E79DC
  cmps(c,0,(int32_t)c->r[3],0); // 801E79E0
  if (!crb(c,2)) { goto L_801E7A10; } // 801E79E4
  c->r[3]=c->r[25]+0x00000000u; // 801E79E8
  c->r[5]=c->r[25]+0x000001A8u; // 801E79EC
  c->r[4]=0u+0x00000114u; // 801E79F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E79F4
  c->lr=0x801E79FCu; f_801F9770(c); // 801E79F8
  c->lr=0x801E7A00u; f_801E5840(c); // 801E79FC
  c->r[3]=c->r[3]+0x00000354u; // 801E7A00
  c->lr=0x801E7A08u; f_800CCE30(c); // 801E7A04
  c->r[3]=0u+0x00000000u; // 801E7A08
  goto L_801E7C74; // 801E7A0C
L_801E7A10:;
  c->r[3]=R32(c->r[26]+0x0000011Cu); // 801E7A10
  c->r[29]=0u+0x00000000u; // 801E7A14
  c->r[0]=R32(c->r[26]+0x00000134u); // 801E7A18
  c->r[4]=R32(c->r[26]+0x000000C0u); // 801E7A1C
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801E7A20
  c->r[3]=R32(c->r[26]+0x00000110u); // 801E7A24
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E7A28
  cmps(c,0,(int32_t)c->r[4],3); // 801E7A2C
  c->r[0]=c->r[3]+c->r[0]; // 801E7A30
  W32(c->r[26]+0x00000110u,c->r[0]); // 801E7A34
  if (crb(c,2)) { goto L_801E7A50; } // 801E7A38
  cmps(c,0,(int32_t)c->r[4],2); // 801E7A3C
  if (crb(c,2)) { goto L_801E7A70; } // 801E7A40
  cmps(c,0,(int32_t)c->r[4],1); // 801E7A44
  if (crb(c,2)) { goto L_801E7A78; } // 801E7A48
  goto L_801E7A80; // 801E7A4C
L_801E7A50:;
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801E7A50
  c->r[3]=rotl(c->r[5],0)&0x00000007u; cr0(c,c->r[3]); // 801E7A54
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801E7A58
  if (crb(c,2)) { goto L_801E7A94; } // 801E7A5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E7A60
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E7A64
  c->r[29]=c->r[29]+c->r[0]; // 801E7A68
  goto L_801E7A94; // 801E7A6C
L_801E7A70:;
  c->r[29]=c->r[5]|c->r[5]; // 801E7A70
  goto L_801E7A94; // 801E7A74
L_801E7A78:;
  c->r[29]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801E7A78
  goto L_801E7A94; // 801E7A7C
L_801E7A80:;
  c->r[3]=c->r[25]+0x00000000u; // 801E7A80
  c->r[5]=c->r[25]+0x000001C8u; // 801E7A84
  c->r[4]=0u+0x00000170u; // 801E7A88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7A8C
  c->lr=0x801E7A94u; f_801F9770(c); // 801E7A90
L_801E7A94:;
  c->r[28]=c->r[26]+0x00000B58u; // 801E7A94
  c->r[27]=0u+0x00000000u; // 801E7A98
  c->r[30]=0u+0x00000001u; // 801E7A9C
  c->r[31]=0u+0x00000000u; // 801E7AA0
  goto L_801E7C0C; // 801E7AA4
L_801E7AA8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801E7AA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E7AAC
  if (crb(c,2)) { goto L_801E7C04; } // 801E7AB0
  c->r[0]=R32(c->r[26]+0x000000C0u); // 801E7AB4
  c->r[3]=c->r[1]+0x00000030u; // 801E7AB8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E7ABC
  c->r[4]=0u+0x00000000u; // 801E7AC0
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 801E7AC4
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E7AC8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801E7ACC
  c->r[0]=R32(c->r[26]+0x000000CCu); // 801E7AD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7AD4
  W32(c->r[1]+0x00000028u,c->r[31]); // 801E7AD8
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 801E7ADC
  goto L_801E7BB8; // 801E7AE0
  c->r[0]=c->r[0]|0x00000000u; // 801E7AE4
L_801E7AE8:;
  cmps(c,0,(int32_t)c->r[4],2); // 801E7AE8
  if (crb(c,0)) { goto L_801E7AF8; } // 801E7AEC
  c->r[6]=0u+0x00000000u; // 801E7AF0
  goto L_801E7B1C; // 801E7AF4
L_801E7AF8:;
  c->r[5]=c->r[28]+c->r[4]; // 801E7AF8
  c->r[0]=R8(c->r[5]+0x00000010u); // 801E7AFC
  cmps(c,0,(int32_t)c->r[0],16); // 801E7B00
  if (crb(c,0)) { goto L_801E7B10; } // 801E7B04
  c->r[6]=0u+0x00000000u; // 801E7B08
  goto L_801E7B1C; // 801E7B0C
L_801E7B10:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801E7B10
  c->r[5]=c->r[26]+c->r[0]; // 801E7B14
  c->r[6]=c->r[5]+0x00000818u; // 801E7B18
L_801E7B1C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E7B1C
  if (crb(c,2)) { goto L_801E7BB0; } // 801E7B20
  c->r[0]=R32(c->r[6]+0x00000000u); // 801E7B24
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E7B28
  c->r[0]=R32(c->r[6]+0x00000008u); // 801E7B2C
  c->r[5]=R32(c->r[6]+0x00000004u); // 801E7B30
  W32(c->r[3]+0x00000004u,c->r[5]); // 801E7B34
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E7B38
  c->r[0]=R32(c->r[6]+0x00000010u); // 801E7B3C
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801E7B40
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801E7B44
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E7B48
  c->r[0]=R32(c->r[6]+0x00000018u); // 801E7B4C
  c->r[5]=R32(c->r[6]+0x00000014u); // 801E7B50
  W32(c->r[3]+0x00000014u,c->r[5]); // 801E7B54
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E7B58
  c->r[0]=R32(c->r[6]+0x00000020u); // 801E7B5C
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 801E7B60
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801E7B64
  W32(c->r[3]+0x00000020u,c->r[0]); // 801E7B68
  c->r[0]=R16(c->r[6]+0x00000024u); // 801E7B6C
  W16(c->r[3]+0x00000024u,c->r[0]); // 801E7B70
  c->r[0]=R16(c->r[6]+0x00000026u); // 801E7B74
  W16(c->r[3]+0x00000026u,c->r[0]); // 801E7B78
  c->r[0]=R16(c->r[6]+0x00000028u); // 801E7B7C
  W16(c->r[3]+0x00000028u,c->r[0]); // 801E7B80
  c->r[0]=R16(c->r[6]+0x0000002Au); // 801E7B84
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801E7B88
  c->r[0]=R16(c->r[6]+0x0000002Cu); // 801E7B8C
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 801E7B90
  c->r[0]=R16(c->r[6]+0x0000002Eu); // 801E7B94
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 801E7B98
  c->r[0]=R16(c->r[6]+0x00000030u); // 801E7B9C
  W16(c->r[3]+0x00000030u,c->r[0]); // 801E7BA0
  c->r[5]=R32(c->r[6]+0x00000000u); // 801E7BA4
  c->r[0]=R8(c->r[5]+0x00000000u); // 801E7BA8
  W16(c->r[3]+0x00000026u,c->r[0]); // 801E7BAC
L_801E7BB0:;
  c->r[3]=c->r[3]+0x00000034u; // 801E7BB0
  c->r[4]=c->r[4]+0x00000001u; // 801E7BB4
L_801E7BB8:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E7BB8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E7BBC
  if (crb(c,0)) { IRQCHK(c); goto L_801E7AE8; } // 801E7BC0
  c->lr=0x801E7BC8u; f_800CBAA0(c); // 801E7BC4
  c->r[0]=R32(c->r[28]+0x00000004u); // 801E7BC8
  c->r[25]=c->r[3]|c->r[3]; // 801E7BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801E7BD0
  if (crb(c,2)) { goto L_801E7BFC; } // 801E7BD4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801E7BD8
  c->r[3]=c->r[0]|c->r[0]; // 801E7BDC
  c->r[4]=c->r[1]+0x00000018u; // 801E7BE0
  c->lr=0x801E7BE8u; f_801EC430(c); // 801E7BE4
  c->r[3]=R32(c->r[28]+0x00000004u); // 801E7BE8
  c->r[4]=0u+0x00000001u; // 801E7BEC
  c->lr=0x801E7BF4u; f_801ED190(c); // 801E7BF0
  c->r[3]=R32(c->r[28]+0x00000004u); // 801E7BF4
  c->lr=0x801E7BFCu; f_801EC660(c); // 801E7BF8
L_801E7BFC:;
  c->r[3]=c->r[25]|c->r[25]; // 801E7BFC
  c->lr=0x801E7C04u; f_800CBAE0(c); // 801E7C00
L_801E7C04:;
  c->r[28]=c->r[28]+0x00000038u; // 801E7C04
  c->r[27]=c->r[27]+0x00000001u; // 801E7C08
L_801E7C0C:;
  c->r[0]=R32(c->r[26]+0x0000080Cu); // 801E7C0C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E7C10
  if (crb(c,0)) { IRQCHK(c); goto L_801E7AA8; } // 801E7C14
  c->r[3]=R32(c->r[26]+0x000000E0u); // 801E7C18
  c->r[4]=R32(c->r[1]+0x00000010u); // 801E7C1C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E7C20
  cmpu(c,0,c->r[4],c->r[0]); // 801E7C24
  if (!crb(c,2)) { goto L_801E7C3C; } // 801E7C28
  c->r[3]=c->r[26]|c->r[26]; // 801E7C2C
  c->r[4]=0u+0x00000001u; // 801E7C30
  c->lr=0x801E7C38u; f_801E9510(c); // 801E7C34
  goto L_801E7C54; // 801E7C38
L_801E7C3C:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E7C3C
  cmpu(c,0,c->r[4],c->r[0]); // 801E7C40
  if (!crb(c,2)) { goto L_801E7C54; } // 801E7C44
  c->r[3]=c->r[26]|c->r[26]; // 801E7C48
  c->r[4]=0u+0x00000000u; // 801E7C4C
  c->lr=0x801E7C54u; f_801E9510(c); // 801E7C50
L_801E7C54:;
  c->r[3]=c->r[26]|c->r[26]; // 801E7C54
  c->lr=0x801E7C5Cu; f_801E9A40(c); // 801E7C58
  c->r[0]=0u+0x00000001u; // 801E7C5C
  W8(c->r[26]+0x00000102u,c->r[0]); // 801E7C60
L_801E7C64:;
  c->lr=0x801E7C68u; f_801E5840(c); // 801E7C64
  c->r[3]=c->r[3]+0x00000354u; // 801E7C68
  c->lr=0x801E7C70u; f_800CCE30(c); // 801E7C6C
  c->r[3]=0u+0x00000001u; // 801E7C70
L_801E7C74:;
  c->r[11]=c->r[1]+0x000000C0u; // 801E7C74
  c->lr=0x801E7C7Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E7C78
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801E7C7C
  c->lr=c->r[0]; // 801E7C80
  c->r[1]=c->r[1]+0x000000C0u; // 801E7C84
  return; // 801E7C88
}

// fn_801E7C90
void f_801E7C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7C90
  c->r[0]=c->lr; // 801E7C94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E7C98
  c->r[11]=c->r[1]+0x00000030u; // 801E7C9C
  c->lr=0x801E7CA4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7CA0
  c->r[31]=c->r[3]|c->r[3]; // 801E7CA4
  c->lr=0x801E7CACu; f_801E5840(c); // 801E7CA8
  c->r[3]=c->r[3]+0x00000354u; // 801E7CAC
  c->lr=0x801E7CB4u; f_800CCD50(c); // 801E7CB0
  c->r[23]=c->r[31]|c->r[31]; // 801E7CB4
  c->r[24]=0u+0x00000000u; // 801E7CB8
L_801E7CBC:;
  c->r[0]=R8(c->r[23]+0x00000B58u); // 801E7CBC
  cmps(c,0,(int32_t)c->r[0],0); // 801E7CC0
  if (crb(c,2)) { goto L_801E7CD8; } // 801E7CC4
  c->r[3]=R32(c->r[23]+0x00000B5Cu); // 801E7CC8
  cmps(c,0,(int32_t)c->r[3],0); // 801E7CCC
  if (crb(c,2)) { goto L_801E7CD8; } // 801E7CD0
  c->lr=0x801E7CD8u; f_801EC680(c); // 801E7CD4
L_801E7CD8:;
  c->r[24]=c->r[24]+0x00000001u; // 801E7CD8
  c->r[23]=c->r[23]+0x00000038u; // 801E7CDC
  cmps(c,0,(int32_t)c->r[24],8); // 801E7CE0
  if (crb(c,0)) { IRQCHK(c); goto L_801E7CBC; } // 801E7CE4
  c->r[0]=R8(c->r[31]+0x00000101u); // 801E7CE8
  cmps(c,0,(int32_t)c->r[0],0); // 801E7CEC
  if (crb(c,2)) { goto L_801E7D10; } // 801E7CF0
  cmps(c,0,(int32_t)c->r[31],0); // 801E7CF4
  c->r[23]=c->r[31]|c->r[31]; // 801E7CF8
  if (crb(c,2)) { goto L_801E7D04; } // 801E7CFC
  c->r[23]=c->r[31]+0x000000B4u; // 801E7D00
L_801E7D04:;
  c->lr=0x801E7D08u; f_801E5840(c); // 801E7D04
  c->r[4]=c->r[23]|c->r[23]; // 801E7D08
  c->lr=0x801E7D10u; f_801E5E00(c); // 801E7D0C
L_801E7D10:;
  c->lr=0x801E7D14u; f_801E5840(c); // 801E7D10
  c->r[3]=c->r[3]+0x00000354u; // 801E7D14
  c->lr=0x801E7D1Cu; f_800CCE30(c); // 801E7D18
  c->lr=0x801E7D20u; f_801EAAA0(c); // 801E7D1C
  c->r[4]=c->r[31]+0x00000154u; // 801E7D20
  c->lr=0x801E7D28u; f_801EB290(c); // 801E7D24
  c->lr=0x801E7D2Cu; f_800CBAA0(c); // 801E7D28
  c->r[0]=R32(c->r[31]+0x00000174u); // 801E7D2C
  c->r[30]=c->r[3]|c->r[3]; // 801E7D30
  cmps(c,0,(int32_t)c->r[0],0); // 801E7D34
  if (crb(c,2)) { goto L_801E7DC8; } // 801E7D38
  c->r[23]=0u+0x802D0000u; // 801E7D3C
  c->r[24]=0u+0x802D0000u; // 801E7D40
  c->r[26]=0u+0x802D0000u; // 801E7D44
  c->r[27]=0u+0x802D0000u; // 801E7D48
  c->r[28]=0u+0x802D0000u; // 801E7D4C
  c->r[29]=0u+0x802D0000u; // 801E7D50
  goto L_801E7DBC; // 801E7D54
L_801E7D58:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E7D58
  if (!crb(c,2)) { goto L_801E7D74; } // 801E7D5C
  c->r[3]=c->r[23]+0x00001FECu; // 801E7D60
  c->r[5]=c->r[24]+0x00001FC8u; // 801E7D64
  c->r[4]=0u+0x000001FBu; // 801E7D68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7D6C
  c->lr=0x801E7D74u; f_801F9770(c); // 801E7D70
L_801E7D74:;
  c->r[25]=R32(c->r[31]+0x0000017Cu); // 801E7D74
  cmps(c,0,(int32_t)c->r[25],0); // 801E7D78
  if (!crb(c,2)) { goto L_801E7D94; } // 801E7D7C
  c->r[3]=c->r[26]+0x00001F8Cu; // 801E7D80
  c->r[5]=c->r[27]+0x00001F68u; // 801E7D84
  c->r[4]=0u+0x0000023Du; // 801E7D88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7D8C
  c->lr=0x801E7D94u; f_801F9770(c); // 801E7D90
L_801E7D94:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFD4u,0); cr0(c,c->r[25]); // 801E7D94
  if (!crb(c,2)) { goto L_801E7DB0; } // 801E7D98
  c->r[3]=c->r[28]+0x00001FBCu; // 801E7D9C
  c->r[5]=c->r[29]+0x00001F98u; // 801E7DA0
  c->r[4]=0u+0x00000193u; // 801E7DA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7DA8
  c->lr=0x801E7DB0u; f_801F9770(c); // 801E7DAC
L_801E7DB0:;
  c->lr=0x801E7DB4u; f_801EAAA0(c); // 801E7DB0
  c->r[4]=c->r[25]|c->r[25]; // 801E7DB4
  c->lr=0x801E7DBCu; f_801EB290(c); // 801E7DB8
L_801E7DBC:;
  c->r[0]=R32(c->r[31]+0x00000174u); // 801E7DBC
  cmps(c,0,(int32_t)c->r[0],0); // 801E7DC0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E7D58; } // 801E7DC4
L_801E7DC8:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7DC8
  c->lr=0x801E7DD0u; f_800CBAE0(c); // 801E7DCC
  c->r[24]=c->r[31]|c->r[31]; // 801E7DD0
  c->r[23]=0u+0x00000000u; // 801E7DD4
  c->r[29]=0u+0x00000000u; // 801E7DD8
  goto L_801E7E00; // 801E7DDC
L_801E7DE0:;
  c->r[4]=R32(c->r[24]+0x00000818u); // 801E7DE0
  cmps(c,0,(int32_t)c->r[4],0); // 801E7DE4
  if (crb(c,2)) { goto L_801E7DF8; } // 801E7DE8
  c->r[3]=R32(c->r[31]+0x00000804u); // 801E7DEC
  c->lr=0x801E7DF4u; f_801E6190(c); // 801E7DF0
  W32(c->r[24]+0x00000818u,c->r[29]); // 801E7DF4
L_801E7DF8:;
  c->r[24]=c->r[24]+0x00000034u; // 801E7DF8
  c->r[23]=c->r[23]+0x00000001u; // 801E7DFC
L_801E7E00:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 801E7E00
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801E7E04
  if (crb(c,0)) { IRQCHK(c); goto L_801E7DE0; } // 801E7E08
  c->lr=0x801E7E10u; f_800CBAA0(c); // 801E7E0C
  c->r[30]=c->r[3]|c->r[3]; // 801E7E10
  c->r[24]=c->r[31]+0x00000B58u; // 801E7E14
  c->r[23]=0u+0x00000000u; // 801E7E18
  c->r[29]=0u+0x00000000u; // 801E7E1C
  goto L_801E7E4C; // 801E7E20
L_801E7E24:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801E7E24
  cmps(c,0,(int32_t)c->r[0],0); // 801E7E28
  if (crb(c,2)) { goto L_801E7E44; } // 801E7E2C
  c->r[3]=R32(c->r[24]+0x00000004u); // 801E7E30
  cmps(c,0,(int32_t)c->r[3],0); // 801E7E34
  if (crb(c,2)) { goto L_801E7E44; } // 801E7E38
  c->lr=0x801E7E40u; f_801EC360(c); // 801E7E3C
  W32(c->r[24]+0x00000004u,c->r[29]); // 801E7E40
L_801E7E44:;
  c->r[24]=c->r[24]+0x00000038u; // 801E7E44
  c->r[23]=c->r[23]+0x00000001u; // 801E7E48
L_801E7E4C:;
  c->r[0]=R32(c->r[31]+0x0000080Cu); // 801E7E4C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801E7E50
  if (crb(c,0)) { IRQCHK(c); goto L_801E7E24; } // 801E7E54
  c->r[3]=c->r[30]|c->r[30]; // 801E7E58
  c->lr=0x801E7E60u; f_800CBAE0(c); // 801E7E5C
  c->lr=0x801E7E64u; f_801E5840(c); // 801E7E60
  c->r[3]=c->r[3]+0x00000354u; // 801E7E64
  c->lr=0x801E7E6Cu; f_800CCD50(c); // 801E7E68
  c->r[3]=R32(c->r[31]+0x00000808u); // 801E7E6C
  cmps(c,0,(int32_t)c->r[3],0); // 801E7E70
  if (crb(c,2)) { goto L_801E7E90; } // 801E7E74
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E7E78
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E7E7C
  c->ctr=c->r[12]; // 801E7E80
  if (true) { c->lr=0x801E7E88u; dispatch(c,c->ctr); } // 801E7E84
  c->r[0]=0u+0x00000000u; // 801E7E88
  W32(c->r[31]+0x00000808u,c->r[0]); // 801E7E8C
L_801E7E90:;
  c->lr=0x801E7E94u; f_801E5840(c); // 801E7E90
  c->r[3]=c->r[3]+0x00000354u; // 801E7E94
  c->lr=0x801E7E9Cu; f_800CCE30(c); // 801E7E98
  c->r[0]=0u+0x00000000u; // 801E7E9C
  W8(c->r[31]+0x00000102u,c->r[0]); // 801E7EA0
  c->r[3]=c->r[31]+0x00000180u; // 801E7EA4
  W8(c->r[31]+0x00000103u,c->r[0]); // 801E7EA8
  W8(c->r[31]+0x00000101u,c->r[0]); // 801E7EAC
  c->lr=0x801E7EB4u; f_801D7880(c); // 801E7EB0
  cmps(c,0,(int32_t)c->r[3],32); // 801E7EB4
  if (crb(c,2)) { goto L_801E7ED8; } // 801E7EB8
  c->r[3]=0u+0x802D0000u; // 801E7EBC
  c->r[5]=0u+0x802D0000u; // 801E7EC0
  c->r[3]=c->r[3]+0x00001920u; // 801E7EC4
  c->r[4]=0u+0x000001B3u; // 801E7EC8
  c->r[5]=c->r[5]+0x00001970u; // 801E7ECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E7ED0
  c->lr=0x801E7ED8u; f_801F9770(c); // 801E7ED4
L_801E7ED8:;
  c->r[11]=c->r[1]+0x00000030u; // 801E7ED8
  c->lr=0x801E7EE0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E7EDC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E7EE0
  c->lr=c->r[0]; // 801E7EE4
  c->r[1]=c->r[1]+0x00000030u; // 801E7EE8
  return; // 801E7EEC
}

// fn_801E7EF0
void f_801E7EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7EF0
  c->r[0]=c->lr; // 801E7EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7EF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7EFC
  c->r[31]=c->r[4]|c->r[4]; // 801E7F00
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7F04
  c->r[30]=c->r[3]|c->r[3]; // 801E7F08
  c->lr=0x801E7F10u; f_801E5840(c); // 801E7F0C
  c->r[3]=c->r[3]+0x00000354u; // 801E7F10
  c->lr=0x801E7F18u; f_800CCD50(c); // 801E7F14
  cmps(c,0,(int32_t)c->r[31],0); // 801E7F18
  W8(c->r[30]+0x00000107u,c->r[31]); // 801E7F1C
  if (crb(c,2)) { goto L_801E7F2C; } // 801E7F20
  c->r[0]=0u+0x00000001u; // 801E7F24
  W8(c->r[30]+0x00000109u,c->r[0]); // 801E7F28
L_801E7F2C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7F2C
  c->lr=0x801E7F34u; f_801E9A40(c); // 801E7F30
  c->lr=0x801E7F38u; f_801E5840(c); // 801E7F34
  c->r[3]=c->r[3]+0x00000354u; // 801E7F38
  c->lr=0x801E7F40u; f_800CCE30(c); // 801E7F3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7F40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7F44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7F48
  c->lr=c->r[0]; // 801E7F4C
  c->r[1]=c->r[1]+0x00000010u; // 801E7F50
  return; // 801E7F54
}

// fn_801E7F60
void f_801E7F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7F60
  c->r[0]=c->lr; // 801E7F64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7F68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7F6C
  c->r[31]=c->r[3]|c->r[3]; // 801E7F70
  c->lr=0x801E7F78u; f_801D2810(c); // 801E7F74
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7F78
  c->r[3]=0u+0x00000000u; // 801E7F7C
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E7F80
  c->r[0]=0u+0x00000001u; // 801E7F84
  W32(c->r[31]+0x00000814u,c->r[0]); // 801E7F88
  {uint32_t ea=c->r[31]+0x00000B88u; WF32(ea,c->f[1]);} // 801E7F8C
  {uint32_t ea=c->r[31]+0x00000B8Cu; WF32(ea,c->f[0]);} // 801E7F90
  {uint32_t ea=c->r[31]+0x00000BC0u; WF32(ea,c->f[1]);} // 801E7F94
  {uint32_t ea=c->r[31]+0x00000BC4u; WF32(ea,c->f[0]);} // 801E7F98
  {uint32_t ea=c->r[31]+0x00000BF8u; WF32(ea,c->f[1]);} // 801E7F9C
  {uint32_t ea=c->r[31]+0x00000BFCu; WF32(ea,c->f[0]);} // 801E7FA0
  {uint32_t ea=c->r[31]+0x00000C30u; WF32(ea,c->f[1]);} // 801E7FA4
  {uint32_t ea=c->r[31]+0x00000C34u; WF32(ea,c->f[0]);} // 801E7FA8
  {uint32_t ea=c->r[31]+0x00000C68u; WF32(ea,c->f[1]);} // 801E7FAC
  {uint32_t ea=c->r[31]+0x00000C6Cu; WF32(ea,c->f[0]);} // 801E7FB0
  {uint32_t ea=c->r[31]+0x00000CA0u; WF32(ea,c->f[1]);} // 801E7FB4
  {uint32_t ea=c->r[31]+0x00000CA4u; WF32(ea,c->f[0]);} // 801E7FB8
  {uint32_t ea=c->r[31]+0x00000CD8u; WF32(ea,c->f[1]);} // 801E7FBC
  {uint32_t ea=c->r[31]+0x00000CDCu; WF32(ea,c->f[0]);} // 801E7FC0
  {uint32_t ea=c->r[31]+0x00000D10u; WF32(ea,c->f[1]);} // 801E7FC4
  {uint32_t ea=c->r[31]+0x00000D14u; WF32(ea,c->f[0]);} // 801E7FC8
  W8(c->r[31]+0x00000102u,c->r[3]); // 801E7FCC
  W8(c->r[31]+0x00000103u,c->r[3]); // 801E7FD0
  W8(c->r[31]+0x0000010Eu,c->r[3]); // 801E7FD4
  W8(c->r[31]+0x00000107u,c->r[3]); // 801E7FD8
  W8(c->r[31]+0x00000108u,c->r[3]); // 801E7FDC
  W8(c->r[31]+0x00000109u,c->r[3]); // 801E7FE0
  W8(c->r[31]+0x0000010Au,c->r[3]); // 801E7FE4
  W8(c->r[31]+0x0000010Du,c->r[3]); // 801E7FE8
  W8(c->r[31]+0x0000010Bu,c->r[3]); // 801E7FEC
  W8(c->r[31]+0x0000010Cu,c->r[3]); // 801E7FF0
  W8(c->r[31]+0x0000010Fu,c->r[3]); // 801E7FF4
  W32(c->r[31]+0x00000110u,c->r[3]); // 801E7FF8
  W32(c->r[31]+0x00000148u,c->r[3]); // 801E7FFC
  W8(c->r[31]+0x00000B58u,c->r[3]); // 801E8000
  W32(c->r[31]+0x00000B5Cu,c->r[3]); // 801E8004
  W8(c->r[31]+0x00000B90u,c->r[3]); // 801E8008
  W32(c->r[31]+0x00000B94u,c->r[3]); // 801E800C
  W8(c->r[31]+0x00000BC8u,c->r[3]); // 801E8010
  W32(c->r[31]+0x00000BCCu,c->r[3]); // 801E8014
  W8(c->r[31]+0x00000C00u,c->r[3]); // 801E8018
  W32(c->r[31]+0x00000C04u,c->r[3]); // 801E801C
  W8(c->r[31]+0x00000C38u,c->r[3]); // 801E8020
  W32(c->r[31]+0x00000C3Cu,c->r[3]); // 801E8024
  W8(c->r[31]+0x00000C70u,c->r[3]); // 801E8028
  W32(c->r[31]+0x00000C74u,c->r[3]); // 801E802C
  W8(c->r[31]+0x00000CA8u,c->r[3]); // 801E8030
  W32(c->r[31]+0x00000CACu,c->r[3]); // 801E8034
  W8(c->r[31]+0x00000CE0u,c->r[3]); // 801E8038
  W32(c->r[31]+0x00000CE4u,c->r[3]); // 801E803C
  W32(c->r[31]+0x00000818u,c->r[3]); // 801E8040
  W32(c->r[31]+0x0000084Cu,c->r[3]); // 801E8044
  W32(c->r[31]+0x00000880u,c->r[3]); // 801E8048
  W32(c->r[31]+0x000008B4u,c->r[3]); // 801E804C
  W32(c->r[31]+0x000008E8u,c->r[3]); // 801E8050
  W32(c->r[31]+0x0000091Cu,c->r[3]); // 801E8054
  W32(c->r[31]+0x00000950u,c->r[3]); // 801E8058
  W32(c->r[31]+0x00000984u,c->r[3]); // 801E805C
  W32(c->r[31]+0x000009B8u,c->r[3]); // 801E8060
  W32(c->r[31]+0x000009ECu,c->r[3]); // 801E8064
  W32(c->r[31]+0x00000A20u,c->r[3]); // 801E8068
  W32(c->r[31]+0x00000A54u,c->r[3]); // 801E806C
  W32(c->r[31]+0x00000A88u,c->r[3]); // 801E8070
  W32(c->r[31]+0x00000ABCu,c->r[3]); // 801E8074
  W32(c->r[31]+0x00000AF0u,c->r[3]); // 801E8078
  W32(c->r[31]+0x00000B24u,c->r[3]); // 801E807C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8080
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8084
  c->lr=c->r[0]; // 801E8088
  c->r[1]=c->r[1]+0x00000010u; // 801E808C
  return; // 801E8090
}

// fn_801E80A0
void f_801E80A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E80A0
  c->r[0]=c->lr; // 801E80A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E80A8
  c->r[11]=c->r[1]+0x00000070u; // 801E80AC
  c->lr=0x801E80B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E80B0
  cmps(c,0,(int32_t)c->r[4],0); // 801E80B4
  c->r[28]=0u+0x802D0000u; // 801E80B8
  c->r[29]=c->r[3]|c->r[3]; // 801E80BC
  c->r[26]=c->r[4]|c->r[4]; // 801E80C0
  c->r[30]=c->r[5]|c->r[5]; // 801E80C4
  c->r[31]=c->r[6]|c->r[6]; // 801E80C8
  c->r[28]=c->r[28]+0x00001920u; // 801E80CC
  if (!crb(c,2)) { goto L_801E80E8; } // 801E80D0
  c->r[3]=c->r[28]+0x00000000u; // 801E80D4
  c->r[5]=c->r[28]+0x00000124u; // 801E80D8
  c->r[4]=0u+0x0000026Bu; // 801E80DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E80E0
  c->lr=0x801E80E8u; f_801F9770(c); // 801E80E4
L_801E80E8:;
  c->r[3]=0u+0x80390000u; // 801E80E8
  c->r[27]=c->r[1]+0x00000008u; // 801E80EC
  c->r[3]=c->r[3]+0x000051A0u; // 801E80F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E80F4
  c->lr=0x801E80FCu; f_800CCD50(c); // 801E80F8
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 801E80FC
  c->r[3]=c->r[1]+0x00000010u; // 801E8100
  c->lr=0x801E8108u; f_801E6270(c); // 801E8104
  c->r[4]=0u+0x80390000u; // 801E8108
  c->r[3]=c->r[1]+0x0000000Cu; // 801E810C
  c->r[4]=c->r[4]+0x000011A0u; // 801E8110
  c->r[5]=0u+0x00004000u; // 801E8114
  c->lr=0x801E811Cu; f_801E67F0(c); // 801E8118
  cmps(c,0,(int32_t)c->r[3],0); // 801E811C
  if (!crb(c,2)) { goto L_801E813C; } // 801E8120
  cmps(c,0,(int32_t)c->r[27],0); // 801E8124
  if (crb(c,2)) { goto L_801E8134; } // 801E8128
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E812C
  c->lr=0x801E8134u; f_800CCE30(c); // 801E8130
L_801E8134:;
  c->r[3]=0u+0x00000000u; // 801E8134
  goto L_801E8410; // 801E8138
L_801E813C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801E813C
  c->r[4]=c->r[29]+0x000000C0u; // 801E8140
  c->lr=0x801E8148u; f_801E6C90(c); // 801E8144
  cmps(c,0,(int32_t)c->r[3],0); // 801E8148
  if (!crb(c,2)) { goto L_801E8168; } // 801E814C
  cmps(c,0,(int32_t)c->r[27],0); // 801E8150
  if (crb(c,2)) { goto L_801E8160; } // 801E8154
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E8158
  c->lr=0x801E8160u; f_800CCE30(c); // 801E815C
L_801E8160:;
  c->r[3]=0u+0x00000000u; // 801E8160
  goto L_801E8410; // 801E8164
L_801E8168:;
  c->r[0]=R32(c->r[29]+0x00000810u); // 801E8168
  cmps(c,0,(int32_t)c->r[0],0); // 801E816C
  if (!crb(c,2)) { goto L_801E818C; } // 801E8170
  c->r[3]=c->r[1]+0x0000000Cu; // 801E8174
  c->lr=0x801E817Cu; f_801E6BE0(c); // 801E8178
  cmps(c,0,(int32_t)c->r[3],16); // 801E817C
  if (!crb(c,1)) { goto L_801E8188; } // 801E8180
  c->r[3]=0u+0x00000010u; // 801E8184
L_801E8188:;
  W32(c->r[29]+0x00000810u,c->r[3]); // 801E8188
L_801E818C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801E818C
  c->lr=0x801E8194u; f_801E6B30(c); // 801E8190
  cmps(c,0,(int32_t)c->r[3],8); // 801E8194
  if (!crb(c,1)) { goto L_801E81A0; } // 801E8198
  c->r[3]=0u+0x00000008u; // 801E819C
L_801E81A0:;
  c->r[0]=R32(c->r[29]+0x0000080Cu); // 801E81A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801E81A4
  if (crb(c,2)) { goto L_801E81C0; } // 801E81A8
  c->r[3]=c->r[28]+0x00000000u; // 801E81AC
  c->r[5]=c->r[28]+0x000001D8u; // 801E81B0
  c->r[4]=0u+0x00000283u; // 801E81B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E81B8
  c->lr=0x801E81C0u; f_801F9770(c); // 801E81BC
L_801E81C0:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801E81C0
  c->lr=0x801E81C8u; f_801E6BE0(c); // 801E81C4
  cmps(c,0,(int32_t)c->r[3],16); // 801E81C8
  if (!crb(c,1)) { goto L_801E81D4; } // 801E81CC
  c->r[3]=0u+0x00000010u; // 801E81D0
L_801E81D4:;
  c->r[0]=R32(c->r[29]+0x00000810u); // 801E81D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801E81D8
  if (crb(c,2)) { goto L_801E81F4; } // 801E81DC
  c->r[3]=c->r[28]+0x00000000u; // 801E81E0
  c->r[5]=c->r[28]+0x00000230u; // 801E81E4
  c->r[4]=0u+0x00000284u; // 801E81E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E81EC
  c->lr=0x801E81F4u; f_801F9770(c); // 801E81F0
L_801E81F4:;
  c->r[27]=0u+0x00000000u; // 801E81F4
  c->r[28]=0u+0x00000000u; // 801E81F8
  goto L_801E823C; // 801E81FC
L_801E8200:;
  c->r[4]=c->r[29]+c->r[28]; // 801E8200
  c->r[5]=c->r[27]|c->r[27]; // 801E8204
  c->r[3]=c->r[1]+0x0000000Cu; // 801E8208
  c->r[4]=c->r[4]+0x00000B60u; // 801E820C
  c->lr=0x801E8214u; f_801E6CD0(c); // 801E8210
  cmps(c,0,(int32_t)c->r[3],0); // 801E8214
  if (!crb(c,2)) { goto L_801E8234; } // 801E8218
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E821C
  if (crb(c,2)) { goto L_801E822C; } // 801E8220
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E8224
  c->lr=0x801E822Cu; f_800CCE30(c); // 801E8228
L_801E822C:;
  c->r[3]=0u+0x00000000u; // 801E822C
  goto L_801E8410; // 801E8230
L_801E8234:;
  c->r[27]=c->r[27]+0x00000001u; // 801E8234
  c->r[28]=c->r[28]+0x00000038u; // 801E8238
L_801E823C:;
  c->r[0]=R32(c->r[29]+0x0000080Cu); // 801E823C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E8240
  if (crb(c,0)) { IRQCHK(c); goto L_801E8200; } // 801E8244
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E8248
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801E824C
  c->r[0]=cntlz(c->r[0]); // 801E8250
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801E8254
  if (crb(c,2)) { goto L_801E8370; } // 801E8258
  c->r[27]=0u+0x00000000u; // 801E825C
  c->r[28]=0u+0x00000000u; // 801E8260
  goto L_801E82A8; // 801E8264
L_801E8268:;
  c->r[5]=c->r[29]+c->r[28]; // 801E8268
  c->r[6]=c->r[27]|c->r[27]; // 801E826C
  c->r[4]=c->r[5]+0x0000081Cu; // 801E8270
  c->r[3]=c->r[1]+0x0000000Cu; // 801E8274
  c->r[5]=c->r[5]+0x00000844u; // 801E8278
  c->lr=0x801E8280u; f_801E6D10(c); // 801E827C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8280
  if (!crb(c,2)) { goto L_801E82A0; } // 801E8284
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E8288
  if (crb(c,2)) { goto L_801E8298; } // 801E828C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E8290
  c->lr=0x801E8298u; f_800CCE30(c); // 801E8294
L_801E8298:;
  c->r[3]=0u+0x00000000u; // 801E8298
  goto L_801E8410; // 801E829C
L_801E82A0:;
  c->r[27]=c->r[27]+0x00000001u; // 801E82A0
  c->r[28]=c->r[28]+0x00000034u; // 801E82A4
L_801E82A8:;
  c->r[0]=R32(c->r[29]+0x00000810u); // 801E82A8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E82AC
  if (crb(c,0)) { IRQCHK(c); goto L_801E8268; } // 801E82B0
  cmps(c,0,(int32_t)c->r[31],0); // 801E82B4
  if (crb(c,2)) { goto L_801E8370; } // 801E82B8
  cmps(c,0,(int32_t)c->r[30],0); // 801E82BC
  if (!crb(c,2)) { goto L_801E82C8; } // 801E82C0
  goto L_801E82F0; // 801E82C4
L_801E82C8:;
  cmps(c,0,(int32_t)c->r[30],1); // 801E82C8
  if (!crb(c,2)) { goto L_801E82F0; } // 801E82CC
  c->r[0]=R32(c->r[29]+0x000000CCu); // 801E82D0
  c->r[3]=0u+0x10620000u; // 801E82D4
  c->r[3]=c->r[3]+0x00004DD3u; // 801E82D8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801E82DC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E82E0
  c->r[0]=sraw(c,c->r[0],6); // 801E82E4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E82E8
  c->r[31]=c->r[0]+c->r[3]; // 801E82EC
L_801E82F0:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801E82F0
  c->r[3]=c->r[1]+0x0000000Cu; // 801E82F4
  c->r[7]=R32(c->r[29]+0x000000C8u); // 801E82F8
  c->r[4]=c->r[1]+0x00000038u; // 801E82FC
  c->r[6]=divw((int32_t)c->r[31],(int32_t)c->r[0]); // 801E8300
  c->r[5]=c->r[1]+0x00000018u; // 801E8304
  c->lr=0x801E830Cu; f_801E6F50(c); // 801E8308
  cmps(c,0,(int32_t)c->r[3],0); // 801E830C
  if (!crb(c,2)) { goto L_801E832C; } // 801E8310
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E8314
  if (crb(c,2)) { goto L_801E8324; } // 801E8318
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E831C
  c->lr=0x801E8324u; f_800CCE30(c); // 801E8320
L_801E8324:;
  c->r[3]=0u+0x00000000u; // 801E8324
  goto L_801E8410; // 801E8328
L_801E832C:;
  c->r[7]=c->r[1]+0x00000038u; // 801E832C
  c->r[5]=c->r[1]+0x00000018u; // 801E8330
  c->r[8]=0u+0x00000000u; // 801E8334
  c->r[3]=0u+0x00000000u; // 801E8338
  c->r[4]=0u+0x00000000u; // 801E833C
  goto L_801E8364; // 801E8340
L_801E8344:;
  c->r[6]=c->r[29]+c->r[3]; // 801E8344
  c->r[0]=R16(c->r[7]+c->r[4]); // 801E8348
  W16(c->r[6]+0x00000840u,c->r[0]); // 801E834C
  c->r[8]=c->r[8]+0x00000001u; // 801E8350
  c->r[3]=c->r[3]+0x00000034u; // 801E8354
  c->r[0]=R16(c->r[5]+c->r[4]); // 801E8358
  c->r[4]=c->r[4]+0x00000002u; // 801E835C
  W16(c->r[6]+0x00000842u,c->r[0]); // 801E8360
L_801E8364:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 801E8364
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801E8368
  if (crb(c,0)) { IRQCHK(c); goto L_801E8344; } // 801E836C
L_801E8370:;
  c->r[3]=c->r[29]|c->r[29]; // 801E8370
  c->lr=0x801E8378u; f_801E8750(c); // 801E8374
  cmps(c,0,(int32_t)c->r[3],0); // 801E8378
  if (!crb(c,2)) { goto L_801E8398; } // 801E837C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E8380
  if (crb(c,2)) { goto L_801E8390; } // 801E8384
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E8388
  c->lr=0x801E8390u; f_800CCE30(c); // 801E838C
L_801E8390:;
  c->r[3]=0u+0x00000000u; // 801E8390
  goto L_801E8410; // 801E8394
L_801E8398:;
  c->r[0]=0u+0x00000000u; // 801E8398
  W32(c->r[29]+0x00000114u,c->r[0]); // 801E839C
  c->r[27]=0u+0x00000000u; // 801E83A0
  goto L_801E83CC; // 801E83A4
L_801E83A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801E83A8
  c->lr=0x801E83B0u; f_801E9760(c); // 801E83AC
  c->r[0]=R8(c->r[29]+0x0000010Eu); // 801E83B0
  c->r[3]=R32(c->r[29]+0x00000114u); // 801E83B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E83B8
  c->r[0]=c->r[3]+0x00000001u; // 801E83BC
  W32(c->r[29]+0x00000114u,c->r[0]); // 801E83C0
  if (!crb(c,2)) { goto L_801E83D8; } // 801E83C4
  c->r[27]=c->r[27]+0x00000001u; // 801E83C8
L_801E83CC:;
  c->r[0]=R32(c->r[29]+0x00000124u); // 801E83CC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E83D0
  if (crb(c,0)) { IRQCHK(c); goto L_801E83A8; } // 801E83D4
L_801E83D8:;
  c->r[4]=R32(c->r[29]+0x000000E0u); // 801E83D8
  cmpu(c,0,c->r[4],0x00000002u); // 801E83DC
  if (crb(c,1)) { goto L_801E83FC; } // 801E83E0
  c->r[0]=R8(c->r[29]+0x000000C4u); // 801E83E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E83E8
  if (!crb(c,2)) { goto L_801E83FC; } // 801E83EC
  c->r[3]=c->r[29]|c->r[29]; // 801E83F0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801E83F4
  c->lr=0x801E83FCu; f_801E9670(c); // 801E83F8
L_801E83FC:;
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E83FC
  if (crb(c,2)) { goto L_801E840C; } // 801E8400
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E8404
  c->lr=0x801E840Cu; f_800CCE30(c); // 801E8408
L_801E840C:;
  c->r[3]=0u+0x00000001u; // 801E840C
L_801E8410:;
  c->r[11]=c->r[1]+0x00000070u; // 801E8410
  c->lr=0x801E8418u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E8414
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E8418
  c->lr=c->r[0]; // 801E841C
  c->r[1]=c->r[1]+0x00000070u; // 801E8420
  return; // 801E8424
}

// fn_801E8430
void f_801E8430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8430
  c->r[0]=c->lr; // 801E8434
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E8438
  c->r[11]=c->r[1]+0x00000080u; // 801E843C
  c->lr=0x801E8444u; f_80217878(c); // 801E8440
  cmps(c,0,(int32_t)c->r[4],0); // 801E8444
  c->r[26]=0u+0x802D0000u; // 801E8448
  c->r[15]=c->r[3]|c->r[3]; // 801E844C
  c->r[16]=c->r[4]|c->r[4]; // 801E8450
  c->r[20]=c->r[5]|c->r[5]; // 801E8454
  c->r[17]=c->r[7]|c->r[7]; // 801E8458
  c->r[18]=c->r[8]|c->r[8]; // 801E845C
  c->r[19]=c->r[9]|c->r[9]; // 801E8460
  c->r[26]=c->r[26]+0x00001920u; // 801E8464
  if (!crb(c,2)) { goto L_801E8480; } // 801E8468
  c->r[3]=c->r[26]+0x00000000u; // 801E846C
  c->r[5]=c->r[26]+0x00000124u; // 801E8470
  c->r[4]=0u+0x000002EAu; // 801E8474
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8478
  c->lr=0x801E8480u; f_801F9770(c); // 801E847C
L_801E8480:;
  c->r[0]=rotl(c->r[20],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E8480
  if (crb(c,2)) { goto L_801E84A0; } // 801E8484
  c->r[6]=c->r[20]|c->r[20]; // 801E8488
  c->r[3]=c->r[26]+0x00000000u; // 801E848C
  c->r[5]=c->r[26]+0x00000290u; // 801E8490
  c->r[4]=0u+0x000002EBu; // 801E8494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8498
  c->lr=0x801E84A0u; f_801F9770(c); // 801E849C
L_801E84A0:;
  c->r[0]=rotl(c->r[17],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E84A0
  if (crb(c,2)) { goto L_801E84C0; } // 801E84A4
  c->r[6]=c->r[17]|c->r[17]; // 801E84A8
  c->r[3]=c->r[26]+0x00000000u; // 801E84AC
  c->r[5]=c->r[26]+0x000002D8u; // 801E84B0
  c->r[4]=0u+0x000002ECu; // 801E84B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E84B8
  c->lr=0x801E84C0u; f_801F9770(c); // 801E84BC
L_801E84C0:;
  cmps(c,0,(int32_t)c->r[16],0); // 801E84C0
  c->r[14]=c->r[13]+0xFFFFAEF0u; // 801E84C4
  if (crb(c,2)) { goto L_801E8518; } // 801E84C8
  c->r[12]=R32(c->r[16]+0x00000000u); // 801E84CC
  c->r[3]=c->r[16]|c->r[16]; // 801E84D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E84D4
  c->ctr=c->r[12]; // 801E84D8
  if (true) { c->lr=0x801E84E0u; dispatch(c,c->ctr); } // 801E84DC
  goto L_801E84FC; // 801E84E0
  c->r[0]=c->r[0]|0x00000000u; // 801E84E4
L_801E84E8:;
  cmpu(c,0,c->r[3],c->r[14]); // 801E84E8
  if (!crb(c,2)) { goto L_801E84F8; } // 801E84EC
  c->r[0]=0u+0x00000001u; // 801E84F0
  goto L_801E8508; // 801E84F4
L_801E84F8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E84F8
L_801E84FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E84FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E84E8; } // 801E8500
  c->r[0]=0u+0x00000000u; // 801E8504
L_801E8508:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E8508
  if (crb(c,2)) { goto L_801E8518; } // 801E850C
  c->r[3]=c->r[16]|c->r[16]; // 801E8510
  goto L_801E851C; // 801E8514
L_801E8518:;
  c->r[3]=0u+0x00000000u; // 801E8518
L_801E851C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E851C
  if (crb(c,2)) { goto L_801E852C; } // 801E8520
  c->r[0]=0u+0x00000001u; // 801E8524
  W32(c->r[3]+0x00000068u,c->r[0]); // 801E8528
L_801E852C:;
  c->r[3]=0u+0x80390000u; // 801E852C
  c->r[3]=c->r[3]+0x000051A0u; // 801E8530
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E8534
  c->lr=0x801E853Cu; f_800CCD50(c); // 801E8538
  c->r[27]=0u+0x80390000u; // 801E853C
  c->r[4]=0u+0x00004000u; // 801E8540
  c->r[3]=c->r[27]+0x000011A0u; // 801E8544
  c->lr=0x801E854Cu; f_800C7750(c); // 801E8548
  c->r[0]=R16(c->r[15]+0x000000D0u); // 801E854C
  c->r[28]=c->r[27]+0x000011A0u; // 801E8550
  c->r[29]=c->r[1]+0x00000010u; // 801E8554
  c->r[24]=0u+0x00000000u; // 801E8558
  c->r[25]=c->r[20]+c->r[0]; // 801E855C
  c->r[14]=0u+0x00000000u; // 801E8560
  goto L_801E8690; // 801E8564
L_801E8568:;
  c->r[0]=rotl(c->r[25],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E8568
  if (crb(c,2)) { goto L_801E8588; } // 801E856C
  c->r[6]=c->r[25]|c->r[25]; // 801E8570
  c->r[3]=c->r[26]+0x00000000u; // 801E8574
  c->r[5]=c->r[26]+0x00000324u; // 801E8578
  c->r[4]=0u+0x00000305u; // 801E857C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8580
  c->lr=0x801E8588u; f_801F9770(c); // 801E8584
L_801E8588:;
  c->r[0]=R32(c->r[15]+0x00000810u); // 801E8588
  c->r[3]=c->r[24]+0x00000002u; // 801E858C
  c->r[23]=0u+0x00000002u; // 801E8590
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E8594
  if (!crb(c,1)) { goto L_801E85A0; } // 801E8598
  c->r[23]=c->r[0]-c->r[24]; // 801E859C
L_801E85A0:;
  c->r[22]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[23]); // 801E85A0
  cmpu(c,0,c->r[22],0x00004000u); // 801E85A4
  if (!crb(c,1)) { goto L_801E85C4; } // 801E85A8
  c->r[3]=c->r[26]+0x00000000u; // 801E85AC
  c->r[5]=c->r[26]+0x00000370u; // 801E85B0
  c->r[4]=0u+0x0000030Du; // 801E85B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E85B8
  c->lr=0x801E85C0u; f_801F9770(c); // 801E85BC
  cmps(c,0,(int32_t)c->r[14],0); // 801E85C0
L_801E85C4:;
  c->r[12]=R32(c->r[16]+0x00000000u); // 801E85C4
  c->r[3]=c->r[16]|c->r[16]; // 801E85C8
  c->r[4]=c->r[25]|c->r[25]; // 801E85CC
  c->r[5]=0u+0x00000000u; // 801E85D0
  c->r[12]=R32(c->r[12]+0x00000044u); // 801E85D4
  c->ctr=c->r[12]; // 801E85D8
  if (true) { c->lr=0x801E85E0u; dispatch(c,c->ctr); } // 801E85DC
  c->r[12]=R32(c->r[16]+0x00000000u); // 801E85E0
  c->r[3]=c->r[16]|c->r[16]; // 801E85E4
  c->r[5]=c->r[22]|c->r[22]; // 801E85E8
  c->r[4]=c->r[27]+0x000011A0u; // 801E85EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E85F0
  c->ctr=c->r[12]; // 801E85F4
  if (true) { c->lr=0x801E85FCu; dispatch(c,c->ctr); } // 801E85F8
  cmpu(c,0,c->r[3],c->r[22]); // 801E85FC
  if (crb(c,2)) { goto L_801E861C; } // 801E8600
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E8604
  if (crb(c,2)) { goto L_801E8614; } // 801E8608
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E860C
  c->lr=0x801E8614u; f_800CCE30(c); // 801E8610
L_801E8614:;
  c->r[3]=0u+0x00000000u; // 801E8614
  goto L_801E8738; // 801E8618
L_801E861C:;
  c->r[31]=(uint32_t)((int32_t)c->r[24]*(int32_t)52); // 801E861C
  c->r[30]=rotl(c->r[24],1)&0xFFFFFFFEu; // 801E8620
  c->r[21]=0u+0x00000000u; // 801E8624
  goto L_801E8684; // 801E8628
L_801E862C:;
  cmps(c,0,(int32_t)c->r[19],0); // 801E862C
  if (crb(c,2)) { goto L_801E8640; } // 801E8630
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[21]); // 801E8634
  c->r[0]=R8(c->r[28]+c->r[0]); // 801E8638
  W16(c->r[29]+c->r[30],c->r[0]); // 801E863C
L_801E8640:;
  c->r[0]=R32(c->r[15]+0x0000011Cu); // 801E8640
  c->r[4]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[21]); // 801E8644
  c->r[3]=c->r[15]+c->r[31]; // 801E8648
  c->r[3]=R32(c->r[3]+0x00000818u); // 801E864C
  c->r[5]=c->r[17]|c->r[17]; // 801E8650
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[18]); // 801E8654
  c->r[4]=c->r[4]+c->r[28]; // 801E8658
  c->r[20]=c->r[0]+c->r[3]; // 801E865C
  c->r[3]=c->r[20]|c->r[20]; // 801E8660
  c->lr=0x801E8668u; f_80004364(c); // 801E8664
  c->r[3]=c->r[20]|c->r[20]; // 801E8668
  c->r[4]=c->r[17]|c->r[17]; // 801E866C
  c->lr=0x801E8674u; f_800C7780(c); // 801E8670
  c->r[24]=c->r[24]+0x00000001u; // 801E8674
  c->r[31]=c->r[31]+0x00000034u; // 801E8678
  c->r[30]=c->r[30]+0x00000002u; // 801E867C
  c->r[21]=c->r[21]+0x00000001u; // 801E8680
L_801E8684:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[23]); // 801E8684
  if (crb(c,0)) { IRQCHK(c); goto L_801E862C; } // 801E8688
  c->r[25]=c->r[25]+c->r[22]; // 801E868C
L_801E8690:;
  c->r[7]=R32(c->r[15]+0x00000810u); // 801E8690
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[7]); // 801E8694
  if (crb(c,0)) { IRQCHK(c); goto L_801E8568; } // 801E8698
  cmps(c,0,(int32_t)c->r[19],0); // 801E869C
  if (crb(c,2)) { goto L_801E8700; } // 801E86A0
  c->r[3]=R32(c->r[15]+0x000000C0u); // 801E86A4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801E86A8
  c->r[0]=cntlz(c->r[0]); // 801E86AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801E86B0
  if (crb(c,2)) { goto L_801E8700; } // 801E86B4
  c->r[6]=c->r[1]+0x00000010u; // 801E86B8
  c->r[8]=0u+0x00000000u; // 801E86BC
  c->r[3]=0u+0x00000000u; // 801E86C0
  c->r[4]=0u+0x00000000u; // 801E86C4
  goto L_801E86E8; // 801E86C8
  c->r[0]=c->r[0]|0x00000000u; // 801E86CC
L_801E86D0:;
  c->r[5]=c->r[15]+c->r[3]; // 801E86D0
  c->r[0]=R16(c->r[6]+c->r[4]); // 801E86D4
  W16(c->r[5]+0x0000084Au,c->r[0]); // 801E86D8
  c->r[8]=c->r[8]+0x00000001u; // 801E86DC
  c->r[3]=c->r[3]+0x00000034u; // 801E86E0
  c->r[4]=c->r[4]+0x00000002u; // 801E86E4
L_801E86E8:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801E86E8
  if (!crb(c,0)) { goto L_801E86F8; } // 801E86EC
  cmps(c,0,(int32_t)c->r[8],16); // 801E86F0
  if (crb(c,0)) { IRQCHK(c); goto L_801E86D0; } // 801E86F4
L_801E86F8:;
  c->r[0]=0u+0x00000001u; // 801E86F8
  W8(c->r[15]+0x0000010Cu,c->r[0]); // 801E86FC
L_801E8700:;
  c->r[0]=R8(c->r[15]+0x00000103u); // 801E8700
  cmps(c,0,(int32_t)c->r[0],0); // 801E8704
  if (!crb(c,2)) { goto L_801E8724; } // 801E8708
  c->r[0]=R32(c->r[15]+0x00000114u); // 801E870C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E8710
  W32(c->r[15]+0x00000114u,c->r[0]); // 801E8714
  if (!crb(c,2)) { goto L_801E8724; } // 801E8718
  c->r[0]=0u+0x00000001u; // 801E871C
  W8(c->r[15]+0x00000103u,c->r[0]); // 801E8720
L_801E8724:;
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801E8724
  if (crb(c,2)) { goto L_801E8734; } // 801E8728
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E872C
  c->lr=0x801E8734u; f_800CCE30(c); // 801E8730
L_801E8734:;
  c->r[3]=0u+0x00000001u; // 801E8734
L_801E8738:;
  c->r[11]=c->r[1]+0x00000080u; // 801E8738
  c->lr=0x801E8740u; f_802178C4(c); // 801E873C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801E8740
  c->lr=c->r[0]; // 801E8744
  c->r[1]=c->r[1]+0x00000080u; // 801E8748
  return; // 801E874C
}

// fn_801E8750
void f_801E8750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8750
  c->r[0]=c->lr; // 801E8754
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E8758
  c->r[11]=c->r[1]+0x00000030u; // 801E875C
  c->lr=0x801E8764u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E8760
  c->r[0]=R32(c->r[3]+0x00000804u); // 801E8764
  c->r[29]=0u+0x802D0000u; // 801E8768
  c->r[31]=c->r[3]|c->r[3]; // 801E876C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8770
  c->r[29]=c->r[29]+0x00001920u; // 801E8774
  if (!crb(c,2)) { goto L_801E8790; } // 801E8778
  c->r[3]=c->r[29]+0x00000000u; // 801E877C
  c->r[5]=c->r[29]+0x000003A4u; // 801E8780
  c->r[4]=0u+0x00000352u; // 801E8784
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8788
  c->lr=0x801E8790u; f_801F9770(c); // 801E878C
L_801E8790:;
  c->r[5]=R32(c->r[31]+0x00000804u); // 801E8790
  c->r[0]=0u+0x00000000u; // 801E8794
  c->r[3]=c->r[31]|c->r[31]; // 801E8798
  c->r[4]=c->r[1]+0x00000010u; // 801E879C
  c->r[27]=R32(c->r[5]+0x00000008u); // 801E87A0
  c->r[5]=c->r[1]+0x0000000Cu; // 801E87A4
  c->r[6]=c->r[1]+0x00000008u; // 801E87A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E87AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E87B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E87B4
  c->lr=0x801E87BCu; f_801E9B00(c); // 801E87B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E87BC
  if (!crb(c,2)) { goto L_801E87CC; } // 801E87C0
  c->r[3]=0u+0x00000000u; // 801E87C4
  goto L_801E8984; // 801E87C8
L_801E87CC:;
  c->r[4]=R32(c->r[31]+0x000000D4u); // 801E87CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E87D0
  c->r[0]=R32(c->r[31]+0x000000E4u); // 801E87D4
  c->r[4]=divwu(c->r[4],c->r[3]); // 801E87D8
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801E87DC
  cmps(c,0,(int32_t)c->r[0],8192); // 801E87E0
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 801E87E4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E87E8
  W32(c->r[31]+0x00000144u,c->r[3]); // 801E87EC
  W32(c->r[31]+0x00000140u,c->r[4]); // 801E87F0
  if (!crb(c,1)) { goto L_801E8814; } // 801E87F4
  c->r[3]=c->r[29]+0x00000000u; // 801E87F8
  c->r[5]=c->r[29]+0x000003D0u; // 801E87FC
  c->r[4]=0u+0x00000366u; // 801E8800
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8804
  c->lr=0x801E880Cu; f_801F9810(c); // 801E8808
  c->r[3]=0u+0x00000000u; // 801E880C
  goto L_801E8984; // 801E8810
L_801E8814:;
  c->r[0]=divwu(c->r[27],c->r[0]); // 801E8814
  W32(c->r[31]+0x00000120u,c->r[0]); // 801E8818
  cmps(c,0,(int32_t)c->r[0],4); // 801E881C
  if (!crb(c,0)) { goto L_801E8840; } // 801E8820
  c->r[3]=c->r[29]+0x00000000u; // 801E8824
  c->r[5]=c->r[29]+0x000003F4u; // 801E8828
  c->r[4]=0u+0x0000036Cu; // 801E882C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8830
  c->lr=0x801E8838u; f_801F9810(c); // 801E8834
  c->r[3]=0u+0x00000000u; // 801E8838
  goto L_801E8984; // 801E883C
L_801E8840:;
  cmps(c,0,(int32_t)c->r[0],32); // 801E8840
  if (!crb(c,1)) { goto L_801E8850; } // 801E8844
  c->r[0]=0u+0x00000020u; // 801E8848
  W32(c->r[31]+0x00000120u,c->r[0]); // 801E884C
L_801E8850:;
  c->r[4]=R32(c->r[31]+0x00000120u); // 801E8850
  c->r[3]=0u+0x00000000u; // 801E8854
  c->r[0]=R8(c->r[31]+0x0000010Au); // 801E8858
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801E885C
  W32(c->r[31]+0x00000124u,c->r[5]); // 801E8860
  cmps(c,0,(int32_t)c->r[0],0); // 801E8864
  W32(c->r[31]+0x00000118u,c->r[5]); // 801E8868
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E886C
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 801E8870
  c->r[4]=R32(c->r[1]+0x00000010u); // 801E8874
  W32(c->r[31]+0x00000130u,c->r[4]); // 801E8878
  W32(c->r[31]+0x0000012Cu,c->r[3]); // 801E887C
  W32(c->r[31]+0x00000138u,c->r[3]); // 801E8880
  if (crb(c,2)) { goto L_801E8894; } // 801E8884
  c->r[0]=R32(c->r[31]+0x000000E0u); // 801E8888
  W32(c->r[31]+0x00000128u,c->r[0]); // 801E888C
  goto L_801E88CC; // 801E8890
L_801E8894:;
  c->r[6]=R32(c->r[31]+0x00000144u); // 801E8894
  c->r[7]=c->r[5]+0x00000001u; // 801E8898
  c->r[0]=R32(c->r[31]+0x00000140u); // 801E889C
  c->r[3]=c->r[6]-c->r[4]; // 801E88A0
  c->r[4]=c->r[3]+0x00000001u; // 801E88A4
  c->r[3]=c->r[6]-c->r[0]; // 801E88A8
  c->r[4]=c->r[7]-c->r[4]; // 801E88AC
  c->r[3]=c->r[3]+0x00000001u; // 801E88B0
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 801E88B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801E88B8
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 801E88BC
  if (!crb(c,2)) { goto L_801E88C8; } // 801E88C0
  c->r[5]=c->r[7]|c->r[7]; // 801E88C4
L_801E88C8:;
  W32(c->r[31]+0x00000128u,c->r[5]); // 801E88C8
L_801E88CC:;
  c->r[0]=R32(c->r[31]+0x00000128u); // 801E88CC
  W32(c->r[31]+0x00000134u,c->r[0]); // 801E88D0
  c->lr=0x801E88D8u; f_800CBAA0(c); // 801E88D4
  c->r[0]=R8(c->r[31]+0x0000010Fu); // 801E88D8
  c->r[30]=c->r[3]|c->r[3]; // 801E88DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E88E0
  if (!crb(c,2)) { goto L_801E8978; } // 801E88E4
  c->r[28]=c->r[31]|c->r[31]; // 801E88E8
  c->r[27]=0u+0x00000000u; // 801E88EC
  goto L_801E8948; // 801E88F0
L_801E88F4:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801E88F4
  c->lr=0x801E88FCu; f_801E60A0(c); // 801E88F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E88FC
  if (!crb(c,2)) { goto L_801E893C; } // 801E8900
  c->r[26]=c->r[31]|c->r[31]; // 801E8904
  c->r[28]=0u+0x00000000u; // 801E8908
  c->r[29]=0u+0x00000000u; // 801E890C
  goto L_801E892C; // 801E8910
L_801E8914:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801E8914
  c->r[4]=R32(c->r[26]+0x00000818u); // 801E8918
  c->lr=0x801E8920u; f_801E6190(c); // 801E891C
  W32(c->r[26]+0x00000818u,c->r[29]); // 801E8920
  c->r[26]=c->r[26]+0x00000034u; // 801E8924
  c->r[28]=c->r[28]+0x00000001u; // 801E8928
L_801E892C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801E892C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8914; } // 801E8930
  c->r[0]=0u+0x00000000u; // 801E8934
  goto L_801E8958; // 801E8938
L_801E893C:;
  W32(c->r[28]+0x00000818u,c->r[3]); // 801E893C
  c->r[28]=c->r[28]+0x00000034u; // 801E8940
  c->r[27]=c->r[27]+0x00000001u; // 801E8944
L_801E8948:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 801E8948
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E894C
  if (crb(c,0)) { IRQCHK(c); goto L_801E88F4; } // 801E8950
  c->r[0]=0u+0x00000001u; // 801E8954
L_801E8958:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E8958
  if (!crb(c,2)) { goto L_801E8970; } // 801E895C
  c->r[3]=c->r[30]|c->r[30]; // 801E8960
  c->lr=0x801E8968u; f_800CBAE0(c); // 801E8964
  c->r[3]=0u+0x00000000u; // 801E8968
  goto L_801E8984; // 801E896C
L_801E8970:;
  c->r[0]=0u+0x00000001u; // 801E8970
  W8(c->r[31]+0x0000010Fu,c->r[0]); // 801E8974
L_801E8978:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8978
  c->lr=0x801E8980u; f_800CBAE0(c); // 801E897C
  c->r[3]=0u+0x00000001u; // 801E8980
L_801E8984:;
  c->r[11]=c->r[1]+0x00000030u; // 801E8984
  c->lr=0x801E898Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E8988
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E898C
  c->lr=c->r[0]; // 801E8990
  c->r[1]=c->r[1]+0x00000030u; // 801E8994
  return; // 801E8998
}

// fn_801E89A0
void f_801E89A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E89A0
  c->r[0]=c->lr; // 801E89A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E89A8
  c->r[11]=c->r[1]+0x00000030u; // 801E89AC
  c->lr=0x801E89B4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E89B0
  c->r[24]=c->r[3]|c->r[3]; // 801E89B4
  c->r[25]=c->r[4]|c->r[4]; // 801E89B8
  c->lr=0x801E89C0u; f_800CBAA0(c); // 801E89BC
  c->r[0]=R32(c->r[24]+0x00000804u); // 801E89C0
  c->r[31]=c->r[3]|c->r[3]; // 801E89C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E89C8
  if (!crb(c,2)) { goto L_801E89EC; } // 801E89CC
  c->r[3]=0u+0x802D0000u; // 801E89D0
  c->r[5]=0u+0x802D0000u; // 801E89D4
  c->r[3]=c->r[3]+0x00001920u; // 801E89D8
  c->r[4]=0u+0x000003E0u; // 801E89DC
  c->r[5]=c->r[5]+0x00001CC4u; // 801E89E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E89E4
  c->lr=0x801E89ECu; f_801F9770(c); // 801E89E8
L_801E89EC:;
  c->r[27]=c->r[24]+0x00000B58u; // 801E89EC
  c->r[26]=0u+0x00000000u; // 801E89F0
  c->r[28]=c->r[27]|c->r[27]; // 801E89F4
  c->r[29]=0u+0x801F0000u; // 801E89F8
  c->r[30]=0u+0x00000001u; // 801E89FC
  goto L_801E8A84; // 801E8A00
L_801E8A04:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801E8A04
  cmps(c,0,(int32_t)c->r[0],0); // 801E8A08
  if (crb(c,2)) { goto L_801E8A7C; } // 801E8A0C
  c->lr=0x801E8A14u; f_801EE4D0(c); // 801E8A10
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 801E8A14
  c->r[5]=c->r[25]|c->r[25]; // 801E8A18
  c->r[8]=c->r[28]|c->r[28]; // 801E8A1C
  c->r[7]=c->r[29]+0xFFFF9C10u; // 801E8A20
  c->r[6]=0u+0x000000FFu; // 801E8A24
  c->lr=0x801E8A2Cu; f_801EE6D0(c); // 801E8A28
  cmps(c,0,(int32_t)c->r[3],0); // 801E8A2C
  if (!crb(c,2)) { goto L_801E8A74; } // 801E8A30
  c->r[28]=0u+0x00000000u; // 801E8A34
  c->r[30]=0u+0x00000000u; // 801E8A38
  goto L_801E8A5C; // 801E8A3C
L_801E8A40:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 801E8A40
  cmps(c,0,(int32_t)c->r[3],0); // 801E8A44
  if (crb(c,2)) { goto L_801E8A54; } // 801E8A48
  c->lr=0x801E8A50u; f_801EC360(c); // 801E8A4C
  W32(c->r[27]+0x00000004u,c->r[30]); // 801E8A50
L_801E8A54:;
  c->r[27]=c->r[27]+0x00000038u; // 801E8A54
  c->r[28]=c->r[28]+0x00000001u; // 801E8A58
L_801E8A5C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[26]); // 801E8A5C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8A40; } // 801E8A60
  c->r[3]=c->r[31]|c->r[31]; // 801E8A64
  c->lr=0x801E8A6Cu; f_800CBAE0(c); // 801E8A68
  c->r[3]=0u+0x00000000u; // 801E8A6C
  goto L_801E8A9C; // 801E8A70
L_801E8A74:;
  W32(c->r[28]+0x00000004u,c->r[3]); // 801E8A74
  W8(c->r[3]+0x000000A1u,c->r[30]); // 801E8A78
L_801E8A7C:;
  c->r[28]=c->r[28]+0x00000038u; // 801E8A7C
  c->r[26]=c->r[26]+0x00000001u; // 801E8A80
L_801E8A84:;
  c->r[0]=R32(c->r[24]+0x0000080Cu); // 801E8A84
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801E8A88
  if (crb(c,0)) { IRQCHK(c); goto L_801E8A04; } // 801E8A8C
  c->r[3]=c->r[31]|c->r[31]; // 801E8A90
  c->lr=0x801E8A98u; f_800CBAE0(c); // 801E8A94
  c->r[3]=0u+0x00000001u; // 801E8A98
L_801E8A9C:;
  c->r[11]=c->r[1]+0x00000030u; // 801E8A9C
  c->lr=0x801E8AA4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E8AA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E8AA4
  c->lr=c->r[0]; // 801E8AA8
  c->r[1]=c->r[1]+0x00000030u; // 801E8AAC
  return; // 801E8AB0
}

// fn_801E8AC0
void f_801E8AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8AC0
  c->r[0]=c->lr; // 801E8AC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8AC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E8ACC
  c->r[31]=c->r[3]|c->r[3]; // 801E8AD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E8AD4
  c->r[30]=0u+0x802D0000u; // 801E8AD8
  c->r[30]=c->r[30]+0x00001920u; // 801E8ADC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E8AE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E8AE4
  c->r[0]=R8(c->r[3]+0x00000101u); // 801E8AE8
  cmps(c,0,(int32_t)c->r[0],0); // 801E8AEC
  if (crb(c,2)) { goto L_801E8C90; } // 801E8AF0
  c->r[0]=R8(c->r[3]+0x00000104u); // 801E8AF4
  cmps(c,0,(int32_t)c->r[0],0); // 801E8AF8
  if (crb(c,2)) { goto L_801E8B38; } // 801E8AFC
  c->r[0]=R8(c->r[3]+0x00000105u); // 801E8B00
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B04
  if (!crb(c,2)) { goto L_801E8B38; } // 801E8B08
  c->r[3]=c->r[30]+0x00000000u; // 801E8B0C
  c->r[5]=c->r[30]+0x00000414u; // 801E8B10
  c->r[4]=0u+0x00000434u; // 801E8B14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8B18
  c->lr=0x801E8B20u; f_801F9810(c); // 801E8B1C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E8B20
  c->r[3]=c->r[31]|c->r[31]; // 801E8B24
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E8B28
  c->ctr=c->r[12]; // 801E8B2C
  if (true) { c->lr=0x801E8B34u; dispatch(c,c->ctr); } // 801E8B30
  goto L_801E8C90; // 801E8B34
L_801E8B38:;
  c->r[0]=R8(c->r[3]+0x00000102u); // 801E8B38
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B3C
  if (crb(c,2)) { goto L_801E8B90; } // 801E8B40
  c->r[0]=R32(c->r[3]+0x0000080Cu); // 801E8B44
  c->r[4]=c->r[3]+0x00000B58u; // 801E8B48
  c->ctr=c->r[0]; // 801E8B4C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B50
  if (!crb(c,1)) { goto L_801E8B90; } // 801E8B54
L_801E8B58:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E8B58
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B5C
  if (crb(c,2)) { goto L_801E8B88; } // 801E8B60
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E8B64
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B68
  if (!crb(c,2)) { goto L_801E8B88; } // 801E8B6C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E8B70
  c->r[3]=c->r[31]|c->r[31]; // 801E8B74
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E8B78
  c->ctr=c->r[12]; // 801E8B7C
  if (true) { c->lr=0x801E8B84u; dispatch(c,c->ctr); } // 801E8B80
  goto L_801E8C90; // 801E8B84
L_801E8B88:;
  c->r[4]=c->r[4]+0x00000038u; // 801E8B88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8B58; } // 801E8B8C
L_801E8B90:;
  c->r[0]=R8(c->r[3]+0x00000109u); // 801E8B90
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B94
  if (crb(c,2)) { goto L_801E8C3C; } // 801E8B98
  c->r[0]=R32(c->r[3]+0x00000174u); // 801E8B9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8BA0
  if (!crb(c,2)) { goto L_801E8C3C; } // 801E8BA4
  c->r[28]=R32(c->r[3]+0x00000808u); // 801E8BA8
  c->r[29]=c->r[13]+0xFFFFAEF0u; // 801E8BAC
  cmps(c,0,(int32_t)c->r[28],0); // 801E8BB0
  if (crb(c,2)) { goto L_801E8BFC; } // 801E8BB4
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E8BB8
  c->r[3]=c->r[28]|c->r[28]; // 801E8BBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E8BC0
  c->ctr=c->r[12]; // 801E8BC4
  if (true) { c->lr=0x801E8BCCu; dispatch(c,c->ctr); } // 801E8BC8
  goto L_801E8BE4; // 801E8BCC
L_801E8BD0:;
  cmpu(c,0,c->r[3],c->r[29]); // 801E8BD0
  if (!crb(c,2)) { goto L_801E8BE0; } // 801E8BD4
  c->r[0]=0u+0x00000001u; // 801E8BD8
  goto L_801E8BF0; // 801E8BDC
L_801E8BE0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E8BE0
L_801E8BE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E8BE4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E8BD0; } // 801E8BE8
  c->r[0]=0u+0x00000000u; // 801E8BEC
L_801E8BF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E8BF0
  if (crb(c,2)) { goto L_801E8BFC; } // 801E8BF4
  goto L_801E8C00; // 801E8BF8
L_801E8BFC:;
  c->r[28]=0u+0x00000000u; // 801E8BFC
L_801E8C00:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E8C00
  if (!crb(c,2)) { goto L_801E8C10; } // 801E8C04
  c->r[0]=0u+0x00000000u; // 801E8C08
  goto L_801E8C24; // 801E8C0C
L_801E8C10:;
  c->lr=0x801E8C14u; f_800E7DF0(c); // 801E8C10
  c->r[0]=c->r[3]^0x00000001u; // 801E8C14
  c->r[0]=cntlz(c->r[0]); // 801E8C18
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E8C1C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E8C20
L_801E8C24:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E8C24
  if (!crb(c,2)) { goto L_801E8C3C; } // 801E8C28
  c->r[0]=0u+0x00000000u; // 801E8C2C
  W8(c->r[31]+0x00000109u,c->r[0]); // 801E8C30
  c->r[3]=c->r[31]|c->r[31]; // 801E8C34
  c->lr=0x801E8C3Cu; f_801E9A40(c); // 801E8C38
L_801E8C3C:;
  c->r[0]=R8(c->r[31]+0x00000106u); // 801E8C3C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8C40
  if (crb(c,2)) { goto L_801E8C64; } // 801E8C44
  c->r[3]=c->r[30]+0x00000000u; // 801E8C48
  c->r[5]=c->r[30]+0x0000042Cu; // 801E8C4C
  c->r[4]=0u+0x00000455u; // 801E8C50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E8C54
  c->lr=0x801E8C5Cu; f_801F9810(c); // 801E8C58
  c->r[0]=0u+0x00000000u; // 801E8C5C
  W8(c->r[31]+0x00000106u,c->r[0]); // 801E8C60
L_801E8C64:;
  c->r[28]=c->r[31]+0x00000B58u; // 801E8C64
  c->r[29]=0u+0x00000000u; // 801E8C68
  goto L_801E8C84; // 801E8C6C
L_801E8C70:;
  c->r[3]=c->r[31]|c->r[31]; // 801E8C70
  c->r[4]=c->r[28]|c->r[28]; // 801E8C74
  c->lr=0x801E8C7Cu; f_801E8CB0(c); // 801E8C78
  c->r[28]=c->r[28]+0x00000038u; // 801E8C7C
  c->r[29]=c->r[29]+0x00000001u; // 801E8C80
L_801E8C84:;
  c->r[0]=R32(c->r[31]+0x0000080Cu); // 801E8C84
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801E8C88
  if (crb(c,0)) { IRQCHK(c); goto L_801E8C70; } // 801E8C8C
L_801E8C90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8C90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E8C94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E8C98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E8C9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E8CA0
  c->lr=c->r[0]; // 801E8CA4
  c->r[1]=c->r[1]+0x00000020u; // 801E8CA8
  return; // 801E8CAC
}

// fn_801E8CB0
void f_801E8CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8CB0
  c->r[0]=c->lr; // 801E8CB4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801E8CB8
  c->r[11]=c->r[1]+0x00000050u; // 801E8CBC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801E8CC0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801E8CC4
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 801E8CC8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 801E8CCC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 801E8CD0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 801E8CD4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 801E8CD8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 801E8CDC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 801E8CE0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 801E8CE4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 801E8CE8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 801E8CEC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 801E8CF0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 801E8CF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[24]);} // 801E8CF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,24,ea,0,0);} // 801E8CFC
  c->lr=0x801E8D04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E8D00
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E8D04
  c->r[31]=c->r[3]|c->r[3]; // 801E8D08
  c->r[26]=c->r[4]|c->r[4]; // 801E8D0C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8D10
  if (crb(c,2)) { goto L_801E8F7C; } // 801E8D14
  c->r[0]=R8(c->r[4]+0x00000008u); // 801E8D18
  c->r[5]=0u+0x43300000u; // 801E8D1C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E8D20
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801E8D24
  W32(c->r[1]+0x00000028u,c->r[5]); // 801E8D28
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[2]=RF64(ea);} // 801E8D2C
  c->f[30]=c->f[31]; // 801E8D30
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801E8D34
  {uint32_t ea=c->r[2]+0xFFFF9EE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8D38
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801E8D3C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E8D40
  c->r[6]=R8(c->r[4]+0x00000009u); // 801E8D44
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[3]); // 801E8D48
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8D4C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801E8D50
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E8D54
  cmpu(c,0,c->r[6],0x00000001u); // 801E8D58
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801E8D5C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801E8D60
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 801E8D64
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[2]); // 801E8D68
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[4]); // 801E8D6C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801E8D70
  if (crb(c,1)) { goto L_801E8DA4; } // 801E8D74
  c->r[0]=c->r[6]+0xFFFFFFC1u; // 801E8D78
  W32(c->r[1]+0x00000028u,c->r[5]); // 801E8D7C
  c->r[0]=c->r[0]^0x80000000u; // 801E8D80
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[2]=RF64(ea);} // 801E8D84
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E8D88
  {uint32_t ea=c->r[2]+0xFFFF9EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8D8C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801E8D90
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E8D94
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E8D98
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 801E8D9C
  goto L_801E8DCC; // 801E8DA0
L_801E8DA4:;
  c->r[0]=c->r[6]+0xFFFFFFC0u; // 801E8DA4
  W32(c->r[1]+0x00000028u,c->r[5]); // 801E8DA8
  c->r[0]=c->r[0]^0x80000000u; // 801E8DAC
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[2]=RF64(ea);} // 801E8DB0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E8DB4
  {uint32_t ea=c->r[2]+0xFFFF9EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8DB8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801E8DBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E8DC0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E8DC4
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 801E8DC8
L_801E8DCC:;
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8DCC
  c->r[30]=c->r[1]+0x00000018u; // 801E8DD0
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[27]=c->ps1[27]=RF32(ea);} // 801E8DD4
  c->r[27]=0u+0x00000000u; // 801E8DD8
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 801E8DDC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8DE0
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[26]=c->ps1[26]=RF32(ea);} // 801E8DE4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8DE8
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801E8DEC
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[24]=c->ps1[24]=RF32(ea);} // 801E8DF0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8DF4
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 801E8DF8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[25]=c->ps1[25]=RF32(ea);} // 801E8DFC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801E8E00
  c->r[28]=R8(c->r[3]+0x0000001Du); // 801E8E04
  c->r[29]=R8(c->r[3]+0x0000001Cu); // 801E8E08
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[28]=c->ps1[28]=RF32(ea);} // 801E8E0C
L_801E8E10:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[28]);} // 801E8E10
  c->r[3]=c->r[31]|c->r[31]; // 801E8E14
  c->r[4]=c->r[27]|c->r[27]; // 801E8E18
  c->lr=0x801E8E20u; f_801D28B0(c); // 801E8E1C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8E20
  c->r[27]=c->r[27]+0x00000001u; // 801E8E24
  cmps(c,0,(int32_t)c->r[27],3); // 801E8E28
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801E8E2C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801E8E30
  c->r[30]=c->r[30]+0x00000004u; // 801E8E34
  if (crb(c,0)) { IRQCHK(c); goto L_801E8E10; } // 801E8E38
  c->r[30]=c->r[1]+0x00000008u; // 801E8E3C
  c->r[27]=0u+0x00000000u; // 801E8E40
L_801E8E44:;
  c->r[3]=c->r[31]|c->r[31]; // 801E8E44
  c->r[4]=c->r[27]|c->r[27]; // 801E8E48
  c->lr=0x801E8E50u; f_801D2B30(c); // 801E8E4C
  c->r[27]=c->r[27]+0x00000001u; // 801E8E50
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 801E8E54
  cmps(c,0,(int32_t)c->r[27],4); // 801E8E58
  c->r[30]=c->r[30]+0x00000004u; // 801E8E5C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8E44; } // 801E8E60
  c->lr=0x801E8E68u; f_800CBAA0(c); // 801E8E64
  c->r[27]=R32(c->r[26]+0x00000004u); // 801E8E68
  c->r[30]=c->r[3]|c->r[3]; // 801E8E6C
  cmps(c,0,(int32_t)c->r[27],0); // 801E8E70
  if (crb(c,2)) { goto L_801E8F74; } // 801E8E74
  c->f[1]=c->f[31]; // 801E8E78
  c->r[3]=c->r[27]|c->r[27]; // 801E8E7C
  c->lr=0x801E8E84u; f_801EC7E0(c); // 801E8E80
  c->f[1]=c->f[30]; // 801E8E84
  c->r[3]=c->r[27]|c->r[27]; // 801E8E88
  c->lr=0x801E8E90u; f_801EC890(c); // 801E8E8C
  c->f[1]=c->f[29]; // 801E8E90
  c->r[3]=c->r[27]|c->r[27]; // 801E8E94
  c->lr=0x801E8E9Cu; f_801EC8F0(c); // 801E8E98
  c->f[1]=c->f[27]; // 801E8E9C
  c->r[3]=c->r[27]|c->r[27]; // 801E8EA0
  c->lr=0x801E8EA8u; f_801EC910(c); // 801E8EA4
  c->f[1]=c->f[26]; // 801E8EA8
  c->r[3]=c->r[27]|c->r[27]; // 801E8EAC
  c->lr=0x801E8EB4u; f_801EC930(c); // 801E8EB0
  c->f[1]=c->f[25]; // 801E8EB4
  c->r[3]=c->r[27]|c->r[27]; // 801E8EB8
  c->r[4]=c->r[29]|c->r[29]; // 801E8EBC
  c->lr=0x801E8EC4u; f_801EC950(c); // 801E8EC0
  c->r[3]=c->r[27]|c->r[27]; // 801E8EC4
  c->r[4]=c->r[28]|c->r[28]; // 801E8EC8
  c->lr=0x801E8ED0u; f_801ECA40(c); // 801E8ECC
  c->r[4]=R32(c->r[31]+0x00000020u); // 801E8ED0
  c->r[3]=c->r[27]|c->r[27]; // 801E8ED4
  c->lr=0x801E8EDCu; f_801ECA80(c); // 801E8ED8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8EDC
  c->r[3]=c->r[27]|c->r[27]; // 801E8EE0
  c->lr=0x801E8EE8u; f_801ECAA0(c); // 801E8EE4
  c->f[1]=c->f[24]; // 801E8EE8
  c->r[3]=c->r[27]|c->r[27]; // 801E8EEC
  c->lr=0x801E8EF4u; f_801ECAD0(c); // 801E8EF0
  c->r[29]=c->r[1]+0x00000018u; // 801E8EF4
  c->r[28]=0u+0x00000000u; // 801E8EF8
L_801E8EFC:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8EFC
  c->r[3]=c->r[27]|c->r[27]; // 801E8F00
  c->r[4]=c->r[28]|c->r[28]; // 801E8F04
  c->lr=0x801E8F0Cu; f_801ECB10(c); // 801E8F08
  c->r[28]=c->r[28]+0x00000001u; // 801E8F0C
  c->r[29]=c->r[29]+0x00000004u; // 801E8F10
  cmps(c,0,(int32_t)c->r[28],3); // 801E8F14
  if (crb(c,0)) { IRQCHK(c); goto L_801E8EFC; } // 801E8F18
  c->r[29]=c->r[1]+0x00000008u; // 801E8F1C
  c->r[28]=0u+0x00000000u; // 801E8F20
L_801E8F24:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8F24
  c->r[3]=c->r[27]|c->r[27]; // 801E8F28
  c->r[4]=c->r[28]|c->r[28]; // 801E8F2C
  c->lr=0x801E8F34u; f_801ECBD0(c); // 801E8F30
  c->r[28]=c->r[28]+0x00000001u; // 801E8F34
  c->r[29]=c->r[29]+0x00000004u; // 801E8F38
  cmps(c,0,(int32_t)c->r[28],4); // 801E8F3C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8F24; } // 801E8F40
  c->r[29]=c->r[31]+0x00000050u; // 801E8F44
  c->r[28]=0u+0x00000000u; // 801E8F48
  goto L_801E8F68; // 801E8F4C
L_801E8F50:;
  c->r[3]=c->r[27]|c->r[27]; // 801E8F50
  c->r[4]=c->r[28]|c->r[28]; // 801E8F54
  c->r[5]=c->r[29]|c->r[29]; // 801E8F58
  c->lr=0x801E8F60u; f_801ECC90(c); // 801E8F5C
  c->r[29]=c->r[29]+0x00000018u; // 801E8F60
  c->r[28]=c->r[28]+0x00000001u; // 801E8F64
L_801E8F68:;
  c->r[0]=R32(c->r[31]+0x00000814u); // 801E8F68
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E8F6C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8F50; } // 801E8F70
L_801E8F74:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8F74
  c->lr=0x801E8F7Cu; f_800CBAE0(c); // 801E8F78
L_801E8F7C:;
  c->r[11]=c->r[1]+0x00000050u; // 801E8F7C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801E8F80
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801E8F84
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 801E8F88
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 801E8F8C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 801E8F90
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 801E8F94
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 801E8F98
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 801E8F9C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 801E8FA0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 801E8FA4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 801E8FA8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 801E8FAC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 801E8FB0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 801E8FB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,24,ea,0,0);} // 801E8FB8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[24]=RF64(ea);} // 801E8FBC
  c->lr=0x801E8FC4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E8FC0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801E8FC4
  c->lr=c->r[0]; // 801E8FC8
  c->r[1]=c->r[1]+0x000000D0u; // 801E8FCC
  return; // 801E8FD0
}

// fn_801E8FE0
void f_801E8FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8FE0
  c->r[0]=c->lr; // 801E8FE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8FE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E8FEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E8FF0
  c->r[30]=c->r[3]|c->r[3]; // 801E8FF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E8FF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E8FFC
  c->r[0]=R8(c->r[3]+0x00000102u); // 801E9000
  cmps(c,0,(int32_t)c->r[0],0); // 801E9004
  if (crb(c,2)) { goto L_801E9194; } // 801E9008
  c->r[0]=R8(c->r[3]+0x00000B58u); // 801E900C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9010
  if (crb(c,2)) { goto L_801E9194; } // 801E9014
  c->r[31]=R32(c->r[3]+0x00000B5Cu); // 801E9018
  cmps(c,0,(int32_t)c->r[31],0); // 801E901C
  if (crb(c,2)) { goto L_801E9194; } // 801E9020
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 801E9024
  c->r[4]=0u+0x00000000u; // 801E9028
  cmps(c,0,(int32_t)c->r[5],0); // 801E902C
  if (crb(c,2)) { goto L_801E9060; } // 801E9030
  c->r[6]=R32(c->r[5]+0x00000000u); // 801E9034
  c->r[5]=0u+0x00000000u; // 801E9038
  cmps(c,0,(int32_t)c->r[6],0); // 801E903C
  if (crb(c,2)) { goto L_801E9054; } // 801E9040
  c->r[0]=R16(c->r[6]+0x00000038u); // 801E9044
  cmpu(c,0,c->r[0],0x00000001u); // 801E9048
  if (!crb(c,2)) { goto L_801E9054; } // 801E904C
  c->r[5]=0u+0x00000001u; // 801E9050
L_801E9054:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E9054
  if (crb(c,2)) { goto L_801E9060; } // 801E9058
  c->r[4]=0u+0x00000001u; // 801E905C
L_801E9060:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E9060
  if (crb(c,2)) { goto L_801E9194; } // 801E9064
  c->r[28]=R32(c->r[3]+0x00000808u); // 801E9068
  c->r[29]=c->r[13]+0xFFFFAEF0u; // 801E906C
  cmps(c,0,(int32_t)c->r[28],0); // 801E9070
  if (crb(c,2)) { goto L_801E90BC; } // 801E9074
  c->r[12]=R32(c->r[28]+0x00000000u); // 801E9078
  c->r[3]=c->r[28]|c->r[28]; // 801E907C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E9080
  c->ctr=c->r[12]; // 801E9084
  if (true) { c->lr=0x801E908Cu; dispatch(c,c->ctr); } // 801E9088
  goto L_801E90A4; // 801E908C
L_801E9090:;
  cmpu(c,0,c->r[3],c->r[29]); // 801E9090
  if (!crb(c,2)) { goto L_801E90A0; } // 801E9094
  c->r[0]=0u+0x00000001u; // 801E9098
  goto L_801E90B0; // 801E909C
L_801E90A0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E90A0
L_801E90A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E90A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E9090; } // 801E90A8
  c->r[0]=0u+0x00000000u; // 801E90AC
L_801E90B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E90B0
  if (crb(c,2)) { goto L_801E90BC; } // 801E90B4
  goto L_801E90C0; // 801E90B8
L_801E90BC:;
  c->r[28]=0u+0x00000000u; // 801E90BC
L_801E90C0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E90C0
  if (!crb(c,2)) { goto L_801E90D0; } // 801E90C4
  c->r[0]=0u+0x00000000u; // 801E90C8
  goto L_801E90E4; // 801E90CC
L_801E90D0:;
  c->lr=0x801E90D4u; f_800E7DF0(c); // 801E90D0
  c->r[0]=c->r[3]^0x00000001u; // 801E90D4
  c->r[0]=cntlz(c->r[0]); // 801E90D8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E90DC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E90E0
L_801E90E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E90E4
  if (crb(c,2)) { goto L_801E90FC; } // 801E90E8
  c->r[0]=0u+0x00000001u; // 801E90EC
  W8(c->r[30]+0x00000109u,c->r[0]); // 801E90F0
  c->r[3]=c->r[30]|c->r[30]; // 801E90F4
  c->lr=0x801E90FCu; f_801E9A40(c); // 801E90F8
L_801E90FC:;
  c->r[0]=R8(c->r[30]+0x0000010Du); // 801E90FC
  cmps(c,0,(int32_t)c->r[0],0); // 801E9100
  if (!crb(c,2)) { goto L_801E9194; } // 801E9104
  c->r[0]=R8(c->r[30]+0x0000010Au); // 801E9108
  cmps(c,0,(int32_t)c->r[0],0); // 801E910C
  if (!crb(c,2)) { goto L_801E9194; } // 801E9110
  c->r[0]=R8(c->r[30]+0x00000109u); // 801E9114
  cmps(c,0,(int32_t)c->r[0],0); // 801E9118
  if (!crb(c,2)) { goto L_801E9194; } // 801E911C
  c->r[3]=c->r[31]|c->r[31]; // 801E9120
  c->lr=0x801E9128u; f_801ECF60(c); // 801E9124
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801E9128
  c->r[28]=divwu(c->r[3],c->r[0]); // 801E912C
  goto L_801E9188; // 801E9130
L_801E9134:;
  c->r[0]=R8(c->r[30]+0x00000109u); // 801E9134
  cmps(c,0,(int32_t)c->r[0],0); // 801E9138
  if (!crb(c,2)) { goto L_801E9178; } // 801E913C
  c->r[0]=R32(c->r[30]+0x00000174u); // 801E9140
  cmps(c,0,(int32_t)c->r[0],0); // 801E9144
  if (crb(c,2)) { goto L_801E9178; } // 801E9148
  c->r[3]=R32(c->r[30]+0x00000124u); // 801E914C
  c->r[4]=R32(c->r[30]+0x00000148u); // 801E9150
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E9154
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E9158
  if (crb(c,0)) { goto L_801E9178; } // 801E915C
  c->r[0]=0u+0x00000001u; // 801E9160
  W8(c->r[30]+0x00000106u,c->r[0]); // 801E9164
  c->r[3]=c->r[30]|c->r[30]; // 801E9168
  W8(c->r[30]+0x00000109u,c->r[0]); // 801E916C
  c->lr=0x801E9174u; f_801E9A40(c); // 801E9170
  goto L_801E9194; // 801E9174
L_801E9178:;
  c->r[3]=c->r[30]|c->r[30]; // 801E9178
  c->lr=0x801E9180u; f_801E92D0(c); // 801E917C
  c->r[3]=c->r[30]|c->r[30]; // 801E9180
  c->lr=0x801E9188u; f_801E9760(c); // 801E9184
L_801E9188:;
  c->r[0]=R32(c->r[30]+0x00000138u); // 801E9188
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801E918C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E9134; } // 801E9190
L_801E9194:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9194
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9198
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E919C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E91A0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E91A4
  c->lr=c->r[0]; // 801E91A8
  c->r[1]=c->r[1]+0x00000020u; // 801E91AC
  return; // 801E91B0
}

// fn_801E91C0
void f_801E91C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E91C0
  c->r[0]=c->lr; // 801E91C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E91C8
  c->r[11]=c->r[1]+0x00000030u; // 801E91CC
  c->lr=0x801E91D4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E91D0
  c->r[22]=c->r[3]|c->r[3]; // 801E91D4
  c->r[23]=c->r[4]|c->r[4]; // 801E91D8
  c->r[24]=c->r[5]|c->r[5]; // 801E91DC
  c->lr=0x801E91E4u; f_800CBAA0(c); // 801E91E0
  c->r[31]=c->r[3]|c->r[3]; // 801E91E4
  c->r[28]=c->r[22]|c->r[22]; // 801E91E8
  c->r[29]=c->r[22]+0x00000B58u; // 801E91EC
  c->r[27]=0u+0x00000000u; // 801E91F0
  goto L_801E929C; // 801E91F4
L_801E91F8:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801E91F8
  cmps(c,0,(int32_t)c->r[0],0); // 801E91FC
  if (crb(c,2)) { goto L_801E9290; } // 801E9200
  c->r[26]=R32(c->r[29]+0x00000004u); // 801E9204
  cmps(c,0,(int32_t)c->r[26],0); // 801E9208
  if (crb(c,2)) { goto L_801E9290; } // 801E920C
  c->r[25]=0u+0x00000000u; // 801E9210
  goto L_801E9278; // 801E9214
L_801E9218:;
  cmps(c,0,(int32_t)c->r[25],2); // 801E9218
  if (crb(c,0)) { goto L_801E9228; } // 801E921C
  c->r[30]=0u+0x00000000u; // 801E9220
  goto L_801E924C; // 801E9224
L_801E9228:;
  c->r[3]=c->r[28]+c->r[25]; // 801E9228
  c->r[0]=R8(c->r[3]+0x00000B68u); // 801E922C
  cmps(c,0,(int32_t)c->r[0],16); // 801E9230
  if (crb(c,0)) { goto L_801E9240; } // 801E9234
  c->r[30]=0u+0x00000000u; // 801E9238
  goto L_801E924C; // 801E923C
L_801E9240:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801E9240
  c->r[3]=c->r[22]+c->r[0]; // 801E9244
  c->r[30]=c->r[3]+0x00000818u; // 801E9248
L_801E924C:;
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E924C
  c->r[3]=c->r[26]|c->r[26]; // 801E9250
  c->r[4]=c->r[25]|c->r[25]; // 801E9254
  c->r[6]=c->r[23]|c->r[23]; // 801E9258
  c->lr=0x801E9260u; f_801ECF80(c); // 801E925C
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E9260
  c->r[3]=c->r[26]|c->r[26]; // 801E9264
  c->r[4]=c->r[25]|c->r[25]; // 801E9268
  c->r[6]=c->r[24]|c->r[24]; // 801E926C
  c->lr=0x801E9274u; f_801ED000(c); // 801E9270
  c->r[25]=c->r[25]+0x00000001u; // 801E9274
L_801E9278:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801E9278
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801E927C
  if (crb(c,0)) { IRQCHK(c); goto L_801E9218; } // 801E9280
  c->r[3]=c->r[26]|c->r[26]; // 801E9284
  c->r[4]=0u+0x00000001u; // 801E9288
  c->lr=0x801E9290u; f_801ED080(c); // 801E928C
L_801E9290:;
  c->r[29]=c->r[29]+0x00000038u; // 801E9290
  c->r[28]=c->r[28]+0x00000038u; // 801E9294
  c->r[27]=c->r[27]+0x00000001u; // 801E9298
L_801E929C:;
  c->r[0]=R32(c->r[22]+0x0000080Cu); // 801E929C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E92A0
  if (crb(c,0)) { IRQCHK(c); goto L_801E91F8; } // 801E92A4
  c->r[3]=c->r[31]|c->r[31]; // 801E92A8
  c->lr=0x801E92B0u; f_800CBAE0(c); // 801E92AC
  c->r[11]=c->r[1]+0x00000030u; // 801E92B0
  c->lr=0x801E92B8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E92B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E92B8
  c->lr=c->r[0]; // 801E92BC
  c->r[1]=c->r[1]+0x00000030u; // 801E92C0
  return; // 801E92C4
}

// fn_801E92D0
void f_801E92D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E92D0
  c->r[0]=c->lr; // 801E92D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E92D8
  c->r[11]=c->r[1]+0x00000030u; // 801E92DC
  c->lr=0x801E92E4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E92E0
  c->r[4]=R32(c->r[3]+0x0000013Cu); // 801E92E4
  c->r[31]=0u+0x802D0000u; // 801E92E8
  c->r[0]=R32(c->r[3]+0x00000144u); // 801E92EC
  c->r[30]=c->r[3]|c->r[3]; // 801E92F0
  c->r[4]=c->r[4]+0x00000001u; // 801E92F4
  W32(c->r[3]+0x0000013Cu,c->r[4]); // 801E92F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E92FC
  c->r[31]=c->r[31]+0x00001920u; // 801E9300
  if (!crb(c,1)) { goto L_801E9368; } // 801E9304
  c->r[0]=R8(c->r[3]+0x000000C4u); // 801E9308
  cmps(c,0,(int32_t)c->r[0],0); // 801E930C
  if (crb(c,2)) { goto L_801E9354; } // 801E9310
  c->r[4]=0u+0x80000000u; // 801E9314
  c->r[5]=R32(c->r[3]+0x00000110u); // 801E9318
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E931C
  c->r[4]=R32(c->r[3]+0x00000140u); // 801E9320
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E9324
  W32(c->r[3]+0x0000013Cu,c->r[4]); // 801E9328
  if (!crb(c,0)) { goto L_801E9338; } // 801E932C
  c->r[0]=c->r[5]+0x00000001u; // 801E9330
  W32(c->r[3]+0x00000110u,c->r[0]); // 801E9334
L_801E9338:;
  c->r[5]=R32(c->r[30]+0x00000134u); // 801E9338
  c->r[3]=c->r[30]|c->r[30]; // 801E933C
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801E9340
  c->r[4]=0u+0x00000000u; // 801E9344
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801E9348
  c->lr=0x801E9350u; f_801E91C0(c); // 801E934C
  goto L_801E9368; // 801E9350
L_801E9354:;
  c->r[3]=c->r[31]+0x00000000u; // 801E9354
  c->r[5]=c->r[31]+0x000001A8u; // 801E9358
  c->r[4]=0u+0x0000055Au; // 801E935C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9360
  c->lr=0x801E9368u; f_801F9770(c); // 801E9364
L_801E9368:;
  c->r[3]=R32(c->r[30]+0x00000138u); // 801E9368
  c->r[0]=R32(c->r[30]+0x00000134u); // 801E936C
  c->r[3]=c->r[3]+0x00000001u; // 801E9370
  W32(c->r[30]+0x00000138u,c->r[3]); // 801E9374
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E9378
  if (crb(c,0)) { goto L_801E93A4; } // 801E937C
  c->r[6]=R32(c->r[30]+0x00000128u); // 801E9380
  c->r[4]=0u+0x00000000u; // 801E9384
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801E9388
  c->r[3]=c->r[30]|c->r[30]; // 801E938C
  W32(c->r[30]+0x00000138u,c->r[4]); // 801E9390
  c->r[4]=0u+0x00000000u; // 801E9394
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 801E9398
  W32(c->r[30]+0x00000134u,c->r[6]); // 801E939C
  c->lr=0x801E93A4u; f_801E91C0(c); // 801E93A0
L_801E93A4:;
  c->r[3]=R32(c->r[30]+0x00000134u); // 801E93A4
  c->r[4]=R32(c->r[30]+0x00000138u); // 801E93A8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E93AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E93B0
  if (!crb(c,2)) { goto L_801E94D0; } // 801E93B4
  c->r[0]=R8(c->r[30]+0x0000010Bu); // 801E93B8
  cmps(c,0,(int32_t)c->r[0],0); // 801E93BC
  if (!crb(c,2)) { goto L_801E94C4; } // 801E93C0
  c->r[0]=R8(c->r[30]+0x0000010Cu); // 801E93C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E93C8
  if (crb(c,2)) { goto L_801E94C4; } // 801E93CC
  c->r[27]=c->r[30]+0x00000B58u; // 801E93D0
  c->r[26]=0u+0x00000000u; // 801E93D4
  c->r[28]=0u+0x00000000u; // 801E93D8
  goto L_801E94B8; // 801E93DC
L_801E93E0:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801E93E0
  cmps(c,0,(int32_t)c->r[0],0); // 801E93E4
  if (crb(c,2)) { goto L_801E94B0; } // 801E93E8
  c->r[25]=R32(c->r[27]+0x00000004u); // 801E93EC
  cmps(c,0,(int32_t)c->r[25],0); // 801E93F0
  if (crb(c,2)) { goto L_801E94B0; } // 801E93F4
  c->r[3]=c->r[25]|c->r[25]; // 801E93F8
  c->lr=0x801E9400u; f_801EC770(c); // 801E93FC
  cmps(c,0,(int32_t)c->r[3],3); // 801E9400
  if (!crb(c,2)) { goto L_801E94B0; } // 801E9404
  c->r[0]=R8(c->r[30]+0x0000010Cu); // 801E9408
  cmps(c,0,(int32_t)c->r[0],0); // 801E940C
  if (!crb(c,2)) { goto L_801E9428; } // 801E9410
  c->r[3]=c->r[31]+0x00000000u; // 801E9414
  c->r[5]=c->r[31]+0x00000454u; // 801E9418
  c->r[4]=0u+0x0000057Au; // 801E941C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9420
  c->lr=0x801E9428u; f_801F9810(c); // 801E9424
L_801E9428:;
  c->lr=0x801E942Cu; f_800CBAA0(c); // 801E9428
  c->r[29]=c->r[3]|c->r[3]; // 801E942C
  c->r[24]=0u+0x00000000u; // 801E9430
  goto L_801E9490; // 801E9434
L_801E9438:;
  cmps(c,0,(int32_t)c->r[24],2); // 801E9438
  if (crb(c,0)) { goto L_801E9448; } // 801E943C
  c->r[3]=0u+0x00000000u; // 801E9440
  goto L_801E946C; // 801E9444
L_801E9448:;
  c->r[3]=c->r[27]+c->r[24]; // 801E9448
  c->r[0]=R8(c->r[3]+0x00000010u); // 801E944C
  cmps(c,0,(int32_t)c->r[0],16); // 801E9450
  if (crb(c,0)) { goto L_801E9460; } // 801E9454
  c->r[3]=0u+0x00000000u; // 801E9458
  goto L_801E946C; // 801E945C
L_801E9460:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801E9460
  c->r[3]=c->r[30]+c->r[0]; // 801E9464
  c->r[3]=c->r[3]+0x00000818u; // 801E9468
L_801E946C:;
  c->r[0]=R16(c->r[3]+0x00000032u); // 801E946C
  c->r[3]=c->r[25]|c->r[25]; // 801E9470
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E9474
  c->r[4]=c->r[24]|c->r[24]; // 801E9478
  c->r[5]=c->r[1]+0x00000008u; // 801E947C
  W16(c->r[1]+0x0000000Au,c->r[28]); // 801E9480
  W16(c->r[1]+0x0000000Cu,c->r[28]); // 801E9484
  c->lr=0x801E948Cu; f_801ECEE0(c); // 801E9488
  c->r[24]=c->r[24]+0x00000001u; // 801E948C
L_801E9490:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801E9490
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801E9494
  if (crb(c,0)) { IRQCHK(c); goto L_801E9438; } // 801E9498
  c->r[3]=c->r[25]|c->r[25]; // 801E949C
  c->r[4]=0u+0x00000001u; // 801E94A0
  c->lr=0x801E94A8u; f_801ED190(c); // 801E94A4
  c->r[3]=c->r[29]|c->r[29]; // 801E94A8
  c->lr=0x801E94B0u; f_800CBAE0(c); // 801E94AC
L_801E94B0:;
  c->r[27]=c->r[27]+0x00000038u; // 801E94B0
  c->r[26]=c->r[26]+0x00000001u; // 801E94B4
L_801E94B8:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801E94B8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801E94BC
  if (crb(c,0)) { IRQCHK(c); goto L_801E93E0; } // 801E94C0
L_801E94C4:;
  c->r[0]=0u+0x00000000u; // 801E94C4
  W8(c->r[30]+0x0000010Cu,c->r[0]); // 801E94C8
  W8(c->r[30]+0x0000010Bu,c->r[0]); // 801E94CC
L_801E94D0:;
  c->r[3]=R32(c->r[30]+0x00000144u); // 801E94D0
  c->r[4]=R32(c->r[30]+0x0000013Cu); // 801E94D4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E94D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E94DC
  if (!crb(c,2)) { goto L_801E94F4; } // 801E94E0
  c->r[4]=R32(c->r[30]+0x00000138u); // 801E94E4
  c->r[3]=c->r[30]|c->r[30]; // 801E94E8
  c->r[4]=c->r[4]+0x00000001u; // 801E94EC
  c->lr=0x801E94F4u; f_801E9510(c); // 801E94F0
L_801E94F4:;
  c->r[11]=c->r[1]+0x00000030u; // 801E94F4
  c->lr=0x801E94FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E94F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E94FC
  c->lr=c->r[0]; // 801E9500
  c->r[1]=c->r[1]+0x00000030u; // 801E9504
  return; // 801E9508
}

// fn_801E9510
void f_801E9510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9510
  c->r[0]=c->lr; // 801E9514
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9518
  c->r[11]=c->r[1]+0x00000030u; // 801E951C
  c->lr=0x801E9524u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9520
  c->r[0]=R8(c->r[3]+0x000000C4u); // 801E9524
  c->r[30]=c->r[3]|c->r[3]; // 801E9528
  c->r[31]=c->r[4]|c->r[4]; // 801E952C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9530
  if (crb(c,2)) { goto L_801E9650; } // 801E9534
  c->r[0]=R32(c->r[3]+0x00000134u); // 801E9538
  c->r[28]=c->r[4]+0x00000001u; // 801E953C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E9540
  if (crb(c,0)) { goto L_801E954C; } // 801E9544
  c->r[28]=c->r[28]-c->r[0]; // 801E9548
L_801E954C:;
  c->lr=0x801E9550u; f_800CBAA0(c); // 801E954C
  c->r[4]=R32(c->r[30]+0x000000E8u); // 801E9550
  c->r[29]=c->r[3]|c->r[3]; // 801E9554
  c->r[5]=R32(c->r[30]+0x000000F0u); // 801E9558
  c->r[3]=c->r[30]|c->r[30]; // 801E955C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[4]); // 801E9560
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[4]); // 801E9564
  c->r[5]=c->r[5]+c->r[0]; // 801E9568
  c->lr=0x801E9570u; f_801E91C0(c); // 801E956C
  c->r[0]=R32(c->r[30]+0x000000C0u); // 801E9570
  cmps(c,0,(int32_t)c->r[0],3); // 801E9574
  if (!crb(c,2)) { goto L_801E9644; } // 801E9578
  c->r[28]=c->r[30]+0x00000B58u; // 801E957C
  c->r[27]=0u+0x00000000u; // 801E9580
  goto L_801E9620; // 801E9584
L_801E9588:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801E9588
  cmps(c,0,(int32_t)c->r[0],0); // 801E958C
  if (crb(c,2)) { goto L_801E9618; } // 801E9590
  c->r[26]=R32(c->r[28]+0x00000004u); // 801E9594
  cmps(c,0,(int32_t)c->r[26],0); // 801E9598
  if (crb(c,2)) { goto L_801E9618; } // 801E959C
  c->r[3]=c->r[26]|c->r[26]; // 801E95A0
  c->lr=0x801E95A8u; f_801EC770(c); // 801E95A4
  cmps(c,0,(int32_t)c->r[3],3); // 801E95A8
  if (!crb(c,2)) { goto L_801E9618; } // 801E95AC
  c->r[3]=c->r[26]|c->r[26]; // 801E95B0
  c->r[4]=0u+0x00000000u; // 801E95B4
  c->lr=0x801E95BCu; f_801ED190(c); // 801E95B8
  c->r[25]=0u+0x00000000u; // 801E95BC
  goto L_801E960C; // 801E95C0
L_801E95C4:;
  cmps(c,0,(int32_t)c->r[25],2); // 801E95C4
  if (crb(c,0)) { goto L_801E95D4; } // 801E95C8
  c->r[5]=0u+0x00000000u; // 801E95CC
  goto L_801E95F8; // 801E95D0
L_801E95D4:;
  c->r[3]=c->r[28]+c->r[25]; // 801E95D4
  c->r[0]=R8(c->r[3]+0x00000010u); // 801E95D8
  cmps(c,0,(int32_t)c->r[0],16); // 801E95DC
  if (crb(c,0)) { goto L_801E95EC; } // 801E95E0
  c->r[5]=0u+0x00000000u; // 801E95E4
  goto L_801E95F8; // 801E95E8
L_801E95EC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801E95EC
  c->r[3]=c->r[30]+c->r[0]; // 801E95F0
  c->r[5]=c->r[3]+0x00000818u; // 801E95F4
L_801E95F8:;
  c->r[3]=c->r[26]|c->r[26]; // 801E95F8
  c->r[4]=c->r[25]|c->r[25]; // 801E95FC
  c->r[5]=c->r[5]+0x0000002Cu; // 801E9600
  c->lr=0x801E9608u; f_801ECEE0(c); // 801E9604
  c->r[25]=c->r[25]+0x00000001u; // 801E9608
L_801E960C:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E960C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801E9610
  if (crb(c,0)) { IRQCHK(c); goto L_801E95C4; } // 801E9614
L_801E9618:;
  c->r[28]=c->r[28]+0x00000038u; // 801E9618
  c->r[27]=c->r[27]+0x00000001u; // 801E961C
L_801E9620:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801E9620
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E9624
  if (crb(c,0)) { IRQCHK(c); goto L_801E9588; } // 801E9628
  c->r[3]=R32(c->r[30]+0x00000134u); // 801E962C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E9630
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801E9634
  if (!crb(c,2)) { goto L_801E9644; } // 801E9638
  c->r[0]=0u+0x00000001u; // 801E963C
  W8(c->r[30]+0x0000010Bu,c->r[0]); // 801E9640
L_801E9644:;
  c->r[3]=c->r[29]|c->r[29]; // 801E9644
  c->lr=0x801E964Cu; f_800CBAE0(c); // 801E9648
  goto L_801E9654; // 801E964C
L_801E9650:;
  c->lr=0x801E9654u; f_801E9670(c); // 801E9650
L_801E9654:;
  c->r[11]=c->r[1]+0x00000030u; // 801E9654
  c->lr=0x801E965Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E9658
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E965C
  c->lr=c->r[0]; // 801E9660
  c->r[1]=c->r[1]+0x00000030u; // 801E9664
  return; // 801E9668
}

// fn_801E9670
void f_801E9670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9670
  c->r[0]=c->lr; // 801E9674
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9678
  c->r[11]=c->r[1]+0x00000030u; // 801E967C
  c->lr=0x801E9684u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9680
  c->r[30]=c->r[3]|c->r[3]; // 801E9684
  c->r[31]=c->r[4]|c->r[4]; // 801E9688
  c->lr=0x801E9690u; f_800CBAA0(c); // 801E968C
  c->r[29]=c->r[3]|c->r[3]; // 801E9690
  c->r[28]=c->r[30]+0x00000B58u; // 801E9694
  c->r[27]=0u+0x00000000u; // 801E9698
  goto L_801E972C; // 801E969C
L_801E96A0:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801E96A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E96A4
  if (crb(c,2)) { goto L_801E9724; } // 801E96A8
  c->r[26]=R32(c->r[28]+0x00000004u); // 801E96AC
  cmps(c,0,(int32_t)c->r[26],0); // 801E96B0
  if (crb(c,2)) { goto L_801E9724; } // 801E96B4
  c->r[25]=0u+0x00000000u; // 801E96B8
  goto L_801E9718; // 801E96BC
L_801E96C0:;
  cmps(c,0,(int32_t)c->r[25],2); // 801E96C0
  if (crb(c,0)) { goto L_801E96D0; } // 801E96C4
  c->r[5]=0u+0x00000000u; // 801E96C8
  goto L_801E96F4; // 801E96CC
L_801E96D0:;
  c->r[3]=c->r[28]+c->r[25]; // 801E96D0
  c->r[0]=R8(c->r[3]+0x00000010u); // 801E96D4
  cmps(c,0,(int32_t)c->r[0],16); // 801E96D8
  if (crb(c,0)) { goto L_801E96E8; } // 801E96DC
  c->r[5]=0u+0x00000000u; // 801E96E0
  goto L_801E96F4; // 801E96E4
L_801E96E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801E96E8
  c->r[3]=c->r[30]+c->r[0]; // 801E96EC
  c->r[5]=c->r[3]+0x00000818u; // 801E96F0
L_801E96F4:;
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801E96F4
  c->r[3]=c->r[26]|c->r[26]; // 801E96F8
  c->r[6]=R32(c->r[30]+0x000000F0u); // 801E96FC
  c->r[4]=c->r[25]|c->r[25]; // 801E9700
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801E9704
  c->r[5]=R32(c->r[5]+0x00000000u); // 801E9708
  c->r[6]=c->r[6]+c->r[0]; // 801E970C
  c->lr=0x801E9714u; f_801ED110(c); // 801E9710
  c->r[25]=c->r[25]+0x00000001u; // 801E9714
L_801E9718:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E9718
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801E971C
  if (crb(c,0)) { IRQCHK(c); goto L_801E96C0; } // 801E9720
L_801E9724:;
  c->r[28]=c->r[28]+0x00000038u; // 801E9724
  c->r[27]=c->r[27]+0x00000001u; // 801E9728
L_801E972C:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801E972C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E9730
  if (crb(c,0)) { IRQCHK(c); goto L_801E96A0; } // 801E9734
  c->r[3]=c->r[29]|c->r[29]; // 801E9738
  c->lr=0x801E9740u; f_800CBAE0(c); // 801E973C
  c->r[0]=0u+0x00000001u; // 801E9740
  W8(c->r[30]+0x0000010Du,c->r[0]); // 801E9744
  c->r[11]=c->r[1]+0x00000030u; // 801E9748
  c->lr=0x801E9750u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E974C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E9750
  c->lr=c->r[0]; // 801E9754
  c->r[1]=c->r[1]+0x00000030u; // 801E9758
  return; // 801E975C
}

// fn_801E9760
void f_801E9760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9760
  c->r[0]=c->lr; // 801E9764
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9768
  c->r[11]=c->r[1]+0x00000030u; // 801E976C
  c->lr=0x801E9774u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9770
  c->r[0]=R8(c->r[3]+0x0000010Eu); // 801E9774
  c->r[31]=0u+0x802D0000u; // 801E9778
  c->r[4]=R32(c->r[3]+0x00000148u); // 801E977C
  c->r[29]=c->r[3]|c->r[3]; // 801E9780
  cmps(c,0,(int32_t)c->r[0],0); // 801E9784
  c->r[31]=c->r[31]+0x00001920u; // 801E9788
  c->r[0]=c->r[4]+0x00000001u; // 801E978C
  W32(c->r[3]+0x00000148u,c->r[0]); // 801E9790
  if (!crb(c,2)) { goto L_801E9A1C; } // 801E9794
  c->r[4]=R32(c->r[3]+0x000000E0u); // 801E9798
  c->r[7]=R32(c->r[3]+0x00000130u); // 801E979C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E97A0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E97A4
  if (!crb(c,0)) { goto L_801E97B4; } // 801E97A8
  c->r[30]=R32(c->r[3]+0x000000E4u); // 801E97AC
  goto L_801E97B8; // 801E97B0
L_801E97B4:;
  c->r[30]=R32(c->r[3]+0x000000F4u); // 801E97B4
L_801E97B8:;
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E97B8
  c->r[4]=R32(c->r[3]+0x000000E4u); // 801E97BC
  c->r[0]=R32(c->r[3]+0x000000C8u); // 801E97C0
  c->r[6]=R16(c->r[3]+0x000000D0u); // 801E97C4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801E97C8
  c->r[5]=R32(c->r[3]+0x00000810u); // 801E97CC
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801E97D0
  c->r[0]=c->r[6]+c->r[0]; // 801E97D4
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[5]); // 801E97D8
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 801E97DC
  c->r[26]=c->r[6]+c->r[4]; // 801E97E0
  c->r[25]=c->r[3]+c->r[0]; // 801E97E4
  if (crb(c,2)) { goto L_801E9804; } // 801E97E8
  c->r[6]=c->r[30]|c->r[30]; // 801E97EC
  c->r[3]=c->r[31]+0x00000000u; // 801E97F0
  c->r[5]=c->r[31]+0x000002D8u; // 801E97F4
  c->r[4]=0u+0x0000061Fu; // 801E97F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E97FC
  c->lr=0x801E9804u; f_801F9770(c); // 801E9800
L_801E9804:;
  c->r[0]=rotl(c->r[26],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E9804
  if (crb(c,2)) { goto L_801E9824; } // 801E9808
  c->r[6]=c->r[26]|c->r[26]; // 801E980C
  c->r[3]=c->r[31]+0x00000000u; // 801E9810
  c->r[5]=c->r[31]+0x00000470u; // 801E9814
  c->r[4]=0u+0x00000620u; // 801E9818
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E981C
  c->lr=0x801E9824u; f_801F9770(c); // 801E9820
L_801E9824:;
  c->r[0]=rotl(c->r[25],0)&0x0000001Fu; cr0(c,c->r[0]); // 801E9824
  if (crb(c,2)) { goto L_801E9844; } // 801E9828
  c->r[6]=c->r[25]|c->r[25]; // 801E982C
  c->r[3]=c->r[31]+0x00000000u; // 801E9830
  c->r[5]=c->r[31]+0x00000324u; // 801E9834
  c->r[4]=0u+0x00000621u; // 801E9838
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E983C
  c->lr=0x801E9844u; f_801F9770(c); // 801E9840
L_801E9844:;
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 801E9844
  c->r[27]=0u+0x00000000u; // 801E9848
  cmps(c,0,(int32_t)c->r[0],0); // 801E984C
  if (!crb(c,2)) { goto L_801E9864; } // 801E9850
  c->r[0]=R32(c->r[29]+0x000000C0u); // 801E9854
  cmps(c,0,(int32_t)c->r[0],3); // 801E9858
  if (!crb(c,2)) { goto L_801E9864; } // 801E985C
  c->r[27]=0u+0x00000001u; // 801E9860
L_801E9864:;
  c->r[3]=c->r[29]+0x00000180u; // 801E9864
  c->lr=0x801E986Cu; f_801D78E0(c); // 801E9868
  cmps(c,0,(int32_t)c->r[3],0); // 801E986C
  if (!crb(c,2)) { goto L_801E987C; } // 801E9870
  c->r[28]=0u+0x00000000u; // 801E9874
  goto L_801E98C8; // 801E9878
L_801E987C:;
  c->r[28]=c->r[3]|c->r[3]; // 801E987C
  if (crb(c,2)) { goto L_801E98C8; } // 801E9880
  c->r[5]=0u+0x00000000u; // 801E9884
  W32(c->r[3]+0x00000004u,c->r[5]); // 801E9888
  c->r[4]=0u+0x802D0000u; // 801E988C
  c->r[0]=0u+0xFFFFFFFFu; // 801E9890
  W32(c->r[3]+0x00000008u,c->r[5]); // 801E9894
  c->r[4]=c->r[4]+0x00001EF0u; // 801E9898
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801E989C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E98A0
  W32(c->r[3]+0x00000010u,c->r[5]); // 801E98A4
  W32(c->r[3]+0x00000014u,c->r[5]); // 801E98A8
  W32(c->r[3]+0x00000018u,c->r[5]); // 801E98AC
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801E98B0
  W32(c->r[3]+0x00000020u,c->r[5]); // 801E98B4
  W32(c->r[3]+0x00000024u,c->r[0]); // 801E98B8
  W8(c->r[3]+0x00000028u,c->r[5]); // 801E98BC
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801E98C0
  W32(c->r[3]+0x00000030u,c->r[5]); // 801E98C4
L_801E98C8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E98C8
  if (!crb(c,2)) { goto L_801E98E4; } // 801E98CC
  c->r[3]=c->r[31]+0x00000000u; // 801E98D0
  c->r[5]=c->r[31]+0x000004BCu; // 801E98D4
  c->r[4]=0u+0x00000627u; // 801E98D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E98DC
  c->lr=0x801E98E4u; f_801F9770(c); // 801E98E0
L_801E98E4:;
  W32(c->r[28]+0x00000010u,c->r[29]); // 801E98E4
  c->r[0]=R32(c->r[29]+0x00000808u); // 801E98E8
  W32(c->r[28]+0x00000014u,c->r[0]); // 801E98EC
  W32(c->r[28]+0x00000018u,c->r[26]); // 801E98F0
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 801E98F4
  W32(c->r[28]+0x00000020u,c->r[30]); // 801E98F8
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 801E98FC
  W32(c->r[28]+0x00000024u,c->r[0]); // 801E9900
  W8(c->r[28]+0x00000028u,c->r[27]); // 801E9904
  c->lr=0x801E990Cu; f_800CBAA0(c); // 801E9908
  cmps(c,0,(int32_t)c->r[28],0); // 801E990C
  c->r[30]=c->r[3]|c->r[3]; // 801E9910
  c->r[31]=c->r[29]+0x00000178u; // 801E9914
  if (!crb(c,2)) { goto L_801E9938; } // 801E9918
  c->r[3]=0u+0x802D0000u; // 801E991C
  c->r[5]=0u+0x802D0000u; // 801E9920
  c->r[3]=c->r[3]+0x00001F5Cu; // 801E9924
  c->r[4]=0u+0x00000233u; // 801E9928
  c->r[5]=c->r[5]+0x00001F38u; // 801E992C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9930
  c->lr=0x801E9938u; f_801F9770(c); // 801E9934
L_801E9938:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E9938
  c->r[3]=c->r[29]+0x00000174u; // 801E993C
  c->r[4]=c->r[1]+0x00000008u; // 801E9940
  c->r[5]=c->r[28]+0x0000002Cu; // 801E9944
  c->lr=0x801E994Cu; f_801FA130(c); // 801E9948
  c->r[0]=R8(c->r[29]+0x00000102u); // 801E994C
  c->r[31]=0u+0x00000001u; // 801E9950
  cmps(c,0,(int32_t)c->r[0],0); // 801E9954
  if (crb(c,2)) { goto L_801E9960; } // 801E9958
  c->r[31]=0u+0x00000002u; // 801E995C
L_801E9960:;
  c->lr=0x801E9964u; f_801EAAA0(c); // 801E9960
  c->r[4]=c->r[28]|c->r[28]; // 801E9964
  c->r[5]=c->r[31]|c->r[31]; // 801E9968
  c->lr=0x801E9970u; f_801EAC30(c); // 801E996C
  c->r[3]=R32(c->r[29]+0x00000130u); // 801E9970
  c->r[0]=R32(c->r[29]+0x00000144u); // 801E9974
  c->r[3]=c->r[3]+0x00000001u; // 801E9978
  W32(c->r[29]+0x00000130u,c->r[3]); // 801E997C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E9980
  if (!crb(c,1)) { goto L_801E99B4; } // 801E9984
  c->r[0]=R8(c->r[29]+0x000000C4u); // 801E9988
  cmps(c,0,(int32_t)c->r[0],0); // 801E998C
  if (crb(c,2)) { goto L_801E99A0; } // 801E9990
  c->r[0]=R32(c->r[29]+0x00000140u); // 801E9994
  W32(c->r[29]+0x00000130u,c->r[0]); // 801E9998
  goto L_801E99B4; // 801E999C
L_801E99A0:;
  c->r[0]=0u+0x00000001u; // 801E99A0
  W8(c->r[29]+0x0000010Eu,c->r[0]); // 801E99A4
  c->r[3]=c->r[30]|c->r[30]; // 801E99A8
  c->lr=0x801E99B0u; f_800CBAE0(c); // 801E99AC
  goto L_801E9A1C; // 801E99B0
L_801E99B4:;
  c->r[3]=R32(c->r[29]+0x0000012Cu); // 801E99B4
  c->r[0]=R32(c->r[29]+0x00000128u); // 801E99B8
  c->r[3]=c->r[3]+0x00000001u; // 801E99BC
  W32(c->r[29]+0x0000012Cu,c->r[3]); // 801E99C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E99C4
  if (crb(c,0)) { goto L_801E9A14; } // 801E99C8
  c->r[5]=R32(c->r[29]+0x00000144u); // 801E99CC
  c->r[4]=0u+0x00000000u; // 801E99D0
  c->r[3]=R32(c->r[29]+0x00000130u); // 801E99D4
  c->r[6]=R32(c->r[29]+0x00000124u); // 801E99D8
  c->r[0]=R32(c->r[29]+0x00000140u); // 801E99DC
  c->r[3]=c->r[5]-c->r[3]; // 801E99E0
  W32(c->r[29]+0x0000012Cu,c->r[4]); // 801E99E4
  c->r[4]=c->r[3]+0x00000001u; // 801E99E8
  c->r[7]=c->r[6]+0x00000001u; // 801E99EC
  c->r[3]=c->r[5]-c->r[0]; // 801E99F0
  c->r[4]=c->r[7]-c->r[4]; // 801E99F4
  c->r[3]=c->r[3]+0x00000001u; // 801E99F8
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 801E99FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801E9A00
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 801E9A04
  if (!crb(c,2)) { goto L_801E9A10; } // 801E9A08
  c->r[6]=c->r[7]|c->r[7]; // 801E9A0C
L_801E9A10:;
  W32(c->r[29]+0x00000128u,c->r[6]); // 801E9A10
L_801E9A14:;
  c->r[3]=c->r[30]|c->r[30]; // 801E9A14
  c->lr=0x801E9A1Cu; f_800CBAE0(c); // 801E9A18
L_801E9A1C:;
  c->r[11]=c->r[1]+0x00000030u; // 801E9A1C
  c->lr=0x801E9A24u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E9A20
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E9A24
  c->lr=c->r[0]; // 801E9A28
  c->r[1]=c->r[1]+0x00000030u; // 801E9A2C
  return; // 801E9A30
}

// fn_801E9A40
void f_801E9A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9A40
  c->r[0]=c->lr; // 801E9A44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9A48
  c->r[11]=c->r[1]+0x00000020u; // 801E9A4C
  c->lr=0x801E9A54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9A50
  c->r[27]=c->r[3]|c->r[3]; // 801E9A54
  c->lr=0x801E9A5Cu; f_800CBAA0(c); // 801E9A58
  c->r[0]=R8(c->r[27]+0x00000107u); // 801E9A5C
  c->r[31]=c->r[3]|c->r[3]; // 801E9A60
  c->r[29]=0u+0x00000000u; // 801E9A64
  cmps(c,0,(int32_t)c->r[0],0); // 801E9A68
  if (crb(c,2)) { goto L_801E9A74; } // 801E9A6C
  c->r[29]=0u+0x00000001u; // 801E9A70
L_801E9A74:;
  c->r[0]=R8(c->r[27]+0x00000109u); // 801E9A74
  cmps(c,0,(int32_t)c->r[0],0); // 801E9A78
  if (crb(c,2)) { goto L_801E9A84; } // 801E9A7C
  c->r[29]=0u+0x00000001u; // 801E9A80
L_801E9A84:;
  c->r[0]=R8(c->r[27]+0x00000108u); // 801E9A84
  cmpu(c,0,c->r[29],c->r[0]); // 801E9A88
  if (crb(c,2)) { goto L_801E9AD4; } // 801E9A8C
  c->r[30]=c->r[27]|c->r[27]; // 801E9A90
  c->r[28]=0u+0x00000000u; // 801E9A94
  goto L_801E9AC4; // 801E9A98
L_801E9A9C:;
  c->r[0]=R8(c->r[30]+0x00000B58u); // 801E9A9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9AA0
  if (crb(c,2)) { goto L_801E9ABC; } // 801E9AA4
  c->r[3]=R32(c->r[30]+0x00000B5Cu); // 801E9AA8
  cmps(c,0,(int32_t)c->r[3],0); // 801E9AAC
  if (crb(c,2)) { goto L_801E9ABC; } // 801E9AB0
  c->r[4]=c->r[29]|c->r[29]; // 801E9AB4
  c->lr=0x801E9ABCu; f_801EC750(c); // 801E9AB8
L_801E9ABC:;
  c->r[30]=c->r[30]+0x00000038u; // 801E9ABC
  c->r[28]=c->r[28]+0x00000001u; // 801E9AC0
L_801E9AC4:;
  c->r[0]=R32(c->r[27]+0x0000080Cu); // 801E9AC4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E9AC8
  if (crb(c,0)) { IRQCHK(c); goto L_801E9A9C; } // 801E9ACC
  W8(c->r[27]+0x00000108u,c->r[29]); // 801E9AD0
L_801E9AD4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E9AD4
  c->lr=0x801E9ADCu; f_800CBAE0(c); // 801E9AD8
  c->r[11]=c->r[1]+0x00000020u; // 801E9ADC
  c->lr=0x801E9AE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E9AE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9AE4
  c->lr=c->r[0]; // 801E9AE8
  c->r[1]=c->r[1]+0x00000020u; // 801E9AEC
  return; // 801E9AF0
}

// fn_801E9B00
void f_801E9B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9B00
  c->r[0]=c->lr; // 801E9B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9B08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9B0C
  c->r[31]=c->r[5]|c->r[5]; // 801E9B10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9B14
  c->r[30]=c->r[4]|c->r[4]; // 801E9B18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E9B1C
  c->r[29]=c->r[3]|c->r[3]; // 801E9B20
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E9B24
  c->r[28]=c->r[6]|c->r[6]; // 801E9B28
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801E9B2C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9B30
  if (!crb(c,2)) { goto L_801E9B40; } // 801E9B34
  c->r[3]=0u+0x00000000u; // 801E9B38
  goto L_801E9BEC; // 801E9B3C
L_801E9B40:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 801E9B40
  cmps(c,0,(int32_t)c->r[0],0); // 801E9B44
  if (!crb(c,2)) { goto L_801E9B54; } // 801E9B48
  c->r[4]=R32(c->r[3]+0x00000150u); // 801E9B4C
  goto L_801E9B78; // 801E9B50
L_801E9B54:;
  cmps(c,0,(int32_t)c->r[0],1); // 801E9B54
  if (!crb(c,2)) { goto L_801E9B78; } // 801E9B58
  c->r[7]=R32(c->r[3]+0x00000150u); // 801E9B5C
  c->r[6]=0u+0x000003E8u; // 801E9B60
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801E9B64
  c->r[5]=0u+0x00000000u; // 801E9B68
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 801E9B6C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 801E9B70
  c->lr=0x801E9B78u; f_802179FC(c); // 801E9B74
L_801E9B78:;
  c->r[0]=0u+0x00000000u; // 801E9B78
  W32(c->r[28]+0x00000000u,c->r[0]); // 801E9B7C
  c->r[3]=R32(c->r[29]+0x000000D8u); // 801E9B80
  cmpu(c,0,c->r[4],c->r[3]); // 801E9B84
  if (crb(c,0)) { goto L_801E9BC8; } // 801E9B88
  c->r[0]=R8(c->r[29]+0x000000C4u); // 801E9B8C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9B90
  if (crb(c,2)) { goto L_801E9BC0; } // 801E9B94
  c->r[5]=R32(c->r[29]+0x000000D4u); // 801E9B98
  c->r[4]=c->r[4]-c->r[3]; // 801E9B9C
  c->r[0]=c->r[3]-c->r[5]; // 801E9BA0
  c->r[3]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 801E9BA4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801E9BA8
  c->r[3]=c->r[3]+0x00000001u; // 801E9BAC
  W32(c->r[28]+0x00000000u,c->r[3]); // 801E9BB0
  c->r[0]=c->r[4]-c->r[0]; // 801E9BB4
  c->r[4]=c->r[5]+c->r[0]; // 801E9BB8
  goto L_801E9BC8; // 801E9BBC
L_801E9BC0:;
  c->r[3]=0u+0x00000000u; // 801E9BC0
  goto L_801E9BEC; // 801E9BC4
L_801E9BC8:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801E9BC8
  c->r[3]=0u+0x00000001u; // 801E9BCC
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 801E9BD0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E9BD4
  c->r[5]=R32(c->r[29]+0x000000E8u); // 801E9BD8
  c->r[0]=divwu(c->r[4],c->r[5]); // 801E9BDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801E9BE0
  c->r[0]=c->r[4]-c->r[0]; // 801E9BE4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E9BE8
L_801E9BEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E9BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E9BF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E9BFC
  c->lr=c->r[0]; // 801E9C00
  c->r[1]=c->r[1]+0x00000020u; // 801E9C04
  return; // 801E9C08
}

// fn_801E9C10
void f_801E9C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9C10
  c->r[0]=c->lr; // 801E9C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9C18
  c->r[11]=c->r[1]+0x00000020u; // 801E9C1C
  c->lr=0x801E9C24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9C20
  cmps(c,0,(int32_t)c->r[5],0); // 801E9C24
  c->r[30]=0u+0x802D0000u; // 801E9C28
  c->r[27]=c->r[3]|c->r[3]; // 801E9C2C
  c->r[28]=c->r[4]|c->r[4]; // 801E9C30
  c->r[29]=c->r[5]|c->r[5]; // 801E9C34
  c->r[30]=c->r[30]+0x00001920u; // 801E9C38
  if (!crb(c,2)) { goto L_801E9C54; } // 801E9C3C
  c->r[3]=c->r[30]+0x00000000u; // 801E9C40
  c->r[5]=c->r[30]+0x000004E4u; // 801E9C44
  c->r[4]=0u+0x000006E2u; // 801E9C48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9C4C
  c->lr=0x801E9C54u; f_801F9770(c); // 801E9C50
L_801E9C54:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E9C54
  cmpu(c,0,c->r[0],c->r[27]); // 801E9C58
  if (crb(c,2)) { goto L_801E9C74; } // 801E9C5C
  c->r[3]=c->r[30]+0x00000000u; // 801E9C60
  c->r[5]=c->r[30]+0x0000050Cu; // 801E9C64
  c->r[4]=0u+0x000006E4u; // 801E9C68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9C6C
  c->lr=0x801E9C74u; f_801F9770(c); // 801E9C70
L_801E9C74:;
  c->lr=0x801E9C78u; f_800CBAA0(c); // 801E9C74
  cmpu(c,0,c->r[28],0x00000001u); // 801E9C78
  c->r[31]=c->r[3]|c->r[3]; // 801E9C7C
  if (!crb(c,1)) { goto L_801E9C94; } // 801E9C80
  c->r[0]=c->r[28]+0xFFFFFFFEu; // 801E9C84
  cmpu(c,0,c->r[0],0x00000001u); // 801E9C88
  if (!crb(c,1)) { goto L_801E9CA8; } // 801E9C8C
  goto L_801E9CB4; // 801E9C90
L_801E9C94:;
  c->r[3]=c->r[27]|c->r[27]; // 801E9C94
  c->lr=0x801E9C9Cu; f_801EC360(c); // 801E9C98
  c->r[0]=0u+0x00000000u; // 801E9C9C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E9CA0
  goto L_801E9CD8; // 801E9CA4
L_801E9CA8:;
  c->r[0]=0u+0x00000000u; // 801E9CA8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E9CAC
  goto L_801E9CD8; // 801E9CB0
L_801E9CB4:;
  c->r[6]=c->r[28]|c->r[28]; // 801E9CB4
  c->r[3]=c->r[30]+0x00000000u; // 801E9CB8
  c->r[5]=c->r[30]+0x0000053Cu; // 801E9CBC
  c->r[4]=0u+0x000006F4u; // 801E9CC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9CC4
  c->lr=0x801E9CCCu; f_801F9770(c); // 801E9CC8
  c->r[3]=c->r[31]|c->r[31]; // 801E9CCC
  c->lr=0x801E9CD4u; f_800CBAE0(c); // 801E9CD0
  goto L_801E9CE0; // 801E9CD4
L_801E9CD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E9CD8
  c->lr=0x801E9CE0u; f_800CBAE0(c); // 801E9CDC
L_801E9CE0:;
  c->r[11]=c->r[1]+0x00000020u; // 801E9CE0
  c->lr=0x801E9CE8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E9CE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9CE8
  c->lr=c->r[0]; // 801E9CEC
  c->r[1]=c->r[1]+0x00000020u; // 801E9CF0
  return; // 801E9CF4
}

// fn_801E9D00
void f_801E9D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9D00
  c->r[0]=c->lr; // 801E9D04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9D08
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801E9D0C
  c->f[31]=c->f[1]; // 801E9D10
  W32(c->r[1]+0x00000014u,c->r[31]); // 801E9D14
  c->r[31]=c->r[4]|c->r[4]; // 801E9D18
  W32(c->r[1]+0x00000010u,c->r[30]); // 801E9D1C
  c->r[30]=c->r[3]|c->r[3]; // 801E9D20
  c->lr=0x801E9D28u; f_800CBAA0(c); // 801E9D24
  c->r[4]=c->r[30]|c->r[30]; // 801E9D28
  c->r[5]=0u+0x00000000u; // 801E9D2C
  goto L_801E9D50; // 801E9D30
  c->r[0]=c->r[0]|0x00000000u; // 801E9D34
L_801E9D38:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801E9D38
  if (crb(c,2)) { goto L_801E9D44; } // 801E9D3C
  {uint32_t ea=c->r[4]+0x00000B88u; WF32(ea,c->f[31]);} // 801E9D40
L_801E9D44:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801E9D44
  c->r[4]=c->r[4]+0x00000038u; // 801E9D48
  c->r[5]=c->r[5]+0x00000001u; // 801E9D4C
L_801E9D50:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801E9D50
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E9D54
  if (!crb(c,0)) { goto L_801E9D64; } // 801E9D58
  cmps(c,0,(int32_t)c->r[31],0); // 801E9D5C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E9D38; } // 801E9D60
L_801E9D64:;
  c->lr=0x801E9D68u; f_800CBAE0(c); // 801E9D64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9D68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801E9D6C
  c->r[31]=R32(c->r[1]+0x00000014u); // 801E9D70
  c->r[30]=R32(c->r[1]+0x00000010u); // 801E9D74
  c->lr=c->r[0]; // 801E9D78
  c->r[1]=c->r[1]+0x00000020u; // 801E9D7C
  return; // 801E9D80
}

// fn_801E9D90
void f_801E9D90(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],7); // 801E9D90
  if (!crb(c,1)) { goto L_801E9DA0; } // 801E9D94
  c->r[3]=0u+0x00000000u; // 801E9D98
  return; // 801E9D9C
L_801E9DA0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)56); // 801E9DA0
  c->r[3]=c->r[3]+c->r[0]; // 801E9DA4
  c->r[3]=c->r[3]+0x00000B58u; // 801E9DA8
  return; // 801E9DAC
}

// fn_801E9DB0
void f_801E9DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9DB0
  c->r[0]=c->lr; // 801E9DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9DBC
  c->r[31]=c->r[3]|c->r[3]; // 801E9DC0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E9DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E9DC8
  if (!crb(c,2)) { goto L_801E9DEC; } // 801E9DCC
  c->r[3]=0u+0x802D0000u; // 801E9DD0
  c->r[5]=0u+0x802D0000u; // 801E9DD4
  c->r[3]=c->r[3]+0x00001920u; // 801E9DD8
  c->r[4]=0u+0x0000075Du; // 801E9DDC
  c->r[5]=c->r[5]+0x00001E80u; // 801E9DE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9DE4
  c->lr=0x801E9DECu; f_801F9770(c); // 801E9DE8
L_801E9DEC:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801E9DEC
  c->r[4]=R32(c->r[31]+0x00000014u); // 801E9DF0
  c->r[5]=R32(c->r[31]+0x00000018u); // 801E9DF4
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801E9DF8
  c->lr=0x801E9E00u; f_801E80A0(c); // 801E9DFC
  cmps(c,0,(int32_t)c->r[3],0); // 801E9E00
  if (!crb(c,2)) { goto L_801E9E14; } // 801E9E04
  c->r[3]=R32(c->r[31]+0x00000010u); // 801E9E08
  c->r[0]=0u+0x00000001u; // 801E9E0C
  W8(c->r[3]+0x00000104u,c->r[0]); // 801E9E10
L_801E9E14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9E18
  c->lr=c->r[0]; // 801E9E1C
  c->r[1]=c->r[1]+0x00000010u; // 801E9E20
  return; // 801E9E24
}

// fn_801E9E30
void f_801E9E30(Ctx* __restrict c) {
  return; // 801E9E30
}

// fn_801E9E40
void f_801E9E40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9E40
  c->r[0]=c->lr; // 801E9E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9E48
  c->r[0]=0u+0x00000001u; // 801E9E4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9E50
  c->r[31]=c->r[3]|c->r[3]; // 801E9E54
  c->r[4]=R32(c->r[3]+0x00000010u); // 801E9E58
  W8(c->r[4]+0x00000105u,c->r[0]); // 801E9E5C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801E9E60
  cmps(c,0,(int32_t)c->r[3],0); // 801E9E64
  if (crb(c,2)) { goto L_801E9ED4; } // 801E9E68
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E9E6C
  c->r[12]=R32(c->r[12]+0x00000054u); // 801E9E70
  c->ctr=c->r[12]; // 801E9E74
  if (true) { c->lr=0x801E9E7Cu; dispatch(c,c->ctr); } // 801E9E78
  cmps(c,0,(int32_t)c->r[3],0); // 801E9E7C
  if (crb(c,2)) { goto L_801E9ED4; } // 801E9E80
  c->r[3]=R32(c->r[31]+0x00000014u); // 801E9E84
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E9E88
  c->r[12]=R32(c->r[12]+0x00000028u); // 801E9E8C
  c->ctr=c->r[12]; // 801E9E90
  if (true) { c->lr=0x801E9E98u; dispatch(c,c->ctr); } // 801E9E94
  cmps(c,0,(int32_t)c->r[3],0); // 801E9E98
  if (crb(c,2)) { goto L_801E9EC0; } // 801E9E9C
  c->r[3]=R32(c->r[31]+0x00000014u); // 801E9EA0
  c->r[4]=0u+0x00000000u; // 801E9EA4
  c->r[5]=0u+0x00000000u; // 801E9EA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E9EAC
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801E9EB0
  c->ctr=c->r[12]; // 801E9EB4
  if (true) { c->lr=0x801E9EBCu; dispatch(c,c->ctr); } // 801E9EB8
  goto L_801E9ED4; // 801E9EBC
L_801E9EC0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801E9EC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E9EC4
  c->r[12]=R32(c->r[12]+0x00000048u); // 801E9EC8
  c->ctr=c->r[12]; // 801E9ECC
  if (true) { c->lr=0x801E9ED4u; dispatch(c,c->ctr); } // 801E9ED0
L_801E9ED4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9ED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9ED8
  c->lr=c->r[0]; // 801E9EDC
  c->r[1]=c->r[1]+0x00000010u; // 801E9EE0
  return; // 801E9EE4
}

// fn_801E9EF0
void f_801E9EF0(Ctx* __restrict c) {
  c->r[4]=0u+0x802D0000u; // 801E9EF0
  c->r[5]=0u+0x00000000u; // 801E9EF4
  c->r[4]=c->r[4]+0x00001EF0u; // 801E9EF8
  c->r[0]=0u+0xFFFFFFFFu; // 801E9EFC
  W32(c->r[3]+0x00000004u,c->r[5]); // 801E9F00
  W32(c->r[3]+0x00000008u,c->r[5]); // 801E9F04
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801E9F08
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E9F0C
  W32(c->r[3]+0x00000010u,c->r[5]); // 801E9F10
  W32(c->r[3]+0x00000014u,c->r[5]); // 801E9F14
  W32(c->r[3]+0x00000018u,c->r[5]); // 801E9F18
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801E9F1C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801E9F20
  W32(c->r[3]+0x00000024u,c->r[0]); // 801E9F24
  W8(c->r[3]+0x00000028u,c->r[5]); // 801E9F28
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801E9F2C
  W32(c->r[3]+0x00000030u,c->r[5]); // 801E9F30
  return; // 801E9F34
}

// fn_801E9F40
void f_801E9F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9F40
  c->r[0]=c->lr; // 801E9F44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9F48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9F4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9F50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E9F54
  c->r[29]=c->r[3]|c->r[3]; // 801E9F58
  c->r[3]=R32(c->r[3]+0x00000010u); // 801E9F5C
  c->r[4]=R32(c->r[29]+0x00000014u); // 801E9F60
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 801E9F64
  c->r[6]=R32(c->r[29]+0x00000018u); // 801E9F68
  c->r[7]=R32(c->r[29]+0x00000020u); // 801E9F6C
  c->r[8]=R32(c->r[29]+0x00000024u); // 801E9F70
  c->r[9]=R8(c->r[29]+0x00000028u); // 801E9F74
  c->lr=0x801E9F7Cu; f_801E8430(c); // 801E9F78
  cmps(c,0,(int32_t)c->r[3],0); // 801E9F7C
  if (!crb(c,2)) { goto L_801E9F90; } // 801E9F80
  c->r[3]=R32(c->r[29]+0x00000010u); // 801E9F84
  c->r[0]=0u+0x00000001u; // 801E9F88
  W8(c->r[3]+0x00000104u,c->r[0]); // 801E9F8C
L_801E9F90:;
  c->lr=0x801E9F94u; f_800CBAA0(c); // 801E9F90
  c->r[4]=R32(c->r[29]+0x00000010u); // 801E9F94
  cmps(c,0,(int32_t)c->r[29],0); // 801E9F98
  c->r[31]=c->r[3]|c->r[3]; // 801E9F9C
  c->r[30]=c->r[4]+0x00000174u; // 801E9FA0
  if (!crb(c,2)) { goto L_801E9FC4; } // 801E9FA4
  c->r[3]=0u+0x802D0000u; // 801E9FA8
  c->r[5]=0u+0x802D0000u; // 801E9FAC
  c->r[3]=c->r[3]+0x00001F5Cu; // 801E9FB0
  c->r[4]=0u+0x00000233u; // 801E9FB4
  c->r[5]=c->r[5]+0x00001F38u; // 801E9FB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E9FBC
  c->lr=0x801E9FC4u; f_801F9770(c); // 801E9FC0
L_801E9FC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E9FC4
  c->r[4]=c->r[29]+0x0000002Cu; // 801E9FC8
  c->lr=0x801E9FD0u; f_801FA230(c); // 801E9FCC
  c->r[3]=R32(c->r[29]+0x00000010u); // 801E9FD0
  cmps(c,0,(int32_t)c->r[29],0); // 801E9FD4
  c->r[30]=c->r[3]+0x00000180u; // 801E9FD8
  if (crb(c,2)) { goto L_801EA004; } // 801E9FDC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E9FE0
  c->r[3]=c->r[29]|c->r[29]; // 801E9FE4
  c->r[4]=0u+0xFFFFFFFFu; // 801E9FE8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E9FEC
  c->ctr=c->r[12]; // 801E9FF0
  if (true) { c->lr=0x801E9FF8u; dispatch(c,c->ctr); } // 801E9FF4
  c->r[3]=c->r[30]|c->r[30]; // 801E9FF8
  c->r[4]=c->r[29]|c->r[29]; // 801E9FFC
  c->lr=0x801EA004u; f_801D7940(c); // 801EA000
L_801EA004:;
  c->r[5]=R32(c->r[29]+0x00000010u); // 801EA004
  c->r[3]=c->r[31]|c->r[31]; // 801EA008
  c->r[4]=R32(c->r[5]+0x00000148u); // 801EA00C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801EA010
  W32(c->r[5]+0x00000148u,c->r[0]); // 801EA014
  c->lr=0x801EA01Cu; f_800CBAE0(c); // 801EA018
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA01C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA020
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA024
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA028
  c->lr=c->r[0]; // 801EA02C
  c->r[1]=c->r[1]+0x00000020u; // 801EA030
  return; // 801EA034
}

// fn_801EA040
void f_801EA040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA040
  c->r[0]=c->lr; // 801EA044
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA048
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA04C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA050
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA054
  c->r[29]=c->r[3]|c->r[3]; // 801EA058
  c->lr=0x801EA060u; f_800CBAA0(c); // 801EA05C
  c->r[4]=R32(c->r[29]+0x00000010u); // 801EA060
  cmps(c,0,(int32_t)c->r[29],0); // 801EA064
  c->r[31]=c->r[3]|c->r[3]; // 801EA068
  c->r[30]=c->r[4]+0x00000174u; // 801EA06C
  if (!crb(c,2)) { goto L_801EA090; } // 801EA070
  c->r[3]=0u+0x802D0000u; // 801EA074
  c->r[5]=0u+0x802D0000u; // 801EA078
  c->r[3]=c->r[3]+0x00001F5Cu; // 801EA07C
  c->r[4]=0u+0x00000233u; // 801EA080
  c->r[5]=c->r[5]+0x00001F38u; // 801EA084
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA088
  c->lr=0x801EA090u; f_801F9770(c); // 801EA08C
L_801EA090:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA090
  c->r[4]=c->r[29]+0x0000002Cu; // 801EA094
  c->lr=0x801EA09Cu; f_801FA230(c); // 801EA098
  c->r[3]=R32(c->r[29]+0x00000010u); // 801EA09C
  cmps(c,0,(int32_t)c->r[29],0); // 801EA0A0
  c->r[30]=c->r[3]+0x00000180u; // 801EA0A4
  if (crb(c,2)) { goto L_801EA0D0; } // 801EA0A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801EA0AC
  c->r[3]=c->r[29]|c->r[29]; // 801EA0B0
  c->r[4]=0u+0xFFFFFFFFu; // 801EA0B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EA0B8
  c->ctr=c->r[12]; // 801EA0BC
  if (true) { c->lr=0x801EA0C4u; dispatch(c,c->ctr); } // 801EA0C0
  c->r[3]=c->r[30]|c->r[30]; // 801EA0C4
  c->r[4]=c->r[29]|c->r[29]; // 801EA0C8
  c->lr=0x801EA0D0u; f_801D7940(c); // 801EA0CC
L_801EA0D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801EA0D0
  c->lr=0x801EA0D8u; f_800CBAE0(c); // 801EA0D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA0D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA0DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA0E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA0E4
  c->lr=c->r[0]; // 801EA0E8
  c->r[1]=c->r[1]+0x00000020u; // 801EA0EC
  return; // 801EA0F0
}

// fn_801EA100
void f_801EA100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA100
  c->r[0]=c->lr; // 801EA104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA108
  c->r[0]=0u+0x00000001u; // 801EA10C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA110
  c->r[31]=c->r[3]|c->r[3]; // 801EA114
  c->r[4]=R32(c->r[3]+0x00000010u); // 801EA118
  W8(c->r[4]+0x00000105u,c->r[0]); // 801EA11C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801EA120
  cmps(c,0,(int32_t)c->r[3],0); // 801EA124
  if (crb(c,2)) { goto L_801EA194; } // 801EA128
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EA12C
  c->r[12]=R32(c->r[12]+0x00000054u); // 801EA130
  c->ctr=c->r[12]; // 801EA134
  if (true) { c->lr=0x801EA13Cu; dispatch(c,c->ctr); } // 801EA138
  cmps(c,0,(int32_t)c->r[3],0); // 801EA13C
  if (crb(c,2)) { goto L_801EA194; } // 801EA140
  c->r[3]=R32(c->r[31]+0x00000014u); // 801EA144
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EA148
  c->r[12]=R32(c->r[12]+0x00000028u); // 801EA14C
  c->ctr=c->r[12]; // 801EA150
  if (true) { c->lr=0x801EA158u; dispatch(c,c->ctr); } // 801EA154
  cmps(c,0,(int32_t)c->r[3],0); // 801EA158
  if (crb(c,2)) { goto L_801EA180; } // 801EA15C
  c->r[3]=R32(c->r[31]+0x00000014u); // 801EA160
  c->r[4]=0u+0x00000000u; // 801EA164
  c->r[5]=0u+0x00000000u; // 801EA168
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EA16C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801EA170
  c->ctr=c->r[12]; // 801EA174
  if (true) { c->lr=0x801EA17Cu; dispatch(c,c->ctr); } // 801EA178
  goto L_801EA194; // 801EA17C
L_801EA180:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801EA180
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EA184
  c->r[12]=R32(c->r[12]+0x00000048u); // 801EA188
  c->ctr=c->r[12]; // 801EA18C
  if (true) { c->lr=0x801EA194u; dispatch(c,c->ctr); } // 801EA190
L_801EA194:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA198
  c->lr=c->r[0]; // 801EA19C
  c->r[1]=c->r[1]+0x00000010u; // 801EA1A0
  return; // 801EA1A4
}

// fn_801EA1B0
void f_801EA1B0(Ctx* __restrict c) {
  f_801E8AC0(c); return; // 801EA1B0
}

// fn_801EA1C0
void f_801EA1C0(Ctx* __restrict c) {
  f_801E8FE0(c); return; // 801EA1C0
}

// fn_801EA1D0
void f_801EA1D0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EA1D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EA1D4
  c->ctr=c->r[12]; // 801EA1D8
  if (true) { dispatch(c,c->ctr); return; } // 801EA1DC
}

// fn_801EA1E0
void f_801EA1E0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000107u); // 801EA1E0
  return; // 801EA1E4
}

// fn_801EA1F0
void f_801EA1F0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000102u); // 801EA1F0
  return; // 801EA1F4
}

// fn_801EA200
void f_801EA200(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000101u); // 801EA200
  return; // 801EA204
}

// fn_801EA210
void f_801EA210(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801EA210
  f_801EA1D0(c); return; // 801EA214
}

// fn_801EA220
void f_801EA220(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801EA220
  f_801EA1C0(c); return; // 801EA224
}

// fn_801EA230
void f_801EA230(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801EA230
  f_801EA1B0(c); return; // 801EA234
}

// fn_801EA240
void f_801EA240(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801EA240
  f_801E7310(c); return; // 801EA244
}

// fn_801EA250
void f_801EA250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA250
  c->r[0]=c->lr; // 801EA254
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA25C
  c->r[31]=c->r[4]|c->r[4]; // 801EA260
  c->r[4]=c->r[5]|c->r[5]; // 801EA264
  c->r[5]=c->r[6]|c->r[6]; // 801EA268
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EA26C
  c->r[30]=c->r[3]|c->r[3]; // 801EA270
  c->lr=0x801EA278u; f_801D2BF0(c); // 801EA274
  c->r[4]=0u+0x802D0000u; // 801EA278
  c->r[3]=c->r[30]+0x00000110u; // 801EA27C
  c->r[4]=c->r[4]+0x00002038u; // 801EA280
  W32(c->r[30]+0x00000000u,c->r[4]); // 801EA284
  c->lr=0x801EA28Cu; f_801E7130(c); // 801EA288
  c->r[5]=c->r[30]+0x00000E40u; // 801EA28C
  c->r[3]=c->r[30]+0x00000EB0u; // 801EA290
  {uint32_t ea=c->r[2]+0xFFFF9EF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA294
  cmpu(c,0,c->r[5],c->r[3]); // 801EA298
  c->r[4]=0u+0x00000000u; // 801EA29C
  W32(c->r[30]+0x00000E28u,c->r[4]); // 801EA2A0
  W32(c->r[30]+0x00000E2Cu,c->r[31]); // 801EA2A4
  {uint32_t ea=c->r[30]+0x00000E30u; WF32(ea,c->f[0]);} // 801EA2A8
  {uint32_t ea=c->r[30]+0x00000E34u; WF32(ea,c->f[0]);} // 801EA2AC
  W32(c->r[30]+0x00000E38u,c->r[4]); // 801EA2B0
  W32(c->r[30]+0x00000E3Cu,c->r[4]); // 801EA2B4
  if (!crb(c,0)) { goto L_801EA2E8; } // 801EA2B8
  c->r[0]=c->r[3]+0x0000000Fu; // 801EA2BC
  c->r[0]=c->r[0]-c->r[5]; // 801EA2C0
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801EA2C4
  c->ctr=c->r[0]; // 801EA2C8
  if (!crb(c,0)) { goto L_801EA2E8; } // 801EA2CC
L_801EA2D0:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801EA2D0
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 801EA2D4
  W32(c->r[5]+0x00000008u,c->r[4]); // 801EA2D8
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801EA2DC
  c->r[5]=c->r[5]+0x00000010u; // 801EA2E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA2D0; } // 801EA2E4
L_801EA2E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA2E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA2EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EA2F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA2F4
  c->lr=c->r[0]; // 801EA2F8
  c->r[1]=c->r[1]+0x00000010u; // 801EA2FC
  return; // 801EA300
}

// fn_801EA310
void f_801EA310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA310
  c->r[0]=c->lr; // 801EA314
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA31C
  c->r[31]=c->r[3]|c->r[3]; // 801EA320
  c->lr=0x801EA328u; f_801D2D60(c); // 801EA324
  c->r[0]=0u+0x00000004u; // 801EA328
  {uint32_t ea=c->r[2]+0xFFFF9EF0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801EA32C
  c->r[6]=0u+0x00000000u; // 801EA330
  {uint32_t ea=c->r[2]+0xFFFF9EF8u; c->f[5]=RF64(ea);} // 801EA334
  c->r[5]=0u+0x00000000u; // 801EA338
  {uint32_t ea=c->r[2]+0xFFFF9EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA33C
  c->r[4]=0u+0x43300000u; // 801EA340
  c->r[3]=0u+0x00000001u; // 801EA344
  c->ctr=c->r[0]; // 801EA348
  c->r[0]=c->r[0]|0x00000000u; // 801EA34C
L_801EA350:;
  {uint32_t ea=c->r[31]+0x00000E30u; WF32(ea,c->f[6]);} // 801EA350
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[5]); // 801EA354
  {uint32_t ea=c->r[31]+0x00000E34u; WF32(ea,c->f[6]);} // 801EA358
  W32(c->r[31]+0x00000E38u,c->r[5]); // 801EA35C
  W32(c->r[31]+0x00000E3Cu,c->r[5]); // 801EA360
  if (crb(c,0)) { goto L_801EA370; } // 801EA364
  {uint32_t ea=c->r[31]+0x00000E34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA368
  goto L_801EA3AC; // 801EA36C
L_801EA370:;
  c->r[0]=c->r[5]^0x80000000u; // 801EA370
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EA374
  {uint32_t ea=c->r[31]+0x00000E34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA378
  W32(c->r[1]+0x00000008u,c->r[4]); // 801EA37C
  {uint32_t ea=c->r[31]+0x00000E30u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA380
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 801EA384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA388
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801EA38C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 801EA390
  W32(c->r[1]+0x00000010u,c->r[4]); // 801EA394
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801EA398
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801EA39C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 801EA3A0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801EA3A4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801EA3A8
L_801EA3AC:;
  {uint32_t ea=c->r[31]+0x00000E30u; WF32(ea,c->f[1]);} // 801EA3AC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[5]); // 801EA3B0
  {uint32_t ea=c->r[31]+0x00000E34u; WF32(ea,c->f[0]);} // 801EA3B4
  W32(c->r[31]+0x00000E38u,c->r[3]); // 801EA3B8
  W32(c->r[31]+0x00000E3Cu,c->r[5]); // 801EA3BC
  {uint32_t ea=c->r[31]+0x00000E40u; WF32(ea,c->f[6]);} // 801EA3C0
  {uint32_t ea=c->r[31]+0x00000E44u; WF32(ea,c->f[6]);} // 801EA3C4
  W32(c->r[31]+0x00000E48u,c->r[5]); // 801EA3C8
  W32(c->r[31]+0x00000E4Cu,c->r[5]); // 801EA3CC
  if (crb(c,0)) { goto L_801EA3DC; } // 801EA3D0
  {uint32_t ea=c->r[31]+0x00000E44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA3D4
  goto L_801EA418; // 801EA3D8
L_801EA3DC:;
  c->r[0]=c->r[5]^0x80000000u; // 801EA3DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EA3E0
  {uint32_t ea=c->r[31]+0x00000E44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA3E4
  W32(c->r[1]+0x00000008u,c->r[4]); // 801EA3E8
  {uint32_t ea=c->r[31]+0x00000E40u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA3EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 801EA3F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA3F4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801EA3F8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 801EA3FC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801EA400
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801EA404
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801EA408
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 801EA40C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801EA410
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801EA414
L_801EA418:;
  {uint32_t ea=c->r[31]+0x00000E40u; WF32(ea,c->f[1]);} // 801EA418
  c->r[6]=c->r[6]+0x00000001u; // 801EA41C
  {uint32_t ea=c->r[31]+0x00000E44u; WF32(ea,c->f[0]);} // 801EA420
  W32(c->r[31]+0x00000E48u,c->r[3]); // 801EA424
  W32(c->r[31]+0x00000E4Cu,c->r[5]); // 801EA428
  c->r[31]=c->r[31]+0x00000020u; // 801EA42C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA350; } // 801EA430
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA434
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA438
  c->lr=c->r[0]; // 801EA43C
  c->r[1]=c->r[1]+0x00000020u; // 801EA440
  return; // 801EA444
}

// fn_801EA450
void f_801EA450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA450
  c->r[0]=c->lr; // 801EA454
  cmps(c,0,(int32_t)c->r[4],0); // 801EA458
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA460
  c->r[31]=c->r[6]|c->r[6]; // 801EA464
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA468
  c->r[30]=c->r[5]|c->r[5]; // 801EA46C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA470
  c->r[29]=c->r[4]|c->r[4]; // 801EA474
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EA478
  c->r[28]=c->r[3]|c->r[3]; // 801EA47C
  if (!crb(c,2)) { goto L_801EA4A0; } // 801EA480
  c->r[3]=0u+0x802D0000u; // 801EA484
  c->r[5]=0u+0x802D0000u; // 801EA488
  c->r[3]=c->r[3]+0x00001FF8u; // 801EA48C
  c->r[4]=0u+0x0000005Au; // 801EA490
  c->r[5]=c->r[5]+0x0000200Cu; // 801EA494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA498
  c->lr=0x801EA4A0u; f_801F9770(c); // 801EA49C
L_801EA4A0:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801EA4A0
  c->r[3]=c->r[28]|c->r[28]; // 801EA4A4
  c->r[12]=R32(c->r[12]+0x00000020u); // 801EA4A8
  c->ctr=c->r[12]; // 801EA4AC
  if (true) { c->lr=0x801EA4B4u; dispatch(c,c->ctr); } // 801EA4B0
  c->r[3]=c->r[28]|c->r[28]; // 801EA4B4
  c->lr=0x801EA4BCu; f_801D42A0(c); // 801EA4B8
  c->r[7]=c->r[3]|c->r[3]; // 801EA4BC
  c->r[4]=c->r[29]|c->r[29]; // 801EA4C0
  c->r[5]=c->r[30]|c->r[30]; // 801EA4C4
  c->r[6]=c->r[31]|c->r[31]; // 801EA4C8
  c->r[3]=c->r[28]+0x00000110u; // 801EA4CC
  c->lr=0x801EA4D4u; f_801E7440(c); // 801EA4D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA4D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA4D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA4DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA4E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EA4E4
  c->lr=c->r[0]; // 801EA4E8
  c->r[1]=c->r[1]+0x00000020u; // 801EA4EC
  return; // 801EA4F0
}

// fn_801EA500
void f_801EA500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA500
  c->r[0]=c->lr; // 801EA504
  c->r[7]=c->r[4]|c->r[4]; // 801EA508
  c->r[4]=c->r[6]|c->r[6]; // 801EA50C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA510
  c->r[0]=c->r[5]|c->r[5]; // 801EA514
  c->r[5]=c->r[7]|c->r[7]; // 801EA518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA51C
  c->r[31]=c->r[3]|c->r[3]; // 801EA520
  c->r[6]=c->r[0]|c->r[0]; // 801EA524
  c->r[3]=c->r[3]+0x00000110u; // 801EA528
  c->lr=0x801EA530u; f_801E7790(c); // 801EA52C
  cmps(c,0,(int32_t)c->r[3],0); // 801EA530
  if (!crb(c,2)) { goto L_801EA548; } // 801EA534
  c->r[3]=c->r[31]+0x00000110u; // 801EA538
  c->lr=0x801EA540u; f_801E76D0(c); // 801EA53C
  c->r[3]=0u+0x00000000u; // 801EA540
  goto L_801EA54C; // 801EA544
L_801EA548:;
  c->r[3]=0u+0x00000001u; // 801EA548
L_801EA54C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA54C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA550
  c->lr=c->r[0]; // 801EA554
  c->r[1]=c->r[1]+0x00000010u; // 801EA558
  return; // 801EA55C
}

// fn_801EA560
void f_801EA560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA560
  c->r[0]=c->lr; // 801EA564
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA568
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA56C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA570
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA574
  c->r[29]=c->r[3]|c->r[3]; // 801EA578
  c->lr=0x801EA580u; f_801D3930(c); // 801EA57C
  c->r[31]=c->r[29]|c->r[29]; // 801EA580
  c->r[30]=0u+0x00000000u; // 801EA584
L_801EA588:;
  c->r[4]=c->r[30]|c->r[30]; // 801EA588
  c->r[3]=c->r[29]+0x00000110u; // 801EA58C
  c->lr=0x801EA594u; f_801E9D90(c); // 801EA590
  cmps(c,0,(int32_t)c->r[3],0); // 801EA594
  if (crb(c,2)) { goto L_801EA5B4; } // 801EA598
  c->r[3]=R32(c->r[31]+0x00000E3Cu); // 801EA59C
  c->r[0]=R32(c->r[31]+0x00000E38u); // 801EA5A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801EA5A4
  if (!crb(c,0)) { goto L_801EA5B4; } // 801EA5A8
  c->r[0]=c->r[3]+0x00000001u; // 801EA5AC
  W32(c->r[31]+0x00000E3Cu,c->r[0]); // 801EA5B0
L_801EA5B4:;
  c->r[30]=c->r[30]+0x00000001u; // 801EA5B4
  c->r[31]=c->r[31]+0x00000010u; // 801EA5B8
  cmps(c,0,(int32_t)c->r[30],8); // 801EA5BC
  if (crb(c,0)) { IRQCHK(c); goto L_801EA588; } // 801EA5C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA5C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA5C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA5CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA5D0
  c->lr=c->r[0]; // 801EA5D4
  c->r[1]=c->r[1]+0x00000020u; // 801EA5D8
  return; // 801EA5DC
}

// fn_801EA5E0
void f_801EA5E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA5E0
  c->r[0]=c->lr; // 801EA5E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EA5E8
  c->r[11]=c->r[1]+0x00000030u; // 801EA5EC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801EA5F0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801EA5F4
  c->lr=0x801EA5FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA5F8
  c->r[27]=c->r[3]|c->r[3]; // 801EA5FC
  c->lr=0x801EA604u; f_801D3970(c); // 801EA600
  {uint32_t ea=c->r[2]+0xFFFF9EF8u; c->f[31]=RF64(ea);} // 801EA604
  c->r[29]=c->r[27]|c->r[27]; // 801EA608
  c->r[28]=0u+0x00000000u; // 801EA60C
  c->r[30]=0u+0x00000001u; // 801EA610
  c->r[31]=0u+0x43300000u; // 801EA614
L_801EA618:;
  c->r[4]=c->r[28]|c->r[28]; // 801EA618
  c->r[3]=c->r[27]+0x00000110u; // 801EA61C
  c->lr=0x801EA624u; f_801E9D90(c); // 801EA620
  cmps(c,0,(int32_t)c->r[3],0); // 801EA624
  if (crb(c,2)) { goto L_801EA690; } // 801EA628
  c->r[5]=R32(c->r[29]+0x00000E38u); // 801EA62C
  c->r[3]=c->r[27]+0x00000110u; // 801EA630
  c->r[0]=R32(c->r[29]+0x00000E3Cu); // 801EA634
  c->r[4]=((c->r[28])&0x20)?0u:(c->r[30]<<((c->r[28])&31)); // 801EA638
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801EA63C
  if (crb(c,0)) { goto L_801EA64C; } // 801EA640
  {uint32_t ea=c->r[29]+0x00000E34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA644
  goto L_801EA68C; // 801EA648
L_801EA64C:;
  c->r[0]=c->r[0]^0x80000000u; // 801EA64C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EA650
  c->r[0]=c->r[5]^0x80000000u; // 801EA654
  {uint32_t ea=c->r[29]+0x00000E34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA658
  W32(c->r[1]+0x00000008u,c->r[31]); // 801EA65C
  {uint32_t ea=c->r[29]+0x00000E30u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA660
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 801EA664
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA668
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801EA66C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[31]); // 801EA670
  W32(c->r[1]+0x00000010u,c->r[31]); // 801EA674
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801EA678
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801EA67C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EA680
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EA684
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801EA688
L_801EA68C:;
  c->lr=0x801EA690u; f_801E9D00(c); // 801EA68C
L_801EA690:;
  c->r[28]=c->r[28]+0x00000001u; // 801EA690
  c->r[29]=c->r[29]+0x00000010u; // 801EA694
  cmps(c,0,(int32_t)c->r[28],8); // 801EA698
  if (crb(c,0)) { IRQCHK(c); goto L_801EA618; } // 801EA69C
  c->r[11]=c->r[1]+0x00000030u; // 801EA6A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801EA6A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801EA6A8
  c->lr=0x801EA6B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA6AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EA6B0
  c->lr=c->r[0]; // 801EA6B4
  c->r[1]=c->r[1]+0x00000040u; // 801EA6B8
  return; // 801EA6BC
}

// fn_801EA6C0
void f_801EA6C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA6C0
  c->r[0]=c->lr; // 801EA6C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA6C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA6CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA6D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA6D4
  c->r[29]=c->r[3]|c->r[3]; // 801EA6D8
  c->lr=0x801EA6E0u; f_801D3D40(c); // 801EA6DC
  cmps(c,0,(int32_t)c->r[29],0); // 801EA6E0
  c->r[30]=R32(c->r[29]+0x00000E2Cu); // 801EA6E4
  if (!crb(c,2)) { goto L_801EA708; } // 801EA6E8
  c->r[3]=0u+0x802D0000u; // 801EA6EC
  c->r[5]=0u+0x802D0000u; // 801EA6F0
  c->r[3]=c->r[3]+0x00002098u; // 801EA6F4
  c->r[4]=0u+0x0000009Eu; // 801EA6F8
  c->r[5]=c->r[5]+0x00002070u; // 801EA6FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA700
  c->lr=0x801EA708u; f_801F9770(c); // 801EA704
L_801EA708:;
  c->r[31]=c->r[30]+0x00000010u; // 801EA708
  c->r[3]=c->r[31]|c->r[31]; // 801EA70C
  c->lr=0x801EA714u; f_800CCD50(c); // 801EA710
  c->r[0]=R32(c->r[30]+0x00000004u); // 801EA714
  cmps(c,0,(int32_t)c->r[0],0); // 801EA718
  if (!crb(c,2)) { goto L_801EA72C; } // 801EA71C
  c->r[3]=c->r[31]|c->r[31]; // 801EA720
  c->lr=0x801EA728u; f_800CCE30(c); // 801EA724
  goto L_801EA788; // 801EA728
L_801EA72C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EA72C
  if (!crb(c,2)) { goto L_801EA750; } // 801EA730
  c->r[3]=0u+0x802D0000u; // 801EA734
  c->r[5]=0u+0x802D0000u; // 801EA738
  c->r[3]=c->r[3]+0x000008C4u; // 801EA73C
  c->r[4]=0u+0x00000233u; // 801EA740
  c->r[5]=c->r[5]+0x000008A0u; // 801EA744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA748
  c->lr=0x801EA750u; f_801F9770(c); // 801EA74C
L_801EA750:;
  c->r[3]=c->r[30]+0x00000004u; // 801EA750
  c->r[4]=c->r[29]+0x000000F0u; // 801EA754
  c->lr=0x801EA75Cu; f_801FA230(c); // 801EA758
  c->r[12]=R32(c->r[29]+0x00000000u); // 801EA75C
  c->r[3]=c->r[29]|c->r[29]; // 801EA760
  c->r[4]=0u+0xFFFFFFFFu; // 801EA764
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EA768
  c->ctr=c->r[12]; // 801EA76C
  if (true) { c->lr=0x801EA774u; dispatch(c,c->ctr); } // 801EA770
  c->r[3]=c->r[30]|c->r[30]; // 801EA774
  c->r[4]=c->r[29]|c->r[29]; // 801EA778
  c->lr=0x801EA780u; f_801D7940(c); // 801EA77C
  c->r[3]=c->r[31]|c->r[31]; // 801EA780
  c->lr=0x801EA788u; f_800CCE30(c); // 801EA784
L_801EA788:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA788
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA78C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA790
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA794
  c->lr=c->r[0]; // 801EA798
  c->r[1]=c->r[1]+0x00000020u; // 801EA79C
  return; // 801EA7A0
}

// fn_801EA7B0
void f_801EA7B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA7B0
  c->r[0]=c->lr; // 801EA7B4
  cmps(c,0,(int32_t)c->r[3],0); // 801EA7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA7C0
  c->r[31]=c->r[4]|c->r[4]; // 801EA7C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EA7C8
  c->r[30]=c->r[3]|c->r[3]; // 801EA7CC
  if (crb(c,2)) { goto L_801EA7F0; } // 801EA7D0
  c->r[4]=0u+0xFFFFFFFFu; // 801EA7D4
  c->r[3]=c->r[3]+0x00000110u; // 801EA7D8
  c->lr=0x801EA7E0u; f_801E7310(c); // 801EA7DC
  cmps(c,0,(int32_t)c->r[31],0); // 801EA7E0
  if (!crb(c,1)) { goto L_801EA7F0; } // 801EA7E4
  c->r[3]=c->r[30]|c->r[30]; // 801EA7E8
  c->lr=0x801EA7F0u; f_800B9AD0(c); // 801EA7EC
L_801EA7F0:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA7F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA7F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EA7F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA7FC
  c->lr=c->r[0]; // 801EA800
  c->r[1]=c->r[1]+0x00000010u; // 801EA804
  return; // 801EA808
}

// fn_801EA810
void f_801EA810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA810
  c->r[0]=c->lr; // 801EA814
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EA818
  c->r[11]=c->r[1]+0x00000040u; // 801EA81C
  c->lr=0x801EA824u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA820
  c->r[4]=R8(c->r[3]+0x00000098u); // 801EA824
  c->r[31]=c->r[3]|c->r[3]; // 801EA828
  c->r[0]=R32(c->r[3]+0x00000050u); // 801EA82C
  c->r[4]=c->r[4]+c->r[0]; // 801EA830
  cmps(c,0,(int32_t)c->r[4],127); // 801EA834
  if (!crb(c,1)) { goto L_801EA844; } // 801EA838
  c->r[24]=0u+0x0000007Fu; // 801EA83C
  goto L_801EA84C; // 801EA840
L_801EA844:;
  c->r[0]=sraw(c,c->r[4],31); // 801EA844
  c->r[24]=c->r[4]&~c->r[0]; // 801EA848
L_801EA84C:;
  c->r[25]=R32(c->r[3]+0x00000E2Cu); // 801EA84C
  c->r[26]=c->r[25]+0x00000010u; // 801EA850
  c->r[3]=c->r[26]|c->r[26]; // 801EA854
  c->lr=0x801EA85Cu; f_800CCD50(c); // 801EA858
  cmps(c,0,(int32_t)c->r[31],0); // 801EA85C
  if (!crb(c,2)) { goto L_801EA880; } // 801EA860
  c->r[3]=0u+0x802D0000u; // 801EA864
  c->r[5]=0u+0x802D0000u; // 801EA868
  c->r[3]=c->r[3]+0x000008C4u; // 801EA86C
  c->r[4]=0u+0x00000233u; // 801EA870
  c->r[5]=c->r[5]+0x000008A0u; // 801EA874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA878
  c->lr=0x801EA880u; f_801F9770(c); // 801EA87C
L_801EA880:;
  c->r[23]=c->r[31]+0x000000F0u; // 801EA880
  c->r[3]=c->r[25]+0x00000004u; // 801EA884
  c->r[4]=c->r[23]|c->r[23]; // 801EA888
  c->lr=0x801EA890u; f_801FA230(c); // 801EA88C
  c->r[30]=R32(c->r[25]+0x00000008u); // 801EA890
  c->r[29]=c->r[25]+0x00000008u; // 801EA894
  c->r[27]=0u+0x802D0000u; // 801EA898
  c->r[28]=0u+0x802D0000u; // 801EA89C
  goto L_801EA8F0; // 801EA8A0
L_801EA8A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EA8A4
  if (!crb(c,2)) { goto L_801EA8C0; } // 801EA8A8
  c->r[3]=c->r[27]+0x000008F4u; // 801EA8AC
  c->r[5]=c->r[28]+0x000008D0u; // 801EA8B0
  c->r[4]=0u+0x0000023Du; // 801EA8B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA8B8
  c->lr=0x801EA8C0u; f_801F9770(c); // 801EA8BC
L_801EA8C0:;
  c->r[3]=R8(c->r[30]+0xFFFFFFA8u); // 801EA8C0
  c->r[0]=R32(c->r[30]+0xFFFFFF60u); // 801EA8C4
  c->r[3]=c->r[3]+c->r[0]; // 801EA8C8
  cmps(c,0,(int32_t)c->r[3],127); // 801EA8CC
  if (!crb(c,1)) { goto L_801EA8DC; } // 801EA8D0
  c->r[0]=0u+0x0000007Fu; // 801EA8D4
  goto L_801EA8E4; // 801EA8D8
L_801EA8DC:;
  c->r[0]=sraw(c,c->r[3],31); // 801EA8DC
  c->r[0]=c->r[3]&~c->r[0]; // 801EA8E0
L_801EA8E4:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801EA8E4
  if (crb(c,0)) { goto L_801EA8F8; } // 801EA8E8
  c->r[30]=R32(c->r[30]+0x00000000u); // 801EA8EC
L_801EA8F0:;
  cmpu(c,0,c->r[30],c->r[29]); // 801EA8F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801EA8A4; } // 801EA8F4
L_801EA8F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EA8F8
  if (!crb(c,2)) { goto L_801EA91C; } // 801EA8FC
  c->r[3]=0u+0x802D0000u; // 801EA900
  c->r[5]=0u+0x802D0000u; // 801EA904
  c->r[3]=c->r[3]+0x000008C4u; // 801EA908
  c->r[4]=0u+0x00000233u; // 801EA90C
  c->r[5]=c->r[5]+0x000008A0u; // 801EA910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EA914
  c->lr=0x801EA91Cu; f_801F9770(c); // 801EA918
L_801EA91C:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EA91C
  c->r[5]=c->r[23]|c->r[23]; // 801EA920
  c->r[3]=c->r[25]+0x00000004u; // 801EA924
  c->r[4]=c->r[1]+0x00000008u; // 801EA928
  c->lr=0x801EA930u; f_801FA130(c); // 801EA92C
  c->r[3]=c->r[26]|c->r[26]; // 801EA930
  c->lr=0x801EA938u; f_800CCE30(c); // 801EA934
  c->r[11]=c->r[1]+0x00000040u; // 801EA938
  c->lr=0x801EA940u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA93C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EA940
  c->lr=c->r[0]; // 801EA944
  c->r[1]=c->r[1]+0x00000040u; // 801EA948
  return; // 801EA94C
}

// fn_801EA950
void f_801EA950(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000E28u); // 801EA950
  c->r[0]=0u-c->r[3]; // 801EA954
  c->r[0]=c->r[0]|c->r[3]; // 801EA958
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EA95C
  return; // 801EA960
}

// fn_801EA970
void f_801EA970(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000E28u); // 801EA970
  f_801EA9D0(c); return; // 801EA974
}

// fn_801EA980
void f_801EA980(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801EA980
  return; // 801EA984
}

// fn_801EA990
void f_801EA990(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801EA990
  return; // 801EA994
}

// fn_801EA9A0
void f_801EA9A0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000213u); // 801EA9A0
  return; // 801EA9A4
}

// fn_801EA9B0
void f_801EA9B0(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFAE88u; // 801EA9B0
  return; // 801EA9B4
}

// fn_801EA9C0
void f_801EA9C0(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFAE38u; // 801EA9C0
  W32(c->r[13]+0xFFFFAE88u,c->r[0]); // 801EA9C4
  return; // 801EA9C8
}

// fn_801EA9D0
void f_801EA9D0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 801EA9D0
  cmps(c,0,(int32_t)c->r[4],0); // 801EA9D4
  if (crb(c,2)) { goto L_801EA9F0; } // 801EA9D8
  c->r[0]=R32(c->r[4]+0x00000E28u); // 801EA9DC
  cmpu(c,0,c->r[0],c->r[3]); // 801EA9E0
  if (!crb(c,2)) { goto L_801EA9F0; } // 801EA9E4
  c->r[0]=0u+0x00000000u; // 801EA9E8
  W32(c->r[4]+0x00000E28u,c->r[0]); // 801EA9EC
L_801EA9F0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EA9F0
  cmps(c,0,(int32_t)c->r[0],0); // 801EA9F4
  if (crb(c,2)) return; // 801EA9F8
  c->r[0]=0u+0x00000000u; // 801EA9FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801EAA00
  return; // 801EAA04
}

// fn_801EAA10
void f_801EAA10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAA10
  c->r[0]=c->lr; // 801EAA14
  cmps(c,0,(int32_t)c->r[3],0); // 801EAA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAA1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EAA20
  c->r[31]=c->r[4]|c->r[4]; // 801EAA24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EAA28
  c->r[30]=c->r[3]|c->r[3]; // 801EAA2C
  if (crb(c,2)) { goto L_801EAA78; } // 801EAA30
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801EAA34
  c->r[4]=0u+0x802D0000u; // 801EAA38
  c->r[4]=c->r[4]+0x000020E8u; // 801EAA3C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801EAA40
  cmps(c,0,(int32_t)c->r[0],0); // 801EAA44
  if (crb(c,2)) { goto L_801EAA68; } // 801EAA48
  c->r[3]=0u+0x802D0000u; // 801EAA4C
  c->r[5]=0u+0x802D0000u; // 801EAA50
  c->r[3]=c->r[3]+0x000020B0u; // 801EAA54
  c->r[4]=0u+0x00000018u; // 801EAA58
  c->r[5]=c->r[5]+0x000020C0u; // 801EAA5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAA60
  c->lr=0x801EAA68u; f_801F9770(c); // 801EAA64
L_801EAA68:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EAA68
  if (!crb(c,1)) { goto L_801EAA78; } // 801EAA6C
  c->r[3]=c->r[30]|c->r[30]; // 801EAA70
  c->lr=0x801EAA78u; f_800B9AD0(c); // 801EAA74
L_801EAA78:;
  c->r[3]=c->r[30]|c->r[30]; // 801EAA78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EAA7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EAA80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EAA84
  c->lr=c->r[0]; // 801EAA88
  c->r[1]=c->r[1]+0x00000010u; // 801EAA8C
  return; // 801EAA90
}

// fn_801EAAA0
void f_801EAAA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAAA0
  c->r[0]=c->lr; // 801EAAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAAA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EAAAC
  c->r[0]=R8(c->r[13]+0xFFFFAE90u); // 801EAAB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EAAB4
  if (!crb(c,2)) { goto L_801EAB20; } // 801EAAB8
  c->r[31]=0u+0x80390000u; // 801EAABC
  c->r[4]=0u+0x801F0000u; // 801EAAC0
  c->r[31]=c->r[31]+0x000051C4u; // 801EAAC4
  c->r[5]=0u+0x801F0000u; // 801EAAC8
  c->r[3]=c->r[31]|c->r[31]; // 801EAACC
  c->r[4]=c->r[4]+0xFFFFAC10u; // 801EAAD0
  c->r[5]=c->r[5]+0xFFFFABB0u; // 801EAAD4
  c->r[6]=0u+0x0000000Cu; // 801EAAD8
  c->r[7]=0u+0x00000003u; // 801EAADC
  c->lr=0x801EAAE4u; f_80217288(c); // 801EAAE0
  c->r[0]=0u+0x00000000u; // 801EAAE4
  W32(c->r[31]+0x00000024u,c->r[0]); // 801EAAE8
  c->r[3]=c->r[31]+0x0000002Cu; // 801EAAEC
  W8(c->r[31]+0x00000028u,c->r[0]); // 801EAAF0
  c->lr=0x801EAAF8u; f_800CE950(c); // 801EAAF4
  c->r[3]=c->r[31]+0x00000034u; // 801EAAF8
  c->lr=0x801EAB00u; f_800CE950(c); // 801EAAFC
  c->r[4]=0u+0x801F0000u; // 801EAB00
  c->r[5]=0u+0x80390000u; // 801EAB04
  c->r[3]=c->r[31]|c->r[31]; // 801EAB08
  c->r[4]=c->r[4]+0xFFFFAB40u; // 801EAB0C
  c->r[5]=c->r[5]+0x000051B8u; // 801EAB10
  c->lr=0x801EAB18u; f_80216C54(c); // 801EAB14
  c->r[0]=0u+0x00000001u; // 801EAB18
  W8(c->r[13]+0xFFFFAE90u,c->r[0]); // 801EAB1C
L_801EAB20:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EAB20
  c->r[3]=0u+0x80390000u; // 801EAB24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EAB28
  c->r[3]=c->r[3]+0x000051C4u; // 801EAB2C
  c->lr=c->r[0]; // 801EAB30
  c->r[1]=c->r[1]+0x00000010u; // 801EAB34
  return; // 801EAB38
}

// __dt__Q44nw4r3snd6detail11TaskManagerFv
void f_801EAB40(Ctx* __restrict c) {
  trace_call(0x801EAB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAB40
  c->r[0]=c->lr; // 801EAB44
  cmps(c,0,(int32_t)c->r[3],0); // 801EAB48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAB4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EAB50
  c->r[31]=c->r[4]|c->r[4]; // 801EAB54
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EAB58
  c->r[30]=c->r[3]|c->r[3]; // 801EAB5C
  if (crb(c,2)) { goto L_801EAB88; } // 801EAB60
  c->r[4]=0u+0x801F0000u; // 801EAB64
  c->r[5]=0u+0x0000000Cu; // 801EAB68
  c->r[4]=c->r[4]+0xFFFFABB0u; // 801EAB6C
  c->r[6]=0u+0x00000003u; // 801EAB70
  c->lr=0x801EAB78u; f_80217380(c); // 801EAB74
  cmps(c,0,(int32_t)c->r[31],0); // 801EAB78
  if (!crb(c,1)) { goto L_801EAB88; } // 801EAB7C
  c->r[3]=c->r[30]|c->r[30]; // 801EAB80
  c->lr=0x801EAB88u; f_800B9AD0(c); // 801EAB84
L_801EAB88:;
  c->r[3]=c->r[30]|c->r[30]; // 801EAB88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EAB8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EAB90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EAB94
  c->lr=c->r[0]; // 801EAB98
  c->r[1]=c->r[1]+0x00000010u; // 801EAB9C
  return; // 801EABA0
}

// fn_801EABB0
void f_801EABB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EABB0
  c->r[0]=c->lr; // 801EABB4
  cmps(c,0,(int32_t)c->r[3],0); // 801EABB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EABBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EABC0
  c->r[31]=c->r[4]|c->r[4]; // 801EABC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EABC8
  c->r[30]=c->r[3]|c->r[3]; // 801EABCC
  if (crb(c,2)) { goto L_801EABEC; } // 801EABD0
  c->r[4]=0u+0x00000000u; // 801EABD4
  c->lr=0x801EABDCu; f_801F9DB0(c); // 801EABD8
  cmps(c,0,(int32_t)c->r[31],0); // 801EABDC
  if (!crb(c,1)) { goto L_801EABEC; } // 801EABE0
  c->r[3]=c->r[30]|c->r[30]; // 801EABE4
  c->lr=0x801EABECu; f_800B9AD0(c); // 801EABE8
L_801EABEC:;
  c->r[3]=c->r[30]|c->r[30]; // 801EABEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EABF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EABF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EABF8
  c->lr=c->r[0]; // 801EABFC
  c->r[1]=c->r[1]+0x00000010u; // 801EAC00
  return; // 801EAC04
}

// fn_801EAC10
void f_801EAC10(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 801EAC10
  c->r[0]=0u+0x00000000u; // 801EAC14
  W32(c->r[3]+0x00000000u,c->r[0]); // 801EAC18
  W32(c->r[3]+0x00000004u,c->r[4]); // 801EAC1C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801EAC20
  return; // 801EAC24
}

// fn_801EAC30
void f_801EAC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAC30
  c->r[0]=c->lr; // 801EAC34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EAC38
  c->r[11]=c->r[1]+0x00000030u; // 801EAC3C
  c->lr=0x801EAC44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EAC40
  cmpu(c,0,c->r[5],0x00000002u); // 801EAC44
  c->r[27]=c->r[3]|c->r[3]; // 801EAC48
  c->r[28]=c->r[4]|c->r[4]; // 801EAC4C
  c->r[29]=c->r[5]|c->r[5]; // 801EAC50
  c->r[0]=0u+0x00000000u; // 801EAC54
  if (crb(c,1)) { goto L_801EAC60; } // 801EAC58
  c->r[0]=0u+0x00000001u; // 801EAC5C
L_801EAC60:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EAC60
  if (!crb(c,2)) { goto L_801EAC90; } // 801EAC64
  c->r[3]=0u+0x802D0000u; // 801EAC68
  c->r[5]=0u+0x802D0000u; // 801EAC6C
  c->r[6]=c->r[29]|c->r[29]; // 801EAC70
  c->r[4]=0u+0x00000043u; // 801EAC74
  c->r[3]=c->r[3]+0x00002100u; // 801EAC78
  c->r[5]=c->r[5]+0x00002114u; // 801EAC7C
  c->r[7]=0u+0x00000000u; // 801EAC80
  c->r[8]=0u+0x00000003u; // 801EAC84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAC88
  c->lr=0x801EAC90u; f_801F9770(c); // 801EAC8C
L_801EAC90:;
  c->lr=0x801EAC94u; f_800CBAA0(c); // 801EAC90
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801EAC94
  c->r[4]=0u+0x00000001u; // 801EAC98
  cmps(c,0,(int32_t)c->r[28],0); // 801EAC9C
  W8(c->r[28]+0x0000000Cu,c->r[4]); // 801EACA0
  c->r[31]=c->r[3]|c->r[3]; // 801EACA4
  c->r[29]=c->r[27]+c->r[0]; // 801EACA8
  c->r[30]=c->r[29]+0x00000004u; // 801EACAC
  if (!crb(c,2)) { goto L_801EACD0; } // 801EACB0
  c->r[3]=0u+0x802D0000u; // 801EACB4
  c->r[5]=0u+0x802D0000u; // 801EACB8
  c->r[3]=c->r[3]+0x0000220Cu; // 801EACBC
  c->r[4]=0u+0x00000233u; // 801EACC0
  c->r[5]=c->r[5]+0x000021E8u; // 801EACC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EACC8
  c->lr=0x801EACD0u; f_801F9770(c); // 801EACCC
L_801EACD0:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EACD0
  c->r[3]=c->r[29]|c->r[29]; // 801EACD4
  c->r[4]=c->r[1]+0x00000008u; // 801EACD8
  c->r[5]=c->r[28]+0x00000004u; // 801EACDC
  c->lr=0x801EACE4u; f_801FA130(c); // 801EACE0
  c->r[3]=c->r[27]+0x0000002Cu; // 801EACE4
  c->lr=0x801EACECu; f_800CFAD0(c); // 801EACE8
  c->r[3]=c->r[31]|c->r[31]; // 801EACEC
  c->lr=0x801EACF4u; f_800CBAE0(c); // 801EACF0
  c->r[11]=c->r[1]+0x00000030u; // 801EACF4
  c->lr=0x801EACFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EACF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EACFC
  c->lr=c->r[0]; // 801EAD00
  c->r[1]=c->r[1]+0x00000030u; // 801EAD04
  return; // 801EAD08
}

// fn_801EAD10
void f_801EAD10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAD10
  c->r[0]=c->lr; // 801EAD14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EAD18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801EAD1C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801EAD20
  W32(c->r[1]+0x00000024u,c->r[29]); // 801EAD24
  W32(c->r[1]+0x00000020u,c->r[28]); // 801EAD28
  c->r[28]=c->r[3]|c->r[3]; // 801EAD2C
  c->lr=0x801EAD34u; f_800CBAA0(c); // 801EAD30
  c->r[31]=c->r[3]|c->r[3]; // 801EAD34
  c->lr=0x801EAD3Cu; f_800CBAA0(c); // 801EAD38
  c->r[0]=R32(c->r[28]+0x00000018u); // 801EAD3C
  c->r[30]=c->r[3]|c->r[3]; // 801EAD40
  cmps(c,0,(int32_t)c->r[0],0); // 801EAD44
  if (!crb(c,2)) { goto L_801EAD58; } // 801EAD48
  c->lr=0x801EAD50u; f_800CBAE0(c); // 801EAD4C
  c->r[29]=0u+0x00000000u; // 801EAD50
  goto L_801EADE0; // 801EAD54
L_801EAD58:;
  if (!crb(c,2)) { goto L_801EAD78; } // 801EAD58
  c->r[3]=0u+0x802D0000u; // 801EAD5C
  c->r[5]=0u+0x802D0000u; // 801EAD60
  c->r[3]=c->r[3]+0x0000217Cu; // 801EAD64
  c->r[4]=0u+0x000001F1u; // 801EAD68
  c->r[5]=c->r[5]+0x00002158u; // 801EAD6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAD70
  c->lr=0x801EAD78u; f_801F9770(c); // 801EAD74
L_801EAD78:;
  c->r[29]=R32(c->r[28]+0x0000001Cu); // 801EAD78
  cmps(c,0,(int32_t)c->r[29],0); // 801EAD7C
  if (!crb(c,2)) { goto L_801EADA0; } // 801EAD80
  c->r[3]=0u+0x802D0000u; // 801EAD84
  c->r[5]=0u+0x802D0000u; // 801EAD88
  c->r[3]=c->r[3]+0x000021ACu; // 801EAD8C
  c->r[4]=0u+0x0000023Du; // 801EAD90
  c->r[5]=c->r[5]+0x00002188u; // 801EAD94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAD98
  c->lr=0x801EADA0u; f_801F9770(c); // 801EAD9C
L_801EADA0:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801EADA0
  if (!crb(c,2)) { goto L_801EADC4; } // 801EADA4
  c->r[3]=0u+0x802D0000u; // 801EADA8
  c->r[5]=0u+0x802D0000u; // 801EADAC
  c->r[3]=c->r[3]+0x000021DCu; // 801EADB0
  c->r[4]=0u+0x00000193u; // 801EADB4
  c->r[5]=c->r[5]+0x000021B8u; // 801EADB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EADBC
  c->lr=0x801EADC4u; f_801F9770(c); // 801EADC0
L_801EADC4:;
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801EADC4
  c->r[3]=c->r[28]+0x00000018u; // 801EADC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801EADCC
  c->r[4]=c->r[1]+0x00000010u; // 801EADD0
  c->lr=0x801EADD8u; f_801F9EE0(c); // 801EADD4
  c->r[3]=c->r[30]|c->r[30]; // 801EADD8
  c->lr=0x801EADE0u; f_800CBAE0(c); // 801EADDC
L_801EADE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EADE0
  if (crb(c,2)) { goto L_801EADF8; } // 801EADE4
  c->r[3]=c->r[31]|c->r[31]; // 801EADE8
  c->lr=0x801EADF0u; f_800CBAE0(c); // 801EADEC
  c->r[3]=c->r[29]|c->r[29]; // 801EADF0
  goto L_801EAF84; // 801EADF4
L_801EADF8:;
  c->lr=0x801EADFCu; f_800CBAA0(c); // 801EADF8
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801EADFC
  c->r[30]=c->r[3]|c->r[3]; // 801EAE00
  cmps(c,0,(int32_t)c->r[0],0); // 801EAE04
  if (!crb(c,2)) { goto L_801EAE18; } // 801EAE08
  c->lr=0x801EAE10u; f_800CBAE0(c); // 801EAE0C
  c->r[29]=0u+0x00000000u; // 801EAE10
  goto L_801EAEA0; // 801EAE14
L_801EAE18:;
  if (!crb(c,2)) { goto L_801EAE38; } // 801EAE18
  c->r[3]=0u+0x802D0000u; // 801EAE1C
  c->r[5]=0u+0x802D0000u; // 801EAE20
  c->r[3]=c->r[3]+0x0000217Cu; // 801EAE24
  c->r[4]=0u+0x000001F1u; // 801EAE28
  c->r[5]=c->r[5]+0x00002158u; // 801EAE2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAE30
  c->lr=0x801EAE38u; f_801F9770(c); // 801EAE34
L_801EAE38:;
  c->r[29]=R32(c->r[28]+0x00000010u); // 801EAE38
  cmps(c,0,(int32_t)c->r[29],0); // 801EAE3C
  if (!crb(c,2)) { goto L_801EAE60; } // 801EAE40
  c->r[3]=0u+0x802D0000u; // 801EAE44
  c->r[5]=0u+0x802D0000u; // 801EAE48
  c->r[3]=c->r[3]+0x000021ACu; // 801EAE4C
  c->r[4]=0u+0x0000023Du; // 801EAE50
  c->r[5]=c->r[5]+0x00002188u; // 801EAE54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAE58
  c->lr=0x801EAE60u; f_801F9770(c); // 801EAE5C
L_801EAE60:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801EAE60
  if (!crb(c,2)) { goto L_801EAE84; } // 801EAE64
  c->r[3]=0u+0x802D0000u; // 801EAE68
  c->r[5]=0u+0x802D0000u; // 801EAE6C
  c->r[3]=c->r[3]+0x000021DCu; // 801EAE70
  c->r[4]=0u+0x00000193u; // 801EAE74
  c->r[5]=c->r[5]+0x000021B8u; // 801EAE78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAE7C
  c->lr=0x801EAE84u; f_801F9770(c); // 801EAE80
L_801EAE84:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801EAE84
  c->r[3]=c->r[28]+0x0000000Cu; // 801EAE88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EAE8C
  c->r[4]=c->r[1]+0x0000000Cu; // 801EAE90
  c->lr=0x801EAE98u; f_801F9EE0(c); // 801EAE94
  c->r[3]=c->r[30]|c->r[30]; // 801EAE98
  c->lr=0x801EAEA0u; f_800CBAE0(c); // 801EAE9C
L_801EAEA0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EAEA0
  if (crb(c,2)) { goto L_801EAEB8; } // 801EAEA4
  c->r[3]=c->r[31]|c->r[31]; // 801EAEA8
  c->lr=0x801EAEB0u; f_800CBAE0(c); // 801EAEAC
  c->r[3]=c->r[29]|c->r[29]; // 801EAEB0
  goto L_801EAF84; // 801EAEB4
L_801EAEB8:;
  c->lr=0x801EAEBCu; f_800CBAA0(c); // 801EAEB8
  c->r[0]=R32(c->r[28]+0x00000000u); // 801EAEBC
  c->r[30]=c->r[3]|c->r[3]; // 801EAEC0
  cmps(c,0,(int32_t)c->r[0],0); // 801EAEC4
  if (!crb(c,2)) { goto L_801EAED8; } // 801EAEC8
  c->lr=0x801EAED0u; f_800CBAE0(c); // 801EAECC
  c->r[29]=0u+0x00000000u; // 801EAED0
  goto L_801EAF60; // 801EAED4
L_801EAED8:;
  if (!crb(c,2)) { goto L_801EAEF8; } // 801EAED8
  c->r[3]=0u+0x802D0000u; // 801EAEDC
  c->r[5]=0u+0x802D0000u; // 801EAEE0
  c->r[3]=c->r[3]+0x0000217Cu; // 801EAEE4
  c->r[4]=0u+0x000001F1u; // 801EAEE8
  c->r[5]=c->r[5]+0x00002158u; // 801EAEEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAEF0
  c->lr=0x801EAEF8u; f_801F9770(c); // 801EAEF4
L_801EAEF8:;
  c->r[29]=R32(c->r[28]+0x00000004u); // 801EAEF8
  cmps(c,0,(int32_t)c->r[29],0); // 801EAEFC
  if (!crb(c,2)) { goto L_801EAF20; } // 801EAF00
  c->r[3]=0u+0x802D0000u; // 801EAF04
  c->r[5]=0u+0x802D0000u; // 801EAF08
  c->r[3]=c->r[3]+0x000021ACu; // 801EAF0C
  c->r[4]=0u+0x0000023Du; // 801EAF10
  c->r[5]=c->r[5]+0x00002188u; // 801EAF14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAF18
  c->lr=0x801EAF20u; f_801F9770(c); // 801EAF1C
L_801EAF20:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801EAF20
  if (!crb(c,2)) { goto L_801EAF44; } // 801EAF24
  c->r[3]=0u+0x802D0000u; // 801EAF28
  c->r[5]=0u+0x802D0000u; // 801EAF2C
  c->r[3]=c->r[3]+0x000021DCu; // 801EAF30
  c->r[4]=0u+0x00000193u; // 801EAF34
  c->r[5]=c->r[5]+0x000021B8u; // 801EAF38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAF3C
  c->lr=0x801EAF44u; f_801F9770(c); // 801EAF40
L_801EAF44:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801EAF44
  c->r[3]=c->r[28]|c->r[28]; // 801EAF48
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EAF4C
  c->r[4]=c->r[1]+0x00000008u; // 801EAF50
  c->lr=0x801EAF58u; f_801F9EE0(c); // 801EAF54
  c->r[3]=c->r[30]|c->r[30]; // 801EAF58
  c->lr=0x801EAF60u; f_800CBAE0(c); // 801EAF5C
L_801EAF60:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EAF60
  if (crb(c,2)) { goto L_801EAF78; } // 801EAF64
  c->r[3]=c->r[31]|c->r[31]; // 801EAF68
  c->lr=0x801EAF70u; f_800CBAE0(c); // 801EAF6C
  c->r[3]=c->r[29]|c->r[29]; // 801EAF70
  goto L_801EAF84; // 801EAF74
L_801EAF78:;
  c->r[3]=c->r[31]|c->r[31]; // 801EAF78
  c->lr=0x801EAF80u; f_800CBAE0(c); // 801EAF7C
  c->r[3]=0u+0x00000000u; // 801EAF80
L_801EAF84:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EAF84
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801EAF88
  c->r[30]=R32(c->r[1]+0x00000028u); // 801EAF8C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801EAF90
  c->r[28]=R32(c->r[1]+0x00000020u); // 801EAF94
  c->lr=c->r[0]; // 801EAF98
  c->r[1]=c->r[1]+0x00000030u; // 801EAF9C
  return; // 801EAFA0
}

// fn_801EAFB0
void f_801EAFB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAFB0
  c->r[0]=c->lr; // 801EAFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EAFB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EAFBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EAFC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EAFC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EAFC8
  c->r[28]=c->r[3]|c->r[3]; // 801EAFCC
  c->lr=0x801EAFD4u; f_800CBAA0(c); // 801EAFD0
  c->r[31]=c->r[3]|c->r[3]; // 801EAFD4
  c->lr=0x801EAFDCu; f_800CBAA0(c); // 801EAFD8
  c->r[0]=R32(c->r[28]+0x00000018u); // 801EAFDC
  c->r[30]=c->r[3]|c->r[3]; // 801EAFE0
  cmps(c,0,(int32_t)c->r[0],0); // 801EAFE4
  if (!crb(c,2)) { goto L_801EAFF8; } // 801EAFE8
  c->lr=0x801EAFF0u; f_800CBAE0(c); // 801EAFEC
  c->r[29]=0u+0x00000000u; // 801EAFF0
  goto L_801EB06C; // 801EAFF4
L_801EAFF8:;
  if (!crb(c,2)) { goto L_801EB018; } // 801EAFF8
  c->r[3]=0u+0x802D0000u; // 801EAFFC
  c->r[5]=0u+0x802D0000u; // 801EB000
  c->r[3]=c->r[3]+0x0000217Cu; // 801EB004
  c->r[4]=0u+0x000001F1u; // 801EB008
  c->r[5]=c->r[5]+0x00002158u; // 801EB00C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB010
  c->lr=0x801EB018u; f_801F9770(c); // 801EB014
L_801EB018:;
  c->r[29]=R32(c->r[28]+0x0000001Cu); // 801EB018
  cmps(c,0,(int32_t)c->r[29],0); // 801EB01C
  if (!crb(c,2)) { goto L_801EB040; } // 801EB020
  c->r[3]=0u+0x802D0000u; // 801EB024
  c->r[5]=0u+0x802D0000u; // 801EB028
  c->r[3]=c->r[3]+0x000021ACu; // 801EB02C
  c->r[4]=0u+0x0000023Du; // 801EB030
  c->r[5]=c->r[5]+0x00002188u; // 801EB034
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB038
  c->lr=0x801EB040u; f_801F9770(c); // 801EB03C
L_801EB040:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801EB040
  if (!crb(c,2)) { goto L_801EB064; } // 801EB044
  c->r[3]=0u+0x802D0000u; // 801EB048
  c->r[5]=0u+0x802D0000u; // 801EB04C
  c->r[3]=c->r[3]+0x000021DCu; // 801EB050
  c->r[4]=0u+0x00000193u; // 801EB054
  c->r[5]=c->r[5]+0x000021B8u; // 801EB058
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB05C
  c->lr=0x801EB064u; f_801F9770(c); // 801EB060
L_801EB064:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB064
  c->lr=0x801EB06Cu; f_800CBAE0(c); // 801EB068
L_801EB06C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EB06C
  if (crb(c,2)) { goto L_801EB084; } // 801EB070
  c->r[3]=c->r[31]|c->r[31]; // 801EB074
  c->lr=0x801EB07Cu; f_800CBAE0(c); // 801EB078
  c->r[3]=c->r[29]|c->r[29]; // 801EB07C
  goto L_801EB1E8; // 801EB080
L_801EB084:;
  c->lr=0x801EB088u; f_800CBAA0(c); // 801EB084
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801EB088
  c->r[30]=c->r[3]|c->r[3]; // 801EB08C
  cmps(c,0,(int32_t)c->r[0],0); // 801EB090
  if (!crb(c,2)) { goto L_801EB0A4; } // 801EB094
  c->lr=0x801EB09Cu; f_800CBAE0(c); // 801EB098
  c->r[29]=0u+0x00000000u; // 801EB09C
  goto L_801EB118; // 801EB0A0
L_801EB0A4:;
  if (!crb(c,2)) { goto L_801EB0C4; } // 801EB0A4
  c->r[3]=0u+0x802D0000u; // 801EB0A8
  c->r[5]=0u+0x802D0000u; // 801EB0AC
  c->r[3]=c->r[3]+0x0000217Cu; // 801EB0B0
  c->r[4]=0u+0x000001F1u; // 801EB0B4
  c->r[5]=c->r[5]+0x00002158u; // 801EB0B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB0BC
  c->lr=0x801EB0C4u; f_801F9770(c); // 801EB0C0
L_801EB0C4:;
  c->r[29]=R32(c->r[28]+0x00000010u); // 801EB0C4
  cmps(c,0,(int32_t)c->r[29],0); // 801EB0C8
  if (!crb(c,2)) { goto L_801EB0EC; } // 801EB0CC
  c->r[3]=0u+0x802D0000u; // 801EB0D0
  c->r[5]=0u+0x802D0000u; // 801EB0D4
  c->r[3]=c->r[3]+0x000021ACu; // 801EB0D8
  c->r[4]=0u+0x0000023Du; // 801EB0DC
  c->r[5]=c->r[5]+0x00002188u; // 801EB0E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB0E4
  c->lr=0x801EB0ECu; f_801F9770(c); // 801EB0E8
L_801EB0EC:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801EB0EC
  if (!crb(c,2)) { goto L_801EB110; } // 801EB0F0
  c->r[3]=0u+0x802D0000u; // 801EB0F4
  c->r[5]=0u+0x802D0000u; // 801EB0F8
  c->r[3]=c->r[3]+0x000021DCu; // 801EB0FC
  c->r[4]=0u+0x00000193u; // 801EB100
  c->r[5]=c->r[5]+0x000021B8u; // 801EB104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB108
  c->lr=0x801EB110u; f_801F9770(c); // 801EB10C
L_801EB110:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB110
  c->lr=0x801EB118u; f_800CBAE0(c); // 801EB114
L_801EB118:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EB118
  if (crb(c,2)) { goto L_801EB130; } // 801EB11C
  c->r[3]=c->r[31]|c->r[31]; // 801EB120
  c->lr=0x801EB128u; f_800CBAE0(c); // 801EB124
  c->r[3]=c->r[29]|c->r[29]; // 801EB128
  goto L_801EB1E8; // 801EB12C
L_801EB130:;
  c->lr=0x801EB134u; f_800CBAA0(c); // 801EB130
  c->r[0]=R32(c->r[28]+0x00000000u); // 801EB134
  c->r[30]=c->r[3]|c->r[3]; // 801EB138
  cmps(c,0,(int32_t)c->r[0],0); // 801EB13C
  if (!crb(c,2)) { goto L_801EB150; } // 801EB140
  c->lr=0x801EB148u; f_800CBAE0(c); // 801EB144
  c->r[29]=0u+0x00000000u; // 801EB148
  goto L_801EB1C4; // 801EB14C
L_801EB150:;
  if (!crb(c,2)) { goto L_801EB170; } // 801EB150
  c->r[3]=0u+0x802D0000u; // 801EB154
  c->r[5]=0u+0x802D0000u; // 801EB158
  c->r[3]=c->r[3]+0x0000217Cu; // 801EB15C
  c->r[4]=0u+0x000001F1u; // 801EB160
  c->r[5]=c->r[5]+0x00002158u; // 801EB164
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB168
  c->lr=0x801EB170u; f_801F9770(c); // 801EB16C
L_801EB170:;
  c->r[29]=R32(c->r[28]+0x00000004u); // 801EB170
  cmps(c,0,(int32_t)c->r[29],0); // 801EB174
  if (!crb(c,2)) { goto L_801EB198; } // 801EB178
  c->r[3]=0u+0x802D0000u; // 801EB17C
  c->r[5]=0u+0x802D0000u; // 801EB180
  c->r[3]=c->r[3]+0x000021ACu; // 801EB184
  c->r[4]=0u+0x0000023Du; // 801EB188
  c->r[5]=c->r[5]+0x00002188u; // 801EB18C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB190
  c->lr=0x801EB198u; f_801F9770(c); // 801EB194
L_801EB198:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801EB198
  if (!crb(c,2)) { goto L_801EB1BC; } // 801EB19C
  c->r[3]=0u+0x802D0000u; // 801EB1A0
  c->r[5]=0u+0x802D0000u; // 801EB1A4
  c->r[3]=c->r[3]+0x000021DCu; // 801EB1A8
  c->r[4]=0u+0x00000193u; // 801EB1AC
  c->r[5]=c->r[5]+0x000021B8u; // 801EB1B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB1B4
  c->lr=0x801EB1BCu; f_801F9770(c); // 801EB1B8
L_801EB1BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB1BC
  c->lr=0x801EB1C4u; f_800CBAE0(c); // 801EB1C0
L_801EB1C4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EB1C4
  if (crb(c,2)) { goto L_801EB1DC; } // 801EB1C8
  c->r[3]=c->r[31]|c->r[31]; // 801EB1CC
  c->lr=0x801EB1D4u; f_800CBAE0(c); // 801EB1D0
  c->r[3]=c->r[29]|c->r[29]; // 801EB1D4
  goto L_801EB1E8; // 801EB1D8
L_801EB1DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801EB1DC
  c->lr=0x801EB1E4u; f_800CBAE0(c); // 801EB1E0
  c->r[3]=0u+0x00000000u; // 801EB1E4
L_801EB1E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB1E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EB1EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EB1F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EB1F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EB1F8
  c->lr=c->r[0]; // 801EB1FC
  c->r[1]=c->r[1]+0x00000020u; // 801EB200
  return; // 801EB204
}

// ExecuteTask__Q44nw4r3snd6detail11TaskManagerFv
void f_801EB210(Ctx* __restrict c) {
  trace_call(0x801EB210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB210
  c->r[0]=c->lr; // 801EB214
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EB21C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EB220
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EB224
  c->r[29]=c->r[3]|c->r[3]; // 801EB228
  c->lr=0x801EB230u; f_801EAD10(c); // 801EB22C
  cmps(c,0,(int32_t)c->r[3],0); // 801EB230
  c->r[30]=c->r[3]|c->r[3]; // 801EB234
  if (!crb(c,2)) { goto L_801EB244; } // 801EB238
  c->r[3]=0u+0x00000000u; // 801EB23C
  goto L_801EB270; // 801EB240
L_801EB244:;
  W32(c->r[29]+0x00000024u,c->r[3]); // 801EB244
  c->r[31]=0u+0x00000000u; // 801EB248
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 801EB24C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EB250
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EB254
  c->ctr=c->r[12]; // 801EB258
  if (true) { c->lr=0x801EB260u; dispatch(c,c->ctr); } // 801EB25C
  W32(c->r[29]+0x00000024u,c->r[31]); // 801EB260
  c->r[3]=c->r[29]+0x00000034u; // 801EB264
  c->lr=0x801EB26Cu; f_800CFAD0(c); // 801EB268
  c->r[3]=c->r[30]|c->r[30]; // 801EB26C
L_801EB270:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB270
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EB274
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EB278
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EB27C
  c->lr=c->r[0]; // 801EB280
  c->r[1]=c->r[1]+0x00000020u; // 801EB284
  return; // 801EB288
}

// fn_801EB290
void f_801EB290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB290
  c->r[0]=c->lr; // 801EB294
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EB298
  c->r[11]=c->r[1]+0x00000050u; // 801EB29C
  c->lr=0x801EB2A4u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB2A0
  c->r[17]=c->r[3]|c->r[3]; // 801EB2A4
  c->r[18]=c->r[4]|c->r[4]; // 801EB2A8
  c->lr=0x801EB2B0u; f_800CBAA0(c); // 801EB2AC
  c->r[0]=R32(c->r[17]+0x00000024u); // 801EB2B0
  c->r[30]=c->r[3]|c->r[3]; // 801EB2B4
  cmpu(c,0,c->r[18],c->r[0]); // 801EB2B8
  if (!crb(c,2)) { goto L_801EB2F0; } // 801EB2BC
  c->r[12]=R32(c->r[18]+0x00000000u); // 801EB2C0
  c->r[3]=c->r[18]|c->r[18]; // 801EB2C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801EB2C8
  c->ctr=c->r[12]; // 801EB2CC
  if (true) { c->lr=0x801EB2D4u; dispatch(c,c->ctr); } // 801EB2D0
  goto L_801EB2E0; // 801EB2D4
L_801EB2D8:;
  c->r[3]=c->r[17]+0x00000034u; // 801EB2D8
  c->lr=0x801EB2E0u; f_800CF9E0(c); // 801EB2DC
L_801EB2E0:;
  c->r[0]=R32(c->r[17]+0x00000024u); // 801EB2E0
  cmpu(c,0,c->r[18],c->r[0]); // 801EB2E4
  if (crb(c,2)) { IRQCHK(c); goto L_801EB2D8; } // 801EB2E8
  goto L_801EB3DC; // 801EB2EC
L_801EB2F0:;
  c->r[19]=0u+0x00000000u; // 801EB2F0
  c->r[31]=0u+0x00000000u; // 801EB2F4
  c->r[23]=0u+0x802D0000u; // 801EB2F8
  c->r[24]=0u+0x802D0000u; // 801EB2FC
  c->r[25]=0u+0x802D0000u; // 801EB300
  c->r[26]=0u+0x802D0000u; // 801EB304
  c->r[27]=0u+0x00000000u; // 801EB308
L_801EB30C:;
  c->r[21]=c->r[17]+c->r[31]; // 801EB30C
  c->r[29]=R32(c->r[21]+0x00000004u); // 801EB310
  c->r[28]=c->r[21]+0x00000004u; // 801EB314
  goto L_801EB3C4; // 801EB318
L_801EB31C:;
  c->r[22]=c->r[29]|c->r[29]; cr0(c,c->r[22]); // 801EB31C
  c->r[29]=R32(c->r[29]+0x00000000u); // 801EB320
  if (!crb(c,2)) { goto L_801EB33C; } // 801EB324
  c->r[3]=c->r[23]+0x000021ACu; // 801EB328
  c->r[5]=c->r[24]+0x00002188u; // 801EB32C
  c->r[4]=0u+0x0000023Du; // 801EB330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB334
  c->lr=0x801EB33Cu; f_801F9770(c); // 801EB338
L_801EB33C:;
  c->r[20]=addc(c,c->r[22],0xFFFFFFFCu,0); cr0(c,c->r[20]); // 801EB33C
  if (!crb(c,2)) { goto L_801EB358; } // 801EB340
  c->r[3]=c->r[25]+0x000021DCu; // 801EB344
  c->r[5]=c->r[26]+0x000021B8u; // 801EB348
  c->r[4]=0u+0x00000193u; // 801EB34C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB350
  c->lr=0x801EB358u; f_801F9770(c); // 801EB354
L_801EB358:;
  cmpu(c,0,c->r[20],c->r[18]); // 801EB358
  if (!crb(c,2)) { goto L_801EB3C4; } // 801EB35C
  W32(c->r[1]+0x00000008u,c->r[22]); // 801EB360
  c->r[3]=c->r[21]|c->r[21]; // 801EB364
  c->r[4]=c->r[1]+0x00000008u; // 801EB368
  c->lr=0x801EB370u; f_801F9EE0(c); // 801EB36C
  cmps(c,0,(int32_t)c->r[22],0); // 801EB370
  if (!crb(c,2)) { goto L_801EB38C; } // 801EB374
  c->r[3]=c->r[23]+0x000021ACu; // 801EB378
  c->r[5]=c->r[24]+0x00002188u; // 801EB37C
  c->r[4]=0u+0x0000023Du; // 801EB380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB384
  c->lr=0x801EB38Cu; f_801F9770(c); // 801EB388
L_801EB38C:;
  cmps(c,0,(int32_t)c->r[22],0); // 801EB38C
  W8(c->r[20]+0x0000000Cu,c->r[27]); // 801EB390
  if (!crb(c,2)) { goto L_801EB3AC; } // 801EB394
  c->r[3]=c->r[23]+0x000021ACu; // 801EB398
  c->r[5]=c->r[24]+0x00002188u; // 801EB39C
  c->r[4]=0u+0x0000023Du; // 801EB3A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB3A4
  c->lr=0x801EB3ACu; f_801F9770(c); // 801EB3A8
L_801EB3AC:;
  c->r[12]=R32(c->r[20]+0x00000000u); // 801EB3AC
  c->r[3]=c->r[20]|c->r[20]; // 801EB3B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EB3B4
  c->ctr=c->r[12]; // 801EB3B8
  if (true) { c->lr=0x801EB3C0u; dispatch(c,c->ctr); } // 801EB3BC
  goto L_801EB3CC; // 801EB3C0
L_801EB3C4:;
  cmpu(c,0,c->r[29],c->r[28]); // 801EB3C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801EB31C; } // 801EB3C8
L_801EB3CC:;
  c->r[19]=c->r[19]+0x00000001u; // 801EB3CC
  c->r[31]=c->r[31]+0x0000000Cu; // 801EB3D0
  cmps(c,0,(int32_t)c->r[19],3); // 801EB3D4
  if (crb(c,0)) { IRQCHK(c); goto L_801EB30C; } // 801EB3D8
L_801EB3DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB3DC
  c->lr=0x801EB3E4u; f_800CBAE0(c); // 801EB3E0
  c->r[11]=c->r[1]+0x00000050u; // 801EB3E4
  c->lr=0x801EB3ECu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB3E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EB3EC
  c->lr=c->r[0]; // 801EB3F0
  c->r[1]=c->r[1]+0x00000050u; // 801EB3F4
  return; // 801EB3F8
}

// fn_801EB400
void f_801EB400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB400
  c->r[0]=c->lr; // 801EB404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB40C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EB410
  c->r[30]=c->r[3]|c->r[3]; // 801EB414
  c->lr=0x801EB41Cu; f_800CBAA0(c); // 801EB418
  c->r[0]=0u+0x00000000u; // 801EB41C
  W8(c->r[30]+0x00000028u,c->r[0]); // 801EB420
  c->r[31]=c->r[3]|c->r[3]; // 801EB424
  goto L_801EB434; // 801EB428
L_801EB42C:;
  c->r[3]=c->r[30]+0x0000002Cu; // 801EB42C
  c->lr=0x801EB434u; f_800CF9E0(c); // 801EB430
L_801EB434:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB434
  c->lr=0x801EB43Cu; f_801EAFB0(c); // 801EB438
  cmps(c,0,(int32_t)c->r[3],0); // 801EB43C
  if (!crb(c,2)) { goto L_801EB450; } // 801EB440
  c->r[0]=R8(c->r[30]+0x00000028u); // 801EB444
  cmps(c,0,(int32_t)c->r[0],0); // 801EB448
  if (crb(c,2)) { IRQCHK(c); goto L_801EB42C; } // 801EB44C
L_801EB450:;
  c->r[3]=c->r[31]|c->r[31]; // 801EB450
  c->lr=0x801EB458u; f_800CBAE0(c); // 801EB454
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB45C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EB460
  c->lr=c->r[0]; // 801EB464
  c->r[1]=c->r[1]+0x00000010u; // 801EB468
  return; // 801EB46C
}

// fn_801EB470
void f_801EB470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB470
  c->r[0]=c->lr; // 801EB474
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB47C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EB480
  c->r[30]=c->r[3]|c->r[3]; // 801EB484
  c->lr=0x801EB48Cu; f_800CBAA0(c); // 801EB488
  c->r[0]=0u+0x00000001u; // 801EB48C
  W8(c->r[30]+0x00000028u,c->r[0]); // 801EB490
  c->r[31]=c->r[3]|c->r[3]; // 801EB494
  c->r[3]=c->r[30]+0x0000002Cu; // 801EB498
  c->lr=0x801EB4A0u; f_800CFAD0(c); // 801EB49C
  c->r[3]=c->r[31]|c->r[31]; // 801EB4A0
  c->lr=0x801EB4A8u; f_800CBAE0(c); // 801EB4A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB4AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EB4B0
  c->lr=c->r[0]; // 801EB4B4
  c->r[1]=c->r[1]+0x00000010u; // 801EB4B8
  return; // 801EB4BC
}

// __ct__Q44nw4r3snd6detail10TaskThreadFv
void f_801EB4C0(Ctx* __restrict c) {
  trace_call(0x801EB4C0u);
  c->r[0]=0u+0x00000000u; // 801EB4C0
  W32(c->r[3]+0x00000318u,c->r[0]); // 801EB4C4
  W8(c->r[3]+0x0000031Cu,c->r[0]); // 801EB4C8
  W8(c->r[3]+0x0000031Du,c->r[0]); // 801EB4CC
  return; // 801EB4D0
}

// fn_801EB4E0
void f_801EB4E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB4E0
  c->r[0]=c->lr; // 801EB4E4
  cmps(c,0,(int32_t)c->r[3],0); // 801EB4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB4EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB4F0
  c->r[31]=c->r[4]|c->r[4]; // 801EB4F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EB4F8
  c->r[30]=c->r[3]|c->r[3]; // 801EB4FC
  if (crb(c,2)) { goto L_801EB568; } // 801EB500
  c->r[0]=R8(c->r[3]+0x0000031Du); // 801EB504
  cmps(c,0,(int32_t)c->r[0],0); // 801EB508
  if (crb(c,2)) { goto L_801EB558; } // 801EB50C
  c->r[0]=0u+0x00000001u; // 801EB510
  W8(c->r[3]+0x0000031Cu,c->r[0]); // 801EB514
  c->lr=0x801EB51Cu; f_801EAAA0(c); // 801EB518
  c->lr=0x801EB520u; f_801EB470(c); // 801EB51C
  c->r[3]=c->r[30]|c->r[30]; // 801EB520
  c->r[4]=0u+0x00000000u; // 801EB524
  c->lr=0x801EB52Cu; f_800CF460(c); // 801EB528
  cmps(c,0,(int32_t)c->r[3],0); // 801EB52C
  if (!crb(c,2)) { goto L_801EB550; } // 801EB530
  c->r[3]=0u+0x802D0000u; // 801EB534
  c->r[5]=0u+0x802D0000u; // 801EB538
  c->r[3]=c->r[3]+0x00002218u; // 801EB53C
  c->r[4]=0u+0x00000069u; // 801EB540
  c->r[5]=c->r[5]+0x0000222Cu; // 801EB544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB548
  c->lr=0x801EB550u; f_801F9770(c); // 801EB54C
L_801EB550:;
  c->r[0]=0u+0x00000000u; // 801EB550
  W8(c->r[30]+0x0000031Du,c->r[0]); // 801EB554
L_801EB558:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EB558
  if (!crb(c,1)) { goto L_801EB568; } // 801EB55C
  c->r[3]=c->r[30]|c->r[30]; // 801EB560
  c->lr=0x801EB568u; f_800B9AD0(c); // 801EB564
L_801EB568:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB568
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB56C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EB570
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB574
  c->lr=c->r[0]; // 801EB578
  c->r[1]=c->r[1]+0x00000010u; // 801EB57C
  return; // 801EB580
}

// fn_801EB590
void f_801EB590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB590
  c->r[0]=c->lr; // 801EB594
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB598
  c->r[11]=c->r[1]+0x00000020u; // 801EB59C
  c->lr=0x801EB5A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB5A0
  cmps(c,0,(int32_t)c->r[5],0); // 801EB5A4
  c->r[31]=0u+0x802D0000u; // 801EB5A8
  c->r[27]=c->r[3]|c->r[3]; // 801EB5AC
  c->r[28]=c->r[4]|c->r[4]; // 801EB5B0
  c->r[29]=c->r[5]|c->r[5]; // 801EB5B4
  c->r[30]=c->r[6]|c->r[6]; // 801EB5B8
  c->r[31]=c->r[31]+0x00002218u; // 801EB5BC
  if (!crb(c,2)) { goto L_801EB5D8; } // 801EB5C0
  c->r[3]=c->r[31]+0x00000000u; // 801EB5C4
  c->r[5]=c->r[31]+0x00000034u; // 801EB5C8
  c->r[4]=0u+0x0000003Bu; // 801EB5CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB5D0
  c->lr=0x801EB5D8u; f_801F9770(c); // 801EB5D4
L_801EB5D8:;
  c->r[0]=rotl(c->r[29],0)&0x00000003u; cr0(c,c->r[0]); // 801EB5D8
  if (crb(c,2)) { goto L_801EB5F8; } // 801EB5DC
  c->r[6]=c->r[29]|c->r[29]; // 801EB5E0
  c->r[3]=c->r[31]+0x00000000u; // 801EB5E4
  c->r[5]=c->r[31]+0x0000005Cu; // 801EB5E8
  c->r[4]=0u+0x0000003Cu; // 801EB5EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB5F0
  c->lr=0x801EB5F8u; f_801F9770(c); // 801EB5F4
L_801EB5F8:;
  c->r[0]=R8(c->r[27]+0x0000031Du); // 801EB5F8
  cmps(c,0,(int32_t)c->r[0],0); // 801EB5FC
  if (crb(c,2)) { goto L_801EB644; } // 801EB600
  c->r[0]=0u+0x00000001u; // 801EB604
  W8(c->r[27]+0x0000031Cu,c->r[0]); // 801EB608
  c->lr=0x801EB610u; f_801EAAA0(c); // 801EB60C
  c->lr=0x801EB614u; f_801EB470(c); // 801EB610
  c->r[3]=c->r[27]|c->r[27]; // 801EB614
  c->r[4]=0u+0x00000000u; // 801EB618
  c->lr=0x801EB620u; f_800CF460(c); // 801EB61C
  cmps(c,0,(int32_t)c->r[3],0); // 801EB620
  if (!crb(c,2)) { goto L_801EB63C; } // 801EB624
  c->r[3]=c->r[31]+0x00000000u; // 801EB628
  c->r[5]=c->r[31]+0x00000014u; // 801EB62C
  c->r[4]=0u+0x00000069u; // 801EB630
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB634
  c->lr=0x801EB63Cu; f_801F9770(c); // 801EB638
L_801EB63C:;
  c->r[0]=0u+0x00000000u; // 801EB63C
  W8(c->r[27]+0x0000031Du,c->r[0]); // 801EB640
L_801EB644:;
  c->r[4]=0u+0x801F0000u; // 801EB644
  c->r[3]=c->r[27]|c->r[27]; // 801EB648
  c->r[5]=c->r[27]|c->r[27]; // 801EB64C
  c->r[7]=c->r[30]|c->r[30]; // 801EB650
  c->r[8]=c->r[28]|c->r[28]; // 801EB654
  c->r[4]=c->r[4]+0xFFFFB6B0u; // 801EB658
  c->r[6]=c->r[29]+c->r[30]; // 801EB65C
  c->r[9]=0u+0x00000000u; // 801EB660
  c->lr=0x801EB668u; f_800CEF20(c); // 801EB664
  cmps(c,0,(int32_t)c->r[3],0); // 801EB668
  if (!crb(c,2)) { goto L_801EB678; } // 801EB66C
  c->r[3]=0u+0x00000000u; // 801EB670
  goto L_801EB698; // 801EB674
L_801EB678:;
  c->r[4]=0u+0x00000000u; // 801EB678
  c->r[0]=0u+0x00000001u; // 801EB67C
  W32(c->r[27]+0x00000318u,c->r[29]); // 801EB680
  c->r[3]=c->r[27]|c->r[27]; // 801EB684
  W8(c->r[27]+0x0000031Cu,c->r[4]); // 801EB688
  W8(c->r[27]+0x0000031Du,c->r[0]); // 801EB68C
  c->lr=0x801EB694u; f_800CF5B0(c); // 801EB690
  c->r[3]=0u+0x00000001u; // 801EB694
L_801EB698:;
  c->r[11]=c->r[1]+0x00000020u; // 801EB698
  c->lr=0x801EB6A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB69C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB6A0
  c->lr=c->r[0]; // 801EB6A4
  c->r[1]=c->r[1]+0x00000020u; // 801EB6A8
  return; // 801EB6AC
}

// fn_801EB6B0
void f_801EB6B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB6B0
  c->r[0]=c->lr; // 801EB6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB6B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EB6BC
  c->r[31]=0u+0x802D0000u; // 801EB6C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EB6C4
  c->r[30]=0u+0x802D0000u; // 801EB6C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EB6CC
  c->r[29]=c->r[3]|c->r[3]; // 801EB6D0
  goto L_801EB71C; // 801EB6D4
L_801EB6D8:;
  c->lr=0x801EB6DCu; f_801EAAA0(c); // 801EB6D8
  c->lr=0x801EB6E0u; f_801EB400(c); // 801EB6DC
  c->r[0]=R8(c->r[29]+0x0000031Cu); // 801EB6E0
  cmps(c,0,(int32_t)c->r[0],0); // 801EB6E4
  if (!crb(c,2)) { goto L_801EB728; } // 801EB6E8
  c->lr=0x801EB6F0u; f_801EAAA0(c); // 801EB6EC
  c->lr=0x801EB6F4u; f_801EB210(c); // 801EB6F0
  c->r[3]=R32(c->r[29]+0x00000318u); // 801EB6F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EB6F8
  c->r[0]=c->r[3]+0x21530000u; // 801EB6FC
  cmpu(c,0,c->r[0],0x0000BABEu); // 801EB700
  if (crb(c,2)) { goto L_801EB71C; } // 801EB704
  c->r[3]=c->r[30]+0x00002218u; // 801EB708
  c->r[5]=c->r[31]+0x000022BCu; // 801EB70C
  c->r[4]=0u+0x000000A0u; // 801EB710
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB714
  c->lr=0x801EB71Cu; f_801F9770(c); // 801EB718
L_801EB71C:;
  c->r[0]=R8(c->r[29]+0x0000031Cu); // 801EB71C
  cmps(c,0,(int32_t)c->r[0],0); // 801EB720
  if (crb(c,2)) { IRQCHK(c); goto L_801EB6D8; } // 801EB724
L_801EB728:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EB728
  c->r[3]=0u+0x00000000u; // 801EB72C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EB730
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EB734
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB738
  c->lr=c->r[0]; // 801EB73C
  c->r[1]=c->r[1]+0x00000020u; // 801EB740
  return; // 801EB744
}

// fn_801EB750
void f_801EB750(Ctx* __restrict c) {
  c->r[6]=c->r[3]+0x00000044u; // 801EB750
  c->r[4]=c->r[3]+0x0000008Cu; // 801EB754
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB758
  c->r[5]=0u+0x802D0000u; // 801EB75C
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB760
  c->r[0]=0u+0x00000000u; // 801EB764
  c->r[5]=c->r[5]+0x00002654u; // 801EB768
  cmpu(c,0,c->r[6],c->r[4]); // 801EB76C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801EB770
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EB774
  W32(c->r[3]+0x00000008u,c->r[5]); // 801EB778
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801EB77C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801EB780
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 801EB784
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801EB788
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801EB78C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801EB790
  if (!crb(c,0)) { goto L_801EB7D0; } // 801EB794
  c->r[4]=c->r[4]+0x00000017u; // 801EB798
  c->r[0]=0u+0x00000018u; // 801EB79C
  c->r[4]=c->r[4]-c->r[6]; // 801EB7A0
  c->r[4]=divwu(c->r[4],c->r[0]); // 801EB7A4
  c->ctr=c->r[4]; // 801EB7A8
  if (!crb(c,0)) { goto L_801EB7D0; } // 801EB7AC
L_801EB7B0:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 801EB7B0
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 801EB7B4
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801EB7B8
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 801EB7BC
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 801EB7C0
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 801EB7C4
  c->r[6]=c->r[6]+0x00000018u; // 801EB7C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB7B0; } // 801EB7CC
L_801EB7D0:;
  c->r[0]=0u+0x00000000u; // 801EB7D0
  W32(c->r[3]+0x00000094u,c->r[0]); // 801EB7D4
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 801EB7D8
  W8(c->r[3]+0x0000009Du,c->r[0]); // 801EB7DC
  W8(c->r[3]+0x0000009Eu,c->r[0]); // 801EB7E0
  W8(c->r[3]+0x0000009Fu,c->r[0]); // 801EB7E4
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EB7E8
  W32(c->r[3]+0x000000FCu,c->r[0]); // 801EB7EC
  W32(c->r[3]+0x00000100u,c->r[0]); // 801EB7F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801EB7F4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801EB7F8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801EB7FC
  W32(c->r[3]+0x00000018u,c->r[0]); // 801EB800
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801EB804
  W32(c->r[3]+0x00000020u,c->r[0]); // 801EB808
  W32(c->r[3]+0x00000024u,c->r[0]); // 801EB80C
  W32(c->r[3]+0x00000028u,c->r[0]); // 801EB810
  return; // 801EB814
}

// fn_801EB820
void f_801EB820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB820
  c->r[0]=c->lr; // 801EB824
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EB828
  c->r[11]=c->r[1]+0x00000030u; // 801EB82C
  c->lr=0x801EB834u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB830
  cmps(c,0,(int32_t)c->r[3],0); // 801EB834
  c->r[24]=c->r[3]|c->r[3]; // 801EB838
  c->r[25]=c->r[4]|c->r[4]; // 801EB83C
  if (crb(c,2)) { goto L_801EB8B0; } // 801EB840
  c->r[4]=0u+0x802D0000u; // 801EB844
  c->r[28]=0u+0x00000000u; // 801EB848
  c->r[4]=c->r[4]+0x00002654u; // 801EB84C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801EB850
  c->r[30]=0u+0x00000000u; // 801EB854
L_801EB858:;
  c->r[31]=c->r[30]+c->r[24]; // 801EB858
  c->r[27]=0u+0x00000000u; // 801EB85C
  c->r[29]=0u+0x00000000u; // 801EB860
L_801EB864:;
  c->r[3]=c->r[29]+c->r[31]; // 801EB864
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 801EB868
  cmps(c,0,(int32_t)c->r[26],0); // 801EB86C
  if (crb(c,2)) { goto L_801EB880; } // 801EB870
  c->lr=0x801EB878u; f_801D0E80(c); // 801EB874
  c->r[4]=c->r[26]|c->r[26]; // 801EB878
  c->lr=0x801EB880u; f_801D1590(c); // 801EB87C
L_801EB880:;
  c->r[27]=c->r[27]+0x00000001u; // 801EB880
  c->r[29]=c->r[29]+0x00000004u; // 801EB884
  cmps(c,0,(int32_t)c->r[27],4); // 801EB888
  if (crb(c,0)) { IRQCHK(c); goto L_801EB864; } // 801EB88C
  c->r[28]=c->r[28]+0x00000001u; // 801EB890
  c->r[30]=c->r[30]+0x00000010u; // 801EB894
  cmps(c,0,(int32_t)c->r[28],2); // 801EB898
  if (crb(c,0)) { IRQCHK(c); goto L_801EB858; } // 801EB89C
  cmps(c,0,(int32_t)c->r[25],0); // 801EB8A0
  if (!crb(c,1)) { goto L_801EB8B0; } // 801EB8A4
  c->r[3]=c->r[24]|c->r[24]; // 801EB8A8
  c->lr=0x801EB8B0u; f_800B9AD0(c); // 801EB8AC
L_801EB8B0:;
  c->r[11]=c->r[1]+0x00000030u; // 801EB8B0
  c->r[3]=c->r[24]|c->r[24]; // 801EB8B4
  c->lr=0x801EB8BCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB8B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EB8BC
  c->lr=c->r[0]; // 801EB8C0
  c->r[1]=c->r[1]+0x00000030u; // 801EB8C4
  return; // 801EB8C8
}

// fn_801EB8D0
void f_801EB8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB8D0
  c->r[0]=c->lr; // 801EB8D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB8D8
  c->r[11]=c->r[1]+0x00000020u; // 801EB8DC
  c->lr=0x801EB8E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB8E0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801EB8E4
  c->r[31]=0u+0x802D0000u; // 801EB8E8
  cmpu(c,0,c->r[0],0x00000001u); // 801EB8EC
  c->r[26]=c->r[3]|c->r[3]; // 801EB8F0
  c->r[27]=c->r[4]|c->r[4]; // 801EB8F4
  c->r[28]=c->r[5]|c->r[5]; // 801EB8F8
  c->r[29]=c->r[6]|c->r[6]; // 801EB8FC
  c->r[30]=c->r[7]|c->r[7]; // 801EB900
  c->r[31]=c->r[31]+0x000022F8u; // 801EB904
  c->r[0]=0u+0x00000000u; // 801EB908
  if (crb(c,1)) { goto L_801EB914; } // 801EB90C
  c->r[0]=0u+0x00000001u; // 801EB910
L_801EB914:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EB914
  if (!crb(c,2)) { goto L_801EB93C; } // 801EB918
  c->r[6]=c->r[27]|c->r[27]; // 801EB91C
  c->r[3]=c->r[31]+0x00000000u; // 801EB920
  c->r[5]=c->r[31]+0x00000010u; // 801EB924
  c->r[4]=0u+0x00000080u; // 801EB928
  c->r[7]=0u+0x00000001u; // 801EB92C
  c->r[8]=0u+0x00000002u; // 801EB930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB934
  c->lr=0x801EB93Cu; f_801F9770(c); // 801EB938
L_801EB93C:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 801EB93C
  c->r[3]=0u+0x00000000u; // 801EB940
  cmpu(c,0,c->r[0],0x00000003u); // 801EB944
  if (crb(c,1)) { goto L_801EB950; } // 801EB948
  c->r[3]=0u+0x00000001u; // 801EB94C
L_801EB950:;
  cmps(c,0,(int32_t)c->r[3],0); // 801EB950
  if (!crb(c,2)) { goto L_801EB978; } // 801EB954
  c->r[6]=c->r[28]|c->r[28]; // 801EB958
  c->r[3]=c->r[31]+0x00000000u; // 801EB95C
  c->r[5]=c->r[31]+0x0000005Cu; // 801EB960
  c->r[4]=0u+0x00000081u; // 801EB964
  c->r[7]=0u+0x00000001u; // 801EB968
  c->r[8]=0u+0x00000004u; // 801EB96C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EB970
  c->lr=0x801EB978u; f_801F9770(c); // 801EB974
L_801EB978:;
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB978
  c->r[3]=0u+0x00000000u; // 801EB97C
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB980
  c->r[0]=0u+0x00000001u; // 801EB984
  W32(c->r[26]+0x0000008Cu,c->r[27]); // 801EB988
  c->r[11]=c->r[1]+0x00000020u; // 801EB98C
  W32(c->r[26]+0x00000090u,c->r[28]); // 801EB990
  W32(c->r[26]+0x00000094u,c->r[29]); // 801EB994
  W32(c->r[26]+0x00000098u,c->r[30]); // 801EB998
  W16(c->r[26]+0x000000A2u,c->r[3]); // 801EB99C
  W8(c->r[26]+0x0000009Fu,c->r[3]); // 801EB9A0
  W8(c->r[26]+0x000000A0u,c->r[3]); // 801EB9A4
  W8(c->r[26]+0x0000009Eu,c->r[3]); // 801EB9A8
  W8(c->r[26]+0x000000A1u,c->r[3]); // 801EB9AC
  {uint32_t ea=c->r[26]+0x000000E8u; WF32(ea,c->f[1]);} // 801EB9B0
  {uint32_t ea=c->r[26]+0x000000ECu; WF32(ea,c->f[0]);} // 801EB9B4
  {uint32_t ea=c->r[26]+0x000000F0u; WF32(ea,c->f[1]);} // 801EB9B8
  {uint32_t ea=c->r[26]+0x000000B4u; WF32(ea,c->f[1]);} // 801EB9BC
  W8(c->r[26]+0x000000A5u,c->r[3]); // 801EB9C0
  {uint32_t ea=c->r[26]+0x000000B8u; WF32(ea,c->f[0]);} // 801EB9C4
  {uint32_t ea=c->r[26]+0x000000ACu; WF32(ea,c->f[0]);} // 801EB9C8
  {uint32_t ea=c->r[26]+0x000000B0u; WF32(ea,c->f[0]);} // 801EB9CC
  W32(c->r[26]+0x000000BCu,c->r[0]); // 801EB9D0
  {uint32_t ea=c->r[26]+0x000000C0u; WF32(ea,c->f[1]);} // 801EB9D4
  {uint32_t ea=c->r[26]+0x000000C4u; WF32(ea,c->f[1]);} // 801EB9D8
  {uint32_t ea=c->r[26]+0x000000C8u; WF32(ea,c->f[0]);} // 801EB9DC
  {uint32_t ea=c->r[26]+0x000000CCu; WF32(ea,c->f[0]);} // 801EB9E0
  {uint32_t ea=c->r[26]+0x000000D0u; WF32(ea,c->f[0]);} // 801EB9E4
  {uint32_t ea=c->r[26]+0x000000D4u; WF32(ea,c->f[1]);} // 801EB9E8
  {uint32_t ea=c->r[26]+0x000000D8u; WF32(ea,c->f[1]);} // 801EB9EC
  {uint32_t ea=c->r[26]+0x000000DCu; WF32(ea,c->f[1]);} // 801EB9F0
  {uint32_t ea=c->r[26]+0x000000E0u; WF32(ea,c->f[1]);} // 801EB9F4
  {uint32_t ea=c->r[26]+0x000000E4u; WF32(ea,c->f[1]);} // 801EB9F8
  W8(c->r[26]+0x000000A4u,c->r[3]); // 801EB9FC
  W32(c->r[26]+0x000000F4u,c->r[3]); // 801EBA00
  W32(c->r[26]+0x000000F8u,c->r[3]); // 801EBA04
  c->lr=0x801EBA0Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBA08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EBA0C
  c->lr=c->r[0]; // 801EBA10
  c->r[1]=c->r[1]+0x00000020u; // 801EBA14
  return; // 801EBA18
}

// StopFinished__Q44nw4r3snd6detail5VoiceFv
void f_801EBA20(Ctx* __restrict c) {
  trace_call(0x801EBA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBA20
  c->r[0]=c->lr; // 801EBA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBA2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBA30
  c->r[30]=c->r[3]|c->r[3]; // 801EBA34
  c->r[0]=R8(c->r[3]+0x0000009Cu); // 801EBA38
  cmps(c,0,(int32_t)c->r[0],0); // 801EBA3C
  if (crb(c,2)) { goto L_801EBAA4; } // 801EBA40
  c->r[0]=R8(c->r[3]+0x0000009Eu); // 801EBA44
  cmps(c,0,(int32_t)c->r[0],0); // 801EBA48
  if (crb(c,2)) { goto L_801EBAA4; } // 801EBA4C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801EBA50
  c->r[31]=0u+0x00000000u; // 801EBA54
  cmps(c,0,(int32_t)c->r[3],0); // 801EBA58
  if (crb(c,2)) { goto L_801EBA70; } // 801EBA5C
  c->lr=0x801EBA64u; f_801CDEE0(c); // 801EBA60
  cmps(c,0,(int32_t)c->r[3],0); // 801EBA64
  if (crb(c,2)) { goto L_801EBA70; } // 801EBA68
  c->r[31]=0u+0x00000001u; // 801EBA6C
L_801EBA70:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EBA70
  if (crb(c,2)) { goto L_801EBAA4; } // 801EBA74
  c->r[12]=R32(c->r[30]+0x00000094u); // 801EBA78
  cmps(c,0,(int32_t)c->r[12],0); // 801EBA7C
  if (crb(c,2)) { goto L_801EBA98; } // 801EBA80
  c->r[3]=c->r[30]|c->r[30]; // 801EBA84
  c->r[5]=R32(c->r[30]+0x00000098u); // 801EBA88
  c->r[4]=0u+0x00000000u; // 801EBA8C
  c->ctr=c->r[12]; // 801EBA90
  if (true) { c->lr=0x801EBA98u; dispatch(c,c->ctr); } // 801EBA94
L_801EBA98:;
  c->r[0]=0u+0x00000000u; // 801EBA98
  W8(c->r[30]+0x0000009Eu,c->r[0]); // 801EBA9C
  W8(c->r[30]+0x0000009Du,c->r[0]); // 801EBAA0
L_801EBAA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBAA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBAA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EBAAC
  c->lr=c->r[0]; // 801EBAB0
  c->r[1]=c->r[1]+0x00000010u; // 801EBAB4
  return; // 801EBAB8
}

// fn_801EBAC0
void f_801EBAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBAC0
  c->r[0]=c->lr; // 801EBAC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EBAC8
  c->r[11]=c->r[1]+0x00000030u; // 801EBACC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801EBAD0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801EBAD4
  c->lr=0x801EBADCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EBAD8
  c->r[0]=R8(c->r[3]+0x0000009Du); // 801EBADC
  c->r[31]=c->r[3]|c->r[3]; // 801EBAE0
  cmps(c,0,(int32_t)c->r[0],0); // 801EBAE4
  if (crb(c,2)) { goto L_801EBD28; } // 801EBAE8
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EBAEC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801EBAF0
  if (crb(c,2)) { goto L_801EBB7C; } // 801EBAF4
  c->r[25]=c->r[31]|c->r[31]; // 801EBAF8
  c->r[29]=0u+0x00000000u; // 801EBAFC
  c->r[26]=0u+0x00000000u; // 801EBB00
  goto L_801EBB64; // 801EBB04
L_801EBB08:;
  c->r[0]=R8(c->r[31]+0x000000A1u); // 801EBB08
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EBB0C
  cmps(c,0,(int32_t)c->r[0],0); // 801EBB10
  if (!crb(c,2)) { goto L_801EBB20; } // 801EBB14
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EBB18
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801EBB1C
L_801EBB20:;
  c->r[27]=c->r[31]+c->r[26]; // 801EBB20
  c->r[30]=0u+0x00000000u; // 801EBB24
  goto L_801EBB4C; // 801EBB28
L_801EBB2C:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801EBB2C
  cmps(c,0,(int32_t)c->r[3],0); // 801EBB30
  if (crb(c,2)) { goto L_801EBB44; } // 801EBB34
  c->f[1]=c->f[31]; // 801EBB38
  c->r[4]=0u+0x00000000u; // 801EBB3C
  c->lr=0x801EBB44u; f_801CFBF0(c); // 801EBB40
L_801EBB44:;
  c->r[27]=c->r[27]+0x00000010u; // 801EBB44
  c->r[30]=c->r[30]+0x00000001u; // 801EBB48
L_801EBB4C:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801EBB4C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801EBB50
  if (crb(c,0)) { IRQCHK(c); goto L_801EBB2C; } // 801EBB54
  c->r[25]=c->r[25]+0x00000018u; // 801EBB58
  c->r[26]=c->r[26]+0x00000004u; // 801EBB5C
  c->r[29]=c->r[29]+0x00000001u; // 801EBB60
L_801EBB64:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 801EBB64
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EBB68
  if (crb(c,0)) { IRQCHK(c); goto L_801EBB08; } // 801EBB6C
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBB70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801EBB74
  W16(c->r[31]+0x000000A2u,c->r[0]); // 801EBB78
L_801EBB7C:;
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBB7C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801EBB80
  if (crb(c,2)) { goto L_801EBB9C; } // 801EBB84
  c->r[3]=c->r[31]|c->r[31]; // 801EBB88
  c->lr=0x801EBB90u; f_801ED220(c); // 801EBB8C
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBB90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801EBB94
  W16(c->r[31]+0x000000A2u,c->r[0]); // 801EBB98
L_801EBB9C:;
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBB9C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801EBBA0
  if (crb(c,2)) { goto L_801EBBC4; } // 801EBBA4
  c->r[3]=c->r[31]|c->r[31]; // 801EBBA8
  c->lr=0x801EBBB0u; f_801ED310(c); // 801EBBAC
  cmps(c,0,(int32_t)c->r[3],0); // 801EBBB0
  if (!crb(c,2)) { goto L_801EBBC4; } // 801EBBB4
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBBB8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801EBBBC
  W16(c->r[31]+0x000000A2u,c->r[0]); // 801EBBC0
L_801EBBC4:;
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBBC4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801EBBC8
  if (crb(c,2)) { goto L_801EBC4C; } // 801EBBCC
  c->r[27]=c->r[31]|c->r[31]; // 801EBBD0
  c->r[28]=0u+0x00000000u; // 801EBBD4
  c->r[26]=0u+0x00000000u; // 801EBBD8
  goto L_801EBC34; // 801EBBDC
L_801EBBE0:;
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBBE0
  {uint32_t ea=c->r[27]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EBBE4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801EBBE8
  c->lr=0x801EBBF0u; f_801EF4E0(c); // 801EBBEC
  c->r[30]=c->r[3]|c->r[3]; // 801EBBF0
  c->r[25]=c->r[31]+c->r[26]; // 801EBBF4
  c->r[29]=0u+0x00000000u; // 801EBBF8
  goto L_801EBC1C; // 801EBBFC
L_801EBC00:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 801EBC00
  cmps(c,0,(int32_t)c->r[3],0); // 801EBC04
  if (crb(c,2)) { goto L_801EBC14; } // 801EBC08
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801EBC0C
  c->lr=0x801EBC14u; f_801CFEE0(c); // 801EBC10
L_801EBC14:;
  c->r[25]=c->r[25]+0x00000010u; // 801EBC14
  c->r[29]=c->r[29]+0x00000001u; // 801EBC18
L_801EBC1C:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801EBC1C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EBC20
  if (crb(c,0)) { IRQCHK(c); goto L_801EBC00; } // 801EBC24
  c->r[27]=c->r[27]+0x00000018u; // 801EBC28
  c->r[26]=c->r[26]+0x00000004u; // 801EBC2C
  c->r[28]=c->r[28]+0x00000001u; // 801EBC30
L_801EBC34:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 801EBC34
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBC38
  if (crb(c,0)) { IRQCHK(c); goto L_801EBBE0; } // 801EBC3C
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBC40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801EBC44
  W16(c->r[31]+0x000000A2u,c->r[0]); // 801EBC48
L_801EBC4C:;
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBC4C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 801EBC50
  if (crb(c,2)) { goto L_801EBCBC; } // 801EBC54
  c->r[29]=0u+0x00000000u; // 801EBC58
  c->r[27]=0u+0x00000000u; // 801EBC5C
  goto L_801EBCA4; // 801EBC60
L_801EBC64:;
  c->r[30]=c->r[31]+c->r[27]; // 801EBC64
  c->r[28]=0u+0x00000000u; // 801EBC68
  goto L_801EBC90; // 801EBC6C
L_801EBC70:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801EBC70
  cmps(c,0,(int32_t)c->r[3],0); // 801EBC74
  if (crb(c,2)) { goto L_801EBC88; } // 801EBC78
  c->r[4]=R8(c->r[31]+0x000000A5u); // 801EBC7C
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBC80
  c->lr=0x801EBC88u; f_801D0070(c); // 801EBC84
L_801EBC88:;
  c->r[30]=c->r[30]+0x00000010u; // 801EBC88
  c->r[28]=c->r[28]+0x00000001u; // 801EBC8C
L_801EBC90:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801EBC90
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBC94
  if (crb(c,0)) { IRQCHK(c); goto L_801EBC70; } // 801EBC98
  c->r[27]=c->r[27]+0x00000004u; // 801EBC9C
  c->r[29]=c->r[29]+0x00000001u; // 801EBCA0
L_801EBCA4:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 801EBCA4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EBCA8
  if (crb(c,0)) { IRQCHK(c); goto L_801EBC64; } // 801EBCAC
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBCB0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 801EBCB4
  W16(c->r[31]+0x000000A2u,c->r[0]); // 801EBCB8
L_801EBCBC:;
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBCBC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EBCC0
  if (crb(c,2)) { goto L_801EBD28; } // 801EBCC4
  c->r[29]=0u+0x00000000u; // 801EBCC8
  c->r[30]=0u+0x00000000u; // 801EBCCC
  goto L_801EBD10; // 801EBCD0
L_801EBCD4:;
  c->r[27]=c->r[31]+c->r[30]; // 801EBCD4
  c->r[28]=0u+0x00000000u; // 801EBCD8
  goto L_801EBCFC; // 801EBCDC
L_801EBCE0:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801EBCE0
  cmps(c,0,(int32_t)c->r[3],0); // 801EBCE4
  if (crb(c,2)) { goto L_801EBCF4; } // 801EBCE8
  c->r[4]=R8(c->r[31]+0x000000A4u); // 801EBCEC
  c->lr=0x801EBCF4u; f_801D02A0(c); // 801EBCF0
L_801EBCF4:;
  c->r[27]=c->r[27]+0x00000010u; // 801EBCF4
  c->r[28]=c->r[28]+0x00000001u; // 801EBCF8
L_801EBCFC:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801EBCFC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBD00
  if (crb(c,0)) { IRQCHK(c); goto L_801EBCE0; } // 801EBD04
  c->r[30]=c->r[30]+0x00000004u; // 801EBD08
  c->r[29]=c->r[29]+0x00000001u; // 801EBD0C
L_801EBD10:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 801EBD10
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EBD14
  if (crb(c,0)) { IRQCHK(c); goto L_801EBCD4; } // 801EBD18
  c->r[0]=R16(c->r[31]+0x000000A2u); // 801EBD1C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 801EBD20
  W16(c->r[31]+0x000000A2u,c->r[0]); // 801EBD24
L_801EBD28:;
  c->r[11]=c->r[1]+0x00000030u; // 801EBD28
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801EBD2C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801EBD30
  c->lr=0x801EBD38u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBD34
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EBD38
  c->lr=c->r[0]; // 801EBD3C
  c->r[1]=c->r[1]+0x00000040u; // 801EBD40
  return; // 801EBD44
}

// fn_801EBD50
void f_801EBD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBD50
  c->r[0]=c->lr; // 801EBD54
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EBD58
  c->r[11]=c->r[1]+0x00000030u; // 801EBD5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801EBD60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801EBD64
  c->lr=0x801EBD6Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EBD68
  c->r[30]=c->r[3]|c->r[3]; // 801EBD6C
  c->lr=0x801EBD74u; f_800CBAA0(c); // 801EBD70
  c->r[0]=R8(c->r[30]+0x0000009Cu); // 801EBD74
  c->r[29]=c->r[3]|c->r[3]; // 801EBD78
  cmps(c,0,(int32_t)c->r[0],0); // 801EBD7C
  if (!crb(c,2)) { goto L_801EBD8C; } // 801EBD80
  c->lr=0x801EBD88u; f_800CBAE0(c); // 801EBD84
  goto L_801EBFE8; // 801EBD88
L_801EBD8C:;
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801EBD8C
  c->r[31]=0u+0x00000000u; // 801EBD90
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EBD94
  if (crb(c,2)) { goto L_801EBE44; } // 801EBD98
  c->r[0]=R8(c->r[30]+0x0000009Du); // 801EBD9C
  cmps(c,0,(int32_t)c->r[0],0); // 801EBDA0
  if (crb(c,2)) { goto L_801EBE44; } // 801EBDA4
  c->r[0]=R8(c->r[30]+0x0000009Eu); // 801EBDA8
  cmps(c,0,(int32_t)c->r[0],0); // 801EBDAC
  if (!crb(c,2)) { goto L_801EBE44; } // 801EBDB0
  c->r[25]=c->r[30]|c->r[30]; // 801EBDB4
  c->r[28]=0u+0x00000000u; // 801EBDB8
  c->r[26]=0u+0x00000000u; // 801EBDBC
  goto L_801EBE20; // 801EBDC0
L_801EBDC4:;
  c->r[0]=R8(c->r[30]+0x000000A1u); // 801EBDC4
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EBDC8
  cmps(c,0,(int32_t)c->r[0],0); // 801EBDCC
  if (!crb(c,2)) { goto L_801EBDDC; } // 801EBDD0
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EBDD4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801EBDD8
L_801EBDDC:;
  c->r[27]=c->r[30]+c->r[26]; // 801EBDDC
  c->r[31]=0u+0x00000000u; // 801EBDE0
  goto L_801EBE08; // 801EBDE4
L_801EBDE8:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801EBDE8
  cmps(c,0,(int32_t)c->r[3],0); // 801EBDEC
  if (crb(c,2)) { goto L_801EBE00; } // 801EBDF0
  c->f[1]=c->f[31]; // 801EBDF4
  c->r[4]=0u+0x00000001u; // 801EBDF8
  c->lr=0x801EBE00u; f_801CFBF0(c); // 801EBDFC
L_801EBE00:;
  c->r[27]=c->r[27]+0x00000010u; // 801EBE00
  c->r[31]=c->r[31]+0x00000001u; // 801EBE04
L_801EBE08:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 801EBE08
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801EBE0C
  if (crb(c,0)) { IRQCHK(c); goto L_801EBDE8; } // 801EBE10
  c->r[25]=c->r[25]+0x00000018u; // 801EBE14
  c->r[26]=c->r[26]+0x00000004u; // 801EBE18
  c->r[28]=c->r[28]+0x00000001u; // 801EBE1C
L_801EBE20:;
  c->r[0]=R32(c->r[30]+0x00000090u); // 801EBE20
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBE24
  if (crb(c,0)) { IRQCHK(c); goto L_801EBDC4; } // 801EBE28
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801EBE2C
  c->r[31]=0u+0x00000001u; // 801EBE30
  W8(c->r[30]+0x0000009Eu,c->r[31]); // 801EBE34
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 801EBE38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801EBE3C
  W16(c->r[30]+0x000000A2u,c->r[0]); // 801EBE40
L_801EBE44:;
  c->r[0]=R8(c->r[30]+0x0000009Eu); // 801EBE44
  cmps(c,0,(int32_t)c->r[0],0); // 801EBE48
  if (crb(c,2)) { goto L_801EBEEC; } // 801EBE4C
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801EBE50
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801EBE54
  if (crb(c,2)) { goto L_801EBE9C; } // 801EBE58
  c->r[0]=R8(c->r[30]+0x0000009Du); // 801EBE5C
  cmps(c,0,(int32_t)c->r[0],0); // 801EBE60
  if (crb(c,2)) { goto L_801EBE9C; } // 801EBE64
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 801EBE68
  cmps(c,0,(int32_t)c->r[0],0); // 801EBE6C
  if (crb(c,2)) { goto L_801EBE84; } // 801EBE70
  c->r[0]=0u+0x00000001u; // 801EBE74
  W8(c->r[30]+0x000000A0u,c->r[0]); // 801EBE78
  c->r[31]=0u+0x00000002u; // 801EBE7C
  goto L_801EBE90; // 801EBE80
L_801EBE84:;
  c->r[0]=0u+0x00000000u; // 801EBE84
  W8(c->r[30]+0x000000A0u,c->r[0]); // 801EBE88
  c->r[31]=0u+0x00000001u; // 801EBE8C
L_801EBE90:;
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801EBE90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801EBE94
  W16(c->r[30]+0x000000A2u,c->r[0]); // 801EBE98
L_801EBE9C:;
  c->r[26]=c->r[30]|c->r[30]; // 801EBE9C
  c->r[27]=0u+0x00000000u; // 801EBEA0
  goto L_801EBEE0; // 801EBEA4
L_801EBEA8:;
  c->r[25]=c->r[26]|c->r[26]; // 801EBEA8
  c->r[28]=0u+0x00000000u; // 801EBEAC
  goto L_801EBECC; // 801EBEB0
L_801EBEB4:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 801EBEB4
  cmps(c,0,(int32_t)c->r[3],0); // 801EBEB8
  if (crb(c,2)) { goto L_801EBEC4; } // 801EBEBC
  c->lr=0x801EBEC4u; f_801D0570(c); // 801EBEC0
L_801EBEC4:;
  c->r[25]=c->r[25]+0x00000004u; // 801EBEC4
  c->r[28]=c->r[28]+0x00000001u; // 801EBEC8
L_801EBECC:;
  c->r[0]=R32(c->r[30]+0x00000090u); // 801EBECC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBED0
  if (crb(c,0)) { IRQCHK(c); goto L_801EBEB4; } // 801EBED4
  c->r[26]=c->r[26]+0x00000010u; // 801EBED8
  c->r[27]=c->r[27]+0x00000001u; // 801EBEDC
L_801EBEE0:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 801EBEE0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801EBEE4
  if (crb(c,0)) { IRQCHK(c); goto L_801EBEA8; } // 801EBEE8
L_801EBEEC:;
  cmps(c,0,(int32_t)c->r[31],1); // 801EBEEC
  if (crb(c,2)) { goto L_801EBF00; } // 801EBEF0
  cmps(c,0,(int32_t)c->r[31],2); // 801EBEF4
  if (crb(c,2)) { goto L_801EBF64; } // 801EBEF8
  goto L_801EBFE0; // 801EBEFC
L_801EBF00:;
  c->r[26]=c->r[30]|c->r[30]; // 801EBF00
  c->r[28]=0u+0x00000000u; // 801EBF04
  goto L_801EBF54; // 801EBF08
L_801EBF0C:;
  c->r[31]=c->r[26]|c->r[26]; // 801EBF0C
  c->r[27]=0u+0x00000000u; // 801EBF10
  goto L_801EBF40; // 801EBF14
L_801EBF18:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801EBF18
  cmps(c,0,(int32_t)c->r[3],0); // 801EBF1C
  if (crb(c,2)) { goto L_801EBF38; } // 801EBF20
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EBF24
  cmps(c,0,(int32_t)c->r[3],0); // 801EBF28
  if (crb(c,2)) { goto L_801EBF38; } // 801EBF2C
  c->r[4]=0u+0x00000001u; // 801EBF30
  c->lr=0x801EBF38u; f_800EF5E0(c); // 801EBF34
L_801EBF38:;
  c->r[31]=c->r[31]+0x00000004u; // 801EBF38
  c->r[27]=c->r[27]+0x00000001u; // 801EBF3C
L_801EBF40:;
  c->r[0]=R32(c->r[30]+0x00000090u); // 801EBF40
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801EBF44
  if (crb(c,0)) { IRQCHK(c); goto L_801EBF18; } // 801EBF48
  c->r[26]=c->r[26]+0x00000010u; // 801EBF4C
  c->r[28]=c->r[28]+0x00000001u; // 801EBF50
L_801EBF54:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 801EBF54
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBF58
  if (crb(c,0)) { IRQCHK(c); goto L_801EBF0C; } // 801EBF5C
  goto L_801EBFE0; // 801EBF60
L_801EBF64:;
  c->r[31]=c->r[30]|c->r[30]; // 801EBF64
  c->r[28]=0u+0x00000000u; // 801EBF68
  goto L_801EBFD4; // 801EBF6C
L_801EBF70:;
  c->r[26]=c->r[31]|c->r[31]; // 801EBF70
  c->r[27]=0u+0x00000000u; // 801EBF74
  goto L_801EBFC0; // 801EBF78
L_801EBF7C:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 801EBF7C
  cmps(c,0,(int32_t)c->r[3],0); // 801EBF80
  if (crb(c,2)) { goto L_801EBFB8; } // 801EBF84
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EBF88
  c->r[4]=0u+0x00000000u; // 801EBF8C
  cmps(c,0,(int32_t)c->r[3],0); // 801EBF90
  if (crb(c,2)) { goto L_801EBFA8; } // 801EBF94
  c->r[0]=R16(c->r[3]+0x00000038u); // 801EBF98
  cmpu(c,0,c->r[0],0x00000001u); // 801EBF9C
  if (!crb(c,2)) { goto L_801EBFA8; } // 801EBFA0
  c->r[4]=0u+0x00000001u; // 801EBFA4
L_801EBFA8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EBFA8
  if (crb(c,2)) { goto L_801EBFB8; } // 801EBFAC
  c->r[4]=0u+0x00000000u; // 801EBFB0
  c->lr=0x801EBFB8u; f_800EF5E0(c); // 801EBFB4
L_801EBFB8:;
  c->r[26]=c->r[26]+0x00000004u; // 801EBFB8
  c->r[27]=c->r[27]+0x00000001u; // 801EBFBC
L_801EBFC0:;
  c->r[0]=R32(c->r[30]+0x00000090u); // 801EBFC0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801EBFC4
  if (crb(c,0)) { IRQCHK(c); goto L_801EBF7C; } // 801EBFC8
  c->r[31]=c->r[31]+0x00000010u; // 801EBFCC
  c->r[28]=c->r[28]+0x00000001u; // 801EBFD0
L_801EBFD4:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 801EBFD4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801EBFD8
  if (crb(c,0)) { IRQCHK(c); goto L_801EBF70; } // 801EBFDC
L_801EBFE0:;
  c->r[3]=c->r[29]|c->r[29]; // 801EBFE0
  c->lr=0x801EBFE8u; f_800CBAE0(c); // 801EBFE4
L_801EBFE8:;
  c->r[11]=c->r[1]+0x00000030u; // 801EBFE8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801EBFEC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801EBFF0
  c->lr=0x801EBFF8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBFF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EBFF8
  c->lr=c->r[0]; // 801EBFFC
  c->r[1]=c->r[1]+0x00000040u; // 801EC000
  return; // 801EC004
}

// fn_801EC010
void f_801EC010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC010
  c->r[0]=c->lr; // 801EC014
  W32(c->r[1]+0x00000074u,c->r[0]); // 801EC018
  c->r[11]=c->r[1]+0x00000070u; // 801EC01C
  c->lr=0x801EC024u; f_80217878(c); // 801EC020
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801EC024
  c->r[26]=0u+0x802D0000u; // 801EC028
  cmpu(c,0,c->r[0],0x00000001u); // 801EC02C
  c->r[15]=c->r[3]|c->r[3]; // 801EC030
  c->r[19]=c->r[4]|c->r[4]; // 801EC034
  c->r[18]=c->r[5]|c->r[5]; // 801EC038
  c->r[16]=c->r[6]|c->r[6]; // 801EC03C
  c->r[17]=c->r[7]|c->r[7]; // 801EC040
  c->r[14]=c->r[8]|c->r[8]; // 801EC044
  c->r[26]=c->r[26]+0x000022F8u; // 801EC048
  c->r[0]=0u+0x00000000u; // 801EC04C
  if (crb(c,1)) { goto L_801EC058; } // 801EC050
  c->r[0]=0u+0x00000001u; // 801EC054
L_801EC058:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EC058
  if (!crb(c,2)) { goto L_801EC080; } // 801EC05C
  c->r[6]=c->r[19]|c->r[19]; // 801EC060
  c->r[3]=c->r[26]+0x00000000u; // 801EC064
  c->r[5]=c->r[26]+0x00000010u; // 801EC068
  c->r[4]=0u+0x0000014Eu; // 801EC06C
  c->r[7]=0u+0x00000001u; // 801EC070
  c->r[8]=0u+0x00000002u; // 801EC074
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC078
  c->lr=0x801EC080u; f_801F9770(c); // 801EC07C
L_801EC080:;
  cmps(c,0,(int32_t)c->r[19],2); // 801EC080
  if (!crb(c,1)) { goto L_801EC090; } // 801EC084
  c->r[25]=0u+0x00000002u; // 801EC088
  goto L_801EC0A0; // 801EC08C
L_801EC090:;
  cmps(c,0,(int32_t)c->r[19],1); // 801EC090
  c->r[25]=0u+0x00000001u; // 801EC094
  if (crb(c,0)) { goto L_801EC0A0; } // 801EC098
  c->r[25]=c->r[19]|c->r[19]; // 801EC09C
L_801EC0A0:;
  c->r[0]=c->r[18]+0xFFFFFFFFu; // 801EC0A0
  c->r[3]=0u+0x00000000u; // 801EC0A4
  cmpu(c,0,c->r[0],0x00000003u); // 801EC0A8
  if (crb(c,1)) { goto L_801EC0B4; } // 801EC0AC
  c->r[3]=0u+0x00000001u; // 801EC0B0
L_801EC0B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801EC0B4
  if (!crb(c,2)) { goto L_801EC0DC; } // 801EC0B8
  c->r[6]=c->r[18]|c->r[18]; // 801EC0BC
  c->r[3]=c->r[26]+0x00000000u; // 801EC0C0
  c->r[5]=c->r[26]+0x0000005Cu; // 801EC0C4
  c->r[4]=0u+0x00000151u; // 801EC0C8
  c->r[7]=0u+0x00000001u; // 801EC0CC
  c->r[8]=0u+0x00000004u; // 801EC0D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC0D4
  c->lr=0x801EC0DCu; f_801F9770(c); // 801EC0D8
L_801EC0DC:;
  cmps(c,0,(int32_t)c->r[18],4); // 801EC0DC
  if (!crb(c,1)) { goto L_801EC0EC; } // 801EC0E0
  c->r[24]=0u+0x00000004u; // 801EC0E4
  goto L_801EC0FC; // 801EC0E8
L_801EC0EC:;
  cmps(c,0,(int32_t)c->r[18],1); // 801EC0EC
  c->r[24]=0u+0x00000001u; // 801EC0F0
  if (crb(c,0)) { goto L_801EC0FC; } // 801EC0F4
  c->r[24]=c->r[18]|c->r[18]; // 801EC0F8
L_801EC0FC:;
  c->lr=0x801EC100u; f_800CBAA0(c); // 801EC0FC
  cmps(c,0,(int32_t)c->r[16],255); // 801EC100
  c->r[31]=c->r[3]|c->r[3]; // 801EC104
  c->r[23]=0u+0x00000010u; // 801EC108
  if (!crb(c,2)) { goto L_801EC114; } // 801EC10C
  c->r[23]=0u+0x0000001Fu; // 801EC110
L_801EC114:;
  c->r[0]=R8(c->r[15]+0x0000009Cu); // 801EC114
  cmps(c,0,(int32_t)c->r[0],0); // 801EC118
  if (crb(c,2)) { goto L_801EC134; } // 801EC11C
  c->r[3]=c->r[26]+0x00000000u; // 801EC120
  c->r[5]=c->r[26]+0x000000A8u; // 801EC124
  c->r[4]=0u+0x00000158u; // 801EC128
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC12C
  c->lr=0x801EC134u; f_801F9770(c); // 801EC130
L_801EC134:;
  c->r[20]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[24]); // 801EC134
  c->r[22]=c->r[1]+0x00000008u; // 801EC138
  c->r[19]=0u+0x00000000u; // 801EC13C
  c->r[28]=0u+0x802D0000u; // 801EC140
  c->r[29]=0u+0x802D0000u; // 801EC144
  c->r[27]=0u+0x801F0000u; // 801EC148
  goto L_801EC2B8; // 801EC14C
L_801EC150:;
  c->lr=0x801EC154u; f_801D0E80(c); // 801EC150
  c->r[4]=c->r[23]|c->r[23]; // 801EC154
  c->r[6]=c->r[15]|c->r[15]; // 801EC158
  c->r[5]=c->r[27]+0xFFFFD480u; // 801EC15C
  c->lr=0x801EC164u; f_801D10B0(c); // 801EC160
  cmps(c,0,(int32_t)c->r[3],0); // 801EC164
  c->r[18]=c->r[3]|c->r[3]; // 801EC168
  if (!crb(c,2)) { goto L_801EC250; } // 801EC16C
  c->r[18]=c->r[20]-c->r[19]; // 801EC170
  c->lr=0x801EC178u; f_801EE4D0(c); // 801EC174
  c->r[30]=R32(c->r[3]+0x00000008u); // 801EC178
  c->r[21]=c->r[3]+0x00000008u; // 801EC17C
  goto L_801EC1E0; // 801EC180
L_801EC184:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EC184
  if (!crb(c,2)) { goto L_801EC1A0; } // 801EC188
  c->r[3]=c->r[28]+0x000026A0u; // 801EC18C
  c->r[5]=c->r[29]+0x0000267Cu; // 801EC190
  c->r[4]=0u+0x00000242u; // 801EC194
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC198
  c->lr=0x801EC1A0u; f_801F9770(c); // 801EC19C
L_801EC1A0:;
  c->r[0]=R32(c->r[30]+0xFFFFFFACu); // 801EC1A0
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 801EC1A4
  if (crb(c,0)) { goto L_801EC1E8; } // 801EC1A8
  cmps(c,0,(int32_t)c->r[30],0); // 801EC1AC
  if (!crb(c,2)) { goto L_801EC1C8; } // 801EC1B0
  c->r[3]=c->r[28]+0x000026A0u; // 801EC1B4
  c->r[5]=c->r[29]+0x0000267Cu; // 801EC1B8
  c->r[4]=0u+0x00000242u; // 801EC1BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC1C0
  c->lr=0x801EC1C8u; f_801F9770(c); // 801EC1C4
L_801EC1C8:;
  c->r[3]=R32(c->r[30]+0xFFFFFF90u); // 801EC1C8
  c->r[0]=R32(c->r[30]+0xFFFFFF94u); // 801EC1CC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801EC1D0
  c->r[18]=c->r[18]-c->r[0]; cr0(c,c->r[18]); // 801EC1D4
  if (!crb(c,1)) { goto L_801EC1E8; } // 801EC1D8
  c->r[30]=R32(c->r[30]+0x00000000u); // 801EC1DC
L_801EC1E0:;
  cmpu(c,0,c->r[30],c->r[21]); // 801EC1E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801EC184; } // 801EC1E4
L_801EC1E8:;
  cmps(c,0,(int32_t)c->r[18],0); // 801EC1E8
  if (!crb(c,1)) { goto L_801EC228; } // 801EC1EC
  c->r[14]=c->r[1]+0x00000008u; // 801EC1F0
  c->r[15]=0u+0x00000000u; // 801EC1F4
  goto L_801EC210; // 801EC1F8
L_801EC1FC:;
  c->lr=0x801EC200u; f_801D0E80(c); // 801EC1FC
  c->r[4]=R32(c->r[14]+0x00000000u); // 801EC200
  c->lr=0x801EC208u; f_801D1590(c); // 801EC204
  c->r[14]=c->r[14]+0x00000004u; // 801EC208
  c->r[15]=c->r[15]+0x00000001u; // 801EC20C
L_801EC210:;
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[19]); // 801EC210
  if (crb(c,0)) { IRQCHK(c); goto L_801EC1FC; } // 801EC214
  c->r[3]=c->r[31]|c->r[31]; // 801EC218
  c->lr=0x801EC220u; f_800CBAE0(c); // 801EC21C
  c->r[3]=0u+0x00000000u; // 801EC220
  goto L_801EC340; // 801EC224
L_801EC228:;
  cmpu(c,0,c->r[23],0x0000001Fu); // 801EC228
  c->r[18]=0u+0x00000011u; // 801EC22C
  if (!crb(c,2)) { goto L_801EC238; } // 801EC230
  c->r[18]=0u+0x0000001Fu; // 801EC234
L_801EC238:;
  c->lr=0x801EC23Cu; f_801D0E80(c); // 801EC238
  c->r[4]=c->r[18]|c->r[18]; // 801EC23C
  c->r[6]=c->r[15]|c->r[15]; // 801EC240
  c->r[5]=c->r[27]+0xFFFFD480u; // 801EC244
  c->lr=0x801EC24Cu; f_801D10B0(c); // 801EC248
  c->r[18]=c->r[3]|c->r[3]; // 801EC24C
L_801EC250:;
  cmps(c,0,(int32_t)c->r[18],0); // 801EC250
  if (!crb(c,2)) { goto L_801EC26C; } // 801EC254
  c->r[3]=c->r[26]+0x00000000u; // 801EC258
  c->r[5]=c->r[26]+0x000000D0u; // 801EC25C
  c->r[4]=0u+0x0000018Du; // 801EC260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC264
  c->lr=0x801EC26Cu; f_801F9770(c); // 801EC268
L_801EC26C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801EC26C
  if (!crb(c,2)) { goto L_801EC2AC; } // 801EC270
  c->r[14]=c->r[1]+0x00000008u; // 801EC274
  c->r[15]=0u+0x00000000u; // 801EC278
  goto L_801EC294; // 801EC27C
L_801EC280:;
  c->lr=0x801EC284u; f_801D0E80(c); // 801EC280
  c->r[4]=R32(c->r[14]+0x00000000u); // 801EC284
  c->lr=0x801EC28Cu; f_801D1590(c); // 801EC288
  c->r[14]=c->r[14]+0x00000004u; // 801EC28C
  c->r[15]=c->r[15]+0x00000001u; // 801EC290
L_801EC294:;
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[19]); // 801EC294
  if (crb(c,0)) { IRQCHK(c); goto L_801EC280; } // 801EC298
  c->r[3]=c->r[31]|c->r[31]; // 801EC29C
  c->lr=0x801EC2A4u; f_800CBAE0(c); // 801EC2A0
  c->r[3]=0u+0x00000000u; // 801EC2A4
  goto L_801EC340; // 801EC2A8
L_801EC2AC:;
  W32(c->r[22]+0x00000000u,c->r[18]); // 801EC2AC
  c->r[22]=c->r[22]+0x00000004u; // 801EC2B0
  c->r[19]=c->r[19]+0x00000001u; // 801EC2B4
L_801EC2B8:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[20]); // 801EC2B8
  if (crb(c,0)) { IRQCHK(c); goto L_801EC150; } // 801EC2BC
  c->r[18]=c->r[15]|c->r[15]; // 801EC2C0
  c->r[16]=c->r[1]+0x00000008u; // 801EC2C4
  c->r[20]=0u+0x00000000u; // 801EC2C8
  goto L_801EC30C; // 801EC2CC
L_801EC2D0:;
  c->r[19]=c->r[18]|c->r[18]; // 801EC2D0
  c->r[21]=0u+0x00000000u; // 801EC2D4
  goto L_801EC2FC; // 801EC2D8
L_801EC2DC:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 801EC2DC
  c->r[4]=c->r[23]|c->r[23]; // 801EC2E0
  c->lr=0x801EC2E8u; f_801CE9A0(c); // 801EC2E4
  c->r[0]=R32(c->r[16]+0x00000000u); // 801EC2E8
  c->r[21]=c->r[21]+0x00000001u; // 801EC2EC
  W32(c->r[19]+0x0000000Cu,c->r[0]); // 801EC2F0
  c->r[19]=c->r[19]+0x00000004u; // 801EC2F4
  c->r[16]=c->r[16]+0x00000004u; // 801EC2F8
L_801EC2FC:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[24]); // 801EC2FC
  if (crb(c,0)) { IRQCHK(c); goto L_801EC2DC; } // 801EC300
  c->r[18]=c->r[18]+0x00000010u; // 801EC304
  c->r[20]=c->r[20]+0x00000001u; // 801EC308
L_801EC30C:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[25]); // 801EC30C
  if (crb(c,0)) { IRQCHK(c); goto L_801EC2D0; } // 801EC310
  c->r[3]=c->r[15]|c->r[15]; // 801EC314
  c->r[4]=c->r[25]|c->r[25]; // 801EC318
  c->r[5]=c->r[24]|c->r[24]; // 801EC31C
  c->r[6]=c->r[17]|c->r[17]; // 801EC320
  c->r[7]=c->r[14]|c->r[14]; // 801EC324
  c->lr=0x801EC32Cu; f_801EB8D0(c); // 801EC328
  c->r[0]=0u+0x00000001u; // 801EC32C
  W8(c->r[15]+0x0000009Cu,c->r[0]); // 801EC330
  c->r[3]=c->r[31]|c->r[31]; // 801EC334
  c->lr=0x801EC33Cu; f_800CBAE0(c); // 801EC338
  c->r[3]=0u+0x00000001u; // 801EC33C
L_801EC340:;
  c->r[11]=c->r[1]+0x00000070u; // 801EC340
  c->lr=0x801EC348u; f_802178C4(c); // 801EC344
  c->r[0]=R32(c->r[1]+0x00000074u); // 801EC348
  c->lr=c->r[0]; // 801EC34C
  c->r[1]=c->r[1]+0x00000070u; // 801EC350
  return; // 801EC354
}

// Free__Q44nw4r3snd6detail5VoiceFv
void f_801EC360(Ctx* __restrict c) {
  trace_call(0x801EC360u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC360
  c->r[0]=c->lr; // 801EC364
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EC368
  c->r[11]=c->r[1]+0x00000030u; // 801EC36C
  c->lr=0x801EC374u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC370
  c->r[24]=c->r[3]|c->r[3]; // 801EC374
  c->lr=0x801EC37Cu; f_800CBAA0(c); // 801EC378
  c->r[0]=R8(c->r[24]+0x0000009Cu); // 801EC37C
  c->r[31]=c->r[3]|c->r[3]; // 801EC380
  cmps(c,0,(int32_t)c->r[0],0); // 801EC384
  if (!crb(c,2)) { goto L_801EC394; } // 801EC388
  c->lr=0x801EC390u; f_800CBAE0(c); // 801EC38C
  goto L_801EC414; // 801EC390
L_801EC394:;
  c->r[29]=c->r[24]|c->r[24]; // 801EC394
  c->r[27]=0u+0x00000000u; // 801EC398
  c->r[30]=0u+0x00000000u; // 801EC39C
  goto L_801EC3E8; // 801EC3A0
L_801EC3A4:;
  c->r[28]=c->r[29]|c->r[29]; // 801EC3A4
  c->r[26]=0u+0x00000000u; // 801EC3A8
  goto L_801EC3D4; // 801EC3AC
L_801EC3B0:;
  c->r[25]=R32(c->r[28]+0x0000000Cu); // 801EC3B0
  cmps(c,0,(int32_t)c->r[25],0); // 801EC3B4
  if (crb(c,2)) { goto L_801EC3CC; } // 801EC3B8
  c->lr=0x801EC3C0u; f_801D0E80(c); // 801EC3BC
  c->r[4]=c->r[25]|c->r[25]; // 801EC3C0
  c->lr=0x801EC3C8u; f_801D1590(c); // 801EC3C4
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 801EC3C8
L_801EC3CC:;
  c->r[28]=c->r[28]+0x00000004u; // 801EC3CC
  c->r[26]=c->r[26]+0x00000001u; // 801EC3D0
L_801EC3D4:;
  c->r[0]=R32(c->r[24]+0x00000090u); // 801EC3D4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801EC3D8
  if (crb(c,0)) { IRQCHK(c); goto L_801EC3B0; } // 801EC3DC
  c->r[29]=c->r[29]+0x00000010u; // 801EC3E0
  c->r[27]=c->r[27]+0x00000001u; // 801EC3E4
L_801EC3E8:;
  c->r[0]=R32(c->r[24]+0x0000008Cu); // 801EC3E8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801EC3EC
  if (crb(c,0)) { IRQCHK(c); goto L_801EC3A4; } // 801EC3F0
  c->r[30]=0u+0x00000000u; // 801EC3F4
  W32(c->r[24]+0x0000008Cu,c->r[30]); // 801EC3F8
  c->lr=0x801EC400u; f_801EE4D0(c); // 801EC3FC
  c->r[4]=c->r[24]|c->r[24]; // 801EC400
  c->lr=0x801EC408u; f_801EEB10(c); // 801EC404
  W8(c->r[24]+0x0000009Cu,c->r[30]); // 801EC408
  c->r[3]=c->r[31]|c->r[31]; // 801EC40C
  c->lr=0x801EC414u; f_800CBAE0(c); // 801EC410
L_801EC414:;
  c->r[11]=c->r[1]+0x00000030u; // 801EC414
  c->lr=0x801EC41Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC418
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EC41C
  c->lr=c->r[0]; // 801EC420
  c->r[1]=c->r[1]+0x00000030u; // 801EC424
  return; // 801EC428
}

// fn_801EC430
void f_801EC430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC430
  c->r[0]=c->lr; // 801EC434
  W32(c->r[1]+0x00000084u,c->r[0]); // 801EC438
  c->r[11]=c->r[1]+0x00000080u; // 801EC43C
  c->lr=0x801EC444u; f_80217878(c); // 801EC440
  c->r[22]=c->r[3]|c->r[3]; // 801EC444
  c->r[23]=c->r[4]|c->r[4]; // 801EC448
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 801EC44C
  c->r[24]=c->r[5]|c->r[5]; // 801EC450
  c->r[30]=c->r[22]|c->r[22]; // 801EC454
  c->r[29]=c->r[23]|c->r[23]; // 801EC458
  c->r[28]=c->r[4]+0x00000044u; // 801EC45C
  c->r[26]=0u+0x00000000u; // 801EC460
  c->r[31]=0u+0x802D0000u; // 801EC464
  c->r[14]=0u+0x802D0000u; // 801EC468
  goto L_801EC5D4; // 801EC46C
L_801EC470:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801EC470
  cmps(c,0,(int32_t)c->r[0],0); // 801EC474
  if (crb(c,2)) { goto L_801EC5C4; } // 801EC478
  c->r[0]=R32(c->r[29]+0x00000018u); // 801EC47C
  cmps(c,0,(int32_t)c->r[0],0); // 801EC480
  if (!crb(c,2)) { goto L_801EC49C; } // 801EC484
  c->r[3]=c->r[31]+0x000022F8u; // 801EC488
  c->r[5]=c->r[14]+0x000023F0u; // 801EC48C
  c->r[4]=0u+0x000001DBu; // 801EC490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC494
  c->lr=0x801EC49Cu; f_801F9770(c); // 801EC498
L_801EC49C:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 801EC49C
  c->r[25]=R32(c->r[29]+0x00000018u); // 801EC4A0
  cmps(c,0,(int32_t)c->r[0],3); // 801EC4A4
  if (!crb(c,2)) { goto L_801EC528; } // 801EC4A8
  c->r[15]=R32(c->r[29]+0x0000001Cu); // 801EC4AC
  c->r[6]=c->r[24]|c->r[24]; // 801EC4B0
  c->r[16]=R32(c->r[29]+0x00000020u); // 801EC4B4
  c->r[7]=c->r[25]|c->r[25]; // 801EC4B8
  c->r[17]=R32(c->r[29]+0x00000024u); // 801EC4BC
  c->r[3]=c->r[1]+0x0000002Au; // 801EC4C0
  c->r[18]=R32(c->r[29]+0x00000028u); // 801EC4C4
  c->r[4]=c->r[1]+0x0000002Cu; // 801EC4C8
  c->r[19]=R32(c->r[29]+0x0000002Cu); // 801EC4CC
  c->r[5]=c->r[1]+0x0000002Eu; // 801EC4D0
  c->r[20]=R32(c->r[29]+0x00000030u); // 801EC4D4
  c->r[8]=c->r[1]+0x00000008u; // 801EC4D8
  c->r[21]=R32(c->r[29]+0x00000034u); // 801EC4DC
  c->r[12]=R32(c->r[29]+0x00000038u); // 801EC4E0
  c->r[11]=R16(c->r[29]+0x0000003Cu); // 801EC4E4
  c->r[10]=R16(c->r[29]+0x0000003Eu); // 801EC4E8
  c->r[9]=R16(c->r[29]+0x00000040u); // 801EC4EC
  c->r[0]=R16(c->r[29]+0x00000042u); // 801EC4F0
  W32(c->r[1]+0x00000008u,c->r[15]); // 801EC4F4
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 801EC4F8
  W32(c->r[1]+0x00000010u,c->r[17]); // 801EC4FC
  W32(c->r[1]+0x00000014u,c->r[18]); // 801EC500
  W32(c->r[1]+0x00000018u,c->r[19]); // 801EC504
  W32(c->r[1]+0x0000001Cu,c->r[20]); // 801EC508
  W32(c->r[1]+0x00000020u,c->r[21]); // 801EC50C
  W32(c->r[1]+0x00000024u,c->r[12]); // 801EC510
  W16(c->r[1]+0x00000028u,c->r[11]); // 801EC514
  W16(c->r[1]+0x0000002Au,c->r[10]); // 801EC518
  W16(c->r[1]+0x0000002Cu,c->r[9]); // 801EC51C
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801EC520
  c->lr=0x801EC528u; f_801D0430(c); // 801EC524
L_801EC528:;
  c->r[15]=c->r[30]|c->r[30]; // 801EC528
  c->r[16]=0u+0x00000000u; // 801EC52C
  goto L_801EC5B8; // 801EC530
L_801EC534:;
  c->r[17]=R32(c->r[15]+0x0000000Cu); // 801EC534
  cmps(c,0,(int32_t)c->r[17],0); // 801EC538
  if (crb(c,2)) { goto L_801EC5B0; } // 801EC53C
  c->r[4]=R32(c->r[29]+0x00000018u); // 801EC540
  c->r[3]=c->r[17]|c->r[17]; // 801EC544
  c->r[5]=R32(c->r[23]+0x00000000u); // 801EC548
  c->r[6]=c->r[27]|c->r[27]; // 801EC54C
  c->lr=0x801EC554u; f_801CDE60(c); // 801EC550
  c->r[4]=R8(c->r[23]+0x00000004u); // 801EC554
  c->r[3]=c->r[17]|c->r[17]; // 801EC558
  c->r[7]=R32(c->r[23]+0x00000010u); // 801EC55C
  c->r[5]=c->r[25]|c->r[25]; // 801EC560
  c->r[8]=R32(c->r[23]+0x00000014u); // 801EC564
  c->r[6]=c->r[24]|c->r[24]; // 801EC568
  c->lr=0x801EC570u; f_801CEBD0(c); // 801EC56C
  c->r[0]=R32(c->r[23]+0x00000000u); // 801EC570
  cmps(c,0,(int32_t)c->r[0],3); // 801EC574
  if (!crb(c,2)) { goto L_801EC594; } // 801EC578
  c->r[3]=c->r[17]|c->r[17]; // 801EC57C
  c->r[4]=c->r[1]+0x00000008u; // 801EC580
  c->lr=0x801EC588u; f_801CF180(c); // 801EC584
  c->r[3]=c->r[17]|c->r[17]; // 801EC588
  c->r[4]=c->r[28]|c->r[28]; // 801EC58C
  c->lr=0x801EC594u; f_801CF440(c); // 801EC590
L_801EC594:;
  {uint32_t ea=c->r[22]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC594
  c->r[3]=c->r[17]|c->r[17]; // 801EC598
  c->r[4]=0u+0x00000005u; // 801EC59C
  c->lr=0x801EC5A4u; f_801CF0A0(c); // 801EC5A0
  c->r[3]=c->r[17]|c->r[17]; // 801EC5A4
  c->r[4]=0u+0x00000000u; // 801EC5A8
  c->lr=0x801EC5B0u; f_801CE9C0(c); // 801EC5AC
L_801EC5B0:;
  c->r[15]=c->r[15]+0x00000004u; // 801EC5B0
  c->r[16]=c->r[16]+0x00000001u; // 801EC5B4
L_801EC5B8:;
  c->r[0]=R32(c->r[22]+0x00000090u); // 801EC5B8
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 801EC5BC
  if (crb(c,0)) { IRQCHK(c); goto L_801EC534; } // 801EC5C0
L_801EC5C4:;
  c->r[30]=c->r[30]+0x00000010u; // 801EC5C4
  c->r[29]=c->r[29]+0x00000034u; // 801EC5C8
  c->r[28]=c->r[28]+0x00000034u; // 801EC5CC
  c->r[26]=c->r[26]+0x00000001u; // 801EC5D0
L_801EC5D4:;
  c->r[0]=R32(c->r[22]+0x0000008Cu); // 801EC5D4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801EC5D8
  if (crb(c,0)) { IRQCHK(c); goto L_801EC470; } // 801EC5DC
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC5E0
  c->r[3]=c->r[22]|c->r[22]; // 801EC5E4
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC5E8
  c->r[4]=0u+0x00000000u; // 801EC5EC
  goto L_801EC614; // 801EC5F0
L_801EC5F4:;
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801EC5F4
  c->r[4]=c->r[4]+0x00000001u; // 801EC5F8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801EC5FC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 801EC600
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801EC604
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801EC608
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801EC60C
  c->r[3]=c->r[3]+0x00000018u; // 801EC610
L_801EC614:;
  c->r[0]=R32(c->r[22]+0x00000090u); // 801EC614
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801EC618
  if (crb(c,0)) { IRQCHK(c); goto L_801EC5F4; } // 801EC61C
  c->r[0]=R16(c->r[22]+0x000000A2u); // 801EC620
  c->r[3]=0u+0x00000000u; // 801EC624
  W8(c->r[22]+0x0000009Fu,c->r[3]); // 801EC628
  c->r[11]=c->r[1]+0x00000080u; // 801EC62C
  c->r[0]=c->r[0]|0x00000038u; // 801EC630
  W8(c->r[22]+0x000000A0u,c->r[3]); // 801EC634
  W8(c->r[22]+0x0000009Du,c->r[3]); // 801EC638
  W8(c->r[22]+0x0000009Eu,c->r[3]); // 801EC63C
  W16(c->r[22]+0x000000A2u,c->r[0]); // 801EC640
  c->lr=0x801EC648u; f_802178C4(c); // 801EC644
  c->r[0]=R32(c->r[1]+0x00000084u); // 801EC648
  c->lr=c->r[0]; // 801EC64C
  c->r[1]=c->r[1]+0x00000080u; // 801EC650
  return; // 801EC654
}

// fn_801EC660
void f_801EC660(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC660
  c->r[5]=0u+0x00000001u; // 801EC664
  c->r[4]=0u+0x00000000u; // 801EC668
  W8(c->r[3]+0x0000009Du,c->r[5]); // 801EC66C
  c->r[0]=c->r[0]|0x00000001u; // 801EC670
  W8(c->r[3]+0x0000009Fu,c->r[4]); // 801EC674
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC678
  return; // 801EC67C
}

// fn_801EC680
void f_801EC680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC680
  c->r[0]=c->lr; // 801EC684
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC688
  c->r[11]=c->r[1]+0x00000020u; // 801EC68C
  c->lr=0x801EC694u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC690
  c->r[0]=R8(c->r[3]+0x0000009Eu); // 801EC694
  c->r[27]=c->r[3]|c->r[3]; // 801EC698
  cmps(c,0,(int32_t)c->r[0],0); // 801EC69C
  if (crb(c,2)) { goto L_801EC728; } // 801EC6A0
  c->r[29]=c->r[27]|c->r[27]; // 801EC6A4
  c->r[30]=0u+0x00000000u; // 801EC6A8
  goto L_801EC714; // 801EC6AC
L_801EC6B0:;
  c->r[28]=c->r[29]|c->r[29]; // 801EC6B0
  c->r[31]=0u+0x00000000u; // 801EC6B4
  goto L_801EC700; // 801EC6B8
L_801EC6BC:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801EC6BC
  cmps(c,0,(int32_t)c->r[3],0); // 801EC6C0
  if (crb(c,2)) { goto L_801EC6F8; } // 801EC6C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EC6C8
  c->r[4]=0u+0x00000000u; // 801EC6CC
  cmps(c,0,(int32_t)c->r[3],0); // 801EC6D0
  if (crb(c,2)) { goto L_801EC6E8; } // 801EC6D4
  c->r[0]=R16(c->r[3]+0x00000038u); // 801EC6D8
  cmpu(c,0,c->r[0],0x00000001u); // 801EC6DC
  if (!crb(c,2)) { goto L_801EC6E8; } // 801EC6E0
  c->r[4]=0u+0x00000001u; // 801EC6E4
L_801EC6E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EC6E8
  if (crb(c,2)) { goto L_801EC6F8; } // 801EC6EC
  c->r[4]=0u+0x00000000u; // 801EC6F0
  c->lr=0x801EC6F8u; f_800EF5E0(c); // 801EC6F4
L_801EC6F8:;
  c->r[28]=c->r[28]+0x00000004u; // 801EC6F8
  c->r[31]=c->r[31]+0x00000001u; // 801EC6FC
L_801EC700:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801EC700
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801EC704
  if (crb(c,0)) { IRQCHK(c); goto L_801EC6BC; } // 801EC708
  c->r[29]=c->r[29]+0x00000010u; // 801EC70C
  c->r[30]=c->r[30]+0x00000001u; // 801EC710
L_801EC714:;
  c->r[0]=R32(c->r[27]+0x0000008Cu); // 801EC714
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801EC718
  if (crb(c,0)) { IRQCHK(c); goto L_801EC6B0; } // 801EC71C
  c->r[0]=0u+0x00000000u; // 801EC720
  W8(c->r[27]+0x0000009Eu,c->r[0]); // 801EC724
L_801EC728:;
  c->r[0]=0u+0x00000000u; // 801EC728
  W8(c->r[27]+0x000000A0u,c->r[0]); // 801EC72C
  c->r[11]=c->r[1]+0x00000020u; // 801EC730
  W8(c->r[27]+0x0000009Fu,c->r[0]); // 801EC734
  W8(c->r[27]+0x0000009Du,c->r[0]); // 801EC738
  c->lr=0x801EC740u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC73C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC740
  c->lr=c->r[0]; // 801EC744
  c->r[1]=c->r[1]+0x00000020u; // 801EC748
  return; // 801EC74C
}

// fn_801EC750
void f_801EC750(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000009Fu); // 801EC750
  cmpu(c,0,c->r[0],c->r[4]); // 801EC754
  if (crb(c,2)) return; // 801EC758
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC75C
  W8(c->r[3]+0x0000009Fu,c->r[4]); // 801EC760
  c->r[0]=c->r[0]|0x00000002u; // 801EC764
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC768
  return; // 801EC76C
}

// fn_801EC770
void f_801EC770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC770
  c->r[0]=c->lr; // 801EC774
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC778
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801EC77C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC780
  c->r[31]=c->r[3]|c->r[3]; // 801EC784
  cmps(c,0,(int32_t)c->r[0],0); // 801EC788
  if (!crb(c,2)) { goto L_801EC7AC; } // 801EC78C
  c->r[3]=0u+0x802D0000u; // 801EC790
  c->r[5]=0u+0x802D0000u; // 801EC794
  c->r[3]=c->r[3]+0x000022F8u; // 801EC798
  c->r[4]=0u+0x00000245u; // 801EC79C
  c->r[5]=c->r[5]+0x00002440u; // 801EC7A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC7A4
  c->lr=0x801EC7ACu; f_801F9770(c); // 801EC7A8
L_801EC7AC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801EC7AC
  cmps(c,0,(int32_t)c->r[3],0); // 801EC7B0
  if (crb(c,2)) { goto L_801EC7C0; } // 801EC7B4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801EC7B8
  goto L_801EC7C4; // 801EC7BC
L_801EC7C0:;
  c->r[3]=0u+0x00000001u; // 801EC7C0
L_801EC7C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC7C8
  c->lr=c->r[0]; // 801EC7CC
  c->r[1]=c->r[1]+0x00000010u; // 801EC7D0
  return; // 801EC7D4
}

// fn_801EC7E0
void f_801EC7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC7E0
  fcmp(c,0,c->f[1],c->f[0]); // 801EC7E4
  if (!crb(c,0)) { goto L_801EC7F0; } // 801EC7E8
  c->f[1]=c->f[0]; // 801EC7EC
L_801EC7F0:;
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC7F0
  fcmp(c,0,c->f[1],c->f[0]); // 801EC7F4
  if (crb(c,2)) return; // 801EC7F8
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC7FC
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 801EC800
  c->r[0]=c->r[0]|0x00000008u; // 801EC804
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC808
  return; // 801EC80C
}

// fn_801EC810
void f_801EC810(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC810
  fcmp(c,0,c->f[1],c->f[0]); // 801EC814
  if (!crb(c,0)) { goto L_801EC820; } // 801EC818
  c->f[1]=c->f[0]; // 801EC81C
L_801EC820:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC820
  fcmp(c,0,c->f[2],c->f[0]); // 801EC824
  if (!crb(c,0)) { goto L_801EC830; } // 801EC828
  c->f[2]=c->f[0]; // 801EC82C
L_801EC830:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC830
  fcmp(c,0,c->f[2],c->f[0]); // 801EC834
  if (!crb(c,0)) { goto L_801EC85C; } // 801EC838
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC83C
  fcmp(c,0,c->f[1],c->f[0]); // 801EC840
  if (crb(c,2)) return; // 801EC844
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC848
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 801EC84C
  c->r[0]=c->r[0]|0x00000008u; // 801EC850
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC854
  return; // 801EC858
L_801EC85C:;
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC85C
  fcmp(c,0,c->f[2],c->f[0]); // 801EC860
  if (!crb(c,2)) { goto L_801EC874; } // 801EC864
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC868
  fcmp(c,0,c->f[1],c->f[0]); // 801EC86C
  if (crb(c,2)) return; // 801EC870
L_801EC874:;
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC874
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[2]);} // 801EC878
  c->r[0]=c->r[0]|0x00000008u; // 801EC87C
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 801EC880
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC884
  return; // 801EC888
}

// fn_801EC890
void f_801EC890(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC890
  fcmp(c,0,c->f[1],c->f[0]); // 801EC894
  if (crb(c,2)) return; // 801EC898
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC89C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 801EC8A0
  c->r[0]=c->r[0]|0x00000004u; // 801EC8A4
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC8A8
  return; // 801EC8AC
}

// fn_801EC8B0
void f_801EC8B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000F4u); // 801EC8B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801EC8B4
  if (crb(c,2)) return; // 801EC8B8
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC8BC
  W32(c->r[3]+0x000000F4u,c->r[4]); // 801EC8C0
  c->r[0]=c->r[0]|0x00000010u; // 801EC8C4
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC8C8
  return; // 801EC8CC
}

// fn_801EC8D0
void f_801EC8D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801EC8D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801EC8D4
  if (crb(c,2)) return; // 801EC8D8
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC8DC
  W32(c->r[3]+0x000000F8u,c->r[4]); // 801EC8E0
  c->r[0]=c->r[0]|0x00000010u; // 801EC8E4
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC8E8
  return; // 801EC8EC
}

// fn_801EC8F0
void f_801EC8F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC8F0
  fcmp(c,0,c->f[1],c->f[0]); // 801EC8F4
  if (crb(c,2)) return; // 801EC8F8
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC8FC
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 801EC900
  c->r[0]=c->r[0]|0x00000010u; // 801EC904
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC908
  return; // 801EC90C
}

// fn_801EC910
void f_801EC910(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC910
  fcmp(c,0,c->f[1],c->f[0]); // 801EC914
  if (crb(c,2)) return; // 801EC918
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC91C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[1]);} // 801EC920
  c->r[0]=c->r[0]|0x00000010u; // 801EC924
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC928
  return; // 801EC92C
}

// fn_801EC930
void f_801EC930(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC930
  fcmp(c,0,c->f[1],c->f[0]); // 801EC934
  if (crb(c,2)) return; // 801EC938
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801EC93C
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 801EC940
  c->r[0]=c->r[0]|0x00000020u; // 801EC944
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801EC948
  return; // 801EC94C
}

// fn_801EC950
void f_801EC950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC950
  c->r[0]=c->lr; // 801EC954
  cmpu(c,0,c->r[4],0x0000007Fu); // 801EC958
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC95C
  c->r[0]=0u+0x00000000u; // 801EC960
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EC964
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801EC968
  c->f[31]=c->f[1]; // 801EC96C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC970
  c->r[31]=c->r[4]|c->r[4]; // 801EC974
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EC978
  c->r[30]=c->r[3]|c->r[3]; // 801EC97C
  if (crb(c,1)) { goto L_801EC988; } // 801EC980
  c->r[0]=0u+0x00000001u; // 801EC984
L_801EC988:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EC988
  if (!crb(c,2)) { goto L_801EC9B8; } // 801EC98C
  c->r[3]=0u+0x802D0000u; // 801EC990
  c->r[5]=0u+0x802D0000u; // 801EC994
  c->r[6]=c->r[31]|c->r[31]; // 801EC998
  c->r[4]=0u+0x000002A6u; // 801EC99C
  c->r[3]=c->r[3]+0x000022F8u; // 801EC9A0
  c->r[5]=c->r[5]+0x00002464u; // 801EC9A4
  c->r[7]=0u+0x00000000u; // 801EC9A8
  c->r[8]=0u+0x0000007Fu; // 801EC9AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EC9B0
  c->lr=0x801EC9B8u; f_801F9770(c); // 801EC9B4
L_801EC9B8:;
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC9B8
  fcmp(c,0,c->f[31],c->f[1]); // 801EC9BC
  if (!crb(c,1)) { goto L_801EC9C8; } // 801EC9C0
  goto L_801EC9DC; // 801EC9C4
L_801EC9C8:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC9C8
  fcmp(c,0,c->f[31],c->f[1]); // 801EC9CC
  if (!crb(c,0)) { goto L_801EC9D8; } // 801EC9D0
  goto L_801EC9DC; // 801EC9D4
L_801EC9D8:;
  c->f[1]=c->f[31]; // 801EC9D8
L_801EC9DC:;
  c->r[0]=R8(c->r[30]+0x000000A5u); // 801EC9DC
  c->r[3]=0u+0x00000000u; // 801EC9E0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801EC9E4
  if (crb(c,2)) { goto L_801EC9F4; } // 801EC9E8
  W8(c->r[30]+0x000000A5u,c->r[31]); // 801EC9EC
  c->r[3]=0u+0x00000001u; // 801EC9F0
L_801EC9F4:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC9F4
  fcmp(c,0,c->f[1],c->f[0]); // 801EC9F8
  if (crb(c,2)) { goto L_801ECA08; } // 801EC9FC
  {uint32_t ea=c->r[30]+0x000000B8u; WF32(ea,c->f[1]);} // 801ECA00
  c->r[3]=0u+0x00000001u; // 801ECA04
L_801ECA08:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ECA08
  if (crb(c,2)) { goto L_801ECA1C; } // 801ECA0C
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801ECA10
  c->r[0]=c->r[0]|0x00000100u; // 801ECA14
  W16(c->r[30]+0x000000A2u,c->r[0]); // 801ECA18
L_801ECA1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECA1C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801ECA20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801ECA24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECA28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECA2C
  c->lr=c->r[0]; // 801ECA30
  c->r[1]=c->r[1]+0x00000020u; // 801ECA34
  return; // 801ECA38
}

// fn_801ECA40
void f_801ECA40(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],127); // 801ECA40
  if (!crb(c,1)) { goto L_801ECA50; } // 801ECA44
  c->r[4]=0u+0x0000007Fu; // 801ECA48
  goto L_801ECA58; // 801ECA4C
L_801ECA50:;
  c->r[0]=sraw(c,c->r[4],31); // 801ECA50
  c->r[4]=c->r[4]&~c->r[0]; // 801ECA54
L_801ECA58:;
  c->r[0]=R8(c->r[3]+0x000000A4u); // 801ECA58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801ECA5C
  if (crb(c,2)) return; // 801ECA60
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801ECA64
  W8(c->r[3]+0x000000A4u,c->r[4]); // 801ECA68
  c->r[0]=c->r[0]|0x00000080u; // 801ECA6C
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801ECA70
  return; // 801ECA74
}

// fn_801ECA80
void f_801ECA80(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801ECA80
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801ECA84
  if (crb(c,2)) return; // 801ECA88
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801ECA8C
  W32(c->r[3]+0x000000BCu,c->r[4]); // 801ECA90
  c->r[0]=c->r[0]|0x00000010u; // 801ECA94
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801ECA98
  return; // 801ECA9C
}

// fn_801ECAA0
void f_801ECAA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECAA0
  fcmp(c,0,c->f[1],c->f[0]); // 801ECAA4
  if (!crb(c,0)) { goto L_801ECAB0; } // 801ECAA8
  c->f[1]=c->f[0]; // 801ECAAC
L_801ECAB0:;
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECAB0
  fcmp(c,0,c->f[1],c->f[0]); // 801ECAB4
  if (crb(c,2)) return; // 801ECAB8
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801ECABC
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 801ECAC0
  c->r[0]=c->r[0]|0x00000010u; // 801ECAC4
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801ECAC8
  return; // 801ECACC
}

// fn_801ECAD0
void f_801ECAD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECAD0
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECAD4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801ECAD8
  fcmp(c,0,c->f[1],c->f[0]); // 801ECADC
  if (!crb(c,0)) { goto L_801ECAE8; } // 801ECAE0
  c->f[1]=c->f[0]; // 801ECAE4
L_801ECAE8:;
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECAE8
  fcmp(c,0,c->f[1],c->f[0]); // 801ECAEC
  if (crb(c,2)) return; // 801ECAF0
  c->r[0]=R16(c->r[3]+0x000000A2u); // 801ECAF4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 801ECAF8
  c->r[0]=c->r[0]|0x00000010u; // 801ECAFC
  W16(c->r[3]+0x000000A2u,c->r[0]); // 801ECB00
  return; // 801ECB04
}

// fn_801ECB10
void f_801ECB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECB10
  c->r[0]=c->lr; // 801ECB14
  cmpu(c,0,c->r[4],0x00000002u); // 801ECB18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECB1C
  c->r[0]=0u+0x00000000u; // 801ECB20
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801ECB24
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801ECB28
  c->f[31]=c->f[1]; // 801ECB2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECB30
  c->r[31]=c->r[4]|c->r[4]; // 801ECB34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ECB38
  c->r[30]=c->r[3]|c->r[3]; // 801ECB3C
  if (crb(c,1)) { goto L_801ECB48; } // 801ECB40
  c->r[0]=0u+0x00000001u; // 801ECB44
L_801ECB48:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ECB48
  if (!crb(c,2)) { goto L_801ECB78; } // 801ECB4C
  c->r[3]=0u+0x802D0000u; // 801ECB50
  c->r[5]=0u+0x802D0000u; // 801ECB54
  c->r[6]=c->r[31]|c->r[31]; // 801ECB58
  c->r[4]=0u+0x000002EAu; // 801ECB5C
  c->r[3]=c->r[3]+0x000022F8u; // 801ECB60
  c->r[5]=c->r[5]+0x000024A0u; // 801ECB64
  c->r[7]=0u+0x00000000u; // 801ECB68
  c->r[8]=0u+0x00000003u; // 801ECB6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ECB70
  c->lr=0x801ECB78u; f_801F9770(c); // 801ECB74
L_801ECB78:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECB78
  fcmp(c,0,c->f[31],c->f[0]); // 801ECB7C
  if (!crb(c,0)) { goto L_801ECB88; } // 801ECB80
  c->f[31]=c->f[0]; // 801ECB84
L_801ECB88:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801ECB88
  c->r[3]=c->r[30]+c->r[0]; // 801ECB8C
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECB90
  fcmp(c,0,c->f[31],c->f[0]); // 801ECB94
  if (crb(c,2)) { goto L_801ECBAC; } // 801ECB98
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[31]);} // 801ECB9C
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801ECBA0
  c->r[0]=c->r[0]|0x00000010u; // 801ECBA4
  W16(c->r[30]+0x000000A2u,c->r[0]); // 801ECBA8
L_801ECBAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECBAC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801ECBB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801ECBB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECBB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECBBC
  c->lr=c->r[0]; // 801ECBC0
  c->r[1]=c->r[1]+0x00000020u; // 801ECBC4
  return; // 801ECBC8
}

// fn_801ECBD0
void f_801ECBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECBD0
  c->r[0]=c->lr; // 801ECBD4
  cmpu(c,0,c->r[4],0x00000003u); // 801ECBD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECBDC
  c->r[0]=0u+0x00000000u; // 801ECBE0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801ECBE4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801ECBE8
  c->f[31]=c->f[1]; // 801ECBEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECBF0
  c->r[31]=c->r[4]|c->r[4]; // 801ECBF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ECBF8
  c->r[30]=c->r[3]|c->r[3]; // 801ECBFC
  if (crb(c,1)) { goto L_801ECC08; } // 801ECC00
  c->r[0]=0u+0x00000001u; // 801ECC04
L_801ECC08:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ECC08
  if (!crb(c,2)) { goto L_801ECC38; } // 801ECC0C
  c->r[3]=0u+0x802D0000u; // 801ECC10
  c->r[5]=0u+0x802D0000u; // 801ECC14
  c->r[6]=c->r[31]|c->r[31]; // 801ECC18
  c->r[4]=0u+0x000002F7u; // 801ECC1C
  c->r[3]=c->r[3]+0x000022F8u; // 801ECC20
  c->r[5]=c->r[5]+0x000024D8u; // 801ECC24
  c->r[7]=0u+0x00000000u; // 801ECC28
  c->r[8]=0u+0x00000004u; // 801ECC2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ECC30
  c->lr=0x801ECC38u; f_801F9770(c); // 801ECC34
L_801ECC38:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECC38
  fcmp(c,0,c->f[31],c->f[0]); // 801ECC3C
  if (!crb(c,0)) { goto L_801ECC48; } // 801ECC40
  c->f[31]=c->f[0]; // 801ECC44
L_801ECC48:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801ECC48
  c->r[3]=c->r[30]+c->r[0]; // 801ECC4C
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECC50
  fcmp(c,0,c->f[31],c->f[0]); // 801ECC54
  if (crb(c,2)) { goto L_801ECC6C; } // 801ECC58
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[31]);} // 801ECC5C
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801ECC60
  c->r[0]=c->r[0]|0x00000010u; // 801ECC64
  W16(c->r[30]+0x000000A2u,c->r[0]); // 801ECC68
L_801ECC6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECC6C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801ECC70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801ECC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECC78
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECC7C
  c->lr=c->r[0]; // 801ECC80
  c->r[1]=c->r[1]+0x00000020u; // 801ECC84
  return; // 801ECC88
}

// fn_801ECC90
void f_801ECC90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECC90
  c->r[0]=c->lr; // 801ECC94
  cmpu(c,0,c->r[4],0x00000004u); // 801ECC98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECC9C
  c->r[0]=0u+0x00000000u; // 801ECCA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ECCA4
  c->r[31]=c->r[5]|c->r[5]; // 801ECCA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ECCAC
  c->r[30]=c->r[4]|c->r[4]; // 801ECCB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ECCB4
  c->r[29]=c->r[3]|c->r[3]; // 801ECCB8
  if (crb(c,1)) { goto L_801ECCC4; } // 801ECCBC
  c->r[0]=0u+0x00000001u; // 801ECCC0
L_801ECCC4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ECCC4
  if (!crb(c,2)) { goto L_801ECCF4; } // 801ECCC8
  c->r[3]=0u+0x802D0000u; // 801ECCCC
  c->r[5]=0u+0x802D0000u; // 801ECCD0
  c->r[6]=c->r[30]|c->r[30]; // 801ECCD4
  c->r[4]=0u+0x0000030Bu; // 801ECCD8
  c->r[3]=c->r[3]+0x000022F8u; // 801ECCDC
  c->r[5]=c->r[5]+0x00002520u; // 801ECCE0
  c->r[7]=0u+0x00000000u; // 801ECCE4
  c->r[8]=0u+0x00000004u; // 801ECCE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ECCEC
  c->lr=0x801ECCF4u; f_801F9770(c); // 801ECCF0
L_801ECCF4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 801ECCF4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECCF8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECCFC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ECD00
  c->r[3]=c->r[29]+c->r[0]; // 801ECD04
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECD08
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801ECD0C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECD10
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801ECD14
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECD18
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[3]);} // 801ECD1C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 801ECD20
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801ECD24
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801ECD28
  c->r[0]=R16(c->r[29]+0x000000A2u); // 801ECD2C
  c->r[0]=c->r[0]|0x0000003Cu; // 801ECD30
  W16(c->r[29]+0x000000A2u,c->r[0]); // 801ECD34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ECD38
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ECD3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ECD40
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECD44
  c->lr=c->r[0]; // 801ECD48
  c->r[1]=c->r[1]+0x00000020u; // 801ECD4C
  return; // 801ECD50
}

// fn_801ECD60
void f_801ECD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECD60
  c->r[0]=c->lr; // 801ECD64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECD68
  c->r[11]=c->r[1]+0x00000020u; // 801ECD6C
  c->lr=0x801ECD74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ECD70
  cmpu(c,0,c->r[4],0x000000FFu); // 801ECD74
  c->r[27]=c->r[3]|c->r[3]; // 801ECD78
  c->r[28]=c->r[4]|c->r[4]; // 801ECD7C
  c->r[0]=0u+0x00000000u; // 801ECD80
  if (crb(c,1)) { goto L_801ECD8C; } // 801ECD84
  c->r[0]=0u+0x00000001u; // 801ECD88
L_801ECD8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ECD8C
  if (!crb(c,2)) { goto L_801ECDBC; } // 801ECD90
  c->r[3]=0u+0x802D0000u; // 801ECD94
  c->r[5]=0u+0x802D0000u; // 801ECD98
  c->r[6]=c->r[28]|c->r[28]; // 801ECD9C
  c->r[4]=0u+0x00000313u; // 801ECDA0
  c->r[3]=c->r[3]+0x000022F8u; // 801ECDA4
  c->r[5]=c->r[5]+0x0000256Cu; // 801ECDA8
  c->r[7]=0u+0x00000000u; // 801ECDAC
  c->r[8]=0u+0x000000FFu; // 801ECDB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ECDB4
  c->lr=0x801ECDBCu; f_801F9770(c); // 801ECDB8
L_801ECDBC:;
  W32(c->r[27]+0x000000A8u,c->r[28]); // 801ECDBC
  c->lr=0x801ECDC4u; f_801EE4D0(c); // 801ECDC0
  c->r[4]=c->r[27]|c->r[27]; // 801ECDC4
  c->lr=0x801ECDCCu; f_801EEDB0(c); // 801ECDC8
  c->r[0]=R32(c->r[27]+0x000000A8u); // 801ECDCC
  cmps(c,0,(int32_t)c->r[0],1); // 801ECDD0
  if (!crb(c,2)) { goto L_801ECE2C; } // 801ECDD4
  c->r[31]=c->r[27]|c->r[27]; // 801ECDD8
  c->r[29]=0u+0x00000000u; // 801ECDDC
  goto L_801ECE20; // 801ECDE0
L_801ECDE4:;
  c->r[30]=c->r[31]|c->r[31]; // 801ECDE4
  c->r[28]=0u+0x00000000u; // 801ECDE8
  goto L_801ECE0C; // 801ECDEC
L_801ECDF0:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801ECDF0
  cmps(c,0,(int32_t)c->r[3],0); // 801ECDF4
  if (crb(c,2)) { goto L_801ECE04; } // 801ECDF8
  c->r[4]=0u+0x0000000Fu; // 801ECDFC
  c->lr=0x801ECE04u; f_801CE9A0(c); // 801ECE00
L_801ECE04:;
  c->r[30]=c->r[30]+0x00000004u; // 801ECE04
  c->r[28]=c->r[28]+0x00000001u; // 801ECE08
L_801ECE0C:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801ECE0C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ECE10
  if (crb(c,0)) { IRQCHK(c); goto L_801ECDF0; } // 801ECE14
  c->r[31]=c->r[31]+0x00000010u; // 801ECE18
  c->r[29]=c->r[29]+0x00000001u; // 801ECE1C
L_801ECE20:;
  c->r[0]=R32(c->r[27]+0x0000008Cu); // 801ECE20
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801ECE24
  if (crb(c,0)) { IRQCHK(c); goto L_801ECDE4; } // 801ECE28
L_801ECE2C:;
  c->r[11]=c->r[1]+0x00000020u; // 801ECE2C
  c->lr=0x801ECE34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ECE30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECE34
  c->lr=c->r[0]; // 801ECE38
  c->r[1]=c->r[1]+0x00000020u; // 801ECE3C
  return; // 801ECE40
}

// UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv
void f_801ECE50(Ctx* __restrict c) {
  trace_call(0x801ECE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECE50
  c->r[0]=c->lr; // 801ECE54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECE58
  c->r[11]=c->r[1]+0x00000020u; // 801ECE5C
  c->lr=0x801ECE64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ECE60
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801ECE64
  c->r[27]=c->r[3]|c->r[3]; // 801ECE68
  cmps(c,0,(int32_t)c->r[0],1); // 801ECE6C
  if (crb(c,2)) { goto L_801ECEC8; } // 801ECE70
  c->r[31]=c->r[27]|c->r[27]; // 801ECE74
  c->r[29]=0u+0x00000000u; // 801ECE78
  goto L_801ECEBC; // 801ECE7C
L_801ECE80:;
  c->r[30]=c->r[31]|c->r[31]; // 801ECE80
  c->r[28]=0u+0x00000000u; // 801ECE84
  goto L_801ECEA8; // 801ECE88
L_801ECE8C:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801ECE8C
  cmps(c,0,(int32_t)c->r[3],0); // 801ECE90
  if (crb(c,2)) { goto L_801ECEA0; } // 801ECE94
  c->r[4]=0u+0x00000010u; // 801ECE98
  c->lr=0x801ECEA0u; f_801CE9A0(c); // 801ECE9C
L_801ECEA0:;
  c->r[30]=c->r[30]+0x00000004u; // 801ECEA0
  c->r[28]=c->r[28]+0x00000001u; // 801ECEA4
L_801ECEA8:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801ECEA8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ECEAC
  if (crb(c,0)) { IRQCHK(c); goto L_801ECE8C; } // 801ECEB0
  c->r[31]=c->r[31]+0x00000010u; // 801ECEB4
  c->r[29]=c->r[29]+0x00000001u; // 801ECEB8
L_801ECEBC:;
  c->r[0]=R32(c->r[27]+0x0000008Cu); // 801ECEBC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801ECEC0
  if (crb(c,0)) { IRQCHK(c); goto L_801ECE80; } // 801ECEC4
L_801ECEC8:;
  c->r[11]=c->r[1]+0x00000020u; // 801ECEC8
  c->lr=0x801ECED0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ECECC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECED0
  c->lr=c->r[0]; // 801ECED4
  c->r[1]=c->r[1]+0x00000020u; // 801ECED8
  return; // 801ECEDC
}

// SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam
void f_801ECEE0(Ctx* __restrict c) {
  trace_call(0x801ECEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECEE0
  c->r[0]=c->lr; // 801ECEE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECEE8
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801ECEEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ECEF0
  c->r[31]=c->r[3]+c->r[0]; // 801ECEF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ECEF8
  c->r[30]=0u+0x00000000u; // 801ECEFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ECF00
  c->r[29]=c->r[5]|c->r[5]; // 801ECF04
  W32(c->r[1]+0x00000010u,c->r[28]); // 801ECF08
  c->r[28]=c->r[3]|c->r[3]; // 801ECF0C
  goto L_801ECF30; // 801ECF10
L_801ECF14:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801ECF14
  cmps(c,0,(int32_t)c->r[3],0); // 801ECF18
  if (crb(c,2)) { goto L_801ECF28; } // 801ECF1C
  c->r[4]=c->r[29]|c->r[29]; // 801ECF20
  c->lr=0x801ECF28u; f_801CF440(c); // 801ECF24
L_801ECF28:;
  c->r[31]=c->r[31]+0x00000004u; // 801ECF28
  c->r[30]=c->r[30]+0x00000001u; // 801ECF2C
L_801ECF30:;
  c->r[0]=R32(c->r[28]+0x00000090u); // 801ECF30
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801ECF34
  if (crb(c,0)) { IRQCHK(c); goto L_801ECF14; } // 801ECF38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECF3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ECF40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ECF44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ECF48
  c->r[28]=R32(c->r[1]+0x00000010u); // 801ECF4C
  c->lr=c->r[0]; // 801ECF50
  c->r[1]=c->r[1]+0x00000020u; // 801ECF54
  return; // 801ECF58
}

// GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv
void f_801ECF60(Ctx* __restrict c) {
  trace_call(0x801ECF60u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801ECF60
  cmps(c,0,(int32_t)c->r[3],0); // 801ECF64
  if (crb(c,2)) { goto L_801ECF70; } // 801ECF68
  f_801CE680(c); return; // 801ECF6C
L_801ECF70:;
  c->r[3]=0u+0x00000000u; // 801ECF70
  return; // 801ECF74
}

// SetLoopStart__Q44nw4r3snd6detail5VoiceFiPCvUl
void f_801ECF80(Ctx* __restrict c) {
  trace_call(0x801ECF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECF80
  c->r[0]=c->lr; // 801ECF84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECF88
  c->r[11]=c->r[1]+0x00000020u; // 801ECF8C
  c->lr=0x801ECF94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ECF90
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801ECF94
  c->r[27]=c->r[3]|c->r[3]; // 801ECF98
  c->r[28]=c->r[5]|c->r[5]; // 801ECF9C
  c->r[29]=c->r[6]|c->r[6]; // 801ECFA0
  c->r[31]=c->r[3]+c->r[0]; // 801ECFA4
  c->r[30]=0u+0x00000000u; // 801ECFA8
  goto L_801ECFD0; // 801ECFAC
L_801ECFB0:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801ECFB0
  cmps(c,0,(int32_t)c->r[3],0); // 801ECFB4
  if (crb(c,2)) { goto L_801ECFC8; } // 801ECFB8
  c->r[4]=c->r[28]|c->r[28]; // 801ECFBC
  c->r[5]=c->r[29]|c->r[29]; // 801ECFC0
  c->lr=0x801ECFC8u; f_801CE070(c); // 801ECFC4
L_801ECFC8:;
  c->r[31]=c->r[31]+0x00000004u; // 801ECFC8
  c->r[30]=c->r[30]+0x00000001u; // 801ECFCC
L_801ECFD0:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801ECFD0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801ECFD4
  if (crb(c,0)) { IRQCHK(c); goto L_801ECFB0; } // 801ECFD8
  c->r[11]=c->r[1]+0x00000020u; // 801ECFDC
  c->lr=0x801ECFE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ECFE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECFE4
  c->lr=c->r[0]; // 801ECFE8
  c->r[1]=c->r[1]+0x00000020u; // 801ECFEC
  return; // 801ECFF0
}

// SetLoopEnd__Q44nw4r3snd6detail5VoiceFiPCvUl
void f_801ED000(Ctx* __restrict c) {
  trace_call(0x801ED000u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED000
  c->r[0]=c->lr; // 801ED004
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED008
  c->r[11]=c->r[1]+0x00000020u; // 801ED00C
  c->lr=0x801ED014u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED010
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801ED014
  c->r[27]=c->r[3]|c->r[3]; // 801ED018
  c->r[28]=c->r[5]|c->r[5]; // 801ED01C
  c->r[29]=c->r[6]|c->r[6]; // 801ED020
  c->r[31]=c->r[3]+c->r[0]; // 801ED024
  c->r[30]=0u+0x00000000u; // 801ED028
  goto L_801ED050; // 801ED02C
L_801ED030:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801ED030
  cmps(c,0,(int32_t)c->r[3],0); // 801ED034
  if (crb(c,2)) { goto L_801ED048; } // 801ED038
  c->r[4]=c->r[28]|c->r[28]; // 801ED03C
  c->r[5]=c->r[29]|c->r[29]; // 801ED040
  c->lr=0x801ED048u; f_801CE1B0(c); // 801ED044
L_801ED048:;
  c->r[31]=c->r[31]+0x00000004u; // 801ED048
  c->r[30]=c->r[30]+0x00000001u; // 801ED04C
L_801ED050:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801ED050
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801ED054
  if (crb(c,0)) { IRQCHK(c); goto L_801ED030; } // 801ED058
  c->r[11]=c->r[1]+0x00000020u; // 801ED05C
  c->lr=0x801ED064u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED060
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED064
  c->lr=c->r[0]; // 801ED068
  c->r[1]=c->r[1]+0x00000020u; // 801ED06C
  return; // 801ED070
}

// SetLoopFlag__Q44nw4r3snd6detail5VoiceFb
void f_801ED080(Ctx* __restrict c) {
  trace_call(0x801ED080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED080
  c->r[0]=c->lr; // 801ED084
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED088
  c->r[11]=c->r[1]+0x00000020u; // 801ED08C
  c->lr=0x801ED094u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED090
  c->r[26]=c->r[3]|c->r[3]; // 801ED094
  c->r[27]=c->r[4]|c->r[4]; // 801ED098
  c->r[31]=c->r[26]|c->r[26]; // 801ED09C
  c->r[29]=0u+0x00000000u; // 801ED0A0
  goto L_801ED0E4; // 801ED0A4
L_801ED0A8:;
  c->r[30]=c->r[31]|c->r[31]; // 801ED0A8
  c->r[28]=0u+0x00000000u; // 801ED0AC
  goto L_801ED0D0; // 801ED0B0
L_801ED0B4:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801ED0B4
  cmps(c,0,(int32_t)c->r[3],0); // 801ED0B8
  if (crb(c,2)) { goto L_801ED0C8; } // 801ED0BC
  c->r[4]=c->r[27]|c->r[27]; // 801ED0C0
  c->lr=0x801ED0C8u; f_801CE300(c); // 801ED0C4
L_801ED0C8:;
  c->r[30]=c->r[30]+0x00000004u; // 801ED0C8
  c->r[28]=c->r[28]+0x00000001u; // 801ED0CC
L_801ED0D0:;
  c->r[0]=R32(c->r[26]+0x00000090u); // 801ED0D0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ED0D4
  if (crb(c,0)) { IRQCHK(c); goto L_801ED0B4; } // 801ED0D8
  c->r[31]=c->r[31]+0x00000010u; // 801ED0DC
  c->r[29]=c->r[29]+0x00000001u; // 801ED0E0
L_801ED0E4:;
  c->r[0]=R32(c->r[26]+0x0000008Cu); // 801ED0E4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801ED0E8
  if (crb(c,0)) { IRQCHK(c); goto L_801ED0A8; } // 801ED0EC
  c->r[11]=c->r[1]+0x00000020u; // 801ED0F0
  c->lr=0x801ED0F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED0F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED0F8
  c->lr=c->r[0]; // 801ED0FC
  c->r[1]=c->r[1]+0x00000020u; // 801ED100
  return; // 801ED104
}

// StopAtPoint__Q44nw4r3snd6detail5VoiceFiPCvUl
void f_801ED110(Ctx* __restrict c) {
  trace_call(0x801ED110u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED110
  c->r[0]=c->lr; // 801ED114
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED118
  c->r[11]=c->r[1]+0x00000020u; // 801ED11C
  c->lr=0x801ED124u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED120
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801ED124
  c->r[27]=c->r[3]|c->r[3]; // 801ED128
  c->r[28]=c->r[5]|c->r[5]; // 801ED12C
  c->r[29]=c->r[6]|c->r[6]; // 801ED130
  c->r[31]=c->r[3]+c->r[0]; // 801ED134
  c->r[30]=0u+0x00000000u; // 801ED138
  goto L_801ED160; // 801ED13C
L_801ED140:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801ED140
  cmps(c,0,(int32_t)c->r[3],0); // 801ED144
  if (crb(c,2)) { goto L_801ED158; } // 801ED148
  c->r[4]=c->r[28]|c->r[28]; // 801ED14C
  c->r[5]=c->r[29]|c->r[29]; // 801ED150
  c->lr=0x801ED158u; f_801CE3A0(c); // 801ED154
L_801ED158:;
  c->r[31]=c->r[31]+0x00000004u; // 801ED158
  c->r[30]=c->r[30]+0x00000001u; // 801ED15C
L_801ED160:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801ED160
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801ED164
  if (crb(c,0)) { IRQCHK(c); goto L_801ED140; } // 801ED168
  c->r[11]=c->r[1]+0x00000020u; // 801ED16C
  c->lr=0x801ED174u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED170
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED174
  c->lr=c->r[0]; // 801ED178
  c->r[1]=c->r[1]+0x00000020u; // 801ED17C
  return; // 801ED180
}

// SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
void f_801ED190(Ctx* __restrict c) {
  trace_call(0x801ED190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED190
  c->r[0]=c->lr; // 801ED194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED198
  c->r[11]=c->r[1]+0x00000020u; // 801ED19C
  c->lr=0x801ED1A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED1A0
  c->r[26]=c->r[3]|c->r[3]; // 801ED1A4
  c->r[27]=c->r[4]|c->r[4]; // 801ED1A8
  c->r[31]=c->r[26]|c->r[26]; // 801ED1AC
  c->r[29]=0u+0x00000000u; // 801ED1B0
  goto L_801ED1F4; // 801ED1B4
L_801ED1B8:;
  c->r[30]=c->r[31]|c->r[31]; // 801ED1B8
  c->r[28]=0u+0x00000000u; // 801ED1BC
  goto L_801ED1E0; // 801ED1C0
L_801ED1C4:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801ED1C4
  cmps(c,0,(int32_t)c->r[3],0); // 801ED1C8
  if (crb(c,2)) { goto L_801ED1D8; } // 801ED1CC
  c->r[4]=c->r[27]|c->r[27]; // 801ED1D0
  c->lr=0x801ED1D8u; f_801CE9C0(c); // 801ED1D4
L_801ED1D8:;
  c->r[30]=c->r[30]+0x00000004u; // 801ED1D8
  c->r[28]=c->r[28]+0x00000001u; // 801ED1DC
L_801ED1E0:;
  c->r[0]=R32(c->r[26]+0x00000090u); // 801ED1E0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ED1E4
  if (crb(c,0)) { IRQCHK(c); goto L_801ED1C4; } // 801ED1E8
  c->r[31]=c->r[31]+0x00000010u; // 801ED1EC
  c->r[29]=c->r[29]+0x00000001u; // 801ED1F0
L_801ED1F4:;
  c->r[0]=R32(c->r[26]+0x0000008Cu); // 801ED1F4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801ED1F8
  if (crb(c,0)) { IRQCHK(c); goto L_801ED1B8; } // 801ED1FC
  c->r[11]=c->r[1]+0x00000020u; // 801ED200
  c->lr=0x801ED208u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED204
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED208
  c->lr=c->r[0]; // 801ED20C
  c->r[1]=c->r[1]+0x00000020u; // 801ED210
  return; // 801ED214
}

// CalcAxVe__Q44nw4r3snd6detail5VoiceFv
void f_801ED220(Ctx* __restrict c) {
  trace_call(0x801ED220u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED220
  c->r[0]=c->lr; // 801ED224
  W32(c->r[1]+0x00000054u,c->r[0]); // 801ED228
  c->r[11]=c->r[1]+0x00000020u; // 801ED22C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801ED230
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801ED234
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801ED238
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801ED23C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801ED240
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801ED244
  c->lr=0x801ED24Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED248
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[31]=c->ps1[31]=RF32(ea);} // 801ED24C
  c->r[26]=c->r[3]|c->r[3]; // 801ED250
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED254
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801ED258
  c->lr=0x801ED260u; f_801CD130(c); // 801ED25C
  c->lr=0x801ED264u; f_801CD370(c); // 801ED260
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 801ED264
  c->r[31]=c->r[26]|c->r[26]; // 801ED268
  c->r[28]=0u+0x00000000u; // 801ED26C
  c->r[30]=0u+0x00000000u; // 801ED270
  goto L_801ED2D4; // 801ED274
L_801ED278:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED278
  c->r[29]=c->r[26]+c->r[30]; // 801ED27C
  {uint32_t ea=c->r[26]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED280
  c->r[27]=0u+0x00000000u; // 801ED284
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 801ED288
  {uint32_t ea=c->r[26]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED28C
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[1]); // 801ED290
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[0]); // 801ED294
  goto L_801ED2BC; // 801ED298
L_801ED29C:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801ED29C
  cmps(c,0,(int32_t)c->r[3],0); // 801ED2A0
  if (crb(c,2)) { goto L_801ED2B4; } // 801ED2A4
  c->f[1]=c->f[30]; // 801ED2A8
  c->f[2]=c->f[29]; // 801ED2AC
  c->lr=0x801ED2B4u; f_801CFDC0(c); // 801ED2B0
L_801ED2B4:;
  c->r[29]=c->r[29]+0x00000010u; // 801ED2B4
  c->r[27]=c->r[27]+0x00000001u; // 801ED2B8
L_801ED2BC:;
  c->r[0]=R32(c->r[26]+0x0000008Cu); // 801ED2BC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801ED2C0
  if (crb(c,0)) { IRQCHK(c); goto L_801ED29C; } // 801ED2C4
  c->r[31]=c->r[31]+0x00000018u; // 801ED2C8
  c->r[30]=c->r[30]+0x00000004u; // 801ED2CC
  c->r[28]=c->r[28]+0x00000001u; // 801ED2D0
L_801ED2D4:;
  c->r[0]=R32(c->r[26]+0x00000090u); // 801ED2D4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ED2D8
  if (crb(c,0)) { IRQCHK(c); goto L_801ED278; } // 801ED2DC
  c->r[11]=c->r[1]+0x00000020u; // 801ED2E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801ED2E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801ED2E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801ED2EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801ED2F0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 801ED2F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801ED2F8
  c->lr=0x801ED300u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED2FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801ED300
  c->lr=c->r[0]; // 801ED304
  c->r[1]=c->r[1]+0x00000050u; // 801ED308
  return; // 801ED30C
}

// CalcAxMix__Q44nw4r3snd6detail5VoiceFv
void f_801ED310(Ctx* __restrict c) {
  trace_call(0x801ED310u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED310
  c->r[0]=c->lr; // 801ED314
  W32(c->r[1]+0x00000054u,c->r[0]); // 801ED318
  c->r[11]=c->r[1]+0x00000050u; // 801ED31C
  c->lr=0x801ED324u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED320
  c->r[25]=c->r[3]|c->r[3]; // 801ED324
  c->r[29]=0u+0x00000000u; // 801ED328
  c->r[31]=c->r[25]|c->r[25]; // 801ED32C
  c->r[28]=0u+0x00000000u; // 801ED330
  goto L_801ED3D4; // 801ED334
L_801ED338:;
  c->r[30]=c->r[31]|c->r[31]; // 801ED338
  c->r[27]=0u+0x00000000u; // 801ED33C
  goto L_801ED3C0; // 801ED340
L_801ED344:;
  c->r[26]=R32(c->r[30]+0x0000000Cu); // 801ED344
  cmps(c,0,(int32_t)c->r[26],0); // 801ED348
  if (crb(c,2)) { goto L_801ED3B8; } // 801ED34C
  c->r[3]=c->r[25]|c->r[25]; // 801ED350
  c->r[4]=c->r[28]|c->r[28]; // 801ED354
  c->r[5]=c->r[27]|c->r[27]; // 801ED358
  c->r[6]=c->r[1]+0x00000018u; // 801ED35C
  c->r[7]=c->r[1]+0x00000008u; // 801ED360
  c->lr=0x801ED368u; f_801ED7A0(c); // 801ED364
  c->r[3]=c->r[26]|c->r[26]; // 801ED368
  c->r[4]=c->r[1]+0x00000018u; // 801ED36C
  c->lr=0x801ED374u; f_801CF540(c); // 801ED370
  c->r[4]=R32(c->r[25]+0x000000BCu); // 801ED374
  c->r[3]=c->r[29]|c->r[3]; // 801ED378
  c->r[0]=0u-c->r[3]; // 801ED37C
  cmpu(c,0,c->r[4],0x00000001u); // 801ED380
  c->r[0]=c->r[0]|c->r[3]; // 801ED384
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 801ED388
  if (crb(c,1)) { goto L_801ED3A0; } // 801ED38C
  c->r[3]=c->r[26]|c->r[26]; // 801ED390
  c->r[4]=0u+0x00000000u; // 801ED394
  c->lr=0x801ED39Cu; f_801CEA20(c); // 801ED398
  goto L_801ED3B8; // 801ED39C
L_801ED3A0:;
  c->r[3]=c->r[26]|c->r[26]; // 801ED3A0
  c->r[4]=0u+0x00000001u; // 801ED3A4
  c->lr=0x801ED3ACu; f_801CEA20(c); // 801ED3A8
  c->r[3]=c->r[26]|c->r[26]; // 801ED3AC
  c->r[4]=c->r[1]+0x00000008u; // 801ED3B0
  c->lr=0x801ED3B8u; f_801CFB60(c); // 801ED3B4
L_801ED3B8:;
  c->r[30]=c->r[30]+0x00000004u; // 801ED3B8
  c->r[27]=c->r[27]+0x00000001u; // 801ED3BC
L_801ED3C0:;
  c->r[0]=R32(c->r[25]+0x00000090u); // 801ED3C0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801ED3C4
  if (crb(c,0)) { IRQCHK(c); goto L_801ED344; } // 801ED3C8
  c->r[31]=c->r[31]+0x00000010u; // 801ED3CC
  c->r[28]=c->r[28]+0x00000001u; // 801ED3D0
L_801ED3D4:;
  c->r[0]=R32(c->r[25]+0x0000008Cu); // 801ED3D4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ED3D8
  if (crb(c,0)) { IRQCHK(c); goto L_801ED338; } // 801ED3DC
  c->r[11]=c->r[1]+0x00000050u; // 801ED3E0
  c->r[3]=c->r[29]|c->r[29]; // 801ED3E4
  c->lr=0x801ED3ECu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED3E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801ED3EC
  c->lr=c->r[0]; // 801ED3F0
  c->r[1]=c->r[1]+0x00000050u; // 801ED3F4
  return; // 801ED3F8
}

// ResetDelta__Q44nw4r3snd6detail5VoiceFv
void f_801ED400(Ctx* __restrict c) {
  trace_call(0x801ED400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED400
  c->r[0]=c->lr; // 801ED404
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED408
  c->r[11]=c->r[1]+0x00000020u; // 801ED40C
  c->lr=0x801ED414u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED410
  c->r[27]=c->r[3]|c->r[3]; // 801ED414
  c->r[29]=0u+0x00000000u; // 801ED418
  c->r[31]=0u+0x00000000u; // 801ED41C
  goto L_801ED45C; // 801ED420
L_801ED424:;
  c->r[30]=c->r[27]+c->r[31]; // 801ED424
  c->r[28]=0u+0x00000000u; // 801ED428
  goto L_801ED448; // 801ED42C
L_801ED430:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801ED430
  cmps(c,0,(int32_t)c->r[3],0); // 801ED434
  if (crb(c,2)) { goto L_801ED440; } // 801ED438
  c->lr=0x801ED440u; f_801CEA80(c); // 801ED43C
L_801ED440:;
  c->r[30]=c->r[30]+0x00000010u; // 801ED440
  c->r[28]=c->r[28]+0x00000001u; // 801ED444
L_801ED448:;
  c->r[0]=R32(c->r[27]+0x0000008Cu); // 801ED448
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801ED44C
  if (crb(c,0)) { IRQCHK(c); goto L_801ED430; } // 801ED450
  c->r[31]=c->r[31]+0x00000004u; // 801ED454
  c->r[29]=c->r[29]+0x00000001u; // 801ED458
L_801ED45C:;
  c->r[0]=R32(c->r[27]+0x00000090u); // 801ED45C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801ED460
  if (crb(c,0)) { IRQCHK(c); goto L_801ED424; } // 801ED464
  c->r[11]=c->r[1]+0x00000020u; // 801ED468
  c->lr=0x801ED470u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED46C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED470
  c->lr=c->r[0]; // 801ED474
  c->r[1]=c->r[1]+0x00000020u; // 801ED478
  return; // 801ED47C
}

// fn_801ED480
void f_801ED480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED480
  c->r[0]=c->lr; // 801ED484
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ED488
  c->r[11]=c->r[1]+0x00000030u; // 801ED48C
  c->lr=0x801ED494u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED490
  cmps(c,0,(int32_t)c->r[5],0); // 801ED494
  c->r[22]=c->r[3]|c->r[3]; // 801ED498
  c->r[23]=c->r[4]|c->r[4]; // 801ED49C
  c->r[28]=c->r[5]|c->r[5]; // 801ED4A0
  if (!crb(c,2)) { goto L_801ED4C4; } // 801ED4A4
  c->r[3]=0u+0x802D0000u; // 801ED4A8
  c->r[5]=0u+0x802D0000u; // 801ED4AC
  c->r[3]=c->r[3]+0x000022F8u; // 801ED4B0
  c->r[4]=0u+0x00000464u; // 801ED4B4
  c->r[5]=c->r[5]+0x000025E4u; // 801ED4B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ED4BC
  c->lr=0x801ED4C4u; f_801F9770(c); // 801ED4C0
L_801ED4C4:;
  cmps(c,0,(int32_t)c->r[23],0); // 801ED4C4
  c->r[26]=0u+0x00000000u; // 801ED4C8
  if (crb(c,2)) { goto L_801ED4DC; } // 801ED4CC
  cmps(c,0,(int32_t)c->r[23],1); // 801ED4D0
  if (crb(c,2)) { goto L_801ED4E4; } // 801ED4D4
  goto L_801ED4EC; // 801ED4D8
L_801ED4DC:;
  c->r[27]=0u+0x00000001u; // 801ED4DC
  goto L_801ED4EC; // 801ED4E0
L_801ED4E4:;
  c->r[27]=0u+0x00000003u; // 801ED4E4
  c->r[26]=0u+0x00000001u; // 801ED4E8
L_801ED4EC:;
  c->r[30]=c->r[28]|c->r[28]; // 801ED4EC
  c->r[25]=0u+0x00000000u; // 801ED4F0
  c->r[31]=0u+0x00000000u; // 801ED4F4
  goto L_801ED590; // 801ED4F8
L_801ED4FC:;
  c->r[29]=c->r[30]|c->r[30]; // 801ED4FC
  c->r[24]=0u+0x00000000u; // 801ED500
  goto L_801ED57C; // 801ED504
L_801ED508:;
  c->r[23]=R32(c->r[29]+0x0000000Cu); // 801ED508
  cmps(c,0,(int32_t)c->r[23],0); // 801ED50C
  if (crb(c,2)) { goto L_801ED574; } // 801ED510
  cmpu(c,0,c->r[23],c->r[22]); // 801ED514
  if (!crb(c,2)) { goto L_801ED534; } // 801ED518
  cmps(c,0,(int32_t)c->r[26],0); // 801ED51C
  if (!crb(c,2)) { goto L_801ED570; } // 801ED520
  c->lr=0x801ED528u; f_801D0E80(c); // 801ED524
  c->r[4]=c->r[23]|c->r[23]; // 801ED528
  c->lr=0x801ED530u; f_801D1590(c); // 801ED52C
  goto L_801ED570; // 801ED530
L_801ED534:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 801ED534
  c->r[4]=0u+0x00000000u; // 801ED538
  cmps(c,0,(int32_t)c->r[3],0); // 801ED53C
  if (crb(c,2)) { goto L_801ED554; } // 801ED540
  c->r[0]=R16(c->r[3]+0x00000038u); // 801ED544
  cmpu(c,0,c->r[0],0x00000001u); // 801ED548
  if (!crb(c,2)) { goto L_801ED554; } // 801ED54C
  c->r[4]=0u+0x00000001u; // 801ED550
L_801ED554:;
  cmps(c,0,(int32_t)c->r[4],0); // 801ED554
  if (crb(c,2)) { goto L_801ED564; } // 801ED558
  c->r[4]=0u+0x00000000u; // 801ED55C
  c->lr=0x801ED564u; f_800EF5E0(c); // 801ED560
L_801ED564:;
  c->lr=0x801ED568u; f_801D0E80(c); // 801ED564
  c->r[4]=c->r[23]|c->r[23]; // 801ED568
  c->lr=0x801ED570u; f_801D1590(c); // 801ED56C
L_801ED570:;
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801ED570
L_801ED574:;
  c->r[29]=c->r[29]+0x00000004u; // 801ED574
  c->r[24]=c->r[24]+0x00000001u; // 801ED578
L_801ED57C:;
  c->r[0]=R32(c->r[28]+0x00000090u); // 801ED57C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801ED580
  if (crb(c,0)) { IRQCHK(c); goto L_801ED508; } // 801ED584
  c->r[30]=c->r[30]+0x00000010u; // 801ED588
  c->r[25]=c->r[25]+0x00000001u; // 801ED58C
L_801ED590:;
  c->r[0]=R32(c->r[28]+0x0000008Cu); // 801ED590
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801ED594
  if (crb(c,0)) { IRQCHK(c); goto L_801ED4FC; } // 801ED598
  cmps(c,0,(int32_t)c->r[26],0); // 801ED59C
  c->r[0]=0u+0x00000000u; // 801ED5A0
  W8(c->r[28]+0x0000009Fu,c->r[0]); // 801ED5A4
  W8(c->r[28]+0x0000009Du,c->r[0]); // 801ED5A8
  W32(c->r[28]+0x0000008Cu,c->r[0]); // 801ED5AC
  if (crb(c,2)) { goto L_801ED5BC; } // 801ED5B0
  c->r[3]=c->r[28]|c->r[28]; // 801ED5B4
  c->lr=0x801ED5BCu; f_801EC360(c); // 801ED5B8
L_801ED5BC:;
  c->r[12]=R32(c->r[28]+0x00000094u); // 801ED5BC
  cmps(c,0,(int32_t)c->r[12],0); // 801ED5C0
  if (crb(c,2)) { goto L_801ED5DC; } // 801ED5C4
  c->r[3]=c->r[28]|c->r[28]; // 801ED5C8
  c->r[4]=c->r[27]|c->r[27]; // 801ED5CC
  c->r[5]=R32(c->r[28]+0x00000098u); // 801ED5D0
  c->ctr=c->r[12]; // 801ED5D4
  if (true) { c->lr=0x801ED5DCu; dispatch(c,c->ctr); } // 801ED5D8
L_801ED5DC:;
  c->r[11]=c->r[1]+0x00000030u; // 801ED5DC
  c->lr=0x801ED5E4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED5E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801ED5E4
  c->lr=c->r[0]; // 801ED5E8
  c->r[1]=c->r[1]+0x00000030u; // 801ED5EC
  return; // 801ED5F0
}

// fn_801ED600
void f_801ED600(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED600
  c->f[0]=std::fabs(c->f[1]); // 801ED604
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[3]); // 801ED608
  c->f[2]=std::fabs(c->f[4]); // 801ED60C
  fcmp(c,0,c->f[0],c->f[2]); // 801ED610
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ED614
  if (!crb(c,2)) { goto L_801ED66C; } // 801ED618
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED61C
  fcmp(c,0,c->f[4],c->f[0]); // 801ED620
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ED624
  if (!crb(c,2)) { goto L_801ED648; } // 801ED628
  {uint32_t ea=c->r[2]+0xFFFF9F0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED62C
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED630
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 801ED634
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 801ED638
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801ED63C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801ED640
  goto L_801ED78C; // 801ED644
L_801ED648:;
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED648
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED64C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 801ED650
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED654
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801ED658
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 801ED65C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801ED660
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801ED664
  goto L_801ED78C; // 801ED668
L_801ED66C:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED66C
  fcmp(c,0,c->f[1],c->f[2]); // 801ED670
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED674
  if (!crb(c,2)) { goto L_801ED704; } // 801ED678
  fcmp(c,0,c->f[4],c->f[2]); // 801ED67C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ED680
  if (!crb(c,2)) { goto L_801ED6CC; } // 801ED684
  c->f[5]=-c->f[4]; // 801ED688
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED68C
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801ED690
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 801ED694
  {uint32_t ea=c->r[2]+0xFFFF9F0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED698
  c->f[7]=c->ps1[7]=S(c->f[5]/c->f[1]); // 801ED69C
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[5]=c->ps1[5]=RF32(ea);} // 801ED6A0
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED6A4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 801ED6A8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801ED6AC
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[6]); // 801ED6B0
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 801ED6B4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801ED6B8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 801ED6BC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 801ED6C0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801ED6C4
  goto L_801ED78C; // 801ED6C8
L_801ED6CC:;
  c->f[5]=-c->f[4]; // 801ED6CC
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED6D0
  {uint32_t ea=c->r[2]+0xFFFF9F24u; c->f[4]=c->ps1[4]=RF32(ea);} // 801ED6D4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 801ED6D8
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED6DC
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[1]); // 801ED6E0
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED6E4
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 801ED6E8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801ED6EC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[4]); // 801ED6F0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801ED6F4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801ED6F8
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801ED6FC
  goto L_801ED78C; // 801ED700
L_801ED704:;
  fcmp(c,0,c->f[4],c->f[2]); // 801ED704
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ED708
  if (!crb(c,2)) { goto L_801ED754; } // 801ED70C
  c->f[5]=-c->f[4]; // 801ED710
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED714
  {uint32_t ea=c->r[2]+0xFFFF9F1Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801ED718
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 801ED71C
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED720
  c->f[7]=c->ps1[7]=S(c->f[5]/c->f[1]); // 801ED724
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[5]=c->ps1[5]=RF32(ea);} // 801ED728
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED72C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 801ED730
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801ED734
  c->f[3]=c->ps1[3]=S(c->f[6]-c->f[5]); // 801ED738
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[1]); // 801ED73C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801ED740
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 801ED744
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 801ED748
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801ED74C
  goto L_801ED78C; // 801ED750
L_801ED754:;
  c->f[6]=-c->f[4]; // 801ED754
  {uint32_t ea=c->r[2]+0xFFFF9F24u; c->f[5]=c->ps1[5]=RF32(ea);} // 801ED758
  c->f[3]=-c->f[1]; // 801ED75C
  {uint32_t ea=c->r[2]+0xFFFF9F14u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED760
  {uint32_t ea=c->r[2]+0xFFFF9F18u; c->f[4]=c->ps1[4]=RF32(ea);} // 801ED764
  c->f[6]=c->ps1[6]=S(c->f[6]/c->f[1]); // 801ED768
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED76C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[6]); // 801ED770
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 801ED774
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 801ED778
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801ED77C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801ED780
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801ED784
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801ED788
L_801ED78C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED78C
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED790
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801ED794
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801ED798
  return; // 801ED79C
}

// fn_801ED7A0
void f_801ED7A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED7A0
  c->r[0]=c->lr; // 801ED7A4
  W32(c->r[1]+0x00000174u,c->r[0]); // 801ED7A8
  c->r[11]=c->r[1]+0x00000070u; // 801ED7AC
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 801ED7B0
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 801ED7B4
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[30]);} // 801ED7B8
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,30,ea,0,0);} // 801ED7BC
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[29]);} // 801ED7C0
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,29,ea,0,0);} // 801ED7C4
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[28]);} // 801ED7C8
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,28,ea,0,0);} // 801ED7CC
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[27]);} // 801ED7D0
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,27,ea,0,0);} // 801ED7D4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[26]);} // 801ED7D8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,26,ea,0,0);} // 801ED7DC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[25]);} // 801ED7E0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,25,ea,0,0);} // 801ED7E4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[24]);} // 801ED7E8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,24,ea,0,0);} // 801ED7EC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[23]);} // 801ED7F0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,23,ea,0,0);} // 801ED7F4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[22]);} // 801ED7F8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,22,ea,0,0);} // 801ED7FC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[21]);} // 801ED800
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,21,ea,0,0);} // 801ED804
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[20]);} // 801ED808
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,20,ea,0,0);} // 801ED80C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[19]);} // 801ED810
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,19,ea,0,0);} // 801ED814
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[18]);} // 801ED818
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,18,ea,0,0);} // 801ED81C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[17]);} // 801ED820
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,17,ea,0,0);} // 801ED824
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[16]);} // 801ED828
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,16,ea,0,0);} // 801ED82C
  c->lr=0x801ED834u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED830
  cmps(c,0,(int32_t)c->r[6],0); // 801ED834
  c->r[27]=c->r[3]|c->r[3]; // 801ED838
  c->r[28]=c->r[4]|c->r[4]; // 801ED83C
  c->r[29]=c->r[5]|c->r[5]; // 801ED840
  c->r[30]=c->r[6]|c->r[6]; // 801ED844
  c->r[31]=c->r[7]|c->r[7]; // 801ED848
  if (!crb(c,2)) { goto L_801ED86C; } // 801ED84C
  c->r[3]=0u+0x802D0000u; // 801ED850
  c->r[5]=0u+0x802D0000u; // 801ED854
  c->r[3]=c->r[3]+0x000022F8u; // 801ED858
  c->r[4]=0u+0x000004DBu; // 801ED85C
  c->r[5]=c->r[5]+0x0000260Cu; // 801ED860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ED864
  c->lr=0x801ED86Cu; f_801F9770(c); // 801ED868
L_801ED86C:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED86C
  c->r[4]=R32(c->r[27]+0x000000BCu); // 801ED870
  c->f[3]=c->f[2]; // 801ED874
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801ED878
  c->f[4]=c->f[2]; // 801ED87C
  c->f[5]=c->f[2]; // 801ED880
  c->f[6]=c->f[2]; // 801ED884
  if (crb(c,2)) { goto L_801ED8BC; } // 801ED888
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)24); // 801ED88C
  {uint32_t ea=c->r[27]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED890
  {uint32_t ea=c->r[27]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED894
  {uint32_t ea=c->r[27]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED898
  c->r[3]=c->r[27]+c->r[0]; // 801ED89C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED8A0
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 801ED8A4
  fcmp(c,0,c->f[4],c->f[6]); // 801ED8A8
  if (!crb(c,0)) { goto L_801ED8B4; } // 801ED8AC
  c->f[4]=c->f[6]; // 801ED8B0
L_801ED8B4:;
  {uint32_t ea=c->r[27]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801ED8B4
  {uint32_t ea=c->r[27]+0x000000D0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801ED8B8
L_801ED8BC:;
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED8BC
  fcmp(c,0,c->f[3],c->f[0]); // 801ED8C0
  if (!crb(c,1)) { goto L_801ED8CC; } // 801ED8C4
  goto L_801ED8E0; // 801ED8C8
L_801ED8CC:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED8CC
  fcmp(c,0,c->f[3],c->f[0]); // 801ED8D0
  if (!crb(c,0)) { goto L_801ED8DC; } // 801ED8D4
  goto L_801ED8E0; // 801ED8D8
L_801ED8DC:;
  c->f[0]=c->f[3]; // 801ED8DC
L_801ED8E0:;
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED8E0
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[0]); // 801ED8E4
  fcmp(c,0,c->f[4],c->f[1]); // 801ED8E8
  if (!crb(c,1)) { goto L_801ED8F4; } // 801ED8EC
  goto L_801ED908; // 801ED8F0
L_801ED8F4:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED8F4
  fcmp(c,0,c->f[4],c->f[1]); // 801ED8F8
  if (!crb(c,0)) { goto L_801ED904; } // 801ED8FC
  goto L_801ED908; // 801ED900
L_801ED904:;
  c->f[1]=c->f[4]; // 801ED904
L_801ED908:;
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED908
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[1]); // 801ED90C
  fcmp(c,0,c->f[5],c->f[0]); // 801ED910
  if (!crb(c,1)) { goto L_801ED91C; } // 801ED914
  goto L_801ED930; // 801ED918
L_801ED91C:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED91C
  fcmp(c,0,c->f[5],c->f[0]); // 801ED920
  if (!crb(c,0)) { goto L_801ED92C; } // 801ED924
  goto L_801ED930; // 801ED928
L_801ED92C:;
  c->f[0]=c->f[5]; // 801ED92C
L_801ED930:;
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED930
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[0]); // 801ED934
  fcmp(c,0,c->f[6],c->f[1]); // 801ED938
  if (!crb(c,1)) { goto L_801ED944; } // 801ED93C
  goto L_801ED958; // 801ED940
L_801ED944:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED944
  fcmp(c,0,c->f[6],c->f[1]); // 801ED948
  if (!crb(c,0)) { goto L_801ED954; } // 801ED94C
  goto L_801ED958; // 801ED950
L_801ED954:;
  c->f[1]=c->f[6]; // 801ED954
L_801ED958:;
  c->r[0]=0u+0x00000000u; // 801ED958
  c->r[3]=0u+0x00000002u; // 801ED95C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ED960
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[1]); // 801ED964
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801ED968
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED96C
  if (crb(c,2)) { goto L_801ED980; } // 801ED970
  {uint32_t ea=c->r[27]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED974
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801ED978
  goto L_801ED984; // 801ED97C
L_801ED980:;
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801ED980
L_801ED984:;
  c->r[0]=0u+0x00000001u; // 801ED984
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ED988
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801ED98C
  if (crb(c,2)) { goto L_801ED9A0; } // 801ED990
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED994
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 801ED998
  goto L_801ED9A4; // 801ED99C
L_801ED9A0:;
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801ED9A0
L_801ED9A4:;
  c->r[0]=0u+0x00000002u; // 801ED9A4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ED9A8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801ED9AC
  if (crb(c,2)) { goto L_801ED9C0; } // 801ED9B0
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED9B4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801ED9B8
  goto L_801ED9C4; // 801ED9BC
L_801ED9C0:;
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801ED9C0
L_801ED9C4:;
  c->r[0]=0u+0x00000003u; // 801ED9C4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ED9C8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801ED9CC
  if (crb(c,2)) { goto L_801ED9E0; } // 801ED9D0
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED9D4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 801ED9D8
  goto L_801ED9E4; // 801ED9DC
L_801ED9E0:;
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801ED9E0
L_801ED9E4:;
  c->r[4]=0u+0x00000000u; // 801ED9E4
  W32(c->r[1]+0x00000028u,c->r[4]); // 801ED9E8
  W8(c->r[1]+0x0000002Cu,c->r[4]); // 801ED9EC
  W8(c->r[1]+0x0000002Du,c->r[4]); // 801ED9F0
  c->r[0]=R32(c->r[27]+0x000000F8u); // 801ED9F4
  cmpu(c,0,c->r[0],0x00000008u); // 801ED9F8
  if (crb(c,1)) { goto L_801EDAAC; } // 801ED9FC
  c->r[3]=0u+0x802D0000u; // 801EDA00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EDA04
  c->r[3]=c->r[3]+0x00002630u; // 801EDA08
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EDA0C
  c->ctr=c->r[3]; // 801EDA10
  if (true) { switch (c->ctr) { case 0x801EDA18u: goto L_801EDA18; case 0x801EDA20u: goto L_801EDA20; case 0x801EDA30u: goto L_801EDA30; case 0x801EDA44u: goto L_801EDA44; case 0x801EDA50u: goto L_801EDA50; case 0x801EDA60u: goto L_801EDA60; case 0x801EDA74u: goto L_801EDA74; case 0x801EDA80u: goto L_801EDA80; case 0x801EDA94u: goto L_801EDA94; default: break; } dispatch(c,c->ctr); return; } // 801EDA14
L_801EDA18:;
  W32(c->r[1]+0x00000028u,c->r[4]); // 801EDA18
  goto L_801EDAB4; // 801EDA1C
L_801EDA20:;
  c->r[0]=0u+0x00000001u; // 801EDA20
  W32(c->r[1]+0x00000028u,c->r[4]); // 801EDA24
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801EDA28
  goto L_801EDAB4; // 801EDA2C
L_801EDA30:;
  c->r[0]=0u+0x00000001u; // 801EDA30
  W32(c->r[1]+0x00000028u,c->r[4]); // 801EDA34
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801EDA38
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801EDA3C
  goto L_801EDAB4; // 801EDA40
L_801EDA44:;
  c->r[0]=0u+0x00000001u; // 801EDA44
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EDA48
  goto L_801EDAB4; // 801EDA4C
L_801EDA50:;
  c->r[0]=0u+0x00000001u; // 801EDA50
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EDA54
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801EDA58
  goto L_801EDAB4; // 801EDA5C
L_801EDA60:;
  c->r[0]=0u+0x00000001u; // 801EDA60
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EDA64
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801EDA68
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801EDA6C
  goto L_801EDAB4; // 801EDA70
L_801EDA74:;
  c->r[0]=0u+0x00000002u; // 801EDA74
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EDA78
  goto L_801EDAB4; // 801EDA7C
L_801EDA80:;
  c->r[3]=0u+0x00000002u; // 801EDA80
  c->r[0]=0u+0x00000001u; // 801EDA84
  W32(c->r[1]+0x00000028u,c->r[3]); // 801EDA88
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801EDA8C
  goto L_801EDAB4; // 801EDA90
L_801EDA94:;
  c->r[0]=0u+0x00000001u; // 801EDA94
  c->r[3]=0u+0x00000002u; // 801EDA98
  W32(c->r[1]+0x00000028u,c->r[3]); // 801EDA9C
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801EDAA0
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801EDAA4
  goto L_801EDAB4; // 801EDAA8
L_801EDAAC:;
  c->r[0]=0u+0x00000000u; // 801EDAAC
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EDAB0
L_801EDAB4:;
  c->r[3]=R32(c->r[27]+0x0000008Cu); // 801EDAB4
  cmps(c,0,(int32_t)c->r[3],1); // 801EDAB8
  if (!crb(c,1)) { goto L_801EDB4C; } // 801EDABC
  c->r[0]=R32(c->r[27]+0x000000F4u); // 801EDAC0
  cmps(c,0,(int32_t)c->r[0],1); // 801EDAC4
  if (!crb(c,2)) { goto L_801EDB4C; } // 801EDAC8
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)24); // 801EDACC
  {uint32_t ea=c->r[27]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EDAD0
  {uint32_t ea=c->r[27]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDAD4
  cmps(c,0,(int32_t)c->r[28],0); // 801EDAD8
  c->r[3]=c->r[27]+c->r[0]; // 801EDADC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDAE0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDAE4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801EDAE8
  c->f[16]=c->ps1[16]=S(c->f[2]+c->f[0]); // 801EDAEC
  if (!crb(c,2)) { goto L_801EDB08; } // 801EDAF0
  c->r[3]=c->r[1]+0x00000028u; // 801EDAF4
  c->lr=0x801EDAFCu; f_801EF360(c); // 801EDAF8
  c->f[27]=c->f[1]; // 801EDAFC
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[26]=c->ps1[26]=RF32(ea);} // 801EDB00
  goto L_801EDB24; // 801EDB04
L_801EDB08:;
  cmps(c,0,(int32_t)c->r[28],1); // 801EDB08
  if (!crb(c,2)) { goto L_801EDB24; } // 801EDB0C
  c->f[1]=-c->f[1]; // 801EDB10
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[27]=c->ps1[27]=RF32(ea);} // 801EDB14
  c->r[3]=c->r[1]+0x00000028u; // 801EDB18
  c->lr=0x801EDB20u; f_801EF360(c); // 801EDB1C
  c->f[26]=c->f[1]; // 801EDB20
L_801EDB24:;
  c->f[1]=c->f[16]; // 801EDB24
  c->r[3]=c->r[1]+0x00000028u; // 801EDB28
  c->lr=0x801EDB30u; f_801EF440(c); // 801EDB2C
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDB30
  c->f[24]=c->f[1]; // 801EDB34
  c->r[3]=c->r[1]+0x00000028u; // 801EDB38
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[16]); // 801EDB3C
  c->lr=0x801EDB44u; f_801EF440(c); // 801EDB40
  c->f[16]=c->f[1]; // 801EDB44
  goto L_801EDC30; // 801EDB48
L_801EDB4C:;
  cmps(c,0,(int32_t)c->r[3],2); // 801EDB4C
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[16]=c->ps1[16]=RF32(ea);} // 801EDB50
  if (!crb(c,2)) { goto L_801EDB70; } // 801EDB54
  cmps(c,0,(int32_t)c->r[28],0); // 801EDB58
  if (!crb(c,2)) { goto L_801EDB64; } // 801EDB5C
  {uint32_t ea=c->r[2]+0xFFFF9F28u; c->f[16]=c->ps1[16]=RF32(ea);} // 801EDB60
L_801EDB64:;
  cmps(c,0,(int32_t)c->r[28],1); // 801EDB64
  if (!crb(c,2)) { goto L_801EDB70; } // 801EDB68
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[16]=c->ps1[16]=RF32(ea);} // 801EDB6C
L_801EDB70:;
  c->lr=0x801EDB74u; f_801CD130(c); // 801EDB70
  c->lr=0x801EDB78u; f_801CDAA0(c); // 801EDB74
  cmps(c,0,(int32_t)c->r[3],2); // 801EDB78
  if (!crb(c,2)) { goto L_801EDBB8; } // 801EDB7C
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)24); // 801EDB80
  {uint32_t ea=c->r[27]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDB84
  {uint32_t ea=c->r[27]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDB88
  c->r[3]=c->r[27]|c->r[27]; // 801EDB8C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[16]); // 801EDB90
  c->r[4]=c->r[1]+0x00000024u; // 801EDB94
  c->r[6]=c->r[27]+c->r[0]; // 801EDB98
  c->r[5]=c->r[1]+0x00000020u; // 801EDB9C
  {uint32_t ea=c->r[6]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDBA0
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDBA4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801EDBA8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801EDBAC
  c->lr=0x801EDBB4u; f_801ED600(c); // 801EDBB0
  goto L_801EDBE4; // 801EDBB4
L_801EDBB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)24); // 801EDBB8
  {uint32_t ea=c->r[27]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDBBC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[16]); // 801EDBC0
  c->r[3]=c->r[27]+c->r[0]; // 801EDBC4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDBC8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801EDBCC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801EDBD0
  {uint32_t ea=c->r[27]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDBD4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDBD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801EDBDC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801EDBE0
L_801EDBE4:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDBE4
  c->r[3]=c->r[1]+0x00000028u; // 801EDBE8
  c->lr=0x801EDBF0u; f_801EF360(c); // 801EDBEC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDBF0
  c->f[27]=c->f[1]; // 801EDBF4
  c->r[3]=c->r[1]+0x00000028u; // 801EDBF8
  c->f[1]=-c->f[0]; // 801EDBFC
  c->lr=0x801EDC04u; f_801EF360(c); // 801EDC00
  c->f[26]=c->f[1]; // 801EDC04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDC08
  c->r[3]=c->r[1]+0x00000028u; // 801EDC0C
  c->lr=0x801EDC14u; f_801EF440(c); // 801EDC10
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDC14
  c->f[24]=c->f[1]; // 801EDC18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDC1C
  c->r[3]=c->r[1]+0x00000028u; // 801EDC20
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 801EDC24
  c->lr=0x801EDC2Cu; f_801EF440(c); // 801EDC28
  c->f[16]=c->f[1]; // 801EDC2C
L_801EDC30:;
  {uint32_t ea=c->r[2]+0xFFFF9F2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDC30
  c->lr=0x801EDC38u; f_801EF300(c); // 801EDC34
  c->f[2]=c->ps1[2]=S(c->f[27]+c->f[26]); // 801EDC38
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDC3C
  c->f[17]=c->f[1]; // 801EDC40
  c->f[25]=c->ps1[25]=S(c->f[0]*c->f[2]); // 801EDC44
  c->lr=0x801EDC4Cu; f_801CD130(c); // 801EDC48
  c->lr=0x801EDC50u; f_801CDAA0(c); // 801EDC4C
  cmps(c,0,(int32_t)c->r[3],0); // 801EDC50
  if (crb(c,2)) { goto L_801EDC74; } // 801EDC54
  cmps(c,0,(int32_t)c->r[3],3); // 801EDC58
  if (crb(c,2)) { goto L_801EDCB4; } // 801EDC5C
  cmps(c,0,(int32_t)c->r[3],1); // 801EDC60
  if (crb(c,2)) { goto L_801EDCF0; } // 801EDC64
  cmps(c,0,(int32_t)c->r[3],2); // 801EDC68
  if (crb(c,2)) { goto L_801EDD48; } // 801EDC6C
  goto L_801EDDA0; // 801EDC70
L_801EDC74:;
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[27]); // 801EDC74
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDC78
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[26]); // 801EDC7C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801EDC80
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[27]); // 801EDC84
  c->f[22]=c->ps1[22]=S(c->f[31]*c->f[26]); // 801EDC88
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[27]); // 801EDC8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801EDC90
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[26]); // 801EDC94
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[27]); // 801EDC98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801EDC9C
  c->f[18]=c->ps1[18]=S(c->f[29]*c->f[26]); // 801EDCA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801EDCA4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801EDCA8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801EDCAC
  goto L_801EDDA0; // 801EDCB0
L_801EDCB4:;
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[25]); // 801EDCB4
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDCB8
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[25]); // 801EDCBC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801EDCC0
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[25]); // 801EDCC4
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[25]); // 801EDCC8
  c->f[22]=c->f[23]; // 801EDCCC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801EDCD0
  c->f[20]=c->f[21]; // 801EDCD4
  c->f[18]=c->f[19]; // 801EDCD8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801EDCDC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801EDCE0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801EDCE4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801EDCE8
  goto L_801EDDA0; // 801EDCEC
L_801EDCF0:;
  c->f[5]=c->ps1[5]=S(c->f[27]*c->f[24]); // 801EDCF0
  c->f[6]=c->ps1[6]=S(c->f[26]*c->f[24]); // 801EDCF4
  c->f[7]=c->ps1[7]=S(c->f[17]*c->f[16]); // 801EDCF8
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[5]); // 801EDCFC
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[6]); // 801EDD00
  c->f[4]=c->ps1[4]=S(c->f[31]*c->f[7]); // 801EDD04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801EDD08
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[7]); // 801EDD0C
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[7]); // 801EDD10
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 801EDD14
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[7]); // 801EDD18
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[5]); // 801EDD1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 801EDD20
  c->f[22]=c->ps1[22]=S(c->f[31]*c->f[6]); // 801EDD24
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[5]); // 801EDD28
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801EDD2C
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[6]); // 801EDD30
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[5]); // 801EDD34
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801EDD38
  c->f[18]=c->ps1[18]=S(c->f[29]*c->f[6]); // 801EDD3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801EDD40
  goto L_801EDDA0; // 801EDD44
L_801EDD48:;
  c->f[6]=c->ps1[6]=S(c->f[27]*c->f[16]); // 801EDD48
  c->f[7]=c->ps1[7]=S(c->f[26]*c->f[16]); // 801EDD4C
  c->f[4]=c->ps1[4]=S(c->f[27]*c->f[24]); // 801EDD50
  c->f[5]=c->ps1[5]=S(c->f[26]*c->f[24]); // 801EDD54
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[6]); // 801EDD58
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[7]); // 801EDD5C
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[6]); // 801EDD60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801EDD64
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[7]); // 801EDD68
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[6]); // 801EDD6C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801EDD70
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[7]); // 801EDD74
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[4]); // 801EDD78
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 801EDD7C
  c->f[22]=c->ps1[22]=S(c->f[31]*c->f[5]); // 801EDD80
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[4]); // 801EDD84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801EDD88
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[5]); // 801EDD8C
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[4]); // 801EDD90
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801EDD94
  c->f[18]=c->ps1[18]=S(c->f[29]*c->f[5]); // 801EDD98
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801EDD9C
L_801EDDA0:;
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDDA0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDDA4
  c->f[4]=c->ps1[4]=S(c->f[25]*c->f[1]); // 801EDDA8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDDAC
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[0]); // 801EDDB0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDDB4
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDDB8
  c->f[2]=c->ps1[2]=S(c->f[25]*c->f[2]); // 801EDDBC
  c->f[1]=c->ps1[1]=S(c->f[25]*c->f[1]); // 801EDDC0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[4]);} // 801EDDC4
  fcmp(c,0,c->f[23],c->f[0]); // 801EDDC8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 801EDDCC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801EDDD0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801EDDD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDDD8
  if (!crb(c,2)) { goto L_801EDDE8; } // 801EDDDC
  c->r[0]=0u+0x00000000u; // 801EDDE0
  goto L_801EDE18; // 801EDDE4
L_801EDDE8:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDDE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 801EDDEC
  c->lr=0x801EDDF4u; f_80217784(c); // 801EDDF0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDDF4
  if (!crb(c,0)) { goto L_801EDE0C; } // 801EDDF8
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDDFC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 801EDE00
  c->lr=0x801EDE08u; f_80217784(c); // 801EDE04
  goto L_801EDE14; // 801EDE08
L_801EDE0C:;
  c->r[3]=0u+0x00010000u; // 801EDE0C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDE10
L_801EDE14:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDE14
L_801EDE18:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDE18
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EDE1C
  fcmp(c,0,c->f[22],c->f[0]); // 801EDE20
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDE24
  if (!crb(c,2)) { goto L_801EDE34; } // 801EDE28
  c->r[0]=0u+0x00000000u; // 801EDE2C
  goto L_801EDE64; // 801EDE30
L_801EDE34:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDE34
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[22]); // 801EDE38
  c->lr=0x801EDE40u; f_80217784(c); // 801EDE3C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDE40
  if (!crb(c,0)) { goto L_801EDE58; } // 801EDE44
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDE48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[22]); // 801EDE4C
  c->lr=0x801EDE54u; f_80217784(c); // 801EDE50
  goto L_801EDE60; // 801EDE54
L_801EDE58:;
  c->r[3]=0u+0x00010000u; // 801EDE58
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDE5C
L_801EDE60:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDE60
L_801EDE64:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[17]=c->ps1[17]=RF32(ea);} // 801EDE64
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDE68
  W16(c->r[30]+0x00000002u,c->r[0]); // 801EDE6C
  fcmp(c,0,c->f[17],c->f[0]); // 801EDE70
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDE74
  if (!crb(c,2)) { goto L_801EDE84; } // 801EDE78
  c->r[0]=0u+0x00000000u; // 801EDE7C
  goto L_801EDEB4; // 801EDE80
L_801EDE84:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDE84
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EDE88
  c->lr=0x801EDE90u; f_80217784(c); // 801EDE8C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDE90
  if (!crb(c,0)) { goto L_801EDEA8; } // 801EDE94
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDE98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EDE9C
  c->lr=0x801EDEA4u; f_80217784(c); // 801EDEA0
  goto L_801EDEB0; // 801EDEA4
L_801EDEA8:;
  c->r[3]=0u+0x00010000u; // 801EDEA8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDEAC
L_801EDEB0:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDEB0
L_801EDEB4:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDEB4
  W16(c->r[30]+0x00000004u,c->r[0]); // 801EDEB8
  fcmp(c,0,c->f[21],c->f[0]); // 801EDEBC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDEC0
  if (!crb(c,2)) { goto L_801EDED0; } // 801EDEC4
  c->r[0]=0u+0x00000000u; // 801EDEC8
  goto L_801EDF00; // 801EDECC
L_801EDED0:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDED0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[21]); // 801EDED4
  c->lr=0x801EDEDCu; f_80217784(c); // 801EDED8
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDEDC
  if (!crb(c,0)) { goto L_801EDEF4; } // 801EDEE0
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDEE4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[21]); // 801EDEE8
  c->lr=0x801EDEF0u; f_80217784(c); // 801EDEEC
  goto L_801EDEFC; // 801EDEF0
L_801EDEF4:;
  c->r[3]=0u+0x00010000u; // 801EDEF4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDEF8
L_801EDEFC:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDEFC
L_801EDF00:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF00
  W16(c->r[30]+0x00000006u,c->r[0]); // 801EDF04
  fcmp(c,0,c->f[20],c->f[0]); // 801EDF08
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDF0C
  if (!crb(c,2)) { goto L_801EDF1C; } // 801EDF10
  c->r[0]=0u+0x00000000u; // 801EDF14
  goto L_801EDF4C; // 801EDF18
L_801EDF1C:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF1C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[20]); // 801EDF20
  c->lr=0x801EDF28u; f_80217784(c); // 801EDF24
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDF28
  if (!crb(c,0)) { goto L_801EDF40; } // 801EDF2C
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF30
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[20]); // 801EDF34
  c->lr=0x801EDF3Cu; f_80217784(c); // 801EDF38
  goto L_801EDF48; // 801EDF3C
L_801EDF40:;
  c->r[3]=0u+0x00010000u; // 801EDF40
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDF44
L_801EDF48:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDF48
L_801EDF4C:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EDF4C
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF50
  W16(c->r[30]+0x00000008u,c->r[0]); // 801EDF54
  fcmp(c,0,c->f[17],c->f[0]); // 801EDF58
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDF5C
  if (!crb(c,2)) { goto L_801EDF6C; } // 801EDF60
  c->r[0]=0u+0x00000000u; // 801EDF64
  goto L_801EDF9C; // 801EDF68
L_801EDF6C:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF6C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EDF70
  c->lr=0x801EDF78u; f_80217784(c); // 801EDF74
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDF78
  if (!crb(c,0)) { goto L_801EDF90; } // 801EDF7C
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EDF84
  c->lr=0x801EDF8Cu; f_80217784(c); // 801EDF88
  goto L_801EDF98; // 801EDF8C
L_801EDF90:;
  c->r[3]=0u+0x00010000u; // 801EDF90
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDF94
L_801EDF98:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDF98
L_801EDF9C:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF9C
  W16(c->r[30]+0x0000000Au,c->r[0]); // 801EDFA0
  fcmp(c,0,c->f[19],c->f[0]); // 801EDFA4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDFA8
  if (!crb(c,2)) { goto L_801EDFB8; } // 801EDFAC
  c->r[0]=0u+0x00000000u; // 801EDFB0
  goto L_801EDFE8; // 801EDFB4
L_801EDFB8:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDFB8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[19]); // 801EDFBC
  c->lr=0x801EDFC4u; f_80217784(c); // 801EDFC0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EDFC4
  if (!crb(c,0)) { goto L_801EDFDC; } // 801EDFC8
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDFCC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[19]); // 801EDFD0
  c->lr=0x801EDFD8u; f_80217784(c); // 801EDFD4
  goto L_801EDFE4; // 801EDFD8
L_801EDFDC:;
  c->r[3]=0u+0x00010000u; // 801EDFDC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EDFE0
L_801EDFE4:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EDFE4
L_801EDFE8:;
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDFE8
  W16(c->r[30]+0x0000000Cu,c->r[0]); // 801EDFEC
  fcmp(c,0,c->f[18],c->f[0]); // 801EDFF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EDFF4
  if (!crb(c,2)) { goto L_801EE004; } // 801EDFF8
  c->r[0]=0u+0x00000000u; // 801EDFFC
  goto L_801EE034; // 801EE000
L_801EE004:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE004
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[18]); // 801EE008
  c->lr=0x801EE010u; f_80217784(c); // 801EE00C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE010
  if (!crb(c,0)) { goto L_801EE028; } // 801EE014
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE018
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[18]); // 801EE01C
  c->lr=0x801EE024u; f_80217784(c); // 801EE020
  goto L_801EE030; // 801EE024
L_801EE028:;
  c->r[3]=0u+0x00010000u; // 801EE028
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE02C
L_801EE030:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE030
L_801EE034:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE034
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE038
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 801EE03C
  fcmp(c,0,c->f[17],c->f[0]); // 801EE040
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE044
  if (!crb(c,2)) { goto L_801EE054; } // 801EE048
  c->r[0]=0u+0x00000000u; // 801EE04C
  goto L_801EE084; // 801EE050
L_801EE054:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE054
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE058
  c->lr=0x801EE060u; f_80217784(c); // 801EE05C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE060
  if (!crb(c,0)) { goto L_801EE078; } // 801EE064
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE068
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE06C
  c->lr=0x801EE074u; f_80217784(c); // 801EE070
  goto L_801EE080; // 801EE074
L_801EE078:;
  c->r[3]=0u+0x00010000u; // 801EE078
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE07C
L_801EE080:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE080
L_801EE084:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE084
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE088
  W16(c->r[30]+0x00000010u,c->r[0]); // 801EE08C
  fcmp(c,0,c->f[17],c->f[0]); // 801EE090
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE094
  if (!crb(c,2)) { goto L_801EE0A4; } // 801EE098
  c->r[0]=0u+0x00000000u; // 801EE09C
  goto L_801EE0D4; // 801EE0A0
L_801EE0A4:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE0A8
  c->lr=0x801EE0B0u; f_80217784(c); // 801EE0AC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE0B0
  if (!crb(c,0)) { goto L_801EE0C8; } // 801EE0B4
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE0BC
  c->lr=0x801EE0C4u; f_80217784(c); // 801EE0C0
  goto L_801EE0D0; // 801EE0C4
L_801EE0C8:;
  c->r[3]=0u+0x00010000u; // 801EE0C8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE0CC
L_801EE0D0:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE0D0
L_801EE0D4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE0D4
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0D8
  W16(c->r[30]+0x00000012u,c->r[0]); // 801EE0DC
  fcmp(c,0,c->f[17],c->f[0]); // 801EE0E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE0E4
  if (!crb(c,2)) { goto L_801EE0F4; } // 801EE0E8
  c->r[0]=0u+0x00000000u; // 801EE0EC
  goto L_801EE124; // 801EE0F0
L_801EE0F4:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE0F8
  c->lr=0x801EE100u; f_80217784(c); // 801EE0FC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE100
  if (!crb(c,0)) { goto L_801EE118; } // 801EE104
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE108
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE10C
  c->lr=0x801EE114u; f_80217784(c); // 801EE110
  goto L_801EE120; // 801EE114
L_801EE118:;
  c->r[3]=0u+0x00010000u; // 801EE118
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE11C
L_801EE120:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE120
L_801EE124:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE124
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE128
  W16(c->r[30]+0x00000014u,c->r[0]); // 801EE12C
  fcmp(c,0,c->f[17],c->f[0]); // 801EE130
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE134
  if (!crb(c,2)) { goto L_801EE144; } // 801EE138
  c->r[0]=0u+0x00000000u; // 801EE13C
  goto L_801EE174; // 801EE140
L_801EE144:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE144
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE148
  c->lr=0x801EE150u; f_80217784(c); // 801EE14C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE150
  if (!crb(c,0)) { goto L_801EE168; } // 801EE154
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE158
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE15C
  c->lr=0x801EE164u; f_80217784(c); // 801EE160
  goto L_801EE170; // 801EE164
L_801EE168:;
  c->r[3]=0u+0x00010000u; // 801EE168
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE16C
L_801EE170:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE170
L_801EE174:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE174
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE178
  W16(c->r[30]+0x00000016u,c->r[0]); // 801EE17C
  fcmp(c,0,c->f[17],c->f[0]); // 801EE180
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE184
  if (!crb(c,2)) { goto L_801EE194; } // 801EE188
  c->r[0]=0u+0x00000000u; // 801EE18C
  goto L_801EE1C4; // 801EE190
L_801EE194:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE194
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE198
  c->lr=0x801EE1A0u; f_80217784(c); // 801EE19C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE1A0
  if (!crb(c,0)) { goto L_801EE1B8; } // 801EE1A4
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE1A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE1AC
  c->lr=0x801EE1B4u; f_80217784(c); // 801EE1B0
  goto L_801EE1C0; // 801EE1B4
L_801EE1B8:;
  c->r[3]=0u+0x00010000u; // 801EE1B8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE1BC
L_801EE1C0:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE1C0
L_801EE1C4:;
  {uint32_t ea=c->r[1]+0x00000034u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE1C4
  c->r[3]=0u+0x00000000u; // 801EE1C8
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE1CC
  W16(c->r[31]+0x00000000u,c->r[0]); // 801EE1D0
  fcmp(c,0,c->f[17],c->f[0]); // 801EE1D4
  W16(c->r[31]+0x00000002u,c->r[3]); // 801EE1D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE1DC
  if (!crb(c,2)) { goto L_801EE1E8; } // 801EE1E0
  goto L_801EE218; // 801EE1E4
L_801EE1E8:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE1E8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE1EC
  c->lr=0x801EE1F4u; f_80217784(c); // 801EE1F0
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE1F4
  if (!crb(c,0)) { goto L_801EE20C; } // 801EE1F8
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE1FC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE200
  c->lr=0x801EE208u; f_80217784(c); // 801EE204
  goto L_801EE214; // 801EE208
L_801EE20C:;
  c->r[3]=0u+0x00010000u; // 801EE20C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE210
L_801EE214:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE214
L_801EE218:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE218
  c->r[0]=0u+0x00000000u; // 801EE21C
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE220
  W16(c->r[31]+0x00000004u,c->r[3]); // 801EE224
  fcmp(c,0,c->f[17],c->f[0]); // 801EE228
  W16(c->r[31]+0x00000006u,c->r[0]); // 801EE22C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE230
  if (!crb(c,2)) { goto L_801EE23C; } // 801EE234
  goto L_801EE26C; // 801EE238
L_801EE23C:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE23C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE240
  c->lr=0x801EE248u; f_80217784(c); // 801EE244
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE248
  if (!crb(c,0)) { goto L_801EE260; } // 801EE24C
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE250
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE254
  c->lr=0x801EE25Cu; f_80217784(c); // 801EE258
  goto L_801EE268; // 801EE25C
L_801EE260:;
  c->r[3]=0u+0x00010000u; // 801EE260
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE264
L_801EE268:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE268
L_801EE26C:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[17]=c->ps1[17]=RF32(ea);} // 801EE26C
  c->r[3]=0u+0x00000000u; // 801EE270
  {uint32_t ea=c->r[2]+0xFFFF9F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE274
  W16(c->r[31]+0x00000008u,c->r[0]); // 801EE278
  fcmp(c,0,c->f[17],c->f[0]); // 801EE27C
  W16(c->r[31]+0x0000000Au,c->r[3]); // 801EE280
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE284
  if (!crb(c,2)) { goto L_801EE290; } // 801EE288
  goto L_801EE2C0; // 801EE28C
L_801EE290:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE290
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE294
  c->lr=0x801EE29Cu; f_80217784(c); // 801EE298
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801EE29C
  if (!crb(c,0)) { goto L_801EE2B4; } // 801EE2A0
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE2A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 801EE2A8
  c->lr=0x801EE2B0u; f_80217784(c); // 801EE2AC
  goto L_801EE2BC; // 801EE2B0
L_801EE2B4:;
  c->r[3]=0u+0x00010000u; // 801EE2B4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EE2B8
L_801EE2BC:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE2BC
L_801EE2C0:;
  c->r[0]=0u+0x00000000u; // 801EE2C0
  W16(c->r[31]+0x0000000Cu,c->r[3]); // 801EE2C4
  W16(c->r[31]+0x0000000Eu,c->r[0]); // 801EE2C8
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 801EE2CC
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 801EE2D0
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,30,ea,0,0);} // 801EE2D4
  {uint32_t ea=c->r[1]+0x00000150u; c->f[30]=RF64(ea);} // 801EE2D8
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,29,ea,0,0);} // 801EE2DC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[29]=RF64(ea);} // 801EE2E0
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,28,ea,0,0);} // 801EE2E4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[28]=RF64(ea);} // 801EE2E8
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,27,ea,0,0);} // 801EE2EC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[27]=RF64(ea);} // 801EE2F0
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,26,ea,0,0);} // 801EE2F4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[26]=RF64(ea);} // 801EE2F8
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,25,ea,0,0);} // 801EE2FC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[25]=RF64(ea);} // 801EE300
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,24,ea,0,0);} // 801EE304
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[24]=RF64(ea);} // 801EE308
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,23,ea,0,0);} // 801EE30C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[23]=RF64(ea);} // 801EE310
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,22,ea,0,0);} // 801EE314
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[22]=RF64(ea);} // 801EE318
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,21,ea,0,0);} // 801EE31C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[21]=RF64(ea);} // 801EE320
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,20,ea,0,0);} // 801EE324
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[20]=RF64(ea);} // 801EE328
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,19,ea,0,0);} // 801EE32C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[19]=RF64(ea);} // 801EE330
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,18,ea,0,0);} // 801EE334
  {uint32_t ea=c->r[1]+0x00000090u; c->f[18]=RF64(ea);} // 801EE338
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,17,ea,0,0);} // 801EE33C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[17]=RF64(ea);} // 801EE340
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,16,ea,0,0);} // 801EE344
  {uint32_t ea=c->r[1]+0x00000070u; c->f[16]=RF64(ea);} // 801EE348
  c->r[11]=c->r[1]+0x00000070u; // 801EE34C
  c->lr=0x801EE354u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE350
  c->r[0]=R32(c->r[1]+0x00000174u); // 801EE354
  c->lr=c->r[0]; // 801EE358
  c->r[1]=c->r[1]+0x00000170u; // 801EE35C
  return; // 801EE360
}

// InvalidateWaveData__Q44nw4r3snd6detail5VoiceFPCvPCv
void f_801EE370(Ctx* __restrict c) {
  trace_call(0x801EE370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE370
  c->r[0]=c->lr; // 801EE374
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE378
  c->r[11]=c->r[1]+0x00000020u; // 801EE37C
  c->lr=0x801EE384u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE380
  c->r[31]=c->r[3]|c->r[3]; // 801EE384
  c->r[26]=c->r[4]|c->r[4]; // 801EE388
  c->r[30]=c->r[5]|c->r[5]; // 801EE38C
  c->r[28]=0u+0x00000000u; // 801EE390
  c->r[27]=c->r[31]|c->r[31]; // 801EE394
  c->r[29]=0u+0x00000000u; // 801EE398
  goto L_801EE3D0; // 801EE39C
L_801EE3A0:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801EE3A0
  cmps(c,0,(int32_t)c->r[3],0); // 801EE3A4
  if (crb(c,2)) { goto L_801EE3C8; } // 801EE3A8
  c->r[4]=c->r[26]|c->r[26]; // 801EE3AC
  c->r[5]=c->r[30]|c->r[30]; // 801EE3B0
  c->lr=0x801EE3B8u; f_801CE5E0(c); // 801EE3B4
  cmps(c,0,(int32_t)c->r[3],0); // 801EE3B8
  if (crb(c,2)) { goto L_801EE3C8; } // 801EE3BC
  c->r[28]=0u+0x00000001u; // 801EE3C0
  goto L_801EE3DC; // 801EE3C4
L_801EE3C8:;
  c->r[27]=c->r[27]+0x00000010u; // 801EE3C8
  c->r[29]=c->r[29]+0x00000001u; // 801EE3CC
L_801EE3D0:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801EE3D0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EE3D4
  if (crb(c,0)) { IRQCHK(c); goto L_801EE3A0; } // 801EE3D8
L_801EE3DC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EE3DC
  if (crb(c,2)) { goto L_801EE4A4; } // 801EE3E0
  c->r[0]=R8(c->r[31]+0x0000009Eu); // 801EE3E4
  cmps(c,0,(int32_t)c->r[0],0); // 801EE3E8
  if (crb(c,2)) { goto L_801EE474; } // 801EE3EC
  c->r[28]=c->r[31]|c->r[31]; // 801EE3F0
  c->r[30]=0u+0x00000000u; // 801EE3F4
  goto L_801EE460; // 801EE3F8
L_801EE3FC:;
  c->r[27]=c->r[28]|c->r[28]; // 801EE3FC
  c->r[29]=0u+0x00000000u; // 801EE400
  goto L_801EE44C; // 801EE404
L_801EE408:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801EE408
  cmps(c,0,(int32_t)c->r[3],0); // 801EE40C
  if (crb(c,2)) { goto L_801EE444; } // 801EE410
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EE414
  c->r[4]=0u+0x00000000u; // 801EE418
  cmps(c,0,(int32_t)c->r[3],0); // 801EE41C
  if (crb(c,2)) { goto L_801EE434; } // 801EE420
  c->r[0]=R16(c->r[3]+0x00000038u); // 801EE424
  cmpu(c,0,c->r[0],0x00000001u); // 801EE428
  if (!crb(c,2)) { goto L_801EE434; } // 801EE42C
  c->r[4]=0u+0x00000001u; // 801EE430
L_801EE434:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EE434
  if (crb(c,2)) { goto L_801EE444; } // 801EE438
  c->r[4]=0u+0x00000000u; // 801EE43C
  c->lr=0x801EE444u; f_800EF5E0(c); // 801EE440
L_801EE444:;
  c->r[27]=c->r[27]+0x00000004u; // 801EE444
  c->r[29]=c->r[29]+0x00000001u; // 801EE448
L_801EE44C:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 801EE44C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EE450
  if (crb(c,0)) { IRQCHK(c); goto L_801EE408; } // 801EE454
  c->r[28]=c->r[28]+0x00000010u; // 801EE458
  c->r[30]=c->r[30]+0x00000001u; // 801EE45C
L_801EE460:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801EE460
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801EE464
  if (crb(c,0)) { IRQCHK(c); goto L_801EE3FC; } // 801EE468
  c->r[0]=0u+0x00000000u; // 801EE46C
  W8(c->r[31]+0x0000009Eu,c->r[0]); // 801EE470
L_801EE474:;
  c->r[12]=R32(c->r[31]+0x00000094u); // 801EE474
  c->r[0]=0u+0x00000000u; // 801EE478
  W8(c->r[31]+0x000000A0u,c->r[0]); // 801EE47C
  cmps(c,0,(int32_t)c->r[12],0); // 801EE480
  W8(c->r[31]+0x0000009Fu,c->r[0]); // 801EE484
  W8(c->r[31]+0x0000009Du,c->r[0]); // 801EE488
  if (crb(c,2)) { goto L_801EE4A4; } // 801EE48C
  c->r[3]=c->r[31]|c->r[31]; // 801EE490
  c->r[5]=R32(c->r[31]+0x00000098u); // 801EE494
  c->r[4]=0u+0x00000001u; // 801EE498
  c->ctr=c->r[12]; // 801EE49C
  if (true) { c->lr=0x801EE4A4u; dispatch(c,c->ctr); } // 801EE4A0
L_801EE4A4:;
  c->r[11]=c->r[1]+0x00000020u; // 801EE4A4
  c->lr=0x801EE4ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE4A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE4AC
  c->lr=c->r[0]; // 801EE4B0
  c->r[1]=c->r[1]+0x00000020u; // 801EE4B4
  return; // 801EE4B8
}

// fn_801EE4C0
void f_801EE4C0(Ctx* __restrict c) {
  return; // 801EE4C0
}

// fn_801EE4D0
void f_801EE4D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE4D0
  c->r[0]=c->lr; // 801EE4D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE4D8
  c->r[0]=R8(c->r[13]+0xFFFFAE98u); // 801EE4DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EE4E0
  if (!crb(c,2)) { goto L_801EE534; } // 801EE4E4
  c->r[6]=0u+0x80390000u; // 801EE4E8
  c->r[0]=0u+0x00000000u; // 801EE4EC
  c->r[3]=c->r[6]+0x0000520Cu; // 801EE4F0
  c->r[4]=0u+0x801F0000u; // 801EE4F4
  c->r[8]=c->r[3]+0x00000008u; // 801EE4F8
  c->r[5]=0u+0x80390000u; // 801EE4FC
  c->r[7]=c->r[3]+0x00000014u; // 801EE500
  W8(c->r[6]+0x0000520Cu,c->r[0]); // 801EE504
  c->r[4]=c->r[4]+0xFFFFE550u; // 801EE508
  c->r[5]=c->r[5]+0x00005200u; // 801EE50C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EE510
  W32(c->r[3]+0x00000008u,c->r[8]); // 801EE514
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801EE518
  W32(c->r[3]+0x00000010u,c->r[0]); // 801EE51C
  W32(c->r[3]+0x00000014u,c->r[7]); // 801EE520
  W32(c->r[3]+0x00000018u,c->r[7]); // 801EE524
  c->lr=0x801EE52Cu; f_80216C54(c); // 801EE528
  c->r[0]=0u+0x00000001u; // 801EE52C
  W8(c->r[13]+0xFFFFAE98u,c->r[0]); // 801EE530
L_801EE534:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE534
  c->r[3]=0u+0x80390000u; // 801EE538
  c->r[3]=c->r[3]+0x0000520Cu; // 801EE53C
  c->lr=c->r[0]; // 801EE540
  c->r[1]=c->r[1]+0x00000010u; // 801EE544
  return; // 801EE548
}

// fn_801EE550
void f_801EE550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE550
  c->r[0]=c->lr; // 801EE554
  cmps(c,0,(int32_t)c->r[3],0); // 801EE558
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EE560
  c->r[31]=c->r[4]|c->r[4]; // 801EE564
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EE568
  c->r[30]=c->r[3]|c->r[3]; // 801EE56C
  if (crb(c,2)) { goto L_801EE5A4; } // 801EE570
  c->r[3]=addc(c,c->r[3],0x00000010u,0); cr0(c,c->r[3]); // 801EE574
  if (crb(c,2)) { goto L_801EE584; } // 801EE578
  c->r[4]=0u+0x00000000u; // 801EE57C
  c->lr=0x801EE584u; f_801F9DB0(c); // 801EE580
L_801EE584:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 801EE584
  if (crb(c,2)) { goto L_801EE594; } // 801EE588
  c->r[4]=0u+0x00000000u; // 801EE58C
  c->lr=0x801EE594u; f_801F9DB0(c); // 801EE590
L_801EE594:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EE594
  if (!crb(c,1)) { goto L_801EE5A4; } // 801EE598
  c->r[3]=c->r[30]|c->r[30]; // 801EE59C
  c->lr=0x801EE5A4u; f_800B9AD0(c); // 801EE5A0
L_801EE5A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801EE5A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EE5A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EE5AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE5B0
  c->lr=c->r[0]; // 801EE5B4
  c->r[1]=c->r[1]+0x00000010u; // 801EE5B8
  return; // 801EE5BC
}

// fn_801EE5C0
void f_801EE5C0(Ctx* __restrict c) {
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)260); // 801EE5C0
  return; // 801EE5C4
}

// fn_801EE5D0
void f_801EE5D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE5D0
  c->r[0]=c->lr; // 801EE5D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EE5D8
  c->r[11]=c->r[1]+0x00000040u; // 801EE5DC
  c->lr=0x801EE5E4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE5E0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EE5E4
  c->r[22]=c->r[3]|c->r[3]; // 801EE5E8
  c->r[23]=c->r[4]|c->r[4]; // 801EE5EC
  c->r[24]=c->r[5]|c->r[5]; // 801EE5F0
  cmps(c,0,(int32_t)c->r[0],0); // 801EE5F4
  if (!crb(c,2)) { goto L_801EE6B0; } // 801EE5F8
  c->r[4]=0u+0xFC100000u; // 801EE5FC
  c->r[26]=c->r[23]|c->r[23]; // 801EE600
  c->r[0]=c->r[4]+0xFFFFC0FDu; // 801EE604
  c->r[25]=0u+0x00000000u; // 801EE608
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801EE60C
  c->r[27]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[27]); // 801EE610
  if (crb(c,2)) { goto L_801EE680; } // 801EE614
  c->r[31]=c->r[3]+0x00000014u; // 801EE618
  c->r[29]=0u+0x802D0000u; // 801EE61C
  c->r[30]=0u+0x802D0000u; // 801EE620
  goto L_801EE678; // 801EE624
L_801EE628:;
  cmps(c,0,(int32_t)c->r[26],0); // 801EE628
  c->r[28]=c->r[26]|c->r[26]; // 801EE62C
  if (crb(c,2)) { goto L_801EE640; } // 801EE630
  c->r[3]=c->r[26]|c->r[26]; // 801EE634
  c->lr=0x801EE63Cu; f_801EB750(c); // 801EE638
  c->r[28]=c->r[3]|c->r[3]; // 801EE63C
L_801EE640:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EE640
  if (!crb(c,2)) { goto L_801EE65C; } // 801EE644
  c->r[3]=c->r[29]+0x00002864u; // 801EE648
  c->r[5]=c->r[30]+0x00002840u; // 801EE64C
  c->r[4]=0u+0x00000233u; // 801EE650
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE654
  c->lr=0x801EE65Cu; f_801F9770(c); // 801EE658
L_801EE65C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801EE65C
  c->r[3]=c->r[22]+0x00000010u; // 801EE660
  c->r[4]=c->r[1]+0x00000008u; // 801EE664
  c->r[5]=c->r[28]+0x000000FCu; // 801EE668
  c->lr=0x801EE670u; f_801FA130(c); // 801EE66C
  c->r[26]=c->r[26]+0x00000104u; // 801EE670
  c->r[25]=c->r[25]+0x00000001u; // 801EE674
L_801EE678:;
  cmpu(c,0,c->r[25],c->r[27]); // 801EE678
  if (crb(c,0)) { IRQCHK(c); goto L_801EE628; } // 801EE67C
L_801EE680:;
  c->r[0]=c->r[23]+c->r[24]; // 801EE680
  cmpu(c,0,c->r[26],c->r[0]); // 801EE684
  if (!crb(c,1)) { goto L_801EE6A8; } // 801EE688
  c->r[3]=0u+0x802D0000u; // 801EE68C
  c->r[5]=0u+0x802D0000u; // 801EE690
  c->r[3]=c->r[3]+0x000026B0u; // 801EE694
  c->r[4]=0u+0x00000040u; // 801EE698
  c->r[5]=c->r[5]+0x000026C8u; // 801EE69C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE6A0
  c->lr=0x801EE6A8u; f_801F9770(c); // 801EE6A4
L_801EE6A8:;
  c->r[0]=0u+0x00000001u; // 801EE6A8
  W8(c->r[22]+0x00000000u,c->r[0]); // 801EE6AC
L_801EE6B0:;
  c->r[11]=c->r[1]+0x00000040u; // 801EE6B0
  c->lr=0x801EE6B8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE6B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EE6B8
  c->lr=c->r[0]; // 801EE6BC
  c->r[1]=c->r[1]+0x00000040u; // 801EE6C0
  return; // 801EE6C4
}

// fn_801EE6D0
void f_801EE6D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE6D0
  c->r[0]=c->lr; // 801EE6D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EE6D8
  c->r[11]=c->r[1]+0x00000040u; // 801EE6DC
  c->lr=0x801EE6E4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE6E0
  c->r[25]=c->r[3]|c->r[3]; // 801EE6E4
  c->r[26]=c->r[4]|c->r[4]; // 801EE6E8
  c->r[27]=c->r[5]|c->r[5]; // 801EE6EC
  c->r[28]=c->r[6]|c->r[6]; // 801EE6F0
  c->r[29]=c->r[7]|c->r[7]; // 801EE6F4
  c->r[30]=c->r[8]|c->r[8]; // 801EE6F8
  c->lr=0x801EE700u; f_800CBAA0(c); // 801EE6FC
  c->r[0]=R32(c->r[25]+0x00000010u); // 801EE700
  c->r[24]=c->r[3]|c->r[3]; // 801EE704
  cmps(c,0,(int32_t)c->r[0],0); // 801EE708
  if (!crb(c,2)) { goto L_801EE7F4; } // 801EE70C
  c->r[22]=0u+0x00000000u; // 801EE710
  if (!crb(c,2)) { goto L_801EE7DC; } // 801EE714
  c->r[0]=R32(c->r[25]+0x00000004u); // 801EE718
  cmps(c,0,(int32_t)c->r[0],0); // 801EE71C
  if (!crb(c,2)) { goto L_801EE740; } // 801EE720
  c->r[3]=0u+0x802D0000u; // 801EE724
  c->r[5]=0u+0x802D0000u; // 801EE728
  c->r[3]=c->r[3]+0x00002834u; // 801EE72C
  c->r[4]=0u+0x000001F1u; // 801EE730
  c->r[5]=c->r[5]+0x00002810u; // 801EE734
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE738
  c->lr=0x801EE740u; f_801F9770(c); // 801EE73C
L_801EE740:;
  c->r[22]=R32(c->r[25]+0x00000008u); // 801EE740
  cmps(c,0,(int32_t)c->r[22],0); // 801EE744
  if (!crb(c,2)) { goto L_801EE768; } // 801EE748
  c->r[3]=0u+0x802D0000u; // 801EE74C
  c->r[5]=0u+0x802D0000u; // 801EE750
  c->r[3]=c->r[3]+0x000027D4u; // 801EE754
  c->r[4]=0u+0x0000023Du; // 801EE758
  c->r[5]=c->r[5]+0x000027B0u; // 801EE75C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE760
  c->lr=0x801EE768u; f_801F9770(c); // 801EE764
L_801EE768:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF04u,0); cr0(c,c->r[23]); // 801EE768
  if (!crb(c,2)) { goto L_801EE78C; } // 801EE76C
  c->r[3]=0u+0x802D0000u; // 801EE770
  c->r[5]=0u+0x802D0000u; // 801EE774
  c->r[3]=c->r[3]+0x00002804u; // 801EE778
  c->r[4]=0u+0x00000193u; // 801EE77C
  c->r[5]=c->r[5]+0x000027E0u; // 801EE780
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE784
  c->lr=0x801EE78Cu; f_801F9770(c); // 801EE788
L_801EE78C:;
  c->r[0]=R32(c->r[23]+0x000000A8u); // 801EE78C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801EE790
  if (!crb(c,1)) { goto L_801EE7A0; } // 801EE794
  c->r[22]=0u+0x00000000u; // 801EE798
  goto L_801EE7DC; // 801EE79C
L_801EE7A0:;
  c->r[4]=R32(c->r[23]+0x0000008Cu); // 801EE7A0
  c->r[3]=c->r[23]|c->r[23]; // 801EE7A4
  c->r[0]=R32(c->r[23]+0x00000090u); // 801EE7A8
  c->r[22]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801EE7AC
  c->lr=0x801EE7B4u; f_801EC680(c); // 801EE7B0
  c->r[3]=c->r[23]|c->r[23]; // 801EE7B4
  c->lr=0x801EE7BCu; f_801EC360(c); // 801EE7B8
  c->r[12]=R32(c->r[23]+0x00000094u); // 801EE7BC
  cmps(c,0,(int32_t)c->r[12],0); // 801EE7C0
  if (crb(c,2)) { goto L_801EE7DC; } // 801EE7C4
  c->r[3]=c->r[23]|c->r[23]; // 801EE7C8
  c->r[5]=R32(c->r[23]+0x00000098u); // 801EE7CC
  c->r[4]=0u+0x00000002u; // 801EE7D0
  c->ctr=c->r[12]; // 801EE7D4
  if (true) { c->lr=0x801EE7DCu; dispatch(c,c->ctr); } // 801EE7D8
L_801EE7DC:;
  cmps(c,0,(int32_t)c->r[22],0); // 801EE7DC
  if (!crb(c,2)) { goto L_801EE7F4; } // 801EE7E0
  c->r[3]=c->r[24]|c->r[24]; // 801EE7E4
  c->lr=0x801EE7ECu; f_800CBAE0(c); // 801EE7E8
  c->r[3]=0u+0x00000000u; // 801EE7EC
  goto L_801EEAEC; // 801EE7F0
L_801EE7F4:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 801EE7F4
  cmps(c,0,(int32_t)c->r[0],0); // 801EE7F8
  if (!crb(c,2)) { goto L_801EE81C; } // 801EE7FC
  c->r[3]=0u+0x802D0000u; // 801EE800
  c->r[5]=0u+0x802D0000u; // 801EE804
  c->r[3]=c->r[3]+0x00002834u; // 801EE808
  c->r[4]=0u+0x000001F1u; // 801EE80C
  c->r[5]=c->r[5]+0x00002810u; // 801EE810
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE814
  c->lr=0x801EE81Cu; f_801F9770(c); // 801EE818
L_801EE81C:;
  c->r[22]=R32(c->r[25]+0x00000014u); // 801EE81C
  cmps(c,0,(int32_t)c->r[22],0); // 801EE820
  if (!crb(c,2)) { goto L_801EE844; } // 801EE824
  c->r[3]=0u+0x802D0000u; // 801EE828
  c->r[5]=0u+0x802D0000u; // 801EE82C
  c->r[3]=c->r[3]+0x000027D4u; // 801EE830
  c->r[4]=0u+0x0000023Du; // 801EE834
  c->r[5]=c->r[5]+0x000027B0u; // 801EE838
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE83C
  c->lr=0x801EE844u; f_801F9770(c); // 801EE840
L_801EE844:;
  c->r[31]=addc(c,c->r[22],0xFFFFFF04u,0); cr0(c,c->r[31]); // 801EE844
  if (!crb(c,2)) { goto L_801EE868; } // 801EE848
  c->r[3]=0u+0x802D0000u; // 801EE84C
  c->r[5]=0u+0x802D0000u; // 801EE850
  c->r[3]=c->r[3]+0x00002804u; // 801EE854
  c->r[4]=0u+0x00000193u; // 801EE858
  c->r[5]=c->r[5]+0x000027E0u; // 801EE85C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE860
  c->lr=0x801EE868u; f_801F9770(c); // 801EE864
L_801EE868:;
  c->r[3]=c->r[31]|c->r[31]; // 801EE868
  c->r[4]=c->r[26]|c->r[26]; // 801EE86C
  c->r[5]=c->r[27]|c->r[27]; // 801EE870
  c->r[6]=c->r[28]|c->r[28]; // 801EE874
  c->r[7]=c->r[29]|c->r[29]; // 801EE878
  c->r[8]=c->r[30]|c->r[30]; // 801EE87C
  c->lr=0x801EE884u; f_801EC010(c); // 801EE880
  cmps(c,0,(int32_t)c->r[3],0); // 801EE884
  if (!crb(c,2)) { goto L_801EE8B8; } // 801EE888
  c->r[3]=0u+0x802D0000u; // 801EE88C
  c->r[5]=0u+0x802D0000u; // 801EE890
  c->r[3]=c->r[3]+0x000026B0u; // 801EE894
  c->r[4]=0u+0x00000080u; // 801EE898
  c->r[5]=c->r[5]+0x0000270Cu; // 801EE89C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE8A0
  c->lr=0x801EE8A8u; f_801F9810(c); // 801EE8A4
  c->r[3]=c->r[24]|c->r[24]; // 801EE8A8
  c->lr=0x801EE8B0u; f_800CBAE0(c); // 801EE8AC
  c->r[3]=0u+0x00000000u; // 801EE8B0
  goto L_801EEAEC; // 801EE8B4
L_801EE8B8:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 801EE8B8
  W32(c->r[31]+0x000000A8u,c->r[0]); // 801EE8BC
  c->lr=0x801EE8C4u; f_800CBAA0(c); // 801EE8C0
  cmps(c,0,(int32_t)c->r[31],0); // 801EE8C4
  c->r[26]=c->r[3]|c->r[3]; // 801EE8C8
  if (!crb(c,2)) { goto L_801EE8EC; } // 801EE8CC
  c->r[3]=0u+0x802D0000u; // 801EE8D0
  c->r[5]=0u+0x802D0000u; // 801EE8D4
  c->r[3]=c->r[3]+0x00002864u; // 801EE8D8
  c->r[4]=0u+0x00000233u; // 801EE8DC
  c->r[5]=c->r[5]+0x00002840u; // 801EE8E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE8E4
  c->lr=0x801EE8ECu; f_801F9770(c); // 801EE8E8
L_801EE8EC:;
  c->r[30]=c->r[31]+0x000000FCu; // 801EE8EC
  c->r[3]=c->r[25]+0x00000010u; // 801EE8F0
  c->r[4]=c->r[30]|c->r[30]; // 801EE8F4
  c->lr=0x801EE8FCu; f_801FA230(c); // 801EE8F8
  c->r[27]=c->r[25]+0x00000008u; // 801EE8FC
  c->r[22]=0u+0x802D0000u; // 801EE900
  c->r[23]=0u+0x802D0000u; // 801EE904
  c->r[29]=0u+0x802D0000u; // 801EE908
  c->r[28]=0u+0x802D0000u; // 801EE90C
  goto L_801EE964; // 801EE910
L_801EE914:;
  c->r[21]=R32(c->r[27]+0x00000004u); // 801EE914
  cmps(c,0,(int32_t)c->r[21],0); // 801EE918
  if (!crb(c,2)) { goto L_801EE934; } // 801EE91C
  c->r[3]=c->r[22]+0x000027D4u; // 801EE920
  c->r[5]=c->r[23]+0x000027B0u; // 801EE924
  c->r[4]=0u+0x0000023Du; // 801EE928
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE92C
  c->lr=0x801EE934u; f_801F9770(c); // 801EE930
L_801EE934:;
  c->r[21]=addc(c,c->r[21],0xFFFFFF04u,0); cr0(c,c->r[21]); // 801EE934
  if (!crb(c,2)) { goto L_801EE950; } // 801EE938
  c->r[3]=c->r[29]+0x00002804u; // 801EE93C
  c->r[5]=c->r[28]+0x000027E0u; // 801EE940
  c->r[4]=0u+0x00000193u; // 801EE944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE948
  c->lr=0x801EE950u; f_801F9770(c); // 801EE94C
L_801EE950:;
  c->r[3]=R32(c->r[21]+0x000000A8u); // 801EE950
  c->r[0]=R32(c->r[31]+0x000000A8u); // 801EE954
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801EE958
  if (!crb(c,1)) { goto L_801EE970; } // 801EE95C
  c->r[27]=R32(c->r[27]+0x00000004u); // 801EE960
L_801EE964:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 801EE964
  cmpu(c,0,c->r[27],c->r[0]); // 801EE968
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE914; } // 801EE96C
L_801EE970:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EE970
  if (!crb(c,2)) { goto L_801EE994; } // 801EE974
  c->r[3]=0u+0x802D0000u; // 801EE978
  c->r[5]=0u+0x802D0000u; // 801EE97C
  c->r[3]=c->r[3]+0x00002864u; // 801EE980
  c->r[4]=0u+0x00000233u; // 801EE984
  c->r[5]=c->r[5]+0x00002840u; // 801EE988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE98C
  c->lr=0x801EE994u; f_801F9770(c); // 801EE990
L_801EE994:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 801EE994
  c->r[5]=c->r[30]|c->r[30]; // 801EE998
  c->r[3]=c->r[25]+0x00000004u; // 801EE99C
  c->r[4]=c->r[1]+0x00000008u; // 801EE9A0
  c->lr=0x801EE9A8u; f_801FA130(c); // 801EE9A4
  c->r[3]=c->r[26]|c->r[26]; // 801EE9A8
  c->lr=0x801EE9B0u; f_800CBAE0(c); // 801EE9AC
  cmps(c,0,(int32_t)c->r[31],0); // 801EE9B0
  c->r[27]=c->r[25]+0x00000008u; // 801EE9B4
  if (!crb(c,2)) { goto L_801EE9D8; } // 801EE9B8
  c->r[3]=0u+0x802D0000u; // 801EE9BC
  c->r[5]=0u+0x802D0000u; // 801EE9C0
  c->r[3]=c->r[3]+0x000027A4u; // 801EE9C4
  c->r[4]=0u+0x00000228u; // 801EE9C8
  c->r[5]=c->r[5]+0x00002780u; // 801EE9CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE9D0
  c->lr=0x801EE9D8u; f_801F9770(c); // 801EE9D4
L_801EE9D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EE9D8
  if (!crb(c,2)) { goto L_801EE9FC; } // 801EE9DC
  c->r[3]=0u+0x802D0000u; // 801EE9E0
  c->r[5]=0u+0x802D0000u; // 801EE9E4
  c->r[3]=c->r[3]+0x00002864u; // 801EE9E8
  c->r[4]=0u+0x00000233u; // 801EE9EC
  c->r[5]=c->r[5]+0x00002840u; // 801EE9F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE9F4
  c->lr=0x801EE9FCu; f_801F9770(c); // 801EE9F8
L_801EE9FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EE9FC
  if (!crb(c,2)) { goto L_801EEA20; } // 801EEA00
  c->r[3]=0u+0x802D0000u; // 801EEA04
  c->r[5]=0u+0x802D0000u; // 801EEA08
  c->r[3]=c->r[3]+0x00002774u; // 801EEA0C
  c->r[4]=0u+0x0000021Eu; // 801EEA10
  c->r[5]=c->r[5]+0x00002750u; // 801EEA14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEA18
  c->lr=0x801EEA20u; f_801F9770(c); // 801EEA1C
L_801EEA20:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EEA20
  if (!crb(c,2)) { goto L_801EEA44; } // 801EEA24
  c->r[3]=0u+0x802D0000u; // 801EEA28
  c->r[5]=0u+0x802D0000u; // 801EEA2C
  c->r[3]=c->r[3]+0x00002894u; // 801EEA30
  c->r[4]=0u+0x00000148u; // 801EEA34
  c->r[5]=c->r[5]+0x00002870u; // 801EEA38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEA3C
  c->lr=0x801EEA44u; f_801F9770(c); // 801EEA40
L_801EEA44:;
  c->r[26]=0u+0x802D0000u; // 801EEA44
  c->r[25]=0u+0x802D0000u; // 801EEA48
  goto L_801EEACC; // 801EEA4C
L_801EEA50:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EEA50
  if (!crb(c,2)) { goto L_801EEA6C; } // 801EEA54
  c->r[3]=c->r[26]+0x000027D4u; // 801EEA58
  c->r[5]=c->r[25]+0x000027B0u; // 801EEA5C
  c->r[4]=0u+0x0000023Du; // 801EEA60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEA64
  c->lr=0x801EEA6Cu; f_801F9770(c); // 801EEA68
L_801EEA6C:;
  c->r[0]=R32(c->r[30]+0xFFFFFFACu); // 801EEA6C
  c->r[21]=c->r[30]+0xFFFFFF04u; // 801EEA70
  cmps(c,0,(int32_t)c->r[0],1); // 801EEA74
  if (!crb(c,1)) { goto L_801EEAD4; } // 801EEA78
  cmps(c,0,(int32_t)c->r[30],0); // 801EEA7C
  if (!crb(c,2)) { goto L_801EEA98; } // 801EEA80
  c->r[3]=c->r[26]+0x000027D4u; // 801EEA84
  c->r[5]=c->r[25]+0x000027B0u; // 801EEA88
  c->r[4]=0u+0x0000023Du; // 801EEA8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEA90
  c->lr=0x801EEA98u; f_801F9770(c); // 801EEA94
L_801EEA98:;
  c->r[0]=R32(c->r[21]+0x000000A8u); // 801EEA98
  cmps(c,0,(int32_t)c->r[0],255); // 801EEA9C
  if (crb(c,2)) { goto L_801EEAC8; } // 801EEAA0
  cmps(c,0,(int32_t)c->r[30],0); // 801EEAA4
  if (!crb(c,2)) { goto L_801EEAC0; } // 801EEAA8
  c->r[3]=c->r[26]+0x000027D4u; // 801EEAAC
  c->r[5]=c->r[25]+0x000027B0u; // 801EEAB0
  c->r[4]=0u+0x0000023Du; // 801EEAB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEAB8
  c->lr=0x801EEAC0u; f_801F9770(c); // 801EEABC
L_801EEAC0:;
  c->r[3]=c->r[21]|c->r[21]; // 801EEAC0
  c->lr=0x801EEAC8u; f_801ECE50(c); // 801EEAC4
L_801EEAC8:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801EEAC8
L_801EEACC:;
  cmpu(c,0,c->r[30],c->r[27]); // 801EEACC
  if (!crb(c,2)) { IRQCHK(c); goto L_801EEA50; } // 801EEAD0
L_801EEAD4:;
  c->lr=0x801EEAD8u; f_801D5DD0(c); // 801EEAD4
  c->r[4]=c->r[31]|c->r[31]; // 801EEAD8
  c->lr=0x801EEAE0u; f_801D5EC0(c); // 801EEADC
  c->r[3]=c->r[24]|c->r[24]; // 801EEAE0
  c->lr=0x801EEAE8u; f_800CBAE0(c); // 801EEAE4
  c->r[3]=c->r[31]|c->r[31]; // 801EEAE8
L_801EEAEC:;
  c->r[11]=c->r[1]+0x00000040u; // 801EEAEC
  c->lr=0x801EEAF4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EEAF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EEAF4
  c->lr=c->r[0]; // 801EEAF8
  c->r[1]=c->r[1]+0x00000040u; // 801EEAFC
  return; // 801EEB00
}

// fn_801EEB10
void f_801EEB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEB10
  c->r[0]=c->lr; // 801EEB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EEB18
  c->r[11]=c->r[1]+0x00000030u; // 801EEB1C
  c->lr=0x801EEB24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EEB20
  cmps(c,0,(int32_t)c->r[4],0); // 801EEB24
  c->r[27]=c->r[3]|c->r[3]; // 801EEB28
  c->r[29]=c->r[4]|c->r[4]; // 801EEB2C
  if (!crb(c,2)) { goto L_801EEB50; } // 801EEB30
  c->r[3]=0u+0x802D0000u; // 801EEB34
  c->r[5]=0u+0x802D0000u; // 801EEB38
  c->r[3]=c->r[3]+0x000026B0u; // 801EEB3C
  c->r[4]=0u+0x00000094u; // 801EEB40
  c->r[5]=c->r[5]+0x00002728u; // 801EEB44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEB48
  c->lr=0x801EEB50u; f_801F9770(c); // 801EEB4C
L_801EEB50:;
  c->lr=0x801EEB54u; f_800CBAA0(c); // 801EEB50
  c->r[31]=c->r[3]|c->r[3]; // 801EEB54
  c->lr=0x801EEB5Cu; f_801D5DD0(c); // 801EEB58
  c->r[4]=c->r[29]|c->r[29]; // 801EEB5C
  c->lr=0x801EEB64u; f_801D5F40(c); // 801EEB60
  c->lr=0x801EEB68u; f_800CBAA0(c); // 801EEB64
  cmps(c,0,(int32_t)c->r[29],0); // 801EEB68
  c->r[30]=c->r[3]|c->r[3]; // 801EEB6C
  if (!crb(c,2)) { goto L_801EEB90; } // 801EEB70
  c->r[3]=0u+0x802D0000u; // 801EEB74
  c->r[5]=0u+0x802D0000u; // 801EEB78
  c->r[3]=c->r[3]+0x00002864u; // 801EEB7C
  c->r[4]=0u+0x00000233u; // 801EEB80
  c->r[5]=c->r[5]+0x00002840u; // 801EEB84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEB88
  c->lr=0x801EEB90u; f_801F9770(c); // 801EEB8C
L_801EEB90:;
  c->r[28]=c->r[29]+0x000000FCu; // 801EEB90
  c->r[3]=c->r[27]+0x00000004u; // 801EEB94
  c->r[4]=c->r[28]|c->r[28]; // 801EEB98
  c->lr=0x801EEBA0u; f_801FA230(c); // 801EEB9C
  cmps(c,0,(int32_t)c->r[29],0); // 801EEBA0
  c->r[29]=c->r[27]+0x00000014u; // 801EEBA4
  if (!crb(c,2)) { goto L_801EEBC8; } // 801EEBA8
  c->r[3]=0u+0x802D0000u; // 801EEBAC
  c->r[5]=0u+0x802D0000u; // 801EEBB0
  c->r[3]=c->r[3]+0x00002864u; // 801EEBB4
  c->r[4]=0u+0x00000233u; // 801EEBB8
  c->r[5]=c->r[5]+0x00002840u; // 801EEBBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEBC0
  c->lr=0x801EEBC8u; f_801F9770(c); // 801EEBC4
L_801EEBC8:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801EEBC8
  c->r[5]=c->r[28]|c->r[28]; // 801EEBCC
  c->r[3]=c->r[27]+0x00000010u; // 801EEBD0
  c->r[4]=c->r[1]+0x00000008u; // 801EEBD4
  c->lr=0x801EEBDCu; f_801FA130(c); // 801EEBD8
  c->r[3]=c->r[30]|c->r[30]; // 801EEBDC
  c->lr=0x801EEBE4u; f_800CBAE0(c); // 801EEBE0
  c->r[3]=c->r[31]|c->r[31]; // 801EEBE4
  c->lr=0x801EEBECu; f_800CBAE0(c); // 801EEBE8
  c->r[11]=c->r[1]+0x00000030u; // 801EEBEC
  c->lr=0x801EEBF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EEBF0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EEBF4
  c->lr=c->r[0]; // 801EEBF8
  c->r[1]=c->r[1]+0x00000030u; // 801EEBFC
  return; // 801EEC00
}

// fn_801EEC10
void f_801EEC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEC10
  c->r[0]=c->lr; // 801EEC14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EEC18
  c->r[11]=c->r[1]+0x00000020u; // 801EEC1C
  c->lr=0x801EEC24u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EEC20
  c->r[31]=R32(c->r[3]+0x00000008u); // 801EEC24
  c->r[29]=c->r[3]|c->r[3]; // 801EEC28
  c->r[30]=c->r[3]+0x00000008u; // 801EEC2C
  c->r[27]=0u+0x802D0000u; // 801EEC30
  c->r[26]=0u+0x802D0000u; // 801EEC34
  goto L_801EEC64; // 801EEC38
L_801EEC3C:;
  c->r[28]=c->r[31]|c->r[31]; cr0(c,c->r[28]); // 801EEC3C
  c->r[31]=R32(c->r[31]+0x00000000u); // 801EEC40
  if (!crb(c,2)) { goto L_801EEC5C; } // 801EEC44
  c->r[3]=c->r[27]+0x000027D4u; // 801EEC48
  c->r[5]=c->r[26]+0x000027B0u; // 801EEC4C
  c->r[4]=0u+0x0000023Du; // 801EEC50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEC54
  c->lr=0x801EEC5Cu; f_801F9770(c); // 801EEC58
L_801EEC5C:;
  c->r[3]=c->r[28]+0xFFFFFF04u; // 801EEC5C
  c->lr=0x801EEC64u; f_801EBA20(c); // 801EEC60
L_801EEC64:;
  cmpu(c,0,c->r[31],c->r[30]); // 801EEC64
  if (!crb(c,2)) { IRQCHK(c); goto L_801EEC3C; } // 801EEC68
  c->r[30]=R32(c->r[29]+0x00000008u); // 801EEC6C
  c->r[31]=c->r[29]+0x00000008u; // 801EEC70
  c->r[27]=0u+0x802D0000u; // 801EEC74
  c->r[26]=0u+0x802D0000u; // 801EEC78
  goto L_801EECA8; // 801EEC7C
L_801EEC80:;
  c->r[28]=c->r[30]|c->r[30]; cr0(c,c->r[28]); // 801EEC80
  c->r[30]=R32(c->r[30]+0x00000000u); // 801EEC84
  if (!crb(c,2)) { goto L_801EECA0; } // 801EEC88
  c->r[3]=c->r[27]+0x000027D4u; // 801EEC8C
  c->r[5]=c->r[26]+0x000027B0u; // 801EEC90
  c->r[4]=0u+0x0000023Du; // 801EEC94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEC98
  c->lr=0x801EECA0u; f_801F9770(c); // 801EEC9C
L_801EECA0:;
  c->r[3]=c->r[28]+0xFFFFFF04u; // 801EECA0
  c->lr=0x801EECA8u; f_801EBAC0(c); // 801EECA4
L_801EECA8:;
  cmpu(c,0,c->r[30],c->r[31]); // 801EECA8
  if (!crb(c,2)) { IRQCHK(c); goto L_801EEC80; } // 801EECAC
  c->lr=0x801EECB4u; f_800CBAA0(c); // 801EECB0
  {uint32_t ea=c->r[29]+0x00000008u; c->r[31]=R32(ea); c->r[29]=ea;} // 801EECB4
  c->r[30]=c->r[3]|c->r[3]; // 801EECB8
  c->r[27]=0u+0x802D0000u; // 801EECBC
  c->r[28]=0u+0x802D0000u; // 801EECC0
  goto L_801EECF0; // 801EECC4
L_801EECC8:;
  c->r[26]=c->r[31]|c->r[31]; cr0(c,c->r[26]); // 801EECC8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801EECCC
  if (!crb(c,2)) { goto L_801EECE8; } // 801EECD0
  c->r[3]=c->r[27]+0x000027D4u; // 801EECD4
  c->r[5]=c->r[28]+0x000027B0u; // 801EECD8
  c->r[4]=0u+0x0000023Du; // 801EECDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EECE0
  c->lr=0x801EECE8u; f_801F9770(c); // 801EECE4
L_801EECE8:;
  c->r[3]=c->r[26]+0xFFFFFF04u; // 801EECE8
  c->lr=0x801EECF0u; f_801EBD50(c); // 801EECEC
L_801EECF0:;
  cmpu(c,0,c->r[31],c->r[29]); // 801EECF0
  if (!crb(c,2)) { IRQCHK(c); goto L_801EECC8; } // 801EECF4
  c->r[3]=c->r[30]|c->r[30]; // 801EECF8
  c->lr=0x801EED00u; f_800CBAE0(c); // 801EECFC
  c->r[11]=c->r[1]+0x00000020u; // 801EED00
  c->lr=0x801EED08u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EED04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EED08
  c->lr=c->r[0]; // 801EED0C
  c->r[1]=c->r[1]+0x00000020u; // 801EED10
  return; // 801EED14
}

// fn_801EED20
void f_801EED20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EED20
  c->r[0]=c->lr; // 801EED24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EED28
  c->r[11]=c->r[1]+0x00000020u; // 801EED2C
  c->lr=0x801EED34u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EED30
  c->r[26]=c->r[3]|c->r[3]; // 801EED34
  c->lr=0x801EED3Cu; f_800CBAA0(c); // 801EED38
  c->r[30]=R32(c->r[26]+0x00000008u); // 801EED3C
  c->r[31]=c->r[3]|c->r[3]; // 801EED40
  c->r[29]=c->r[26]+0x00000008u; // 801EED44
  c->r[27]=0u+0x802D0000u; // 801EED48
  c->r[28]=0u+0x802D0000u; // 801EED4C
  goto L_801EED7C; // 801EED50
L_801EED54:;
  c->r[26]=c->r[30]|c->r[30]; cr0(c,c->r[26]); // 801EED54
  c->r[30]=R32(c->r[30]+0x00000000u); // 801EED58
  if (!crb(c,2)) { goto L_801EED74; } // 801EED5C
  c->r[3]=c->r[27]+0x000027D4u; // 801EED60
  c->r[5]=c->r[28]+0x000027B0u; // 801EED64
  c->r[4]=0u+0x0000023Du; // 801EED68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EED6C
  c->lr=0x801EED74u; f_801F9770(c); // 801EED70
L_801EED74:;
  c->r[3]=c->r[26]+0xFFFFFF04u; // 801EED74
  c->lr=0x801EED7Cu; f_801ED400(c); // 801EED78
L_801EED7C:;
  cmpu(c,0,c->r[30],c->r[29]); // 801EED7C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EED54; } // 801EED80
  c->r[3]=c->r[31]|c->r[31]; // 801EED84
  c->lr=0x801EED8Cu; f_800CBAE0(c); // 801EED88
  c->r[11]=c->r[1]+0x00000020u; // 801EED8C
  c->lr=0x801EED94u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EED90
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EED94
  c->lr=c->r[0]; // 801EED98
  c->r[1]=c->r[1]+0x00000020u; // 801EED9C
  return; // 801EEDA0
}

// fn_801EEDB0
void f_801EEDB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEDB0
  c->r[0]=c->lr; // 801EEDB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EEDB8
  c->r[11]=c->r[1]+0x00000040u; // 801EEDBC
  c->lr=0x801EEDC4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EEDC0
  c->r[21]=c->r[3]|c->r[3]; // 801EEDC4
  c->r[22]=c->r[4]|c->r[4]; // 801EEDC8
  c->lr=0x801EEDD0u; f_800CBAA0(c); // 801EEDCC
  c->r[30]=c->r[3]|c->r[3]; // 801EEDD0
  c->lr=0x801EEDD8u; f_800CBAA0(c); // 801EEDD4
  cmps(c,0,(int32_t)c->r[22],0); // 801EEDD8
  c->r[29]=c->r[3]|c->r[3]; // 801EEDDC
  if (!crb(c,2)) { goto L_801EEE00; } // 801EEDE0
  c->r[3]=0u+0x802D0000u; // 801EEDE4
  c->r[5]=0u+0x802D0000u; // 801EEDE8
  c->r[3]=c->r[3]+0x00002864u; // 801EEDEC
  c->r[4]=0u+0x00000233u; // 801EEDF0
  c->r[5]=c->r[5]+0x00002840u; // 801EEDF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEDF8
  c->lr=0x801EEE00u; f_801F9770(c); // 801EEDFC
L_801EEE00:;
  c->r[31]=c->r[22]+0x000000FCu; // 801EEE00
  c->r[3]=c->r[21]+0x00000004u; // 801EEE04
  c->r[4]=c->r[31]|c->r[31]; // 801EEE08
  c->lr=0x801EEE10u; f_801FA230(c); // 801EEE0C
  cmps(c,0,(int32_t)c->r[22],0); // 801EEE10
  c->r[24]=c->r[21]+0x00000014u; // 801EEE14
  if (!crb(c,2)) { goto L_801EEE38; } // 801EEE18
  c->r[3]=0u+0x802D0000u; // 801EEE1C
  c->r[5]=0u+0x802D0000u; // 801EEE20
  c->r[3]=c->r[3]+0x00002864u; // 801EEE24
  c->r[4]=0u+0x00000233u; // 801EEE28
  c->r[5]=c->r[5]+0x00002840u; // 801EEE2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEE30
  c->lr=0x801EEE38u; f_801F9770(c); // 801EEE34
L_801EEE38:;
  W32(c->r[1]+0x0000000Cu,c->r[24]); // 801EEE38
  c->r[5]=c->r[31]|c->r[31]; // 801EEE3C
  c->r[3]=c->r[21]+0x00000010u; // 801EEE40
  c->r[4]=c->r[1]+0x0000000Cu; // 801EEE44
  c->lr=0x801EEE4Cu; f_801FA130(c); // 801EEE48
  c->r[3]=c->r[29]|c->r[29]; // 801EEE4C
  c->lr=0x801EEE54u; f_800CBAE0(c); // 801EEE50
  c->lr=0x801EEE58u; f_800CBAA0(c); // 801EEE54
  cmps(c,0,(int32_t)c->r[22],0); // 801EEE58
  c->r[29]=c->r[3]|c->r[3]; // 801EEE5C
  if (!crb(c,2)) { goto L_801EEE80; } // 801EEE60
  c->r[3]=0u+0x802D0000u; // 801EEE64
  c->r[5]=0u+0x802D0000u; // 801EEE68
  c->r[3]=c->r[3]+0x00002864u; // 801EEE6C
  c->r[4]=0u+0x00000233u; // 801EEE70
  c->r[5]=c->r[5]+0x00002840u; // 801EEE74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEE78
  c->lr=0x801EEE80u; f_801F9770(c); // 801EEE7C
L_801EEE80:;
  c->r[4]=c->r[31]|c->r[31]; // 801EEE80
  c->r[3]=c->r[21]+0x00000010u; // 801EEE84
  c->lr=0x801EEE8Cu; f_801FA230(c); // 801EEE88
  c->r[28]=c->r[21]+0x00000008u; // 801EEE8C
  c->r[24]=0u+0x802D0000u; // 801EEE90
  c->r[25]=0u+0x802D0000u; // 801EEE94
  c->r[26]=0u+0x802D0000u; // 801EEE98
  c->r[27]=0u+0x802D0000u; // 801EEE9C
  goto L_801EEEF4; // 801EEEA0
L_801EEEA4:;
  c->r[23]=R32(c->r[28]+0x00000004u); // 801EEEA4
  cmps(c,0,(int32_t)c->r[23],0); // 801EEEA8
  if (!crb(c,2)) { goto L_801EEEC4; } // 801EEEAC
  c->r[3]=c->r[24]+0x000027D4u; // 801EEEB0
  c->r[5]=c->r[25]+0x000027B0u; // 801EEEB4
  c->r[4]=0u+0x0000023Du; // 801EEEB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEEBC
  c->lr=0x801EEEC4u; f_801F9770(c); // 801EEEC0
L_801EEEC4:;
  c->r[23]=addc(c,c->r[23],0xFFFFFF04u,0); cr0(c,c->r[23]); // 801EEEC4
  if (!crb(c,2)) { goto L_801EEEE0; } // 801EEEC8
  c->r[3]=c->r[26]+0x00002804u; // 801EEECC
  c->r[5]=c->r[27]+0x000027E0u; // 801EEED0
  c->r[4]=0u+0x00000193u; // 801EEED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEED8
  c->lr=0x801EEEE0u; f_801F9770(c); // 801EEEDC
L_801EEEE0:;
  c->r[3]=R32(c->r[23]+0x000000A8u); // 801EEEE0
  c->r[0]=R32(c->r[22]+0x000000A8u); // 801EEEE4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801EEEE8
  if (!crb(c,1)) { goto L_801EEF00; } // 801EEEEC
  c->r[28]=R32(c->r[28]+0x00000004u); // 801EEEF0
L_801EEEF4:;
  c->r[0]=R32(c->r[21]+0x00000008u); // 801EEEF4
  cmpu(c,0,c->r[28],c->r[0]); // 801EEEF8
  if (!crb(c,2)) { IRQCHK(c); goto L_801EEEA4; } // 801EEEFC
L_801EEF00:;
  cmps(c,0,(int32_t)c->r[22],0); // 801EEF00
  if (!crb(c,2)) { goto L_801EEF24; } // 801EEF04
  c->r[3]=0u+0x802D0000u; // 801EEF08
  c->r[5]=0u+0x802D0000u; // 801EEF0C
  c->r[3]=c->r[3]+0x00002864u; // 801EEF10
  c->r[4]=0u+0x00000233u; // 801EEF14
  c->r[5]=c->r[5]+0x00002840u; // 801EEF18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEF1C
  c->lr=0x801EEF24u; f_801F9770(c); // 801EEF20
L_801EEF24:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 801EEF24
  c->r[5]=c->r[31]|c->r[31]; // 801EEF28
  c->r[3]=c->r[21]+0x00000004u; // 801EEF2C
  c->r[4]=c->r[1]+0x00000008u; // 801EEF30
  c->lr=0x801EEF38u; f_801FA130(c); // 801EEF34
  c->r[3]=c->r[29]|c->r[29]; // 801EEF38
  c->lr=0x801EEF40u; f_800CBAE0(c); // 801EEF3C
  cmps(c,0,(int32_t)c->r[22],0); // 801EEF40
  c->r[27]=c->r[21]+0x00000008u; // 801EEF44
  if (!crb(c,2)) { goto L_801EEF68; } // 801EEF48
  c->r[3]=0u+0x802D0000u; // 801EEF4C
  c->r[5]=0u+0x802D0000u; // 801EEF50
  c->r[3]=c->r[3]+0x000027A4u; // 801EEF54
  c->r[4]=0u+0x00000228u; // 801EEF58
  c->r[5]=c->r[5]+0x00002780u; // 801EEF5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEF60
  c->lr=0x801EEF68u; f_801F9770(c); // 801EEF64
L_801EEF68:;
  cmps(c,0,(int32_t)c->r[22],0); // 801EEF68
  if (!crb(c,2)) { goto L_801EEF8C; } // 801EEF6C
  c->r[3]=0u+0x802D0000u; // 801EEF70
  c->r[5]=0u+0x802D0000u; // 801EEF74
  c->r[3]=c->r[3]+0x00002864u; // 801EEF78
  c->r[4]=0u+0x00000233u; // 801EEF7C
  c->r[5]=c->r[5]+0x00002840u; // 801EEF80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEF84
  c->lr=0x801EEF8Cu; f_801F9770(c); // 801EEF88
L_801EEF8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EEF8C
  if (!crb(c,2)) { goto L_801EEFB0; } // 801EEF90
  c->r[3]=0u+0x802D0000u; // 801EEF94
  c->r[5]=0u+0x802D0000u; // 801EEF98
  c->r[3]=c->r[3]+0x00002774u; // 801EEF9C
  c->r[4]=0u+0x0000021Eu; // 801EEFA0
  c->r[5]=c->r[5]+0x00002750u; // 801EEFA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEFA8
  c->lr=0x801EEFB0u; f_801F9770(c); // 801EEFAC
L_801EEFB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EEFB0
  if (!crb(c,2)) { goto L_801EEFD4; } // 801EEFB4
  c->r[3]=0u+0x802D0000u; // 801EEFB8
  c->r[5]=0u+0x802D0000u; // 801EEFBC
  c->r[3]=c->r[3]+0x00002894u; // 801EEFC0
  c->r[4]=0u+0x00000148u; // 801EEFC4
  c->r[5]=c->r[5]+0x00002870u; // 801EEFC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEFCC
  c->lr=0x801EEFD4u; f_801F9770(c); // 801EEFD0
L_801EEFD4:;
  c->r[29]=0u+0x802D0000u; // 801EEFD4
  c->r[28]=0u+0x802D0000u; // 801EEFD8
  goto L_801EF05C; // 801EEFDC
L_801EEFE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EEFE0
  if (!crb(c,2)) { goto L_801EEFFC; } // 801EEFE4
  c->r[3]=c->r[29]+0x000027D4u; // 801EEFE8
  c->r[5]=c->r[28]+0x000027B0u; // 801EEFEC
  c->r[4]=0u+0x0000023Du; // 801EEFF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EEFF4
  c->lr=0x801EEFFCu; f_801F9770(c); // 801EEFF8
L_801EEFFC:;
  c->r[0]=R32(c->r[31]+0xFFFFFFACu); // 801EEFFC
  c->r[23]=c->r[31]+0xFFFFFF04u; // 801EF000
  cmps(c,0,(int32_t)c->r[0],1); // 801EF004
  if (!crb(c,1)) { goto L_801EF064; } // 801EF008
  cmps(c,0,(int32_t)c->r[31],0); // 801EF00C
  if (!crb(c,2)) { goto L_801EF028; } // 801EF010
  c->r[3]=c->r[29]+0x000027D4u; // 801EF014
  c->r[5]=c->r[28]+0x000027B0u; // 801EF018
  c->r[4]=0u+0x0000023Du; // 801EF01C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF020
  c->lr=0x801EF028u; f_801F9770(c); // 801EF024
L_801EF028:;
  c->r[0]=R32(c->r[23]+0x000000A8u); // 801EF028
  cmps(c,0,(int32_t)c->r[0],255); // 801EF02C
  if (crb(c,2)) { goto L_801EF058; } // 801EF030
  cmps(c,0,(int32_t)c->r[31],0); // 801EF034
  if (!crb(c,2)) { goto L_801EF050; } // 801EF038
  c->r[3]=c->r[29]+0x000027D4u; // 801EF03C
  c->r[5]=c->r[28]+0x000027B0u; // 801EF040
  c->r[4]=0u+0x0000023Du; // 801EF044
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF048
  c->lr=0x801EF050u; f_801F9770(c); // 801EF04C
L_801EF050:;
  c->r[3]=c->r[23]|c->r[23]; // 801EF050
  c->lr=0x801EF058u; f_801ECE50(c); // 801EF054
L_801EF058:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801EF058
L_801EF05C:;
  cmpu(c,0,c->r[31],c->r[27]); // 801EF05C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EEFE0; } // 801EF060
L_801EF064:;
  c->r[3]=c->r[30]|c->r[30]; // 801EF064
  c->lr=0x801EF06Cu; f_800CBAE0(c); // 801EF068
  c->r[11]=c->r[1]+0x00000040u; // 801EF06C
  c->lr=0x801EF074u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF070
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EF074
  c->lr=c->r[0]; // 801EF078
  c->r[1]=c->r[1]+0x00000040u; // 801EF07C
  return; // 801EF080
}

// fn_801EF090
void f_801EF090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF090
  c->r[0]=c->lr; // 801EF094
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EF098
  c->r[11]=c->r[1]+0x00000030u; // 801EF09C
  c->lr=0x801EF0A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF0A0
  c->r[26]=c->r[3]|c->r[3]; // 801EF0A4
  c->r[25]=c->r[4]|c->r[4]; // 801EF0A8
  c->lr=0x801EF0B0u; f_800CBAA0(c); // 801EF0AC
  c->r[30]=R32(c->r[26]+0x00000008u); // 801EF0B0
  c->r[31]=c->r[3]|c->r[3]; // 801EF0B4
  c->r[29]=c->r[26]+0x00000008u; // 801EF0B8
  c->r[27]=0u+0x802D0000u; // 801EF0BC
  c->r[28]=0u+0x802D0000u; // 801EF0C0
  goto L_801EF11C; // 801EF0C4
L_801EF0C8:;
  c->r[26]=c->r[30]|c->r[30]; cr0(c,c->r[26]); // 801EF0C8
  c->r[30]=R32(c->r[30]+0x00000000u); // 801EF0CC
  if (!crb(c,2)) { goto L_801EF0E8; } // 801EF0D0
  c->r[3]=c->r[27]+0x000027D4u; // 801EF0D4
  c->r[5]=c->r[28]+0x000027B0u; // 801EF0D8
  c->r[4]=0u+0x0000023Du; // 801EF0DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF0E0
  c->lr=0x801EF0E8u; f_801F9770(c); // 801EF0E4
L_801EF0E8:;
  c->r[0]=R8(c->r[26]+0xFFFFFFA0u); // 801EF0E8
  cmps(c,0,(int32_t)c->r[0],0); // 801EF0EC
  if (crb(c,2)) { goto L_801EF11C; } // 801EF0F0
  cmps(c,0,(int32_t)c->r[26],0); // 801EF0F4
  if (!crb(c,2)) { goto L_801EF110; } // 801EF0F8
  c->r[3]=c->r[27]+0x000027D4u; // 801EF0FC
  c->r[5]=c->r[28]+0x000027B0u; // 801EF100
  c->r[4]=0u+0x0000023Du; // 801EF104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF108
  c->lr=0x801EF110u; f_801F9770(c); // 801EF10C
L_801EF110:;
  c->r[0]=R16(c->r[26]+0xFFFFFFA6u); // 801EF110
  c->r[0]=c->r[0]|c->r[25]; // 801EF114
  W16(c->r[26]+0xFFFFFFA6u,c->r[0]); // 801EF118
L_801EF11C:;
  cmpu(c,0,c->r[30],c->r[29]); // 801EF11C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EF0C8; } // 801EF120
  c->r[3]=c->r[31]|c->r[31]; // 801EF124
  c->lr=0x801EF12Cu; f_800CBAE0(c); // 801EF128
  c->r[11]=c->r[1]+0x00000030u; // 801EF12C
  c->lr=0x801EF134u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF130
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EF134
  c->lr=c->r[0]; // 801EF138
  c->r[1]=c->r[1]+0x00000030u; // 801EF13C
  return; // 801EF140
}

// CalcPitchRatio__Q44nw4r3snd6detail4UtilFi
void f_801EF150(Ctx* __restrict c) {
  trace_call(0x801EF150u);
  c->r[5]=addc(c,~c->r[3],0x00000BFFu,1); // 801EF150
  c->r[0]=0u+0x00000C00u; // 801EF154
  c->r[5]=divwu(c->r[5],c->r[0]); // 801EF158
  cmps(c,0,(int32_t)c->r[3],0); // 801EF15C
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF160
  c->r[6]=0u+0x00000000u; // 801EF164
  if (!crb(c,0)) { goto L_801EF1A4; } // 801EF168
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[4]); // 801EF16C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)3072); // 801EF170
  c->ctr=c->r[4]; // 801EF174
  if (crb(c,2)) { goto L_801EF190; } // 801EF178
  c->r[0]=c->r[0]|0x00000000u; // 801EF17C
L_801EF180:;
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 801EF180
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF180; } // 801EF184
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801EF188
  if (crb(c,2)) { goto L_801EF1A0; } // 801EF18C
L_801EF190:;
  c->ctr=c->r[5]; // 801EF190
  c->r[0]=c->r[0]|0x00000000u; // 801EF194
L_801EF198:;
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801EF198
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF198; } // 801EF19C
L_801EF1A0:;
  c->r[3]=c->r[3]+c->r[0]; // 801EF1A0
L_801EF1A4:;
  c->r[0]=0u+0x00000C00u; // 801EF1A4
  cmps(c,0,(int32_t)c->r[3],3072); // 801EF1A8
  c->r[5]=divwu(c->r[3],c->r[0]); // 801EF1AC
  if (crb(c,0)) { goto L_801EF1EC; } // 801EF1B0
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[4]); // 801EF1B4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)-3072); // 801EF1B8
  c->ctr=c->r[4]; // 801EF1BC
  if (crb(c,2)) { goto L_801EF1D8; } // 801EF1C0
  c->r[0]=c->r[0]|0x00000000u; // 801EF1C4
L_801EF1C8:;
  c->r[6]=c->r[6]+0x00000008u; // 801EF1C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF1C8; } // 801EF1CC
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801EF1D0
  if (crb(c,2)) { goto L_801EF1E8; } // 801EF1D4
L_801EF1D8:;
  c->ctr=c->r[5]; // 801EF1D8
  c->r[0]=c->r[0]|0x00000000u; // 801EF1DC
L_801EF1E0:;
  c->r[6]=c->r[6]+0x00000001u; // 801EF1E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF1E0; } // 801EF1E4
L_801EF1E8:;
  c->r[3]=c->r[3]+c->r[0]; // 801EF1E8
L_801EF1EC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801EF1EC
  {uint32_t ea=c->r[2]+0xFFFF9F3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF1F0
  c->r[5]=c->r[6]|c->r[6]; // 801EF1F4
  if (!crb(c,1)) { goto L_801EF24C; } // 801EF1F8
  c->r[4]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[4]); // 801EF1FC
  c->r[0]=0u-c->r[6]; // 801EF200
  c->ctr=c->r[4]; // 801EF204
  if (crb(c,2)) { goto L_801EF238; } // 801EF208
L_801EF20C:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF20C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF210
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF214
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF218
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF21C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF220
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF224
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF20C; } // 801EF22C
  c->r[5]=c->r[6]&0x00000007u; cr0(c,c->r[5]); // 801EF230
  if (crb(c,2)) { goto L_801EF248; } // 801EF234
L_801EF238:;
  c->ctr=c->r[5]; // 801EF238
  c->r[0]=c->r[0]|0x00000000u; // 801EF23C
L_801EF240:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF240
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF240; } // 801EF244
L_801EF248:;
  c->r[6]=c->r[6]+c->r[0]; // 801EF248
L_801EF24C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801EF24C
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF250
  c->r[4]=0u-c->r[6]; // 801EF254
  if (!crb(c,0)) { goto L_801EF2A0; } // 801EF258
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801EF25C
  c->ctr=c->r[0]; // 801EF260
  if (crb(c,2)) { goto L_801EF294; } // 801EF264
L_801EF268:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF268
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF26C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF270
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF274
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF278
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF27C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF280
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF284
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF268; } // 801EF288
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 801EF28C
  if (crb(c,2)) { goto L_801EF2A0; } // 801EF290
L_801EF294:;
  c->ctr=c->r[4]; // 801EF294
L_801EF298:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF298
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EF298; } // 801EF29C
L_801EF2A0:;
  c->r[4]=sraw(c,c->r[3],8); // 801EF2A0
  c->r[0]=rotl(c->r[3],24)&0xFF000000u; // 801EF2A4
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801EF2A8
  c->r[0]=c->r[0]-c->r[3]; // 801EF2AC
  c->r[5]=addc(c,c->r[4],0,c->xer_ca); cr0(c,c->r[5]); // 801EF2B0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFFFFu; // 801EF2B4
  c->r[3]=c->r[0]+c->r[3]; // 801EF2B8
  if (crb(c,2)) { goto L_801EF2D4; } // 801EF2BC
  c->r[4]=0u+0x80240000u; // 801EF2C0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801EF2C4
  c->r[4]=c->r[4]+0xFFFF8598u; // 801EF2C8
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF2CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF2D0
L_801EF2D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801EF2D4
  if (crb(c,2)) return; // 801EF2D8
  c->r[4]=0u+0x80240000u; // 801EF2DC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801EF2E0
  c->r[4]=c->r[4]+0xFFFF85C8u; // 801EF2E4
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF2E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EF2EC
  return; // 801EF2F0
}

// CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
void f_801EF300(Ctx* __restrict c) {
  trace_call(0x801EF300u);
  {uint32_t ea=c->r[2]+0xFFFF9F44u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF300
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF304
  fcmp(c,0,c->f[1],c->f[2]); // 801EF308
  if (!crb(c,1)) { goto L_801EF314; } // 801EF30C
  goto L_801EF328; // 801EF310
L_801EF314:;
  {uint32_t ea=c->r[2]+0xFFFF9F48u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF314
  fcmp(c,0,c->f[1],c->f[2]); // 801EF318
  if (!crb(c,0)) { goto L_801EF324; } // 801EF31C
  goto L_801EF328; // 801EF320
L_801EF324:;
  c->f[2]=c->f[1]; // 801EF324
L_801EF328:;
  {uint32_t ea=c->r[2]+0xFFFF9F4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF328
  c->r[3]=0u+0x80240000u; // 801EF32C
  c->r[3]=c->r[3]+0xFFFF89C8u; // 801EF330
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801EF334
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801EF338
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801EF33C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801EF340
  c->r[0]=c->r[4]+0x00000388u; // 801EF344
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF348
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF34C
  c->r[1]=c->r[1]+0x00000010u; // 801EF350
  return; // 801EF354
}

// CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
void f_801EF360(Ctx* __restrict c) {
  trace_call(0x801EF360u);
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF360
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF364
  fcmp(c,0,c->f[1],c->f[2]); // 801EF368
  if (!crb(c,1)) { goto L_801EF374; } // 801EF36C
  goto L_801EF388; // 801EF370
L_801EF374:;
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF374
  fcmp(c,0,c->f[1],c->f[2]); // 801EF378
  if (!crb(c,0)) { goto L_801EF384; } // 801EF37C
  goto L_801EF388; // 801EF380
L_801EF384:;
  c->f[2]=c->f[1]; // 801EF384
L_801EF388:;
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF388
  c->r[4]=0u+0x802D0000u; // 801EF38C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EF390
  c->r[4]=c->r[4]+0x000028A0u; // 801EF394
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[2]); // 801EF398
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF39C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF3A0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EF3A4
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF3A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801EF3AC
  cmps(c,0,(int32_t)c->r[0],0); // 801EF3B0
  c->r[4]=R32(c->r[4]+c->r[5]); // 801EF3B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801EF3B8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801EF3BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801EF3C0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801EF3C4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801EF3C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF3CC
  {uint32_t ea=c->r[4]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF3D0
  if (crb(c,2)) { goto L_801EF3E0; } // 801EF3D4
  {uint32_t ea=c->r[4]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF3D8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801EF3DC
L_801EF3E0:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 801EF3E0
  cmps(c,0,(int32_t)c->r[0],0); // 801EF3E4
  if (crb(c,2)) { goto L_801EF414; } // 801EF3E8
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF3EC
  fcmp(c,0,c->f[2],c->f[1]); // 801EF3F0
  if (!crb(c,1)) { goto L_801EF3FC; } // 801EF3F4
  goto L_801EF438; // 801EF3F8
L_801EF3FC:;
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF3FC
  fcmp(c,0,c->f[2],c->f[1]); // 801EF400
  if (!crb(c,0)) { goto L_801EF40C; } // 801EF404
  goto L_801EF438; // 801EF408
L_801EF40C:;
  c->f[1]=c->f[2]; // 801EF40C
  goto L_801EF438; // 801EF410
L_801EF414:;
  {uint32_t ea=c->r[2]+0xFFFF9F3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF414
  fcmp(c,0,c->f[2],c->f[1]); // 801EF418
  if (!crb(c,1)) { goto L_801EF424; } // 801EF41C
  goto L_801EF438; // 801EF420
L_801EF424:;
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF424
  fcmp(c,0,c->f[2],c->f[1]); // 801EF428
  if (!crb(c,0)) { goto L_801EF434; } // 801EF42C
  goto L_801EF438; // 801EF430
L_801EF434:;
  c->f[1]=c->f[2]; // 801EF434
L_801EF438:;
  c->r[1]=c->r[1]+0x00000010u; // 801EF438
  return; // 801EF43C
}

// CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
void f_801EF440(Ctx* __restrict c) {
  trace_call(0x801EF440u);
  {uint32_t ea=c->r[2]+0xFFFF9F3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF440
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF444
  fcmp(c,0,c->f[1],c->f[0]); // 801EF448
  if (!crb(c,1)) { goto L_801EF454; } // 801EF44C
  goto L_801EF468; // 801EF450
L_801EF454:;
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF454
  fcmp(c,0,c->f[1],c->f[0]); // 801EF458
  if (!crb(c,0)) { goto L_801EF464; } // 801EF45C
  goto L_801EF468; // 801EF460
L_801EF464:;
  c->f[0]=c->f[1]; // 801EF464
L_801EF468:;
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF468
  c->r[4]=0u+0x802D0000u; // 801EF46C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EF470
  c->r[4]=c->r[4]+0x000028A0u; // 801EF474
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 801EF478
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF47C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF480
  {uint32_t ea=c->r[2]+0xFFFF9F3Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EF484
  c->r[3]=R32(c->r[4]+c->r[0]); // 801EF488
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801EF48C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801EF490
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801EF494
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801EF498
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801EF49C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF4A0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF4A4
  fcmp(c,0,c->f[0],c->f[3]); // 801EF4A8
  if (!crb(c,1)) { goto L_801EF4B4; } // 801EF4AC
  goto L_801EF4C8; // 801EF4B0
L_801EF4B4:;
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EF4B4
  fcmp(c,0,c->f[0],c->f[3]); // 801EF4B8
  if (!crb(c,0)) { goto L_801EF4C4; } // 801EF4BC
  goto L_801EF4C8; // 801EF4C0
L_801EF4C4:;
  c->f[3]=c->f[0]; // 801EF4C4
L_801EF4C8:;
  c->f[1]=c->f[3]; // 801EF4C8
  c->r[1]=c->r[1]+0x00000010u; // 801EF4CC
  return; // 801EF4D0
}

// CalcLpfFreq__Q44nw4r3snd6detail4UtilFf
void f_801EF4E0(Ctx* __restrict c) {
  trace_call(0x801EF4E0u);
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF4E0
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF4E4
  fcmp(c,0,c->f[1],c->f[2]); // 801EF4E8
  if (!crb(c,1)) { goto L_801EF4F4; } // 801EF4EC
  goto L_801EF508; // 801EF4F0
L_801EF4F4:;
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF4F4
  fcmp(c,0,c->f[1],c->f[2]); // 801EF4F8
  if (!crb(c,0)) { goto L_801EF504; } // 801EF4FC
  goto L_801EF508; // 801EF500
L_801EF504:;
  c->f[2]=c->f[1]; // 801EF504
L_801EF508:;
  {uint32_t ea=c->r[2]+0xFFFF9F5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF508
  fcmp(c,0,c->f[2],c->f[1]); // 801EF50C
  if (!crb(c,0)) { goto L_801EF51C; } // 801EF510
  c->r[3]=0u+0x00000050u; // 801EF514
  goto L_801EF55C; // 801EF518
L_801EF51C:;
  {uint32_t ea=c->r[2]+0xFFFF9F60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF51C
  fcmp(c,0,c->f[2],c->f[0]); // 801EF520
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EF524
  if (!crb(c,2)) { goto L_801EF534; } // 801EF528
  c->r[3]=0u+0x00003E80u; // 801EF52C
  goto L_801EF55C; // 801EF530
L_801EF534:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801EF534
  {uint32_t ea=c->r[2]+0xFFFF9F64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF538
  c->r[3]=0u+0x80240000u; // 801EF53C
  c->r[3]=c->r[3]+0xFFFFA9E8u; // 801EF540
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EF544
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801EF548
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801EF54C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801EF550
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801EF554
  c->r[3]=R16(c->r[3]+c->r[0]); // 801EF558
L_801EF55C:;
  c->r[1]=c->r[1]+0x00000010u; // 801EF55C
  return; // 801EF560
}

// GetRemoteFilterCoefs__Q44nw4r3snd6detail4UtilFiPUsPUsPUsPUsPUs
void f_801EF570(Ctx* __restrict c) {
  trace_call(0x801EF570u);
  cmps(c,0,(int32_t)c->r[3],127); // 801EF570
  if (!crb(c,1)) { goto L_801EF580; } // 801EF574
  c->r[0]=0u+0x0000007Fu; // 801EF578
  goto L_801EF588; // 801EF57C
L_801EF580:;
  c->r[0]=sraw(c,c->r[3],31); // 801EF580
  c->r[0]=c->r[3]&~c->r[0]; // 801EF584
L_801EF588:;
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EF588
  c->r[3]=0u+0x80240000u; // 801EF58C
  c->r[3]=c->r[3]+0xFFFFA4E8u; // 801EF590
  c->r[0]=R16(c->r[3]+c->r[9]); // 801EF594
  c->r[3]=c->r[3]+c->r[9]; // 801EF598
  W16(c->r[4]+0x00000000u,c->r[0]); // 801EF59C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801EF5A0
  W16(c->r[5]+0x00000000u,c->r[0]); // 801EF5A4
  c->r[0]=R16(c->r[3]+0x00000004u); // 801EF5A8
  W16(c->r[6]+0x00000000u,c->r[0]); // 801EF5AC
  c->r[0]=R16(c->r[3]+0x00000006u); // 801EF5B0
  W16(c->r[7]+0x00000000u,c->r[0]); // 801EF5B4
  c->r[0]=R16(c->r[3]+0x00000008u); // 801EF5B8
  W16(c->r[8]+0x00000000u,c->r[0]); // 801EF5BC
  return; // 801EF5C0
}

// CalcRandom__Q44nw4r3snd6detail4UtilFv
void f_801EF5D0(Ctx* __restrict c) {
  trace_call(0x801EF5D0u);
  c->r[3]=0u+0x00190000u; // 801EF5D0
  c->r[4]=R32(c->r[13]+0xFFFF9ED8u); // 801EF5D4
  c->r[0]=c->r[3]+0x0000660Du; // 801EF5D8
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801EF5DC
  c->r[3]=c->r[3]+0x3C6F0000u; // 801EF5E0
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 801EF5E4
  W32(c->r[13]+0xFFFF9ED8u,c->r[0]); // 801EF5E8
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801EF5EC
  return; // 801EF5F0
}

// fn_801EF600
void f_801EF600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF600
  c->r[0]=c->lr; // 801EF604
  cmps(c,0,(int32_t)c->r[3],1); // 801EF608
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF60C
  if (!crb(c,2)) { goto L_801EF61C; } // 801EF610
  c->r[3]=c->r[4]+c->r[5]; // 801EF614
  goto L_801EF64C; // 801EF618
L_801EF61C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801EF61C
  if (!crb(c,2)) { goto L_801EF62C; } // 801EF620
  c->r[3]=c->r[4]|c->r[4]; // 801EF624
  goto L_801EF64C; // 801EF628
L_801EF62C:;
  c->r[3]=0u+0x802D0000u; // 801EF62C
  c->r[5]=0u+0x802D0000u; // 801EF630
  c->r[3]=c->r[3]+0x000028ACu; // 801EF634
  c->r[4]=0u+0x000002F6u; // 801EF638
  c->r[5]=c->r[5]+0x000028BCu; // 801EF63C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF640
  c->lr=0x801EF648u; f_801F9770(c); // 801EF644
  c->r[3]=0u+0x00000000u; // 801EF648
L_801EF64C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF64C
  c->lr=c->r[0]; // 801EF650
  c->r[1]=c->r[1]+0x00000010u; // 801EF654
  return; // 801EF658
}

// fn_801EF660
void f_801EF660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF660
  c->r[0]=c->lr; // 801EF664
  cmps(c,0,(int32_t)c->r[4],0); // 801EF668
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF66C
  c->r[0]=0u+0x00000000u; // 801EF670
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF674
  c->r[31]=0u+0x802D0000u; // 801EF678
  c->r[31]=c->r[31]+0x000028D8u; // 801EF67C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF680
  c->r[30]=c->r[4]|c->r[4]; // 801EF684
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF688
  c->r[29]=c->r[3]|c->r[3]; // 801EF68C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EF690
  W32(c->r[3]+0x00000000u,c->r[0]); // 801EF694
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EF698
  if (!crb(c,2)) { goto L_801EF6B4; } // 801EF69C
  c->r[3]=c->r[31]+0x00000000u; // 801EF6A0
  c->r[5]=c->r[31]+0x00000018u; // 801EF6A4
  c->r[4]=0u+0x0000002Cu; // 801EF6A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF6AC
  c->lr=0x801EF6B4u; f_801F9770(c); // 801EF6B0
L_801EF6B4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801EF6B4
  c->r[0]=c->r[3]+0xADA90000u; // 801EF6B8
  cmpu(c,0,c->r[0],0x00004152u); // 801EF6BC
  if (crb(c,2)) { goto L_801EF6D8; } // 801EF6C0
  c->r[3]=c->r[31]+0x00000000u; // 801EF6C4
  c->r[5]=c->r[31]+0x00000040u; // 801EF6C8
  c->r[4]=0u+0x0000005Cu; // 801EF6CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF6D0
  c->lr=0x801EF6D8u; f_801F9770(c); // 801EF6D4
L_801EF6D8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801EF6D8
  c->r[0]=c->r[3]+0xADA90000u; // 801EF6DC
  cmpu(c,0,c->r[0],0x00004152u); // 801EF6E0
  if (crb(c,2)) { goto L_801EF6F0; } // 801EF6E4
  c->r[0]=0u+0x00000000u; // 801EF6E8
  goto L_801EF754; // 801EF6EC
L_801EF6F0:;
  c->r[6]=R16(c->r[30]+0x00000006u); // 801EF6F0
  c->r[0]=0u+0x00000000u; // 801EF6F4
  cmpu(c,0,c->r[6],0x00000100u); // 801EF6F8
  if (!crb(c,2)) { goto L_801EF704; } // 801EF6FC
  c->r[0]=0u+0x00000001u; // 801EF700
L_801EF704:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EF704
  if (!crb(c,2)) { goto L_801EF728; } // 801EF708
  c->r[3]=c->r[31]+0x00000000u; // 801EF70C
  c->r[5]=c->r[31]+0x00000078u; // 801EF710
  c->r[4]=0u+0x00000060u; // 801EF714
  c->r[7]=0u+0x00000100u; // 801EF718
  c->r[8]=0u+0x00000100u; // 801EF71C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF720
  c->lr=0x801EF728u; f_801F9770(c); // 801EF724
L_801EF728:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 801EF728
  cmpu(c,0,c->r[4],0x00000100u); // 801EF72C
  if (!crb(c,0)) { goto L_801EF73C; } // 801EF730
  c->r[0]=0u+0x00000000u; // 801EF734
  goto L_801EF754; // 801EF738
L_801EF73C:;
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 801EF73C
  c->r[3]=0u+0x00000100u; // 801EF740
  c->r[3]=c->r[3]|~c->r[4]; // 801EF744
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801EF748
  c->r[0]=c->r[3]-c->r[0]; // 801EF74C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801EF750
L_801EF754:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EF754
  if (!crb(c,2)) { goto L_801EF764; } // 801EF758
  c->r[3]=c->r[29]|c->r[29]; // 801EF75C
  goto L_801EF7C4; // 801EF760
L_801EF764:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801EF764
  c->r[3]=R32(c->r[30]+c->r[0]); // 801EF768
  c->r[28]=c->r[0]+c->r[30]; // 801EF76C
  c->r[0]=c->r[3]+0xABBF0000u; // 801EF770
  cmpu(c,0,c->r[0],0x0000424Cu); // 801EF774
  if (crb(c,2)) { goto L_801EF790; } // 801EF778
  c->r[3]=c->r[31]+0x00000000u; // 801EF77C
  c->r[5]=c->r[31]+0x000000D0u; // 801EF780
  c->r[4]=0u+0x00000035u; // 801EF784
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF788
  c->lr=0x801EF790u; f_801F9770(c); // 801EF78C
L_801EF790:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 801EF790
  {uint32_t ea=c->r[30]+c->r[0]; c->r[3]=R32(ea); c->r[30]=ea;} // 801EF794
  c->r[0]=c->r[3]+0xBBBF0000u; // 801EF798
  cmpu(c,0,c->r[0],0x00005441u); // 801EF79C
  if (crb(c,2)) { goto L_801EF7B8; } // 801EF7A0
  c->r[3]=c->r[31]+0x00000000u; // 801EF7A4
  c->r[5]=c->r[31]+0x0000012Cu; // 801EF7A8
  c->r[4]=0u+0x0000003Au; // 801EF7AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF7B0
  c->lr=0x801EF7B8u; f_801F9770(c); // 801EF7B4
L_801EF7B8:;
  W32(c->r[29]+0x00000000u,c->r[28]); // 801EF7B8
  c->r[3]=c->r[29]|c->r[29]; // 801EF7BC
  W32(c->r[29]+0x00000004u,c->r[30]); // 801EF7C0
L_801EF7C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF7C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF7C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF7CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF7D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EF7D4
  c->lr=c->r[0]; // 801EF7D8
  c->r[1]=c->r[1]+0x00000020u; // 801EF7DC
  return; // 801EF7E0
}

// fn_801EF7F0
void f_801EF7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF7F0
  c->r[0]=c->lr; // 801EF7F4
  c->r[5]=R32(c->r[3]+0x00000000u); // 801EF7F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF7FC
  cmps(c,0,(int32_t)c->r[5],0); // 801EF800
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF804
  if (!crb(c,2)) { goto L_801EF814; } // 801EF808
  c->r[3]=0u+0x00000000u; // 801EF80C
  goto L_801EF898; // 801EF810
L_801EF814:;
  c->r[31]=R32(c->r[3]+0x00000004u); // 801EF814
  cmps(c,0,(int32_t)c->r[31],0); // 801EF818
  if (!crb(c,2)) { goto L_801EF828; } // 801EF81C
  c->r[3]=0u+0x00000000u; // 801EF820
  goto L_801EF898; // 801EF824
L_801EF828:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EF828
  if (!crb(c,0)) { goto L_801EF838; } // 801EF82C
  c->r[3]=0u+0x00000000u; // 801EF830
  goto L_801EF898; // 801EF834
L_801EF838:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 801EF838
  cmpu(c,0,c->r[4],c->r[0]); // 801EF83C
  if (crb(c,0)) { goto L_801EF84C; } // 801EF840
  c->r[3]=0u+0x00000000u; // 801EF844
  goto L_801EF898; // 801EF848
L_801EF84C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801EF84C
  c->r[3]=c->r[5]+c->r[0]; // 801EF850
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801EF854
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EF858
  c->r[3]=R32(c->r[3]+0x00000010u); // 801EF85C
  c->r[0]=R8(c->r[1]+0x00000009u); // 801EF860
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801EF864
  cmps(c,0,(int32_t)c->r[0],0); // 801EF868
  if (crb(c,2)) { goto L_801EF888; } // 801EF86C
  c->r[5]=0u+0x802D0000u; // 801EF870
  c->r[3]=c->r[13]+0xFFFF9EE0u; // 801EF874
  c->r[5]=c->r[5]+0x00002A60u; // 801EF878
  c->r[4]=0u+0x0000008Du; // 801EF87C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF880
  c->lr=0x801EF888u; f_801F9770(c); // 801EF884
L_801EF888:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801EF888
  c->r[5]=c->r[31]|c->r[31]; // 801EF88C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801EF890
  c->lr=0x801EF898u; f_801EF600(c); // 801EF894
L_801EF898:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF898
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF89C
  c->lr=c->r[0]; // 801EF8A0
  c->r[1]=c->r[1]+0x00000020u; // 801EF8A4
  return; // 801EF8A8
}

// fn_801EF8B0
void f_801EF8B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF8B0
  c->r[0]=c->lr; // 801EF8B4
  c->r[5]=R32(c->r[4]+0x00000000u); // 801EF8B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF8BC
  c->r[0]=0u+0x00000000u; // 801EF8C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF8C4
  c->r[31]=0u+0x802D0000u; // 801EF8C8
  c->r[31]=c->r[31]+0x00002A88u; // 801EF8CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF8D0
  c->r[30]=c->r[4]|c->r[4]; // 801EF8D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF8D8
  c->r[29]=c->r[3]|c->r[3]; // 801EF8DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801EF8E0
  c->r[0]=c->r[5]+0xADA90000u; // 801EF8E4
  cmpu(c,0,c->r[0],0x00004156u); // 801EF8E8
  if (crb(c,2)) { goto L_801EF904; } // 801EF8EC
  c->r[3]=c->r[31]+0x00000000u; // 801EF8F0
  c->r[5]=c->r[31]+0x00000014u; // 801EF8F4
  c->r[4]=0u+0x0000002Au; // 801EF8F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF8FC
  c->lr=0x801EF904u; f_801F9770(c); // 801EF900
L_801EF904:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801EF904
  c->r[30]=c->r[0]+c->r[30]; cr0(c,c->r[30]); // 801EF908
  if (!crb(c,2)) { goto L_801EF918; } // 801EF90C
  c->r[3]=c->r[29]|c->r[29]; // 801EF910
  goto L_801EF948; // 801EF914
L_801EF918:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801EF918
  c->r[0]=c->r[3]+0xB6B20000u; // 801EF91C
  cmpu(c,0,c->r[0],0x0000464Fu); // 801EF920
  if (crb(c,2)) { goto L_801EF93C; } // 801EF924
  c->r[3]=c->r[31]+0x00000000u; // 801EF928
  c->r[5]=c->r[31]+0x0000006Cu; // 801EF92C
  c->r[4]=0u+0x00000030u; // 801EF930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF934
  c->lr=0x801EF93Cu; f_801F9770(c); // 801EF938
L_801EF93C:;
  c->r[0]=c->r[30]+0x00000008u; // 801EF93C
  W32(c->r[29]+0x00000000u,c->r[0]); // 801EF940
  c->r[3]=c->r[29]|c->r[29]; // 801EF944
L_801EF948:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF948
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF94C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF950
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF954
  c->lr=c->r[0]; // 801EF958
  c->r[1]=c->r[1]+0x00000020u; // 801EF95C
  return; // 801EF960
}

// fn_801EF970
void f_801EF970(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 801EF970
  return; // 801EF974
}

// fn_801EF980
void f_801EF980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF980
  c->r[0]=c->lr; // 801EF984
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF988
  c->r[11]=c->r[1]+0x00000020u; // 801EF98C
  c->lr=0x801EF994u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF990
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EF994
  c->r[30]=0u+0x802D0000u; // 801EF998
  c->r[27]=c->r[3]|c->r[3]; // 801EF99C
  c->r[29]=c->r[4]|c->r[4]; // 801EF9A0
  cmps(c,0,(int32_t)c->r[0],0); // 801EF9A4
  c->r[28]=c->r[5]|c->r[5]; // 801EF9A8
  c->r[30]=c->r[30]+0x00002A88u; // 801EF9AC
  if (!crb(c,2)) { goto L_801EF9C8; } // 801EF9B0
  c->r[3]=c->r[30]+0x00000000u; // 801EF9B4
  c->r[5]=c->r[30]+0x000000C0u; // 801EF9B8
  c->r[4]=0u+0x0000004Fu; // 801EF9BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EF9C0
  c->lr=0x801EF9C8u; f_801F9770(c); // 801EF9C4
L_801EF9C8:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801EF9C8
  c->r[6]=R8(c->r[3]+0x00000000u); // 801EF9CC
  cmps(c,0,(int32_t)c->r[6],2); // 801EF9D0
  if (crb(c,2)) { goto L_801EF9EC; } // 801EF9D4
  cmps(c,0,(int32_t)c->r[6],1); // 801EF9D8
  if (crb(c,2)) { goto L_801EF9F4; } // 801EF9DC
  cmps(c,0,(int32_t)c->r[6],0); // 801EF9E0
  if (crb(c,2)) { goto L_801EF9FC; } // 801EF9E4
  goto L_801EFA04; // 801EF9E8
L_801EF9EC:;
  c->r[30]=0u+0x00000003u; // 801EF9EC
  goto L_801EFA1C; // 801EF9F0
L_801EF9F4:;
  c->r[30]=0u+0x00000001u; // 801EF9F4
  goto L_801EFA1C; // 801EF9F8
L_801EF9FC:;
  c->r[30]=0u+0x00000002u; // 801EF9FC
  goto L_801EFA1C; // 801EFA00
L_801EFA04:;
  c->r[3]=c->r[30]+0x00000000u; // 801EFA04
  c->r[5]=c->r[30]+0x000000ECu; // 801EFA08
  c->r[4]=0u+0x000000A7u; // 801EFA0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFA10
  c->lr=0x801EFA18u; f_801F9770(c); // 801EFA14
  c->r[30]=0u+0x00000003u; // 801EFA18
L_801EFA1C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801EFA1C
  c->r[5]=c->r[30]|c->r[30]; // 801EFA20
  c->r[3]=0u+0x00000000u; // 801EFA24
  c->r[4]=R32(c->r[27]+0x00000000u); // 801EFA28
  c->r[0]=R8(c->r[4]+0x00000002u); // 801EFA2C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801EFA30
  c->r[6]=R32(c->r[27]+0x00000000u); // 801EFA34
  c->r[4]=R8(c->r[6]+0x00000003u); // 801EFA38
  c->r[0]=R16(c->r[6]+0x00000004u); // 801EFA3C
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801EFA40
  c->r[0]=c->r[4]+c->r[0]; // 801EFA44
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801EFA48
  c->r[4]=R32(c->r[27]+0x00000000u); // 801EFA4C
  c->r[4]=R8(c->r[4]+0x00000001u); // 801EFA50
  c->r[0]=0u-c->r[4]; // 801EFA54
  c->r[0]=c->r[0]|c->r[4]; // 801EFA58
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801EFA5C
  W8(c->r[29]+0x00000004u,c->r[0]); // 801EFA60
  c->r[4]=R32(c->r[27]+0x00000000u); // 801EFA64
  c->r[4]=R32(c->r[4]+0x00000008u); // 801EFA68
  c->lr=0x801EFA70u; f_801CE8F0(c); // 801EFA6C
  W32(c->r[29]+0x00000010u,c->r[3]); // 801EFA70
  c->r[5]=c->r[30]|c->r[30]; // 801EFA74
  c->r[3]=0u+0x00000000u; // 801EFA78
  c->r[4]=R32(c->r[27]+0x00000000u); // 801EFA7C
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801EFA80
  c->lr=0x801EFA88u; f_801CE8F0(c); // 801EFA84
  c->r[0]=c->r[3]+0x00000001u; // 801EFA88
  W32(c->r[29]+0x00000014u,c->r[0]); // 801EFA8C
  c->r[31]=c->r[29]+0x00000018u; // 801EFA90
  c->r[29]=0u+0x00000000u; // 801EFA94
  c->r[3]=R32(c->r[27]+0x00000000u); // 801EFA98
  c->r[0]=R32(c->r[3]+0x00000010u); // 801EFA9C
  c->r[30]=c->r[0]+c->r[3]; // 801EFAA0
  goto L_801EFB5C; // 801EFAA4
L_801EFAA8:;
  cmps(c,0,(int32_t)c->r[29],2); // 801EFAA8
  if (!crb(c,0)) { goto L_801EFB50; } // 801EFAAC
  c->r[0]=R32(c->r[30]+0x00000000u); // 801EFAB0
  c->r[4]=c->r[0]+c->r[3]; // 801EFAB4
  c->r[0]=R32(c->r[4]+0x00000004u); // 801EFAB8
  cmps(c,0,(int32_t)c->r[0],0); // 801EFABC
  if (crb(c,2)) { goto L_801EFB40; } // 801EFAC0
  c->r[5]=c->r[0]+c->r[3]; // 801EFAC4
  c->r[0]=R32(c->r[5]+0x00000004u); // 801EFAC8
  c->r[3]=R32(c->r[5]+0x00000000u); // 801EFACC
  W32(c->r[31]+0x00000004u,c->r[3]); // 801EFAD0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801EFAD4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801EFAD8
  c->r[3]=R32(c->r[5]+0x00000008u); // 801EFADC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801EFAE0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801EFAE4
  c->r[0]=R32(c->r[5]+0x00000014u); // 801EFAE8
  c->r[3]=R32(c->r[5]+0x00000010u); // 801EFAEC
  W32(c->r[31]+0x00000014u,c->r[3]); // 801EFAF0
  W32(c->r[31]+0x00000018u,c->r[0]); // 801EFAF4
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801EFAF8
  c->r[3]=R32(c->r[5]+0x00000018u); // 801EFAFC
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801EFB00
  W32(c->r[31]+0x00000020u,c->r[0]); // 801EFB04
  c->r[0]=R16(c->r[5]+0x00000020u); // 801EFB08
  W16(c->r[31]+0x00000024u,c->r[0]); // 801EFB0C
  c->r[0]=R16(c->r[5]+0x00000022u); // 801EFB10
  W16(c->r[31]+0x00000026u,c->r[0]); // 801EFB14
  c->r[0]=R16(c->r[5]+0x00000024u); // 801EFB18
  W16(c->r[31]+0x00000028u,c->r[0]); // 801EFB1C
  c->r[0]=R16(c->r[5]+0x00000026u); // 801EFB20
  W16(c->r[31]+0x0000002Au,c->r[0]); // 801EFB24
  c->r[0]=R16(c->r[5]+0x00000028u); // 801EFB28
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 801EFB2C
  c->r[0]=R16(c->r[5]+0x0000002Au); // 801EFB30
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 801EFB34
  c->r[0]=R16(c->r[5]+0x0000002Cu); // 801EFB38
  W16(c->r[31]+0x00000030u,c->r[0]); // 801EFB3C
L_801EFB40:;
  c->r[3]=c->r[27]|c->r[27]; // 801EFB40
  c->r[5]=c->r[28]|c->r[28]; // 801EFB44
  c->lr=0x801EFB4Cu; f_801EFB90(c); // 801EFB48
  W32(c->r[31]+0x00000000u,c->r[3]); // 801EFB4C
L_801EFB50:;
  c->r[31]=c->r[31]+0x00000034u; // 801EFB50
  c->r[30]=c->r[30]+0x00000004u; // 801EFB54
  c->r[29]=c->r[29]+0x00000001u; // 801EFB58
L_801EFB5C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801EFB5C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801EFB60
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801EFB64
  if (crb(c,0)) { IRQCHK(c); goto L_801EFAA8; } // 801EFB68
  c->r[11]=c->r[1]+0x00000020u; // 801EFB6C
  c->r[3]=0u+0x00000001u; // 801EFB70
  c->lr=0x801EFB78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EFB74
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EFB78
  c->lr=c->r[0]; // 801EFB7C
  c->r[1]=c->r[1]+0x00000020u; // 801EFB80
  return; // 801EFB84
}

// fn_801EFB90
void f_801EFB90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFB90
  c->r[0]=c->lr; // 801EFB94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EFB98
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EFB9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EFBA0
  c->r[31]=0u+0x802D0000u; // 801EFBA4
  cmps(c,0,(int32_t)c->r[0],0); // 801EFBA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EFBAC
  c->r[30]=c->r[5]|c->r[5]; // 801EFBB0
  c->r[31]=c->r[31]+0x00002A88u; // 801EFBB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EFBB8
  c->r[29]=c->r[4]|c->r[4]; // 801EFBBC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EFBC0
  c->r[28]=c->r[3]|c->r[3]; // 801EFBC4
  if (!crb(c,2)) { goto L_801EFBE0; } // 801EFBC8
  c->r[3]=c->r[31]+0x00000000u; // 801EFBCC
  c->r[5]=c->r[31]+0x000000C0u; // 801EFBD0
  c->r[4]=0u+0x00000080u; // 801EFBD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFBD8
  c->lr=0x801EFBE0u; f_801F9770(c); // 801EFBDC
L_801EFBE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EFBE0
  if (!crb(c,2)) { goto L_801EFBFC; } // 801EFBE4
  c->r[3]=c->r[31]+0x00000000u; // 801EFBE8
  c->r[5]=c->r[31]+0x00000108u; // 801EFBEC
  c->r[4]=0u+0x00000081u; // 801EFBF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFBF4
  c->lr=0x801EFBFCu; f_801F9770(c); // 801EFBF8
L_801EFBFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EFBFC
  c->r[0]=cntlz(c->r[30]); // 801EFC00
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EFC04
  if (!crb(c,2)) { goto L_801EFC10; } // 801EFC08
  c->r[30]=R32(c->r[28]+0x00000000u); // 801EFC0C
L_801EFC10:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801EFC10
  c->r[0]=R8(c->r[3]+0x00000006u); // 801EFC14
  cmps(c,0,(int32_t)c->r[0],0); // 801EFC18
  if (crb(c,2)) { goto L_801EFC2C; } // 801EFC1C
  cmps(c,0,(int32_t)c->r[0],1); // 801EFC20
  if (crb(c,2)) { goto L_801EFC44; } // 801EFC24
  goto L_801EFC4C; // 801EFC28
L_801EFC2C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801EFC2C
  cmps(c,0,(int32_t)c->r[4],0); // 801EFC30
  c->r[3]=c->r[0]+c->r[30]; // 801EFC34
  if (crb(c,2)) { goto L_801EFC54; } // 801EFC38
  c->r[3]=c->r[3]+0x00000008u; // 801EFC3C
  goto L_801EFC54; // 801EFC40
L_801EFC44:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 801EFC44
  goto L_801EFC54; // 801EFC48
L_801EFC4C:;
  c->r[3]=0u+0x00000000u; // 801EFC4C
  goto L_801EFC5C; // 801EFC50
L_801EFC54:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801EFC54
  c->r[3]=c->r[0]+c->r[3]; // 801EFC58
L_801EFC5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EFC5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EFC60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EFC64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EFC68
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EFC6C
  c->lr=c->r[0]; // 801EFC70
  c->r[1]=c->r[1]+0x00000020u; // 801EFC74
  return; // 801EFC78
}

// fn_801EFC80
void f_801EFC80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFC80
  c->r[0]=c->lr; // 801EFC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFC8C
  c->r[31]=c->r[4]|c->r[4]; // 801EFC90
  c->r[4]=c->r[5]|c->r[5]; // 801EFC94
  c->r[5]=c->r[6]|c->r[6]; // 801EFC98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EFC9C
  c->r[30]=c->r[3]|c->r[3]; // 801EFCA0
  c->lr=0x801EFCA8u; f_801D2BF0(c); // 801EFCA4
  c->r[4]=0u+0x802D0000u; // 801EFCA8
  c->r[3]=c->r[30]+0x00000110u; // 801EFCAC
  c->r[4]=c->r[4]+0x00002C78u; // 801EFCB0
  W32(c->r[30]+0x00000000u,c->r[4]); // 801EFCB4
  c->lr=0x801EFCBCu; f_801F07A0(c); // 801EFCB8
  c->r[0]=0u+0x00000000u; // 801EFCBC
  W32(c->r[30]+0x00000228u,c->r[0]); // 801EFCC0
  c->r[3]=c->r[30]|c->r[30]; // 801EFCC4
  W32(c->r[30]+0x0000022Cu,c->r[31]); // 801EFCC8
  W8(c->r[30]+0x00000230u,c->r[0]); // 801EFCCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFCD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EFCD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFCD8
  c->lr=c->r[0]; // 801EFCDC
  c->r[1]=c->r[1]+0x00000010u; // 801EFCE0
  return; // 801EFCE4
}

// fn_801EFCF0
void f_801EFCF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFCF0
  c->r[0]=c->lr; // 801EFCF4
  cmps(c,0,(int32_t)c->r[3],0); // 801EFCF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFCFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFD00
  c->r[31]=c->r[3]|c->r[3]; // 801EFD04
  if (crb(c,2)) { goto L_801EFD18; } // 801EFD08
  cmps(c,0,(int32_t)c->r[4],0); // 801EFD0C
  if (!crb(c,1)) { goto L_801EFD18; } // 801EFD10
  c->lr=0x801EFD18u; f_800B9AD0(c); // 801EFD14
L_801EFD18:;
  c->r[3]=c->r[31]|c->r[31]; // 801EFD18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFD1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFD20
  c->lr=c->r[0]; // 801EFD24
  c->r[1]=c->r[1]+0x00000010u; // 801EFD28
  return; // 801EFD2C
}

// fn_801EFD30
void f_801EFD30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFD30
  c->r[0]=c->lr; // 801EFD34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EFD38
  c->r[11]=c->r[1]+0x00000030u; // 801EFD3C
  c->lr=0x801EFD44u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EFD40
  cmps(c,0,(int32_t)c->r[4],0); // 801EFD44
  c->r[31]=0u+0x802D0000u; // 801EFD48
  c->r[24]=c->r[3]|c->r[3]; // 801EFD4C
  c->r[25]=c->r[4]|c->r[4]; // 801EFD50
  c->r[26]=c->r[5]|c->r[5]; // 801EFD54
  c->r[27]=c->r[6]|c->r[6]; // 801EFD58
  c->r[28]=c->r[7]|c->r[7]; // 801EFD5C
  c->r[29]=c->r[8]|c->r[8]; // 801EFD60
  c->r[30]=c->r[9]|c->r[9]; // 801EFD64
  c->r[31]=c->r[31]+0x00002BC0u; // 801EFD68
  if (!crb(c,2)) { goto L_801EFD84; } // 801EFD6C
  c->r[3]=c->r[31]+0x00000000u; // 801EFD70
  c->r[5]=c->r[31]+0x00000014u; // 801EFD74
  c->r[4]=0u+0x0000004Au; // 801EFD78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFD7C
  c->lr=0x801EFD84u; f_801F9770(c); // 801EFD80
L_801EFD84:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EFD84
  if (!crb(c,2)) { goto L_801EFDA0; } // 801EFD88
  c->r[3]=c->r[31]+0x00000000u; // 801EFD8C
  c->r[5]=c->r[31]+0x00000044u; // 801EFD90
  c->r[4]=0u+0x0000004Bu; // 801EFD94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFD98
  c->lr=0x801EFDA0u; f_801F9770(c); // 801EFD9C
L_801EFDA0:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 801EFDA0
  c->r[3]=c->r[24]|c->r[24]; // 801EFDA4
  c->r[12]=R32(c->r[12]+0x00000020u); // 801EFDA8
  c->ctr=c->r[12]; // 801EFDAC
  if (true) { c->lr=0x801EFDB4u; dispatch(c,c->ctr); } // 801EFDB0
  c->r[3]=c->r[24]|c->r[24]; // 801EFDB4
  c->lr=0x801EFDBCu; f_801D42A0(c); // 801EFDB8
  c->r[8]=c->r[3]|c->r[3]; // 801EFDBC
  c->r[4]=c->r[25]|c->r[25]; // 801EFDC0
  c->r[5]=c->r[26]|c->r[26]; // 801EFDC4
  c->r[6]=c->r[27]|c->r[27]; // 801EFDC8
  c->r[7]=c->r[28]|c->r[28]; // 801EFDCC
  c->r[9]=c->r[29]|c->r[29]; // 801EFDD0
  c->r[10]=c->r[30]|c->r[30]; // 801EFDD4
  c->r[3]=c->r[24]+0x00000110u; // 801EFDD8
  c->lr=0x801EFDE0u; f_801F08C0(c); // 801EFDDC
  cmps(c,0,(int32_t)c->r[3],0); // 801EFDE0
  if (!crb(c,2)) { goto L_801EFDF0; } // 801EFDE4
  c->r[3]=0u+0x00000000u; // 801EFDE8
  goto L_801EFDFC; // 801EFDEC
L_801EFDF0:;
  c->r[0]=0u+0x00000001u; // 801EFDF0
  W8(c->r[24]+0x00000230u,c->r[0]); // 801EFDF4
  c->r[3]=0u+0x00000001u; // 801EFDF8
L_801EFDFC:;
  c->r[11]=c->r[1]+0x00000030u; // 801EFDFC
  c->lr=0x801EFE04u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EFE00
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EFE04
  c->lr=c->r[0]; // 801EFE08
  c->r[1]=c->r[1]+0x00000030u; // 801EFE0C
  return; // 801EFE10
}

// fn_801EFE20
void f_801EFE20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFE20
  c->r[0]=c->lr; // 801EFE24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EFE28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EFE2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EFE30
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EFE34
  c->r[29]=c->r[3]|c->r[3]; // 801EFE38
  c->lr=0x801EFE40u; f_801D3D40(c); // 801EFE3C
  cmps(c,0,(int32_t)c->r[29],0); // 801EFE40
  c->r[30]=R32(c->r[29]+0x0000022Cu); // 801EFE44
  if (!crb(c,2)) { goto L_801EFE68; } // 801EFE48
  c->r[3]=0u+0x802D0000u; // 801EFE4C
  c->r[5]=0u+0x802D0000u; // 801EFE50
  c->r[3]=c->r[3]+0x00002D38u; // 801EFE54
  c->r[4]=0u+0x0000009Eu; // 801EFE58
  c->r[5]=c->r[5]+0x00002D10u; // 801EFE5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFE60
  c->lr=0x801EFE68u; f_801F9770(c); // 801EFE64
L_801EFE68:;
  c->r[31]=c->r[30]+0x00000010u; // 801EFE68
  c->r[3]=c->r[31]|c->r[31]; // 801EFE6C
  c->lr=0x801EFE74u; f_800CCD50(c); // 801EFE70
  c->r[0]=R32(c->r[30]+0x00000004u); // 801EFE74
  cmps(c,0,(int32_t)c->r[0],0); // 801EFE78
  if (!crb(c,2)) { goto L_801EFE8C; } // 801EFE7C
  c->r[3]=c->r[31]|c->r[31]; // 801EFE80
  c->lr=0x801EFE88u; f_800CCE30(c); // 801EFE84
  goto L_801EFEE8; // 801EFE88
L_801EFE8C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EFE8C
  if (!crb(c,2)) { goto L_801EFEB0; } // 801EFE90
  c->r[3]=0u+0x802D0000u; // 801EFE94
  c->r[5]=0u+0x802D0000u; // 801EFE98
  c->r[3]=c->r[3]+0x00000804u; // 801EFE9C
  c->r[4]=0u+0x00000233u; // 801EFEA0
  c->r[5]=c->r[5]+0x000007E0u; // 801EFEA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFEA8
  c->lr=0x801EFEB0u; f_801F9770(c); // 801EFEAC
L_801EFEB0:;
  c->r[3]=c->r[30]+0x00000004u; // 801EFEB0
  c->r[4]=c->r[29]+0x000000F0u; // 801EFEB4
  c->lr=0x801EFEBCu; f_801FA230(c); // 801EFEB8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801EFEBC
  c->r[3]=c->r[29]|c->r[29]; // 801EFEC0
  c->r[4]=0u+0xFFFFFFFFu; // 801EFEC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EFEC8
  c->ctr=c->r[12]; // 801EFECC
  if (true) { c->lr=0x801EFED4u; dispatch(c,c->ctr); } // 801EFED0
  c->r[3]=c->r[30]|c->r[30]; // 801EFED4
  c->r[4]=c->r[29]|c->r[29]; // 801EFED8
  c->lr=0x801EFEE0u; f_801D7940(c); // 801EFEDC
  c->r[3]=c->r[31]|c->r[31]; // 801EFEE0
  c->lr=0x801EFEE8u; f_800CCE30(c); // 801EFEE4
L_801EFEE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EFEE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EFEEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EFEF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EFEF4
  c->lr=c->r[0]; // 801EFEF8
  c->r[1]=c->r[1]+0x00000020u; // 801EFEFC
  return; // 801EFF00
}

// fn_801EFF10
void f_801EFF10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFF10
  c->r[0]=c->lr; // 801EFF14
  cmps(c,0,(int32_t)c->r[3],0); // 801EFF18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFF1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFF20
  c->r[31]=c->r[3]|c->r[3]; // 801EFF24
  if (crb(c,2)) { goto L_801EFF38; } // 801EFF28
  cmps(c,0,(int32_t)c->r[4],0); // 801EFF2C
  if (!crb(c,1)) { goto L_801EFF38; } // 801EFF30
  c->lr=0x801EFF38u; f_800B9AD0(c); // 801EFF34
L_801EFF38:;
  c->r[3]=c->r[31]|c->r[31]; // 801EFF38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFF3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFF40
  c->lr=c->r[0]; // 801EFF44
  c->r[1]=c->r[1]+0x00000010u; // 801EFF48
  return; // 801EFF4C
}

// fn_801EFF50
void f_801EFF50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFF50
  c->r[0]=c->lr; // 801EFF54
  cmpu(c,0,c->r[4],0x0000007Fu); // 801EFF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFF5C
  c->r[0]=0u+0x00000000u; // 801EFF60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFF64
  c->r[31]=c->r[4]|c->r[4]; // 801EFF68
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EFF6C
  c->r[30]=c->r[3]|c->r[3]; // 801EFF70
  if (crb(c,1)) { goto L_801EFF7C; } // 801EFF74
  c->r[0]=0u+0x00000001u; // 801EFF78
L_801EFF7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EFF7C
  if (!crb(c,2)) { goto L_801EFFAC; } // 801EFF80
  c->r[3]=0u+0x802D0000u; // 801EFF84
  c->r[5]=0u+0x802D0000u; // 801EFF88
  c->r[6]=c->r[31]|c->r[31]; // 801EFF8C
  c->r[4]=0u+0x0000007Cu; // 801EFF90
  c->r[3]=c->r[3]+0x00002BC0u; // 801EFF94
  c->r[5]=c->r[5]+0x00002C30u; // 801EFF98
  c->r[7]=0u+0x00000000u; // 801EFF9C
  c->r[8]=0u+0x0000007Fu; // 801EFFA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EFFA4
  c->lr=0x801EFFACu; f_801F9770(c); // 801EFFA8
L_801EFFAC:;
  c->r[4]=c->r[31]|c->r[31]; // 801EFFAC
  c->r[3]=c->r[30]+0x00000110u; // 801EFFB0
  c->lr=0x801EFFB8u; f_801F0CC0(c); // 801EFFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFFB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFFBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EFFC0
  c->lr=c->r[0]; // 801EFFC4
  c->r[1]=c->r[1]+0x00000010u; // 801EFFC8
  return; // 801EFFCC
}

// fn_801EFFD0
void f_801EFFD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801EFFD0
  f_801F0D40(c); return; // 801EFFD4
}

// fn_801EFFE0
void f_801EFFE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFFE0
  c->r[0]=c->lr; // 801EFFE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EFFE8
  c->r[11]=c->r[1]+0x00000040u; // 801EFFEC
  c->lr=0x801EFFF4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EFFF0
  c->r[4]=R8(c->r[3]+0x00000098u); // 801EFFF4
  c->r[31]=c->r[3]|c->r[3]; // 801EFFF8
  c->r[0]=R32(c->r[3]+0x00000050u); // 801EFFFC
  c->r[4]=c->r[4]+c->r[0]; // 801F0000
  cmps(c,0,(int32_t)c->r[4],127); // 801F0004
  if (!crb(c,1)) { goto L_801F0014; } // 801F0008
  c->r[24]=0u+0x0000007Fu; // 801F000C
  goto L_801F001C; // 801F0010
L_801F0014:;
  c->r[0]=sraw(c,c->r[4],31); // 801F0014
  c->r[24]=c->r[4]&~c->r[0]; // 801F0018
L_801F001C:;
  c->r[25]=R32(c->r[3]+0x0000022Cu); // 801F001C
  c->r[26]=c->r[25]+0x00000010u; // 801F0020
  c->r[3]=c->r[26]|c->r[26]; // 801F0024
  c->lr=0x801F002Cu; f_800CCD50(c); // 801F0028
  cmps(c,0,(int32_t)c->r[31],0); // 801F002C
  if (!crb(c,2)) { goto L_801F0050; } // 801F0030
  c->r[3]=0u+0x802D0000u; // 801F0034
  c->r[5]=0u+0x802D0000u; // 801F0038
  c->r[3]=c->r[3]+0x00000804u; // 801F003C
  c->r[4]=0u+0x00000233u; // 801F0040
  c->r[5]=c->r[5]+0x000007E0u; // 801F0044
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0048
  c->lr=0x801F0050u; f_801F9770(c); // 801F004C
L_801F0050:;
  c->r[23]=c->r[31]+0x000000F0u; // 801F0050
  c->r[3]=c->r[25]+0x00000004u; // 801F0054
  c->r[4]=c->r[23]|c->r[23]; // 801F0058
  c->lr=0x801F0060u; f_801FA230(c); // 801F005C
  c->r[30]=R32(c->r[25]+0x00000008u); // 801F0060
  c->r[29]=c->r[25]+0x00000008u; // 801F0064
  c->r[27]=0u+0x802D0000u; // 801F0068
  c->r[28]=0u+0x802D0000u; // 801F006C
  goto L_801F00C0; // 801F0070
L_801F0074:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F0074
  if (!crb(c,2)) { goto L_801F0090; } // 801F0078
  c->r[3]=c->r[27]+0x00000834u; // 801F007C
  c->r[5]=c->r[28]+0x00000810u; // 801F0080
  c->r[4]=0u+0x0000023Du; // 801F0084
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0088
  c->lr=0x801F0090u; f_801F9770(c); // 801F008C
L_801F0090:;
  c->r[3]=R8(c->r[30]+0xFFFFFFA8u); // 801F0090
  c->r[0]=R32(c->r[30]+0xFFFFFF60u); // 801F0094
  c->r[3]=c->r[3]+c->r[0]; // 801F0098
  cmps(c,0,(int32_t)c->r[3],127); // 801F009C
  if (!crb(c,1)) { goto L_801F00AC; } // 801F00A0
  c->r[0]=0u+0x0000007Fu; // 801F00A4
  goto L_801F00B4; // 801F00A8
L_801F00AC:;
  c->r[0]=sraw(c,c->r[3],31); // 801F00AC
  c->r[0]=c->r[3]&~c->r[0]; // 801F00B0
L_801F00B4:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801F00B4
  if (crb(c,0)) { goto L_801F00C8; } // 801F00B8
  c->r[30]=R32(c->r[30]+0x00000000u); // 801F00BC
L_801F00C0:;
  cmpu(c,0,c->r[30],c->r[29]); // 801F00C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801F0074; } // 801F00C4
L_801F00C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801F00C8
  if (!crb(c,2)) { goto L_801F00EC; } // 801F00CC
  c->r[3]=0u+0x802D0000u; // 801F00D0
  c->r[5]=0u+0x802D0000u; // 801F00D4
  c->r[3]=c->r[3]+0x00000804u; // 801F00D8
  c->r[4]=0u+0x00000233u; // 801F00DC
  c->r[5]=c->r[5]+0x000007E0u; // 801F00E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F00E4
  c->lr=0x801F00ECu; f_801F9770(c); // 801F00E8
L_801F00EC:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F00EC
  c->r[5]=c->r[23]|c->r[23]; // 801F00F0
  c->r[3]=c->r[25]+0x00000004u; // 801F00F4
  c->r[4]=c->r[1]+0x00000008u; // 801F00F8
  c->lr=0x801F0100u; f_801FA130(c); // 801F00FC
  c->r[3]=c->r[26]|c->r[26]; // 801F0100
  c->lr=0x801F0108u; f_800CCE30(c); // 801F0104
  c->r[11]=c->r[1]+0x00000040u; // 801F0108
  c->lr=0x801F0110u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F010C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F0110
  c->lr=c->r[0]; // 801F0114
  c->r[1]=c->r[1]+0x00000040u; // 801F0118
  return; // 801F011C
}

// fn_801F0120
void f_801F0120(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000228u); // 801F0120
  c->r[0]=0u-c->r[3]; // 801F0124
  c->r[0]=c->r[0]|c->r[3]; // 801F0128
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F012C
  return; // 801F0130
}

// fn_801F0140
void f_801F0140(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000228u); // 801F0140
  f_801F01A0(c); return; // 801F0144
}

// fn_801F0150
void f_801F0150(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801F0150
  return; // 801F0154
}

// fn_801F0160
void f_801F0160(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801F0160
  return; // 801F0164
}

// fn_801F0170
void f_801F0170(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000230u); // 801F0170
  return; // 801F0174
}

// fn_801F0180
void f_801F0180(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFAEA0u; // 801F0180
  return; // 801F0184
}

// fn_801F0190
void f_801F0190(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFAE38u; // 801F0190
  W32(c->r[13]+0xFFFFAEA0u,c->r[0]); // 801F0194
  return; // 801F0198
}

// fn_801F01A0
void f_801F01A0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 801F01A0
  cmps(c,0,(int32_t)c->r[4],0); // 801F01A4
  if (crb(c,2)) { goto L_801F01C0; } // 801F01A8
  c->r[0]=R32(c->r[4]+0x00000228u); // 801F01AC
  cmpu(c,0,c->r[0],c->r[3]); // 801F01B0
  if (!crb(c,2)) { goto L_801F01C0; } // 801F01B4
  c->r[0]=0u+0x00000000u; // 801F01B8
  W32(c->r[4]+0x00000228u,c->r[0]); // 801F01BC
L_801F01C0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F01C0
  cmps(c,0,(int32_t)c->r[0],0); // 801F01C4
  if (crb(c,2)) return; // 801F01C8
  c->r[0]=0u+0x00000000u; // 801F01CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F01D0
  return; // 801F01D4
}

// fn_801F01E0
void f_801F01E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F01E0
  c->r[0]=c->lr; // 801F01E4
  cmps(c,0,(int32_t)c->r[4],0); // 801F01E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F01EC
  c->r[0]=0u+0x00000000u; // 801F01F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F01F4
  c->r[31]=0u+0x802D0000u; // 801F01F8
  c->r[31]=c->r[31]+0x00002D50u; // 801F01FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F0200
  c->r[30]=c->r[4]|c->r[4]; // 801F0204
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F0208
  c->r[29]=c->r[3]|c->r[3]; // 801F020C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F0210
  W32(c->r[3]+0x00000004u,c->r[0]); // 801F0214
  W32(c->r[3]+0x00000008u,c->r[0]); // 801F0218
  if (!crb(c,2)) { goto L_801F0234; } // 801F021C
  c->r[3]=c->r[31]+0x00000000u; // 801F0220
  c->r[5]=c->r[31]+0x000000A0u; // 801F0224
  c->r[4]=0u+0x0000005Du; // 801F0228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F022C
  c->lr=0x801F0234u; f_801F9770(c); // 801F0230
L_801F0234:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801F0234
  c->r[0]=c->r[3]+0xADA90000u; // 801F0238
  cmpu(c,0,c->r[0],0x00005344u); // 801F023C
  if (crb(c,2)) { goto L_801F0258; } // 801F0240
  c->r[3]=c->r[31]+0x00000000u; // 801F0244
  c->r[5]=c->r[31]+0x00000010u; // 801F0248
  c->r[4]=0u+0x0000003Bu; // 801F024C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0250
  c->lr=0x801F0258u; f_801F9770(c); // 801F0254
L_801F0258:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801F0258
  c->r[0]=c->r[3]+0xADA90000u; // 801F025C
  cmpu(c,0,c->r[0],0x00005344u); // 801F0260
  if (crb(c,2)) { goto L_801F0270; } // 801F0264
  c->r[0]=0u+0x00000000u; // 801F0268
  goto L_801F02DC; // 801F026C
L_801F0270:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801F0270
  cmpu(c,0,c->r[0],0x00000100u); // 801F0274
  if (!crb(c,0)) { goto L_801F0290; } // 801F0278
  c->r[3]=c->r[31]+0x00000000u; // 801F027C
  c->r[5]=c->r[31]+0x00000044u; // 801F0280
  c->r[4]=0u+0x00000043u; // 801F0284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0288
  c->lr=0x801F0290u; f_801F9770(c); // 801F028C
L_801F0290:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801F0290
  cmpu(c,0,c->r[0],0x00000100u); // 801F0294
  if (!crb(c,0)) { goto L_801F02A4; } // 801F0298
  c->r[0]=0u+0x00000000u; // 801F029C
  goto L_801F02DC; // 801F02A0
L_801F02A4:;
  cmpu(c,0,c->r[0],0x00000103u); // 801F02A4
  if (!crb(c,1)) { goto L_801F02C0; } // 801F02A8
  c->r[3]=c->r[31]+0x00000000u; // 801F02AC
  c->r[5]=c->r[31]+0x00000044u; // 801F02B0
  c->r[4]=0u+0x00000049u; // 801F02B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F02B8
  c->lr=0x801F02C0u; f_801F9770(c); // 801F02BC
L_801F02C0:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 801F02C0
  c->r[3]=0u+0x00000103u; // 801F02C4
  c->r[0]=addc(c,~c->r[4],0x00000103u,1); // 801F02C8
  c->r[3]=c->r[3]|~c->r[4]; // 801F02CC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801F02D0
  c->r[0]=c->r[3]-c->r[0]; // 801F02D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801F02D8
L_801F02DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801F02DC
  if (!crb(c,2)) { goto L_801F02EC; } // 801F02E0
  c->r[3]=c->r[29]|c->r[29]; // 801F02E4
  goto L_801F0368; // 801F02E8
L_801F02EC:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801F02EC
  c->r[0]=R32(c->r[30]+0x00000010u); // 801F02F0
  cmps(c,0,(int32_t)c->r[0],0); // 801F02F4
  if (crb(c,2)) { goto L_801F0328; } // 801F02F8
  c->r[3]=c->r[0]+c->r[30]; // 801F02FC
  W32(c->r[29]+0x00000004u,c->r[3]); // 801F0300
  c->r[3]=R32(c->r[3]+0x00000000u); // 801F0304
  c->r[0]=c->r[3]+0xBBBF0000u; // 801F0308
  cmpu(c,0,c->r[0],0x00005441u); // 801F030C
  if (crb(c,2)) { goto L_801F0328; } // 801F0310
  c->r[3]=c->r[31]+0x00000000u; // 801F0314
  c->r[5]=c->r[31]+0x000000C8u; // 801F0318
  c->r[4]=0u+0x00000069u; // 801F031C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0320
  c->lr=0x801F0328u; f_801F9770(c); // 801F0324
L_801F0328:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801F0328
  c->r[0]=R32(c->r[3]+0x00000018u); // 801F032C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0330
  if (crb(c,2)) { goto L_801F0364; } // 801F0334
  c->r[3]=c->r[0]+c->r[3]; // 801F0338
  W32(c->r[29]+0x00000008u,c->r[3]); // 801F033C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801F0340
  c->r[0]=c->r[3]+0xA8BF0000u; // 801F0344
  cmpu(c,0,c->r[0],0x00005645u); // 801F0348
  if (crb(c,2)) { goto L_801F0364; } // 801F034C
  c->r[3]=c->r[31]+0x00000000u; // 801F0350
  c->r[5]=c->r[31]+0x0000011Cu; // 801F0354
  c->r[4]=0u+0x00000071u; // 801F0358
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F035C
  c->lr=0x801F0364u; f_801F9770(c); // 801F0360
L_801F0364:;
  c->r[3]=c->r[29]|c->r[29]; // 801F0364
L_801F0368:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0368
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F036C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F0370
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F0374
  c->lr=c->r[0]; // 801F0378
  c->r[1]=c->r[1]+0x00000020u; // 801F037C
  return; // 801F0380
}

// fn_801F0390
void f_801F0390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0390
  c->r[0]=c->lr; // 801F0394
  c->r[6]=R32(c->r[3]+0x00000004u); // 801F0398
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F039C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801F03A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F03A4
  c->r[31]=c->r[4]|c->r[4]; // 801F03A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F03AC
  c->r[30]=c->r[6]+c->r[0]; // 801F03B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F03B4
  c->r[29]=c->r[6]+0x00000008u; // 801F03B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F03BC
  c->r[28]=c->r[3]|c->r[3]; // 801F03C0
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801F03C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F03C8
  if (crb(c,2)) { goto L_801F03E8; } // 801F03CC
  c->r[5]=0u+0x802D0000u; // 801F03D0
  c->r[3]=c->r[13]+0xFFFF9EF8u; // 801F03D4
  c->r[5]=c->r[5]+0x00002F10u; // 801F03D8
  c->r[4]=0u+0x0000008Du; // 801F03DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F03E0
  c->lr=0x801F03E8u; f_801F9770(c); // 801F03E4
L_801F03E8:;
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 801F03E8
  c->r[5]=c->r[29]|c->r[29]; // 801F03EC
  c->r[4]=R32(c->r[30]+0x00000010u); // 801F03F0
  c->lr=0x801F03F8u; f_801EF600(c); // 801F03F4
  c->r[0]=R8(c->r[3]+0x00000001u); // 801F03F8
  c->r[30]=c->r[3]|c->r[3]; // 801F03FC
  c->r[3]=R32(c->r[28]+0x00000004u); // 801F0400
  cmps(c,0,(int32_t)c->r[0],0); // 801F0404
  c->r[29]=c->r[3]+0x00000008u; // 801F0408
  if (crb(c,2)) { goto L_801F0428; } // 801F040C
  c->r[5]=0u+0x802D0000u; // 801F0410
  c->r[3]=c->r[13]+0xFFFF9F00u; // 801F0414
  c->r[5]=c->r[5]+0x00002F38u; // 801F0418
  c->r[4]=0u+0x0000008Du; // 801F041C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0420
  c->lr=0x801F0428u; f_801F9770(c); // 801F0424
L_801F0428:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801F0428
  c->r[5]=c->r[29]|c->r[29]; // 801F042C
  c->r[4]=R32(c->r[30]+0x00000004u); // 801F0430
  c->lr=0x801F0438u; f_801EF600(c); // 801F0434
  c->r[4]=R32(c->r[28]+0x00000000u); // 801F0438
  c->r[0]=R16(c->r[4]+0x00000006u); // 801F043C
  cmpu(c,0,c->r[0],0x00000102u); // 801F0440
  if (crb(c,0)) { goto L_801F0484; } // 801F0444
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0448
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801F044C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801F0450
  W8(c->r[31]+0x00000004u,c->r[0]); // 801F0454
  c->r[0]=R8(c->r[3]+0x00000005u); // 801F0458
  W8(c->r[31]+0x00000005u,c->r[0]); // 801F045C
  c->r[0]=R8(c->r[3]+0x00000006u); // 801F0460
  W8(c->r[31]+0x00000006u,c->r[0]); // 801F0464
  c->r[0]=R8(c->r[3]+0x00000007u); // 801F0468
  W8(c->r[31]+0x00000007u,c->r[0]); // 801F046C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801F0470
  W8(c->r[31]+0x00000008u,c->r[0]); // 801F0474
  c->r[0]=R8(c->r[3]+0x00000009u); // 801F0478
  W8(c->r[31]+0x00000009u,c->r[0]); // 801F047C
  goto L_801F04EC; // 801F0480
L_801F0484:;
  cmpu(c,0,c->r[0],0x00000101u); // 801F0484
  if (crb(c,0)) { goto L_801F04C0; } // 801F0488
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F048C
  c->r[4]=0u+0x00000000u; // 801F0490
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801F0494
  c->r[0]=0u+0x0000007Fu; // 801F0498
  c->r[5]=R8(c->r[3]+0x00000004u); // 801F049C
  W8(c->r[31]+0x00000004u,c->r[5]); // 801F04A0
  c->r[3]=R8(c->r[3]+0x00000005u); // 801F04A4
  W8(c->r[31]+0x00000005u,c->r[3]); // 801F04A8
  W8(c->r[31]+0x00000006u,c->r[4]); // 801F04AC
  W8(c->r[31]+0x00000007u,c->r[4]); // 801F04B0
  W8(c->r[31]+0x00000008u,c->r[4]); // 801F04B4
  W8(c->r[31]+0x00000009u,c->r[0]); // 801F04B8
  goto L_801F04EC; // 801F04BC
L_801F04C0:;
  {uint32_t ea=c->r[2]+0xFFFF9F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F04C0
  c->r[3]=0u+0x00000000u; // 801F04C4
  c->r[4]=0u+0x00000040u; // 801F04C8
  c->r[0]=0u+0x0000007Fu; // 801F04CC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801F04D0
  W8(c->r[31]+0x00000004u,c->r[4]); // 801F04D4
  W8(c->r[31]+0x00000005u,c->r[3]); // 801F04D8
  W8(c->r[31]+0x00000006u,c->r[3]); // 801F04DC
  W8(c->r[31]+0x00000007u,c->r[3]); // 801F04E0
  W8(c->r[31]+0x00000008u,c->r[3]); // 801F04E4
  W8(c->r[31]+0x00000009u,c->r[0]); // 801F04E8
L_801F04EC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F04EC
  c->r[3]=0u+0x00000001u; // 801F04F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F04F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F04F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F04FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0500
  c->lr=c->r[0]; // 801F0504
  c->r[1]=c->r[1]+0x00000020u; // 801F0508
  return; // 801F050C
}

// fn_801F0510
void f_801F0510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0510
  c->r[0]=c->lr; // 801F0514
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0518
  c->r[11]=c->r[1]+0x00000020u; // 801F051C
  c->lr=0x801F0524u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0520
  c->r[7]=R32(c->r[3]+0x00000004u); // 801F0524
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801F0528
  c->r[30]=c->r[3]|c->r[3]; // 801F052C
  c->r[31]=c->r[4]|c->r[4]; // 801F0530
  c->r[29]=c->r[7]+c->r[0]; // 801F0534
  c->r[27]=c->r[6]|c->r[6]; // 801F0538
  c->r[0]=R8(c->r[29]+0x0000000Du); // 801F053C
  c->r[28]=c->r[7]+0x00000008u; // 801F0540
  cmps(c,0,(int32_t)c->r[0],0); // 801F0544
  if (crb(c,2)) { goto L_801F0564; } // 801F0548
  c->r[5]=0u+0x802D0000u; // 801F054C
  c->r[3]=c->r[13]+0xFFFF9EF8u; // 801F0550
  c->r[5]=c->r[5]+0x00002F10u; // 801F0554
  c->r[4]=0u+0x0000008Du; // 801F0558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F055C
  c->lr=0x801F0564u; f_801F9770(c); // 801F0560
L_801F0564:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 801F0564
  c->r[5]=c->r[28]|c->r[28]; // 801F0568
  c->r[4]=R32(c->r[29]+0x00000010u); // 801F056C
  c->lr=0x801F0574u; f_801EF600(c); // 801F0570
  c->r[0]=R8(c->r[3]+0x00000011u); // 801F0574
  c->r[29]=c->r[3]|c->r[3]; // 801F0578
  c->r[3]=R32(c->r[30]+0x00000004u); // 801F057C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0580
  c->r[28]=c->r[3]+0x00000008u; // 801F0584
  if (crb(c,2)) { goto L_801F05A4; } // 801F0588
  c->r[5]=0u+0x802D0000u; // 801F058C
  c->r[3]=c->r[13]+0xFFFF9EE8u; // 801F0590
  c->r[5]=c->r[5]+0x00002EC0u; // 801F0594
  c->r[4]=0u+0x0000008Du; // 801F0598
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F059C
  c->lr=0x801F05A4u; f_801F9770(c); // 801F05A0
L_801F05A4:;
  c->r[3]=R8(c->r[29]+0x00000010u); // 801F05A4
  c->r[5]=c->r[28]|c->r[28]; // 801F05A8
  c->r[4]=R32(c->r[29]+0x00000014u); // 801F05AC
  c->lr=0x801F05B4u; f_801EF600(c); // 801F05B0
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801F05B4
  c->r[5]=R32(c->r[30]+0x00000004u); // 801F05B8
  c->r[4]=c->r[3]+c->r[27]; // 801F05BC
  c->r[29]=c->r[3]|c->r[3]; // 801F05C0
  c->r[0]=R8(c->r[4]+0x00000005u); // 801F05C4
  c->r[28]=c->r[5]+0x00000008u; // 801F05C8
  cmps(c,0,(int32_t)c->r[0],0); // 801F05CC
  if (crb(c,2)) { goto L_801F05EC; } // 801F05D0
  c->r[5]=0u+0x802D0000u; // 801F05D4
  c->r[3]=c->r[13]+0xFFFF9EF0u; // 801F05D8
  c->r[5]=c->r[5]+0x00002EE8u; // 801F05DC
  c->r[4]=0u+0x0000008Du; // 801F05E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F05E4
  c->lr=0x801F05ECu; f_801F9770(c); // 801F05E8
L_801F05EC:;
  c->r[4]=c->r[29]+c->r[27]; // 801F05EC
  c->r[5]=c->r[28]|c->r[28]; // 801F05F0
  c->r[3]=R8(c->r[4]+0x00000004u); // 801F05F4
  c->r[4]=R32(c->r[4]+0x00000008u); // 801F05F8
  c->lr=0x801F0600u; f_801EF600(c); // 801F05FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F0600
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F0604
  c->r[4]=R32(c->r[30]+0x00000000u); // 801F0608
  c->r[0]=R8(c->r[3]+0x00000004u); // 801F060C
  W8(c->r[31]+0x00000004u,c->r[0]); // 801F0610
  c->r[0]=R8(c->r[3]+0x00000008u); // 801F0614
  W8(c->r[31]+0x00000005u,c->r[0]); // 801F0618
  c->r[0]=R8(c->r[3]+0x00000005u); // 801F061C
  W8(c->r[31]+0x00000006u,c->r[0]); // 801F0620
  c->r[0]=R8(c->r[3]+0x00000006u); // 801F0624
  W8(c->r[31]+0x00000007u,c->r[0]); // 801F0628
  c->r[0]=R8(c->r[3]+0x00000007u); // 801F062C
  W8(c->r[31]+0x00000008u,c->r[0]); // 801F0630
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801F0634
  W8(c->r[31]+0x00000009u,c->r[0]); // 801F0638
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801F063C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 801F0640
  c->r[0]=R16(c->r[4]+0x00000006u); // 801F0644
  cmpu(c,0,c->r[0],0x00000101u); // 801F0648
  if (crb(c,0)) { goto L_801F066C; } // 801F064C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801F0650
  W8(c->r[31]+0x0000000Au,c->r[0]); // 801F0654
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801F0658
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 801F065C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0660
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 801F0664
  goto L_801F0684; // 801F0668
L_801F066C:;
  {uint32_t ea=c->r[2]+0xFFFF9F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F066C
  c->r[3]=0u+0x00000040u; // 801F0670
  c->r[0]=0u+0x00000000u; // 801F0674
  W8(c->r[31]+0x0000000Au,c->r[3]); // 801F0678
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 801F067C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 801F0680
L_801F0684:;
  c->r[11]=c->r[1]+0x00000020u; // 801F0684
  c->r[3]=0u+0x00000001u; // 801F0688
  c->lr=0x801F0690u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F068C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0690
  c->lr=c->r[0]; // 801F0694
  c->r[1]=c->r[1]+0x00000020u; // 801F0698
  return; // 801F069C
}

// ReadWaveInfo__Q44nw4r3snd6detail13WsdFileReaderCFiPQ44nw4r3snd6detail8WaveInfoPCv
void f_801F06A0(Ctx* __restrict c) {
  trace_call(0x801F06A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F06A0
  c->r[0]=c->lr; // 801F06A4
  c->r[7]=R32(c->r[3]+0x00000008u); // 801F06A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F06AC
  cmps(c,0,(int32_t)c->r[7],0); // 801F06B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F06B4
  c->r[31]=c->r[6]|c->r[6]; // 801F06B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801F06BC
  c->r[30]=c->r[5]|c->r[5]; // 801F06C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801F06C4
  c->r[29]=c->r[4]|c->r[4]; // 801F06C8
  if (!crb(c,2)) { goto L_801F0718; } // 801F06CC
  c->r[4]=c->r[31]|c->r[31]; // 801F06D0
  c->r[3]=c->r[1]+0x00000010u; // 801F06D4
  c->lr=0x801F06DCu; f_801EF660(c); // 801F06D8
  c->r[4]=c->r[29]|c->r[29]; // 801F06DC
  c->r[3]=c->r[1]+0x00000010u; // 801F06E0
  c->lr=0x801F06E8u; f_801EF7F0(c); // 801F06E4
  cmps(c,0,(int32_t)c->r[3],0); // 801F06E8
  if (!crb(c,2)) { goto L_801F06F8; } // 801F06EC
  c->r[3]=0u+0x00000000u; // 801F06F0
  goto L_801F0778; // 801F06F4
L_801F06F8:;
  c->r[4]=c->r[3]|c->r[3]; // 801F06F8
  c->r[3]=c->r[1]+0x0000000Cu; // 801F06FC
  c->lr=0x801F0704u; f_801EF8B0(c); // 801F0700
  c->r[4]=c->r[30]|c->r[30]; // 801F0704
  c->r[3]=c->r[1]+0x0000000Cu; // 801F0708
  c->r[5]=0u+0x00000000u; // 801F070C
  c->lr=0x801F0714u; f_801EF980(c); // 801F0710
  goto L_801F0778; // 801F0714
L_801F0718:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801F0718
  c->r[0]=R16(c->r[3]+0x00000006u); // 801F071C
  cmpu(c,0,c->r[0],0x00000101u); // 801F0720
  if (crb(c,0)) { goto L_801F0750; } // 801F0724
  c->r[0]=R32(c->r[7]+0x00000008u); // 801F0728
  cmpu(c,0,c->r[4],c->r[0]); // 801F072C
  if (crb(c,0)) { goto L_801F073C; } // 801F0730
  c->r[3]=0u+0x00000000u; // 801F0734
  goto L_801F0778; // 801F0738
L_801F073C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801F073C
  c->r[3]=c->r[7]+c->r[0]; // 801F0740
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801F0744
  c->r[4]=c->r[0]+c->r[7]; // 801F0748
  goto L_801F0760; // 801F074C
L_801F0750:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801F0750
  c->r[3]=c->r[7]+c->r[0]; // 801F0754
  c->r[0]=R32(c->r[3]+0x00000008u); // 801F0758
  c->r[4]=c->r[0]+c->r[7]; // 801F075C
L_801F0760:;
  c->r[3]=c->r[1]+0x00000008u; // 801F0760
  c->lr=0x801F0768u; f_801EF970(c); // 801F0764
  c->r[4]=c->r[30]|c->r[30]; // 801F0768
  c->r[5]=c->r[31]|c->r[31]; // 801F076C
  c->r[3]=c->r[1]+0x00000008u; // 801F0770
  c->lr=0x801F0778u; f_801EF980(c); // 801F0774
L_801F0778:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F0778
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F077C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F0780
  c->r[29]=R32(c->r[1]+0x00000024u); // 801F0784
  c->lr=c->r[0]; // 801F0788
  c->r[1]=c->r[1]+0x00000030u; // 801F078C
  return; // 801F0790
}

// __ct__Q44nw4r3snd6detail9WsdPlayerFv
void f_801F07A0(Ctx* __restrict c) {
  trace_call(0x801F07A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F07A0
  c->r[0]=c->lr; // 801F07A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F07A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F07AC
  c->r[31]=c->r[3]|c->r[3]; // 801F07B0
  c->lr=0x801F07B8u; f_801D2750(c); // 801F07B4
  c->r[5]=0u+0x802D0000u; // 801F07B8
  c->r[6]=0u+0x00000000u; // 801F07BC
  c->r[5]=c->r[5]+0x00003068u; // 801F07C0
  W32(c->r[31]+0x000000B4u,c->r[6]); // 801F07C4
  c->r[4]=c->r[5]+0x00000024u; // 801F07C8
  c->r[3]=c->r[31]+0x000000F8u; // 801F07CC
  c->r[0]=c->r[5]+0x00000038u; // 801F07D0
  W32(c->r[31]+0x000000B8u,c->r[6]); // 801F07D4
  W32(c->r[31]+0x000000C0u,c->r[6]); // 801F07D8
  W32(c->r[31]+0x000000C4u,c->r[6]); // 801F07DC
  W32(c->r[31]+0x00000000u,c->r[5]); // 801F07E0
  W32(c->r[31]+0x000000BCu,c->r[4]); // 801F07E4
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801F07E8
  W8(c->r[31]+0x000000CCu,c->r[6]); // 801F07EC
  c->lr=0x801F07F4u; f_801D7990(c); // 801F07F0
  c->r[3]=c->r[31]|c->r[31]; // 801F07F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F07F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F07FC
  c->lr=c->r[0]; // 801F0800
  c->r[1]=c->r[1]+0x00000010u; // 801F0804
  return; // 801F0808
}

// InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_801F0810(Ctx* __restrict c) {
  trace_call(0x801F0810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0810
  c->r[0]=c->lr; // 801F0814
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0818
  c->r[11]=c->r[1]+0x00000020u; // 801F081C
  c->lr=0x801F0824u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0820
  c->r[27]=c->r[3]|c->r[3]; // 801F0824
  c->r[28]=c->r[4]|c->r[4]; // 801F0828
  c->r[29]=c->r[5]|c->r[5]; // 801F082C
  c->r[30]=c->r[6]|c->r[6]; // 801F0830
  c->lr=0x801F0838u; f_801D2810(c); // 801F0834
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0838
  c->r[31]=0u+0x00000000u; // 801F083C
  c->r[5]=0u+0x00000040u; // 801F0840
  c->r[4]=0u+0xFFFFFFFFu; // 801F0844
  c->r[0]=0u+0x0000007Fu; // 801F0848
  W8(c->r[27]+0x000000CDu,c->r[31]); // 801F084C
  c->r[3]=c->r[27]+0x000000F8u; // 801F0850
  W8(c->r[27]+0x000000CEu,c->r[31]); // 801F0854
  W8(c->r[27]+0x000000D0u,c->r[31]); // 801F0858
  {uint32_t ea=c->r[27]+0x000000D4u; WF32(ea,c->f[0]);} // 801F085C
  W32(c->r[27]+0x000000D8u,c->r[28]); // 801F0860
  W8(c->r[27]+0x000000DCu,c->r[5]); // 801F0864
  W32(c->r[27]+0x000000E0u,c->r[29]); // 801F0868
  W32(c->r[27]+0x000000E4u,c->r[30]); // 801F086C
  W32(c->r[27]+0x000000E8u,c->r[31]); // 801F0870
  W32(c->r[27]+0x000000ECu,c->r[4]); // 801F0874
  {uint32_t ea=c->r[27]+0x00000108u; WF32(ea,c->f[0]);} // 801F0878
  W8(c->r[27]+0x0000010Cu,c->r[5]); // 801F087C
  W8(c->r[27]+0x0000010Du,c->r[31]); // 801F0880
  W8(c->r[27]+0x0000010Eu,c->r[31]); // 801F0884
  W8(c->r[27]+0x0000010Fu,c->r[31]); // 801F0888
  W8(c->r[27]+0x00000110u,c->r[31]); // 801F088C
  W8(c->r[27]+0x00000111u,c->r[0]); // 801F0890
  c->lr=0x801F0898u; f_801D7990(c); // 801F0894
  W8(c->r[27]+0x000000CFu,c->r[31]); // 801F0898
  c->r[11]=c->r[1]+0x00000020u; // 801F089C
  W32(c->r[27]+0x00000114u,c->r[31]); // 801F08A0
  c->lr=0x801F08A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F08A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F08A8
  c->lr=c->r[0]; // 801F08AC
  c->r[1]=c->r[1]+0x00000020u; // 801F08B0
  return; // 801F08B4
}

// Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_801F08C0(Ctx* __restrict c) {
  trace_call(0x801F08C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F08C0
  c->r[0]=c->lr; // 801F08C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F08C8
  c->r[11]=c->r[1]+0x00000030u; // 801F08CC
  c->lr=0x801F08D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F08D0
  c->r[24]=c->r[3]|c->r[3]; // 801F08D4
  c->r[25]=c->r[4]|c->r[4]; // 801F08D8
  c->r[26]=c->r[5]|c->r[5]; // 801F08DC
  c->r[27]=c->r[6]|c->r[6]; // 801F08E0
  c->r[28]=c->r[7]|c->r[7]; // 801F08E4
  c->r[29]=c->r[8]|c->r[8]; // 801F08E8
  c->r[30]=c->r[9]|c->r[9]; // 801F08EC
  c->r[31]=c->r[10]|c->r[10]; // 801F08F0
  c->lr=0x801F08F8u; f_801E5840(c); // 801F08F4
  c->r[3]=c->r[3]+0x00000354u; // 801F08F8
  c->lr=0x801F0900u; f_800CCD50(c); // 801F08FC
  c->r[0]=R8(c->r[24]+0x000000CCu); // 801F0900
  cmps(c,0,(int32_t)c->r[0],0); // 801F0904
  if (crb(c,2)) { goto L_801F09EC; } // 801F0908
  c->lr=0x801F0910u; f_801E5840(c); // 801F090C
  c->r[3]=c->r[3]+0x00000354u; // 801F0910
  c->lr=0x801F0918u; f_800CCD50(c); // 801F0914
  c->r[0]=R8(c->r[24]+0x000000CDu); // 801F0918
  cmps(c,0,(int32_t)c->r[0],0); // 801F091C
  if (crb(c,2)) { goto L_801F0948; } // 801F0920
  cmps(c,0,(int32_t)c->r[24],0); // 801F0924
  c->r[23]=c->r[24]|c->r[24]; // 801F0928
  if (crb(c,2)) { goto L_801F0934; } // 801F092C
  c->r[23]=c->r[24]+0x000000C0u; // 801F0930
L_801F0934:;
  c->lr=0x801F0938u; f_801E5840(c); // 801F0934
  c->r[4]=c->r[23]|c->r[23]; // 801F0938
  c->lr=0x801F0940u; f_801E5E00(c); // 801F093C
  c->r[0]=0u+0x00000000u; // 801F0940
  W8(c->r[24]+0x000000CDu,c->r[0]); // 801F0944
L_801F0948:;
  c->r[0]=R8(c->r[24]+0x000000CCu); // 801F0948
  cmps(c,0,(int32_t)c->r[0],0); // 801F094C
  if (crb(c,2)) { goto L_801F0978; } // 801F0950
  cmps(c,0,(int32_t)c->r[24],0); // 801F0954
  c->r[23]=c->r[24]|c->r[24]; // 801F0958
  if (crb(c,2)) { goto L_801F0964; } // 801F095C
  c->r[23]=c->r[24]+0x000000B4u; // 801F0960
L_801F0964:;
  c->lr=0x801F0968u; f_801D5DD0(c); // 801F0964
  c->r[4]=c->r[23]|c->r[23]; // 801F0968
  c->lr=0x801F0970u; f_801D5F40(c); // 801F096C
  c->r[0]=0u+0x00000000u; // 801F0970
  W8(c->r[24]+0x000000CCu,c->r[0]); // 801F0974
L_801F0978:;
  c->lr=0x801F097Cu; f_801E5840(c); // 801F0978
  c->r[3]=c->r[3]+0x00000354u; // 801F097C
  c->lr=0x801F0984u; f_800CCD50(c); // 801F0980
  c->r[4]=R32(c->r[24]+0x00000114u); // 801F0984
  c->r[3]=0u+0x00000000u; // 801F0988
  cmps(c,0,(int32_t)c->r[4],0); // 801F098C
  if (crb(c,2)) { goto L_801F09A4; } // 801F0990
  c->r[0]=R8(c->r[4]+0x00000036u); // 801F0994
  cmps(c,0,(int32_t)c->r[0],0); // 801F0998
  if (crb(c,2)) { goto L_801F09A4; } // 801F099C
  c->r[3]=0u+0x00000001u; // 801F09A0
L_801F09A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F09A4
  if (crb(c,2)) { goto L_801F09BC; } // 801F09A8
  c->r[3]=c->r[24]|c->r[24]; // 801F09AC
  c->lr=0x801F09B4u; f_801F1350(c); // 801F09B0
  c->r[3]=R32(c->r[24]+0x00000114u); // 801F09B4
  c->lr=0x801F09BCu; f_801D56F0(c); // 801F09B8
L_801F09BC:;
  c->r[3]=R32(c->r[24]+0x00000114u); // 801F09BC
  cmps(c,0,(int32_t)c->r[3],0); // 801F09C0
  if (crb(c,2)) { goto L_801F09CC; } // 801F09C4
  c->lr=0x801F09CCu; f_801D5DB0(c); // 801F09C8
L_801F09CC:;
  c->r[0]=0u+0x00000000u; // 801F09CC
  W32(c->r[24]+0x00000114u,c->r[0]); // 801F09D0
  c->lr=0x801F09D8u; f_801E5840(c); // 801F09D4
  c->r[3]=c->r[3]+0x00000354u; // 801F09D8
  c->lr=0x801F09E0u; f_800CCE30(c); // 801F09DC
  c->lr=0x801F09E4u; f_801E5840(c); // 801F09E0
  c->r[3]=c->r[3]+0x00000354u; // 801F09E4
  c->lr=0x801F09ECu; f_800CCE30(c); // 801F09E8
L_801F09EC:;
  c->r[3]=c->r[24]|c->r[24]; // 801F09EC
  c->r[4]=c->r[29]|c->r[29]; // 801F09F0
  c->r[5]=c->r[30]|c->r[30]; // 801F09F4
  c->r[6]=c->r[31]|c->r[31]; // 801F09F8
  c->lr=0x801F0A00u; f_801F0810(c); // 801F09FC
  cmps(c,0,(int32_t)c->r[24],0); // 801F0A00
  W32(c->r[24]+0x000000E8u,c->r[25]); // 801F0A04
  c->r[23]=c->r[24]|c->r[24]; // 801F0A08
  W32(c->r[24]+0x000000ECu,c->r[26]); // 801F0A0C
  W32(c->r[24]+0x000000F0u,c->r[27]); // 801F0A10
  W32(c->r[24]+0x000000F4u,c->r[28]); // 801F0A14
  if (crb(c,2)) { goto L_801F0A20; } // 801F0A18
  c->r[23]=c->r[24]+0x000000B4u; // 801F0A1C
L_801F0A20:;
  c->lr=0x801F0A24u; f_801D5DD0(c); // 801F0A20
  c->r[4]=c->r[23]|c->r[23]; // 801F0A24
  c->lr=0x801F0A2Cu; f_801D5EC0(c); // 801F0A28
  c->r[0]=0u+0x00000001u; // 801F0A2C
  W8(c->r[24]+0x000000CCu,c->r[0]); // 801F0A30
  c->lr=0x801F0A38u; f_801E5840(c); // 801F0A34
  c->r[3]=c->r[3]+0x00000354u; // 801F0A38
  c->lr=0x801F0A40u; f_800CCE30(c); // 801F0A3C
  c->r[11]=c->r[1]+0x00000030u; // 801F0A40
  c->r[3]=0u+0x00000001u; // 801F0A44
  c->lr=0x801F0A4Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F0A48
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F0A4C
  c->lr=c->r[0]; // 801F0A50
  c->r[1]=c->r[1]+0x00000030u; // 801F0A54
  return; // 801F0A58
}

// Start__Q44nw4r3snd6detail9WsdPlayerFv
void f_801F0A60(Ctx* __restrict c) {
  trace_call(0x801F0A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0A60
  c->r[0]=c->lr; // 801F0A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0A68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0A70
  c->r[30]=c->r[3]|c->r[3]; // 801F0A74
  c->lr=0x801F0A7Cu; f_801E5840(c); // 801F0A78
  c->r[3]=c->r[3]+0x00000354u; // 801F0A7C
  c->lr=0x801F0A84u; f_800CCD50(c); // 801F0A80
  cmps(c,0,(int32_t)c->r[30],0); // 801F0A84
  c->r[31]=c->r[30]|c->r[30]; // 801F0A88
  if (crb(c,2)) { goto L_801F0A94; } // 801F0A8C
  c->r[31]=c->r[30]+0x000000C0u; // 801F0A90
L_801F0A94:;
  c->lr=0x801F0A98u; f_801E5840(c); // 801F0A94
  c->r[4]=c->r[31]|c->r[31]; // 801F0A98
  c->lr=0x801F0AA0u; f_801E5D60(c); // 801F0A9C
  c->r[0]=0u+0x00000001u; // 801F0AA0
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801F0AA4
  c->lr=0x801F0AACu; f_801E5840(c); // 801F0AA8
  c->r[3]=c->r[3]+0x00000354u; // 801F0AAC
  c->lr=0x801F0AB4u; f_800CCE30(c); // 801F0AB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0AB4
  c->r[3]=0u+0x00000001u; // 801F0AB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0ABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0AC0
  c->lr=c->r[0]; // 801F0AC4
  c->r[1]=c->r[1]+0x00000010u; // 801F0AC8
  return; // 801F0ACC
}

// Stop__Q44nw4r3snd6detail9WsdPlayerFv
void f_801F0AD0(Ctx* __restrict c) {
  trace_call(0x801F0AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0AD0
  c->r[0]=c->lr; // 801F0AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0AD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0ADC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0AE0
  c->r[30]=c->r[3]|c->r[3]; // 801F0AE4
  c->lr=0x801F0AECu; f_801E5840(c); // 801F0AE8
  c->r[3]=c->r[3]+0x00000354u; // 801F0AEC
  c->lr=0x801F0AF4u; f_800CCD50(c); // 801F0AF0
  c->lr=0x801F0AF8u; f_801E5840(c); // 801F0AF4
  c->r[3]=c->r[3]+0x00000354u; // 801F0AF8
  c->lr=0x801F0B00u; f_800CCD50(c); // 801F0AFC
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801F0B00
  cmps(c,0,(int32_t)c->r[0],0); // 801F0B04
  if (crb(c,2)) { goto L_801F0B30; } // 801F0B08
  cmps(c,0,(int32_t)c->r[30],0); // 801F0B0C
  c->r[31]=c->r[30]|c->r[30]; // 801F0B10
  if (crb(c,2)) { goto L_801F0B1C; } // 801F0B14
  c->r[31]=c->r[30]+0x000000C0u; // 801F0B18
L_801F0B1C:;
  c->lr=0x801F0B20u; f_801E5840(c); // 801F0B1C
  c->r[4]=c->r[31]|c->r[31]; // 801F0B20
  c->lr=0x801F0B28u; f_801E5E00(c); // 801F0B24
  c->r[0]=0u+0x00000000u; // 801F0B28
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801F0B2C
L_801F0B30:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801F0B30
  cmps(c,0,(int32_t)c->r[0],0); // 801F0B34
  if (crb(c,2)) { goto L_801F0B60; } // 801F0B38
  cmps(c,0,(int32_t)c->r[30],0); // 801F0B3C
  c->r[31]=c->r[30]|c->r[30]; // 801F0B40
  if (crb(c,2)) { goto L_801F0B4C; } // 801F0B44
  c->r[31]=c->r[30]+0x000000B4u; // 801F0B48
L_801F0B4C:;
  c->lr=0x801F0B50u; f_801D5DD0(c); // 801F0B4C
  c->r[4]=c->r[31]|c->r[31]; // 801F0B50
  c->lr=0x801F0B58u; f_801D5F40(c); // 801F0B54
  c->r[0]=0u+0x00000000u; // 801F0B58
  W8(c->r[30]+0x000000CCu,c->r[0]); // 801F0B5C
L_801F0B60:;
  c->lr=0x801F0B64u; f_801E5840(c); // 801F0B60
  c->r[3]=c->r[3]+0x00000354u; // 801F0B64
  c->lr=0x801F0B6Cu; f_800CCD50(c); // 801F0B68
  c->r[4]=R32(c->r[30]+0x00000114u); // 801F0B6C
  c->r[3]=0u+0x00000000u; // 801F0B70
  cmps(c,0,(int32_t)c->r[4],0); // 801F0B74
  if (crb(c,2)) { goto L_801F0B8C; } // 801F0B78
  c->r[0]=R8(c->r[4]+0x00000036u); // 801F0B7C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0B80
  if (crb(c,2)) { goto L_801F0B8C; } // 801F0B84
  c->r[3]=0u+0x00000001u; // 801F0B88
L_801F0B8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F0B8C
  if (crb(c,2)) { goto L_801F0BA4; } // 801F0B90
  c->r[3]=c->r[30]|c->r[30]; // 801F0B94
  c->lr=0x801F0B9Cu; f_801F1350(c); // 801F0B98
  c->r[3]=R32(c->r[30]+0x00000114u); // 801F0B9C
  c->lr=0x801F0BA4u; f_801D56F0(c); // 801F0BA0
L_801F0BA4:;
  c->r[3]=R32(c->r[30]+0x00000114u); // 801F0BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801F0BA8
  if (crb(c,2)) { goto L_801F0BB4; } // 801F0BAC
  c->lr=0x801F0BB4u; f_801D5DB0(c); // 801F0BB0
L_801F0BB4:;
  c->r[0]=0u+0x00000000u; // 801F0BB4
  W32(c->r[30]+0x00000114u,c->r[0]); // 801F0BB8
  c->lr=0x801F0BC0u; f_801E5840(c); // 801F0BBC
  c->r[3]=c->r[3]+0x00000354u; // 801F0BC0
  c->lr=0x801F0BC8u; f_800CCE30(c); // 801F0BC4
  c->lr=0x801F0BCCu; f_801E5840(c); // 801F0BC8
  c->r[3]=c->r[3]+0x00000354u; // 801F0BCC
  c->lr=0x801F0BD4u; f_800CCE30(c); // 801F0BD0
  c->lr=0x801F0BD8u; f_801E5840(c); // 801F0BD4
  c->r[3]=c->r[3]+0x00000354u; // 801F0BD8
  c->lr=0x801F0BE0u; f_800CCE30(c); // 801F0BDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0BE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0BE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0BE8
  c->lr=c->r[0]; // 801F0BEC
  c->r[1]=c->r[1]+0x00000010u; // 801F0BF0
  return; // 801F0BF4
}

// Pause__Q44nw4r3snd6detail9WsdPlayerFb
void f_801F0C00(Ctx* __restrict c) {
  trace_call(0x801F0C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0C00
  c->r[0]=c->lr; // 801F0C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0C08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0C0C
  c->r[31]=c->r[4]|c->r[4]; // 801F0C10
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0C14
  c->r[30]=c->r[3]|c->r[3]; // 801F0C18
  c->lr=0x801F0C20u; f_801E5840(c); // 801F0C1C
  c->r[3]=c->r[3]+0x00000354u; // 801F0C20
  c->lr=0x801F0C28u; f_800CCD50(c); // 801F0C24
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801F0C28
  c->r[5]=R32(c->r[30]+0x00000114u); // 801F0C2C
  c->r[0]=0u-c->r[3]; // 801F0C30
  c->r[4]=0u+0x00000000u; // 801F0C34
  c->r[0]=c->r[0]|c->r[3]; // 801F0C38
  cmps(c,0,(int32_t)c->r[5],0); // 801F0C3C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801F0C40
  W8(c->r[30]+0x000000CEu,c->r[0]); // 801F0C44
  if (crb(c,2)) { goto L_801F0C5C; } // 801F0C48
  c->r[0]=R8(c->r[5]+0x00000036u); // 801F0C4C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0C50
  if (crb(c,2)) { goto L_801F0C5C; } // 801F0C54
  c->r[4]=0u+0x00000001u; // 801F0C58
L_801F0C5C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F0C5C
  if (crb(c,2)) { goto L_801F0C90; } // 801F0C60
  c->r[5]=R32(c->r[30]+0x00000114u); // 801F0C64
  c->r[3]=R8(c->r[5]+0x00000035u); // 801F0C68
  c->r[0]=0u-c->r[3]; // 801F0C6C
  c->r[0]=c->r[0]|c->r[3]; // 801F0C70
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801F0C74
  cmpu(c,0,c->r[31],c->r[0]); // 801F0C78
  if (crb(c,2)) { goto L_801F0C90; } // 801F0C7C
  W8(c->r[5]+0x00000035u,c->r[31]); // 801F0C80
  c->r[4]=c->r[31]|c->r[31]; // 801F0C84
  c->r[3]=R32(c->r[5]+0x000000D0u); // 801F0C88
  c->lr=0x801F0C90u; f_801EC750(c); // 801F0C8C
L_801F0C90:;
  c->lr=0x801F0C94u; f_801E5840(c); // 801F0C90
  c->r[3]=c->r[3]+0x00000354u; // 801F0C94
  c->lr=0x801F0C9Cu; f_800CCE30(c); // 801F0C98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0C9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0CA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0CA4
  c->lr=c->r[0]; // 801F0CA8
  c->r[1]=c->r[1]+0x00000010u; // 801F0CAC
  return; // 801F0CB0
}

// fn_801F0CC0
void f_801F0CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0CC0
  c->r[0]=c->lr; // 801F0CC4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801F0CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0CCC
  c->r[0]=0u+0x00000000u; // 801F0CD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0CD4
  c->r[31]=c->r[4]|c->r[4]; // 801F0CD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0CDC
  c->r[30]=c->r[3]|c->r[3]; // 801F0CE0
  if (crb(c,1)) { goto L_801F0CEC; } // 801F0CE4
  c->r[0]=0u+0x00000001u; // 801F0CE8
L_801F0CEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801F0CEC
  if (!crb(c,2)) { goto L_801F0D1C; } // 801F0CF0
  c->r[3]=0u+0x802D0000u; // 801F0CF4
  c->r[5]=0u+0x802D0000u; // 801F0CF8
  c->r[6]=c->r[31]|c->r[31]; // 801F0CFC
  c->r[4]=0u+0x000000E5u; // 801F0D00
  c->r[3]=c->r[3]+0x00002F60u; // 801F0D04
  c->r[5]=c->r[5]+0x00002F74u; // 801F0D08
  c->r[7]=0u+0x00000000u; // 801F0D0C
  c->r[8]=0u+0x0000007Fu; // 801F0D10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0D14
  c->lr=0x801F0D1Cu; f_801F9770(c); // 801F0D18
L_801F0D1C:;
  W8(c->r[30]+0x000000DCu,c->r[31]); // 801F0D1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0D20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0D24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0D28
  c->lr=c->r[0]; // 801F0D2C
  c->r[1]=c->r[1]+0x00000010u; // 801F0D30
  return; // 801F0D34
}

// fn_801F0D40
void f_801F0D40(Ctx* __restrict c) {
  W8(c->r[3]+0x000000D0u,c->r[4]); // 801F0D40
  return; // 801F0D44
}

// InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
void f_801F0D50(Ctx* __restrict c) {
  trace_call(0x801F0D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0D50
  c->r[0]=c->lr; // 801F0D54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0D58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0D5C
  c->r[31]=c->r[5]|c->r[5]; // 801F0D60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F0D64
  c->r[30]=c->r[4]|c->r[4]; // 801F0D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F0D6C
  c->r[29]=c->r[3]|c->r[3]; // 801F0D70
  c->lr=0x801F0D78u; f_801E5840(c); // 801F0D74
  c->r[3]=c->r[3]+0x00000354u; // 801F0D78
  c->lr=0x801F0D80u; f_800CCD50(c); // 801F0D7C
  c->r[0]=R8(c->r[29]+0x000000CCu); // 801F0D80
  cmps(c,0,(int32_t)c->r[0],0); // 801F0D84
  if (crb(c,2)) { goto L_801F0E80; } // 801F0D88
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801F0D8C
  cmpu(c,0,c->r[30],c->r[0]); // 801F0D90
  if (crb(c,1)) { goto L_801F0E80; } // 801F0D94
  cmpu(c,0,c->r[0],c->r[31]); // 801F0D98
  if (crb(c,1)) { goto L_801F0E80; } // 801F0D9C
  c->lr=0x801F0DA4u; f_801E5840(c); // 801F0DA0
  c->r[3]=c->r[3]+0x00000354u; // 801F0DA4
  c->lr=0x801F0DACu; f_800CCD50(c); // 801F0DA8
  c->r[0]=R8(c->r[29]+0x000000CDu); // 801F0DAC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0DB0
  if (crb(c,2)) { goto L_801F0DDC; } // 801F0DB4
  cmps(c,0,(int32_t)c->r[29],0); // 801F0DB8
  c->r[31]=c->r[29]|c->r[29]; // 801F0DBC
  if (crb(c,2)) { goto L_801F0DC8; } // 801F0DC0
  c->r[31]=c->r[29]+0x000000C0u; // 801F0DC4
L_801F0DC8:;
  c->lr=0x801F0DCCu; f_801E5840(c); // 801F0DC8
  c->r[4]=c->r[31]|c->r[31]; // 801F0DCC
  c->lr=0x801F0DD4u; f_801E5E00(c); // 801F0DD0
  c->r[0]=0u+0x00000000u; // 801F0DD4
  W8(c->r[29]+0x000000CDu,c->r[0]); // 801F0DD8
L_801F0DDC:;
  c->r[0]=R8(c->r[29]+0x000000CCu); // 801F0DDC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0DE0
  if (crb(c,2)) { goto L_801F0E0C; } // 801F0DE4
  cmps(c,0,(int32_t)c->r[29],0); // 801F0DE8
  c->r[31]=c->r[29]|c->r[29]; // 801F0DEC
  if (crb(c,2)) { goto L_801F0DF8; } // 801F0DF0
  c->r[31]=c->r[29]+0x000000B4u; // 801F0DF4
L_801F0DF8:;
  c->lr=0x801F0DFCu; f_801D5DD0(c); // 801F0DF8
  c->r[4]=c->r[31]|c->r[31]; // 801F0DFC
  c->lr=0x801F0E04u; f_801D5F40(c); // 801F0E00
  c->r[0]=0u+0x00000000u; // 801F0E04
  W8(c->r[29]+0x000000CCu,c->r[0]); // 801F0E08
L_801F0E0C:;
  c->lr=0x801F0E10u; f_801E5840(c); // 801F0E0C
  c->r[3]=c->r[3]+0x00000354u; // 801F0E10
  c->lr=0x801F0E18u; f_800CCD50(c); // 801F0E14
  c->r[4]=R32(c->r[29]+0x00000114u); // 801F0E18
  c->r[3]=0u+0x00000000u; // 801F0E1C
  cmps(c,0,(int32_t)c->r[4],0); // 801F0E20
  if (crb(c,2)) { goto L_801F0E38; } // 801F0E24
  c->r[0]=R8(c->r[4]+0x00000036u); // 801F0E28
  cmps(c,0,(int32_t)c->r[0],0); // 801F0E2C
  if (crb(c,2)) { goto L_801F0E38; } // 801F0E30
  c->r[3]=0u+0x00000001u; // 801F0E34
L_801F0E38:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F0E38
  if (crb(c,2)) { goto L_801F0E50; } // 801F0E3C
  c->r[3]=c->r[29]|c->r[29]; // 801F0E40
  c->lr=0x801F0E48u; f_801F1350(c); // 801F0E44
  c->r[3]=R32(c->r[29]+0x00000114u); // 801F0E48
  c->lr=0x801F0E50u; f_801D56F0(c); // 801F0E4C
L_801F0E50:;
  c->r[3]=R32(c->r[29]+0x00000114u); // 801F0E50
  cmps(c,0,(int32_t)c->r[3],0); // 801F0E54
  if (crb(c,2)) { goto L_801F0E60; } // 801F0E58
  c->lr=0x801F0E60u; f_801D5DB0(c); // 801F0E5C
L_801F0E60:;
  c->r[0]=0u+0x00000000u; // 801F0E60
  W32(c->r[29]+0x00000114u,c->r[0]); // 801F0E64
  c->lr=0x801F0E6Cu; f_801E5840(c); // 801F0E68
  c->r[3]=c->r[3]+0x00000354u; // 801F0E6C
  c->lr=0x801F0E74u; f_800CCE30(c); // 801F0E70
  c->lr=0x801F0E78u; f_801E5840(c); // 801F0E74
  c->r[3]=c->r[3]+0x00000354u; // 801F0E78
  c->lr=0x801F0E80u; f_800CCE30(c); // 801F0E7C
L_801F0E80:;
  c->lr=0x801F0E84u; f_801E5840(c); // 801F0E80
  c->r[3]=c->r[3]+0x00000354u; // 801F0E84
  c->lr=0x801F0E8Cu; f_800CCE30(c); // 801F0E88
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0E8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F0E90
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F0E94
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F0E98
  c->lr=c->r[0]; // 801F0E9C
  c->r[1]=c->r[1]+0x00000020u; // 801F0EA0
  return; // 801F0EA4
}

// fn_801F0EB0
void f_801F0EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0EB0
  c->r[0]=c->lr; // 801F0EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0EB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0EBC
  c->r[31]=c->r[3]|c->r[3]; // 801F0EC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0EC4
  c->lr=0x801F0ECCu; f_801E5840(c); // 801F0EC8
  c->r[3]=c->r[3]+0x00000354u; // 801F0ECC
  c->lr=0x801F0ED4u; f_800CCD50(c); // 801F0ED0
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801F0ED4
  cmps(c,0,(int32_t)c->r[0],0); // 801F0ED8
  if (!crb(c,2)) { goto L_801F0EFC; } // 801F0EDC
  c->r[3]=0u+0x802D0000u; // 801F0EE0
  c->r[5]=0u+0x802D0000u; // 801F0EE4
  c->r[3]=c->r[3]+0x00002F60u; // 801F0EE8
  c->r[4]=0u+0x0000016Au; // 801F0EEC
  c->r[5]=c->r[5]+0x00002FB8u; // 801F0EF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0EF4
  c->lr=0x801F0EFCu; f_801F9770(c); // 801F0EF8
L_801F0EFC:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801F0EFC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F00
  if (!crb(c,2)) { goto L_801F0F18; } // 801F0F04
  c->lr=0x801F0F0Cu; f_801E5840(c); // 801F0F08
  c->r[3]=c->r[3]+0x00000354u; // 801F0F0C
  c->lr=0x801F0F14u; f_800CCE30(c); // 801F0F10
  goto L_801F116C; // 801F0F14
L_801F0F18:;
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801F0F18
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F1C
  if (!crb(c,2)) { goto L_801F0F34; } // 801F0F20
  c->lr=0x801F0F28u; f_801E5840(c); // 801F0F24
  c->r[3]=c->r[3]+0x00000354u; // 801F0F28
  c->lr=0x801F0F30u; f_800CCE30(c); // 801F0F2C
  goto L_801F116C; // 801F0F30
L_801F0F34:;
  c->r[0]=R8(c->r[31]+0x000000CEu); // 801F0F34
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F38
  if (!crb(c,2)) { goto L_801F1158; } // 801F0F3C
  c->r[3]=R8(c->r[31]+0x000000CFu); // 801F0F40
  cmps(c,0,(int32_t)c->r[3],0); // 801F0F44
  if (crb(c,2)) { goto L_801F1048; } // 801F0F48
  c->r[0]=R32(c->r[31]+0x00000114u); // 801F0F4C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F50
  if (!crb(c,2)) { goto L_801F1048; } // 801F0F54
  c->lr=0x801F0F5Cu; f_801E5840(c); // 801F0F58
  c->r[3]=c->r[3]+0x00000354u; // 801F0F5C
  c->lr=0x801F0F64u; f_800CCD50(c); // 801F0F60
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801F0F64
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F68
  if (crb(c,2)) { goto L_801F0F94; } // 801F0F6C
  cmps(c,0,(int32_t)c->r[31],0); // 801F0F70
  c->r[30]=c->r[31]|c->r[31]; // 801F0F74
  if (crb(c,2)) { goto L_801F0F80; } // 801F0F78
  c->r[30]=c->r[31]+0x000000C0u; // 801F0F7C
L_801F0F80:;
  c->lr=0x801F0F84u; f_801E5840(c); // 801F0F80
  c->r[4]=c->r[30]|c->r[30]; // 801F0F84
  c->lr=0x801F0F8Cu; f_801E5E00(c); // 801F0F88
  c->r[0]=0u+0x00000000u; // 801F0F8C
  W8(c->r[31]+0x000000CDu,c->r[0]); // 801F0F90
L_801F0F94:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801F0F94
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F98
  if (crb(c,2)) { goto L_801F0FC4; } // 801F0F9C
  cmps(c,0,(int32_t)c->r[31],0); // 801F0FA0
  c->r[30]=c->r[31]|c->r[31]; // 801F0FA4
  if (crb(c,2)) { goto L_801F0FB0; } // 801F0FA8
  c->r[30]=c->r[31]+0x000000B4u; // 801F0FAC
L_801F0FB0:;
  c->lr=0x801F0FB4u; f_801D5DD0(c); // 801F0FB0
  c->r[4]=c->r[30]|c->r[30]; // 801F0FB4
  c->lr=0x801F0FBCu; f_801D5F40(c); // 801F0FB8
  c->r[0]=0u+0x00000000u; // 801F0FBC
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801F0FC0
L_801F0FC4:;
  c->lr=0x801F0FC8u; f_801E5840(c); // 801F0FC4
  c->r[3]=c->r[3]+0x00000354u; // 801F0FC8
  c->lr=0x801F0FD0u; f_800CCD50(c); // 801F0FCC
  c->r[4]=R32(c->r[31]+0x00000114u); // 801F0FD0
  c->r[3]=0u+0x00000000u; // 801F0FD4
  cmps(c,0,(int32_t)c->r[4],0); // 801F0FD8
  if (crb(c,2)) { goto L_801F0FF0; } // 801F0FDC
  c->r[0]=R8(c->r[4]+0x00000036u); // 801F0FE0
  cmps(c,0,(int32_t)c->r[0],0); // 801F0FE4
  if (crb(c,2)) { goto L_801F0FF0; } // 801F0FE8
  c->r[3]=0u+0x00000001u; // 801F0FEC
L_801F0FF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F0FF0
  if (crb(c,2)) { goto L_801F1008; } // 801F0FF4
  c->r[3]=c->r[31]|c->r[31]; // 801F0FF8
  c->lr=0x801F1000u; f_801F1350(c); // 801F0FFC
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1000
  c->lr=0x801F1008u; f_801D56F0(c); // 801F1004
L_801F1008:;
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1008
  cmps(c,0,(int32_t)c->r[3],0); // 801F100C
  if (crb(c,2)) { goto L_801F1018; } // 801F1010
  c->lr=0x801F1018u; f_801D5DB0(c); // 801F1014
L_801F1018:;
  c->r[0]=0u+0x00000000u; // 801F1018
  W32(c->r[31]+0x00000114u,c->r[0]); // 801F101C
  c->lr=0x801F1024u; f_801E5840(c); // 801F1020
  c->r[3]=c->r[3]+0x00000354u; // 801F1024
  c->lr=0x801F102Cu; f_800CCE30(c); // 801F1028
  c->lr=0x801F1030u; f_801E5840(c); // 801F102C
  c->r[3]=c->r[3]+0x00000354u; // 801F1030
  c->lr=0x801F1038u; f_800CCE30(c); // 801F1034
  c->lr=0x801F103Cu; f_801E5840(c); // 801F1038
  c->r[3]=c->r[3]+0x00000354u; // 801F103C
  c->lr=0x801F1044u; f_800CCE30(c); // 801F1040
  goto L_801F116C; // 801F1044
L_801F1048:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F1048
  if (!crb(c,2)) { goto L_801F1158; } // 801F104C
  c->r[4]=R32(c->r[31]+0x000000E0u); // 801F1050
  c->r[3]=c->r[31]|c->r[31]; // 801F1054
  c->r[5]=R32(c->r[31]+0x000000E4u); // 801F1058
  c->lr=0x801F1060u; f_801F1190(c); // 801F105C
  cmps(c,0,(int32_t)c->r[3],0); // 801F1060
  if (!crb(c,2)) { goto L_801F1158; } // 801F1064
  c->lr=0x801F106Cu; f_801E5840(c); // 801F1068
  c->r[3]=c->r[3]+0x00000354u; // 801F106C
  c->lr=0x801F1074u; f_800CCD50(c); // 801F1070
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801F1074
  cmps(c,0,(int32_t)c->r[0],0); // 801F1078
  if (crb(c,2)) { goto L_801F10A4; } // 801F107C
  cmps(c,0,(int32_t)c->r[31],0); // 801F1080
  c->r[30]=c->r[31]|c->r[31]; // 801F1084
  if (crb(c,2)) { goto L_801F1090; } // 801F1088
  c->r[30]=c->r[31]+0x000000C0u; // 801F108C
L_801F1090:;
  c->lr=0x801F1094u; f_801E5840(c); // 801F1090
  c->r[4]=c->r[30]|c->r[30]; // 801F1094
  c->lr=0x801F109Cu; f_801E5E00(c); // 801F1098
  c->r[0]=0u+0x00000000u; // 801F109C
  W8(c->r[31]+0x000000CDu,c->r[0]); // 801F10A0
L_801F10A4:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801F10A4
  cmps(c,0,(int32_t)c->r[0],0); // 801F10A8
  if (crb(c,2)) { goto L_801F10D4; } // 801F10AC
  cmps(c,0,(int32_t)c->r[31],0); // 801F10B0
  c->r[30]=c->r[31]|c->r[31]; // 801F10B4
  if (crb(c,2)) { goto L_801F10C0; } // 801F10B8
  c->r[30]=c->r[31]+0x000000B4u; // 801F10BC
L_801F10C0:;
  c->lr=0x801F10C4u; f_801D5DD0(c); // 801F10C0
  c->r[4]=c->r[30]|c->r[30]; // 801F10C4
  c->lr=0x801F10CCu; f_801D5F40(c); // 801F10C8
  c->r[0]=0u+0x00000000u; // 801F10CC
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801F10D0
L_801F10D4:;
  c->lr=0x801F10D8u; f_801E5840(c); // 801F10D4
  c->r[3]=c->r[3]+0x00000354u; // 801F10D8
  c->lr=0x801F10E0u; f_800CCD50(c); // 801F10DC
  c->r[4]=R32(c->r[31]+0x00000114u); // 801F10E0
  c->r[3]=0u+0x00000000u; // 801F10E4
  cmps(c,0,(int32_t)c->r[4],0); // 801F10E8
  if (crb(c,2)) { goto L_801F1100; } // 801F10EC
  c->r[0]=R8(c->r[4]+0x00000036u); // 801F10F0
  cmps(c,0,(int32_t)c->r[0],0); // 801F10F4
  if (crb(c,2)) { goto L_801F1100; } // 801F10F8
  c->r[3]=0u+0x00000001u; // 801F10FC
L_801F1100:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F1100
  if (crb(c,2)) { goto L_801F1118; } // 801F1104
  c->r[3]=c->r[31]|c->r[31]; // 801F1108
  c->lr=0x801F1110u; f_801F1350(c); // 801F110C
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1110
  c->lr=0x801F1118u; f_801D56F0(c); // 801F1114
L_801F1118:;
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1118
  cmps(c,0,(int32_t)c->r[3],0); // 801F111C
  if (crb(c,2)) { goto L_801F1128; } // 801F1120
  c->lr=0x801F1128u; f_801D5DB0(c); // 801F1124
L_801F1128:;
  c->r[0]=0u+0x00000000u; // 801F1128
  W32(c->r[31]+0x00000114u,c->r[0]); // 801F112C
  c->lr=0x801F1134u; f_801E5840(c); // 801F1130
  c->r[3]=c->r[3]+0x00000354u; // 801F1134
  c->lr=0x801F113Cu; f_800CCE30(c); // 801F1138
  c->lr=0x801F1140u; f_801E5840(c); // 801F113C
  c->r[3]=c->r[3]+0x00000354u; // 801F1140
  c->lr=0x801F1148u; f_800CCE30(c); // 801F1144
  c->lr=0x801F114Cu; f_801E5840(c); // 801F1148
  c->r[3]=c->r[3]+0x00000354u; // 801F114C
  c->lr=0x801F1154u; f_800CCE30(c); // 801F1150
  goto L_801F116C; // 801F1154
L_801F1158:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1158
  c->lr=0x801F1160u; f_801F1350(c); // 801F115C
  c->lr=0x801F1164u; f_801E5840(c); // 801F1160
  c->r[3]=c->r[3]+0x00000354u; // 801F1164
  c->lr=0x801F116Cu; f_800CCE30(c); // 801F1168
L_801F116C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F116C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1170
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F1174
  c->lr=c->r[0]; // 801F1178
  c->r[1]=c->r[1]+0x00000010u; // 801F117C
  return; // 801F1180
}

// fn_801F1190
void f_801F1190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1190
  c->r[0]=c->lr; // 801F1194
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801F1198
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801F119C
  c->r[31]=c->r[4]|c->r[4]; // 801F11A0
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801F11A4
  c->r[30]=c->r[5]|c->r[5]; // 801F11A8
  W32(c->r[1]+0x000000A4u,c->r[29]); // 801F11AC
  c->r[29]=c->r[3]|c->r[3]; // 801F11B0
  c->lr=0x801F11B8u; f_801E5840(c); // 801F11B4
  c->r[3]=c->r[3]+0x00000354u; // 801F11B8
  c->lr=0x801F11C0u; f_800CCD50(c); // 801F11BC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801F11C0
  c->r[3]=c->r[31]|c->r[31]; // 801F11C4
  c->r[4]=R8(c->r[29]+0x000000DCu); // 801F11C8
  c->r[10]=c->r[30]|c->r[30]; // 801F11CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801F11D0
  c->r[5]=c->r[1]+0x00000008u; // 801F11D4
  c->r[31]=c->r[4]+0x00000040u; // 801F11D8
  c->r[4]=c->r[29]+0x00000108u; // 801F11DC
  c->r[6]=c->r[1]+0x00000020u; // 801F11E0
  c->r[7]=R32(c->r[29]+0x000000E8u); // 801F11E4
  c->r[8]=R32(c->r[29]+0x000000ECu); // 801F11E8
  c->r[9]=0u+0x00000000u; // 801F11EC
  c->ctr=c->r[12]; // 801F11F0
  if (true) { c->lr=0x801F11F8u; dispatch(c,c->ctr); } // 801F11F4
  cmps(c,0,(int32_t)c->r[3],0); // 801F11F8
  if (!crb(c,2)) { goto L_801F1214; } // 801F11FC
  c->lr=0x801F1204u; f_801E5840(c); // 801F1200
  c->r[3]=c->r[3]+0x00000354u; // 801F1204
  c->lr=0x801F120Cu; f_800CCE30(c); // 801F1208
  c->r[3]=0u+0x00000000u; // 801F120C
  goto L_801F132C; // 801F1210
L_801F1214:;
  c->r[0]=R32(c->r[29]+0x000000F0u); // 801F1214
  cmps(c,0,(int32_t)c->r[0],0); // 801F1218
  if (!crb(c,2)) { goto L_801F1228; } // 801F121C
  c->r[30]=R32(c->r[29]+0x000000F4u); // 801F1220
  goto L_801F1250; // 801F1224
L_801F1228:;
  cmps(c,0,(int32_t)c->r[0],1); // 801F1228
  if (!crb(c,2)) { goto L_801F1250; } // 801F122C
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801F1230
  c->r[6]=0u+0x000003E8u; // 801F1234
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801F1238
  c->r[5]=0u+0x00000000u; // 801F123C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801F1240
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801F1244
  c->lr=0x801F124Cu; f_802179FC(c); // 801F1248
  c->r[30]=c->r[4]|c->r[4]; // 801F124C
L_801F1250:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F1250
  cmpu(c,0,c->r[30],c->r[0]); // 801F1254
  if (!crb(c,1)) { goto L_801F1270; } // 801F1258
  c->lr=0x801F1260u; f_801E5840(c); // 801F125C
  c->r[3]=c->r[3]+0x00000354u; // 801F1260
  c->lr=0x801F1268u; f_800CCE30(c); // 801F1264
  c->r[3]=0u+0x00000000u; // 801F1268
  goto L_801F132C; // 801F126C
L_801F1270:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 801F1270
  c->r[3]=0u+0x00000002u; // 801F1274
  c->r[4]=R32(c->r[29]+0x000000D8u); // 801F1278
  cmps(c,0,(int32_t)c->r[0],2); // 801F127C
  if (crb(c,1)) { goto L_801F1288; } // 801F1280
  c->r[3]=c->r[0]|c->r[0]; // 801F1284
L_801F1288:;
  c->r[6]=0u+0x801F0000u; // 801F1288
  c->r[5]=c->r[31]|c->r[31]; // 801F128C
  c->r[7]=c->r[29]|c->r[29]; // 801F1290
  c->r[6]=c->r[6]+0x000017A0u; // 801F1294
  c->lr=0x801F129Cu; f_801D5B20(c); // 801F1298
  cmps(c,0,(int32_t)c->r[3],0); // 801F129C
  c->r[31]=c->r[3]|c->r[3]; // 801F12A0
  if (!crb(c,2)) { goto L_801F12BC; } // 801F12A4
  c->lr=0x801F12ACu; f_801E5840(c); // 801F12A8
  c->r[3]=c->r[3]+0x00000354u; // 801F12AC
  c->lr=0x801F12B4u; f_800CCE30(c); // 801F12B0
  c->r[3]=0u+0x00000000u; // 801F12B4
  goto L_801F132C; // 801F12B8
L_801F12BC:;
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 801F12BC
  c->lr=0x801F12C4u; f_801D6660(c); // 801F12C0
  c->r[4]=R8(c->r[1]+0x0000000Du); // 801F12C4
  c->r[3]=c->r[31]|c->r[31]; // 801F12C8
  c->lr=0x801F12D0u; f_801D66F0(c); // 801F12CC
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 801F12D0
  c->r[3]=c->r[31]|c->r[31]; // 801F12D4
  c->lr=0x801F12DCu; f_801D6780(c); // 801F12D8
  c->r[4]=R8(c->r[1]+0x0000000Fu); // 801F12DC
  c->r[3]=c->r[31]|c->r[31]; // 801F12E0
  c->lr=0x801F12E8u; f_801D68D0(c); // 801F12E4
  c->r[4]=R8(c->r[1]+0x00000010u); // 801F12E8
  c->r[3]=c->r[31]|c->r[31]; // 801F12EC
  c->lr=0x801F12F4u; f_801D6950(c); // 801F12F0
  c->r[0]=R8(c->r[29]+0x000000D0u); // 801F12F4
  c->r[3]=c->r[31]|c->r[31]; // 801F12F8
  W8(c->r[31]+0x00000039u,c->r[0]); // 801F12FC
  c->r[6]=c->r[30]|c->r[30]; // 801F1300
  c->r[4]=c->r[1]+0x00000020u; // 801F1304
  c->r[5]=0u+0xFFFFFFFFu; // 801F1308
  c->lr=0x801F1310u; f_801D5670(c); // 801F130C
  c->r[0]=0u+0x00000001u; // 801F1310
  W32(c->r[29]+0x00000114u,c->r[31]); // 801F1314
  W8(c->r[29]+0x000000CFu,c->r[0]); // 801F1318
  c->lr=0x801F1320u; f_801E5840(c); // 801F131C
  c->r[3]=c->r[3]+0x00000354u; // 801F1320
  c->lr=0x801F1328u; f_800CCE30(c); // 801F1324
  c->r[3]=0u+0x00000001u; // 801F1328
L_801F132C:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801F132C
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801F1330
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801F1334
  c->r[29]=R32(c->r[1]+0x000000A4u); // 801F1338
  c->lr=c->r[0]; // 801F133C
  c->r[1]=c->r[1]+0x000000B0u; // 801F1340
  return; // 801F1344
}

// fn_801F1350
void f_801F1350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1350
  c->r[0]=c->lr; // 801F1354
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801F1358
  c->r[11]=c->r[1]+0x00000040u; // 801F135C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801F1360
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801F1364
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 801F1368
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 801F136C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 801F1370
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 801F1374
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 801F1378
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 801F137C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[27]);} // 801F1380
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,27,ea,0,0);} // 801F1384
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[26]);} // 801F1388
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,26,ea,0,0);} // 801F138C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[25]);} // 801F1390
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,25,ea,0,0);} // 801F1394
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[24]);} // 801F1398
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,24,ea,0,0);} // 801F139C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[23]);} // 801F13A0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,23,ea,0,0);} // 801F13A4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[22]);} // 801F13A8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,22,ea,0,0);} // 801F13AC
  c->lr=0x801F13B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F13B0
  c->r[0]=0u+0x43300000u; // 801F13B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801F13B8
  c->r[31]=c->r[3]|c->r[3]; // 801F13BC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801F13C0
  c->lr=0x801F13C8u; f_801E5840(c); // 801F13C4
  c->r[3]=c->r[3]+0x00000354u; // 801F13C8
  c->lr=0x801F13D0u; f_800CCD50(c); // 801F13CC
  c->r[0]=R32(c->r[31]+0x00000114u); // 801F13D0
  cmps(c,0,(int32_t)c->r[0],0); // 801F13D4
  if (!crb(c,2)) { goto L_801F13EC; } // 801F13D8
  c->lr=0x801F13E0u; f_801E5840(c); // 801F13DC
  c->r[3]=c->r[3]+0x00000354u; // 801F13E0
  c->lr=0x801F13E8u; f_800CCE30(c); // 801F13E4
  goto L_801F1730; // 801F13E8
L_801F13EC:;
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[28]=c->ps1[28]=RF32(ea);} // 801F13EC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F13F0
  c->r[3]=R8(c->r[31]+0x0000010Cu); // 801F13F4
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801F13F8
  {uint32_t ea=c->r[31]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F13FC
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[29]=c->ps1[29]=RF32(ea);} // 801F1400
  cmpu(c,0,c->r[3],0x00000001u); // 801F1404
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1408
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801F140C
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801F1410
  {uint32_t ea=c->r[2]+0xFFFF9F74u; c->f[27]=c->ps1[27]=RF32(ea);} // 801F1414
  if (crb(c,1)) { goto L_801F1444; } // 801F1418
  c->r[0]=c->r[3]+0xFFFFFFC1u; // 801F141C
  {uint32_t ea=c->r[2]+0xFFFF9F88u; c->f[2]=RF64(ea);} // 801F1420
  c->r[0]=c->r[0]^0x80000000u; // 801F1424
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F1428
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F142C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801F1430
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1434
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1438
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801F143C
  goto L_801F1468; // 801F1440
L_801F1444:;
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801F1444
  {uint32_t ea=c->r[2]+0xFFFF9F88u; c->f[2]=RF64(ea);} // 801F1448
  c->r[0]=c->r[0]^0x80000000u; // 801F144C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1450
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1454
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801F1458
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F145C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1460
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801F1464
L_801F1468:;
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1468
  c->r[3]=R8(c->r[31]+0x0000010Du); // 801F146C
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 801F1470
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1474
  cmpu(c,0,c->r[3],0x00000001u); // 801F1478
  {uint32_t ea=c->r[2]+0xFFFF9F74u; c->f[26]=c->ps1[26]=RF32(ea);} // 801F147C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801F1480
  if (crb(c,1)) { goto L_801F14B0; } // 801F1484
  c->r[0]=c->r[3]+0x00000001u; // 801F1488
  {uint32_t ea=c->r[2]+0xFFFF9F88u; c->f[2]=RF64(ea);} // 801F148C
  c->r[0]=c->r[0]^0x80000000u; // 801F1490
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F1494
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1498
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801F149C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F14A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F14A4
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 801F14A8
  goto L_801F14CC; // 801F14AC
L_801F14B0:;
  W32(c->r[1]+0x00000024u,c->r[3]); // 801F14B0
  {uint32_t ea=c->r[2]+0xFFFF9F90u; c->f[2]=RF64(ea);} // 801F14B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801F14B8
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F14BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F14C0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F14C4
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 801F14C8
L_801F14CC:;
  c->r[0]=R8(c->r[31]+0x00000111u); // 801F14CC
  c->r[27]=c->r[1]+0x0000000Cu; // 801F14D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F14D4
  c->r[30]=c->r[1]+0x00000008u; // 801F14D8
  {uint32_t ea=c->r[2]+0xFFFF9F74u; c->f[23]=c->ps1[23]=RF32(ea);} // 801F14DC
  c->r[26]=0u+0x00000000u; // 801F14E0
  {uint32_t ea=c->r[2]+0xFFFF9F90u; c->f[30]=RF64(ea);} // 801F14E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801F14E8
  c->f[25]=c->f[23]; // 801F14EC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801F14F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801F14F4
  {uint32_t ea=c->r[2]+0xFFFF9F80u; c->f[31]=c->ps1[31]=RF32(ea);} // 801F14F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=RF64(ea);} // 801F14FC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 801F1500
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 801F1504
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1508
  c->r[4]=R8(c->r[31]+0x0000010Eu); // 801F150C
  c->r[3]=R8(c->r[31]+0x0000010Fu); // 801F1510
  c->r[0]=R8(c->r[31]+0x00000110u); // 801F1514
  {uint32_t ea=c->r[2]+0xFFFF9F7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F1518
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F151C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801F1520
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[30]); // 801F1524
  {uint32_t ea=c->r[31]+0x00000018u; c->f[24]=c->ps1[24]=RF32(ea);} // 801F1528
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[5]); // 801F152C
  W8(c->r[1]+0x00000008u,c->r[4]); // 801F1530
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 801F1534
  W8(c->r[1]+0x00000009u,c->r[3]); // 801F1538
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[0]); // 801F153C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1540
  c->r[28]=R8(c->r[31]+0x0000001Cu); // 801F1544
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 801F1548
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[0]); // 801F154C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801F1550
  c->r[29]=R8(c->r[31]+0x0000001Du); // 801F1554
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[4]); // 801F1558
  {uint32_t ea=c->r[2]+0xFFFF9F74u; c->f[22]=c->ps1[22]=RF32(ea);} // 801F155C
L_801F1560:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801F1560
  c->r[3]=c->r[31]|c->r[31]; // 801F1564
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F1568
  c->r[4]=c->r[26]|c->r[26]; // 801F156C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801F1570
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 801F1574
  c->f[0]=c->ps1[0]=S(c->f[22]); // 801F1578
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801F157C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F1580
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801F1584
  c->lr=0x801F158Cu; f_801D28B0(c); // 801F1588
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F158C
  c->r[26]=c->r[26]+0x00000001u; // 801F1590
  cmps(c,0,(int32_t)c->r[26],3); // 801F1594
  c->r[30]=c->r[30]+0x00000001u; // 801F1598
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F159C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801F15A0
  c->r[27]=c->r[27]+0x00000004u; // 801F15A4
  if (crb(c,0)) { IRQCHK(c); goto L_801F1560; } // 801F15A8
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15AC
  c->f[1]=c->f[24]; // 801F15B0
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801F15B4
  c->r[4]=c->r[28]|c->r[28]; // 801F15B8
  W32(c->r[3]+0x000000B4u,c->r[0]); // 801F15BC
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15C0
  c->r[0]=R32(c->r[31]+0x00000030u); // 801F15C4
  W32(c->r[3]+0x000000B8u,c->r[0]); // 801F15C8
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15CC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[29]);} // 801F15D0
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15D4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[28]);} // 801F15D8
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15DC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[27]);} // 801F15E0
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15E4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[26]);} // 801F15E8
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15EC
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[25]);} // 801F15F0
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15F4
  c->lr=0x801F15FCu; f_801D5970(c); // 801F15F8
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F15FC
  c->r[26]=0u+0x00000000u; // 801F1600
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1604
  c->r[27]=0u+0x00000000u; // 801F1608
  W8(c->r[3]+0x0000003Cu,c->r[29]); // 801F160C
  c->r[29]=0u+0x802D0000u; // 801F1610
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F1614
  c->r[30]=0u+0x802D0000u; // 801F1618
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F161C
  c->r[0]=R32(c->r[31]+0x00000020u); // 801F1620
  W32(c->r[3]+0x00000058u,c->r[0]); // 801F1624
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F1628
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F162C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1630
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 801F1634
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1638
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[23]);} // 801F163C
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1640
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801F1644
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1648
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[3]);} // 801F164C
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F1650
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[2]);} // 801F1654
L_801F1658:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1658
  c->r[4]=c->r[26]|c->r[26]; // 801F165C
  c->lr=0x801F1664u; f_801D2B30(c); // 801F1660
  c->f[23]=c->f[1]; // 801F1664
  cmpu(c,0,c->r[26],0x00000003u); // 801F1668
  c->r[28]=R32(c->r[31]+0x00000114u); // 801F166C
  c->r[0]=0u+0x00000000u; // 801F1670
  if (crb(c,1)) { goto L_801F167C; } // 801F1674
  c->r[0]=0u+0x00000001u; // 801F1678
L_801F167C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801F167C
  if (!crb(c,2)) { goto L_801F16A4; } // 801F1680
  c->r[6]=c->r[26]|c->r[26]; // 801F1684
  c->r[3]=c->r[29]+0xFFFFF548u; // 801F1688
  c->r[5]=c->r[30]+0xFFFFF500u; // 801F168C
  c->r[4]=0u+0x000000BAu; // 801F1690
  c->r[7]=0u+0x00000000u; // 801F1694
  c->r[8]=0u+0x00000004u; // 801F1698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F169C
  c->lr=0x801F16A4u; f_801F9770(c); // 801F16A0
L_801F16A4:;
  c->r[26]=c->r[26]+0x00000001u; // 801F16A4
  c->r[3]=c->r[28]+c->r[27]; // 801F16A8
  cmps(c,0,(int32_t)c->r[26],4); // 801F16AC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[23]);} // 801F16B0
  c->r[27]=c->r[27]+0x00000004u; // 801F16B4
  if (crb(c,0)) { IRQCHK(c); goto L_801F1658; } // 801F16B8
  c->r[28]=c->r[31]+0x00000050u; // 801F16BC
  c->r[26]=0u+0x00000000u; // 801F16C0
  goto L_801F16E4; // 801F16C4
L_801F16C8:;
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F16C8
  c->r[4]=c->r[26]|c->r[26]; // 801F16CC
  c->r[5]=c->r[28]|c->r[28]; // 801F16D0
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801F16D4
  c->lr=0x801F16DCu; f_801ECC90(c); // 801F16D8
  c->r[28]=c->r[28]+0x00000018u; // 801F16DC
  c->r[26]=c->r[26]+0x00000001u; // 801F16E0
L_801F16E4:;
  c->r[0]=R32(c->r[31]+0x000000D8u); // 801F16E4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801F16E8
  if (crb(c,0)) { IRQCHK(c); goto L_801F16C8; } // 801F16EC
  c->r[3]=R32(c->r[31]+0x00000114u); // 801F16F0
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F16F4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801F16F8
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F16FC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801F1700
  c->r[0]=R32(c->r[31]+0x00000100u); // 801F1704
  W32(c->r[3]+0x00000024u,c->r[0]); // 801F1708
  c->r[0]=R8(c->r[31]+0x00000104u); // 801F170C
  W8(c->r[3]+0x00000028u,c->r[0]); // 801F1710
  c->r[0]=R16(c->r[31]+0x00000105u); // 801F1714
  W16(c->r[3]+0x00000029u,c->r[0]); // 801F1718
  c->r[0]=R8(c->r[31]+0x00000107u); // 801F171C
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 801F1720
  c->lr=0x801F1728u; f_801E5840(c); // 801F1724
  c->r[3]=c->r[3]+0x00000354u; // 801F1728
  c->lr=0x801F1730u; f_800CCE30(c); // 801F172C
L_801F1730:;
  c->r[11]=c->r[1]+0x00000040u; // 801F1730
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801F1734
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801F1738
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 801F173C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 801F1740
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 801F1744
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 801F1748
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 801F174C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 801F1750
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,27,ea,0,0);} // 801F1754
  {uint32_t ea=c->r[1]+0x00000090u; c->f[27]=RF64(ea);} // 801F1758
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,26,ea,0,0);} // 801F175C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[26]=RF64(ea);} // 801F1760
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,25,ea,0,0);} // 801F1764
  {uint32_t ea=c->r[1]+0x00000070u; c->f[25]=RF64(ea);} // 801F1768
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,24,ea,0,0);} // 801F176C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[24]=RF64(ea);} // 801F1770
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,23,ea,0,0);} // 801F1774
  {uint32_t ea=c->r[1]+0x00000050u; c->f[23]=RF64(ea);} // 801F1778
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,22,ea,0,0);} // 801F177C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[22]=RF64(ea);} // 801F1780
  c->lr=0x801F1788u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F1784
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801F1788
  c->lr=c->r[0]; // 801F178C
  c->r[1]=c->r[1]+0x000000E0u; // 801F1790
  return; // 801F1794
}

// fn_801F17A0
void f_801F17A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F17A0
  c->r[0]=c->lr; // 801F17A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F17A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F17AC
  c->r[31]=0u+0x802D0000u; // 801F17B0
  c->r[31]=c->r[31]+0x00002F60u; // 801F17B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F17B8
  c->r[30]=c->r[5]|c->r[5]; // 801F17BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F17C0
  c->r[29]=c->r[4]|c->r[4]; // 801F17C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F17C8
  c->r[28]=c->r[3]|c->r[3]; // 801F17CC
  c->lr=0x801F17D4u; f_801E5840(c); // 801F17D0
  c->r[3]=c->r[3]+0x00000354u; // 801F17D4
  c->lr=0x801F17DCu; f_800CCD50(c); // 801F17D8
  cmps(c,0,(int32_t)c->r[28],0); // 801F17DC
  if (!crb(c,2)) { goto L_801F17F8; } // 801F17E0
  c->r[3]=c->r[31]+0x00000000u; // 801F17E4
  c->r[5]=c->r[31]+0x0000007Cu; // 801F17E8
  c->r[4]=0u+0x00000273u; // 801F17EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F17F0
  c->lr=0x801F17F8u; f_801F9770(c); // 801F17F4
L_801F17F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F17F8
  if (!crb(c,2)) { goto L_801F1814; } // 801F17FC
  c->r[3]=c->r[31]+0x00000000u; // 801F1800
  c->r[5]=c->r[31]+0x000000A8u; // 801F1804
  c->r[4]=0u+0x00000274u; // 801F1808
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F180C
  c->lr=0x801F1814u; f_801F9770(c); // 801F1810
L_801F1814:;
  c->r[0]=R32(c->r[30]+0x00000114u); // 801F1814
  cmpu(c,0,c->r[28],c->r[0]); // 801F1818
  if (crb(c,2)) { goto L_801F1834; } // 801F181C
  c->r[3]=c->r[31]+0x00000000u; // 801F1820
  c->r[5]=c->r[31]+0x000000D0u; // 801F1824
  c->r[4]=0u+0x00000275u; // 801F1828
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F182C
  c->lr=0x801F1834u; f_801F9770(c); // 801F1830
L_801F1834:;
  cmps(c,0,(int32_t)c->r[29],2); // 801F1834
  if (!crb(c,2)) { goto L_801F1844; } // 801F1838
  c->r[3]=c->r[28]|c->r[28]; // 801F183C
  c->lr=0x801F1844u; f_801D5DB0(c); // 801F1840
L_801F1844:;
  c->r[0]=0u+0x00000000u; // 801F1844
  W32(c->r[30]+0x00000114u,c->r[0]); // 801F1848
  c->lr=0x801F1850u; f_801E5840(c); // 801F184C
  c->r[3]=c->r[3]+0x00000354u; // 801F1850
  c->lr=0x801F1858u; f_800CCE30(c); // 801F1854
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F185C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1860
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1864
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F1868
  c->lr=c->r[0]; // 801F186C
  c->r[1]=c->r[1]+0x00000020u; // 801F1870
  return; // 801F1874
}

// fn_801F1880
void f_801F1880(Ctx* __restrict c) {
  f_801F0EB0(c); return; // 801F1880
}

// fn_801F1890
void f_801F1890(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 801F1890
  c->r[12]=R32(c->r[12]+0x00000010u); // 801F1894
  c->ctr=c->r[12]; // 801F1898
  if (true) { dispatch(c,c->ctr); return; } // 801F189C
}

// fn_801F18A0
void f_801F18A0(Ctx* __restrict c) {
  return; // 801F18A0
}

// fn_801F18B0
void f_801F18B0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CEu); // 801F18B0
  c->r[0]=0u-c->r[3]; // 801F18B4
  c->r[0]=c->r[0]|c->r[3]; // 801F18B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F18BC
  return; // 801F18C0
}

// fn_801F18D0
void f_801F18D0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CDu); // 801F18D0
  c->r[0]=0u-c->r[3]; // 801F18D4
  c->r[0]=c->r[0]|c->r[3]; // 801F18D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F18DC
  return; // 801F18E0
}

// fn_801F18F0
void f_801F18F0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CCu); // 801F18F0
  c->r[0]=0u-c->r[3]; // 801F18F4
  c->r[0]=c->r[0]|c->r[3]; // 801F18F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F18FC
  return; // 801F1900
}

// fn_801F1910
void f_801F1910(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F1910
  f_801F18A0(c); return; // 801F1914
}

// fn_801F1920
void f_801F1920(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F1920
  f_801F0D50(c); return; // 801F1924
}

// fn_801F1930
void f_801F1930(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F1930
  f_801EFCF0(c); return; // 801F1934
}

// fn_801F1940
void f_801F1940(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801F1940
  f_801F1890(c); return; // 801F1944
}

