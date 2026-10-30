#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801CE8F0
void f_801CE8F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE8F0
  c->r[0]=c->lr; // 801CE8F4
  cmps(c,0,(int32_t)c->r[3],0); // 801CE8F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE8FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE900
  if (crb(c,2)) { goto L_801CE90C; } // 801CE904
  c->r[3]=c->r[3]+0x80000000u; // 801CE908
L_801CE90C:;
  cmps(c,0,(int32_t)c->r[5],3); // 801CE90C
  c->r[31]=0u+0x00000000u; // 801CE910
  if (crb(c,2)) { goto L_801CE92C; } // 801CE914
  cmps(c,0,(int32_t)c->r[5],2); // 801CE918
  if (crb(c,2)) { goto L_801CE94C; } // 801CE91C
  cmps(c,0,(int32_t)c->r[5],1); // 801CE920
  if (crb(c,2)) { goto L_801CE954; } // 801CE924
  goto L_801CE960; // 801CE928
L_801CE92C:;
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801CE92C
  c->r[4]=c->r[4]-c->r[0]; // 801CE930
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801CE934
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801CE938
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801CE93C
  c->r[3]=c->r[0]+c->r[3]; // 801CE940
  c->r[31]=c->r[3]+0xFFFFFFFEu; // 801CE944
  goto L_801CE97C; // 801CE948
L_801CE94C:;
  c->r[31]=c->r[4]-c->r[3]; // 801CE94C
  goto L_801CE97C; // 801CE950
L_801CE954:;
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801CE954
  c->r[31]=c->r[4]-c->r[0]; // 801CE958
  goto L_801CE97C; // 801CE95C
L_801CE960:;
  c->r[3]=0u+0x802D0000u; // 801CE960
  c->r[5]=0u+0x802D0000u; // 801CE964
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CE968
  c->r[4]=0u+0x0000015Eu; // 801CE96C
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CE970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE974
  c->lr=0x801CE97Cu; f_801F9770(c); // 801CE978
L_801CE97C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CE97C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE980
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE984
  c->lr=c->r[0]; // 801CE988
  c->r[1]=c->r[1]+0x00000010u; // 801CE98C
  return; // 801CE990
}

// SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
void f_801CE9A0(Ctx* __restrict c) {
  trace_call(0x801CE9A0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CE9A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CE9A4
  if (crb(c,2)) return; // 801CE9A8
  f_800EC9D0(c); return; // 801CE9AC
  return; // 801CE9B0
}

// SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
void f_801CE9C0(Ctx* __restrict c) {
  trace_call(0x801CE9C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE9C0
  c->r[0]=c->lr; // 801CE9C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE9C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE9CC
  c->r[31]=c->r[4]|c->r[4]; // 801CE9D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE9D4
  c->r[30]=c->r[3]|c->r[3]; // 801CE9D8
  c->lr=0x801CE9E0u; f_800CBAA0(c); // 801CE9DC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801CE9E0
  cmps(c,0,(int32_t)c->r[4],0); // 801CE9E4
  if (!crb(c,2)) { goto L_801CE9F4; } // 801CE9E8
  c->lr=0x801CE9F0u; f_800CBAE0(c); // 801CE9EC
  goto L_801CEA08; // 801CE9F0
L_801CE9F4:;
  W16(c->r[4]+0x0000003Au,c->r[31]); // 801CE9F4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CE9F8
  c->r[0]=c->r[0]|0x00000008u; // 801CE9FC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CEA00
  c->lr=0x801CEA08u; f_800CBAE0(c); // 801CEA04
L_801CEA08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEA0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CEA10
  c->lr=c->r[0]; // 801CEA14
  c->r[1]=c->r[1]+0x00000010u; // 801CEA18
  return; // 801CEA1C
}

// EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
void f_801CEA20(Ctx* __restrict c) {
  trace_call(0x801CEA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEA20
  c->r[0]=c->lr; // 801CEA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEA2C
  c->r[31]=c->r[4]|c->r[4]; // 801CEA30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CEA34
  c->r[30]=c->r[3]|c->r[3]; // 801CEA38
  c->lr=0x801CEA40u; f_800CBAA0(c); // 801CEA3C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801CEA40
  cmps(c,0,(int32_t)c->r[4],0); // 801CEA44
  if (!crb(c,2)) { goto L_801CEA54; } // 801CEA48
  c->lr=0x801CEA50u; f_800CBAE0(c); // 801CEA4C
  goto L_801CEA68; // 801CEA50
L_801CEA54:;
  W16(c->r[4]+0x000000FEu,c->r[31]); // 801CEA54
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CEA58
  c->r[0]=c->r[0]|0x00800000u; // 801CEA5C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CEA60
  c->lr=0x801CEA68u; f_800CBAE0(c); // 801CEA64
L_801CEA68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEA68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEA6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CEA70
  c->lr=c->r[0]; // 801CEA74
  c->r[1]=c->r[1]+0x00000010u; // 801CEA78
  return; // 801CEA7C
}

// fn_801CEA80
void f_801CEA80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEA80
  c->r[0]=c->lr; // 801CEA84
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CEA88
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801CEA8C
  c->r[31]=c->r[3]|c->r[3]; // 801CEA90
  W32(c->r[1]+0x00000038u,c->r[30]); // 801CEA94
  c->lr=0x801CEA9Cu; f_800CBAA0(c); // 801CEA98
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CEA9C
  c->r[30]=c->r[3]|c->r[3]; // 801CEAA0
  cmps(c,0,(int32_t)c->r[0],0); // 801CEAA4
  if (!crb(c,2)) { goto L_801CEAB4; } // 801CEAA8
  c->lr=0x801CEAB0u; f_800CBAE0(c); // 801CEAAC
  goto L_801CEBB8; // 801CEAB0
L_801CEAB4:;
  c->lr=0x801CEAB8u; f_800CBAA0(c); // 801CEAB4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CEAB8
  cmps(c,0,(int32_t)c->r[4],0); // 801CEABC
  if (!crb(c,2)) { goto L_801CEACC; } // 801CEAC0
  c->lr=0x801CEAC8u; f_800CBAE0(c); // 801CEAC4
  goto L_801CEB0C; // 801CEAC8
L_801CEACC:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 801CEACC
  c->r[0]=0u+0x00000000u; // 801CEAD0
  c->r[6]=R16(c->r[31]+0x00000008u); // 801CEAD4
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 801CEAD8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CEADC
  c->r[5]=c->r[6]+c->r[5]; // 801CEAE0
  W16(c->r[31]+0x00000008u,c->r[5]); // 801CEAE4
  c->r[5]=R16(c->r[31]+0x00000008u); // 801CEAE8
  W16(c->r[4]+0x00000092u,c->r[5]); // 801CEAEC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CEAF0
  W16(c->r[4]+0x00000094u,c->r[0]); // 801CEAF4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CEAF8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801CEAFC
  c->r[0]=c->r[0]|0x00000100u; // 801CEB00
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801CEB04
  c->lr=0x801CEB0Cu; f_800CBAE0(c); // 801CEB08
L_801CEB0C:;
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 801CEB0C
  c->r[6]=0u+0x00000000u; // 801CEB10
  W16(c->r[1]+0x00000008u,c->r[0]); // 801CEB14
  c->r[3]=c->r[31]|c->r[31]; // 801CEB18
  c->r[4]=c->r[1]+0x00000008u; // 801CEB1C
  c->r[5]=0u+0x00000001u; // 801CEB20
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801CEB24
  c->r[0]=R16(c->r[31]+0x00000020u); // 801CEB28
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801CEB2C
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801CEB30
  c->r[0]=R16(c->r[31]+0x00000024u); // 801CEB34
  W16(c->r[1]+0x00000010u,c->r[0]); // 801CEB38
  W16(c->r[1]+0x00000012u,c->r[6]); // 801CEB3C
  c->r[0]=R16(c->r[31]+0x00000026u); // 801CEB40
  W16(c->r[1]+0x00000014u,c->r[0]); // 801CEB44
  W16(c->r[1]+0x00000016u,c->r[6]); // 801CEB48
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801CEB4C
  W16(c->r[1]+0x00000018u,c->r[0]); // 801CEB50
  W16(c->r[1]+0x0000001Au,c->r[6]); // 801CEB54
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801CEB58
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801CEB5C
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 801CEB60
  c->r[0]=R16(c->r[31]+0x00000030u); // 801CEB64
  W16(c->r[1]+0x00000020u,c->r[0]); // 801CEB68
  W16(c->r[1]+0x00000022u,c->r[6]); // 801CEB6C
  c->r[0]=R16(c->r[31]+0x00000032u); // 801CEB70
  W16(c->r[1]+0x00000024u,c->r[0]); // 801CEB74
  W16(c->r[1]+0x00000026u,c->r[6]); // 801CEB78
  c->r[0]=R16(c->r[31]+0x00000022u); // 801CEB7C
  W16(c->r[1]+0x00000028u,c->r[0]); // 801CEB80
  W16(c->r[1]+0x0000002Au,c->r[6]); // 801CEB84
  c->r[0]=R16(c->r[31]+0x00000028u); // 801CEB88
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801CEB8C
  W16(c->r[1]+0x0000002Eu,c->r[6]); // 801CEB90
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801CEB94
  W16(c->r[1]+0x00000030u,c->r[0]); // 801CEB98
  W16(c->r[1]+0x00000032u,c->r[6]); // 801CEB9C
  c->r[0]=R16(c->r[31]+0x00000034u); // 801CEBA0
  W16(c->r[1]+0x00000034u,c->r[0]); // 801CEBA4
  W16(c->r[1]+0x00000036u,c->r[6]); // 801CEBA8
  c->lr=0x801CEBB0u; f_801D07A0(c); // 801CEBAC
  c->r[3]=c->r[30]|c->r[30]; // 801CEBB0
  c->lr=0x801CEBB8u; f_800CBAE0(c); // 801CEBB4
L_801CEBB8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CEBB8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801CEBBC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801CEBC0
  c->lr=c->r[0]; // 801CEBC4
  c->r[1]=c->r[1]+0x00000040u; // 801CEBC8
  return; // 801CEBCC
}

// fn_801CEBD0
void f_801CEBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEBD0
  c->r[0]=c->lr; // 801CEBD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CEBD8
  c->r[11]=c->r[1]+0x00000040u; // 801CEBDC
  c->lr=0x801CEBE4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CEBE0
  c->r[25]=c->r[3]|c->r[3]; // 801CEBE4
  c->r[26]=c->r[4]|c->r[4]; // 801CEBE8
  c->r[27]=c->r[5]|c->r[5]; // 801CEBEC
  c->r[28]=c->r[6]|c->r[6]; // 801CEBF0
  c->r[31]=c->r[7]|c->r[7]; // 801CEBF4
  c->r[29]=c->r[8]|c->r[8]; // 801CEBF8
  c->lr=0x801CEC00u; f_800CBAA0(c); // 801CEBFC
  c->r[0]=R32(c->r[25]+0x00000000u); // 801CEC00
  c->r[24]=c->r[3]|c->r[3]; // 801CEC04
  cmps(c,0,(int32_t)c->r[0],0); // 801CEC08
  if (!crb(c,2)) { goto L_801CEC18; } // 801CEC0C
  c->lr=0x801CEC14u; f_800CBAE0(c); // 801CEC10
  goto L_801CF07C; // 801CEC14
L_801CEC18:;
  cmpu(c,0,c->r[28],c->r[29]); // 801CEC18
  if (!crb(c,1)) { goto L_801CED78; } // 801CEC1C
  c->lr=0x801CEC24u; f_801CD130(c); // 801CEC20
  c->lr=0x801CEC28u; f_801CD7B0(c); // 801CEC24
  cmps(c,0,(int32_t)c->r[3],0); // 801CEC28
  c->r[27]=c->r[3]|c->r[3]; // 801CEC2C
  c->r[4]=R32(c->r[25]+0x00000014u); // 801CEC30
  c->r[0]=c->r[27]|c->r[27]; // 801CEC34
  c->r[26]=0u+0x00000000u; // 801CEC38
  if (crb(c,2)) { goto L_801CEC44; } // 801CEC3C
  c->r[0]=c->r[3]+0x80000000u; // 801CEC40
L_801CEC44:;
  cmps(c,0,(int32_t)c->r[4],3); // 801CEC44
  c->r[31]=0u+0x00000000u; // 801CEC48
  if (crb(c,2)) { goto L_801CEC64; } // 801CEC4C
  cmps(c,0,(int32_t)c->r[4],2); // 801CEC50
  if (crb(c,2)) { goto L_801CEC70; } // 801CEC54
  cmps(c,0,(int32_t)c->r[4],1); // 801CEC58
  if (crb(c,2)) { goto L_801CEC78; } // 801CEC5C
  goto L_801CEC80; // 801CEC60
L_801CEC64:;
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CEC64
  c->r[31]=c->r[3]+0x00000002u; // 801CEC68
  goto L_801CEC9C; // 801CEC6C
L_801CEC70:;
  c->r[31]=c->r[0]|c->r[0]; // 801CEC70
  goto L_801CEC9C; // 801CEC74
L_801CEC78:;
  c->r[31]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CEC78
  goto L_801CEC9C; // 801CEC7C
L_801CEC80:;
  c->r[3]=0u+0x802D0000u; // 801CEC80
  c->r[5]=0u+0x802D0000u; // 801CEC84
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CEC88
  c->r[4]=0u+0x0000013Eu; // 801CEC8C
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CEC90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEC94
  c->lr=0x801CEC9Cu; f_801F9770(c); // 801CEC98
L_801CEC9C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CEC9C
  c->r[3]=R32(c->r[25]+0x00000014u); // 801CECA0
  c->r[0]=c->r[27]|c->r[27]; // 801CECA4
  if (crb(c,2)) { goto L_801CECB0; } // 801CECA8
  c->r[0]=c->r[27]+0x80000000u; // 801CECAC
L_801CECB0:;
  cmps(c,0,(int32_t)c->r[3],3); // 801CECB0
  c->r[30]=0u+0x00000000u; // 801CECB4
  if (crb(c,2)) { goto L_801CECD0; } // 801CECB8
  cmps(c,0,(int32_t)c->r[3],2); // 801CECBC
  if (crb(c,2)) { goto L_801CECDC; } // 801CECC0
  cmps(c,0,(int32_t)c->r[3],1); // 801CECC4
  if (crb(c,2)) { goto L_801CECE4; } // 801CECC8
  goto L_801CECEC; // 801CECCC
L_801CECD0:;
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CECD0
  c->r[30]=c->r[3]+0x00000002u; // 801CECD4
  goto L_801CED08; // 801CECD8
L_801CECDC:;
  c->r[30]=c->r[0]|c->r[0]; // 801CECDC
  goto L_801CED08; // 801CECE0
L_801CECE4:;
  c->r[30]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CECE4
  goto L_801CED08; // 801CECE8
L_801CECEC:;
  c->r[3]=0u+0x802D0000u; // 801CECEC
  c->r[5]=0u+0x802D0000u; // 801CECF0
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CECF4
  c->r[4]=0u+0x0000013Eu; // 801CECF8
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CECFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CED00
  c->lr=0x801CED08u; f_801F9770(c); // 801CED04
L_801CED08:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CED08
  c->r[0]=R32(c->r[25]+0x00000014u); // 801CED0C
  if (crb(c,2)) { goto L_801CED18; } // 801CED10
  c->r[27]=c->r[27]+0x80000000u; // 801CED14
L_801CED18:;
  cmps(c,0,(int32_t)c->r[0],3); // 801CED18
  c->r[28]=0u+0x00000000u; // 801CED1C
  if (crb(c,2)) { goto L_801CED38; } // 801CED20
  cmps(c,0,(int32_t)c->r[0],2); // 801CED24
  if (crb(c,2)) { goto L_801CED44; } // 801CED28
  cmps(c,0,(int32_t)c->r[0],1); // 801CED2C
  if (crb(c,2)) { goto L_801CED4C; } // 801CED30
  goto L_801CED58; // 801CED34
L_801CED38:;
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801CED38
  c->r[28]=c->r[3]+0x00000003u; // 801CED3C
  goto L_801CEFDC; // 801CED40
L_801CED44:;
  c->r[28]=c->r[27]+0x00000001u; // 801CED44
  goto L_801CEFDC; // 801CED48
L_801CED4C:;
  c->r[3]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801CED4C
  c->r[28]=c->r[3]+0x00000001u; // 801CED50
  goto L_801CEFDC; // 801CED54
L_801CED58:;
  c->r[3]=0u+0x802D0000u; // 801CED58
  c->r[5]=0u+0x802D0000u; // 801CED5C
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CED60
  c->r[4]=0u+0x0000013Eu; // 801CED64
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CED68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CED6C
  c->lr=0x801CED74u; f_801F9770(c); // 801CED70
  goto L_801CEFDC; // 801CED74
L_801CED78:;
  cmps(c,0,(int32_t)c->r[26],0); // 801CED78
  if (crb(c,2)) { goto L_801CEE24; } // 801CED7C
  cmps(c,0,(int32_t)c->r[27],0); // 801CED80
  c->r[3]=R32(c->r[25]+0x00000014u); // 801CED84
  c->r[0]=c->r[27]|c->r[27]; // 801CED88
  if (crb(c,2)) { goto L_801CED94; } // 801CED8C
  c->r[0]=c->r[27]+0x80000000u; // 801CED90
L_801CED94:;
  cmps(c,0,(int32_t)c->r[3],3); // 801CED94
  c->r[30]=0u+0x00000000u; // 801CED98
  if (crb(c,2)) { goto L_801CEDB4; } // 801CED9C
  cmps(c,0,(int32_t)c->r[3],2); // 801CEDA0
  if (crb(c,2)) { goto L_801CEDF0; } // 801CEDA4
  cmps(c,0,(int32_t)c->r[3],1); // 801CEDA8
  if (crb(c,2)) { goto L_801CEDF8; } // 801CEDAC
  goto L_801CEE04; // 801CEDB0
L_801CEDB4:;
  c->r[3]=0u+0x24920000u; // 801CEDB4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CEDB8
  c->r[3]=c->r[3]+0x00004925u; // 801CEDBC
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[31])>>32); // 801CEDC0
  c->r[3]=c->r[31]-c->r[4]; // 801CEDC4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801CEDC8
  c->r[4]=c->r[3]+c->r[4]; // 801CEDCC
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801CEDD0
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801CEDD4
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801CEDD8
  c->r[4]=c->r[31]-c->r[5]; // 801CEDDC
  c->r[0]=c->r[4]+c->r[0]; // 801CEDE0
  c->r[30]=c->r[0]+c->r[3]; // 801CEDE4
  c->r[30]=c->r[30]+0x00000002u; // 801CEDE8
  goto L_801CEE94; // 801CEDEC
L_801CEDF0:;
  c->r[30]=c->r[0]+c->r[31]; // 801CEDF0
  goto L_801CEE94; // 801CEDF4
L_801CEDF8:;
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CEDF8
  c->r[30]=c->r[0]+c->r[31]; // 801CEDFC
  goto L_801CEE94; // 801CEE00
L_801CEE04:;
  c->r[3]=0u+0x802D0000u; // 801CEE04
  c->r[5]=0u+0x802D0000u; // 801CEE08
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CEE0C
  c->r[4]=0u+0x0000013Eu; // 801CEE10
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CEE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE18
  c->lr=0x801CEE20u; f_801F9770(c); // 801CEE1C
  goto L_801CEE94; // 801CEE20
L_801CEE24:;
  c->lr=0x801CEE28u; f_801CD130(c); // 801CEE24
  c->lr=0x801CEE2Cu; f_801CD7B0(c); // 801CEE28
  cmps(c,0,(int32_t)c->r[3],0); // 801CEE2C
  c->r[0]=R32(c->r[25]+0x00000014u); // 801CEE30
  if (crb(c,2)) { goto L_801CEE3C; } // 801CEE34
  c->r[3]=c->r[3]+0x80000000u; // 801CEE38
L_801CEE3C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801CEE3C
  c->r[30]=0u+0x00000000u; // 801CEE40
  if (crb(c,2)) { goto L_801CEE5C; } // 801CEE44
  cmps(c,0,(int32_t)c->r[0],2); // 801CEE48
  if (crb(c,2)) { goto L_801CEE68; } // 801CEE4C
  cmps(c,0,(int32_t)c->r[0],1); // 801CEE50
  if (crb(c,2)) { goto L_801CEE70; } // 801CEE54
  goto L_801CEE78; // 801CEE58
L_801CEE5C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801CEE5C
  c->r[30]=c->r[3]+0x00000002u; // 801CEE60
  goto L_801CEE94; // 801CEE64
L_801CEE68:;
  c->r[30]=c->r[3]|c->r[3]; // 801CEE68
  goto L_801CEE94; // 801CEE6C
L_801CEE70:;
  c->r[30]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801CEE70
  goto L_801CEE94; // 801CEE74
L_801CEE78:;
  c->r[3]=0u+0x802D0000u; // 801CEE78
  c->r[5]=0u+0x802D0000u; // 801CEE7C
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CEE80
  c->r[4]=0u+0x0000013Eu; // 801CEE84
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CEE88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE8C
  c->lr=0x801CEE94u; f_801F9770(c); // 801CEE90
L_801CEE94:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CEE94
  c->r[3]=R32(c->r[25]+0x00000014u); // 801CEE98
  c->r[0]=c->r[27]|c->r[27]; // 801CEE9C
  if (crb(c,2)) { goto L_801CEEA8; } // 801CEEA0
  c->r[0]=c->r[27]+0x80000000u; // 801CEEA4
L_801CEEA8:;
  cmps(c,0,(int32_t)c->r[3],3); // 801CEEA8
  c->r[31]=0u+0x00000000u; // 801CEEAC
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEEB0
  cmps(c,0,(int32_t)c->r[3],2); // 801CEEB4
  if (crb(c,2)) { goto L_801CEF04; } // 801CEEB8
  cmps(c,0,(int32_t)c->r[3],1); // 801CEEBC
  if (crb(c,2)) { goto L_801CEF0C; } // 801CEEC0
  goto L_801CEF18; // 801CEEC4
L_801CEEC8:;
  c->r[3]=0u+0x24920000u; // 801CEEC8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CEECC
  c->r[3]=c->r[3]+0x00004925u; // 801CEED0
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 801CEED4
  c->r[3]=c->r[28]-c->r[4]; // 801CEED8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801CEEDC
  c->r[4]=c->r[3]+c->r[4]; // 801CEEE0
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801CEEE4
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801CEEE8
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801CEEEC
  c->r[4]=c->r[28]-c->r[5]; // 801CEEF0
  c->r[0]=c->r[4]+c->r[0]; // 801CEEF4
  c->r[31]=c->r[0]+c->r[3]; // 801CEEF8
  c->r[31]=c->r[31]+0x00000002u; // 801CEEFC
  goto L_801CEF34; // 801CEF00
L_801CEF04:;
  c->r[31]=c->r[0]+c->r[28]; // 801CEF04
  goto L_801CEF34; // 801CEF08
L_801CEF0C:;
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CEF0C
  c->r[31]=c->r[0]+c->r[28]; // 801CEF10
  goto L_801CEF34; // 801CEF14
L_801CEF18:;
  c->r[3]=0u+0x802D0000u; // 801CEF18
  c->r[5]=0u+0x802D0000u; // 801CEF1C
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CEF20
  c->r[4]=0u+0x0000013Eu; // 801CEF24
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CEF28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEF2C
  c->lr=0x801CEF34u; f_801F9770(c); // 801CEF30
L_801CEF34:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CEF34
  c->r[0]=R32(c->r[25]+0x00000014u); // 801CEF38
  if (crb(c,2)) { goto L_801CEF44; } // 801CEF3C
  c->r[27]=c->r[27]+0x80000000u; // 801CEF40
L_801CEF44:;
  cmps(c,0,(int32_t)c->r[0],3); // 801CEF44
  c->r[28]=0u+0x00000000u; // 801CEF48
  if (crb(c,2)) { goto L_801CEF64; } // 801CEF4C
  cmps(c,0,(int32_t)c->r[0],2); // 801CEF50
  if (crb(c,2)) { goto L_801CEFA4; } // 801CEF54
  cmps(c,0,(int32_t)c->r[0],1); // 801CEF58
  if (crb(c,2)) { goto L_801CEFB0; } // 801CEF5C
  goto L_801CEFC0; // 801CEF60
L_801CEF64:;
  c->r[3]=0u+0x24920000u; // 801CEF64
  c->r[6]=c->r[29]+0xFFFFFFFFu; // 801CEF68
  c->r[3]=c->r[3]+0x00004925u; // 801CEF6C
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801CEF70
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 801CEF74
  c->r[3]=c->r[6]-c->r[4]; // 801CEF78
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801CEF7C
  c->r[4]=c->r[3]+c->r[4]; // 801CEF80
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801CEF84
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801CEF88
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801CEF8C
  c->r[4]=c->r[6]-c->r[5]; // 801CEF90
  c->r[0]=c->r[4]+c->r[0]; // 801CEF94
  c->r[28]=c->r[0]+c->r[3]; // 801CEF98
  c->r[28]=c->r[28]+0x00000002u; // 801CEF9C
  goto L_801CEFDC; // 801CEFA0
L_801CEFA4:;
  c->r[28]=c->r[27]+c->r[29]; // 801CEFA4
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801CEFA8
  goto L_801CEFDC; // 801CEFAC
L_801CEFB0:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801CEFB0
  c->r[3]=c->r[29]+c->r[0]; // 801CEFB4
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 801CEFB8
  goto L_801CEFDC; // 801CEFBC
L_801CEFC0:;
  c->r[3]=0u+0x802D0000u; // 801CEFC0
  c->r[5]=0u+0x802D0000u; // 801CEFC4
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CEFC8
  c->r[4]=0u+0x0000013Eu; // 801CEFCC
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CEFD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEFD4
  c->lr=0x801CEFDCu; f_801F9770(c); // 801CEFD8
L_801CEFDC:;
  W16(c->r[1]+0x00000008u,c->r[26]); // 801CEFDC
  c->r[0]=R32(c->r[25]+0x00000014u); // 801CEFE0
  cmps(c,0,(int32_t)c->r[0],3); // 801CEFE4
  if (crb(c,2)) { goto L_801CF000; } // 801CEFE8
  cmps(c,0,(int32_t)c->r[0],2); // 801CEFEC
  if (crb(c,2)) { goto L_801CF008; } // 801CEFF0
  cmps(c,0,(int32_t)c->r[0],1); // 801CEFF4
  if (crb(c,2)) { goto L_801CF010; } // 801CEFF8
  goto L_801CF018; // 801CEFFC
L_801CF000:;
  c->r[5]=0u+0x00000000u; // 801CF000
  goto L_801CF038; // 801CF004
L_801CF008:;
  c->r[5]=0u+0x00000019u; // 801CF008
  goto L_801CF038; // 801CF00C
L_801CF010:;
  c->r[5]=0u+0x0000000Au; // 801CF010
  goto L_801CF038; // 801CF014
L_801CF018:;
  c->r[3]=0u+0x802D0000u; // 801CF018
  c->r[5]=0u+0x802D0000u; // 801CF01C
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CF020
  c->r[4]=0u+0x000001F7u; // 801CF024
  c->r[5]=c->r[5]+0xFFFFCF68u; // 801CF028
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF02C
  c->lr=0x801CF034u; f_801F9770(c); // 801CF030
  c->r[5]=0u+0x00000000u; // 801CF034
L_801CF038:;
  c->r[4]=rotl(c->r[30],16)&0x0000FFFFu; // 801CF038
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801CF03C
  c->r[0]=rotl(c->r[31],16)&0x0000FFFFu; // 801CF040
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801CF044
  W16(c->r[1]+0x0000000Cu,c->r[4]); // 801CF048
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 801CF04C
  W16(c->r[1]+0x00000010u,c->r[3]); // 801CF050
  W16(c->r[1]+0x00000012u,c->r[28]); // 801CF054
  W16(c->r[1]+0x00000014u,c->r[0]); // 801CF058
  W16(c->r[1]+0x00000016u,c->r[31]); // 801CF05C
  c->r[3]=R32(c->r[25]+0x00000000u); // 801CF060
  cmps(c,0,(int32_t)c->r[3],0); // 801CF064
  if (crb(c,2)) { goto L_801CF074; } // 801CF068
  c->r[4]=c->r[1]+0x00000008u; // 801CF06C
  c->lr=0x801CF074u; f_800EF650(c); // 801CF070
L_801CF074:;
  c->r[3]=c->r[24]|c->r[24]; // 801CF074
  c->lr=0x801CF07Cu; f_800CBAE0(c); // 801CF078
L_801CF07C:;
  c->r[11]=c->r[1]+0x00000040u; // 801CF07C
  c->lr=0x801CF084u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF080
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CF084
  c->lr=c->r[0]; // 801CF088
  c->r[1]=c->r[1]+0x00000040u; // 801CF08C
  return; // 801CF090
}

// fn_801CF0A0
void f_801CF0A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF0A0
  c->r[0]=c->lr; // 801CF0A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF0A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CF0AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CF0B0
  c->f[31]=c->f[1]; // 801CF0B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF0B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF0BC
  c->r[30]=c->r[4]|c->r[4]; // 801CF0C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF0C4
  c->r[29]=c->r[3]|c->r[3]; // 801CF0C8
  c->lr=0x801CF0D0u; f_800CBAA0(c); // 801CF0CC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801CF0D0
  c->r[31]=c->r[3]|c->r[3]; // 801CF0D4
  cmps(c,0,(int32_t)c->r[0],0); // 801CF0D8
  if (!crb(c,2)) { goto L_801CF0E8; } // 801CF0DC
  c->lr=0x801CF0E4u; f_800CBAE0(c); // 801CF0E0
  goto L_801CF15C; // 801CF0E4
L_801CF0E8:;
  cmps(c,0,(int32_t)c->r[30],5); // 801CF0E8
  if (!crb(c,2)) { goto L_801CF148; } // 801CF0EC
  c->r[3]=R32(c->r[29]+0x00000018u); // 801CF0F0
  c->r[0]=0u+0x43300000u; // 801CF0F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF0F8
  c->r[0]=c->r[3]^0x80000000u; // 801CF0FC
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[3]=RF64(ea);} // 801CF100
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CF104
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF108
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801CF10C
  {uint32_t ea=c->r[2]+0xFFFF9D4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF110
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CF114
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 801CF118
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801CF11C
  fcmp(c,0,c->f[1],c->f[0]); // 801CF120
  if (!crb(c,1)) { goto L_801CF130; } // 801CF124
  c->r[30]=0u+0x00000002u; // 801CF128
  goto L_801CF148; // 801CF12C
L_801CF130:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF130
  fcmp(c,0,c->f[1],c->f[0]); // 801CF134
  if (!crb(c,1)) { goto L_801CF144; } // 801CF138
  c->r[30]=0u+0x00000003u; // 801CF13C
  goto L_801CF148; // 801CF140
L_801CF144:;
  c->r[30]=0u+0x00000004u; // 801CF144
L_801CF148:;
  c->r[3]=c->r[29]|c->r[29]; // 801CF148
  c->r[4]=c->r[30]|c->r[30]; // 801CF14C
  c->lr=0x801CF154u; f_801D0A20(c); // 801CF150
  c->r[3]=c->r[31]|c->r[31]; // 801CF154
  c->lr=0x801CF15Cu; f_800CBAE0(c); // 801CF158
L_801CF15C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF15C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801CF160
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CF164
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF168
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF16C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF170
  c->lr=c->r[0]; // 801CF174
  c->r[1]=c->r[1]+0x00000030u; // 801CF178
  return; // 801CF17C
}

// fn_801CF180
void f_801CF180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF180
  c->r[0]=c->lr; // 801CF184
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CF188
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801CF18C
  c->r[31]=c->r[3]|c->r[3]; // 801CF190
  W32(c->r[1]+0x00000038u,c->r[30]); // 801CF194
  W32(c->r[1]+0x00000034u,c->r[29]); // 801CF198
  c->r[29]=0u+0x802D0000u; // 801CF19C
  c->r[29]=c->r[29]+0xFFFFCF58u; // 801CF1A0
  W32(c->r[1]+0x00000030u,c->r[28]); // 801CF1A4
  c->r[28]=c->r[4]|c->r[4]; // 801CF1A8
  c->lr=0x801CF1B0u; f_800CBAA0(c); // 801CF1AC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CF1B0
  c->r[30]=c->r[3]|c->r[3]; // 801CF1B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CF1B8
  if (!crb(c,2)) { goto L_801CF1C8; } // 801CF1BC
  c->lr=0x801CF1C4u; f_800CBAE0(c); // 801CF1C0
  goto L_801CF2EC; // 801CF1C4
L_801CF1C8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CF1C8
  cmps(c,0,(int32_t)c->r[0],3); // 801CF1CC
  if (crb(c,2)) { goto L_801CF1E8; } // 801CF1D0
  cmps(c,0,(int32_t)c->r[0],1); // 801CF1D4
  if (crb(c,2)) { goto L_801CF238; } // 801CF1D8
  cmps(c,0,(int32_t)c->r[0],2); // 801CF1DC
  if (crb(c,2)) { goto L_801CF264; } // 801CF1E0
  goto L_801CF290; // 801CF1E4
L_801CF1E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CF1E8
  if (!crb(c,2)) { goto L_801CF204; } // 801CF1EC
  c->r[3]=c->r[29]+0x00000000u; // 801CF1F0
  c->r[5]=c->r[29]+0x00000048u; // 801CF1F4
  c->r[4]=0u+0x00000215u; // 801CF1F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF1FC
  c->lr=0x801CF204u; f_801F9770(c); // 801CF200
L_801CF204:;
  c->r[4]=c->r[28]|c->r[28]; // 801CF204
  c->r[3]=c->r[1]+0x00000008u; // 801CF208
  c->r[5]=0u+0x00000020u; // 801CF20C
  c->lr=0x801CF214u; f_80004364(c); // 801CF210
  c->r[5]=R16(c->r[28]+0x00000020u); // 801CF214
  c->r[4]=R16(c->r[28]+0x00000022u); // 801CF218
  c->r[3]=R16(c->r[28]+0x00000024u); // 801CF21C
  c->r[0]=R16(c->r[28]+0x00000026u); // 801CF220
  W16(c->r[1]+0x00000028u,c->r[5]); // 801CF224
  W16(c->r[1]+0x0000002Au,c->r[4]); // 801CF228
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801CF22C
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801CF230
  goto L_801CF2A4; // 801CF234
L_801CF238:;
  c->r[3]=c->r[1]+0x00000008u; // 801CF238
  c->r[4]=0u+0x00000000u; // 801CF23C
  c->r[5]=0u+0x00000020u; // 801CF240
  c->lr=0x801CF248u; f_800046B4(c); // 801CF244
  c->r[0]=0u+0x00000000u; // 801CF248
  c->r[3]=0u+0x00000800u; // 801CF24C
  W16(c->r[1]+0x00000028u,c->r[3]); // 801CF250
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801CF254
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801CF258
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801CF25C
  goto L_801CF2A4; // 801CF260
L_801CF264:;
  c->r[3]=c->r[1]+0x00000008u; // 801CF264
  c->r[4]=0u+0x00000000u; // 801CF268
  c->r[5]=0u+0x00000020u; // 801CF26C
  c->lr=0x801CF274u; f_800046B4(c); // 801CF270
  c->r[0]=0u+0x00000000u; // 801CF274
  c->r[3]=0u+0x00000100u; // 801CF278
  W16(c->r[1]+0x00000028u,c->r[3]); // 801CF27C
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801CF280
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801CF284
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801CF288
  goto L_801CF2A4; // 801CF28C
L_801CF290:;
  c->r[3]=c->r[29]+0x00000000u; // 801CF290
  c->r[5]=c->r[29]+0x00000010u; // 801CF294
  c->r[4]=0u+0x0000022Bu; // 801CF298
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF29C
  c->lr=0x801CF2A4u; f_801F9770(c); // 801CF2A0
L_801CF2A4:;
  c->lr=0x801CF2A8u; f_800CBAA0(c); // 801CF2A4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CF2A8
  c->r[29]=c->r[3]|c->r[3]; // 801CF2AC
  cmps(c,0,(int32_t)c->r[4],0); // 801CF2B0
  if (!crb(c,2)) { goto L_801CF2C0; } // 801CF2B4
  c->lr=0x801CF2BCu; f_800CBAE0(c); // 801CF2B8
  goto L_801CF2E4; // 801CF2BC
L_801CF2C0:;
  c->r[3]=c->r[4]+0x000000A6u; // 801CF2C0
  c->r[4]=c->r[1]+0x00000008u; // 801CF2C4
  c->r[5]=0u+0x00000028u; // 801CF2C8
  c->lr=0x801CF2D0u; f_80004364(c); // 801CF2CC
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CF2D0
  c->r[3]=c->r[29]|c->r[29]; // 801CF2D4
  c->r[0]=c->r[0]|0x00008000u; // 801CF2D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CF2DC
  c->lr=0x801CF2E4u; f_800CBAE0(c); // 801CF2E0
L_801CF2E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801CF2E4
  c->lr=0x801CF2ECu; f_800CBAE0(c); // 801CF2E8
L_801CF2EC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CF2EC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801CF2F0
  c->r[30]=R32(c->r[1]+0x00000038u); // 801CF2F4
  c->r[29]=R32(c->r[1]+0x00000034u); // 801CF2F8
  c->r[28]=R32(c->r[1]+0x00000030u); // 801CF2FC
  c->lr=c->r[0]; // 801CF300
  c->r[1]=c->r[1]+0x00000040u; // 801CF304
  return; // 801CF308
}

// fn_801CF310
void f_801CF310(Ctx* __restrict c) {
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 801CF310
  c->r[0]=R16(c->r[4]+0x00000000u); // 801CF314
  cmpu(c,0,c->r[5],c->r[0]); // 801CF318
  if (crb(c,2)) { goto L_801CF328; } // 801CF31C
  c->r[3]=0u+0x00000001u; // 801CF320
  return; // 801CF324
L_801CF328:;
  c->r[5]=R16(c->r[3]+0x00000020u); // 801CF328
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CF32C
  cmpu(c,0,c->r[5],c->r[0]); // 801CF330
  if (crb(c,2)) { goto L_801CF340; } // 801CF334
  c->r[3]=0u+0x00000001u; // 801CF338
  return; // 801CF33C
L_801CF340:;
  c->r[5]=R16(c->r[3]+0x00000022u); // 801CF340
  c->r[0]=R16(c->r[4]+0x00000004u); // 801CF344
  cmpu(c,0,c->r[5],c->r[0]); // 801CF348
  if (crb(c,2)) { goto L_801CF358; } // 801CF34C
  c->r[3]=0u+0x00000001u; // 801CF350
  return; // 801CF354
L_801CF358:;
  c->r[5]=R16(c->r[3]+0x00000024u); // 801CF358
  c->r[0]=R16(c->r[4]+0x00000006u); // 801CF35C
  cmpu(c,0,c->r[5],c->r[0]); // 801CF360
  if (crb(c,2)) { goto L_801CF370; } // 801CF364
  c->r[3]=0u+0x00000001u; // 801CF368
  return; // 801CF36C
L_801CF370:;
  c->r[5]=R16(c->r[3]+0x00000026u); // 801CF370
  c->r[0]=R16(c->r[4]+0x00000008u); // 801CF374
  cmpu(c,0,c->r[5],c->r[0]); // 801CF378
  if (crb(c,2)) { goto L_801CF388; } // 801CF37C
  c->r[3]=0u+0x00000001u; // 801CF380
  return; // 801CF384
L_801CF388:;
  c->r[5]=R16(c->r[3]+0x00000028u); // 801CF388
  c->r[0]=R16(c->r[4]+0x0000000Au); // 801CF38C
  cmpu(c,0,c->r[5],c->r[0]); // 801CF390
  if (crb(c,2)) { goto L_801CF3A0; } // 801CF394
  c->r[3]=0u+0x00000001u; // 801CF398
  return; // 801CF39C
L_801CF3A0:;
  c->r[5]=R16(c->r[3]+0x0000002Au); // 801CF3A0
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801CF3A4
  cmpu(c,0,c->r[5],c->r[0]); // 801CF3A8
  if (crb(c,2)) { goto L_801CF3B8; } // 801CF3AC
  c->r[3]=0u+0x00000001u; // 801CF3B0
  return; // 801CF3B4
L_801CF3B8:;
  c->r[5]=R16(c->r[3]+0x0000002Cu); // 801CF3B8
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801CF3BC
  cmpu(c,0,c->r[5],c->r[0]); // 801CF3C0
  if (crb(c,2)) { goto L_801CF3D0; } // 801CF3C4
  c->r[3]=0u+0x00000001u; // 801CF3C8
  return; // 801CF3CC
L_801CF3D0:;
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 801CF3D0
  c->r[0]=R16(c->r[4]+0x00000010u); // 801CF3D4
  cmpu(c,0,c->r[5],c->r[0]); // 801CF3D8
  if (crb(c,2)) { goto L_801CF3E8; } // 801CF3DC
  c->r[3]=0u+0x00000001u; // 801CF3E0
  return; // 801CF3E4
L_801CF3E8:;
  c->r[5]=R16(c->r[3]+0x00000030u); // 801CF3E8
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF3EC
  cmpu(c,0,c->r[5],c->r[0]); // 801CF3F0
  if (crb(c,2)) { goto L_801CF400; } // 801CF3F4
  c->r[3]=0u+0x00000001u; // 801CF3F8
  return; // 801CF3FC
L_801CF400:;
  c->r[5]=R16(c->r[3]+0x00000032u); // 801CF400
  c->r[0]=R16(c->r[4]+0x00000014u); // 801CF404
  cmpu(c,0,c->r[5],c->r[0]); // 801CF408
  if (crb(c,2)) { goto L_801CF418; } // 801CF40C
  c->r[3]=0u+0x00000001u; // 801CF410
  return; // 801CF414
L_801CF418:;
  c->r[5]=R16(c->r[3]+0x00000034u); // 801CF418
  c->r[0]=R16(c->r[4]+0x00000016u); // 801CF41C
  c->r[3]=c->r[0]-c->r[5]; // 801CF420
  c->r[0]=c->r[5]-c->r[0]; // 801CF424
  c->r[0]=c->r[3]|c->r[0]; // 801CF428
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF42C
  return; // 801CF430
}

// fn_801CF440
void f_801CF440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF440
  c->r[0]=c->lr; // 801CF444
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF448
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF44C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF450
  c->r[30]=c->r[4]|c->r[4]; // 801CF454
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF458
  c->r[29]=c->r[3]|c->r[3]; // 801CF45C
  c->lr=0x801CF464u; f_800CBAA0(c); // 801CF460
  c->r[0]=R32(c->r[29]+0x00000000u); // 801CF464
  c->r[31]=c->r[3]|c->r[3]; // 801CF468
  cmps(c,0,(int32_t)c->r[0],0); // 801CF46C
  if (!crb(c,2)) { goto L_801CF47C; } // 801CF470
  c->lr=0x801CF478u; f_800CBAE0(c); // 801CF474
  goto L_801CF520; // 801CF478
L_801CF47C:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801CF47C
  cmps(c,0,(int32_t)c->r[0],3); // 801CF480
  if (!crb(c,2)) { goto L_801CF4C8; } // 801CF484
  cmps(c,0,(int32_t)c->r[30],0); // 801CF488
  if (!crb(c,2)) { goto L_801CF4AC; } // 801CF48C
  c->r[3]=0u+0x802D0000u; // 801CF490
  c->r[5]=0u+0x802D0000u; // 801CF494
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801CF498
  c->r[4]=0u+0x0000024Bu; // 801CF49C
  c->r[5]=c->r[5]+0xFFFFCFA0u; // 801CF4A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF4A4
  c->lr=0x801CF4ACu; f_801F9770(c); // 801CF4A8
L_801CF4AC:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 801CF4AC
  c->r[3]=R16(c->r[30]+0x00000002u); // 801CF4B0
  c->r[0]=R16(c->r[30]+0x00000004u); // 801CF4B4
  W16(c->r[1]+0x00000008u,c->r[4]); // 801CF4B8
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801CF4BC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801CF4C0
  goto L_801CF4D8; // 801CF4C4
L_801CF4C8:;
  c->r[0]=0u+0x00000000u; // 801CF4C8
  W16(c->r[1]+0x00000008u,c->r[0]); // 801CF4CC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801CF4D0
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801CF4D4
L_801CF4D8:;
  c->lr=0x801CF4DCu; f_800CBAA0(c); // 801CF4D8
  c->r[4]=R32(c->r[29]+0x00000000u); // 801CF4DC
  c->r[30]=c->r[3]|c->r[3]; // 801CF4E0
  cmps(c,0,(int32_t)c->r[4],0); // 801CF4E4
  if (!crb(c,2)) { goto L_801CF4F4; } // 801CF4E8
  c->lr=0x801CF4F0u; f_800CBAE0(c); // 801CF4EC
  goto L_801CF518; // 801CF4F0
L_801CF4F4:;
  c->r[3]=c->r[4]+0x000000DCu; // 801CF4F4
  c->r[4]=c->r[1]+0x00000008u; // 801CF4F8
  c->r[5]=0u+0x00000006u; // 801CF4FC
  c->lr=0x801CF504u; f_80004364(c); // 801CF500
  c->r[0]=R32(c->r[29]+0x00000004u); // 801CF504
  c->r[3]=c->r[30]|c->r[30]; // 801CF508
  c->r[0]=c->r[0]|0x00040000u; // 801CF50C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801CF510
  c->lr=0x801CF518u; f_800CBAE0(c); // 801CF514
L_801CF518:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF518
  c->lr=0x801CF520u; f_800CBAE0(c); // 801CF51C
L_801CF520:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF524
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF528
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF52C
  c->lr=c->r[0]; // 801CF530
  c->r[1]=c->r[1]+0x00000020u; // 801CF534
  return; // 801CF538
}

// fn_801CF540
void f_801CF540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF540
  c->r[0]=c->lr; // 801CF544
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CF548
  c->r[11]=c->r[1]+0x00000080u; // 801CF54C
  c->lr=0x801CF554u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF550
  c->r[17]=c->r[3]|c->r[3]; // 801CF554
  c->r[18]=c->r[4]|c->r[4]; // 801CF558
  c->lr=0x801CF560u; f_800CBAA0(c); // 801CF55C
  c->r[4]=R32(c->r[17]+0x00000000u); // 801CF560
  c->r[16]=c->r[3]|c->r[3]; // 801CF564
  cmps(c,1,(int32_t)c->r[4],0); // 801CF568
  if (!crb(c,6)) { goto L_801CF57C; } // 801CF56C
  c->lr=0x801CF574u; f_800CBAE0(c); // 801CF570
  c->r[3]=0u+0x00000000u; // 801CF574
  goto L_801CFB48; // 801CF578
L_801CF57C:;
  c->r[0]=R8(c->r[17]+0x0000001Cu); // 801CF57C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF580
  if (!crb(c,2)) { goto L_801CF5A8; } // 801CF584
  c->r[3]=0u+0x00000000u; // 801CF588
  if (crb(c,6)) { goto L_801CF5A0; } // 801CF58C
  c->r[0]=R16(c->r[4]+0x00000038u); // 801CF590
  cmpu(c,0,c->r[0],0x00000001u); // 801CF594
  if (!crb(c,2)) { goto L_801CF5A0; } // 801CF598
  c->r[3]=0u+0x00000001u; // 801CF59C
L_801CF5A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CF5A0
  if (!crb(c,2)) { goto L_801CF610; } // 801CF5A4
L_801CF5A8:;
  c->r[20]=R16(c->r[18]+0x00000000u); // 801CF5A8
  c->r[0]=0u+0x00000000u; // 801CF5AC
  c->r[19]=R16(c->r[18]+0x00000002u); // 801CF5B0
  c->r[12]=R16(c->r[18]+0x00000004u); // 801CF5B4
  c->r[11]=R16(c->r[18]+0x00000006u); // 801CF5B8
  c->r[10]=R16(c->r[18]+0x00000008u); // 801CF5BC
  c->r[9]=R16(c->r[18]+0x0000000Au); // 801CF5C0
  c->r[8]=R16(c->r[18]+0x0000000Cu); // 801CF5C4
  c->r[7]=R16(c->r[18]+0x0000000Eu); // 801CF5C8
  c->r[6]=R16(c->r[18]+0x00000010u); // 801CF5CC
  c->r[5]=R16(c->r[18]+0x00000012u); // 801CF5D0
  c->r[4]=R16(c->r[18]+0x00000014u); // 801CF5D4
  c->r[3]=R16(c->r[18]+0x00000016u); // 801CF5D8
  W16(c->r[17]+0x0000001Eu,c->r[20]); // 801CF5DC
  W16(c->r[17]+0x00000020u,c->r[19]); // 801CF5E0
  W16(c->r[17]+0x00000022u,c->r[12]); // 801CF5E4
  W16(c->r[17]+0x00000024u,c->r[11]); // 801CF5E8
  W16(c->r[17]+0x00000026u,c->r[10]); // 801CF5EC
  W16(c->r[17]+0x00000028u,c->r[9]); // 801CF5F0
  W16(c->r[17]+0x0000002Au,c->r[8]); // 801CF5F4
  W16(c->r[17]+0x0000002Cu,c->r[7]); // 801CF5F8
  W16(c->r[17]+0x0000002Eu,c->r[6]); // 801CF5FC
  W16(c->r[17]+0x00000030u,c->r[5]); // 801CF600
  W16(c->r[17]+0x00000032u,c->r[4]); // 801CF604
  W16(c->r[17]+0x00000034u,c->r[3]); // 801CF608
  W8(c->r[17]+0x0000001Cu,c->r[0]); // 801CF60C
L_801CF610:;
  c->r[3]=c->r[17]|c->r[17]; // 801CF610
  c->r[4]=c->r[18]|c->r[18]; // 801CF614
  c->lr=0x801CF61Cu; f_801CF310(c); // 801CF618
  c->r[4]=R16(c->r[17]+0x0000001Eu); // 801CF61C
  c->r[19]=c->r[3]|c->r[3]; // 801CF620
  W16(c->r[1]+0x00000008u,c->r[4]); // 801CF624
  c->r[5]=R16(c->r[18]+0x00000000u); // 801CF628
  c->r[0]=R16(c->r[17]+0x00000020u); // 801CF62C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801CF630
  cmpu(c,0,c->r[4],c->r[5]); // 801CF634
  c->r[0]=R16(c->r[17]+0x00000022u); // 801CF638
  W16(c->r[1]+0x00000028u,c->r[0]); // 801CF63C
  c->r[0]=R16(c->r[17]+0x00000024u); // 801CF640
  W16(c->r[1]+0x00000010u,c->r[0]); // 801CF644
  c->r[0]=R16(c->r[17]+0x00000026u); // 801CF648
  W16(c->r[1]+0x00000014u,c->r[0]); // 801CF64C
  c->r[0]=R16(c->r[17]+0x00000028u); // 801CF650
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801CF654
  c->r[0]=R16(c->r[17]+0x0000002Au); // 801CF658
  W16(c->r[1]+0x00000018u,c->r[0]); // 801CF65C
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 801CF660
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801CF664
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 801CF668
  W16(c->r[1]+0x00000030u,c->r[0]); // 801CF66C
  c->r[0]=R16(c->r[17]+0x00000030u); // 801CF670
  W16(c->r[1]+0x00000020u,c->r[0]); // 801CF674
  c->r[0]=R16(c->r[17]+0x00000032u); // 801CF678
  W16(c->r[1]+0x00000024u,c->r[0]); // 801CF67C
  c->r[0]=R16(c->r[17]+0x00000034u); // 801CF680
  W16(c->r[1]+0x00000034u,c->r[0]); // 801CF684
  if (!crb(c,2)) { goto L_801CF694; } // 801CF688
  c->r[31]=0u+0x00000000u; // 801CF68C
  goto L_801CF6B0; // 801CF690
L_801CF694:;
  c->r[3]=0u+0x2AAB0000u; // 801CF694
  c->r[0]=c->r[5]-c->r[4]; // 801CF698
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF69C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF6A0
  c->r[0]=sraw(c,c->r[0],4); // 801CF6A4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF6A8
  c->r[31]=c->r[0]+c->r[3]; // 801CF6AC
L_801CF6B0:;
  c->r[4]=R16(c->r[18]+0x00000002u); // 801CF6B0
  c->r[0]=R16(c->r[17]+0x00000020u); // 801CF6B4
  cmpu(c,0,c->r[0],c->r[4]); // 801CF6B8
  if (!crb(c,2)) { goto L_801CF6C8; } // 801CF6BC
  c->r[30]=0u+0x00000000u; // 801CF6C0
  goto L_801CF6E4; // 801CF6C4
L_801CF6C8:;
  c->r[3]=0u+0x2AAB0000u; // 801CF6C8
  c->r[0]=c->r[4]-c->r[0]; // 801CF6CC
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF6D0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF6D4
  c->r[0]=sraw(c,c->r[0],4); // 801CF6D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF6DC
  c->r[30]=c->r[0]+c->r[3]; // 801CF6E0
L_801CF6E4:;
  c->r[4]=R16(c->r[18]+0x00000004u); // 801CF6E4
  c->r[0]=R16(c->r[17]+0x00000022u); // 801CF6E8
  cmpu(c,0,c->r[0],c->r[4]); // 801CF6EC
  if (!crb(c,2)) { goto L_801CF6FC; } // 801CF6F0
  c->r[29]=0u+0x00000000u; // 801CF6F4
  goto L_801CF718; // 801CF6F8
L_801CF6FC:;
  c->r[3]=0u+0x2AAB0000u; // 801CF6FC
  c->r[0]=c->r[4]-c->r[0]; // 801CF700
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF704
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF708
  c->r[0]=sraw(c,c->r[0],4); // 801CF70C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF710
  c->r[29]=c->r[0]+c->r[3]; // 801CF714
L_801CF718:;
  c->r[4]=R16(c->r[18]+0x00000006u); // 801CF718
  c->r[0]=R16(c->r[17]+0x00000024u); // 801CF71C
  cmpu(c,0,c->r[0],c->r[4]); // 801CF720
  if (!crb(c,2)) { goto L_801CF730; } // 801CF724
  c->r[28]=0u+0x00000000u; // 801CF728
  goto L_801CF74C; // 801CF72C
L_801CF730:;
  c->r[3]=0u+0x2AAB0000u; // 801CF730
  c->r[0]=c->r[4]-c->r[0]; // 801CF734
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF738
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF73C
  c->r[0]=sraw(c,c->r[0],4); // 801CF740
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF744
  c->r[28]=c->r[0]+c->r[3]; // 801CF748
L_801CF74C:;
  c->r[4]=R16(c->r[18]+0x00000008u); // 801CF74C
  c->r[0]=R16(c->r[17]+0x00000026u); // 801CF750
  cmpu(c,0,c->r[0],c->r[4]); // 801CF754
  if (!crb(c,2)) { goto L_801CF764; } // 801CF758
  c->r[27]=0u+0x00000000u; // 801CF75C
  goto L_801CF780; // 801CF760
L_801CF764:;
  c->r[3]=0u+0x2AAB0000u; // 801CF764
  c->r[0]=c->r[4]-c->r[0]; // 801CF768
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF76C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF770
  c->r[0]=sraw(c,c->r[0],4); // 801CF774
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF778
  c->r[27]=c->r[0]+c->r[3]; // 801CF77C
L_801CF780:;
  c->r[4]=R16(c->r[18]+0x0000000Au); // 801CF780
  c->r[0]=R16(c->r[17]+0x00000028u); // 801CF784
  cmpu(c,0,c->r[0],c->r[4]); // 801CF788
  if (!crb(c,2)) { goto L_801CF798; } // 801CF78C
  c->r[26]=0u+0x00000000u; // 801CF790
  goto L_801CF7B4; // 801CF794
L_801CF798:;
  c->r[3]=0u+0x2AAB0000u; // 801CF798
  c->r[0]=c->r[4]-c->r[0]; // 801CF79C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF7A0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF7A4
  c->r[0]=sraw(c,c->r[0],4); // 801CF7A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF7AC
  c->r[26]=c->r[0]+c->r[3]; // 801CF7B0
L_801CF7B4:;
  c->r[4]=R16(c->r[18]+0x0000000Cu); // 801CF7B4
  c->r[0]=R16(c->r[17]+0x0000002Au); // 801CF7B8
  cmpu(c,0,c->r[0],c->r[4]); // 801CF7BC
  if (!crb(c,2)) { goto L_801CF7CC; } // 801CF7C0
  c->r[25]=0u+0x00000000u; // 801CF7C4
  goto L_801CF7E8; // 801CF7C8
L_801CF7CC:;
  c->r[3]=0u+0x2AAB0000u; // 801CF7CC
  c->r[0]=c->r[4]-c->r[0]; // 801CF7D0
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF7D4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF7D8
  c->r[0]=sraw(c,c->r[0],4); // 801CF7DC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF7E0
  c->r[25]=c->r[0]+c->r[3]; // 801CF7E4
L_801CF7E8:;
  c->r[4]=R16(c->r[18]+0x0000000Eu); // 801CF7E8
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 801CF7EC
  cmpu(c,0,c->r[0],c->r[4]); // 801CF7F0
  if (!crb(c,2)) { goto L_801CF800; } // 801CF7F4
  c->r[24]=0u+0x00000000u; // 801CF7F8
  goto L_801CF81C; // 801CF7FC
L_801CF800:;
  c->r[3]=0u+0x2AAB0000u; // 801CF800
  c->r[0]=c->r[4]-c->r[0]; // 801CF804
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF808
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF80C
  c->r[0]=sraw(c,c->r[0],4); // 801CF810
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF814
  c->r[24]=c->r[0]+c->r[3]; // 801CF818
L_801CF81C:;
  c->r[4]=R16(c->r[18]+0x00000010u); // 801CF81C
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 801CF820
  cmpu(c,0,c->r[0],c->r[4]); // 801CF824
  if (!crb(c,2)) { goto L_801CF834; } // 801CF828
  c->r[23]=0u+0x00000000u; // 801CF82C
  goto L_801CF850; // 801CF830
L_801CF834:;
  c->r[3]=0u+0x2AAB0000u; // 801CF834
  c->r[0]=c->r[4]-c->r[0]; // 801CF838
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF83C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF840
  c->r[0]=sraw(c,c->r[0],4); // 801CF844
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF848
  c->r[23]=c->r[0]+c->r[3]; // 801CF84C
L_801CF850:;
  c->r[4]=R16(c->r[18]+0x00000012u); // 801CF850
  c->r[0]=R16(c->r[17]+0x00000030u); // 801CF854
  cmpu(c,0,c->r[0],c->r[4]); // 801CF858
  if (!crb(c,2)) { goto L_801CF868; } // 801CF85C
  c->r[22]=0u+0x00000000u; // 801CF860
  goto L_801CF884; // 801CF864
L_801CF868:;
  c->r[3]=0u+0x2AAB0000u; // 801CF868
  c->r[0]=c->r[4]-c->r[0]; // 801CF86C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF870
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF874
  c->r[0]=sraw(c,c->r[0],4); // 801CF878
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF87C
  c->r[22]=c->r[0]+c->r[3]; // 801CF880
L_801CF884:;
  c->r[4]=R16(c->r[18]+0x00000014u); // 801CF884
  c->r[0]=R16(c->r[17]+0x00000032u); // 801CF888
  cmpu(c,0,c->r[0],c->r[4]); // 801CF88C
  if (!crb(c,2)) { goto L_801CF89C; } // 801CF890
  c->r[21]=0u+0x00000000u; // 801CF894
  goto L_801CF8B8; // 801CF898
L_801CF89C:;
  c->r[3]=0u+0x2AAB0000u; // 801CF89C
  c->r[0]=c->r[4]-c->r[0]; // 801CF8A0
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF8A4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF8A8
  c->r[0]=sraw(c,c->r[0],4); // 801CF8AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF8B0
  c->r[21]=c->r[0]+c->r[3]; // 801CF8B4
L_801CF8B8:;
  c->r[4]=R16(c->r[18]+0x00000016u); // 801CF8B8
  c->r[0]=R16(c->r[17]+0x00000034u); // 801CF8BC
  cmpu(c,0,c->r[0],c->r[4]); // 801CF8C0
  if (!crb(c,2)) { goto L_801CF8D0; } // 801CF8C4
  c->r[20]=0u+0x00000000u; // 801CF8C8
  goto L_801CF8EC; // 801CF8CC
L_801CF8D0:;
  c->r[3]=0u+0x2AAB0000u; // 801CF8D0
  c->r[0]=c->r[4]-c->r[0]; // 801CF8D4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801CF8D8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CF8DC
  c->r[0]=sraw(c,c->r[0],4); // 801CF8E0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CF8E4
  c->r[20]=c->r[0]+c->r[3]; // 801CF8E8
L_801CF8EC:;
  W16(c->r[1]+0x0000000Au,c->r[31]); // 801CF8EC
  c->r[3]=c->r[17]|c->r[17]; // 801CF8F0
  c->r[4]=c->r[1]+0x00000008u; // 801CF8F4
  c->r[5]=0u+0x00000000u; // 801CF8F8
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 801CF8FC
  W16(c->r[1]+0x0000002Au,c->r[29]); // 801CF900
  W16(c->r[1]+0x00000012u,c->r[28]); // 801CF904
  W16(c->r[1]+0x00000016u,c->r[27]); // 801CF908
  W16(c->r[1]+0x0000002Eu,c->r[26]); // 801CF90C
  W16(c->r[1]+0x0000001Au,c->r[25]); // 801CF910
  W16(c->r[1]+0x0000001Eu,c->r[24]); // 801CF914
  W16(c->r[1]+0x00000032u,c->r[23]); // 801CF918
  W16(c->r[1]+0x00000022u,c->r[22]); // 801CF91C
  W16(c->r[1]+0x00000026u,c->r[21]); // 801CF920
  W16(c->r[1]+0x00000036u,c->r[20]); // 801CF924
  c->lr=0x801CF92Cu; f_801D07A0(c); // 801CF928
  c->r[0]=R16(c->r[18]+0x00000000u); // 801CF92C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF930
  if (crb(c,2)) { goto L_801CF940; } // 801CF934
  cmps(c,0,(int32_t)c->r[31],0); // 801CF938
  if (!crb(c,2)) { goto L_801CF948; } // 801CF93C
L_801CF940:;
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 801CF940
  goto L_801CF958; // 801CF944
L_801CF948:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 801CF948
  c->r[3]=R16(c->r[17]+0x0000001Eu); // 801CF94C
  c->r[0]=c->r[3]+c->r[0]; // 801CF950
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 801CF954
L_801CF958:;
  c->r[0]=R16(c->r[18]+0x00000002u); // 801CF958
  cmps(c,0,(int32_t)c->r[0],0); // 801CF95C
  if (crb(c,2)) { goto L_801CF96C; } // 801CF960
  cmps(c,0,(int32_t)c->r[30],0); // 801CF964
  if (!crb(c,2)) { goto L_801CF974; } // 801CF968
L_801CF96C:;
  W16(c->r[17]+0x00000020u,c->r[0]); // 801CF96C
  goto L_801CF984; // 801CF970
L_801CF974:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 801CF974
  c->r[3]=R16(c->r[17]+0x00000020u); // 801CF978
  c->r[0]=c->r[3]+c->r[0]; // 801CF97C
  W16(c->r[17]+0x00000020u,c->r[0]); // 801CF980
L_801CF984:;
  c->r[0]=R16(c->r[18]+0x00000004u); // 801CF984
  cmps(c,0,(int32_t)c->r[0],0); // 801CF988
  if (crb(c,2)) { goto L_801CF998; } // 801CF98C
  cmps(c,0,(int32_t)c->r[29],0); // 801CF990
  if (!crb(c,2)) { goto L_801CF9A0; } // 801CF994
L_801CF998:;
  W16(c->r[17]+0x00000022u,c->r[0]); // 801CF998
  goto L_801CF9B0; // 801CF99C
L_801CF9A0:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)96); // 801CF9A0
  c->r[3]=R16(c->r[17]+0x00000022u); // 801CF9A4
  c->r[0]=c->r[3]+c->r[0]; // 801CF9A8
  W16(c->r[17]+0x00000022u,c->r[0]); // 801CF9AC
L_801CF9B0:;
  c->r[0]=R16(c->r[18]+0x00000006u); // 801CF9B0
  cmps(c,0,(int32_t)c->r[0],0); // 801CF9B4
  if (crb(c,2)) { goto L_801CF9C4; } // 801CF9B8
  cmps(c,0,(int32_t)c->r[28],0); // 801CF9BC
  if (!crb(c,2)) { goto L_801CF9CC; } // 801CF9C0
L_801CF9C4:;
  W16(c->r[17]+0x00000024u,c->r[0]); // 801CF9C4
  goto L_801CF9DC; // 801CF9C8
L_801CF9CC:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)96); // 801CF9CC
  c->r[3]=R16(c->r[17]+0x00000024u); // 801CF9D0
  c->r[0]=c->r[3]+c->r[0]; // 801CF9D4
  W16(c->r[17]+0x00000024u,c->r[0]); // 801CF9D8
L_801CF9DC:;
  c->r[0]=R16(c->r[18]+0x00000008u); // 801CF9DC
  cmps(c,0,(int32_t)c->r[0],0); // 801CF9E0
  if (crb(c,2)) { goto L_801CF9F0; } // 801CF9E4
  cmps(c,0,(int32_t)c->r[27],0); // 801CF9E8
  if (!crb(c,2)) { goto L_801CF9F8; } // 801CF9EC
L_801CF9F0:;
  W16(c->r[17]+0x00000026u,c->r[0]); // 801CF9F0
  goto L_801CFA08; // 801CF9F4
L_801CF9F8:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 801CF9F8
  c->r[3]=R16(c->r[17]+0x00000026u); // 801CF9FC
  c->r[0]=c->r[3]+c->r[0]; // 801CFA00
  W16(c->r[17]+0x00000026u,c->r[0]); // 801CFA04
L_801CFA08:;
  c->r[0]=R16(c->r[18]+0x0000000Au); // 801CFA08
  cmps(c,0,(int32_t)c->r[0],0); // 801CFA0C
  if (crb(c,2)) { goto L_801CFA1C; } // 801CFA10
  cmps(c,0,(int32_t)c->r[26],0); // 801CFA14
  if (!crb(c,2)) { goto L_801CFA24; } // 801CFA18
L_801CFA1C:;
  W16(c->r[17]+0x00000028u,c->r[0]); // 801CFA1C
  goto L_801CFA34; // 801CFA20
L_801CFA24:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 801CFA24
  c->r[3]=R16(c->r[17]+0x00000028u); // 801CFA28
  c->r[0]=c->r[3]+c->r[0]; // 801CFA2C
  W16(c->r[17]+0x00000028u,c->r[0]); // 801CFA30
L_801CFA34:;
  c->r[0]=R16(c->r[18]+0x0000000Cu); // 801CFA34
  cmps(c,0,(int32_t)c->r[0],0); // 801CFA38
  if (crb(c,2)) { goto L_801CFA48; } // 801CFA3C
  cmps(c,0,(int32_t)c->r[25],0); // 801CFA40
  if (!crb(c,2)) { goto L_801CFA50; } // 801CFA44
L_801CFA48:;
  W16(c->r[17]+0x0000002Au,c->r[0]); // 801CFA48
  goto L_801CFA60; // 801CFA4C
L_801CFA50:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)96); // 801CFA50
  c->r[3]=R16(c->r[17]+0x0000002Au); // 801CFA54
  c->r[0]=c->r[3]+c->r[0]; // 801CFA58
  W16(c->r[17]+0x0000002Au,c->r[0]); // 801CFA5C
L_801CFA60:;
  c->r[0]=R16(c->r[18]+0x0000000Eu); // 801CFA60
  cmps(c,0,(int32_t)c->r[0],0); // 801CFA64
  if (crb(c,2)) { goto L_801CFA74; } // 801CFA68
  cmps(c,0,(int32_t)c->r[24],0); // 801CFA6C
  if (!crb(c,2)) { goto L_801CFA7C; } // 801CFA70
L_801CFA74:;
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 801CFA74
  goto L_801CFA8C; // 801CFA78
L_801CFA7C:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)96); // 801CFA7C
  c->r[3]=R16(c->r[17]+0x0000002Cu); // 801CFA80
  c->r[0]=c->r[3]+c->r[0]; // 801CFA84
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 801CFA88
L_801CFA8C:;
  c->r[0]=R16(c->r[18]+0x00000010u); // 801CFA8C
  cmps(c,0,(int32_t)c->r[0],0); // 801CFA90
  if (crb(c,2)) { goto L_801CFAA0; } // 801CFA94
  cmps(c,0,(int32_t)c->r[23],0); // 801CFA98
  if (!crb(c,2)) { goto L_801CFAA8; } // 801CFA9C
L_801CFAA0:;
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 801CFAA0
  goto L_801CFAB8; // 801CFAA4
L_801CFAA8:;
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)96); // 801CFAA8
  c->r[3]=R16(c->r[17]+0x0000002Eu); // 801CFAAC
  c->r[0]=c->r[3]+c->r[0]; // 801CFAB0
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 801CFAB4
L_801CFAB8:;
  c->r[0]=R16(c->r[18]+0x00000012u); // 801CFAB8
  cmps(c,0,(int32_t)c->r[0],0); // 801CFABC
  if (crb(c,2)) { goto L_801CFACC; } // 801CFAC0
  cmps(c,0,(int32_t)c->r[22],0); // 801CFAC4
  if (!crb(c,2)) { goto L_801CFAD4; } // 801CFAC8
L_801CFACC:;
  W16(c->r[17]+0x00000030u,c->r[0]); // 801CFACC
  goto L_801CFAE4; // 801CFAD0
L_801CFAD4:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)96); // 801CFAD4
  c->r[3]=R16(c->r[17]+0x00000030u); // 801CFAD8
  c->r[0]=c->r[3]+c->r[0]; // 801CFADC
  W16(c->r[17]+0x00000030u,c->r[0]); // 801CFAE0
L_801CFAE4:;
  c->r[0]=R16(c->r[18]+0x00000014u); // 801CFAE4
  cmps(c,0,(int32_t)c->r[0],0); // 801CFAE8
  if (crb(c,2)) { goto L_801CFAF8; } // 801CFAEC
  cmps(c,0,(int32_t)c->r[21],0); // 801CFAF0
  if (!crb(c,2)) { goto L_801CFB00; } // 801CFAF4
L_801CFAF8:;
  W16(c->r[17]+0x00000032u,c->r[0]); // 801CFAF8
  goto L_801CFB10; // 801CFAFC
L_801CFB00:;
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)96); // 801CFB00
  c->r[3]=R16(c->r[17]+0x00000032u); // 801CFB04
  c->r[0]=c->r[3]+c->r[0]; // 801CFB08
  W16(c->r[17]+0x00000032u,c->r[0]); // 801CFB0C
L_801CFB10:;
  c->r[0]=R16(c->r[18]+0x00000016u); // 801CFB10
  cmps(c,0,(int32_t)c->r[0],0); // 801CFB14
  if (crb(c,2)) { goto L_801CFB24; } // 801CFB18
  cmps(c,0,(int32_t)c->r[20],0); // 801CFB1C
  if (!crb(c,2)) { goto L_801CFB2C; } // 801CFB20
L_801CFB24:;
  W16(c->r[17]+0x00000034u,c->r[0]); // 801CFB24
  goto L_801CFB3C; // 801CFB28
L_801CFB2C:;
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)96); // 801CFB2C
  c->r[3]=R16(c->r[17]+0x00000034u); // 801CFB30
  c->r[0]=c->r[3]+c->r[0]; // 801CFB34
  W16(c->r[17]+0x00000034u,c->r[0]); // 801CFB38
L_801CFB3C:;
  c->r[3]=c->r[16]|c->r[16]; // 801CFB3C
  c->lr=0x801CFB44u; f_800CBAE0(c); // 801CFB40
  c->r[3]=c->r[19]|c->r[19]; // 801CFB44
L_801CFB48:;
  c->r[11]=c->r[1]+0x00000080u; // 801CFB48
  c->lr=0x801CFB50u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFB4C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CFB50
  c->lr=c->r[0]; // 801CFB54
  c->r[1]=c->r[1]+0x00000080u; // 801CFB58
  return; // 801CFB5C
}

// SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam
void f_801CFB60(Ctx* __restrict c) {
  trace_call(0x801CFB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB60
  c->r[0]=c->lr; // 801CFB64
  c->r[12]=R16(c->r[4]+0x00000000u); // 801CFB68
  c->r[11]=0u+0x00000000u; // 801CFB6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CFB70
  c->r[10]=R16(c->r[4]+0x00000002u); // 801CFB74
  c->r[9]=R16(c->r[4]+0x00000004u); // 801CFB78
  c->r[8]=R16(c->r[4]+0x00000006u); // 801CFB7C
  c->r[7]=R16(c->r[4]+0x00000008u); // 801CFB80
  c->r[6]=R16(c->r[4]+0x0000000Au); // 801CFB84
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 801CFB88
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801CFB8C
  c->r[4]=c->r[1]+0x00000008u; // 801CFB90
  W16(c->r[1]+0x00000008u,c->r[12]); // 801CFB94
  W16(c->r[1]+0x0000000Au,c->r[11]); // 801CFB98
  W16(c->r[1]+0x0000000Cu,c->r[10]); // 801CFB9C
  W16(c->r[1]+0x0000000Eu,c->r[11]); // 801CFBA0
  W16(c->r[1]+0x00000010u,c->r[9]); // 801CFBA4
  W16(c->r[1]+0x00000012u,c->r[11]); // 801CFBA8
  W16(c->r[1]+0x00000014u,c->r[8]); // 801CFBAC
  W16(c->r[1]+0x00000016u,c->r[11]); // 801CFBB0
  W16(c->r[1]+0x00000018u,c->r[7]); // 801CFBB4
  W16(c->r[1]+0x0000001Au,c->r[11]); // 801CFBB8
  W16(c->r[1]+0x0000001Cu,c->r[6]); // 801CFBBC
  W16(c->r[1]+0x0000001Eu,c->r[11]); // 801CFBC0
  W16(c->r[1]+0x00000020u,c->r[5]); // 801CFBC4
  W16(c->r[1]+0x00000022u,c->r[11]); // 801CFBC8
  W16(c->r[1]+0x00000024u,c->r[0]); // 801CFBCC
  W16(c->r[1]+0x00000026u,c->r[11]); // 801CFBD0
  c->lr=0x801CFBD8u; f_801D0B00(c); // 801CFBD4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CFBD8
  c->lr=c->r[0]; // 801CFBDC
  c->r[1]=c->r[1]+0x00000030u; // 801CFBE0
  return; // 801CFBE4
}

// SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
void f_801CFBF0(Ctx* __restrict c) {
  trace_call(0x801CFBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFBF0
  c->r[0]=c->lr; // 801CFBF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CFBF8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CFBFC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CFC00
  c->f[31]=c->f[1]; // 801CFC04
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CFC08
  c->r[31]=c->r[3]|c->r[3]; // 801CFC0C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CFC10
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CFC14
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CFC18
  c->r[28]=c->r[4]|c->r[4]; // 801CFC1C
  c->lr=0x801CFC24u; f_800CBAA0(c); // 801CFC20
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CFC24
  c->r[30]=c->r[3]|c->r[3]; // 801CFC28
  cmps(c,0,(int32_t)c->r[0],0); // 801CFC2C
  if (!crb(c,2)) { goto L_801CFC3C; } // 801CFC30
  c->lr=0x801CFC38u; f_800CBAE0(c); // 801CFC34
  goto L_801CFD94; // 801CFC38
L_801CFC3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CFC3C
  if (crb(c,2)) { goto L_801CFD0C; } // 801CFC40
  c->r[3]=R32(c->r[31]+0x00000018u); // 801CFC44
  c->r[0]=0u+0x43300000u; // 801CFC48
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CFC4C
  c->r[0]=c->r[3]^0x80000000u; // 801CFC50
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[2]=RF64(ea);} // 801CFC54
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CFC58
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC5C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CFC60
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CFC64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CFC68
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801CFC6C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CFC70
  fcmp(c,0,c->f[0],c->f[3]); // 801CFC74
  if (!crb(c,1)) { goto L_801CFC80; } // 801CFC78
  goto L_801CFC94; // 801CFC7C
L_801CFC80:;
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CFC80
  fcmp(c,0,c->f[0],c->f[3]); // 801CFC84
  if (!crb(c,0)) { goto L_801CFC90; } // 801CFC88
  goto L_801CFC94; // 801CFC8C
L_801CFC90:;
  c->f[3]=c->f[0]; // 801CFC90
L_801CFC94:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC94
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 801CFC98
  c->lr=0x801CFCA0u; f_80217784(c); // 801CFC9C
  c->r[0]=0u+0x00000000u; // 801CFCA0
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 801CFCA4
  W16(c->r[1]+0x00000008u,c->r[4]); // 801CFCA8
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801CFCAC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801CFCB0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801CFCB4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801CFCB8
  W16(c->r[1]+0x00000012u,c->r[0]); // 801CFCBC
  W16(c->r[1]+0x00000014u,c->r[0]); // 801CFCC0
  c->lr=0x801CFCC8u; f_800CBAA0(c); // 801CFCC4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CFCC8
  c->r[29]=c->r[3]|c->r[3]; // 801CFCCC
  cmps(c,0,(int32_t)c->r[4],0); // 801CFCD0
  if (!crb(c,2)) { goto L_801CFCE0; } // 801CFCD4
  c->lr=0x801CFCDCu; f_800CBAE0(c); // 801CFCD8
  goto L_801CFD8C; // 801CFCDC
L_801CFCE0:;
  c->r[3]=c->r[4]+0x000000CEu; // 801CFCE0
  c->r[4]=c->r[1]+0x00000008u; // 801CFCE4
  c->r[5]=0u+0x0000000Eu; // 801CFCE8
  c->lr=0x801CFCF0u; f_80004364(c); // 801CFCEC
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CFCF0
  c->r[3]=c->r[29]|c->r[29]; // 801CFCF4
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 801CFCF8
  c->r[0]=c->r[0]|0x00010000u; // 801CFCFC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CFD00
  c->lr=0x801CFD08u; f_800CBAE0(c); // 801CFD04
  goto L_801CFD8C; // 801CFD08
L_801CFD0C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801CFD0C
  c->r[0]=0u+0x43300000u; // 801CFD10
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CFD14
  c->r[0]=c->r[3]^0x80000000u; // 801CFD18
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[2]=RF64(ea);} // 801CFD1C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CFD20
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFD24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CFD28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CFD2C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801CFD30
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801CFD34
  c->lr=0x801CFD3Cu; f_800CBAA0(c); // 801CFD38
  c->r[28]=R32(c->r[31]+0x00000000u); // 801CFD3C
  c->r[29]=c->r[3]|c->r[3]; // 801CFD40
  cmps(c,0,(int32_t)c->r[28],0); // 801CFD44
  if (!crb(c,2)) { goto L_801CFD54; } // 801CFD48
  c->lr=0x801CFD50u; f_800CBAE0(c); // 801CFD4C
  goto L_801CFD8C; // 801CFD50
L_801CFD54:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFD54
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801CFD58
  c->lr=0x801CFD60u; f_80217784(c); // 801CFD5C
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 801CFD60
  W16(c->r[28]+0x000000CEu,c->r[0]); // 801CFD64
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CFD68
  W16(c->r[4]+0x000000D0u,c->r[3]); // 801CFD6C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801CFD70
  c->r[0]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[0]); // 801CFD74
  if (!crb(c,2)) { goto L_801CFD84; } // 801CFD78
  c->r[0]=c->r[3]|0x00020000u; // 801CFD7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CFD80
L_801CFD84:;
  c->r[3]=c->r[29]|c->r[29]; // 801CFD84
  c->lr=0x801CFD8Cu; f_800CBAE0(c); // 801CFD88
L_801CFD8C:;
  c->r[3]=c->r[30]|c->r[30]; // 801CFD8C
  c->lr=0x801CFD94u; f_800CBAE0(c); // 801CFD90
L_801CFD94:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CFD94
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CFD98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CFD9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CFDA0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CFDA4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CFDA8
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CFDAC
  c->lr=c->r[0]; // 801CFDB0
  c->r[1]=c->r[1]+0x00000040u; // 801CFDB4
  return; // 801CFDB8
}

// SetVe__Q44nw4r3snd6detail7AxVoiceFff
void f_801CFDC0(Ctx* __restrict c) {
  trace_call(0x801CFDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFDC0
  c->r[0]=c->lr; // 801CFDC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CFDC8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801CFDCC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801CFDD0
  c->f[31]=c->f[2]; // 801CFDD4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801CFDD8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801CFDDC
  c->f[30]=c->f[1]; // 801CFDE0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CFDE4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CFDE8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CFDEC
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CFDF0
  c->r[28]=c->r[3]|c->r[3]; // 801CFDF4
  c->lr=0x801CFDFCu; f_800CBAA0(c); // 801CFDF8
  c->r[0]=R32(c->r[28]+0x00000000u); // 801CFDFC
  c->r[31]=c->r[3]|c->r[3]; // 801CFE00
  cmps(c,0,(int32_t)c->r[0],0); // 801CFE04
  if (!crb(c,2)) { goto L_801CFE14; } // 801CFE08
  c->lr=0x801CFE10u; f_800CBAE0(c); // 801CFE0C
  goto L_801CFEB0; // 801CFE10
L_801CFE14:;
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFE14
  c->r[3]=0u+0x00010000u; // 801CFE18
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 801CFE1C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 801CFE20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801CFE24
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801CFE28
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801CFE2C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801CFE30
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801CFE34
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801CFE38
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 801CFE3C
  c->r[4]=R32(c->r[1]+0x00000014u); // 801CFE40
  if (!crb(c,1)) { goto L_801CFE4C; } // 801CFE44
  goto L_801CFE54; // 801CFE48
L_801CFE4C:;
  c->r[0]=sraw(c,c->r[3],31); // 801CFE4C
  c->r[30]=c->r[3]&~c->r[0]; // 801CFE50
L_801CFE54:;
  c->r[3]=0u+0x00010000u; // 801CFE54
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 801CFE58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[29]); // 801CFE5C
  if (!crb(c,1)) { goto L_801CFE68; } // 801CFE60
  goto L_801CFE70; // 801CFE64
L_801CFE68:;
  c->r[0]=sraw(c,c->r[4],31); // 801CFE68
  c->r[29]=c->r[4]&~c->r[0]; // 801CFE6C
L_801CFE70:;
  c->lr=0x801CFE74u; f_800CBAA0(c); // 801CFE70
  c->r[0]=R32(c->r[28]+0x00000000u); // 801CFE74
  cmps(c,0,(int32_t)c->r[0],0); // 801CFE78
  if (!crb(c,2)) { goto L_801CFE88; } // 801CFE7C
  c->lr=0x801CFE84u; f_800CBAE0(c); // 801CFE80
  goto L_801CFEA8; // 801CFE84
L_801CFE88:;
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 801CFE88
  cmps(c,0,(int32_t)c->r[0],0); // 801CFE8C
  if (crb(c,2)) { goto L_801CFEA0; } // 801CFE90
  c->r[0]=0u+0x00000000u; // 801CFE94
  W16(c->r[28]+0x00000008u,c->r[29]); // 801CFE98
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801CFE9C
L_801CFEA0:;
  W16(c->r[28]+0x0000000Eu,c->r[30]); // 801CFEA0
  c->lr=0x801CFEA8u; f_800CBAE0(c); // 801CFEA4
L_801CFEA8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CFEA8
  c->lr=0x801CFEB0u; f_800CBAE0(c); // 801CFEAC
L_801CFEB0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CFEB0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801CFEB4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801CFEB8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801CFEBC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801CFEC0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CFEC4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CFEC8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CFECC
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CFED0
  c->lr=c->r[0]; // 801CFED4
  c->r[1]=c->r[1]+0x00000050u; // 801CFED8
  return; // 801CFEDC
}

// SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
void f_801CFEE0(Ctx* __restrict c) {
  trace_call(0x801CFEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFEE0
  c->r[0]=c->lr; // 801CFEE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CFEE8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CFEEC
  c->r[31]=c->r[3]|c->r[3]; // 801CFEF0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CFEF4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CFEF8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CFEFC
  c->r[28]=c->r[4]|c->r[4]; // 801CFF00
  c->lr=0x801CFF08u; f_800CBAA0(c); // 801CFF04
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CFF08
  c->r[30]=c->r[3]|c->r[3]; // 801CFF0C
  cmps(c,1,(int32_t)c->r[4],0); // 801CFF10
  if (!crb(c,6)) { goto L_801CFF20; } // 801CFF14
  c->lr=0x801CFF1Cu; f_800CBAE0(c); // 801CFF18
  goto L_801D0050; // 801CFF1C
L_801CFF20:;
  cmpu(c,0,c->r[28],0x00003E80u); // 801CFF20
  if (crb(c,0)) { goto L_801CFF78; } // 801CFF24
  c->r[0]=0u+0x00000000u; // 801CFF28
  W16(c->r[1]+0x00000018u,c->r[0]); // 801CFF2C
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801CFF30
  c->lr=0x801CFF38u; f_800CBAA0(c); // 801CFF34
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CFF38
  c->r[29]=c->r[3]|c->r[3]; // 801CFF3C
  cmps(c,0,(int32_t)c->r[4],0); // 801CFF40
  if (!crb(c,2)) { goto L_801CFF50; } // 801CFF44
  c->lr=0x801CFF4Cu; f_800CBAE0(c); // 801CFF48
  goto L_801D0048; // 801CFF4C
L_801CFF50:;
  c->r[3]=c->r[4]+0x000000E2u; // 801CFF50
  c->r[4]=c->r[1]+0x00000018u; // 801CFF54
  c->r[5]=0u+0x00000008u; // 801CFF58
  c->lr=0x801CFF60u; f_80004364(c); // 801CFF5C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CFF60
  c->r[3]=c->r[29]|c->r[29]; // 801CFF64
  c->r[0]=c->r[0]|0x00080000u; // 801CFF68
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CFF6C
  c->lr=0x801CFF74u; f_800CBAE0(c); // 801CFF70
  goto L_801D0048; // 801CFF74
L_801CFF78:;
  c->r[3]=0u+0x00000000u; // 801CFF78
  if (crb(c,6)) { goto L_801CFF90; } // 801CFF7C
  c->r[0]=R16(c->r[4]+0x000000E2u); // 801CFF80
  cmpu(c,0,c->r[0],0x00000001u); // 801CFF84
  if (!crb(c,2)) { goto L_801CFF90; } // 801CFF88
  c->r[3]=0u+0x00000001u; // 801CFF8C
L_801CFF90:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CFF90
  if (crb(c,2)) { goto L_801CFFE8; } // 801CFF94
  c->r[3]=c->r[28]|c->r[28]; // 801CFF98
  c->r[4]=c->r[1]+0x0000000Au; // 801CFF9C
  c->r[5]=c->r[1]+0x00000008u; // 801CFFA0
  c->lr=0x801CFFA8u; f_800EF740(c); // 801CFFA4
  c->r[28]=R16(c->r[1]+0x00000008u); // 801CFFA8
  c->r[29]=R16(c->r[1]+0x0000000Au); // 801CFFAC
  c->lr=0x801CFFB4u; f_800CBAA0(c); // 801CFFB0
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CFFB4
  cmps(c,0,(int32_t)c->r[4],0); // 801CFFB8
  if (!crb(c,2)) { goto L_801CFFC8; } // 801CFFBC
  c->lr=0x801CFFC4u; f_800CBAE0(c); // 801CFFC0
  goto L_801D0048; // 801CFFC4
L_801CFFC8:;
  W16(c->r[4]+0x000000E6u,c->r[29]); // 801CFFC8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CFFCC
  W16(c->r[4]+0x000000E8u,c->r[28]); // 801CFFD0
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CFFD4
  c->r[0]=c->r[0]|0x00100000u; // 801CFFD8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CFFDC
  c->lr=0x801CFFE4u; f_800CBAE0(c); // 801CFFE0
  goto L_801D0048; // 801CFFE4
L_801CFFE8:;
  c->r[3]=0u+0x00000001u; // 801CFFE8
  c->r[0]=0u+0x00000000u; // 801CFFEC
  W16(c->r[1]+0x00000010u,c->r[3]); // 801CFFF0
  c->r[3]=c->r[28]|c->r[28]; // 801CFFF4
  c->r[4]=c->r[1]+0x00000014u; // 801CFFF8
  c->r[5]=c->r[1]+0x00000016u; // 801CFFFC
  W16(c->r[1]+0x00000012u,c->r[0]); // 801D0000
  c->lr=0x801D0008u; f_800EF740(c); // 801D0004
  c->lr=0x801D000Cu; f_800CBAA0(c); // 801D0008
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D000C
  c->r[29]=c->r[3]|c->r[3]; // 801D0010
  cmps(c,0,(int32_t)c->r[4],0); // 801D0014
  if (!crb(c,2)) { goto L_801D0024; } // 801D0018
  c->lr=0x801D0020u; f_800CBAE0(c); // 801D001C
  goto L_801D0048; // 801D0020
L_801D0024:;
  c->r[3]=c->r[4]+0x000000E2u; // 801D0024
  c->r[4]=c->r[1]+0x00000010u; // 801D0028
  c->r[5]=0u+0x00000008u; // 801D002C
  c->lr=0x801D0034u; f_80004364(c); // 801D0030
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D0034
  c->r[3]=c->r[29]|c->r[29]; // 801D0038
  c->r[0]=c->r[0]|0x00080000u; // 801D003C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0040
  c->lr=0x801D0048u; f_800CBAE0(c); // 801D0044
L_801D0048:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0048
  c->lr=0x801D0050u; f_800CBAE0(c); // 801D004C
L_801D0050:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0050
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D0054
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D0058
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D005C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D0060
  c->lr=c->r[0]; // 801D0064
  c->r[1]=c->r[1]+0x00000030u; // 801D0068
  return; // 801D006C
}

// SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf
void f_801D0070(Ctx* __restrict c) {
  trace_call(0x801D0070u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0070
  c->r[0]=c->lr; // 801D0074
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D0078
  c->r[11]=c->r[1]+0x00000068u; // 801D007C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 801D0080
  c->lr=0x801D0088u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0084
  c->f[31]=c->f[1]; // 801D0088
  c->r[31]=c->r[3]|c->r[3]; // 801D008C
  c->r[25]=c->r[4]|c->r[4]; // 801D0090
  c->lr=0x801D0098u; f_800CBAA0(c); // 801D0094
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D0098
  c->r[30]=c->r[3]|c->r[3]; // 801D009C
  cmps(c,0,(int32_t)c->r[0],0); // 801D00A0
  if (!crb(c,2)) { goto L_801D00B0; } // 801D00A4
  c->lr=0x801D00ACu; f_800CBAE0(c); // 801D00A8
  goto L_801D0278; // 801D00AC
L_801D00B0:;
  c->lr=0x801D00B4u; f_801CD130(c); // 801D00B0
  c->r[3]=0u+0x80380000u; // 801D00B4
  cmps(c,0,(int32_t)c->r[25],0); // 801D00B8
  c->r[0]=rotl(c->r[25],2)&0x000003FCu; // 801D00BC
  c->r[4]=0u+0x00000001u; // 801D00C0
  c->r[3]=c->r[3]+0xFFFFA820u; // 801D00C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D00C8
  if (!crb(c,2)) { goto L_801D00D4; } // 801D00CC
  c->r[4]=0u+0x00000000u; // 801D00D0
L_801D00D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D00D4
  if (!crb(c,2)) { goto L_801D00E0; } // 801D00D8
  c->r[4]=0u+0x00000000u; // 801D00DC
L_801D00E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D00E0
  if (!crb(c,2)) { goto L_801D0144; } // 801D00E4
  c->r[0]=0u+0x00000000u; // 801D00E8
  W16(c->r[1]+0x00000028u,c->r[0]); // 801D00EC
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801D00F0
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801D00F4
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801D00F8
  W16(c->r[1]+0x00000030u,c->r[0]); // 801D00FC
  c->lr=0x801D0104u; f_800CBAA0(c); // 801D0100
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D0104
  c->r[29]=c->r[3]|c->r[3]; // 801D0108
  cmps(c,0,(int32_t)c->r[4],0); // 801D010C
  if (!crb(c,2)) { goto L_801D011C; } // 801D0110
  c->lr=0x801D0118u; f_800CBAE0(c); // 801D0114
  goto L_801D0270; // 801D0118
L_801D011C:;
  c->r[3]=c->r[4]+0x000000EAu; // 801D011C
  c->r[4]=c->r[1]+0x00000028u; // 801D0120
  c->r[5]=0u+0x00000014u; // 801D0124
  c->lr=0x801D012Cu; f_80004364(c); // 801D0128
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D012C
  c->r[3]=c->r[29]|c->r[29]; // 801D0130
  c->r[0]=c->r[0]|0x00200000u; // 801D0134
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0138
  c->lr=0x801D0140u; f_800CBAE0(c); // 801D013C
  goto L_801D0270; // 801D0140
L_801D0144:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0144
  c->f[1]=c->f[31]; // 801D0148
  c->r[4]=c->r[25]|c->r[25]; // 801D014C
  c->r[5]=c->r[1]+0x00000008u; // 801D0150
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D0154
  c->ctr=c->r[12]; // 801D0158
  if (true) { c->lr=0x801D0160u; dispatch(c,c->ctr); } // 801D015C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D0160
  c->r[3]=0u+0x00000000u; // 801D0164
  cmps(c,0,(int32_t)c->r[4],0); // 801D0168
  if (crb(c,2)) { goto L_801D0180; } // 801D016C
  c->r[0]=R16(c->r[4]+0x000000EAu); // 801D0170
  cmpu(c,0,c->r[0],0x00000002u); // 801D0174
  if (!crb(c,2)) { goto L_801D0180; } // 801D0178
  c->r[3]=0u+0x00000001u; // 801D017C
L_801D0180:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0180
  if (crb(c,2)) { goto L_801D01EC; } // 801D0184
  c->r[25]=R16(c->r[1]+0x00000010u); // 801D0188
  c->r[26]=R16(c->r[1]+0x0000000Eu); // 801D018C
  c->r[27]=R16(c->r[1]+0x0000000Cu); // 801D0190
  c->r[28]=R16(c->r[1]+0x0000000Au); // 801D0194
  c->r[29]=R16(c->r[1]+0x00000008u); // 801D0198
  c->lr=0x801D01A0u; f_800CBAA0(c); // 801D019C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D01A0
  cmps(c,0,(int32_t)c->r[4],0); // 801D01A4
  if (!crb(c,2)) { goto L_801D01B4; } // 801D01A8
  c->lr=0x801D01B0u; f_800CBAE0(c); // 801D01AC
  goto L_801D0270; // 801D01B0
L_801D01B4:;
  W16(c->r[4]+0x000000F4u,c->r[29]); // 801D01B4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D01B8
  W16(c->r[4]+0x000000F6u,c->r[28]); // 801D01BC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D01C0
  W16(c->r[4]+0x000000F8u,c->r[27]); // 801D01C4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D01C8
  W16(c->r[4]+0x000000FAu,c->r[26]); // 801D01CC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D01D0
  W16(c->r[4]+0x000000FCu,c->r[25]); // 801D01D4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D01D8
  c->r[0]=c->r[0]|0x00400000u; // 801D01DC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D01E0
  c->lr=0x801D01E8u; f_800CBAE0(c); // 801D01E4
  goto L_801D0270; // 801D01E8
L_801D01EC:;
  c->r[6]=R16(c->r[1]+0x00000008u); // 801D01EC
  c->r[7]=0u+0x00000000u; // 801D01F0
  c->r[5]=R16(c->r[1]+0x0000000Au); // 801D01F4
  c->r[8]=0u+0x00000002u; // 801D01F8
  c->r[4]=R16(c->r[1]+0x0000000Cu); // 801D01FC
  c->r[3]=R16(c->r[1]+0x0000000Eu); // 801D0200
  c->r[0]=R16(c->r[1]+0x00000010u); // 801D0204
  W16(c->r[1]+0x00000014u,c->r[8]); // 801D0208
  W16(c->r[1]+0x00000016u,c->r[7]); // 801D020C
  W16(c->r[1]+0x00000018u,c->r[7]); // 801D0210
  W16(c->r[1]+0x0000001Au,c->r[7]); // 801D0214
  W16(c->r[1]+0x0000001Cu,c->r[7]); // 801D0218
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 801D021C
  W16(c->r[1]+0x00000020u,c->r[5]); // 801D0220
  W16(c->r[1]+0x00000022u,c->r[4]); // 801D0224
  W16(c->r[1]+0x00000024u,c->r[3]); // 801D0228
  W16(c->r[1]+0x00000026u,c->r[0]); // 801D022C
  c->lr=0x801D0234u; f_800CBAA0(c); // 801D0230
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D0234
  c->r[29]=c->r[3]|c->r[3]; // 801D0238
  cmps(c,0,(int32_t)c->r[4],0); // 801D023C
  if (!crb(c,2)) { goto L_801D024C; } // 801D0240
  c->lr=0x801D0248u; f_800CBAE0(c); // 801D0244
  goto L_801D0270; // 801D0248
L_801D024C:;
  c->r[3]=c->r[4]+0x000000EAu; // 801D024C
  c->r[4]=c->r[1]+0x00000014u; // 801D0250
  c->r[5]=0u+0x00000014u; // 801D0254
  c->lr=0x801D025Cu; f_80004364(c); // 801D0258
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D025C
  c->r[3]=c->r[29]|c->r[29]; // 801D0260
  c->r[0]=c->r[0]|0x00200000u; // 801D0264
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0268
  c->lr=0x801D0270u; f_800CBAE0(c); // 801D026C
L_801D0270:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0270
  c->lr=0x801D0278u; f_800CBAE0(c); // 801D0274
L_801D0278:;
  c->r[11]=c->r[1]+0x00000068u; // 801D0278
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 801D027C
  c->lr=0x801D0284u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0280
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D0284
  c->lr=c->r[0]; // 801D0288
  c->r[1]=c->r[1]+0x00000070u; // 801D028C
  return; // 801D0290
}

// SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
void f_801D02A0(Ctx* __restrict c) {
  trace_call(0x801D02A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D02A0
  c->r[0]=c->lr; // 801D02A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D02A8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801D02AC
  W32(c->r[1]+0x00000048u,c->r[30]); // 801D02B0
  c->r[30]=c->r[4]|c->r[4]; // 801D02B4
  W32(c->r[1]+0x00000044u,c->r[29]); // 801D02B8
  c->r[29]=c->r[3]|c->r[3]; // 801D02BC
  c->lr=0x801D02C4u; f_800CBAA0(c); // 801D02C0
  c->r[4]=R32(c->r[29]+0x00000000u); // 801D02C4
  c->r[31]=c->r[3]|c->r[3]; // 801D02C8
  cmps(c,1,(int32_t)c->r[4],0); // 801D02CC
  if (!crb(c,6)) { goto L_801D02DC; } // 801D02D0
  c->lr=0x801D02D8u; f_800CBAE0(c); // 801D02D4
  goto L_801D0414; // 801D02D8
L_801D02DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D02DC
  if (!crb(c,2)) { goto L_801D0330; } // 801D02E0
  c->r[0]=0u+0x00000000u; // 801D02E4
  W16(c->r[1]+0x00000028u,c->r[0]); // 801D02E8
  c->lr=0x801D02F0u; f_800CBAA0(c); // 801D02EC
  c->r[4]=R32(c->r[29]+0x00000000u); // 801D02F0
  c->r[30]=c->r[3]|c->r[3]; // 801D02F4
  cmps(c,0,(int32_t)c->r[4],0); // 801D02F8
  if (!crb(c,2)) { goto L_801D0308; } // 801D02FC
  c->lr=0x801D0304u; f_800CBAE0(c); // 801D0300
  goto L_801D040C; // 801D0304
L_801D0308:;
  c->r[3]=c->r[4]+0x0000013Cu; // 801D0308
  c->r[4]=c->r[1]+0x00000028u; // 801D030C
  c->r[5]=0u+0x00000014u; // 801D0310
  c->lr=0x801D0318u; f_80004364(c); // 801D0314
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D0318
  c->r[3]=c->r[30]|c->r[30]; // 801D031C
  c->r[0]=c->r[0]|0x10000000u; // 801D0320
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D0324
  c->lr=0x801D032Cu; f_800CBAE0(c); // 801D0328
  goto L_801D040C; // 801D032C
L_801D0330:;
  c->r[3]=0u+0x00000000u; // 801D0330
  if (crb(c,6)) { goto L_801D0348; } // 801D0334
  c->r[0]=R16(c->r[4]+0x0000013Cu); // 801D0338
  cmpu(c,0,c->r[0],0x00000002u); // 801D033C
  if (!crb(c,2)) { goto L_801D0348; } // 801D0340
  c->r[3]=0u+0x00000001u; // 801D0344
L_801D0348:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0348
  if (crb(c,2)) { goto L_801D0394; } // 801D034C
  c->r[3]=c->r[30]|c->r[30]; // 801D0350
  c->r[4]=c->r[1]+0x00000010u; // 801D0354
  c->r[5]=c->r[1]+0x0000000Eu; // 801D0358
  c->r[6]=c->r[1]+0x0000000Cu; // 801D035C
  c->r[7]=c->r[1]+0x0000000Au; // 801D0360
  c->r[8]=c->r[1]+0x00000008u; // 801D0364
  c->lr=0x801D036Cu; f_801EF570(c); // 801D0368
  c->r[5]=R16(c->r[1]+0x00000010u); // 801D036C
  c->r[3]=c->r[29]|c->r[29]; // 801D0370
  c->r[6]=R16(c->r[1]+0x0000000Eu); // 801D0374
  c->r[4]=0u+0x00000002u; // 801D0378
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801D037C
  c->r[8]=R16(c->r[1]+0x0000000Au); // 801D0380
  c->r[9]=R16(c->r[1]+0x00000008u); // 801D0384
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0388
  c->lr=0x801D0390u; f_801D0CF0(c); // 801D038C
  goto L_801D040C; // 801D0390
L_801D0394:;
  c->r[0]=0u+0x00000000u; // 801D0394
  c->r[3]=0u+0x00000002u; // 801D0398
  W16(c->r[1]+0x00000014u,c->r[3]); // 801D039C
  c->r[3]=c->r[30]|c->r[30]; // 801D03A0
  c->r[4]=c->r[1]+0x0000001Eu; // 801D03A4
  c->r[5]=c->r[1]+0x00000020u; // 801D03A8
  W16(c->r[1]+0x00000016u,c->r[0]); // 801D03AC
  c->r[6]=c->r[1]+0x00000022u; // 801D03B0
  c->r[7]=c->r[1]+0x00000024u; // 801D03B4
  c->r[8]=c->r[1]+0x00000026u; // 801D03B8
  W16(c->r[1]+0x00000018u,c->r[0]); // 801D03BC
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801D03C0
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801D03C4
  c->lr=0x801D03CCu; f_801EF570(c); // 801D03C8
  c->lr=0x801D03D0u; f_800CBAA0(c); // 801D03CC
  c->r[4]=R32(c->r[29]+0x00000000u); // 801D03D0
  c->r[30]=c->r[3]|c->r[3]; // 801D03D4
  cmps(c,0,(int32_t)c->r[4],0); // 801D03D8
  if (!crb(c,2)) { goto L_801D03E8; } // 801D03DC
  c->lr=0x801D03E4u; f_800CBAE0(c); // 801D03E0
  goto L_801D040C; // 801D03E4
L_801D03E8:;
  c->r[3]=c->r[4]+0x0000013Cu; // 801D03E8
  c->r[4]=c->r[1]+0x00000014u; // 801D03EC
  c->r[5]=0u+0x00000014u; // 801D03F0
  c->lr=0x801D03F8u; f_80004364(c); // 801D03F4
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D03F8
  c->r[3]=c->r[30]|c->r[30]; // 801D03FC
  c->r[0]=c->r[0]|0x10000000u; // 801D0400
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D0404
  c->lr=0x801D040Cu; f_800CBAE0(c); // 801D0408
L_801D040C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D040C
  c->lr=0x801D0414u; f_800CBAE0(c); // 801D0410
L_801D0414:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D0414
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801D0418
  c->r[30]=R32(c->r[1]+0x00000048u); // 801D041C
  c->r[29]=R32(c->r[1]+0x00000044u); // 801D0420
  c->lr=c->r[0]; // 801D0424
  c->r[1]=c->r[1]+0x00000050u; // 801D0428
  return; // 801D042C
}

// CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ44nw4r3snd6detail10AdpcmParam
void f_801D0430(Ctx* __restrict c) {
  trace_call(0x801D0430u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0430
  c->r[0]=c->lr; // 801D0434
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D0438
  c->r[11]=c->r[1]+0x00000050u; // 801D043C
  c->lr=0x801D0444u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0440
  c->r[31]=c->r[8]|c->r[8]; // 801D0444
  c->r[27]=c->r[3]|c->r[3]; // 801D0448
  c->r[28]=c->r[4]|c->r[4]; // 801D044C
  c->r[29]=c->r[5]|c->r[5]; // 801D0450
  c->r[30]=c->r[6]|c->r[6]; // 801D0454
  c->r[26]=c->r[7]|c->r[7]; // 801D0458
  c->r[4]=c->r[31]|c->r[31]; // 801D045C
  c->r[3]=c->r[1]+0x00000008u; // 801D0460
  c->r[5]=0u+0x00000020u; // 801D0464
  c->lr=0x801D046Cu; f_80004364(c); // 801D0468
  c->r[5]=R16(c->r[31]+0x00000020u); // 801D046C
  cmps(c,0,(int32_t)c->r[26],0); // 801D0470
  c->r[4]=R16(c->r[31]+0x00000022u); // 801D0474
  c->r[6]=c->r[26]|c->r[26]; // 801D0478
  c->r[3]=R16(c->r[31]+0x00000024u); // 801D047C
  c->r[0]=R16(c->r[31]+0x00000026u); // 801D0480
  W16(c->r[1]+0x00000028u,c->r[5]); // 801D0484
  W16(c->r[1]+0x0000002Au,c->r[4]); // 801D0488
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801D048C
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801D0490
  if (crb(c,2)) { goto L_801D049C; } // 801D0494
  c->r[6]=c->r[26]+0x80000000u; // 801D0498
L_801D049C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D049C
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801D04A0
  c->r[31]=c->r[3]+0x00000002u; // 801D04A4
  if (crb(c,2)) { goto L_801D04B0; } // 801D04A8
  c->r[26]=c->r[26]+0x80000000u; // 801D04AC
L_801D04B0:;
  c->r[3]=0u+0x24920000u; // 801D04B0
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 801D04B4
  c->r[3]=c->r[3]+0x00004925u; // 801D04B8
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 801D04BC
  c->r[3]=c->r[30]-c->r[4]; // 801D04C0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801D04C4
  c->r[4]=c->r[3]+c->r[4]; // 801D04C8
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801D04CC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801D04D0
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801D04D4
  c->r[4]=c->r[30]-c->r[5]; // 801D04D8
  c->r[0]=c->r[4]+c->r[0]; // 801D04DC
  c->r[30]=c->r[0]+c->r[3]; // 801D04E0
  c->r[30]=c->r[30]+0x00000002u; // 801D04E4
  goto L_801D0534; // 801D04E8
L_801D04EC:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; cr0(c,c->r[0]); // 801D04EC
  if (!crb(c,2)) { goto L_801D0508; } // 801D04F0
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801D04F4
  c->r[31]=c->r[31]+0x00000002u; // 801D04F8
  c->r[3]=c->r[3]+0x80000000u; // 801D04FC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D0500
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801D0504
L_801D0508:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801D0508
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801D050C
  c->r[4]=c->r[3]+0x80000000u; // 801D0510
  c->r[4]=R8(c->r[4]+0x00000000u); // 801D0514
  c->r[3]=c->r[1]+0x00000008u; // 801D0518
  c->r[0]=sraw(c,c->r[4],4); // 801D051C
  if (crb(c,2)) { goto L_801D0528; } // 801D0520
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801D0524
L_801D0528:;
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D0528
  c->lr=0x801D0530u; f_801F1970(c); // 801D052C
  c->r[31]=c->r[31]+0x00000001u; // 801D0530
L_801D0534:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D0534
  if (crb(c,0)) { IRQCHK(c); goto L_801D04EC; } // 801D0538
  c->r[0]=R16(c->r[1]+0x0000002Au); // 801D053C
  c->r[11]=c->r[1]+0x00000050u; // 801D0540
  W16(c->r[27]+0x00000000u,c->r[0]); // 801D0544
  c->r[0]=R16(c->r[1]+0x0000002Cu); // 801D0548
  W16(c->r[28]+0x00000000u,c->r[0]); // 801D054C
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 801D0550
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D0554
  c->lr=0x801D055Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0558
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D055C
  c->lr=c->r[0]; // 801D0560
  c->r[1]=c->r[1]+0x00000050u; // 801D0564
  return; // 801D0568
}

// Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
void f_801D0570(Ctx* __restrict c) {
  trace_call(0x801D0570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0570
  c->r[0]=c->lr; // 801D0574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D057C
  c->r[31]=c->r[3]|c->r[3]; // 801D0580
  c->lr=0x801D0588u; f_800CBAA0(c); // 801D0584
  c->r[5]=R32(c->r[31]+0x00000000u); // 801D0588
  cmps(c,0,(int32_t)c->r[5],0); // 801D058C
  if (!crb(c,2)) { goto L_801D059C; } // 801D0590
  c->lr=0x801D0598u; f_800CBAE0(c); // 801D0594
  goto L_801D0708; // 801D0598
L_801D059C:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801D059C
  c->r[4]=0u+0x2AAB0000u; // 801D05A0
  W16(c->r[5]+0x00000092u,c->r[0]); // 801D05A4
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801D05A8
  c->r[6]=0u+0xFFFFFFFFu; // 801D05AC
  c->r[7]=R16(c->r[31]+0x0000000Eu); // 801D05B0
  c->r[0]=R16(c->r[31]+0x00000008u); // 801D05B4
  c->r[0]=c->r[7]-c->r[0]; // 801D05B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801D05BC
  c->r[0]=sraw(c,c->r[0],4); // 801D05C0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801D05C4
  c->r[0]=c->r[0]+c->r[4]; // 801D05C8
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801D05CC
  c->r[0]=0u-c->r[8]; // 801D05D0
  c->r[0]=c->r[0]&~c->r[8]; // 801D05D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D05D8
  c->r[0]=c->r[8]+c->r[0]; cr0(c,c->r[0]); // 801D05DC
  if (crb(c,2)) { goto L_801D05E8; } // 801D05E0
  c->r[6]=0u+0x00000001u; // 801D05E4
L_801D05E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)96); // 801D05E8
  c->r[5]=R16(c->r[31]+0x00000008u); // 801D05EC
  c->r[4]=R16(c->r[31]+0x00000008u); // 801D05F0
  c->r[0]=c->r[4]+c->r[0]; // 801D05F4
  c->r[4]=c->r[7]-c->r[0]; cr0(c,c->r[4]); // 801D05F8
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)96); // 801D05FC
  c->r[0]=c->r[5]+c->r[0]; // 801D0600
  if (!crb(c,0)) { goto L_801D060C; } // 801D0604
  c->r[4]=0u-c->r[4]; // 801D0608
L_801D060C:;
  c->r[0]=c->r[7]-c->r[0]; cr0(c,c->r[0]); // 801D060C
  if (!crb(c,0)) { goto L_801D0618; } // 801D0610
  c->r[0]=0u-c->r[0]; // 801D0614
L_801D0618:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D0618
  if (!crb(c,0)) { goto L_801D062C; } // 801D061C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D0620
  W16(c->r[4]+0x00000094u,c->r[8]); // 801D0624
  goto L_801D0634; // 801D0628
L_801D062C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D062C
  W16(c->r[4]+0x00000094u,c->r[6]); // 801D0630
L_801D0634:;
  c->r[6]=R32(c->r[31]+0x00000000u); // 801D0634
  c->r[4]=R16(c->r[31]+0x00000008u); // 801D0638
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000094u); // 801D063C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D0640
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 801D0644
  if (!crb(c,0)) { goto L_801D0674; } // 801D0648
  c->r[0]=R16(c->r[31]+0x00000008u); // 801D064C
  c->r[4]=0u+0x2AAB0000u; // 801D0650
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801D0654
  c->r[0]=0u-c->r[0]; // 801D0658
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801D065C
  c->r[0]=sraw(c,c->r[0],4); // 801D0660
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801D0664
  c->r[0]=c->r[0]+c->r[4]; // 801D0668
  W16(c->r[6]+0x00000094u,c->r[0]); // 801D066C
  goto L_801D06A8; // 801D0670
L_801D0674:;
  c->r[4]=0u+0x00010000u; // 801D0674
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801D0678
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801D067C
  if (!crb(c,1)) { goto L_801D06A8; } // 801D0680
  c->r[0]=R16(c->r[31]+0x00000008u); // 801D0684
  c->r[4]=0u+0x2AAB0000u; // 801D0688
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801D068C
  c->r[0]=c->r[5]-c->r[0]; // 801D0690
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801D0694
  c->r[0]=sraw(c,c->r[0],4); // 801D0698
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801D069C
  c->r[0]=c->r[0]+c->r[4]; // 801D06A0
  W16(c->r[6]+0x00000094u,c->r[0]); // 801D06A4
L_801D06A8:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D06A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 801D06AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D06B0
  if (!crb(c,2)) { goto L_801D06CC; } // 801D06B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 801D06B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D06BC
  if (!crb(c,2)) { goto L_801D06CC; } // 801D06C0
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 801D06C4
  W16(c->r[4]+0x00000092u,c->r[0]); // 801D06C8
L_801D06CC:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 801D06CC
  c->r[0]=0u+0x00000000u; // 801D06D0
  c->r[5]=R32(c->r[31]+0x00000000u); // 801D06D4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFDFFu; // 801D06D8
  c->r[6]=c->r[4]|0x00000100u; // 801D06DC
  W32(c->r[31]+0x00000004u,c->r[6]); // 801D06E0
  c->r[4]=R16(c->r[5]+0x00000092u); // 801D06E4
  W16(c->r[31]+0x00000008u,c->r[4]); // 801D06E8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 801D06EC
  W16(c->r[31]+0x0000000Au,c->r[4]); // 801D06F0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801D06F4
  c->r[4]=c->r[4]|c->r[6]; // 801D06F8
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801D06FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0700
  c->lr=0x801D0708u; f_800CBAE0(c); // 801D0704
L_801D0708:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D070C
  c->lr=c->r[0]; // 801D0710
  c->r[1]=c->r[1]+0x00000010u; // 801D0714
  return; // 801D0718
}

// Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB
void f_801D0720(Ctx* __restrict c) {
  trace_call(0x801D0720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0720
  c->r[0]=c->lr; // 801D0724
  cmps(c,0,(int32_t)c->r[4],0); // 801D0728
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D072C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0730
  c->r[31]=c->r[4]|c->r[4]; // 801D0734
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0738
  c->r[30]=c->r[3]|c->r[3]; // 801D073C
  if (!crb(c,2)) { goto L_801D0760; } // 801D0740
  c->r[3]=0u+0x802D0000u; // 801D0744
  c->r[5]=0u+0x802D0000u; // 801D0748
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801D074C
  c->r[4]=0u+0x00000416u; // 801D0750
  c->r[5]=c->r[5]+0xFFFFCFC8u; // 801D0754
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0758
  c->lr=0x801D0760u; f_801F9770(c); // 801D075C
L_801D0760:;
  c->r[3]=0u+0x00010000u; // 801D0760
  c->r[4]=0u+0x00000000u; // 801D0764
  c->r[0]=c->r[3]+0xFFFF8000u; // 801D0768
  W16(c->r[30]+0x00000008u,c->r[0]); // 801D076C
  c->r[3]=0u+0x00000001u; // 801D0770
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D0774
  W32(c->r[30]+0x00000004u,c->r[4]); // 801D0778
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 801D077C
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 801D0780
  W16(c->r[30]+0x0000000Au,c->r[4]); // 801D0784
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D078C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0790
  c->lr=c->r[0]; // 801D0794
  c->r[1]=c->r[1]+0x00000010u; // 801D0798
  return; // 801D079C
}

// SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
void f_801D07A0(Ctx* __restrict c) {
  trace_call(0x801D07A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D07A0
  c->r[0]=c->lr; // 801D07A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D07A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D07AC
  c->r[31]=c->r[5]|c->r[5]; // 801D07B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D07B4
  c->r[30]=c->r[3]|c->r[3]; // 801D07B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D07BC
  c->r[29]=c->r[4]|c->r[4]; // 801D07C0
  c->lr=0x801D07C8u; f_800CBAA0(c); // 801D07C4
  c->r[6]=R32(c->r[30]+0x00000000u); // 801D07C8
  cmps(c,0,(int32_t)c->r[6],0); // 801D07CC
  if (!crb(c,2)) { goto L_801D07DC; } // 801D07D0
  c->lr=0x801D07D8u; f_800CBAE0(c); // 801D07D4
  goto L_801D09FC; // 801D07D8
L_801D07DC:;
  c->r[4]=R16(c->r[29]+0x00000000u); // 801D07DC
  c->r[5]=c->r[6]+0x0000003Eu; // 801D07E0
  W16(c->r[6]+0x0000003Cu,c->r[4]); // 801D07E4
  c->r[0]=0u+0x00000000u; // 801D07E8
  cmps(c,0,(int32_t)c->r[4],0); // 801D07EC
  if (crb(c,2)) { goto L_801D07F8; } // 801D07F0
  c->r[0]=c->r[0]|0x00000001u; // 801D07F4
L_801D07F8:;
  c->r[6]=R16(c->r[29]+0x00000002u); // 801D07F8
  c->r[4]=c->r[29]+0x00000004u; // 801D07FC
  W16(c->r[5]+0x00000000u,c->r[6]); // 801D0800
  cmps(c,0,(int32_t)c->r[6],0); // 801D0804
  if (crb(c,2)) { goto L_801D0810; } // 801D0808
  c->r[0]=c->r[0]|0x00000005u; // 801D080C
L_801D0810:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801D0810
  W16(c->r[5]+0x00000002u,c->r[6]); // 801D0814
  cmps(c,0,(int32_t)c->r[6],0); // 801D0818
  if (crb(c,2)) { goto L_801D0824; } // 801D081C
  c->r[0]=c->r[0]|0x00000002u; // 801D0820
L_801D0824:;
  c->r[6]=R16(c->r[4]+0x00000002u); // 801D0824
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D0828
  cmps(c,0,(int32_t)c->r[6],0); // 801D082C
  if (crb(c,2)) { goto L_801D0838; } // 801D0830
  c->r[0]=c->r[0]|0x00000006u; // 801D0834
L_801D0838:;
  c->r[6]=R16(c->r[4]+0x00000004u); // 801D0838
  W16(c->r[5]+0x00000006u,c->r[6]); // 801D083C
  cmps(c,0,(int32_t)c->r[6],0); // 801D0840
  if (crb(c,2)) { goto L_801D084C; } // 801D0844
  c->r[0]=c->r[0]|0x00010000u; // 801D0848
L_801D084C:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 801D084C
  W16(c->r[5]+0x00000008u,c->r[6]); // 801D0850
  cmps(c,0,(int32_t)c->r[6],0); // 801D0854
  if (crb(c,2)) { goto L_801D0860; } // 801D0858
  c->r[0]=c->r[0]|0x00050000u; // 801D085C
L_801D0860:;
  c->r[6]=R16(c->r[4]+0x00000008u); // 801D0860
  W16(c->r[5]+0x0000000Au,c->r[6]); // 801D0864
  cmps(c,0,(int32_t)c->r[6],0); // 801D0868
  if (crb(c,2)) { goto L_801D0874; } // 801D086C
  c->r[0]=c->r[0]|0x00020000u; // 801D0870
L_801D0874:;
  c->r[6]=R16(c->r[4]+0x0000000Au); // 801D0874
  W16(c->r[5]+0x0000000Cu,c->r[6]); // 801D0878
  cmps(c,0,(int32_t)c->r[6],0); // 801D087C
  if (crb(c,2)) { goto L_801D0888; } // 801D0880
  c->r[0]=c->r[0]|0x00060000u; // 801D0884
L_801D0888:;
  c->r[6]=R16(c->r[4]+0x0000000Cu); // 801D0888
  W16(c->r[5]+0x0000000Eu,c->r[6]); // 801D088C
  cmps(c,0,(int32_t)c->r[6],0); // 801D0890
  if (crb(c,2)) { goto L_801D089C; } // 801D0894
  c->r[0]=c->r[0]|0x00200000u; // 801D0898
L_801D089C:;
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 801D089C
  W16(c->r[5]+0x00000010u,c->r[6]); // 801D08A0
  cmps(c,0,(int32_t)c->r[6],0); // 801D08A4
  if (crb(c,2)) { goto L_801D08B0; } // 801D08A8
  c->r[0]=c->r[0]|0x00A00000u; // 801D08AC
L_801D08B0:;
  c->r[6]=R16(c->r[4]+0x00000010u); // 801D08B0
  W16(c->r[5]+0x00000012u,c->r[6]); // 801D08B4
  cmps(c,0,(int32_t)c->r[6],0); // 801D08B8
  if (crb(c,2)) { goto L_801D08C4; } // 801D08BC
  c->r[0]=c->r[0]|0x00400000u; // 801D08C0
L_801D08C4:;
  c->r[6]=R16(c->r[4]+0x00000012u); // 801D08C4
  W16(c->r[5]+0x00000014u,c->r[6]); // 801D08C8
  cmps(c,0,(int32_t)c->r[6],0); // 801D08CC
  if (crb(c,2)) { goto L_801D08D8; } // 801D08D0
  c->r[0]=c->r[0]|0x00C00000u; // 801D08D4
L_801D08D8:;
  c->r[6]=R16(c->r[4]+0x00000014u); // 801D08D8
  W16(c->r[5]+0x00000016u,c->r[6]); // 801D08DC
  cmps(c,0,(int32_t)c->r[6],0); // 801D08E0
  if (crb(c,2)) { goto L_801D08EC; } // 801D08E4
  c->r[0]=c->r[0]|0x04000000u; // 801D08E8
L_801D08EC:;
  c->r[6]=R16(c->r[4]+0x00000016u); // 801D08EC
  W16(c->r[5]+0x00000018u,c->r[6]); // 801D08F0
  cmps(c,0,(int32_t)c->r[6],0); // 801D08F4
  if (crb(c,2)) { goto L_801D0900; } // 801D08F8
  c->r[0]=c->r[0]|0x14000000u; // 801D08FC
L_801D0900:;
  c->r[6]=R16(c->r[4]+0x00000018u); // 801D0900
  W16(c->r[5]+0x0000001Au,c->r[6]); // 801D0904
  cmps(c,0,(int32_t)c->r[6],0); // 801D0908
  if (crb(c,2)) { goto L_801D0914; } // 801D090C
  c->r[0]=c->r[0]|0x08000000u; // 801D0910
L_801D0914:;
  c->r[6]=R16(c->r[4]+0x0000001Au); // 801D0914
  W16(c->r[5]+0x0000001Cu,c->r[6]); // 801D0918
  cmps(c,0,(int32_t)c->r[6],0); // 801D091C
  if (crb(c,2)) { goto L_801D0928; } // 801D0920
  c->r[0]=c->r[0]|0x18000000u; // 801D0924
L_801D0928:;
  c->r[6]=R16(c->r[4]+0x0000001Cu); // 801D0928
  W16(c->r[5]+0x0000001Eu,c->r[6]); // 801D092C
  cmps(c,0,(int32_t)c->r[6],0); // 801D0930
  if (crb(c,2)) { goto L_801D093C; } // 801D0934
  c->r[0]=c->r[0]|0x00000008u; // 801D0938
L_801D093C:;
  c->r[6]=R16(c->r[4]+0x0000001Eu); // 801D093C
  W16(c->r[5]+0x00000020u,c->r[6]); // 801D0940
  cmps(c,0,(int32_t)c->r[6],0); // 801D0944
  if (crb(c,2)) { goto L_801D0950; } // 801D0948
  c->r[0]=c->r[0]|0x00000018u; // 801D094C
L_801D0950:;
  c->r[6]=R16(c->r[4]+0x00000020u); // 801D0950
  W16(c->r[5]+0x00000022u,c->r[6]); // 801D0954
  cmps(c,0,(int32_t)c->r[6],0); // 801D0958
  if (crb(c,2)) { goto L_801D0964; } // 801D095C
  c->r[0]=c->r[0]|0x00080000u; // 801D0960
L_801D0964:;
  c->r[6]=R16(c->r[4]+0x00000022u); // 801D0964
  W16(c->r[5]+0x00000024u,c->r[6]); // 801D0968
  cmps(c,0,(int32_t)c->r[6],0); // 801D096C
  if (crb(c,2)) { goto L_801D0978; } // 801D0970
  c->r[0]=c->r[0]|0x00180000u; // 801D0974
L_801D0978:;
  c->r[6]=R16(c->r[4]+0x00000024u); // 801D0978
  W16(c->r[5]+0x00000026u,c->r[6]); // 801D097C
  cmps(c,0,(int32_t)c->r[6],0); // 801D0980
  if (crb(c,2)) { goto L_801D098C; } // 801D0984
  c->r[0]=c->r[0]|0x01000000u; // 801D0988
L_801D098C:;
  c->r[6]=R16(c->r[4]+0x00000026u); // 801D098C
  W16(c->r[5]+0x00000028u,c->r[6]); // 801D0990
  cmps(c,0,(int32_t)c->r[6],0); // 801D0994
  if (crb(c,2)) { goto L_801D09A0; } // 801D0998
  c->r[0]=c->r[0]|0x03000000u; // 801D099C
L_801D09A0:;
  c->r[6]=R16(c->r[4]+0x00000028u); // 801D09A0
  W16(c->r[5]+0x0000002Au,c->r[6]); // 801D09A4
  cmps(c,0,(int32_t)c->r[6],0); // 801D09A8
  if (crb(c,2)) { goto L_801D09B4; } // 801D09AC
  c->r[0]=c->r[0]|0x20000000u; // 801D09B0
L_801D09B4:;
  c->r[4]=R16(c->r[4]+0x0000002Au); // 801D09B4
  W16(c->r[5]+0x0000002Cu,c->r[4]); // 801D09B8
  cmps(c,0,(int32_t)c->r[4],0); // 801D09BC
  if (crb(c,2)) { goto L_801D09C8; } // 801D09C0
  c->r[0]=c->r[0]|0x60000000u; // 801D09C4
L_801D09C8:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D09C8
  cmps(c,0,(int32_t)c->r[31],0); // 801D09CC
  W32(c->r[4]+0x00000034u,c->r[0]); // 801D09D0
  if (crb(c,2)) { goto L_801D09EC; } // 801D09D4
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D09D8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801D09DC
  c->r[0]=c->r[0]|0x00000012u; // 801D09E0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801D09E4
  goto L_801D09F8; // 801D09E8
L_801D09EC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D09EC
  c->r[0]=c->r[0]|0x00000012u; // 801D09F0
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D09F4
L_801D09F8:;
  c->lr=0x801D09FCu; f_800CBAE0(c); // 801D09F8
L_801D09FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D09FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0A00
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0A04
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0A08
  c->lr=c->r[0]; // 801D0A0C
  c->r[1]=c->r[1]+0x00000020u; // 801D0A10
  return; // 801D0A14
}

// SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
void f_801D0A20(Ctx* __restrict c) {
  trace_call(0x801D0A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0A20
  c->r[0]=c->lr; // 801D0A24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0A2C
  c->r[31]=c->r[4]|c->r[4]; // 801D0A30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0A34
  c->r[30]=c->r[3]|c->r[3]; // 801D0A38
  c->lr=0x801D0A40u; f_800CBAA0(c); // 801D0A3C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D0A40
  cmps(c,0,(int32_t)c->r[4],0); // 801D0A44
  if (!crb(c,2)) { goto L_801D0A54; } // 801D0A48
  c->lr=0x801D0A50u; f_800CBAE0(c); // 801D0A4C
  goto L_801D0AE8; // 801D0A50
L_801D0A54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D0A54
  if (crb(c,2)) { goto L_801D0A80; } // 801D0A58
  cmpu(c,0,c->r[31],0x00000001u); // 801D0A5C
  if (crb(c,2)) { goto L_801D0A8C; } // 801D0A60
  cmpu(c,0,c->r[31],0x00000002u); // 801D0A64
  if (crb(c,2)) { goto L_801D0A98; } // 801D0A68
  cmpu(c,0,c->r[31],0x00000003u); // 801D0A6C
  if (crb(c,2)) { goto L_801D0AAC; } // 801D0A70
  cmpu(c,0,c->r[31],0x00000004u); // 801D0A74
  if (crb(c,2)) { goto L_801D0AC4; } // 801D0A78
  goto L_801D0AD8; // 801D0A7C
L_801D0A80:;
  c->r[0]=0u+0x00000002u; // 801D0A80
  W16(c->r[4]+0x00000030u,c->r[0]); // 801D0A84
  goto L_801D0AD8; // 801D0A88
L_801D0A8C:;
  c->r[0]=0u+0x00000001u; // 801D0A8C
  W16(c->r[4]+0x00000030u,c->r[0]); // 801D0A90
  goto L_801D0AD8; // 801D0A94
L_801D0A98:;
  c->r[0]=0u+0x00000000u; // 801D0A98
  W16(c->r[4]+0x00000030u,c->r[0]); // 801D0A9C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D0AA0
  W16(c->r[4]+0x00000032u,c->r[0]); // 801D0AA4
  goto L_801D0AD8; // 801D0AA8
L_801D0AAC:;
  c->r[0]=0u+0x00000000u; // 801D0AAC
  W16(c->r[4]+0x00000030u,c->r[0]); // 801D0AB0
  c->r[0]=0u+0x00000001u; // 801D0AB4
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D0AB8
  W16(c->r[4]+0x00000032u,c->r[0]); // 801D0ABC
  goto L_801D0AD8; // 801D0AC0
L_801D0AC4:;
  c->r[0]=0u+0x00000000u; // 801D0AC4
  W16(c->r[4]+0x00000030u,c->r[0]); // 801D0AC8
  c->r[0]=0u+0x00000002u; // 801D0ACC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D0AD0
  W16(c->r[4]+0x00000032u,c->r[0]); // 801D0AD4
L_801D0AD8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D0AD8
  c->r[0]=c->r[0]|0x00000001u; // 801D0ADC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D0AE0
  c->lr=0x801D0AE8u; f_800CBAE0(c); // 801D0AE4
L_801D0AE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0AEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0AF0
  c->lr=c->r[0]; // 801D0AF4
  c->r[1]=c->r[1]+0x00000010u; // 801D0AF8
  return; // 801D0AFC
}

// SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
void f_801D0B00(Ctx* __restrict c) {
  trace_call(0x801D0B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B00
  c->r[0]=c->lr; // 801D0B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0B08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0B0C
  c->r[31]=c->r[3]|c->r[3]; // 801D0B10
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0B14
  c->r[30]=c->r[4]|c->r[4]; // 801D0B18
  c->lr=0x801D0B20u; f_800CBAA0(c); // 801D0B1C
  c->r[5]=R32(c->r[31]+0x00000000u); // 801D0B20
  cmps(c,0,(int32_t)c->r[5],0); // 801D0B24
  if (!crb(c,2)) { goto L_801D0B34; } // 801D0B28
  c->lr=0x801D0B30u; f_800CBAE0(c); // 801D0B2C
  goto L_801D0CD4; // 801D0B30
L_801D0B34:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 801D0B34
  c->r[4]=c->r[5]+0x00000104u; // 801D0B38
  W16(c->r[5]+0x00000102u,c->r[0]); // 801D0B3C
  c->r[6]=0u+0x00000000u; // 801D0B40
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B44
  if (crb(c,2)) { goto L_801D0B50; } // 801D0B48
  c->r[6]=c->r[6]|0x00000001u; // 801D0B4C
L_801D0B50:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801D0B50
  c->r[5]=c->r[30]+0x00000004u; // 801D0B54
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D0B58
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B5C
  if (crb(c,2)) { goto L_801D0B6C; } // 801D0B60
  c->r[0]=c->r[6]|0x00000002u; // 801D0B64
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0B68
L_801D0B6C:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 801D0B6C
  W16(c->r[4]+0x00000002u,c->r[0]); // 801D0B70
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B74
  if (crb(c,2)) { goto L_801D0B84; } // 801D0B78
  c->r[0]=c->r[6]|0x00000004u; // 801D0B7C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0B80
L_801D0B84:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D0B84
  W16(c->r[4]+0x00000004u,c->r[0]); // 801D0B88
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B8C
  if (crb(c,2)) { goto L_801D0B9C; } // 801D0B90
  c->r[0]=c->r[6]|0x00000008u; // 801D0B94
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0B98
L_801D0B9C:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D0B9C
  W16(c->r[4]+0x00000006u,c->r[0]); // 801D0BA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D0BA4
  if (crb(c,2)) { goto L_801D0BB4; } // 801D0BA8
  c->r[0]=c->r[6]|0x00000010u; // 801D0BAC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0BB0
L_801D0BB4:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 801D0BB4
  W16(c->r[4]+0x00000008u,c->r[0]); // 801D0BB8
  cmps(c,0,(int32_t)c->r[0],0); // 801D0BBC
  if (crb(c,2)) { goto L_801D0BCC; } // 801D0BC0
  c->r[0]=c->r[6]|0x00000020u; // 801D0BC4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0BC8
L_801D0BCC:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801D0BCC
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801D0BD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D0BD4
  if (crb(c,2)) { goto L_801D0BE4; } // 801D0BD8
  c->r[0]=c->r[6]|0x00000040u; // 801D0BDC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0BE0
L_801D0BE4:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801D0BE4
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801D0BE8
  cmps(c,0,(int32_t)c->r[0],0); // 801D0BEC
  if (crb(c,2)) { goto L_801D0BFC; } // 801D0BF0
  c->r[0]=c->r[6]|0x00000080u; // 801D0BF4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0BF8
L_801D0BFC:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801D0BFC
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 801D0C00
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C04
  if (crb(c,2)) { goto L_801D0C14; } // 801D0C08
  c->r[0]=c->r[6]|0x00000100u; // 801D0C0C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0C10
L_801D0C14:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 801D0C14
  W16(c->r[4]+0x00000010u,c->r[0]); // 801D0C18
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C1C
  if (crb(c,2)) { goto L_801D0C2C; } // 801D0C20
  c->r[0]=c->r[6]|0x00000200u; // 801D0C24
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0C28
L_801D0C2C:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 801D0C2C
  W16(c->r[4]+0x00000012u,c->r[0]); // 801D0C30
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C34
  if (crb(c,2)) { goto L_801D0C44; } // 801D0C38
  c->r[0]=c->r[6]|0x00000400u; // 801D0C3C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0C40
L_801D0C44:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 801D0C44
  W16(c->r[4]+0x00000014u,c->r[0]); // 801D0C48
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C4C
  if (crb(c,2)) { goto L_801D0C5C; } // 801D0C50
  c->r[0]=c->r[6]|0x00000800u; // 801D0C54
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0C58
L_801D0C5C:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 801D0C5C
  W16(c->r[4]+0x00000016u,c->r[0]); // 801D0C60
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C64
  if (crb(c,2)) { goto L_801D0C74; } // 801D0C68
  c->r[0]=c->r[6]|0x00001000u; // 801D0C6C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0C70
L_801D0C74:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 801D0C74
  W16(c->r[4]+0x00000018u,c->r[0]); // 801D0C78
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C7C
  if (crb(c,2)) { goto L_801D0C8C; } // 801D0C80
  c->r[0]=c->r[6]|0x00002000u; // 801D0C84
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0C88
L_801D0C8C:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 801D0C8C
  W16(c->r[4]+0x0000001Au,c->r[0]); // 801D0C90
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C94
  if (crb(c,2)) { goto L_801D0CA4; } // 801D0C98
  c->r[0]=c->r[6]|0x00004000u; // 801D0C9C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0CA0
L_801D0CA4:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 801D0CA4
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 801D0CA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D0CAC
  if (crb(c,2)) { goto L_801D0CBC; } // 801D0CB0
  c->r[0]=c->r[6]|0x00008000u; // 801D0CB4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0CB8
L_801D0CBC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D0CBC
  W16(c->r[4]+0x00000100u,c->r[6]); // 801D0CC0
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D0CC4
  c->r[0]=c->r[0]|0x03000000u; // 801D0CC8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0CCC
  c->lr=0x801D0CD4u; f_800CBAE0(c); // 801D0CD0
L_801D0CD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0CD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0CD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0CDC
  c->lr=c->r[0]; // 801D0CE0
  c->r[1]=c->r[1]+0x00000010u; // 801D0CE4
  return; // 801D0CE8
}

// SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
void f_801D0CF0(Ctx* __restrict c) {
  trace_call(0x801D0CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0CF0
  c->r[0]=c->lr; // 801D0CF4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801D0CF8
  c->r[11]=c->r[1]+0x000000A0u; // 801D0CFC
  c->lr=0x801D0D04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0D00
  c->r[31]=c->r[3]|c->r[3]; // 801D0D04
  c->r[26]=c->r[4]|c->r[4]; // 801D0D08
  if (!crb(c,6)) { goto L_801D0D30; } // 801D0D0C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801D0D10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801D0D14
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801D0D18
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801D0D1C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801D0D20
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801D0D24
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801D0D28
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801D0D2C
L_801D0D30:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D0D30
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D0D34
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D0D38
  W32(c->r[1]+0x00000014u,c->r[6]); // 801D0D3C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D0D40
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801D0D44
  W32(c->r[1]+0x00000020u,c->r[9]); // 801D0D48
  W32(c->r[1]+0x00000024u,c->r[10]); // 801D0D4C
  c->lr=0x801D0D54u; f_800CBAA0(c); // 801D0D50
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D0D54
  c->r[30]=c->r[3]|c->r[3]; // 801D0D58
  cmps(c,0,(int32_t)c->r[0],0); // 801D0D5C
  if (!crb(c,2)) { goto L_801D0D6C; } // 801D0D60
  c->lr=0x801D0D68u; f_800CBAE0(c); // 801D0D64
  goto L_801D0E5C; // 801D0D68
L_801D0D6C:;
  cmpu(c,0,c->r[26],0x00000001u); // 801D0D6C
  if (!crb(c,2)) { goto L_801D0D7C; } // 801D0D70
  c->r[27]=0u+0x00000002u; // 801D0D74
  goto L_801D0D94; // 801D0D78
L_801D0D7C:;
  cmpu(c,0,c->r[26],0x00000002u); // 801D0D7C
  if (!crb(c,2)) { goto L_801D0D8C; } // 801D0D80
  c->r[27]=0u+0x00000005u; // 801D0D84
  goto L_801D0D94; // 801D0D88
L_801D0D8C:;
  c->lr=0x801D0D90u; f_800CBAE0(c); // 801D0D8C
  goto L_801D0E5C; // 801D0D90
L_801D0D94:;
  c->r[3]=c->r[1]+0x000000A8u; // 801D0D94
  c->r[0]=c->r[1]+0x00000008u; // 801D0D98
  c->r[4]=0u+0x02000000u; // 801D0D9C
  W32(c->r[1]+0x00000074u,c->r[4]); // 801D0DA0
  c->r[29]=c->r[1]+0x00000068u; // 801D0DA4
  c->r[28]=0u+0x00000000u; // 801D0DA8
  W32(c->r[1]+0x00000078u,c->r[3]); // 801D0DAC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801D0DB0
  goto L_801D0DD4; // 801D0DB4
L_801D0DB8:;
  c->r[3]=c->r[1]+0x00000074u; // 801D0DB8
  c->r[4]=0u+0x00000001u; // 801D0DBC
  c->lr=0x801D0DC4u; f_80216B8C(c); // 801D0DC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0DC4
  c->r[28]=c->r[28]+0x00000001u; // 801D0DC8
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D0DCC
  c->r[29]=c->r[29]+0x00000002u; // 801D0DD0
L_801D0DD4:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801D0DD4
  if (crb(c,0)) { IRQCHK(c); goto L_801D0DB8; } // 801D0DD8
  cmpu(c,0,c->r[26],0x00000001u); // 801D0DDC
  if (!crb(c,2)) { goto L_801D0E0C; } // 801D0DE0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0DE4
  c->r[0]=R16(c->r[1]+0x00000068u); // 801D0DE8
  W16(c->r[3]+0x00000140u,c->r[0]); // 801D0DEC
  c->r[0]=R16(c->r[1]+0x0000006Au); // 801D0DF0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0DF4
  W16(c->r[3]+0x00000142u,c->r[0]); // 801D0DF8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D0DFC
  c->r[0]=c->r[0]|0x20000000u; // 801D0E00
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0E04
  goto L_801D0E54; // 801D0E08
L_801D0E0C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0E0C
  c->r[0]=R16(c->r[1]+0x00000068u); // 801D0E10
  W16(c->r[3]+0x00000146u,c->r[0]); // 801D0E14
  c->r[0]=R16(c->r[1]+0x0000006Au); // 801D0E18
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0E1C
  c->r[5]=R16(c->r[1]+0x0000006Cu); // 801D0E20
  W16(c->r[3]+0x00000148u,c->r[0]); // 801D0E24
  c->r[4]=R16(c->r[1]+0x0000006Eu); // 801D0E28
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0E2C
  c->r[0]=R16(c->r[1]+0x00000070u); // 801D0E30
  W16(c->r[3]+0x0000014Au,c->r[5]); // 801D0E34
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0E38
  W16(c->r[3]+0x0000014Cu,c->r[4]); // 801D0E3C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0E40
  W16(c->r[3]+0x0000014Eu,c->r[0]); // 801D0E44
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D0E48
  c->r[0]=c->r[0]|0x40000000u; // 801D0E4C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D0E50
L_801D0E54:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0E54
  c->lr=0x801D0E5Cu; f_800CBAE0(c); // 801D0E58
L_801D0E5C:;
  c->r[11]=c->r[1]+0x000000A0u; // 801D0E5C
  c->lr=0x801D0E64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0E60
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801D0E64
  c->lr=c->r[0]; // 801D0E68
  c->r[1]=c->r[1]+0x000000A0u; // 801D0E6C
  return; // 801D0E70
}

// GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801D0E80(Ctx* __restrict c) {
  trace_call(0x801D0E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0E80
  c->r[0]=c->lr; // 801D0E84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0E88
  c->r[0]=R8(c->r[13]+0xFFFFAE30u); // 801D0E8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D0E90
  if (!crb(c,2)) { goto L_801D0EF4; } // 801D0E94
  c->r[3]=0u+0x80380000u; // 801D0E98
  c->r[4]=0u+0x801D0000u; // 801D0E9C
  c->r[3]=c->r[3]+0xFFFFAB3Cu; // 801D0EA0
  c->r[0]=0u+0x00000000u; // 801D0EA4
  c->r[8]=c->r[3]+0x00000004u; // 801D0EA8
  c->r[5]=0u+0x80380000u; // 801D0EAC
  c->r[7]=c->r[3]+0x00000010u; // 801D0EB0
  c->r[6]=c->r[3]+0x0000001Cu; // 801D0EB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D0EB8
  c->r[4]=c->r[4]+0x00000F10u; // 801D0EBC
  c->r[5]=c->r[5]+0xFFFFAB30u; // 801D0EC0
  W32(c->r[3]+0x00000004u,c->r[8]); // 801D0EC4
  W32(c->r[3]+0x00000008u,c->r[8]); // 801D0EC8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D0ECC
  W32(c->r[3]+0x00000010u,c->r[7]); // 801D0ED0
  W32(c->r[3]+0x00000014u,c->r[7]); // 801D0ED4
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D0ED8
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 801D0EDC
  W32(c->r[3]+0x00000020u,c->r[6]); // 801D0EE0
  W8(c->r[3]+0x00000024u,c->r[0]); // 801D0EE4
  c->lr=0x801D0EECu; f_80216C54(c); // 801D0EE8
  c->r[0]=0u+0x00000001u; // 801D0EEC
  W8(c->r[13]+0xFFFFAE30u,c->r[0]); // 801D0EF0
L_801D0EF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0EF4
  c->r[3]=0u+0x80380000u; // 801D0EF8
  c->r[3]=c->r[3]+0xFFFFAB3Cu; // 801D0EFC
  c->lr=c->r[0]; // 801D0F00
  c->r[1]=c->r[1]+0x00000010u; // 801D0F04
  return; // 801D0F08
}

// __dt__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801D0F10(Ctx* __restrict c) {
  trace_call(0x801D0F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0F10
  c->r[0]=c->lr; // 801D0F14
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0F20
  c->r[31]=c->r[4]|c->r[4]; // 801D0F24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0F28
  c->r[30]=c->r[3]|c->r[3]; // 801D0F2C
  if (crb(c,2)) { goto L_801D0F78; } // 801D0F30
  c->r[3]=addc(c,c->r[3],0x00000018u,0); cr0(c,c->r[3]); // 801D0F34
  if (crb(c,2)) { goto L_801D0F44; } // 801D0F38
  c->r[4]=0u+0x00000000u; // 801D0F3C
  c->lr=0x801D0F44u; f_801F9DB0(c); // 801D0F40
L_801D0F44:;
  c->r[3]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[3]); // 801D0F44
  if (crb(c,2)) { goto L_801D0F54; } // 801D0F48
  c->r[4]=0u+0x00000000u; // 801D0F4C
  c->lr=0x801D0F54u; f_801F9DB0(c); // 801D0F50
L_801D0F54:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D0F54
  if (crb(c,2)) { goto L_801D0F68; } // 801D0F58
  c->r[3]=c->r[30]|c->r[30]; // 801D0F5C
  c->r[4]=0u+0x00000000u; // 801D0F60
  c->lr=0x801D0F68u; f_801F9DB0(c); // 801D0F64
L_801D0F68:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D0F68
  if (!crb(c,1)) { goto L_801D0F78; } // 801D0F6C
  c->r[3]=c->r[30]|c->r[30]; // 801D0F70
  c->lr=0x801D0F78u; f_800B9AD0(c); // 801D0F74
L_801D0F78:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0F7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0F80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0F84
  c->lr=c->r[0]; // 801D0F88
  c->r[1]=c->r[1]+0x00000010u; // 801D0F8C
  return; // 801D0F90
}

// GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi
void f_801D0FA0(Ctx* __restrict c) {
  trace_call(0x801D0FA0u);
  c->r[0]=c->r[4]+0x00000010u; // 801D0FA0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 801D0FA4
  return; // 801D0FA8
}

// fn_801D0FB0
void f_801D0FB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0FB0
  c->r[0]=c->lr; // 801D0FB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D0FB8
  c->r[11]=c->r[1]+0x00000040u; // 801D0FBC
  c->lr=0x801D0FC4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0FC0
  c->r[0]=R8(c->r[3]+0x00000024u); // 801D0FC4
  c->r[23]=c->r[3]|c->r[3]; // 801D0FC8
  c->r[24]=c->r[4]|c->r[4]; // 801D0FCC
  c->r[25]=c->r[5]|c->r[5]; // 801D0FD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D0FD4
  if (!crb(c,2)) { goto L_801D1098; } // 801D0FD8
  c->r[4]=0u+0x38E40000u; // 801D0FDC
  c->r[27]=c->r[24]|c->r[24]; // 801D0FE0
  c->r[0]=c->r[4]+0xFFFF8E39u; // 801D0FE4
  c->r[26]=0u+0x00000000u; // 801D0FE8
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801D0FEC
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; cr0(c,c->r[0]); // 801D0FF0
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D0FF4
  if (crb(c,2)) { goto L_801D1068; } // 801D0FF8
  c->r[31]=c->r[3]+0x00000010u; // 801D0FFC
  c->r[29]=0u+0x802D0000u; // 801D1000
  c->r[30]=0u+0x802D0000u; // 801D1004
  goto L_801D105C; // 801D1008
L_801D100C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D100C
  c->r[28]=c->r[27]|c->r[27]; // 801D1010
  if (crb(c,2)) { goto L_801D1024; } // 801D1014
  c->r[3]=c->r[27]|c->r[27]; // 801D1018
  c->lr=0x801D1020u; f_801CDDD0(c); // 801D101C
  c->r[28]=c->r[3]|c->r[3]; // 801D1020
L_801D1024:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D1024
  if (!crb(c,2)) { goto L_801D1040; } // 801D1028
  c->r[3]=c->r[29]+0xFFFFD144u; // 801D102C
  c->r[5]=c->r[30]+0xFFFFD120u; // 801D1030
  c->r[4]=0u+0x00000233u; // 801D1034
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1038
  c->lr=0x801D1040u; f_801F9770(c); // 801D103C
L_801D1040:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D1040
  c->r[3]=c->r[23]+0x0000000Cu; // 801D1044
  c->r[4]=c->r[1]+0x00000008u; // 801D1048
  c->r[5]=c->r[28]+0x00000040u; // 801D104C
  c->lr=0x801D1054u; f_801FA130(c); // 801D1050
  c->r[27]=c->r[27]+0x00000048u; // 801D1054
  c->r[26]=c->r[26]+0x00000001u; // 801D1058
L_801D105C:;
  c->r[0]=R32(c->r[23]+0x00000028u); // 801D105C
  cmpu(c,0,c->r[26],c->r[0]); // 801D1060
  if (crb(c,0)) { IRQCHK(c); goto L_801D100C; } // 801D1064
L_801D1068:;
  c->r[0]=c->r[24]+c->r[25]; // 801D1068
  cmpu(c,0,c->r[27],c->r[0]); // 801D106C
  if (!crb(c,1)) { goto L_801D1090; } // 801D1070
  c->r[3]=0u+0x802D0000u; // 801D1074
  c->r[5]=0u+0x802D0000u; // 801D1078
  c->r[3]=c->r[3]+0xFFFFCFF0u; // 801D107C
  c->r[4]=0u+0x00000041u; // 801D1080
  c->r[5]=c->r[5]+0xFFFFD008u; // 801D1084
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1088
  c->lr=0x801D1090u; f_801F9770(c); // 801D108C
L_801D1090:;
  c->r[0]=0u+0x00000001u; // 801D1090
  W8(c->r[23]+0x00000024u,c->r[0]); // 801D1094
L_801D1098:;
  c->r[11]=c->r[1]+0x00000040u; // 801D1098
  c->lr=0x801D10A0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D109C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D10A0
  c->lr=c->r[0]; // 801D10A4
  c->r[1]=c->r[1]+0x00000040u; // 801D10A8
  return; // 801D10AC
}

// fn_801D10B0
void f_801D10B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D10B0
  c->r[0]=c->lr; // 801D10B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D10B8
  c->r[11]=c->r[1]+0x00000080u; // 801D10BC
  c->lr=0x801D10C4u; f_80217878(c); // 801D10C0
  c->r[19]=0u+0x802D0000u; // 801D10C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D10C8
  c->r[15]=c->r[3]|c->r[3]; // 801D10CC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D10D0
  c->r[19]=c->r[19]+0xFFFFCFF0u; // 801D10D4
  W32(c->r[1]+0x00000010u,c->r[6]); // 801D10D8
  c->lr=0x801D10E0u; f_800CBAA0(c); // 801D10DC
  W32(c->r[1]+0x00000028u,c->r[3]); // 801D10E0
  c->lr=0x801D10E8u; f_800CBAA0(c); // 801D10E4
  c->r[0]=R32(c->r[15]+0x00000018u); // 801D10E8
  W32(c->r[1]+0x00000024u,c->r[3]); // 801D10EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D10F0
  if (crb(c,2)) { goto L_801D1320; } // 801D10F4
  c->r[18]=0u+0x80380000u; // 801D10F8
  c->r[27]=0u+0x802D0000u; // 801D10FC
  c->r[18]=c->r[18]+0xFFFFAB3Cu; // 801D1100
  c->r[28]=0u+0x802D0000u; // 801D1104
  c->r[20]=0u+0x802D0000u; // 801D1108
  c->r[21]=0u+0x802D0000u; // 801D110C
  c->r[29]=c->r[18]+0x00000010u; // 801D1110
  c->r[22]=0u+0x802D0000u; // 801D1114
  c->r[23]=0u+0x802D0000u; // 801D1118
  c->r[24]=0u+0x802D0000u; // 801D111C
  c->r[25]=0u+0x802D0000u; // 801D1120
  c->r[26]=0u+0x00000000u; // 801D1124
  c->r[14]=0u+0x801D0000u; // 801D1128
  goto L_801D1314; // 801D112C
L_801D1130:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D1130
  if (!crb(c,2)) { goto L_801D114C; } // 801D1134
  c->r[3]=c->r[20]+0xFFFFD114u; // 801D1138
  c->r[5]=c->r[21]+0xFFFFD0F0u; // 801D113C
  c->r[4]=0u+0x000001F1u; // 801D1140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1144
  c->lr=0x801D114Cu; f_801F9770(c); // 801D1148
L_801D114C:;
  c->r[16]=R32(c->r[15]+0x0000001Cu); // 801D114C
  cmps(c,0,(int32_t)c->r[16],0); // 801D1150
  if (!crb(c,2)) { goto L_801D116C; } // 801D1154
  c->r[3]=c->r[22]+0xFFFFD0B4u; // 801D1158
  c->r[5]=c->r[23]+0xFFFFD090u; // 801D115C
  c->r[4]=0u+0x0000023Du; // 801D1160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1164
  c->lr=0x801D116Cu; f_801F9770(c); // 801D1168
L_801D116C:;
  c->r[17]=addc(c,c->r[16],0xFFFFFFC0u,0); cr0(c,c->r[17]); // 801D116C
  if (!crb(c,2)) { goto L_801D1188; } // 801D1170
  c->r[3]=c->r[24]+0xFFFFD0E4u; // 801D1174
  c->r[5]=c->r[25]+0xFFFFD0C0u; // 801D1178
  c->r[4]=0u+0x00000193u; // 801D117C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1180
  c->lr=0x801D1188u; f_801F9770(c); // 801D1184
L_801D1188:;
  c->r[12]=R32(c->r[17]+0x00000038u); // 801D1188
  cmps(c,0,(int32_t)c->r[12],0); // 801D118C
  if (crb(c,2)) { goto L_801D11A8; } // 801D1190
  c->r[3]=c->r[17]|c->r[17]; // 801D1194
  c->r[5]=R32(c->r[17]+0x0000003Cu); // 801D1198
  c->r[4]=0u+0x00000001u; // 801D119C
  c->ctr=c->r[12]; // 801D11A0
  if (true) { c->lr=0x801D11A8u; dispatch(c,c->ctr); } // 801D11A4
L_801D11A8:;
  c->r[0]=R8(c->r[13]+0xFFFFAE30u); // 801D11A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D11AC
  if (!crb(c,2)) { goto L_801D1204; } // 801D11B0
  c->r[0]=c->r[18]+0x00000004u; // 801D11B4
  c->r[6]=c->r[18]+0x00000010u; // 801D11B8
  c->r[7]=c->r[18]+0x0000001Cu; // 801D11BC
  c->r[5]=0u+0x80380000u; // 801D11C0
  W32(c->r[18]+0x00000000u,c->r[26]); // 801D11C4
  c->r[3]=c->r[18]|c->r[18]; // 801D11C8
  c->r[4]=c->r[14]+0x00000F10u; // 801D11CC
  c->r[5]=c->r[5]+0xFFFFAB30u; // 801D11D0
  W32(c->r[18]+0x00000004u,c->r[0]); // 801D11D4
  W32(c->r[18]+0x00000008u,c->r[0]); // 801D11D8
  W32(c->r[18]+0x0000000Cu,c->r[26]); // 801D11DC
  W32(c->r[18]+0x00000010u,c->r[6]); // 801D11E0
  W32(c->r[18]+0x00000014u,c->r[6]); // 801D11E4
  W32(c->r[18]+0x00000018u,c->r[26]); // 801D11E8
  W32(c->r[18]+0x0000001Cu,c->r[7]); // 801D11EC
  W32(c->r[18]+0x00000020u,c->r[7]); // 801D11F0
  W8(c->r[18]+0x00000024u,c->r[26]); // 801D11F4
  c->lr=0x801D11FCu; f_80216C54(c); // 801D11F8
  c->r[0]=0u+0x00000001u; // 801D11FC
  W8(c->r[13]+0xFFFFAE30u,c->r[0]); // 801D1200
L_801D1204:;
  c->lr=0x801D1208u; f_800CBAA0(c); // 801D1204
  cmps(c,0,(int32_t)c->r[17],0); // 801D1208
  c->r[31]=c->r[3]|c->r[3]; // 801D120C
  if (!crb(c,2)) { goto L_801D1228; } // 801D1210
  c->r[3]=c->r[19]+0x00000000u; // 801D1214
  c->r[5]=c->r[19]+0x0000005Cu; // 801D1218
  c->r[4]=0u+0x000000D4u; // 801D121C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1220
  c->lr=0x801D1228u; f_801F9770(c); // 801D1224
L_801D1228:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 801D1228
  cmps(c,0,(int32_t)c->r[0],0); // 801D122C
  if (crb(c,2)) { goto L_801D123C; } // 801D1230
  c->r[3]=R32(c->r[17]+0x00000000u); // 801D1234
  c->lr=0x801D123Cu; f_800EC7C0(c); // 801D1238
L_801D123C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D123C
  if (!crb(c,2)) { goto L_801D1258; } // 801D1240
  c->r[3]=c->r[19]+0x00000000u; // 801D1244
  c->r[5]=c->r[19]+0x00000084u; // 801D1248
  c->r[4]=0u+0x0000009Au; // 801D124C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1250
  c->lr=0x801D1258u; f_801F9770(c); // 801D1254
L_801D1258:;
  c->r[3]=c->r[17]|c->r[17]; // 801D1258
  c->r[4]=0u+0xFFFFFFFFu; // 801D125C
  c->lr=0x801D1264u; f_801CDE20(c); // 801D1260
  c->lr=0x801D1268u; f_800CBAA0(c); // 801D1264
  c->r[0]=R8(c->r[17]+0x0000001Du); // 801D1268
  c->r[30]=c->r[3]|c->r[3]; // 801D126C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1270
  if (crb(c,2)) { goto L_801D12A8; } // 801D1274
  cmps(c,0,(int32_t)c->r[17],0); // 801D1278
  if (!crb(c,2)) { goto L_801D1294; } // 801D127C
  c->r[3]=c->r[27]+0xFFFFD144u; // 801D1280
  c->r[5]=c->r[28]+0xFFFFD120u; // 801D1284
  c->r[4]=0u+0x00000233u; // 801D1288
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D128C
  c->lr=0x801D1294u; f_801F9770(c); // 801D1290
L_801D1294:;
  c->r[16]=c->r[17]+0x00000040u; // 801D1294
  c->r[3]=c->r[18]+0x00000018u; // 801D1298
  c->r[4]=c->r[16]|c->r[16]; // 801D129C
  c->lr=0x801D12A4u; f_801FA230(c); // 801D12A0
  goto L_801D12D4; // 801D12A4
L_801D12A8:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D12A8
  if (!crb(c,2)) { goto L_801D12C4; } // 801D12AC
  c->r[3]=c->r[27]+0xFFFFD144u; // 801D12B0
  c->r[5]=c->r[28]+0xFFFFD120u; // 801D12B4
  c->r[4]=0u+0x00000233u; // 801D12B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D12BC
  c->lr=0x801D12C4u; f_801F9770(c); // 801D12C0
L_801D12C4:;
  c->r[16]=c->r[17]+0x00000040u; // 801D12C4
  c->r[3]=c->r[18]|c->r[18]; // 801D12C8
  c->r[4]=c->r[16]|c->r[16]; // 801D12CC
  c->lr=0x801D12D4u; f_801FA230(c); // 801D12D0
L_801D12D4:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D12D4
  if (!crb(c,2)) { goto L_801D12F0; } // 801D12D8
  c->r[3]=c->r[27]+0xFFFFD144u; // 801D12DC
  c->r[5]=c->r[28]+0xFFFFD120u; // 801D12E0
  c->r[4]=0u+0x00000233u; // 801D12E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D12E8
  c->lr=0x801D12F0u; f_801F9770(c); // 801D12EC
L_801D12F0:;
  W32(c->r[1]+0x00000018u,c->r[29]); // 801D12F0
  c->r[5]=c->r[16]|c->r[16]; // 801D12F4
  c->r[3]=c->r[18]+0x0000000Cu; // 801D12F8
  c->r[4]=c->r[1]+0x00000018u; // 801D12FC
  c->lr=0x801D1304u; f_801FA130(c); // 801D1300
  c->r[3]=c->r[30]|c->r[30]; // 801D1304
  c->lr=0x801D130Cu; f_800CBAE0(c); // 801D1308
  c->r[3]=c->r[31]|c->r[31]; // 801D130C
  c->lr=0x801D1314u; f_800CBAE0(c); // 801D1310
L_801D1314:;
  c->r[0]=R32(c->r[15]+0x00000018u); // 801D1314
  cmps(c,0,(int32_t)c->r[0],0); // 801D1318
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1130; } // 801D131C
L_801D1320:;
  c->r[0]=R32(c->r[15]+0x0000000Cu); // 801D1320
  cmps(c,0,(int32_t)c->r[0],0); // 801D1324
  if (!crb(c,2)) { goto L_801D133C; } // 801D1328
  c->r[3]=R32(c->r[1]+0x00000024u); // 801D132C
  c->lr=0x801D1334u; f_800CBAE0(c); // 801D1330
  c->r[17]=0u+0x00000000u; // 801D1334
  goto L_801D1418; // 801D1338
L_801D133C:;
  if (!crb(c,2)) { goto L_801D135C; } // 801D133C
  c->r[3]=0u+0x802D0000u; // 801D1340
  c->r[5]=0u+0x802D0000u; // 801D1344
  c->r[3]=c->r[3]+0xFFFFD114u; // 801D1348
  c->r[4]=0u+0x000001F1u; // 801D134C
  c->r[5]=c->r[5]+0xFFFFD0F0u; // 801D1350
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1354
  c->lr=0x801D135Cu; f_801F9770(c); // 801D1358
L_801D135C:;
  c->r[14]=R32(c->r[15]+0x00000010u); // 801D135C
  cmps(c,0,(int32_t)c->r[14],0); // 801D1360
  if (!crb(c,2)) { goto L_801D1384; } // 801D1364
  c->r[3]=0u+0x802D0000u; // 801D1368
  c->r[5]=0u+0x802D0000u; // 801D136C
  c->r[3]=c->r[3]+0xFFFFD0B4u; // 801D1370
  c->r[4]=0u+0x0000023Du; // 801D1374
  c->r[5]=c->r[5]+0xFFFFD090u; // 801D1378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D137C
  c->lr=0x801D1384u; f_801F9770(c); // 801D1380
L_801D1384:;
  c->r[16]=addc(c,c->r[14],0xFFFFFFC0u,0); cr0(c,c->r[16]); // 801D1384
  if (!crb(c,2)) { goto L_801D13A8; } // 801D1388
  c->r[3]=0u+0x802D0000u; // 801D138C
  c->r[5]=0u+0x802D0000u; // 801D1390
  c->r[3]=c->r[3]+0xFFFFD0E4u; // 801D1394
  c->r[4]=0u+0x00000193u; // 801D1398
  c->r[5]=c->r[5]+0xFFFFD0C0u; // 801D139C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D13A0
  c->lr=0x801D13A8u; f_801F9770(c); // 801D13A4
L_801D13A8:;
  c->r[0]=R32(c->r[15]+0x00000010u); // 801D13A8
  c->r[3]=c->r[15]+0x0000000Cu; // 801D13AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D13B0
  c->r[4]=c->r[1]+0x0000001Cu; // 801D13B4
  c->lr=0x801D13BCu; f_801F9EE0(c); // 801D13B8
  cmps(c,0,(int32_t)c->r[16],0); // 801D13BC
  c->r[17]=c->r[16]|c->r[16]; // 801D13C0
  if (crb(c,2)) { goto L_801D13D4; } // 801D13C4
  c->r[3]=c->r[16]|c->r[16]; // 801D13C8
  c->lr=0x801D13D0u; f_801CDDD0(c); // 801D13CC
  c->r[17]=c->r[3]|c->r[3]; // 801D13D0
L_801D13D4:;
  cmps(c,0,(int32_t)c->r[16],0); // 801D13D4
  c->r[14]=c->r[15]+0x00000004u; // 801D13D8
  if (!crb(c,2)) { goto L_801D13FC; } // 801D13DC
  c->r[3]=0u+0x802D0000u; // 801D13E0
  c->r[5]=0u+0x802D0000u; // 801D13E4
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D13E8
  c->r[4]=0u+0x00000233u; // 801D13EC
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D13F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D13F4
  c->lr=0x801D13FCu; f_801F9770(c); // 801D13F8
L_801D13FC:;
  W32(c->r[1]+0x00000020u,c->r[14]); // 801D13FC
  c->r[3]=c->r[15]|c->r[15]; // 801D1400
  c->r[4]=c->r[1]+0x00000020u; // 801D1404
  c->r[5]=c->r[16]+0x00000040u; // 801D1408
  c->lr=0x801D1410u; f_801FA130(c); // 801D140C
  c->r[3]=R32(c->r[1]+0x00000024u); // 801D1410
  c->lr=0x801D1418u; f_800CBAE0(c); // 801D1414
L_801D1418:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D1418
  if (!crb(c,2)) { goto L_801D1430; } // 801D141C
  c->r[3]=R32(c->r[1]+0x00000028u); // 801D1420
  c->lr=0x801D1428u; f_800CBAE0(c); // 801D1424
  c->r[3]=0u+0x00000000u; // 801D1428
  goto L_801D1570; // 801D142C
L_801D1430:;
  c->r[4]=0u+0x801D0000u; // 801D1430
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D1434
  c->r[5]=c->r[17]|c->r[17]; // 801D1438
  c->r[4]=c->r[4]+0xFFFFE870u; // 801D143C
  c->lr=0x801D1444u; f_800EC840(c); // 801D1440
  cmps(c,0,(int32_t)c->r[3],0); // 801D1444
  c->r[4]=c->r[3]|c->r[3]; // 801D1448
  if (!crb(c,2)) { goto L_801D154C; } // 801D144C
  cmps(c,0,(int32_t)c->r[17],0); // 801D1450
  if (!crb(c,2)) { goto L_801D146C; } // 801D1454
  c->r[3]=c->r[19]+0x00000000u; // 801D1458
  c->r[5]=c->r[19]+0x00000084u; // 801D145C
  c->r[4]=0u+0x0000009Au; // 801D1460
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1464
  c->lr=0x801D146Cu; f_801F9770(c); // 801D1468
L_801D146C:;
  c->r[3]=c->r[17]|c->r[17]; // 801D146C
  c->r[4]=0u+0xFFFFFFFFu; // 801D1470
  c->lr=0x801D1478u; f_801CDE20(c); // 801D1474
  c->lr=0x801D147Cu; f_800CBAA0(c); // 801D1478
  c->r[0]=R8(c->r[17]+0x0000001Du); // 801D147C
  c->r[14]=c->r[3]|c->r[3]; // 801D1480
  cmps(c,0,(int32_t)c->r[0],0); // 801D1484
  if (crb(c,2)) { goto L_801D14C4; } // 801D1488
  cmps(c,0,(int32_t)c->r[17],0); // 801D148C
  if (!crb(c,2)) { goto L_801D14B0; } // 801D1490
  c->r[3]=0u+0x802D0000u; // 801D1494
  c->r[5]=0u+0x802D0000u; // 801D1498
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D149C
  c->r[4]=0u+0x00000233u; // 801D14A0
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D14A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D14A8
  c->lr=0x801D14B0u; f_801F9770(c); // 801D14AC
L_801D14B0:;
  c->r[18]=c->r[17]+0x00000040u; // 801D14B0
  c->r[3]=c->r[15]+0x00000018u; // 801D14B4
  c->r[4]=c->r[18]|c->r[18]; // 801D14B8
  c->lr=0x801D14C0u; f_801FA230(c); // 801D14BC
  goto L_801D14F8; // 801D14C0
L_801D14C4:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D14C4
  if (!crb(c,2)) { goto L_801D14E8; } // 801D14C8
  c->r[3]=0u+0x802D0000u; // 801D14CC
  c->r[5]=0u+0x802D0000u; // 801D14D0
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D14D4
  c->r[4]=0u+0x00000233u; // 801D14D8
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D14DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D14E0
  c->lr=0x801D14E8u; f_801F9770(c); // 801D14E4
L_801D14E8:;
  c->r[18]=c->r[17]+0x00000040u; // 801D14E8
  c->r[3]=c->r[15]|c->r[15]; // 801D14EC
  c->r[4]=c->r[18]|c->r[18]; // 801D14F0
  c->lr=0x801D14F8u; f_801FA230(c); // 801D14F4
L_801D14F8:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D14F8
  c->r[16]=c->r[15]+0x00000010u; // 801D14FC
  if (!crb(c,2)) { goto L_801D1520; } // 801D1500
  c->r[3]=0u+0x802D0000u; // 801D1504
  c->r[5]=0u+0x802D0000u; // 801D1508
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D150C
  c->r[4]=0u+0x00000233u; // 801D1510
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D1514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1518
  c->lr=0x801D1520u; f_801F9770(c); // 801D151C
L_801D1520:;
  W32(c->r[1]+0x00000014u,c->r[16]); // 801D1520
  c->r[5]=c->r[18]|c->r[18]; // 801D1524
  c->r[3]=c->r[15]+0x0000000Cu; // 801D1528
  c->r[4]=c->r[1]+0x00000014u; // 801D152C
  c->lr=0x801D1534u; f_801FA130(c); // 801D1530
  c->r[3]=c->r[14]|c->r[14]; // 801D1534
  c->lr=0x801D153Cu; f_800CBAE0(c); // 801D1538
  c->r[3]=R32(c->r[1]+0x00000028u); // 801D153C
  c->lr=0x801D1544u; f_800CBAE0(c); // 801D1540
  c->r[3]=0u+0x00000000u; // 801D1544
  goto L_801D1570; // 801D1548
L_801D154C:;
  c->r[3]=c->r[17]|c->r[17]; // 801D154C
  c->lr=0x801D1554u; f_801D0720(c); // 801D1550
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D1554
  W32(c->r[17]+0x00000038u,c->r[0]); // 801D1558
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D155C
  c->r[3]=R32(c->r[1]+0x00000028u); // 801D1560
  W32(c->r[17]+0x0000003Cu,c->r[0]); // 801D1564
  c->lr=0x801D156Cu; f_800CBAE0(c); // 801D1568
  c->r[3]=c->r[17]|c->r[17]; // 801D156C
L_801D1570:;
  c->r[11]=c->r[1]+0x00000080u; // 801D1570
  c->lr=0x801D1578u; f_802178C4(c); // 801D1574
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D1578
  c->lr=c->r[0]; // 801D157C
  c->r[1]=c->r[1]+0x00000080u; // 801D1580
  return; // 801D1584
}

// fn_801D1590
void f_801D1590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1590
  c->r[0]=c->lr; // 801D1594
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1598
  c->r[11]=c->r[1]+0x00000030u; // 801D159C
  c->lr=0x801D15A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D15A0
  c->r[29]=0u+0x802D0000u; // 801D15A4
  c->r[26]=c->r[3]|c->r[3]; // 801D15A8
  c->r[27]=c->r[4]|c->r[4]; // 801D15AC
  c->r[29]=c->r[29]+0xFFFFCFF0u; // 801D15B0
  c->lr=0x801D15B8u; f_800CBAA0(c); // 801D15B4
  cmps(c,0,(int32_t)c->r[27],0); // 801D15B8
  c->r[31]=c->r[3]|c->r[3]; // 801D15BC
  if (!crb(c,2)) { goto L_801D15D8; } // 801D15C0
  c->r[3]=c->r[29]+0x00000000u; // 801D15C4
  c->r[5]=c->r[29]+0x0000005Cu; // 801D15C8
  c->r[4]=0u+0x000000D4u; // 801D15CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D15D0
  c->lr=0x801D15D8u; f_801F9770(c); // 801D15D4
L_801D15D8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801D15D8
  cmps(c,0,(int32_t)c->r[0],0); // 801D15DC
  if (crb(c,2)) { goto L_801D15EC; } // 801D15E0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D15E4
  c->lr=0x801D15ECu; f_800EC7C0(c); // 801D15E8
L_801D15EC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D15EC
  if (!crb(c,2)) { goto L_801D1608; } // 801D15F0
  c->r[3]=c->r[29]+0x00000000u; // 801D15F4
  c->r[5]=c->r[29]+0x00000084u; // 801D15F8
  c->r[4]=0u+0x0000009Au; // 801D15FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1600
  c->lr=0x801D1608u; f_801F9770(c); // 801D1604
L_801D1608:;
  c->r[3]=c->r[27]|c->r[27]; // 801D1608
  c->r[4]=0u+0xFFFFFFFFu; // 801D160C
  c->lr=0x801D1614u; f_801CDE20(c); // 801D1610
  c->lr=0x801D1618u; f_800CBAA0(c); // 801D1614
  c->r[0]=R8(c->r[27]+0x0000001Du); // 801D1618
  c->r[30]=c->r[3]|c->r[3]; // 801D161C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1620
  if (crb(c,2)) { goto L_801D1660; } // 801D1624
  cmps(c,0,(int32_t)c->r[27],0); // 801D1628
  if (!crb(c,2)) { goto L_801D164C; } // 801D162C
  c->r[3]=0u+0x802D0000u; // 801D1630
  c->r[5]=0u+0x802D0000u; // 801D1634
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D1638
  c->r[4]=0u+0x00000233u; // 801D163C
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D1640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1644
  c->lr=0x801D164Cu; f_801F9770(c); // 801D1648
L_801D164C:;
  c->r[28]=c->r[27]+0x00000040u; // 801D164C
  c->r[3]=c->r[26]+0x00000018u; // 801D1650
  c->r[4]=c->r[28]|c->r[28]; // 801D1654
  c->lr=0x801D165Cu; f_801FA230(c); // 801D1658
  goto L_801D1694; // 801D165C
L_801D1660:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D1660
  if (!crb(c,2)) { goto L_801D1684; } // 801D1664
  c->r[3]=0u+0x802D0000u; // 801D1668
  c->r[5]=0u+0x802D0000u; // 801D166C
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D1670
  c->r[4]=0u+0x00000233u; // 801D1674
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D1678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D167C
  c->lr=0x801D1684u; f_801F9770(c); // 801D1680
L_801D1684:;
  c->r[28]=c->r[27]+0x00000040u; // 801D1684
  c->r[3]=c->r[26]|c->r[26]; // 801D1688
  c->r[4]=c->r[28]|c->r[28]; // 801D168C
  c->lr=0x801D1694u; f_801FA230(c); // 801D1690
L_801D1694:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D1694
  c->r[29]=c->r[26]+0x00000010u; // 801D1698
  if (!crb(c,2)) { goto L_801D16BC; } // 801D169C
  c->r[3]=0u+0x802D0000u; // 801D16A0
  c->r[5]=0u+0x802D0000u; // 801D16A4
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D16A8
  c->r[4]=0u+0x00000233u; // 801D16AC
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D16B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D16B4
  c->lr=0x801D16BCu; f_801F9770(c); // 801D16B8
L_801D16BC:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D16BC
  c->r[5]=c->r[28]|c->r[28]; // 801D16C0
  c->r[3]=c->r[26]+0x0000000Cu; // 801D16C4
  c->r[4]=c->r[1]+0x00000008u; // 801D16C8
  c->lr=0x801D16D0u; f_801FA130(c); // 801D16CC
  c->r[3]=c->r[30]|c->r[30]; // 801D16D0
  c->lr=0x801D16D8u; f_800CBAE0(c); // 801D16D4
  c->r[3]=c->r[31]|c->r[31]; // 801D16D8
  c->lr=0x801D16E0u; f_800CBAE0(c); // 801D16DC
  c->r[11]=c->r[1]+0x00000030u; // 801D16E0
  c->lr=0x801D16E8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D16E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D16E8
  c->lr=c->r[0]; // 801D16EC
  c->r[1]=c->r[1]+0x00000030u; // 801D16F0
  return; // 801D16F4
}

// fn_801D1700
void f_801D1700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1700
  c->r[0]=c->lr; // 801D1704
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1708
  c->r[11]=c->r[1]+0x00000030u; // 801D170C
  c->lr=0x801D1714u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1710
  c->r[27]=c->r[3]|c->r[3]; // 801D1714
  c->r[29]=c->r[4]|c->r[4]; // 801D1718
  c->lr=0x801D1720u; f_800CBAA0(c); // 801D171C
  cmps(c,0,(int32_t)c->r[29],0); // 801D1720
  c->r[31]=c->r[3]|c->r[3]; // 801D1724
  if (!crb(c,2)) { goto L_801D1748; } // 801D1728
  c->r[3]=0u+0x802D0000u; // 801D172C
  c->r[5]=0u+0x802D0000u; // 801D1730
  c->r[3]=c->r[3]+0xFFFFCFF0u; // 801D1734
  c->r[4]=0u+0x000000E2u; // 801D1738
  c->r[5]=c->r[5]+0xFFFFD074u; // 801D173C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1740
  c->lr=0x801D1748u; f_801F9770(c); // 801D1744
L_801D1748:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D1748
  c->r[0]=0u+0x00000001u; // 801D174C
  W8(c->r[29]+0x0000001Du,c->r[0]); // 801D1750
  if (!crb(c,2)) { goto L_801D1774; } // 801D1754
  c->r[3]=0u+0x802D0000u; // 801D1758
  c->r[5]=0u+0x802D0000u; // 801D175C
  c->r[3]=c->r[3]+0xFFFFCFF0u; // 801D1760
  c->r[4]=0u+0x000000A9u; // 801D1764
  c->r[5]=c->r[5]+0xFFFFD074u; // 801D1768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D176C
  c->lr=0x801D1774u; f_801F9770(c); // 801D1770
L_801D1774:;
  c->lr=0x801D1778u; f_800CBAA0(c); // 801D1774
  cmps(c,0,(int32_t)c->r[29],0); // 801D1778
  c->r[30]=c->r[3]|c->r[3]; // 801D177C
  if (!crb(c,2)) { goto L_801D17A0; } // 801D1780
  c->r[3]=0u+0x802D0000u; // 801D1784
  c->r[5]=0u+0x802D0000u; // 801D1788
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D178C
  c->r[4]=0u+0x00000233u; // 801D1790
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D1794
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1798
  c->lr=0x801D17A0u; f_801F9770(c); // 801D179C
L_801D17A0:;
  c->r[28]=c->r[29]+0x00000040u; // 801D17A0
  c->r[3]=c->r[27]|c->r[27]; // 801D17A4
  c->r[4]=c->r[28]|c->r[28]; // 801D17A8
  c->lr=0x801D17B0u; f_801FA230(c); // 801D17AC
  cmps(c,0,(int32_t)c->r[29],0); // 801D17B0
  c->r[29]=c->r[27]+0x0000001Cu; // 801D17B4
  if (!crb(c,2)) { goto L_801D17D8; } // 801D17B8
  c->r[3]=0u+0x802D0000u; // 801D17BC
  c->r[5]=0u+0x802D0000u; // 801D17C0
  c->r[3]=c->r[3]+0xFFFFD144u; // 801D17C4
  c->r[4]=0u+0x00000233u; // 801D17C8
  c->r[5]=c->r[5]+0xFFFFD120u; // 801D17CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D17D0
  c->lr=0x801D17D8u; f_801F9770(c); // 801D17D4
L_801D17D8:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D17D8
  c->r[5]=c->r[28]|c->r[28]; // 801D17DC
  c->r[3]=c->r[27]+0x00000018u; // 801D17E0
  c->r[4]=c->r[1]+0x00000008u; // 801D17E4
  c->lr=0x801D17ECu; f_801FA130(c); // 801D17E8
  c->r[3]=c->r[30]|c->r[30]; // 801D17EC
  c->lr=0x801D17F4u; f_800CBAE0(c); // 801D17F0
  c->r[3]=c->r[31]|c->r[31]; // 801D17F4
  c->lr=0x801D17FCu; f_800CBAE0(c); // 801D17F8
  c->r[11]=c->r[1]+0x00000030u; // 801D17FC
  c->lr=0x801D1804u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1800
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D1804
  c->lr=c->r[0]; // 801D1808
  c->r[1]=c->r[1]+0x00000030u; // 801D180C
  return; // 801D1810
}

// fn_801D1820
void f_801D1820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1820
  c->r[0]=c->lr; // 801D1824
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D1828
  c->r[11]=c->r[1]+0x00000060u; // 801D182C
  c->lr=0x801D1834u; f_80217878(c); // 801D1830
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D1834
  c->r[19]=0u+0x802D0000u; // 801D1838
  c->r[15]=c->r[3]|c->r[3]; // 801D183C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1840
  c->r[19]=c->r[19]+0xFFFFCFF0u; // 801D1844
  if (crb(c,2)) { goto L_801D1A74; } // 801D1848
  c->r[18]=0u+0x80380000u; // 801D184C
  c->r[27]=0u+0x802D0000u; // 801D1850
  c->r[18]=c->r[18]+0xFFFFAB3Cu; // 801D1854
  c->r[28]=0u+0x802D0000u; // 801D1858
  c->r[20]=0u+0x802D0000u; // 801D185C
  c->r[21]=0u+0x802D0000u; // 801D1860
  c->r[29]=c->r[18]+0x00000010u; // 801D1864
  c->r[22]=0u+0x802D0000u; // 801D1868
  c->r[23]=0u+0x802D0000u; // 801D186C
  c->r[24]=0u+0x802D0000u; // 801D1870
  c->r[25]=0u+0x802D0000u; // 801D1874
  c->r[26]=0u+0x00000000u; // 801D1878
  c->r[14]=0u+0x801D0000u; // 801D187C
  goto L_801D1A68; // 801D1880
L_801D1884:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D1884
  if (!crb(c,2)) { goto L_801D18A0; } // 801D1888
  c->r[3]=c->r[20]+0xFFFFD114u; // 801D188C
  c->r[5]=c->r[21]+0xFFFFD0F0u; // 801D1890
  c->r[4]=0u+0x000001F1u; // 801D1894
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1898
  c->lr=0x801D18A0u; f_801F9770(c); // 801D189C
L_801D18A0:;
  c->r[16]=R32(c->r[15]+0x0000001Cu); // 801D18A0
  cmps(c,0,(int32_t)c->r[16],0); // 801D18A4
  if (!crb(c,2)) { goto L_801D18C0; } // 801D18A8
  c->r[3]=c->r[22]+0xFFFFD0B4u; // 801D18AC
  c->r[5]=c->r[23]+0xFFFFD090u; // 801D18B0
  c->r[4]=0u+0x0000023Du; // 801D18B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D18B8
  c->lr=0x801D18C0u; f_801F9770(c); // 801D18BC
L_801D18C0:;
  c->r[17]=addc(c,c->r[16],0xFFFFFFC0u,0); cr0(c,c->r[17]); // 801D18C0
  if (!crb(c,2)) { goto L_801D18DC; } // 801D18C4
  c->r[3]=c->r[24]+0xFFFFD0E4u; // 801D18C8
  c->r[5]=c->r[25]+0xFFFFD0C0u; // 801D18CC
  c->r[4]=0u+0x00000193u; // 801D18D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D18D4
  c->lr=0x801D18DCu; f_801F9770(c); // 801D18D8
L_801D18DC:;
  c->r[12]=R32(c->r[17]+0x00000038u); // 801D18DC
  cmps(c,0,(int32_t)c->r[12],0); // 801D18E0
  if (crb(c,2)) { goto L_801D18FC; } // 801D18E4
  c->r[3]=c->r[17]|c->r[17]; // 801D18E8
  c->r[5]=R32(c->r[17]+0x0000003Cu); // 801D18EC
  c->r[4]=0u+0x00000001u; // 801D18F0
  c->ctr=c->r[12]; // 801D18F4
  if (true) { c->lr=0x801D18FCu; dispatch(c,c->ctr); } // 801D18F8
L_801D18FC:;
  c->r[0]=R8(c->r[13]+0xFFFFAE30u); // 801D18FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D1900
  if (!crb(c,2)) { goto L_801D1958; } // 801D1904
  c->r[0]=c->r[18]+0x00000004u; // 801D1908
  c->r[6]=c->r[18]+0x00000010u; // 801D190C
  c->r[7]=c->r[18]+0x0000001Cu; // 801D1910
  c->r[5]=0u+0x80380000u; // 801D1914
  W32(c->r[18]+0x00000000u,c->r[26]); // 801D1918
  c->r[3]=c->r[18]|c->r[18]; // 801D191C
  c->r[4]=c->r[14]+0x00000F10u; // 801D1920
  c->r[5]=c->r[5]+0xFFFFAB30u; // 801D1924
  W32(c->r[18]+0x00000004u,c->r[0]); // 801D1928
  W32(c->r[18]+0x00000008u,c->r[0]); // 801D192C
  W32(c->r[18]+0x0000000Cu,c->r[26]); // 801D1930
  W32(c->r[18]+0x00000010u,c->r[6]); // 801D1934
  W32(c->r[18]+0x00000014u,c->r[6]); // 801D1938
  W32(c->r[18]+0x00000018u,c->r[26]); // 801D193C
  W32(c->r[18]+0x0000001Cu,c->r[7]); // 801D1940
  W32(c->r[18]+0x00000020u,c->r[7]); // 801D1944
  W8(c->r[18]+0x00000024u,c->r[26]); // 801D1948
  c->lr=0x801D1950u; f_80216C54(c); // 801D194C
  c->r[0]=0u+0x00000001u; // 801D1950
  W8(c->r[13]+0xFFFFAE30u,c->r[0]); // 801D1954
L_801D1958:;
  c->lr=0x801D195Cu; f_800CBAA0(c); // 801D1958
  cmps(c,0,(int32_t)c->r[17],0); // 801D195C
  c->r[31]=c->r[3]|c->r[3]; // 801D1960
  if (!crb(c,2)) { goto L_801D197C; } // 801D1964
  c->r[3]=c->r[19]+0x00000000u; // 801D1968
  c->r[5]=c->r[19]+0x0000005Cu; // 801D196C
  c->r[4]=0u+0x000000D4u; // 801D1970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1974
  c->lr=0x801D197Cu; f_801F9770(c); // 801D1978
L_801D197C:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 801D197C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1980
  if (crb(c,2)) { goto L_801D1990; } // 801D1984
  c->r[3]=R32(c->r[17]+0x00000000u); // 801D1988
  c->lr=0x801D1990u; f_800EC7C0(c); // 801D198C
L_801D1990:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D1990
  if (!crb(c,2)) { goto L_801D19AC; } // 801D1994
  c->r[3]=c->r[19]+0x00000000u; // 801D1998
  c->r[5]=c->r[19]+0x00000084u; // 801D199C
  c->r[4]=0u+0x0000009Au; // 801D19A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D19A4
  c->lr=0x801D19ACu; f_801F9770(c); // 801D19A8
L_801D19AC:;
  c->r[3]=c->r[17]|c->r[17]; // 801D19AC
  c->r[4]=0u+0xFFFFFFFFu; // 801D19B0
  c->lr=0x801D19B8u; f_801CDE20(c); // 801D19B4
  c->lr=0x801D19BCu; f_800CBAA0(c); // 801D19B8
  c->r[0]=R8(c->r[17]+0x0000001Du); // 801D19BC
  c->r[30]=c->r[3]|c->r[3]; // 801D19C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D19C4
  if (crb(c,2)) { goto L_801D19FC; } // 801D19C8
  cmps(c,0,(int32_t)c->r[17],0); // 801D19CC
  if (!crb(c,2)) { goto L_801D19E8; } // 801D19D0
  c->r[3]=c->r[27]+0xFFFFD144u; // 801D19D4
  c->r[5]=c->r[28]+0xFFFFD120u; // 801D19D8
  c->r[4]=0u+0x00000233u; // 801D19DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D19E0
  c->lr=0x801D19E8u; f_801F9770(c); // 801D19E4
L_801D19E8:;
  c->r[16]=c->r[17]+0x00000040u; // 801D19E8
  c->r[3]=c->r[18]+0x00000018u; // 801D19EC
  c->r[4]=c->r[16]|c->r[16]; // 801D19F0
  c->lr=0x801D19F8u; f_801FA230(c); // 801D19F4
  goto L_801D1A28; // 801D19F8
L_801D19FC:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D19FC
  if (!crb(c,2)) { goto L_801D1A18; } // 801D1A00
  c->r[3]=c->r[27]+0xFFFFD144u; // 801D1A04
  c->r[5]=c->r[28]+0xFFFFD120u; // 801D1A08
  c->r[4]=0u+0x00000233u; // 801D1A0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A10
  c->lr=0x801D1A18u; f_801F9770(c); // 801D1A14
L_801D1A18:;
  c->r[16]=c->r[17]+0x00000040u; // 801D1A18
  c->r[3]=c->r[18]|c->r[18]; // 801D1A1C
  c->r[4]=c->r[16]|c->r[16]; // 801D1A20
  c->lr=0x801D1A28u; f_801FA230(c); // 801D1A24
L_801D1A28:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D1A28
  if (!crb(c,2)) { goto L_801D1A44; } // 801D1A2C
  c->r[3]=c->r[27]+0xFFFFD144u; // 801D1A30
  c->r[5]=c->r[28]+0xFFFFD120u; // 801D1A34
  c->r[4]=0u+0x00000233u; // 801D1A38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A3C
  c->lr=0x801D1A44u; f_801F9770(c); // 801D1A40
L_801D1A44:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D1A44
  c->r[5]=c->r[16]|c->r[16]; // 801D1A48
  c->r[3]=c->r[18]+0x0000000Cu; // 801D1A4C
  c->r[4]=c->r[1]+0x00000008u; // 801D1A50
  c->lr=0x801D1A58u; f_801FA130(c); // 801D1A54
  c->r[3]=c->r[30]|c->r[30]; // 801D1A58
  c->lr=0x801D1A60u; f_800CBAE0(c); // 801D1A5C
  c->r[3]=c->r[31]|c->r[31]; // 801D1A60
  c->lr=0x801D1A68u; f_800CBAE0(c); // 801D1A64
L_801D1A68:;
  c->r[0]=R32(c->r[15]+0x00000018u); // 801D1A68
  cmps(c,0,(int32_t)c->r[0],0); // 801D1A6C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1884; } // 801D1A70
L_801D1A74:;
  c->r[11]=c->r[1]+0x00000060u; // 801D1A74
  c->lr=0x801D1A7Cu; f_802178C4(c); // 801D1A78
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D1A7C
  c->lr=c->r[0]; // 801D1A80
  c->r[1]=c->r[1]+0x00000060u; // 801D1A84
  return; // 801D1A88
}

// fn_801D1A90
void f_801D1A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1A90
  c->r[0]=c->lr; // 801D1A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1A98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1A9C
  c->r[31]=c->r[3]|c->r[3]; // 801D1AA0
  c->lr=0x801D1AA8u; f_801D1D10(c); // 801D1AA4
  c->r[0]=0u+0x00000000u; // 801D1AA8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D1AAC
  c->r[3]=c->r[31]|c->r[31]; // 801D1AB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1AB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1AB8
  c->lr=c->r[0]; // 801D1ABC
  c->r[1]=c->r[1]+0x00000010u; // 801D1AC0
  return; // 801D1AC4
}

// fn_801D1AD0
void f_801D1AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1AD0
  c->r[0]=c->lr; // 801D1AD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1ADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1AE0
  c->r[31]=c->r[3]|c->r[3]; // 801D1AE4
  if (crb(c,2)) { goto L_801D1AF8; } // 801D1AE8
  cmps(c,0,(int32_t)c->r[4],0); // 801D1AEC
  if (!crb(c,1)) { goto L_801D1AF8; } // 801D1AF0
  c->lr=0x801D1AF8u; f_800B9AD0(c); // 801D1AF4
L_801D1AF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1B00
  c->lr=c->r[0]; // 801D1B04
  c->r[1]=c->r[1]+0x00000010u; // 801D1B08
  return; // 801D1B0C
}

// fn_801D1B10
void f_801D1B10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1B10
  c->r[0]=c->lr; // 801D1B14
  c->r[5]=R32(c->r[4]+0x00000000u); // 801D1B18
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801D1B1C
  c->r[0]=0u+0x43300000u; // 801D1B20
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801D1B24
  c->r[31]=c->r[3]|c->r[3]; // 801D1B28
  W32(c->r[1]+0x000000B8u,c->r[30]); // 801D1B2C
  c->r[30]=c->r[4]|c->r[4]; // 801D1B30
  c->r[6]=R32(c->r[30]+0x00000004u); // 801D1B34
  c->r[4]=c->r[1]+0x0000000Cu; // 801D1B38
  W32(c->r[1]+0x000000A8u,c->r[0]); // 801D1B3C
  c->r[7]=R32(c->r[30]+0x00000008u); // 801D1B40
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801D1B44
  c->lr=0x801D1B4Cu; f_801D2040(c); // 801D1B48
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B4C
  if (!crb(c,2)) { goto L_801D1B5C; } // 801D1B50
  c->r[3]=0u+0x00000000u; // 801D1B54
  goto L_801D1CF0; // 801D1B58
L_801D1B5C:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 801D1B5C
  c->r[3]=c->r[31]|c->r[31]; // 801D1B60
  c->r[4]=c->r[1]+0x00000028u; // 801D1B64
  c->r[5]=c->r[1]+0x0000000Cu; // 801D1B68
  c->r[7]=c->r[1]+0x00000008u; // 801D1B6C
  c->lr=0x801D1B74u; f_801D23C0(c); // 801D1B70
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B74
  if (!crb(c,2)) { goto L_801D1B84; } // 801D1B78
  c->r[3]=0u+0x00000000u; // 801D1B7C
  goto L_801D1CF0; // 801D1B80
L_801D1B84:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 801D1B84
  c->r[3]=0u+0x00000002u; // 801D1B88
  cmps(c,0,(int32_t)c->r[0],2); // 801D1B8C
  if (crb(c,1)) { goto L_801D1B98; } // 801D1B90
  c->r[3]=c->r[0]|c->r[0]; // 801D1B94
L_801D1B98:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 801D1B98
  c->r[5]=R32(c->r[30]+0x00000014u); // 801D1B9C
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 801D1BA0
  c->r[7]=R32(c->r[30]+0x00000020u); // 801D1BA4
  c->lr=0x801D1BACu; f_801D5B20(c); // 801D1BA8
  cmps(c,0,(int32_t)c->r[3],0); // 801D1BAC
  c->r[31]=c->r[3]|c->r[3]; // 801D1BB0
  if (!crb(c,2)) { goto L_801D1BC0; } // 801D1BB4
  c->r[3]=0u+0x00000000u; // 801D1BB8
  goto L_801D1CF0; // 801D1BBC
L_801D1BC0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D1BC0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801D1BC4
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D1BC8
  c->r[4]=R8(c->r[1]+0x00000021u); // 801D1BCC
  c->r[0]=c->r[0]^0x80000000u; // 801D1BD0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801D1BD4
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=RF64(ea);} // 801D1BD8
  W32(c->r[3]+0x000000ACu,c->r[4]); // 801D1BDC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D1BE0
  c->r[0]=R8(c->r[1]+0x00000023u); // 801D1BE4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801D1BE8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801D1BEC
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1BF0
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[1]=RF64(ea);} // 801D1BF4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 801D1BF8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 801D1BFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D1C00
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801D1C04
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801D1C08
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801D1C0C
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[3]);} // 801D1C10
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1C14
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 801D1C18
  c->r[4]=R8(c->r[1]+0x00000014u); // 801D1C1C
  c->lr=0x801D1C24u; f_801D6660(c); // 801D1C20
  c->r[4]=R8(c->r[1]+0x00000015u); // 801D1C24
  c->r[3]=c->r[31]|c->r[31]; // 801D1C28
  c->lr=0x801D1C30u; f_801D66F0(c); // 801D1C2C
  c->r[4]=R8(c->r[1]+0x00000016u); // 801D1C30
  c->r[3]=c->r[31]|c->r[31]; // 801D1C34
  c->lr=0x801D1C3Cu; f_801D6780(c); // 801D1C38
  c->r[4]=R8(c->r[1]+0x00000017u); // 801D1C3C
  c->r[3]=c->r[31]|c->r[31]; // 801D1C40
  c->lr=0x801D1C48u; f_801D68D0(c); // 801D1C44
  c->r[4]=R8(c->r[1]+0x00000018u); // 801D1C48
  c->r[3]=c->r[31]|c->r[31]; // 801D1C4C
  c->lr=0x801D1C54u; f_801D6950(c); // 801D1C50
  c->r[3]=R8(c->r[1]+0x00000022u); // 801D1C54
  c->r[0]=R32(c->r[30]+0x00000010u); // 801D1C58
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 801D1C5C
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[4]=RF64(ea);} // 801D1C60
  c->r[3]=c->r[3]^0x80000000u; // 801D1C64
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801D1C68
  c->r[0]=c->r[0]^0x80000000u; // 801D1C6C
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1C70
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801D1C74
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D1C78
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 801D1C7C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D1C80
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1C84
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 801D1C88
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 801D1C8C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801D1C90
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801D1C94
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[3]);} // 801D1C98
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 801D1C9C
  c->r[0]=R8(c->r[1]+0x00000020u); // 801D1CA0
  W32(c->r[31]+0x000000BCu,c->r[0]); // 801D1CA4
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801D1CA8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D1CAC
  c->r[0]=cntlz(c->r[0]); // 801D1CB0
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 801D1CB4
  W8(c->r[31]+0x0000003Au,c->r[0]); // 801D1CB8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D1CBC
  cmps(c,0,(int32_t)c->r[0],2); // 801D1CC0
  if (!crb(c,2)) { goto L_801D1CD8; } // 801D1CC4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D1CC8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D1CCC
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801D1CD0
  W32(c->r[31]+0x000000CCu,c->r[3]); // 801D1CD4
L_801D1CD8:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801D1CD8
  c->r[3]=c->r[31]|c->r[31]; // 801D1CDC
  c->r[4]=c->r[1]+0x00000028u; // 801D1CE0
  c->r[6]=0u+0x00000000u; // 801D1CE4
  c->lr=0x801D1CECu; f_801D5670(c); // 801D1CE8
  c->r[3]=c->r[31]|c->r[31]; // 801D1CEC
L_801D1CF0:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801D1CF0
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801D1CF4
  c->r[30]=R32(c->r[1]+0x000000B8u); // 801D1CF8
  c->lr=c->r[0]; // 801D1CFC
  c->r[1]=c->r[1]+0x000000C0u; // 801D1D00
  return; // 801D1D04
}

// fn_801D1D10
void f_801D1D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1D10
  c->r[0]=c->lr; // 801D1D14
  cmps(c,0,(int32_t)c->r[4],0); // 801D1D18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1D1C
  c->r[0]=0u+0x00000000u; // 801D1D20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1D24
  c->r[31]=0u+0x802D0000u; // 801D1D28
  c->r[31]=c->r[31]+0xFFFFD150u; // 801D1D2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1D30
  c->r[30]=c->r[4]|c->r[4]; // 801D1D34
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1D38
  c->r[29]=c->r[3]|c->r[3]; // 801D1D3C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D1D40
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D1D44
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D1D48
  if (!crb(c,2)) { goto L_801D1D64; } // 801D1D4C
  c->r[3]=c->r[31]+0x00000000u; // 801D1D50
  c->r[5]=c->r[31]+0x000000A0u; // 801D1D54
  c->r[4]=0u+0x0000005Du; // 801D1D58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1D5C
  c->lr=0x801D1D64u; f_801F9770(c); // 801D1D60
L_801D1D64:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D1D64
  c->r[0]=c->r[3]+0xADBE0000u; // 801D1D68
  cmpu(c,0,c->r[0],0x00004E4Bu); // 801D1D6C
  if (crb(c,2)) { goto L_801D1D88; } // 801D1D70
  c->r[3]=c->r[31]+0x00000000u; // 801D1D74
  c->r[5]=c->r[31]+0x00000014u; // 801D1D78
  c->r[4]=0u+0x0000003Bu; // 801D1D7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1D80
  c->lr=0x801D1D88u; f_801F9770(c); // 801D1D84
L_801D1D88:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D1D88
  c->r[0]=c->r[3]+0xADBE0000u; // 801D1D8C
  cmpu(c,0,c->r[0],0x00004E4Bu); // 801D1D90
  if (crb(c,2)) { goto L_801D1DA0; } // 801D1D94
  c->r[0]=0u+0x00000000u; // 801D1D98
  goto L_801D1E0C; // 801D1D9C
L_801D1DA0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D1DA0
  cmpu(c,0,c->r[0],0x00000100u); // 801D1DA4
  if (!crb(c,0)) { goto L_801D1DC0; } // 801D1DA8
  c->r[3]=c->r[31]+0x00000000u; // 801D1DAC
  c->r[5]=c->r[31]+0x00000048u; // 801D1DB0
  c->r[4]=0u+0x00000043u; // 801D1DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1DB8
  c->lr=0x801D1DC0u; f_801F9770(c); // 801D1DBC
L_801D1DC0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D1DC0
  cmpu(c,0,c->r[0],0x00000100u); // 801D1DC4
  if (!crb(c,0)) { goto L_801D1DD4; } // 801D1DC8
  c->r[0]=0u+0x00000000u; // 801D1DCC
  goto L_801D1E0C; // 801D1DD0
L_801D1DD4:;
  cmpu(c,0,c->r[0],0x00000102u); // 801D1DD4
  if (!crb(c,1)) { goto L_801D1DF0; } // 801D1DD8
  c->r[3]=c->r[31]+0x00000000u; // 801D1DDC
  c->r[5]=c->r[31]+0x00000048u; // 801D1DE0
  c->r[4]=0u+0x00000049u; // 801D1DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1DE8
  c->lr=0x801D1DF0u; f_801F9770(c); // 801D1DEC
L_801D1DF0:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 801D1DF0
  c->r[3]=0u+0x00000102u; // 801D1DF4
  c->r[0]=addc(c,~c->r[4],0x00000102u,1); // 801D1DF8
  c->r[3]=c->r[3]|~c->r[4]; // 801D1DFC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D1E00
  c->r[0]=c->r[3]-c->r[0]; // 801D1E04
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D1E08
L_801D1E0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E0C
  if (!crb(c,2)) { goto L_801D1E1C; } // 801D1E10
  c->r[3]=c->r[29]|c->r[29]; // 801D1E14
  goto L_801D1E98; // 801D1E18
L_801D1E1C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801D1E1C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801D1E20
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E24
  if (crb(c,2)) { goto L_801D1E58; } // 801D1E28
  c->r[3]=c->r[0]+c->r[30]; // 801D1E2C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801D1E30
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1E34
  c->r[0]=c->r[3]+0xBBBF0000u; // 801D1E38
  cmpu(c,0,c->r[0],0x00005441u); // 801D1E3C
  if (crb(c,2)) { goto L_801D1E58; } // 801D1E40
  c->r[3]=c->r[31]+0x00000000u; // 801D1E44
  c->r[5]=c->r[31]+0x000000CCu; // 801D1E48
  c->r[4]=0u+0x00000069u; // 801D1E4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1E50
  c->lr=0x801D1E58u; f_801F9770(c); // 801D1E54
L_801D1E58:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D1E58
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D1E5C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E60
  if (crb(c,2)) { goto L_801D1E94; } // 801D1E64
  c->r[3]=c->r[0]+c->r[3]; // 801D1E68
  W32(c->r[29]+0x00000008u,c->r[3]); // 801D1E6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1E70
  c->r[0]=c->r[3]+0xA8BF0000u; // 801D1E74
  cmpu(c,0,c->r[0],0x00005645u); // 801D1E78
  if (crb(c,2)) { goto L_801D1E94; } // 801D1E7C
  c->r[3]=c->r[31]+0x00000000u; // 801D1E80
  c->r[5]=c->r[31]+0x00000124u; // 801D1E84
  c->r[4]=0u+0x00000071u; // 801D1E88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1E8C
  c->lr=0x801D1E94u; f_801F9770(c); // 801D1E90
L_801D1E94:;
  c->r[3]=c->r[29]|c->r[29]; // 801D1E94
L_801D1E98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1E98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1E9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1EA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1EA4
  c->lr=c->r[0]; // 801D1EA8
  c->r[1]=c->r[1]+0x00000020u; // 801D1EAC
  return; // 801D1EB0
}

// fn_801D1EC0
void f_801D1EC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1EC0
  c->r[0]=c->lr; // 801D1EC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1EC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1ECC
  c->r[31]=c->r[6]|c->r[6]; // 801D1ED0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1ED4
  c->r[30]=c->r[4]|c->r[4]; // 801D1ED8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1EDC
  c->r[29]=c->r[5]|c->r[5]; // 801D1EE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D1EE4
  c->r[28]=c->r[3]|c->r[3]; // 801D1EE8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1EEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D1EF0
  if (!crb(c,2)) { goto L_801D1F14; } // 801D1EF4
  c->r[3]=0u+0x802D0000u; // 801D1EF8
  c->r[5]=0u+0x802D0000u; // 801D1EFC
  c->r[3]=c->r[3]+0xFFFFD150u; // 801D1F00
  c->r[4]=0u+0x00000087u; // 801D1F04
  c->r[5]=c->r[5]+0xFFFFD2D0u; // 801D1F08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1F0C
  c->lr=0x801D1F14u; f_801F9770(c); // 801D1F10
L_801D1F14:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801D1F14
  cmps(c,0,(int32_t)c->r[0],0); // 801D1F18
  if (!crb(c,2)) { goto L_801D1F28; } // 801D1F1C
  c->r[3]=0u+0x00000000u; // 801D1F20
  goto L_801D201C; // 801D1F24
L_801D1F28:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D1F28
  if (crb(c,0)) { goto L_801D1F40; } // 801D1F2C
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D1F30
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D1F34
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D1F38
  if (crb(c,0)) { goto L_801D1F48; } // 801D1F3C
L_801D1F40:;
  c->r[3]=0u+0x00000000u; // 801D1F40
  goto L_801D201C; // 801D1F44
L_801D1F48:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801D1F48
  c->r[3]=c->r[3]+c->r[0]; // 801D1F4C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801D1F50
  c->r[30]=c->r[3]+0x0000000Cu; // 801D1F54
  cmpu(c,0,c->r[0],0x00000004u); // 801D1F58
  if (!crb(c,2)) { goto L_801D1F68; } // 801D1F5C
  c->r[3]=0u+0x00000000u; // 801D1F60
  goto L_801D201C; // 801D1F64
L_801D1F68:;
  cmpu(c,0,c->r[0],0x00000001u); // 801D1F68
  if (crb(c,2)) { goto L_801D1F94; } // 801D1F6C
  c->r[3]=c->r[28]|c->r[28]; // 801D1F70
  c->r[4]=c->r[30]|c->r[30]; // 801D1F74
  c->r[5]=c->r[29]|c->r[29]; // 801D1F78
  c->lr=0x801D1F80u; f_801D2240(c); // 801D1F7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1F80
  c->r[30]=c->r[3]|c->r[3]; // 801D1F84
  if (!crb(c,2)) { goto L_801D1F94; } // 801D1F88
  c->r[3]=0u+0x00000000u; // 801D1F8C
  goto L_801D201C; // 801D1F90
L_801D1F94:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D1F94
  cmpu(c,0,c->r[0],0x00000004u); // 801D1F98
  if (!crb(c,2)) { goto L_801D1FA8; } // 801D1F9C
  c->r[3]=0u+0x00000000u; // 801D1FA0
  goto L_801D201C; // 801D1FA4
L_801D1FA8:;
  cmpu(c,0,c->r[0],0x00000001u); // 801D1FA8
  if (crb(c,2)) { goto L_801D1FD4; } // 801D1FAC
  c->r[3]=c->r[28]|c->r[28]; // 801D1FB0
  c->r[4]=c->r[30]|c->r[30]; // 801D1FB4
  c->r[5]=c->r[31]|c->r[31]; // 801D1FB8
  c->lr=0x801D1FC0u; f_801D2240(c); // 801D1FBC
  cmps(c,0,(int32_t)c->r[3],0); // 801D1FC0
  c->r[30]=c->r[3]|c->r[3]; // 801D1FC4
  if (!crb(c,2)) { goto L_801D1FD4; } // 801D1FC8
  c->r[3]=0u+0x00000000u; // 801D1FCC
  goto L_801D201C; // 801D1FD0
L_801D1FD4:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D1FD4
  cmpu(c,0,c->r[0],0x00000001u); // 801D1FD8
  if (crb(c,2)) { goto L_801D1FE8; } // 801D1FDC
  c->r[3]=0u+0x00000000u; // 801D1FE0
  goto L_801D201C; // 801D1FE4
L_801D1FE8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D1FE8
  c->r[31]=c->r[3]+0x00000008u; // 801D1FEC
  if (crb(c,2)) { goto L_801D200C; } // 801D1FF0
  c->r[5]=0u+0x802D0000u; // 801D1FF4
  c->r[3]=c->r[13]+0xFFFF9DC8u; // 801D1FF8
  c->r[5]=c->r[5]+0xFFFFD428u; // 801D1FFC
  c->r[4]=0u+0x0000008Eu; // 801D2000
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2004
  c->lr=0x801D200Cu; f_801F9770(c); // 801D2008
L_801D200C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801D200C
  c->r[5]=c->r[31]|c->r[31]; // 801D2010
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D2014
  c->lr=0x801D201Cu; f_801EF600(c); // 801D2018
L_801D201C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D201C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2020
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2024
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2028
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D202C
  c->lr=c->r[0]; // 801D2030
  c->r[1]=c->r[1]+0x00000020u; // 801D2034
  return; // 801D2038
}

// fn_801D2040
void f_801D2040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2040
  c->r[0]=c->lr; // 801D2044
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2048
  c->r[11]=c->r[1]+0x00000020u; // 801D204C
  c->lr=0x801D2054u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2050
  cmps(c,0,(int32_t)c->r[4],0); // 801D2054
  c->r[31]=0u+0x802D0000u; // 801D2058
  c->r[29]=c->r[3]|c->r[3]; // 801D205C
  c->r[30]=c->r[4]|c->r[4]; // 801D2060
  c->r[26]=c->r[5]|c->r[5]; // 801D2064
  c->r[27]=c->r[6]|c->r[6]; // 801D2068
  c->r[28]=c->r[7]|c->r[7]; // 801D206C
  c->r[31]=c->r[31]+0xFFFFD150u; // 801D2070
  if (!crb(c,2)) { goto L_801D208C; } // 801D2074
  c->r[3]=c->r[31]+0x00000000u; // 801D2078
  c->r[5]=c->r[31]+0x000001A8u; // 801D207C
  c->r[4]=0u+0x000000BCu; // 801D2080
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2084
  c->lr=0x801D208Cu; f_801F9770(c); // 801D2088
L_801D208C:;
  c->r[3]=c->r[29]|c->r[29]; // 801D208C
  c->r[4]=c->r[26]|c->r[26]; // 801D2090
  c->r[5]=c->r[27]|c->r[27]; // 801D2094
  c->r[6]=c->r[28]|c->r[28]; // 801D2098
  c->lr=0x801D20A0u; f_801D1EC0(c); // 801D209C
  cmps(c,0,(int32_t)c->r[3],0); // 801D20A0
  if (!crb(c,2)) { goto L_801D20B0; } // 801D20A4
  c->r[3]=0u+0x00000000u; // 801D20A8
  goto L_801D2224; // 801D20AC
L_801D20B0:;
  c->r[6]=R8(c->r[3]+0x00000009u); // 801D20B0
  cmps(c,0,(int32_t)c->r[6],0); // 801D20B4
  if (!crb(c,2)) { goto L_801D20E4; } // 801D20B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D20BC
  cmps(c,0,(int32_t)c->r[0],0); // 801D20C0
  if (!crb(c,0)) { goto L_801D20D0; } // 801D20C4
  c->r[3]=0u+0x00000000u; // 801D20C8
  goto L_801D2224; // 801D20CC
L_801D20D0:;
  c->r[0]=0u+0x00000000u; // 801D20D0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D20D4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D20D8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D20DC
  goto L_801D2160; // 801D20E0
L_801D20E4:;
  cmpu(c,0,c->r[6],0x00000001u); // 801D20E4
  if (!crb(c,2)) { goto L_801D2114; } // 801D20E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D20EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D20F0
  if (!crb(c,2)) { goto L_801D2100; } // 801D20F4
  c->r[3]=0u+0x00000000u; // 801D20F8
  goto L_801D2224; // 801D20FC
L_801D2100:;
  c->r[0]=0u+0x00000001u; // 801D2100
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D2104
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2108
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D210C
  goto L_801D2160; // 801D2110
L_801D2114:;
  cmpu(c,0,c->r[6],0x00000002u); // 801D2114
  if (!crb(c,2)) { goto L_801D2144; } // 801D2118
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D211C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2120
  if (!crb(c,2)) { goto L_801D2130; } // 801D2124
  c->r[3]=0u+0x00000000u; // 801D2128
  goto L_801D2224; // 801D212C
L_801D2130:;
  c->r[0]=0u+0x00000002u; // 801D2130
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D2134
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2138
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D213C
  goto L_801D2160; // 801D2140
L_801D2144:;
  c->r[3]=c->r[31]+0x00000000u; // 801D2144
  c->r[5]=c->r[31]+0x000001D8u; // 801D2148
  c->r[4]=0u+0x000000D2u; // 801D214C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2150
  c->lr=0x801D2158u; f_801F9770(c); // 801D2154
  c->r[3]=0u+0x00000000u; // 801D2158
  goto L_801D2224; // 801D215C
L_801D2160:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D2160
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D2164
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D2168
  W8(c->r[30]+0x00000009u,c->r[0]); // 801D216C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D2170
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D2174
  c->r[0]=R8(c->r[3]+0x00000006u); // 801D2178
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801D217C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801D2180
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D2184
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D2188
  W8(c->r[30]+0x00000015u,c->r[0]); // 801D218C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801D2190
  W8(c->r[30]+0x00000016u,c->r[0]); // 801D2194
  c->r[4]=R32(c->r[29]+0x00000000u); // 801D2198
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D219C
  cmpu(c,0,c->r[0],0x00000101u); // 801D21A0
  if (crb(c,0)) { goto L_801D21BC; } // 801D21A4
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801D21A8
  W8(c->r[30]+0x00000017u,c->r[0]); // 801D21AC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D21B0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801D21B4
  goto L_801D21CC; // 801D21B8
L_801D21BC:;
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D21BC
  c->r[0]=0u+0x0000007Fu; // 801D21C0
  W8(c->r[30]+0x00000017u,c->r[0]); // 801D21C4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801D21C8
L_801D21CC:;
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801D21CC
  cmps(c,0,(int32_t)c->r[6],0); // 801D21D0
  if (crb(c,2)) { goto L_801D21E4; } // 801D21D4
  cmps(c,0,(int32_t)c->r[6],1); // 801D21D8
  if (crb(c,2)) { goto L_801D21F0; } // 801D21DC
  goto L_801D21FC; // 801D21E0
L_801D21E4:;
  c->r[0]=0u+0x00000000u; // 801D21E4
  W32(c->r[30]+0x00000010u,c->r[0]); // 801D21E8
  goto L_801D2218; // 801D21EC
L_801D21F0:;
  c->r[0]=0u+0x00000001u; // 801D21F0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801D21F4
  goto L_801D2218; // 801D21F8
L_801D21FC:;
  c->r[3]=c->r[31]+0x00000000u; // 801D21FC
  c->r[5]=c->r[31]+0x000001F8u; // 801D2200
  c->r[4]=0u+0x000000F0u; // 801D2204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2208
  c->lr=0x801D2210u; f_801F9770(c); // 801D220C
  c->r[3]=0u+0x00000000u; // 801D2210
  goto L_801D2224; // 801D2214
L_801D2218:;
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801D2218
  c->r[3]=0u+0x00000001u; // 801D221C
  W8(c->r[30]+0x00000014u,c->r[0]); // 801D2220
L_801D2224:;
  c->r[11]=c->r[1]+0x00000020u; // 801D2224
  c->lr=0x801D222Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2228
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D222C
  c->lr=c->r[0]; // 801D2230
  c->r[1]=c->r[1]+0x00000020u; // 801D2234
  return; // 801D2238
}

// fn_801D2240
void f_801D2240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2240
  c->r[0]=c->lr; // 801D2244
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2248
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D224C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2250
  cmps(c,0,(int32_t)c->r[0],1); // 801D2254
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2258
  c->r[30]=c->r[5]|c->r[5]; // 801D225C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2260
  c->r[29]=c->r[4]|c->r[4]; // 801D2264
  c->r[4]=0u+0x00000000u; // 801D2268
  if (crb(c,2)) { goto L_801D2284; } // 801D226C
  cmps(c,0,(int32_t)c->r[0],2); // 801D2270
  if (crb(c,2)) { goto L_801D228C; } // 801D2274
  cmps(c,0,(int32_t)c->r[0],3); // 801D2278
  if (crb(c,2)) { goto L_801D2324; } // 801D227C
  goto L_801D239C; // 801D2280
L_801D2284:;
  c->r[4]=c->r[29]|c->r[29]; // 801D2284
  goto L_801D239C; // 801D2288
L_801D228C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D228C
  cmpu(c,0,c->r[0],0x00000002u); // 801D2290
  c->r[31]=c->r[3]+0x00000008u; // 801D2294
  if (crb(c,2)) { goto L_801D22B4; } // 801D2298
  c->r[5]=0u+0x802D0000u; // 801D229C
  c->r[3]=c->r[13]+0xFFFF9DB8u; // 801D22A0
  c->r[5]=c->r[5]+0xFFFFD3D8u; // 801D22A4
  c->r[4]=0u+0x0000008Fu; // 801D22A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D22AC
  c->lr=0x801D22B4u; f_801F9770(c); // 801D22B0
L_801D22B4:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801D22B4
  c->r[5]=c->r[31]|c->r[31]; // 801D22B8
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D22BC
  c->lr=0x801D22C4u; f_801EF600(c); // 801D22C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D22C4
  if (!crb(c,2)) { goto L_801D22D4; } // 801D22C8
  c->r[3]=0u+0x00000000u; // 801D22CC
  goto L_801D23A0; // 801D22D0
L_801D22D4:;
  c->r[5]=0u+0x00000000u; // 801D22D4
  goto L_801D22F8; // 801D22D8
  c->r[0]=c->r[0]|0x00000000u; // 801D22DC
L_801D22E0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D22E0
  c->r[5]=c->r[5]+0x00000001u; // 801D22E4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D22E8
  if (crb(c,0)) { goto L_801D22F8; } // 801D22EC
  c->r[3]=0u+0x00000000u; // 801D22F0
  goto L_801D23A0; // 801D22F4
L_801D22F8:;
  c->r[4]=c->r[3]+c->r[5]; // 801D22F8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D22FC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D2300
  if (crb(c,1)) { IRQCHK(c); goto L_801D22E0; } // 801D2304
  c->r[4]=R8(c->r[3]+0x00000000u); // 801D2308
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801D230C
  c->r[0]=c->r[3]+c->r[0]; // 801D2310
  c->r[3]=c->r[4]+0x00000004u; // 801D2314
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFCu; // 801D2318
  c->r[4]=c->r[3]+c->r[0]; // 801D231C
  goto L_801D239C; // 801D2320
L_801D2324:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D2324
  cmpu(c,0,c->r[0],0x00000003u); // 801D2328
  c->r[31]=c->r[3]+0x00000008u; // 801D232C
  if (crb(c,2)) { goto L_801D234C; } // 801D2330
  c->r[5]=0u+0x802D0000u; // 801D2334
  c->r[3]=c->r[13]+0xFFFF9DC0u; // 801D2338
  c->r[5]=c->r[5]+0xFFFFD400u; // 801D233C
  c->r[4]=0u+0x00000090u; // 801D2340
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2344
  c->lr=0x801D234Cu; f_801F9770(c); // 801D2348
L_801D234C:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801D234C
  c->r[5]=c->r[31]|c->r[31]; // 801D2350
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D2354
  c->lr=0x801D235Cu; f_801EF600(c); // 801D2358
  cmps(c,0,(int32_t)c->r[3],0); // 801D235C
  if (!crb(c,2)) { goto L_801D236C; } // 801D2360
  c->r[3]=0u+0x00000000u; // 801D2364
  goto L_801D23A0; // 801D2368
L_801D236C:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 801D236C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[4]); // 801D2370
  if (crb(c,0)) { goto L_801D2384; } // 801D2374
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D2378
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D237C
  if (!crb(c,1)) { goto L_801D238C; } // 801D2380
L_801D2384:;
  c->r[3]=0u+0x00000000u; // 801D2384
  goto L_801D23A0; // 801D2388
L_801D238C:;
  c->r[0]=c->r[30]-c->r[4]; // 801D238C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D2390
  c->r[3]=c->r[3]+c->r[0]; // 801D2394
  c->r[4]=c->r[3]+0x00000004u; // 801D2398
L_801D239C:;
  c->r[3]=c->r[4]|c->r[4]; // 801D239C
L_801D23A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D23A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D23A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D23A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D23AC
  c->lr=c->r[0]; // 801D23B0
  c->r[1]=c->r[1]+0x00000020u; // 801D23B4
  return; // 801D23B8
}

// fn_801D23C0
void f_801D23C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D23C0
  c->r[0]=c->lr; // 801D23C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D23C8
  c->r[11]=c->r[1]+0x00000030u; // 801D23CC
  c->lr=0x801D23D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D23D0
  cmps(c,0,(int32_t)c->r[4],0); // 801D23D4
  c->r[30]=0u+0x802D0000u; // 801D23D8
  c->r[26]=c->r[3]|c->r[3]; // 801D23DC
  c->r[31]=c->r[4]|c->r[4]; // 801D23E0
  c->r[27]=c->r[5]|c->r[5]; // 801D23E4
  c->r[28]=c->r[6]|c->r[6]; // 801D23E8
  c->r[29]=c->r[7]|c->r[7]; // 801D23EC
  c->r[30]=c->r[30]+0xFFFFD150u; // 801D23F0
  if (!crb(c,2)) { goto L_801D240C; } // 801D23F4
  c->r[3]=c->r[30]+0x00000000u; // 801D23F8
  c->r[5]=c->r[30]+0x00000210u; // 801D23FC
  c->r[4]=0u+0x0000014Bu; // 801D2400
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2404
  c->lr=0x801D240Cu; f_801F9770(c); // 801D2408
L_801D240C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D240C
  if (crb(c,2)) { goto L_801D241C; } // 801D2410
  c->r[0]=0u+0x00000000u; // 801D2414
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D2418
L_801D241C:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801D241C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2420
  if (!crb(c,2)) { goto L_801D2430; } // 801D2424
  c->r[3]=0u+0x00000000u; // 801D2428
  goto L_801D2664; // 801D242C
L_801D2430:;
  c->r[6]=R32(c->r[27]+0x00000000u); // 801D2430
  cmps(c,0,(int32_t)c->r[6],0); // 801D2434
  if (!crb(c,2)) { goto L_801D2518; } // 801D2438
  c->r[3]=R32(c->r[26]+0x00000008u); // 801D243C
  c->r[30]=R32(c->r[27]+0x00000004u); // 801D2440
  cmps(c,0,(int32_t)c->r[3],0); // 801D2444
  if (!crb(c,2)) { goto L_801D2494; } // 801D2448
  c->r[4]=c->r[28]|c->r[28]; // 801D244C
  c->r[3]=c->r[1]+0x00000010u; // 801D2450
  c->lr=0x801D2458u; f_801EF660(c); // 801D2454
  c->r[4]=c->r[30]|c->r[30]; // 801D2458
  c->r[3]=c->r[1]+0x00000010u; // 801D245C
  c->lr=0x801D2464u; f_801EF7F0(c); // 801D2460
  cmps(c,0,(int32_t)c->r[3],0); // 801D2464
  if (!crb(c,2)) { goto L_801D2474; } // 801D2468
  c->r[3]=0u+0x00000000u; // 801D246C
  goto L_801D2664; // 801D2470
L_801D2474:;
  c->r[4]=c->r[3]|c->r[3]; // 801D2474
  c->r[3]=c->r[1]+0x0000000Cu; // 801D2478
  c->lr=0x801D2480u; f_801EF8B0(c); // 801D247C
  c->r[4]=c->r[31]|c->r[31]; // 801D2480
  c->r[3]=c->r[1]+0x0000000Cu; // 801D2484
  c->r[5]=0u+0x00000000u; // 801D2488
  c->lr=0x801D2490u; f_801EF980(c); // 801D248C
  goto L_801D2664; // 801D2490
L_801D2494:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D2494
  c->r[29]=c->r[3]+0x00000008u; // 801D2498
  cmpu(c,0,c->r[30],c->r[0]); // 801D249C
  if (crb(c,0)) { goto L_801D24AC; } // 801D24A0
  c->r[3]=0u+0x00000000u; // 801D24A4
  goto L_801D2664; // 801D24A8
L_801D24AC:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801D24AC
  c->r[30]=c->r[3]+c->r[0]; // 801D24B0
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801D24B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D24B8
  if (crb(c,2)) { goto L_801D24D8; } // 801D24BC
  c->r[5]=0u+0x802D0000u; // 801D24C0
  c->r[3]=c->r[13]+0xFFFF9DB0u; // 801D24C4
  c->r[5]=c->r[5]+0xFFFFD3B0u; // 801D24C8
  c->r[4]=0u+0x0000008Du; // 801D24CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D24D0
  c->lr=0x801D24D8u; f_801F9770(c); // 801D24D4
L_801D24D8:;
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 801D24D8
  c->r[5]=c->r[29]|c->r[29]; // 801D24DC
  c->r[4]=R32(c->r[30]+0x00000010u); // 801D24E0
  c->lr=0x801D24E8u; f_801EF600(c); // 801D24E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D24E8
  if (!crb(c,2)) { goto L_801D24F8; } // 801D24EC
  c->r[3]=0u+0x00000000u; // 801D24F0
  goto L_801D2664; // 801D24F4
L_801D24F8:;
  c->r[4]=c->r[3]|c->r[3]; // 801D24F8
  c->r[3]=c->r[1]+0x00000008u; // 801D24FC
  c->lr=0x801D2504u; f_801EF970(c); // 801D2500
  c->r[4]=c->r[31]|c->r[31]; // 801D2504
  c->r[5]=c->r[28]|c->r[28]; // 801D2508
  c->r[3]=c->r[1]+0x00000008u; // 801D250C
  c->lr=0x801D2514u; f_801EF980(c); // 801D2510
  goto L_801D2664; // 801D2514
L_801D2518:;
  cmps(c,0,(int32_t)c->r[6],1); // 801D2518
  if (!crb(c,2)) { goto L_801D25A4; } // 801D251C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801D2520
  cmps(c,0,(int32_t)c->r[0],0); // 801D2524
  if (!crb(c,2)) { goto L_801D2534; } // 801D2528
  c->r[3]=0u+0x00000000u; // 801D252C
  goto L_801D2664; // 801D2530
L_801D2534:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2534
  if (crb(c,2)) { goto L_801D2540; } // 801D2538
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D253C
L_801D2540:;
  c->r[6]=R32(c->r[27]+0x00000004u); // 801D2540
  c->r[0]=0u+0x0000000Du; // 801D2544
  c->r[5]=c->r[31]+0x00000014u; // 801D2548
  c->r[3]=R32(c->r[6]+0x00000000u); // 801D254C
  c->r[4]=c->r[6]+0x00000014u; // 801D2550
  W32(c->r[31]+0x00000000u,c->r[3]); // 801D2554
  c->r[3]=R8(c->r[6]+0x00000004u); // 801D2558
  W8(c->r[31]+0x00000004u,c->r[3]); // 801D255C
  c->r[3]=R32(c->r[6]+0x00000008u); // 801D2560
  W32(c->r[31]+0x00000008u,c->r[3]); // 801D2564
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 801D2568
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801D256C
  c->r[3]=R32(c->r[6]+0x00000010u); // 801D2570
  W32(c->r[31]+0x00000010u,c->r[3]); // 801D2574
  c->r[3]=R32(c->r[6]+0x00000014u); // 801D2578
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D257C
  c->ctr=c->r[0]; // 801D2580
  c->r[0]=c->r[0]|0x00000000u; // 801D2584
L_801D2588:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D2588
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D258C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D2590
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D2594
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2588; } // 801D2598
  c->r[3]=0u+0x00000001u; // 801D259C
  goto L_801D2664; // 801D25A0
L_801D25A4:;
  cmps(c,0,(int32_t)c->r[6],2); // 801D25A4
  if (!crb(c,2)) { goto L_801D264C; } // 801D25A8
  c->r[3]=R32(c->r[27]+0x00000004u); // 801D25AC
  cmps(c,0,(int32_t)c->r[3],0); // 801D25B0
  if (!crb(c,2)) { goto L_801D25C0; } // 801D25B4
  c->r[3]=0u+0x00000000u; // 801D25B8
  goto L_801D2664; // 801D25BC
L_801D25C0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D25C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D25C4
  c->ctr=c->r[12]; // 801D25C8
  if (true) { c->lr=0x801D25D0u; dispatch(c,c->ctr); } // 801D25CC
  cmps(c,0,(int32_t)c->r[3],0); // 801D25D0
  if (!crb(c,2)) { goto L_801D25E0; } // 801D25D4
  c->r[3]=0u+0x00000000u; // 801D25D8
  goto L_801D2664; // 801D25DC
L_801D25E0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D25E0
  if (crb(c,2)) { goto L_801D25EC; } // 801D25E4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801D25E8
L_801D25EC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801D25EC
  c->r[0]=0u+0x0000000Du; // 801D25F0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801D25F4
  c->r[4]=c->r[3]+0x00000014u; // 801D25F8
  c->r[5]=c->r[31]+0x00000014u; // 801D25FC
  c->r[6]=R8(c->r[3]+0x00000004u); // 801D2600
  W8(c->r[31]+0x00000004u,c->r[6]); // 801D2604
  c->r[6]=R32(c->r[3]+0x00000008u); // 801D2608
  W32(c->r[31]+0x00000008u,c->r[6]); // 801D260C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801D2610
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 801D2614
  c->r[6]=R32(c->r[3]+0x00000010u); // 801D2618
  W32(c->r[31]+0x00000010u,c->r[6]); // 801D261C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801D2620
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D2624
  c->ctr=c->r[0]; // 801D2628
  c->r[0]=c->r[0]|0x00000000u; // 801D262C
L_801D2630:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D2630
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D2634
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D2638
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D263C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2630; } // 801D2640
  c->r[3]=0u+0x00000001u; // 801D2644
  goto L_801D2664; // 801D2648
L_801D264C:;
  c->r[3]=c->r[30]+0x00000000u; // 801D264C
  c->r[5]=c->r[30]+0x0000023Cu; // 801D2650
  c->r[4]=0u+0x00000185u; // 801D2654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2658
  c->lr=0x801D2660u; f_801F9770(c); // 801D265C
  c->r[3]=0u+0x00000000u; // 801D2660
L_801D2664:;
  c->r[11]=c->r[1]+0x00000030u; // 801D2664
  c->lr=0x801D266Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2668
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D266C
  c->lr=c->r[0]; // 801D2670
  c->r[1]=c->r[1]+0x00000030u; // 801D2674
  return; // 801D2678
}

// fn_801D2680
void f_801D2680(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2680
  c->r[4]=0u+0x00000000u; // 801D2684
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2688
  c->r[0]=0u+0x00000001u; // 801D268C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801D2690
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801D2694
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801D2698
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D269C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801D26A0
  W8(c->r[3]+0x00000018u,c->r[4]); // 801D26A4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801D26A8
  W8(c->r[3]+0x00000019u,c->r[4]); // 801D26AC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801D26B0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801D26B4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801D26B8
  W32(c->r[3]+0x00000028u,c->r[4]); // 801D26BC
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801D26C0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801D26C4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 801D26C8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801D26CC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801D26D0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801D26D4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801D26D8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801D26DC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 801D26E0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801D26E4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801D26E8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801D26EC
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D26F0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801D26F4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 801D26F8
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801D26FC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D2700
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 801D2704
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801D2708
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801D270C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 801D2710
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 801D2714
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801D2718
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 801D271C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 801D2720
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 801D2724
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 801D2728
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[1]);} // 801D272C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 801D2730
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 801D2734
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801D2738
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 801D273C
  return; // 801D2740
}

// fn_801D2750
void f_801D2750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2750
  c->r[0]=c->lr; // 801D2754
  c->r[4]=0u+0x802D0000u; // 801D2758
  c->r[5]=c->r[3]+0x00000068u; // 801D275C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2760
  c->r[6]=c->r[3]+0x000000B0u; // 801D2764
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2768
  cmpu(c,0,c->r[5],c->r[6]); // 801D276C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2770
  c->r[4]=c->r[4]+0xFFFFD59Cu; // 801D2774
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2778
  c->r[31]=c->r[3]|c->r[3]; // 801D277C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D2780
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801D2784
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801D2788
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801D278C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D2790
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801D2794
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801D2798
  if (!crb(c,0)) { goto L_801D27D8; } // 801D279C
  c->r[4]=c->r[6]+0x00000017u; // 801D27A0
  c->r[0]=0u+0x00000018u; // 801D27A4
  c->r[4]=c->r[4]-c->r[5]; // 801D27A8
  c->r[4]=divwu(c->r[4],c->r[0]); // 801D27AC
  c->ctr=c->r[4]; // 801D27B0
  if (!crb(c,0)) { goto L_801D27D8; } // 801D27B4
L_801D27B8:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801D27B8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801D27BC
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 801D27C0
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D27C4
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 801D27C8
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 801D27CC
  c->r[5]=c->r[5]+0x00000018u; // 801D27D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D27B8; } // 801D27D4
L_801D27D8:;
  c->r[3]=c->r[3]+0x00000004u; // 801D27D8
  c->lr=0x801D27E0u; f_801D2680(c); // 801D27DC
  c->r[0]=0u+0xFFFFFFFFu; // 801D27E0
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801D27E4
  c->r[3]=c->r[31]+0x00000004u; // 801D27E8
  c->lr=0x801D27F0u; f_801D2680(c); // 801D27EC
  c->r[3]=c->r[31]|c->r[31]; // 801D27F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D27F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D27F8
  c->lr=c->r[0]; // 801D27FC
  c->r[1]=c->r[1]+0x00000010u; // 801D2800
  return; // 801D2804
}

// fn_801D2810
void f_801D2810(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 801D2810
  f_801D2680(c); return; // 801D2814
}

// fn_801D2820
void f_801D2820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2820
  c->r[0]=c->lr; // 801D2824
  cmpu(c,0,c->r[4],0x00000002u); // 801D2828
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D282C
  c->r[0]=0u+0x00000000u; // 801D2830
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801D2834
  c->f[31]=c->f[1]; // 801D2838
  W32(c->r[1]+0x00000014u,c->r[31]); // 801D283C
  c->r[31]=c->r[4]|c->r[4]; // 801D2840
  W32(c->r[1]+0x00000010u,c->r[30]); // 801D2844
  c->r[30]=c->r[3]|c->r[3]; // 801D2848
  if (crb(c,1)) { goto L_801D2854; } // 801D284C
  c->r[0]=0u+0x00000001u; // 801D2850
L_801D2854:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2854
  if (!crb(c,2)) { goto L_801D2884; } // 801D2858
  c->r[3]=0u+0x802D0000u; // 801D285C
  c->r[5]=0u+0x802D0000u; // 801D2860
  c->r[6]=c->r[31]|c->r[31]; // 801D2864
  c->r[4]=0u+0x0000004Fu; // 801D2868
  c->r[3]=c->r[3]+0xFFFFD450u; // 801D286C
  c->r[5]=c->r[5]+0xFFFFD464u; // 801D2870
  c->r[7]=0u+0x00000000u; // 801D2874
  c->r[8]=0u+0x00000003u; // 801D2878
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D287C
  c->lr=0x801D2884u; f_801F9770(c); // 801D2880
L_801D2884:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D2884
  c->r[3]=c->r[30]+c->r[0]; // 801D2888
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[31]);} // 801D288C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801D2890
  c->r[31]=R32(c->r[1]+0x00000014u); // 801D2894
  c->r[30]=R32(c->r[1]+0x00000010u); // 801D2898
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D289C
  c->lr=c->r[0]; // 801D28A0
  c->r[1]=c->r[1]+0x00000020u; // 801D28A4
  return; // 801D28A8
}

// fn_801D28B0
void f_801D28B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D28B0
  c->r[0]=c->lr; // 801D28B4
  cmpu(c,0,c->r[4],0x00000002u); // 801D28B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D28BC
  c->r[0]=0u+0x00000000u; // 801D28C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D28C4
  c->r[31]=c->r[4]|c->r[4]; // 801D28C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D28CC
  c->r[30]=c->r[3]|c->r[3]; // 801D28D0
  if (crb(c,1)) { goto L_801D28DC; } // 801D28D4
  c->r[0]=0u+0x00000001u; // 801D28D8
L_801D28DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D28DC
  if (!crb(c,2)) { goto L_801D290C; } // 801D28E0
  c->r[3]=0u+0x802D0000u; // 801D28E4
  c->r[5]=0u+0x802D0000u; // 801D28E8
  c->r[6]=c->r[31]|c->r[31]; // 801D28EC
  c->r[4]=0u+0x00000055u; // 801D28F0
  c->r[3]=c->r[3]+0xFFFFD450u; // 801D28F4
  c->r[5]=c->r[5]+0xFFFFD464u; // 801D28F8
  c->r[7]=0u+0x00000000u; // 801D28FC
  c->r[8]=0u+0x00000003u; // 801D2900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2904
  c->lr=0x801D290Cu; f_801F9770(c); // 801D2908
L_801D290C:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D290C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2910
  c->r[3]=c->r[30]+c->r[0]; // 801D2914
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2918
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D291C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2920
  c->lr=c->r[0]; // 801D2924
  c->r[1]=c->r[1]+0x00000010u; // 801D2928
  return; // 801D292C
}

// fn_801D2930
void f_801D2930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2930
  c->r[0]=c->lr; // 801D2934
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D2938
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D293C
  c->r[0]=0u+0x00000000u; // 801D2940
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D2944
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D2948
  c->f[31]=c->f[1]; // 801D294C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2950
  c->r[31]=0u+0x802D0000u; // 801D2954
  c->r[31]=c->r[31]+0xFFFFD450u; // 801D2958
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D295C
  c->r[30]=c->r[4]|c->r[4]; // 801D2960
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2964
  c->r[29]=c->r[3]|c->r[3]; // 801D2968
  if (crb(c,1)) { goto L_801D2974; } // 801D296C
  c->r[0]=0u+0x00000001u; // 801D2970
L_801D2974:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2974
  if (!crb(c,2)) { goto L_801D299C; } // 801D2978
  c->r[6]=c->r[30]|c->r[30]; // 801D297C
  c->r[3]=c->r[31]+0x00000000u; // 801D2980
  c->r[5]=c->r[31]+0x0000004Cu; // 801D2984
  c->r[4]=0u+0x0000005Bu; // 801D2988
  c->r[7]=0u+0x00000000u; // 801D298C
  c->r[8]=0u+0x0000007Fu; // 801D2990
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2994
  c->lr=0x801D299Cu; f_801F9770(c); // 801D2998
L_801D299C:;
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D299C
  c->r[0]=0u+0x00000000u; // 801D29A0
  fcmp(c,0,c->f[31],c->f[0]); // 801D29A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D29A8
  if (!crb(c,2)) { goto L_801D29C4; } // 801D29AC
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D29B0
  fcmp(c,0,c->f[31],c->f[0]); // 801D29B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D29B8
  if (!crb(c,2)) { goto L_801D29C4; } // 801D29BC
  c->r[0]=0u+0x00000001u; // 801D29C0
L_801D29C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D29C4
  if (!crb(c,2)) { goto L_801D29F4; } // 801D29C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 801D29CC
  c->r[3]=c->r[31]+0x00000000u; // 801D29D0
  c->r[5]=c->r[31]+0x00000088u; // 801D29D4
  c->r[4]=0u+0x0000005Cu; // 801D29D8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801D29DC
  c->r[7]=0u+0x00000000u; // 801D29E0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801D29E4
  c->r[8]=0u+0x00000001u; // 801D29E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D29EC
  c->lr=0x801D29F4u; f_801F9770(c); // 801D29F0
L_801D29F4:;
  W8(c->r[29]+0x0000001Cu,c->r[30]); // 801D29F4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[31]);} // 801D29F8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801D29FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D2A00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2A04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2A08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2A0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2A10
  c->lr=c->r[0]; // 801D2A14
  c->r[1]=c->r[1]+0x00000030u; // 801D2A18
  return; // 801D2A1C
}

// fn_801D2A20
void f_801D2A20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2A20
  c->r[0]=c->lr; // 801D2A24
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D2A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2A2C
  c->r[0]=0u+0x00000000u; // 801D2A30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2A34
  c->r[31]=c->r[4]|c->r[4]; // 801D2A38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2A3C
  c->r[30]=c->r[3]|c->r[3]; // 801D2A40
  if (crb(c,1)) { goto L_801D2A4C; } // 801D2A44
  c->r[0]=0u+0x00000001u; // 801D2A48
L_801D2A4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2A4C
  if (!crb(c,2)) { goto L_801D2A7C; } // 801D2A50
  c->r[3]=0u+0x802D0000u; // 801D2A54
  c->r[5]=0u+0x802D0000u; // 801D2A58
  c->r[6]=c->r[31]|c->r[31]; // 801D2A5C
  c->r[4]=0u+0x00000064u; // 801D2A60
  c->r[3]=c->r[3]+0xFFFFD450u; // 801D2A64
  c->r[5]=c->r[5]+0xFFFFD514u; // 801D2A68
  c->r[7]=0u+0x00000000u; // 801D2A6C
  c->r[8]=0u+0x0000007Fu; // 801D2A70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2A74
  c->lr=0x801D2A7Cu; f_801F9770(c); // 801D2A78
L_801D2A7C:;
  W8(c->r[30]+0x0000001Du,c->r[31]); // 801D2A7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2A80
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2A84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2A88
  c->lr=c->r[0]; // 801D2A8C
  c->r[1]=c->r[1]+0x00000010u; // 801D2A90
  return; // 801D2A94
}

// fn_801D2AA0
void f_801D2AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2AA0
  c->r[0]=c->lr; // 801D2AA4
  cmpu(c,0,c->r[4],0x00000003u); // 801D2AA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2AAC
  c->r[0]=0u+0x00000000u; // 801D2AB0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801D2AB4
  c->f[31]=c->f[1]; // 801D2AB8
  W32(c->r[1]+0x00000014u,c->r[31]); // 801D2ABC
  c->r[31]=c->r[4]|c->r[4]; // 801D2AC0
  W32(c->r[1]+0x00000010u,c->r[30]); // 801D2AC4
  c->r[30]=c->r[3]|c->r[3]; // 801D2AC8
  if (crb(c,1)) { goto L_801D2AD4; } // 801D2ACC
  c->r[0]=0u+0x00000001u; // 801D2AD0
L_801D2AD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2AD4
  if (!crb(c,2)) { goto L_801D2B04; } // 801D2AD8
  c->r[3]=0u+0x802D0000u; // 801D2ADC
  c->r[5]=0u+0x802D0000u; // 801D2AE0
  c->r[6]=c->r[31]|c->r[31]; // 801D2AE4
  c->r[4]=0u+0x0000006Bu; // 801D2AE8
  c->r[3]=c->r[3]+0xFFFFD450u; // 801D2AEC
  c->r[5]=c->r[5]+0xFFFFD554u; // 801D2AF0
  c->r[7]=0u+0x00000000u; // 801D2AF4
  c->r[8]=0u+0x00000004u; // 801D2AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2AFC
  c->lr=0x801D2B04u; f_801F9770(c); // 801D2B00
L_801D2B04:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D2B04
  c->r[3]=c->r[30]+c->r[0]; // 801D2B08
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[31]);} // 801D2B0C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801D2B10
  c->r[31]=R32(c->r[1]+0x00000014u); // 801D2B14
  c->r[30]=R32(c->r[1]+0x00000010u); // 801D2B18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2B1C
  c->lr=c->r[0]; // 801D2B20
  c->r[1]=c->r[1]+0x00000020u; // 801D2B24
  return; // 801D2B28
}

// fn_801D2B30
void f_801D2B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B30
  c->r[0]=c->lr; // 801D2B34
  cmpu(c,0,c->r[4],0x00000003u); // 801D2B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2B3C
  c->r[0]=0u+0x00000000u; // 801D2B40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2B44
  c->r[31]=c->r[4]|c->r[4]; // 801D2B48
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2B4C
  c->r[30]=c->r[3]|c->r[3]; // 801D2B50
  if (crb(c,1)) { goto L_801D2B5C; } // 801D2B54
  c->r[0]=0u+0x00000001u; // 801D2B58
L_801D2B5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2B5C
  if (!crb(c,2)) { goto L_801D2B8C; } // 801D2B60
  c->r[3]=0u+0x802D0000u; // 801D2B64
  c->r[5]=0u+0x802D0000u; // 801D2B68
  c->r[6]=c->r[31]|c->r[31]; // 801D2B6C
  c->r[4]=0u+0x00000071u; // 801D2B70
  c->r[3]=c->r[3]+0xFFFFD450u; // 801D2B74
  c->r[5]=c->r[5]+0xFFFFD554u; // 801D2B78
  c->r[7]=0u+0x00000000u; // 801D2B7C
  c->r[8]=0u+0x00000004u; // 801D2B80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2B84
  c->lr=0x801D2B8Cu; f_801F9770(c); // 801D2B88
L_801D2B8C:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D2B8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2B90
  c->r[3]=c->r[30]+c->r[0]; // 801D2B94
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2B98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2B9C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2BA0
  c->lr=c->r[0]; // 801D2BA4
  c->r[1]=c->r[1]+0x00000010u; // 801D2BA8
  return; // 801D2BAC
}

// fn_801D2BB0
void f_801D2BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2BB0
  c->r[0]=c->lr; // 801D2BB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D2BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2BBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2BC0
  c->r[31]=c->r[3]|c->r[3]; // 801D2BC4
  if (crb(c,2)) { goto L_801D2BD8; } // 801D2BC8
  cmps(c,0,(int32_t)c->r[4],0); // 801D2BCC
  if (!crb(c,1)) { goto L_801D2BD8; } // 801D2BD0
  c->lr=0x801D2BD8u; f_800B9AD0(c); // 801D2BD4
L_801D2BD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2BDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2BE0
  c->lr=c->r[0]; // 801D2BE4
  c->r[1]=c->r[1]+0x00000010u; // 801D2BE8
  return; // 801D2BEC
}

// fn_801D2BF0
void f_801D2BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2BF0
  c->r[0]=c->lr; // 801D2BF4
  c->r[7]=0u+0x802D0000u; // 801D2BF8
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2BFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2C00
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D2C04
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2C08
  c->r[6]=0u+0x00000000u; // 801D2C0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2C10
  c->r[7]=c->r[7]+0xFFFFD978u; // 801D2C14
  c->r[0]=0u+0xFFFFFFFFu; // 801D2C18
  c->r[31]=c->r[5]|c->r[5]; // 801D2C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2C20
  c->r[30]=c->r[4]|c->r[4]; // 801D2C24
  c->r[4]=0u+0x00000000u; // 801D2C28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2C2C
  c->r[29]=c->r[3]|c->r[3]; // 801D2C30
  W32(c->r[3]+0x00000000u,c->r[7]); // 801D2C34
  W32(c->r[3]+0x00000004u,c->r[6]); // 801D2C38
  W32(c->r[3]+0x00000008u,c->r[6]); // 801D2C3C
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801D2C40
  W32(c->r[3]+0x00000010u,c->r[6]); // 801D2C44
  W32(c->r[3]+0x00000014u,c->r[6]); // 801D2C48
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D2C4C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801D2C50
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801D2C54
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801D2C58
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D2C5C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801D2C60
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801D2C64
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801D2C68
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 801D2C6C
  W32(c->r[3]+0x00000050u,c->r[6]); // 801D2C70
  W32(c->r[3]+0x00000054u,c->r[6]); // 801D2C74
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 801D2C78
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 801D2C7C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801D2C80
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801D2C84
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801D2C88
  W32(c->r[3]+0x0000006Cu,c->r[6]); // 801D2C8C
  W32(c->r[3]+0x00000070u,c->r[6]); // 801D2C90
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801D2C94
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801D2C98
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 801D2C9C
  W32(c->r[3]+0x00000080u,c->r[6]); // 801D2CA0
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 801D2CA4
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 801D2CA8
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801D2CAC
  W32(c->r[3]+0x000000A8u,c->r[6]); // 801D2CB0
  W32(c->r[3]+0x000000ACu,c->r[6]); // 801D2CB4
  W32(c->r[3]+0x000000F0u,c->r[6]); // 801D2CB8
  W32(c->r[3]+0x000000F4u,c->r[6]); // 801D2CBC
  W32(c->r[3]+0x000000F8u,c->r[6]); // 801D2CC0
  W32(c->r[3]+0x000000FCu,c->r[6]); // 801D2CC4
  W32(c->r[3]+0x00000100u,c->r[6]); // 801D2CC8
  W32(c->r[3]+0x00000104u,c->r[6]); // 801D2CCC
  W32(c->r[3]+0x00000108u,c->r[6]); // 801D2CD0
  W32(c->r[3]+0x0000010Cu,c->r[6]); // 801D2CD4
  if (crb(c,1)) { goto L_801D2CE0; } // 801D2CD8
  c->r[4]=0u+0x00000001u; // 801D2CDC
L_801D2CE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D2CE0
  if (!crb(c,2)) { goto L_801D2D10; } // 801D2CE4
  c->r[3]=0u+0x802D0000u; // 801D2CE8
  c->r[5]=0u+0x802D0000u; // 801D2CEC
  c->r[6]=c->r[30]|c->r[30]; // 801D2CF0
  c->r[4]=0u+0x00000033u; // 801D2CF4
  c->r[3]=c->r[3]+0xFFFFD5C0u; // 801D2CF8
  c->r[5]=c->r[5]+0xFFFFD5D4u; // 801D2CFC
  c->r[7]=0u+0x00000000u; // 801D2D00
  c->r[8]=0u+0x0000007Fu; // 801D2D04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2D08
  c->lr=0x801D2D10u; f_801F9770(c); // 801D2D0C
L_801D2D10:;
  c->r[4]=0u+0x00000000u; // 801D2D10
  c->r[0]=0u+0x00000001u; // 801D2D14
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801D2D18
  c->r[3]=c->r[29]|c->r[29]; // 801D2D1C
  W32(c->r[29]+0x00000020u,c->r[4]); // 801D2D20
  W32(c->r[29]+0x00000024u,c->r[4]); // 801D2D24
  W32(c->r[29]+0x00000028u,c->r[4]); // 801D2D28
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 801D2D2C
  W8(c->r[29]+0x00000099u,c->r[0]); // 801D2D30
  W8(c->r[29]+0x00000098u,c->r[30]); // 801D2D34
  W32(c->r[29]+0x00000050u,c->r[31]); // 801D2D38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2D3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2D40
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2D44
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2D48
  c->lr=c->r[0]; // 801D2D4C
  c->r[1]=c->r[1]+0x00000020u; // 801D2D50
  return; // 801D2D54
}

// fn_801D2D60
void f_801D2D60(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D2D60
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2D64
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D2D68
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[0]); // 801D2D6C
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2D70
  W32(c->r[3]+0x00000088u,c->r[0]); // 801D2D74
  W8(c->r[3]+0x0000008Cu,c->r[0]); // 801D2D78
  W8(c->r[3]+0x00000084u,c->r[0]); // 801D2D7C
  W8(c->r[3]+0x00000085u,c->r[0]); // 801D2D80
  W8(c->r[3]+0x00000086u,c->r[0]); // 801D2D84
  W8(c->r[3]+0x00000087u,c->r[0]); // 801D2D88
  W32(c->r[3]+0x00000090u,c->r[0]); // 801D2D8C
  W32(c->r[3]+0x00000094u,c->r[0]); // 801D2D90
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 801D2D94
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[4]);} // 801D2D98
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801D2D9C
  W32(c->r[3]+0x00000070u,c->r[0]); // 801D2DA0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801D2DA4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801D2DA8
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801D2DAC
  W32(c->r[3]+0x00000080u,c->r[0]); // 801D2DB0
  if (crb(c,0)) { goto L_801D2DBC; } // 801D2DB4
  goto L_801D2DF8; // 801D2DB8
L_801D2DBC:;
  c->r[4]=c->r[0]^0x80000000u; // 801D2DBC
  c->r[0]=0u+0x43300000u; // 801D2DC0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D2DC4
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[4]); // 801D2DC8
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[3]=RF64(ea);} // 801D2DCC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D2DD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D2DD4
  W32(c->r[1]+0x00000014u,c->r[4]); // 801D2DD8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801D2DDC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D2DE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D2DE4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D2DE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801D2DEC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D2DF0
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 801D2DF4
L_801D2DF8:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 801D2DF8
  c->r[0]=0u+0x00000000u; // 801D2DFC
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2E00
  c->r[4]=0u+0x00000001u; // 801D2E04
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2E08
  cmps(c,0,(int32_t)c->r[5],0); // 801D2E0C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 801D2E10
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801D2E14
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 801D2E18
  W32(c->r[3]+0x00000070u,c->r[0]); // 801D2E1C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[1]);} // 801D2E20
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 801D2E24
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 801D2E28
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 801D2E2C
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 801D2E30
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 801D2E34
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801D2E38
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801D2E3C
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 801D2E40
  W8(c->r[3]+0x0000009Au,c->r[0]); // 801D2E44
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 801D2E48
  if (crb(c,2)) { goto L_801D2E54; } // 801D2E4C
  c->r[4]=R32(c->r[5]+0x00000034u); // 801D2E50
L_801D2E54:;
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2E54
  c->r[0]=0u+0x00000000u; // 801D2E58
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2E5C
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801D2E60
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 801D2E64
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 801D2E68
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 801D2E6C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 801D2E70
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 801D2E74
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 801D2E78
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 801D2E7C
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 801D2E80
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[1]);} // 801D2E84
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801D2E88
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801D2E8C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801D2E90
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D2E94
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801D2E98
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801D2E9C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801D2EA0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801D2EA4
  W32(c->r[3]+0x00000050u,c->r[0]); // 801D2EA8
  c->r[1]=c->r[1]+0x00000020u; // 801D2EAC
  return; // 801D2EB0
}

// fn_801D2EC0
void f_801D2EC0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000085u); // 801D2EC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D2EC4
  if (!crb(c,2)) return; // 801D2EC8
  c->r[0]=0u+0x00000001u; // 801D2ECC
  W8(c->r[3]+0x00000084u,c->r[0]); // 801D2ED0
  return; // 801D2ED4
}

// fn_801D2EE0
void f_801D2EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2EE0
  c->r[0]=c->lr; // 801D2EE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2EE8
  c->r[0]=0u+0x43300000u; // 801D2EEC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D2EF0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D2EF4
  c->r[30]=c->r[4]|c->r[4]; // 801D2EF8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D2EFC
  c->r[29]=c->r[3]|c->r[3]; // 801D2F00
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2F04
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D2F08
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D2F0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D2F10
  c->ctr=c->r[12]; // 801D2F14
  if (true) { c->lr=0x801D2F1Cu; dispatch(c,c->ctr); } // 801D2F18
  cmps(c,0,(int32_t)c->r[30],0); // 801D2F1C
  c->r[31]=c->r[3]|c->r[3]; // 801D2F20
  if (crb(c,2)) { goto L_801D2F78; } // 801D2F24
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2F28
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D2F2C
  c->ctr=c->r[12]; // 801D2F30
  if (true) { c->lr=0x801D2F38u; dispatch(c,c->ctr); } // 801D2F34
  cmps(c,0,(int32_t)c->r[3],0); // 801D2F38
  if (crb(c,2)) { goto L_801D2F78; } // 801D2F3C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D2F40
  c->r[3]=c->r[31]|c->r[31]; // 801D2F44
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D2F48
  c->ctr=c->r[12]; // 801D2F4C
  if (true) { c->lr=0x801D2F54u; dispatch(c,c->ctr); } // 801D2F50
  cmps(c,0,(int32_t)c->r[3],0); // 801D2F54
  if (crb(c,2)) { goto L_801D2F78; } // 801D2F58
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D2F5C
  c->r[3]=c->r[31]|c->r[31]; // 801D2F60
  c->r[12]=R32(c->r[12]+0x00000020u); // 801D2F64
  c->ctr=c->r[12]; // 801D2F68
  if (true) { c->lr=0x801D2F70u; dispatch(c,c->ctr); } // 801D2F6C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2F70
  if (crb(c,2)) { goto L_801D2F90; } // 801D2F74
L_801D2F78:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D2F78
  c->r[3]=c->r[29]|c->r[29]; // 801D2F7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2F80
  c->ctr=c->r[12]; // 801D2F84
  if (true) { c->lr=0x801D2F8Cu; dispatch(c,c->ctr); } // 801D2F88
  goto L_801D30AC; // 801D2F8C
L_801D2F90:;
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 801D2F90
  c->r[3]=R32(c->r[29]+0x00000070u); // 801D2F94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801D2F98
  if (crb(c,0)) { goto L_801D2FA8; } // 801D2F9C
  {uint32_t ea=c->r[29]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2FA0
  goto L_801D2FE4; // 801D2FA4
L_801D2FA8:;
  c->r[0]=c->r[3]^0x80000000u; // 801D2FA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D2FAC
  c->r[0]=c->r[4]^0x80000000u; // 801D2FB0
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D2FB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D2FB8
  {uint32_t ea=c->r[29]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2FBC
  {uint32_t ea=c->r[29]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2FC0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D2FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2FC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D2FCC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D2FD0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D2FD4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D2FD8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D2FDC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801D2FE0
L_801D2FE4:;
  c->r[0]=c->r[30]^0x80000000u; // 801D2FE4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D2FE8
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D2FEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801D2FF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D2FF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D2FF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D2FFC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D3000
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801D3004
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801D3008
  if (crb(c,0)) { goto L_801D3018; } // 801D300C
  {uint32_t ea=c->r[29]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3010
  goto L_801D3050; // 801D3014
L_801D3018:;
  c->r[0]=c->r[3]^0x80000000u; // 801D3018
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D301C
  c->r[0]=c->r[4]^0x80000000u; // 801D3020
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3024
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801D3028
  {uint32_t ea=c->r[29]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D302C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801D3030
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D3034
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801D3038
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D303C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3040
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D3044
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D3048
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801D304C
L_801D3050:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801D3050
  c->r[0]=0u+0x00000000u; // 801D3054
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3058
  cmps(c,0,(int32_t)c->r[3],0); // 801D305C
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 801D3060
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 801D3064
  W32(c->r[29]+0x0000006Cu,c->r[5]); // 801D3068
  W32(c->r[29]+0x00000070u,c->r[0]); // 801D306C
  W8(c->r[29]+0x00000098u,c->r[0]); // 801D3070
  if (crb(c,2)) { goto L_801D3080; } // 801D3074
  c->r[4]=c->r[29]|c->r[29]; // 801D3078
  c->lr=0x801D3080u; f_801E4640(c); // 801D307C
L_801D3080:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3080
  c->r[3]=c->r[29]|c->r[29]; // 801D3084
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801D3088
  c->ctr=c->r[12]; // 801D308C
  if (true) { c->lr=0x801D3094u; dispatch(c,c->ctr); } // 801D3090
  c->r[3]=0u+0x00000000u; // 801D3094
  c->r[0]=0u+0x00000001u; // 801D3098
  W8(c->r[29]+0x00000086u,c->r[3]); // 801D309C
  W32(c->r[29]+0x00000088u,c->r[3]); // 801D30A0
  W8(c->r[29]+0x0000008Cu,c->r[3]); // 801D30A4
  W8(c->r[29]+0x00000087u,c->r[0]); // 801D30A8
L_801D30AC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D30AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D30B0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D30B4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D30B8
  c->lr=c->r[0]; // 801D30BC
  c->r[1]=c->r[1]+0x00000030u; // 801D30C0
  return; // 801D30C4
}

// fn_801D30D0
void f_801D30D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D30D0
  c->r[0]=c->lr; // 801D30D4
  cmps(c,0,(int32_t)c->r[4],0); // 801D30D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D30DC
  c->r[0]=0u+0x43300000u; // 801D30E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D30E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D30E8
  if (crb(c,2)) { goto L_801D322C; } // 801D30EC
  c->r[6]=R32(c->r[3]+0x00000088u); // 801D30F0
  cmpu(c,0,c->r[6],0x00000001u); // 801D30F4
  if (!crb(c,1)) { goto L_801D3110; } // 801D30F8
  cmps(c,0,(int32_t)c->r[6],3); // 801D30FC
  if (crb(c,2)) { goto L_801D3110; } // 801D3100
  cmps(c,0,(int32_t)c->r[6],2); // 801D3104
  if (crb(c,2)) { goto L_801D3368; } // 801D3108
  goto L_801D320C; // 801D310C
L_801D3110:;
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 801D3110
  c->r[4]=R32(c->r[3]+0x00000080u); // 801D3114
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801D3118
  if (crb(c,0)) { goto L_801D3128; } // 801D311C
  {uint32_t ea=c->r[3]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3120
  goto L_801D3164; // 801D3124
L_801D3128:;
  c->r[0]=c->r[4]^0x80000000u; // 801D3128
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D312C
  c->r[0]=c->r[6]^0x80000000u; // 801D3130
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D3134
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D3138
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D313C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3140
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D3144
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3148
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D314C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D3150
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D3154
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3158
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D315C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801D3160
L_801D3164:;
  c->r[0]=c->r[5]^0x80000000u; // 801D3164
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D3168
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[1]=RF64(ea);} // 801D316C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D3170
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D3174
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801D3178
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D317C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801D3180
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801D3184
  cmps(c,0,(int32_t)c->r[5],0); // 801D3188
  if (crb(c,1)) { goto L_801D3194; } // 801D318C
  c->r[5]=0u+0x00000001u; // 801D3190
L_801D3194:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801D3194
  if (crb(c,0)) { goto L_801D31A4; } // 801D3198
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D319C
  goto L_801D31E0; // 801D31A0
L_801D31A4:;
  c->r[0]=c->r[4]^0x80000000u; // 801D31A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D31A8
  c->r[0]=c->r[6]^0x80000000u; // 801D31AC
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D31B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D31B4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D31B8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D31BC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D31C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D31C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D31C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D31CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D31D0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D31D4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D31D8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801D31DC
L_801D31E0:;
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D31E0
  c->r[4]=0u+0x00000000u; // 801D31E4
  c->r[0]=0u+0x00000001u; // 801D31E8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 801D31EC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801D31F0
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 801D31F4
  W32(c->r[3]+0x00000080u,c->r[4]); // 801D31F8
  W32(c->r[3]+0x00000088u,c->r[0]); // 801D31FC
  W8(c->r[3]+0x0000008Cu,c->r[4]); // 801D3200
  goto L_801D3368; // 801D3204
  goto L_801D3368; // 801D3208
L_801D320C:;
  c->r[3]=0u+0x802D0000u; // 801D320C
  c->r[5]=0u+0x802D0000u; // 801D3210
  c->r[4]=0u+0x000000C9u; // 801D3214
  c->r[3]=c->r[3]+0xFFFFD5C0u; // 801D3218
  c->r[5]=c->r[5]+0xFFFFD618u; // 801D321C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3220
  c->lr=0x801D3228u; f_801F9770(c); // 801D3224
  goto L_801D3368; // 801D3228
L_801D322C:;
  c->r[6]=R32(c->r[3]+0x00000088u); // 801D322C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801D3230
  cmpu(c,0,c->r[0],0x00000002u); // 801D3234
  if (!crb(c,1)) { goto L_801D3248; } // 801D3238
  cmps(c,0,(int32_t)c->r[6],0); // 801D323C
  if (!crb(c,2)) { goto L_801D334C; } // 801D3240
  goto L_801D3368; // 801D3244
L_801D3248:;
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 801D3248
  c->r[4]=R32(c->r[3]+0x00000080u); // 801D324C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801D3250
  if (crb(c,0)) { goto L_801D3260; } // 801D3254
  {uint32_t ea=c->r[3]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3258
  goto L_801D329C; // 801D325C
L_801D3260:;
  c->r[0]=c->r[4]^0x80000000u; // 801D3260
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3264
  c->r[0]=c->r[6]^0x80000000u; // 801D3268
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D326C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D3270
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3274
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3278
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D327C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D3280
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D3284
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D3288
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D328C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3290
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D3294
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[0]); // 801D3298
L_801D329C:;
  c->r[0]=c->r[5]^0x80000000u; // 801D329C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D32A0
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D32A4
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[2]=RF64(ea);} // 801D32A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801D32AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801D32B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D32B4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D32B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D32BC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801D32C0
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 801D32C4
  cmps(c,0,(int32_t)c->r[7],0); // 801D32C8
  if (crb(c,1)) { goto L_801D32D4; } // 801D32CC
  c->r[7]=0u+0x00000001u; // 801D32D0
L_801D32D4:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801D32D4
  if (crb(c,0)) { goto L_801D32E4; } // 801D32D8
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D32DC
  goto L_801D3320; // 801D32E0
L_801D32E4:;
  c->r[0]=c->r[4]^0x80000000u; // 801D32E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D32E8
  c->r[0]=c->r[6]^0x80000000u; // 801D32EC
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D32F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D32F4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D32F8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D32FC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D3300
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3304
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D3308
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D330C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D3310
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3314
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D3318
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801D331C
L_801D3320:;
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3320
  c->r[5]=0u+0x00000000u; // 801D3324
  c->r[4]=0u+0x00000003u; // 801D3328
  c->r[0]=0u+0x00000001u; // 801D332C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 801D3330
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801D3334
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 801D3338
  W32(c->r[3]+0x00000080u,c->r[5]); // 801D333C
  W32(c->r[3]+0x00000088u,c->r[4]); // 801D3340
  W8(c->r[3]+0x0000008Cu,c->r[0]); // 801D3344
  goto L_801D3368; // 801D3348
L_801D334C:;
  c->r[3]=0u+0x802D0000u; // 801D334C
  c->r[5]=0u+0x802D0000u; // 801D3350
  c->r[4]=0u+0x000000DDu; // 801D3354
  c->r[3]=c->r[3]+0xFFFFD5C0u; // 801D3358
  c->r[5]=c->r[5]+0xFFFFD618u; // 801D335C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3360
  c->lr=0x801D3368u; f_801F9770(c); // 801D3364
L_801D3368:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3368
  c->lr=c->r[0]; // 801D336C
  c->r[1]=c->r[1]+0x00000020u; // 801D3370
  return; // 801D3374
}

// fn_801D3380
void f_801D3380(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801D3380
  c->r[3]=0u+0x00000001u; // 801D3384
  cmps(c,0,(int32_t)c->r[0],1); // 801D3388
  if (crb(c,2)) return; // 801D338C
  cmps(c,0,(int32_t)c->r[0],2); // 801D3390
  if (crb(c,2)) return; // 801D3394
  c->r[3]=0u+0x00000000u; // 801D3398
  return; // 801D339C
}

// fn_801D33A0
void f_801D33A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D33A0
  c->r[0]=c->lr; // 801D33A4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801D33A8
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801D33AC
  W32(c->r[1]+0x00000098u,c->r[30]); // 801D33B0
  W32(c->r[1]+0x00000094u,c->r[29]); // 801D33B4
  c->r[29]=c->r[3]|c->r[3]; // 801D33B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D33BC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D33C0
  c->ctr=c->r[12]; // 801D33C4
  if (true) { c->lr=0x801D33CCu; dispatch(c,c->ctr); } // 801D33C8
  c->r[0]=R8(c->r[29]+0x00000086u); // 801D33CC
  c->r[31]=c->r[3]|c->r[3]; // 801D33D0
  cmps(c,0,(int32_t)c->r[0],0); // 801D33D4
  if (crb(c,2)) { goto L_801D3448; } // 801D33D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D33DC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D33E0
  c->ctr=c->r[12]; // 801D33E4
  if (true) { c->lr=0x801D33ECu; dispatch(c,c->ctr); } // 801D33E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D33EC
  if (crb(c,2)) { goto L_801D3448; } // 801D33F0
  c->r[3]=R32(c->r[29]+0x00000090u); // 801D33F4
  cmps(c,0,(int32_t)c->r[3],0); // 801D33F8
  if (!crb(c,2)) { goto L_801D3440; } // 801D33FC
  c->r[0]=R32(c->r[29]+0x00000088u); // 801D3400
  cmps(c,0,(int32_t)c->r[0],0); // 801D3404
  if (crb(c,2)) { goto L_801D3414; } // 801D3408
  cmps(c,0,(int32_t)c->r[0],3); // 801D340C
  if (!crb(c,2)) { goto L_801D3448; } // 801D3410
L_801D3414:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3414
  c->r[3]=c->r[29]|c->r[29]; // 801D3418
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D341C
  c->ctr=c->r[12]; // 801D3420
  if (true) { c->lr=0x801D3428u; dispatch(c,c->ctr); } // 801D3424
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3428
  c->r[3]=c->r[29]|c->r[29]; // 801D342C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D3430
  c->ctr=c->r[12]; // 801D3434
  if (true) { c->lr=0x801D343Cu; dispatch(c,c->ctr); } // 801D3438
  goto L_801D3908; // 801D343C
L_801D3440:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D3440
  W32(c->r[29]+0x00000090u,c->r[0]); // 801D3444
L_801D3448:;
  c->r[0]=R8(c->r[29]+0x00000085u); // 801D3448
  c->r[30]=0u+0x00000000u; // 801D344C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3450
  if (!crb(c,2)) { goto L_801D3484; } // 801D3454
  c->r[0]=R8(c->r[29]+0x00000084u); // 801D3458
  cmps(c,0,(int32_t)c->r[0],0); // 801D345C
  if (crb(c,2)) { goto L_801D3908; } // 801D3460
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3464
  c->r[3]=c->r[29]|c->r[29]; // 801D3468
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D346C
  c->ctr=c->r[12]; // 801D3470
  if (true) { c->lr=0x801D3478u; dispatch(c,c->ctr); } // 801D3474
  cmps(c,0,(int32_t)c->r[3],0); // 801D3478
  if (crb(c,2)) { goto L_801D3908; } // 801D347C
  c->r[30]=0u+0x00000001u; // 801D3480
L_801D3484:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3484
  c->r[3]=c->r[31]|c->r[31]; // 801D3488
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D348C
  c->ctr=c->r[12]; // 801D3490
  if (true) { c->lr=0x801D3498u; dispatch(c,c->ctr); } // 801D3494
  cmps(c,0,(int32_t)c->r[3],0); // 801D3498
  if (crb(c,2)) { goto L_801D34B8; } // 801D349C
  c->r[3]=R32(c->r[29]+0x00000094u); // 801D34A0
  c->r[0]=0u+0xFFFFFFFFu; // 801D34A4
  cmpu(c,0,c->r[3],c->r[0]); // 801D34A8
  if (!crb(c,0)) { goto L_801D34B8; } // 801D34AC
  c->r[0]=c->r[3]+0x00000001u; // 801D34B0
  W32(c->r[29]+0x00000094u,c->r[0]); // 801D34B4
L_801D34B8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D34B8
  c->r[3]=c->r[31]|c->r[31]; // 801D34BC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D34C0
  c->ctr=c->r[12]; // 801D34C4
  if (true) { c->lr=0x801D34CCu; dispatch(c,c->ctr); } // 801D34C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D34CC
  if (!crb(c,2)) { goto L_801D34EC; } // 801D34D0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D34D4
  c->r[3]=c->r[29]|c->r[29]; // 801D34D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D34DC
  c->ctr=c->r[12]; // 801D34E0
  if (true) { c->lr=0x801D34E8u; dispatch(c,c->ctr); } // 801D34E4
  goto L_801D3908; // 801D34E8
L_801D34EC:;
  c->r[0]=R32(c->r[29]+0x00000088u); // 801D34EC
  cmps(c,0,(int32_t)c->r[0],1); // 801D34F0
  if (crb(c,2)) { goto L_801D350C; } // 801D34F4
  cmps(c,0,(int32_t)c->r[0],3); // 801D34F8
  if (crb(c,2)) { goto L_801D3528; } // 801D34FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D3500
  if (crb(c,2)) { goto L_801D3558; } // 801D3504
  goto L_801D356C; // 801D3508
L_801D350C:;
  c->r[3]=R32(c->r[29]+0x00000080u); // 801D350C
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801D3510
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D3514
  if (!crb(c,0)) { goto L_801D356C; } // 801D3518
  c->r[0]=c->r[3]+0x00000001u; // 801D351C
  W32(c->r[29]+0x00000080u,c->r[0]); // 801D3520
  goto L_801D356C; // 801D3524
L_801D3528:;
  c->r[3]=R32(c->r[29]+0x00000080u); // 801D3528
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801D352C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D3530
  if (!crb(c,0)) { goto L_801D3540; } // 801D3534
  c->r[0]=c->r[3]+0x00000001u; // 801D3538
  W32(c->r[29]+0x00000080u,c->r[0]); // 801D353C
L_801D3540:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3540
  c->r[3]=c->r[29]|c->r[29]; // 801D3544
  c->r[12]=R32(c->r[12]+0x00000030u); // 801D3548
  c->ctr=c->r[12]; // 801D354C
  if (true) { c->lr=0x801D3554u; dispatch(c,c->ctr); } // 801D3550
  goto L_801D356C; // 801D3554
L_801D3558:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3558
  c->r[3]=c->r[29]|c->r[29]; // 801D355C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801D3560
  c->ctr=c->r[12]; // 801D3564
  if (true) { c->lr=0x801D356Cu; dispatch(c,c->ctr); } // 801D3568
L_801D356C:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 801D356C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3570
  if (crb(c,2)) { goto L_801D3590; } // 801D3574
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3578
  c->r[5]=c->r[29]|c->r[29]; // 801D357C
  c->r[4]=R32(c->r[29]+0x00000028u); // 801D3580
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D3584
  c->ctr=c->r[12]; // 801D3588
  if (true) { c->lr=0x801D3590u; dispatch(c,c->ctr); } // 801D358C
L_801D3590:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801D3590
  cmps(c,0,(int32_t)c->r[0],0); // 801D3594
  if (crb(c,2)) { goto L_801D37B8; } // 801D3598
  c->r[4]=c->r[1]+0x00000048u; // 801D359C
  c->r[3]=c->r[1]+0x00000090u; // 801D35A0
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D35A4
  cmpu(c,0,c->r[4],c->r[3]); // 801D35A8
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D35AC
  c->r[0]=0u+0x00000000u; // 801D35B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D35B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D35B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D35BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D35C0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D35C4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D35C8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D35CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D35D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D35D4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D35D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801D35DC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801D35E0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801D35E4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D35E8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801D35EC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801D35F0
  if (!crb(c,0)) { goto L_801D3630; } // 801D35F4
  c->r[3]=c->r[3]+0x00000017u; // 801D35F8
  c->r[0]=0u+0x00000018u; // 801D35FC
  c->r[3]=c->r[3]-c->r[4]; // 801D3600
  c->r[3]=divwu(c->r[3],c->r[0]); // 801D3604
  c->ctr=c->r[3]; // 801D3608
  if (!crb(c,0)) { goto L_801D3630; } // 801D360C
L_801D3610:;
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 801D3610
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 801D3614
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801D3618
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D361C
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 801D3620
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 801D3624
  c->r[4]=c->r[4]+0x00000018u; // 801D3628
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D3610; } // 801D362C
L_801D3630:;
  c->r[0]=R32(c->r[29]+0x00000094u); // 801D3630
  cmps(c,0,(int32_t)c->r[0],0); // 801D3634
  if (crb(c,2)) { goto L_801D3690; } // 801D3638
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D363C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D3640
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3644
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D3648
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D364C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D3650
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3654
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D3658
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D365C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D3660
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3664
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D3668
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D366C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D3670
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801D3674
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3678
  c->r[0]=R32(c->r[29]+0x00000050u); // 801D367C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D3680
  c->r[0]=R32(c->r[29]+0x00000054u); // 801D3684
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D3688
  goto L_801D3698; // 801D368C
L_801D3690:;
  c->r[0]=0u+0x00000000u; // 801D3690
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D3694
L_801D3698:;
  c->r[3]=c->r[31]+0x00000050u; // 801D3698
  c->r[4]=c->r[1]+0x00000008u; // 801D369C
  c->r[5]=0u+0x00000000u; // 801D36A0
  goto L_801D36E4; // 801D36A4
L_801D36A8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D36A8
  c->r[5]=c->r[5]+0x00000001u; // 801D36AC
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 801D36B0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D36B4
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D36B8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D36BC
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 801D36C0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D36C4
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 801D36C8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D36CC
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 801D36D0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D36D4
  c->r[3]=c->r[3]+0x00000018u; // 801D36D8
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D36DC
  c->r[4]=c->r[4]+0x00000018u; // 801D36E0
L_801D36E4:;
  c->r[6]=R8(c->r[29]+0x00000099u); // 801D36E4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801D36E8
  if (crb(c,0)) { IRQCHK(c); goto L_801D36A8; } // 801D36EC
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801D36F0
  c->r[7]=c->r[1]+0x00000008u; // 801D36F4
  c->r[4]=R32(c->r[29]+0x00000028u); // 801D36F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D36FC
  c->r[5]=R32(c->r[29]+0x0000009Cu); // 801D3700
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D3704
  c->ctr=c->r[12]; // 801D3708
  if (true) { c->lr=0x801D3710u; dispatch(c,c->ctr); } // 801D370C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3710
  c->r[4]=c->r[31]|c->r[31]; // 801D3714
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 801D3718
  c->r[3]=c->r[1]+0x00000008u; // 801D371C
  c->r[5]=0u+0x00000000u; // 801D3720
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3724
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 801D3728
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D372C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 801D3730
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3734
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D3738
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D373C
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 801D3740
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3744
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 801D3748
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D374C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 801D3750
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3754
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 801D3758
  c->r[0]=R32(c->r[1]+0x00000028u); // 801D375C
  W32(c->r[29]+0x00000050u,c->r[0]); // 801D3760
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801D3764
  W32(c->r[29]+0x00000054u,c->r[0]); // 801D3768
  goto L_801D37AC; // 801D376C
L_801D3770:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3770
  c->r[5]=c->r[5]+0x00000001u; // 801D3774
  {uint32_t ea=c->r[4]+0x00000050u; WF32(ea,c->f[0]);} // 801D3778
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D377C
  {uint32_t ea=c->r[4]+0x00000054u; WF32(ea,c->f[0]);} // 801D3780
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3784
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 801D3788
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D378C
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D3790
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3794
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 801D3798
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D379C
  c->r[3]=c->r[3]+0x00000018u; // 801D37A0
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[0]);} // 801D37A4
  c->r[4]=c->r[4]+0x00000018u; // 801D37A8
L_801D37AC:;
  c->r[0]=R8(c->r[29]+0x00000099u); // 801D37AC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D37B0
  if (crb(c,0)) { IRQCHK(c); goto L_801D3770; } // 801D37B4
L_801D37B8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801D37B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D37BC
  if (crb(c,2)) { goto L_801D37DC; } // 801D37C0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D37C4
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 801D37C8
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D37CC
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D37D0
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D37D4
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 801D37D8
L_801D37DC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D37DC
  c->r[3]=c->r[29]|c->r[29]; // 801D37E0
  c->r[12]=R32(c->r[12]+0x00000034u); // 801D37E4
  c->ctr=c->r[12]; // 801D37E8
  if (true) { c->lr=0x801D37F0u; dispatch(c,c->ctr); } // 801D37EC
  c->r[0]=R8(c->r[29]+0x00000087u); // 801D37F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D37F4
  if (crb(c,2)) { goto L_801D382C; } // 801D37F8
  c->r[3]=R32(c->r[29]+0x00000070u); // 801D37FC
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 801D3800
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D3804
  if (crb(c,0)) { goto L_801D382C; } // 801D3808
  c->r[0]=0u+0x00000000u; // 801D380C
  W8(c->r[29]+0x00000087u,c->r[0]); // 801D3810
  c->r[3]=c->r[29]|c->r[29]; // 801D3814
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3818
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D381C
  c->ctr=c->r[12]; // 801D3820
  if (true) { c->lr=0x801D3828u; dispatch(c,c->ctr); } // 801D3824
  goto L_801D3908; // 801D3828
L_801D382C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D382C
  if (crb(c,2)) { goto L_801D387C; } // 801D3830
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3834
  c->r[3]=c->r[31]|c->r[31]; // 801D3838
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D383C
  c->ctr=c->r[12]; // 801D3840
  if (true) { c->lr=0x801D3848u; dispatch(c,c->ctr); } // 801D3844
  cmps(c,0,(int32_t)c->r[3],0); // 801D3848
  if (crb(c,2)) { goto L_801D3864; } // 801D384C
  c->r[3]=0u+0x00000001u; // 801D3850
  c->r[0]=0u+0x00000000u; // 801D3854
  W8(c->r[29]+0x00000085u,c->r[3]); // 801D3858
  W8(c->r[29]+0x00000084u,c->r[0]); // 801D385C
  goto L_801D387C; // 801D3860
L_801D3864:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3864
  c->r[3]=c->r[29]|c->r[29]; // 801D3868
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D386C
  c->ctr=c->r[12]; // 801D3870
  if (true) { c->lr=0x801D3878u; dispatch(c,c->ctr); } // 801D3874
  goto L_801D3908; // 801D3878
L_801D387C:;
  c->r[0]=R32(c->r[29]+0x00000088u); // 801D387C
  cmps(c,0,(int32_t)c->r[0],1); // 801D3880
  if (!crb(c,2)) { goto L_801D38BC; } // 801D3884
  c->r[3]=R32(c->r[29]+0x00000080u); // 801D3888
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801D388C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D3890
  if (crb(c,0)) { goto L_801D38DC; } // 801D3894
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3898
  c->r[3]=c->r[31]|c->r[31]; // 801D389C
  c->r[4]=0u+0x00000001u; // 801D38A0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D38A4
  c->ctr=c->r[12]; // 801D38A8
  if (true) { c->lr=0x801D38B0u; dispatch(c,c->ctr); } // 801D38AC
  c->r[0]=0u+0x00000002u; // 801D38B0
  W32(c->r[29]+0x00000088u,c->r[0]); // 801D38B4
  goto L_801D38DC; // 801D38B8
L_801D38BC:;
  cmps(c,0,(int32_t)c->r[0],3); // 801D38BC
  if (!crb(c,2)) { goto L_801D38DC; } // 801D38C0
  c->r[3]=R32(c->r[29]+0x00000080u); // 801D38C4
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801D38C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D38CC
  if (crb(c,0)) { goto L_801D38DC; } // 801D38D0
  c->r[0]=0u+0x00000000u; // 801D38D4
  W32(c->r[29]+0x00000088u,c->r[0]); // 801D38D8
L_801D38DC:;
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 801D38DC
  cmps(c,0,(int32_t)c->r[0],0); // 801D38E0
  if (crb(c,2)) { goto L_801D3908; } // 801D38E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D38E8
  c->r[3]=c->r[31]|c->r[31]; // 801D38EC
  c->r[4]=0u+0x00000000u; // 801D38F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D38F4
  c->ctr=c->r[12]; // 801D38F8
  if (true) { c->lr=0x801D3900u; dispatch(c,c->ctr); } // 801D38FC
  c->r[0]=0u+0x00000000u; // 801D3900
  W8(c->r[29]+0x0000008Cu,c->r[0]); // 801D3904
L_801D3908:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801D3908
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801D390C
  c->r[30]=R32(c->r[1]+0x00000098u); // 801D3910
  c->r[29]=R32(c->r[1]+0x00000094u); // 801D3914
  c->lr=c->r[0]; // 801D3918
  c->r[1]=c->r[1]+0x000000A0u; // 801D391C
  return; // 801D3920
}

// fn_801D3930
void f_801D3930(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000070u); // 801D3930
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 801D3934
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D3938
  if (!crb(c,0)) { goto L_801D3948; } // 801D393C
  c->r[0]=c->r[4]+0x00000001u; // 801D3940
  W32(c->r[3]+0x00000070u,c->r[0]); // 801D3944
L_801D3948:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 801D3948
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801D394C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D3950
  if (!crb(c,0)) return; // 801D3954
  c->r[0]=c->r[4]+0x00000001u; // 801D3958
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801D395C
  return; // 801D3960
}

// fn_801D3970
void f_801D3970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3970
  c->r[0]=c->lr; // 801D3974
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801D3978
  c->r[11]=c->r[1]+0x00000050u; // 801D397C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801D3980
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801D3984
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 801D3988
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 801D398C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 801D3990
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 801D3994
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 801D3998
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 801D399C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 801D39A0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 801D39A4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 801D39A8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 801D39AC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 801D39B0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 801D39B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[24]);} // 801D39B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,24,ea,0,0);} // 801D39BC
  c->lr=0x801D39C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D39C0
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D39C4
  c->r[0]=0u+0x43300000u; // 801D39C8
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D39CC
  c->r[31]=c->r[3]|c->r[3]; // 801D39D0
  c->r[6]=R32(c->r[3]+0x00000010u); // 801D39D4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801D39D8
  c->r[5]=R32(c->r[3]+0x000000A8u); // 801D39DC
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D39E0
  c->r[4]=R32(c->r[3]+0x000000ACu); // 801D39E4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801D39E8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D39EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801D39F0
  W32(c->r[1]+0x00000030u,c->r[0]); // 801D39F4
  if (crb(c,0)) { goto L_801D3A04; } // 801D39F8
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D39FC
  goto L_801D3A40; // 801D3A00
L_801D3A04:;
  c->r[0]=c->r[4]^0x80000000u; // 801D3A04
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D3A08
  c->r[0]=c->r[5]^0x80000000u; // 801D3A0C
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D3A10
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801D3A14
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3A18
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3A1C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D3A20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3A24
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D3A28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801D3A2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D3A30
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3A34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D3A38
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D3A3C
L_801D3A40:;
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801D3A40
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801D3A44
  c->r[0]=R32(c->r[3]+0x00000070u); // 801D3A48
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D3A4C
  if (crb(c,0)) { goto L_801D3A5C; } // 801D3A50
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3A54
  goto L_801D3A98; // 801D3A58
L_801D3A5C:;
  c->r[0]=c->r[0]^0x80000000u; // 801D3A5C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D3A60
  c->r[0]=c->r[4]^0x80000000u; // 801D3A64
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D3A68
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801D3A6C
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3A70
  {uint32_t ea=c->r[3]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3A74
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D3A78
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3A7C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D3A80
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801D3A84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D3A88
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3A8C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D3A90
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D3A94
L_801D3A98:;
  c->r[4]=R32(c->r[3]+0x0000007Cu); // 801D3A98
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801D3A9C
  c->r[0]=R32(c->r[3]+0x00000080u); // 801D3AA0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D3AA4
  if (crb(c,0)) { goto L_801D3AB4; } // 801D3AA8
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3AAC
  goto L_801D3AF0; // 801D3AB0
L_801D3AB4:;
  c->r[0]=c->r[0]^0x80000000u; // 801D3AB4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D3AB8
  c->r[0]=c->r[4]^0x80000000u; // 801D3ABC
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D3AC0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801D3AC4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3AC8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3ACC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D3AD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3AD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D3AD8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801D3ADC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D3AE0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D3AE4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D3AE8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D3AEC
L_801D3AF0:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801D3AF0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3AF4
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[28]=c->ps1[28]=RF32(ea);} // 801D3AF8
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3AFC
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801D3B00
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D3B04
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3B08
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801D3B0C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3B10
  {uint32_t ea=c->r[3]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3B14
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801D3B18
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3B1C
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801D3B20
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[29]=c->ps1[29]=RF32(ea);} // 801D3B24
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801D3B28
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3B2C
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801D3B30
  {uint32_t ea=c->r[3]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3B34
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 801D3B38
  c->r[28]=R8(c->r[3]+0x0000009Au); // 801D3B3C
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3B40
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3B44
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[27]=c->ps1[27]=RF32(ea);} // 801D3B48
  cmps(c,0,(int32_t)c->r[28],0); // 801D3B4C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3B50
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[3]); // 801D3B54
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[1]); // 801D3B58
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[26]=c->ps1[26]=RF32(ea);} // 801D3B5C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801D3B60
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3B64
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 801D3B68
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801D3B6C
  if (!crb(c,2)) { goto L_801D3B8C; } // 801D3B70
  c->r[28]=R32(c->r[6]+0x0000003Cu); // 801D3B74
  {uint32_t ea=c->r[6]+0x00000040u; c->f[26]=c->ps1[26]=RF32(ea);} // 801D3B78
  cmps(c,0,(int32_t)c->r[28],0); // 801D3B7C
  if (!crb(c,2)) { goto L_801D3B8C; } // 801D3B80
  c->r[28]=R32(c->r[3]+0x0000004Cu); // 801D3B84
  {uint32_t ea=c->r[3]+0x00000048u; c->f[26]=c->ps1[26]=RF32(ea);} // 801D3B88
L_801D3B8C:;
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[25]=c->ps1[25]=RF32(ea);} // 801D3B8C
  c->r[29]=c->r[31]|c->r[31]; // 801D3B90
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3B94
  c->r[30]=c->r[1]+0x00000018u; // 801D3B98
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3B9C
  c->r[26]=0u+0x00000000u; // 801D3BA0
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[0]); // 801D3BA4
  c->r[27]=R32(c->r[3]+0x000000C8u); // 801D3BA8
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[24]=c->ps1[24]=RF32(ea);} // 801D3BAC
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[1]); // 801D3BB0
L_801D3BB4:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[24]);} // 801D3BB4
  c->r[4]=c->r[26]|c->r[26]; // 801D3BB8
  c->r[3]=R32(c->r[31]+0x00000010u); // 801D3BBC
  c->lr=0x801D3BC4u; f_801E45C0(c); // 801D3BC0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3BC4
  c->r[26]=c->r[26]+0x00000001u; // 801D3BC8
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3BCC
  cmps(c,0,(int32_t)c->r[26],4); // 801D3BD0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D3BD4
  c->r[29]=c->r[29]+0x00000004u; // 801D3BD8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D3BDC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801D3BE0
  c->r[30]=c->r[30]+0x00000004u; // 801D3BE4
  if (crb(c,0)) { IRQCHK(c); goto L_801D3BB4; } // 801D3BE8
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D3BEC
  c->r[3]=c->r[31]|c->r[31]; // 801D3BF0
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3BF4
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3BF8
  c->r[4]=R32(c->r[31]+0x00000010u); // 801D3BFC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 801D3C00
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3C04
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801D3C08
  {uint32_t ea=c->r[4]+0x00000058u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D3C0C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[2]); // 801D3C10
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3C14
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3C18
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 801D3C1C
  {uint32_t ea=c->r[4]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D3C20
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[24]=c->ps1[24]=RF32(ea);} // 801D3C24
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 801D3C28
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D3C2C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 801D3C30
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3C34
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 801D3C38
  {uint32_t ea=c->r[4]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D3C3C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801D3C40
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D3C44
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 801D3C48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D3C4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801D3C50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D3C54
  c->ctr=c->r[12]; // 801D3C58
  if (true) { c->lr=0x801D3C60u; dispatch(c,c->ctr); } // 801D3C5C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 801D3C60
  c->f[1]=c->f[26]; // 801D3C64
  c->r[26]=c->r[3]|c->r[3]; // 801D3C68
  c->r[4]=c->r[28]|c->r[28]; // 801D3C6C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 801D3C70
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[29]);} // 801D3C74
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[28]);} // 801D3C78
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[27]);} // 801D3C7C
  c->lr=0x801D3C84u; f_801D2930(c); // 801D3C80
  W32(c->r[26]+0x00000020u,c->r[27]); // 801D3C84
  c->r[31]=c->r[1]+0x00000018u; // 801D3C88
  c->r[27]=0u+0x00000000u; // 801D3C8C
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[25]);} // 801D3C90
L_801D3C94:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3C94
  c->r[3]=c->r[26]|c->r[26]; // 801D3C98
  c->r[4]=c->r[27]|c->r[27]; // 801D3C9C
  c->lr=0x801D3CA4u; f_801D2AA0(c); // 801D3CA0
  c->r[27]=c->r[27]+0x00000001u; // 801D3CA4
  c->r[31]=c->r[31]+0x00000004u; // 801D3CA8
  cmps(c,0,(int32_t)c->r[27],4); // 801D3CAC
  if (crb(c,0)) { IRQCHK(c); goto L_801D3C94; } // 801D3CB0
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[24]);} // 801D3CB4
  c->r[31]=c->r[1]+0x00000008u; // 801D3CB8
  c->r[27]=0u+0x00000000u; // 801D3CBC
L_801D3CC0:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CC0
  c->r[3]=c->r[26]|c->r[26]; // 801D3CC4
  c->r[4]=c->r[27]|c->r[27]; // 801D3CC8
  c->lr=0x801D3CD0u; f_801D2820(c); // 801D3CCC
  c->r[27]=c->r[27]+0x00000001u; // 801D3CD0
  c->r[31]=c->r[31]+0x00000004u; // 801D3CD4
  cmps(c,0,(int32_t)c->r[27],3); // 801D3CD8
  if (crb(c,0)) { IRQCHK(c); goto L_801D3CC0; } // 801D3CDC
  c->r[11]=c->r[1]+0x00000050u; // 801D3CE0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801D3CE4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801D3CE8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 801D3CEC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 801D3CF0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 801D3CF4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 801D3CF8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 801D3CFC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 801D3D00
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 801D3D04
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 801D3D08
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 801D3D0C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 801D3D10
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 801D3D14
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 801D3D18
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,24,ea,0,0);} // 801D3D1C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[24]=RF64(ea);} // 801D3D20
  c->lr=0x801D3D28u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3D24
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D3D28
  c->lr=c->r[0]; // 801D3D2C
  c->r[1]=c->r[1]+0x000000D0u; // 801D3D30
  return; // 801D3D34
}

// fn_801D3D40
void f_801D3D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3D40
  c->r[0]=c->lr; // 801D3D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3D4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3D50
  c->r[30]=c->r[3]|c->r[3]; // 801D3D54
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3D58
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D3D5C
  c->ctr=c->r[12]; // 801D3D60
  if (true) { c->lr=0x801D3D68u; dispatch(c,c->ctr); } // 801D3D64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3D68
  c->r[31]=c->r[3]|c->r[3]; // 801D3D6C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D3D70
  c->ctr=c->r[12]; // 801D3D74
  if (true) { c->lr=0x801D3D7Cu; dispatch(c,c->ctr); } // 801D3D78
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D7C
  if (crb(c,2)) { goto L_801D3DAC; } // 801D3D80
  c->r[0]=R8(c->r[30]+0x00000087u); // 801D3D84
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D88
  if (crb(c,2)) { goto L_801D3D98; } // 801D3D8C
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3D90
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801D3D94
L_801D3D98:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3D98
  c->r[3]=c->r[31]|c->r[31]; // 801D3D9C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D3DA0
  c->ctr=c->r[12]; // 801D3DA4
  if (true) { c->lr=0x801D3DACu; dispatch(c,c->ctr); } // 801D3DA8
L_801D3DAC:;
  c->r[31]=0u+0xFFFFFFFFu; // 801D3DAC
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 801D3DB0
  c->r[3]=c->r[30]|c->r[30]; // 801D3DB4
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D3DB8
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D3DBC
  c->ctr=c->r[12]; // 801D3DC0
  if (true) { c->lr=0x801D3DC8u; dispatch(c,c->ctr); } // 801D3DC4
  W32(c->r[3]+0x000000B0u,c->r[31]); // 801D3DC8
  c->r[3]=R32(c->r[30]+0x00000008u); // 801D3DCC
  cmps(c,0,(int32_t)c->r[3],0); // 801D3DD0
  if (crb(c,2)) { goto L_801D3DDC; } // 801D3DD4
  c->lr=0x801D3DDCu; f_801E4210(c); // 801D3DD8
L_801D3DDC:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801D3DDC
  cmps(c,0,(int32_t)c->r[3],0); // 801D3DE0
  if (crb(c,2)) { goto L_801D3DEC; } // 801D3DE4
  c->lr=0x801D3DECu; f_801E4210(c); // 801D3DE8
L_801D3DEC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D3DEC
  c->r[3]=c->r[30]|c->r[30]; // 801D3DF0
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D3DF4
  c->ctr=c->r[12]; // 801D3DF8
  if (true) { c->lr=0x801D3E00u; dispatch(c,c->ctr); } // 801D3DFC
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E00
  if (crb(c,2)) { goto L_801D3E1C; } // 801D3E04
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D3E08
  c->r[3]=c->r[30]|c->r[30]; // 801D3E0C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D3E10
  c->ctr=c->r[12]; // 801D3E14
  if (true) { c->lr=0x801D3E1Cu; dispatch(c,c->ctr); } // 801D3E18
L_801D3E1C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D3E1C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3E20
  if (crb(c,2)) { goto L_801D3E34; } // 801D3E24
  c->r[3]=R32(c->r[30]+0x00000010u); // 801D3E28
  c->r[4]=c->r[30]|c->r[30]; // 801D3E2C
  c->lr=0x801D3E34u; f_801E5340(c); // 801D3E30
L_801D3E34:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801D3E34
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E38
  if (crb(c,2)) { goto L_801D3E48; } // 801D3E3C
  c->r[4]=c->r[30]|c->r[30]; // 801D3E40
  c->lr=0x801D3E48u; f_801E4D50(c); // 801D3E44
L_801D3E48:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 801D3E48
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E4C
  if (crb(c,2)) { goto L_801D3E5C; } // 801D3E50
  c->r[4]=c->r[30]|c->r[30]; // 801D3E54
  c->lr=0x801D3E5Cu; f_801D6CE0(c); // 801D3E58
L_801D3E5C:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 801D3E5C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E60
  if (crb(c,2)) { goto L_801D3E88; } // 801D3E64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3E68
  c->r[5]=c->r[30]|c->r[30]; // 801D3E6C
  c->r[4]=R32(c->r[30]+0x00000028u); // 801D3E70
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D3E74
  c->ctr=c->r[12]; // 801D3E78
  if (true) { c->lr=0x801D3E80u; dispatch(c,c->ctr); } // 801D3E7C
  c->r[0]=0u+0x00000000u; // 801D3E80
  W32(c->r[30]+0x00000028u,c->r[0]); // 801D3E84
L_801D3E88:;
  c->r[0]=0u+0x00000000u; // 801D3E88
  W8(c->r[30]+0x00000085u,c->r[0]); // 801D3E8C
  W8(c->r[30]+0x00000087u,c->r[0]); // 801D3E90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3E94
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3E9C
  c->lr=c->r[0]; // 801D3EA0
  c->r[1]=c->r[1]+0x00000010u; // 801D3EA4
  return; // 801D3EA8
}

// fn_801D3EB0
void f_801D3EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3EB0
  c->r[0]=c->lr; // 801D3EB4
  cmps(c,0,(int32_t)c->r[4],0); // 801D3EB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3EBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3EC0
  c->r[31]=0u+0x802D0000u; // 801D3EC4
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D3EC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3ECC
  c->r[30]=c->r[4]|c->r[4]; // 801D3ED0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3ED4
  c->r[29]=c->r[3]|c->r[3]; // 801D3ED8
  if (!crb(c,2)) { goto L_801D3EF4; } // 801D3EDC
  c->r[3]=c->r[31]+0x00000000u; // 801D3EE0
  c->r[5]=c->r[31]+0x00000074u; // 801D3EE4
  c->r[4]=0u+0x0000026Fu; // 801D3EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3EEC
  c->lr=0x801D3EF4u; f_801F9770(c); // 801D3EF0
L_801D3EF4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D3EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801D3EF8
  if (crb(c,2)) { goto L_801D3F14; } // 801D3EFC
  c->r[3]=c->r[31]+0x00000000u; // 801D3F00
  c->r[5]=c->r[31]+0x0000009Cu; // 801D3F04
  c->r[4]=0u+0x00000270u; // 801D3F08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3F0C
  c->lr=0x801D3F14u; f_801F9770(c); // 801D3F10
L_801D3F14:;
  W32(c->r[29]+0x00000004u,c->r[30]); // 801D3F14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3F18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3F1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3F20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3F24
  c->lr=c->r[0]; // 801D3F28
  c->r[1]=c->r[1]+0x00000020u; // 801D3F2C
  return; // 801D3F30
}

// fn_801D3F40
void f_801D3F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3F40
  c->r[0]=c->lr; // 801D3F44
  cmps(c,0,(int32_t)c->r[4],0); // 801D3F48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3F4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3F50
  c->r[31]=0u+0x802D0000u; // 801D3F54
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D3F58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3F5C
  c->r[30]=c->r[4]|c->r[4]; // 801D3F60
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3F64
  c->r[29]=c->r[3]|c->r[3]; // 801D3F68
  if (!crb(c,2)) { goto L_801D3F84; } // 801D3F6C
  c->r[3]=c->r[31]+0x00000000u; // 801D3F70
  c->r[5]=c->r[31]+0x00000074u; // 801D3F74
  c->r[4]=0u+0x00000280u; // 801D3F78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3F7C
  c->lr=0x801D3F84u; f_801F9770(c); // 801D3F80
L_801D3F84:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D3F84
  cmpu(c,0,c->r[30],c->r[0]); // 801D3F88
  if (crb(c,2)) { goto L_801D3FA4; } // 801D3F8C
  c->r[3]=c->r[31]+0x00000000u; // 801D3F90
  c->r[5]=c->r[31]+0x000000C8u; // 801D3F94
  c->r[4]=0u+0x00000281u; // 801D3F98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3F9C
  c->lr=0x801D3FA4u; f_801F9770(c); // 801D3FA0
L_801D3FA4:;
  c->r[0]=0u+0x00000000u; // 801D3FA4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D3FA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3FAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3FB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3FB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3FB8
  c->lr=c->r[0]; // 801D3FBC
  c->r[1]=c->r[1]+0x00000020u; // 801D3FC0
  return; // 801D3FC4
}

// fn_801D3FD0
void f_801D3FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3FD0
  c->r[0]=c->lr; // 801D3FD4
  cmps(c,0,(int32_t)c->r[4],0); // 801D3FD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3FDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3FE0
  c->r[31]=0u+0x802D0000u; // 801D3FE4
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D3FE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3FEC
  c->r[30]=c->r[4]|c->r[4]; // 801D3FF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3FF4
  c->r[29]=c->r[3]|c->r[3]; // 801D3FF8
  if (!crb(c,2)) { goto L_801D4014; } // 801D3FFC
  c->r[3]=c->r[31]+0x00000000u; // 801D4000
  c->r[5]=c->r[31]+0x000000F4u; // 801D4004
  c->r[4]=0u+0x00000292u; // 801D4008
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D400C
  c->lr=0x801D4014u; f_801F9770(c); // 801D4010
L_801D4014:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D4014
  cmps(c,0,(int32_t)c->r[0],0); // 801D4018
  if (crb(c,2)) { goto L_801D4034; } // 801D401C
  c->r[3]=c->r[31]+0x00000000u; // 801D4020
  c->r[5]=c->r[31]+0x0000011Cu; // 801D4024
  c->r[4]=0u+0x00000293u; // 801D4028
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D402C
  c->lr=0x801D4034u; f_801F9770(c); // 801D4030
L_801D4034:;
  W32(c->r[29]+0x00000010u,c->r[30]); // 801D4034
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4038
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D403C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4040
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4044
  c->lr=c->r[0]; // 801D4048
  c->r[1]=c->r[1]+0x00000020u; // 801D404C
  return; // 801D4050
}

// fn_801D4060
void f_801D4060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4060
  c->r[0]=c->lr; // 801D4064
  cmps(c,0,(int32_t)c->r[4],0); // 801D4068
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D406C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4070
  c->r[31]=0u+0x802D0000u; // 801D4074
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D4078
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D407C
  c->r[30]=c->r[4]|c->r[4]; // 801D4080
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4084
  c->r[29]=c->r[3]|c->r[3]; // 801D4088
  if (!crb(c,2)) { goto L_801D40A4; } // 801D408C
  c->r[3]=c->r[31]+0x00000000u; // 801D4090
  c->r[5]=c->r[31]+0x000000F4u; // 801D4094
  c->r[4]=0u+0x000002A3u; // 801D4098
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D409C
  c->lr=0x801D40A4u; f_801F9770(c); // 801D40A0
L_801D40A4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D40A4
  cmpu(c,0,c->r[30],c->r[0]); // 801D40A8
  if (crb(c,2)) { goto L_801D40C4; } // 801D40AC
  c->r[3]=c->r[31]+0x00000000u; // 801D40B0
  c->r[5]=c->r[31]+0x00000148u; // 801D40B4
  c->r[4]=0u+0x000002A4u; // 801D40B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D40BC
  c->lr=0x801D40C4u; f_801F9770(c); // 801D40C0
L_801D40C4:;
  c->r[0]=0u+0x00000000u; // 801D40C4
  W32(c->r[29]+0x00000010u,c->r[0]); // 801D40C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D40CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D40D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D40D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D40D8
  c->lr=c->r[0]; // 801D40DC
  c->r[1]=c->r[1]+0x00000020u; // 801D40E0
  return; // 801D40E4
}

// fn_801D40F0
void f_801D40F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D40F0
  c->r[0]=c->lr; // 801D40F4
  cmps(c,0,(int32_t)c->r[4],0); // 801D40F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D40FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4100
  c->r[31]=0u+0x802D0000u; // 801D4104
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D4108
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D410C
  c->r[30]=c->r[4]|c->r[4]; // 801D4110
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4114
  c->r[29]=c->r[3]|c->r[3]; // 801D4118
  if (!crb(c,2)) { goto L_801D4134; } // 801D411C
  c->r[3]=c->r[31]+0x00000000u; // 801D4120
  c->r[5]=c->r[31]+0x00000178u; // 801D4124
  c->r[4]=0u+0x000002B5u; // 801D4128
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D412C
  c->lr=0x801D4134u; f_801F9770(c); // 801D4130
L_801D4134:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801D4134
  cmps(c,0,(int32_t)c->r[0],0); // 801D4138
  if (crb(c,2)) { goto L_801D4154; } // 801D413C
  c->r[3]=c->r[31]+0x00000000u; // 801D4140
  c->r[5]=c->r[31]+0x000001A0u; // 801D4144
  c->r[4]=0u+0x000002B6u; // 801D4148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D414C
  c->lr=0x801D4154u; f_801F9770(c); // 801D4150
L_801D4154:;
  W32(c->r[29]+0x00000014u,c->r[30]); // 801D4154
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4158
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D415C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4160
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4164
  c->lr=c->r[0]; // 801D4168
  c->r[1]=c->r[1]+0x00000020u; // 801D416C
  return; // 801D4170
}

// fn_801D4180
void f_801D4180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4180
  c->r[0]=c->lr; // 801D4184
  cmps(c,0,(int32_t)c->r[4],0); // 801D4188
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D418C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4190
  c->r[31]=0u+0x802D0000u; // 801D4194
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D4198
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D419C
  c->r[30]=c->r[4]|c->r[4]; // 801D41A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D41A4
  c->r[29]=c->r[3]|c->r[3]; // 801D41A8
  if (!crb(c,2)) { goto L_801D41C4; } // 801D41AC
  c->r[3]=c->r[31]+0x00000000u; // 801D41B0
  c->r[5]=c->r[31]+0x000001F8u; // 801D41B4
  c->r[4]=0u+0x000002D8u; // 801D41B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D41BC
  c->lr=0x801D41C4u; f_801F9770(c); // 801D41C0
L_801D41C4:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801D41C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D41C8
  if (crb(c,2)) { goto L_801D41E4; } // 801D41CC
  c->r[3]=c->r[31]+0x00000000u; // 801D41D0
  c->r[5]=c->r[31]+0x00000224u; // 801D41D4
  c->r[4]=0u+0x000002D9u; // 801D41D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D41DC
  c->lr=0x801D41E4u; f_801F9770(c); // 801D41E0
L_801D41E4:;
  W32(c->r[29]+0x00000018u,c->r[30]); // 801D41E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D41E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D41EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D41F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D41F4
  c->lr=c->r[0]; // 801D41F8
  c->r[1]=c->r[1]+0x00000020u; // 801D41FC
  return; // 801D4200
}

// fn_801D4210
void f_801D4210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4210
  c->r[0]=c->lr; // 801D4214
  cmps(c,0,(int32_t)c->r[4],0); // 801D4218
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D421C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4220
  c->r[31]=0u+0x802D0000u; // 801D4224
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D4228
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D422C
  c->r[30]=c->r[4]|c->r[4]; // 801D4230
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4234
  c->r[29]=c->r[3]|c->r[3]; // 801D4238
  if (!crb(c,2)) { goto L_801D4254; } // 801D423C
  c->r[3]=c->r[31]+0x00000000u; // 801D4240
  c->r[5]=c->r[31]+0x000001F8u; // 801D4244
  c->r[4]=0u+0x000002E9u; // 801D4248
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D424C
  c->lr=0x801D4254u; f_801F9770(c); // 801D4250
L_801D4254:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801D4254
  cmpu(c,0,c->r[30],c->r[0]); // 801D4258
  if (crb(c,2)) { goto L_801D4274; } // 801D425C
  c->r[3]=c->r[31]+0x00000000u; // 801D4260
  c->r[5]=c->r[31]+0x00000254u; // 801D4264
  c->r[4]=0u+0x000002EAu; // 801D4268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D426C
  c->lr=0x801D4274u; f_801F9770(c); // 801D4270
L_801D4274:;
  c->r[0]=0u+0x00000000u; // 801D4274
  W32(c->r[29]+0x00000018u,c->r[0]); // 801D4278
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D427C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4280
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4284
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4288
  c->lr=c->r[0]; // 801D428C
  c->r[1]=c->r[1]+0x00000020u; // 801D4290
  return; // 801D4294
}

// fn_801D42A0
void f_801D42A0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000099u); // 801D42A0
  return; // 801D42A4
}

// fn_801D42B0
void f_801D42B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D42B0
  c->r[0]=c->lr; // 801D42B4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D42B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D42BC
  c->r[0]=0u+0x00000000u; // 801D42C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D42C4
  c->r[31]=c->r[4]|c->r[4]; // 801D42C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D42CC
  c->r[30]=c->r[3]|c->r[3]; // 801D42D0
  if (crb(c,1)) { goto L_801D42DC; } // 801D42D4
  c->r[0]=0u+0x00000001u; // 801D42D8
L_801D42DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D42DC
  if (!crb(c,2)) { goto L_801D430C; } // 801D42E0
  c->r[3]=0u+0x802D0000u; // 801D42E4
  c->r[5]=0u+0x802D0000u; // 801D42E8
  c->r[6]=c->r[31]|c->r[31]; // 801D42EC
  c->r[4]=0u+0x00000325u; // 801D42F0
  c->r[3]=c->r[3]+0xFFFFD5C0u; // 801D42F4
  c->r[5]=c->r[5]+0xFFFFD5D4u; // 801D42F8
  c->r[7]=0u+0x00000000u; // 801D42FC
  c->r[8]=0u+0x0000007Fu; // 801D4300
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4304
  c->lr=0x801D430Cu; f_801F9770(c); // 801D4308
L_801D430C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801D430C
  W8(c->r[30]+0x00000098u,c->r[31]); // 801D4310
  cmps(c,0,(int32_t)c->r[3],0); // 801D4314
  if (crb(c,2)) { goto L_801D4324; } // 801D4318
  c->r[4]=c->r[30]|c->r[30]; // 801D431C
  c->lr=0x801D4324u; f_801E4640(c); // 801D4320
L_801D4324:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D4324
  c->r[3]=c->r[30]|c->r[30]; // 801D4328
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801D432C
  c->ctr=c->r[12]; // 801D4330
  if (true) { c->lr=0x801D4338u; dispatch(c,c->ctr); } // 801D4334
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D433C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4340
  c->lr=c->r[0]; // 801D4344
  c->r[1]=c->r[1]+0x00000010u; // 801D4348
  return; // 801D434C
}

// fn_801D4350
void f_801D4350(Ctx* __restrict c) {
  return; // 801D4350
}

// fn_801D4360
void f_801D4360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4360
  c->r[0]=c->lr; // 801D4364
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4368
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D436C
  fcmp(c,0,c->f[1],c->f[0]); // 801D4370
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801D4374
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801D4378
  c->f[31]=c->f[1]; // 801D437C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4380
  c->r[31]=c->r[3]|c->r[3]; // 801D4384
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D4388
  if (crb(c,2)) { goto L_801D43AC; } // 801D438C
  c->r[3]=0u+0x802D0000u; // 801D4390
  c->r[5]=0u+0x802D0000u; // 801D4394
  c->r[3]=c->r[3]+0xFFFFD5C0u; // 801D4398
  c->r[4]=0u+0x0000033Au; // 801D439C
  c->r[5]=c->r[5]+0xFFFFD848u; // 801D43A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D43A4
  c->lr=0x801D43ACu; f_801F9770(c); // 801D43A8
L_801D43AC:;
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D43AC
  fcmp(c,0,c->f[31],c->f[0]); // 801D43B0
  if (!crb(c,0)) { goto L_801D43BC; } // 801D43B4
  c->f[31]=c->f[0]; // 801D43B8
L_801D43BC:;
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[31]);} // 801D43BC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801D43C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801D43C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D43C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D43CC
  c->lr=c->r[0]; // 801D43D0
  c->r[1]=c->r[1]+0x00000020u; // 801D43D4
  return; // 801D43D8
}

// fn_801D43E0
void f_801D43E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D43E0
  c->r[0]=c->lr; // 801D43E4
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D43E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D43EC
  fcmp(c,0,c->f[1],c->f[0]); // 801D43F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D43F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D43F8
  c->f[31]=c->f[1]; // 801D43FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4400
  c->r[31]=c->r[4]|c->r[4]; // 801D4404
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4408
  c->r[30]=c->r[3]|c->r[3]; // 801D440C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D4410
  if (crb(c,2)) { goto L_801D4434; } // 801D4414
  c->r[3]=0u+0x802D0000u; // 801D4418
  c->r[5]=0u+0x802D0000u; // 801D441C
  c->r[3]=c->r[3]+0xFFFFD5C0u; // 801D4420
  c->r[4]=0u+0x0000034Au; // 801D4424
  c->r[5]=c->r[5]+0xFFFFD848u; // 801D4428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D442C
  c->lr=0x801D4434u; f_801F9770(c); // 801D4430
L_801D4434:;
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4434
  fcmp(c,0,c->f[31],c->f[0]); // 801D4438
  if (!crb(c,0)) { goto L_801D4444; } // 801D443C
  c->f[31]=c->f[0]; // 801D4440
L_801D4444:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 801D4444
  c->r[0]=R32(c->r[30]+0x000000ACu); // 801D4448
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D444C
  if (crb(c,0)) { goto L_801D445C; } // 801D4450
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4454
  goto L_801D44A4; // 801D4458
L_801D445C:;
  c->r[3]=0u+0x43300000u; // 801D445C
  c->r[0]=c->r[0]^0x80000000u; // 801D4460
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D4464
  c->r[0]=c->r[4]^0x80000000u; // 801D4468
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[4]=RF64(ea);} // 801D446C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D4470
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4474
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D4478
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D447C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801D4480
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4484
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801D4488
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D448C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D4490
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801D4494
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D4498
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D449C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D44A0
L_801D44A4:;
  c->r[0]=0u+0x00000000u; // 801D44A4
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 801D44A8
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[31]);} // 801D44AC
  W32(c->r[30]+0x000000A8u,c->r[31]); // 801D44B0
  W32(c->r[30]+0x000000ACu,c->r[0]); // 801D44B4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801D44B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D44BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D44C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D44C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D44C8
  c->lr=c->r[0]; // 801D44CC
  c->r[1]=c->r[1]+0x00000030u; // 801D44D0
  return; // 801D44D4
}

// fn_801D44E0
void f_801D44E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D44E0
  c->r[0]=c->lr; // 801D44E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D44E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D44EC
  c->r[31]=c->r[4]|c->r[4]; // 801D44F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D44F4
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D44F8
  c->ctr=c->r[12]; // 801D44FC
  if (true) { c->lr=0x801D4504u; dispatch(c,c->ctr); } // 801D4500
  c->r[4]=c->r[31]|c->r[31]; // 801D4504
  c->lr=0x801D450Cu; f_801D2A20(c); // 801D4508
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D450C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4510
  c->lr=c->r[0]; // 801D4514
  c->r[1]=c->r[1]+0x00000010u; // 801D4518
  return; // 801D451C
}

// fn_801D4520
void f_801D4520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4520
  c->r[0]=c->lr; // 801D4524
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D452C
  c->r[31]=c->r[4]|c->r[4]; // 801D4530
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4534
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D4538
  c->ctr=c->r[12]; // 801D453C
  if (true) { c->lr=0x801D4544u; dispatch(c,c->ctr); } // 801D4540
  W32(c->r[3]+0x0000002Cu,c->r[31]); // 801D4544
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4548
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D454C
  c->lr=c->r[0]; // 801D4550
  c->r[1]=c->r[1]+0x00000010u; // 801D4554
  return; // 801D4558
}

// fn_801D4560
void f_801D4560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4560
  c->r[0]=c->lr; // 801D4564
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D456C
  c->r[31]=c->r[4]|c->r[4]; // 801D4570
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4574
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D4578
  c->ctr=c->r[12]; // 801D457C
  if (true) { c->lr=0x801D4584u; dispatch(c,c->ctr); } // 801D4580
  W32(c->r[3]+0x00000030u,c->r[31]); // 801D4584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4588
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D458C
  c->lr=c->r[0]; // 801D4590
  c->r[1]=c->r[1]+0x00000010u; // 801D4594
  return; // 801D4598
}

// fn_801D45A0
void f_801D45A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D45A0
  c->r[0]=c->lr; // 801D45A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D45A8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D45AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D45B0
  c->r[31]=0u+0x802D0000u; // 801D45B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D45B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D45BC
  c->r[31]=c->r[31]+0xFFFFD5C0u; // 801D45C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D45C4
  c->r[29]=c->r[4]|c->r[4]; // 801D45C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D45CC
  c->r[28]=c->r[3]|c->r[3]; // 801D45D0
  if (!crb(c,2)) { goto L_801D45EC; } // 801D45D4
  c->r[3]=c->r[31]+0x00000000u; // 801D45D8
  c->r[5]=c->r[31]+0x00000354u; // 801D45DC
  c->r[4]=0u+0x0000042Bu; // 801D45E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D45E4
  c->lr=0x801D45ECu; f_801F9770(c); // 801D45E8
L_801D45EC:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 801D45EC
  c->r[4]=R32(c->r[29]+0x00000010u); // 801D45F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D45F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D45F8
  c->ctr=c->r[12]; // 801D45FC
  if (true) { c->lr=0x801D4604u; dispatch(c,c->ctr); } // 801D4600
  cmps(c,0,(int32_t)c->r[3],0); // 801D4604
  c->r[30]=c->r[3]|c->r[3]; // 801D4608
  if (!crb(c,2)) { goto L_801D462C; } // 801D460C
  if (!crb(c,2)) { goto L_801D4690; } // 801D4610
  c->r[3]=c->r[31]+0x00000000u; // 801D4614
  c->r[5]=c->r[31]+0x00000398u; // 801D4618
  c->r[4]=0u+0x0000042Eu; // 801D461C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4620
  c->lr=0x801D4628u; f_801F9810(c); // 801D4624
  goto L_801D4690; // 801D4628
L_801D462C:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801D462C
  c->r[5]=R32(c->r[29]+0x00000010u); // 801D4630
  c->lr=0x801D4638u; f_80004364(c); // 801D4634
  c->r[0]=R32(c->r[29]+0x00000000u); // 801D4638
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D463C
  c->r[5]=R32(c->r[29]+0x00000004u); // 801D4640
  cmps(c,0,(int32_t)c->r[0],0); // 801D4644
  c->r[4]=R32(c->r[29]+0x00000008u); // 801D4648
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D464C
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 801D4650
  W32(c->r[28]+0x00000020u,c->r[5]); // 801D4654
  W32(c->r[28]+0x00000024u,c->r[4]); // 801D4658
  W32(c->r[28]+0x0000002Cu,c->r[0]); // 801D465C
  W32(c->r[28]+0x00000028u,c->r[30]); // 801D4660
  if (crb(c,2)) { goto L_801D4690; } // 801D4664
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4668
  c->r[4]=c->r[30]|c->r[30]; // 801D466C
  c->r[5]=R32(c->r[28]+0x0000009Cu); // 801D4670
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D4674
  c->ctr=c->r[12]; // 801D4678
  if (true) { c->lr=0x801D4680u; dispatch(c,c->ctr); } // 801D467C
  cmps(c,0,(int32_t)c->r[3],4); // 801D4680
  if (!crb(c,1)) { goto L_801D468C; } // 801D4684
  c->r[3]=0u+0x00000004u; // 801D4688
L_801D468C:;
  W8(c->r[28]+0x00000099u,c->r[3]); // 801D468C
L_801D4690:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4690
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4694
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4698
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D469C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D46A0
  c->lr=c->r[0]; // 801D46A4
  c->r[1]=c->r[1]+0x00000020u; // 801D46A8
  return; // 801D46AC
}

// fn_801D46B0
void f_801D46B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D46B0
  c->r[6]=c->r[3]|c->r[3]; // 801D46B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D46B8
  if (!crb(c,2)) { goto L_801D46C8; } // 801D46BC
  c->r[3]=0u+0x00000000u; // 801D46C0
  return; // 801D46C4
L_801D46C8:;
  c->r[3]=c->r[0]|c->r[0]; // 801D46C8
  c->r[5]=c->r[4]|c->r[4]; // 801D46CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D46D0
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801D46D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D46D8
  c->ctr=c->r[12]; // 801D46DC
  if (true) { dispatch(c,c->ctr); return; } // 801D46E0
}

// fn_801D46E4
void f_801D46E4(Ctx* __restrict c) {
  return; // 801D46E4
}

// fn_801D46F0
void f_801D46F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D46F0
  c->r[0]=0u-c->r[3]; // 801D46F4
  c->r[0]=c->r[0]|c->r[3]; // 801D46F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D46FC
  return; // 801D4700
}

// DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv
void f_801D4710(Ctx* __restrict c) {
  trace_call(0x801D4710u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D4710
  f_801E4210(c); return; // 801D4714
}

// SetId__Q44nw4r3snd6detail10BasicSoundFUl
void f_801D4720(Ctx* __restrict c) {
  trace_call(0x801D4720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4720
  c->r[0]=c->lr; // 801D4724
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D472C
  c->r[31]=c->r[4]|c->r[4]; // 801D4730
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 801D4734
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4738
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D473C
  c->ctr=c->r[12]; // 801D4740
  if (true) { c->lr=0x801D4748u; dispatch(c,c->ctr); } // 801D4744
  W32(c->r[3]+0x000000B0u,c->r[31]); // 801D4748
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D474C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4750
  c->lr=c->r[0]; // 801D4754
  c->r[1]=c->r[1]+0x00000010u; // 801D4758
  return; // 801D475C
}

// __dt__Q44nw4r3snd6detail10BasicSoundFv
void f_801D4760(Ctx* __restrict c) {
  trace_call(0x801D4760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4760
  c->r[0]=c->lr; // 801D4764
  cmps(c,0,(int32_t)c->r[3],0); // 801D4768
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D476C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4770
  c->r[31]=c->r[3]|c->r[3]; // 801D4774
  if (crb(c,2)) { goto L_801D4788; } // 801D4778
  cmps(c,0,(int32_t)c->r[4],0); // 801D477C
  if (!crb(c,1)) { goto L_801D4788; } // 801D4780
  c->lr=0x801D4788u; f_800B9AD0(c); // 801D4784
L_801D4788:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D478C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4790
  c->lr=c->r[0]; // 801D4794
  c->r[1]=c->r[1]+0x00000010u; // 801D4798
  return; // 801D479C
}

// GetRuntimeTypeInfo__Q44nw4r3snd6detail10BasicSoundCFv
void f_801D47A0(Ctx* __restrict c) {
  trace_call(0x801D47A0u);
  c->r[3]=c->r[13]+0xFFFFAE38u; // 801D47A0
  return; // 801D47A4
}

// fn_801D47B0
void f_801D47B0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D47B0
  W32(c->r[13]+0xFFFFAE38u,c->r[0]); // 801D47B4
  return; // 801D47B8
}

// GetCoef__Q44nw4r3snd6detail15BiquadFilterLpfCFifPQ44nw4r3snd20BiquadFilterCallback10BiquadCoef
void f_801D47C0(Ctx* __restrict c) {
  trace_call(0x801D47C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D47C0
  c->r[4]=0u+0x0000006Fu; // 801D47C4
  c->r[0]=0u+0x43300000u; // 801D47C8
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=RF64(ea);} // 801D47CC
  c->r[3]=c->r[4]^0x80000000u; // 801D47D0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D47D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D47D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D47DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D47E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D47E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D47E8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D47EC
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D47F0
  cmps(c,0,(int32_t)c->r[3],111); // 801D47F4
  if (!crb(c,1)) { goto L_801D4800; } // 801D47F8
  goto L_801D4808; // 801D47FC
L_801D4800:;
  c->r[0]=sraw(c,c->r[3],31); // 801D4800
  c->r[4]=c->r[3]&~c->r[0]; // 801D4804
L_801D4808:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801D4808
  c->r[3]=0u+0x80230000u; // 801D480C
  c->r[3]=c->r[3]+0x00006E10u; // 801D4810
  c->r[7]=c->r[3]+c->r[0]; // 801D4814
  c->r[8]=R16(c->r[3]+c->r[0]); // 801D4818
  c->r[6]=R16(c->r[7]+0x00000002u); // 801D481C
  c->r[4]=R16(c->r[7]+0x00000004u); // 801D4820
  c->r[3]=R16(c->r[7]+0x00000006u); // 801D4824
  c->r[0]=R16(c->r[7]+0x00000008u); // 801D4828
  W16(c->r[5]+0x00000000u,c->r[8]); // 801D482C
  W16(c->r[5]+0x00000002u,c->r[6]); // 801D4830
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D4834
  W16(c->r[5]+0x00000006u,c->r[3]); // 801D4838
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D483C
  c->r[1]=c->r[1]+0x00000020u; // 801D4840
  return; // 801D4844
}

// GetCoef__Q44nw4r3snd6detail15BiquadFilterHpfCFifPQ44nw4r3snd20BiquadFilterCallback10BiquadCoef
void f_801D4850(Ctx* __restrict c) {
  trace_call(0x801D4850u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4850
  c->r[4]=0u+0x00000060u; // 801D4854
  c->r[0]=0u+0x43300000u; // 801D4858
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=RF64(ea);} // 801D485C
  c->r[3]=c->r[4]^0x80000000u; // 801D4860
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D4864
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D4868
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D486C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D4870
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D4874
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D4878
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D487C
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D4880
  cmps(c,0,(int32_t)c->r[3],96); // 801D4884
  if (!crb(c,1)) { goto L_801D4890; } // 801D4888
  goto L_801D4898; // 801D488C
L_801D4890:;
  c->r[0]=sraw(c,c->r[3],31); // 801D4890
  c->r[4]=c->r[3]&~c->r[0]; // 801D4894
L_801D4898:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801D4898
  c->r[3]=0u+0x80230000u; // 801D489C
  c->r[3]=c->r[3]+0x00007270u; // 801D48A0
  c->r[7]=c->r[3]+c->r[0]; // 801D48A4
  c->r[8]=R16(c->r[3]+c->r[0]); // 801D48A8
  c->r[6]=R16(c->r[7]+0x00000002u); // 801D48AC
  c->r[4]=R16(c->r[7]+0x00000004u); // 801D48B0
  c->r[3]=R16(c->r[7]+0x00000006u); // 801D48B4
  c->r[0]=R16(c->r[7]+0x00000008u); // 801D48B8
  W16(c->r[5]+0x00000000u,c->r[8]); // 801D48BC
  W16(c->r[5]+0x00000002u,c->r[6]); // 801D48C0
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D48C4
  W16(c->r[5]+0x00000006u,c->r[3]); // 801D48C8
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D48CC
  c->r[1]=c->r[1]+0x00000020u; // 801D48D0
  return; // 801D48D4
}

// GetCoef__Q44nw4r3snd6detail18BiquadFilterBpf512CFifPQ44nw4r3snd20BiquadFilterCallback10BiquadCoef
void f_801D48E0(Ctx* __restrict c) {
  trace_call(0x801D48E0u);
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D48E0
  c->r[4]=0u+0x00000079u; // 801D48E4
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D48E8
  c->r[3]=c->r[4]^0x80000000u; // 801D48EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D48F0
  c->r[0]=0u+0x43300000u; // 801D48F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D48F8
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=RF64(ea);} // 801D48FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D4900
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801D4904
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D4908
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D490C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D4910
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D4914
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D4918
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D491C
  cmps(c,0,(int32_t)c->r[3],121); // 801D4920
  if (!crb(c,1)) { goto L_801D492C; } // 801D4924
  goto L_801D4934; // 801D4928
L_801D492C:;
  c->r[0]=sraw(c,c->r[3],31); // 801D492C
  c->r[4]=c->r[3]&~c->r[0]; // 801D4930
L_801D4934:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801D4934
  c->r[3]=0u+0x80230000u; // 801D4938
  c->r[3]=c->r[3]+0x0000763Cu; // 801D493C
  c->r[7]=c->r[3]+c->r[0]; // 801D4940
  c->r[8]=R16(c->r[3]+c->r[0]); // 801D4944
  c->r[6]=R16(c->r[7]+0x00000002u); // 801D4948
  c->r[4]=R16(c->r[7]+0x00000004u); // 801D494C
  c->r[3]=R16(c->r[7]+0x00000006u); // 801D4950
  c->r[0]=R16(c->r[7]+0x00000008u); // 801D4954
  W16(c->r[5]+0x00000000u,c->r[8]); // 801D4958
  W16(c->r[5]+0x00000002u,c->r[6]); // 801D495C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D4960
  W16(c->r[5]+0x00000006u,c->r[3]); // 801D4964
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D4968
  c->r[1]=c->r[1]+0x00000020u; // 801D496C
  return; // 801D4970
}

// GetCoef__Q44nw4r3snd6detail19BiquadFilterBpf1024CFifPQ44nw4r3snd20BiquadFilterCallback10BiquadCoef
void f_801D4980(Ctx* __restrict c) {
  trace_call(0x801D4980u);
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4980
  c->r[4]=0u+0x0000005Cu; // 801D4984
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4988
  c->r[3]=c->r[4]^0x80000000u; // 801D498C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D4990
  c->r[0]=0u+0x43300000u; // 801D4994
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D4998
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=RF64(ea);} // 801D499C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D49A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801D49A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D49A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D49AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D49B0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D49B4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D49B8
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D49BC
  cmps(c,0,(int32_t)c->r[3],92); // 801D49C0
  if (!crb(c,1)) { goto L_801D49CC; } // 801D49C4
  goto L_801D49D4; // 801D49C8
L_801D49CC:;
  c->r[0]=sraw(c,c->r[3],31); // 801D49CC
  c->r[4]=c->r[3]&~c->r[0]; // 801D49D0
L_801D49D4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801D49D4
  c->r[3]=0u+0x80230000u; // 801D49D8
  c->r[3]=c->r[3]+0x00007B00u; // 801D49DC
  c->r[7]=c->r[3]+c->r[0]; // 801D49E0
  c->r[8]=R16(c->r[3]+c->r[0]); // 801D49E4
  c->r[6]=R16(c->r[7]+0x00000002u); // 801D49E8
  c->r[4]=R16(c->r[7]+0x00000004u); // 801D49EC
  c->r[3]=R16(c->r[7]+0x00000006u); // 801D49F0
  c->r[0]=R16(c->r[7]+0x00000008u); // 801D49F4
  W16(c->r[5]+0x00000000u,c->r[8]); // 801D49F8
  W16(c->r[5]+0x00000002u,c->r[6]); // 801D49FC
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D4A00
  W16(c->r[5]+0x00000006u,c->r[3]); // 801D4A04
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D4A08
  c->r[1]=c->r[1]+0x00000020u; // 801D4A0C
  return; // 801D4A10
}

// GetCoef__Q44nw4r3snd6detail19BiquadFilterBpf2048CFifPQ44nw4r3snd20BiquadFilterCallback10BiquadCoef
void f_801D4A20(Ctx* __restrict c) {
  trace_call(0x801D4A20u);
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4A20
  c->r[4]=0u+0x0000005Cu; // 801D4A24
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4A28
  c->r[3]=c->r[4]^0x80000000u; // 801D4A2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D4A30
  c->r[0]=0u+0x43300000u; // 801D4A34
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D4A38
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=RF64(ea);} // 801D4A3C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D4A40
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801D4A44
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D4A48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D4A4C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D4A50
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D4A54
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D4A58
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D4A5C
  cmps(c,0,(int32_t)c->r[3],92); // 801D4A60
  if (!crb(c,1)) { goto L_801D4A6C; } // 801D4A64
  goto L_801D4A74; // 801D4A68
L_801D4A6C:;
  c->r[0]=sraw(c,c->r[3],31); // 801D4A6C
  c->r[4]=c->r[3]&~c->r[0]; // 801D4A70
L_801D4A74:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801D4A74
  c->r[3]=0u+0x80230000u; // 801D4A78
  c->r[3]=c->r[3]+0x00007EA4u; // 801D4A7C
  c->r[7]=c->r[3]+c->r[0]; // 801D4A80
  c->r[8]=R16(c->r[3]+c->r[0]); // 801D4A84
  c->r[6]=R16(c->r[7]+0x00000002u); // 801D4A88
  c->r[4]=R16(c->r[7]+0x00000004u); // 801D4A8C
  c->r[3]=R16(c->r[7]+0x00000006u); // 801D4A90
  c->r[0]=R16(c->r[7]+0x00000008u); // 801D4A94
  W16(c->r[5]+0x00000000u,c->r[8]); // 801D4A98
  W16(c->r[5]+0x00000002u,c->r[6]); // 801D4A9C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D4AA0
  W16(c->r[5]+0x00000006u,c->r[3]); // 801D4AA4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D4AA8
  c->r[1]=c->r[1]+0x00000020u; // 801D4AAC
  return; // 801D4AB0
}

// __dt__Q44nw4r3snd6detail15BiquadFilterLpfFv
void f_801D4AC0(Ctx* __restrict c) {
  trace_call(0x801D4AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4AC0
  c->r[0]=c->lr; // 801D4AC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4AD0
  c->r[31]=c->r[3]|c->r[3]; // 801D4AD4
  if (crb(c,2)) { goto L_801D4AE8; } // 801D4AD8
  cmps(c,0,(int32_t)c->r[4],0); // 801D4ADC
  if (!crb(c,1)) { goto L_801D4AE8; } // 801D4AE0
  c->lr=0x801D4AE8u; f_800B9AD0(c); // 801D4AE4
L_801D4AE8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4AF0
  c->lr=c->r[0]; // 801D4AF4
  c->r[1]=c->r[1]+0x00000010u; // 801D4AF8
  return; // 801D4AFC
}

// __dt__Q44nw4r3snd6detail15BiquadFilterHpfFv
void f_801D4B00(Ctx* __restrict c) {
  trace_call(0x801D4B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4B00
  c->r[0]=c->lr; // 801D4B04
  cmps(c,0,(int32_t)c->r[3],0); // 801D4B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4B10
  c->r[31]=c->r[3]|c->r[3]; // 801D4B14
  if (crb(c,2)) { goto L_801D4B28; } // 801D4B18
  cmps(c,0,(int32_t)c->r[4],0); // 801D4B1C
  if (!crb(c,1)) { goto L_801D4B28; } // 801D4B20
  c->lr=0x801D4B28u; f_800B9AD0(c); // 801D4B24
L_801D4B28:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4B28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4B30
  c->lr=c->r[0]; // 801D4B34
  c->r[1]=c->r[1]+0x00000010u; // 801D4B38
  return; // 801D4B3C
}

// __dt__Q44nw4r3snd6detail18BiquadFilterBpf512Fv
void f_801D4B40(Ctx* __restrict c) {
  trace_call(0x801D4B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4B40
  c->r[0]=c->lr; // 801D4B44
  cmps(c,0,(int32_t)c->r[3],0); // 801D4B48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4B4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4B50
  c->r[31]=c->r[3]|c->r[3]; // 801D4B54
  if (crb(c,2)) { goto L_801D4B68; } // 801D4B58
  cmps(c,0,(int32_t)c->r[4],0); // 801D4B5C
  if (!crb(c,1)) { goto L_801D4B68; } // 801D4B60
  c->lr=0x801D4B68u; f_800B9AD0(c); // 801D4B64
L_801D4B68:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4B70
  c->lr=c->r[0]; // 801D4B74
  c->r[1]=c->r[1]+0x00000010u; // 801D4B78
  return; // 801D4B7C
}

// __dt__Q44nw4r3snd6detail19BiquadFilterBpf1024Fv
void f_801D4B80(Ctx* __restrict c) {
  trace_call(0x801D4B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4B80
  c->r[0]=c->lr; // 801D4B84
  cmps(c,0,(int32_t)c->r[3],0); // 801D4B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4B90
  c->r[31]=c->r[3]|c->r[3]; // 801D4B94
  if (crb(c,2)) { goto L_801D4BA8; } // 801D4B98
  cmps(c,0,(int32_t)c->r[4],0); // 801D4B9C
  if (!crb(c,1)) { goto L_801D4BA8; } // 801D4BA0
  c->lr=0x801D4BA8u; f_800B9AD0(c); // 801D4BA4
L_801D4BA8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4BA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4BAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4BB0
  c->lr=c->r[0]; // 801D4BB4
  c->r[1]=c->r[1]+0x00000010u; // 801D4BB8
  return; // 801D4BBC
}

// __dt__Q44nw4r3snd6detail19BiquadFilterBpf2048Fv
void f_801D4BC0(Ctx* __restrict c) {
  trace_call(0x801D4BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4BC0
  c->r[0]=c->lr; // 801D4BC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4BD0
  c->r[31]=c->r[3]|c->r[3]; // 801D4BD4
  if (crb(c,2)) { goto L_801D4BE8; } // 801D4BD8
  cmps(c,0,(int32_t)c->r[4],0); // 801D4BDC
  if (!crb(c,1)) { goto L_801D4BE8; } // 801D4BE0
  c->lr=0x801D4BE8u; f_800B9AD0(c); // 801D4BE4
L_801D4BE8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4BE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4BF0
  c->lr=c->r[0]; // 801D4BF4
  c->r[1]=c->r[1]+0x00000010u; // 801D4BF8
  return; // 801D4BFC
}

// GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
void f_801D4C00(Ctx* __restrict c) {
  trace_call(0x801D4C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4C00
  c->r[0]=c->lr; // 801D4C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4C08
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D4C0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D4C10
  if (!crb(c,2)) { goto L_801D4C5C; } // 801D4C14
  c->r[6]=0u+0x80380000u; // 801D4C18
  c->r[0]=0u+0x00000000u; // 801D4C1C
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D4C20
  c->r[4]=0u+0x801D0000u; // 801D4C24
  c->r[7]=c->r[3]+0x00000008u; // 801D4C28
  c->r[5]=0u+0x80380000u; // 801D4C2C
  W32(c->r[6]+0xFFFFAB78u,c->r[0]); // 801D4C30
  c->r[4]=c->r[4]+0x00004C80u; // 801D4C34
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D4C38
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D4C3C
  W32(c->r[3]+0x00000008u,c->r[7]); // 801D4C40
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801D4C44
  W8(c->r[3]+0x00000010u,c->r[0]); // 801D4C48
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D4C4C
  c->lr=0x801D4C54u; f_80216C54(c); // 801D4C50
  c->r[0]=0u+0x00000001u; // 801D4C54
  W8(c->r[13]+0xFFFFAE40u,c->r[0]); // 801D4C58
L_801D4C5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4C5C
  c->r[3]=0u+0x80380000u; // 801D4C60
  c->r[3]=c->r[3]+0xFFFFAB78u; // 801D4C64
  c->lr=c->r[0]; // 801D4C68
  c->r[1]=c->r[1]+0x00000010u; // 801D4C6C
  return; // 801D4C70
}

// __dt__Q44nw4r3snd6detail14ChannelManagerFv
void f_801D4C80(Ctx* __restrict c) {
  trace_call(0x801D4C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4C80
  c->r[0]=c->lr; // 801D4C84
  cmps(c,0,(int32_t)c->r[3],0); // 801D4C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4C8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4C90
  c->r[31]=c->r[4]|c->r[4]; // 801D4C94
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4C98
  c->r[30]=c->r[3]|c->r[3]; // 801D4C9C
  if (crb(c,2)) { goto L_801D4CC4; } // 801D4CA0
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 801D4CA4
  if (crb(c,2)) { goto L_801D4CB4; } // 801D4CA8
  c->r[4]=0u+0x00000000u; // 801D4CAC
  c->lr=0x801D4CB4u; f_801F9DB0(c); // 801D4CB0
L_801D4CB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D4CB4
  if (!crb(c,1)) { goto L_801D4CC4; } // 801D4CB8
  c->r[3]=c->r[30]|c->r[30]; // 801D4CBC
  c->lr=0x801D4CC4u; f_800B9AD0(c); // 801D4CC0
L_801D4CC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D4CC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4CC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4CCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4CD0
  c->lr=c->r[0]; // 801D4CD4
  c->r[1]=c->r[1]+0x00000010u; // 801D4CD8
  return; // 801D4CDC
}

// GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi
void f_801D4CE0(Ctx* __restrict c) {
  trace_call(0x801D4CE0u);
  c->r[0]=c->r[4]+0x00000001u; // 801D4CE0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)224); // 801D4CE4
  return; // 801D4CE8
}

// Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl
void f_801D4CF0(Ctx* __restrict c) {
  trace_call(0x801D4CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4CF0
  c->r[0]=c->lr; // 801D4CF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4CF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4CFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4D00
  c->r[30]=c->r[5]|c->r[5]; // 801D4D04
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4D08
  c->r[29]=c->r[4]|c->r[4]; // 801D4D0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D4D10
  c->r[28]=c->r[3]|c->r[3]; // 801D4D14
  c->lr=0x801D4D1Cu; f_800CBAA0(c); // 801D4D18
  c->r[0]=R8(c->r[28]+0x00000010u); // 801D4D1C
  c->r[31]=c->r[3]|c->r[3]; // 801D4D20
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D24
  if (crb(c,2)) { goto L_801D4D34; } // 801D4D28
  c->lr=0x801D4D30u; f_800CBAE0(c); // 801D4D2C
  goto L_801D4D64; // 801D4D30
L_801D4D34:;
  c->r[3]=c->r[28]|c->r[28]; // 801D4D34
  c->r[4]=c->r[29]|c->r[29]; // 801D4D38
  c->r[5]=c->r[30]|c->r[30]; // 801D4D3C
  c->r[6]=0u+0x000000E0u; // 801D4D40
  c->lr=0x801D4D48u; f_801D7660(c); // 801D4D44
  W32(c->r[28]+0x00000014u,c->r[3]); // 801D4D48
  c->r[0]=0u+0x00000001u; // 801D4D4C
  c->r[3]=c->r[31]|c->r[31]; // 801D4D50
  W32(c->r[28]+0x00000018u,c->r[29]); // 801D4D54
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 801D4D58
  W8(c->r[28]+0x00000010u,c->r[0]); // 801D4D5C
  c->lr=0x801D4D64u; f_800CBAE0(c); // 801D4D60
L_801D4D64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4D64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4D68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4D6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4D70
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D4D74
  c->lr=c->r[0]; // 801D4D78
  c->r[1]=c->r[1]+0x00000020u; // 801D4D7C
  return; // 801D4D80
}

// fn_801D4D90
void f_801D4D90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4D90
  c->r[0]=c->lr; // 801D4D94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4D98
  c->r[11]=c->r[1]+0x00000020u; // 801D4D9C
  c->lr=0x801D4DA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4DA0
  c->r[31]=R32(c->r[3]+0x00000008u); // 801D4DA4
  c->r[30]=c->r[3]+0x00000008u; // 801D4DA8
  c->r[28]=0u+0x802D0000u; // 801D4DAC
  c->r[29]=0u+0x802D0000u; // 801D4DB0
  goto L_801D4DE4; // 801D4DB4
L_801D4DB8:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801D4DB8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D4DBC
  if (!crb(c,2)) { goto L_801D4DD8; } // 801D4DC0
  c->r[3]=c->r[28]+0xFFFFDB40u; // 801D4DC4
  c->r[5]=c->r[29]+0xFFFFDB1Cu; // 801D4DC8
  c->r[4]=0u+0x0000023Du; // 801D4DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4DD0
  c->lr=0x801D4DD8u; f_801F9770(c); // 801D4DD4
L_801D4DD8:;
  c->r[3]=c->r[27]+0xFFFFFF28u; // 801D4DD8
  c->r[4]=0u+0x00000001u; // 801D4DDC
  c->lr=0x801D4DE4u; f_801D4F20(c); // 801D4DE0
L_801D4DE4:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D4DE4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D4DB8; } // 801D4DE8
  c->r[11]=c->r[1]+0x00000020u; // 801D4DEC
  c->lr=0x801D4DF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D4DF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4DF4
  c->lr=c->r[0]; // 801D4DF8
  c->r[1]=c->r[1]+0x00000020u; // 801D4DFC
  return; // 801D4E00
}

// fn_801D4E10
void f_801D4E10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4E10
  c->r[0]=c->lr; // 801D4E14
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4E18
  c->r[7]=0u+0x00000001u; // 801D4E1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4E20
  c->r[6]=0u+0x0000003Cu; // 801D4E24
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4E28
  c->r[0]=0u+0x000000FFu; // 801D4E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4E30
  c->r[31]=0u+0x00000000u; // 801D4E34
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4E38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4E3C
  c->r[30]=c->r[3]|c->r[3]; // 801D4E40
  W32(c->r[3]+0x000000D4u,c->r[31]); // 801D4E44
  W32(c->r[3]+0x000000C0u,c->r[4]); // 801D4E48
  W32(c->r[3]+0x000000C4u,c->r[5]); // 801D4E4C
  W32(c->r[3]+0x000000C8u,c->r[31]); // 801D4E50
  W32(c->r[3]+0x000000CCu,c->r[31]); // 801D4E54
  W8(c->r[3]+0x00000035u,c->r[31]); // 801D4E58
  W8(c->r[3]+0x00000038u,c->r[7]); // 801D4E5C
  W8(c->r[3]+0x00000039u,c->r[31]); // 801D4E60
  W8(c->r[3]+0x0000003Au,c->r[31]); // 801D4E64
  W32(c->r[3]+0x000000B0u,c->r[31]); // 801D4E68
  W32(c->r[3]+0x000000A8u,c->r[6]); // 801D4E6C
  W32(c->r[3]+0x000000ACu,c->r[6]); // 801D4E70
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 801D4E74
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801D4E78
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 801D4E7C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[2]);} // 801D4E80
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 801D4E84
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 801D4E88
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801D4E8C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801D4E90
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D4E94
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801D4E98
  W8(c->r[3]+0x0000003Bu,c->r[31]); // 801D4E9C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801D4EA0
  W8(c->r[3]+0x0000003Cu,c->r[31]); // 801D4EA4
  W32(c->r[3]+0x00000058u,c->r[7]); // 801D4EA8
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[2]);} // 801D4EAC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801D4EB0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801D4EB4
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801D4EB8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D4EBC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 801D4EC0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[2]);} // 801D4EC4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[2]);} // 801D4EC8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 801D4ECC
  W8(c->r[3]+0x000000A0u,c->r[0]); // 801D4ED0
  W8(c->r[3]+0x000000A1u,c->r[0]); // 801D4ED4
  W16(c->r[3]+0x000000A2u,c->r[31]); // 801D4ED8
  W16(c->r[3]+0x000000A4u,c->r[31]); // 801D4EDC
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801D4EE0
  W32(c->r[3]+0x0000008Cu,c->r[31]); // 801D4EE4
  W32(c->r[3]+0x00000088u,c->r[31]); // 801D4EE8
  c->lr=0x801D4EF0u; f_801D6400(c); // 801D4EEC
  c->r[3]=c->r[30]+0x0000001Cu; // 801D4EF0
  c->lr=0x801D4EF8u; f_801D7990(c); // 801D4EF4
  W8(c->r[30]+0x00000034u,c->r[31]); // 801D4EF8
  W32(c->r[30]+0x000000B4u,c->r[31]); // 801D4EFC
  W32(c->r[30]+0x000000B8u,c->r[31]); // 801D4F00
  W32(c->r[30]+0x000000BCu,c->r[31]); // 801D4F04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4F08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4F0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4F10
  c->lr=c->r[0]; // 801D4F14
  c->r[1]=c->r[1]+0x00000010u; // 801D4F18
  return; // 801D4F1C
}

// fn_801D4F20
void f_801D4F20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4F20
  c->r[0]=c->lr; // 801D4F24
  c->r[5]=0u+0x43300000u; // 801D4F28
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801D4F2C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801D4F30
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801D4F34
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 801D4F38
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 801D4F3C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 801D4F40
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 801D4F44
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 801D4F48
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 801D4F4C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 801D4F50
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 801D4F54
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 801D4F58
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 801D4F5C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[25]);} // 801D4F60
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,25,ea,0,0);} // 801D4F64
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[24]);} // 801D4F68
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,24,ea,0,0);} // 801D4F6C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[23]);} // 801D4F70
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,23,ea,0,0);} // 801D4F74
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[22]);} // 801D4F78
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,22,ea,0,0);} // 801D4F7C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801D4F80
  c->r[31]=c->r[4]|c->r[4]; // 801D4F84
  W32(c->r[1]+0x00000048u,c->r[30]); // 801D4F88
  c->r[30]=c->r[3]|c->r[3]; // 801D4F8C
  W32(c->r[1]+0x00000044u,c->r[29]); // 801D4F90
  c->r[0]=R8(c->r[3]+0x00000036u); // 801D4F94
  W32(c->r[1]+0x00000028u,c->r[5]); // 801D4F98
  cmps(c,0,(int32_t)c->r[0],0); // 801D4F9C
  W32(c->r[1]+0x00000030u,c->r[5]); // 801D4FA0
  if (crb(c,2)) { goto L_801D5604; } // 801D4FA4
  c->r[0]=R8(c->r[3]+0x00000035u); // 801D4FA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D4FAC
  if (crb(c,2)) { goto L_801D4FB8; } // 801D4FB0
  c->r[31]=0u+0x00000000u; // 801D4FB4
L_801D4FB8:;
  c->r[3]=c->r[3]+0x0000001Cu; // 801D4FB8
  c->lr=0x801D4FC0u; f_801D7A80(c); // 801D4FBC
  c->r[3]=R16(c->r[30]+0x000000A4u); // 801D4FC0
  c->f[31]=c->f[1]; // 801D4FC4
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801D4FC8
  cmpu(c,0,c->r[3],c->r[0]); // 801D4FCC
  if (!crb(c,0)) { goto L_801D4FDC; } // 801D4FD0
  c->r[0]=c->r[3]+0x00000001u; // 801D4FD4
  W16(c->r[30]+0x000000A4u,c->r[0]); // 801D4FD8
L_801D4FDC:;
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D4FDC
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4FE0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4FE4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 801D4FE8
  c->r[4]=R16(c->r[30]+0x000000A2u); // 801D4FEC
  c->r[3]=R16(c->r[30]+0x000000A4u); // 801D4FF0
  cmpu(c,0,c->r[3],c->r[4]); // 801D4FF4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 801D4FF8
  if (crb(c,0)) { goto L_801D5008; } // 801D4FFC
  c->r[0]=R8(c->r[30]+0x000000A1u); // 801D5000
  goto L_801D5024; // 801D5004
L_801D5008:;
  c->r[5]=R8(c->r[30]+0x000000A0u); // 801D5008
  c->r[0]=R8(c->r[30]+0x000000A1u); // 801D500C
  c->r[0]=c->r[0]-c->r[5]; // 801D5010
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801D5014
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801D5018
  c->r[0]=c->r[5]+c->r[0]; // 801D501C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D5020
L_801D5024:;
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D5024
  c->r[3]=c->r[30]|c->r[30]; // 801D5028
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[2]=RF64(ea);} // 801D502C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801D5030
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5034
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D5038
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[29]=c->ps1[29]=RF32(ea);} // 801D503C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D5040
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 801D5044
  c->lr=0x801D504Cu; f_801D6460(c); // 801D5048
  c->lr=0x801D5050u; f_801EF300(c); // 801D504C
  c->r[0]=R8(c->r[30]+0x00000034u); // 801D5050
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801D5054
  cmpu(c,0,c->r[0],0x00000001u); // 801D5058
  if (!crb(c,2)) { goto L_801D5070; } // 801D505C
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5060
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801D5064
  c->lr=0x801D506Cu; f_801EF300(c); // 801D5068
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801D506C
L_801D5070:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D5070
  cmps(c,0,(int32_t)c->r[0],4); // 801D5074
  if (!crb(c,2)) { goto L_801D52D4; } // 801D5078
  c->r[0]=R32(c->r[30]+0x000000C0u); // 801D507C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5080
  if (crb(c,2)) { goto L_801D51AC; } // 801D5084
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5088
  fcmp(c,0,c->f[0],c->f[29]); // 801D508C
  if (!crb(c,2)) { goto L_801D52D4; } // 801D5090
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5094
  cmps(c,0,(int32_t)c->r[3],0); // 801D5098
  if (crb(c,2)) { goto L_801D5604; } // 801D509C
  c->lr=0x801D50A4u; f_801EC680(c); // 801D50A0
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D50A4
  c->lr=0x801D50ACu; f_801EC360(c); // 801D50A8
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801D50AC
  c->r[0]=0u+0x00000000u; // 801D50B0
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801D50B4
  cmps(c,0,(int32_t)c->r[12],0); // 801D50B8
  W8(c->r[30]+0x00000035u,c->r[0]); // 801D50BC
  W8(c->r[30]+0x00000036u,c->r[0]); // 801D50C0
  if (crb(c,2)) { goto L_801D50DC; } // 801D50C4
  c->r[3]=c->r[30]|c->r[30]; // 801D50C8
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801D50CC
  c->r[4]=0u+0x00000000u; // 801D50D0
  c->ctr=c->r[12]; // 801D50D4
  if (true) { c->lr=0x801D50DCu; dispatch(c,c->ctr); } // 801D50D8
L_801D50DC:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D50DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D50E0
  if (crb(c,2)) { goto L_801D50FC; } // 801D50E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D50E8
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801D50EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D50F0
  c->ctr=c->r[12]; // 801D50F4
  if (true) { c->lr=0x801D50FCu; dispatch(c,c->ctr); } // 801D50F8
L_801D50FC:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 801D50FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D5100
  if (crb(c,2)) { goto L_801D5604; } // 801D5104
  c->r[7]=0u+0x00000000u; // 801D5108
  W8(c->r[30]+0x00000037u,c->r[7]); // 801D510C
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D5110
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D5114
  if (!crb(c,2)) { goto L_801D515C; } // 801D5118
  c->r[6]=0u+0x80380000u; // 801D511C
  c->r[4]=0u+0x801D0000u; // 801D5120
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D5124
  c->r[5]=0u+0x80380000u; // 801D5128
  c->r[0]=c->r[3]+0x00000008u; // 801D512C
  W32(c->r[6]+0xFFFFAB78u,c->r[7]); // 801D5130
  c->r[4]=c->r[4]+0x00004C80u; // 801D5134
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D5138
  W32(c->r[3]+0x00000004u,c->r[7]); // 801D513C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D5140
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D5144
  W8(c->r[3]+0x00000010u,c->r[7]); // 801D5148
  W32(c->r[3]+0x00000014u,c->r[7]); // 801D514C
  c->lr=0x801D5154u; f_80216C54(c); // 801D5150
  c->r[0]=0u+0x00000001u; // 801D5154
  W8(c->r[13]+0xFFFFAE40u,c->r[0]); // 801D5158
L_801D515C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D515C
  c->r[31]=0u+0x80380000u; // 801D5160
  c->r[31]=c->r[31]+0xFFFFAB78u; // 801D5164
  if (!crb(c,2)) { goto L_801D5188; } // 801D5168
  c->r[3]=0u+0x802D0000u; // 801D516C
  c->r[5]=0u+0x802D0000u; // 801D5170
  c->r[3]=c->r[3]+0xFFFFDB10u; // 801D5174
  c->r[4]=0u+0x00000233u; // 801D5178
  c->r[5]=c->r[5]+0xFFFFDAECu; // 801D517C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5180
  c->lr=0x801D5188u; f_801F9770(c); // 801D5184
L_801D5188:;
  c->r[3]=c->r[31]+0x00000004u; // 801D5188
  c->r[4]=c->r[30]+0x000000D8u; // 801D518C
  c->lr=0x801D5194u; f_801FA230(c); // 801D5190
  cmps(c,0,(int32_t)c->r[30],0); // 801D5194
  if (crb(c,2)) { goto L_801D5604; } // 801D5198
  c->r[3]=c->r[31]|c->r[31]; // 801D519C
  c->r[4]=c->r[30]|c->r[30]; // 801D51A0
  c->lr=0x801D51A8u; f_801D7940(c); // 801D51A4
  goto L_801D5604; // 801D51A8
L_801D51AC:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[29]); // 801D51AC
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D51B0
  fcmp(c,0,c->f[1],c->f[0]); // 801D51B4
  if (!crb(c,2)) { goto L_801D52D4; } // 801D51B8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D51BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D51C0
  if (crb(c,2)) { goto L_801D5604; } // 801D51C4
  c->lr=0x801D51CCu; f_801EC680(c); // 801D51C8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D51CC
  c->lr=0x801D51D4u; f_801EC360(c); // 801D51D0
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801D51D4
  c->r[0]=0u+0x00000000u; // 801D51D8
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801D51DC
  cmps(c,0,(int32_t)c->r[12],0); // 801D51E0
  W8(c->r[30]+0x00000035u,c->r[0]); // 801D51E4
  W8(c->r[30]+0x00000036u,c->r[0]); // 801D51E8
  if (crb(c,2)) { goto L_801D5204; } // 801D51EC
  c->r[3]=c->r[30]|c->r[30]; // 801D51F0
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801D51F4
  c->r[4]=0u+0x00000000u; // 801D51F8
  c->ctr=c->r[12]; // 801D51FC
  if (true) { c->lr=0x801D5204u; dispatch(c,c->ctr); } // 801D5200
L_801D5204:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D5204
  cmps(c,0,(int32_t)c->r[3],0); // 801D5208
  if (crb(c,2)) { goto L_801D5224; } // 801D520C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5210
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801D5214
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D5218
  c->ctr=c->r[12]; // 801D521C
  if (true) { c->lr=0x801D5224u; dispatch(c,c->ctr); } // 801D5220
L_801D5224:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 801D5224
  cmps(c,0,(int32_t)c->r[0],0); // 801D5228
  if (crb(c,2)) { goto L_801D5604; } // 801D522C
  c->r[7]=0u+0x00000000u; // 801D5230
  W8(c->r[30]+0x00000037u,c->r[7]); // 801D5234
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D5238
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D523C
  if (!crb(c,2)) { goto L_801D5284; } // 801D5240
  c->r[6]=0u+0x80380000u; // 801D5244
  c->r[4]=0u+0x801D0000u; // 801D5248
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D524C
  c->r[5]=0u+0x80380000u; // 801D5250
  c->r[0]=c->r[3]+0x00000008u; // 801D5254
  W32(c->r[6]+0xFFFFAB78u,c->r[7]); // 801D5258
  c->r[4]=c->r[4]+0x00004C80u; // 801D525C
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D5260
  W32(c->r[3]+0x00000004u,c->r[7]); // 801D5264
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D5268
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D526C
  W8(c->r[3]+0x00000010u,c->r[7]); // 801D5270
  W32(c->r[3]+0x00000014u,c->r[7]); // 801D5274
  c->lr=0x801D527Cu; f_80216C54(c); // 801D5278
  c->r[0]=0u+0x00000001u; // 801D527C
  W8(c->r[13]+0xFFFFAE40u,c->r[0]); // 801D5280
L_801D5284:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5284
  c->r[31]=0u+0x80380000u; // 801D5288
  c->r[31]=c->r[31]+0xFFFFAB78u; // 801D528C
  if (!crb(c,2)) { goto L_801D52B0; } // 801D5290
  c->r[3]=0u+0x802D0000u; // 801D5294
  c->r[5]=0u+0x802D0000u; // 801D5298
  c->r[3]=c->r[3]+0xFFFFDB10u; // 801D529C
  c->r[4]=0u+0x00000233u; // 801D52A0
  c->r[5]=c->r[5]+0xFFFFDAECu; // 801D52A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D52A8
  c->lr=0x801D52B0u; f_801F9770(c); // 801D52AC
L_801D52B0:;
  c->r[3]=c->r[31]+0x00000004u; // 801D52B0
  c->r[4]=c->r[30]+0x000000D8u; // 801D52B4
  c->lr=0x801D52BCu; f_801FA230(c); // 801D52B8
  cmps(c,0,(int32_t)c->r[30],0); // 801D52BC
  if (crb(c,2)) { goto L_801D5604; } // 801D52C0
  c->r[3]=c->r[31]|c->r[31]; // 801D52C4
  c->r[4]=c->r[30]|c->r[30]; // 801D52C8
  c->lr=0x801D52D0u; f_801D7940(c); // 801D52CC
  goto L_801D5604; // 801D52D0
L_801D52D4:;
  c->r[3]=R32(c->r[30]+0x000000ACu); // 801D52D4
  c->r[0]=R32(c->r[30]+0x000000A8u); // 801D52D8
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[2]=RF64(ea);} // 801D52DC
  c->r[0]=c->r[0]-c->r[3]; // 801D52E0
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[24]=c->ps1[24]=RF32(ea);} // 801D52E4
  c->r[0]=c->r[0]^0x80000000u; // 801D52E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D52EC
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[23]=c->ps1[23]=RF32(ea);} // 801D52F0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801D52F4
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D52F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D52FC
  fcmp(c,0,c->f[23],c->f[1]); // 801D5300
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801D5304
  if (!crb(c,2)) { goto L_801D5310; } // 801D5308
  goto L_801D537C; // 801D530C
L_801D5310:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 801D5310
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 801D5314
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D5318
  if (crb(c,0)) { goto L_801D5324; } // 801D531C
  goto L_801D537C; // 801D5320
L_801D5324:;
  c->r[0]=c->r[3]-c->r[0]; // 801D5324
  cmps(c,0,(int32_t)c->r[3],0); // 801D5328
  c->r[0]=c->r[0]^0x80000000u; // 801D532C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D5330
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801D5334
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D5338
  c->f[23]=c->ps1[23]=S(c->f[1]*c->f[0]); // 801D533C
  if (!crb(c,2)) { goto L_801D5360; } // 801D5340
  c->r[3]=0u+0x802D0000u; // 801D5344
  c->r[5]=0u+0x802D0000u; // 801D5348
  c->r[3]=c->r[3]+0xFFFFDA00u; // 801D534C
  c->r[4]=0u+0x000001FCu; // 801D5350
  c->r[5]=c->r[5]+0xFFFFDA40u; // 801D5354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5358
  c->lr=0x801D5360u; f_801F9770(c); // 801D535C
L_801D5360:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 801D5360
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[1]=RF64(ea);} // 801D5364
  c->r[0]=c->r[0]^0x80000000u; // 801D5368
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D536C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801D5370
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D5374
  c->f[23]=c->ps1[23]=S(c->f[23]/c->f[0]); // 801D5378
L_801D537C:;
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[23]); // 801D537C
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5380
  c->r[0]=R8(c->r[30]+0x00000034u); // 801D5384
  cmps(c,0,(int32_t)c->r[0],0); // 801D5388
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801D538C
  if (!crb(c,2)) { goto L_801D5398; } // 801D5390
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[31]); // 801D5394
L_801D5398:;
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5398
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[23]=c->ps1[23]=RF32(ea);} // 801D539C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[24]); // 801D53A0
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D53A4
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D53A8
  c->f[23]=c->ps1[23]=S(c->f[23]*c->f[2]); // 801D53AC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D53B0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 801D53B4
  c->f[23]=c->ps1[23]=S(c->f[23]*c->f[1]); // 801D53B8
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 801D53BC
  c->lr=0x801D53C4u; f_801EF150(c); // 801D53C0
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[27]=c->ps1[27]=RF32(ea);} // 801D53C4
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[23]); // 801D53C8
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D53CC
  c->r[0]=R8(c->r[30]+0x00000034u); // 801D53D0
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801D53D4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D53D8
  cmpu(c,0,c->r[0],0x00000002u); // 801D53DC
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801D53E0
  if (!crb(c,2)) { goto L_801D53EC; } // 801D53E4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 801D53E8
L_801D53EC:;
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D53EC
  cmps(c,0,(int32_t)c->r[31],0); // 801D53F0
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D53F4
  c->f[3]=c->f[31]; // 801D53F8
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D53FC
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5400
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801D5404
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5408
  c->f[26]=c->f[4]; // 801D540C
  c->f[7]=c->ps1[7]=S(c->f[3]+c->f[2]); // 801D5410
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5414
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[0]); // 801D5418
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D541C
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[1]); // 801D5420
  {uint32_t ea=c->r[30]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5424
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 801D5428
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D542C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[2]); // 801D5430
  {uint32_t ea=c->r[30]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5434
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5438
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 801D543C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801D5440
  {uint32_t ea=c->r[30]+0x00000050u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D5444
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801D5448
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 801D544C
  c->f[25]=c->f[4]; // 801D5450
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[24]=c->ps1[24]=RF32(ea);} // 801D5454
  {uint32_t ea=c->r[30]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D5458
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[9]); // 801D545C
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[8]); // 801D5460
  c->r[31]=R8(c->r[30]+0x0000003Cu); // 801D5464
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 801D5468
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[7]);} // 801D546C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[6]);} // 801D5470
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 801D5474
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801D5478
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D547C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801D5480
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D5484
  if (crb(c,2)) { goto L_801D54CC; } // 801D5488
  c->r[0]=R8(c->r[30]+0x00000038u); // 801D548C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5490
  if (crb(c,2)) { goto L_801D54B4; } // 801D5494
  c->r[3]=R32(c->r[30]+0x00000088u); // 801D5498
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 801D549C
  c->r[0]=c->r[3]+0x00000003u; // 801D54A0
  W32(c->r[30]+0x00000088u,c->r[0]); // 801D54A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D54A8
  if (!crb(c,1)) { goto L_801D54B4; } // 801D54AC
  W32(c->r[30]+0x00000088u,c->r[4]); // 801D54B0
L_801D54B4:;
  c->r[3]=c->r[30]+0x0000001Cu; // 801D54B4
  c->r[4]=0u+0x00000003u; // 801D54B8
  c->lr=0x801D54C0u; f_801D79E0(c); // 801D54BC
  c->r[3]=c->r[30]|c->r[30]; // 801D54C0
  c->r[4]=0u+0x00000003u; // 801D54C4
  c->lr=0x801D54CCu; f_801D6490(c); // 801D54C8
L_801D54CC:;
  c->r[3]=c->r[30]+0x0000001Cu; // 801D54CC
  c->lr=0x801D54D4u; f_801D7A80(c); // 801D54D0
  c->f[23]=c->f[1]; // 801D54D4
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[22]=c->ps1[22]=RF32(ea);} // 801D54D8
  c->r[3]=c->r[30]|c->r[30]; // 801D54DC
  c->lr=0x801D54E4u; f_801D6460(c); // 801D54E0
  c->lr=0x801D54E8u; f_801EF300(c); // 801D54E4
  c->r[0]=R8(c->r[30]+0x00000034u); // 801D54E8
  c->f[22]=c->ps1[22]=S(c->f[22]*c->f[1]); // 801D54EC
  cmpu(c,0,c->r[0],0x00000001u); // 801D54F0
  if (!crb(c,2)) { goto L_801D5508; } // 801D54F4
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D54F8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 801D54FC
  c->lr=0x801D5504u; f_801EF300(c); // 801D5500
  c->f[22]=c->ps1[22]=S(c->f[22]*c->f[1]); // 801D5504
L_801D5508:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5508
  cmps(c,0,(int32_t)c->r[3],0); // 801D550C
  if (crb(c,2)) { goto L_801D5604; } // 801D5510
  c->r[4]=R32(c->r[30]+0x000000B4u); // 801D5514
  c->lr=0x801D551Cu; f_801EC8B0(c); // 801D5518
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D551C
  c->r[4]=R32(c->r[30]+0x000000B8u); // 801D5520
  c->lr=0x801D5528u; f_801EC8D0(c); // 801D5524
  c->f[1]=c->f[30]; // 801D5528
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D552C
  c->lr=0x801D5534u; f_801EC7E0(c); // 801D5530
  c->f[1]=c->f[22]; // 801D5534
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5538
  c->f[2]=c->f[29]; // 801D553C
  c->lr=0x801D5544u; f_801EC810(c); // 801D5540
  c->f[1]=c->f[28]; // 801D5544
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5548
  c->lr=0x801D5550u; f_801EC890(c); // 801D554C
  c->f[1]=c->f[27]; // 801D5550
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5554
  c->lr=0x801D555Cu; f_801EC8F0(c); // 801D5558
  c->f[1]=c->f[31]; // 801D555C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5560
  c->lr=0x801D5568u; f_801EC910(c); // 801D5564
  c->f[1]=c->f[26]; // 801D5568
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D556C
  c->lr=0x801D5574u; f_801EC930(c); // 801D5570
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5574
  c->r[4]=R8(c->r[30]+0x0000003Bu); // 801D5578
  {uint32_t ea=c->r[30]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D557C
  c->lr=0x801D5584u; f_801EC950(c); // 801D5580
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5584
  c->r[4]=c->r[31]|c->r[31]; // 801D5588
  c->lr=0x801D5590u; f_801ECA40(c); // 801D558C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D5590
  c->r[4]=R32(c->r[30]+0x00000058u); // 801D5594
  c->lr=0x801D559Cu; f_801ECA80(c); // 801D5598
  c->f[1]=c->f[25]; // 801D559C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D55A0
  c->lr=0x801D55A8u; f_801ECAA0(c); // 801D55A4
  c->f[1]=c->f[24]; // 801D55A8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D55AC
  c->lr=0x801D55B4u; f_801ECAD0(c); // 801D55B0
  c->r[31]=c->r[1]+0x00000018u; // 801D55B4
  c->r[29]=0u+0x00000000u; // 801D55B8
L_801D55BC:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D55BC
  c->r[4]=c->r[29]|c->r[29]; // 801D55C0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D55C4
  c->lr=0x801D55CCu; f_801ECB10(c); // 801D55C8
  c->r[29]=c->r[29]+0x00000001u; // 801D55CC
  c->r[31]=c->r[31]+0x00000004u; // 801D55D0
  cmps(c,0,(int32_t)c->r[29],3); // 801D55D4
  if (crb(c,0)) { IRQCHK(c); goto L_801D55BC; } // 801D55D8
  c->r[31]=c->r[1]+0x00000008u; // 801D55DC
  c->r[29]=0u+0x00000000u; // 801D55E0
L_801D55E4:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D55E4
  c->r[4]=c->r[29]|c->r[29]; // 801D55E8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D55EC
  c->lr=0x801D55F4u; f_801ECBD0(c); // 801D55F0
  c->r[29]=c->r[29]+0x00000001u; // 801D55F4
  c->r[31]=c->r[31]+0x00000004u; // 801D55F8
  cmps(c,0,(int32_t)c->r[29],4); // 801D55FC
  if (crb(c,0)) { IRQCHK(c); goto L_801D55E4; } // 801D5600
L_801D5604:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801D5604
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801D5608
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801D560C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 801D5610
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 801D5614
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 801D5618
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 801D561C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 801D5620
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 801D5624
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 801D5628
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 801D562C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 801D5630
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 801D5634
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,25,ea,0,0);} // 801D5638
  {uint32_t ea=c->r[1]+0x00000080u; c->f[25]=RF64(ea);} // 801D563C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,24,ea,0,0);} // 801D5640
  {uint32_t ea=c->r[1]+0x00000070u; c->f[24]=RF64(ea);} // 801D5644
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,23,ea,0,0);} // 801D5648
  {uint32_t ea=c->r[1]+0x00000060u; c->f[23]=RF64(ea);} // 801D564C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,22,ea,0,0);} // 801D5650
  {uint32_t ea=c->r[1]+0x00000050u; c->f[22]=RF64(ea);} // 801D5654
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801D5658
  c->r[30]=R32(c->r[1]+0x00000048u); // 801D565C
  c->r[29]=R32(c->r[1]+0x00000044u); // 801D5660
  c->lr=c->r[0]; // 801D5664
  c->r[1]=c->r[1]+0x000000F0u; // 801D5668
  return; // 801D566C
}

// fn_801D5670
void f_801D5670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5670
  c->r[0]=c->lr; // 801D5674
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D567C
  c->r[31]=c->r[6]|c->r[6]; // 801D5680
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5684
  c->r[30]=c->r[4]|c->r[4]; // 801D5688
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D568C
  c->r[29]=c->r[3]|c->r[3]; // 801D5690
  W32(c->r[3]+0x000000B0u,c->r[5]); // 801D5694
  c->r[3]=c->r[3]+0x0000001Cu; // 801D5698
  c->lr=0x801D56A0u; f_801D79C0(c); // 801D569C
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D56A0
  c->r[3]=c->r[29]|c->r[29]; // 801D56A4
  c->lr=0x801D56ACu; f_801D6440(c); // 801D56A8
  c->r[0]=0u+0x00000000u; // 801D56AC
  W32(c->r[29]+0x00000088u,c->r[0]); // 801D56B0
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801D56B4
  c->r[4]=c->r[30]|c->r[30]; // 801D56B8
  c->r[5]=c->r[31]|c->r[31]; // 801D56BC
  c->lr=0x801D56C4u; f_801EC430(c); // 801D56C0
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801D56C4
  c->lr=0x801D56CCu; f_801EC660(c); // 801D56C8
  c->r[0]=0u+0x00000001u; // 801D56CC
  W8(c->r[29]+0x00000036u,c->r[0]); // 801D56D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D56D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D56D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D56DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D56E0
  c->lr=c->r[0]; // 801D56E4
  c->r[1]=c->r[1]+0x00000020u; // 801D56E8
  return; // 801D56EC
}

// fn_801D56F0
void f_801D56F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D56F0
  c->r[0]=c->lr; // 801D56F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D56F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D56FC
  c->r[31]=c->r[3]|c->r[3]; // 801D5700
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D5704
  cmps(c,0,(int32_t)c->r[0],4); // 801D5708
  if (crb(c,2)) { goto L_801D573C; } // 801D570C
  c->r[4]=R32(c->r[3]+0x000000D0u); // 801D5710
  cmps(c,0,(int32_t)c->r[4],0); // 801D5714
  if (crb(c,2)) { goto L_801D5734; } // 801D5718
  c->r[0]=R8(c->r[3]+0x00000039u); // 801D571C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5720
  if (!crb(c,2)) { goto L_801D5734; } // 801D5724
  c->r[3]=c->r[4]|c->r[4]; // 801D5728
  c->r[4]=0u+0x00000001u; // 801D572C
  c->lr=0x801D5734u; f_801ECD60(c); // 801D5730
L_801D5734:;
  c->r[0]=0u+0x00000004u; // 801D5734
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D5738
L_801D573C:;
  c->r[0]=0u+0x00000000u; // 801D573C
  W8(c->r[31]+0x00000035u,c->r[0]); // 801D5740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5744
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5748
  c->lr=c->r[0]; // 801D574C
  c->r[1]=c->r[1]+0x00000010u; // 801D5750
  return; // 801D5754
}

// fn_801D5760
void f_801D5760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5760
  c->r[0]=c->lr; // 801D5764
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D576C
  c->r[31]=c->r[3]|c->r[3]; // 801D5770
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801D5774
  cmps(c,0,(int32_t)c->r[0],0); // 801D5778
  if (!crb(c,2)) { goto L_801D57C0; } // 801D577C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D5780
  cmps(c,0,(int32_t)c->r[0],4); // 801D5784
  if (crb(c,2)) { goto L_801D57B8; } // 801D5788
  c->r[4]=R32(c->r[3]+0x000000D0u); // 801D578C
  cmps(c,0,(int32_t)c->r[4],0); // 801D5790
  if (crb(c,2)) { goto L_801D57B0; } // 801D5794
  c->r[0]=R8(c->r[3]+0x00000039u); // 801D5798
  cmps(c,0,(int32_t)c->r[0],0); // 801D579C
  if (!crb(c,2)) { goto L_801D57B0; } // 801D57A0
  c->r[3]=c->r[4]|c->r[4]; // 801D57A4
  c->r[4]=0u+0x00000001u; // 801D57A8
  c->lr=0x801D57B0u; f_801ECD60(c); // 801D57AC
L_801D57B0:;
  c->r[0]=0u+0x00000004u; // 801D57B0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D57B4
L_801D57B8:;
  c->r[0]=0u+0x00000000u; // 801D57B8
  W8(c->r[31]+0x00000035u,c->r[0]); // 801D57BC
L_801D57C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D57C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D57C4
  c->lr=c->r[0]; // 801D57C8
  c->r[1]=c->r[1]+0x00000010u; // 801D57CC
  return; // 801D57D0
}

// fn_801D57E0
void f_801D57E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D57E0
  c->r[0]=c->lr; // 801D57E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D57E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D57EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D57F0
  c->r[30]=c->r[3]|c->r[3]; // 801D57F4
  c->r[0]=R32(c->r[3]+0x000000D0u); // 801D57F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D57FC
  if (crb(c,2)) { goto L_801D5910; } // 801D5800
  c->r[3]=c->r[0]|c->r[0]; // 801D5804
  c->lr=0x801D580Cu; f_801EC680(c); // 801D5808
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D580C
  c->lr=0x801D5814u; f_801EC360(c); // 801D5810
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801D5814
  c->r[0]=0u+0x00000000u; // 801D5818
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801D581C
  cmps(c,0,(int32_t)c->r[12],0); // 801D5820
  W8(c->r[30]+0x00000035u,c->r[0]); // 801D5824
  W8(c->r[30]+0x00000036u,c->r[0]); // 801D5828
  if (crb(c,2)) { goto L_801D5844; } // 801D582C
  c->r[3]=c->r[30]|c->r[30]; // 801D5830
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801D5834
  c->r[4]=0u+0x00000000u; // 801D5838
  c->ctr=c->r[12]; // 801D583C
  if (true) { c->lr=0x801D5844u; dispatch(c,c->ctr); } // 801D5840
L_801D5844:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D5844
  cmps(c,0,(int32_t)c->r[3],0); // 801D5848
  if (crb(c,2)) { goto L_801D5864; } // 801D584C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5850
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801D5854
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D5858
  c->ctr=c->r[12]; // 801D585C
  if (true) { c->lr=0x801D5864u; dispatch(c,c->ctr); } // 801D5860
L_801D5864:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 801D5864
  cmps(c,0,(int32_t)c->r[0],0); // 801D5868
  if (crb(c,2)) { goto L_801D5910; } // 801D586C
  c->r[7]=0u+0x00000000u; // 801D5870
  W8(c->r[30]+0x00000037u,c->r[7]); // 801D5874
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D5878
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D587C
  if (!crb(c,2)) { goto L_801D58C4; } // 801D5880
  c->r[6]=0u+0x80380000u; // 801D5884
  c->r[4]=0u+0x801D0000u; // 801D5888
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D588C
  c->r[5]=0u+0x80380000u; // 801D5890
  c->r[0]=c->r[3]+0x00000008u; // 801D5894
  W32(c->r[6]+0xFFFFAB78u,c->r[7]); // 801D5898
  c->r[4]=c->r[4]+0x00004C80u; // 801D589C
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D58A0
  W32(c->r[3]+0x00000004u,c->r[7]); // 801D58A4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D58A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D58AC
  W8(c->r[3]+0x00000010u,c->r[7]); // 801D58B0
  W32(c->r[3]+0x00000014u,c->r[7]); // 801D58B4
  c->lr=0x801D58BCu; f_80216C54(c); // 801D58B8
  c->r[0]=0u+0x00000001u; // 801D58BC
  W8(c->r[13]+0xFFFFAE40u,c->r[0]); // 801D58C0
L_801D58C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D58C4
  c->r[31]=0u+0x80380000u; // 801D58C8
  c->r[31]=c->r[31]+0xFFFFAB78u; // 801D58CC
  if (!crb(c,2)) { goto L_801D58F0; } // 801D58D0
  c->r[3]=0u+0x802D0000u; // 801D58D4
  c->r[5]=0u+0x802D0000u; // 801D58D8
  c->r[3]=c->r[3]+0xFFFFDB10u; // 801D58DC
  c->r[4]=0u+0x00000233u; // 801D58E0
  c->r[5]=c->r[5]+0xFFFFDAECu; // 801D58E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D58E8
  c->lr=0x801D58F0u; f_801F9770(c); // 801D58EC
L_801D58F0:;
  c->r[3]=c->r[31]+0x00000004u; // 801D58F0
  c->r[4]=c->r[30]+0x000000D8u; // 801D58F4
  c->lr=0x801D58FCu; f_801FA230(c); // 801D58F8
  cmps(c,0,(int32_t)c->r[30],0); // 801D58FC
  if (crb(c,2)) { goto L_801D5910; } // 801D5900
  c->r[3]=c->r[31]|c->r[31]; // 801D5904
  c->r[4]=c->r[30]|c->r[30]; // 801D5908
  c->lr=0x801D5910u; f_801D7940(c); // 801D590C
L_801D5910:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5910
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5914
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5918
  c->lr=c->r[0]; // 801D591C
  c->r[1]=c->r[1]+0x00000010u; // 801D5920
  return; // 801D5924
}

// fn_801D5930
void f_801D5930(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801D5930
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 801D5934
  c->r[0]=c->r[0]+c->r[4]; // 801D5938
  W32(c->r[3]+0x00000088u,c->r[0]); // 801D593C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801D5940
  if (!crb(c,1)) return; // 801D5944
  W32(c->r[3]+0x00000088u,c->r[5]); // 801D5948
  return; // 801D594C
}

// SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
void f_801D5950(Ctx* __restrict c) {
  trace_call(0x801D5950u);
  c->r[0]=0u+0x00000000u; // 801D5950
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 801D5954
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 801D5958
  W8(c->r[3]+0x00000038u,c->r[5]); // 801D595C
  W32(c->r[3]+0x00000088u,c->r[0]); // 801D5960
  return; // 801D5964
}

// fn_801D5970
void f_801D5970(Ctx* __restrict c) {
  W8(c->r[3]+0x0000003Bu,c->r[4]); // 801D5970
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801D5974
  return; // 801D5978
}

// fn_801D5980
void f_801D5980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5980
  c->r[0]=c->lr; // 801D5984
  cmps(c,0,(int32_t)c->r[5],0); // 801D5988
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D598C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5990
  c->r[31]=c->r[4]|c->r[4]; // 801D5994
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5998
  c->r[30]=c->r[5]|c->r[5]; // 801D599C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D59A0
  c->r[29]=c->r[3]|c->r[3]; // 801D59A4
  if (!crb(c,2)) { goto L_801D59C8; } // 801D59A8
  c->r[3]=0u+0x802D0000u; // 801D59AC
  c->r[5]=0u+0x802D0000u; // 801D59B0
  c->r[3]=c->r[3]+0xFFFFDA00u; // 801D59B4
  c->r[4]=0u+0x00000217u; // 801D59B8
  c->r[5]=c->r[5]+0xFFFFDA68u; // 801D59BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D59C0
  c->lr=0x801D59C8u; f_801F9770(c); // 801D59C4
L_801D59C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D59C8
  if (crb(c,2)) { goto L_801D59EC; } // 801D59CC
  cmps(c,0,(int32_t)c->r[31],1); // 801D59D0
  if (crb(c,2)) { goto L_801D59FC; } // 801D59D4
  cmps(c,0,(int32_t)c->r[31],2); // 801D59D8
  if (crb(c,2)) { goto L_801D5A0C; } // 801D59DC
  cmps(c,0,(int32_t)c->r[31],3); // 801D59E0
  if (crb(c,2)) { goto L_801D5A14; } // 801D59E4
  goto L_801D5A18; // 801D59E8
L_801D59EC:;
  c->r[3]=c->r[29]|c->r[29]; // 801D59EC
  c->r[31]=0u+0x00000002u; // 801D59F0
  c->lr=0x801D59F8u; f_801EC360(c); // 801D59F4
  goto L_801D5A18; // 801D59F8
L_801D59FC:;
  c->r[3]=c->r[29]|c->r[29]; // 801D59FC
  c->r[31]=0u+0x00000003u; // 801D5A00
  c->lr=0x801D5A08u; f_801EC360(c); // 801D5A04
  goto L_801D5A18; // 801D5A08
L_801D5A0C:;
  c->r[31]=0u+0x00000001u; // 801D5A0C
  goto L_801D5A18; // 801D5A10
L_801D5A14:;
  c->r[31]=0u+0x00000001u; // 801D5A14
L_801D5A18:;
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801D5A18
  cmps(c,0,(int32_t)c->r[12],0); // 801D5A1C
  if (crb(c,2)) { goto L_801D5A38; } // 801D5A20
  c->r[3]=c->r[30]|c->r[30]; // 801D5A24
  c->r[4]=c->r[31]|c->r[31]; // 801D5A28
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801D5A2C
  c->ctr=c->r[12]; // 801D5A30
  if (true) { c->lr=0x801D5A38u; dispatch(c,c->ctr); } // 801D5A34
L_801D5A38:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D5A38
  cmps(c,0,(int32_t)c->r[3],0); // 801D5A3C
  if (crb(c,2)) { goto L_801D5A58; } // 801D5A40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5A44
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801D5A48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D5A4C
  c->ctr=c->r[12]; // 801D5A50
  if (true) { c->lr=0x801D5A58u; dispatch(c,c->ctr); } // 801D5A54
L_801D5A58:;
  c->r[7]=0u+0x00000000u; // 801D5A58
  W32(c->r[30]+0x000000D0u,c->r[7]); // 801D5A5C
  W8(c->r[30]+0x00000035u,c->r[7]); // 801D5A60
  W8(c->r[30]+0x00000036u,c->r[7]); // 801D5A64
  W8(c->r[30]+0x00000037u,c->r[7]); // 801D5A68
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D5A6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D5A70
  if (!crb(c,2)) { goto L_801D5AB8; } // 801D5A74
  c->r[6]=0u+0x80380000u; // 801D5A78
  c->r[4]=0u+0x801D0000u; // 801D5A7C
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D5A80
  c->r[5]=0u+0x80380000u; // 801D5A84
  c->r[0]=c->r[3]+0x00000008u; // 801D5A88
  W32(c->r[6]+0xFFFFAB78u,c->r[7]); // 801D5A8C
  c->r[4]=c->r[4]+0x00004C80u; // 801D5A90
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D5A94
  W32(c->r[3]+0x00000004u,c->r[7]); // 801D5A98
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D5A9C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D5AA0
  W8(c->r[3]+0x00000010u,c->r[7]); // 801D5AA4
  W32(c->r[3]+0x00000014u,c->r[7]); // 801D5AA8
  c->lr=0x801D5AB0u; f_80216C54(c); // 801D5AAC
  c->r[0]=0u+0x00000001u; // 801D5AB0
  W8(c->r[13]+0xFFFFAE40u,c->r[0]); // 801D5AB4
L_801D5AB8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5AB8
  c->r[31]=0u+0x80380000u; // 801D5ABC
  c->r[31]=c->r[31]+0xFFFFAB78u; // 801D5AC0
  if (!crb(c,2)) { goto L_801D5AE4; } // 801D5AC4
  c->r[3]=0u+0x802D0000u; // 801D5AC8
  c->r[5]=0u+0x802D0000u; // 801D5ACC
  c->r[3]=c->r[3]+0xFFFFDB10u; // 801D5AD0
  c->r[4]=0u+0x00000233u; // 801D5AD4
  c->r[5]=c->r[5]+0xFFFFDAECu; // 801D5AD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5ADC
  c->lr=0x801D5AE4u; f_801F9770(c); // 801D5AE0
L_801D5AE4:;
  c->r[3]=c->r[31]+0x00000004u; // 801D5AE4
  c->r[4]=c->r[30]+0x000000D8u; // 801D5AE8
  c->lr=0x801D5AF0u; f_801FA230(c); // 801D5AEC
  cmps(c,0,(int32_t)c->r[30],0); // 801D5AF0
  if (crb(c,2)) { goto L_801D5B04; } // 801D5AF4
  c->r[3]=c->r[31]|c->r[31]; // 801D5AF8
  c->r[4]=c->r[30]|c->r[30]; // 801D5AFC
  c->lr=0x801D5B04u; f_801D7940(c); // 801D5B00
L_801D5B04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5B04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5B08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5B0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5B10
  c->lr=c->r[0]; // 801D5B14
  c->r[1]=c->r[1]+0x00000020u; // 801D5B18
  return; // 801D5B1C
}

// fn_801D5B20
void f_801D5B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5B20
  c->r[0]=c->lr; // 801D5B24
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5B28
  c->r[11]=c->r[1]+0x00000040u; // 801D5B2C
  c->lr=0x801D5B34u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5B30
  cmpu(c,0,c->r[5],0x000000FFu); // 801D5B34
  c->r[25]=0u+0x802D0000u; // 801D5B38
  c->r[27]=c->r[3]|c->r[3]; // 801D5B3C
  c->r[28]=c->r[4]|c->r[4]; // 801D5B40
  c->r[29]=c->r[5]|c->r[5]; // 801D5B44
  c->r[30]=c->r[6]|c->r[6]; // 801D5B48
  c->r[31]=c->r[7]|c->r[7]; // 801D5B4C
  c->r[25]=c->r[25]+0xFFFFDA00u; // 801D5B50
  c->r[0]=0u+0x00000000u; // 801D5B54
  if (crb(c,1)) { goto L_801D5B60; } // 801D5B58
  c->r[0]=0u+0x00000001u; // 801D5B5C
L_801D5B60:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D5B60
  if (!crb(c,2)) { goto L_801D5B88; } // 801D5B64
  c->r[6]=c->r[29]|c->r[29]; // 801D5B68
  c->r[3]=c->r[25]+0x00000000u; // 801D5B6C
  c->r[5]=c->r[25]+0x0000008Cu; // 801D5B70
  c->r[4]=0u+0x00000252u; // 801D5B74
  c->r[7]=0u+0x00000000u; // 801D5B78
  c->r[8]=0u+0x000000FFu; // 801D5B7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5B80
  c->lr=0x801D5B88u; f_801F9770(c); // 801D5B84
L_801D5B88:;
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D5B88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D5B8C
  if (!crb(c,2)) { goto L_801D5BD8; } // 801D5B90
  c->r[6]=0u+0x80380000u; // 801D5B94
  c->r[0]=0u+0x00000000u; // 801D5B98
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D5B9C
  c->r[4]=0u+0x801D0000u; // 801D5BA0
  c->r[7]=c->r[3]+0x00000008u; // 801D5BA4
  c->r[5]=0u+0x80380000u; // 801D5BA8
  W32(c->r[6]+0xFFFFAB78u,c->r[0]); // 801D5BAC
  c->r[4]=c->r[4]+0x00004C80u; // 801D5BB0
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D5BB4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D5BB8
  W32(c->r[3]+0x00000008u,c->r[7]); // 801D5BBC
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801D5BC0
  W8(c->r[3]+0x00000010u,c->r[0]); // 801D5BC4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D5BC8
  c->lr=0x801D5BD0u; f_80216C54(c); // 801D5BCC
  c->r[0]=0u+0x00000001u; // 801D5BD0
  W8(c->r[13]+0xFFFFAE40u,c->r[0]); // 801D5BD4
L_801D5BD8:;
  c->r[24]=0u+0x80380000u; // 801D5BD8
  c->r[24]=c->r[24]+0xFFFFAB78u; // 801D5BDC
  c->r[3]=c->r[24]|c->r[24]; // 801D5BE0
  c->lr=0x801D5BE8u; f_801D78E0(c); // 801D5BE4
  cmps(c,0,(int32_t)c->r[3],0); // 801D5BE8
  c->r[23]=c->r[3]|c->r[3]; // 801D5BEC
  if (!crb(c,2)) { goto L_801D5BFC; } // 801D5BF0
  c->r[23]=0u+0x00000000u; // 801D5BF4
  goto L_801D5C44; // 801D5BF8
L_801D5BFC:;
  if (crb(c,2)) { goto L_801D5C44; } // 801D5BFC
  c->lr=0x801D5C04u; f_801D63B0(c); // 801D5C00
  c->r[3]=c->r[23]+0x0000001Cu; // 801D5C04
  c->lr=0x801D5C0Cu; f_801D7990(c); // 801D5C08
  c->r[0]=0u+0x00000000u; // 801D5C0C
  W32(c->r[23]+0x0000002Cu,c->r[0]); // 801D5C10
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5C14
  {uint32_t ea=c->r[23]+0x00000030u; WF32(ea,c->f[0]);} // 801D5C18
  W8(c->r[23]+0x00000035u,c->r[0]); // 801D5C1C
  W8(c->r[23]+0x00000036u,c->r[0]); // 801D5C20
  W8(c->r[23]+0x00000037u,c->r[0]); // 801D5C24
  W8(c->r[23]+0x000000A0u,c->r[0]); // 801D5C28
  W8(c->r[23]+0x000000A1u,c->r[0]); // 801D5C2C
  W16(c->r[23]+0x000000A2u,c->r[0]); // 801D5C30
  W16(c->r[23]+0x000000A4u,c->r[0]); // 801D5C34
  W32(c->r[23]+0x000000D0u,c->r[0]); // 801D5C38
  W32(c->r[23]+0x000000D8u,c->r[0]); // 801D5C3C
  W32(c->r[23]+0x000000DCu,c->r[0]); // 801D5C40
L_801D5C44:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D5C44
  c->r[26]=c->r[24]+0x00000008u; // 801D5C48
  if (!crb(c,2)) { goto L_801D5C6C; } // 801D5C4C
  c->r[3]=0u+0x802D0000u; // 801D5C50
  c->r[5]=0u+0x802D0000u; // 801D5C54
  c->r[3]=c->r[3]+0xFFFFDB10u; // 801D5C58
  c->r[4]=0u+0x00000233u; // 801D5C5C
  c->r[5]=c->r[5]+0xFFFFDAECu; // 801D5C60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5C64
  c->lr=0x801D5C6Cu; f_801F9770(c); // 801D5C68
L_801D5C6C:;
  c->r[22]=c->r[23]+0x000000D8u; // 801D5C6C
  W32(c->r[1]+0x00000008u,c->r[26]); // 801D5C70
  c->r[5]=c->r[22]|c->r[22]; // 801D5C74
  c->r[3]=c->r[24]+0x00000004u; // 801D5C78
  c->r[4]=c->r[1]+0x00000008u; // 801D5C7C
  c->lr=0x801D5C84u; f_801FA130(c); // 801D5C80
  cmps(c,0,(int32_t)c->r[23],0); // 801D5C84
  if (!crb(c,2)) { goto L_801D5CAC; } // 801D5C88
  if (!crb(c,2)) { goto L_801D5CA4; } // 801D5C8C
  c->r[3]=c->r[25]+0x00000000u; // 801D5C90
  c->r[5]=c->r[25]+0x000000D0u; // 801D5C94
  c->r[4]=0u+0x00000257u; // 801D5C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5C9C
  c->lr=0x801D5CA4u; f_801F9810(c); // 801D5CA0
L_801D5CA4:;
  c->r[3]=0u+0x00000000u; // 801D5CA4
  goto L_801D5D94; // 801D5CA8
L_801D5CAC:;
  c->r[26]=0u+0x00000001u; // 801D5CAC
  W8(c->r[23]+0x00000037u,c->r[26]); // 801D5CB0
  c->lr=0x801D5CB8u; f_801EE4D0(c); // 801D5CB4
  c->r[7]=0u+0x801D0000u; // 801D5CB8
  c->r[4]=c->r[27]|c->r[27]; // 801D5CBC
  c->r[5]=c->r[28]|c->r[28]; // 801D5CC0
  c->r[6]=c->r[29]|c->r[29]; // 801D5CC4
  c->r[8]=c->r[23]|c->r[23]; // 801D5CC8
  c->r[7]=c->r[7]+0x00005980u; // 801D5CCC
  c->lr=0x801D5CD4u; f_801EE6D0(c); // 801D5CD0
  cmps(c,0,(int32_t)c->r[3],0); // 801D5CD4
  if (!crb(c,2)) { goto L_801D5D7C; } // 801D5CD8
  c->r[0]=R8(c->r[13]+0xFFFFAE40u); // 801D5CDC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D5CE0
  if (!crb(c,2)) { goto L_801D5D28; } // 801D5CE4
  c->r[6]=0u+0x80380000u; // 801D5CE8
  c->r[0]=0u+0x00000000u; // 801D5CEC
  c->r[3]=c->r[6]+0xFFFFAB78u; // 801D5CF0
  c->r[4]=0u+0x801D0000u; // 801D5CF4
  c->r[7]=c->r[3]+0x00000008u; // 801D5CF8
  c->r[5]=0u+0x80380000u; // 801D5CFC
  W32(c->r[6]+0xFFFFAB78u,c->r[0]); // 801D5D00
  c->r[4]=c->r[4]+0x00004C80u; // 801D5D04
  c->r[5]=c->r[5]+0xFFFFAB68u; // 801D5D08
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D5D0C
  W32(c->r[3]+0x00000008u,c->r[7]); // 801D5D10
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801D5D14
  W8(c->r[3]+0x00000010u,c->r[0]); // 801D5D18
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D5D1C
  c->lr=0x801D5D24u; f_80216C54(c); // 801D5D20
  W8(c->r[13]+0xFFFFAE40u,c->r[26]); // 801D5D24
L_801D5D28:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D5D28
  c->r[24]=0u+0x80380000u; // 801D5D2C
  c->r[24]=c->r[24]+0xFFFFAB78u; // 801D5D30
  if (!crb(c,2)) { goto L_801D5D54; } // 801D5D34
  c->r[3]=0u+0x802D0000u; // 801D5D38
  c->r[5]=0u+0x802D0000u; // 801D5D3C
  c->r[3]=c->r[3]+0xFFFFDB10u; // 801D5D40
  c->r[4]=0u+0x00000233u; // 801D5D44
  c->r[5]=c->r[5]+0xFFFFDAECu; // 801D5D48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5D4C
  c->lr=0x801D5D54u; f_801F9770(c); // 801D5D50
L_801D5D54:;
  c->r[4]=c->r[22]|c->r[22]; // 801D5D54
  c->r[3]=c->r[24]+0x00000004u; // 801D5D58
  c->lr=0x801D5D60u; f_801FA230(c); // 801D5D5C
  cmps(c,0,(int32_t)c->r[23],0); // 801D5D60
  if (crb(c,2)) { goto L_801D5D74; } // 801D5D64
  c->r[3]=c->r[24]|c->r[24]; // 801D5D68
  c->r[4]=c->r[23]|c->r[23]; // 801D5D6C
  c->lr=0x801D5D74u; f_801D7940(c); // 801D5D70
L_801D5D74:;
  c->r[3]=0u+0x00000000u; // 801D5D74
  goto L_801D5D94; // 801D5D78
L_801D5D7C:;
  W32(c->r[23]+0x000000D0u,c->r[3]); // 801D5D7C
  c->r[3]=c->r[23]|c->r[23]; // 801D5D80
  c->r[4]=c->r[30]|c->r[30]; // 801D5D84
  c->r[5]=c->r[31]|c->r[31]; // 801D5D88
  c->lr=0x801D5D90u; f_801D4E10(c); // 801D5D8C
  c->r[3]=c->r[23]|c->r[23]; // 801D5D90
L_801D5D94:;
  c->r[11]=c->r[1]+0x00000040u; // 801D5D94
  c->lr=0x801D5D9Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5D98
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5D9C
  c->lr=c->r[0]; // 801D5DA0
  c->r[1]=c->r[1]+0x00000040u; // 801D5DA4
  return; // 801D5DA8
}

// FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
void f_801D5DB0(Ctx* __restrict c) {
  trace_call(0x801D5DB0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D5DB0
  if (crb(c,2)) return; // 801D5DB4
  c->r[0]=0u+0x00000000u; // 801D5DB8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D5DBC
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801D5DC0
  return; // 801D5DC4
}

// fn_801D5DD0
void f_801D5DD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5DD0
  c->r[0]=c->lr; // 801D5DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5DDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5DE0
  c->lr=0x801D5DE8u; f_800CBAA0(c); // 801D5DE4
  c->r[0]=R8(c->r[13]+0xFFFFAE48u); // 801D5DE8
  c->r[31]=c->r[3]|c->r[3]; // 801D5DEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D5DF0
  if (!crb(c,2)) { goto L_801D5E30; } // 801D5DF4
  c->r[3]=0u+0x80380000u; // 801D5DF8
  c->r[4]=0u+0x801D0000u; // 801D5DFC
  c->r[3]=c->r[3]+0xFFFFABA4u; // 801D5E00
  c->r[0]=0u+0x00000000u; // 801D5E04
  c->r[6]=c->r[3]+0x00000004u; // 801D5E08
  c->r[5]=0u+0x80380000u; // 801D5E0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D5E10
  c->r[4]=c->r[4]+0x00005E60u; // 801D5E14
  c->r[5]=c->r[5]+0xFFFFAB98u; // 801D5E18
  W32(c->r[3]+0x00000004u,c->r[6]); // 801D5E1C
  W32(c->r[3]+0x00000008u,c->r[6]); // 801D5E20
  c->lr=0x801D5E28u; f_80216C54(c); // 801D5E24
  c->r[0]=0u+0x00000001u; // 801D5E28
  W8(c->r[13]+0xFFFFAE48u,c->r[0]); // 801D5E2C
L_801D5E30:;
  c->r[30]=0u+0x80380000u; // 801D5E30
  c->r[3]=c->r[31]|c->r[31]; // 801D5E34
  c->r[30]=c->r[30]+0xFFFFABA4u; // 801D5E38
  c->lr=0x801D5E40u; f_800CBAE0(c); // 801D5E3C
  c->r[3]=c->r[30]|c->r[30]; // 801D5E40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5E44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5E4C
  c->lr=c->r[0]; // 801D5E50
  c->r[1]=c->r[1]+0x00000010u; // 801D5E54
  return; // 801D5E58
}

// fn_801D5E60
void f_801D5E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5E60
  c->r[0]=c->lr; // 801D5E64
  cmps(c,0,(int32_t)c->r[3],0); // 801D5E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5E6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5E70
  c->r[31]=c->r[4]|c->r[4]; // 801D5E74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5E78
  c->r[30]=c->r[3]|c->r[3]; // 801D5E7C
  if (crb(c,2)) { goto L_801D5EA0; } // 801D5E80
  if (crb(c,2)) { goto L_801D5E90; } // 801D5E84
  c->r[4]=0u+0x00000000u; // 801D5E88
  c->lr=0x801D5E90u; f_801F9DB0(c); // 801D5E8C
L_801D5E90:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D5E90
  if (!crb(c,1)) { goto L_801D5EA0; } // 801D5E94
  c->r[3]=c->r[30]|c->r[30]; // 801D5E98
  c->lr=0x801D5EA0u; f_800B9AD0(c); // 801D5E9C
L_801D5EA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801D5EA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5EA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5EAC
  c->lr=c->r[0]; // 801D5EB0
  c->r[1]=c->r[1]+0x00000010u; // 801D5EB4
  return; // 801D5EB8
}

// fn_801D5EC0
void f_801D5EC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5EC0
  c->r[0]=c->lr; // 801D5EC4
  cmps(c,0,(int32_t)c->r[4],0); // 801D5EC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5ECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5ED0
  c->r[31]=c->r[3]+0x00000004u; // 801D5ED4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5ED8
  c->r[30]=c->r[4]|c->r[4]; // 801D5EDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5EE0
  c->r[29]=c->r[3]|c->r[3]; // 801D5EE4
  if (!crb(c,2)) { goto L_801D5F08; } // 801D5EE8
  c->r[3]=0u+0x802D0000u; // 801D5EEC
  c->r[5]=0u+0x802D0000u; // 801D5EF0
  c->r[3]=c->r[3]+0xFFFFDBA4u; // 801D5EF4
  c->r[4]=0u+0x00000233u; // 801D5EF8
  c->r[5]=c->r[5]+0xFFFFDB80u; // 801D5EFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5F00
  c->lr=0x801D5F08u; f_801F9770(c); // 801D5F04
L_801D5F08:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D5F08
  c->r[3]=c->r[29]|c->r[29]; // 801D5F0C
  c->r[5]=c->r[30]|c->r[30]; // 801D5F10
  c->r[4]=c->r[1]+0x00000008u; // 801D5F14
  c->lr=0x801D5F1Cu; f_801FA130(c); // 801D5F18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5F1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5F20
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5F24
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5F28
  c->lr=c->r[0]; // 801D5F2C
  c->r[1]=c->r[1]+0x00000020u; // 801D5F30
  return; // 801D5F34
}

// fn_801D5F40
void f_801D5F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5F40
  c->r[0]=c->lr; // 801D5F44
  cmps(c,0,(int32_t)c->r[4],0); // 801D5F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5F50
  c->r[31]=c->r[4]|c->r[4]; // 801D5F54
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5F58
  c->r[30]=c->r[3]|c->r[3]; // 801D5F5C
  if (!crb(c,2)) { goto L_801D5F80; } // 801D5F60
  c->r[3]=0u+0x802D0000u; // 801D5F64
  c->r[5]=0u+0x802D0000u; // 801D5F68
  c->r[3]=c->r[3]+0xFFFFDBA4u; // 801D5F6C
  c->r[4]=0u+0x00000233u; // 801D5F70
  c->r[5]=c->r[5]+0xFFFFDB80u; // 801D5F74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5F78
  c->lr=0x801D5F80u; f_801F9770(c); // 801D5F7C
L_801D5F80:;
  c->r[3]=c->r[30]|c->r[30]; // 801D5F80
  c->r[4]=c->r[31]|c->r[31]; // 801D5F84
  c->lr=0x801D5F8Cu; f_801FA230(c); // 801D5F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5F8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5F90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5F94
  c->lr=c->r[0]; // 801D5F98
  c->r[1]=c->r[1]+0x00000010u; // 801D5F9C
  return; // 801D5FA0
}

// fn_801D5FB0
void f_801D5FB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5FB0
  c->r[0]=c->lr; // 801D5FB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5FB8
  c->r[11]=c->r[1]+0x00000040u; // 801D5FBC
  c->lr=0x801D5FC4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5FC0
  c->r[31]=c->r[4]|c->r[4]; // 801D5FC4
  c->r[30]=c->r[4]+c->r[5]; // 801D5FC8
  c->lr=0x801D5FD0u; f_801E5840(c); // 801D5FCC
  c->r[3]=c->r[3]+0x00000354u; // 801D5FD0
  c->lr=0x801D5FD8u; f_800CCD50(c); // 801D5FD4
  c->lr=0x801D5FDCu; f_800CBAA0(c); // 801D5FD8
  c->r[0]=R8(c->r[13]+0xFFFFAE48u); // 801D5FDC
  c->r[29]=c->r[3]|c->r[3]; // 801D5FE0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D5FE4
  if (!crb(c,2)) { goto L_801D6024; } // 801D5FE8
  c->r[3]=0u+0x80380000u; // 801D5FEC
  c->r[4]=0u+0x801D0000u; // 801D5FF0
  c->r[3]=c->r[3]+0xFFFFABA4u; // 801D5FF4
  c->r[0]=0u+0x00000000u; // 801D5FF8
  c->r[6]=c->r[3]+0x00000004u; // 801D5FFC
  c->r[5]=0u+0x80380000u; // 801D6000
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D6004
  c->r[4]=c->r[4]+0x00005E60u; // 801D6008
  c->r[5]=c->r[5]+0xFFFFAB98u; // 801D600C
  W32(c->r[3]+0x00000004u,c->r[6]); // 801D6010
  W32(c->r[3]+0x00000008u,c->r[6]); // 801D6014
  c->lr=0x801D601Cu; f_80216C54(c); // 801D6018
  c->r[0]=0u+0x00000001u; // 801D601C
  W8(c->r[13]+0xFFFFAE48u,c->r[0]); // 801D6020
L_801D6024:;
  c->r[4]=0u+0x80380000u; // 801D6024
  c->r[3]=c->r[29]|c->r[29]; // 801D6028
  c->r[20]=c->r[4]+0xFFFFABA4u; // 801D602C
  c->lr=0x801D6034u; f_800CBAE0(c); // 801D6030
  c->r[29]=R32(c->r[20]+0x00000004u); // 801D6034
  c->r[27]=c->r[20]+0x00000004u; // 801D6038
  c->r[23]=0u+0x00000000u; // 801D603C
  c->r[24]=0u+0x801D0000u; // 801D6040
  c->r[25]=0u+0x80380000u; // 801D6044
  c->r[26]=0u+0x00000001u; // 801D6048
  c->r[21]=0u+0x802D0000u; // 801D604C
  c->r[22]=0u+0x802D0000u; // 801D6050
  goto L_801D6094; // 801D6054
L_801D6058:;
  c->r[28]=c->r[29]|c->r[29]; cr0(c,c->r[28]); // 801D6058
  c->r[29]=R32(c->r[29]+0x00000000u); // 801D605C
  if (!crb(c,2)) { goto L_801D6078; } // 801D6060
  c->r[3]=c->r[21]+0xFFFFDB74u; // 801D6064
  c->r[5]=c->r[22]+0xFFFFDB50u; // 801D6068
  c->r[4]=0u+0x0000023Du; // 801D606C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6070
  c->lr=0x801D6078u; f_801F9770(c); // 801D6074
L_801D6078:;
  c->r[12]=R32(c->r[28]+0x00000008u); // 801D6078
  c->r[3]=c->r[28]|c->r[28]; // 801D607C
  c->r[4]=c->r[31]|c->r[31]; // 801D6080
  c->r[5]=c->r[30]|c->r[30]; // 801D6084
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D6088
  c->ctr=c->r[12]; // 801D608C
  if (true) { c->lr=0x801D6094u; dispatch(c,c->ctr); } // 801D6090
L_801D6094:;
  c->lr=0x801D6098u; f_800CBAA0(c); // 801D6094
  c->r[0]=R8(c->r[13]+0xFFFFAE48u); // 801D6098
  c->r[28]=c->r[3]|c->r[3]; // 801D609C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D60A0
  if (!crb(c,2)) { goto L_801D60CC; } // 801D60A4
  c->r[0]=c->r[20]+0x00000004u; // 801D60A8
  W32(c->r[20]+0x00000000u,c->r[23]); // 801D60AC
  c->r[3]=c->r[20]|c->r[20]; // 801D60B0
  c->r[4]=c->r[24]+0x00005E60u; // 801D60B4
  W32(c->r[20]+0x00000004u,c->r[0]); // 801D60B8
  c->r[5]=c->r[25]+0xFFFFAB98u; // 801D60BC
  W32(c->r[20]+0x00000008u,c->r[0]); // 801D60C0
  c->lr=0x801D60C8u; f_80216C54(c); // 801D60C4
  W8(c->r[13]+0xFFFFAE48u,c->r[26]); // 801D60C8
L_801D60CC:;
  c->r[3]=c->r[28]|c->r[28]; // 801D60CC
  c->lr=0x801D60D4u; f_800CBAE0(c); // 801D60D0
  cmpu(c,0,c->r[29],c->r[27]); // 801D60D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6058; } // 801D60D8
  c->lr=0x801D60E0u; f_801E5840(c); // 801D60DC
  c->r[3]=c->r[3]+0x00000354u; // 801D60E0
  c->lr=0x801D60E8u; f_800CCE30(c); // 801D60E4
  c->r[11]=c->r[1]+0x00000040u; // 801D60E8
  c->lr=0x801D60F0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D60EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D60F0
  c->lr=c->r[0]; // 801D60F4
  c->r[1]=c->r[1]+0x00000040u; // 801D60F8
  return; // 801D60FC
}

// fn_801D6100
void f_801D6100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6100
  c->r[0]=c->lr; // 801D6104
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D6108
  c->r[11]=c->r[1]+0x00000040u; // 801D610C
  c->lr=0x801D6114u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6110
  c->r[31]=c->r[4]|c->r[4]; // 801D6114
  c->r[30]=c->r[4]+c->r[5]; // 801D6118
  c->lr=0x801D6120u; f_801E5840(c); // 801D611C
  c->r[3]=c->r[3]+0x00000354u; // 801D6120
  c->lr=0x801D6128u; f_800CCD50(c); // 801D6124
  c->lr=0x801D612Cu; f_800CBAA0(c); // 801D6128
  c->r[0]=R8(c->r[13]+0xFFFFAE48u); // 801D612C
  c->r[29]=c->r[3]|c->r[3]; // 801D6130
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D6134
  if (!crb(c,2)) { goto L_801D6174; } // 801D6138
  c->r[3]=0u+0x80380000u; // 801D613C
  c->r[4]=0u+0x801D0000u; // 801D6140
  c->r[3]=c->r[3]+0xFFFFABA4u; // 801D6144
  c->r[0]=0u+0x00000000u; // 801D6148
  c->r[6]=c->r[3]+0x00000004u; // 801D614C
  c->r[5]=0u+0x80380000u; // 801D6150
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D6154
  c->r[4]=c->r[4]+0x00005E60u; // 801D6158
  c->r[5]=c->r[5]+0xFFFFAB98u; // 801D615C
  W32(c->r[3]+0x00000004u,c->r[6]); // 801D6160
  W32(c->r[3]+0x00000008u,c->r[6]); // 801D6164
  c->lr=0x801D616Cu; f_80216C54(c); // 801D6168
  c->r[0]=0u+0x00000001u; // 801D616C
  W8(c->r[13]+0xFFFFAE48u,c->r[0]); // 801D6170
L_801D6174:;
  c->r[4]=0u+0x80380000u; // 801D6174
  c->r[3]=c->r[29]|c->r[29]; // 801D6178
  c->r[20]=c->r[4]+0xFFFFABA4u; // 801D617C
  c->lr=0x801D6184u; f_800CBAE0(c); // 801D6180
  c->r[29]=R32(c->r[20]+0x00000004u); // 801D6184
  c->r[27]=c->r[20]+0x00000004u; // 801D6188
  c->r[23]=0u+0x00000000u; // 801D618C
  c->r[24]=0u+0x801D0000u; // 801D6190
  c->r[25]=0u+0x80380000u; // 801D6194
  c->r[26]=0u+0x00000001u; // 801D6198
  c->r[21]=0u+0x802D0000u; // 801D619C
  c->r[22]=0u+0x802D0000u; // 801D61A0
  goto L_801D61E4; // 801D61A4
L_801D61A8:;
  c->r[28]=c->r[29]|c->r[29]; cr0(c,c->r[28]); // 801D61A8
  c->r[29]=R32(c->r[29]+0x00000000u); // 801D61AC
  if (!crb(c,2)) { goto L_801D61C8; } // 801D61B0
  c->r[3]=c->r[21]+0xFFFFDB74u; // 801D61B4
  c->r[5]=c->r[22]+0xFFFFDB50u; // 801D61B8
  c->r[4]=0u+0x0000023Du; // 801D61BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D61C0
  c->lr=0x801D61C8u; f_801F9770(c); // 801D61C4
L_801D61C8:;
  c->r[12]=R32(c->r[28]+0x00000008u); // 801D61C8
  c->r[3]=c->r[28]|c->r[28]; // 801D61CC
  c->r[4]=c->r[31]|c->r[31]; // 801D61D0
  c->r[5]=c->r[30]|c->r[30]; // 801D61D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D61D8
  c->ctr=c->r[12]; // 801D61DC
  if (true) { c->lr=0x801D61E4u; dispatch(c,c->ctr); } // 801D61E0
L_801D61E4:;
  c->lr=0x801D61E8u; f_800CBAA0(c); // 801D61E4
  c->r[0]=R8(c->r[13]+0xFFFFAE48u); // 801D61E8
  c->r[28]=c->r[3]|c->r[3]; // 801D61EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D61F0
  if (!crb(c,2)) { goto L_801D621C; } // 801D61F4
  c->r[0]=c->r[20]+0x00000004u; // 801D61F8
  W32(c->r[20]+0x00000000u,c->r[23]); // 801D61FC
  c->r[3]=c->r[20]|c->r[20]; // 801D6200
  c->r[4]=c->r[24]+0x00005E60u; // 801D6204
  W32(c->r[20]+0x00000004u,c->r[0]); // 801D6208
  c->r[5]=c->r[25]+0xFFFFAB98u; // 801D620C
  W32(c->r[20]+0x00000008u,c->r[0]); // 801D6210
  c->lr=0x801D6218u; f_80216C54(c); // 801D6214
  W8(c->r[13]+0xFFFFAE48u,c->r[26]); // 801D6218
L_801D621C:;
  c->r[3]=c->r[28]|c->r[28]; // 801D621C
  c->lr=0x801D6224u; f_800CBAE0(c); // 801D6220
  cmpu(c,0,c->r[29],c->r[27]); // 801D6224
  if (!crb(c,2)) { IRQCHK(c); goto L_801D61A8; } // 801D6228
  c->lr=0x801D6230u; f_801E5840(c); // 801D622C
  c->r[3]=c->r[3]+0x00000354u; // 801D6230
  c->lr=0x801D6238u; f_800CCE30(c); // 801D6234
  c->r[11]=c->r[1]+0x00000040u; // 801D6238
  c->lr=0x801D6240u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D623C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D6240
  c->lr=c->r[0]; // 801D6244
  c->r[1]=c->r[1]+0x00000040u; // 801D6248
  return; // 801D624C
}

// fn_801D6250
void f_801D6250(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 801D6250
  c->r[4]=0u+0x00000000u; // 801D6254
  if (crb(c,2)) { goto L_801D6288; } // 801D6258
  cmps(c,0,(int32_t)c->r[3],1); // 801D625C
  if (crb(c,2)) { goto L_801D6290; } // 801D6260
  cmps(c,0,(int32_t)c->r[3],2); // 801D6264
  if (crb(c,2)) { goto L_801D6298; } // 801D6268
  cmps(c,0,(int32_t)c->r[3],3); // 801D626C
  if (crb(c,2)) { goto L_801D62A0; } // 801D6270
  cmps(c,0,(int32_t)c->r[3],4); // 801D6274
  if (crb(c,2)) { goto L_801D62A8; } // 801D6278
  cmps(c,0,(int32_t)c->r[3],5); // 801D627C
  if (crb(c,2)) { goto L_801D62B0; } // 801D6280
  goto L_801D62B4; // 801D6284
L_801D6288:;
  c->r[4]=0u+0x0000001Fu; // 801D6288
  goto L_801D62B4; // 801D628C
L_801D6290:;
  c->r[4]=0u+0x00000001u; // 801D6290
  goto L_801D62B4; // 801D6294
L_801D6298:;
  c->r[4]=0u+0x00000002u; // 801D6298
  goto L_801D62B4; // 801D629C
L_801D62A0:;
  c->r[4]=0u+0x00000004u; // 801D62A0
  goto L_801D62B4; // 801D62A4
L_801D62A8:;
  c->r[4]=0u+0x00000008u; // 801D62A8
  goto L_801D62B4; // 801D62AC
L_801D62B0:;
  c->r[4]=0u+0x00000010u; // 801D62B0
L_801D62B4:;
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801D62B4
  c->r[0]=c->r[4]&c->r[0]; // 801D62B8
  c->r[0]=c->r[0]-c->r[4]; // 801D62BC
  c->r[0]=cntlz(c->r[0]); // 801D62C0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801D62C4
  return; // 801D62C8
}

// fn_801D62D0
void f_801D62D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D62D0
  c->r[0]=c->lr; // 801D62D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D62D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D62DC
  if (crb(c,2)) { goto L_801D62F8; } // 801D62E0
  cmps(c,0,(int32_t)c->r[3],1); // 801D62E4
  if (crb(c,2)) { goto L_801D6300; } // 801D62E8
  cmps(c,0,(int32_t)c->r[3],2); // 801D62EC
  if (crb(c,2)) { goto L_801D6308; } // 801D62F0
  goto L_801D6310; // 801D62F4
L_801D62F8:;
  c->r[3]=0u+0x00000001u; // 801D62F8
  goto L_801D6330; // 801D62FC
L_801D6300:;
  c->r[3]=0u+0x00000002u; // 801D6300
  goto L_801D6330; // 801D6304
L_801D6308:;
  c->r[3]=0u+0x00000003u; // 801D6308
  goto L_801D6330; // 801D630C
L_801D6310:;
  c->r[3]=0u+0x802D0000u; // 801D6310
  c->r[5]=0u+0x802D0000u; // 801D6314
  c->r[3]=c->r[3]+0xFFFFDBB0u; // 801D6318
  c->r[4]=0u+0x0000005Bu; // 801D631C
  c->r[5]=c->r[5]+0xFFFFDBC0u; // 801D6320
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6324
  c->lr=0x801D632Cu; f_801F9770(c); // 801D6328
  c->r[3]=0u+0x00000001u; // 801D632C
L_801D6330:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6330
  c->lr=c->r[0]; // 801D6334
  c->r[1]=c->r[1]+0x00000010u; // 801D6338
  return; // 801D633C
}

// fn_801D6340
void f_801D6340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6340
  c->r[0]=c->lr; // 801D6344
  cmps(c,0,(int32_t)c->r[3],0); // 801D6348
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D634C
  if (crb(c,2)) { goto L_801D6368; } // 801D6350
  cmps(c,0,(int32_t)c->r[3],1); // 801D6354
  if (crb(c,2)) { goto L_801D6370; } // 801D6358
  cmps(c,0,(int32_t)c->r[3],2); // 801D635C
  if (crb(c,2)) { goto L_801D6378; } // 801D6360
  goto L_801D6380; // 801D6364
L_801D6368:;
  c->r[3]=c->r[13]+0xFFFF9DD4u; // 801D6368
  goto L_801D63A0; // 801D636C
L_801D6370:;
  c->r[3]=c->r[13]+0xFFFF9DD8u; // 801D6370
  goto L_801D63A0; // 801D6374
L_801D6378:;
  c->r[3]=c->r[13]+0xFFFF9DE0u; // 801D6378
  goto L_801D63A0; // 801D637C
L_801D6380:;
  c->r[3]=0u+0x802D0000u; // 801D6380
  c->r[5]=0u+0x802D0000u; // 801D6384
  c->r[3]=c->r[3]+0xFFFFDBB0u; // 801D6388
  c->r[4]=0u+0x0000006Bu; // 801D638C
  c->r[5]=c->r[5]+0xFFFFDBC0u; // 801D6390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6394
  c->lr=0x801D639Cu; f_801F9770(c); // 801D6398
  c->r[3]=c->r[13]+0xFFFF9DE8u; // 801D639C
L_801D63A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D63A0
  c->lr=c->r[0]; // 801D63A4
  c->r[1]=c->r[1]+0x00000010u; // 801D63A8
  return; // 801D63AC
}

// fn_801D63B0
void f_801D63B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D63B0
  c->r[4]=0u+0x00000000u; // 801D63B4
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D63B8
  c->r[5]=0u+0x80240000u; // 801D63BC
  c->r[5]=c->r[5]+0xFFFF8348u; // 801D63C0
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D63C4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D63C8
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D63CC
  c->r[0]=0u+0x0000007Fu; // 801D63D0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801D63D4
  W16(c->r[3]+0x00000016u,c->r[4]); // 801D63D8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801D63DC
  W8(c->r[3]+0x00000014u,c->r[0]); // 801D63E0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D63E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D63E8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D63EC
  return; // 801D63F0
}

// fn_801D6400
void f_801D6400(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6400
  c->r[4]=0u+0x00000000u; // 801D6404
  c->r[5]=0u+0x80240000u; // 801D6408
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D640C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D6410
  c->r[5]=c->r[5]+0xFFFF8348u; // 801D6414
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6418
  c->r[0]=0u+0x0000007Fu; // 801D641C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801D6420
  W16(c->r[3]+0x00000016u,c->r[4]); // 801D6424
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801D6428
  W8(c->r[3]+0x00000014u,c->r[0]); // 801D642C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D6430
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D6434
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D6438
  return; // 801D643C
}

// fn_801D6440
void f_801D6440(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6440
  c->r[0]=0u+0x00000000u; // 801D6444
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D6448
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D644C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D6450
  return; // 801D6454
}

// fn_801D6460
void f_801D6460(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6460
  cmps(c,0,(int32_t)c->r[0],0); // 801D6464
  if (!crb(c,2)) { goto L_801D647C; } // 801D6468
  {uint32_t ea=c->r[2]+0xFFFF9DF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D646C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6470
  fcmp(c,0,c->f[1],c->f[0]); // 801D6474
  if (crb(c,2)) return; // 801D6478
L_801D647C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D647C
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6480
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D6484
  return; // 801D6488
}

// fn_801D6490
void f_801D6490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6490
  c->r[0]=c->lr; // 801D6494
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6498
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D649C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D64A0
  c->r[30]=c->r[4]|c->r[4]; // 801D64A4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D64A8
  c->r[29]=c->r[3]|c->r[3]; // 801D64AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D64B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D64B4
  if (crb(c,2)) { goto L_801D64D8; } // 801D64B8
  cmps(c,0,(int32_t)c->r[0],1); // 801D64BC
  if (crb(c,2)) { goto L_801D6524; } // 801D64C0
  cmps(c,0,(int32_t)c->r[0],2); // 801D64C4
  if (crb(c,2)) { goto L_801D655C; } // 801D64C8
  cmps(c,0,(int32_t)c->r[0],4); // 801D64CC
  if (crb(c,2)) { goto L_801D660C; } // 801D64D0
  goto L_801D663C; // 801D64D4
L_801D64D8:;
  {uint32_t ea=c->r[2]+0xFFFF9DF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D64D8
  c->ctr=c->r[4]; // 801D64DC
  cmps(c,0,(int32_t)c->r[4],0); // 801D64E0
  if (!crb(c,1)) { goto L_801D663C; } // 801D64E4
L_801D64E8:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D64E8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D64EC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D64F0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801D64F4
  fcmp(c,0,c->f[1],c->f[0]); // 801D64F8
  if (!crb(c,1)) { goto L_801D651C; } // 801D64FC
  {uint32_t ea=c->r[2]+0xFFFF9DF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6500
  c->r[4]=0u+0x00000001u; // 801D6504
  c->r[0]=R16(c->r[3]+0x00000016u); // 801D6508
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D650C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D6510
  W16(c->r[3]+0x00000018u,c->r[0]); // 801D6514
  goto L_801D663C; // 801D6518
L_801D651C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D64E8; } // 801D651C
  goto L_801D663C; // 801D6520
L_801D6524:;
  c->r[6]=R16(c->r[3]+0x00000018u); // 801D6524
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801D6528
  if (!crb(c,0)) { goto L_801D653C; } // 801D652C
  c->r[0]=c->r[6]-c->r[4]; // 801D6530
  W16(c->r[3]+0x00000018u,c->r[0]); // 801D6534
  goto L_801D6550; // 801D6538
L_801D653C:;
  c->r[5]=0u+0x00000000u; // 801D653C
  c->r[0]=0u+0x00000002u; // 801D6540
  W16(c->r[3]+0x00000018u,c->r[5]); // 801D6544
  c->r[30]=c->r[4]-c->r[6]; // 801D6548
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D654C
L_801D6550:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6550
  cmps(c,0,(int32_t)c->r[0],2); // 801D6554
  if (!crb(c,2)) { goto L_801D663C; } // 801D6558
L_801D655C:;
  c->r[31]=R8(c->r[3]+0x00000014u); // 801D655C
  c->r[0]=0u+0x00000000u; // 801D6560
  cmpu(c,0,c->r[31],0x0000007Fu); // 801D6564
  if (crb(c,1)) { goto L_801D6570; } // 801D6568
  c->r[0]=0u+0x00000001u; // 801D656C
L_801D6570:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D6570
  if (!crb(c,2)) { goto L_801D65A0; } // 801D6574
  c->r[3]=0u+0x802D0000u; // 801D6578
  c->r[5]=0u+0x802D0000u; // 801D657C
  c->r[6]=c->r[31]|c->r[31]; // 801D6580
  c->r[4]=0u+0x00000160u; // 801D6584
  c->r[3]=c->r[3]+0xFFFFDBE0u; // 801D6588
  c->r[5]=c->r[5]+0xFFFFDBF8u; // 801D658C
  c->r[7]=0u+0x00000000u; // 801D6590
  c->r[8]=0u+0x0000007Fu; // 801D6594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6598
  c->lr=0x801D65A0u; f_801F9770(c); // 801D659C
L_801D65A0:;
  c->r[3]=0u+0x43300000u; // 801D65A0
  c->r[0]=c->r[30]^0x80000000u; // 801D65A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D65A8
  c->r[4]=0u+0x80240000u; // 801D65AC
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[3]=RF64(ea);} // 801D65B0
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801D65B4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D65B8
  c->r[4]=c->r[4]+0xFFFF8248u; // 801D65BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[0]); // 801D65C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D65C4
  c->r[0]=c->r[0]^0x80000000u; // 801D65C8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D65CC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801D65D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D65D4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D65D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D65DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801D65E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801D65E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D65E8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 801D65EC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 801D65F0
  fcmp(c,0,c->f[0],c->f[1]); // 801D65F4
  if (!crb(c,0)) { goto L_801D663C; } // 801D65F8
  c->r[0]=0u+0x00000003u; // 801D65FC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 801D6600
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D6604
  goto L_801D663C; // 801D6608
L_801D660C:;
  c->r[4]=c->r[4]^0x80000000u; // 801D660C
  c->r[0]=0u+0x43300000u; // 801D6610
  W32(c->r[1]+0x00000014u,c->r[4]); // 801D6614
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[3]=RF64(ea);} // 801D6618
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D661C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6620
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801D6624
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6628
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D662C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801D6630
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D6634
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D6638
L_801D663C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D663C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D6640
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D6644
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D6648
  c->lr=c->r[0]; // 801D664C
  c->r[1]=c->r[1]+0x00000030u; // 801D6650
  return; // 801D6654
}

// fn_801D6660
void f_801D6660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6660
  c->r[0]=c->lr; // 801D6664
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D6668
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D666C
  c->r[0]=0u+0x00000000u; // 801D6670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6674
  c->r[31]=c->r[4]|c->r[4]; // 801D6678
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D667C
  c->r[30]=c->r[3]|c->r[3]; // 801D6680
  if (crb(c,1)) { goto L_801D668C; } // 801D6684
  c->r[0]=0u+0x00000001u; // 801D6688
L_801D668C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D668C
  if (!crb(c,2)) { goto L_801D66BC; } // 801D6690
  c->r[3]=0u+0x802D0000u; // 801D6694
  c->r[5]=0u+0x802D0000u; // 801D6698
  c->r[6]=c->r[31]|c->r[31]; // 801D669C
  c->r[4]=0u+0x00000107u; // 801D66A0
  c->r[3]=c->r[3]+0xFFFFDBE0u; // 801D66A4
  c->r[5]=c->r[5]+0xFFFFDC34u; // 801D66A8
  c->r[7]=0u+0x00000000u; // 801D66AC
  c->r[8]=0u+0x0000007Fu; // 801D66B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D66B4
  c->lr=0x801D66BCu; f_801F9770(c); // 801D66B8
L_801D66BC:;
  c->r[3]=0u+0x80240000u; // 801D66BC
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D66C0
  c->r[3]=c->r[3]+0xFFFF8348u; // 801D66C4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66C8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 801D66CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D66D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D66D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D66D8
  c->lr=c->r[0]; // 801D66DC
  c->r[1]=c->r[1]+0x00000010u; // 801D66E0
  return; // 801D66E4
}

// fn_801D66F0
void f_801D66F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D66F0
  c->r[0]=c->lr; // 801D66F4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D66F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D66FC
  c->r[0]=0u+0x00000000u; // 801D6700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6704
  c->r[31]=c->r[4]|c->r[4]; // 801D6708
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D670C
  c->r[30]=c->r[3]|c->r[3]; // 801D6710
  if (crb(c,1)) { goto L_801D671C; } // 801D6714
  c->r[0]=0u+0x00000001u; // 801D6718
L_801D671C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D671C
  if (!crb(c,2)) { goto L_801D674C; } // 801D6720
  c->r[3]=0u+0x802D0000u; // 801D6724
  c->r[5]=0u+0x802D0000u; // 801D6728
  c->r[6]=c->r[31]|c->r[31]; // 801D672C
  c->r[4]=0u+0x00000116u; // 801D6730
  c->r[3]=c->r[3]+0xFFFFDBE0u; // 801D6734
  c->r[5]=c->r[5]+0xFFFFDC74u; // 801D6738
  c->r[7]=0u+0x00000000u; // 801D673C
  c->r[8]=0u+0x0000007Fu; // 801D6740
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6744
  c->lr=0x801D674Cu; f_801F9770(c); // 801D6748
L_801D674C:;
  c->r[0]=c->r[31]+0x00000001u; // 801D674C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 801D6750
  c->r[0]=sraw(c,c->r[0],2); // 801D6754
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801D6758
  W16(c->r[30]+0x00000016u,c->r[0]); // 801D675C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6760
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6764
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6768
  c->lr=c->r[0]; // 801D676C
  c->r[1]=c->r[1]+0x00000010u; // 801D6770
  return; // 801D6774
}

// fn_801D6780
void f_801D6780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6780
  c->r[0]=c->lr; // 801D6784
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D6788
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D678C
  c->r[0]=0u+0x00000000u; // 801D6790
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D6794
  c->r[31]=0u+0x802D0000u; // 801D6798
  c->r[31]=c->r[31]+0xFFFFDBE0u; // 801D679C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D67A0
  c->r[30]=c->r[4]|c->r[4]; // 801D67A4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D67A8
  c->r[29]=c->r[3]|c->r[3]; // 801D67AC
  if (crb(c,1)) { goto L_801D67B8; } // 801D67B0
  c->r[0]=0u+0x00000001u; // 801D67B4
L_801D67B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D67B8
  if (!crb(c,2)) { goto L_801D67E0; } // 801D67BC
  c->r[6]=c->r[30]|c->r[30]; // 801D67C0
  c->r[3]=c->r[31]+0x00000000u; // 801D67C4
  c->r[5]=c->r[31]+0x000000D0u; // 801D67C8
  c->r[4]=0u+0x00000126u; // 801D67CC
  c->r[7]=0u+0x00000000u; // 801D67D0
  c->r[8]=0u+0x0000007Fu; // 801D67D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D67D8
  c->lr=0x801D67E0u; f_801F9770(c); // 801D67DC
L_801D67E0:;
  cmpu(c,0,c->r[30],0x0000007Fu); // 801D67E0
  c->r[0]=0u+0x00000000u; // 801D67E4
  if (crb(c,1)) { goto L_801D67F0; } // 801D67E8
  c->r[0]=0u+0x00000001u; // 801D67EC
L_801D67F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D67F0
  if (!crb(c,2)) { goto L_801D6818; } // 801D67F4
  c->r[6]=c->r[30]|c->r[30]; // 801D67F8
  c->r[3]=c->r[31]+0x00000000u; // 801D67FC
  c->r[5]=c->r[31]+0x00000110u; // 801D6800
  c->r[4]=0u+0x00000151u; // 801D6804
  c->r[7]=0u+0x00000000u; // 801D6808
  c->r[8]=0u+0x0000007Fu; // 801D680C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6810
  c->lr=0x801D6818u; f_801F9770(c); // 801D6814
L_801D6818:;
  cmps(c,0,(int32_t)c->r[30],127); // 801D6818
  if (!crb(c,2)) { goto L_801D6828; } // 801D681C
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6820
  goto L_801D68A8; // 801D6824
L_801D6828:;
  cmps(c,0,(int32_t)c->r[30],126); // 801D6828
  if (!crb(c,2)) { goto L_801D6838; } // 801D682C
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6830
  goto L_801D68A8; // 801D6834
L_801D6838:;
  cmps(c,0,(int32_t)c->r[30],50); // 801D6838
  if (!crb(c,0)) { goto L_801D6878; } // 801D683C
  c->r[3]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801D6840
  c->r[0]=0u+0x43300000u; // 801D6844
  c->r[3]=c->r[3]+0x00000001u; // 801D6848
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D684C
  c->r[0]=c->r[3]^0x80000000u; // 801D6850
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[3]=RF64(ea);} // 801D6854
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D6858
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D685C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801D6860
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6864
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D6868
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D686C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D6870
  goto L_801D68A8; // 801D6874
L_801D6878:;
  c->r[3]=addc(c,~c->r[30],0x0000007Eu,1); // 801D6878
  c->r[0]=0u+0x43300000u; // 801D687C
  c->r[3]=c->r[3]^0x80000000u; // 801D6880
  W32(c->r[1]+0x00000014u,c->r[3]); // 801D6884
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[3]=RF64(ea);} // 801D6888
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D688C
  {uint32_t ea=c->r[2]+0xFFFF9E14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6890
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801D6894
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6898
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D689C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801D68A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D68A4
L_801D68A8:;
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 801D68A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D68AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D68B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D68B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D68B8
  c->lr=c->r[0]; // 801D68BC
  c->r[1]=c->r[1]+0x00000030u; // 801D68C0
  return; // 801D68C4
}

// fn_801D68D0
void f_801D68D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D68D0
  c->r[0]=c->lr; // 801D68D4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D68D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D68DC
  c->r[0]=0u+0x00000000u; // 801D68E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D68E4
  c->r[31]=c->r[4]|c->r[4]; // 801D68E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D68EC
  c->r[30]=c->r[3]|c->r[3]; // 801D68F0
  if (crb(c,1)) { goto L_801D68FC; } // 801D68F4
  c->r[0]=0u+0x00000001u; // 801D68F8
L_801D68FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D68FC
  if (!crb(c,2)) { goto L_801D692C; } // 801D6900
  c->r[3]=0u+0x802D0000u; // 801D6904
  c->r[5]=0u+0x802D0000u; // 801D6908
  c->r[6]=c->r[31]|c->r[31]; // 801D690C
  c->r[4]=0u+0x00000136u; // 801D6910
  c->r[3]=c->r[3]+0xFFFFDBE0u; // 801D6914
  c->r[5]=c->r[5]+0xFFFFDD30u; // 801D6918
  c->r[7]=0u+0x00000000u; // 801D691C
  c->r[8]=0u+0x0000007Fu; // 801D6920
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6924
  c->lr=0x801D692Cu; f_801F9770(c); // 801D6928
L_801D692C:;
  W8(c->r[30]+0x00000014u,c->r[31]); // 801D692C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6930
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6934
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6938
  c->lr=c->r[0]; // 801D693C
  c->r[1]=c->r[1]+0x00000010u; // 801D6940
  return; // 801D6944
}

// fn_801D6950
void f_801D6950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6950
  c->r[0]=c->lr; // 801D6954
  cmpu(c,0,c->r[4],0x0000007Fu); // 801D6958
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D695C
  c->r[0]=0u+0x00000000u; // 801D6960
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D6964
  c->r[31]=c->r[4]|c->r[4]; // 801D6968
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D696C
  c->r[30]=c->r[3]|c->r[3]; // 801D6970
  if (crb(c,1)) { goto L_801D697C; } // 801D6974
  c->r[0]=0u+0x00000001u; // 801D6978
L_801D697C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D697C
  if (!crb(c,2)) { goto L_801D69AC; } // 801D6980
  c->r[3]=0u+0x802D0000u; // 801D6984
  c->r[5]=0u+0x802D0000u; // 801D6988
  c->r[6]=c->r[31]|c->r[31]; // 801D698C
  c->r[4]=0u+0x00000146u; // 801D6990
  c->r[3]=c->r[3]+0xFFFFDBE0u; // 801D6994
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 801D6998
  c->r[7]=0u+0x00000000u; // 801D699C
  c->r[8]=0u+0x0000007Fu; // 801D69A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D69A4
  c->lr=0x801D69ACu; f_801F9770(c); // 801D69A8
L_801D69AC:;
  cmpu(c,0,c->r[31],0x0000007Fu); // 801D69AC
  c->r[0]=0u+0x00000000u; // 801D69B0
  if (crb(c,1)) { goto L_801D69BC; } // 801D69B4
  c->r[0]=0u+0x00000001u; // 801D69B8
L_801D69BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D69BC
  if (!crb(c,2)) { goto L_801D69EC; } // 801D69C0
  c->r[3]=0u+0x802D0000u; // 801D69C4
  c->r[5]=0u+0x802D0000u; // 801D69C8
  c->r[6]=c->r[31]|c->r[31]; // 801D69CC
  c->r[4]=0u+0x00000151u; // 801D69D0
  c->r[3]=c->r[3]+0xFFFFDBE0u; // 801D69D4
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 801D69D8
  c->r[7]=0u+0x00000000u; // 801D69DC
  c->r[8]=0u+0x0000007Fu; // 801D69E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D69E4
  c->lr=0x801D69ECu; f_801F9770(c); // 801D69E8
L_801D69EC:;
  cmps(c,0,(int32_t)c->r[31],127); // 801D69EC
  if (!crb(c,2)) { goto L_801D69FC; } // 801D69F0
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D69F4
  goto L_801D6A7C; // 801D69F8
L_801D69FC:;
  cmps(c,0,(int32_t)c->r[31],126); // 801D69FC
  if (!crb(c,2)) { goto L_801D6A0C; } // 801D6A00
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6A04
  goto L_801D6A7C; // 801D6A08
L_801D6A0C:;
  cmps(c,0,(int32_t)c->r[31],50); // 801D6A0C
  if (!crb(c,0)) { goto L_801D6A4C; } // 801D6A10
  c->r[3]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801D6A14
  c->r[0]=0u+0x43300000u; // 801D6A18
  c->r[3]=c->r[3]+0x00000001u; // 801D6A1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D6A20
  c->r[0]=c->r[3]^0x80000000u; // 801D6A24
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[3]=RF64(ea);} // 801D6A28
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D6A2C
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6A30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801D6A34
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6A38
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D6A3C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D6A40
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D6A44
  goto L_801D6A7C; // 801D6A48
L_801D6A4C:;
  c->r[3]=addc(c,~c->r[31],0x0000007Eu,1); // 801D6A4C
  c->r[0]=0u+0x43300000u; // 801D6A50
  c->r[3]=c->r[3]^0x80000000u; // 801D6A54
  W32(c->r[1]+0x00000014u,c->r[3]); // 801D6A58
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[3]=RF64(ea);} // 801D6A5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D6A60
  {uint32_t ea=c->r[2]+0xFFFF9E14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6A64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801D6A68
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6A6C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D6A70
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801D6A74
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D6A78
L_801D6A7C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6A7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6A80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6A84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6A88
  c->lr=c->r[0]; // 801D6A8C
  c->r[1]=c->r[1]+0x00000020u; // 801D6A90
  return; // 801D6A94
}

// fn_801D6AA0
void f_801D6AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6AA0
  c->r[0]=c->lr; // 801D6AA4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D6AA8
  c->r[11]=c->r[1]+0x00000050u; // 801D6AAC
  c->lr=0x801D6AB4u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6AB0
  cmps(c,0,(int32_t)c->r[4],0); // 801D6AB4
  c->r[26]=c->r[3]|c->r[3]; // 801D6AB8
  c->r[27]=c->r[4]|c->r[4]; // 801D6ABC
  if (!crb(c,2)) { goto L_801D6AE0; } // 801D6AC0
  c->r[3]=0u+0x802D0000u; // 801D6AC4
  c->r[5]=0u+0x802D0000u; // 801D6AC8
  c->r[3]=c->r[3]+0xFFFFDD70u; // 801D6ACC
  c->r[4]=0u+0x00000081u; // 801D6AD0
  c->r[5]=c->r[5]+0xFFFFDD8Cu; // 801D6AD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6AD8
  c->lr=0x801D6AE0u; f_801F9770(c); // 801D6ADC
L_801D6AE0:;
  c->lr=0x801D6AE4u; f_801E5840(c); // 801D6AE0
  c->r[3]=c->r[3]+0x00000354u; // 801D6AE4
  c->lr=0x801D6AECu; f_800CCD50(c); // 801D6AE8
  c->r[3]=R8(c->r[27]+0x00000098u); // 801D6AEC
  c->r[0]=R32(c->r[27]+0x00000050u); // 801D6AF0
  c->r[3]=c->r[3]+c->r[0]; // 801D6AF4
  cmps(c,0,(int32_t)c->r[3],127); // 801D6AF8
  if (!crb(c,1)) { goto L_801D6B08; } // 801D6AFC
  c->r[28]=0u+0x0000007Fu; // 801D6B00
  goto L_801D6B10; // 801D6B04
L_801D6B08:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6B08
  c->r[28]=c->r[3]&~c->r[0]; // 801D6B0C
L_801D6B10:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 801D6B10
  cmps(c,0,(int32_t)c->r[0],0); // 801D6B14
  if (!crb(c,2)) { goto L_801D6B30; } // 801D6B18
  c->lr=0x801D6B20u; f_801E5840(c); // 801D6B1C
  c->r[3]=c->r[3]+0x00000354u; // 801D6B20
  c->lr=0x801D6B28u; f_800CCE30(c); // 801D6B24
  c->r[3]=0u+0x00000000u; // 801D6B28
  goto L_801D6CC8; // 801D6B2C
L_801D6B30:;
  c->r[24]=c->r[26]+0x00000004u; // 801D6B30
  c->r[30]=0u+0x802D0000u; // 801D6B34
  c->r[31]=0u+0x802D0000u; // 801D6B38
  c->r[22]=0u+0x802D0000u; // 801D6B3C
  c->r[23]=0u+0x802D0000u; // 801D6B40
  goto L_801D6C60; // 801D6B44
L_801D6B48:;
  c->r[25]=R32(c->r[26]+0x00000004u); // 801D6B48
  c->r[21]=0u+0x00000080u; // 801D6B4C
  c->r[29]=0u+0x00000000u; // 801D6B50
  goto L_801D6BE8; // 801D6B54
L_801D6B58:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D6B58
  if (!crb(c,2)) { goto L_801D6B74; } // 801D6B5C
  c->r[3]=c->r[30]+0xFFFFDE38u; // 801D6B60
  c->r[5]=c->r[31]+0xFFFFDE14u; // 801D6B64
  c->r[4]=0u+0x0000023Du; // 801D6B68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6B6C
  c->lr=0x801D6B74u; f_801F9770(c); // 801D6B70
L_801D6B74:;
  c->r[3]=R8(c->r[25]+0xFFFFFF90u); // 801D6B74
  c->r[19]=c->r[25]+0xFFFFFEF8u; // 801D6B78
  c->r[0]=R32(c->r[25]+0xFFFFFF48u); // 801D6B7C
  c->r[3]=c->r[3]+c->r[0]; // 801D6B80
  cmps(c,0,(int32_t)c->r[3],127); // 801D6B84
  if (!crb(c,1)) { goto L_801D6B94; } // 801D6B88
  c->r[20]=0u+0x0000007Fu; // 801D6B8C
  goto L_801D6B9C; // 801D6B90
L_801D6B94:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6B94
  c->r[20]=c->r[3]&~c->r[0]; // 801D6B98
L_801D6B9C:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 801D6B9C
  if (!crb(c,1)) { goto L_801D6BE4; } // 801D6BA0
  cmps(c,0,(int32_t)c->r[25],0); // 801D6BA4
  if (!crb(c,2)) { goto L_801D6BC0; } // 801D6BA8
  c->r[3]=c->r[30]+0xFFFFDE38u; // 801D6BAC
  c->r[5]=c->r[31]+0xFFFFDE14u; // 801D6BB0
  c->r[4]=0u+0x0000023Du; // 801D6BB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6BB8
  c->lr=0x801D6BC0u; f_801F9770(c); // 801D6BBC
L_801D6BC0:;
  cmps(c,0,(int32_t)c->r[19],0); // 801D6BC0
  if (!crb(c,2)) { goto L_801D6BDC; } // 801D6BC4
  c->r[3]=c->r[22]+0xFFFFDDD8u; // 801D6BC8
  c->r[5]=c->r[23]+0xFFFFDDB4u; // 801D6BCC
  c->r[4]=0u+0x00000193u; // 801D6BD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6BD4
  c->lr=0x801D6BDCu; f_801F9770(c); // 801D6BD8
L_801D6BDC:;
  c->r[29]=c->r[19]|c->r[19]; // 801D6BDC
  c->r[21]=c->r[20]|c->r[20]; // 801D6BE0
L_801D6BE4:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 801D6BE4
L_801D6BE8:;
  cmpu(c,0,c->r[25],c->r[24]); // 801D6BE8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6B58; } // 801D6BEC
  cmps(c,0,(int32_t)c->r[29],0); // 801D6BF0
  if (!crb(c,2)) { goto L_801D6C0C; } // 801D6BF4
  c->lr=0x801D6BFCu; f_801E5840(c); // 801D6BF8
  c->r[3]=c->r[3]+0x00000354u; // 801D6BFC
  c->lr=0x801D6C04u; f_800CCE30(c); // 801D6C00
  c->r[3]=0u+0x00000000u; // 801D6C04
  goto L_801D6CC8; // 801D6C08
L_801D6C0C:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 801D6C0C
  c->r[0]=R32(c->r[29]+0x00000050u); // 801D6C10
  c->r[3]=c->r[3]+c->r[0]; // 801D6C14
  cmps(c,0,(int32_t)c->r[3],127); // 801D6C18
  if (!crb(c,1)) { goto L_801D6C28; } // 801D6C1C
  c->r[0]=0u+0x0000007Fu; // 801D6C20
  goto L_801D6C30; // 801D6C24
L_801D6C28:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6C28
  c->r[0]=c->r[3]&~c->r[0]; // 801D6C2C
L_801D6C30:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D6C30
  if (!crb(c,0)) { goto L_801D6C4C; } // 801D6C34
  c->lr=0x801D6C3Cu; f_801E5840(c); // 801D6C38
  c->r[3]=c->r[3]+0x00000354u; // 801D6C3C
  c->lr=0x801D6C44u; f_800CCE30(c); // 801D6C40
  c->r[3]=0u+0x00000000u; // 801D6C44
  goto L_801D6CC8; // 801D6C48
L_801D6C4C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D6C4C
  c->r[3]=c->r[29]|c->r[29]; // 801D6C50
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D6C54
  c->ctr=c->r[12]; // 801D6C58
  if (true) { c->lr=0x801D6C60u; dispatch(c,c->ctr); } // 801D6C5C
L_801D6C60:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801D6C60
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 801D6C64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D6C68
  if (!crb(c,0)) { IRQCHK(c); goto L_801D6B48; } // 801D6C6C
  cmps(c,0,(int32_t)c->r[27],0); // 801D6C70
  c->r[24]=c->r[26]+0x00000004u; // 801D6C74
  if (!crb(c,2)) { goto L_801D6C98; } // 801D6C78
  c->r[3]=0u+0x802D0000u; // 801D6C7C
  c->r[5]=0u+0x802D0000u; // 801D6C80
  c->r[3]=c->r[3]+0xFFFFDE08u; // 801D6C84
  c->r[4]=0u+0x00000233u; // 801D6C88
  c->r[5]=c->r[5]+0xFFFFDDE4u; // 801D6C8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C90
  c->lr=0x801D6C98u; f_801F9770(c); // 801D6C94
L_801D6C98:;
  W32(c->r[1]+0x00000008u,c->r[24]); // 801D6C98
  c->r[3]=c->r[26]|c->r[26]; // 801D6C9C
  c->r[4]=c->r[1]+0x00000008u; // 801D6CA0
  c->r[5]=c->r[27]+0x00000108u; // 801D6CA4
  c->lr=0x801D6CACu; f_801FA130(c); // 801D6CA8
  c->r[3]=c->r[27]|c->r[27]; // 801D6CAC
  c->r[4]=c->r[26]|c->r[26]; // 801D6CB0
  c->lr=0x801D6CB8u; f_801D4180(c); // 801D6CB4
  c->lr=0x801D6CBCu; f_801E5840(c); // 801D6CB8
  c->r[3]=c->r[3]+0x00000354u; // 801D6CBC
  c->lr=0x801D6CC4u; f_800CCE30(c); // 801D6CC0
  c->r[3]=0u+0x00000001u; // 801D6CC4
L_801D6CC8:;
  c->r[11]=c->r[1]+0x00000050u; // 801D6CC8
  c->lr=0x801D6CD0u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6CCC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D6CD0
  c->lr=c->r[0]; // 801D6CD4
  c->r[1]=c->r[1]+0x00000050u; // 801D6CD8
  return; // 801D6CDC
}

// fn_801D6CE0
void f_801D6CE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6CE0
  c->r[0]=c->lr; // 801D6CE4
  cmps(c,0,(int32_t)c->r[4],0); // 801D6CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6CEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6CF0
  c->r[31]=c->r[4]|c->r[4]; // 801D6CF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6CF8
  c->r[30]=c->r[3]|c->r[3]; // 801D6CFC
  if (!crb(c,2)) { goto L_801D6D20; } // 801D6D00
  c->r[3]=0u+0x802D0000u; // 801D6D04
  c->r[5]=0u+0x802D0000u; // 801D6D08
  c->r[3]=c->r[3]+0xFFFFDE08u; // 801D6D0C
  c->r[4]=0u+0x00000233u; // 801D6D10
  c->r[5]=c->r[5]+0xFFFFDDE4u; // 801D6D14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6D18
  c->lr=0x801D6D20u; f_801F9770(c); // 801D6D1C
L_801D6D20:;
  c->r[3]=c->r[30]|c->r[30]; // 801D6D20
  c->r[4]=c->r[31]+0x00000108u; // 801D6D24
  c->lr=0x801D6D2Cu; f_801FA230(c); // 801D6D28
  c->r[3]=c->r[31]|c->r[31]; // 801D6D2C
  c->r[4]=c->r[30]|c->r[30]; // 801D6D30
  c->lr=0x801D6D38u; f_801D4210(c); // 801D6D34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6D38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6D3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6D40
  c->lr=c->r[0]; // 801D6D44
  c->r[1]=c->r[1]+0x00000010u; // 801D6D48
  return; // 801D6D4C
}

// fn_801D6D50
void f_801D6D50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6D50
  c->r[0]=c->lr; // 801D6D54
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D6D58
  c->r[11]=c->r[1]+0x00000040u; // 801D6D5C
  c->lr=0x801D6D64u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6D60
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801D6D64
  c->r[31]=c->r[4]|c->r[4]; // 801D6D68
  cmps(c,0,(int32_t)c->r[5],0); // 801D6D6C
  if (!crb(c,2)) { goto L_801D6D7C; } // 801D6D70
  c->r[3]=0u+0x00000000u; // 801D6D74
  goto L_801D6E8C; // 801D6D78
L_801D6D7C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6D7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801D6D80
  if (crb(c,0)) { goto L_801D6E88; } // 801D6D84
  c->r[30]=R32(c->r[3]+0x00000004u); // 801D6D88
  c->r[29]=c->r[3]+0x00000004u; // 801D6D8C
  c->r[23]=0u+0x00000080u; // 801D6D90
  c->r[24]=0u+0x00000000u; // 801D6D94
  c->r[25]=0u+0x802D0000u; // 801D6D98
  c->r[26]=0u+0x802D0000u; // 801D6D9C
  c->r[27]=0u+0x802D0000u; // 801D6DA0
  c->r[28]=0u+0x802D0000u; // 801D6DA4
  goto L_801D6E3C; // 801D6DA8
L_801D6DAC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D6DAC
  if (!crb(c,2)) { goto L_801D6DC8; } // 801D6DB0
  c->r[3]=c->r[25]+0xFFFFDE38u; // 801D6DB4
  c->r[5]=c->r[26]+0xFFFFDE14u; // 801D6DB8
  c->r[4]=0u+0x0000023Du; // 801D6DBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6DC0
  c->lr=0x801D6DC8u; f_801F9770(c); // 801D6DC4
L_801D6DC8:;
  c->r[3]=R8(c->r[30]+0xFFFFFF90u); // 801D6DC8
  c->r[21]=c->r[30]+0xFFFFFEF8u; // 801D6DCC
  c->r[0]=R32(c->r[30]+0xFFFFFF48u); // 801D6DD0
  c->r[3]=c->r[3]+c->r[0]; // 801D6DD4
  cmps(c,0,(int32_t)c->r[3],127); // 801D6DD8
  if (!crb(c,1)) { goto L_801D6DE8; } // 801D6DDC
  c->r[22]=0u+0x0000007Fu; // 801D6DE0
  goto L_801D6DF0; // 801D6DE4
L_801D6DE8:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6DE8
  c->r[22]=c->r[3]&~c->r[0]; // 801D6DEC
L_801D6DF0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[22]); // 801D6DF0
  if (!crb(c,1)) { goto L_801D6E38; } // 801D6DF4
  cmps(c,0,(int32_t)c->r[30],0); // 801D6DF8
  if (!crb(c,2)) { goto L_801D6E14; } // 801D6DFC
  c->r[3]=c->r[25]+0xFFFFDE38u; // 801D6E00
  c->r[5]=c->r[26]+0xFFFFDE14u; // 801D6E04
  c->r[4]=0u+0x0000023Du; // 801D6E08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6E0C
  c->lr=0x801D6E14u; f_801F9770(c); // 801D6E10
L_801D6E14:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D6E14
  if (!crb(c,2)) { goto L_801D6E30; } // 801D6E18
  c->r[3]=c->r[27]+0xFFFFDDD8u; // 801D6E1C
  c->r[5]=c->r[28]+0xFFFFDDB4u; // 801D6E20
  c->r[4]=0u+0x00000193u; // 801D6E24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6E28
  c->lr=0x801D6E30u; f_801F9770(c); // 801D6E2C
L_801D6E30:;
  c->r[24]=c->r[21]|c->r[21]; // 801D6E30
  c->r[23]=c->r[22]|c->r[22]; // 801D6E34
L_801D6E38:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D6E38
L_801D6E3C:;
  cmpu(c,0,c->r[30],c->r[29]); // 801D6E3C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6DAC; } // 801D6E40
  cmps(c,0,(int32_t)c->r[24],0); // 801D6E44
  if (!crb(c,2)) { goto L_801D6E54; } // 801D6E48
  c->r[3]=0u+0x00000000u; // 801D6E4C
  goto L_801D6E8C; // 801D6E50
L_801D6E54:;
  c->r[3]=R8(c->r[24]+0x00000098u); // 801D6E54
  c->r[0]=R32(c->r[24]+0x00000050u); // 801D6E58
  c->r[3]=c->r[3]+c->r[0]; // 801D6E5C
  cmps(c,0,(int32_t)c->r[3],127); // 801D6E60
  if (!crb(c,1)) { goto L_801D6E70; } // 801D6E64
  c->r[0]=0u+0x0000007Fu; // 801D6E68
  goto L_801D6E78; // 801D6E6C
L_801D6E70:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6E70
  c->r[0]=c->r[3]&~c->r[0]; // 801D6E74
L_801D6E78:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801D6E78
  if (!crb(c,0)) { goto L_801D6E88; } // 801D6E7C
  c->r[3]=0u+0x00000000u; // 801D6E80
  goto L_801D6E8C; // 801D6E84
L_801D6E88:;
  c->r[3]=0u+0x00000001u; // 801D6E88
L_801D6E8C:;
  c->r[11]=c->r[1]+0x00000040u; // 801D6E8C
  c->lr=0x801D6E94u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6E90
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D6E94
  c->lr=c->r[0]; // 801D6E98
  c->r[1]=c->r[1]+0x00000040u; // 801D6E9C
  return; // 801D6EA0
}

// fn_801D6EB0
void f_801D6EB0(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000008u; // 801D6EB0
  c->r[0]=0u+0x00000000u; // 801D6EB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D6EB8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D6EBC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D6EC0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801D6EC4
  return; // 801D6EC8
}

// fn_801D6ED0
void f_801D6ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6ED0
  c->r[0]=c->lr; // 801D6ED4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D6ED8
  c->r[11]=c->r[1]+0x00000050u; // 801D6EDC
  c->lr=0x801D6EE4u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6EE0
  cmps(c,0,(int32_t)c->r[3],0); // 801D6EE4
  c->r[30]=c->r[3]|c->r[3]; // 801D6EE8
  c->r[31]=c->r[4]|c->r[4]; // 801D6EEC
  if (crb(c,2)) { goto L_801D7070; } // 801D6EF0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801D6EF8
  if (crb(c,2)) { goto L_801D7050; } // 801D6EFC
  if (crb(c,2)) { goto L_801D7050; } // 801D6F00
  c->r[20]=c->r[3]+0x00000008u; // 801D6F04
  c->r[26]=0u+0x802D0000u; // 801D6F08
  c->r[27]=0u+0x802D0000u; // 801D6F0C
  c->r[18]=0u+0x802D0000u; // 801D6F10
  c->r[19]=0u+0x802D0000u; // 801D6F14
  c->r[21]=0u+0x802D0000u; // 801D6F18
  c->r[22]=0u+0x802D0000u; // 801D6F1C
  c->r[23]=0u+0x802D0000u; // 801D6F20
  c->r[24]=0u+0x802D0000u; // 801D6F24
  c->r[28]=0u+0x802D0000u; // 801D6F28
  c->r[29]=0u+0x802D0000u; // 801D6F2C
  goto L_801D7028; // 801D6F30
L_801D6F34:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D6F34
  if (!crb(c,2)) { goto L_801D6F50; } // 801D6F38
  c->r[3]=c->r[18]+0xFFFFE104u; // 801D6F3C
  c->r[5]=c->r[19]+0xFFFFE0E0u; // 801D6F40
  c->r[4]=0u+0x000001FBu; // 801D6F44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6F48
  c->lr=0x801D6F50u; f_801F9770(c); // 801D6F4C
L_801D6F50:;
  c->r[17]=R32(c->r[20]+0x00000004u); // 801D6F50
  cmps(c,0,(int32_t)c->r[17],0); // 801D6F54
  if (!crb(c,2)) { goto L_801D6F70; } // 801D6F58
  c->r[3]=c->r[21]+0xFFFFE0A4u; // 801D6F5C
  c->r[5]=c->r[22]+0xFFFFE080u; // 801D6F60
  c->r[4]=0u+0x0000023Du; // 801D6F64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6F68
  c->lr=0x801D6F70u; f_801F9770(c); // 801D6F6C
L_801D6F70:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D6F70
  if (!crb(c,2)) { goto L_801D6F8C; } // 801D6F74
  c->r[3]=c->r[23]+0xFFFFE0D4u; // 801D6F78
  c->r[5]=c->r[24]+0xFFFFE0B0u; // 801D6F7C
  c->r[4]=0u+0x00000193u; // 801D6F80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6F84
  c->lr=0x801D6F8Cu; f_801F9770(c); // 801D6F88
L_801D6F8C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D6F8C
  if (crb(c,2)) { goto L_801D7000; } // 801D6F90
  c->r[25]=c->r[17]+0x0000000Cu; // 801D6F94
  goto L_801D6FE4; // 801D6F98
L_801D6F9C:;
  c->r[25]=R32(c->r[25]+0x00000004u); // 801D6F9C
  cmps(c,0,(int32_t)c->r[25],0); // 801D6FA0
  if (!crb(c,2)) { goto L_801D6FBC; } // 801D6FA4
  c->r[3]=c->r[26]+0xFFFFE044u; // 801D6FA8
  c->r[5]=c->r[27]+0xFFFFE020u; // 801D6FAC
  c->r[4]=0u+0x0000023Du; // 801D6FB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6FB4
  c->lr=0x801D6FBCu; f_801F9770(c); // 801D6FB8
L_801D6FBC:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D6FBC
  if (crb(c,2)) { goto L_801D6FE4; } // 801D6FC0
  c->r[12]=R32(c->r[25]+0x00000010u); // 801D6FC4
  cmps(c,0,(int32_t)c->r[12],0); // 801D6FC8
  if (crb(c,2)) { goto L_801D6FE4; } // 801D6FCC
  c->r[3]=R32(c->r[25]+0x00000008u); // 801D6FD0
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 801D6FD4
  c->r[5]=R32(c->r[25]+0x00000014u); // 801D6FD8
  c->ctr=c->r[12]; // 801D6FDC
  if (true) { c->lr=0x801D6FE4u; dispatch(c,c->ctr); } // 801D6FE0
L_801D6FE4:;
  c->r[0]=R32(c->r[17]+0x0000000Cu); // 801D6FE4
  cmpu(c,0,c->r[25],c->r[0]); // 801D6FE8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6F9C; } // 801D6FEC
  c->r[3]=addc(c,c->r[17],0x00000008u,0); cr0(c,c->r[3]); // 801D6FF0
  if (crb(c,2)) { goto L_801D7000; } // 801D6FF4
  c->r[4]=0u+0x00000000u; // 801D6FF8
  c->lr=0x801D7000u; f_801F9DB0(c); // 801D6FFC
L_801D7000:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D7000
  if (!crb(c,2)) { goto L_801D701C; } // 801D7004
  c->r[3]=c->r[28]+0xFFFFE074u; // 801D7008
  c->r[5]=c->r[29]+0xFFFFE050u; // 801D700C
  c->r[4]=0u+0x00000233u; // 801D7010
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7014
  c->lr=0x801D701Cu; f_801F9770(c); // 801D7018
L_801D701C:;
  c->r[4]=c->r[17]|c->r[17]; // 801D701C
  c->r[3]=c->r[30]+0x00000004u; // 801D7020
  c->lr=0x801D7028u; f_801FA230(c); // 801D7024
L_801D7028:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D7028
  cmps(c,0,(int32_t)c->r[0],0); // 801D702C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6F34; } // 801D7030
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D7034
  c->r[4]=0u+0x00000003u; // 801D7038
  c->lr=0x801D7040u; f_800F16B0(c); // 801D703C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D7040
  c->lr=0x801D7048u; f_800F1560(c); // 801D7044
  c->r[0]=0u+0x00000000u; // 801D7048
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D704C
L_801D7050:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 801D7050
  if (crb(c,2)) { goto L_801D7060; } // 801D7054
  c->r[4]=0u+0x00000000u; // 801D7058
  c->lr=0x801D7060u; f_801F9DB0(c); // 801D705C
L_801D7060:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D7060
  if (!crb(c,1)) { goto L_801D7070; } // 801D7064
  c->r[3]=c->r[30]|c->r[30]; // 801D7068
  c->lr=0x801D7070u; f_800B9AD0(c); // 801D706C
L_801D7070:;
  c->r[11]=c->r[1]+0x00000050u; // 801D7070
  c->r[3]=c->r[30]|c->r[30]; // 801D7074
  c->lr=0x801D707Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7078
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D707C
  c->lr=c->r[0]; // 801D7080
  c->r[1]=c->r[1]+0x00000050u; // 801D7084
  return; // 801D7088
}

// fn_801D7090
void f_801D7090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7090
  c->r[0]=c->lr; // 801D7094
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D7098
  c->r[11]=c->r[1]+0x00000050u; // 801D709C
  c->lr=0x801D70A4u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D70A0
  cmps(c,0,(int32_t)c->r[4],0); // 801D70A4
  c->r[29]=c->r[3]|c->r[3]; // 801D70A8
  c->r[30]=c->r[4]|c->r[4]; // 801D70AC
  c->r[31]=c->r[5]|c->r[5]; // 801D70B0
  if (!crb(c,2)) { goto L_801D70D4; } // 801D70B4
  c->r[3]=0u+0x802D0000u; // 801D70B8
  c->r[5]=0u+0x802D0000u; // 801D70BC
  c->r[3]=c->r[3]+0xFFFFDE48u; // 801D70C0
  c->r[4]=0u+0x0000004Bu; // 801D70C4
  c->r[5]=c->r[5]+0xFFFFDE5Cu; // 801D70C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D70CC
  c->lr=0x801D70D4u; f_801F9770(c); // 801D70D0
L_801D70D4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801D70D4
  cmps(c,0,(int32_t)c->r[0],0); // 801D70D8
  if (crb(c,2)) { goto L_801D723C; } // 801D70DC
  if (crb(c,2)) { goto L_801D723C; } // 801D70E0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D70E4
  cmps(c,0,(int32_t)c->r[0],0); // 801D70E8
  if (crb(c,2)) { goto L_801D7220; } // 801D70EC
  c->r[28]=c->r[29]+0x00000008u; // 801D70F0
  c->r[24]=0u+0x802D0000u; // 801D70F4
  c->r[25]=0u+0x802D0000u; // 801D70F8
  c->r[17]=0u+0x802D0000u; // 801D70FC
  c->r[18]=0u+0x802D0000u; // 801D7100
  c->r[19]=0u+0x802D0000u; // 801D7104
  c->r[20]=0u+0x802D0000u; // 801D7108
  c->r[21]=0u+0x802D0000u; // 801D710C
  c->r[22]=0u+0x802D0000u; // 801D7110
  c->r[26]=0u+0x802D0000u; // 801D7114
  c->r[27]=0u+0x802D0000u; // 801D7118
  goto L_801D7214; // 801D711C
L_801D7120:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7120
  if (!crb(c,2)) { goto L_801D713C; } // 801D7124
  c->r[3]=c->r[17]+0xFFFFE104u; // 801D7128
  c->r[5]=c->r[18]+0xFFFFE0E0u; // 801D712C
  c->r[4]=0u+0x000001FBu; // 801D7130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7134
  c->lr=0x801D713Cu; f_801F9770(c); // 801D7138
L_801D713C:;
  c->r[16]=R32(c->r[28]+0x00000004u); // 801D713C
  cmps(c,0,(int32_t)c->r[16],0); // 801D7140
  if (!crb(c,2)) { goto L_801D715C; } // 801D7144
  c->r[3]=c->r[19]+0xFFFFE0A4u; // 801D7148
  c->r[5]=c->r[20]+0xFFFFE080u; // 801D714C
  c->r[4]=0u+0x0000023Du; // 801D7150
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7154
  c->lr=0x801D715Cu; f_801F9770(c); // 801D7158
L_801D715C:;
  cmps(c,0,(int32_t)c->r[16],0); // 801D715C
  if (!crb(c,2)) { goto L_801D7178; } // 801D7160
  c->r[3]=c->r[21]+0xFFFFE0D4u; // 801D7164
  c->r[5]=c->r[22]+0xFFFFE0B0u; // 801D7168
  c->r[4]=0u+0x00000193u; // 801D716C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7170
  c->lr=0x801D7178u; f_801F9770(c); // 801D7174
L_801D7178:;
  cmps(c,0,(int32_t)c->r[16],0); // 801D7178
  if (crb(c,2)) { goto L_801D71EC; } // 801D717C
  c->r[23]=c->r[16]+0x0000000Cu; // 801D7180
  goto L_801D71D0; // 801D7184
L_801D7188:;
  c->r[23]=R32(c->r[23]+0x00000004u); // 801D7188
  cmps(c,0,(int32_t)c->r[23],0); // 801D718C
  if (!crb(c,2)) { goto L_801D71A8; } // 801D7190
  c->r[3]=c->r[24]+0xFFFFE044u; // 801D7194
  c->r[5]=c->r[25]+0xFFFFE020u; // 801D7198
  c->r[4]=0u+0x0000023Du; // 801D719C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D71A0
  c->lr=0x801D71A8u; f_801F9770(c); // 801D71A4
L_801D71A8:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D71A8
  if (crb(c,2)) { goto L_801D71D0; } // 801D71AC
  c->r[12]=R32(c->r[23]+0x00000010u); // 801D71B0
  cmps(c,0,(int32_t)c->r[12],0); // 801D71B4
  if (crb(c,2)) { goto L_801D71D0; } // 801D71B8
  c->r[3]=R32(c->r[23]+0x00000008u); // 801D71BC
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 801D71C0
  c->r[5]=R32(c->r[23]+0x00000014u); // 801D71C4
  c->ctr=c->r[12]; // 801D71C8
  if (true) { c->lr=0x801D71D0u; dispatch(c,c->ctr); } // 801D71CC
L_801D71D0:;
  c->r[0]=R32(c->r[16]+0x0000000Cu); // 801D71D0
  cmpu(c,0,c->r[23],c->r[0]); // 801D71D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7188; } // 801D71D8
  c->r[3]=addc(c,c->r[16],0x00000008u,0); cr0(c,c->r[3]); // 801D71DC
  if (crb(c,2)) { goto L_801D71EC; } // 801D71E0
  c->r[4]=0u+0x00000000u; // 801D71E4
  c->lr=0x801D71ECu; f_801F9DB0(c); // 801D71E8
L_801D71EC:;
  cmps(c,0,(int32_t)c->r[16],0); // 801D71EC
  if (!crb(c,2)) { goto L_801D7208; } // 801D71F0
  c->r[3]=c->r[26]+0xFFFFE074u; // 801D71F4
  c->r[5]=c->r[27]+0xFFFFE050u; // 801D71F8
  c->r[4]=0u+0x00000233u; // 801D71FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7200
  c->lr=0x801D7208u; f_801F9770(c); // 801D7204
L_801D7208:;
  c->r[4]=c->r[16]|c->r[16]; // 801D7208
  c->r[3]=c->r[29]+0x00000004u; // 801D720C
  c->lr=0x801D7214u; f_801FA230(c); // 801D7210
L_801D7214:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D7214
  cmps(c,0,(int32_t)c->r[0],0); // 801D7218
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7120; } // 801D721C
L_801D7220:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D7220
  c->r[4]=0u+0x00000003u; // 801D7224
  c->lr=0x801D722Cu; f_800F16B0(c); // 801D7228
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D722C
  c->lr=0x801D7234u; f_800F1560(c); // 801D7230
  c->r[0]=0u+0x00000000u; // 801D7234
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D7238
L_801D723C:;
  c->r[0]=c->r[30]+0x00000003u; // 801D723C
  c->r[4]=c->r[30]+c->r[31]; // 801D7240
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D7244
  cmpu(c,0,c->r[3],c->r[4]); // 801D7248
  if (!crb(c,1)) { goto L_801D7258; } // 801D724C
  c->r[3]=0u+0x00000000u; // 801D7250
  goto L_801D7314; // 801D7254
L_801D7258:;
  c->r[4]=c->r[4]-c->r[3]; // 801D7258
  c->r[5]=0u+0x00000000u; // 801D725C
  c->lr=0x801D7264u; f_800F14D0(c); // 801D7260
  cmps(c,0,(int32_t)c->r[3],0); // 801D7264
  W32(c->r[29]+0x00000000u,c->r[3]); // 801D7268
  if (!crb(c,2)) { goto L_801D7278; } // 801D726C
  c->r[3]=0u+0x00000000u; // 801D7270
  goto L_801D7314; // 801D7274
L_801D7278:;
  c->r[4]=0u+0x00000014u; // 801D7278
  c->r[5]=0u+0x00000004u; // 801D727C
  c->lr=0x801D7284u; f_800F1590(c); // 801D7280
  cmps(c,0,(int32_t)c->r[3],0); // 801D7284
  if (!crb(c,2)) { goto L_801D7294; } // 801D7288
  c->r[0]=0u+0x00000000u; // 801D728C
  goto L_801D7300; // 801D7290
L_801D7294:;
  c->r[17]=c->r[3]|c->r[3]; // 801D7294
  if (crb(c,2)) { goto L_801D72C0; } // 801D7298
  c->r[0]=0u+0x00000000u; // 801D729C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D72A0
  c->r[4]=c->r[3]+0x0000000Cu; // 801D72A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D72A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D72AC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D72B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D72B4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801D72B8
  W32(c->r[3]+0x00000010u,c->r[4]); // 801D72BC
L_801D72C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D72C0
  c->r[28]=c->r[29]+0x00000008u; // 801D72C4
  if (!crb(c,2)) { goto L_801D72E8; } // 801D72C8
  c->r[3]=0u+0x802D0000u; // 801D72CC
  c->r[5]=0u+0x802D0000u; // 801D72D0
  c->r[3]=c->r[3]+0xFFFFE074u; // 801D72D4
  c->r[4]=0u+0x00000233u; // 801D72D8
  c->r[5]=c->r[5]+0xFFFFE050u; // 801D72DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D72E0
  c->lr=0x801D72E8u; f_801F9770(c); // 801D72E4
L_801D72E8:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 801D72E8
  c->r[5]=c->r[17]|c->r[17]; // 801D72EC
  c->r[3]=c->r[29]+0x00000004u; // 801D72F0
  c->r[4]=c->r[1]+0x00000008u; // 801D72F4
  c->lr=0x801D72FCu; f_801FA130(c); // 801D72F8
  c->r[0]=0u+0x00000001u; // 801D72FC
L_801D7300:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7300
  if (!crb(c,2)) { goto L_801D7310; } // 801D7304
  c->r[3]=0u+0x00000000u; // 801D7308
  goto L_801D7314; // 801D730C
L_801D7310:;
  c->r[3]=0u+0x00000001u; // 801D7310
L_801D7314:;
  c->r[11]=c->r[1]+0x00000050u; // 801D7314
  c->lr=0x801D731Cu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7318
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D731C
  c->lr=c->r[0]; // 801D7320
  c->r[1]=c->r[1]+0x00000050u; // 801D7324
  return; // 801D7328
}

// fn_801D7330
void f_801D7330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7330
  c->r[0]=c->lr; // 801D7334
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D7338
  c->r[11]=c->r[1]+0x00000040u; // 801D733C
  c->lr=0x801D7344u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7340
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D7344
  c->r[31]=c->r[3]|c->r[3]; // 801D7348
  cmps(c,0,(int32_t)c->r[0],0); // 801D734C
  if (crb(c,2)) { goto L_801D74AC; } // 801D7350
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D7354
  cmps(c,0,(int32_t)c->r[0],0); // 801D7358
  if (crb(c,2)) { goto L_801D7490; } // 801D735C
  c->r[30]=c->r[3]+0x00000008u; // 801D7360
  c->r[26]=0u+0x802D0000u; // 801D7364
  c->r[27]=0u+0x802D0000u; // 801D7368
  c->r[19]=0u+0x802D0000u; // 801D736C
  c->r[20]=0u+0x802D0000u; // 801D7370
  c->r[21]=0u+0x802D0000u; // 801D7374
  c->r[22]=0u+0x802D0000u; // 801D7378
  c->r[23]=0u+0x802D0000u; // 801D737C
  c->r[24]=0u+0x802D0000u; // 801D7380
  c->r[28]=0u+0x802D0000u; // 801D7384
  c->r[29]=0u+0x802D0000u; // 801D7388
  goto L_801D7484; // 801D738C
L_801D7390:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7390
  if (!crb(c,2)) { goto L_801D73AC; } // 801D7394
  c->r[3]=c->r[19]+0xFFFFE104u; // 801D7398
  c->r[5]=c->r[20]+0xFFFFE0E0u; // 801D739C
  c->r[4]=0u+0x000001FBu; // 801D73A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D73A4
  c->lr=0x801D73ACu; f_801F9770(c); // 801D73A8
L_801D73AC:;
  c->r[18]=R32(c->r[30]+0x00000004u); // 801D73AC
  cmps(c,0,(int32_t)c->r[18],0); // 801D73B0
  if (!crb(c,2)) { goto L_801D73CC; } // 801D73B4
  c->r[3]=c->r[21]+0xFFFFE0A4u; // 801D73B8
  c->r[5]=c->r[22]+0xFFFFE080u; // 801D73BC
  c->r[4]=0u+0x0000023Du; // 801D73C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D73C4
  c->lr=0x801D73CCu; f_801F9770(c); // 801D73C8
L_801D73CC:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D73CC
  if (!crb(c,2)) { goto L_801D73E8; } // 801D73D0
  c->r[3]=c->r[23]+0xFFFFE0D4u; // 801D73D4
  c->r[5]=c->r[24]+0xFFFFE0B0u; // 801D73D8
  c->r[4]=0u+0x00000193u; // 801D73DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D73E0
  c->lr=0x801D73E8u; f_801F9770(c); // 801D73E4
L_801D73E8:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D73E8
  if (crb(c,2)) { goto L_801D745C; } // 801D73EC
  c->r[25]=c->r[18]+0x0000000Cu; // 801D73F0
  goto L_801D7440; // 801D73F4
L_801D73F8:;
  c->r[25]=R32(c->r[25]+0x00000004u); // 801D73F8
  cmps(c,0,(int32_t)c->r[25],0); // 801D73FC
  if (!crb(c,2)) { goto L_801D7418; } // 801D7400
  c->r[3]=c->r[26]+0xFFFFE044u; // 801D7404
  c->r[5]=c->r[27]+0xFFFFE020u; // 801D7408
  c->r[4]=0u+0x0000023Du; // 801D740C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7410
  c->lr=0x801D7418u; f_801F9770(c); // 801D7414
L_801D7418:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D7418
  if (crb(c,2)) { goto L_801D7440; } // 801D741C
  c->r[12]=R32(c->r[25]+0x00000010u); // 801D7420
  cmps(c,0,(int32_t)c->r[12],0); // 801D7424
  if (crb(c,2)) { goto L_801D7440; } // 801D7428
  c->r[3]=R32(c->r[25]+0x00000008u); // 801D742C
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 801D7430
  c->r[5]=R32(c->r[25]+0x00000014u); // 801D7434
  c->ctr=c->r[12]; // 801D7438
  if (true) { c->lr=0x801D7440u; dispatch(c,c->ctr); } // 801D743C
L_801D7440:;
  c->r[0]=R32(c->r[18]+0x0000000Cu); // 801D7440
  cmpu(c,0,c->r[25],c->r[0]); // 801D7444
  if (!crb(c,2)) { IRQCHK(c); goto L_801D73F8; } // 801D7448
  c->r[3]=addc(c,c->r[18],0x00000008u,0); cr0(c,c->r[3]); // 801D744C
  if (crb(c,2)) { goto L_801D745C; } // 801D7450
  c->r[4]=0u+0x00000000u; // 801D7454
  c->lr=0x801D745Cu; f_801F9DB0(c); // 801D7458
L_801D745C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D745C
  if (!crb(c,2)) { goto L_801D7478; } // 801D7460
  c->r[3]=c->r[28]+0xFFFFE074u; // 801D7464
  c->r[5]=c->r[29]+0xFFFFE050u; // 801D7468
  c->r[4]=0u+0x00000233u; // 801D746C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7470
  c->lr=0x801D7478u; f_801F9770(c); // 801D7474
L_801D7478:;
  c->r[4]=c->r[18]|c->r[18]; // 801D7478
  c->r[3]=c->r[31]+0x00000004u; // 801D747C
  c->lr=0x801D7484u; f_801FA230(c); // 801D7480
L_801D7484:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D7484
  cmps(c,0,(int32_t)c->r[0],0); // 801D7488
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7390; } // 801D748C
L_801D7490:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7490
  c->r[4]=0u+0x00000003u; // 801D7494
  c->lr=0x801D749Cu; f_800F16B0(c); // 801D7498
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D749C
  c->lr=0x801D74A4u; f_800F1560(c); // 801D74A0
  c->r[0]=0u+0x00000000u; // 801D74A4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D74A8
L_801D74AC:;
  c->r[11]=c->r[1]+0x00000040u; // 801D74AC
  c->lr=0x801D74B4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D74B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D74B4
  c->lr=c->r[0]; // 801D74B8
  c->r[1]=c->r[1]+0x00000040u; // 801D74BC
  return; // 801D74C0
}

// fn_801D74D0
void f_801D74D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D74D0
  c->r[0]=c->lr; // 801D74D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D74D8
  c->r[11]=c->r[1]+0x00000030u; // 801D74DC
  c->lr=0x801D74E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D74E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D74E4
  c->r[30]=0u+0x802D0000u; // 801D74E8
  c->r[25]=c->r[3]|c->r[3]; // 801D74EC
  c->r[26]=c->r[4]|c->r[4]; // 801D74F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D74F4
  c->r[27]=c->r[5]|c->r[5]; // 801D74F8
  c->r[31]=c->r[6]|c->r[6]; // 801D74FC
  c->r[30]=c->r[30]+0xFFFFDE48u; // 801D7500
  if (!crb(c,2)) { goto L_801D751C; } // 801D7504
  c->r[3]=c->r[30]+0x00000000u; // 801D7508
  c->r[5]=c->r[30]+0x00000048u; // 801D750C
  c->r[4]=0u+0x000000A1u; // 801D7510
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7514
  c->lr=0x801D751Cu; f_801F9770(c); // 801D7518
L_801D751C:;
  c->r[0]=c->r[26]+0x0000001Fu; // 801D751C
  c->r[3]=R32(c->r[25]+0x00000000u); // 801D7520
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801D7524
  c->r[5]=0u+0x00000020u; // 801D7528
  c->r[4]=c->r[4]+0x00000020u; // 801D752C
  c->lr=0x801D7534u; f_800F1590(c); // 801D7530
  cmps(c,0,(int32_t)c->r[3],0); // 801D7534
  c->r[28]=c->r[3]|c->r[3]; // 801D7538
  if (!crb(c,2)) { goto L_801D7548; } // 801D753C
  c->r[3]=0u+0x00000000u; // 801D7540
  goto L_801D7640; // 801D7544
L_801D7548:;
  c->r[29]=c->r[3]+0x00000020u; // 801D7548
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D754C
  if (crb(c,2)) { goto L_801D7568; } // 801D7550
  c->r[3]=c->r[30]+0x00000000u; // 801D7554
  c->r[5]=c->r[30]+0x00000094u; // 801D7558
  c->r[4]=0u+0x000000ABu; // 801D755C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7560
  c->lr=0x801D7568u; f_801F9770(c); // 801D7564
L_801D7568:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D7568
  if (crb(c,2)) { goto L_801D758C; } // 801D756C
  c->r[0]=0u+0x00000000u; // 801D7570
  W32(c->r[28]+0x00000000u,c->r[0]); // 801D7574
  W32(c->r[28]+0x00000004u,c->r[0]); // 801D7578
  W32(c->r[28]+0x00000008u,c->r[29]); // 801D757C
  W32(c->r[28]+0x0000000Cu,c->r[26]); // 801D7580
  W32(c->r[28]+0x00000010u,c->r[27]); // 801D7584
  W32(c->r[28]+0x00000014u,c->r[31]); // 801D7588
L_801D758C:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 801D758C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7590
  if (!crb(c,2)) { goto L_801D75B4; } // 801D7594
  c->r[3]=0u+0x802D0000u; // 801D7598
  c->r[5]=0u+0x802D0000u; // 801D759C
  c->r[3]=c->r[3]+0xFFFFE104u; // 801D75A0
  c->r[4]=0u+0x000001FBu; // 801D75A4
  c->r[5]=c->r[5]+0xFFFFE0E0u; // 801D75A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D75AC
  c->lr=0x801D75B4u; f_801F9770(c); // 801D75B0
L_801D75B4:;
  c->r[30]=R32(c->r[25]+0x0000000Cu); // 801D75B4
  cmps(c,0,(int32_t)c->r[30],0); // 801D75B8
  if (!crb(c,2)) { goto L_801D75DC; } // 801D75BC
  c->r[3]=0u+0x802D0000u; // 801D75C0
  c->r[5]=0u+0x802D0000u; // 801D75C4
  c->r[3]=c->r[3]+0xFFFFE0A4u; // 801D75C8
  c->r[4]=0u+0x0000023Du; // 801D75CC
  c->r[5]=c->r[5]+0xFFFFE080u; // 801D75D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D75D4
  c->lr=0x801D75DCu; f_801F9770(c); // 801D75D8
L_801D75DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D75DC
  if (!crb(c,2)) { goto L_801D7600; } // 801D75E0
  c->r[3]=0u+0x802D0000u; // 801D75E4
  c->r[5]=0u+0x802D0000u; // 801D75E8
  c->r[3]=c->r[3]+0xFFFFE0D4u; // 801D75EC
  c->r[4]=0u+0x00000193u; // 801D75F0
  c->r[5]=c->r[5]+0xFFFFE0B0u; // 801D75F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D75F8
  c->lr=0x801D7600u; f_801F9770(c); // 801D75FC
L_801D7600:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D7600
  c->r[31]=c->r[30]+0x0000000Cu; // 801D7604
  if (!crb(c,2)) { goto L_801D7628; } // 801D7608
  c->r[3]=0u+0x802D0000u; // 801D760C
  c->r[5]=0u+0x802D0000u; // 801D7610
  c->r[3]=c->r[3]+0xFFFFE134u; // 801D7614
  c->r[4]=0u+0x00000233u; // 801D7618
  c->r[5]=c->r[5]+0xFFFFE110u; // 801D761C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7620
  c->lr=0x801D7628u; f_801F9770(c); // 801D7624
L_801D7628:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D7628
  c->r[5]=c->r[28]|c->r[28]; // 801D762C
  c->r[3]=c->r[30]+0x00000008u; // 801D7630
  c->r[4]=c->r[1]+0x00000008u; // 801D7634
  c->lr=0x801D763Cu; f_801FA130(c); // 801D7638
  c->r[3]=c->r[29]|c->r[29]; // 801D763C
L_801D7640:;
  c->r[11]=c->r[1]+0x00000030u; // 801D7640
  c->lr=0x801D7648u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7644
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7648
  c->lr=c->r[0]; // 801D764C
  c->r[1]=c->r[1]+0x00000030u; // 801D7650
  return; // 801D7654
}

// fn_801D7660
void f_801D7660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7660
  c->r[0]=c->lr; // 801D7664
  cmps(c,0,(int32_t)c->r[4],0); // 801D7668
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D766C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7670
  c->r[31]=c->r[3]|c->r[3]; // 801D7674
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7678
  c->r[30]=c->r[6]|c->r[6]; // 801D767C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7680
  c->r[29]=c->r[5]|c->r[5]; // 801D7684
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D7688
  c->r[28]=c->r[4]|c->r[4]; // 801D768C
  if (!crb(c,2)) { goto L_801D76B0; } // 801D7690
  c->r[3]=0u+0x802D0000u; // 801D7694
  c->r[5]=0u+0x802D0000u; // 801D7698
  c->r[3]=c->r[3]+0xFFFFE140u; // 801D769C
  c->r[4]=0u+0x00000026u; // 801D76A0
  c->r[5]=c->r[5]+0xFFFFE158u; // 801D76A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D76A8
  c->lr=0x801D76B0u; f_801F9770(c); // 801D76AC
L_801D76B0:;
  c->lr=0x801D76B4u; f_800CBAA0(c); // 801D76B0
  c->r[0]=c->r[28]+0x00000003u; // 801D76B4
  c->r[4]=c->r[30]+0x00000003u; // 801D76B8
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D76BC
  c->r[7]=0u+0x00000000u; // 801D76C0
  c->r[0]=c->r[6]-c->r[28]; // 801D76C4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801D76C8
  c->r[0]=c->r[29]-c->r[0]; // 801D76CC
  c->r[30]=divwu(c->r[0],c->r[4]); cr0(c,c->r[30]); // 801D76D0
  if (crb(c,2)) { goto L_801D77A0; } // 801D76D4
  cmpu(c,0,c->r[30],0x00000008u); // 801D76D8
  c->r[5]=c->r[30]+0xFFFFFFF8u; // 801D76DC
  if (!crb(c,1)) { goto L_801D777C; } // 801D76E0
  c->r[0]=c->r[5]+0x00000007u; // 801D76E4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D76E8
  c->ctr=c->r[0]; // 801D76EC
  cmpu(c,0,c->r[5],0x00000000u); // 801D76F0
  if (!crb(c,1)) { goto L_801D777C; } // 801D76F4
L_801D76F8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D76F8
  c->r[8]=c->r[6]|c->r[6]; // 801D76FC
  W32(c->r[6]+0x00000000u,c->r[0]); // 801D7700
  c->r[7]=c->r[7]+0x00000008u; // 801D7704
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7708
  c->r[6]=c->r[6]+c->r[4]; // 801D770C
  c->r[5]=c->r[6]|c->r[6]; // 801D7710
  W32(c->r[6]+0x00000000u,c->r[8]); // 801D7714
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7718
  c->r[6]=c->r[6]+c->r[4]; // 801D771C
  c->r[0]=c->r[6]|c->r[6]; // 801D7720
  W32(c->r[6]+0x00000000u,c->r[5]); // 801D7724
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7728
  c->r[6]=c->r[6]+c->r[4]; // 801D772C
  c->r[5]=c->r[6]|c->r[6]; // 801D7730
  W32(c->r[6]+0x00000000u,c->r[0]); // 801D7734
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7738
  c->r[6]=c->r[6]+c->r[4]; // 801D773C
  c->r[0]=c->r[6]|c->r[6]; // 801D7740
  W32(c->r[6]+0x00000000u,c->r[5]); // 801D7744
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7748
  c->r[6]=c->r[6]+c->r[4]; // 801D774C
  c->r[5]=c->r[6]|c->r[6]; // 801D7750
  W32(c->r[6]+0x00000000u,c->r[0]); // 801D7754
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7758
  c->r[6]=c->r[6]+c->r[4]; // 801D775C
  c->r[0]=c->r[6]|c->r[6]; // 801D7760
  W32(c->r[6]+0x00000000u,c->r[5]); // 801D7764
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7768
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[0]); c->r[6]=ea;} // 801D776C
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7770
  c->r[6]=c->r[6]+c->r[4]; // 801D7774
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D76F8; } // 801D7778
L_801D777C:;
  c->r[0]=c->r[30]-c->r[7]; // 801D777C
  c->ctr=c->r[0]; // 801D7780
  cmpu(c,0,c->r[7],c->r[30]); // 801D7784
  if (!crb(c,0)) { goto L_801D77A0; } // 801D7788
L_801D778C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D778C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801D7790
  W32(c->r[31]+0x00000000u,c->r[6]); // 801D7794
  c->r[6]=c->r[6]+c->r[4]; // 801D7798
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D778C; } // 801D779C
L_801D77A0:;
  c->lr=0x801D77A4u; f_800CBAE0(c); // 801D77A0
  c->r[3]=c->r[30]|c->r[30]; // 801D77A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D77A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D77AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D77B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D77B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D77B8
  c->lr=c->r[0]; // 801D77BC
  c->r[1]=c->r[1]+0x00000020u; // 801D77C0
  return; // 801D77C4
}

// fn_801D77D0
void f_801D77D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D77D0
  c->r[0]=c->lr; // 801D77D4
  cmps(c,0,(int32_t)c->r[4],0); // 801D77D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D77DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D77E0
  c->r[31]=c->r[5]|c->r[5]; // 801D77E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D77E8
  c->r[30]=c->r[4]|c->r[4]; // 801D77EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D77F0
  c->r[29]=c->r[3]|c->r[3]; // 801D77F4
  if (!crb(c,2)) { goto L_801D7818; } // 801D77F8
  c->r[3]=0u+0x802D0000u; // 801D77FC
  c->r[5]=0u+0x802D0000u; // 801D7800
  c->r[3]=c->r[3]+0xFFFFE140u; // 801D7804
  c->r[4]=0u+0x00000044u; // 801D7808
  c->r[5]=c->r[5]+0xFFFFE158u; // 801D780C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7810
  c->lr=0x801D7818u; f_801F9770(c); // 801D7814
L_801D7818:;
  c->lr=0x801D781Cu; f_800CBAA0(c); // 801D7818
  c->r[5]=R32(c->r[29]+0x00000000u); // 801D781C
  c->r[4]=c->r[30]+c->r[31]; // 801D7820
  goto L_801D784C; // 801D7824
L_801D7828:;
  cmpu(c,0,c->r[30],c->r[5]); // 801D7828
  if (crb(c,1)) { goto L_801D7844; } // 801D782C
  cmpu(c,0,c->r[5],c->r[4]); // 801D7830
  if (!crb(c,0)) { goto L_801D7844; } // 801D7834
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D7838
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D783C
  goto L_801D7848; // 801D7840
L_801D7844:;
  c->r[29]=c->r[5]|c->r[5]; // 801D7844
L_801D7848:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801D7848
L_801D784C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D784C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7828; } // 801D7850
  c->lr=0x801D7858u; f_800CBAE0(c); // 801D7854
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D785C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7860
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7864
  c->lr=c->r[0]; // 801D7868
  c->r[1]=c->r[1]+0x00000020u; // 801D786C
  return; // 801D7870
}

// fn_801D7880
void f_801D7880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7880
  c->r[0]=c->lr; // 801D7884
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D788C
  c->r[31]=c->r[3]|c->r[3]; // 801D7890
  c->lr=0x801D7898u; f_800CBAA0(c); // 801D7894
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D7898
  c->r[31]=0u+0x00000000u; // 801D789C
  goto L_801D78B0; // 801D78A0
  c->r[0]=c->r[0]|0x00000000u; // 801D78A4
L_801D78A8:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801D78A8
  c->r[31]=c->r[31]+0x00000001u; // 801D78AC
L_801D78B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D78B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D78A8; } // 801D78B4
  c->lr=0x801D78BCu; f_800CBAE0(c); // 801D78B8
  c->r[3]=c->r[31]|c->r[31]; // 801D78BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D78C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D78C4
  c->lr=c->r[0]; // 801D78C8
  c->r[1]=c->r[1]+0x00000010u; // 801D78CC
  return; // 801D78D0
}

// AllocImpl__Q44nw4r3snd6detail8PoolImplFv
void f_801D78E0(Ctx* __restrict c) {
  trace_call(0x801D78E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D78E0
  c->r[0]=c->lr; // 801D78E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D78E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D78EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D78F0
  c->r[30]=c->r[3]|c->r[3]; // 801D78F4
  c->lr=0x801D78FCu; f_800CBAA0(c); // 801D78F8
  c->r[31]=R32(c->r[30]+0x00000000u); // 801D78FC
  cmps(c,0,(int32_t)c->r[31],0); // 801D7900
  if (!crb(c,2)) { goto L_801D7914; } // 801D7904
  c->lr=0x801D790Cu; f_800CBAE0(c); // 801D7908
  c->r[3]=0u+0x00000000u; // 801D790C
  goto L_801D7924; // 801D7910
L_801D7914:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D7914
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D7918
  c->lr=0x801D7920u; f_800CBAE0(c); // 801D791C
  c->r[3]=c->r[31]|c->r[31]; // 801D7920
L_801D7924:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7928
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D792C
  c->lr=c->r[0]; // 801D7930
  c->r[1]=c->r[1]+0x00000010u; // 801D7934
  return; // 801D7938
}

// FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
void f_801D7940(Ctx* __restrict c) {
  trace_call(0x801D7940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7940
  c->r[0]=c->lr; // 801D7944
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D794C
  c->r[31]=c->r[4]|c->r[4]; // 801D7950
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7954
  c->r[30]=c->r[3]|c->r[3]; // 801D7958
  c->lr=0x801D7960u; f_800CBAA0(c); // 801D795C
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D7960
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D7964
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D7968
  c->lr=0x801D7970u; f_800CBAE0(c); // 801D796C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7974
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7978
  c->lr=c->r[0]; // 801D797C
  c->r[1]=c->r[1]+0x00000010u; // 801D7980
  return; // 801D7984
}

// Init__Q44nw4r3snd6detail8LfoParamFv
void f_801D7990(Ctx* __restrict c) {
  trace_call(0x801D7990u);
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7990
  c->r[4]=0u+0x00000001u; // 801D7994
  {uint32_t ea=c->r[2]+0xFFFF9E1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7998
  c->r[0]=0u+0x00000000u; // 801D799C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801D79A0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801D79A4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D79A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D79AC
  return; // 801D79B0
}

// fn_801D79C0
void f_801D79C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D79C0
  c->r[0]=0u+0x00000000u; // 801D79C4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801D79C8
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D79CC
  return; // 801D79D0
}

// fn_801D79E0
void f_801D79E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D79E0
  c->r[6]=R32(c->r[3]+0x00000008u); // 801D79E4
  c->r[5]=R32(c->r[3]+0x00000010u); // 801D79E8
  cmpu(c,0,c->r[5],c->r[6]); // 801D79EC
  if (!crb(c,0)) { goto L_801D7A14; } // 801D79F0
  c->r[0]=c->r[5]+c->r[4]; // 801D79F4
  cmpu(c,0,c->r[0],c->r[6]); // 801D79F8
  if (crb(c,1)) { goto L_801D7A08; } // 801D79FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D7A00
  goto L_801D7A70; // 801D7A04
L_801D7A08:;
  c->r[0]=c->r[6]-c->r[5]; // 801D7A08
  W32(c->r[3]+0x00000010u,c->r[6]); // 801D7A0C
  c->r[4]=c->r[4]-c->r[0]; // 801D7A10
L_801D7A14:;
  c->r[0]=0u+0x43300000u; // 801D7A14
  c->r[4]=c->r[4]^0x80000000u; // 801D7A18
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D7A1C
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[4]=RF64(ea);} // 801D7A20
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D7A24
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7A28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D7A2C
  {uint32_t ea=c->r[2]+0xFFFF9E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7A30
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D7A34
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7A38
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D7A3C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 801D7A40
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801D7A44
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801D7A48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801D7A4C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D7A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7A54
  c->r[0]=c->r[0]^0x80000000u; // 801D7A58
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D7A5C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801D7A60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D7A64
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D7A68
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801D7A6C
L_801D7A70:;
  c->r[1]=c->r[1]+0x00000020u; // 801D7A70
  return; // 801D7A74
}

// fn_801D7A80
void f_801D7A80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7A80
  c->r[0]=c->lr; // 801D7A84
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7A88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7A8C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7A90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7A94
  c->r[31]=c->r[3]|c->r[3]; // 801D7A98
  fcmp(c,0,c->f[1],c->f[0]); // 801D7A9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7AA0
  if (!crb(c,2)) { goto L_801D7AAC; } // 801D7AA4
  goto L_801D7BE4; // 801D7AA8
L_801D7AAC:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801D7AAC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D7AB0
  cmpu(c,0,c->r[4],c->r[0]); // 801D7AB4
  if (!crb(c,0)) { goto L_801D7AC0; } // 801D7AB8
  goto L_801D7BE4; // 801D7ABC
L_801D7AC0:;
  {uint32_t ea=c->r[2]+0xFFFF9E34u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7AC0
  c->r[0]=0u+0x00000000u; // 801D7AC4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7AC8
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7ACC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D7AD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D7AD4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D7AD8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801D7ADC
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 801D7AE0
  cmpu(c,0,c->r[30],0x0000007Fu); // 801D7AE4
  if (crb(c,1)) { goto L_801D7AF0; } // 801D7AE8
  c->r[0]=0u+0x00000001u; // 801D7AEC
L_801D7AF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7AF0
  if (!crb(c,2)) { goto L_801D7B20; } // 801D7AF4
  c->r[3]=0u+0x802D0000u; // 801D7AF8
  c->r[5]=0u+0x802D0000u; // 801D7AFC
  c->r[6]=c->r[30]|c->r[30]; // 801D7B00
  c->r[4]=0u+0x0000007Bu; // 801D7B04
  c->r[3]=c->r[3]+0xFFFFE180u; // 801D7B08
  c->r[5]=c->r[5]+0xFFFFE18Cu; // 801D7B0C
  c->r[7]=0u+0x00000000u; // 801D7B10
  c->r[8]=0u+0x00000080u; // 801D7B14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7B18
  c->lr=0x801D7B20u; f_801F9770(c); // 801D7B1C
L_801D7B20:;
  cmps(c,0,(int32_t)c->r[30],32); // 801D7B20
  if (!crb(c,0)) { goto L_801D7B3C; } // 801D7B24
  c->r[3]=0u+0x80240000u; // 801D7B28
  c->r[3]=c->r[3]+0xFFFF8548u; // 801D7B2C
  c->r[0]=R8(c->r[3]+c->r[30]); // 801D7B30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D7B34
  goto L_801D7B9C; // 801D7B38
L_801D7B3C:;
  cmps(c,0,(int32_t)c->r[30],64); // 801D7B3C
  if (!crb(c,0)) { goto L_801D7B5C; } // 801D7B40
  c->r[3]=0u+0x80240000u; // 801D7B44
  c->r[0]=addc(c,~c->r[30],0x00000040u,1); // 801D7B48
  c->r[3]=c->r[3]+0xFFFF8548u; // 801D7B4C
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D7B50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D7B54
  goto L_801D7B9C; // 801D7B58
L_801D7B5C:;
  cmps(c,0,(int32_t)c->r[30],96); // 801D7B5C
  if (!crb(c,0)) { goto L_801D7B80; } // 801D7B60
  c->r[3]=0u+0x80240000u; // 801D7B64
  c->r[3]=c->r[3]+0xFFFF8548u; // 801D7B68
  c->r[3]=c->r[30]+c->r[3]; // 801D7B6C
  c->r[0]=R8(c->r[3]+0xFFFFFFC0u); // 801D7B70
  c->r[0]=0u-c->r[0]; // 801D7B74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D7B78
  goto L_801D7B9C; // 801D7B7C
L_801D7B80:;
  c->r[0]=c->r[30]+0xFFFFFFA0u; // 801D7B80
  c->r[3]=0u+0x80240000u; // 801D7B84
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 801D7B88
  c->r[3]=c->r[3]+0xFFFF8548u; // 801D7B8C
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D7B90
  c->r[0]=0u-c->r[0]; // 801D7B94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D7B98
L_801D7B9C:;
  c->r[3]=0u+0x43300000u; // 801D7B9C
  c->r[0]=c->r[0]^0x80000000u; // 801D7BA0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D7BA4
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[2]=RF64(ea);} // 801D7BA8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D7BAC
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801D7BB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D7BB4
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7BB8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D7BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7BC0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D7BC4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D7BC8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D7BCC
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[2]=RF64(ea);} // 801D7BD0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D7BD4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801D7BD8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D7BDC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801D7BE0
L_801D7BE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7BE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7BE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7BEC
  c->lr=c->r[0]; // 801D7BF0
  c->r[1]=c->r[1]+0x00000020u; // 801D7BF4
  return; // 801D7BF8
}

// fn_801D7C00
void f_801D7C00(Ctx* __restrict c) {
  f_801DB870(c); return; // 801D7C00
}

// fn_801D7C10
void f_801D7C10(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D7C10
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D7C14
  c->ctr=c->r[12]; // 801D7C18
  if (true) { dispatch(c,c->ctr); return; } // 801D7C1C
}

// fn_801D7C20
void f_801D7C20(Ctx* __restrict c) {
  return; // 801D7C20
}

// fn_801D7C30
void f_801D7C30(Ctx* __restrict c) {
  return; // 801D7C30
}

// fn_801D7C40
void f_801D7C40(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CEu); // 801D7C40
  return; // 801D7C44
}

// fn_801D7C50
void f_801D7C50(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CDu); // 801D7C50
  return; // 801D7C54
}

// fn_801D7C60
void f_801D7C60(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CCu); // 801D7C60
  return; // 801D7C64
}

// fn_801D7C70
void f_801D7C70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801D7C70
  f_801D7C20(c); return; // 801D7C74
}

// fn_801D7C80
void f_801D7C80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801D7C80
  f_801DB440(c); return; // 801D7C84
}

// fn_801D7C90
void f_801D7C90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801D7C90
  f_801D7C10(c); return; // 801D7C94
}

// fn_801D7CA0
void f_801D7CA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801D7CA0
  f_801D7C00(c); return; // 801D7CA4
}

// fn_801D7CB0
void f_801D7CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7CB0
  c->r[0]=c->lr; // 801D7CB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D7CB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7CBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7CC0
  c->r[31]=c->r[3]|c->r[3]; // 801D7CC4
  if (crb(c,2)) { goto L_801D7CD8; } // 801D7CC8
  cmps(c,0,(int32_t)c->r[4],0); // 801D7CCC
  if (!crb(c,1)) { goto L_801D7CD8; } // 801D7CD0
  c->lr=0x801D7CD8u; f_800B9AD0(c); // 801D7CD4
L_801D7CD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D7CD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7CDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7CE0
  c->lr=c->r[0]; // 801D7CE4
  c->r[1]=c->r[1]+0x00000010u; // 801D7CE8
  return; // 801D7CEC
}

// fn_801D7CF0
void f_801D7CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7CF0
  c->r[0]=c->lr; // 801D7CF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D7CF8
  c->r[11]=c->r[1]+0x00000030u; // 801D7CFC
  c->lr=0x801D7D04u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7D00
  cmps(c,0,(int32_t)c->r[4],0); // 801D7D04
  c->r[31]=0u+0x802D0000u; // 801D7D08
  c->r[22]=c->r[3]|c->r[3]; // 801D7D0C
  c->r[23]=c->r[4]|c->r[4]; // 801D7D10
  c->r[24]=c->r[5]|c->r[5]; // 801D7D14
  c->r[31]=c->r[31]+0xFFFFE1C8u; // 801D7D18
  if (!crb(c,2)) { goto L_801D7D34; } // 801D7D1C
  c->r[3]=c->r[31]+0x00000000u; // 801D7D20
  c->r[5]=c->r[31]+0x00000014u; // 801D7D24
  c->r[4]=0u+0x00000031u; // 801D7D28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7D2C
  c->lr=0x801D7D34u; f_801F9770(c); // 801D7D30
L_801D7D34:;
  c->r[30]=R32(c->r[23]+0x000000C4u); // 801D7D34
  cmps(c,0,(int32_t)c->r[30],0); // 801D7D38
  if (!crb(c,2)) { goto L_801D7D54; } // 801D7D3C
  c->r[3]=c->r[31]+0x00000000u; // 801D7D40
  c->r[5]=c->r[31]+0x0000003Cu; // 801D7D44
  c->r[4]=0u+0x00000033u; // 801D7D48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7D4C
  c->lr=0x801D7D54u; f_801F9770(c); // 801D7D50
L_801D7D54:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 801D7D54
  c->r[27]=0u+0x00000000u; // 801D7D58
  c->r[0]=0u+0x00000000u; // 801D7D5C
  c->r[26]=0u+0x00000001u; // 801D7D60
  c->r[5]=c->r[3]+0x00000001u; // 801D7D64
  W32(c->r[23]+0x00000020u,c->r[5]); // 801D7D68
  c->r[25]=R8(c->r[3]+0x00000000u); // 801D7D6C
  cmpu(c,0,c->r[25],0x000000A2u); // 801D7D70
  if (!crb(c,2)) { goto L_801D7D94; } // 801D7D74
  c->r[4]=R8(c->r[23]+0x00000024u); // 801D7D78
  c->r[3]=c->r[5]+0x00000001u; // 801D7D7C
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D7D80
  c->r[3]=0u-c->r[4]; // 801D7D84
  c->r[3]=c->r[3]|c->r[4]; // 801D7D88
  c->r[25]=R8(c->r[5]+0x00000000u); // 801D7D8C
  c->r[26]=rotl(c->r[3],1)&0x00000001u; // 801D7D90
L_801D7D94:;
  cmpu(c,0,c->r[25],0x000000A3u); // 801D7D94
  if (!crb(c,2)) { goto L_801D7DB4; } // 801D7D98
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D7D9C
  c->r[27]=0u+0x00000002u; // 801D7DA0
  c->r[3]=c->r[4]+0x00000001u; // 801D7DA4
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D7DA8
  c->r[25]=R8(c->r[4]+0x00000000u); // 801D7DAC
  goto L_801D7DF0; // 801D7DB0
L_801D7DB4:;
  cmpu(c,0,c->r[25],0x000000A4u); // 801D7DB4
  if (!crb(c,2)) { goto L_801D7DD4; } // 801D7DB8
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D7DBC
  c->r[27]=0u+0x00000004u; // 801D7DC0
  c->r[3]=c->r[4]+0x00000001u; // 801D7DC4
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D7DC8
  c->r[25]=R8(c->r[4]+0x00000000u); // 801D7DCC
  goto L_801D7DF0; // 801D7DD0
L_801D7DD4:;
  cmpu(c,0,c->r[25],0x000000A5u); // 801D7DD4
  if (!crb(c,2)) { goto L_801D7DF0; } // 801D7DD8
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D7DDC
  c->r[27]=0u+0x00000005u; // 801D7DE0
  c->r[3]=c->r[4]+0x00000001u; // 801D7DE4
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D7DE8
  c->r[25]=R8(c->r[4]+0x00000000u); // 801D7DEC
L_801D7DF0:;
  cmpu(c,0,c->r[25],0x000000A0u); // 801D7DF0
  if (!crb(c,2)) { goto L_801D7E14; } // 801D7DF4
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D7DF8
  c->r[28]=0u+0x00000004u; // 801D7DFC
  c->r[0]=0u+0x00000001u; // 801D7E00
  c->r[3]=c->r[4]+0x00000001u; // 801D7E04
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D7E08
  c->r[25]=R8(c->r[4]+0x00000000u); // 801D7E0C
  goto L_801D7E34; // 801D7E10
L_801D7E14:;
  cmpu(c,0,c->r[25],0x000000A1u); // 801D7E14
  if (!crb(c,2)) { goto L_801D7E34; } // 801D7E18
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D7E1C
  c->r[28]=0u+0x00000005u; // 801D7E20
  c->r[0]=0u+0x00000001u; // 801D7E24
  c->r[3]=c->r[4]+0x00000001u; // 801D7E28
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D7E2C
  c->r[25]=R8(c->r[4]+0x00000000u); // 801D7E30
L_801D7E34:;
  c->r[3]=rotl(c->r[25],0)&0x00000080u; cr0(c,c->r[3]); // 801D7E34
  if (!crb(c,2)) { goto L_801D7F10; } // 801D7E38
  c->r[7]=R32(c->r[23]+0x00000020u); // 801D7E3C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7E40
  c->r[3]=c->r[22]|c->r[22]; // 801D7E44
  c->r[5]=c->r[30]|c->r[30]; // 801D7E48
  c->r[0]=c->r[7]+0x00000001u; // 801D7E4C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801D7E50
  c->r[6]=c->r[23]|c->r[23]; // 801D7E54
  c->r[4]=c->r[23]+0x00000020u; // 801D7E58
  c->r[27]=R8(c->r[7]+0x00000000u); // 801D7E5C
  c->r[7]=0u+0x00000003u; // 801D7E60
  if (crb(c,2)) { goto L_801D7E6C; } // 801D7E64
  c->r[7]=c->r[28]|c->r[28]; // 801D7E68
L_801D7E6C:;
  c->lr=0x801D7E70u; f_801D8F30(c); // 801D7E6C
  c->r[0]=R8(c->r[23]+0x0000008Cu); // 801D7E70
  cmps(c,0,(int32_t)c->r[26],0); // 801D7E74
  c->r[26]=c->r[3]|c->r[3]; // 801D7E78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D7E7C
  c->r[3]=c->r[25]+c->r[0]; // 801D7E80
  if (!crb(c,2)) { goto L_801D7E90; } // 801D7E84
  c->r[3]=0u+0x00000000u; // 801D7E88
  goto L_801D8400; // 801D7E8C
L_801D7E90:;
  cmps(c,0,(int32_t)c->r[3],127); // 801D7E90
  if (!crb(c,1)) { goto L_801D7EA0; } // 801D7E94
  c->r[5]=0u+0x0000007Fu; // 801D7E98
  goto L_801D7EA8; // 801D7E9C
L_801D7EA0:;
  c->r[0]=sraw(c,c->r[3],31); // 801D7EA0
  c->r[5]=c->r[3]&~c->r[0]; // 801D7EA4
L_801D7EA8:;
  c->r[0]=R8(c->r[23]+0x00000048u); // 801D7EA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D7EAC
  if (!crb(c,2)) { goto L_801D7EEC; } // 801D7EB0
  cmps(c,0,(int32_t)c->r[24],0); // 801D7EB4
  if (crb(c,2)) { goto L_801D7EEC; } // 801D7EB8
  cmps(c,0,(int32_t)c->r[26],0); // 801D7EBC
  c->r[3]=c->r[22]|c->r[22]; // 801D7EC0
  c->r[4]=c->r[23]|c->r[23]; // 801D7EC4
  c->r[6]=c->r[27]|c->r[27]; // 801D7EC8
  c->r[7]=0u+0xFFFFFFFFu; // 801D7ECC
  if (!crb(c,1)) { goto L_801D7ED8; } // 801D7ED0
  c->r[7]=c->r[26]|c->r[26]; // 801D7ED4
L_801D7ED8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D7ED8
  c->r[8]=R8(c->r[23]+0x00000026u); // 801D7EDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D7EE0
  c->ctr=c->r[12]; // 801D7EE4
  if (true) { c->lr=0x801D7EECu; dispatch(c,c->ctr); } // 801D7EE8
L_801D7EEC:;
  c->r[0]=R8(c->r[23]+0x00000025u); // 801D7EEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D7EF0
  if (crb(c,2)) { goto L_801D83FC; } // 801D7EF4
  cmps(c,0,(int32_t)c->r[26],0); // 801D7EF8
  W32(c->r[23]+0x00000044u,c->r[26]); // 801D7EFC
  if (!crb(c,2)) { goto L_801D83FC; } // 801D7F00
  c->r[0]=0u+0x00000001u; // 801D7F04
  W8(c->r[23]+0x0000004Au,c->r[0]); // 801D7F08
  goto L_801D83FC; // 801D7F0C
L_801D7F10:;
  c->r[3]=rotl(c->r[25],0)&0x000000F0u; // 801D7F10
  c->r[29]=0u+0x00000000u; // 801D7F14
  cmps(c,0,(int32_t)c->r[3],192); // 801D7F18
  c->r[24]=0u+0x00000000u; // 801D7F1C
  if (crb(c,2)) { goto L_801D8158; } // 801D7F20
  if (!crb(c,0)) { goto L_801D7F58; } // 801D7F24
  cmps(c,0,(int32_t)c->r[3],160); // 801D7F28
  if (crb(c,2)) { goto L_801D83E4; } // 801D7F2C
  if (!crb(c,0)) { goto L_801D7F4C; } // 801D7F30
  cmps(c,0,(int32_t)c->r[3],144); // 801D7F34
  if (crb(c,2)) { goto L_801D81EC; } // 801D7F38
  if (!crb(c,0)) { goto L_801D83FC; } // 801D7F3C
  cmps(c,0,(int32_t)c->r[3],128); // 801D7F40
  if (crb(c,2)) { goto L_801D7F7C; } // 801D7F44
  goto L_801D83FC; // 801D7F48
L_801D7F4C:;
  cmps(c,0,(int32_t)c->r[3],176); // 801D7F4C
  if (crb(c,2)) { goto L_801D8158; } // 801D7F50
  goto L_801D83FC; // 801D7F54
L_801D7F58:;
  cmps(c,0,(int32_t)c->r[3],224); // 801D7F58
  if (crb(c,2)) { goto L_801D821C; } // 801D7F5C
  if (!crb(c,0)) { goto L_801D7F70; } // 801D7F60
  cmps(c,0,(int32_t)c->r[3],208); // 801D7F64
  if (crb(c,2)) { goto L_801D8158; } // 801D7F68
  goto L_801D83FC; // 801D7F6C
L_801D7F70:;
  cmps(c,0,(int32_t)c->r[3],240); // 801D7F70
  if (crb(c,2)) { goto L_801D8270; } // 801D7F74
  goto L_801D83FC; // 801D7F78
L_801D7F7C:;
  cmpu(c,0,c->r[25],0x00000080u); // 801D7F7C
  if (crb(c,2)) { goto L_801D7FA8; } // 801D7F80
  cmpu(c,0,c->r[25],0x00000081u); // 801D7F84
  if (crb(c,2)) { goto L_801D7FDC; } // 801D7F88
  cmpu(c,0,c->r[25],0x00000088u); // 801D7F8C
  if (crb(c,2)) { goto L_801D8030; } // 801D7F90
  cmpu(c,0,c->r[25],0x00000089u); // 801D7F94
  if (crb(c,2)) { goto L_801D8098; } // 801D7F98
  cmpu(c,0,c->r[25],0x0000008Au); // 801D7F9C
  if (crb(c,2)) { goto L_801D80F8; } // 801D7FA0
  goto L_801D83FC; // 801D7FA4
L_801D7FA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7FA8
  c->r[3]=c->r[22]|c->r[22]; // 801D7FAC
  c->r[5]=c->r[30]|c->r[30]; // 801D7FB0
  c->r[6]=c->r[23]|c->r[23]; // 801D7FB4
  c->r[4]=c->r[23]+0x00000020u; // 801D7FB8
  c->r[7]=0u+0x00000003u; // 801D7FBC
  if (crb(c,2)) { goto L_801D7FC8; } // 801D7FC0
  c->r[7]=c->r[28]|c->r[28]; // 801D7FC4
L_801D7FC8:;
  c->lr=0x801D7FCCu; f_801D8F30(c); // 801D7FC8
  cmps(c,0,(int32_t)c->r[26],0); // 801D7FCC
  if (crb(c,2)) { goto L_801D83FC; } // 801D7FD0
  W32(c->r[23]+0x00000044u,c->r[3]); // 801D7FD4
  goto L_801D83FC; // 801D7FD8
L_801D7FDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7FDC
  c->r[3]=c->r[22]|c->r[22]; // 801D7FE0
  c->r[5]=c->r[30]|c->r[30]; // 801D7FE4
  c->r[6]=c->r[23]|c->r[23]; // 801D7FE8
  c->r[4]=c->r[23]+0x00000020u; // 801D7FEC
  c->r[7]=0u+0x00000003u; // 801D7FF0
  if (crb(c,2)) { goto L_801D7FFC; } // 801D7FF4
  c->r[7]=c->r[28]|c->r[28]; // 801D7FF8
L_801D7FFC:;
  c->lr=0x801D8000u; f_801D8F30(c); // 801D7FFC
  cmps(c,0,(int32_t)c->r[26],0); // 801D8000
  c->r[6]=c->r[3]|c->r[3]; // 801D8004
  if (crb(c,2)) { goto L_801D83FC; } // 801D8008
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D800C
  c->r[3]=c->r[22]|c->r[22]; // 801D8010
  c->r[4]=c->r[23]|c->r[23]; // 801D8014
  c->r[5]=c->r[25]|c->r[25]; // 801D8018
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D801C
  c->r[7]=0u+0x00000000u; // 801D8020
  c->ctr=c->r[12]; // 801D8024
  if (true) { c->lr=0x801D802Cu; dispatch(c,c->ctr); } // 801D8028
  goto L_801D83FC; // 801D802C
L_801D8030:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 801D8030
  cmps(c,0,(int32_t)c->r[26],0); // 801D8034
  c->r[4]=c->r[3]+0x00000001u; // 801D8038
  W32(c->r[23]+0x00000020u,c->r[4]); // 801D803C
  c->r[5]=c->r[4]+0x00000001u; // 801D8040
  c->r[6]=R8(c->r[3]+0x00000000u); // 801D8044
  c->r[3]=c->r[5]+0x00000001u; // 801D8048
  c->r[0]=c->r[3]+0x00000001u; // 801D804C
  W32(c->r[23]+0x00000020u,c->r[5]); // 801D8050
  c->r[4]=R8(c->r[4]+0x00000000u); // 801D8054
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D8058
  c->r[7]=R8(c->r[5]+0x00000000u); // 801D805C
  c->r[7]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801D8060
  W32(c->r[23]+0x00000020u,c->r[0]); // 801D8064
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 801D8068
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D806C
  c->r[7]=c->r[7]|c->r[0]; // 801D8070
  if (crb(c,2)) { goto L_801D83FC; } // 801D8074
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D8078
  c->r[3]=c->r[22]|c->r[22]; // 801D807C
  c->r[4]=c->r[23]|c->r[23]; // 801D8080
  c->r[5]=c->r[25]|c->r[25]; // 801D8084
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D8088
  c->ctr=c->r[12]; // 801D808C
  if (true) { c->lr=0x801D8094u; dispatch(c,c->ctr); } // 801D8090
  goto L_801D83FC; // 801D8094
L_801D8098:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D8098
  cmps(c,0,(int32_t)c->r[26],0); // 801D809C
  c->r[5]=c->r[4]+0x00000001u; // 801D80A0
  W32(c->r[23]+0x00000020u,c->r[5]); // 801D80A4
  c->r[3]=c->r[5]+0x00000001u; // 801D80A8
  c->r[4]=R8(c->r[4]+0x00000000u); // 801D80AC
  c->r[0]=c->r[3]+0x00000001u; // 801D80B0
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D80B4
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D80B8
  c->r[6]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801D80BC
  W32(c->r[23]+0x00000020u,c->r[0]); // 801D80C0
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 801D80C4
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D80C8
  c->r[6]=c->r[6]|c->r[0]; // 801D80CC
  if (crb(c,2)) { goto L_801D83FC; } // 801D80D0
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D80D4
  c->r[3]=c->r[22]|c->r[22]; // 801D80D8
  c->r[4]=c->r[23]|c->r[23]; // 801D80DC
  c->r[5]=c->r[25]|c->r[25]; // 801D80E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D80E4
  c->r[7]=0u+0x00000000u; // 801D80E8
  c->ctr=c->r[12]; // 801D80EC
  if (true) { c->lr=0x801D80F4u; dispatch(c,c->ctr); } // 801D80F0
  goto L_801D83FC; // 801D80F4
L_801D80F8:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D80F8
  cmps(c,0,(int32_t)c->r[26],0); // 801D80FC
  c->r[5]=c->r[4]+0x00000001u; // 801D8100
  W32(c->r[23]+0x00000020u,c->r[5]); // 801D8104
  c->r[3]=c->r[5]+0x00000001u; // 801D8108
  c->r[4]=R8(c->r[4]+0x00000000u); // 801D810C
  c->r[0]=c->r[3]+0x00000001u; // 801D8110
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D8114
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D8118
  c->r[6]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801D811C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801D8120
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 801D8124
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D8128
  c->r[6]=c->r[6]|c->r[0]; // 801D812C
  if (crb(c,2)) { goto L_801D83FC; } // 801D8130
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D8134
  c->r[3]=c->r[22]|c->r[22]; // 801D8138
  c->r[4]=c->r[23]|c->r[23]; // 801D813C
  c->r[5]=c->r[25]|c->r[25]; // 801D8140
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D8144
  c->r[7]=0u+0x00000000u; // 801D8148
  c->ctr=c->r[12]; // 801D814C
  if (true) { c->lr=0x801D8154u; dispatch(c,c->ctr); } // 801D8150
  goto L_801D83FC; // 801D8154
L_801D8158:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D8158
  c->r[3]=c->r[22]|c->r[22]; // 801D815C
  c->r[5]=c->r[30]|c->r[30]; // 801D8160
  c->r[6]=c->r[23]|c->r[23]; // 801D8164
  c->r[4]=c->r[23]+0x00000020u; // 801D8168
  c->r[7]=0u+0x00000001u; // 801D816C
  if (crb(c,2)) { goto L_801D8178; } // 801D8170
  c->r[7]=c->r[28]|c->r[28]; // 801D8174
L_801D8178:;
  c->lr=0x801D817Cu; f_801D8F30(c); // 801D8178
  cmps(c,0,(int32_t)c->r[27],0); // 801D817C
  c->r[28]=c->r[3]|c->r[3]; // 801D8180
  if (crb(c,2)) { goto L_801D81A4; } // 801D8184
  c->r[3]=c->r[22]|c->r[22]; // 801D8188
  c->r[5]=c->r[30]|c->r[30]; // 801D818C
  c->r[6]=c->r[23]|c->r[23]; // 801D8190
  c->r[7]=c->r[27]|c->r[27]; // 801D8194
  c->r[4]=c->r[23]+0x00000020u; // 801D8198
  c->lr=0x801D81A0u; f_801D8F30(c); // 801D819C
  c->r[24]=c->r[3]|c->r[3]; // 801D81A0
L_801D81A4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D81A4
  if (crb(c,2)) { goto L_801D83FC; } // 801D81A8
  c->r[0]=c->r[25]+0xFFFFFF3Du; // 801D81AC
  c->r[3]=c->r[22]|c->r[22]; // 801D81B0
  cmpu(c,0,c->r[0],0x00000001u); // 801D81B4
  c->r[4]=c->r[23]|c->r[23]; // 801D81B8
  c->r[5]=c->r[25]|c->r[25]; // 801D81BC
  if (crb(c,1)) { goto L_801D81D0; } // 801D81C0
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801D81C4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D81C8
  goto L_801D81D4; // 801D81CC
L_801D81D0:;
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801D81D0
L_801D81D4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D81D4
  c->r[7]=c->r[24]|c->r[24]; // 801D81D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D81DC
  c->ctr=c->r[12]; // 801D81E0
  if (true) { c->lr=0x801D81E8u; dispatch(c,c->ctr); } // 801D81E4
  goto L_801D83FC; // 801D81E8
L_801D81EC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D81EC
  if (crb(c,2)) { goto L_801D83FC; } // 801D81F0
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D81F4
  c->r[3]=c->r[22]|c->r[22]; // 801D81F8
  c->r[4]=c->r[23]|c->r[23]; // 801D81FC
  c->r[5]=c->r[25]|c->r[25]; // 801D8200
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D8204
  c->r[6]=0u+0x00000000u; // 801D8208
  c->r[7]=0u+0x00000000u; // 801D820C
  c->ctr=c->r[12]; // 801D8210
  if (true) { c->lr=0x801D8218u; dispatch(c,c->ctr); } // 801D8214
  goto L_801D83FC; // 801D8218
L_801D821C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D821C
  c->r[3]=c->r[22]|c->r[22]; // 801D8220
  c->r[5]=c->r[30]|c->r[30]; // 801D8224
  c->r[6]=c->r[23]|c->r[23]; // 801D8228
  c->r[4]=c->r[23]+0x00000020u; // 801D822C
  c->r[7]=0u+0x00000002u; // 801D8230
  if (crb(c,2)) { goto L_801D823C; } // 801D8234
  c->r[7]=c->r[28]|c->r[28]; // 801D8238
L_801D823C:;
  c->lr=0x801D8240u; f_801D8F30(c); // 801D823C
  cmps(c,0,(int32_t)c->r[26],0); // 801D8240
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801D8244
  if (crb(c,2)) { goto L_801D83FC; } // 801D8248
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D824C
  c->r[3]=c->r[22]|c->r[22]; // 801D8250
  c->r[4]=c->r[23]|c->r[23]; // 801D8254
  c->r[5]=c->r[25]|c->r[25]; // 801D8258
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D825C
  c->r[7]=0u+0x00000000u; // 801D8260
  c->ctr=c->r[12]; // 801D8264
  if (true) { c->lr=0x801D826Cu; dispatch(c,c->ctr); } // 801D8268
  goto L_801D83FC; // 801D826C
L_801D8270:;
  cmpu(c,0,c->r[25],0x000000FEu); // 801D8270
  if (crb(c,2)) { goto L_801D828C; } // 801D8274
  cmpu(c,0,c->r[25],0x000000FFu); // 801D8278
  if (crb(c,2)) { goto L_801D82B0; } // 801D827C
  cmpu(c,0,c->r[25],0x000000F0u); // 801D8280
  if (crb(c,2)) { goto L_801D82C0; } // 801D8284
  goto L_801D83B4; // 801D8288
L_801D828C:;
  c->r[6]=R32(c->r[23]+0x00000020u); // 801D828C
  c->r[3]=c->r[31]+0x00000000u; // 801D8290
  c->r[5]=c->r[31]+0x00000064u; // 801D8294
  c->r[4]=0u+0x00000138u; // 801D8298
  c->r[0]=c->r[6]+0x00000002u; // 801D829C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801D82A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D82A4
  c->lr=0x801D82ACu; f_801F9770(c); // 801D82A8
  goto L_801D83FC; // 801D82AC
L_801D82B0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D82B0
  if (crb(c,2)) { goto L_801D83FC; } // 801D82B4
  c->r[3]=0u+0x00000001u; // 801D82B8
  goto L_801D8400; // 801D82BC
L_801D82C0:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 801D82C0
  c->r[3]=c->r[4]+0x00000001u; // 801D82C4
  W32(c->r[23]+0x00000020u,c->r[3]); // 801D82C8
  c->r[27]=R8(c->r[4]+0x00000000u); // 801D82CC
  c->r[3]=rotl(c->r[27],0)&0x000000F0u; // 801D82D0
  cmpu(c,0,c->r[3],0x000000E0u); // 801D82D4
  if (crb(c,2)) { goto L_801D82F0; } // 801D82D8
  cmpu(c,0,c->r[3],0x00000080u); // 801D82DC
  if (crb(c,2)) { goto L_801D834C; } // 801D82E0
  cmpu(c,0,c->r[3],0x00000090u); // 801D82E4
  if (crb(c,2)) { goto L_801D834C; } // 801D82E8
  goto L_801D83B4; // 801D82EC
L_801D82F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D82F0
  c->r[3]=c->r[22]|c->r[22]; // 801D82F4
  c->r[5]=c->r[30]|c->r[30]; // 801D82F8
  c->r[6]=c->r[23]|c->r[23]; // 801D82FC
  c->r[4]=c->r[23]+0x00000020u; // 801D8300
  c->r[7]=0u+0x00000002u; // 801D8304
  if (crb(c,2)) { goto L_801D8310; } // 801D8308
  c->r[7]=c->r[28]|c->r[28]; // 801D830C
L_801D8310:;
  c->lr=0x801D8314u; f_801D8F30(c); // 801D8310
  cmps(c,0,(int32_t)c->r[26],0); // 801D8314
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 801D8318
  if (crb(c,2)) { goto L_801D83B4; } // 801D831C
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D8320
  c->r[0]=rotl(c->r[25],8)&0xFFFFFF00u; // 801D8324
  c->r[3]=c->r[22]|c->r[22]; // 801D8328
  c->r[4]=c->r[23]|c->r[23]; // 801D832C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D8330
  c->r[6]=c->r[29]|c->r[29]; // 801D8334
  c->r[5]=c->r[0]+c->r[27]; // 801D8338
  c->r[7]=0u+0x00000000u; // 801D833C
  c->ctr=c->r[12]; // 801D8340
  if (true) { c->lr=0x801D8348u; dispatch(c,c->ctr); } // 801D8344
  goto L_801D83B4; // 801D8348
L_801D834C:;
  c->r[7]=R32(c->r[23]+0x00000020u); // 801D834C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8350
  c->r[3]=c->r[22]|c->r[22]; // 801D8354
  c->r[5]=c->r[30]|c->r[30]; // 801D8358
  c->r[0]=c->r[7]+0x00000001u; // 801D835C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801D8360
  c->r[6]=c->r[23]|c->r[23]; // 801D8364
  c->r[4]=c->r[23]+0x00000020u; // 801D8368
  c->r[29]=R8(c->r[7]+0x00000000u); // 801D836C
  c->r[7]=0u+0x00000002u; // 801D8370
  if (crb(c,2)) { goto L_801D837C; } // 801D8374
  c->r[7]=c->r[28]|c->r[28]; // 801D8378
L_801D837C:;
  c->lr=0x801D8380u; f_801D8F30(c); // 801D837C
  cmps(c,0,(int32_t)c->r[26],0); // 801D8380
  c->r[24]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801D8384
  if (crb(c,2)) { goto L_801D83B4; } // 801D8388
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D838C
  c->r[0]=rotl(c->r[25],8)&0xFFFFFF00u; // 801D8390
  c->r[3]=c->r[22]|c->r[22]; // 801D8394
  c->r[4]=c->r[23]|c->r[23]; // 801D8398
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D839C
  c->r[6]=c->r[29]|c->r[29]; // 801D83A0
  c->r[7]=c->r[24]|c->r[24]; // 801D83A4
  c->r[5]=c->r[0]+c->r[27]; // 801D83A8
  c->ctr=c->r[12]; // 801D83AC
  if (true) { c->lr=0x801D83B4u; dispatch(c,c->ctr); } // 801D83B0
L_801D83B4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D83B4
  if (crb(c,2)) { goto L_801D83FC; } // 801D83B8
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D83BC
  c->r[3]=c->r[22]|c->r[22]; // 801D83C0
  c->r[4]=c->r[23]|c->r[23]; // 801D83C4
  c->r[5]=c->r[25]|c->r[25]; // 801D83C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D83CC
  c->r[6]=c->r[29]|c->r[29]; // 801D83D0
  c->r[7]=c->r[24]|c->r[24]; // 801D83D4
  c->ctr=c->r[12]; // 801D83D8
  if (true) { c->lr=0x801D83E0u; dispatch(c,c->ctr); } // 801D83DC
  goto L_801D83FC; // 801D83E0
L_801D83E4:;
  c->r[6]=c->r[25]|c->r[25]; // 801D83E4
  c->r[3]=c->r[31]+0x00000000u; // 801D83E8
  c->r[5]=c->r[31]+0x00000090u; // 801D83EC
  c->r[4]=0u+0x00000188u; // 801D83F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D83F4
  c->lr=0x801D83FCu; f_801F9770(c); // 801D83F8
L_801D83FC:;
  c->r[3]=0u+0x00000000u; // 801D83FC
L_801D8400:;
  c->r[11]=c->r[1]+0x00000030u; // 801D8400
  c->lr=0x801D8408u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8404
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D8408
  c->lr=c->r[0]; // 801D840C
  c->r[1]=c->r[1]+0x00000030u; // 801D8410
  return; // 801D8414
}

// fn_801D8420
void f_801D8420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8420
  c->r[0]=c->lr; // 801D8424
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D8428
  c->r[11]=c->r[1]+0x00000040u; // 801D842C
  c->lr=0x801D8434u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8430
  cmps(c,0,(int32_t)c->r[4],0); // 801D8434
  c->r[0]=0u+0x43300000u; // 801D8438
  c->r[31]=0u+0x802D0000u; // 801D843C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D8440
  c->r[26]=c->r[4]|c->r[4]; // 801D8444
  c->r[24]=c->r[5]|c->r[5]; // 801D8448
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D844C
  c->r[27]=c->r[6]|c->r[6]; // 801D8450
  c->r[28]=c->r[7]|c->r[7]; // 801D8454
  c->r[31]=c->r[31]+0xFFFFE1C8u; // 801D8458
  if (!crb(c,2)) { goto L_801D8474; } // 801D845C
  c->r[3]=c->r[31]+0x00000000u; // 801D8460
  c->r[5]=c->r[31]+0x00000014u; // 801D8464
  c->r[4]=0u+0x000001A5u; // 801D8468
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D846C
  c->lr=0x801D8474u; f_801F9770(c); // 801D8470
L_801D8474:;
  c->r[25]=R32(c->r[26]+0x000000C4u); // 801D8474
  cmps(c,0,(int32_t)c->r[25],0); // 801D8478
  if (!crb(c,2)) { goto L_801D8494; } // 801D847C
  c->r[3]=c->r[31]+0x00000000u; // 801D8480
  c->r[5]=c->r[31]+0x0000003Cu; // 801D8484
  c->r[4]=0u+0x000001A7u; // 801D8488
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D848C
  c->lr=0x801D8494u; f_801F9770(c); // 801D8490
L_801D8494:;
  cmpu(c,0,c->r[24],0x000000FFu); // 801D8494
  c->r[30]=c->r[26]+0x0000001Cu; // 801D8498
  if (crb(c,1)) { goto L_801D8BB8; } // 801D849C
  c->r[0]=c->r[24]+0xFFFFFF7Fu; // 801D84A0
  cmpu(c,0,c->r[0],0x0000007Cu); // 801D84A4
  if (crb(c,1)) { goto L_801D8EF8; } // 801D84A8
  c->r[3]=0u+0x802D0000u; // 801D84AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D84B0
  c->r[3]=c->r[3]+0xFFFFE494u; // 801D84B4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D84B8
  c->ctr=c->r[3]; // 801D84BC
  if (true) { switch (c->ctr) { case 0x801D84C4u: goto L_801D84C4; case 0x801D84E4u: goto L_801D84E4; case 0x801D84ECu: goto L_801D84EC; case 0x801D8520u: goto L_801D8520; case 0x801D8530u: goto L_801D8530; case 0x801D857Cu: goto L_801D857C; case 0x801D8584u: goto L_801D8584; case 0x801D858Cu: goto L_801D858C; case 0x801D8594u: goto L_801D8594; case 0x801D859Cu: goto L_801D859C; case 0x801D85F4u: goto L_801D85F4; case 0x801D85FCu: goto L_801D85FC; case 0x801D8658u: goto L_801D8658; case 0x801D8664u: goto L_801D8664; case 0x801D86BCu: goto L_801D86BC; case 0x801D86C4u: goto L_801D86C4; case 0x801D86D8u: goto L_801D86D8; case 0x801D86E0u: goto L_801D86E0; case 0x801D8704u: goto L_801D8704; case 0x801D8728u: goto L_801D8728; case 0x801D8730u: goto L_801D8730; case 0x801D8738u: goto L_801D8738; case 0x801D8748u: goto L_801D8748; case 0x801D876Cu: goto L_801D876C; case 0x801D8774u: goto L_801D8774; case 0x801D877Cu: goto L_801D877C; case 0x801D8784u: goto L_801D8784; case 0x801D878Cu: goto L_801D878C; case 0x801D8798u: goto L_801D8798; case 0x801D87B4u: goto L_801D87B4; case 0x801D87D8u: goto L_801D87D8; case 0x801D8800u: goto L_801D8800; case 0x801D882Cu: goto L_801D882C; case 0x801D8844u: goto L_801D8844; case 0x801D8858u: goto L_801D8858; case 0x801D8880u: goto L_801D8880; case 0x801D8888u: goto L_801D8888; case 0x801D88ACu: goto L_801D88AC; case 0x801D88B4u: goto L_801D88B4; case 0x801D88BCu: goto L_801D88BC; case 0x801D88C4u: goto L_801D88C4; case 0x801D88CCu: goto L_801D88CC; case 0x801D89A4u: goto L_801D89A4; case 0x801D8A14u: goto L_801D8A14; case 0x801D8A24u: goto L_801D8A24; case 0x801D8A7Cu: goto L_801D8A7C; case 0x801D8AE4u: goto L_801D8AE4; case 0x801D8B34u: goto L_801D8B34; case 0x801D8EF8u: goto L_801D8EF8; default: break; } dispatch(c,c->ctr); return; } // 801D84C0
L_801D84C4:;
  cmps(c,0,(int32_t)c->r[27],1023); // 801D84C4
  if (!crb(c,1)) { goto L_801D84D4; } // 801D84C8
  c->r[0]=0u+0x000003FFu; // 801D84CC
  goto L_801D84DC; // 801D84D0
L_801D84D4:;
  c->r[0]=sraw(c,c->r[27],31); // 801D84D4
  c->r[0]=c->r[27]&~c->r[0]; // 801D84D8
L_801D84DC:;
  W16(c->r[25]+0x000000ECu,c->r[0]); // 801D84DC
  goto L_801D8EF8; // 801D84E0
L_801D84E4:;
  W8(c->r[25]+0x000000EAu,c->r[27]); // 801D84E4
  goto L_801D8EF8; // 801D84E8
L_801D84EC:;
  c->r[0]=0u+0x00010000u; // 801D84EC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D84F0
  if (!crb(c,0)) { goto L_801D8504; } // 801D84F4
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 801D84F8
  W32(c->r[30]+0x00000038u,c->r[0]); // 801D84FC
  goto L_801D8EF8; // 801D8500
L_801D8504:;
  c->r[6]=c->r[27]|c->r[27]; // 801D8504
  c->r[3]=c->r[31]+0x00000000u; // 801D8508
  c->r[5]=c->r[31]+0x000000ACu; // 801D850C
  c->r[4]=0u+0x000001C1u; // 801D8510
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8514
  c->lr=0x801D851Cu; f_801F9810(c); // 801D8518
  goto L_801D8EF8; // 801D851C
L_801D8520:;
  c->r[3]=c->r[26]|c->r[26]; // 801D8520
  c->r[4]=c->r[27]|c->r[27]; // 801D8524
  c->lr=0x801D852Cu; f_801DDA50(c); // 801D8528
  goto L_801D8EF8; // 801D852C
L_801D8530:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000056u); // 801D8530
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000058u); // 801D8534
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801D8538
  if (crb(c,0)) { goto L_801D8548; } // 801D853C
  c->r[3]=R8(c->r[30]+0x00000055u); // 801D8540
  goto L_801D8564; // 801D8544
L_801D8548:;
  c->r[5]=R8(c->r[30]+0x00000054u); // 801D8548
  c->r[0]=R8(c->r[30]+0x00000055u); // 801D854C
  c->r[0]=c->r[0]-c->r[5]; // 801D8550
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801D8554
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801D8558
  c->r[0]=c->r[5]+c->r[0]; // 801D855C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801D8560
L_801D8564:;
  c->r[0]=0u+0x00000000u; // 801D8564
  W8(c->r[30]+0x00000054u,c->r[3]); // 801D8568
  W8(c->r[30]+0x00000055u,c->r[27]); // 801D856C
  W16(c->r[30]+0x00000056u,c->r[28]); // 801D8570
  W16(c->r[30]+0x00000058u,c->r[0]); // 801D8574
  goto L_801D8EF8; // 801D8578
L_801D857C:;
  W8(c->r[30]+0x0000006Cu,c->r[27]); // 801D857C
  goto L_801D8EF8; // 801D8580
L_801D8584:;
  W8(c->r[30]+0x0000006Du,c->r[27]); // 801D8584
  goto L_801D8EF8; // 801D8588
L_801D858C:;
  W8(c->r[25]+0x000000E8u,c->r[27]); // 801D858C
  goto L_801D8EF8; // 801D8590
L_801D8594:;
  W8(c->r[30]+0x00000070u,c->r[27]); // 801D8594
  goto L_801D8EF8; // 801D8598
L_801D859C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000068u); // 801D859C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Au); // 801D85A0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801D85A4
  if (crb(c,0)) { goto L_801D85B8; } // 801D85A8
  c->r[0]=R8(c->r[30]+0x00000067u); // 801D85AC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D85B0
  goto L_801D85DC; // 801D85B4
L_801D85B8:;
  c->r[6]=R8(c->r[30]+0x00000066u); // 801D85B8
  c->r[0]=R8(c->r[30]+0x00000067u); // 801D85BC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D85C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D85C4
  c->r[0]=c->r[0]-c->r[3]; // 801D85C8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801D85CC
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801D85D0
  c->r[0]=c->r[6]+c->r[0]; // 801D85D4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D85D8
L_801D85DC:;
  c->r[0]=0u+0x00000000u; // 801D85DC
  W8(c->r[30]+0x00000066u,c->r[3]); // 801D85E0
  W8(c->r[30]+0x00000067u,c->r[27]); // 801D85E4
  W16(c->r[30]+0x00000068u,c->r[28]); // 801D85E8
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801D85EC
  goto L_801D8EF8; // 801D85F0
L_801D85F4:;
  W8(c->r[30]+0x0000006Eu,c->r[27]); // 801D85F4
  goto L_801D8EF8; // 801D85F8
L_801D85FC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000005Cu); // 801D85FC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000005Eu); // 801D8600
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801D8604
  if (crb(c,0)) { goto L_801D8618; } // 801D8608
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 801D860C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D8610
  goto L_801D863C; // 801D8614
L_801D8618:;
  c->r[6]=R8(c->r[30]+0x0000005Au); // 801D8618
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 801D861C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D8620
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D8624
  c->r[0]=c->r[0]-c->r[3]; // 801D8628
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801D862C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801D8630
  c->r[0]=c->r[6]+c->r[0]; // 801D8634
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D8638
L_801D863C:;
  c->r[3]=c->r[27]+0xFFFFFFC0u; // 801D863C
  c->r[0]=0u+0x00000000u; // 801D8640
  W8(c->r[30]+0x0000005Au,c->r[4]); // 801D8644
  W8(c->r[30]+0x0000005Bu,c->r[3]); // 801D8648
  W16(c->r[30]+0x0000005Cu,c->r[28]); // 801D864C
  W16(c->r[30]+0x0000005Eu,c->r[0]); // 801D8650
  goto L_801D8EF8; // 801D8654
L_801D8658:;
  c->r[0]=c->r[27]+0xFFFFFFC0u; // 801D8658
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 801D865C
  goto L_801D8EF8; // 801D8660
L_801D8664:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000062u); // 801D8664
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000064u); // 801D8668
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801D866C
  if (crb(c,0)) { goto L_801D8680; } // 801D8670
  c->r[0]=R8(c->r[30]+0x00000061u); // 801D8674
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D8678
  goto L_801D86A4; // 801D867C
L_801D8680:;
  c->r[6]=R8(c->r[30]+0x00000060u); // 801D8680
  c->r[0]=R8(c->r[30]+0x00000061u); // 801D8684
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D8688
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D868C
  c->r[0]=c->r[0]-c->r[3]; // 801D8690
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801D8694
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801D8698
  c->r[0]=c->r[6]+c->r[0]; // 801D869C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D86A0
L_801D86A4:;
  c->r[0]=0u+0x00000000u; // 801D86A4
  W8(c->r[30]+0x00000060u,c->r[3]); // 801D86A8
  W8(c->r[30]+0x00000061u,c->r[27]); // 801D86AC
  W16(c->r[30]+0x00000062u,c->r[28]); // 801D86B0
  W16(c->r[30]+0x00000064u,c->r[0]); // 801D86B4
  goto L_801D8EF8; // 801D86B8
L_801D86BC:;
  W8(c->r[30]+0x00000071u,c->r[27]); // 801D86BC
  goto L_801D8EF8; // 801D86C0
L_801D86C4:;
  c->r[0]=0u-c->r[27]; // 801D86C4
  c->r[0]=c->r[0]|c->r[27]; // 801D86C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D86CC
  W8(c->r[30]+0x00000009u,c->r[0]); // 801D86D0
  goto L_801D8EF8; // 801D86D4
L_801D86D8:;
  W8(c->r[30]+0x00000073u,c->r[27]); // 801D86D8
  goto L_801D8EF8; // 801D86DC
L_801D86E0:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D86E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D86E4
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[2]=RF64(ea);} // 801D86E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D86EC
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D86F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D86F4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D86F8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D86FC
  goto L_801D8EF8; // 801D8700
L_801D8704:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D8704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8708
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[2]=RF64(ea);} // 801D870C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801D8710
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8714
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D8718
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D871C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 801D8720
  goto L_801D8EF8; // 801D8724
L_801D8728:;
  W8(c->r[30]+0x0000004Cu,c->r[27]); // 801D8728
  goto L_801D8EF8; // 801D872C
L_801D8730:;
  W8(c->r[30]+0x00000048u,c->r[27]); // 801D8730
  goto L_801D8EF8; // 801D8734
L_801D8738:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D8738
  c->r[0]=c->r[0]+c->r[27]; // 801D873C
  W32(c->r[30]+0x00000044u,c->r[0]); // 801D8740
  goto L_801D8EF8; // 801D8744
L_801D8748:;
  c->r[0]=c->r[27]^0x80000000u; // 801D8748
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D874C
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[2]=RF64(ea);} // 801D8750
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D8754
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8758
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D875C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D8760
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801D8764
  goto L_801D8EF8; // 801D8768
L_801D876C:;
  W8(c->r[30]+0x00000074u,c->r[27]); // 801D876C
  goto L_801D8EF8; // 801D8770
L_801D8774:;
  W8(c->r[30]+0x00000075u,c->r[27]); // 801D8774
  goto L_801D8EF8; // 801D8778
L_801D877C:;
  W8(c->r[30]+0x00000076u,c->r[27]); // 801D877C
  goto L_801D8EF8; // 801D8780
L_801D8784:;
  W8(c->r[30]+0x00000077u,c->r[27]); // 801D8784
  goto L_801D8EF8; // 801D8788
L_801D878C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D878C
  W16(c->r[30]+0x00000078u,c->r[0]); // 801D8790
  goto L_801D8EF8; // 801D8794
L_801D8798:;
  c->r[0]=0u+0x000000FFu; // 801D8798
  W8(c->r[30]+0x00000074u,c->r[0]); // 801D879C
  W8(c->r[30]+0x00000075u,c->r[0]); // 801D87A0
  W8(c->r[30]+0x00000076u,c->r[0]); // 801D87A4
  W8(c->r[30]+0x00000077u,c->r[0]); // 801D87A8
  W16(c->r[30]+0x00000078u,c->r[0]); // 801D87AC
  goto L_801D8EF8; // 801D87B0
L_801D87B4:;
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 801D87B4
  c->r[3]=0u+0x00000040u; // 801D87B8
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801D87BC
  c->r[3]=c->r[4]|~c->r[3]; // 801D87C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D87C4
  c->r[0]=c->r[3]-c->r[0]; // 801D87C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D87CC
  W8(c->r[30]+0x00000030u,c->r[0]); // 801D87D0
  goto L_801D8EF8; // 801D87D4
L_801D87D8:;
  c->r[0]=0u-c->r[27]; // 801D87D8
  c->r[3]=c->r[26]|c->r[26]; // 801D87DC
  c->r[0]=c->r[0]|c->r[27]; // 801D87E0
  c->r[4]=0u+0xFFFFFFFFu; // 801D87E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D87E8
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D87EC
  c->lr=0x801D87F4u; f_801DD130(c); // 801D87F0
  c->r[3]=c->r[26]|c->r[26]; // 801D87F4
  c->lr=0x801D87FCu; f_801DD880(c); // 801D87F8
  goto L_801D8EF8; // 801D87FC
L_801D8800:;
  c->r[0]=0u-c->r[27]; // 801D8800
  c->r[0]=c->r[0]|c->r[27]; // 801D8804
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801D8808
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801D880C
  if (crb(c,2)) { goto L_801D8EF8; } // 801D8810
  c->r[3]=c->r[26]|c->r[26]; // 801D8814
  c->r[4]=0u+0xFFFFFFFFu; // 801D8818
  c->lr=0x801D8820u; f_801DD130(c); // 801D881C
  c->r[3]=c->r[26]|c->r[26]; // 801D8820
  c->lr=0x801D8828u; f_801DD880(c); // 801D8824
  goto L_801D8EF8; // 801D8828
L_801D882C:;
  c->r[3]=R8(c->r[30]+0x00000070u); // 801D882C
  c->r[0]=0u+0x00000001u; // 801D8830
  W8(c->r[30]+0x0000002Fu,c->r[0]); // 801D8834
  c->r[0]=c->r[27]+c->r[3]; // 801D8838
  W8(c->r[30]+0x00000072u,c->r[0]); // 801D883C
  goto L_801D8EF8; // 801D8840
L_801D8844:;
  c->r[0]=0u-c->r[27]; // 801D8844
  c->r[0]=c->r[0]|c->r[27]; // 801D8848
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D884C
  W8(c->r[30]+0x0000002Fu,c->r[0]); // 801D8850
  goto L_801D8EF8; // 801D8854
L_801D8858:;
  c->r[0]=c->r[27]+0xFFFFFFC0u; // 801D8858
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[2]=RF64(ea);} // 801D885C
  c->r[0]=c->r[0]^0x80000000u; // 801D8860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8864
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8868
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801D886C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D8870
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D8874
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 801D8878
  goto L_801D8EF8; // 801D887C
L_801D8880:;
  W8(c->r[30]+0x0000007Eu,c->r[27]); // 801D8880
  goto L_801D8EF8; // 801D8884
L_801D8888:;
  c->r[0]=c->r[27]^0x80000000u; // 801D8888
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D888C
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[2]=RF64(ea);} // 801D8890
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D8894
  {uint32_t ea=c->r[2]+0xFFFF9E54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8898
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D889C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801D88A0
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 801D88A4
  goto L_801D8EF8; // 801D88A8
L_801D88AC:;
  W8(c->r[30]+0x0000007Bu,c->r[27]); // 801D88AC
  goto L_801D8EF8; // 801D88B0
L_801D88B4:;
  W8(c->r[30]+0x0000007Cu,c->r[27]); // 801D88B4
  goto L_801D8EF8; // 801D88B8
L_801D88BC:;
  W8(c->r[30]+0x0000007Du,c->r[27]); // 801D88BC
  goto L_801D8EF8; // 801D88C0
L_801D88C4:;
  W8(c->r[30]+0x0000007Au,c->r[27]); // 801D88C4
  goto L_801D8EF8; // 801D88C8
L_801D88CC:;
  c->r[0]=R8(c->r[13]+0xFFFFAE50u); // 801D88CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D88D0
  if (crb(c,2)) { goto L_801D8EF8; } // 801D88D4
  cmpu(c,0,c->r[27],0x00000030u); // 801D88D8
  c->r[0]=0u+0x00000000u; // 801D88DC
  if (crb(c,1)) { goto L_801D88E8; } // 801D88E0
  c->r[0]=0u+0x00000001u; // 801D88E4
L_801D88E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D88E8
  if (!crb(c,2)) { goto L_801D8910; } // 801D88EC
  c->r[6]=c->r[27]|c->r[27]; // 801D88F0
  c->r[3]=c->r[31]+0x00000000u; // 801D88F4
  c->r[5]=c->r[31]+0x000000D8u; // 801D88F8
  c->r[4]=0u+0x000003F9u; // 801D88FC
  c->r[7]=0u+0x00000000u; // 801D8900
  c->r[8]=0u+0x00000030u; // 801D8904
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8908
  c->lr=0x801D8910u; f_801F9770(c); // 801D890C
L_801D8910:;
  cmps(c,0,(int32_t)c->r[27],32); // 801D8910
  if (!crb(c,0)) { goto L_801D8928; } // 801D8914
  c->r[3]=c->r[25]|c->r[25]; // 801D8918
  c->r[4]=c->r[27]|c->r[27]; // 801D891C
  c->lr=0x801D8924u; f_801DB7C0(c); // 801D8920
  goto L_801D8944; // 801D8924
L_801D8928:;
  cmps(c,0,(int32_t)c->r[27],48); // 801D8928
  if (!crb(c,0)) { goto L_801D8940; } // 801D892C
  c->r[3]=c->r[26]|c->r[26]; // 801D8930
  c->r[4]=c->r[27]+0xFFFFFFE0u; // 801D8934
  c->lr=0x801D893Cu; f_801DDDD0(c); // 801D8938
  goto L_801D8944; // 801D893C
L_801D8940:;
  c->r[3]=0u+0x00000000u; // 801D8940
L_801D8944:;
  cmps(c,0,(int32_t)c->r[27],32); // 801D8944
  if (crb(c,0)) { goto L_801D8954; } // 801D8948
  c->r[7]=c->r[27]+0xFFFFFFE0u; // 801D894C
  goto L_801D8964; // 801D8950
L_801D8954:;
  cmps(c,0,(int32_t)c->r[27],16); // 801D8954
  c->r[7]=c->r[27]|c->r[27]; // 801D8958
  if (crb(c,0)) { goto L_801D8964; } // 801D895C
  c->r[7]=c->r[27]+0xFFFFFFF0u; // 801D8960
L_801D8964:;
  cmps(c,0,(int32_t)c->r[27],32); // 801D8964
  if (crb(c,0)) { goto L_801D8974; } // 801D8968
  c->r[6]=c->r[13]+0xFFFF9DF0u; // 801D896C
  goto L_801D8984; // 801D8970
L_801D8974:;
  cmps(c,0,(int32_t)c->r[27],16); // 801D8974
  c->r[6]=c->r[13]+0xFFFF9DF8u; // 801D8978
  if (crb(c,0)) { goto L_801D8984; } // 801D897C
  c->r[6]=c->r[13]+0xFFFF9DF4u; // 801D8980
L_801D8984:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 801D8984
  c->r[4]=c->r[25]|c->r[25]; // 801D8988
  c->r[5]=R8(c->r[26]+0x00000004u); // 801D898C
  c->r[8]=c->r[27]|c->r[27]; // 801D8990
  c->r[3]=c->r[31]+0x00000114u; // 801D8994
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8998
  c->lr=0x801D89A0u; f_800C8450(c); // 801D899C
  goto L_801D8EF8; // 801D89A0
L_801D89A4:;
  c->r[3]=c->r[25]|c->r[25]; // 801D89A4
  c->r[4]=c->r[27]|c->r[27]; // 801D89A8
  c->lr=0x801D89B0u; f_801DB630(c); // 801D89AC
  cmps(c,0,(int32_t)c->r[3],0); // 801D89B0
  c->r[25]=c->r[3]|c->r[3]; // 801D89B4
  if (!crb(c,2)) { goto L_801D89D4; } // 801D89B8
  c->r[3]=c->r[31]+0x00000000u; // 801D89BC
  c->r[5]=c->r[31]+0x00000140u; // 801D89C0
  c->r[4]=0u+0x00000287u; // 801D89C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89C8
  c->lr=0x801D89D0u; f_801F9810(c); // 801D89CC
  goto L_801D8EF8; // 801D89D0
L_801D89D4:;
  cmpu(c,0,c->r[3],c->r[26]); // 801D89D4
  if (!crb(c,2)) { goto L_801D89F4; } // 801D89D8
  c->r[3]=c->r[31]+0x00000000u; // 801D89DC
  c->r[5]=c->r[31]+0x00000178u; // 801D89E0
  c->r[4]=0u+0x0000028Cu; // 801D89E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89E8
  c->lr=0x801D89F0u; f_801F9810(c); // 801D89EC
  goto L_801D8EF8; // 801D89F0
L_801D89F4:;
  c->lr=0x801D89F8u; f_801DCE00(c); // 801D89F4
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D89F8
  c->r[3]=c->r[25]|c->r[25]; // 801D89FC
  c->r[5]=c->r[28]|c->r[28]; // 801D8A00
  c->lr=0x801D8A08u; f_801DCDD0(c); // 801D8A04
  c->r[3]=c->r[25]|c->r[25]; // 801D8A08
  c->lr=0x801D8A10u; f_801DCDE0(c); // 801D8A0C
  goto L_801D8EF8; // 801D8A10
L_801D8A14:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D8A14
  c->r[0]=c->r[0]+c->r[27]; // 801D8A18
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D8A1C
  goto L_801D8EF8; // 801D8A20
L_801D8A24:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 801D8A24
  cmpu(c,0,c->r[0],0x00000003u); // 801D8A28
  if (crb(c,0)) { goto L_801D8A48; } // 801D8A2C
  c->r[3]=c->r[31]+0x00000000u; // 801D8A30
  c->r[5]=c->r[31]+0x000001A8u; // 801D8A34
  c->r[4]=0u+0x0000029Cu; // 801D8A38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8A3C
  c->lr=0x801D8A44u; f_801F9810(c); // 801D8A40
  goto L_801D8EF8; // 801D8A44
L_801D8A48:;
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801D8A48
  c->r[3]=R32(c->r[30]+0x00000004u); // 801D8A4C
  c->r[4]=c->r[30]+c->r[0]; // 801D8A50
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D8A54
  c->r[0]=0u+0x00000000u; // 801D8A58
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801D8A5C
  c->r[3]=R8(c->r[30]+0x00000024u); // 801D8A60
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D8A64
  c->r[3]=c->r[3]+0x00000001u; // 801D8A68
  W8(c->r[30]+0x00000024u,c->r[3]); // 801D8A6C
  c->r[0]=c->r[0]+c->r[27]; // 801D8A70
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D8A74
  goto L_801D8EF8; // 801D8A78
L_801D8A7C:;
  c->r[4]=0u+0x00000000u; // 801D8A7C
  goto L_801D8AAC; // 801D8A80
L_801D8A84:;
  c->r[3]=R8(c->r[30]+0x00000024u); // 801D8A84
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D8A88
  W8(c->r[30]+0x00000024u,c->r[0]); // 801D8A8C
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801D8A90
  c->r[3]=c->r[30]+c->r[0]; // 801D8A94
  {uint32_t ea=c->r[3]+0x0000000Cu; c->r[0]=R8(ea); c->r[3]=ea;} // 801D8A98
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A9C
  if (!crb(c,2)) { goto L_801D8AAC; } // 801D8AA0
  c->r[4]=c->r[3]|c->r[3]; // 801D8AA4
  goto L_801D8AB8; // 801D8AA8
L_801D8AAC:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 801D8AAC
  cmps(c,0,(int32_t)c->r[0],0); // 801D8AB0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8A84; } // 801D8AB4
L_801D8AB8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D8AB8
  if (!crb(c,2)) { goto L_801D8AD8; } // 801D8ABC
  c->r[3]=c->r[31]+0x00000000u; // 801D8AC0
  c->r[5]=c->r[31]+0x000001E8u; // 801D8AC4
  c->r[4]=0u+0x000002B3u; // 801D8AC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8ACC
  c->lr=0x801D8AD4u; f_801F9810(c); // 801D8AD0
  goto L_801D8EF8; // 801D8AD4
L_801D8AD8:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D8AD8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D8ADC
  goto L_801D8EF8; // 801D8AE0
L_801D8AE4:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 801D8AE4
  cmpu(c,0,c->r[0],0x00000003u); // 801D8AE8
  if (crb(c,0)) { goto L_801D8B08; } // 801D8AEC
  c->r[3]=c->r[31]+0x00000000u; // 801D8AF0
  c->r[5]=c->r[31]+0x00000220u; // 801D8AF4
  c->r[4]=0u+0x000002BDu; // 801D8AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8AFC
  c->lr=0x801D8B04u; f_801F9810(c); // 801D8B00
  goto L_801D8EF8; // 801D8B04
L_801D8B08:;
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801D8B08
  c->r[3]=R32(c->r[30]+0x00000004u); // 801D8B0C
  c->r[4]=c->r[30]+c->r[0]; // 801D8B10
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D8B14
  c->r[0]=0u+0x00000001u; // 801D8B18
  W8(c->r[4]+0x0000000Du,c->r[27]); // 801D8B1C
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801D8B20
  c->r[3]=R8(c->r[30]+0x00000024u); // 801D8B24
  c->r[0]=c->r[3]+0x00000001u; // 801D8B28
  W8(c->r[30]+0x00000024u,c->r[0]); // 801D8B2C
  goto L_801D8EF8; // 801D8B30
L_801D8B34:;
  c->r[3]=R8(c->r[30]+0x00000024u); // 801D8B34
  cmps(c,0,(int32_t)c->r[3],0); // 801D8B38
  if (!crb(c,2)) { goto L_801D8B58; } // 801D8B3C
  c->r[3]=c->r[31]+0x00000000u; // 801D8B40
  c->r[5]=c->r[31]+0x00000264u; // 801D8B44
  c->r[4]=0u+0x000002CCu; // 801D8B48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8B4C
  c->lr=0x801D8B54u; f_801F9810(c); // 801D8B50
  goto L_801D8EF8; // 801D8B54
L_801D8B58:;
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801D8B58
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D8B5C
  c->r[3]=c->r[30]+c->r[0]; // 801D8B60
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D8B64
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B68
  if (!crb(c,2)) { goto L_801D8B88; } // 801D8B6C
  c->r[3]=c->r[31]+0x00000000u; // 801D8B70
  c->r[5]=c->r[31]+0x00000264u; // 801D8B74
  c->r[4]=0u+0x000002D2u; // 801D8B78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8B7C
  c->lr=0x801D8B84u; f_801F9810(c); // 801D8B80
  goto L_801D8EF8; // 801D8B84
L_801D8B88:;
  c->r[5]=R8(c->r[3]+0x0000000Du); // 801D8B88
  cmps(c,0,(int32_t)c->r[5],0); // 801D8B8C
  if (crb(c,2)) { goto L_801D8BA8; } // 801D8B90
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D8B94
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; cr0(c,c->r[0]); // 801D8B98
  if (!crb(c,2)) { goto L_801D8BA8; } // 801D8B9C
  W8(c->r[30]+0x00000024u,c->r[4]); // 801D8BA0
  goto L_801D8EF8; // 801D8BA4
L_801D8BA8:;
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801D8BA8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D8BAC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D8BB0
  goto L_801D8EF8; // 801D8BB4
L_801D8BB8:;
  cmpu(c,0,c->r[24],0x0000FFFFu); // 801D8BB8
  if (crb(c,1)) { goto L_801D8EF8; } // 801D8BBC
  c->r[0]=rotl(c->r[24],24)&0x00FFFFFFu; // 801D8BC0
  c->r[24]=rotl(c->r[24],0)&0x000000FFu; // 801D8BC4
  cmpu(c,0,c->r[0],0x000000F0u); // 801D8BC8
  if (crb(c,2)) { goto L_801D8BE4; } // 801D8BCC
  c->r[3]=c->r[31]+0x00000000u; // 801D8BD0
  c->r[5]=c->r[31]+0x000002A0u; // 801D8BD4
  c->r[4]=0u+0x000002E9u; // 801D8BD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8BDC
  c->lr=0x801D8BE4u; f_801F9770(c); // 801D8BE0
L_801D8BE4:;
  c->r[0]=rotl(c->r[24],0)&0x000000F0u; // 801D8BE4
  c->r[29]=0u+0x00000000u; // 801D8BE8
  cmpu(c,0,c->r[0],0x00000080u); // 801D8BEC
  if (crb(c,2)) { goto L_801D8BFC; } // 801D8BF0
  cmpu(c,0,c->r[0],0x00000090u); // 801D8BF4
  if (!crb(c,2)) { goto L_801D8C74; } // 801D8BF8
L_801D8BFC:;
  cmpu(c,0,c->r[27],0x00000030u); // 801D8BFC
  c->r[0]=0u+0x00000000u; // 801D8C00
  if (crb(c,1)) { goto L_801D8C0C; } // 801D8C04
  c->r[0]=0u+0x00000001u; // 801D8C08
L_801D8C0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D8C0C
  if (!crb(c,2)) { goto L_801D8C34; } // 801D8C10
  c->r[6]=c->r[27]|c->r[27]; // 801D8C14
  c->r[3]=c->r[31]+0x00000000u; // 801D8C18
  c->r[5]=c->r[31]+0x000000D8u; // 801D8C1C
  c->r[4]=0u+0x000003F9u; // 801D8C20
  c->r[7]=0u+0x00000000u; // 801D8C24
  c->r[8]=0u+0x00000030u; // 801D8C28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8C2C
  c->lr=0x801D8C34u; f_801F9770(c); // 801D8C30
L_801D8C34:;
  cmps(c,0,(int32_t)c->r[27],32); // 801D8C34
  if (!crb(c,0)) { goto L_801D8C4C; } // 801D8C38
  c->r[3]=c->r[25]|c->r[25]; // 801D8C3C
  c->r[4]=c->r[27]|c->r[27]; // 801D8C40
  c->lr=0x801D8C48u; f_801DB7C0(c); // 801D8C44
  goto L_801D8C68; // 801D8C48
L_801D8C4C:;
  cmps(c,0,(int32_t)c->r[27],48); // 801D8C4C
  if (!crb(c,0)) { goto L_801D8C64; } // 801D8C50
  c->r[3]=c->r[26]|c->r[26]; // 801D8C54
  c->r[4]=c->r[27]+0xFFFFFFE0u; // 801D8C58
  c->lr=0x801D8C60u; f_801DDDD0(c); // 801D8C5C
  goto L_801D8C68; // 801D8C60
L_801D8C64:;
  c->r[3]=0u+0x00000000u; // 801D8C64
L_801D8C68:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D8C68
  c->r[29]=c->r[3]|c->r[3]; // 801D8C6C
  if (crb(c,2)) { goto L_801D8EF8; } // 801D8C70
L_801D8C74:;
  cmps(c,0,(int32_t)c->r[24],138); // 801D8C74
  if (crb(c,2)) { goto L_801D8E0C; } // 801D8C78
  if (!crb(c,0)) { goto L_801D8CD4; } // 801D8C7C
  cmps(c,0,(int32_t)c->r[24],132); // 801D8C80
  if (crb(c,2)) { goto L_801D8D58; } // 801D8C84
  if (!crb(c,0)) { goto L_801D8CB0; } // 801D8C88
  cmps(c,0,(int32_t)c->r[24],129); // 801D8C8C
  if (crb(c,2)) { goto L_801D8D28; } // 801D8C90
  if (!crb(c,0)) { goto L_801D8CA4; } // 801D8C94
  cmps(c,0,(int32_t)c->r[24],128); // 801D8C98
  if (!crb(c,0)) { goto L_801D8D20; } // 801D8C9C
  goto L_801D8EF8; // 801D8CA0
L_801D8CA4:;
  cmps(c,0,(int32_t)c->r[24],131); // 801D8CA4
  if (!crb(c,0)) { goto L_801D8D48; } // 801D8CA8
  goto L_801D8D38; // 801D8CAC
L_801D8CB0:;
  cmps(c,0,(int32_t)c->r[24],135); // 801D8CB0
  if (crb(c,2)) { goto L_801D8DDC; } // 801D8CB4
  if (!crb(c,0)) { goto L_801D8CC8; } // 801D8CB8
  cmps(c,0,(int32_t)c->r[24],134); // 801D8CBC
  if (!crb(c,0)) { goto L_801D8D9C; } // 801D8CC0
  goto L_801D8D70; // 801D8CC4
L_801D8CC8:;
  cmps(c,0,(int32_t)c->r[24],137); // 801D8CC8
  if (!crb(c,0)) { goto L_801D8DFC; } // 801D8CCC
  goto L_801D8DEC; // 801D8CD0
L_801D8CD4:;
  cmps(c,0,(int32_t)c->r[24],147); // 801D8CD4
  if (crb(c,2)) { goto L_801D8E90; } // 801D8CD8
  if (!crb(c,0)) { goto L_801D8D04; } // 801D8CDC
  cmps(c,0,(int32_t)c->r[24],144); // 801D8CE0
  if (crb(c,2)) { goto L_801D8E3C; } // 801D8CE4
  if (!crb(c,0)) { goto L_801D8CF8; } // 801D8CE8
  cmps(c,0,(int32_t)c->r[24],140); // 801D8CEC
  if (!crb(c,0)) { goto L_801D8EF8; } // 801D8CF0
  goto L_801D8E1C; // 801D8CF4
L_801D8CF8:;
  cmps(c,0,(int32_t)c->r[24],146); // 801D8CF8
  if (!crb(c,0)) { goto L_801D8E70; } // 801D8CFC
  goto L_801D8E54; // 801D8D00
L_801D8D04:;
  cmps(c,0,(int32_t)c->r[24],224); // 801D8D04
  if (crb(c,2)) { goto L_801D8EE8; } // 801D8D08
  if (!crb(c,0)) { goto L_801D8EF8; } // 801D8D0C
  cmps(c,0,(int32_t)c->r[24],149); // 801D8D10
  if (crb(c,2)) { goto L_801D8ECC; } // 801D8D14
  if (!crb(c,0)) { goto L_801D8EF8; } // 801D8D18
  goto L_801D8EAC; // 801D8D1C
L_801D8D20:;
  W16(c->r[29]+0x00000000u,c->r[28]); // 801D8D20
  goto L_801D8EF8; // 801D8D24
L_801D8D28:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8D28
  c->r[0]=c->r[0]+c->r[28]; // 801D8D2C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8D30
  goto L_801D8EF8; // 801D8D34
L_801D8D38:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8D38
  c->r[0]=c->r[0]-c->r[28]; // 801D8D3C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8D40
  goto L_801D8EF8; // 801D8D44
L_801D8D48:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8D48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 801D8D4C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8D50
  goto L_801D8EF8; // 801D8D54
L_801D8D58:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D8D58
  if (crb(c,2)) { goto L_801D8EF8; } // 801D8D5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8D60
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[28]); // 801D8D64
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8D68
  goto L_801D8EF8; // 801D8D6C
L_801D8D70:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D8D70
  if (crb(c,0)) { goto L_801D8D88; } // 801D8D74
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8D78
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 801D8D7C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8D80
  goto L_801D8EF8; // 801D8D84
L_801D8D88:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8D88
  c->r[0]=0u-c->r[28]; // 801D8D8C
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 801D8D90
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8D94
  goto L_801D8EF8; // 801D8D98
L_801D8D9C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D8D9C
  c->r[24]=0u+0x00000000u; // 801D8DA0
  if (!crb(c,0)) { goto L_801D8DB4; } // 801D8DA4
  c->r[0]=0u-c->r[28]; // 801D8DA8
  c->r[24]=0u+0x00000001u; // 801D8DAC
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801D8DB0
L_801D8DB4:;
  c->lr=0x801D8DB8u; f_801EF5D0(c); // 801D8DB4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D8DB8
  c->r[0]=c->r[28]+0x00000001u; // 801D8DBC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801D8DC0
  cmps(c,0,(int32_t)c->r[24],0); // 801D8DC4
  c->r[3]=sraw(c,c->r[3],16); // 801D8DC8
  if (crb(c,2)) { goto L_801D8DD4; } // 801D8DCC
  c->r[3]=0u-c->r[3]; // 801D8DD0
L_801D8DD4:;
  W16(c->r[29]+0x00000000u,c->r[3]); // 801D8DD4
  goto L_801D8EF8; // 801D8DD8
L_801D8DDC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8DDC
  c->r[0]=c->r[0]&c->r[28]; // 801D8DE0
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8DE4
  goto L_801D8EF8; // 801D8DE8
L_801D8DEC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8DEC
  c->r[0]=c->r[0]|c->r[28]; // 801D8DF0
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8DF4
  goto L_801D8EF8; // 801D8DF8
L_801D8DFC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8DFC
  c->r[0]=c->r[0]^c->r[28]; // 801D8E00
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8E04
  goto L_801D8EF8; // 801D8E08
L_801D8E0C:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801D8E0C
  c->r[0]=~(c->r[0]|c->r[0]); // 801D8E10
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8E14
  goto L_801D8EF8; // 801D8E18
L_801D8E1C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D8E1C
  if (crb(c,2)) { goto L_801D8EF8; } // 801D8E20
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8E24
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[28]); // 801D8E28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 801D8E2C
  c->r[0]=c->r[3]-c->r[0]; // 801D8E30
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D8E34
  goto L_801D8EF8; // 801D8E38
L_801D8E3C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8E3C
  c->r[0]=c->r[28]-c->r[0]; // 801D8E40
  c->r[0]=cntlz(c->r[0]); // 801D8E44
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801D8E48
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D8E4C
  goto L_801D8EF8; // 801D8E50
L_801D8E54:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8E54
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 801D8E58
  c->r[4]=sraw(c,c->r[0],31); // 801D8E5C
  c->r[0]=addc(c,~c->r[28],c->r[0],1); // 801D8E60
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801D8E64
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D8E68
  goto L_801D8EF8; // 801D8E6C
L_801D8E70:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8E70
  c->r[0]=c->r[4]^c->r[28]; // 801D8E74
  c->r[3]=sraw(c,c->r[0],1); // 801D8E78
  c->r[0]=c->r[0]&c->r[4]; // 801D8E7C
  c->r[0]=c->r[3]-c->r[0]; // 801D8E80
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D8E84
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D8E88
  goto L_801D8EF8; // 801D8E8C
L_801D8E90:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8E90
  c->r[4]=sraw(c,c->r[28],31); // 801D8E94
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D8E98
  c->r[0]=addc(c,~c->r[0],c->r[28],1); // 801D8E9C
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801D8EA0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D8EA4
  goto L_801D8EF8; // 801D8EA8
L_801D8EAC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8EAC
  c->r[0]=c->r[28]^c->r[0]; // 801D8EB0
  c->r[3]=sraw(c,c->r[0],1); // 801D8EB4
  c->r[0]=c->r[0]&c->r[28]; // 801D8EB8
  c->r[0]=c->r[3]-c->r[0]; // 801D8EBC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D8EC0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D8EC4
  goto L_801D8EF8; // 801D8EC8
L_801D8ECC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801D8ECC
  c->r[3]=c->r[28]-c->r[0]; // 801D8ED0
  c->r[0]=c->r[0]-c->r[28]; // 801D8ED4
  c->r[0]=c->r[3]|c->r[0]; // 801D8ED8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D8EDC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D8EE0
  goto L_801D8EF8; // 801D8EE4
L_801D8EE8:;
  c->r[3]=c->r[25]|c->r[25]; // 801D8EE8
  c->r[5]=c->r[26]|c->r[26]; // 801D8EEC
  c->r[4]=rotl(c->r[27],0)&0x0000FFFFu; // 801D8EF0
  c->lr=0x801D8EF8u; f_801DB380(c); // 801D8EF4
L_801D8EF8:;
  c->r[11]=c->r[1]+0x00000040u; // 801D8EF8
  c->lr=0x801D8F00u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8EFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D8F00
  c->lr=c->r[0]; // 801D8F04
  c->r[1]=c->r[1]+0x00000040u; // 801D8F08
  return; // 801D8F0C
}

// fn_801D8F10
void f_801D8F10(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 801D8F10
  c->r[4]=c->r[5]|c->r[5]; // 801D8F14
  c->r[5]=c->r[6]|c->r[6]; // 801D8F18
  c->r[6]=c->r[7]|c->r[7]; // 801D8F1C
  c->r[7]=c->r[8]|c->r[8]; // 801D8F20
  f_801DDE60(c); return; // 801D8F24
}

// fn_801D8F30
void f_801D8F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8F30
  c->r[0]=c->lr; // 801D8F34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8F38
  c->r[11]=c->r[1]+0x00000020u; // 801D8F3C
  c->lr=0x801D8F44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8F40
  cmps(c,0,(int32_t)c->r[7],1); // 801D8F44
  c->r[31]=0u+0x802D0000u; // 801D8F48
  c->r[27]=c->r[4]|c->r[4]; // 801D8F4C
  c->r[28]=c->r[5]|c->r[5]; // 801D8F50
  c->r[29]=c->r[6]|c->r[6]; // 801D8F54
  c->r[31]=c->r[31]+0xFFFFE1C8u; // 801D8F58
  if (crb(c,2)) { goto L_801D8F84; } // 801D8F5C
  cmps(c,0,(int32_t)c->r[7],2); // 801D8F60
  if (crb(c,2)) { goto L_801D8F98; } // 801D8F64
  cmps(c,0,(int32_t)c->r[7],3); // 801D8F68
  if (crb(c,2)) { goto L_801D8FBC; } // 801D8F6C
  cmps(c,0,(int32_t)c->r[7],5); // 801D8F70
  if (crb(c,2)) { goto L_801D9010; } // 801D8F74
  cmps(c,0,(int32_t)c->r[7],4); // 801D8F78
  if (crb(c,2)) { goto L_801D909C; } // 801D8F7C
  goto L_801D90FC; // 801D8F80
L_801D8F84:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D8F84
  c->r[0]=c->r[3]+0x00000001u; // 801D8F88
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D8F8C
  c->r[29]=R8(c->r[3]+0x00000000u); // 801D8F90
  goto L_801D90FC; // 801D8F94
L_801D8F98:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D8F98
  c->r[5]=c->r[3]+0x00000001u; // 801D8F9C
  W32(c->r[4]+0x00000000u,c->r[5]); // 801D8FA0
  c->r[0]=c->r[5]+0x00000001u; // 801D8FA4
  c->r[3]=R8(c->r[3]+0x00000000u); // 801D8FA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D8FAC
  c->r[29]=R8(c->r[5]+0x00000000u); // 801D8FB0
  c->r[29]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[29]&~0x0000FF00u); // 801D8FB4
  goto L_801D90FC; // 801D8FB8
L_801D8FBC:;
  c->r[29]=0u+0x00000000u; // 801D8FBC
  c->r[30]=0u+0x00000000u; // 801D8FC0
L_801D8FC4:;
  cmps(c,0,(int32_t)c->r[30],4); // 801D8FC4
  if (crb(c,0)) { goto L_801D8FE0; } // 801D8FC8
  c->r[3]=c->r[31]+0x00000000u; // 801D8FCC
  c->r[5]=c->r[31]+0x000004C0u; // 801D8FD0
  c->r[4]=0u+0x000003AFu; // 801D8FD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8FD8
  c->lr=0x801D8FE0u; f_801F9770(c); // 801D8FDC
L_801D8FE0:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D8FE0
  c->r[29]=rotl(c->r[29],7)&0xFFFFFF80u; // 801D8FE4
  c->r[0]=c->r[3]+0x00000001u; // 801D8FE8
  W32(c->r[27]+0x00000000u,c->r[0]); // 801D8FEC
  c->r[3]=R8(c->r[3]+0x00000000u); // 801D8FF0
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801D8FF4
  c->r[0]=rotl(c->r[3],0)&0x0000007Fu; // 801D8FF8
  c->r[29]=c->r[29]|c->r[0]; // 801D8FFC
  if (crb(c,2)) { goto L_801D90FC; } // 801D9000
  c->r[30]=c->r[30]+0x00000001u; // 801D9004
  IRQCHK(c); goto L_801D8FC4; // 801D9008
  goto L_801D90FC; // 801D900C
L_801D9010:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D9010
  c->r[5]=0u+0x00000000u; // 801D9014
  c->r[0]=c->r[3]+0x00000001u; // 801D9018
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D901C
  c->r[30]=R8(c->r[3]+0x00000000u); // 801D9020
  cmpu(c,0,c->r[30],0x00000030u); // 801D9024
  if (crb(c,1)) { goto L_801D9030; } // 801D9028
  c->r[5]=0u+0x00000001u; // 801D902C
L_801D9030:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D9030
  if (!crb(c,2)) { goto L_801D9058; } // 801D9034
  c->r[6]=c->r[30]|c->r[30]; // 801D9038
  c->r[3]=c->r[31]+0x00000000u; // 801D903C
  c->r[5]=c->r[31]+0x000000D8u; // 801D9040
  c->r[4]=0u+0x000003F9u; // 801D9044
  c->r[7]=0u+0x00000000u; // 801D9048
  c->r[8]=0u+0x00000030u; // 801D904C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9050
  c->lr=0x801D9058u; f_801F9770(c); // 801D9054
L_801D9058:;
  cmps(c,0,(int32_t)c->r[30],32); // 801D9058
  if (!crb(c,0)) { goto L_801D9070; } // 801D905C
  c->r[3]=c->r[28]|c->r[28]; // 801D9060
  c->r[4]=c->r[30]|c->r[30]; // 801D9064
  c->lr=0x801D906Cu; f_801DB7C0(c); // 801D9068
  goto L_801D908C; // 801D906C
L_801D9070:;
  cmps(c,0,(int32_t)c->r[30],48); // 801D9070
  if (!crb(c,0)) { goto L_801D9088; } // 801D9074
  c->r[3]=c->r[29]|c->r[29]; // 801D9078
  c->r[4]=c->r[30]+0xFFFFFFE0u; // 801D907C
  c->lr=0x801D9084u; f_801DDDD0(c); // 801D9080
  goto L_801D908C; // 801D9084
L_801D9088:;
  c->r[3]=0u+0x00000000u; // 801D9088
L_801D908C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D908C
  if (crb(c,2)) { goto L_801D90FC; } // 801D9090
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 801D9094
  goto L_801D90FC; // 801D9098
L_801D909C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801D909C
  c->r[7]=c->r[5]+0x00000001u; // 801D90A0
  W32(c->r[4]+0x00000000u,c->r[7]); // 801D90A4
  c->r[3]=c->r[7]+0x00000001u; // 801D90A8
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D90AC
  c->r[5]=c->r[3]+0x00000001u; // 801D90B0
  c->r[0]=c->r[5]+0x00000001u; // 801D90B4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D90B8
  c->r[7]=R8(c->r[7]+0x00000000u); // 801D90BC
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801D90C0
  W32(c->r[4]+0x00000000u,c->r[5]); // 801D90C4
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801D90C8
  c->r[3]=R8(c->r[3]+0x00000000u); // 801D90CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D90D0
  c->r[30]=R8(c->r[5]+0x00000000u); // 801D90D4
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 801D90D8
  c->lr=0x801D90E0u; f_801EF5D0(c); // 801D90DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801D90E0
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801D90E4
  c->r[3]=c->r[0]-c->r[29]; // 801D90E8
  c->r[0]=c->r[3]+0x00000001u; // 801D90EC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801D90F0
  c->r[4]=sraw(c,c->r[4],16); // 801D90F4
  c->r[29]=c->r[4]+c->r[29]; // 801D90F8
L_801D90FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801D90FC
  c->r[3]=c->r[29]|c->r[29]; // 801D9100
  c->lr=0x801D9108u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9104
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9108
  c->lr=c->r[0]; // 801D910C
  c->r[1]=c->r[1]+0x00000020u; // 801D9110
  return; // 801D9114
}

// fn_801D9120
void f_801D9120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9120
  c->r[0]=c->lr; // 801D9124
  cmps(c,0,(int32_t)c->r[3],0); // 801D9128
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D912C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9130
  c->r[31]=0u+0x802D0000u; // 801D9134
  c->r[31]=c->r[31]+0xFFFFE1C8u; // 801D9138
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D913C
  c->r[30]=c->r[5]|c->r[5]; // 801D9140
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9144
  c->r[29]=c->r[4]|c->r[4]; // 801D9148
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D914C
  c->r[28]=c->r[3]|c->r[3]; // 801D9150
  if (!crb(c,2)) { goto L_801D916C; } // 801D9154
  c->r[3]=c->r[31]+0x00000000u; // 801D9158
  c->r[5]=c->r[31]+0x000004DCu; // 801D915C
  c->r[4]=0u+0x0000041Eu; // 801D9160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9164
  c->lr=0x801D916Cu; f_801F9770(c); // 801D9168
L_801D916C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D916C
  if (!crb(c,2)) { goto L_801D9188; } // 801D9170
  c->r[3]=c->r[31]+0x00000000u; // 801D9174
  c->r[5]=c->r[31]+0x00000508u; // 801D9178
  c->r[4]=0u+0x0000041Fu; // 801D917C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9180
  c->lr=0x801D9188u; f_801F9770(c); // 801D9184
L_801D9188:;
  c->r[0]=R8(c->r[29]+c->r[28]); // 801D9188
  c->r[4]=c->r[29]+c->r[28]; // 801D918C
  cmpu(c,0,c->r[0],0x000000FEu); // 801D9190
  if (crb(c,2)) { goto L_801D91A8; } // 801D9194
  c->r[0]=0u+0x00000001u; // 801D9198
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D919C
  c->r[3]=c->r[29]|c->r[29]; // 801D91A0
  goto L_801D91C0; // 801D91A4
L_801D91A8:;
  c->r[5]=R8(c->r[4]+0x00000001u); // 801D91A8
  c->r[3]=c->r[29]+0x00000003u; // 801D91AC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D91B0
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 801D91B4
  c->r[5]=c->r[5]|c->r[0]; // 801D91B8
  W32(c->r[30]+0x00000000u,c->r[5]); // 801D91BC
L_801D91C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D91C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D91C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D91C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D91CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D91D0
  c->lr=c->r[0]; // 801D91D4
  c->r[1]=c->r[1]+0x00000020u; // 801D91D8
  return; // 801D91DC
}

// fn_801D91E0
void f_801D91E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D91E0
  c->r[0]=c->lr; // 801D91E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D91E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D91EC
  c->r[31]=c->r[3]|c->r[3]; // 801D91F0
  c->lr=0x801D91F8u; f_801DCA90(c); // 801D91F4
  c->r[4]=0u+0x802D0000u; // 801D91F8
  c->r[3]=c->r[31]|c->r[31]; // 801D91FC
  c->r[4]=c->r[4]+0xFFFFE710u; // 801D9200
  W32(c->r[31]+0x00000000u,c->r[4]); // 801D9204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9208
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D920C
  c->lr=c->r[0]; // 801D9210
  c->r[1]=c->r[1]+0x00000010u; // 801D9214
  return; // 801D9218
}

// fn_801D9220
void f_801D9220(Ctx* __restrict c) {
  c->r[0]=c->r[3]|c->r[3]; // 801D9220
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801D9224
  c->r[5]=c->r[4]|c->r[4]; // 801D9228
  c->r[4]=c->r[0]|c->r[0]; // 801D922C
  f_801D7CF0(c); return; // 801D9230
}

// fn_801D9240
void f_801D9240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9240
  c->r[0]=c->lr; // 801D9244
  cmps(c,0,(int32_t)c->r[3],0); // 801D9248
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D924C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9250
  c->r[31]=c->r[4]|c->r[4]; // 801D9254
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9258
  c->r[30]=c->r[3]|c->r[3]; // 801D925C
  if (crb(c,2)) { goto L_801D927C; } // 801D9260
  c->r[4]=0u+0x00000000u; // 801D9264
  c->lr=0x801D926Cu; f_801DCB30(c); // 801D9268
  cmps(c,0,(int32_t)c->r[31],0); // 801D926C
  if (!crb(c,1)) { goto L_801D927C; } // 801D9270
  c->r[3]=c->r[30]|c->r[30]; // 801D9274
  c->lr=0x801D927Cu; f_800B9AD0(c); // 801D9278
L_801D927C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D927C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9280
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9284
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9288
  c->lr=c->r[0]; // 801D928C
  c->r[1]=c->r[1]+0x00000010u; // 801D9290
  return; // 801D9294
}

// fn_801D92A0
void f_801D92A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D92A0
  c->r[0]=c->lr; // 801D92A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D92A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D92AC
  c->r[31]=c->r[4]|c->r[4]; // 801D92B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D92B4
  c->r[30]=c->r[3]|c->r[3]; // 801D92B8
  c->r[3]=c->r[3]+0x00000008u; // 801D92BC
  c->lr=0x801D92C4u; f_801D78E0(c); // 801D92C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D92C4
  if (!crb(c,2)) { goto L_801D92D4; } // 801D92C8
  c->r[3]=0u+0x00000000u; // 801D92CC
  goto L_801D92DC; // 801D92D0
L_801D92D4:;
  if (crb(c,2)) { goto L_801D92DC; } // 801D92D4
  c->lr=0x801D92DCu; f_801D91E0(c); // 801D92D8
L_801D92DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D92DC
  if (crb(c,2)) { goto L_801D92F0; } // 801D92E0
  W32(c->r[3]+0x000000C4u,c->r[31]); // 801D92E4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D92E8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801D92EC
L_801D92F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D92F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D92F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D92F8
  c->lr=c->r[0]; // 801D92FC
  c->r[1]=c->r[1]+0x00000010u; // 801D9300
  return; // 801D9304
}

// fn_801D9310
void f_801D9310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9310
  c->r[0]=c->lr; // 801D9314
  cmps(c,0,(int32_t)c->r[4],0); // 801D9318
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D931C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9320
  c->r[31]=c->r[4]|c->r[4]; // 801D9324
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9328
  c->r[30]=c->r[3]|c->r[3]; // 801D932C
  if (!crb(c,2)) { goto L_801D9350; } // 801D9330
  c->r[3]=0u+0x802D0000u; // 801D9334
  c->r[5]=0u+0x802D0000u; // 801D9338
  c->r[3]=c->r[3]+0xFFFFE720u; // 801D933C
  c->r[4]=0u+0x0000003Bu; // 801D9340
  c->r[5]=c->r[5]+0xFFFFE740u; // 801D9344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9348
  c->lr=0x801D9350u; f_801F9770(c); // 801D934C
L_801D9350:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D9350
  c->r[0]=0u+0x00000000u; // 801D9354
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801D9358
  if (crb(c,2)) { goto L_801D9384; } // 801D935C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D9360
  c->r[3]=c->r[31]|c->r[31]; // 801D9364
  c->r[4]=0u+0xFFFFFFFFu; // 801D9368
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D936C
  c->ctr=c->r[12]; // 801D9370
  if (true) { c->lr=0x801D9378u; dispatch(c,c->ctr); } // 801D9374
  c->r[4]=c->r[31]|c->r[31]; // 801D9378
  c->r[3]=c->r[30]+0x00000008u; // 801D937C
  c->lr=0x801D9384u; f_801D7940(c); // 801D9380
L_801D9384:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9388
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D938C
  c->lr=c->r[0]; // 801D9390
  c->r[1]=c->r[1]+0x00000010u; // 801D9394
  return; // 801D9398
}

// fn_801D93A0
void f_801D93A0(Ctx* __restrict c) {
  c->r[6]=0u+0x000000D0u; // 801D93A0
  c->r[3]=c->r[3]+0x00000008u; // 801D93A4
  f_801D7660(c); return; // 801D93A8
}

// fn_801D93B0
void f_801D93B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801D93B0
  f_801D7880(c); return; // 801D93B4
}

// fn_801D93C0
void f_801D93C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D93C0
  c->r[0]=c->lr; // 801D93C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D93C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D93CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D93D0
  c->r[31]=c->r[3]|c->r[3]; // 801D93D4
  if (crb(c,2)) { goto L_801D93E8; } // 801D93D8
  cmps(c,0,(int32_t)c->r[4],0); // 801D93DC
  if (!crb(c,1)) { goto L_801D93E8; } // 801D93E0
  c->lr=0x801D93E8u; f_800B9AD0(c); // 801D93E4
L_801D93E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D93E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D93EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D93F0
  c->lr=c->r[0]; // 801D93F4
  c->r[1]=c->r[1]+0x00000010u; // 801D93F8
  return; // 801D93FC
}

// fn_801D9400
void f_801D9400(Ctx* __restrict c) {
  c->r[4]=0u+0x802D0000u; // 801D9400
  c->r[0]=0u+0x00000000u; // 801D9404
  c->r[4]=c->r[4]+0xFFFFE880u; // 801D9408
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D940C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D9410
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9414
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D9418
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D941C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D9420
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D9424
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801D9428
  return; // 801D942C
}

// fn_801D9430
void f_801D9430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9430
  c->r[0]=c->lr; // 801D9434
  cmps(c,0,(int32_t)c->r[3],0); // 801D9438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D943C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9440
  c->r[31]=c->r[3]|c->r[3]; // 801D9444
  if (crb(c,2)) { goto L_801D9458; } // 801D9448
  cmps(c,0,(int32_t)c->r[4],0); // 801D944C
  if (!crb(c,1)) { goto L_801D9458; } // 801D9450
  c->lr=0x801D9458u; f_800B9AD0(c); // 801D9454
L_801D9458:;
  c->r[3]=c->r[31]|c->r[31]; // 801D9458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D945C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9460
  c->lr=c->r[0]; // 801D9464
  c->r[1]=c->r[1]+0x00000010u; // 801D9468
  return; // 801D946C
}

// fn_801D9470
void f_801D9470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9470
  c->r[0]=c->lr; // 801D9474
  cmps(c,0,(int32_t)c->r[3],0); // 801D9478
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D947C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9480
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9484
  c->r[30]=c->r[4]|c->r[4]; // 801D9488
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D948C
  c->r[29]=c->r[3]|c->r[3]; // 801D9490
  if (crb(c,2)) { goto L_801D9514; } // 801D9494
  c->r[4]=0u+0x802D0000u; // 801D9498
  c->r[4]=c->r[4]+0xFFFFE880u; // 801D949C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D94A0
  c->lr=0x801D94A8u; f_801E5840(c); // 801D94A4
  c->r[3]=c->r[3]+0x00000354u; // 801D94A8
  c->lr=0x801D94B0u; f_800CCD50(c); // 801D94AC
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801D94B0
  c->lr=0x801D94B8u; f_801D5DD0(c); // 801D94B4
  c->r[0]=R32(c->r[29]+0x00000014u); // 801D94B8
  c->r[4]=c->r[31]|c->r[31]; // 801D94BC
  c->r[6]=0u+0x00000000u; // 801D94C0
  c->r[5]=c->r[0]-c->r[31]; // 801D94C4
  c->lr=0x801D94CCu; f_801D5FB0(c); // 801D94C8
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801D94CC
  c->lr=0x801D94D4u; f_801D5DD0(c); // 801D94D0
  c->r[0]=R32(c->r[29]+0x00000014u); // 801D94D4
  c->r[4]=c->r[31]|c->r[31]; // 801D94D8
  c->r[6]=0u+0x00000000u; // 801D94DC
  c->r[5]=c->r[0]-c->r[31]; // 801D94E0
  c->lr=0x801D94E8u; f_801D6100(c); // 801D94E4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D94E8
  W32(c->r[29]+0x00000014u,c->r[0]); // 801D94EC
  c->lr=0x801D94F4u; f_801E5840(c); // 801D94F0
  c->r[3]=c->r[3]+0x00000354u; // 801D94F4
  c->lr=0x801D94FCu; f_800CCE30(c); // 801D94F8
  cmps(c,0,(int32_t)c->r[30],0); // 801D94FC
  c->r[0]=0u+0x00000000u; // 801D9500
  W32(c->r[29]+0x00000014u,c->r[0]); // 801D9504
  if (!crb(c,1)) { goto L_801D9514; } // 801D9508
  c->r[3]=c->r[29]|c->r[29]; // 801D950C
  c->lr=0x801D9514u; f_800B9AD0(c); // 801D9510
L_801D9514:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9514
  c->r[3]=c->r[29]|c->r[29]; // 801D9518
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D951C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9520
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9524
  c->lr=c->r[0]; // 801D9528
  c->r[1]=c->r[1]+0x00000020u; // 801D952C
  return; // 801D9530
}

// fn_801D9540
void f_801D9540(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x0000001Fu; // 801D9540
  c->r[4]=c->r[5]+c->r[4]; // 801D9544
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801D9548
  cmpu(c,0,c->r[0],c->r[4]); // 801D954C
  if (!crb(c,1)) { goto L_801D955C; } // 801D9550
  c->r[3]=0u+0x00000000u; // 801D9554
  return; // 801D9558
L_801D955C:;
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D955C
  W32(c->r[3]+0x00000010u,c->r[4]); // 801D9560
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D9564
  c->r[3]=0u+0x00000001u; // 801D9568
  return; // 801D956C
}

// fn_801D9570
void f_801D9570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9570
  c->r[0]=c->lr; // 801D9574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D957C
  c->r[31]=c->r[4]|c->r[4]; // 801D9580
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9584
  c->r[30]=c->r[3]|c->r[3]; // 801D9588
  c->r[6]=R32(c->r[3]+0x00000014u); // 801D958C
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D9590
  if (crb(c,2)) { goto L_801D95B4; } // 801D9594
  c->r[3]=0u+0x802D0000u; // 801D9598
  c->r[5]=0u+0x802D0000u; // 801D959C
  c->r[4]=0u+0x0000006Cu; // 801D95A0
  c->r[3]=c->r[3]+0xFFFFE780u; // 801D95A4
  c->r[5]=c->r[5]+0xFFFFE794u; // 801D95A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D95AC
  c->lr=0x801D95B4u; f_801F9770(c); // 801D95B0
L_801D95B4:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D95B4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801D95B8
  c->r[4]=c->r[31]+c->r[3]; // 801D95BC
  cmpu(c,0,c->r[4],c->r[0]); // 801D95C0
  if (!crb(c,1)) { goto L_801D95D0; } // 801D95C4
  c->r[3]=0u+0x00000000u; // 801D95C8
  goto L_801D95DC; // 801D95CC
L_801D95D0:;
  c->r[0]=c->r[4]+0x0000001Fu; // 801D95D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801D95D4
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D95D8
L_801D95DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D95DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D95E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D95E4
  c->lr=c->r[0]; // 801D95E8
  c->r[1]=c->r[1]+0x00000010u; // 801D95EC
  return; // 801D95F0
}

// fn_801D9600
void f_801D9600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9600
  c->r[0]=c->lr; // 801D9604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D960C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9610
  c->r[30]=c->r[3]|c->r[3]; // 801D9614
  c->lr=0x801D961Cu; f_801E5840(c); // 801D9618
  c->r[3]=c->r[3]+0x00000354u; // 801D961C
  c->lr=0x801D9624u; f_800CCD50(c); // 801D9620
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 801D9624
  c->lr=0x801D962Cu; f_801D5DD0(c); // 801D9628
  c->r[0]=R32(c->r[30]+0x00000014u); // 801D962C
  c->r[4]=c->r[31]|c->r[31]; // 801D9630
  c->r[6]=0u+0x00000000u; // 801D9634
  c->r[5]=c->r[0]-c->r[31]; // 801D9638
  c->lr=0x801D9640u; f_801D5FB0(c); // 801D963C
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 801D9640
  c->lr=0x801D9648u; f_801D5DD0(c); // 801D9644
  c->r[0]=R32(c->r[30]+0x00000014u); // 801D9648
  c->r[4]=c->r[31]|c->r[31]; // 801D964C
  c->r[6]=0u+0x00000000u; // 801D9650
  c->r[5]=c->r[0]-c->r[31]; // 801D9654
  c->lr=0x801D965Cu; f_801D6100(c); // 801D9658
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801D965C
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D9660
  c->lr=0x801D9668u; f_801E5840(c); // 801D9664
  c->r[3]=c->r[3]+0x00000354u; // 801D9668
  c->lr=0x801D9670u; f_800CCE30(c); // 801D966C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9670
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9674
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9678
  c->lr=c->r[0]; // 801D967C
  c->r[1]=c->r[1]+0x00000010u; // 801D9680
  return; // 801D9684
}

// fn_801D9690
void f_801D9690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9690
  c->r[0]=c->lr; // 801D9694
  c->r[4]=R32(c->r[3]+0x00000014u); // 801D9698
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D969C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D96A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D96A4
  c->r[31]=c->r[0]-c->r[4]; cr0(c,c->r[31]); // 801D96A8
  if (!crb(c,0)) { goto L_801D96CC; } // 801D96AC
  c->r[3]=0u+0x802D0000u; // 801D96B0
  c->r[5]=0u+0x802D0000u; // 801D96B4
  c->r[3]=c->r[3]+0xFFFFE780u; // 801D96B8
  c->r[4]=0u+0x0000009Du; // 801D96BC
  c->r[5]=c->r[5]+0xFFFFE7E4u; // 801D96C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D96C4
  c->lr=0x801D96CCu; f_801F9770(c); // 801D96C8
L_801D96CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801D96CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D96D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D96D4
  c->lr=c->r[0]; // 801D96D8
  c->r[1]=c->r[1]+0x00000010u; // 801D96DC
  return; // 801D96E0
}

// fn_801D96F0
void f_801D96F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D96F0
  c->r[0]=c->lr; // 801D96F4
  cmps(c,0,(int32_t)c->r[4],0); // 801D96F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D96FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9700
  c->r[31]=0u+0x802D0000u; // 801D9704
  c->r[31]=c->r[31]+0xFFFFE780u; // 801D9708
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D970C
  c->r[30]=c->r[4]|c->r[4]; // 801D9710
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9714
  c->r[29]=c->r[3]|c->r[3]; // 801D9718
  if (!crb(c,2)) { goto L_801D9734; } // 801D971C
  c->r[3]=c->r[31]+0x00000000u; // 801D9720
  c->r[5]=c->r[31]+0x00000088u; // 801D9724
  c->r[4]=0u+0x000000ACu; // 801D9728
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D972C
  c->lr=0x801D9734u; f_801F9770(c); // 801D9730
L_801D9734:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D9734
  cmps(c,0,(int32_t)c->r[0],0); // 801D9738
  if (crb(c,2)) { goto L_801D9754; } // 801D973C
  c->r[3]=c->r[31]+0x00000000u; // 801D9740
  c->r[5]=c->r[31]+0x000000B0u; // 801D9744
  c->r[4]=0u+0x000000ADu; // 801D9748
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D974C
  c->lr=0x801D9754u; f_801F9770(c); // 801D9750
L_801D9754:;
  W32(c->r[29]+0x00000004u,c->r[30]); // 801D9754
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9758
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D975C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9760
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9764
  c->lr=c->r[0]; // 801D9768
  c->r[1]=c->r[1]+0x00000020u; // 801D976C
  return; // 801D9770
}

// fn_801D9780
void f_801D9780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9780
  c->r[0]=c->lr; // 801D9784
  cmps(c,0,(int32_t)c->r[4],0); // 801D9788
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D978C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9790
  c->r[31]=0u+0x802D0000u; // 801D9794
  c->r[31]=c->r[31]+0xFFFFE780u; // 801D9798
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D979C
  c->r[30]=c->r[4]|c->r[4]; // 801D97A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D97A4
  c->r[29]=c->r[3]|c->r[3]; // 801D97A8
  if (!crb(c,2)) { goto L_801D97C4; } // 801D97AC
  c->r[3]=c->r[31]+0x00000000u; // 801D97B0
  c->r[5]=c->r[31]+0x00000088u; // 801D97B4
  c->r[4]=0u+0x000000BDu; // 801D97B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D97BC
  c->lr=0x801D97C4u; f_801F9770(c); // 801D97C0
L_801D97C4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D97C4
  cmpu(c,0,c->r[30],c->r[0]); // 801D97C8
  if (crb(c,2)) { goto L_801D97E4; } // 801D97CC
  c->r[3]=c->r[31]+0x00000000u; // 801D97D0
  c->r[5]=c->r[31]+0x000000D8u; // 801D97D4
  c->r[4]=0u+0x000000BEu; // 801D97D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D97DC
  c->lr=0x801D97E4u; f_801F9770(c); // 801D97E0
L_801D97E4:;
  c->r[0]=0u+0x00000000u; // 801D97E4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D97E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D97EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D97F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D97F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D97F8
  c->lr=c->r[0]; // 801D97FC
  c->r[1]=c->r[1]+0x00000020u; // 801D9800
  return; // 801D9804
}

// fn_801D9810
void f_801D9810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9810
  c->r[0]=c->lr; // 801D9814
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9818
  c->r[0]=0u+0x00000000u; // 801D981C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9820
  c->r[31]=c->r[3]|c->r[3]; // 801D9824
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D9828
  W8(c->r[3]+0x00000001u,c->r[0]); // 801D982C
  W8(c->r[3]+0x00000002u,c->r[0]); // 801D9830
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D9834
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D9838
  W8(c->r[3]+0x00000005u,c->r[0]); // 801D983C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9840
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D9844
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D9848
  W32(c->r[3]+0x00000038u,c->r[0]); // 801D984C
  c->r[3]=c->r[3]+0x00000040u; // 801D9850
  c->lr=0x801D9858u; f_800C66D0(c); // 801D9854
  c->r[4]=c->r[31]|c->r[31]; // 801D9858
  c->r[3]=c->r[31]+0x00000040u; // 801D985C
  c->lr=0x801D9864u; f_800C6E60(c); // 801D9860
  c->r[3]=c->r[31]+0x00000070u; // 801D9864
  c->lr=0x801D986Cu; f_800C66D0(c); // 801D9868
  c->r[4]=c->r[31]|c->r[31]; // 801D986C
  c->r[3]=c->r[31]+0x00000070u; // 801D9870
  c->lr=0x801D9878u; f_800C6E60(c); // 801D9874
  c->r[3]=c->r[31]|c->r[31]; // 801D9878
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D987C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9880
  c->lr=c->r[0]; // 801D9884
  c->r[1]=c->r[1]+0x00000010u; // 801D9888
  return; // 801D988C
}

// fn_801D9890
void f_801D9890(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D9890
  cmps(c,0,(int32_t)c->r[0],0); // 801D9894
  if (!crb(c,2)) return; // 801D9898
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801D989C
  cmps(c,0,(int32_t)c->r[4],0); // 801D98A0
  if (crb(c,2)) { goto L_801D98AC; } // 801D98A4
  goto L_801D98B0; // 801D98A8
L_801D98AC:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801D98AC
L_801D98B0:;
  c->r[0]=0u+0x00000000u; // 801D98B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D98B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D98B8
  f_801D98D0(c); return; // 801D98BC
  return; // 801D98C0
}

// fn_801D98D0
void f_801D98D0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801D98D0
  if (crb(c,2)) return; // 801D98D4
  cmps(c,0,(int32_t)c->r[4],1); // 801D98D8
  if (crb(c,2)) { goto L_801D98F4; } // 801D98DC
  cmps(c,0,(int32_t)c->r[4],2); // 801D98E0
  if (crb(c,2)) { goto L_801D9918; } // 801D98E4
  cmps(c,0,(int32_t)c->r[4],3); // 801D98E8
  if (crb(c,2)) { goto L_801D9940; } // 801D98EC
  goto L_801D9968; // 801D98F0
L_801D98F4:;
  c->r[0]=0u+0x00000001u; // 801D98F4
  c->r[5]=0u+0x801E0000u; // 801D98F8
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D98FC
  c->r[5]=c->r[5]+0xFFFF9CF0u; // 801D9900
  c->r[4]=0u+0x00000001u; // 801D9904
  W8(c->r[3]+0x00000005u,c->r[0]); // 801D9908
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D990C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801D9910
  f_80103490(c); return; // 801D9914
L_801D9918:;
  c->r[6]=0u+0x00000001u; // 801D9918
  c->r[0]=0u+0x00000003u; // 801D991C
  c->r[5]=0u+0x801E0000u; // 801D9920
  W8(c->r[3]+0x00000004u,c->r[6]); // 801D9924
  c->r[5]=c->r[5]+0xFFFF9E40u; // 801D9928
  c->r[4]=0u+0x00000004u; // 801D992C
  W8(c->r[3]+0x00000005u,c->r[6]); // 801D9930
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9934
  c->r[3]=R32(c->r[3]+0x00000034u); // 801D9938
  f_80103490(c); return; // 801D993C
L_801D9940:;
  c->r[6]=0u+0x00000001u; // 801D9940
  c->r[0]=0u+0x00000005u; // 801D9944
  c->r[5]=0u+0x801E0000u; // 801D9948
  W8(c->r[3]+0x00000004u,c->r[6]); // 801D994C
  c->r[5]=c->r[5]+0xFFFF9F60u; // 801D9950
  c->r[4]=0u+0x00000000u; // 801D9954
  W8(c->r[3]+0x00000005u,c->r[6]); // 801D9958
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D995C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801D9960
  f_80103490(c); return; // 801D9964
L_801D9968:;
  c->r[3]=0u+0x802D0000u; // 801D9968
  c->r[5]=0u+0x802D0000u; // 801D996C
  c->r[3]=c->r[3]+0xFFFFE8A0u; // 801D9970
  c->r[4]=0u+0x00000123u; // 801D9974
  c->r[5]=c->r[5]+0xFFFFE8B8u; // 801D9978
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D997C
  f_801F9770(c); return; // 801D9980
  return; // 801D9984
}

// fn_801D9990
void f_801D9990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9990
  c->r[0]=c->lr; // 801D9994
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D9998
  c->r[11]=c->r[1]+0x00000040u; // 801D999C
  c->lr=0x801D99A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D99A0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D99A4
  c->r[26]=0u+0x802D0000u; // 801D99A8
  c->r[28]=c->r[3]|c->r[3]; // 801D99AC
  c->r[29]=c->r[4]|c->r[4]; // 801D99B0
  cmps(c,0,(int32_t)c->r[0],4); // 801D99B4
  c->r[26]=c->r[26]+0xFFFFE8A0u; // 801D99B8
  if (crb(c,2)) { goto L_801D99D4; } // 801D99BC
  c->r[3]=c->r[26]+0x00000000u; // 801D99C0
  c->r[5]=c->r[26]+0x0000002Cu; // 801D99C4
  c->r[4]=0u+0x00000133u; // 801D99C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D99CC
  c->lr=0x801D99D4u; f_801F9770(c); // 801D99D0
L_801D99D4:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801D99D4
  cmps(c,0,(int32_t)c->r[0],4); // 801D99D8
  if (!crb(c,2)) { goto L_801D9CD0; } // 801D99DC
  c->r[0]=R8(c->r[28]+0x00000002u); // 801D99E0
  c->r[30]=0u+0x00000001u; // 801D99E4
  cmps(c,0,(int32_t)c->r[0],0); // 801D99E8
  if (crb(c,2)) { goto L_801D9AE0; } // 801D99EC
  c->r[0]=0u+0x00000002u; // 801D99F0
  c->r[5]=c->r[29]|c->r[29]; // 801D99F4
  c->r[4]=0u+0x00000001u; // 801D99F8
  c->r[3]=0u+0x00000000u; // 801D99FC
  c->ctr=c->r[0]; // 801D9A00
  c->r[0]=c->r[0]|0x00000000u; // 801D9A04
L_801D9A08:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D9A08
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A0C
  if (crb(c,2)) { goto L_801D9A1C; } // 801D9A10
  c->r[4]=0u+0x00000000u; // 801D9A14
  goto L_801D9AE4; // 801D9A18
L_801D9A1C:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D9A1C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A20
  if (crb(c,2)) { goto L_801D9A30; } // 801D9A24
  c->r[4]=0u+0x00000000u; // 801D9A28
  goto L_801D9AE4; // 801D9A2C
L_801D9A30:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 801D9A30
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A34
  if (crb(c,2)) { goto L_801D9A44; } // 801D9A38
  c->r[4]=0u+0x00000000u; // 801D9A3C
  goto L_801D9AE4; // 801D9A40
L_801D9A44:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D9A44
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A48
  if (crb(c,2)) { goto L_801D9A58; } // 801D9A4C
  c->r[4]=0u+0x00000000u; // 801D9A50
  goto L_801D9AE4; // 801D9A54
L_801D9A58:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 801D9A58
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A5C
  if (crb(c,2)) { goto L_801D9A6C; } // 801D9A60
  c->r[4]=0u+0x00000000u; // 801D9A64
  goto L_801D9AE4; // 801D9A68
L_801D9A6C:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 801D9A6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A70
  if (crb(c,2)) { goto L_801D9A80; } // 801D9A74
  c->r[4]=0u+0x00000000u; // 801D9A78
  goto L_801D9AE4; // 801D9A7C
L_801D9A80:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 801D9A80
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A84
  if (crb(c,2)) { goto L_801D9A94; } // 801D9A88
  c->r[4]=0u+0x00000000u; // 801D9A8C
  goto L_801D9AE4; // 801D9A90
L_801D9A94:;
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801D9A94
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A98
  if (crb(c,2)) { goto L_801D9AA8; } // 801D9A9C
  c->r[4]=0u+0x00000000u; // 801D9AA0
  goto L_801D9AE4; // 801D9AA4
L_801D9AA8:;
  c->r[0]=R32(c->r[5]+0x00000020u); // 801D9AA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D9AAC
  if (crb(c,2)) { goto L_801D9ABC; } // 801D9AB0
  c->r[4]=0u+0x00000000u; // 801D9AB4
  goto L_801D9AE4; // 801D9AB8
L_801D9ABC:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 801D9ABC
  cmps(c,0,(int32_t)c->r[0],0); // 801D9AC0
  if (crb(c,2)) { goto L_801D9AD0; } // 801D9AC4
  c->r[4]=0u+0x00000000u; // 801D9AC8
  goto L_801D9AE4; // 801D9ACC
L_801D9AD0:;
  c->r[5]=c->r[5]+0x00000028u; // 801D9AD0
  c->r[3]=c->r[3]+0x00000009u; // 801D9AD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9A08; } // 801D9AD8
  goto L_801D9AE4; // 801D9ADC
L_801D9AE0:;
  c->r[4]=0u+0x00000001u; // 801D9AE0
L_801D9AE4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D9AE4
  if (crb(c,2)) { goto L_801D9AF0; } // 801D9AE8
  c->r[30]=0u+0x00000000u; // 801D9AEC
L_801D9AF0:;
  c->r[0]=R8(c->r[28]+0x00000001u); // 801D9AF0
  c->r[25]=0u+0x00000000u; // 801D9AF4
  cmps(c,0,(int32_t)c->r[0],0); // 801D9AF8
  if (!crb(c,2)) { goto L_801D9B0C; } // 801D9AFC
  cmps(c,0,(int32_t)c->r[30],0); // 801D9B00
  if (crb(c,2)) { goto L_801D9B0C; } // 801D9B04
  c->r[25]=0u+0x00000001u; // 801D9B08
L_801D9B0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D9B0C
  c->r[31]=0u+0x00000000u; // 801D9B10
  if (crb(c,2)) { goto L_801D9B24; } // 801D9B14
  cmps(c,0,(int32_t)c->r[30],0); // 801D9B18
  if (!crb(c,2)) { goto L_801D9B24; } // 801D9B1C
  c->r[31]=0u+0x00000001u; // 801D9B20
L_801D9B24:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D9B24
  if (crb(c,2)) { goto L_801D9C08; } // 801D9B28
  c->lr=0x801D9B30u; f_800CBAA0(c); // 801D9B2C
  c->r[27]=c->r[3]|c->r[3]; // 801D9B30
  c->r[3]=R32(c->r[28]+0x00000034u); // 801D9B34
  c->lr=0x801D9B3Cu; f_80104C60(c); // 801D9B38
  cmps(c,0,(int32_t)c->r[3],0); // 801D9B3C
  if (!crb(c,2)) { goto L_801D9B50; } // 801D9B40
  c->r[3]=c->r[27]|c->r[27]; // 801D9B44
  c->lr=0x801D9B4Cu; f_800CBAE0(c); // 801D9B48
  goto L_801D9CD0; // 801D9B4C
L_801D9B50:;
  c->r[4]=R8(c->r[28]+0x00000003u); // 801D9B50
  c->r[0]=0u+0x00000000u; // 801D9B54
  c->r[5]=c->r[29]|c->r[29]; // 801D9B58
  c->r[3]=c->r[28]+0x00000014u; // 801D9B5C
  c->r[4]=cntlz(c->r[4]); // 801D9B60
  W8(c->r[28]+0x00000003u,c->r[0]); // 801D9B64
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801D9B68
  c->r[7]=c->r[1]+0x00000008u; // 801D9B6C
  c->r[6]=0u+0x00000028u; // 801D9B70
  c->lr=0x801D9B78u; f_800F7F14(c); // 801D9B74
  c->r[3]=R32(c->r[28]+0x00000034u); // 801D9B78
  c->r[4]=c->r[1]+0x00000008u; // 801D9B7C
  c->r[5]=0u+0x00000014u; // 801D9B80
  c->lr=0x801D9B88u; f_80104CF0(c); // 801D9B84
  cmps(c,0,(int32_t)c->r[3],0); // 801D9B88
  c->r[29]=c->r[3]|c->r[3]; // 801D9B8C
  if (crb(c,2)) { goto L_801D9BAC; } // 801D9B90
  c->r[6]=c->r[29]|c->r[29]; // 801D9B94
  c->r[3]=c->r[26]+0x00000000u; // 801D9B98
  c->r[5]=c->r[26]+0x00000050u; // 801D9B9C
  c->r[4]=0u+0x00000166u; // 801D9BA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9BA4
  c->lr=0x801D9BACu; f_801F9810(c); // 801D9BA8
L_801D9BAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D9BAC
  if (crb(c,2)) { goto L_801D9C00; } // 801D9BB0
  c->r[29]=0u+0x00000000u; // 801D9BB4
  c->r[30]=0u+0x00000001u; // 801D9BB8
  W32(c->r[28]+0x00000010u,c->r[30]); // 801D9BBC
  c->r[3]=c->r[28]+0x00000040u; // 801D9BC0
  W32(c->r[28]+0x00000008u,c->r[29]); // 801D9BC4
  W8(c->r[28]+0x00000001u,c->r[29]); // 801D9BC8
  W8(c->r[28]+0x00000002u,c->r[29]); // 801D9BCC
  c->lr=0x801D9BD4u; f_800C6A30(c); // 801D9BD0
  W8(c->r[28]+0x00000006u,c->r[29]); // 801D9BD4
  c->r[3]=c->r[28]+0x00000070u; // 801D9BD8
  c->lr=0x801D9BE0u; f_800C6A30(c); // 801D9BDC
  W8(c->r[28]+0x00000007u,c->r[29]); // 801D9BE0
  c->r[3]=c->r[27]|c->r[27]; // 801D9BE4
  W8(c->r[28]+0x00000006u,c->r[29]); // 801D9BE8
  W8(c->r[28]+0x00000001u,c->r[29]); // 801D9BEC
  W8(c->r[28]+0x00000002u,c->r[30]); // 801D9BF0
  W8(c->r[28]+0x00000007u,c->r[29]); // 801D9BF4
  c->lr=0x801D9BFCu; f_800CBAE0(c); // 801D9BF8
  goto L_801D9CD0; // 801D9BFC
L_801D9C00:;
  c->r[3]=c->r[27]|c->r[27]; // 801D9C00
  c->lr=0x801D9C08u; f_800CBAE0(c); // 801D9C04
L_801D9C08:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D9C08
  if (crb(c,2)) { goto L_801D9C84; } // 801D9C0C
  c->lr=0x801D9C14u; f_800CBAA0(c); // 801D9C10
  c->r[0]=R8(c->r[28]+0x00000006u); // 801D9C14
  c->r[27]=c->r[3]|c->r[3]; // 801D9C18
  cmps(c,0,(int32_t)c->r[0],0); // 801D9C1C
  if (!crb(c,2)) { goto L_801D9C6C; } // 801D9C20
  c->r[3]=0u+0x80000000u; // 801D9C24
  c->r[7]=0u+0x801E0000u; // 801D9C28
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801D9C2C
  c->r[4]=0u+0x000001E0u; // 801D9C30
  c->r[5]=0u+0x00000000u; // 801D9C34
  c->r[3]=c->r[28]+0x00000040u; // 801D9C38
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D9C3C
  c->r[7]=c->r[7]+0xFFFFA080u; // 801D9C40
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 801D9C44
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 801D9C48
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)480); // 801D9C4C
  c->r[5]=c->r[0]+c->r[4]; // 801D9C50
  c->lr=0x801D9C58u; f_800C6930(c); // 801D9C54
  c->lr=0x801D9C5Cu; f_800D0510(c); // 801D9C58
  c->r[0]=0u+0x00000001u; // 801D9C5C
  W32(c->r[28]+0x000000A4u,c->r[4]); // 801D9C60
  W32(c->r[28]+0x000000A0u,c->r[3]); // 801D9C64
  W8(c->r[28]+0x00000006u,c->r[0]); // 801D9C68
L_801D9C6C:;
  c->r[3]=c->r[28]+0x00000070u; // 801D9C6C
  c->lr=0x801D9C74u; f_800C6A30(c); // 801D9C70
  c->r[0]=0u+0x00000000u; // 801D9C74
  W8(c->r[28]+0x00000007u,c->r[0]); // 801D9C78
  c->r[3]=c->r[27]|c->r[27]; // 801D9C7C
  c->lr=0x801D9C84u; f_800CBAE0(c); // 801D9C80
L_801D9C84:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D9C84
  if (crb(c,2)) { goto L_801D9CCC; } // 801D9C88
  c->lr=0x801D9C90u; f_800CBAA0(c); // 801D9C8C
  c->r[0]=0u+0x00000001u; // 801D9C90
  W8(c->r[28]+0x00000007u,c->r[0]); // 801D9C94
  c->r[27]=c->r[3]|c->r[3]; // 801D9C98
  c->r[3]=c->r[28]+0x00000070u; // 801D9C9C
  c->lr=0x801D9CA4u; f_800C6A30(c); // 801D9CA0
  c->r[3]=0u+0x80000000u; // 801D9CA4
  c->r[7]=0u+0x801E0000u; // 801D9CA8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801D9CAC
  c->r[3]=c->r[28]+0x00000070u; // 801D9CB0
  c->r[7]=c->r[7]+0xFFFFA0D0u; // 801D9CB4
  c->r[5]=0u+0x00000000u; // 801D9CB8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D9CBC
  c->lr=0x801D9CC4u; f_800C6930(c); // 801D9CC0
  c->r[3]=c->r[27]|c->r[27]; // 801D9CC4
  c->lr=0x801D9CCCu; f_800CBAE0(c); // 801D9CC8
L_801D9CCC:;
  W8(c->r[28]+0x00000001u,c->r[30]); // 801D9CCC
L_801D9CD0:;
  c->r[11]=c->r[1]+0x00000040u; // 801D9CD0
  c->lr=0x801D9CD8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9CD4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D9CD8
  c->lr=c->r[0]; // 801D9CDC
  c->r[1]=c->r[1]+0x00000040u; // 801D9CE0
  return; // 801D9CE4
}

// fn_801D9CF0
void f_801D9CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9CF0
  c->r[0]=c->lr; // 801D9CF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9CF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9CFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9D00
  c->r[30]=0u+0x802D0000u; // 801D9D04
  c->r[30]=c->r[30]+0xFFFFE8A0u; // 801D9D08
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9D0C
  c->r[29]=c->r[4]|c->r[4]; // 801D9D10
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9D14
  c->r[28]=c->r[3]|c->r[3]; // 801D9D18
  c->lr=0x801D9D20u; f_801DA140(c); // 801D9D1C
  c->r[4]=c->r[28]|c->r[28]; // 801D9D20
  c->lr=0x801D9D28u; f_801DA1E0(c); // 801D9D24
  cmps(c,0,(int32_t)c->r[29],0); // 801D9D28
  c->r[31]=c->r[3]|c->r[3]; // 801D9D2C
  if (crb(c,2)) { goto L_801D9D50; } // 801D9D30
  cmps(c,0,(int32_t)c->r[29],-2); // 801D9D34
  if (crb(c,2)) { goto L_801D9D78; } // 801D9D38
  cmps(c,0,(int32_t)c->r[29],-3); // 801D9D3C
  if (crb(c,2)) { goto L_801D9D84; } // 801D9D40
  cmps(c,0,(int32_t)c->r[29],-1); // 801D9D44
  if (crb(c,2)) { goto L_801D9DA4; } // 801D9D48
  goto L_801D9DB0; // 801D9D4C
L_801D9D50:;
  c->r[0]=0u+0x00000001u; // 801D9D50
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D9D54
  c->r[4]=0u+0x00000000u; // 801D9D58
  c->r[5]=0u+0x00000020u; // 801D9D5C
  c->r[3]=c->r[3]+0x00000014u; // 801D9D60
  c->lr=0x801D9D68u; f_800046B4(c); // 801D9D64
  c->r[0]=0u+0x00000002u; // 801D9D68
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D9D6C
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D9D70
  goto L_801D9DCC; // 801D9D74
L_801D9D78:;
  c->r[0]=0u+0x00000001u; // 801D9D78
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D9D7C
  goto L_801D9DCC; // 801D9D80
L_801D9D84:;
  c->r[3]=c->r[30]+0x00000000u; // 801D9D84
  c->r[5]=c->r[30]+0x00000070u; // 801D9D88
  c->r[4]=0u+0x000001CCu; // 801D9D8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9D90
  c->lr=0x801D9D98u; f_801F9810(c); // 801D9D94
  c->r[0]=0u+0x00000000u; // 801D9D98
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D9D9C
  goto L_801D9DCC; // 801D9DA0
L_801D9DA4:;
  c->r[0]=0u+0x00000000u; // 801D9DA4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9DA8
  goto L_801D9DCC; // 801D9DAC
L_801D9DB0:;
  c->r[3]=c->r[30]+0x00000000u; // 801D9DB0
  c->r[5]=c->r[30]+0x00000088u; // 801D9DB4
  c->r[4]=0u+0x000001D3u; // 801D9DB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9DBC
  c->lr=0x801D9DC4u; f_801F9770(c); // 801D9DC0
  c->r[0]=0u+0x00000000u; // 801D9DC4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D9DC8
L_801D9DCC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D9DCC
  if (crb(c,2)) { goto L_801D9E0C; } // 801D9DD0
  cmps(c,0,(int32_t)c->r[29],-2); // 801D9DD4
  if (crb(c,2)) { goto L_801D9E0C; } // 801D9DD8
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D9DDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D9DE0
  if (crb(c,2)) { goto L_801D9E0C; } // 801D9DE4
  c->r[12]=R32(c->r[31]+0x00000038u); // 801D9DE8
  cmps(c,0,(int32_t)c->r[12],0); // 801D9DEC
  if (crb(c,2)) { goto L_801D9E0C; } // 801D9DF0
  c->r[3]=c->r[28]|c->r[28]; // 801D9DF4
  c->r[4]=c->r[29]|c->r[29]; // 801D9DF8
  c->ctr=c->r[12]; // 801D9DFC
  if (true) { c->lr=0x801D9E04u; dispatch(c,c->ctr); } // 801D9E00
  c->r[0]=0u+0x00000000u; // 801D9E04
  W32(c->r[31]+0x00000038u,c->r[0]); // 801D9E08
L_801D9E0C:;
  c->r[0]=0u+0x00000000u; // 801D9E0C
  W8(c->r[31]+0x00000005u,c->r[0]); // 801D9E10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9E14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9E18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9E1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9E20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9E24
  c->lr=c->r[0]; // 801D9E28
  c->r[1]=c->r[1]+0x00000020u; // 801D9E2C
  return; // 801D9E30
}

// fn_801D9E40
void f_801D9E40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9E40
  c->r[0]=c->lr; // 801D9E44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9E48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9E4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9E50
  c->r[30]=0u+0x802D0000u; // 801D9E54
  c->r[30]=c->r[30]+0xFFFFE8A0u; // 801D9E58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9E5C
  c->r[29]=c->r[4]|c->r[4]; // 801D9E60
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9E64
  c->r[28]=c->r[3]|c->r[3]; // 801D9E68
  c->lr=0x801D9E70u; f_801DA140(c); // 801D9E6C
  c->r[4]=c->r[28]|c->r[28]; // 801D9E70
  c->lr=0x801D9E78u; f_801DA1E0(c); // 801D9E74
  cmps(c,0,(int32_t)c->r[29],0); // 801D9E78
  c->r[31]=c->r[3]|c->r[3]; // 801D9E7C
  if (crb(c,2)) { goto L_801D9EA0; } // 801D9E80
  cmps(c,0,(int32_t)c->r[29],-2); // 801D9E84
  if (crb(c,2)) { goto L_801D9EAC; } // 801D9E88
  cmps(c,0,(int32_t)c->r[29],-3); // 801D9E8C
  if (crb(c,2)) { goto L_801D9EB8; } // 801D9E90
  cmps(c,0,(int32_t)c->r[29],-1); // 801D9E94
  if (crb(c,2)) { goto L_801D9ED8; } // 801D9E98
  goto L_801D9EE4; // 801D9E9C
L_801D9EA0:;
  c->r[0]=0u+0x00000004u; // 801D9EA0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9EA4
  goto L_801D9F00; // 801D9EA8
L_801D9EAC:;
  c->r[0]=0u+0x00000002u; // 801D9EAC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D9EB0
  goto L_801D9F00; // 801D9EB4
L_801D9EB8:;
  c->r[3]=c->r[30]+0x00000000u; // 801D9EB8
  c->r[5]=c->r[30]+0x000000ACu; // 801D9EBC
  c->r[4]=0u+0x000001F9u; // 801D9EC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9EC4
  c->lr=0x801D9ECCu; f_801F9810(c); // 801D9EC8
  c->r[0]=0u+0x00000000u; // 801D9ECC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D9ED0
  goto L_801D9F00; // 801D9ED4
L_801D9ED8:;
  c->r[0]=0u+0x00000000u; // 801D9ED8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9EDC
  goto L_801D9F00; // 801D9EE0
L_801D9EE4:;
  c->r[3]=c->r[30]+0x00000000u; // 801D9EE4
  c->r[5]=c->r[30]+0x00000088u; // 801D9EE8
  c->r[4]=0u+0x00000200u; // 801D9EEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9EF0
  c->lr=0x801D9EF8u; f_801F9770(c); // 801D9EF4
  c->r[0]=0u+0x00000000u; // 801D9EF8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D9EFC
L_801D9F00:;
  cmps(c,0,(int32_t)c->r[29],-2); // 801D9F00
  if (crb(c,2)) { goto L_801D9F38; } // 801D9F04
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D9F08
  cmps(c,0,(int32_t)c->r[0],0); // 801D9F0C
  if (crb(c,2)) { goto L_801D9F38; } // 801D9F10
  c->r[12]=R32(c->r[31]+0x00000038u); // 801D9F14
  cmps(c,0,(int32_t)c->r[12],0); // 801D9F18
  if (crb(c,2)) { goto L_801D9F38; } // 801D9F1C
  c->r[3]=c->r[28]|c->r[28]; // 801D9F20
  c->r[4]=c->r[29]|c->r[29]; // 801D9F24
  c->ctr=c->r[12]; // 801D9F28
  if (true) { c->lr=0x801D9F30u; dispatch(c,c->ctr); } // 801D9F2C
  c->r[0]=0u+0x00000000u; // 801D9F30
  W32(c->r[31]+0x00000038u,c->r[0]); // 801D9F34
L_801D9F38:;
  c->r[0]=0u+0x00000000u; // 801D9F38
  W8(c->r[31]+0x00000005u,c->r[0]); // 801D9F3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9F40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9F44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9F48
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9F4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9F50
  c->lr=c->r[0]; // 801D9F54
  c->r[1]=c->r[1]+0x00000020u; // 801D9F58
  return; // 801D9F5C
}

// fn_801D9F60
void f_801D9F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9F60
  c->r[0]=c->lr; // 801D9F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9F68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9F6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9F70
  c->r[30]=0u+0x802D0000u; // 801D9F74
  c->r[30]=c->r[30]+0xFFFFE8A0u; // 801D9F78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9F7C
  c->r[29]=c->r[4]|c->r[4]; // 801D9F80
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9F84
  c->r[28]=c->r[3]|c->r[3]; // 801D9F88
  c->lr=0x801D9F90u; f_801DA140(c); // 801D9F8C
  c->r[4]=c->r[28]|c->r[28]; // 801D9F90
  c->lr=0x801D9F98u; f_801DA1E0(c); // 801D9F94
  cmps(c,0,(int32_t)c->r[29],0); // 801D9F98
  c->r[31]=c->r[3]|c->r[3]; // 801D9F9C
  if (crb(c,2)) { goto L_801D9FC0; } // 801D9FA0
  cmps(c,0,(int32_t)c->r[29],-2); // 801D9FA4
  if (crb(c,2)) { goto L_801D9FCC; } // 801D9FA8
  cmps(c,0,(int32_t)c->r[29],-3); // 801D9FAC
  if (crb(c,2)) { goto L_801D9FD8; } // 801D9FB0
  cmps(c,0,(int32_t)c->r[29],-1); // 801D9FB4
  if (crb(c,2)) { goto L_801D9FF8; } // 801D9FB8
  goto L_801DA004; // 801D9FBC
L_801D9FC0:;
  c->r[0]=0u+0x00000006u; // 801D9FC0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9FC4
  goto L_801DA020; // 801D9FC8
L_801D9FCC:;
  c->r[0]=0u+0x00000003u; // 801D9FCC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D9FD0
  goto L_801DA020; // 801D9FD4
L_801D9FD8:;
  c->r[3]=c->r[30]+0x00000000u; // 801D9FD8
  c->r[5]=c->r[30]+0x000000C8u; // 801D9FDC
  c->r[4]=0u+0x00000226u; // 801D9FE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9FE4
  c->lr=0x801D9FECu; f_801F9810(c); // 801D9FE8
  c->r[0]=0u+0x00000000u; // 801D9FEC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D9FF0
  goto L_801DA020; // 801D9FF4
L_801D9FF8:;
  c->r[0]=0u+0x00000000u; // 801D9FF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9FFC
  goto L_801DA020; // 801DA000
L_801DA004:;
  c->r[3]=c->r[30]+0x00000000u; // 801DA004
  c->r[5]=c->r[30]+0x00000088u; // 801DA008
  c->r[4]=0u+0x0000022Du; // 801DA00C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA010
  c->lr=0x801DA018u; f_801F9770(c); // 801DA014
  c->r[0]=0u+0x00000000u; // 801DA018
  W32(c->r[31]+0x00000008u,c->r[0]); // 801DA01C
L_801DA020:;
  cmps(c,0,(int32_t)c->r[29],-2); // 801DA020
  if (crb(c,2)) { goto L_801DA058; } // 801DA024
  c->r[0]=R8(c->r[31]+0x00000004u); // 801DA028
  cmps(c,0,(int32_t)c->r[0],0); // 801DA02C
  if (crb(c,2)) { goto L_801DA058; } // 801DA030
  c->r[12]=R32(c->r[31]+0x00000038u); // 801DA034
  cmps(c,0,(int32_t)c->r[12],0); // 801DA038
  if (crb(c,2)) { goto L_801DA058; } // 801DA03C
  c->r[3]=c->r[28]|c->r[28]; // 801DA040
  c->r[4]=c->r[29]|c->r[29]; // 801DA044
  c->ctr=c->r[12]; // 801DA048
  if (true) { c->lr=0x801DA050u; dispatch(c,c->ctr); } // 801DA04C
  c->r[0]=0u+0x00000000u; // 801DA050
  W32(c->r[31]+0x00000038u,c->r[0]); // 801DA054
L_801DA058:;
  c->r[0]=0u+0x00000000u; // 801DA058
  W8(c->r[31]+0x00000005u,c->r[0]); // 801DA05C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA060
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA064
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA068
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DA06C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA070
  c->lr=c->r[0]; // 801DA074
  c->r[1]=c->r[1]+0x00000020u; // 801DA078
  return; // 801DA07C
}

// fn_801DA080
void f_801DA080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA080
  c->r[0]=c->lr; // 801DA084
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA08C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA090
  c->r[30]=c->r[3]|c->r[3]; // 801DA094
  c->lr=0x801DA09Cu; f_800CBAA0(c); // 801DA098
  c->r[31]=c->r[3]|c->r[3]; // 801DA09C
  c->r[3]=c->r[30]|c->r[30]; // 801DA0A0
  c->lr=0x801DA0A8u; f_800C6E70(c); // 801DA0A4
  c->r[3]=c->r[31]|c->r[31]; // 801DA0A8
  c->lr=0x801DA0B0u; f_800CBAE0(c); // 801DA0AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA0B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA0B8
  c->lr=c->r[0]; // 801DA0BC
  c->r[1]=c->r[1]+0x00000010u; // 801DA0C0
  return; // 801DA0C4
}

// fn_801DA0D0
void f_801DA0D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA0D0
  c->r[0]=c->lr; // 801DA0D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA0D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA0DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA0E0
  c->r[30]=c->r[3]|c->r[3]; // 801DA0E4
  c->lr=0x801DA0ECu; f_800CBAA0(c); // 801DA0E8
  c->r[31]=c->r[3]|c->r[3]; // 801DA0EC
  c->r[3]=c->r[30]|c->r[30]; // 801DA0F0
  c->lr=0x801DA0F8u; f_800C6E70(c); // 801DA0F4
  c->r[0]=R8(c->r[3]+0x00000007u); // 801DA0F8
  c->r[30]=c->r[3]|c->r[3]; // 801DA0FC
  cmps(c,0,(int32_t)c->r[0],0); // 801DA100
  if (crb(c,2)) { goto L_801DA118; } // 801DA104
  c->r[3]=c->r[3]+0x00000040u; // 801DA108
  c->lr=0x801DA110u; f_800C6A30(c); // 801DA10C
  c->r[0]=0u+0x00000000u; // 801DA110
  W8(c->r[30]+0x00000006u,c->r[0]); // 801DA114
L_801DA118:;
  c->r[0]=0u+0x00000000u; // 801DA118
  W8(c->r[30]+0x00000007u,c->r[0]); // 801DA11C
  c->r[3]=c->r[31]|c->r[31]; // 801DA120
  c->lr=0x801DA128u; f_800CBAE0(c); // 801DA124
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA12C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA130
  c->lr=c->r[0]; // 801DA134
  c->r[1]=c->r[1]+0x00000010u; // 801DA138
  return; // 801DA13C
}

// GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_801DA140(Ctx* __restrict c) {
  trace_call(0x801DA140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA140
  c->r[0]=c->lr; // 801DA144
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA14C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA150
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA154
  c->r[0]=R8(c->r[13]+0xFFFFAE58u); // 801DA158
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DA15C
  if (!crb(c,2)) { goto L_801DA1B4; } // 801DA160
  c->r[3]=0u+0x80380000u; // 801DA164
  c->r[0]=0u+0x00000000u; // 801DA168
  c->r[30]=c->r[3]+0xFFFFABB0u; // 801DA16C
  W8(c->r[3]+0xFFFFABB0u,c->r[0]); // 801DA170
  c->r[29]=c->r[30]+0x00000038u; // 801DA174
  c->r[31]=c->r[30]+0x000002D8u; // 801DA178
L_801DA17C:;
  c->r[3]=c->r[29]|c->r[29]; // 801DA17C
  c->lr=0x801DA184u; f_801D9810(c); // 801DA180
  c->r[29]=c->r[29]+0x000000A8u; // 801DA184
  cmpu(c,0,c->r[29],c->r[31]); // 801DA188
  if (crb(c,0)) { IRQCHK(c); goto L_801DA17C; } // 801DA18C
  c->r[4]=0u+0x00000001u; // 801DA190
  c->r[5]=0u+0x00000000u; // 801DA194
  c->r[3]=0u+0x00000002u; // 801DA198
  c->r[0]=0u+0x00000003u; // 801DA19C
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 801DA1A0
  W32(c->r[30]+0x00000114u,c->r[4]); // 801DA1A4
  W32(c->r[30]+0x000001BCu,c->r[3]); // 801DA1A8
  W32(c->r[30]+0x00000264u,c->r[0]); // 801DA1AC
  W8(c->r[13]+0xFFFFAE58u,c->r[4]); // 801DA1B0
L_801DA1B4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA1B4
  c->r[3]=0u+0x80380000u; // 801DA1B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA1BC
  c->r[3]=c->r[3]+0xFFFFABB0u; // 801DA1C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA1C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA1C8
  c->lr=c->r[0]; // 801DA1CC
  c->r[1]=c->r[1]+0x00000020u; // 801DA1D0
  return; // 801DA1D4
}

// fn_801DA1E0
void f_801DA1E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA1E0
  c->r[0]=c->lr; // 801DA1E4
  cmpu(c,0,c->r[4],0x00000003u); // 801DA1E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA1EC
  c->r[0]=0u+0x00000000u; // 801DA1F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA1F4
  c->r[31]=c->r[4]|c->r[4]; // 801DA1F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA1FC
  c->r[30]=c->r[3]|c->r[3]; // 801DA200
  if (crb(c,1)) { goto L_801DA20C; } // 801DA204
  c->r[0]=0u+0x00000001u; // 801DA208
L_801DA20C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA20C
  if (!crb(c,2)) { goto L_801DA23C; } // 801DA210
  c->r[3]=0u+0x802D0000u; // 801DA214
  c->r[5]=0u+0x802D0000u; // 801DA218
  c->r[6]=c->r[31]|c->r[31]; // 801DA21C
  c->r[4]=0u+0x00000047u; // 801DA220
  c->r[3]=c->r[3]+0xFFFFE980u; // 801DA224
  c->r[5]=c->r[5]+0xFFFFE9A0u; // 801DA228
  c->r[7]=0u+0x00000000u; // 801DA22C
  c->r[8]=0u+0x00000004u; // 801DA230
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA234
  c->lr=0x801DA23Cu; f_801F9770(c); // 801DA238
L_801DA23C:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)168); // 801DA23C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA240
  c->r[3]=c->r[30]+c->r[0]; // 801DA244
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA248
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA24C
  c->r[3]=c->r[3]+0x00000038u; // 801DA250
  c->lr=c->r[0]; // 801DA254
  c->r[1]=c->r[1]+0x00000010u; // 801DA258
  return; // 801DA25C
}

// Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_801DA260(Ctx* __restrict c) {
  trace_call(0x801DA260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA260
  c->r[0]=c->lr; // 801DA264
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA26C
  c->r[31]=c->r[3]|c->r[3]; // 801DA270
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DA274
  cmps(c,0,(int32_t)c->r[0],0); // 801DA278
  if (!crb(c,2)) { goto L_801DA2E8; } // 801DA27C
  c->r[3]=c->r[3]+0x00000008u; // 801DA280
  c->lr=0x801DA288u; f_800C66D0(c); // 801DA284
  c->lr=0x801DA28Cu; f_800D0510(c); // 801DA288
  c->r[6]=0u+0x80000000u; // 801DA28C
  c->r[5]=0u+0x431C0000u; // 801DA290
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801DA294
  c->r[6]=0u+0x10620000u; // 801DA298
  c->r[10]=c->r[6]+0x00004DD3u; // 801DA29C
  c->r[9]=0u+0x801E0000u; // 801DA2A0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801DA2A4
  c->r[5]=c->r[5]+0xFFFFDE83u; // 801DA2A8
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801DA2AC
  c->r[7]=0u+0x00660000u; // 801DA2B0
  c->r[6]=c->r[4]|c->r[4]; // 801DA2B4
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 801DA2B8
  c->r[5]=c->r[3]|c->r[3]; // 801DA2BC
  c->r[3]=c->r[31]+0x00000008u; // 801DA2C0
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 801DA2C4
  c->r[9]=c->r[9]+0xFFFFA300u; // 801DA2C8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801DA2CC
  c->r[7]=0u+0x00000000u; // 801DA2D0
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 801DA2D4
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 801DA2D8
  c->lr=0x801DA2E0u; f_800C69A0(c); // 801DA2DC
  c->r[0]=0u+0x00000001u; // 801DA2E0
  W8(c->r[31]+0x00000000u,c->r[0]); // 801DA2E4
L_801DA2E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA2E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA2EC
  c->lr=c->r[0]; // 801DA2F0
  c->r[1]=c->r[1]+0x00000010u; // 801DA2F4
  return; // 801DA2F8
}

// fn_801DA300
void f_801DA300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA300
  c->r[0]=c->lr; // 801DA304
  W32(c->r[1]+0x00000074u,c->r[0]); // 801DA308
  c->r[11]=c->r[1]+0x00000070u; // 801DA30C
  c->lr=0x801DA314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA310
  c->r[0]=R8(c->r[13]+0xFFFFAE58u); // 801DA314
  c->r[29]=0u+0x802D0000u; // 801DA318
  c->r[27]=c->r[3]|c->r[3]; // 801DA31C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DA320
  c->r[29]=c->r[29]+0xFFFFE980u; // 801DA324
  if (!crb(c,2)) { goto L_801DA37C; } // 801DA328
  c->r[3]=0u+0x80380000u; // 801DA32C
  c->r[0]=0u+0x00000000u; // 801DA330
  c->r[30]=c->r[3]+0xFFFFABB0u; // 801DA334
  W8(c->r[3]+0xFFFFABB0u,c->r[0]); // 801DA338
  c->r[28]=c->r[30]+0x00000038u; // 801DA33C
  c->r[31]=c->r[30]+0x000002D8u; // 801DA340
L_801DA344:;
  c->r[3]=c->r[28]|c->r[28]; // 801DA344
  c->lr=0x801DA34Cu; f_801D9810(c); // 801DA348
  c->r[28]=c->r[28]+0x000000A8u; // 801DA34C
  cmpu(c,0,c->r[28],c->r[31]); // 801DA350
  if (crb(c,0)) { IRQCHK(c); goto L_801DA344; } // 801DA354
  c->r[4]=0u+0x00000001u; // 801DA358
  c->r[5]=0u+0x00000000u; // 801DA35C
  c->r[3]=0u+0x00000002u; // 801DA360
  c->r[0]=0u+0x00000003u; // 801DA364
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 801DA368
  W32(c->r[30]+0x00000114u,c->r[4]); // 801DA36C
  W32(c->r[30]+0x000001BCu,c->r[3]); // 801DA370
  W32(c->r[30]+0x00000264u,c->r[0]); // 801DA374
  W8(c->r[13]+0xFFFFAE58u,c->r[4]); // 801DA378
L_801DA37C:;
  c->r[30]=0u+0x80380000u; // 801DA37C
  c->r[30]=c->r[30]+0xFFFFABB0u; // 801DA380
  c->r[0]=c->r[30]+0x00000008u; // 801DA384
  cmpu(c,0,c->r[0],c->r[27]); // 801DA388
  if (crb(c,2)) { goto L_801DA3A4; } // 801DA38C
  c->r[3]=c->r[29]+0x00000000u; // 801DA390
  c->r[5]=c->r[29]+0x0000006Cu; // 801DA394
  c->r[4]=0u+0x00000089u; // 801DA398
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA39C
  c->lr=0x801DA3A4u; f_801F9770(c); // 801DA3A0
L_801DA3A4:;
  c->lr=0x801DA3A8u; f_800EE4D0(c); // 801DA3A4
  cmps(c,0,(int32_t)c->r[3],40); // 801DA3A8
  if (crb(c,0)) { goto L_801DA420; } // 801DA3AC
  c->r[28]=c->r[30]+0x00000038u; // 801DA3B0
  c->r[31]=0u+0x00000000u; // 801DA3B4
L_801DA3B8:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 801DA3B8
  cmps(c,0,(int32_t)c->r[0],4); // 801DA3BC
  if (!crb(c,2)) { goto L_801DA3FC; } // 801DA3C0
  c->r[3]=c->r[31]|c->r[31]; // 801DA3C4
  c->r[4]=c->r[1]+0x00000008u; // 801DA3C8
  c->r[5]=0u+0x00000028u; // 801DA3CC
  c->lr=0x801DA3D4u; f_800EE500(c); // 801DA3D0
  cmps(c,0,(int32_t)c->r[3],40); // 801DA3D4
  if (crb(c,2)) { goto L_801DA3F0; } // 801DA3D8
  c->r[3]=c->r[29]+0x00000000u; // 801DA3DC
  c->r[5]=c->r[29]+0x000000A8u; // 801DA3E0
  c->r[4]=0u+0x00000099u; // 801DA3E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA3E8
  c->lr=0x801DA3F0u; f_801F9810(c); // 801DA3EC
L_801DA3F0:;
  c->r[3]=c->r[28]|c->r[28]; // 801DA3F0
  c->r[4]=c->r[1]+0x00000008u; // 801DA3F4
  c->lr=0x801DA3FCu; f_801D9990(c); // 801DA3F8
L_801DA3FC:;
  c->r[3]=c->r[28]|c->r[28]; // 801DA3FC
  c->lr=0x801DA404u; f_801D9890(c); // 801DA400
  c->r[31]=c->r[31]+0x00000001u; // 801DA404
  c->r[28]=c->r[28]+0x000000A8u; // 801DA408
  cmps(c,0,(int32_t)c->r[31],4); // 801DA40C
  c->r[30]=c->r[30]+0x000000A8u; // 801DA410
  if (crb(c,0)) { IRQCHK(c); goto L_801DA3B8; } // 801DA414
  c->r[3]=0u+0x00000028u; // 801DA418
  c->lr=0x801DA420u; f_800EE5D0(c); // 801DA41C
L_801DA420:;
  c->r[11]=c->r[1]+0x00000070u; // 801DA420
  c->lr=0x801DA428u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA424
  c->r[0]=R32(c->r[1]+0x00000074u); // 801DA428
  c->lr=c->r[0]; // 801DA42C
  c->r[1]=c->r[1]+0x00000070u; // 801DA430
  return; // 801DA434
}

// fn_801DA440
void f_801DA440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA440
  c->r[0]=c->lr; // 801DA444
  cmps(c,0,(int32_t)c->r[4],0); // 801DA448
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA44C
  c->r[0]=0u+0x00000000u; // 801DA450
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA454
  c->r[31]=0u+0x802D0000u; // 801DA458
  c->r[31]=c->r[31]+0xFFFFEA48u; // 801DA45C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA460
  c->r[30]=c->r[3]|c->r[3]; // 801DA464
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA468
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DA46C
  c->r[28]=c->r[4]|c->r[4]; // 801DA470
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DA474
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DA478
  if (!crb(c,2)) { goto L_801DA494; } // 801DA47C
  c->r[3]=c->r[31]+0x00000000u; // 801DA480
  c->r[5]=c->r[31]+0x000000A0u; // 801DA484
  c->r[4]=0u+0x0000004Eu; // 801DA488
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA48C
  c->lr=0x801DA494u; f_801F9770(c); // 801DA490
L_801DA494:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DA494
  c->r[0]=c->r[3]+0xADAD0000u; // 801DA498
  cmpu(c,0,c->r[0],0x00004551u); // 801DA49C
  if (crb(c,2)) { goto L_801DA4B8; } // 801DA4A0
  c->r[3]=c->r[31]+0x00000000u; // 801DA4A4
  c->r[5]=c->r[31]+0x00000010u; // 801DA4A8
  c->r[4]=0u+0x0000002Bu; // 801DA4AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA4B0
  c->lr=0x801DA4B8u; f_801F9770(c); // 801DA4B4
L_801DA4B8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DA4B8
  c->r[0]=c->r[3]+0xADAD0000u; // 801DA4BC
  cmpu(c,0,c->r[0],0x00004551u); // 801DA4C0
  if (crb(c,2)) { goto L_801DA4D0; } // 801DA4C4
  c->r[0]=0u+0x00000000u; // 801DA4C8
  goto L_801DA534; // 801DA4CC
L_801DA4D0:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801DA4D0
  cmpu(c,0,c->r[0],0x00000100u); // 801DA4D4
  if (!crb(c,0)) { goto L_801DA4F0; } // 801DA4D8
  c->r[3]=c->r[31]+0x00000000u; // 801DA4DC
  c->r[5]=c->r[31]+0x00000044u; // 801DA4E0
  c->r[4]=0u+0x00000033u; // 801DA4E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA4E8
  c->lr=0x801DA4F0u; f_801F9770(c); // 801DA4EC
L_801DA4F0:;
  c->r[29]=R16(c->r[28]+0x00000006u); // 801DA4F0
  cmpu(c,0,c->r[29],0x00000100u); // 801DA4F4
  if (!crb(c,0)) { goto L_801DA504; } // 801DA4F8
  c->r[0]=0u+0x00000000u; // 801DA4FC
  goto L_801DA534; // 801DA500
L_801DA504:;
  if (!crb(c,1)) { goto L_801DA51C; } // 801DA504
  c->r[3]=c->r[31]+0x00000000u; // 801DA508
  c->r[5]=c->r[31]+0x00000044u; // 801DA50C
  c->r[4]=0u+0x0000003Bu; // 801DA510
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA514
  c->lr=0x801DA51Cu; f_801F9770(c); // 801DA518
L_801DA51C:;
  c->r[0]=addc(c,~c->r[29],0x00000100u,1); // 801DA51C
  c->r[3]=0u+0x00000100u; // 801DA520
  c->r[3]=c->r[3]|~c->r[29]; // 801DA524
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801DA528
  c->r[0]=c->r[3]-c->r[0]; // 801DA52C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DA530
L_801DA534:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA534
  if (!crb(c,2)) { goto L_801DA544; } // 801DA538
  c->r[3]=c->r[30]|c->r[30]; // 801DA53C
  goto L_801DA57C; // 801DA540
L_801DA544:;
  W32(c->r[30]+0x00000000u,c->r[28]); // 801DA544
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DA548
  c->r[3]=c->r[0]+c->r[28]; // 801DA54C
  W32(c->r[30]+0x00000004u,c->r[3]); // 801DA550
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DA554
  c->r[0]=c->r[3]+0xBBBF0000u; // 801DA558
  cmpu(c,0,c->r[0],0x00005441u); // 801DA55C
  if (crb(c,2)) { goto L_801DA578; } // 801DA560
  c->r[3]=c->r[31]+0x00000000u; // 801DA564
  c->r[5]=c->r[31]+0x000000C8u; // 801DA568
  c->r[4]=0u+0x00000057u; // 801DA56C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA570
  c->lr=0x801DA578u; f_801F9770(c); // 801DA574
L_801DA578:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA578
L_801DA57C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA57C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA580
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA584
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA588
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DA58C
  c->lr=c->r[0]; // 801DA590
  c->r[1]=c->r[1]+0x00000020u; // 801DA594
  return; // 801DA598
}

// fn_801DA5A0
void f_801DA5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA5A0
  c->r[0]=c->lr; // 801DA5A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA5A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DA5AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA5B0
  c->r[31]=c->r[3]|c->r[3]; // 801DA5B4
  cmps(c,0,(int32_t)c->r[0],0); // 801DA5B8
  if (!crb(c,2)) { goto L_801DA5DC; } // 801DA5BC
  c->r[3]=0u+0x802D0000u; // 801DA5C0
  c->r[5]=0u+0x802D0000u; // 801DA5C4
  c->r[3]=c->r[3]+0xFFFFEA48u; // 801DA5C8
  c->r[4]=0u+0x00000065u; // 801DA5CC
  c->r[5]=c->r[5]+0xFFFFEB68u; // 801DA5D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA5D4
  c->lr=0x801DA5DCu; f_801F9770(c); // 801DA5D8
L_801DA5DC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801DA5DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA5E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DA5E4
  c->r[3]=c->r[0]+c->r[3]; // 801DA5E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA5EC
  c->lr=c->r[0]; // 801DA5F0
  c->r[1]=c->r[1]+0x00000010u; // 801DA5F4
  return; // 801DA5F8
}

// fn_801DA600
void f_801DA600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA600
  c->r[0]=c->lr; // 801DA604
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA608
  c->r[11]=c->r[1]+0x00000030u; // 801DA60C
  c->lr=0x801DA614u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA610
  cmps(c,0,(int32_t)c->r[5],0); // 801DA614
  c->r[31]=0u+0x802D0000u; // 801DA618
  c->r[26]=c->r[3]|c->r[3]; // 801DA61C
  c->r[24]=c->r[4]|c->r[4]; // 801DA620
  c->r[25]=c->r[5]|c->r[5]; // 801DA624
  c->r[31]=c->r[31]+0xFFFFEA48u; // 801DA628
  if (!crb(c,2)) { goto L_801DA644; } // 801DA62C
  c->r[3]=c->r[31]+0x00000000u; // 801DA630
  c->r[5]=c->r[31]+0x00000148u; // 801DA634
  c->r[4]=0u+0x00000075u; // 801DA638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA63C
  c->lr=0x801DA644u; f_801F9770(c); // 801DA640
L_801DA644:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801DA644
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DA648
  c->r[29]=c->r[0]+c->r[3]; cr0(c,c->r[29]); // 801DA64C
  if (!crb(c,2)) { goto L_801DA65C; } // 801DA650
  c->r[3]=0u+0x00000000u; // 801DA654
  goto L_801DA6E4; // 801DA658
L_801DA65C:;
  c->r[3]=c->r[24]|c->r[24]; // 801DA65C
  c->lr=0x801DA664u; f_80216B70(c); // 801DA660
  c->r[28]=c->r[3]|c->r[3]; // 801DA664
  c->r[30]=c->r[29]|c->r[29]; // 801DA668
  c->r[27]=0u+0x00000000u; // 801DA66C
  goto L_801DA6D4; // 801DA670
L_801DA674:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DA674
  c->r[0]=c->r[29]+c->r[0]; // 801DA678
  c->r[26]=addc(c,c->r[0],0x00000008u,0); cr0(c,c->r[26]); // 801DA67C
  if (!crb(c,2)) { goto L_801DA698; } // 801DA680
  c->r[3]=c->r[31]+0x00000000u; // 801DA684
  c->r[5]=c->r[31]+0x00000174u; // 801DA688
  c->r[4]=0u+0x00000085u; // 801DA68C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA690
  c->lr=0x801DA698u; f_801F9770(c); // 801DA694
L_801DA698:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 801DA698
  cmpu(c,0,c->r[28],c->r[0]); // 801DA69C
  if (!crb(c,2)) { goto L_801DA6CC; } // 801DA6A0
  c->r[3]=c->r[24]|c->r[24]; // 801DA6A4
  c->r[5]=c->r[28]|c->r[28]; // 801DA6A8
  c->r[4]=c->r[26]+0x00000008u; // 801DA6AC
  c->lr=0x801DA6B4u; f_80220224(c); // 801DA6B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DA6B4
  if (!crb(c,2)) { goto L_801DA6CC; } // 801DA6B8
  c->r[0]=R32(c->r[26]+0x00000000u); // 801DA6BC
  c->r[3]=0u+0x00000001u; // 801DA6C0
  W32(c->r[25]+0x00000000u,c->r[0]); // 801DA6C4
  goto L_801DA6E4; // 801DA6C8
L_801DA6CC:;
  c->r[30]=c->r[30]+0x00000004u; // 801DA6CC
  c->r[27]=c->r[27]+0x00000001u; // 801DA6D0
L_801DA6D4:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801DA6D4
  cmpu(c,0,c->r[27],c->r[0]); // 801DA6D8
  if (crb(c,0)) { IRQCHK(c); goto L_801DA674; } // 801DA6DC
  c->r[3]=0u+0x00000000u; // 801DA6E0
L_801DA6E4:;
  c->r[11]=c->r[1]+0x00000030u; // 801DA6E4
  c->lr=0x801DA6ECu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA6E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA6EC
  c->lr=c->r[0]; // 801DA6F0
  c->r[1]=c->r[1]+0x00000030u; // 801DA6F4
  return; // 801DA6F8
}

// fn_801DA700
void f_801DA700(Ctx* __restrict c) {
  c->r[3]=0u+0x80380000u; // 801DA700
  c->r[0]=0u+0xFFFFFFFFu; // 801DA704
  {uint32_t ea=c->r[3]+0xFFFFAE88u; W16(ea,c->r[0]); c->r[3]=ea;} // 801DA708
  W16(c->r[3]+0x00000002u,c->r[0]); // 801DA70C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DA710
  W16(c->r[3]+0x00000006u,c->r[0]); // 801DA714
  W16(c->r[3]+0x00000008u,c->r[0]); // 801DA718
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801DA71C
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 801DA720
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801DA724
  W16(c->r[3]+0x00000010u,c->r[0]); // 801DA728
  W16(c->r[3]+0x00000012u,c->r[0]); // 801DA72C
  W16(c->r[3]+0x00000014u,c->r[0]); // 801DA730
  W16(c->r[3]+0x00000016u,c->r[0]); // 801DA734
  W16(c->r[3]+0x00000018u,c->r[0]); // 801DA738
  W16(c->r[3]+0x0000001Au,c->r[0]); // 801DA73C
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 801DA740
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 801DA744
  return; // 801DA748
}

// fn_801DA750
void f_801DA750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA750
  c->r[0]=c->lr; // 801DA754
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA75C
  c->r[31]=c->r[3]|c->r[3]; // 801DA760
  c->lr=0x801DA768u; f_801D2750(c); // 801DA764
  c->r[9]=0u+0x802D0000u; // 801DA768
  c->r[10]=0u+0x00000000u; // 801DA76C
  c->r[9]=c->r[9]+0xFFFFEE98u; // 801DA770
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA774
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA778
  c->r[8]=c->r[9]+0x00000024u; // 801DA77C
  c->r[7]=c->r[9]+0x00000038u; // 801DA780
  c->r[6]=0u+0x00000078u; // 801DA784
  c->r[5]=0u+0x00000030u; // 801DA788
  c->r[4]=0u+0x0000007Fu; // 801DA78C
  c->r[3]=0u+0x00000040u; // 801DA790
  W32(c->r[31]+0x000000B4u,c->r[10]); // 801DA794
  c->r[0]=0u+0xFFFFFFFFu; // 801DA798
  W32(c->r[31]+0x000000B8u,c->r[10]); // 801DA79C
  W32(c->r[31]+0x000000C0u,c->r[10]); // 801DA7A0
  W32(c->r[31]+0x000000C4u,c->r[10]); // 801DA7A4
  W32(c->r[31]+0x00000000u,c->r[9]); // 801DA7A8
  W32(c->r[31]+0x000000BCu,c->r[8]); // 801DA7AC
  W32(c->r[31]+0x000000C8u,c->r[7]); // 801DA7B0
  W8(c->r[31]+0x000000CCu,c->r[10]); // 801DA7B4
  W8(c->r[31]+0x000000CDu,c->r[10]); // 801DA7B8
  W8(c->r[31]+0x000000CEu,c->r[10]); // 801DA7BC
  W8(c->r[31]+0x000000CFu,c->r[10]); // 801DA7C0
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 801DA7C4
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 801DA7C8
  W32(c->r[31]+0x000000DCu,c->r[10]); // 801DA7CC
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 801DA7D0
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[1]);} // 801DA7D4
  W32(c->r[31]+0x00000160u,c->r[10]); // 801DA7D8
  W32(c->r[31]+0x000000E4u,c->r[10]); // 801DA7DC
  W32(c->r[31]+0x000000F8u,c->r[10]); // 801DA7E0
  W32(c->r[31]+0x000000FCu,c->r[10]); // 801DA7E4
  W16(c->r[31]+0x000000ECu,c->r[6]); // 801DA7E8
  W8(c->r[31]+0x000000EAu,c->r[5]); // 801DA7EC
  W8(c->r[31]+0x000000E8u,c->r[4]); // 801DA7F0
  W8(c->r[31]+0x000000E9u,c->r[3]); // 801DA7F4
  W32(c->r[31]+0x000000F0u,c->r[10]); // 801DA7F8
  W16(c->r[31]+0x00000140u,c->r[0]); // 801DA7FC
  W16(c->r[31]+0x00000142u,c->r[0]); // 801DA800
  W16(c->r[31]+0x00000144u,c->r[0]); // 801DA804
  W16(c->r[31]+0x00000146u,c->r[0]); // 801DA808
  W16(c->r[31]+0x00000148u,c->r[0]); // 801DA80C
  W16(c->r[31]+0x0000014Au,c->r[0]); // 801DA810
  W16(c->r[31]+0x0000014Cu,c->r[0]); // 801DA814
  W16(c->r[31]+0x0000014Eu,c->r[0]); // 801DA818
  W16(c->r[31]+0x00000150u,c->r[0]); // 801DA81C
  W16(c->r[31]+0x00000152u,c->r[0]); // 801DA820
  W16(c->r[31]+0x00000154u,c->r[0]); // 801DA824
  W16(c->r[31]+0x00000156u,c->r[0]); // 801DA828
  W16(c->r[31]+0x00000158u,c->r[0]); // 801DA82C
  W16(c->r[31]+0x0000015Au,c->r[0]); // 801DA830
  W16(c->r[31]+0x0000015Cu,c->r[0]); // 801DA834
  W16(c->r[31]+0x0000015Eu,c->r[0]); // 801DA838
  c->r[0]=0u+0x00000000u; // 801DA83C
  W32(c->r[31]+0x00000100u,c->r[0]); // 801DA840
  c->r[3]=c->r[31]|c->r[31]; // 801DA844
  W32(c->r[31]+0x00000104u,c->r[0]); // 801DA848
  W32(c->r[31]+0x00000108u,c->r[0]); // 801DA84C
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 801DA850
  W32(c->r[31]+0x00000110u,c->r[0]); // 801DA854
  W32(c->r[31]+0x00000114u,c->r[0]); // 801DA858
  W32(c->r[31]+0x00000118u,c->r[0]); // 801DA85C
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 801DA860
  W32(c->r[31]+0x00000120u,c->r[0]); // 801DA864
  W32(c->r[31]+0x00000124u,c->r[0]); // 801DA868
  W32(c->r[31]+0x00000128u,c->r[0]); // 801DA86C
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 801DA870
  W32(c->r[31]+0x00000130u,c->r[0]); // 801DA874
  W32(c->r[31]+0x00000134u,c->r[0]); // 801DA878
  W32(c->r[31]+0x00000138u,c->r[0]); // 801DA87C
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 801DA880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA884
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA888
  c->lr=c->r[0]; // 801DA88C
  c->r[1]=c->r[1]+0x00000010u; // 801DA890
  return; // 801DA894
}

// fn_801DA8A0
void f_801DA8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA8A0
  c->r[0]=c->lr; // 801DA8A4
  cmps(c,0,(int32_t)c->r[3],0); // 801DA8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA8B0
  c->r[31]=c->r[3]|c->r[3]; // 801DA8B4
  if (crb(c,2)) { goto L_801DA8C8; } // 801DA8B8
  cmps(c,0,(int32_t)c->r[4],0); // 801DA8BC
  if (!crb(c,1)) { goto L_801DA8C8; } // 801DA8C0
  c->lr=0x801DA8C8u; f_800B9AD0(c); // 801DA8C4
L_801DA8C8:;
  c->r[3]=c->r[31]|c->r[31]; // 801DA8C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA8CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA8D0
  c->lr=c->r[0]; // 801DA8D4
  c->r[1]=c->r[1]+0x00000010u; // 801DA8D8
  return; // 801DA8DC
}

// fn_801DA8E0
void f_801DA8E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA8E0
  c->r[0]=c->lr; // 801DA8E4
  cmps(c,0,(int32_t)c->r[3],0); // 801DA8E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA8EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA8F0
  c->r[31]=c->r[3]|c->r[3]; // 801DA8F4
  if (crb(c,2)) { goto L_801DA908; } // 801DA8F8
  cmps(c,0,(int32_t)c->r[4],0); // 801DA8FC
  if (!crb(c,1)) { goto L_801DA908; } // 801DA900
  c->lr=0x801DA908u; f_800B9AD0(c); // 801DA904
L_801DA908:;
  c->r[3]=c->r[31]|c->r[31]; // 801DA908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA90C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA910
  c->lr=c->r[0]; // 801DA914
  c->r[1]=c->r[1]+0x00000010u; // 801DA918
  return; // 801DA91C
}

// fn_801DA920
void f_801DA920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA920
  c->r[0]=c->lr; // 801DA924
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA928
  c->r[11]=c->r[1]+0x00000030u; // 801DA92C
  c->lr=0x801DA934u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA930
  cmps(c,0,(int32_t)c->r[3],0); // 801DA934
  c->r[30]=c->r[3]|c->r[3]; // 801DA938
  c->r[31]=c->r[4]|c->r[4]; // 801DA93C
  if (crb(c,2)) { goto L_801DAACC; } // 801DA940
  c->r[5]=0u+0x802D0000u; // 801DA944
  c->r[5]=c->r[5]+0xFFFFEE98u; // 801DA948
  W32(c->r[3]+0x00000000u,c->r[5]); // 801DA94C
  c->r[4]=c->r[5]+0x00000024u; // 801DA950
  c->r[0]=c->r[5]+0x00000038u; // 801DA954
  W32(c->r[3]+0x000000BCu,c->r[4]); // 801DA958
  W32(c->r[3]+0x000000C8u,c->r[0]); // 801DA95C
  c->lr=0x801DA964u; f_801E5840(c); // 801DA960
  c->r[3]=c->r[3]+0x00000354u; // 801DA964
  c->lr=0x801DA96Cu; f_800CCD50(c); // 801DA968
  c->lr=0x801DA970u; f_801E5840(c); // 801DA96C
  c->r[3]=c->r[3]+0x00000354u; // 801DA970
  c->lr=0x801DA978u; f_800CCD50(c); // 801DA974
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801DA978
  cmps(c,0,(int32_t)c->r[0],0); // 801DA97C
  if (crb(c,2)) { goto L_801DA9A8; } // 801DA980
  cmps(c,0,(int32_t)c->r[30],0); // 801DA984
  c->r[26]=c->r[30]|c->r[30]; // 801DA988
  if (crb(c,2)) { goto L_801DA994; } // 801DA98C
  c->r[26]=c->r[30]+0x000000C0u; // 801DA990
L_801DA994:;
  c->lr=0x801DA998u; f_801E5840(c); // 801DA994
  c->r[4]=c->r[26]|c->r[26]; // 801DA998
  c->lr=0x801DA9A0u; f_801E5E00(c); // 801DA99C
  c->r[0]=0u+0x00000000u; // 801DA9A0
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801DA9A4
L_801DA9A8:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801DA9A8
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9AC
  if (crb(c,2)) { goto L_801DA9D8; } // 801DA9B0
  cmps(c,0,(int32_t)c->r[30],0); // 801DA9B4
  c->r[26]=c->r[30]|c->r[30]; // 801DA9B8
  if (crb(c,2)) { goto L_801DA9C4; } // 801DA9BC
  c->r[26]=c->r[30]+0x000000B4u; // 801DA9C0
L_801DA9C4:;
  c->lr=0x801DA9C8u; f_801D5DD0(c); // 801DA9C4
  c->r[4]=c->r[26]|c->r[26]; // 801DA9C8
  c->lr=0x801DA9D0u; f_801D5F40(c); // 801DA9CC
  c->r[0]=0u+0x00000000u; // 801DA9D0
  W8(c->r[30]+0x000000CCu,c->r[0]); // 801DA9D4
L_801DA9D8:;
  c->r[26]=0u+0x00000000u; // 801DA9D8
  c->r[25]=0u+0x00000000u; // 801DA9DC
  c->r[27]=0u+0x802D0000u; // 801DA9E0
  c->r[28]=0u+0x802D0000u; // 801DA9E4
  c->r[29]=0u+0x00000000u; // 801DA9E8
L_801DA9EC:;
  c->lr=0x801DA9F0u; f_801E5840(c); // 801DA9EC
  c->r[3]=c->r[3]+0x00000354u; // 801DA9F0
  c->lr=0x801DA9F8u; f_800CCD50(c); // 801DA9F4
  cmpu(c,0,c->r[26],0x0000000Fu); // 801DA9F8
  c->r[0]=0u+0x00000000u; // 801DA9FC
  if (crb(c,1)) { goto L_801DAA08; } // 801DAA00
  c->r[0]=0u+0x00000001u; // 801DAA04
L_801DAA08:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DAA08
  if (!crb(c,2)) { goto L_801DAA30; } // 801DAA0C
  c->r[6]=c->r[26]|c->r[26]; // 801DAA10
  c->r[3]=c->r[27]+0xFFFFEBE8u; // 801DAA14
  c->r[5]=c->r[28]+0xFFFFEBFCu; // 801DAA18
  c->r[4]=0u+0x00000261u; // 801DAA1C
  c->r[7]=0u+0x00000000u; // 801DAA20
  c->r[8]=0u+0x00000010u; // 801DAA24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DAA28
  c->lr=0x801DAA30u; f_801F9770(c); // 801DAA2C
L_801DAA30:;
  cmps(c,0,(int32_t)c->r[26],15); // 801DAA30
  if (!crb(c,1)) { goto L_801DAA40; } // 801DAA34
  c->r[3]=0u+0x00000000u; // 801DAA38
  goto L_801DAA48; // 801DAA3C
L_801DAA40:;
  c->r[3]=c->r[30]+c->r[25]; // 801DAA40
  c->r[3]=R32(c->r[3]+0x00000100u); // 801DAA44
L_801DAA48:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DAA48
  if (!crb(c,2)) { goto L_801DAA60; } // 801DAA4C
  c->lr=0x801DAA54u; f_801E5840(c); // 801DAA50
  c->r[3]=c->r[3]+0x00000354u; // 801DAA54
  c->lr=0x801DAA5Cu; f_800CCE30(c); // 801DAA58
  goto L_801DAA94; // 801DAA5C
L_801DAA60:;
  c->lr=0x801DAA64u; f_801DCE00(c); // 801DAA60
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DAA64
  c->r[4]=c->r[30]+c->r[25]; // 801DAA68
  c->r[4]=R32(c->r[4]+0x00000100u); // 801DAA6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DAA70
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DAA74
  c->ctr=c->r[12]; // 801DAA78
  if (true) { c->lr=0x801DAA80u; dispatch(c,c->ctr); } // 801DAA7C
  c->r[3]=c->r[30]+c->r[25]; // 801DAA80
  W32(c->r[3]+0x00000100u,c->r[29]); // 801DAA84
  c->lr=0x801DAA8Cu; f_801E5840(c); // 801DAA88
  c->r[3]=c->r[3]+0x00000354u; // 801DAA8C
  c->lr=0x801DAA94u; f_800CCE30(c); // 801DAA90
L_801DAA94:;
  c->r[26]=c->r[26]+0x00000001u; // 801DAA94
  c->r[25]=c->r[25]+0x00000004u; // 801DAA98
  cmps(c,0,(int32_t)c->r[26],16); // 801DAA9C
  if (crb(c,0)) { IRQCHK(c); goto L_801DA9EC; } // 801DAAA0
  c->lr=0x801DAAA8u; f_801E5840(c); // 801DAAA4
  c->r[3]=c->r[3]+0x00000354u; // 801DAAA8
  c->lr=0x801DAAB0u; f_800CCE30(c); // 801DAAAC
  c->lr=0x801DAAB4u; f_801E5840(c); // 801DAAB0
  c->r[3]=c->r[3]+0x00000354u; // 801DAAB4
  c->lr=0x801DAABCu; f_800CCE30(c); // 801DAAB8
  cmps(c,0,(int32_t)c->r[31],0); // 801DAABC
  if (!crb(c,1)) { goto L_801DAACC; } // 801DAAC0
  c->r[3]=c->r[30]|c->r[30]; // 801DAAC4
  c->lr=0x801DAACCu; f_800B9AD0(c); // 801DAAC8
L_801DAACC:;
  c->r[11]=c->r[1]+0x00000030u; // 801DAACC
  c->r[3]=c->r[30]|c->r[30]; // 801DAAD0
  c->lr=0x801DAAD8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DAAD4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DAAD8
  c->lr=c->r[0]; // 801DAADC
  c->r[1]=c->r[1]+0x00000030u; // 801DAAE0
  return; // 801DAAE4
}

// InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback
void f_801DAAF0(Ctx* __restrict c) {
  trace_call(0x801DAAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAAF0
  c->r[0]=c->lr; // 801DAAF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAAF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DAAFC
  c->r[31]=c->r[5]|c->r[5]; // 801DAB00
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DAB04
  c->r[30]=c->r[4]|c->r[4]; // 801DAB08
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DAB0C
  c->r[29]=c->r[3]|c->r[3]; // 801DAB10
  c->lr=0x801DAB18u; f_801D2810(c); // 801DAB14
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAB18
  c->r[7]=0u+0x00000000u; // 801DAB1C
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAB20
  c->r[6]=0u+0x00000078u; // 801DAB24
  c->r[5]=0u+0x00000030u; // 801DAB28
  c->r[4]=0u+0x0000007Fu; // 801DAB2C
  c->r[3]=0u+0x00000040u; // 801DAB30
  W8(c->r[29]+0x000000CDu,c->r[7]); // 801DAB34
  c->r[0]=0u+0xFFFFFFFFu; // 801DAB38
  W8(c->r[29]+0x000000CEu,c->r[7]); // 801DAB3C
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 801DAB40
  W32(c->r[29]+0x000000DCu,c->r[7]); // 801DAB44
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 801DAB48
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 801DAB4C
  W32(c->r[29]+0x00000160u,c->r[7]); // 801DAB50
  W32(c->r[29]+0x000000E4u,c->r[30]); // 801DAB54
  W16(c->r[29]+0x000000ECu,c->r[6]); // 801DAB58
  W8(c->r[29]+0x000000EAu,c->r[5]); // 801DAB5C
  W8(c->r[29]+0x000000E8u,c->r[4]); // 801DAB60
  W8(c->r[29]+0x000000E9u,c->r[3]); // 801DAB64
  W32(c->r[29]+0x000000F0u,c->r[31]); // 801DAB68
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[0]);} // 801DAB6C
  W16(c->r[29]+0x00000140u,c->r[0]); // 801DAB70
  W16(c->r[29]+0x00000142u,c->r[0]); // 801DAB74
  W16(c->r[29]+0x00000144u,c->r[0]); // 801DAB78
  W16(c->r[29]+0x00000146u,c->r[0]); // 801DAB7C
  W16(c->r[29]+0x00000148u,c->r[0]); // 801DAB80
  W16(c->r[29]+0x0000014Au,c->r[0]); // 801DAB84
  W16(c->r[29]+0x0000014Cu,c->r[0]); // 801DAB88
  W16(c->r[29]+0x0000014Eu,c->r[0]); // 801DAB8C
  W16(c->r[29]+0x00000150u,c->r[0]); // 801DAB90
  W16(c->r[29]+0x00000152u,c->r[0]); // 801DAB94
  W16(c->r[29]+0x00000154u,c->r[0]); // 801DAB98
  W16(c->r[29]+0x00000156u,c->r[0]); // 801DAB9C
  W16(c->r[29]+0x00000158u,c->r[0]); // 801DABA0
  W16(c->r[29]+0x0000015Au,c->r[0]); // 801DABA4
  W16(c->r[29]+0x0000015Cu,c->r[0]); // 801DABA8
  W16(c->r[29]+0x0000015Eu,c->r[0]); // 801DABAC
  c->r[0]=0u+0x00000000u; // 801DABB0
  W32(c->r[29]+0x00000100u,c->r[0]); // 801DABB4
  W32(c->r[29]+0x00000104u,c->r[0]); // 801DABB8
  W32(c->r[29]+0x00000108u,c->r[0]); // 801DABBC
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801DABC0
  W32(c->r[29]+0x00000110u,c->r[0]); // 801DABC4
  W32(c->r[29]+0x00000114u,c->r[0]); // 801DABC8
  W32(c->r[29]+0x00000118u,c->r[0]); // 801DABCC
  W32(c->r[29]+0x0000011Cu,c->r[0]); // 801DABD0
  W32(c->r[29]+0x00000120u,c->r[0]); // 801DABD4
  W32(c->r[29]+0x00000124u,c->r[0]); // 801DABD8
  W32(c->r[29]+0x00000128u,c->r[0]); // 801DABDC
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 801DABE0
  W32(c->r[29]+0x00000130u,c->r[0]); // 801DABE4
  W32(c->r[29]+0x00000134u,c->r[0]); // 801DABE8
  W32(c->r[29]+0x00000138u,c->r[0]); // 801DABEC
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 801DABF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DABF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DABF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DABFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAC00
  c->lr=c->r[0]; // 801DAC04
  c->r[1]=c->r[1]+0x00000020u; // 801DAC08
  return; // 801DAC0C
}

// fn_801DAC10
void f_801DAC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAC10
  c->r[0]=c->lr; // 801DAC14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DAC18
  c->r[11]=c->r[1]+0x00000030u; // 801DAC1C
  c->lr=0x801DAC24u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DAC20
  c->r[27]=0u+0x802D0000u; // 801DAC24
  c->r[29]=c->r[3]|c->r[3]; // 801DAC28
  c->r[30]=c->r[4]|c->r[4]; // 801DAC2C
  c->r[31]=c->r[5]|c->r[5]; // 801DAC30
  c->r[23]=c->r[6]|c->r[6]; // 801DAC34
  c->r[24]=c->r[7]|c->r[7]; // 801DAC38
  c->r[27]=c->r[27]+0xFFFFEBE8u; // 801DAC3C
  c->lr=0x801DAC44u; f_801E5840(c); // 801DAC40
  c->r[3]=c->r[3]+0x00000354u; // 801DAC44
  c->lr=0x801DAC4Cu; f_800CCD50(c); // 801DAC48
  c->lr=0x801DAC50u; f_801E5840(c); // 801DAC4C
  c->r[3]=c->r[3]+0x00000354u; // 801DAC50
  c->lr=0x801DAC58u; f_800CCD50(c); // 801DAC54
  c->lr=0x801DAC5Cu; f_801E5840(c); // 801DAC58
  c->r[3]=c->r[3]+0x00000354u; // 801DAC5C
  c->lr=0x801DAC64u; f_800CCD50(c); // 801DAC60
  c->r[0]=R8(c->r[29]+0x000000CDu); // 801DAC64
  cmps(c,0,(int32_t)c->r[0],0); // 801DAC68
  if (crb(c,2)) { goto L_801DAC94; } // 801DAC6C
  cmps(c,0,(int32_t)c->r[29],0); // 801DAC70
  c->r[26]=c->r[29]|c->r[29]; // 801DAC74
  if (crb(c,2)) { goto L_801DAC80; } // 801DAC78
  c->r[26]=c->r[29]+0x000000C0u; // 801DAC7C
L_801DAC80:;
  c->lr=0x801DAC84u; f_801E5840(c); // 801DAC80
  c->r[4]=c->r[26]|c->r[26]; // 801DAC84
  c->lr=0x801DAC8Cu; f_801E5E00(c); // 801DAC88
  c->r[0]=0u+0x00000000u; // 801DAC8C
  W8(c->r[29]+0x000000CDu,c->r[0]); // 801DAC90
L_801DAC94:;
  c->r[0]=R8(c->r[29]+0x000000CCu); // 801DAC94
  cmps(c,0,(int32_t)c->r[0],0); // 801DAC98
  if (crb(c,2)) { goto L_801DACC4; } // 801DAC9C
  cmps(c,0,(int32_t)c->r[29],0); // 801DACA0
  c->r[26]=c->r[29]|c->r[29]; // 801DACA4
  if (crb(c,2)) { goto L_801DACB0; } // 801DACA8
  c->r[26]=c->r[29]+0x000000B4u; // 801DACAC
L_801DACB0:;
  c->lr=0x801DACB4u; f_801D5DD0(c); // 801DACB0
  c->r[4]=c->r[26]|c->r[26]; // 801DACB4
  c->lr=0x801DACBCu; f_801D5F40(c); // 801DACB8
  c->r[0]=0u+0x00000000u; // 801DACBC
  W8(c->r[29]+0x000000CCu,c->r[0]); // 801DACC0
L_801DACC4:;
  c->r[25]=c->r[29]|c->r[29]; // 801DACC4
  c->r[26]=0u+0x00000000u; // 801DACC8
  c->r[28]=0u+0x00000000u; // 801DACCC
L_801DACD0:;
  c->lr=0x801DACD4u; f_801E5840(c); // 801DACD0
  c->r[3]=c->r[3]+0x00000354u; // 801DACD4
  c->lr=0x801DACDCu; f_800CCD50(c); // 801DACD8
  cmpu(c,0,c->r[26],0x0000000Fu); // 801DACDC
  c->r[0]=0u+0x00000000u; // 801DACE0
  if (crb(c,1)) { goto L_801DACEC; } // 801DACE4
  c->r[0]=0u+0x00000001u; // 801DACE8
L_801DACEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DACEC
  if (!crb(c,2)) { goto L_801DAD14; } // 801DACF0
  c->r[6]=c->r[26]|c->r[26]; // 801DACF4
  c->r[3]=c->r[27]+0x00000000u; // 801DACF8
  c->r[5]=c->r[27]+0x00000014u; // 801DACFC
  c->r[4]=0u+0x00000261u; // 801DAD00
  c->r[7]=0u+0x00000000u; // 801DAD04
  c->r[8]=0u+0x00000010u; // 801DAD08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DAD0C
  c->lr=0x801DAD14u; f_801F9770(c); // 801DAD10
L_801DAD14:;
  cmps(c,0,(int32_t)c->r[26],15); // 801DAD14
  if (!crb(c,1)) { goto L_801DAD24; } // 801DAD18
  c->r[3]=0u+0x00000000u; // 801DAD1C
  goto L_801DAD28; // 801DAD20
L_801DAD24:;
  c->r[3]=R32(c->r[25]+0x00000100u); // 801DAD24
L_801DAD28:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DAD28
  if (!crb(c,2)) { goto L_801DAD40; } // 801DAD2C
  c->lr=0x801DAD34u; f_801E5840(c); // 801DAD30
  c->r[3]=c->r[3]+0x00000354u; // 801DAD34
  c->lr=0x801DAD3Cu; f_800CCE30(c); // 801DAD38
  goto L_801DAD6C; // 801DAD3C
L_801DAD40:;
  c->lr=0x801DAD44u; f_801DCE00(c); // 801DAD40
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801DAD44
  c->r[4]=R32(c->r[25]+0x00000100u); // 801DAD48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DAD4C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DAD50
  c->ctr=c->r[12]; // 801DAD54
  if (true) { c->lr=0x801DAD5Cu; dispatch(c,c->ctr); } // 801DAD58
  W32(c->r[25]+0x00000100u,c->r[28]); // 801DAD5C
  c->lr=0x801DAD64u; f_801E5840(c); // 801DAD60
  c->r[3]=c->r[3]+0x00000354u; // 801DAD64
  c->lr=0x801DAD6Cu; f_800CCE30(c); // 801DAD68
L_801DAD6C:;
  c->r[26]=c->r[26]+0x00000001u; // 801DAD6C
  c->r[25]=c->r[25]+0x00000004u; // 801DAD70
  cmps(c,0,(int32_t)c->r[26],16); // 801DAD74
  if (crb(c,0)) { IRQCHK(c); goto L_801DACD0; } // 801DAD78
  c->lr=0x801DAD80u; f_801E5840(c); // 801DAD7C
  c->r[3]=c->r[3]+0x00000354u; // 801DAD80
  c->lr=0x801DAD88u; f_800CCE30(c); // 801DAD84
  c->lr=0x801DAD8Cu; f_801E5840(c); // 801DAD88
  c->r[3]=c->r[3]+0x00000354u; // 801DAD8C
  c->lr=0x801DAD94u; f_800CCE30(c); // 801DAD90
  c->r[3]=c->r[29]|c->r[29]; // 801DAD94
  c->r[4]=c->r[23]|c->r[23]; // 801DAD98
  c->r[5]=c->r[24]|c->r[24]; // 801DAD9C
  c->lr=0x801DADA4u; f_801DAAF0(c); // 801DADA0
  c->lr=0x801DADA8u; f_800CBAA0(c); // 801DADA4
  c->r[28]=c->r[3]|c->r[3]; // 801DADA8
  c->r[3]=c->r[31]|c->r[31]; // 801DADAC
  c->r[25]=0u+0x00000000u; // 801DADB0
  goto L_801DADC8; // 801DADB4
L_801DADB8:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801DADB8
  if (crb(c,2)) { goto L_801DADC4; } // 801DADBC
  c->r[25]=c->r[25]+0x00000001u; // 801DADC0
L_801DADC4:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DADC4
L_801DADC8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DADC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DADB8; } // 801DADCC
  c->r[12]=R32(c->r[30]+0x00000000u); // 801DADD0
  c->r[3]=c->r[30]|c->r[30]; // 801DADD4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801DADD8
  c->ctr=c->r[12]; // 801DADDC
  if (true) { c->lr=0x801DADE4u; dispatch(c,c->ctr); } // 801DADE0
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 801DADE4
  if (!crb(c,1)) { goto L_801DAE08; } // 801DADE8
  c->r[3]=c->r[28]|c->r[28]; // 801DADEC
  c->lr=0x801DADF4u; f_800CBAE0(c); // 801DADF0
  c->lr=0x801DADF8u; f_801E5840(c); // 801DADF4
  c->r[3]=c->r[3]+0x00000354u; // 801DADF8
  c->lr=0x801DAE00u; f_800CCE30(c); // 801DADFC
  c->r[3]=0u+0x00000001u; // 801DAE00
  goto L_801DAEE8; // 801DAE04
L_801DAE08:;
  c->r[26]=c->r[29]|c->r[29]; // 801DAE08
  c->r[25]=0u+0x00000000u; // 801DAE0C
  goto L_801DAEA0; // 801DAE10
L_801DAE14:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801DAE14
  if (crb(c,2)) { goto L_801DAE94; } // 801DAE18
  c->r[12]=R32(c->r[30]+0x00000000u); // 801DAE1C
  c->r[3]=c->r[30]|c->r[30]; // 801DAE20
  c->r[4]=c->r[29]|c->r[29]; // 801DAE24
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801DAE28
  c->ctr=c->r[12]; // 801DAE2C
  if (true) { c->lr=0x801DAE34u; dispatch(c,c->ctr); } // 801DAE30
  cmps(c,0,(int32_t)c->r[3],0); // 801DAE34
  c->r[24]=c->r[3]|c->r[3]; // 801DAE38
  if (!crb(c,2)) { goto L_801DAE54; } // 801DAE3C
  c->r[3]=c->r[27]+0x00000000u; // 801DAE40
  c->r[5]=c->r[27]+0x00000054u; // 801DAE44
  c->r[4]=0u+0x000000C7u; // 801DAE48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DAE4C
  c->lr=0x801DAE54u; f_801F9770(c); // 801DAE50
L_801DAE54:;
  c->lr=0x801DAE58u; f_801E5840(c); // 801DAE54
  c->r[3]=c->r[3]+0x00000354u; // 801DAE58
  c->lr=0x801DAE60u; f_800CCD50(c); // 801DAE5C
  cmps(c,0,(int32_t)c->r[25],15); // 801DAE60
  if (!crb(c,1)) { goto L_801DAE78; } // 801DAE64
  c->lr=0x801DAE6Cu; f_801E5840(c); // 801DAE68
  c->r[3]=c->r[3]+0x00000354u; // 801DAE6C
  c->lr=0x801DAE74u; f_800CCE30(c); // 801DAE70
  goto L_801DAE94; // 801DAE74
L_801DAE78:;
  W32(c->r[26]+0x00000100u,c->r[24]); // 801DAE78
  c->r[3]=c->r[24]|c->r[24]; // 801DAE7C
  c->r[4]=c->r[25]|c->r[25]; // 801DAE80
  c->lr=0x801DAE88u; f_801DCA10(c); // 801DAE84
  c->lr=0x801DAE8Cu; f_801E5840(c); // 801DAE88
  c->r[3]=c->r[3]+0x00000354u; // 801DAE8C
  c->lr=0x801DAE94u; f_800CCE30(c); // 801DAE90
L_801DAE94:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801DAE94
  c->r[26]=c->r[26]+0x00000004u; // 801DAE98
  c->r[25]=c->r[25]+0x00000001u; // 801DAE9C
L_801DAEA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DAEA0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DAE14; } // 801DAEA4
  c->r[3]=c->r[28]|c->r[28]; // 801DAEA8
  c->lr=0x801DAEB0u; f_800CBAE0(c); // 801DAEAC
  cmps(c,0,(int32_t)c->r[29],0); // 801DAEB0
  c->r[26]=c->r[29]|c->r[29]; // 801DAEB4
  if (crb(c,2)) { goto L_801DAEC0; } // 801DAEB8
  c->r[26]=c->r[29]+0x000000B4u; // 801DAEBC
L_801DAEC0:;
  c->lr=0x801DAEC4u; f_801D5DD0(c); // 801DAEC0
  c->r[4]=c->r[26]|c->r[26]; // 801DAEC4
  c->lr=0x801DAECCu; f_801D5EC0(c); // 801DAEC8
  c->r[0]=0u+0x00000001u; // 801DAECC
  W32(c->r[29]+0x000000F4u,c->r[30]); // 801DAED0
  W8(c->r[29]+0x000000CCu,c->r[0]); // 801DAED4
  c->lr=0x801DAEDCu; f_801E5840(c); // 801DAED8
  c->r[3]=c->r[3]+0x00000354u; // 801DAEDC
  c->lr=0x801DAEE4u; f_800CCE30(c); // 801DAEE0
  c->r[3]=0u+0x00000000u; // 801DAEE4
L_801DAEE8:;
  c->r[11]=c->r[1]+0x00000030u; // 801DAEE8
  c->lr=0x801DAEF0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DAEEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DAEF0
  c->lr=c->r[0]; // 801DAEF4
  c->r[1]=c->r[1]+0x00000030u; // 801DAEF8
  return; // 801DAEFC
}

// fn_801DAF00
void f_801DAF00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAF00
  c->r[0]=c->lr; // 801DAF04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAF08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DAF0C
  c->r[31]=c->r[3]|c->r[3]; // 801DAF10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DAF14
  c->r[30]=c->r[5]|c->r[5]; // 801DAF18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DAF1C
  c->r[29]=c->r[4]|c->r[4]; // 801DAF20
  c->lr=0x801DAF28u; f_801E5840(c); // 801DAF24
  c->r[3]=c->r[3]+0x00000354u; // 801DAF28
  c->lr=0x801DAF30u; f_800CCD50(c); // 801DAF2C
  c->r[31]=R32(c->r[31]+0x00000100u); // 801DAF30
  cmps(c,0,(int32_t)c->r[31],0); // 801DAF34
  if (!crb(c,2)) { goto L_801DAF58; } // 801DAF38
  c->r[3]=0u+0x802D0000u; // 801DAF3C
  c->r[5]=0u+0x802D0000u; // 801DAF40
  c->r[3]=c->r[3]+0xFFFFEBE8u; // 801DAF44
  c->r[4]=0u+0x000000F5u; // 801DAF48
  c->r[5]=c->r[5]+0xFFFFEC64u; // 801DAF4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DAF50
  c->lr=0x801DAF58u; f_801F9770(c); // 801DAF54
L_801DAF58:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DAF58
  if (crb(c,2)) { goto L_801DAF78; } // 801DAF5C
  c->r[3]=c->r[31]|c->r[31]; // 801DAF60
  c->r[4]=c->r[29]|c->r[29]; // 801DAF64
  c->r[5]=c->r[30]|c->r[30]; // 801DAF68
  c->lr=0x801DAF70u; f_801DCDD0(c); // 801DAF6C
  c->r[3]=c->r[31]|c->r[31]; // 801DAF70
  c->lr=0x801DAF78u; f_801DCDE0(c); // 801DAF74
L_801DAF78:;
  c->lr=0x801DAF7Cu; f_801E5840(c); // 801DAF78
  c->r[3]=c->r[3]+0x00000354u; // 801DAF7C
  c->lr=0x801DAF84u; f_800CCE30(c); // 801DAF80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAF84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DAF88
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DAF8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DAF90
  c->lr=c->r[0]; // 801DAF94
  c->r[1]=c->r[1]+0x00000020u; // 801DAF98
  return; // 801DAF9C
}

// fn_801DAFA0
void f_801DAFA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAFA0
  c->r[0]=c->lr; // 801DAFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DAFA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DAFAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DAFB0
  c->r[30]=c->r[3]|c->r[3]; // 801DAFB4
  c->lr=0x801DAFBCu; f_801E5840(c); // 801DAFB8
  c->r[3]=c->r[3]+0x00000354u; // 801DAFBC
  c->lr=0x801DAFC4u; f_800CCD50(c); // 801DAFC0
  cmps(c,0,(int32_t)c->r[30],0); // 801DAFC4
  c->r[31]=c->r[30]|c->r[30]; // 801DAFC8
  if (crb(c,2)) { goto L_801DAFD4; } // 801DAFCC
  c->r[31]=c->r[30]+0x000000C0u; // 801DAFD0
L_801DAFD4:;
  c->lr=0x801DAFD8u; f_801E5840(c); // 801DAFD4
  c->r[4]=c->r[31]|c->r[31]; // 801DAFD8
  c->lr=0x801DAFE0u; f_801E5D60(c); // 801DAFDC
  c->r[0]=0u+0x00000001u; // 801DAFE0
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801DAFE4
  c->lr=0x801DAFECu; f_801E5840(c); // 801DAFE8
  c->r[3]=c->r[3]+0x00000354u; // 801DAFEC
  c->lr=0x801DAFF4u; f_800CCE30(c); // 801DAFF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DAFF4
  c->r[3]=0u+0x00000001u; // 801DAFF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DAFFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB000
  c->lr=c->r[0]; // 801DB004
  c->r[1]=c->r[1]+0x00000010u; // 801DB008
  return; // 801DB00C
}

// fn_801DB010
void f_801DB010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB010
  c->r[0]=c->lr; // 801DB014
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB018
  c->r[11]=c->r[1]+0x00000020u; // 801DB01C
  c->lr=0x801DB024u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB020
  c->r[26]=c->r[3]|c->r[3]; // 801DB024
  c->lr=0x801DB02Cu; f_801E5840(c); // 801DB028
  c->r[3]=c->r[3]+0x00000354u; // 801DB02C
  c->lr=0x801DB034u; f_800CCD50(c); // 801DB030
  c->lr=0x801DB038u; f_801E5840(c); // 801DB034
  c->r[3]=c->r[3]+0x00000354u; // 801DB038
  c->lr=0x801DB040u; f_800CCD50(c); // 801DB03C
  c->r[0]=R8(c->r[26]+0x000000CDu); // 801DB040
  cmps(c,0,(int32_t)c->r[0],0); // 801DB044
  if (crb(c,2)) { goto L_801DB070; } // 801DB048
  cmps(c,0,(int32_t)c->r[26],0); // 801DB04C
  c->r[28]=c->r[26]|c->r[26]; // 801DB050
  if (crb(c,2)) { goto L_801DB05C; } // 801DB054
  c->r[28]=c->r[26]+0x000000C0u; // 801DB058
L_801DB05C:;
  c->lr=0x801DB060u; f_801E5840(c); // 801DB05C
  c->r[4]=c->r[28]|c->r[28]; // 801DB060
  c->lr=0x801DB068u; f_801E5E00(c); // 801DB064
  c->r[0]=0u+0x00000000u; // 801DB068
  W8(c->r[26]+0x000000CDu,c->r[0]); // 801DB06C
L_801DB070:;
  c->r[0]=R8(c->r[26]+0x000000CCu); // 801DB070
  cmps(c,0,(int32_t)c->r[0],0); // 801DB074
  if (crb(c,2)) { goto L_801DB0A0; } // 801DB078
  cmps(c,0,(int32_t)c->r[26],0); // 801DB07C
  c->r[28]=c->r[26]|c->r[26]; // 801DB080
  if (crb(c,2)) { goto L_801DB08C; } // 801DB084
  c->r[28]=c->r[26]+0x000000B4u; // 801DB088
L_801DB08C:;
  c->lr=0x801DB090u; f_801D5DD0(c); // 801DB08C
  c->r[4]=c->r[28]|c->r[28]; // 801DB090
  c->lr=0x801DB098u; f_801D5F40(c); // 801DB094
  c->r[0]=0u+0x00000000u; // 801DB098
  W8(c->r[26]+0x000000CCu,c->r[0]); // 801DB09C
L_801DB0A0:;
  c->r[27]=c->r[26]|c->r[26]; // 801DB0A0
  c->r[28]=0u+0x00000000u; // 801DB0A4
  c->r[29]=0u+0x802D0000u; // 801DB0A8
  c->r[30]=0u+0x802D0000u; // 801DB0AC
  c->r[31]=0u+0x00000000u; // 801DB0B0
L_801DB0B4:;
  c->lr=0x801DB0B8u; f_801E5840(c); // 801DB0B4
  c->r[3]=c->r[3]+0x00000354u; // 801DB0B8
  c->lr=0x801DB0C0u; f_800CCD50(c); // 801DB0BC
  cmpu(c,0,c->r[28],0x0000000Fu); // 801DB0C0
  c->r[0]=0u+0x00000000u; // 801DB0C4
  if (crb(c,1)) { goto L_801DB0D0; } // 801DB0C8
  c->r[0]=0u+0x00000001u; // 801DB0CC
L_801DB0D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DB0D0
  if (!crb(c,2)) { goto L_801DB0F8; } // 801DB0D4
  c->r[6]=c->r[28]|c->r[28]; // 801DB0D8
  c->r[3]=c->r[29]+0xFFFFEBE8u; // 801DB0DC
  c->r[5]=c->r[30]+0xFFFFEBFCu; // 801DB0E0
  c->r[4]=0u+0x00000261u; // 801DB0E4
  c->r[7]=0u+0x00000000u; // 801DB0E8
  c->r[8]=0u+0x00000010u; // 801DB0EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB0F0
  c->lr=0x801DB0F8u; f_801F9770(c); // 801DB0F4
L_801DB0F8:;
  cmps(c,0,(int32_t)c->r[28],15); // 801DB0F8
  if (!crb(c,1)) { goto L_801DB108; } // 801DB0FC
  c->r[3]=0u+0x00000000u; // 801DB100
  goto L_801DB10C; // 801DB104
L_801DB108:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801DB108
L_801DB10C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DB10C
  if (!crb(c,2)) { goto L_801DB124; } // 801DB110
  c->lr=0x801DB118u; f_801E5840(c); // 801DB114
  c->r[3]=c->r[3]+0x00000354u; // 801DB118
  c->lr=0x801DB120u; f_800CCE30(c); // 801DB11C
  goto L_801DB150; // 801DB120
L_801DB124:;
  c->lr=0x801DB128u; f_801DCE00(c); // 801DB124
  c->r[3]=R32(c->r[26]+0x000000F4u); // 801DB128
  c->r[4]=R32(c->r[27]+0x00000100u); // 801DB12C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DB130
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DB134
  c->ctr=c->r[12]; // 801DB138
  if (true) { c->lr=0x801DB140u; dispatch(c,c->ctr); } // 801DB13C
  W32(c->r[27]+0x00000100u,c->r[31]); // 801DB140
  c->lr=0x801DB148u; f_801E5840(c); // 801DB144
  c->r[3]=c->r[3]+0x00000354u; // 801DB148
  c->lr=0x801DB150u; f_800CCE30(c); // 801DB14C
L_801DB150:;
  c->r[28]=c->r[28]+0x00000001u; // 801DB150
  c->r[27]=c->r[27]+0x00000004u; // 801DB154
  cmps(c,0,(int32_t)c->r[28],16); // 801DB158
  if (crb(c,0)) { IRQCHK(c); goto L_801DB0B4; } // 801DB15C
  c->lr=0x801DB164u; f_801E5840(c); // 801DB160
  c->r[3]=c->r[3]+0x00000354u; // 801DB164
  c->lr=0x801DB16Cu; f_800CCE30(c); // 801DB168
  c->lr=0x801DB170u; f_801E5840(c); // 801DB16C
  c->r[3]=c->r[3]+0x00000354u; // 801DB170
  c->lr=0x801DB178u; f_800CCE30(c); // 801DB174
  c->r[11]=c->r[1]+0x00000020u; // 801DB178
  c->lr=0x801DB180u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB17C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB180
  c->lr=c->r[0]; // 801DB184
  c->r[1]=c->r[1]+0x00000020u; // 801DB188
  return; // 801DB18C
}

// fn_801DB190
void f_801DB190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB190
  c->r[0]=c->lr; // 801DB194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB19C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB1A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB1A4
  c->r[29]=c->r[4]|c->r[4]; // 801DB1A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DB1AC
  c->r[28]=c->r[3]|c->r[3]; // 801DB1B0
  c->lr=0x801DB1B8u; f_801E5840(c); // 801DB1B4
  c->r[3]=c->r[3]+0x00000354u; // 801DB1B8
  c->lr=0x801DB1C0u; f_800CCD50(c); // 801DB1BC
  W8(c->r[28]+0x000000CEu,c->r[29]); // 801DB1C0
  c->r[30]=0u+0x00000000u; // 801DB1C4
  c->r[31]=0u+0x00000000u; // 801DB1C8
L_801DB1CC:;
  c->r[3]=c->r[28]+c->r[31]; // 801DB1CC
  c->r[3]=R32(c->r[3]+0x00000100u); // 801DB1D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DB1D4
  if (crb(c,2)) { goto L_801DB1E4; } // 801DB1D8
  c->r[4]=c->r[29]|c->r[29]; // 801DB1DC
  c->lr=0x801DB1E4u; f_801DD210(c); // 801DB1E0
L_801DB1E4:;
  c->r[30]=c->r[30]+0x00000001u; // 801DB1E4
  c->r[31]=c->r[31]+0x00000004u; // 801DB1E8
  cmps(c,0,(int32_t)c->r[30],16); // 801DB1EC
  if (crb(c,0)) { IRQCHK(c); goto L_801DB1CC; } // 801DB1F0
  c->lr=0x801DB1F8u; f_801E5840(c); // 801DB1F4
  c->r[3]=c->r[3]+0x00000354u; // 801DB1F8
  c->lr=0x801DB200u; f_800CCE30(c); // 801DB1FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB200
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB204
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB208
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB20C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DB210
  c->lr=c->r[0]; // 801DB214
  c->r[1]=c->r[1]+0x00000020u; // 801DB218
  return; // 801DB21C
}

// fn_801DB220
void f_801DB220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB220
  c->r[0]=c->lr; // 801DB224
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB228
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB22C
  c->r[31]=c->r[5]|c->r[5]; // 801DB230
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB234
  c->r[30]=c->r[4]|c->r[4]; // 801DB238
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB23C
  c->r[29]=c->r[3]|c->r[3]; // 801DB240
  c->lr=0x801DB248u; f_801E5840(c); // 801DB244
  c->r[3]=c->r[3]+0x00000354u; // 801DB248
  c->lr=0x801DB250u; f_800CCD50(c); // 801DB24C
  c->r[0]=R8(c->r[29]+0x000000CCu); // 801DB250
  cmps(c,0,(int32_t)c->r[0],0); // 801DB254
  if (!crb(c,2)) { goto L_801DB26C; } // 801DB258
  c->lr=0x801DB260u; f_801E5840(c); // 801DB25C
  c->r[3]=c->r[3]+0x00000354u; // 801DB260
  c->lr=0x801DB268u; f_800CCE30(c); // 801DB264
  goto L_801DB2C4; // 801DB268
L_801DB26C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DB26C
  if (crb(c,2)) { goto L_801DB280; } // 801DB270
  cmps(c,0,(int32_t)c->r[30],1); // 801DB274
  if (crb(c,2)) { goto L_801DB290; } // 801DB278
  goto L_801DB2B8; // 801DB27C
L_801DB280:;
  c->r[0]=R32(c->r[29]+0x000000DCu); // 801DB280
  c->r[0]=c->r[0]+c->r[31]; // 801DB284
  W32(c->r[29]+0x000000DCu,c->r[0]); // 801DB288
  goto L_801DB2B8; // 801DB28C
L_801DB290:;
  c->r[3]=c->r[31]^0x80000000u; // 801DB290
  c->r[0]=0u+0x43300000u; // 801DB294
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DB298
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[2]=RF64(ea);} // 801DB29C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DB2A0
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB2A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DB2A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DB2AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DB2B0
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 801DB2B4
L_801DB2B8:;
  c->lr=0x801DB2BCu; f_801E5840(c); // 801DB2B8
  c->r[3]=c->r[3]+0x00000354u; // 801DB2BC
  c->lr=0x801DB2C4u; f_800CCE30(c); // 801DB2C0
L_801DB2C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB2C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB2C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB2CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB2D0
  c->lr=c->r[0]; // 801DB2D4
  c->r[1]=c->r[1]+0x00000020u; // 801DB2D8
  return; // 801DB2DC
}

// fn_801DB2E0
void f_801DB2E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB2E0
  c->r[0]=c->lr; // 801DB2E4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801DB2E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB2EC
  c->r[0]=0u+0x00000000u; // 801DB2F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB2F4
  c->r[31]=c->r[4]|c->r[4]; // 801DB2F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB2FC
  c->r[30]=c->r[3]|c->r[3]; // 801DB300
  if (crb(c,1)) { goto L_801DB30C; } // 801DB304
  c->r[0]=0u+0x00000001u; // 801DB308
L_801DB30C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DB30C
  if (!crb(c,2)) { goto L_801DB33C; } // 801DB310
  c->r[3]=0u+0x802D0000u; // 801DB314
  c->r[5]=0u+0x802D0000u; // 801DB318
  c->r[6]=c->r[31]|c->r[31]; // 801DB31C
  c->r[4]=0u+0x00000166u; // 801DB320
  c->r[3]=c->r[3]+0xFFFFEBE8u; // 801DB324
  c->r[5]=c->r[5]+0xFFFFECBCu; // 801DB328
  c->r[7]=0u+0x00000000u; // 801DB32C
  c->r[8]=0u+0x0000007Fu; // 801DB330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB334
  c->lr=0x801DB33Cu; f_801F9770(c); // 801DB338
L_801DB33C:;
  W8(c->r[30]+0x000000E9u,c->r[31]); // 801DB33C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB340
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB344
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB348
  c->lr=c->r[0]; // 801DB34C
  c->r[1]=c->r[1]+0x00000010u; // 801DB350
  return; // 801DB354
}

// fn_801DB360
void f_801DB360(Ctx* __restrict c) {
  W8(c->r[3]+0x000000CFu,c->r[4]); // 801DB360
  return; // 801DB364
}

// fn_801DB370
void f_801DB370(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F8u,c->r[4]); // 801DB370
  W32(c->r[3]+0x000000FCu,c->r[5]); // 801DB374
  return; // 801DB378
}

// fn_801DB380
void f_801DB380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB380
  c->r[0]=c->lr; // 801DB384
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB388
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DB38C
  c->r[31]=c->r[5]|c->r[5]; // 801DB390
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DB394
  c->r[30]=c->r[4]|c->r[4]; // 801DB398
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DB39C
  c->r[29]=c->r[3]|c->r[3]; // 801DB3A0
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801DB3A4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB3A8
  if (crb(c,2)) { goto L_801DB420; } // 801DB3AC
  cmps(c,0,(int32_t)c->r[5],0); // 801DB3B0
  if (!crb(c,2)) { goto L_801DB3D4; } // 801DB3B4
  c->r[3]=0u+0x802D0000u; // 801DB3B8
  c->r[5]=0u+0x802D0000u; // 801DB3BC
  c->r[3]=c->r[3]+0xFFFFEBE8u; // 801DB3C0
  c->r[4]=0u+0x00000179u; // 801DB3C4
  c->r[5]=c->r[5]+0xFFFFEC3Cu; // 801DB3C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB3CC
  c->lr=0x801DB3D4u; f_801F9770(c); // 801DB3D0
L_801DB3D4:;
  c->r[5]=0u+0x80380000u; // 801DB3D4
  c->r[0]=c->r[29]+0x00000140u; // 801DB3D8
  c->r[5]=c->r[5]+0xFFFFAE88u; // 801DB3DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DB3E0
  c->r[3]=c->r[31]|c->r[31]; // 801DB3E4
  c->r[4]=0u+0x00000000u; // 801DB3E8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801DB3EC
  c->lr=0x801DB3F4u; f_801DDDD0(c); // 801DB3F0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801DB3F4
  c->r[3]=c->r[30]|c->r[30]; // 801DB3F8
  c->r[4]=c->r[1]+0x00000008u; // 801DB3FC
  c->r[0]=R8(c->r[31]+0x00000024u); // 801DB400
  W8(c->r[1]+0x00000014u,c->r[0]); // 801DB404
  c->r[12]=R32(c->r[29]+0x000000F8u); // 801DB408
  c->r[5]=R32(c->r[29]+0x000000FCu); // 801DB40C
  c->ctr=c->r[12]; // 801DB410
  if (true) { c->lr=0x801DB418u; dispatch(c,c->ctr); } // 801DB414
  c->r[0]=R8(c->r[1]+0x00000014u); // 801DB418
  W8(c->r[31]+0x00000024u,c->r[0]); // 801DB41C
L_801DB420:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB420
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DB424
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DB428
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DB42C
  c->lr=c->r[0]; // 801DB430
  c->r[1]=c->r[1]+0x00000030u; // 801DB434
  return; // 801DB438
}

// fn_801DB440
void f_801DB440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB440
  c->r[0]=c->lr; // 801DB444
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB448
  c->r[11]=c->r[1]+0x00000020u; // 801DB44C
  c->lr=0x801DB454u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB450
  c->r[31]=c->r[3]|c->r[3]; // 801DB454
  c->r[27]=c->r[4]|c->r[4]; // 801DB458
  c->r[26]=c->r[5]|c->r[5]; // 801DB45C
  c->lr=0x801DB464u; f_801E5840(c); // 801DB460
  c->r[3]=c->r[3]+0x00000354u; // 801DB464
  c->lr=0x801DB46Cu; f_800CCD50(c); // 801DB468
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801DB46C
  cmps(c,0,(int32_t)c->r[0],0); // 801DB470
  if (crb(c,2)) { goto L_801DB608; } // 801DB474
  c->r[0]=0u+0x00000010u; // 801DB478
  c->r[3]=0u+0x00000000u; // 801DB47C
  c->ctr=c->r[0]; // 801DB480
  c->r[0]=c->r[0]|0x00000000u; // 801DB484
L_801DB488:;
  c->r[4]=c->r[31]+c->r[3]; // 801DB488
  c->r[4]=R32(c->r[4]+0x00000100u); // 801DB48C
  cmps(c,0,(int32_t)c->r[4],0); // 801DB490
  if (crb(c,2)) { goto L_801DB600; } // 801DB494
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801DB498
  cmpu(c,0,c->r[27],c->r[0]); // 801DB49C
  if (crb(c,1)) { goto L_801DB600; } // 801DB4A0
  cmpu(c,0,c->r[0],c->r[26]); // 801DB4A4
  if (crb(c,1)) { goto L_801DB600; } // 801DB4A8
  c->lr=0x801DB4B0u; f_801E5840(c); // 801DB4AC
  c->r[3]=c->r[3]+0x00000354u; // 801DB4B0
  c->lr=0x801DB4B8u; f_800CCD50(c); // 801DB4B4
  c->lr=0x801DB4BCu; f_801E5840(c); // 801DB4B8
  c->r[3]=c->r[3]+0x00000354u; // 801DB4BC
  c->lr=0x801DB4C4u; f_800CCD50(c); // 801DB4C0
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801DB4C4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB4C8
  if (crb(c,2)) { goto L_801DB4F4; } // 801DB4CC
  cmps(c,0,(int32_t)c->r[31],0); // 801DB4D0
  c->r[27]=c->r[31]|c->r[31]; // 801DB4D4
  if (crb(c,2)) { goto L_801DB4E0; } // 801DB4D8
  c->r[27]=c->r[31]+0x000000C0u; // 801DB4DC
L_801DB4E0:;
  c->lr=0x801DB4E4u; f_801E5840(c); // 801DB4E0
  c->r[4]=c->r[27]|c->r[27]; // 801DB4E4
  c->lr=0x801DB4ECu; f_801E5E00(c); // 801DB4E8
  c->r[0]=0u+0x00000000u; // 801DB4EC
  W8(c->r[31]+0x000000CDu,c->r[0]); // 801DB4F0
L_801DB4F4:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801DB4F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB4F8
  if (crb(c,2)) { goto L_801DB524; } // 801DB4FC
  cmps(c,0,(int32_t)c->r[31],0); // 801DB500
  c->r[27]=c->r[31]|c->r[31]; // 801DB504
  if (crb(c,2)) { goto L_801DB510; } // 801DB508
  c->r[27]=c->r[31]+0x000000B4u; // 801DB50C
L_801DB510:;
  c->lr=0x801DB514u; f_801D5DD0(c); // 801DB510
  c->r[4]=c->r[27]|c->r[27]; // 801DB514
  c->lr=0x801DB51Cu; f_801D5F40(c); // 801DB518
  c->r[0]=0u+0x00000000u; // 801DB51C
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801DB520
L_801DB524:;
  c->r[26]=c->r[31]|c->r[31]; // 801DB524
  c->r[27]=0u+0x00000000u; // 801DB528
  c->r[28]=0u+0x802D0000u; // 801DB52C
  c->r[29]=0u+0x802D0000u; // 801DB530
  c->r[30]=0u+0x00000000u; // 801DB534
L_801DB538:;
  c->lr=0x801DB53Cu; f_801E5840(c); // 801DB538
  c->r[3]=c->r[3]+0x00000354u; // 801DB53C
  c->lr=0x801DB544u; f_800CCD50(c); // 801DB540
  cmpu(c,0,c->r[27],0x0000000Fu); // 801DB544
  c->r[0]=0u+0x00000000u; // 801DB548
  if (crb(c,1)) { goto L_801DB554; } // 801DB54C
  c->r[0]=0u+0x00000001u; // 801DB550
L_801DB554:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DB554
  if (!crb(c,2)) { goto L_801DB57C; } // 801DB558
  c->r[6]=c->r[27]|c->r[27]; // 801DB55C
  c->r[3]=c->r[28]+0xFFFFEBE8u; // 801DB560
  c->r[5]=c->r[29]+0xFFFFEBFCu; // 801DB564
  c->r[4]=0u+0x00000261u; // 801DB568
  c->r[7]=0u+0x00000000u; // 801DB56C
  c->r[8]=0u+0x00000010u; // 801DB570
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB574
  c->lr=0x801DB57Cu; f_801F9770(c); // 801DB578
L_801DB57C:;
  cmps(c,0,(int32_t)c->r[27],15); // 801DB57C
  if (!crb(c,1)) { goto L_801DB58C; } // 801DB580
  c->r[3]=0u+0x00000000u; // 801DB584
  goto L_801DB590; // 801DB588
L_801DB58C:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 801DB58C
L_801DB590:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DB590
  if (!crb(c,2)) { goto L_801DB5A8; } // 801DB594
  c->lr=0x801DB59Cu; f_801E5840(c); // 801DB598
  c->r[3]=c->r[3]+0x00000354u; // 801DB59C
  c->lr=0x801DB5A4u; f_800CCE30(c); // 801DB5A0
  goto L_801DB5D4; // 801DB5A4
L_801DB5A8:;
  c->lr=0x801DB5ACu; f_801DCE00(c); // 801DB5A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DB5AC
  c->r[4]=R32(c->r[26]+0x00000100u); // 801DB5B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DB5B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DB5B8
  c->ctr=c->r[12]; // 801DB5BC
  if (true) { c->lr=0x801DB5C4u; dispatch(c,c->ctr); } // 801DB5C0
  W32(c->r[26]+0x00000100u,c->r[30]); // 801DB5C4
  c->lr=0x801DB5CCu; f_801E5840(c); // 801DB5C8
  c->r[3]=c->r[3]+0x00000354u; // 801DB5CC
  c->lr=0x801DB5D4u; f_800CCE30(c); // 801DB5D0
L_801DB5D4:;
  c->r[27]=c->r[27]+0x00000001u; // 801DB5D4
  c->r[26]=c->r[26]+0x00000004u; // 801DB5D8
  cmps(c,0,(int32_t)c->r[27],16); // 801DB5DC
  if (crb(c,0)) { IRQCHK(c); goto L_801DB538; } // 801DB5E0
  c->lr=0x801DB5E8u; f_801E5840(c); // 801DB5E4
  c->r[3]=c->r[3]+0x00000354u; // 801DB5E8
  c->lr=0x801DB5F0u; f_800CCE30(c); // 801DB5EC
  c->lr=0x801DB5F4u; f_801E5840(c); // 801DB5F0
  c->r[3]=c->r[3]+0x00000354u; // 801DB5F4
  c->lr=0x801DB5FCu; f_800CCE30(c); // 801DB5F8
  goto L_801DB608; // 801DB5FC
L_801DB600:;
  c->r[3]=c->r[3]+0x00000004u; // 801DB600
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB488; } // 801DB604
L_801DB608:;
  c->lr=0x801DB60Cu; f_801E5840(c); // 801DB608
  c->r[3]=c->r[3]+0x00000354u; // 801DB60C
  c->lr=0x801DB614u; f_800CCE30(c); // 801DB610
  c->r[11]=c->r[1]+0x00000020u; // 801DB614
  c->lr=0x801DB61Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB618
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB61C
  c->lr=c->r[0]; // 801DB620
  c->r[1]=c->r[1]+0x00000020u; // 801DB624
  return; // 801DB628
}

// GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
void f_801DB630(Ctx* __restrict c) {
  trace_call(0x801DB630u);
  cmps(c,0,(int32_t)c->r[4],15); // 801DB630
  if (!crb(c,1)) { goto L_801DB640; } // 801DB634
  c->r[3]=0u+0x00000000u; // 801DB638
  return; // 801DB63C
L_801DB640:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801DB640
  c->r[3]=c->r[3]+c->r[0]; // 801DB644
  c->r[3]=R32(c->r[3]+0x00000100u); // 801DB648
  return; // 801DB64C
}

// fn_801DB650
void f_801DB650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB650
  c->r[0]=c->lr; // 801DB654
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB658
  c->r[11]=c->r[1]+0x00000030u; // 801DB65C
  c->lr=0x801DB664u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB660
  c->r[22]=c->r[3]|c->r[3]; // 801DB664
  c->r[23]=c->r[4]|c->r[4]; // 801DB668
  c->lr=0x801DB670u; f_801E5840(c); // 801DB66C
  c->r[3]=c->r[3]+0x00000354u; // 801DB670
  c->lr=0x801DB678u; f_800CCD50(c); // 801DB674
  c->r[25]=0u+0x00000000u; // 801DB678
  c->r[24]=0u+0x00000000u; // 801DB67C
  c->r[30]=c->r[25]|c->r[25]; // 801DB680
  c->r[31]=0u+0x00000000u; // 801DB684
  c->r[28]=0u+0x802D0000u; // 801DB688
  c->r[29]=0u+0x802D0000u; // 801DB68C
L_801DB690:;
  c->r[27]=c->r[22]+c->r[31]; // 801DB690
  c->r[26]=R32(c->r[27]+0x00000100u); // 801DB694
  cmps(c,0,(int32_t)c->r[26],0); // 801DB698
  if (crb(c,2)) { goto L_801DB768; } // 801DB69C
  c->r[3]=c->r[26]|c->r[26]; // 801DB6A0
  c->lr=0x801DB6A8u; f_801DCED0(c); // 801DB6A4
  c->r[3]=c->r[26]|c->r[26]; // 801DB6A8
  c->r[4]=c->r[23]|c->r[23]; // 801DB6AC
  c->lr=0x801DB6B4u; f_801DCFA0(c); // 801DB6B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DB6B4
  if (!crb(c,0)) { goto L_801DB758; } // 801DB6B8
  c->lr=0x801DB6C0u; f_801E5840(c); // 801DB6BC
  c->r[3]=c->r[3]+0x00000354u; // 801DB6C0
  c->lr=0x801DB6C8u; f_800CCD50(c); // 801DB6C4
  cmpu(c,0,c->r[24],0x0000000Fu); // 801DB6C8
  c->r[0]=0u+0x00000000u; // 801DB6CC
  if (crb(c,1)) { goto L_801DB6D8; } // 801DB6D0
  c->r[0]=0u+0x00000001u; // 801DB6D4
L_801DB6D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DB6D8
  if (!crb(c,2)) { goto L_801DB700; } // 801DB6DC
  c->r[6]=c->r[24]|c->r[24]; // 801DB6E0
  c->r[3]=c->r[28]+0xFFFFEBE8u; // 801DB6E4
  c->r[5]=c->r[29]+0xFFFFEBFCu; // 801DB6E8
  c->r[4]=0u+0x00000261u; // 801DB6EC
  c->r[7]=0u+0x00000000u; // 801DB6F0
  c->r[8]=0u+0x00000010u; // 801DB6F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB6F8
  c->lr=0x801DB700u; f_801F9770(c); // 801DB6FC
L_801DB700:;
  cmps(c,0,(int32_t)c->r[24],15); // 801DB700
  if (!crb(c,1)) { goto L_801DB710; } // 801DB704
  c->r[3]=0u+0x00000000u; // 801DB708
  goto L_801DB714; // 801DB70C
L_801DB710:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801DB710
L_801DB714:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DB714
  if (!crb(c,2)) { goto L_801DB72C; } // 801DB718
  c->lr=0x801DB720u; f_801E5840(c); // 801DB71C
  c->r[3]=c->r[3]+0x00000354u; // 801DB720
  c->lr=0x801DB728u; f_800CCE30(c); // 801DB724
  goto L_801DB758; // 801DB728
L_801DB72C:;
  c->lr=0x801DB730u; f_801DCE00(c); // 801DB72C
  c->r[3]=R32(c->r[22]+0x000000F4u); // 801DB730
  c->r[4]=R32(c->r[27]+0x00000100u); // 801DB734
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DB738
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DB73C
  c->ctr=c->r[12]; // 801DB740
  if (true) { c->lr=0x801DB748u; dispatch(c,c->ctr); } // 801DB744
  W32(c->r[27]+0x00000100u,c->r[30]); // 801DB748
  c->lr=0x801DB750u; f_801E5840(c); // 801DB74C
  c->r[3]=c->r[3]+0x00000354u; // 801DB750
  c->lr=0x801DB758u; f_800CCE30(c); // 801DB754
L_801DB758:;
  c->r[0]=R8(c->r[26]+0x00000005u); // 801DB758
  cmps(c,0,(int32_t)c->r[0],0); // 801DB75C
  if (crb(c,2)) { goto L_801DB768; } // 801DB760
  c->r[25]=0u+0x00000001u; // 801DB764
L_801DB768:;
  c->r[24]=c->r[24]+0x00000001u; // 801DB768
  c->r[31]=c->r[31]+0x00000004u; // 801DB76C
  cmps(c,0,(int32_t)c->r[24],16); // 801DB770
  if (crb(c,0)) { IRQCHK(c); goto L_801DB690; } // 801DB774
  cmps(c,0,(int32_t)c->r[25],0); // 801DB778
  if (!crb(c,2)) { goto L_801DB794; } // 801DB77C
  c->lr=0x801DB784u; f_801E5840(c); // 801DB780
  c->r[3]=c->r[3]+0x00000354u; // 801DB784
  c->lr=0x801DB78Cu; f_800CCE30(c); // 801DB788
  c->r[3]=0u+0x00000001u; // 801DB78C
  goto L_801DB7A4; // 801DB790
L_801DB794:;
  c->lr=0x801DB798u; f_801E5840(c); // 801DB794
  c->r[3]=c->r[3]+0x00000354u; // 801DB798
  c->lr=0x801DB7A0u; f_800CCE30(c); // 801DB79C
  c->r[3]=0u+0x00000000u; // 801DB7A0
L_801DB7A4:;
  c->r[11]=c->r[1]+0x00000030u; // 801DB7A4
  c->lr=0x801DB7ACu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB7A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB7AC
  c->lr=c->r[0]; // 801DB7B0
  c->r[1]=c->r[1]+0x00000030u; // 801DB7B4
  return; // 801DB7B8
}

// fn_801DB7C0
void f_801DB7C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB7C0
  c->r[0]=c->lr; // 801DB7C4
  cmpu(c,0,c->r[4],0x00000020u); // 801DB7C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB7CC
  c->r[0]=0u+0x00000000u; // 801DB7D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB7D4
  c->r[31]=c->r[4]|c->r[4]; // 801DB7D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB7DC
  c->r[30]=c->r[3]|c->r[3]; // 801DB7E0
  if (crb(c,1)) { goto L_801DB7EC; } // 801DB7E4
  c->r[0]=0u+0x00000001u; // 801DB7E8
L_801DB7EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DB7EC
  if (!crb(c,2)) { goto L_801DB81C; } // 801DB7F0
  c->r[3]=0u+0x802D0000u; // 801DB7F4
  c->r[5]=0u+0x802D0000u; // 801DB7F8
  c->r[6]=c->r[31]|c->r[31]; // 801DB7FC
  c->r[4]=0u+0x000002EAu; // 801DB800
  c->r[3]=c->r[3]+0xFFFFEBE8u; // 801DB804
  c->r[5]=c->r[5]+0xFFFFEE0Cu; // 801DB808
  c->r[7]=0u+0x00000000u; // 801DB80C
  c->r[8]=0u+0x00000020u; // 801DB810
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB814
  c->lr=0x801DB81Cu; f_801F9770(c); // 801DB818
L_801DB81C:;
  cmps(c,0,(int32_t)c->r[31],16); // 801DB81C
  if (!crb(c,0)) { goto L_801DB834; } // 801DB820
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801DB824
  c->r[3]=c->r[30]+c->r[0]; // 801DB828
  c->r[3]=c->r[3]+0x00000140u; // 801DB82C
  goto L_801DB854; // 801DB830
L_801DB834:;
  cmps(c,0,(int32_t)c->r[31],32); // 801DB834
  c->r[3]=0u+0x00000000u; // 801DB838
  if (!crb(c,0)) { goto L_801DB854; } // 801DB83C
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 801DB840
  c->r[3]=0u+0x80380000u; // 801DB844
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DB848
  c->r[3]=c->r[3]+0xFFFFAE88u; // 801DB84C
  c->r[3]=c->r[3]+c->r[0]; // 801DB850
L_801DB854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB858
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB85C
  c->lr=c->r[0]; // 801DB860
  c->r[1]=c->r[1]+0x00000010u; // 801DB864
  return; // 801DB868
}

// fn_801DB870
void f_801DB870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB870
  c->r[0]=c->lr; // 801DB874
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB87C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB880
  c->r[30]=c->r[3]|c->r[3]; // 801DB884
  c->lr=0x801DB88Cu; f_801E5840(c); // 801DB888
  c->r[3]=c->r[3]+0x00000354u; // 801DB88C
  c->lr=0x801DB894u; f_800CCD50(c); // 801DB890
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801DB894
  cmps(c,0,(int32_t)c->r[0],0); // 801DB898
  if (!crb(c,2)) { goto L_801DB8BC; } // 801DB89C
  c->r[3]=0u+0x802D0000u; // 801DB8A0
  c->r[5]=0u+0x802D0000u; // 801DB8A4
  c->r[3]=c->r[3]+0xFFFFEBE8u; // 801DB8A8
  c->r[4]=0u+0x00000304u; // 801DB8AC
  c->r[5]=c->r[5]+0xFFFFEE48u; // 801DB8B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB8B4
  c->lr=0x801DB8BCu; f_801F9770(c); // 801DB8B8
L_801DB8BC:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801DB8BC
  cmps(c,0,(int32_t)c->r[0],0); // 801DB8C0
  if (!crb(c,2)) { goto L_801DB8D8; } // 801DB8C4
  c->lr=0x801DB8CCu; f_801E5840(c); // 801DB8C8
  c->r[3]=c->r[3]+0x00000354u; // 801DB8CC
  c->lr=0x801DB8D4u; f_800CCE30(c); // 801DB8D0
  goto L_801DB98C; // 801DB8D4
L_801DB8D8:;
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801DB8D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DB8DC
  if (!crb(c,2)) { goto L_801DB8F4; } // 801DB8E0
  c->lr=0x801DB8E8u; f_801E5840(c); // 801DB8E4
  c->r[3]=c->r[3]+0x00000354u; // 801DB8E8
  c->lr=0x801DB8F0u; f_800CCE30(c); // 801DB8EC
  goto L_801DB98C; // 801DB8F0
L_801DB8F4:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801DB8F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB8F8
  if (!crb(c,2)) { goto L_801DB910; } // 801DB8FC
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB900
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB904
  fcmp(c,0,c->f[1],c->f[0]); // 801DB908
  if (!crb(c,1)) { goto L_801DB91C; } // 801DB90C
L_801DB910:;
  c->r[3]=c->r[30]|c->r[30]; // 801DB910
  c->lr=0x801DB918u; f_801DBC50(c); // 801DB914
  goto L_801DB934; // 801DB918
L_801DB91C:;
  c->r[0]=R8(c->r[30]+0x000000CEu); // 801DB91C
  cmps(c,0,(int32_t)c->r[0],0); // 801DB920
  if (!crb(c,2)) { goto L_801DB934; } // 801DB924
  c->r[3]=c->r[30]|c->r[30]; // 801DB928
  c->r[4]=0u+0x00000003u; // 801DB92C
  c->lr=0x801DB934u; f_801DB9B0(c); // 801DB930
L_801DB934:;
  c->lr=0x801DB938u; f_801E5840(c); // 801DB934
  c->r[3]=c->r[3]+0x00000354u; // 801DB938
  c->lr=0x801DB940u; f_800CCD50(c); // 801DB93C
  c->r[31]=0u+0x00000000u; // 801DB940
L_801DB944:;
  cmps(c,0,(int32_t)c->r[31],15); // 801DB944
  if (!crb(c,1)) { goto L_801DB954; } // 801DB948
  c->r[3]=0u+0x00000000u; // 801DB94C
  goto L_801DB958; // 801DB950
L_801DB954:;
  c->r[3]=R32(c->r[30]+0x00000100u); // 801DB954
L_801DB958:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DB958
  if (crb(c,2)) { goto L_801DB964; } // 801DB95C
  c->lr=0x801DB964u; f_801DD2B0(c); // 801DB960
L_801DB964:;
  c->r[31]=c->r[31]+0x00000001u; // 801DB964
  c->r[30]=c->r[30]+0x00000004u; // 801DB968
  cmps(c,0,(int32_t)c->r[31],16); // 801DB96C
  if (crb(c,0)) { IRQCHK(c); goto L_801DB944; } // 801DB970
  c->lr=0x801DB978u; f_801E5840(c); // 801DB974
  c->r[3]=c->r[3]+0x00000354u; // 801DB978
  c->lr=0x801DB980u; f_800CCE30(c); // 801DB97C
  c->lr=0x801DB984u; f_801E5840(c); // 801DB980
  c->r[3]=c->r[3]+0x00000354u; // 801DB984
  c->lr=0x801DB98Cu; f_800CCE30(c); // 801DB988
L_801DB98C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB98C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB990
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB994
  c->lr=c->r[0]; // 801DB998
  c->r[1]=c->r[1]+0x00000010u; // 801DB99C
  return; // 801DB9A0
}

// fn_801DB9B0
void f_801DB9B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB9B0
  c->r[0]=c->lr; // 801DB9B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801DB9B8
  c->r[11]=c->r[1]+0x00000030u; // 801DB9BC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801DB9C0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801DB9C4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801DB9C8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801DB9CC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801DB9D0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801DB9D4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801DB9D8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801DB9DC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801DB9E0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801DB9E4
  c->lr=0x801DB9ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB9E8
  c->r[5]=R8(c->r[3]+0x000000EAu); // 801DB9EC
  c->r[28]=0u+0x43300000u; // 801DB9F0
  c->r[0]=R16(c->r[3]+0x000000ECu); // 801DB9F4
  c->r[31]=c->r[3]|c->r[3]; // 801DB9F8
  W32(c->r[1]+0x00000008u,c->r[28]); // 801DB9FC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801DBA00
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[28]=RF64(ea);} // 801DBA04
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBA08
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[29]=c->ps1[29]=RF32(ea);} // 801DBA0C
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801DBA10
  c->r[0]=c->r[0]^0x80000000u; // 801DBA14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DBA18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DBA1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801DBA20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801DBA24
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 801DBA28
  fcmp(c,0,c->f[30],c->f[1]); // 801DBA2C
  if (crb(c,2)) { goto L_801DBC04; } // 801DBA30
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBA34
  c->r[0]=c->r[4]^0x80000000u; // 801DBA38
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DBA3C
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 801DBA40
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DBA44
  W32(c->r[1]+0x00000008u,c->r[28]); // 801DBA48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801DBA4C
  c->f[27]=c->ps1[27]=S(c->f[0]-c->f[28]); // 801DBA50
  goto L_801DBBF0; // 801DBA54
L_801DBA58:;
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[2]); // 801DBA58
  c->r[3]=c->r[31]|c->r[31]; // 801DBA5C
  c->r[4]=0u+0x00000001u; // 801DBA60
  c->lr=0x801DBA68u; f_801DB650(c); // 801DBA64
  cmps(c,0,(int32_t)c->r[3],0); // 801DBA68
  if (crb(c,2)) { goto L_801DBBAC; } // 801DBA6C
  c->lr=0x801DBA74u; f_801E5840(c); // 801DBA70
  c->r[3]=c->r[3]+0x00000354u; // 801DBA74
  c->lr=0x801DBA7Cu; f_800CCD50(c); // 801DBA78
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801DBA7C
  cmps(c,0,(int32_t)c->r[0],0); // 801DBA80
  if (crb(c,2)) { goto L_801DBAAC; } // 801DBA84
  cmps(c,0,(int32_t)c->r[31],0); // 801DBA88
  c->r[27]=c->r[31]|c->r[31]; // 801DBA8C
  if (crb(c,2)) { goto L_801DBA98; } // 801DBA90
  c->r[27]=c->r[31]+0x000000C0u; // 801DBA94
L_801DBA98:;
  c->lr=0x801DBA9Cu; f_801E5840(c); // 801DBA98
  c->r[4]=c->r[27]|c->r[27]; // 801DBA9C
  c->lr=0x801DBAA4u; f_801E5E00(c); // 801DBAA0
  c->r[0]=0u+0x00000000u; // 801DBAA4
  W8(c->r[31]+0x000000CDu,c->r[0]); // 801DBAA8
L_801DBAAC:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801DBAAC
  cmps(c,0,(int32_t)c->r[0],0); // 801DBAB0
  if (crb(c,2)) { goto L_801DBADC; } // 801DBAB4
  cmps(c,0,(int32_t)c->r[31],0); // 801DBAB8
  c->r[27]=c->r[31]|c->r[31]; // 801DBABC
  if (crb(c,2)) { goto L_801DBAC8; } // 801DBAC0
  c->r[27]=c->r[31]+0x000000B4u; // 801DBAC4
L_801DBAC8:;
  c->lr=0x801DBACCu; f_801D5DD0(c); // 801DBAC8
  c->r[4]=c->r[27]|c->r[27]; // 801DBACC
  c->lr=0x801DBAD4u; f_801D5F40(c); // 801DBAD0
  c->r[0]=0u+0x00000000u; // 801DBAD4
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801DBAD8
L_801DBADC:;
  c->r[26]=c->r[31]|c->r[31]; // 801DBADC
  c->r[27]=0u+0x00000000u; // 801DBAE0
  c->r[28]=0u+0x802D0000u; // 801DBAE4
  c->r[29]=0u+0x802D0000u; // 801DBAE8
  c->r[30]=0u+0x00000000u; // 801DBAEC
L_801DBAF0:;
  c->lr=0x801DBAF4u; f_801E5840(c); // 801DBAF0
  c->r[3]=c->r[3]+0x00000354u; // 801DBAF4
  c->lr=0x801DBAFCu; f_800CCD50(c); // 801DBAF8
  cmpu(c,0,c->r[27],0x0000000Fu); // 801DBAFC
  c->r[0]=0u+0x00000000u; // 801DBB00
  if (crb(c,1)) { goto L_801DBB0C; } // 801DBB04
  c->r[0]=0u+0x00000001u; // 801DBB08
L_801DBB0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBB0C
  if (!crb(c,2)) { goto L_801DBB34; } // 801DBB10
  c->r[6]=c->r[27]|c->r[27]; // 801DBB14
  c->r[3]=c->r[28]+0xFFFFEBE8u; // 801DBB18
  c->r[5]=c->r[29]+0xFFFFEBFCu; // 801DBB1C
  c->r[4]=0u+0x00000261u; // 801DBB20
  c->r[7]=0u+0x00000000u; // 801DBB24
  c->r[8]=0u+0x00000010u; // 801DBB28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBB2C
  c->lr=0x801DBB34u; f_801F9770(c); // 801DBB30
L_801DBB34:;
  cmps(c,0,(int32_t)c->r[27],15); // 801DBB34
  if (!crb(c,1)) { goto L_801DBB44; } // 801DBB38
  c->r[3]=0u+0x00000000u; // 801DBB3C
  goto L_801DBB48; // 801DBB40
L_801DBB44:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 801DBB44
L_801DBB48:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DBB48
  if (!crb(c,2)) { goto L_801DBB60; } // 801DBB4C
  c->lr=0x801DBB54u; f_801E5840(c); // 801DBB50
  c->r[3]=c->r[3]+0x00000354u; // 801DBB54
  c->lr=0x801DBB5Cu; f_800CCE30(c); // 801DBB58
  goto L_801DBB8C; // 801DBB5C
L_801DBB60:;
  c->lr=0x801DBB64u; f_801DCE00(c); // 801DBB60
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DBB64
  c->r[4]=R32(c->r[26]+0x00000100u); // 801DBB68
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBB6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DBB70
  c->ctr=c->r[12]; // 801DBB74
  if (true) { c->lr=0x801DBB7Cu; dispatch(c,c->ctr); } // 801DBB78
  W32(c->r[26]+0x00000100u,c->r[30]); // 801DBB7C
  c->lr=0x801DBB84u; f_801E5840(c); // 801DBB80
  c->r[3]=c->r[3]+0x00000354u; // 801DBB84
  c->lr=0x801DBB8Cu; f_800CCE30(c); // 801DBB88
L_801DBB8C:;
  c->r[27]=c->r[27]+0x00000001u; // 801DBB8C
  c->r[26]=c->r[26]+0x00000004u; // 801DBB90
  cmps(c,0,(int32_t)c->r[27],16); // 801DBB94
  if (crb(c,0)) { IRQCHK(c); goto L_801DBAF0; } // 801DBB98
  c->lr=0x801DBBA0u; f_801E5840(c); // 801DBB9C
  c->r[3]=c->r[3]+0x00000354u; // 801DBBA0
  c->lr=0x801DBBA8u; f_800CCE30(c); // 801DBBA4
  goto L_801DBC04; // 801DBBA8
L_801DBBAC:;
  c->r[3]=R8(c->r[31]+0x000000EAu); // 801DBBAC
  c->r[0]=R16(c->r[31]+0x000000ECu); // 801DBBB0
  W32(c->r[1]+0x00000008u,c->r[28]); // 801DBBB4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801DBBB8
  c->r[4]=R32(c->r[31]+0x00000160u); // 801DBBBC
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBBC0
  c->r[3]=c->r[4]+0x00000001u; // 801DBBC4
  W32(c->r[31]+0x00000160u,c->r[3]); // 801DBBC8
  c->r[0]=c->r[0]^0x80000000u; // 801DBBCC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DBBD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DBBD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801DBBD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801DBBDC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 801DBBE0
  fcmp(c,0,c->f[30],c->f[1]); // 801DBBE4
  if (crb(c,2)) { goto L_801DBC04; } // 801DBBE8
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[1]); // 801DBBEC
L_801DBBF0:;
  fcmp(c,0,c->f[2],c->f[27]); // 801DBBF0
  if (crb(c,0)) { IRQCHK(c); goto L_801DBA58; } // 801DBBF4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 801DBBF8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 801DBBFC
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 801DBC00
L_801DBC04:;
  c->r[11]=c->r[1]+0x00000030u; // 801DBC04
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801DBC08
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801DBC0C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801DBC10
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801DBC14
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801DBC18
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801DBC1C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801DBC20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801DBC24
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801DBC28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801DBC2C
  c->lr=0x801DBC34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DBC30
  c->r[0]=R32(c->r[1]+0x00000084u); // 801DBC34
  c->lr=c->r[0]; // 801DBC38
  c->r[1]=c->r[1]+0x00000080u; // 801DBC3C
  return; // 801DBC40
}

// fn_801DBC50
void f_801DBC50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBC50
  c->r[0]=c->lr; // 801DBC54
  W32(c->r[1]+0x00000084u,c->r[0]); // 801DBC58
  c->r[11]=c->r[1]+0x00000030u; // 801DBC5C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801DBC60
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801DBC64
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801DBC68
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801DBC6C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801DBC70
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801DBC74
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801DBC78
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801DBC7C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801DBC80
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801DBC84
  c->lr=0x801DBC8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DBC88
  c->r[31]=0u+0x802D0000u; // 801DBC8C
  c->r[30]=c->r[3]|c->r[3]; // 801DBC90
  c->r[31]=c->r[31]+0xFFFFEBE8u; // 801DBC94
  c->r[27]=0u+0x00000000u; // 801DBC98
  c->r[29]=0u+0x00000000u; // 801DBC9C
L_801DBCA0:;
  c->r[3]=c->r[30]+c->r[29]; // 801DBCA0
  c->r[28]=R32(c->r[3]+0x00000100u); // 801DBCA4
  cmps(c,0,(int32_t)c->r[28],0); // 801DBCA8
  if (crb(c,2)) { goto L_801DBCC4; } // 801DBCAC
  c->r[3]=c->r[28]|c->r[28]; // 801DBCB0
  c->r[4]=0u+0x0000007Fu; // 801DBCB4
  c->lr=0x801DBCBCu; f_801DD130(c); // 801DBCB8
  c->r[3]=c->r[28]|c->r[28]; // 801DBCBC
  c->lr=0x801DBCC4u; f_801DD880(c); // 801DBCC0
L_801DBCC4:;
  c->r[27]=c->r[27]+0x00000001u; // 801DBCC4
  c->r[29]=c->r[29]+0x00000004u; // 801DBCC8
  cmps(c,0,(int32_t)c->r[27],16); // 801DBCCC
  if (crb(c,0)) { IRQCHK(c); goto L_801DBCA0; } // 801DBCD0
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[29]=RF64(ea);} // 801DBCD4
  c->r[27]=0u+0x00000000u; // 801DBCD8
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[30]=c->ps1[30]=RF32(ea);} // 801DBCDC
  c->r[29]=0u+0x43300000u; // 801DBCE0
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DBCE4
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801DBCE8
  goto L_801DBEC0; // 801DBCEC
L_801DBCF0:;
  cmps(c,0,(int32_t)c->r[27],768); // 801DBCF0
  if (!crb(c,0)) { goto L_801DBF14; } // 801DBCF4
  cmps(c,0,(int32_t)c->r[4],0); // 801DBCF8
  if (crb(c,2)) { goto L_801DBD10; } // 801DBCFC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 801DBD00
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DBD04
  W32(c->r[30]+0x000000DCu,c->r[0]); // 801DBD08
  goto L_801DBD68; // 801DBD0C
L_801DBD10:;
  c->r[3]=R8(c->r[30]+0x000000EAu); // 801DBD10
  c->r[0]=R16(c->r[30]+0x000000ECu); // 801DBD14
  W32(c->r[1]+0x00000008u,c->r[29]); // 801DBD18
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801DBD1C
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBD20
  c->r[0]=c->r[0]^0x80000000u; // 801DBD24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DBD28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DBD2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 801DBD30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801DBD34
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[30]); // 801DBD38
  fcmp(c,0,c->f[27],c->f[28]); // 801DBD3C
  if (crb(c,1)) { goto L_801DBD58; } // 801DBD40
  c->r[3]=c->r[31]+0x00000000u; // 801DBD44
  c->r[5]=c->r[31]+0x00000284u; // 801DBD48
  c->r[4]=0u+0x00000358u; // 801DBD4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBD50
  c->lr=0x801DBD58u; f_801F9770(c); // 801DBD54
L_801DBD58:;
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[27]); // 801DBD58
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBD5C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801DBD60
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[0]);} // 801DBD64
L_801DBD68:;
  c->r[3]=c->r[30]|c->r[30]; // 801DBD68
  c->r[4]=0u+0x00000000u; // 801DBD6C
  c->lr=0x801DBD74u; f_801DB650(c); // 801DBD70
  cmps(c,0,(int32_t)c->r[3],0); // 801DBD74
  if (crb(c,2)) { goto L_801DBEB0; } // 801DBD78
  c->lr=0x801DBD80u; f_801E5840(c); // 801DBD7C
  c->r[3]=c->r[3]+0x00000354u; // 801DBD80
  c->lr=0x801DBD88u; f_800CCD50(c); // 801DBD84
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801DBD88
  cmps(c,0,(int32_t)c->r[0],0); // 801DBD8C
  if (crb(c,2)) { goto L_801DBDB8; } // 801DBD90
  cmps(c,0,(int32_t)c->r[30],0); // 801DBD94
  c->r[28]=c->r[30]|c->r[30]; // 801DBD98
  if (crb(c,2)) { goto L_801DBDA4; } // 801DBD9C
  c->r[28]=c->r[30]+0x000000C0u; // 801DBDA0
L_801DBDA4:;
  c->lr=0x801DBDA8u; f_801E5840(c); // 801DBDA4
  c->r[4]=c->r[28]|c->r[28]; // 801DBDA8
  c->lr=0x801DBDB0u; f_801E5E00(c); // 801DBDAC
  c->r[0]=0u+0x00000000u; // 801DBDB0
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801DBDB4
L_801DBDB8:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801DBDB8
  cmps(c,0,(int32_t)c->r[0],0); // 801DBDBC
  if (crb(c,2)) { goto L_801DBDE8; } // 801DBDC0
  cmps(c,0,(int32_t)c->r[30],0); // 801DBDC4
  c->r[28]=c->r[30]|c->r[30]; // 801DBDC8
  if (crb(c,2)) { goto L_801DBDD4; } // 801DBDCC
  c->r[28]=c->r[30]+0x000000B4u; // 801DBDD0
L_801DBDD4:;
  c->lr=0x801DBDD8u; f_801D5DD0(c); // 801DBDD4
  c->r[4]=c->r[28]|c->r[28]; // 801DBDD8
  c->lr=0x801DBDE0u; f_801D5F40(c); // 801DBDDC
  c->r[0]=0u+0x00000000u; // 801DBDE0
  W8(c->r[30]+0x000000CCu,c->r[0]); // 801DBDE4
L_801DBDE8:;
  c->r[27]=c->r[30]|c->r[30]; // 801DBDE8
  c->r[28]=0u+0x00000000u; // 801DBDEC
  c->r[29]=0u+0x00000000u; // 801DBDF0
L_801DBDF4:;
  c->lr=0x801DBDF8u; f_801E5840(c); // 801DBDF4
  c->r[3]=c->r[3]+0x00000354u; // 801DBDF8
  c->lr=0x801DBE00u; f_800CCD50(c); // 801DBDFC
  cmpu(c,0,c->r[28],0x0000000Fu); // 801DBE00
  c->r[0]=0u+0x00000000u; // 801DBE04
  if (crb(c,1)) { goto L_801DBE10; } // 801DBE08
  c->r[0]=0u+0x00000001u; // 801DBE0C
L_801DBE10:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBE10
  if (!crb(c,2)) { goto L_801DBE38; } // 801DBE14
  c->r[6]=c->r[28]|c->r[28]; // 801DBE18
  c->r[3]=c->r[31]+0x00000000u; // 801DBE1C
  c->r[5]=c->r[31]+0x00000014u; // 801DBE20
  c->r[4]=0u+0x00000261u; // 801DBE24
  c->r[7]=0u+0x00000000u; // 801DBE28
  c->r[8]=0u+0x00000010u; // 801DBE2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBE30
  c->lr=0x801DBE38u; f_801F9770(c); // 801DBE34
L_801DBE38:;
  cmps(c,0,(int32_t)c->r[28],15); // 801DBE38
  if (!crb(c,1)) { goto L_801DBE48; } // 801DBE3C
  c->r[3]=0u+0x00000000u; // 801DBE40
  goto L_801DBE4C; // 801DBE44
L_801DBE48:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801DBE48
L_801DBE4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DBE4C
  if (!crb(c,2)) { goto L_801DBE64; } // 801DBE50
  c->lr=0x801DBE58u; f_801E5840(c); // 801DBE54
  c->r[3]=c->r[3]+0x00000354u; // 801DBE58
  c->lr=0x801DBE60u; f_800CCE30(c); // 801DBE5C
  goto L_801DBE90; // 801DBE60
L_801DBE64:;
  c->lr=0x801DBE68u; f_801DCE00(c); // 801DBE64
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DBE68
  c->r[4]=R32(c->r[27]+0x00000100u); // 801DBE6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBE70
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DBE74
  c->ctr=c->r[12]; // 801DBE78
  if (true) { c->lr=0x801DBE80u; dispatch(c,c->ctr); } // 801DBE7C
  W32(c->r[27]+0x00000100u,c->r[29]); // 801DBE80
  c->lr=0x801DBE88u; f_801E5840(c); // 801DBE84
  c->r[3]=c->r[3]+0x00000354u; // 801DBE88
  c->lr=0x801DBE90u; f_800CCE30(c); // 801DBE8C
L_801DBE90:;
  c->r[28]=c->r[28]+0x00000001u; // 801DBE90
  c->r[27]=c->r[27]+0x00000004u; // 801DBE94
  cmps(c,0,(int32_t)c->r[28],16); // 801DBE98
  if (crb(c,0)) { IRQCHK(c); goto L_801DBDF4; } // 801DBE9C
  c->lr=0x801DBEA4u; f_801E5840(c); // 801DBEA0
  c->r[3]=c->r[3]+0x00000354u; // 801DBEA4
  c->lr=0x801DBEACu; f_800CCE30(c); // 801DBEA8
  goto L_801DBF14; // 801DBEAC
L_801DBEB0:;
  c->r[3]=R32(c->r[30]+0x00000160u); // 801DBEB0
  c->r[27]=c->r[27]+0x00000001u; // 801DBEB4
  c->r[0]=c->r[3]+0x00000001u; // 801DBEB8
  W32(c->r[30]+0x00000160u,c->r[0]); // 801DBEBC
L_801DBEC0:;
  c->r[4]=R32(c->r[30]+0x000000DCu); // 801DBEC0
  cmps(c,0,(int32_t)c->r[4],0); // 801DBEC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBCF0; } // 801DBEC8
  c->r[3]=R8(c->r[30]+0x000000EAu); // 801DBECC
  c->r[0]=R16(c->r[30]+0x000000ECu); // 801DBED0
  W32(c->r[1]+0x00000008u,c->r[29]); // 801DBED4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801DBED8
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBEDC
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBEE0
  c->r[0]=c->r[0]^0x80000000u; // 801DBEE4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DBEE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801DBEEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 801DBEF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801DBEF4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 801DBEF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801DBEFC
  fcmp(c,0,c->f[0],c->f[31]); // 801DBF00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DBF04
  if (crb(c,2)) { IRQCHK(c); goto L_801DBCF0; } // 801DBF08
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBF0C
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[0]);} // 801DBF10
L_801DBF14:;
  c->r[11]=c->r[1]+0x00000030u; // 801DBF14
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801DBF18
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801DBF1C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801DBF20
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801DBF24
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801DBF28
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801DBF2C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801DBF30
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801DBF34
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801DBF38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801DBF3C
  c->lr=0x801DBF44u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DBF40
  c->r[0]=R32(c->r[1]+0x00000084u); // 801DBF44
  c->lr=c->r[0]; // 801DBF48
  c->r[1]=c->r[1]+0x00000080u; // 801DBF4C
  return; // 801DBF50
}

// NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
void f_801DBF60(Ctx* __restrict c) {
  trace_call(0x801DBF60u);
  c->r[7]=c->r[3]|c->r[3]; // 801DBF60
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801DBF64
  c->r[0]=c->r[4]|c->r[4]; // 801DBF68
  c->r[6]=c->r[5]|c->r[5]; // 801DBF6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBF70
  c->r[4]=c->r[7]|c->r[7]; // 801DBF74
  c->r[5]=c->r[0]|c->r[0]; // 801DBF78
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801DBF7C
  c->ctr=c->r[12]; // 801DBF80
  if (true) { dispatch(c,c->ctr); return; } // 801DBF84
}

// fn_801DBF90
void f_801DBF90(Ctx* __restrict c) {
  return; // 801DBF90
}

// fn_801DBFA0
void f_801DBFA0(Ctx* __restrict c) {
  return; // 801DBFA0
}

// fn_801DBFB0
void f_801DBFB0(Ctx* __restrict c) {
  return; // 801DBFB0
}

// fn_801DBFC0
void f_801DBFC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801DBFC0
  f_801DA920(c); return; // 801DBFC4
}

// fn_801DBFD0
void f_801DBFD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801DBFD0
  f_801DA920(c); return; // 801DBFD4
}

// fn_801DBFE0
void f_801DBFE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBFE0
  c->r[0]=c->lr; // 801DBFE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DBFE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DBFEC
  c->r[31]=c->r[4]|c->r[4]; // 801DBFF0
  c->r[4]=c->r[5]|c->r[5]; // 801DBFF4
  c->r[5]=c->r[6]|c->r[6]; // 801DBFF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DBFFC
  c->r[30]=c->r[3]|c->r[3]; // 801DC000
  c->lr=0x801DC008u; f_801D2BF0(c); // 801DC004
  c->r[4]=0u+0x802D0000u; // 801DC008
  c->r[3]=c->r[30]+0x00000110u; // 801DC00C
  c->r[4]=c->r[4]+0xFFFFF140u; // 801DC010
  W32(c->r[30]+0x00000000u,c->r[4]); // 801DC014
  c->lr=0x801DC01Cu; f_801DA750(c); // 801DC018
  c->r[4]=0u+0x802D0000u; // 801DC01C
  c->r[0]=0u+0x00000000u; // 801DC020
  W8(c->r[30]+0x00000288u,c->r[0]); // 801DC024
  c->r[4]=c->r[4]+0xFFFFF178u; // 801DC028
  c->r[3]=c->r[30]|c->r[30]; // 801DC02C
  W8(c->r[30]+0x00000289u,c->r[0]); // 801DC030
  W32(c->r[30]+0x00000274u,c->r[0]); // 801DC034
  W32(c->r[30]+0x00000278u,c->r[31]); // 801DC038
  W32(c->r[30]+0x00000284u,c->r[0]); // 801DC03C
  W32(c->r[30]+0x0000028Cu,c->r[0]); // 801DC040
  W32(c->r[30]+0x00000494u,c->r[0]); // 801DC044
  W32(c->r[30]+0x00000498u,c->r[0]); // 801DC048
  W8(c->r[30]+0x0000049Cu,c->r[0]); // 801DC04C
  W32(c->r[30]+0x00000490u,c->r[4]); // 801DC050
  W32(c->r[30]+0x000004A0u,c->r[0]); // 801DC054
  W32(c->r[30]+0x000004A4u,c->r[0]); // 801DC058
  W32(c->r[30]+0x000004ACu,c->r[0]); // 801DC05C
  W32(c->r[30]+0x000004B0u,c->r[0]); // 801DC060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC064
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC068
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC06C
  c->lr=c->r[0]; // 801DC070
  c->r[1]=c->r[1]+0x00000010u; // 801DC074
  return; // 801DC078
}

// fn_801DC080
void f_801DC080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC080
  c->r[0]=c->lr; // 801DC084
  cmps(c,0,(int32_t)c->r[3],0); // 801DC088
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC08C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC090
  c->r[31]=c->r[4]|c->r[4]; // 801DC094
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC098
  c->r[30]=c->r[3]|c->r[3]; // 801DC09C
  if (crb(c,2)) { goto L_801DC0BC; } // 801DC0A0
  c->r[4]=0u+0x00000000u; // 801DC0A4
  c->lr=0x801DC0ACu; f_801EAA10(c); // 801DC0A8
  cmps(c,0,(int32_t)c->r[31],0); // 801DC0AC
  if (!crb(c,1)) { goto L_801DC0BC; } // 801DC0B0
  c->r[3]=c->r[30]|c->r[30]; // 801DC0B4
  c->lr=0x801DC0BCu; f_800B9AD0(c); // 801DC0B8
L_801DC0BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801DC0BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC0C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC0C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC0C8
  c->lr=c->r[0]; // 801DC0CC
  c->r[1]=c->r[1]+0x00000010u; // 801DC0D0
  return; // 801DC0D4
}

// fn_801DC0E0
void f_801DC0E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC0E0
  c->r[0]=c->lr; // 801DC0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC0E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC0EC
  c->r[31]=c->r[3]|c->r[3]; // 801DC0F0
  c->lr=0x801DC0F8u; f_801D2D60(c); // 801DC0F4
  c->r[0]=0u+0x00000000u; // 801DC0F8
  W32(c->r[31]+0x00000284u,c->r[0]); // 801DC0FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC100
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC104
  c->lr=c->r[0]; // 801DC108
  c->r[1]=c->r[1]+0x00000010u; // 801DC10C
  return; // 801DC110
}

// fn_801DC120
void f_801DC120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC120
  c->r[0]=c->lr; // 801DC124
  cmps(c,0,(int32_t)c->r[6],0); // 801DC128
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC12C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC130
  c->r[31]=c->r[6]|c->r[6]; // 801DC134
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC138
  c->r[30]=c->r[5]|c->r[5]; // 801DC13C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC140
  c->r[29]=c->r[4]|c->r[4]; // 801DC144
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DC148
  c->r[28]=c->r[3]|c->r[3]; // 801DC14C
  if (!crb(c,2)) { goto L_801DC170; } // 801DC150
  c->r[3]=0u+0x802D0000u; // 801DC154
  c->r[5]=0u+0x802D0000u; // 801DC158
  c->r[3]=c->r[3]+0xFFFFEF30u; // 801DC15C
  c->r[4]=0u+0x0000005Fu; // 801DC160
  c->r[5]=c->r[5]+0xFFFFEF44u; // 801DC164
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC168
  c->lr=0x801DC170u; f_801F9770(c); // 801DC16C
L_801DC170:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801DC170
  c->r[3]=c->r[28]|c->r[28]; // 801DC174
  c->r[12]=R32(c->r[12]+0x00000020u); // 801DC178
  c->ctr=c->r[12]; // 801DC17C
  if (true) { c->lr=0x801DC184u; dispatch(c,c->ctr); } // 801DC180
  c->r[3]=c->r[28]|c->r[28]; // 801DC184
  c->lr=0x801DC18Cu; f_801D42A0(c); // 801DC188
  c->r[6]=c->r[3]|c->r[3]; // 801DC18C
  c->r[4]=c->r[29]|c->r[29]; // 801DC190
  c->r[5]=c->r[30]|c->r[30]; // 801DC194
  c->r[7]=c->r[31]|c->r[31]; // 801DC198
  c->r[3]=c->r[28]+0x00000110u; // 801DC19C
  c->lr=0x801DC1A4u; f_801DAC10(c); // 801DC1A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC1A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC1A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC1AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC1B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DC1B4
  c->lr=c->r[0]; // 801DC1B8
  c->r[1]=c->r[1]+0x00000020u; // 801DC1BC
  return; // 801DC1C0
}

// fn_801DC1D0
void f_801DC1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC1D0
  c->r[0]=c->lr; // 801DC1D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC1D8
  c->r[11]=c->r[1]+0x00000020u; // 801DC1DC
  c->lr=0x801DC1E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DC1E0
  cmps(c,0,(int32_t)c->r[4],0); // 801DC1E4
  c->r[27]=c->r[3]|c->r[3]; // 801DC1E8
  c->r[28]=c->r[4]|c->r[4]; // 801DC1EC
  c->r[29]=c->r[5]|c->r[5]; // 801DC1F0
  c->r[30]=c->r[6]|c->r[6]; // 801DC1F4
  c->r[31]=c->r[7]|c->r[7]; // 801DC1F8
  if (!crb(c,2)) { goto L_801DC21C; } // 801DC1FC
  c->r[3]=0u+0x802D0000u; // 801DC200
  c->r[5]=0u+0x802D0000u; // 801DC204
  c->r[3]=c->r[3]+0xFFFFEF30u; // 801DC208
  c->r[4]=0u+0x0000007Cu; // 801DC20C
  c->r[5]=c->r[5]+0xFFFFEF70u; // 801DC210
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC214
  c->lr=0x801DC21Cu; f_801F9770(c); // 801DC218
L_801DC21C:;
  c->r[4]=c->r[28]|c->r[28]; // 801DC21C
  c->r[5]=c->r[29]|c->r[29]; // 801DC220
  c->r[3]=c->r[27]+0x00000110u; // 801DC224
  c->lr=0x801DC22Cu; f_801DAF00(c); // 801DC228
  cmps(c,0,(int32_t)c->r[31],0); // 801DC22C
  if (!crb(c,1)) { goto L_801DC244; } // 801DC230
  c->r[4]=c->r[30]|c->r[30]; // 801DC234
  c->r[5]=c->r[31]|c->r[31]; // 801DC238
  c->r[3]=c->r[27]+0x00000110u; // 801DC23C
  c->lr=0x801DC244u; f_801DB220(c); // 801DC240
L_801DC244:;
  c->r[0]=0u+0x00000001u; // 801DC244
  W8(c->r[27]+0x00000289u,c->r[0]); // 801DC248
  c->r[11]=c->r[1]+0x00000020u; // 801DC24C
  c->lr=0x801DC254u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DC250
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC254
  c->lr=c->r[0]; // 801DC258
  c->r[1]=c->r[1]+0x00000020u; // 801DC25C
  return; // 801DC260
}

// fn_801DC270
void f_801DC270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC270
  c->r[0]=c->lr; // 801DC274
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC278
  c->r[0]=0u+0x00000001u; // 801DC27C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC280
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC284
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC288
  c->r[29]=c->r[3]|c->r[3]; // 801DC28C
  c->r[30]=R32(c->r[3]+0x00000004u); // 801DC290
  W32(c->r[3]+0x0000028Cu,c->r[4]); // 801DC294
  cmps(c,0,(int32_t)c->r[30],0); // 801DC298
  W32(c->r[3]+0x0000027Cu,c->r[5]); // 801DC29C
  W32(c->r[3]+0x00000280u,c->r[6]); // 801DC2A0
  W32(c->r[3]+0x00000284u,c->r[7]); // 801DC2A4
  W8(c->r[3]+0x00000288u,c->r[0]); // 801DC2A8
  if (!crb(c,2)) { goto L_801DC2B8; } // 801DC2AC
  c->r[0]=0u+0x00000000u; // 801DC2B0
  goto L_801DC32C; // 801DC2B4
L_801DC2B8:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 801DC2B8
  c->r[3]=c->r[4]|c->r[4]; // 801DC2BC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801DC2C0
  c->ctr=c->r[12]; // 801DC2C4
  if (true) { c->lr=0x801DC2CCu; dispatch(c,c->ctr); } // 801DC2C8
  c->r[12]=R32(c->r[30]+0x00000000u); // 801DC2CC
  c->r[31]=c->r[3]|c->r[3]; // 801DC2D0
  c->r[3]=c->r[30]|c->r[30]; // 801DC2D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801DC2D8
  c->r[4]=c->r[31]|c->r[31]; // 801DC2DC
  c->ctr=c->r[12]; // 801DC2E0
  if (true) { c->lr=0x801DC2E8u; dispatch(c,c->ctr); } // 801DC2E4
  cmps(c,0,(int32_t)c->r[3],0); // 801DC2E8
  if (!crb(c,2)) { goto L_801DC2F8; } // 801DC2EC
  c->r[0]=0u+0x00000000u; // 801DC2F0
  goto L_801DC32C; // 801DC2F4
L_801DC2F8:;
  c->r[0]=R32(c->r[29]+0x0000028Cu); // 801DC2F8
  c->r[4]=0u+0x801E0000u; // 801DC2FC
  c->r[4]=c->r[4]+0xFFFFC370u; // 801DC300
  W32(c->r[29]+0x000004A0u,c->r[0]); // 801DC304
  W32(c->r[29]+0x000004A4u,c->r[3]); // 801DC308
  W32(c->r[29]+0x000004A8u,c->r[31]); // 801DC30C
  W32(c->r[29]+0x000004ACu,c->r[4]); // 801DC310
  W32(c->r[29]+0x000004B0u,c->r[29]); // 801DC314
  c->lr=0x801DC31Cu; f_801EAAA0(c); // 801DC318
  c->r[4]=c->r[29]+0x00000490u; // 801DC31C
  c->r[5]=0u+0x00000001u; // 801DC320
  c->lr=0x801DC328u; f_801EAC30(c); // 801DC324
  c->r[0]=0u+0x00000001u; // 801DC328
L_801DC32C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DC32C
  if (!crb(c,2)) { goto L_801DC348; } // 801DC330
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DC334
  c->r[3]=c->r[29]|c->r[29]; // 801DC338
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DC33C
  c->ctr=c->r[12]; // 801DC340
  if (true) { c->lr=0x801DC348u; dispatch(c,c->ctr); } // 801DC344
L_801DC348:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC348
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC34C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC350
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC354
  c->lr=c->r[0]; // 801DC358
  c->r[1]=c->r[1]+0x00000020u; // 801DC35C
  return; // 801DC360
}

// fn_801DC370
void f_801DC370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC370
  c->r[0]=c->lr; // 801DC374
  cmps(c,0,(int32_t)c->r[5],0); // 801DC378
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC37C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC380
  c->r[31]=0u+0x802D0000u; // 801DC384
  c->r[31]=c->r[31]+0xFFFFEF30u; // 801DC388
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC38C
  c->r[30]=c->r[5]|c->r[5]; // 801DC390
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC394
  c->r[29]=c->r[4]|c->r[4]; // 801DC398
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DC39C
  c->r[28]=c->r[3]|c->r[3]; // 801DC3A0
  if (!crb(c,2)) { goto L_801DC3BC; } // 801DC3A4
  c->r[3]=c->r[31]+0x00000000u; // 801DC3A8
  c->r[5]=c->r[31]+0x00000068u; // 801DC3AC
  c->r[4]=0u+0x000000B2u; // 801DC3B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC3B4
  c->lr=0x801DC3BCu; f_801F9770(c); // 801DC3B8
L_801DC3BC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DC3BC
  c->r[0]=0u+0x00000000u; // 801DC3C0
  W8(c->r[30]+0x00000288u,c->r[0]); // 801DC3C4
  if (!crb(c,2)) { goto L_801DC3DC; } // 801DC3C8
  c->r[3]=c->r[30]|c->r[30]; // 801DC3CC
  c->r[4]=0u+0x00000000u; // 801DC3D0
  c->lr=0x801DC3D8u; f_801D2EE0(c); // 801DC3D4
  goto L_801DC428; // 801DC3D8
L_801DC3DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DC3DC
  if (!crb(c,2)) { goto L_801DC3F8; } // 801DC3E0
  c->r[3]=c->r[31]+0x00000000u; // 801DC3E4
  c->r[5]=c->r[31]+0x00000040u; // 801DC3E8
  c->r[4]=0u+0x000000BDu; // 801DC3EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC3F0
  c->lr=0x801DC3F8u; f_801F9770(c); // 801DC3F4
L_801DC3F8:;
  c->r[5]=R32(c->r[30]+0x0000027Cu); // 801DC3F8
  c->r[4]=c->r[29]|c->r[29]; // 801DC3FC
  c->r[3]=c->r[30]+0x00000110u; // 801DC400
  c->lr=0x801DC408u; f_801DAF00(c); // 801DC404
  c->r[5]=R32(c->r[30]+0x00000284u); // 801DC408
  cmps(c,0,(int32_t)c->r[5],0); // 801DC40C
  if (!crb(c,1)) { goto L_801DC420; } // 801DC410
  c->r[4]=R32(c->r[30]+0x00000280u); // 801DC414
  c->r[3]=c->r[30]+0x00000110u; // 801DC418
  c->lr=0x801DC420u; f_801DB220(c); // 801DC41C
L_801DC420:;
  c->r[0]=0u+0x00000001u; // 801DC420
  W8(c->r[30]+0x00000289u,c->r[0]); // 801DC424
L_801DC428:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC428
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC42C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC430
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC434
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DC438
  c->lr=c->r[0]; // 801DC43C
  c->r[1]=c->r[1]+0x00000020u; // 801DC440
  return; // 801DC444
}

// fn_801DC450
void f_801DC450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC450
  c->r[0]=c->lr; // 801DC454
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC45C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC460
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC464
  c->r[29]=c->r[3]|c->r[3]; // 801DC468
  c->r[0]=R8(c->r[3]+0x00000288u); // 801DC46C
  cmps(c,0,(int32_t)c->r[0],0); // 801DC470
  if (crb(c,2)) { goto L_801DC484; } // 801DC474
  c->lr=0x801DC47Cu; f_801EAAA0(c); // 801DC478
  c->r[4]=c->r[29]+0x00000490u; // 801DC47C
  c->lr=0x801DC484u; f_801EB290(c); // 801DC480
L_801DC484:;
  c->r[3]=R32(c->r[29]+0x0000028Cu); // 801DC484
  cmps(c,0,(int32_t)c->r[3],0); // 801DC488
  if (crb(c,2)) { goto L_801DC4A8; } // 801DC48C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DC490
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DC494
  c->ctr=c->r[12]; // 801DC498
  if (true) { c->lr=0x801DC4A0u; dispatch(c,c->ctr); } // 801DC49C
  c->r[0]=0u+0x00000000u; // 801DC4A0
  W32(c->r[29]+0x0000028Cu,c->r[0]); // 801DC4A4
L_801DC4A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801DC4A8
  c->lr=0x801DC4B0u; f_801D3D40(c); // 801DC4AC
  cmps(c,0,(int32_t)c->r[29],0); // 801DC4B0
  c->r[30]=R32(c->r[29]+0x00000278u); // 801DC4B4
  if (!crb(c,2)) { goto L_801DC4D8; } // 801DC4B8
  c->r[3]=0u+0x802D0000u; // 801DC4BC
  c->r[5]=0u+0x802D0000u; // 801DC4C0
  c->r[3]=c->r[3]+0xFFFFF218u; // 801DC4C4
  c->r[4]=0u+0x0000009Eu; // 801DC4C8
  c->r[5]=c->r[5]+0xFFFFF1F0u; // 801DC4CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC4D0
  c->lr=0x801DC4D8u; f_801F9770(c); // 801DC4D4
L_801DC4D8:;
  c->r[31]=c->r[30]+0x00000010u; // 801DC4D8
  c->r[3]=c->r[31]|c->r[31]; // 801DC4DC
  c->lr=0x801DC4E4u; f_800CCD50(c); // 801DC4E0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DC4E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC4E8
  if (!crb(c,2)) { goto L_801DC4FC; } // 801DC4EC
  c->r[3]=c->r[31]|c->r[31]; // 801DC4F0
  c->lr=0x801DC4F8u; f_800CCE30(c); // 801DC4F4
  goto L_801DC558; // 801DC4F8
L_801DC4FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DC4FC
  if (!crb(c,2)) { goto L_801DC520; } // 801DC500
  c->r[3]=0u+0x802D0000u; // 801DC504
  c->r[5]=0u+0x802D0000u; // 801DC508
  c->r[3]=c->r[3]+0xFFFFF1E4u; // 801DC50C
  c->r[4]=0u+0x00000233u; // 801DC510
  c->r[5]=c->r[5]+0xFFFFF1C0u; // 801DC514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC518
  c->lr=0x801DC520u; f_801F9770(c); // 801DC51C
L_801DC520:;
  c->r[3]=c->r[30]+0x00000004u; // 801DC520
  c->r[4]=c->r[29]+0x000000F0u; // 801DC524
  c->lr=0x801DC52Cu; f_801FA230(c); // 801DC528
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DC52C
  c->r[3]=c->r[29]|c->r[29]; // 801DC530
  c->r[4]=0u+0xFFFFFFFFu; // 801DC534
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801DC538
  c->ctr=c->r[12]; // 801DC53C
  if (true) { c->lr=0x801DC544u; dispatch(c,c->ctr); } // 801DC540
  c->r[3]=c->r[30]|c->r[30]; // 801DC544
  c->r[4]=c->r[29]|c->r[29]; // 801DC548
  c->lr=0x801DC550u; f_801D7940(c); // 801DC54C
  c->r[3]=c->r[31]|c->r[31]; // 801DC550
  c->lr=0x801DC558u; f_800CCE30(c); // 801DC554
L_801DC558:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC558
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC55C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC560
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC564
  c->lr=c->r[0]; // 801DC568
  c->r[1]=c->r[1]+0x00000020u; // 801DC56C
  return; // 801DC570
}

// __dt__Q44nw4r3snd6detail8SeqSoundFv
void f_801DC580(Ctx* __restrict c) {
  trace_call(0x801DC580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC580
  c->r[0]=c->lr; // 801DC584
  cmps(c,0,(int32_t)c->r[3],0); // 801DC588
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC58C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC590
  c->r[31]=c->r[4]|c->r[4]; // 801DC594
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC598
  c->r[30]=c->r[3]|c->r[3]; // 801DC59C
  if (crb(c,2)) { goto L_801DC5D0; } // 801DC5A0
  c->r[3]=addc(c,c->r[3],0x00000490u,0); cr0(c,c->r[3]); // 801DC5A4
  if (crb(c,2)) { goto L_801DC5B4; } // 801DC5A8
  c->r[4]=0u+0x00000000u; // 801DC5AC
  c->lr=0x801DC5B4u; f_801EAA10(c); // 801DC5B0
L_801DC5B4:;
  c->r[3]=c->r[30]+0x00000110u; // 801DC5B4
  c->r[4]=0u+0xFFFFFFFFu; // 801DC5B8
  c->lr=0x801DC5C0u; f_801DA920(c); // 801DC5BC
  cmps(c,0,(int32_t)c->r[31],0); // 801DC5C0
  if (!crb(c,1)) { goto L_801DC5D0; } // 801DC5C4
  c->r[3]=c->r[30]|c->r[30]; // 801DC5C8
  c->lr=0x801DC5D0u; f_800B9AD0(c); // 801DC5CC
L_801DC5D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801DC5D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC5D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC5D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC5DC
  c->lr=c->r[0]; // 801DC5E0
  c->r[1]=c->r[1]+0x00000010u; // 801DC5E4
  return; // 801DC5E8
}

// fn_801DC5F0
void f_801DC5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC5F0
  c->r[0]=c->lr; // 801DC5F4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801DC5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC5FC
  c->r[0]=0u+0x00000000u; // 801DC600
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC604
  c->r[31]=c->r[4]|c->r[4]; // 801DC608
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC60C
  c->r[30]=c->r[3]|c->r[3]; // 801DC610
  if (crb(c,1)) { goto L_801DC61C; } // 801DC614
  c->r[0]=0u+0x00000001u; // 801DC618
L_801DC61C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DC61C
  if (!crb(c,2)) { goto L_801DC64C; } // 801DC620
  c->r[3]=0u+0x802D0000u; // 801DC624
  c->r[5]=0u+0x802D0000u; // 801DC628
  c->r[6]=c->r[31]|c->r[31]; // 801DC62C
  c->r[4]=0u+0x0000010Au; // 801DC630
  c->r[3]=c->r[3]+0xFFFFEF30u; // 801DC634
  c->r[5]=c->r[5]+0xFFFFEFECu; // 801DC638
  c->r[7]=0u+0x00000000u; // 801DC63C
  c->r[8]=0u+0x0000007Fu; // 801DC640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC644
  c->lr=0x801DC64Cu; f_801F9770(c); // 801DC648
L_801DC64C:;
  c->r[4]=c->r[31]|c->r[31]; // 801DC64C
  c->r[3]=c->r[30]+0x00000110u; // 801DC650
  c->lr=0x801DC658u; f_801DB2E0(c); // 801DC654
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC65C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC660
  c->lr=c->r[0]; // 801DC664
  c->r[1]=c->r[1]+0x00000010u; // 801DC668
  return; // 801DC66C
}

// fn_801DC670
void f_801DC670(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801DC670
  f_801DB360(c); return; // 801DC674
}

// fn_801DC680
void f_801DC680(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801DC680
  f_801DB370(c); return; // 801DC684
}

// fn_801DC690
void f_801DC690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC690
  c->r[0]=c->lr; // 801DC694
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DC698
  c->r[11]=c->r[1]+0x00000040u; // 801DC69C
  c->lr=0x801DC6A4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DC6A0
  c->r[4]=R8(c->r[3]+0x00000098u); // 801DC6A4
  c->r[31]=c->r[3]|c->r[3]; // 801DC6A8
  c->r[0]=R32(c->r[3]+0x00000050u); // 801DC6AC
  c->r[4]=c->r[4]+c->r[0]; // 801DC6B0
  cmps(c,0,(int32_t)c->r[4],127); // 801DC6B4
  if (!crb(c,1)) { goto L_801DC6C4; } // 801DC6B8
  c->r[24]=0u+0x0000007Fu; // 801DC6BC
  goto L_801DC6CC; // 801DC6C0
L_801DC6C4:;
  c->r[0]=sraw(c,c->r[4],31); // 801DC6C4
  c->r[24]=c->r[4]&~c->r[0]; // 801DC6C8
L_801DC6CC:;
  c->r[25]=R32(c->r[3]+0x00000278u); // 801DC6CC
  c->r[26]=c->r[25]+0x00000010u; // 801DC6D0
  c->r[3]=c->r[26]|c->r[26]; // 801DC6D4
  c->lr=0x801DC6DCu; f_800CCD50(c); // 801DC6D8
  cmps(c,0,(int32_t)c->r[31],0); // 801DC6DC
  if (!crb(c,2)) { goto L_801DC700; } // 801DC6E0
  c->r[3]=0u+0x802D0000u; // 801DC6E4
  c->r[5]=0u+0x802D0000u; // 801DC6E8
  c->r[3]=c->r[3]+0xFFFFF1E4u; // 801DC6EC
  c->r[4]=0u+0x00000233u; // 801DC6F0
  c->r[5]=c->r[5]+0xFFFFF1C0u; // 801DC6F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC6F8
  c->lr=0x801DC700u; f_801F9770(c); // 801DC6FC
L_801DC700:;
  c->r[23]=c->r[31]+0x000000F0u; // 801DC700
  c->r[3]=c->r[25]+0x00000004u; // 801DC704
  c->r[4]=c->r[23]|c->r[23]; // 801DC708
  c->lr=0x801DC710u; f_801FA230(c); // 801DC70C
  c->r[30]=R32(c->r[25]+0x00000008u); // 801DC710
  c->r[29]=c->r[25]+0x00000008u; // 801DC714
  c->r[27]=0u+0x802D0000u; // 801DC718
  c->r[28]=0u+0x802D0000u; // 801DC71C
  goto L_801DC770; // 801DC720
L_801DC724:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DC724
  if (!crb(c,2)) { goto L_801DC740; } // 801DC728
  c->r[3]=c->r[27]+0xFFFFF1B4u; // 801DC72C
  c->r[5]=c->r[28]+0xFFFFF190u; // 801DC730
  c->r[4]=0u+0x0000023Du; // 801DC734
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC738
  c->lr=0x801DC740u; f_801F9770(c); // 801DC73C
L_801DC740:;
  c->r[3]=R8(c->r[30]+0xFFFFFFA8u); // 801DC740
  c->r[0]=R32(c->r[30]+0xFFFFFF60u); // 801DC744
  c->r[3]=c->r[3]+c->r[0]; // 801DC748
  cmps(c,0,(int32_t)c->r[3],127); // 801DC74C
  if (!crb(c,1)) { goto L_801DC75C; } // 801DC750
  c->r[0]=0u+0x0000007Fu; // 801DC754
  goto L_801DC764; // 801DC758
L_801DC75C:;
  c->r[0]=sraw(c,c->r[3],31); // 801DC75C
  c->r[0]=c->r[3]&~c->r[0]; // 801DC760
L_801DC764:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801DC764
  if (crb(c,0)) { goto L_801DC778; } // 801DC768
  c->r[30]=R32(c->r[30]+0x00000000u); // 801DC76C
L_801DC770:;
  cmpu(c,0,c->r[30],c->r[29]); // 801DC770
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC724; } // 801DC774
L_801DC778:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DC778
  if (!crb(c,2)) { goto L_801DC79C; } // 801DC77C
  c->r[3]=0u+0x802D0000u; // 801DC780
  c->r[5]=0u+0x802D0000u; // 801DC784
  c->r[3]=c->r[3]+0xFFFFF1E4u; // 801DC788
  c->r[4]=0u+0x00000233u; // 801DC78C
  c->r[5]=c->r[5]+0xFFFFF1C0u; // 801DC790
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC794
  c->lr=0x801DC79Cu; f_801F9770(c); // 801DC798
L_801DC79C:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC79C
  c->r[5]=c->r[23]|c->r[23]; // 801DC7A0
  c->r[3]=c->r[25]+0x00000004u; // 801DC7A4
  c->r[4]=c->r[1]+0x00000008u; // 801DC7A8
  c->lr=0x801DC7B0u; f_801FA130(c); // 801DC7AC
  c->r[3]=c->r[26]|c->r[26]; // 801DC7B0
  c->lr=0x801DC7B8u; f_800CCE30(c); // 801DC7B4
  c->r[11]=c->r[1]+0x00000040u; // 801DC7B8
  c->lr=0x801DC7C0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DC7BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DC7C0
  c->lr=c->r[0]; // 801DC7C4
  c->r[1]=c->r[1]+0x00000040u; // 801DC7C8
  return; // 801DC7CC
}

// fn_801DC7D0
void f_801DC7D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000274u); // 801DC7D0
  c->r[0]=0u-c->r[3]; // 801DC7D4
  c->r[0]=c->r[0]|c->r[3]; // 801DC7D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DC7DC
  return; // 801DC7E0
}

// fn_801DC7F0
void f_801DC7F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000274u); // 801DC7F0
  f_801DC9D0(c); return; // 801DC7F4
}

// fn_801DC800
void f_801DC800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC800
  c->r[0]=c->lr; // 801DC804
  c->r[4]=0u+0x00000000u; // 801DC808
  c->r[5]=0u+0x00000000u; // 801DC80C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC810
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC814
  c->r[31]=c->r[3]|c->r[3]; // 801DC818
  c->r[3]=R32(c->r[3]+0x00000010u); // 801DC81C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DC820
  c->r[12]=R32(c->r[12]+0x00000044u); // 801DC824
  c->ctr=c->r[12]; // 801DC828
  if (true) { c->lr=0x801DC830u; dispatch(c,c->ctr); } // 801DC82C
  c->r[3]=R32(c->r[31]+0x00000010u); // 801DC830
  c->r[4]=R32(c->r[31]+0x00000014u); // 801DC834
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DC838
  c->r[5]=R32(c->r[31]+0x00000018u); // 801DC83C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801DC840
  c->ctr=c->r[12]; // 801DC844
  if (true) { c->lr=0x801DC84Cu; dispatch(c,c->ctr); } // 801DC848
  cmps(c,0,(int32_t)c->r[3],-3); // 801DC84C
  c->r[0]=0u+0x00000000u; // 801DC850
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DC854
  if (!crb(c,2)) { goto L_801DC880; } // 801DC858
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801DC85C
  cmps(c,0,(int32_t)c->r[12],0); // 801DC860
  if (crb(c,2)) { goto L_801DC908; } // 801DC864
  c->r[5]=R32(c->r[31]+0x00000020u); // 801DC868
  c->r[3]=0u+0x00000000u; // 801DC86C
  c->r[4]=0u+0x00000000u; // 801DC870
  c->ctr=c->r[12]; // 801DC874
  if (true) { c->lr=0x801DC87Cu; dispatch(c,c->ctr); } // 801DC878
  goto L_801DC908; // 801DC87C
L_801DC880:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801DC880
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DC884
  if (crb(c,2)) { goto L_801DC8D4; } // 801DC888
  cmps(c,0,(int32_t)c->r[3],0); // 801DC88C
  if (!crb(c,2)) { goto L_801DC8B0; } // 801DC890
  c->r[3]=0u+0x802D0000u; // 801DC894
  c->r[5]=0u+0x802D0000u; // 801DC898
  c->r[3]=c->r[3]+0xFFFFEF30u; // 801DC89C
  c->r[4]=0u+0x000002CCu; // 801DC8A0
  c->r[5]=c->r[5]+0xFFFFF11Cu; // 801DC8A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC8A8
  c->lr=0x801DC8B0u; f_801F9810(c); // 801DC8AC
L_801DC8B0:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801DC8B0
  cmps(c,0,(int32_t)c->r[12],0); // 801DC8B4
  if (crb(c,2)) { goto L_801DC908; } // 801DC8B8
  c->r[5]=R32(c->r[31]+0x00000020u); // 801DC8BC
  c->r[3]=0u+0x00000000u; // 801DC8C0
  c->r[4]=0u+0x00000000u; // 801DC8C4
  c->ctr=c->r[12]; // 801DC8C8
  if (true) { c->lr=0x801DC8D0u; dispatch(c,c->ctr); } // 801DC8CC
  goto L_801DC908; // 801DC8D0
L_801DC8D4:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801DC8D4
  c->r[3]=c->r[1]+0x00000008u; // 801DC8D8
  c->lr=0x801DC8E0u; f_801DA440(c); // 801DC8DC
  c->r[3]=c->r[1]+0x00000008u; // 801DC8E0
  c->lr=0x801DC8E8u; f_801DA5A0(c); // 801DC8E4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801DC8E8
  cmps(c,0,(int32_t)c->r[12],0); // 801DC8EC
  if (crb(c,2)) { goto L_801DC908; } // 801DC8F0
  c->r[4]=c->r[3]|c->r[3]; // 801DC8F4
  c->r[5]=R32(c->r[31]+0x00000020u); // 801DC8F8
  c->r[3]=0u+0x00000001u; // 801DC8FC
  c->ctr=c->r[12]; // 801DC900
  if (true) { c->lr=0x801DC908u; dispatch(c,c->ctr); } // 801DC904
L_801DC908:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC908
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC90C
  c->lr=c->r[0]; // 801DC910
  c->r[1]=c->r[1]+0x00000020u; // 801DC914
  return; // 801DC918
}

// fn_801DC920
void f_801DC920(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801DC920
  cmps(c,0,(int32_t)c->r[12],0); // 801DC924
  if (crb(c,2)) return; // 801DC928
  c->r[5]=R32(c->r[3]+0x00000020u); // 801DC92C
  c->r[3]=0u+0x00000000u; // 801DC930
  c->r[4]=0u+0x00000000u; // 801DC934
  c->ctr=c->r[12]; // 801DC938
  if (true) { dispatch(c,c->ctr); return; } // 801DC93C
  return; // 801DC940
}

// fn_801DC950
void f_801DC950(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 801DC950
  c->r[0]=0u+0x00000000u; // 801DC954
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801DC958
  cmps(c,0,(int32_t)c->r[4],0); // 801DC95C
  if (crb(c,2)) return; // 801DC960
  c->r[12]=R32(c->r[4]+0x00000000u); // 801DC964
  c->r[3]=c->r[4]|c->r[4]; // 801DC968
  c->r[12]=R32(c->r[12]+0x00000048u); // 801DC96C
  c->ctr=c->r[12]; // 801DC970
  if (true) { dispatch(c,c->ctr); return; } // 801DC974
  return; // 801DC978
}

// fn_801DC980
void f_801DC980(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801DC980
  return; // 801DC984
}

// fn_801DC990
void f_801DC990(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 801DC990
  return; // 801DC994
}

// fn_801DC9A0
void f_801DC9A0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000289u); // 801DC9A0
  return; // 801DC9A4
}

// fn_801DC9B0
void f_801DC9B0(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFAE60u; // 801DC9B0
  return; // 801DC9B4
}

// fn_801DC9C0
void f_801DC9C0(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFAE38u; // 801DC9C0
  W32(c->r[13]+0xFFFFAE60u,c->r[0]); // 801DC9C4
  return; // 801DC9C8
}

// fn_801DC9D0
void f_801DC9D0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DC9D0
  cmps(c,0,(int32_t)c->r[4],0); // 801DC9D4
  if (crb(c,2)) { goto L_801DC9F0; } // 801DC9D8
  c->r[0]=R32(c->r[4]+0x00000274u); // 801DC9DC
  cmpu(c,0,c->r[0],c->r[3]); // 801DC9E0
  if (!crb(c,2)) { goto L_801DC9F0; } // 801DC9E4
  c->r[0]=0u+0x00000000u; // 801DC9E8
  W32(c->r[4]+0x00000274u,c->r[0]); // 801DC9EC
L_801DC9F0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DC9F0
  cmps(c,0,(int32_t)c->r[0],0); // 801DC9F4
  if (crb(c,2)) return; // 801DC9F8
  c->r[0]=0u+0x00000000u; // 801DC9FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DCA00
  return; // 801DCA04
}

// fn_801DCA10
void f_801DCA10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCA10
  c->r[0]=c->lr; // 801DCA14
  cmpu(c,0,c->r[4],0x00000010u); // 801DCA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCA1C
  c->r[0]=0u+0x00000000u; // 801DCA20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCA24
  c->r[31]=c->r[4]|c->r[4]; // 801DCA28
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCA2C
  c->r[30]=c->r[3]|c->r[3]; // 801DCA30
  if (crb(c,1)) { goto L_801DCA3C; } // 801DCA34
  c->r[0]=0u+0x00000001u; // 801DCA38
L_801DCA3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DCA3C
  if (!crb(c,2)) { goto L_801DCA6C; } // 801DCA40
  c->r[3]=0u+0x802D0000u; // 801DCA44
  c->r[5]=0u+0x802D0000u; // 801DCA48
  c->r[6]=c->r[31]|c->r[31]; // 801DCA4C
  c->r[4]=0u+0x00000026u; // 801DCA50
  c->r[3]=c->r[3]+0xFFFFF230u; // 801DCA54
  c->r[5]=c->r[5]+0xFFFFF244u; // 801DCA58
  c->r[7]=0u+0x00000000u; // 801DCA5C
  c->r[8]=0u+0x00000010u; // 801DCA60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DCA64
  c->lr=0x801DCA6Cu; f_801F9770(c); // 801DCA68
L_801DCA6C:;
  W8(c->r[30]+0x00000004u,c->r[31]); // 801DCA6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DCA70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DCA74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCA78
  c->lr=c->r[0]; // 801DCA7C
  c->r[1]=c->r[1]+0x00000010u; // 801DCA80
  return; // 801DCA84
}

// __ct__Q44nw4r3snd6detail8SeqTrackFv
void f_801DCA90(Ctx* __restrict c) {
  trace_call(0x801DCA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCA90
  c->r[0]=c->lr; // 801DCA94
  c->r[4]=0u+0x802D0000u; // 801DCA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCA9C
  c->r[4]=c->r[4]+0xFFFFF4A0u; // 801DCAA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCAA4
  c->r[31]=0u+0x00000000u; // 801DCAA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCAAC
  c->r[30]=c->r[3]|c->r[3]; // 801DCAB0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DCAB4
  W8(c->r[3]+0x00000005u,c->r[31]); // 801DCAB8
  c->r[3]=c->r[3]+0x00000058u; // 801DCABC
  c->lr=0x801DCAC4u; f_801D7990(c); // 801DCAC0
  W8(c->r[30]+0x00000070u,c->r[31]); // 801DCAC4
  c->r[3]=c->r[30]|c->r[30]; // 801DCAC8
  W8(c->r[30]+0x00000071u,c->r[31]); // 801DCACC
  W16(c->r[30]+0x00000072u,c->r[31]); // 801DCAD0
  W16(c->r[30]+0x00000074u,c->r[31]); // 801DCAD4
  W8(c->r[30]+0x00000076u,c->r[31]); // 801DCAD8
  W8(c->r[30]+0x00000077u,c->r[31]); // 801DCADC
  W16(c->r[30]+0x00000078u,c->r[31]); // 801DCAE0
  W16(c->r[30]+0x0000007Au,c->r[31]); // 801DCAE4
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 801DCAE8
  W8(c->r[30]+0x0000007Du,c->r[31]); // 801DCAEC
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 801DCAF0
  W16(c->r[30]+0x00000080u,c->r[31]); // 801DCAF4
  W8(c->r[30]+0x00000082u,c->r[31]); // 801DCAF8
  W8(c->r[30]+0x00000083u,c->r[31]); // 801DCAFC
  W16(c->r[30]+0x00000084u,c->r[31]); // 801DCB00
  W16(c->r[30]+0x00000086u,c->r[31]); // 801DCB04
  W32(c->r[30]+0x000000C4u,c->r[31]); // 801DCB08
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801DCB0C
  c->lr=0x801DCB14u; f_801DCC40(c); // 801DCB10
  c->r[3]=c->r[30]|c->r[30]; // 801DCB14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DCB18
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DCB1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCB20
  c->lr=c->r[0]; // 801DCB24
  c->r[1]=c->r[1]+0x00000010u; // 801DCB28
  return; // 801DCB2C
}

// __dt__Q44nw4r3snd6detail8SeqTrackFv
void f_801DCB30(Ctx* __restrict c) {
  trace_call(0x801DCB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCB30
  c->r[0]=c->lr; // 801DCB34
  cmps(c,0,(int32_t)c->r[3],0); // 801DCB38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCB3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCB40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCB44
  c->r[30]=c->r[4]|c->r[4]; // 801DCB48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCB4C
  c->r[29]=c->r[3]|c->r[3]; // 801DCB50
  if (crb(c,2)) { goto L_801DCC14; } // 801DCB54
  c->r[4]=0u+0x802D0000u; // 801DCB58
  c->r[4]=c->r[4]+0xFFFFF4A0u; // 801DCB5C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DCB60
  c->lr=0x801DCB68u; f_801E5840(c); // 801DCB64
  c->r[3]=c->r[3]+0x00000354u; // 801DCB68
  c->lr=0x801DCB70u; f_800CCD50(c); // 801DCB6C
  c->lr=0x801DCB74u; f_801E5840(c); // 801DCB70
  c->r[3]=c->r[3]+0x00000354u; // 801DCB74
  c->lr=0x801DCB7Cu; f_800CCD50(c); // 801DCB78
  c->r[3]=c->r[29]|c->r[29]; // 801DCB7C
  c->lr=0x801DCB84u; f_801DD2B0(c); // 801DCB80
  c->r[31]=R32(c->r[29]+0x000000C8u); // 801DCB84
  goto L_801DCBA4; // 801DCB88
L_801DCB8C:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801DCB8C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB90
  if (crb(c,2)) { goto L_801DCBA0; } // 801DCB94
  c->r[3]=c->r[31]|c->r[31]; // 801DCB98
  c->lr=0x801DCBA0u; f_801D56F0(c); // 801DCB9C
L_801DCBA0:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DCBA0
L_801DCBA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCBA4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCB8C; } // 801DCBA8
  c->lr=0x801DCBB0u; f_801E5840(c); // 801DCBAC
  c->r[3]=c->r[3]+0x00000354u; // 801DCBB0
  c->lr=0x801DCBB8u; f_800CCE30(c); // 801DCBB4
  c->lr=0x801DCBBCu; f_801E5840(c); // 801DCBB8
  c->r[3]=c->r[3]+0x00000354u; // 801DCBBC
  c->lr=0x801DCBC4u; f_800CCD50(c); // 801DCBC0
  c->r[31]=R32(c->r[29]+0x000000C8u); // 801DCBC4
  goto L_801DCBD8; // 801DCBC8
L_801DCBCC:;
  c->r[3]=c->r[31]|c->r[31]; // 801DCBCC
  c->lr=0x801DCBD4u; f_801D5DB0(c); // 801DCBD0
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DCBD4
L_801DCBD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCBD8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCBCC; } // 801DCBDC
  c->r[31]=0u+0x00000000u; // 801DCBE0
  W32(c->r[29]+0x000000C8u,c->r[31]); // 801DCBE4
  c->lr=0x801DCBECu; f_801E5840(c); // 801DCBE8
  c->r[3]=c->r[3]+0x00000354u; // 801DCBEC
  c->lr=0x801DCBF4u; f_800CCE30(c); // 801DCBF0
  W8(c->r[29]+0x00000005u,c->r[31]); // 801DCBF4
  c->lr=0x801DCBFCu; f_801E5840(c); // 801DCBF8
  c->r[3]=c->r[3]+0x00000354u; // 801DCBFC
  c->lr=0x801DCC04u; f_800CCE30(c); // 801DCC00
  cmps(c,0,(int32_t)c->r[30],0); // 801DCC04
  if (!crb(c,1)) { goto L_801DCC14; } // 801DCC08
  c->r[3]=c->r[29]|c->r[29]; // 801DCC0C
  c->lr=0x801DCC14u; f_800B9AD0(c); // 801DCC10
L_801DCC14:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCC14
  c->r[3]=c->r[29]|c->r[29]; // 801DCC18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCC1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCC20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCC24
  c->lr=c->r[0]; // 801DCC28
  c->r[1]=c->r[1]+0x00000020u; // 801DCC2C
  return; // 801DCC30
}

// InitParam__Q44nw4r3snd6detail8SeqTrackFv
void f_801DCC40(Ctx* __restrict c) {
  trace_call(0x801DCC40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCC40
  c->r[0]=c->lr; // 801DCC44
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DCC48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCC4C
  c->r[0]=0u+0x00000001u; // 801DCC50
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCC54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCC58
  c->r[31]=0u+0x00000000u; // 801DCC5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCC60
  c->r[30]=c->r[3]|c->r[3]; // 801DCC64
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801DCC68
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801DCC6C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801DCC70
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801DCC74
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801DCC78
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801DCC7C
  W32(c->r[3]+0x00000020u,c->r[31]); // 801DCC80
  W8(c->r[3]+0x00000024u,c->r[0]); // 801DCC84
  W8(c->r[3]+0x00000025u,c->r[0]); // 801DCC88
  W8(c->r[3]+0x00000026u,c->r[31]); // 801DCC8C
  W8(c->r[3]+0x00000027u,c->r[31]); // 801DCC90
  W8(c->r[3]+0x00000040u,c->r[31]); // 801DCC94
  W32(c->r[3]+0x00000044u,c->r[31]); // 801DCC98
  W8(c->r[3]+0x00000048u,c->r[31]); // 801DCC9C
  W8(c->r[3]+0x00000049u,c->r[31]); // 801DCCA0
  W8(c->r[3]+0x0000004Au,c->r[31]); // 801DCCA4
  W8(c->r[3]+0x0000004Bu,c->r[31]); // 801DCCA8
  W8(c->r[3]+0x0000004Cu,c->r[31]); // 801DCCAC
  W32(c->r[3]+0x00000050u,c->r[31]); // 801DCCB0
  W32(c->r[3]+0x00000054u,c->r[31]); // 801DCCB4
  c->r[3]=c->r[3]+0x00000058u; // 801DCCB8
  c->lr=0x801DCCC0u; f_801D7990(c); // 801DCCBC
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCCC0
  c->r[7]=0u+0x0000007Fu; // 801DCCC4
  c->r[3]=0u+0x000000FFu; // 801DCCC8
  c->r[6]=0u+0x00000002u; // 801DCCCC
  c->r[5]=0u+0x00000040u; // 801DCCD0
  c->r[4]=0u+0x0000003Cu; // 801DCCD4
  W8(c->r[30]+0x00000068u,c->r[31]); // 801DCCD8
  c->r[0]=0u+0xFFFFFFFFu; // 801DCCDC
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 801DCCE0
  W8(c->r[30]+0x00000070u,c->r[7]); // 801DCCE4
  W8(c->r[30]+0x00000071u,c->r[7]); // 801DCCE8
  W16(c->r[30]+0x00000072u,c->r[31]); // 801DCCEC
  W16(c->r[30]+0x00000074u,c->r[31]); // 801DCCF0
  W8(c->r[30]+0x00000076u,c->r[31]); // 801DCCF4
  W8(c->r[30]+0x00000077u,c->r[31]); // 801DCCF8
  W16(c->r[30]+0x00000078u,c->r[31]); // 801DCCFC
  W16(c->r[30]+0x0000007Au,c->r[31]); // 801DCD00
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 801DCD04
  W8(c->r[30]+0x0000007Du,c->r[31]); // 801DCD08
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 801DCD0C
  W16(c->r[30]+0x00000080u,c->r[31]); // 801DCD10
  W8(c->r[30]+0x00000088u,c->r[7]); // 801DCD14
  W8(c->r[30]+0x00000089u,c->r[7]); // 801DCD18
  W8(c->r[30]+0x00000082u,c->r[31]); // 801DCD1C
  W8(c->r[30]+0x00000083u,c->r[31]); // 801DCD20
  W16(c->r[30]+0x00000084u,c->r[31]); // 801DCD24
  W16(c->r[30]+0x00000086u,c->r[31]); // 801DCD28
  W8(c->r[30]+0x0000008Au,c->r[6]); // 801DCD2C
  W8(c->r[30]+0x0000008Bu,c->r[31]); // 801DCD30
  W8(c->r[30]+0x0000008Cu,c->r[31]); // 801DCD34
  W8(c->r[30]+0x0000008Du,c->r[5]); // 801DCD38
  W8(c->r[30]+0x0000008Eu,c->r[4]); // 801DCD3C
  W8(c->r[30]+0x0000008Fu,c->r[31]); // 801DCD40
  W8(c->r[30]+0x00000090u,c->r[3]); // 801DCD44
  W8(c->r[30]+0x00000091u,c->r[3]); // 801DCD48
  W8(c->r[30]+0x00000092u,c->r[3]); // 801DCD4C
  W8(c->r[30]+0x00000093u,c->r[3]); // 801DCD50
  W16(c->r[30]+0x00000094u,c->r[3]); // 801DCD54
  W8(c->r[30]+0x00000096u,c->r[7]); // 801DCD58
  W8(c->r[30]+0x00000097u,c->r[31]); // 801DCD5C
  W8(c->r[30]+0x00000098u,c->r[31]); // 801DCD60
  W8(c->r[30]+0x00000099u,c->r[31]); // 801DCD64
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[0]);} // 801DCD68
  W8(c->r[30]+0x0000009Au,c->r[31]); // 801DCD6C
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 801DCD70
  W16(c->r[30]+0x000000A4u,c->r[0]); // 801DCD74
  W16(c->r[30]+0x000000A6u,c->r[0]); // 801DCD78
  W16(c->r[30]+0x000000A8u,c->r[0]); // 801DCD7C
  W16(c->r[30]+0x000000AAu,c->r[0]); // 801DCD80
  W16(c->r[30]+0x000000ACu,c->r[0]); // 801DCD84
  W16(c->r[30]+0x000000AEu,c->r[0]); // 801DCD88
  W16(c->r[30]+0x000000B0u,c->r[0]); // 801DCD8C
  W16(c->r[30]+0x000000B2u,c->r[0]); // 801DCD90
  W16(c->r[30]+0x000000B4u,c->r[0]); // 801DCD94
  W16(c->r[30]+0x000000B6u,c->r[0]); // 801DCD98
  W16(c->r[30]+0x000000B8u,c->r[0]); // 801DCD9C
  W16(c->r[30]+0x000000BAu,c->r[0]); // 801DCDA0
  W16(c->r[30]+0x000000BCu,c->r[0]); // 801DCDA4
  W16(c->r[30]+0x000000BEu,c->r[0]); // 801DCDA8
  W16(c->r[30]+0x000000C0u,c->r[0]); // 801DCDAC
  W16(c->r[30]+0x000000C2u,c->r[0]); // 801DCDB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCDB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DCDB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DCDBC
  c->lr=c->r[0]; // 801DCDC0
  c->r[1]=c->r[1]+0x00000010u; // 801DCDC4
  return; // 801DCDC8
}

// SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
void f_801DCDD0(Ctx* __restrict c) {
  trace_call(0x801DCDD0u);
  c->r[0]=c->r[4]+c->r[5]; // 801DCDD0
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801DCDD4
  W32(c->r[3]+0x00000020u,c->r[0]); // 801DCDD8
  return; // 801DCDDC
}

// Open__Q44nw4r3snd6detail8SeqTrackFv
void f_801DCDE0(Ctx* __restrict c) {
  trace_call(0x801DCDE0u);
  c->r[4]=0u+0x00000000u; // 801DCDE0
  c->r[0]=0u+0x00000001u; // 801DCDE4
  W8(c->r[3]+0x0000004Au,c->r[4]); // 801DCDE8
  W8(c->r[3]+0x00000040u,c->r[4]); // 801DCDEC
  W32(c->r[3]+0x00000044u,c->r[4]); // 801DCDF0
  W8(c->r[3]+0x00000005u,c->r[0]); // 801DCDF4
  return; // 801DCDF8
}

// Close__Q44nw4r3snd6detail8SeqTrackFv
void f_801DCE00(Ctx* __restrict c) {
  trace_call(0x801DCE00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCE00
  c->r[0]=c->lr; // 801DCE04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCE08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCE0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCE10
  c->r[30]=c->r[3]|c->r[3]; // 801DCE14
  c->lr=0x801DCE1Cu; f_801E5840(c); // 801DCE18
  c->r[3]=c->r[3]+0x00000354u; // 801DCE1C
  c->lr=0x801DCE24u; f_800CCD50(c); // 801DCE20
  c->lr=0x801DCE28u; f_801E5840(c); // 801DCE24
  c->r[3]=c->r[3]+0x00000354u; // 801DCE28
  c->lr=0x801DCE30u; f_800CCD50(c); // 801DCE2C
  c->r[3]=c->r[30]|c->r[30]; // 801DCE30
  c->lr=0x801DCE38u; f_801DD2B0(c); // 801DCE34
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DCE38
  goto L_801DCE58; // 801DCE3C
L_801DCE40:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801DCE40
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE44
  if (crb(c,2)) { goto L_801DCE54; } // 801DCE48
  c->r[3]=c->r[31]|c->r[31]; // 801DCE4C
  c->lr=0x801DCE54u; f_801D56F0(c); // 801DCE50
L_801DCE54:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DCE54
L_801DCE58:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCE58
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCE40; } // 801DCE5C
  c->lr=0x801DCE64u; f_801E5840(c); // 801DCE60
  c->r[3]=c->r[3]+0x00000354u; // 801DCE64
  c->lr=0x801DCE6Cu; f_800CCE30(c); // 801DCE68
  c->lr=0x801DCE70u; f_801E5840(c); // 801DCE6C
  c->r[3]=c->r[3]+0x00000354u; // 801DCE70
  c->lr=0x801DCE78u; f_800CCD50(c); // 801DCE74
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DCE78
  goto L_801DCE8C; // 801DCE7C
L_801DCE80:;
  c->r[3]=c->r[31]|c->r[31]; // 801DCE80
  c->lr=0x801DCE88u; f_801D5DB0(c); // 801DCE84
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DCE88
L_801DCE8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCE8C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCE80; } // 801DCE90
  c->r[31]=0u+0x00000000u; // 801DCE94
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801DCE98
  c->lr=0x801DCEA0u; f_801E5840(c); // 801DCE9C
  c->r[3]=c->r[3]+0x00000354u; // 801DCEA0
  c->lr=0x801DCEA8u; f_800CCE30(c); // 801DCEA4
  W8(c->r[30]+0x00000005u,c->r[31]); // 801DCEA8
  c->lr=0x801DCEB0u; f_801E5840(c); // 801DCEAC
  c->r[3]=c->r[3]+0x00000354u; // 801DCEB0
  c->lr=0x801DCEB8u; f_800CCE30(c); // 801DCEB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCEB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DCEBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DCEC0
  c->lr=c->r[0]; // 801DCEC4
  c->r[1]=c->r[1]+0x00000010u; // 801DCEC8
  return; // 801DCECC
}

// UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv
void f_801DCED0(Ctx* __restrict c) {
  trace_call(0x801DCED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCED0
  c->r[0]=c->lr; // 801DCED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCED8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCEDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCEE0
  c->r[30]=c->r[3]|c->r[3]; // 801DCEE4
  c->lr=0x801DCEECu; f_801E5840(c); // 801DCEE8
  c->r[3]=c->r[3]+0x00000354u; // 801DCEEC
  c->lr=0x801DCEF4u; f_800CCD50(c); // 801DCEF0
  c->r[0]=R8(c->r[30]+0x00000005u); // 801DCEF4
  cmps(c,0,(int32_t)c->r[0],0); // 801DCEF8
  if (!crb(c,2)) { goto L_801DCF10; } // 801DCEFC
  c->lr=0x801DCF04u; f_801E5840(c); // 801DCF00
  c->r[3]=c->r[3]+0x00000354u; // 801DCF04
  c->lr=0x801DCF0Cu; f_800CCE30(c); // 801DCF08
  goto L_801DCF88; // 801DCF0C
L_801DCF10:;
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DCF10
  goto L_801DCF74; // 801DCF14
L_801DCF18:;
  c->r[3]=R32(c->r[31]+0x000000B0u); // 801DCF18
  cmps(c,0,(int32_t)c->r[3],0); // 801DCF1C
  if (!crb(c,1)) { goto L_801DCF2C; } // 801DCF20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DCF24
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801DCF28
L_801DCF2C:;
  c->r[0]=R32(c->r[31]+0x000000B0u); // 801DCF2C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCF30
  if (!crb(c,2)) { goto L_801DCF58; } // 801DCF34
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DCF38
  cmps(c,0,(int32_t)c->r[0],4); // 801DCF3C
  if (crb(c,2)) { goto L_801DCF58; } // 801DCF40
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 801DCF44
  cmps(c,0,(int32_t)c->r[0],0); // 801DCF48
  if (!crb(c,2)) { goto L_801DCF58; } // 801DCF4C
  c->r[3]=c->r[31]|c->r[31]; // 801DCF50
  c->lr=0x801DCF58u; f_801D5760(c); // 801DCF54
L_801DCF58:;
  c->r[0]=R8(c->r[31]+0x00000038u); // 801DCF58
  cmps(c,0,(int32_t)c->r[0],0); // 801DCF5C
  if (!crb(c,2)) { goto L_801DCF70; } // 801DCF60
  c->r[3]=c->r[31]|c->r[31]; // 801DCF64
  c->r[4]=0u+0x00000001u; // 801DCF68
  c->lr=0x801DCF70u; f_801D5930(c); // 801DCF6C
L_801DCF70:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DCF70
L_801DCF74:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCF74
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCF18; } // 801DCF78
  c->lr=0x801DCF80u; f_801E5840(c); // 801DCF7C
  c->r[3]=c->r[3]+0x00000354u; // 801DCF80
  c->lr=0x801DCF88u; f_800CCE30(c); // 801DCF84
L_801DCF88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCF88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DCF8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DCF90
  c->lr=c->r[0]; // 801DCF94
  c->r[1]=c->r[1]+0x00000010u; // 801DCF98
  return; // 801DCF9C
}

// ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb
void f_801DCFA0(Ctx* __restrict c) {
  trace_call(0x801DCFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCFA0
  c->r[0]=c->lr; // 801DCFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCFA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCFAC
  c->r[31]=c->r[4]|c->r[4]; // 801DCFB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCFB4
  c->r[30]=c->r[3]|c->r[3]; // 801DCFB8
  c->lr=0x801DCFC0u; f_801E5840(c); // 801DCFBC
  c->r[3]=c->r[3]+0x00000354u; // 801DCFC0
  c->lr=0x801DCFC8u; f_800CCD50(c); // 801DCFC4
  c->r[0]=R8(c->r[30]+0x00000005u); // 801DCFC8
  cmps(c,0,(int32_t)c->r[0],0); // 801DCFCC
  if (!crb(c,2)) { goto L_801DCFE8; } // 801DCFD0
  c->lr=0x801DCFD8u; f_801E5840(c); // 801DCFD4
  c->r[3]=c->r[3]+0x00000354u; // 801DCFD8
  c->lr=0x801DCFE0u; f_800CCE30(c); // 801DCFDC
  c->r[3]=0u+0x00000000u; // 801DCFE0
  goto L_801DD114; // 801DCFE4
L_801DCFE8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000074u); // 801DCFE8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000072u); // 801DCFEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DCFF0
  if (!crb(c,0)) { goto L_801DD000; } // 801DCFF4
  c->r[0]=c->r[3]+0x00000001u; // 801DCFF8
  W16(c->r[30]+0x00000074u,c->r[0]); // 801DCFFC
L_801DD000:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Au); // 801DD000
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000078u); // 801DD004
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD008
  if (!crb(c,0)) { goto L_801DD018; } // 801DD00C
  c->r[0]=c->r[3]+0x00000001u; // 801DD010
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801DD014
L_801DD018:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000080u); // 801DD018
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Eu); // 801DD01C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD020
  if (!crb(c,0)) { goto L_801DD030; } // 801DD024
  c->r[0]=c->r[3]+0x00000001u; // 801DD028
  W16(c->r[30]+0x00000080u,c->r[0]); // 801DD02C
L_801DD030:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000086u); // 801DD030
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000084u); // 801DD034
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD038
  if (!crb(c,0)) { goto L_801DD048; } // 801DD03C
  c->r[0]=c->r[3]+0x00000001u; // 801DD040
  W16(c->r[30]+0x00000086u,c->r[0]); // 801DD044
L_801DD048:;
  c->r[0]=R8(c->r[30]+0x0000004Au); // 801DD048
  cmps(c,0,(int32_t)c->r[0],0); // 801DD04C
  if (crb(c,2)) { goto L_801DD07C; } // 801DD050
  c->r[0]=R32(c->r[30]+0x000000C8u); // 801DD054
  cmps(c,0,(int32_t)c->r[0],0); // 801DD058
  if (crb(c,2)) { goto L_801DD074; } // 801DD05C
  c->lr=0x801DD064u; f_801E5840(c); // 801DD060
  c->r[3]=c->r[3]+0x00000354u; // 801DD064
  c->lr=0x801DD06Cu; f_800CCE30(c); // 801DD068
  c->r[3]=0u+0x00000001u; // 801DD06C
  goto L_801DD114; // 801DD070
L_801DD074:;
  c->r[0]=0u+0x00000000u; // 801DD074
  W8(c->r[30]+0x0000004Au,c->r[0]); // 801DD078
L_801DD07C:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 801DD07C
  cmps(c,0,(int32_t)c->r[3],0); // 801DD080
  if (!crb(c,1)) { goto L_801DD0A8; } // 801DD084
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801DD088
  W32(c->r[30]+0x00000044u,c->r[0]); // 801DD08C
  if (!crb(c,1)) { goto L_801DD0A8; } // 801DD090
  c->lr=0x801DD098u; f_801E5840(c); // 801DD094
  c->r[3]=c->r[3]+0x00000354u; // 801DD098
  c->lr=0x801DD0A0u; f_800CCE30(c); // 801DD09C
  c->r[3]=0u+0x00000001u; // 801DD0A0
  goto L_801DD114; // 801DD0A4
L_801DD0A8:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DD0A8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD0AC
  if (crb(c,2)) { goto L_801DD104; } // 801DD0B0
  goto L_801DD0EC; // 801DD0B4
L_801DD0B8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801DD0B8
  c->r[3]=c->r[30]|c->r[30]; // 801DD0BC
  c->r[4]=c->r[31]|c->r[31]; // 801DD0C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801DD0C4
  c->ctr=c->r[12]; // 801DD0C8
  if (true) { c->lr=0x801DD0D0u; dispatch(c,c->ctr); } // 801DD0CC
  cmps(c,0,(int32_t)c->r[3],1); // 801DD0D0
  if (!crb(c,2)) { goto L_801DD0EC; } // 801DD0D4
  c->lr=0x801DD0DCu; f_801E5840(c); // 801DD0D8
  c->r[3]=c->r[3]+0x00000354u; // 801DD0DC
  c->lr=0x801DD0E4u; f_800CCE30(c); // 801DD0E0
  c->r[3]=0u+0xFFFFFFFFu; // 801DD0E4
  goto L_801DD114; // 801DD0E8
L_801DD0EC:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 801DD0EC
  cmps(c,0,(int32_t)c->r[0],0); // 801DD0F0
  if (!crb(c,2)) { goto L_801DD104; } // 801DD0F4
  c->r[0]=R8(c->r[30]+0x0000004Au); // 801DD0F8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD0FC
  if (crb(c,2)) { IRQCHK(c); goto L_801DD0B8; } // 801DD100
L_801DD104:;
  c->lr=0x801DD108u; f_801E5840(c); // 801DD104
  c->r[3]=c->r[3]+0x00000354u; // 801DD108
  c->lr=0x801DD110u; f_800CCE30(c); // 801DD10C
  c->r[3]=0u+0x00000001u; // 801DD110
L_801DD114:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD114
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD118
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD11C
  c->lr=c->r[0]; // 801DD120
  c->r[1]=c->r[1]+0x00000010u; // 801DD124
  return; // 801DD128
}

// fn_801DD130
void f_801DD130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD130
  c->r[0]=c->lr; // 801DD134
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD138
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD13C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD140
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DD144
  c->r[29]=c->r[3]|c->r[3]; // 801DD148
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DD14C
  c->r[28]=c->r[4]|c->r[4]; // 801DD150
  c->lr=0x801DD158u; f_801E5840(c); // 801DD154
  c->r[3]=c->r[3]+0x00000354u; // 801DD158
  c->lr=0x801DD160u; f_800CCD50(c); // 801DD15C
  c->r[3]=c->r[29]|c->r[29]; // 801DD160
  c->lr=0x801DD168u; f_801DD2B0(c); // 801DD164
  c->r[29]=R32(c->r[29]+0x000000C8u); // 801DD168
  c->r[30]=0u+0x802D0000u; // 801DD16C
  c->r[31]=0u+0x802D0000u; // 801DD170
  goto L_801DD1DC; // 801DD174
L_801DD178:;
  c->r[0]=R8(c->r[29]+0x00000036u); // 801DD178
  cmps(c,0,(int32_t)c->r[0],0); // 801DD17C
  if (crb(c,2)) { goto L_801DD1D8; } // 801DD180
  cmps(c,0,(int32_t)c->r[28],0); // 801DD184
  if (crb(c,0)) { goto L_801DD1D0; } // 801DD188
  cmpu(c,0,c->r[28],0x0000007Fu); // 801DD18C
  c->r[0]=0u+0x00000000u; // 801DD190
  if (crb(c,1)) { goto L_801DD19C; } // 801DD194
  c->r[0]=0u+0x00000001u; // 801DD198
L_801DD19C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD19C
  if (!crb(c,2)) { goto L_801DD1C4; } // 801DD1A0
  c->r[6]=c->r[28]|c->r[28]; // 801DD1A4
  c->r[3]=c->r[30]+0xFFFFF230u; // 801DD1A8
  c->r[5]=c->r[31]+0xFFFFF290u; // 801DD1AC
  c->r[4]=0u+0x0000014Au; // 801DD1B0
  c->r[7]=0u+0x00000000u; // 801DD1B4
  c->r[8]=0u+0x0000007Fu; // 801DD1B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DD1BC
  c->lr=0x801DD1C4u; f_801F9770(c); // 801DD1C0
L_801DD1C4:;
  c->r[3]=c->r[29]|c->r[29]; // 801DD1C4
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 801DD1C8
  c->lr=0x801DD1D0u; f_801D6950(c); // 801DD1CC
L_801DD1D0:;
  c->r[3]=c->r[29]|c->r[29]; // 801DD1D0
  c->lr=0x801DD1D8u; f_801D56F0(c); // 801DD1D4
L_801DD1D8:;
  c->r[29]=R32(c->r[29]+0x000000D4u); // 801DD1D8
L_801DD1DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DD1DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD178; } // 801DD1E0
  c->lr=0x801DD1E8u; f_801E5840(c); // 801DD1E4
  c->r[3]=c->r[3]+0x00000354u; // 801DD1E8
  c->lr=0x801DD1F0u; f_800CCE30(c); // 801DD1EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD1F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD1F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD1F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DD1FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DD200
  c->lr=c->r[0]; // 801DD204
  c->r[1]=c->r[1]+0x00000020u; // 801DD208
  return; // 801DD20C
}

// fn_801DD210
void f_801DD210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD210
  c->r[0]=c->lr; // 801DD214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD21C
  c->r[31]=c->r[3]|c->r[3]; // 801DD220
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD224
  c->r[30]=c->r[4]|c->r[4]; // 801DD228
  c->lr=0x801DD230u; f_801E5840(c); // 801DD22C
  c->r[3]=c->r[3]+0x00000354u; // 801DD230
  c->lr=0x801DD238u; f_800CCD50(c); // 801DD234
  c->r[31]=R32(c->r[31]+0x000000C8u); // 801DD238
  goto L_801DD278; // 801DD23C
L_801DD240:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801DD240
  cmps(c,0,(int32_t)c->r[0],0); // 801DD244
  if (crb(c,2)) { goto L_801DD274; } // 801DD248
  c->r[3]=R8(c->r[31]+0x00000035u); // 801DD24C
  c->r[0]=0u-c->r[3]; // 801DD250
  c->r[0]=c->r[0]|c->r[3]; // 801DD254
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DD258
  cmpu(c,0,c->r[30],c->r[0]); // 801DD25C
  if (crb(c,2)) { goto L_801DD274; } // 801DD260
  W8(c->r[31]+0x00000035u,c->r[30]); // 801DD264
  c->r[4]=c->r[30]|c->r[30]; // 801DD268
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801DD26C
  c->lr=0x801DD274u; f_801EC750(c); // 801DD270
L_801DD274:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DD274
L_801DD278:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DD278
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD240; } // 801DD27C
  c->lr=0x801DD284u; f_801E5840(c); // 801DD280
  c->r[3]=c->r[3]+0x00000354u; // 801DD284
  c->lr=0x801DD28Cu; f_800CCE30(c); // 801DD288
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD28C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD290
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD294
  c->lr=c->r[0]; // 801DD298
  c->r[1]=c->r[1]+0x00000010u; // 801DD29C
  return; // 801DD2A0
}

// fn_801DD2B0
void f_801DD2B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD2B0
  c->r[0]=c->lr; // 801DD2B4
  W32(c->r[1]+0x00000114u,c->r[0]); // 801DD2B8
  c->r[11]=c->r[1]+0x00000050u; // 801DD2BC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 801DD2C0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 801DD2C4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 801DD2C8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 801DD2CC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 801DD2D0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 801DD2D4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 801DD2D8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 801DD2DC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[27]);} // 801DD2E0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,27,ea,0,0);} // 801DD2E4
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[26]);} // 801DD2E8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,26,ea,0,0);} // 801DD2EC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[25]);} // 801DD2F0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,25,ea,0,0);} // 801DD2F4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[24]);} // 801DD2F8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,24,ea,0,0);} // 801DD2FC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[23]);} // 801DD300
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,23,ea,0,0);} // 801DD304
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[22]);} // 801DD308
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,22,ea,0,0);} // 801DD30C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[21]);} // 801DD310
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,21,ea,0,0);} // 801DD314
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[20]);} // 801DD318
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,20,ea,0,0);} // 801DD31C
  c->lr=0x801DD324u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DD320
  c->r[0]=0u+0x43300000u; // 801DD324
  W32(c->r[1]+0x00000018u,c->r[0]); // 801DD328
  c->r[29]=c->r[3]|c->r[3]; // 801DD32C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801DD330
  c->lr=0x801DD338u; f_801E5840(c); // 801DD334
  c->r[3]=c->r[3]+0x00000354u; // 801DD338
  c->lr=0x801DD340u; f_800CCD50(c); // 801DD33C
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DD340
  cmps(c,0,(int32_t)c->r[0],0); // 801DD344
  if (!crb(c,2)) { goto L_801DD35C; } // 801DD348
  c->lr=0x801DD350u; f_801E5840(c); // 801DD34C
  c->r[3]=c->r[3]+0x00000354u; // 801DD350
  c->lr=0x801DD358u; f_800CCE30(c); // 801DD354
  goto L_801DD804; // 801DD358
L_801DD35C:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 801DD35C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD360
  if (!crb(c,2)) { goto L_801DD378; } // 801DD364
  c->lr=0x801DD36Cu; f_801E5840(c); // 801DD368
  c->r[3]=c->r[3]+0x00000354u; // 801DD36C
  c->lr=0x801DD374u; f_800CCE30(c); // 801DD370
  goto L_801DD804; // 801DD374
L_801DD378:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000072u); // 801DD378
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000074u); // 801DD37C
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[29]=c->ps1[29]=RF32(ea);} // 801DD380
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801DD384
  if (crb(c,0)) { goto L_801DD394; } // 801DD388
  c->r[0]=R8(c->r[29]+0x00000071u); // 801DD38C
  goto L_801DD3B0; // 801DD390
L_801DD394:;
  c->r[5]=R8(c->r[29]+0x00000070u); // 801DD394
  c->r[0]=R8(c->r[29]+0x00000071u); // 801DD398
  c->r[0]=c->r[0]-c->r[5]; // 801DD39C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801DD3A0
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801DD3A4
  c->r[0]=c->r[5]+c->r[0]; // 801DD3A8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DD3AC
L_801DD3B0:;
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DD3B0
  c->r[0]=R8(c->r[29]+0x00000088u); // 801DD3B4
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[3]=RF64(ea);} // 801DD3B8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801DD3BC
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD3C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD3C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801DD3C8
  c->r[0]=R8(c->r[3]+0x000000E8u); // 801DD3CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801DD3D0
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DD3D4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801DD3D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DD3DC
  c->f[6]=c->ps1[6]=S(c->f[1]/c->f[4]); // 801DD3E0
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD3E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801DD3E8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DD3EC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000084u); // 801DD3F0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000086u); // 801DD3F4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 801DD3F8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801DD3FC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[4]); // 801DD400
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[6]); // 801DD404
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 801DD408
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801DD40C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801DD410
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 801DD414
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[2]); // 801DD418
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801DD41C
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[0]); // 801DD420
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[5]); // 801DD424
  if (crb(c,0)) { goto L_801DD438; } // 801DD428
  c->r[0]=R8(c->r[29]+0x00000083u); // 801DD42C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD430
  goto L_801DD45C; // 801DD434
L_801DD438:;
  c->r[7]=R8(c->r[29]+0x00000082u); // 801DD438
  c->r[0]=R8(c->r[29]+0x00000083u); // 801DD43C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801DD440
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD444
  c->r[0]=c->r[0]-c->r[4]; // 801DD448
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801DD44C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 801DD450
  c->r[0]=c->r[7]+c->r[0]; // 801DD454
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD458
L_801DD45C:;
  c->r[0]=c->r[0]^0x80000000u; // 801DD45C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DD460
  c->r[0]=R8(c->r[29]+0x0000008Au); // 801DD464
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[1]=RF64(ea);} // 801DD468
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801DD46C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD470
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801DD474
  {uint32_t ea=c->r[2]+0xFFFF9E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD478
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[3]=RF64(ea);} // 801DD47C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801DD480
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DD484
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[27]=c->ps1[27]=RF32(ea);} // 801DD488
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DD48C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801DD490
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD494
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[4]); // 801DD498
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000078u); // 801DD49C
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[1]); // 801DD4A0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Au); // 801DD4A4
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 801DD4A8
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[26]=c->ps1[26]=RF32(ea);} // 801DD4AC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801DD4B0
  if (crb(c,0)) { goto L_801DD4C4; } // 801DD4B4
  c->r[0]=R8(c->r[29]+0x00000077u); // 801DD4B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD4BC
  goto L_801DD4E8; // 801DD4C0
L_801DD4C4:;
  c->r[7]=R8(c->r[29]+0x00000076u); // 801DD4C4
  c->r[0]=R8(c->r[29]+0x00000077u); // 801DD4C8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801DD4CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD4D0
  c->r[0]=c->r[0]-c->r[4]; // 801DD4D4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801DD4D8
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 801DD4DC
  c->r[0]=c->r[7]+c->r[0]; // 801DD4E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD4E4
L_801DD4E8:;
  c->r[0]=c->r[0]^0x80000000u; // 801DD4E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD4EC
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[2]=RF64(ea);} // 801DD4F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801DD4F4
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD4F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DD4FC
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD500
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DD504
  fcmp(c,0,c->f[0],c->f[2]); // 801DD508
  if (!crb(c,1)) { goto L_801DD514; } // 801DD50C
  goto L_801DD528; // 801DD510
L_801DD514:;
  {uint32_t ea=c->r[2]+0xFFFF9E94u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD514
  fcmp(c,0,c->f[0],c->f[2]); // 801DD518
  if (!crb(c,0)) { goto L_801DD524; } // 801DD51C
  goto L_801DD528; // 801DD520
L_801DD524:;
  c->f[2]=c->f[0]; // 801DD524
L_801DD528:;
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[2]); // 801DD528
  {uint32_t ea=c->r[29]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DD52C
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD530
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD534
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[1]); // 801DD538
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DD53C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Eu); // 801DD540
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000080u); // 801DD544
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[2]); // 801DD548
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[25]=c->ps1[25]=RF32(ea);} // 801DD54C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801DD550
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 801DD554
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 801DD558
  if (crb(c,0)) { goto L_801DD56C; } // 801DD55C
  c->r[0]=R8(c->r[29]+0x0000007Du); // 801DD560
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD564
  goto L_801DD590; // 801DD568
L_801DD56C:;
  c->r[7]=R8(c->r[29]+0x0000007Cu); // 801DD56C
  c->r[0]=R8(c->r[29]+0x0000007Du); // 801DD570
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801DD574
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD578
  c->r[0]=c->r[0]-c->r[4]; // 801DD57C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801DD580
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 801DD584
  c->r[0]=c->r[7]+c->r[0]; // 801DD588
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD58C
L_801DD590:;
  c->r[0]=c->r[0]^0x80000000u; // 801DD590
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DD594
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[2]=RF64(ea);} // 801DD598
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801DD59C
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD5A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DD5A4
  {uint32_t ea=c->r[2]+0xFFFF9E98u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD5A8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DD5AC
  fcmp(c,0,c->f[0],c->f[2]); // 801DD5B0
  if (!crb(c,1)) { goto L_801DD5BC; } // 801DD5B4
  goto L_801DD5D0; // 801DD5B8
L_801DD5BC:;
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD5BC
  fcmp(c,0,c->f[0],c->f[2]); // 801DD5C0
  if (!crb(c,0)) { goto L_801DD5CC; } // 801DD5C4
  goto L_801DD5D0; // 801DD5C8
L_801DD5CC:;
  c->f[2]=c->f[0]; // 801DD5CC
L_801DD5D0:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[2]); // 801DD5D0
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DD5D4
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[24]=c->ps1[24]=RF32(ea);} // 801DD5D8
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD5DC
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 801DD5E0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DD5E4
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801DD5E8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 801DD5EC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD5F0
  cmps(c,0,(int32_t)c->r[0],0); // 801DD5F4
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 801DD5F8
  c->r[31]=R8(c->r[29]+0x0000009Au); // 801DD5FC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801DD600
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[23]=c->ps1[23]=RF32(ea);} // 801DD604
  if (crb(c,2)) { goto L_801DD614; } // 801DD608
  {uint32_t ea=c->r[3]+0x00000018u; c->f[23]=c->ps1[23]=RF32(ea);} // 801DD60C
  c->r[31]=c->r[0]|c->r[0]; // 801DD610
L_801DD614:;
  c->r[0]=R8(c->r[29]+0x00000096u); // 801DD614
  c->r[25]=c->r[1]+0x00000008u; // 801DD618
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD61C
  c->r[27]=0u+0x00000000u; // 801DD620
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[22]=c->ps1[22]=RF32(ea);} // 801DD624
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[30]=RF64(ea);} // 801DD628
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801DD62C
  c->f[21]=c->f[22]; // 801DD630
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DD634
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 801DD638
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD63C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD640
  c->r[26]=R8(c->r[3]+0x0000001Du); // 801DD644
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801DD648
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801DD64C
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[0]); // 801DD650
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[2]); // 801DD654
L_801DD658:;
  c->r[3]=c->r[29]+c->r[27]; // 801DD658
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[21]);} // 801DD65C
  c->r[0]=R8(c->r[3]+0x00000097u); // 801DD660
  c->r[4]=c->r[27]|c->r[27]; // 801DD664
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DD668
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD66C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801DD670
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD674
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801DD678
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801DD67C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DD680
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801DD684
  c->lr=0x801DD68Cu; f_801D28B0(c); // 801DD688
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD68C
  c->r[27]=c->r[27]+0x00000001u; // 801DD690
  cmps(c,0,(int32_t)c->r[27],3); // 801DD694
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DD698
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801DD69C
  c->r[25]=c->r[25]+0x00000004u; // 801DD6A0
  if (crb(c,0)) { IRQCHK(c); goto L_801DD658; } // 801DD6A4
  c->r[30]=R32(c->r[29]+0x000000C8u); // 801DD6A8
  c->r[27]=0u+0x802D0000u; // 801DD6AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[21]=c->ps1[21]=RF32(ea);} // 801DD6B0
  c->r[28]=0u+0x802D0000u; // 801DD6B4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[20]=c->ps1[20]=RF32(ea);} // 801DD6B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DD6BC
  goto L_801DD7F0; // 801DD6C0
L_801DD6C4:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[29]);} // 801DD6C4
  c->f[1]=c->f[23]; // 801DD6C8
  c->r[3]=c->r[30]|c->r[30]; // 801DD6CC
  c->r[4]=c->r[31]|c->r[31]; // 801DD6D0
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[28]);} // 801DD6D4
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[27]);} // 801DD6D8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[26]);} // 801DD6DC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[25]);} // 801DD6E0
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[24]);} // 801DD6E4
  c->lr=0x801DD6ECu; f_801D5970(c); // 801DD6E8
  W8(c->r[30]+0x0000003Cu,c->r[26]); // 801DD6EC
  c->r[25]=c->r[30]|c->r[30]; // 801DD6F0
  c->r[24]=0u+0x00000000u; // 801DD6F4
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD6F8
  c->r[0]=R32(c->r[3]+0x00000020u); // 801DD6FC
  W32(c->r[30]+0x00000058u,c->r[0]); // 801DD700
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD704
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD708
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 801DD70C
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[22]);} // 801DD710
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[21]);} // 801DD714
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[20]);} // 801DD718
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[31]);} // 801DD71C
L_801DD720:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD720
  c->r[4]=c->r[24]|c->r[24]; // 801DD724
  c->lr=0x801DD72Cu; f_801D2B30(c); // 801DD728
  c->f[30]=c->f[1]; // 801DD72C
  cmpu(c,0,c->r[24],0x00000003u); // 801DD730
  c->r[0]=0u+0x00000000u; // 801DD734
  if (crb(c,1)) { goto L_801DD740; } // 801DD738
  c->r[0]=0u+0x00000001u; // 801DD73C
L_801DD740:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD740
  if (!crb(c,2)) { goto L_801DD768; } // 801DD744
  c->r[6]=c->r[24]|c->r[24]; // 801DD748
  c->r[3]=c->r[27]+0xFFFFF548u; // 801DD74C
  c->r[5]=c->r[28]+0xFFFFF500u; // 801DD750
  c->r[4]=0u+0x000000BAu; // 801DD754
  c->r[7]=0u+0x00000000u; // 801DD758
  c->r[8]=0u+0x00000004u; // 801DD75C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DD760
  c->lr=0x801DD768u; f_801F9770(c); // 801DD764
L_801DD768:;
  c->r[24]=c->r[24]+0x00000001u; // 801DD768
  {uint32_t ea=c->r[25]+0x00000070u; WF32(ea,c->f[30]);} // 801DD76C
  cmps(c,0,(int32_t)c->r[24],4); // 801DD770
  c->r[25]=c->r[25]+0x00000004u; // 801DD774
  if (crb(c,0)) { IRQCHK(c); goto L_801DD720; } // 801DD778
  c->r[24]=0u+0x00000000u; // 801DD77C
  c->r[25]=0u+0x00000000u; // 801DD780
  goto L_801DD7A4; // 801DD784
L_801DD788:;
  c->r[5]=c->r[3]+c->r[25]; // 801DD788
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801DD78C
  c->r[4]=c->r[24]|c->r[24]; // 801DD790
  c->r[5]=c->r[5]+0x00000050u; // 801DD794
  c->lr=0x801DD79Cu; f_801ECC90(c); // 801DD798
  c->r[25]=c->r[25]+0x00000018u; // 801DD79C
  c->r[24]=c->r[24]+0x00000001u; // 801DD7A0
L_801DD7A4:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD7A4
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801DD7A8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801DD7AC
  if (crb(c,0)) { IRQCHK(c); goto L_801DD788; } // 801DD7B0
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD7B4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801DD7B8
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD7BC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801DD7C0
  c->r[0]=R32(c->r[29]+0x00000060u); // 801DD7C4
  W32(c->r[30]+0x00000024u,c->r[0]); // 801DD7C8
  c->r[0]=R8(c->r[29]+0x00000064u); // 801DD7CC
  W8(c->r[30]+0x00000028u,c->r[0]); // 801DD7D0
  c->r[0]=R16(c->r[29]+0x00000065u); // 801DD7D4
  W16(c->r[30]+0x00000029u,c->r[0]); // 801DD7D8
  c->r[0]=R8(c->r[29]+0x00000067u); // 801DD7DC
  W8(c->r[30]+0x0000002Bu,c->r[0]); // 801DD7E0
  c->r[0]=R8(c->r[29]+0x00000068u); // 801DD7E4
  W8(c->r[30]+0x00000034u,c->r[0]); // 801DD7E8
  c->r[30]=R32(c->r[30]+0x000000D4u); // 801DD7EC
L_801DD7F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DD7F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD6C4; } // 801DD7F4
  c->lr=0x801DD7FCu; f_801E5840(c); // 801DD7F8
  c->r[3]=c->r[3]+0x00000354u; // 801DD7FC
  c->lr=0x801DD804u; f_800CCE30(c); // 801DD800
L_801DD804:;
  c->r[11]=c->r[1]+0x00000050u; // 801DD804
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 801DD808
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 801DD80C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 801DD810
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 801DD814
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 801DD818
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 801DD81C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 801DD820
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 801DD824
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,27,ea,0,0);} // 801DD828
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[27]=RF64(ea);} // 801DD82C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,26,ea,0,0);} // 801DD830
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[26]=RF64(ea);} // 801DD834
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,25,ea,0,0);} // 801DD838
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[25]=RF64(ea);} // 801DD83C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,24,ea,0,0);} // 801DD840
  {uint32_t ea=c->r[1]+0x00000090u; c->f[24]=RF64(ea);} // 801DD844
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,23,ea,0,0);} // 801DD848
  {uint32_t ea=c->r[1]+0x00000080u; c->f[23]=RF64(ea);} // 801DD84C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,22,ea,0,0);} // 801DD850
  {uint32_t ea=c->r[1]+0x00000070u; c->f[22]=RF64(ea);} // 801DD854
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,21,ea,0,0);} // 801DD858
  {uint32_t ea=c->r[1]+0x00000060u; c->f[21]=RF64(ea);} // 801DD85C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,20,ea,0,0);} // 801DD860
  {uint32_t ea=c->r[1]+0x00000050u; c->f[20]=RF64(ea);} // 801DD864
  c->lr=0x801DD86Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DD868
  c->r[0]=R32(c->r[1]+0x00000114u); // 801DD86C
  c->lr=c->r[0]; // 801DD870
  c->r[1]=c->r[1]+0x00000110u; // 801DD874
  return; // 801DD878
}

// fn_801DD880
void f_801DD880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD880
  c->r[0]=c->lr; // 801DD884
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD88C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD890
  c->r[30]=c->r[3]|c->r[3]; // 801DD894
  c->lr=0x801DD89Cu; f_801E5840(c); // 801DD898
  c->r[3]=c->r[3]+0x00000354u; // 801DD89C
  c->lr=0x801DD8A4u; f_800CCD50(c); // 801DD8A0
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DD8A4
  goto L_801DD8B8; // 801DD8A8
L_801DD8AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801DD8AC
  c->lr=0x801DD8B4u; f_801D5DB0(c); // 801DD8B0
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DD8B4
L_801DD8B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DD8B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD8AC; } // 801DD8BC
  c->r[0]=0u+0x00000000u; // 801DD8C0
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801DD8C4
  c->lr=0x801DD8CCu; f_801E5840(c); // 801DD8C8
  c->r[3]=c->r[3]+0x00000354u; // 801DD8CC
  c->lr=0x801DD8D4u; f_800CCE30(c); // 801DD8D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD8D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD8D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD8DC
  c->lr=c->r[0]; // 801DD8E0
  c->r[1]=c->r[1]+0x00000010u; // 801DD8E4
  return; // 801DD8E8
}

// fn_801DD8F0
void f_801DD8F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD8F0
  c->r[0]=c->lr; // 801DD8F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD8F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD8FC
  c->r[31]=0u+0x802D0000u; // 801DD900
  c->r[31]=c->r[31]+0xFFFFF230u; // 801DD904
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD908
  c->r[30]=c->r[4]|c->r[4]; // 801DD90C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DD910
  c->r[29]=c->r[5]|c->r[5]; // 801DD914
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DD918
  c->r[28]=c->r[3]|c->r[3]; // 801DD91C
  c->lr=0x801DD924u; f_801E5840(c); // 801DD920
  c->r[3]=c->r[3]+0x00000354u; // 801DD924
  c->lr=0x801DD92Cu; f_800CCD50(c); // 801DD928
  cmps(c,0,(int32_t)c->r[28],0); // 801DD92C
  if (!crb(c,2)) { goto L_801DD948; } // 801DD930
  c->r[3]=c->r[31]+0x00000000u; // 801DD934
  c->r[5]=c->r[31]+0x000000A0u; // 801DD938
  c->r[4]=0u+0x0000023Bu; // 801DD93C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DD940
  c->lr=0x801DD948u; f_801F9770(c); // 801DD944
L_801DD948:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DD948
  if (!crb(c,2)) { goto L_801DD964; } // 801DD94C
  c->r[3]=c->r[31]+0x00000000u; // 801DD950
  c->r[5]=c->r[31]+0x000000CCu; // 801DD954
  c->r[4]=0u+0x0000023Cu; // 801DD958
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DD95C
  c->lr=0x801DD964u; f_801F9770(c); // 801DD960
L_801DD964:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DD964
  if (crb(c,2)) { goto L_801DD974; } // 801DD968
  cmps(c,0,(int32_t)c->r[30],2); // 801DD96C
  if (!crb(c,2)) { goto L_801DD97C; } // 801DD970
L_801DD974:;
  c->r[3]=c->r[28]|c->r[28]; // 801DD974
  c->lr=0x801DD97Cu; f_801D5DB0(c); // 801DD978
L_801DD97C:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801DD97C
  cmps(c,0,(int32_t)c->r[3],0); // 801DD980
  if (crb(c,2)) { goto L_801DD99C; } // 801DD984
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DD988
  c->r[4]=c->r[28]|c->r[28]; // 801DD98C
  c->r[12]=R32(c->r[12]+0x00000058u); // 801DD990
  c->ctr=c->r[12]; // 801DD994
  if (true) { c->lr=0x801DD99Cu; dispatch(c,c->ctr); } // 801DD998
L_801DD99C:;
  c->r[30]=R32(c->r[29]+0x000000C8u); // 801DD99C
  cmpu(c,0,c->r[30],c->r[28]); // 801DD9A0
  if (!crb(c,2)) { goto L_801DD9C0; } // 801DD9A4
  c->r[0]=R32(c->r[28]+0x000000D4u); // 801DD9A8
  W32(c->r[29]+0x000000C8u,c->r[0]); // 801DD9AC
  c->lr=0x801DD9B4u; f_801E5840(c); // 801DD9B0
  c->r[3]=c->r[3]+0x00000354u; // 801DD9B4
  c->lr=0x801DD9BCu; f_800CCE30(c); // 801DD9B8
  goto L_801DDA30; // 801DD9BC
L_801DD9C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DD9C0
  if (!crb(c,2)) { goto L_801DDA04; } // 801DD9C4
  c->r[3]=c->r[31]+0x00000000u; // 801DD9C8
  c->r[5]=c->r[31]+0x000000F8u; // 801DD9CC
  c->r[4]=0u+0x00000251u; // 801DD9D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DD9D4
  c->lr=0x801DD9DCu; f_801F9770(c); // 801DD9D8
  goto L_801DDA04; // 801DD9DC
L_801DD9E0:;
  cmpu(c,0,c->r[0],c->r[28]); // 801DD9E0
  if (!crb(c,2)) { goto L_801DDA00; } // 801DD9E4
  c->r[0]=R32(c->r[28]+0x000000D4u); // 801DD9E8
  W32(c->r[30]+0x000000D4u,c->r[0]); // 801DD9EC
  c->lr=0x801DD9F4u; f_801E5840(c); // 801DD9F0
  c->r[3]=c->r[3]+0x00000354u; // 801DD9F4
  c->lr=0x801DD9FCu; f_800CCE30(c); // 801DD9F8
  goto L_801DDA30; // 801DD9FC
L_801DDA00:;
  c->r[30]=c->r[0]|c->r[0]; // 801DDA00
L_801DDA04:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 801DDA04
  cmps(c,0,(int32_t)c->r[0],0); // 801DDA08
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD9E0; } // 801DDA0C
  c->r[3]=c->r[31]+0x00000000u; // 801DDA10
  c->r[5]=c->r[31]+0x00000120u; // 801DDA14
  c->r[4]=0u+0x0000025Au; // 801DDA18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DDA1C
  c->lr=0x801DDA24u; f_801F9770(c); // 801DDA20
  c->lr=0x801DDA28u; f_801E5840(c); // 801DDA24
  c->r[3]=c->r[3]+0x00000354u; // 801DDA28
  c->lr=0x801DDA30u; f_800CCE30(c); // 801DDA2C
L_801DDA30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DDA30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DDA34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DDA38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DDA3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DDA40
  c->lr=c->r[0]; // 801DDA44
  c->r[1]=c->r[1]+0x00000020u; // 801DDA48
  return; // 801DDA4C
}

// fn_801DDA50
void f_801DDA50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDA50
  c->r[0]=c->lr; // 801DDA54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDA58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDA5C
  c->r[31]=c->r[4]|c->r[4]; // 801DDA60
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DDA64
  c->r[30]=c->r[3]|c->r[3]; // 801DDA68
  c->lr=0x801DDA70u; f_801E5840(c); // 801DDA6C
  c->r[3]=c->r[3]+0x00000354u; // 801DDA70
  c->lr=0x801DDA78u; f_800CCD50(c); // 801DDA74
  cmps(c,0,(int32_t)c->r[31],0); // 801DDA78
  if (crb(c,2)) { goto L_801DDA9C; } // 801DDA7C
  cmps(c,0,(int32_t)c->r[31],3); // 801DDA80
  if (crb(c,2)) { goto L_801DDAA8; } // 801DDA84
  cmps(c,0,(int32_t)c->r[31],2); // 801DDA88
  if (crb(c,2)) { goto L_801DDAF8; } // 801DDA8C
  cmps(c,0,(int32_t)c->r[31],1); // 801DDA90
  if (crb(c,2)) { goto L_801DDB88; } // 801DDA94
  goto L_801DDB90; // 801DDA98
L_801DDA9C:;
  c->r[0]=0u+0x00000000u; // 801DDA9C
  W8(c->r[30]+0x00000048u,c->r[0]); // 801DDAA0
  goto L_801DDB90; // 801DDAA4
L_801DDAA8:;
  c->lr=0x801DDAACu; f_801E5840(c); // 801DDAA8
  c->r[3]=c->r[3]+0x00000354u; // 801DDAAC
  c->lr=0x801DDAB4u; f_800CCD50(c); // 801DDAB0
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DDAB4
  goto L_801DDAD0; // 801DDAB8
L_801DDABC:;
  c->r[3]=c->r[31]|c->r[31]; // 801DDABC
  c->lr=0x801DDAC4u; f_801D5DB0(c); // 801DDAC0
  c->r[3]=c->r[31]|c->r[31]; // 801DDAC4
  c->lr=0x801DDACCu; f_801D57E0(c); // 801DDAC8
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DDACC
L_801DDAD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DDAD0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DDABC; } // 801DDAD4
  c->r[0]=0u+0x00000000u; // 801DDAD8
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801DDADC
  c->lr=0x801DDAE4u; f_801E5840(c); // 801DDAE0
  c->r[3]=c->r[3]+0x00000354u; // 801DDAE4
  c->lr=0x801DDAECu; f_800CCE30(c); // 801DDAE8
  c->r[0]=0u+0x00000001u; // 801DDAEC
  W8(c->r[30]+0x00000048u,c->r[0]); // 801DDAF0
  goto L_801DDB90; // 801DDAF4
L_801DDAF8:;
  c->lr=0x801DDAFCu; f_801E5840(c); // 801DDAF8
  c->r[3]=c->r[3]+0x00000354u; // 801DDAFC
  c->lr=0x801DDB04u; f_800CCD50(c); // 801DDB00
  c->r[3]=c->r[30]|c->r[30]; // 801DDB04
  c->lr=0x801DDB0Cu; f_801DD2B0(c); // 801DDB08
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DDB0C
  goto L_801DDB2C; // 801DDB10
L_801DDB14:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801DDB14
  cmps(c,0,(int32_t)c->r[0],0); // 801DDB18
  if (crb(c,2)) { goto L_801DDB28; } // 801DDB1C
  c->r[3]=c->r[31]|c->r[31]; // 801DDB20
  c->lr=0x801DDB28u; f_801D56F0(c); // 801DDB24
L_801DDB28:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DDB28
L_801DDB2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DDB2C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DDB14; } // 801DDB30
  c->lr=0x801DDB38u; f_801E5840(c); // 801DDB34
  c->r[3]=c->r[3]+0x00000354u; // 801DDB38
  c->lr=0x801DDB40u; f_800CCE30(c); // 801DDB3C
  c->lr=0x801DDB44u; f_801E5840(c); // 801DDB40
  c->r[3]=c->r[3]+0x00000354u; // 801DDB44
  c->lr=0x801DDB4Cu; f_800CCD50(c); // 801DDB48
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801DDB4C
  goto L_801DDB60; // 801DDB50
L_801DDB54:;
  c->r[3]=c->r[31]|c->r[31]; // 801DDB54
  c->lr=0x801DDB5Cu; f_801D5DB0(c); // 801DDB58
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DDB5C
L_801DDB60:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DDB60
  if (!crb(c,2)) { IRQCHK(c); goto L_801DDB54; } // 801DDB64
  c->r[0]=0u+0x00000000u; // 801DDB68
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801DDB6C
  c->lr=0x801DDB74u; f_801E5840(c); // 801DDB70
  c->r[3]=c->r[3]+0x00000354u; // 801DDB74
  c->lr=0x801DDB7Cu; f_800CCE30(c); // 801DDB78
  c->r[0]=0u+0x00000001u; // 801DDB7C
  W8(c->r[30]+0x00000048u,c->r[0]); // 801DDB80
  goto L_801DDB90; // 801DDB84
L_801DDB88:;
  c->r[0]=0u+0x00000001u; // 801DDB88
  W8(c->r[30]+0x00000048u,c->r[0]); // 801DDB8C
L_801DDB90:;
  c->lr=0x801DDB94u; f_801E5840(c); // 801DDB90
  c->r[3]=c->r[3]+0x00000354u; // 801DDB94
  c->lr=0x801DDB9Cu; f_800CCE30(c); // 801DDB98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDB9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDBA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DDBA4
  c->lr=c->r[0]; // 801DDBA8
  c->r[1]=c->r[1]+0x00000010u; // 801DDBAC
  return; // 801DDBB0
}

// fn_801DDBC0
void f_801DDBC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDBC0
  c->r[0]=c->lr; // 801DDBC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DDBC8
  c->r[11]=c->r[1]+0x00000030u; // 801DDBCC
  c->lr=0x801DDBD4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDBD0
  c->r[26]=c->r[3]|c->r[3]; // 801DDBD4
  c->r[25]=c->r[4]|c->r[4]; // 801DDBD8
  c->r[24]=c->r[5]|c->r[5]; // 801DDBDC
  c->lr=0x801DDBE4u; f_801E5840(c); // 801DDBE0
  c->r[3]=c->r[3]+0x00000354u; // 801DDBE4
  c->lr=0x801DDBECu; f_800CCD50(c); // 801DDBE8
  c->r[3]=0u+0x55550000u; // 801DDBEC
  c->r[0]=0u-c->r[25]; // 801DDBF0
  c->r[4]=c->r[24]+0x00000002u; // 801DDBF4
  W8(c->r[26]+0x00000049u,c->r[25]); // 801DDBF8
  c->r[3]=c->r[3]+0x00005556u; // 801DDBFC
  c->r[31]=R32(c->r[26]+0x000000C8u); // 801DDC00
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[4])>>32); // 801DDC04
  c->r[28]=c->r[0]|c->r[25]; // 801DDC08
  c->r[25]=0u+0x802D0000u; // 801DDC0C
  c->r[26]=0u+0x802D0000u; // 801DDC10
  c->r[27]=0u+0x00010000u; // 801DDC14
  c->r[29]=0u+0x000000FFu; // 801DDC18
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDC1C
  c->r[30]=0u+0x00000000u; // 801DDC20
  c->r[24]=c->r[3]+c->r[0]; // 801DDC24
  goto L_801DDCB4; // 801DDC28
L_801DDC2C:;
  cmpu(c,0,c->r[24],0x0000FFFFu); // 801DDC2C
  c->r[0]=0u+0x00000000u; // 801DDC30
  if (crb(c,1)) { goto L_801DDC3C; } // 801DDC34
  c->r[0]=0u+0x00000001u; // 801DDC38
L_801DDC3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DDC3C
  if (!crb(c,2)) { goto L_801DDC64; } // 801DDC40
  c->r[6]=c->r[24]|c->r[24]; // 801DDC44
  c->r[3]=c->r[25]+0xFFFFF4F4u; // 801DDC48
  c->r[5]=c->r[26]+0xFFFFF4B0u; // 801DDC4C
  c->r[8]=c->r[27]+0xFFFFFFFFu; // 801DDC50
  c->r[4]=0u+0x0000008Au; // 801DDC54
  c->r[7]=0u+0x00000000u; // 801DDC58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DDC5C
  c->lr=0x801DDC64u; f_801F9770(c); // 801DDC60
L_801DDC64:;
  c->r[4]=R16(c->r[31]+0x000000A2u); // 801DDC64
  c->r[5]=R16(c->r[31]+0x000000A4u); // 801DDC68
  cmpu(c,0,c->r[5],c->r[4]); // 801DDC6C
  if (crb(c,0)) { goto L_801DDC7C; } // 801DDC70
  c->r[0]=R8(c->r[31]+0x000000A1u); // 801DDC74
  goto L_801DDC98; // 801DDC78
L_801DDC7C:;
  c->r[3]=R8(c->r[31]+0x000000A0u); // 801DDC7C
  c->r[0]=R8(c->r[31]+0x000000A1u); // 801DDC80
  c->r[0]=c->r[0]-c->r[3]; // 801DDC84
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801DDC88
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801DDC8C
  c->r[0]=c->r[3]+c->r[0]; // 801DDC90
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DDC94
L_801DDC98:;
  W8(c->r[31]+0x000000A0u,c->r[0]); // 801DDC98
  c->r[0]=sraw(c,c->r[28],31); // 801DDC9C
  c->r[0]=c->r[29]&~c->r[0]; // 801DDCA0
  W8(c->r[31]+0x000000A1u,c->r[0]); // 801DDCA4
  W16(c->r[31]+0x000000A2u,c->r[24]); // 801DDCA8
  W16(c->r[31]+0x000000A4u,c->r[30]); // 801DDCAC
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801DDCB0
L_801DDCB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DDCB4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DDC2C; } // 801DDCB8
  c->lr=0x801DDCC0u; f_801E5840(c); // 801DDCBC
  c->r[3]=c->r[3]+0x00000354u; // 801DDCC0
  c->lr=0x801DDCC8u; f_800CCE30(c); // 801DDCC4
  c->r[11]=c->r[1]+0x00000030u; // 801DDCC8
  c->lr=0x801DDCD0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDCCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DDCD0
  c->lr=c->r[0]; // 801DDCD4
  c->r[1]=c->r[1]+0x00000030u; // 801DDCD8
  return; // 801DDCDC
}

// fn_801DDCE0
void f_801DDCE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801DDCE0
  return; // 801DDCE4
}

// fn_801DDCF0
void f_801DDCF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDCF0
  c->r[0]=c->lr; // 801DDCF4
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDCF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DDCFC
  fcmp(c,0,c->f[1],c->f[0]); // 801DDD00
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801DDD04
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801DDD08
  c->f[31]=c->f[1]; // 801DDD0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDD10
  c->r[31]=c->r[3]|c->r[3]; // 801DDD14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DDD18
  if (crb(c,2)) { goto L_801DDD3C; } // 801DDD1C
  c->r[3]=0u+0x802D0000u; // 801DDD20
  c->r[5]=0u+0x802D0000u; // 801DDD24
  c->r[3]=c->r[3]+0xFFFFF230u; // 801DDD28
  c->r[4]=0u+0x0000028Du; // 801DDD2C
  c->r[5]=c->r[5]+0xFFFFF36Cu; // 801DDD30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DDD34
  c->lr=0x801DDD3Cu; f_801F9770(c); // 801DDD38
L_801DDD3C:;
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[31]);} // 801DDD3C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801DDD40
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801DDD44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDD48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DDD4C
  c->lr=c->r[0]; // 801DDD50
  c->r[1]=c->r[1]+0x00000020u; // 801DDD54
  return; // 801DDD58
}

// fn_801DDD60
void f_801DDD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801DDD60
  return; // 801DDD64
}

// fn_801DDD70
void f_801DDD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801DDD70
  return; // 801DDD74
}

// fn_801DDD80
void f_801DDD80(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801DDD80
  return; // 801DDD84
}

// fn_801DDD90
void f_801DDD90(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801DDD90
  return; // 801DDD94
}

// fn_801DDDA0
void f_801DDDA0(Ctx* __restrict c) {
  W8(c->r[3]+0x0000009Au,c->r[4]); // 801DDDA0
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 801DDDA4
  return; // 801DDDA8
}

// fn_801DDDB0
void f_801DDDB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 801DDDB0
  return; // 801DDDB4
}

// fn_801DDDC0
void f_801DDDC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 801DDDC0
  return; // 801DDDC4
}

// fn_801DDDD0
void f_801DDDD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDDD0
  c->r[0]=c->lr; // 801DDDD4
  cmpu(c,0,c->r[4],0x00000010u); // 801DDDD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDDDC
  c->r[0]=0u+0x00000000u; // 801DDDE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDDE4
  c->r[31]=c->r[4]|c->r[4]; // 801DDDE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DDDEC
  c->r[30]=c->r[3]|c->r[3]; // 801DDDF0
  if (crb(c,1)) { goto L_801DDDFC; } // 801DDDF4
  c->r[0]=0u+0x00000001u; // 801DDDF8
L_801DDDFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DDDFC
  if (!crb(c,2)) { goto L_801DDE2C; } // 801DDE00
  c->r[3]=0u+0x802D0000u; // 801DDE04
  c->r[5]=0u+0x802D0000u; // 801DDE08
  c->r[6]=c->r[31]|c->r[31]; // 801DDE0C
  c->r[4]=0u+0x000002E3u; // 801DDE10
  c->r[3]=c->r[3]+0xFFFFF230u; // 801DDE14
  c->r[5]=c->r[5]+0xFFFFF3CCu; // 801DDE18
  c->r[7]=0u+0x00000000u; // 801DDE1C
  c->r[8]=0u+0x00000010u; // 801DDE20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DDE24
  c->lr=0x801DDE2Cu; f_801F9770(c); // 801DDE28
L_801DDE2C:;
  cmps(c,0,(int32_t)c->r[31],16); // 801DDE2C
  if (!crb(c,0)) { goto L_801DDE44; } // 801DDE30
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801DDE34
  c->r[3]=c->r[30]+c->r[0]; // 801DDE38
  c->r[3]=c->r[3]+0x000000A4u; // 801DDE3C
  goto L_801DDE48; // 801DDE40
L_801DDE44:;
  c->r[3]=0u+0x00000000u; // 801DDE44
L_801DDE48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDE48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDE4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DDE50
  c->lr=c->r[0]; // 801DDE54
  c->r[1]=c->r[1]+0x00000010u; // 801DDE58
  return; // 801DDE5C
}

// fn_801DDE60
void f_801DDE60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDE60
  c->r[0]=c->lr; // 801DDE64
  W32(c->r[1]+0x00000084u,c->r[0]); // 801DDE68
  c->r[11]=c->r[1]+0x00000070u; // 801DDE6C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801DDE70
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801DDE74
  c->lr=0x801DDE7Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDE78
  c->r[0]=0u+0x43300000u; // 801DDE7C
  c->r[30]=0u+0x802D0000u; // 801DDE80
  W32(c->r[1]+0x00000030u,c->r[0]); // 801DDE84
  c->r[24]=c->r[3]|c->r[3]; // 801DDE88
  c->r[25]=c->r[4]|c->r[4]; // 801DDE8C
  c->r[26]=c->r[5]|c->r[5]; // 801DDE90
  W32(c->r[1]+0x00000038u,c->r[0]); // 801DDE94
  c->r[27]=c->r[6]|c->r[6]; // 801DDE98
  c->r[28]=c->r[7]|c->r[7]; // 801DDE9C
  c->r[30]=c->r[30]+0xFFFFF230u; // 801DDEA0
  c->lr=0x801DDEA8u; f_801E5840(c); // 801DDEA4
  c->r[3]=c->r[3]+0x00000354u; // 801DDEA8
  c->lr=0x801DDEB0u; f_800CCD50(c); // 801DDEAC
  cmpu(c,0,c->r[25],0x0000007Fu); // 801DDEB0
  c->r[0]=0u+0x00000000u; // 801DDEB4
  if (crb(c,1)) { goto L_801DDEC0; } // 801DDEB8
  c->r[0]=0u+0x00000001u; // 801DDEBC
L_801DDEC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DDEC0
  if (!crb(c,2)) { goto L_801DDEE8; } // 801DDEC4
  c->r[6]=c->r[25]|c->r[25]; // 801DDEC8
  c->r[3]=c->r[30]+0x00000000u; // 801DDECC
  c->r[5]=c->r[30]+0x000001D8u; // 801DDED0
  c->r[4]=0u+0x00000304u; // 801DDED4
  c->r[7]=0u+0x00000000u; // 801DDED8
  c->r[8]=0u+0x0000007Fu; // 801DDEDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DDEE0
  c->lr=0x801DDEE8u; f_801F9770(c); // 801DDEE4
L_801DDEE8:;
  cmpu(c,0,c->r[26],0x0000007Fu); // 801DDEE8
  c->r[0]=0u+0x00000000u; // 801DDEEC
  if (crb(c,1)) { goto L_801DDEF8; } // 801DDEF0
  c->r[0]=0u+0x00000001u; // 801DDEF4
L_801DDEF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DDEF8
  if (!crb(c,2)) { goto L_801DDF20; } // 801DDEFC
  c->r[6]=c->r[26]|c->r[26]; // 801DDF00
  c->r[3]=c->r[30]+0x00000000u; // 801DDF04
  c->r[5]=c->r[30]+0x00000210u; // 801DDF08
  c->r[4]=0u+0x00000305u; // 801DDF0C
  c->r[7]=0u+0x00000000u; // 801DDF10
  c->r[8]=0u+0x0000007Fu; // 801DDF14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DDF18
  c->lr=0x801DDF20u; f_801F9770(c); // 801DDF1C
L_801DDF20:;
  c->r[0]=R8(c->r[24]+0x00000089u); // 801DDF20
  c->r[3]=0u+0x81020000u; // 801DDF24
  c->r[3]=c->r[3]+0x00000409u; // 801DDF28
  cmps(c,0,(int32_t)c->r[28],0); // 801DDF2C
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[0]); // 801DDF30
  c->r[31]=R32(c->r[24]+0x000000C4u); // 801DDF34
  c->r[29]=0u+0x00000000u; // 801DDF38
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801DDF3C
  c->r[0]=c->r[3]+c->r[0]; // 801DDF40
  c->r[0]=sraw(c,c->r[0],6); // 801DDF44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DDF48
  c->r[26]=c->r[0]+c->r[3]; // 801DDF4C
  if (crb(c,2)) { goto L_801DDF8C; } // 801DDF50
  c->r[29]=R32(c->r[24]+0x000000C8u); // 801DDF54
  cmps(c,0,(int32_t)c->r[29],0); // 801DDF58
  if (crb(c,2)) { goto L_801DDF8C; } // 801DDF5C
  c->r[0]=c->r[26]^0x80000000u; // 801DDF60
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DDF64
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 801DDF68
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[2]=RF64(ea);} // 801DDF6C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 801DDF70
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDF74
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DDF78
  W32(c->r[29]+0x000000A8u,c->r[0]); // 801DDF7C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DDF80
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801DDF84
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 801DDF88
L_801DDF8C:;
  c->r[0]=R8(c->r[24]+0x00000027u); // 801DDF8C
  cmps(c,0,(int32_t)c->r[0],0); // 801DDF90
  if (crb(c,2)) { goto L_801DDFF0; } // 801DDF94
  c->r[29]=R32(c->r[24]+0x000000C8u); // 801DDF98
  cmps(c,0,(int32_t)c->r[29],0); // 801DDF9C
  if (crb(c,2)) { goto L_801DDFF0; } // 801DDFA0
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DDFA4
  cmps(c,0,(int32_t)c->r[0],4); // 801DDFA8
  if (!crb(c,2)) { goto L_801DDFC0; } // 801DDFAC
  c->r[3]=c->r[29]|c->r[29]; // 801DDFB0
  c->lr=0x801DDFB8u; f_801D57E0(c); // 801DDFB4
  c->r[29]=0u+0x00000000u; // 801DDFB8
  goto L_801DDFF0; // 801DDFBC
L_801DDFC0:;
  c->r[0]=c->r[26]^0x80000000u; // 801DDFC0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801DDFC4
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 801DDFC8
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[2]=RF64(ea);} // 801DDFCC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 801DDFD0
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDFD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DDFD8
  W32(c->r[29]+0x000000A8u,c->r[0]); // 801DDFDC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DDFE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801DDFE4
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 801DDFE8
  W32(c->r[29]+0x000000B0u,c->r[27]); // 801DDFEC
L_801DDFF0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DDFF0
  if (!crb(c,2)) { goto L_801DE11C; } // 801DDFF4
  c->r[3]=0u+0x80240000u; // 801DDFF8
  {uint32_t ea=c->r[3]+0xFFFF8570u; c->r[11]=R32(ea); c->r[3]=ea;} // 801DDFFC
  W32(c->r[1]+0x00000008u,c->r[11]); // 801DE000
  cmps(c,0,(int32_t)c->r[28],0); // 801DE004
  c->r[10]=R32(c->r[3]+0x00000004u); // 801DE008
  c->r[0]=0u+0xFFFFFFFFu; // 801DE00C
  c->r[9]=R32(c->r[3]+0x00000008u); // 801DE010
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 801DE014
  c->r[7]=R32(c->r[3]+0x00000010u); // 801DE018
  c->r[6]=R32(c->r[3]+0x00000014u); // 801DE01C
  c->r[5]=R32(c->r[3]+0x00000018u); // 801DE020
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801DE024
  c->r[3]=R32(c->r[3]+0x00000020u); // 801DE028
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 801DE02C
  W32(c->r[1]+0x00000010u,c->r[9]); // 801DE030
  W32(c->r[1]+0x00000014u,c->r[8]); // 801DE034
  W32(c->r[1]+0x00000018u,c->r[7]); // 801DE038
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 801DE03C
  W32(c->r[1]+0x00000020u,c->r[5]); // 801DE040
  W32(c->r[1]+0x00000024u,c->r[4]); // 801DE044
  W32(c->r[1]+0x00000028u,c->r[3]); // 801DE048
  c->r[3]=R32(c->r[24]+0x00000054u); // 801DE04C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DE050
  W32(c->r[1]+0x0000000Cu,c->r[25]); // 801DE054
  W32(c->r[1]+0x00000010u,c->r[26]); // 801DE058
  if (!crb(c,2)) { goto L_801DE064; } // 801DE05C
  c->r[0]=c->r[27]|c->r[27]; // 801DE060
L_801DE064:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE064
  c->r[5]=c->r[1]+0x00000008u; // 801DE068
  c->r[0]=R8(c->r[24]+0x0000008Bu); // 801DE06C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DE070
  W32(c->r[1]+0x00000018u,c->r[0]); // 801DE074
  c->r[3]=R8(c->r[31]+0x000000E9u); // 801DE078
  c->r[0]=R8(c->r[24]+0x0000008Du); // 801DE07C
  c->r[0]=c->r[3]+c->r[0]; // 801DE080
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DE084
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801DE088
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801DE08C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801DE090
  W32(c->r[1]+0x00000028u,c->r[24]); // 801DE094
  c->r[4]=R32(c->r[24]+0x00000050u); // 801DE098
  c->lr=0x801DE0A0u; f_801DBF60(c); // 801DE09C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE0A0
  c->r[29]=c->r[3]|c->r[3]; // 801DE0A4
  if (!crb(c,2)) { goto L_801DE0C0; } // 801DE0A8
  c->lr=0x801DE0B0u; f_801E5840(c); // 801DE0AC
  c->r[3]=c->r[3]+0x00000354u; // 801DE0B0
  c->lr=0x801DE0B8u; f_800CCE30(c); // 801DE0B4
  c->r[3]=0u+0x00000000u; // 801DE0B8
  goto L_801DE2F4; // 801DE0BC
L_801DE0C0:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801DE0C0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE0C4
  if (!crb(c,1)) { goto L_801DE0F8; } // 801DE0C8
  c->r[26]=R32(c->r[24]+0x000000C8u); // 801DE0CC
  goto L_801DE0F0; // 801DE0D0
L_801DE0D4:;
  c->r[3]=R32(c->r[26]+0x000000BCu); // 801DE0D4
  c->r[0]=R32(c->r[29]+0x000000BCu); // 801DE0D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DE0DC
  if (!crb(c,2)) { goto L_801DE0EC; } // 801DE0E0
  c->r[3]=c->r[26]|c->r[26]; // 801DE0E4
  c->lr=0x801DE0ECu; f_801D56F0(c); // 801DE0E8
L_801DE0EC:;
  c->r[26]=R32(c->r[26]+0x000000D4u); // 801DE0EC
L_801DE0F0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801DE0F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE0D4; } // 801DE0F4
L_801DE0F8:;
  c->lr=0x801DE0FCu; f_801E5840(c); // 801DE0F8
  c->r[3]=c->r[3]+0x00000354u; // 801DE0FC
  c->lr=0x801DE104u; f_800CCD50(c); // 801DE100
  c->r[0]=R32(c->r[24]+0x000000C8u); // 801DE104
  W32(c->r[29]+0x000000D4u,c->r[0]); // 801DE108
  W32(c->r[24]+0x000000C8u,c->r[29]); // 801DE10C
  c->lr=0x801DE114u; f_801E5840(c); // 801DE110
  c->r[3]=c->r[3]+0x00000354u; // 801DE114
  c->lr=0x801DE11Cu; f_800CCE30(c); // 801DE118
L_801DE11C:;
  c->r[4]=R8(c->r[24]+0x00000090u); // 801DE11C
  cmpu(c,0,c->r[4],0x0000007Fu); // 801DE120
  if (crb(c,1)) { goto L_801DE130; } // 801DE124
  c->r[3]=c->r[29]|c->r[29]; // 801DE128
  c->lr=0x801DE130u; f_801D6660(c); // 801DE12C
L_801DE130:;
  c->r[4]=R8(c->r[24]+0x00000091u); // 801DE130
  cmpu(c,0,c->r[4],0x0000007Fu); // 801DE134
  if (crb(c,1)) { goto L_801DE144; } // 801DE138
  c->r[3]=c->r[29]|c->r[29]; // 801DE13C
  c->lr=0x801DE144u; f_801D6780(c); // 801DE140
L_801DE144:;
  c->r[4]=R8(c->r[24]+0x00000092u); // 801DE144
  cmpu(c,0,c->r[4],0x0000007Fu); // 801DE148
  if (crb(c,1)) { goto L_801DE158; } // 801DE14C
  c->r[3]=c->r[29]|c->r[29]; // 801DE150
  c->lr=0x801DE158u; f_801D68D0(c); // 801DE154
L_801DE158:;
  c->r[4]=R8(c->r[24]+0x00000093u); // 801DE158
  cmpu(c,0,c->r[4],0x0000007Fu); // 801DE15C
  if (crb(c,1)) { goto L_801DE16C; } // 801DE160
  c->r[3]=c->r[29]|c->r[29]; // 801DE164
  c->lr=0x801DE16Cu; f_801D6950(c); // 801DE168
L_801DE16C:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+0x00000094u); // 801DE16C
  cmps(c,0,(int32_t)c->r[4],127); // 801DE170
  if (crb(c,1)) { goto L_801DE180; } // 801DE174
  c->r[3]=c->r[29]|c->r[29]; // 801DE178
  c->lr=0x801DE180u; f_801D66F0(c); // 801DE17C
L_801DE180:;
  c->r[0]=R8(c->r[24]+0x0000004Bu); // 801DE180
  {uint32_t ea=c->r[24]+0x0000006Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801DE184
  cmps(c,0,(int32_t)c->r[0],0); // 801DE188
  if (crb(c,2)) { goto L_801DE1B0; } // 801DE18C
  c->r[0]=R8(c->r[24]+0x0000008Eu); // 801DE190
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[1]=RF64(ea);} // 801DE194
  c->r[0]=c->r[0]-c->r[25]; // 801DE198
  c->r[0]=c->r[0]^0x80000000u; // 801DE19C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DE1A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801DE1A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801DE1A8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801DE1AC
L_801DE1B0:;
  c->r[0]=R8(c->r[24]+0x0000008Fu); // 801DE1B0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE1B4
  if (!crb(c,2)) { goto L_801DE1F0; } // 801DE1B8
  cmps(c,0,(int32_t)c->r[27],0); // 801DE1BC
  if (!crb(c,2)) { goto L_801DE1D8; } // 801DE1C0
  c->r[3]=c->r[30]+0x00000000u; // 801DE1C4
  c->r[5]=c->r[30]+0x00000254u; // 801DE1C8
  c->r[4]=0u+0x0000037Au; // 801DE1CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE1D0
  c->lr=0x801DE1D8u; f_801F9810(c); // 801DE1D4
L_801DE1D8:;
  c->f[1]=c->f[31]; // 801DE1D8
  c->r[3]=c->r[29]|c->r[29]; // 801DE1DC
  c->r[4]=c->r[27]|c->r[27]; // 801DE1E0
  c->r[5]=0u+0x00000000u; // 801DE1E4
  c->lr=0x801DE1ECu; f_801D5950(c); // 801DE1E8
  goto L_801DE250; // 801DE1EC
L_801DE1F0:;
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE1F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 801DE1F4
  fcmp(c,0,c->f[31],c->f[0]); // 801DE1F8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DE1FC
  if (!crb(c,2)) { goto L_801DE20C; } // 801DE200
  c->f[3]=c->f[31]; // 801DE204
  goto L_801DE210; // 801DE208
L_801DE20C:;
  c->f[3]=-c->f[31]; // 801DE20C
L_801DE210:;
  c->r[0]=c->r[0]^0x80000000u; // 801DE210
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801DE214
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[2]=RF64(ea);} // 801DE218
  c->f[1]=c->f[31]; // 801DE21C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 801DE220
  c->r[3]=c->r[29]|c->r[29]; // 801DE224
  c->r[5]=0u+0x00000001u; // 801DE228
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801DE22C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 801DE230
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DE234
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 801DE238
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DE23C
  c->r[4]=sraw(c,c->r[0],5); // 801DE240
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801DE244
  c->r[4]=c->r[0]+c->r[4]; // 801DE248
  c->lr=0x801DE250u; f_801D5950(c); // 801DE24C
L_801DE250:;
  W8(c->r[24]+0x0000008Eu,c->r[25]); // 801DE250
  c->r[3]=R8(c->r[24]+0x00000049u); // 801DE254
  c->r[5]=R16(c->r[29]+0x000000A2u); // 801DE258
  c->r[4]=R16(c->r[29]+0x000000A4u); // 801DE25C
  c->r[0]=0u-c->r[3]; // 801DE260
  c->r[0]=c->r[0]|c->r[3]; // 801DE264
  cmpu(c,0,c->r[4],c->r[5]); // 801DE268
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DE26C
  if (crb(c,0)) { goto L_801DE27C; } // 801DE270
  c->r[4]=R8(c->r[29]+0x000000A1u); // 801DE274
  goto L_801DE298; // 801DE278
L_801DE27C:;
  c->r[6]=R8(c->r[29]+0x000000A0u); // 801DE27C
  c->r[0]=R8(c->r[29]+0x000000A1u); // 801DE280
  c->r[0]=c->r[0]-c->r[6]; // 801DE284
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801DE288
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801DE28C
  c->r[0]=c->r[6]+c->r[0]; // 801DE290
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801DE294
L_801DE298:;
  c->r[0]=0u-c->r[3]; // 801DE298
  W8(c->r[29]+0x000000A0u,c->r[4]); // 801DE29C
  c->r[0]=c->r[0]|c->r[3]; // 801DE2A0
  c->r[3]=0u+0x000000FFu; // 801DE2A4
  c->r[4]=sraw(c,c->r[0],31); // 801DE2A8
  c->r[3]=c->r[3]&~c->r[4]; // 801DE2AC
  W8(c->r[29]+0x000000A1u,c->r[3]); // 801DE2B0
  c->r[0]=0u+0x00000000u; // 801DE2B4
  W16(c->r[29]+0x000000A2u,c->r[0]); // 801DE2B8
  W16(c->r[29]+0x000000A4u,c->r[0]); // 801DE2BC
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801DE2C0
  c->r[0]=R8(c->r[3]+0x000000CFu); // 801DE2C4
  W8(c->r[29]+0x00000039u,c->r[0]); // 801DE2C8
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801DE2CC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801DE2D0
  W32(c->r[29]+0x000000B4u,c->r[0]); // 801DE2D4
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801DE2D8
  c->r[0]=R32(c->r[3]+0x00000030u); // 801DE2DC
  W32(c->r[29]+0x000000B8u,c->r[0]); // 801DE2E0
  c->lr=0x801DE2E8u; f_801E5840(c); // 801DE2E4
  c->r[3]=c->r[3]+0x00000354u; // 801DE2E8
  c->lr=0x801DE2F0u; f_800CCE30(c); // 801DE2EC
  c->r[3]=c->r[29]|c->r[29]; // 801DE2F0
L_801DE2F4:;
  c->r[11]=c->r[1]+0x00000070u; // 801DE2F4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801DE2F8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801DE2FC
  c->lr=0x801DE304u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DE300
  c->r[0]=R32(c->r[1]+0x00000084u); // 801DE304
  c->lr=c->r[0]; // 801DE308
  c->r[1]=c->r[1]+0x00000080u; // 801DE30C
  return; // 801DE310
}

// fn_801DE320
void f_801DE320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE320
  c->r[0]=c->lr; // 801DE324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE32C
  c->r[31]=c->r[4]|c->r[4]; // 801DE330
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE334
  c->r[30]=c->r[3]|c->r[3]; // 801DE338
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DE33C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE340
  if (!crb(c,2)) { goto L_801DE364; } // 801DE344
  c->r[3]=0u+0x802D0000u; // 801DE348
  c->r[5]=0u+0x802D0000u; // 801DE34C
  c->r[3]=c->r[3]+0xFFFFF588u; // 801DE350
  c->r[4]=0u+0x000000C2u; // 801DE354
  c->r[5]=c->r[5]+0xFFFFF558u; // 801DE358
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE35C
  c->lr=0x801DE364u; f_801F9770(c); // 801DE360
L_801DE364:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DE364
  c->r[4]=c->r[31]|c->r[31]; // 801DE368
  c->lr=0x801DE370u; f_801DE4C0(c); // 801DE36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE374
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE378
  c->lr=c->r[0]; // 801DE37C
  c->r[1]=c->r[1]+0x00000010u; // 801DE380
  return; // 801DE384
}

// fn_801DE390
void f_801DE390(Ctx* __restrict c) {
  c->r[5]=0u+0x802D0000u; // 801DE390
  c->r[4]=0u+0x00000000u; // 801DE394
  c->r[5]=c->r[5]+0xFFFFF600u; // 801DE398
  c->r[0]=0u+0x0000002Fu; // 801DE39C
  W32(c->r[3]+0x00000000u,c->r[5]); // 801DE3A0
  W32(c->r[3]+0x00000004u,c->r[4]); // 801DE3A4
  W8(c->r[3]+0x00000008u,c->r[0]); // 801DE3A8
  W8(c->r[3]+0x00000009u,c->r[4]); // 801DE3AC
  return; // 801DE3B0
}

// fn_801DE3C0
void f_801DE3C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE3C0
  c->r[0]=c->lr; // 801DE3C4
  cmps(c,0,(int32_t)c->r[3],0); // 801DE3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE3D0
  c->r[31]=c->r[3]|c->r[3]; // 801DE3D4
  if (crb(c,2)) { goto L_801DE3E8; } // 801DE3D8
  cmps(c,0,(int32_t)c->r[4],0); // 801DE3DC
  if (!crb(c,1)) { goto L_801DE3E8; } // 801DE3E0
  c->lr=0x801DE3E8u; f_800B9AD0(c); // 801DE3E4
L_801DE3E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801DE3E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE3EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE3F0
  c->lr=c->r[0]; // 801DE3F4
  c->r[1]=c->r[1]+0x00000010u; // 801DE3F8
  return; // 801DE3FC
}

// fn_801DE400
void f_801DE400(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE400
  c->r[0]=0u-c->r[3]; // 801DE404
  c->r[0]=c->r[0]|c->r[3]; // 801DE408
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DE40C
  return; // 801DE410
}

// fn_801DE420
void f_801DE420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE420
  c->r[0]=c->lr; // 801DE424
  cmps(c,0,(int32_t)c->r[4],0); // 801DE428
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE42C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE430
  c->r[31]=c->r[4]|c->r[4]; // 801DE434
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE438
  c->r[30]=c->r[3]|c->r[3]; // 801DE43C
  if (!crb(c,2)) { goto L_801DE460; } // 801DE440
  c->r[3]=0u+0x802D0000u; // 801DE444
  c->r[5]=0u+0x802D0000u; // 801DE448
  c->r[3]=c->r[3]+0xFFFFF5A0u; // 801DE44C
  c->r[4]=0u+0x00000046u; // 801DE450
  c->r[5]=c->r[5]+0xFFFFF5B8u; // 801DE454
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE458
  c->lr=0x801DE460u; f_801F9770(c); // 801DE45C
L_801DE460:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 801DE460
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE464
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE468
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE46C
  c->lr=c->r[0]; // 801DE470
  c->r[1]=c->r[1]+0x00000010u; // 801DE474
  return; // 801DE478
}

// fn_801DE480
void f_801DE480(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801DE480
  c->r[0]=0u+0x0000002Fu; // 801DE484
  W32(c->r[3]+0x00000004u,c->r[4]); // 801DE488
  W8(c->r[3]+0x00000008u,c->r[0]); // 801DE48C
  W8(c->r[3]+0x00000009u,c->r[4]); // 801DE490
  return; // 801DE494
}

// fn_801DE4A0
void f_801DE4A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE4A0
  f_801DFA50(c); return; // 801DE4A4
}

// fn_801DE4B0
void f_801DE4B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE4B0
  f_801DFAC0(c); return; // 801DE4B4
}

// fn_801DE4C0
void f_801DE4C0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE4C0
  c->r[5]=c->r[4]|c->r[4]; // 801DE4C4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801DE4C8
  f_801DFF10(c); return; // 801DE4CC
}

// fn_801DE4D0
void f_801DE4D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE4D0
  f_801DEDE0(c); return; // 801DE4D4
}

// fn_801DE4E0
void f_801DE4E0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE4E0
  f_801DEF30(c); return; // 801DE4E4
}

// fn_801DE4F0
void f_801DE4F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE4F0
  f_801DF0B0(c); return; // 801DE4F4
}

// fn_801DE500
void f_801DE500(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE500
  f_801DF1C0(c); return; // 801DE504
}

// fn_801DE510
void f_801DE510(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE510
  f_801DF2F0(c); return; // 801DE514
}

// fn_801DE520
void f_801DE520(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE520
  f_801DF4F0(c); return; // 801DE524
}

// fn_801DE530
void f_801DE530(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE530
  f_801DF990(c); return; // 801DE534
}

// fn_801DE540
void f_801DE540(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE540
  f_801DF3F0(c); return; // 801DE544
}

// fn_801DE550
void f_801DE550(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE550
  f_801DF600(c); return; // 801DE554
}

// fn_801DE560
void f_801DE560(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE560
  f_801DF7B0(c); return; // 801DE564
}

// fn_801DE570
void f_801DE570(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE570
  f_801DFB40(c); return; // 801DE574
}

// fn_801DE580
void f_801DE580(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE580
  f_801DFBB0(c); return; // 801DE584
}

// fn_801DE590
void f_801DE590(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE590
  f_801DFD50(c); return; // 801DE594
}

// fn_801DE5A0
void f_801DE5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE5A0
  c->r[0]=c->lr; // 801DE5A4
  W32(c->r[1]+0x00000274u,c->r[0]); // 801DE5A8
  c->r[11]=c->r[1]+0x00000270u; // 801DE5AC
  c->lr=0x801DE5B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DE5B0
  c->r[29]=c->r[3]|c->r[3]; // 801DE5B4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DE5B8
  c->r[30]=c->r[5]|c->r[5]; // 801DE5BC
  c->r[25]=c->r[4]|c->r[4]; // 801DE5C0
  c->r[31]=c->r[6]|c->r[6]; // 801DE5C4
  c->r[5]=c->r[1]+0x00000010u; // 801DE5C8
  c->lr=0x801DE5D0u; f_801DFBB0(c); // 801DE5CC
  cmps(c,0,(int32_t)c->r[3],0); // 801DE5D0
  if (!crb(c,2)) { goto L_801DE5E0; } // 801DE5D4
  c->r[3]=0u+0x00000000u; // 801DE5D8
  goto L_801DE7F8; // 801DE5DC
L_801DE5E0:;
  c->r[26]=R32(c->r[1]+0x00000018u); // 801DE5E0
  cmps(c,0,(int32_t)c->r[26],0); // 801DE5E4
  if (crb(c,2)) { goto L_801DE6A0; } // 801DE5E8
  c->r[0]=R8(c->r[26]+0x00000000u); // 801DE5EC
  c->r[27]=R32(c->r[1]+0x00000010u); // 801DE5F0
  cmps(c,0,(int32_t)c->r[0],47); // 801DE5F4
  if (!crb(c,2)) { goto L_801DE600; } // 801DE5F8
  goto L_801DE674; // 801DE5FC
L_801DE600:;
  c->r[3]=c->r[26]|c->r[26]; // 801DE600
  c->lr=0x801DE608u; f_80216B70(c); // 801DE604
  c->r[28]=c->r[3]|c->r[3]; // 801DE608
  c->r[3]=c->r[29]+0x00000008u; // 801DE60C
  c->lr=0x801DE614u; f_80216B70(c); // 801DE610
  c->r[0]=c->r[28]+c->r[3]; // 801DE614
  c->r[5]=c->r[3]|c->r[3]; // 801DE618
  cmpu(c,0,c->r[0],0x00000100u); // 801DE61C
  if (crb(c,0)) { goto L_801DE650; } // 801DE620
  c->r[3]=0u+0x802D0000u; // 801DE624
  c->r[5]=0u+0x802D0000u; // 801DE628
  c->r[7]=c->r[26]|c->r[26]; // 801DE62C
  c->r[6]=c->r[29]+0x00000008u; // 801DE630
  c->r[3]=c->r[3]+0xFFFFF5A0u; // 801DE634
  c->r[5]=c->r[5]+0xFFFFF5E4u; // 801DE638
  c->r[4]=0u+0x0000015Du; // 801DE63C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE640
  c->lr=0x801DE648u; f_801F9810(c); // 801DE644
  c->r[3]=0u+0x00000000u; // 801DE648
  goto L_801DE7F8; // 801DE64C
L_801DE650:;
  c->r[3]=c->r[1]+0x00000150u; // 801DE650
  c->r[4]=c->r[29]+0x00000008u; // 801DE654
  c->r[5]=c->r[5]+0x00000001u; // 801DE658
  c->lr=0x801DE660u; f_8022004C(c); // 801DE65C
  c->r[4]=c->r[26]|c->r[26]; // 801DE660
  c->r[3]=c->r[1]+0x00000150u; // 801DE664
  c->r[5]=c->r[28]+0x00000001u; // 801DE668
  c->lr=0x801DE670u; f_802200BC(c); // 801DE66C
  c->r[26]=c->r[1]+0x00000150u; // 801DE670
L_801DE674:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DE674
  c->r[3]=c->r[29]|c->r[29]; // 801DE678
  c->r[4]=c->r[30]|c->r[30]; // 801DE67C
  c->r[5]=c->r[31]|c->r[31]; // 801DE680
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801DE684
  c->r[6]=c->r[26]|c->r[26]; // 801DE688
  c->r[8]=c->r[27]|c->r[27]; // 801DE68C
  c->r[7]=0u+0x00000000u; // 801DE690
  c->ctr=c->r[12]; // 801DE694
  if (true) { c->lr=0x801DE69Cu; dispatch(c,c->ctr); } // 801DE698
  goto L_801DE7F8; // 801DE69C
L_801DE6A0:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DE6A0
  c->r[4]=c->r[25]|c->r[25]; // 801DE6A4
  c->r[6]=c->r[1]+0x00000008u; // 801DE6A8
  c->r[5]=0u+0x00000000u; // 801DE6AC
  c->lr=0x801DE6B4u; f_801DFD50(c); // 801DE6B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE6B4
  if (!crb(c,2)) { goto L_801DE6C4; } // 801DE6B8
  c->r[3]=0u+0x00000000u; // 801DE6BC
  goto L_801DE7F8; // 801DE6C0
L_801DE6C4:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DE6C4
  c->r[5]=c->r[1]+0x00000038u; // 801DE6C8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801DE6CC
  c->lr=0x801DE6D4u; f_801DF600(c); // 801DE6D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE6D4
  if (!crb(c,2)) { goto L_801DE6E4; } // 801DE6D8
  c->r[3]=0u+0x00000000u; // 801DE6DC
  goto L_801DE7F8; // 801DE6E0
L_801DE6E4:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DE6E4
  c->r[6]=c->r[1]+0x00000020u; // 801DE6E8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801DE6EC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801DE6F0
  c->lr=0x801DE6F8u; f_801DF7B0(c); // 801DE6F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DE6F8
  if (!crb(c,2)) { goto L_801DE708; } // 801DE6FC
  c->r[3]=0u+0x00000000u; // 801DE700
  goto L_801DE7F8; // 801DE704
L_801DE708:;
  c->r[26]=R32(c->r[1]+0x0000003Cu); // 801DE708
  c->r[3]=R32(c->r[1]+0x00000040u); // 801DE70C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE710
  cmps(c,0,(int32_t)c->r[26],0); // 801DE714
  c->r[25]=R32(c->r[1]+0x00000028u); // 801DE718
  c->r[27]=c->r[3]+c->r[0]; // 801DE71C
  if (crb(c,2)) { goto L_801DE7D4; } // 801DE720
  c->r[0]=R8(c->r[26]+0x00000000u); // 801DE724
  cmps(c,0,(int32_t)c->r[0],47); // 801DE728
  if (!crb(c,2)) { goto L_801DE734; } // 801DE72C
  goto L_801DE7A8; // 801DE730
L_801DE734:;
  c->r[3]=c->r[26]|c->r[26]; // 801DE734
  c->lr=0x801DE73Cu; f_80216B70(c); // 801DE738
  c->r[28]=c->r[3]|c->r[3]; // 801DE73C
  c->r[3]=c->r[29]+0x00000008u; // 801DE740
  c->lr=0x801DE748u; f_80216B70(c); // 801DE744
  c->r[0]=c->r[28]+c->r[3]; // 801DE748
  c->r[5]=c->r[3]|c->r[3]; // 801DE74C
  cmpu(c,0,c->r[0],0x00000100u); // 801DE750
  if (crb(c,0)) { goto L_801DE784; } // 801DE754
  c->r[3]=0u+0x802D0000u; // 801DE758
  c->r[5]=0u+0x802D0000u; // 801DE75C
  c->r[7]=c->r[26]|c->r[26]; // 801DE760
  c->r[6]=c->r[29]+0x00000008u; // 801DE764
  c->r[3]=c->r[3]+0xFFFFF5A0u; // 801DE768
  c->r[5]=c->r[5]+0xFFFFF5E4u; // 801DE76C
  c->r[4]=0u+0x0000015Du; // 801DE770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DE774
  c->lr=0x801DE77Cu; f_801F9810(c); // 801DE778
  c->r[3]=0u+0x00000000u; // 801DE77C
  goto L_801DE7F8; // 801DE780
L_801DE784:;
  c->r[3]=c->r[1]+0x00000050u; // 801DE784
  c->r[4]=c->r[29]+0x00000008u; // 801DE788
  c->r[5]=c->r[5]+0x00000001u; // 801DE78C
  c->lr=0x801DE794u; f_8022004C(c); // 801DE790
  c->r[4]=c->r[26]|c->r[26]; // 801DE794
  c->r[3]=c->r[1]+0x00000050u; // 801DE798
  c->r[5]=c->r[28]+0x00000001u; // 801DE79C
  c->lr=0x801DE7A4u; f_802200BC(c); // 801DE7A0
  c->r[26]=c->r[1]+0x00000050u; // 801DE7A4
L_801DE7A8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DE7A8
  c->r[3]=c->r[29]|c->r[29]; // 801DE7AC
  c->r[4]=c->r[30]|c->r[30]; // 801DE7B0
  c->r[5]=c->r[31]|c->r[31]; // 801DE7B4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801DE7B8
  c->r[6]=c->r[26]|c->r[26]; // 801DE7BC
  c->r[7]=c->r[27]|c->r[27]; // 801DE7C0
  c->r[8]=c->r[25]|c->r[25]; // 801DE7C4
  c->ctr=c->r[12]; // 801DE7C8
  if (true) { c->lr=0x801DE7D0u; dispatch(c,c->ctr); } // 801DE7CC
  goto L_801DE7F8; // 801DE7D0
L_801DE7D4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DE7D4
  c->r[3]=c->r[29]|c->r[29]; // 801DE7D8
  c->r[4]=c->r[30]|c->r[30]; // 801DE7DC
  c->r[5]=c->r[31]|c->r[31]; // 801DE7E0
  c->r[12]=R32(c->r[12]+0x00000018u); // 801DE7E4
  c->r[6]=c->r[27]|c->r[27]; // 801DE7E8
  c->r[7]=c->r[25]|c->r[25]; // 801DE7EC
  c->ctr=c->r[12]; // 801DE7F0
  if (true) { c->lr=0x801DE7F8u; dispatch(c,c->ctr); } // 801DE7F4
L_801DE7F8:;
  c->r[11]=c->r[1]+0x00000270u; // 801DE7F8
  c->lr=0x801DE800u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DE7FC
  c->r[0]=R32(c->r[1]+0x00000274u); // 801DE800
  c->lr=c->r[0]; // 801DE804
  c->r[1]=c->r[1]+0x00000270u; // 801DE808
  return; // 801DE80C
}

