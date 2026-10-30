#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GXGetTexObjUserData
void f_800E07D0(Ctx* __restrict c) {
  trace_call(0x800E07D0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 800E07D0
  return; // 800E07D4
}

// GXGetTexObjWidth
void f_800E07E0(Ctx* __restrict c) {
  trace_call(0x800E07E0u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E07E0
  c->r[3]=rotl(c->r[0],0)&0x000003FFu; // 800E07E4
  c->r[0]=c->r[3]+0x00000001u; // 800E07E8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800E07EC
  return; // 800E07F0
}

// GXGetTexObjHeight
void f_800E0800(Ctx* __restrict c) {
  trace_call(0x800E0800u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E0800
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 800E0804
  c->r[0]=c->r[3]+0x00000001u; // 800E0808
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800E080C
  return; // 800E0810
}

// GXGetTexObjFmt
void f_800E0820(Ctx* __restrict c) {
  trace_call(0x800E0820u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E0820
  return; // 800E0824
}

// GXGetTexObjWrapS
void f_800E0830(Ctx* __restrict c) {
  trace_call(0x800E0830u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E0830
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 800E0834
  return; // 800E0838
}

// GXGetTexObjWrapT
void f_800E0840(Ctx* __restrict c) {
  trace_call(0x800E0840u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E0840
  c->r[3]=rotl(c->r[0],30)&0x00000003u; // 800E0844
  return; // 800E0848
}

// GXGetTexObjMipMap
void f_800E0850(Ctx* __restrict c) {
  trace_call(0x800E0850u);
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 800E0850
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800E0854
  return; // 800E0858
}

// fn_800E0860
void f_800E0860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0860
  c->r[0]=c->lr; // 800E0864
  c->r[11]=c->r[13]+0xFFFF8FE0u; // 800E0868
  c->r[10]=c->r[13]+0xFFFF8FE8u; // 800E086C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0870
  c->r[9]=c->r[13]+0xFFFF8FF0u; // 800E0874
  c->r[12]=R32(c->r[3]+0x00000000u); // 800E0878
  c->r[8]=c->r[13]+0xFFFF8FF8u; // 800E087C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E0880
  c->r[7]=c->r[13]+0xFFFF9000u; // 800E0884
  c->r[6]=c->r[13]+0xFFFF9008u; // 800E0888
  c->r[31]=c->r[5]|c->r[5]; // 800E088C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E0890
  c->r[30]=c->r[3]|c->r[3]; // 800E0894
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E0898
  c->r[29]=0u+0xCC010000u; // 800E089C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E08A0
  c->r[28]=0u+0x00000061u; // 800E08A4
  c->r[0]=R8(c->r[11]+c->r[5]); // 800E08A8
  c->r[11]=R32(c->r[3]+0x00000004u); // 800E08AC
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 800E08B0
  c->r[0]=R8(c->r[10]+c->r[5]); // 800E08B4
  c->r[10]=R8(c->r[9]+c->r[5]); // 800E08B8
  c->r[11]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 800E08BC
  c->r[0]=R8(c->r[7]+c->r[5]); // 800E08C0
  c->r[8]=R8(c->r[8]+c->r[5]); // 800E08C4
  c->r[5]=R8(c->r[6]+c->r[5]); // 800E08C8
  c->r[9]=R32(c->r[3]+0x00000008u); // 800E08CC
  c->r[9]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 800E08D0
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E08D4
  c->r[7]=R32(c->r[4]+0x00000000u); // 800E08D8
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E08DC
  W32(c->r[29]+0xFFFF8000u,c->r[12]); // 800E08E0
  c->r[6]=R32(c->r[4]+0x00000004u); // 800E08E4
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E08E8
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E08EC
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 800E08F0
  W32(c->r[29]+0xFFFF8000u,c->r[11]); // 800E08F4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800E08F8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800E08FC
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E0900
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800E0904
  W32(c->r[29]+0xFFFF8000u,c->r[9]); // 800E0908
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E090C
  W32(c->r[29]+0xFFFF8000u,c->r[7]); // 800E0910
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E0914
  W32(c->r[29]+0xFFFF8000u,c->r[6]); // 800E0918
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E091C
  W32(c->r[3]+0x00000000u,c->r[12]); // 800E0920
  W32(c->r[3]+0x00000004u,c->r[11]); // 800E0924
  W32(c->r[3]+0x00000008u,c->r[9]); // 800E0928
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E092C
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E0930
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E0934
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 800E0938
  if (!crb(c,2)) { goto L_800E0974; } // 800E093C
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E0940
  c->r[3]=R32(c->r[3]+0x00000018u); // 800E0944
  c->r[12]=R32(c->r[4]+0x0000051Cu); // 800E0948
  c->ctr=c->r[12]; // 800E094C
  if (true) { c->lr=0x800E0954u; dispatch(c,c->ctr); } // 800E0950
  c->r[4]=c->r[13]+0xFFFF9010u; // 800E0954
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E0958
  c->r[4]=R8(c->r[4]+c->r[31]); // 800E095C
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800E0960
  W32(c->r[3]+0x00000004u,c->r[0]); // 800E0964
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800E0968
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E096C
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 800E0970
L_800E0974:;
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800E0974
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800E0978
  c->r[5]=R32(c->r[30]+0x00000008u); // 800E097C
  c->r[0]=0u+0x00000000u; // 800E0980
  c->r[4]=c->r[6]+c->r[3]; // 800E0984
  c->r[3]=R32(c->r[30]+0x00000000u); // 800E0988
  W32(c->r[4]+0x00000564u,c->r[5]); // 800E098C
  W32(c->r[4]+0x00000584u,c->r[3]); // 800E0990
  c->r[3]=R32(c->r[6]+0x000005FCu); // 800E0994
  c->r[3]=c->r[3]|0x00000001u; // 800E0998
  W32(c->r[6]+0x000005FCu,c->r[3]); // 800E099C
  W16(c->r[6]+0x00000002u,c->r[0]); // 800E09A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E09A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E09A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E09AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E09B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E09B4
  c->lr=c->r[0]; // 800E09B8
  c->r[1]=c->r[1]+0x00000020u; // 800E09BC
  return; // 800E09C0
}

// fn_800E09D0
void f_800E09D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E09D0
  c->r[0]=c->lr; // 800E09D4
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E09D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E09DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E09E0
  c->r[31]=c->r[4]|c->r[4]; // 800E09E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E09E8
  c->r[30]=c->r[3]|c->r[3]; // 800E09EC
  c->r[12]=R32(c->r[5]+0x00000518u); // 800E09F0
  c->ctr=c->r[12]; // 800E09F4
  if (true) { c->lr=0x800E09FCu; dispatch(c,c->ctr); } // 800E09F8
  c->r[4]=c->r[3]|c->r[3]; // 800E09FC
  c->r[3]=c->r[30]|c->r[30]; // 800E0A00
  c->r[5]=c->r[31]|c->r[31]; // 800E0A04
  c->lr=0x800E0A0Cu; f_800E0860(c); // 800E0A08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0A0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0A10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0A14
  c->lr=c->r[0]; // 800E0A18
  c->r[1]=c->r[1]+0x00000010u; // 800E0A1C
  return; // 800E0A20
}

// fn_800E0A30
void f_800E0A30(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x00000004u); // 800E0A30
  c->r[0]=0u+0x00000064u; // 800E0A34
  c->r[7]=(rotl(c->r[4],27)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 800E0A38
  c->r[4]=0u+0x00000000u; // 800E0A3C
  c->r[4]=(rotl(c->r[5],10)&0x00000C00u)|(c->r[4]&~0x00000C00u); // 800E0A40
  W16(c->r[3]+0x00000008u,c->r[6]); // 800E0A44
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E0A48
  W32(c->r[3]+0x00000000u,c->r[4]); // 800E0A4C
  W32(c->r[3]+0x00000004u,c->r[7]); // 800E0A50
  return; // 800E0A54
}

// fn_800E0A60
void f_800E0A60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0A60
  c->r[0]=c->lr; // 800E0A64
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E0A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0A70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0A74
  c->r[30]=c->r[3]|c->r[3]; // 800E0A78
  c->r[3]=c->r[4]|c->r[4]; // 800E0A7C
  c->r[12]=R32(c->r[5]+0x0000051Cu); // 800E0A80
  c->ctr=c->r[12]; // 800E0A84
  if (true) { c->lr=0x800E0A8Cu; dispatch(c,c->ctr); } // 800E0A88
  c->r[31]=c->r[3]|c->r[3]; // 800E0A8C
  c->lr=0x800E0A94u; f_800E15E0(c); // 800E0A90
  c->r[3]=0u+0xCC010000u; // 800E0A94
  c->r[4]=0u+0x00000061u; // 800E0A98
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0A9C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800E0AA0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0AA4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0AA8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E0AAC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0AB0
  c->lr=0x800E0AB8u; f_800E15E0(c); // 800E0AB4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E0AB8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800E0ABC
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800E0AC0
  W32(c->r[31]+0x00000004u,c->r[3]); // 800E0AC4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800E0AC8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800E0ACC
  c->r[0]=R32(c->r[30]+0x00000008u); // 800E0AD0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E0AD4
  W32(c->r[30]+0x00000000u,c->r[3]); // 800E0AD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0ADC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0AE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0AE4
  c->lr=c->r[0]; // 800E0AE8
  c->r[1]=c->r[1]+0x00000010u; // 800E0AEC
  return; // 800E0AF0
}

// GXInitTexCacheRegion
void f_800E0B00(Ctx* __restrict c) {
  trace_call(0x800E0B00u);
  cmps(c,0,(int32_t)c->r[6],0); // 800E0B00
  if (crb(c,2)) { goto L_800E0B1C; } // 800E0B04
  cmps(c,0,(int32_t)c->r[6],1); // 800E0B08
  if (crb(c,2)) { goto L_800E0B24; } // 800E0B0C
  cmps(c,0,(int32_t)c->r[6],2); // 800E0B10
  if (crb(c,2)) { goto L_800E0B2C; } // 800E0B14
  goto L_800E0B30; // 800E0B18
L_800E0B1C:;
  c->r[6]=0u+0x00000003u; // 800E0B1C
  goto L_800E0B30; // 800E0B20
L_800E0B24:;
  c->r[6]=0u+0x00000004u; // 800E0B24
  goto L_800E0B30; // 800E0B28
L_800E0B2C:;
  c->r[6]=0u+0x00000005u; // 800E0B2C
L_800E0B30:;
  cmps(c,0,(int32_t)c->r[8],0); // 800E0B30
  c->r[0]=0u+0x00000000u; // 800E0B34
  c->r[0]=(rotl(c->r[5],27)&0x00007FFFu)|(c->r[0]&~0x00007FFFu); // 800E0B38
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800E0B3C
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800E0B40
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E0B44
  if (crb(c,2)) { goto L_800E0B68; } // 800E0B48
  cmps(c,0,(int32_t)c->r[8],1); // 800E0B4C
  if (crb(c,2)) { goto L_800E0B70; } // 800E0B50
  cmps(c,0,(int32_t)c->r[8],2); // 800E0B54
  if (crb(c,2)) { goto L_800E0B78; } // 800E0B58
  cmps(c,0,(int32_t)c->r[8],3); // 800E0B5C
  if (crb(c,2)) { goto L_800E0B80; } // 800E0B60
  goto L_800E0B84; // 800E0B64
L_800E0B68:;
  c->r[6]=0u+0x00000003u; // 800E0B68
  goto L_800E0B84; // 800E0B6C
L_800E0B70:;
  c->r[6]=0u+0x00000004u; // 800E0B70
  goto L_800E0B84; // 800E0B74
L_800E0B78:;
  c->r[6]=0u+0x00000005u; // 800E0B78
  goto L_800E0B84; // 800E0B7C
L_800E0B80:;
  c->r[6]=0u+0x00000000u; // 800E0B80
L_800E0B84:;
  c->r[5]=0u+0x00000000u; // 800E0B84
  c->r[0]=0u+0x00000001u; // 800E0B88
  c->r[5]=(rotl(c->r[7],27)&0x00007FFFu)|(c->r[5]&~0x00007FFFu); // 800E0B8C
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 800E0B90
  c->r[5]=(rotl(c->r[6],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 800E0B94
  c->r[5]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[5]&~0x001C0000u); // 800E0B98
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800E0B9C
  W32(c->r[3]+0x00000004u,c->r[5]); // 800E0BA0
  return; // 800E0BA4
}

// GXInitTlutRegion
void f_800E0BB0(Ctx* __restrict c) {
  trace_call(0x800E0BB0u);
  c->r[0]=c->r[4]+0xFFF80000u; // 800E0BB0
  c->r[4]=0u+0x00000000u; // 800E0BB4
  c->r[4]=(rotl(c->r[0],23)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 800E0BB8
  c->r[0]=0u+0x00000065u; // 800E0BBC
  c->r[4]=(rotl(c->r[5],10)&0x001FFC00u)|(c->r[4]&~0x001FFC00u); // 800E0BC0
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800E0BC4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800E0BC8
  return; // 800E0BCC
}

// fn_800E0BD0
void f_800E0BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0BD0
  c->r[0]=c->lr; // 800E0BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0BD8
  c->lr=0x800E0BE0u; f_800E15E0(c); // 800E0BDC
  c->r[5]=0u+0xCC010000u; // 800E0BE0
  c->r[3]=0u+0x66000000u; // 800E0BE4
  c->r[6]=0u+0x00000061u; // 800E0BE8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800E0BEC
  c->r[4]=c->r[3]+0x00001000u; // 800E0BF0
  c->r[0]=c->r[3]+0x00001100u; // 800E0BF4
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800E0BF8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800E0BFC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E0C00
  c->lr=0x800E0C08u; f_800E15E0(c); // 800E0C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0C08
  c->lr=c->r[0]; // 800E0C0C
  c->r[1]=c->r[1]+0x00000010u; // 800E0C10
  return; // 800E0C14
}

// fn_800E0C20
void f_800E0C20(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E0C20
  c->r[0]=c->r[3]|c->r[3]; // 800E0C24
  c->r[3]=R32(c->r[4]+0x00000518u); // 800E0C28
  W32(c->r[4]+0x00000518u,c->r[0]); // 800E0C2C
  return; // 800E0C30
}

// fn_800E0C40
void f_800E0C40(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E0C40
  c->r[0]=c->r[3]|c->r[3]; // 800E0C44
  c->r[3]=R32(c->r[4]+0x0000051Cu); // 800E0C48
  W32(c->r[4]+0x0000051Cu,c->r[0]); // 800E0C4C
  return; // 800E0C50
}

// __SetSURegs
void f_800E0C60(Ctx* __restrict c) {
  trace_call(0x800E0C60u);
  c->r[11]=R32(c->r[2]+0xFFFF9A80u); // 800E0C60
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E0C64
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E0C68
  c->r[5]=0u+0xCC010000u; // 800E0C6C
  c->r[10]=c->r[11]+c->r[0]; // 800E0C70
  c->r[9]=c->r[11]+c->r[6]; // 800E0C74
  c->r[3]=R32(c->r[10]+0x00000564u); // 800E0C78
  c->r[4]=0u+0x00000061u; // 800E0C7C
  c->r[8]=R32(c->r[9]+0x00000108u); // 800E0C80
  c->r[0]=0u+0x00000000u; // 800E0C84
  c->r[6]=rotl(c->r[3],0)&0x000003FFu; // 800E0C88
  c->r[3]=rotl(c->r[3],22)&0x000003FFu; // 800E0C8C
  c->r[8]=(rotl(c->r[6],0)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 800E0C90
  W32(c->r[9]+0x00000108u,c->r[8]); // 800E0C94
  c->r[7]=R32(c->r[9]+0x00000128u); // 800E0C98
  c->r[7]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 800E0C9C
  W32(c->r[9]+0x00000128u,c->r[7]); // 800E0CA0
  c->r[3]=R32(c->r[10]+0x00000584u); // 800E0CA4
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 800E0CA8
  c->r[3]=rotl(c->r[3],30)&0x00000003u; // 800E0CAC
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800E0CB0
  c->r[6]=cntlz(c->r[6]); // 800E0CB4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800E0CB8
  c->r[8]=(rotl(c->r[6],11)&0x00010000u)|(c->r[8]&~0x00010000u); // 800E0CBC
  W32(c->r[9]+0x00000108u,c->r[8]); // 800E0CC0
  c->r[3]=cntlz(c->r[3]); // 800E0CC4
  c->r[7]=(rotl(c->r[3],11)&0x00010000u)|(c->r[7]&~0x00010000u); // 800E0CC8
  W32(c->r[9]+0x00000128u,c->r[7]); // 800E0CCC
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800E0CD0
  c->r[3]=R32(c->r[9]+0x00000108u); // 800E0CD4
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800E0CD8
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800E0CDC
  c->r[3]=R32(c->r[9]+0x00000128u); // 800E0CE0
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800E0CE4
  W16(c->r[11]+0x00000002u,c->r[0]); // 800E0CE8
  return; // 800E0CEC
}

// __GXSetSUTexRegs
void f_800E0CF0(Ctx* __restrict c) {
  trace_call(0x800E0CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0CF0
  c->r[0]=c->lr; // 800E0CF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E0CF8
  c->r[11]=c->r[1]+0x00000030u; // 800E0CFC
  c->lr=0x800E0D04u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0D00
  c->r[29]=R32(c->r[2]+0xFFFF9A80u); // 800E0D04
  c->r[0]=R32(c->r[29]+0x000005E4u); // 800E0D08
  cmpu(c,0,c->r[0],0x000000FFu); // 800E0D0C
  if (crb(c,2)) { goto L_800E0E3C; } // 800E0D10
  c->r[0]=R32(c->r[29]+0x00000254u); // 800E0D14
  c->r[28]=0u+0x00000000u; // 800E0D18
  c->r[23]=0u+0x00000001u; // 800E0D1C
  c->r[3]=rotl(c->r[0],22)&0x0000000Fu; // 800E0D20
  c->r[27]=rotl(c->r[0],16)&0x00000007u; // 800E0D24
  c->r[26]=c->r[3]+0x00000001u; // 800E0D28
  goto L_800E0DB0; // 800E0D2C
L_800E0D30:;
  cmps(c,0,(int32_t)c->r[28],0); // 800E0D30
  if (crb(c,2)) { goto L_800E0D54; } // 800E0D34
  cmpu(c,0,c->r[28],0x00000001u); // 800E0D38
  if (crb(c,2)) { goto L_800E0D64; } // 800E0D3C
  cmpu(c,0,c->r[28],0x00000002u); // 800E0D40
  if (crb(c,2)) { goto L_800E0D74; } // 800E0D44
  cmpu(c,0,c->r[28],0x00000003u); // 800E0D48
  if (crb(c,2)) { goto L_800E0D84; } // 800E0D4C
  goto L_800E0D90; // 800E0D50
L_800E0D54:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800E0D54
  c->r[25]=rotl(c->r[0],0)&0x00000007u; // 800E0D58
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 800E0D5C
  goto L_800E0D90; // 800E0D60
L_800E0D64:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800E0D64
  c->r[25]=rotl(c->r[0],26)&0x00000007u; // 800E0D68
  c->r[24]=rotl(c->r[0],23)&0x00000007u; // 800E0D6C
  goto L_800E0D90; // 800E0D70
L_800E0D74:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800E0D74
  c->r[25]=rotl(c->r[0],20)&0x00000007u; // 800E0D78
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 800E0D7C
  goto L_800E0D90; // 800E0D80
L_800E0D84:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800E0D84
  c->r[25]=rotl(c->r[0],14)&0x00000007u; // 800E0D88
  c->r[24]=rotl(c->r[0],11)&0x00000007u; // 800E0D8C
L_800E0D90:;
  c->r[3]=R32(c->r[29]+0x000005E4u); // 800E0D90
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 800E0D94
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800E0D98
  if (!crb(c,2)) { goto L_800E0DAC; } // 800E0D9C
  c->r[3]=c->r[25]|c->r[25]; // 800E0DA0
  c->r[4]=c->r[24]|c->r[24]; // 800E0DA4
  c->lr=0x800E0DACu; f_800E0C60(c); // 800E0DA8
L_800E0DAC:;
  c->r[28]=c->r[28]+0x00000001u; // 800E0DAC
L_800E0DB0:;
  cmpu(c,0,c->r[28],c->r[27]); // 800E0DB0
  if (crb(c,0)) { IRQCHK(c); goto L_800E0D30; } // 800E0DB4
  c->r[28]=R32(c->r[2]+0xFFFF9A80u); // 800E0DB8
  c->r[27]=0u+0x00000000u; // 800E0DBC
  c->r[23]=0u+0x00000001u; // 800E0DC0
  c->r[31]=c->r[28]|c->r[28]; // 800E0DC4
  c->r[30]=c->r[28]+0x00000150u; // 800E0DC8
  goto L_800E0E34; // 800E0DCC
L_800E0DD0:;
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 800E0DD0
  c->r[0]=R32(c->r[31]+0x000005A4u); // 800E0DD4
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFCu; // 800E0DD8
  c->r[25]=rotl(c->r[0],0)&0xFFFFFEFFu; // 800E0DDC
  if (crb(c,2)) { goto L_800E0DF0; } // 800E0DE0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800E0DE4
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 800E0DE8
  goto L_800E0DF8; // 800E0DEC
L_800E0DF0:;
  c->r[0]=R32(c->r[30]+c->r[3]); // 800E0DF0
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 800E0DF4
L_800E0DF8:;
  cmpu(c,0,c->r[25],0x000000FFu); // 800E0DF8
  if (crb(c,2)) { goto L_800E0E2C; } // 800E0DFC
  c->r[3]=R32(c->r[29]+0x000005E4u); // 800E0E00
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 800E0E04
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800E0E08
  if (!crb(c,2)) { goto L_800E0E2C; } // 800E0E0C
  c->r[3]=R32(c->r[28]+0x000005E8u); // 800E0E10
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[23]<<((c->r[27])&31)); // 800E0E14
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800E0E18
  if (crb(c,2)) { goto L_800E0E2C; } // 800E0E1C
  c->r[3]=c->r[25]|c->r[25]; // 800E0E20
  c->r[4]=c->r[24]|c->r[24]; // 800E0E24
  c->lr=0x800E0E2Cu; f_800E0C60(c); // 800E0E28
L_800E0E2C:;
  c->r[31]=c->r[31]+0x00000004u; // 800E0E2C
  c->r[27]=c->r[27]+0x00000001u; // 800E0E30
L_800E0E34:;
  cmpu(c,0,c->r[27],c->r[26]); // 800E0E34
  if (crb(c,0)) { IRQCHK(c); goto L_800E0DD0; } // 800E0E38
L_800E0E3C:;
  c->r[11]=c->r[1]+0x00000030u; // 800E0E3C
  c->lr=0x800E0E44u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0E40
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E0E44
  c->lr=c->r[0]; // 800E0E48
  c->r[1]=c->r[1]+0x00000030u; // 800E0E4C
  return; // 800E0E50
}

// __GXSetTmemConfig
void f_800E0E60(Ctx* __restrict c) {
  trace_call(0x800E0E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0E60
  cmpu(c,0,c->r[3],0x00000002u); // 800E0E64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0E68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0E6C
  if (crb(c,2)) { goto L_800E0E80; } // 800E0E70
  cmpu(c,0,c->r[3],0x00000001u); // 800E0E74
  if (crb(c,2)) { goto L_800E0F8C; } // 800E0E78
  goto L_800E1098; // 800E0E7C
L_800E0E80:;
  c->r[3]=0u+0xCC010000u; // 800E0E80
  c->r[0]=0u+0x00000061u; // 800E0E84
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0E88
  c->r[4]=0u+0x8C0E0000u; // 800E0E8C
  c->r[4]=c->r[4]+0xFFFF8000u; // 800E0E90
  c->r[5]=0u+0x900E0000u; // 800E0E94
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0E98
  c->r[4]=0u+0x8D0E0000u; // 800E0E9C
  c->r[31]=0u+0x910E0000u; // 800E0EA0
  c->r[30]=0u+0x8E0E0000u; // 800E0EA4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0EA8
  c->r[5]=c->r[5]+0xFFFFC000u; // 800E0EAC
  c->r[12]=0u+0x920E0000u; // 800E0EB0
  c->r[11]=0u+0x8F0E0000u; // 800E0EB4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E0EB8
  c->r[10]=0u+0x930E0000u; // 800E0EBC
  c->r[9]=0u+0xAC0E0000u; // 800E0EC0
  c->r[8]=0u+0xB00E0000u; // 800E0EC4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0EC8
  c->r[4]=c->r[4]+0xFFFF8800u; // 800E0ECC
  c->r[7]=0u+0xAD0E0000u; // 800E0ED0
  c->r[6]=0u+0xB10E0000u; // 800E0ED4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0ED8
  c->r[5]=0u+0xAE0E0000u; // 800E0EDC
  c->r[4]=0u+0xB20E0000u; // 800E0EE0
  c->r[31]=c->r[31]+0xFFFFC800u; // 800E0EE4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0EE8
  c->r[30]=c->r[30]+0xFFFF9000u; // 800E0EEC
  c->r[12]=c->r[12]+0xFFFFD000u; // 800E0EF0
  c->r[11]=c->r[11]+0xFFFF9800u; // 800E0EF4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800E0EF8
  c->r[10]=c->r[10]+0xFFFFD800u; // 800E0EFC
  c->r[9]=c->r[9]+0xFFFFA000u; // 800E0F00
  c->r[8]=c->r[8]+0xFFFFC400u; // 800E0F04
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F08
  c->r[7]=c->r[7]+0xFFFFA800u; // 800E0F0C
  c->r[6]=c->r[6]+0xFFFFCC00u; // 800E0F10
  c->r[5]=c->r[5]+0xFFFFB000u; // 800E0F14
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800E0F18
  c->r[4]=c->r[4]+0xFFFFD400u; // 800E0F1C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F20
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 800E0F24
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F28
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800E0F2C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F30
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 800E0F34
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F38
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800E0F3C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F40
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 800E0F44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F48
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 800E0F4C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F50
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800E0F54
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F58
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E0F5C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F60
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0F64
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F68
  c->r[5]=0u+0xAF0E0000u; // 800E0F6C
  c->r[4]=0u+0xB30E0000u; // 800E0F70
  c->r[5]=c->r[5]+0xFFFFB800u; // 800E0F74
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E0F78
  c->r[4]=c->r[4]+0xFFFFDC00u; // 800E0F7C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F80
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0F84
  goto L_800E11A0; // 800E0F88
L_800E0F8C:;
  c->r[3]=0u+0xCC010000u; // 800E0F8C
  c->r[0]=0u+0x00000061u; // 800E0F90
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0F94
  c->r[4]=0u+0x8C0E0000u; // 800E0F98
  c->r[4]=c->r[4]+0xFFFF8000u; // 800E0F9C
  c->r[5]=0u+0x900E0000u; // 800E0FA0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0FA4
  c->r[4]=0u+0x8D0E0000u; // 800E0FA8
  c->r[31]=0u+0x910E0000u; // 800E0FAC
  c->r[30]=0u+0x8E0E0000u; // 800E0FB0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0FB4
  c->r[5]=c->r[5]+0xFFFFC000u; // 800E0FB8
  c->r[12]=0u+0x920E0000u; // 800E0FBC
  c->r[11]=0u+0x8F0E0000u; // 800E0FC0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E0FC4
  c->r[10]=0u+0x930E0000u; // 800E0FC8
  c->r[9]=0u+0xAC0E0000u; // 800E0FCC
  c->r[8]=0u+0xB00E0000u; // 800E0FD0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0FD4
  c->r[4]=c->r[4]+0xFFFF8800u; // 800E0FD8
  c->r[7]=0u+0xAD0E0000u; // 800E0FDC
  c->r[6]=0u+0xB10E0000u; // 800E0FE0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E0FE4
  c->r[5]=0u+0xAE0E0000u; // 800E0FE8
  c->r[4]=0u+0xB20E0000u; // 800E0FEC
  c->r[31]=c->r[31]+0xFFFFC800u; // 800E0FF0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E0FF4
  c->r[30]=c->r[30]+0xFFFF9000u; // 800E0FF8
  c->r[12]=c->r[12]+0xFFFFD000u; // 800E0FFC
  c->r[11]=c->r[11]+0xFFFF9800u; // 800E1000
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800E1004
  c->r[10]=c->r[10]+0xFFFFD800u; // 800E1008
  c->r[9]=c->r[9]+0xFFFFA000u; // 800E100C
  c->r[8]=c->r[8]+0xFFFFE000u; // 800E1010
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1014
  c->r[7]=c->r[7]+0xFFFFA800u; // 800E1018
  c->r[6]=c->r[6]+0xFFFFE800u; // 800E101C
  c->r[5]=c->r[5]+0xFFFFB000u; // 800E1020
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800E1024
  c->r[4]=c->r[4]+0xFFFFF000u; // 800E1028
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E102C
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 800E1030
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1034
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800E1038
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E103C
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 800E1040
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1044
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800E1048
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E104C
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 800E1050
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1054
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 800E1058
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E105C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800E1060
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1064
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E1068
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E106C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E1070
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1074
  c->r[5]=0u+0xAF0E0000u; // 800E1078
  c->r[4]=0u+0xB30E0000u; // 800E107C
  c->r[5]=c->r[5]+0xFFFFB800u; // 800E1080
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E1084
  c->r[4]=c->r[4]+0xFFFFF800u; // 800E1088
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E108C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E1090
  goto L_800E11A0; // 800E1094
L_800E1098:;
  c->r[3]=0u+0xCC010000u; // 800E1098
  c->r[0]=0u+0x00000061u; // 800E109C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E10A0
  c->r[4]=0u+0x8C0E0000u; // 800E10A4
  c->r[4]=c->r[4]+0xFFFF8000u; // 800E10A8
  c->r[5]=0u+0x900E0000u; // 800E10AC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E10B0
  c->r[4]=0u+0x8D0E0000u; // 800E10B4
  c->r[30]=0u+0x910E0000u; // 800E10B8
  c->r[31]=0u+0x8E0E0000u; // 800E10BC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E10C0
  c->r[5]=c->r[5]+0xFFFFC000u; // 800E10C4
  c->r[12]=0u+0x920E0000u; // 800E10C8
  c->r[11]=0u+0x8F0E0000u; // 800E10CC
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E10D0
  c->r[10]=0u+0x930E0000u; // 800E10D4
  c->r[9]=0u+0xAC0E0000u; // 800E10D8
  c->r[8]=0u+0xB00E0000u; // 800E10DC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E10E0
  c->r[4]=c->r[4]+0xFFFF8400u; // 800E10E4
  c->r[7]=0u+0xAD0E0000u; // 800E10E8
  c->r[6]=0u+0xB10E0000u; // 800E10EC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E10F0
  c->r[5]=0u+0xAE0E0000u; // 800E10F4
  c->r[4]=0u+0xB20E0000u; // 800E10F8
  c->r[30]=c->r[30]+0xFFFFC400u; // 800E10FC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1100
  c->r[31]=c->r[31]+0xFFFF8800u; // 800E1104
  c->r[12]=c->r[12]+0xFFFFC800u; // 800E1108
  c->r[11]=c->r[11]+0xFFFF8C00u; // 800E110C
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800E1110
  c->r[10]=c->r[10]+0xFFFFCC00u; // 800E1114
  c->r[9]=c->r[9]+0xFFFF9000u; // 800E1118
  c->r[8]=c->r[8]+0xFFFFD000u; // 800E111C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1120
  c->r[7]=c->r[7]+0xFFFF9400u; // 800E1124
  c->r[6]=c->r[6]+0xFFFFD400u; // 800E1128
  c->r[5]=c->r[5]+0xFFFF9800u; // 800E112C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800E1130
  c->r[4]=c->r[4]+0xFFFFD800u; // 800E1134
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1138
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 800E113C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1140
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800E1144
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1148
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 800E114C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1150
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800E1154
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1158
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 800E115C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1160
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 800E1164
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1168
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800E116C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1170
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E1174
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1178
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E117C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1180
  c->r[5]=0u+0xAF0E0000u; // 800E1184
  c->r[4]=0u+0xB30E0000u; // 800E1188
  c->r[5]=c->r[5]+0xFFFF9C00u; // 800E118C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800E1190
  c->r[4]=c->r[4]+0xFFFFDC00u; // 800E1194
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1198
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800E119C
L_800E11A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E11A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E11A4
  c->r[1]=c->r[1]+0x00000010u; // 800E11A8
  return; // 800E11AC
}

// GXSetTevIndirect
void f_800E11B0(Ctx* __restrict c) {
  trace_call(0x800E11B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E11B0
  c->r[12]=0u+0x00000000u; // 800E11B4
  c->r[12]=(rotl(c->r[4],0)&0x00000003u)|(c->r[12]&~0x00000003u); // 800E11B8
  c->r[4]=c->r[3]+0x00000010u; // 800E11BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E11C0
  c->r[12]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[12]&~0x0000000Cu); // 800E11C4
  c->r[11]=0u+0xCC010000u; // 800E11C8
  c->r[0]=0u+0x00000061u; // 800E11CC
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 800E11D0
  c->r[12]=(rotl(c->r[6],4)&0x00000070u)|(c->r[12]&~0x00000070u); // 800E11D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E11D8
  c->r[0]=0u+0x00000000u; // 800E11DC
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 800E11E0
  c->r[12]=(rotl(c->r[31],7)&0x00000180u)|(c->r[12]&~0x00000180u); // 800E11E4
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E11E8
  c->r[12]=(rotl(c->r[7],9)&0x00001E00u)|(c->r[12]&~0x00001E00u); // 800E11EC
  c->r[12]=(rotl(c->r[8],13)&0x0000E000u)|(c->r[12]&~0x0000E000u); // 800E11F0
  c->r[12]=(rotl(c->r[9],16)&0x00070000u)|(c->r[12]&~0x00070000u); // 800E11F4
  c->r[12]=(rotl(c->r[5],19)&0x00080000u)|(c->r[12]&~0x00080000u); // 800E11F8
  c->r[12]=(rotl(c->r[10],20)&0x00100000u)|(c->r[12]&~0x00100000u); // 800E11FC
  c->r[12]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 800E1200
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 800E1204
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1208
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E120C
  c->r[1]=c->r[1]+0x00000010u; // 800E1210
  return; // 800E1214
}

// GXSetIndTexMtx
void f_800E1220(Ctx* __restrict c) {
  trace_call(0x800E1220u);
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800E1220
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1224
  cmpu(c,0,c->r[6],0x00000002u); // 800E1228
  if (!crb(c,1)) { goto L_800E125C; } // 800E122C
  c->r[6]=c->r[3]+0xFFFFFFFBu; // 800E1230
  cmpu(c,0,c->r[6],0x00000002u); // 800E1234
  if (!crb(c,1)) { goto L_800E125C; } // 800E1238
  c->r[6]=c->r[3]+0xFFFFFFF7u; // 800E123C
  cmpu(c,0,c->r[6],0x00000002u); // 800E1240
  if (!crb(c,1)) { goto L_800E125C; } // 800E1244
  goto L_800E1258; // 800E1248
  goto L_800E125C; // 800E124C
  goto L_800E125C; // 800E1250
  goto L_800E125C; // 800E1254
L_800E1258:;
  c->r[6]=0u+0x00000000u; // 800E1258
L_800E125C:;
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E125C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800E1260
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1264
  c->r[10]=c->r[0]-c->r[6]; // 800E1268
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E126C
  c->r[9]=c->r[5]+0x00000011u; // 800E1270
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 800E1274
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E1278
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800E127C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1280
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 800E1284
  c->r[7]=0u+0xCC010000u; // 800E1288
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800E128C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1290
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E1294
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1298
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[5]);} // 800E129C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 800E12A0
  c->r[8]=0u+0x00000061u; // 800E12A4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800E12A8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800E12AC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 800E12B0
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 800E12B4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800E12B8
  c->r[5]=0u+0x00000000u; // 800E12BC
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 800E12C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E12C4
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800E12C8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 800E12CC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800E12D0
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 800E12D4
  c->r[4]=c->r[10]+0x00000006u; // 800E12D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800E12DC
  c->r[5]=(rotl(c->r[9],22)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 800E12E0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E12E4
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800E12E8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800E12EC
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800E12F0
  c->r[6]=0u+0x00000000u; // 800E12F4
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 800E12F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E12FC
  c->r[6]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 800E1300
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800E1304
  c->r[4]=c->r[10]+0x00000007u; // 800E1308
  c->r[6]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[6]&~0x003FF800u); // 800E130C
  c->r[5]=0u+0x00000000u; // 800E1310
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800E1314
  c->r[6]=(rotl(c->r[9],20)&0x00C00000u)|(c->r[6]&~0x00C00000u); // 800E1318
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E131C
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800E1320
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800E1324
  c->r[4]=c->r[10]+0x00000008u; // 800E1328
  c->r[5]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 800E132C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E1330
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800E1334
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 800E1338
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E133C
  c->r[5]=(rotl(c->r[9],18)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 800E1340
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800E1344
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800E1348
  c->r[0]=0u+0x00000000u; // 800E134C
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 800E1350
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1354
  c->r[1]=c->r[1]+0x00000040u; // 800E1358
  return; // 800E135C
}

// GXSetIndTexCoordScale
void f_800E1360(Ctx* __restrict c) {
  trace_call(0x800E1360u);
  cmps(c,0,(int32_t)c->r[3],0); // 800E1360
  if (crb(c,2)) { goto L_800E1384; } // 800E1364
  cmps(c,0,(int32_t)c->r[3],1); // 800E1368
  if (crb(c,2)) { goto L_800E13B8; } // 800E136C
  cmps(c,0,(int32_t)c->r[3],2); // 800E1370
  if (crb(c,2)) { goto L_800E13EC; } // 800E1374
  cmps(c,0,(int32_t)c->r[3],3); // 800E1378
  if (crb(c,2)) { goto L_800E1420; } // 800E137C
  goto L_800E1450; // 800E1380
L_800E1384:;
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800E1384
  c->r[6]=0u+0x00000025u; // 800E1388
  c->r[3]=0u+0xCC010000u; // 800E138C
  c->r[0]=0u+0x00000061u; // 800E1390
  c->r[7]=R32(c->r[8]+0x00000178u); // 800E1394
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 800E1398
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 800E139C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E13A0
  W32(c->r[8]+0x00000178u,c->r[7]); // 800E13A4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E13A8
  c->r[0]=R32(c->r[8]+0x00000178u); // 800E13AC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E13B0
  goto L_800E1450; // 800E13B4
L_800E13B8:;
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800E13B8
  c->r[6]=0u+0x00000025u; // 800E13BC
  c->r[3]=0u+0xCC010000u; // 800E13C0
  c->r[0]=0u+0x00000061u; // 800E13C4
  c->r[7]=R32(c->r[8]+0x00000178u); // 800E13C8
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 800E13CC
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 800E13D0
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E13D4
  W32(c->r[8]+0x00000178u,c->r[7]); // 800E13D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E13DC
  c->r[0]=R32(c->r[8]+0x00000178u); // 800E13E0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E13E4
  goto L_800E1450; // 800E13E8
L_800E13EC:;
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800E13EC
  c->r[6]=0u+0x00000026u; // 800E13F0
  c->r[3]=0u+0xCC010000u; // 800E13F4
  c->r[0]=0u+0x00000061u; // 800E13F8
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 800E13FC
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 800E1400
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 800E1404
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E1408
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 800E140C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1410
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 800E1414
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1418
  goto L_800E1450; // 800E141C
L_800E1420:;
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800E1420
  c->r[6]=0u+0x00000026u; // 800E1424
  c->r[3]=0u+0xCC010000u; // 800E1428
  c->r[0]=0u+0x00000061u; // 800E142C
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 800E1430
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 800E1434
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 800E1438
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E143C
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 800E1440
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1444
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 800E1448
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E144C
L_800E1450:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E1450
  c->r[0]=0u+0x00000000u; // 800E1454
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1458
  return; // 800E145C
}

// GXSetIndTexOrder
void f_800E1460(Ctx* __restrict c) {
  trace_call(0x800E1460u);
  cmps(c,0,(int32_t)c->r[5],255); // 800E1460
  if (!crb(c,2)) { goto L_800E146C; } // 800E1464
  c->r[5]=0u+0x00000000u; // 800E1468
L_800E146C:;
  cmps(c,0,(int32_t)c->r[4],255); // 800E146C
  if (!crb(c,2)) { goto L_800E1478; } // 800E1470
  c->r[4]=0u+0x00000000u; // 800E1474
L_800E1478:;
  cmps(c,0,(int32_t)c->r[3],0); // 800E1478
  if (crb(c,2)) { goto L_800E149C; } // 800E147C
  cmps(c,0,(int32_t)c->r[3],1); // 800E1480
  if (crb(c,2)) { goto L_800E14B4; } // 800E1484
  cmps(c,0,(int32_t)c->r[3],2); // 800E1488
  if (crb(c,2)) { goto L_800E14CC; } // 800E148C
  cmps(c,0,(int32_t)c->r[3],3); // 800E1490
  if (crb(c,2)) { goto L_800E14E4; } // 800E1494
  goto L_800E14F8; // 800E1498
L_800E149C:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E149C
  c->r[0]=R32(c->r[3]+0x00000170u); // 800E14A0
  c->r[0]=(rotl(c->r[5],0)&0x00000007u)|(c->r[0]&~0x00000007u); // 800E14A4
  c->r[0]=(rotl(c->r[4],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 800E14A8
  W32(c->r[3]+0x00000170u,c->r[0]); // 800E14AC
  goto L_800E14F8; // 800E14B0
L_800E14B4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E14B4
  c->r[0]=R32(c->r[3]+0x00000170u); // 800E14B8
  c->r[0]=(rotl(c->r[5],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 800E14BC
  c->r[0]=(rotl(c->r[4],9)&0x00000E00u)|(c->r[0]&~0x00000E00u); // 800E14C0
  W32(c->r[3]+0x00000170u,c->r[0]); // 800E14C4
  goto L_800E14F8; // 800E14C8
L_800E14CC:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E14CC
  c->r[0]=R32(c->r[3]+0x00000170u); // 800E14D0
  c->r[0]=(rotl(c->r[5],12)&0x00007000u)|(c->r[0]&~0x00007000u); // 800E14D4
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800E14D8
  W32(c->r[3]+0x00000170u,c->r[0]); // 800E14DC
  goto L_800E14F8; // 800E14E0
L_800E14E4:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E14E4
  c->r[0]=R32(c->r[3]+0x00000170u); // 800E14E8
  c->r[0]=(rotl(c->r[5],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800E14EC
  c->r[0]=(rotl(c->r[4],21)&0x00E00000u)|(c->r[0]&~0x00E00000u); // 800E14F0
  W32(c->r[3]+0x00000170u,c->r[0]); // 800E14F4
L_800E14F8:;
  c->r[4]=0u+0xCC010000u; // 800E14F8
  c->r[0]=0u+0x00000061u; // 800E14FC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1500
  c->r[0]=0u+0x00000000u; // 800E1504
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E1508
  c->r[3]=R32(c->r[5]+0x00000170u); // 800E150C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E1510
  c->r[3]=R32(c->r[5]+0x000005FCu); // 800E1514
  c->r[3]=c->r[3]|0x00000003u; // 800E1518
  W32(c->r[5]+0x000005FCu,c->r[3]); // 800E151C
  W16(c->r[5]+0x00000002u,c->r[0]); // 800E1520
  return; // 800E1524
}

// GXSetNumIndStages
void f_800E1530(Ctx* __restrict c) {
  trace_call(0x800E1530u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E1530
  c->r[0]=R32(c->r[4]+0x00000254u); // 800E1534
  c->r[0]=(rotl(c->r[3],16)&0x00070000u)|(c->r[0]&~0x00070000u); // 800E1538
  W32(c->r[4]+0x00000254u,c->r[0]); // 800E153C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800E1540
  c->r[0]=c->r[0]|0x00000006u; // 800E1544
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800E1548
  return; // 800E154C
}

// GXSetTevDirect
void f_800E1550(Ctx* __restrict c) {
  trace_call(0x800E1550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1550
  c->r[0]=c->lr; // 800E1554
  c->r[4]=0u+0x00000000u; // 800E1558
  c->r[5]=0u+0x00000000u; // 800E155C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1560
  c->r[0]=0u+0x00000000u; // 800E1564
  c->r[6]=0u+0x00000000u; // 800E1568
  c->r[7]=0u+0x00000000u; // 800E156C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800E1570
  c->r[8]=0u+0x00000000u; // 800E1574
  c->r[9]=0u+0x00000000u; // 800E1578
  c->r[10]=0u+0x00000000u; // 800E157C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E1580
  c->lr=0x800E1588u; f_800E11B0(c); // 800E1584
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1588
  c->lr=c->r[0]; // 800E158C
  c->r[1]=c->r[1]+0x00000010u; // 800E1590
  return; // 800E1594
}

// __GXUpdateBPMask
void f_800E15A0(Ctx* __restrict c) {
  trace_call(0x800E15A0u);
  return; // 800E15A0
}

// __GXSetIndirectMask
void f_800E15B0(Ctx* __restrict c) {
  trace_call(0x800E15B0u);
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800E15B0
  c->r[4]=0u+0xCC010000u; // 800E15B4
  c->r[5]=0u+0x00000061u; // 800E15B8
  c->r[0]=0u+0x00000000u; // 800E15BC
  c->r[6]=R32(c->r[7]+0x00000174u); // 800E15C0
  c->r[6]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800E15C4
  W32(c->r[7]+0x00000174u,c->r[6]); // 800E15C8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E15CC
  c->r[3]=R32(c->r[7]+0x00000174u); // 800E15D0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E15D4
  W16(c->r[7]+0x00000002u,c->r[0]); // 800E15D8
  return; // 800E15DC
}

// __GXFlushTextureState
void f_800E15E0(Ctx* __restrict c) {
  trace_call(0x800E15E0u);
  c->r[4]=0u+0xCC010000u; // 800E15E0
  c->r[0]=0u+0x00000061u; // 800E15E4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E15E8
  c->r[0]=0u+0x00000000u; // 800E15EC
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E15F0
  c->r[3]=R32(c->r[5]+0x00000174u); // 800E15F4
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E15F8
  W16(c->r[5]+0x00000002u,c->r[0]); // 800E15FC
  return; // 800E1600
}

// GXSetTevOp
void f_800E1610(Ctx* __restrict c) {
  trace_call(0x800E1610u);
  cmps(c,0,(int32_t)c->r[3],0); // 800E1610
  c->r[5]=0u+0x802B0000u; // 800E1614
  c->r[5]=c->r[5]+0xFFFFF510u; // 800E1618
  if (!crb(c,2)) { goto L_800E1638; } // 800E161C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E1620
  c->r[4]=c->r[5]+0x00000000u; // 800E1624
  c->r[0]=c->r[5]+0x00000028u; // 800E1628
  c->r[8]=c->r[4]+c->r[6]; // 800E162C
  c->r[9]=c->r[0]+c->r[6]; // 800E1630
  goto L_800E164C; // 800E1634
L_800E1638:;
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E1638
  c->r[4]=c->r[5]+0x00000014u; // 800E163C
  c->r[0]=c->r[5]+0x0000003Cu; // 800E1640
  c->r[8]=c->r[4]+c->r[6]; // 800E1644
  c->r[9]=c->r[0]+c->r[6]; // 800E1648
L_800E164C:;
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800E164C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E1650
  c->r[3]=R32(c->r[8]+0x00000000u); // 800E1654
  c->r[4]=0u+0xCC010000u; // 800E1658
  c->r[6]=c->r[7]+c->r[0]; // 800E165C
  c->r[5]=0u+0x00000061u; // 800E1660
  c->r[8]=R32(c->r[6]+0x00000180u); // 800E1664
  c->r[0]=0u+0x00000000u; // 800E1668
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E166C
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; // 800E1670
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 800E1674
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800E1678
  W32(c->r[6]+0x00000180u,c->r[8]); // 800E167C
  c->r[8]=R32(c->r[6]+0x000001C0u); // 800E1680
  c->r[3]=R32(c->r[9]+0x00000000u); // 800E1684
  c->r[8]=rotl(c->r[8],0)&0xFF00000Fu; // 800E1688
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E168C
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFF0u)|(c->r[8]&~0x00FFFFF0u); // 800E1690
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800E1694
  W32(c->r[6]+0x000001C0u,c->r[8]); // 800E1698
  W16(c->r[7]+0x00000002u,c->r[0]); // 800E169C
  return; // 800E16A0
}

// GXSetTevColorIn
void f_800E16B0(Ctx* __restrict c) {
  trace_call(0x800E16B0u);
  c->r[11]=R32(c->r[2]+0xFFFF9A80u); // 800E16B0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E16B4
  c->r[3]=0u+0xCC010000u; // 800E16B8
  c->r[8]=0u+0x00000061u; // 800E16BC
  c->r[10]=c->r[11]+c->r[0]; // 800E16C0
  c->r[0]=0u+0x00000000u; // 800E16C4
  c->r[9]=R32(c->r[10]+0x00000180u); // 800E16C8
  c->r[9]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 800E16CC
  c->r[9]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[9]&~0x00000F00u); // 800E16D0
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 800E16D4
  c->r[9]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[9]&~0x000000F0u); // 800E16D8
  c->r[9]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[9]&~0x0000000Fu); // 800E16DC
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800E16E0
  W32(c->r[10]+0x00000180u,c->r[9]); // 800E16E4
  W16(c->r[11]+0x00000002u,c->r[0]); // 800E16E8
  return; // 800E16EC
}

// GXSetTevAlphaIn
void f_800E16F0(Ctx* __restrict c) {
  trace_call(0x800E16F0u);
  c->r[11]=R32(c->r[2]+0xFFFF9A80u); // 800E16F0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E16F4
  c->r[3]=0u+0xCC010000u; // 800E16F8
  c->r[8]=0u+0x00000061u; // 800E16FC
  c->r[10]=c->r[11]+c->r[0]; // 800E1700
  c->r[0]=0u+0x00000000u; // 800E1704
  c->r[9]=R32(c->r[10]+0x000001C0u); // 800E1708
  c->r[9]=(rotl(c->r[4],13)&0x0000E000u)|(c->r[9]&~0x0000E000u); // 800E170C
  c->r[9]=(rotl(c->r[5],10)&0x00001C00u)|(c->r[9]&~0x00001C00u); // 800E1710
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 800E1714
  c->r[9]=(rotl(c->r[6],7)&0x00000380u)|(c->r[9]&~0x00000380u); // 800E1718
  c->r[9]=(rotl(c->r[7],4)&0x00000070u)|(c->r[9]&~0x00000070u); // 800E171C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800E1720
  W32(c->r[10]+0x000001C0u,c->r[9]); // 800E1724
  W16(c->r[11]+0x00000002u,c->r[0]); // 800E1728
  return; // 800E172C
}

// GXSetTevColorOp
void f_800E1730(Ctx* __restrict c) {
  trace_call(0x800E1730u);
  c->r[10]=R32(c->r[2]+0xFFFF9A80u); // 800E1730
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E1734
  cmps(c,0,(int32_t)c->r[4],1); // 800E1738
  c->r[9]=c->r[10]+c->r[0]; // 800E173C
  c->r[11]=R32(c->r[9]+0x00000180u); // 800E1740
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 800E1744
  if (crb(c,1)) { goto L_800E1758; } // 800E1748
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 800E174C
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 800E1750
  goto L_800E1760; // 800E1754
L_800E1758:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 800E1758
  c->r[11]=c->r[11]|0x00030000u; // 800E175C
L_800E1760:;
  c->r[3]=0u+0xCC010000u; // 800E1760
  c->r[0]=0u+0x00000061u; // 800E1764
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E1768
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 800E176C
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 800E1770
  c->r[0]=0u+0x00000000u; // 800E1774
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800E1778
  W32(c->r[9]+0x00000180u,c->r[11]); // 800E177C
  W16(c->r[10]+0x00000002u,c->r[0]); // 800E1780
  return; // 800E1784
}

// GXSetTevAlphaOp
void f_800E1790(Ctx* __restrict c) {
  trace_call(0x800E1790u);
  c->r[10]=R32(c->r[2]+0xFFFF9A80u); // 800E1790
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E1794
  cmps(c,0,(int32_t)c->r[4],1); // 800E1798
  c->r[9]=c->r[10]+c->r[0]; // 800E179C
  c->r[11]=R32(c->r[9]+0x000001C0u); // 800E17A0
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 800E17A4
  if (crb(c,1)) { goto L_800E17B8; } // 800E17A8
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 800E17AC
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 800E17B0
  goto L_800E17C0; // 800E17B4
L_800E17B8:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 800E17B8
  c->r[11]=c->r[11]|0x00030000u; // 800E17BC
L_800E17C0:;
  c->r[3]=0u+0xCC010000u; // 800E17C0
  c->r[0]=0u+0x00000061u; // 800E17C4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E17C8
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 800E17CC
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 800E17D0
  c->r[0]=0u+0x00000000u; // 800E17D4
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800E17D8
  W32(c->r[9]+0x000001C0u,c->r[11]); // 800E17DC
  W16(c->r[10]+0x00000002u,c->r[0]); // 800E17E0
  return; // 800E17E4
}

// GXSetTevColor
void f_800E17F0(Ctx* __restrict c) {
  trace_call(0x800E17F0u);
  c->r[8]=R32(c->r[4]+0x00000000u); // 800E17F0
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800E17F4
  c->r[4]=0u+0xCC010000u; // 800E17F8
  c->r[5]=0u+0x00000061u; // 800E17FC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1800
  c->r[0]=c->r[3]+0x000000E0u; // 800E1804
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800E1808
  c->r[7]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800E180C
  c->r[0]=c->r[3]+0x000000E1u; // 800E1810
  c->r[7]=(rotl(c->r[8],12)&0x000FF000u)|(c->r[7]&~0x000FF000u); // 800E1814
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 800E1818
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800E181C
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E1820
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1824
  c->r[6]=(rotl(c->r[8],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800E1828
  c->r[6]=(rotl(c->r[8],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 800E182C
  c->r[0]=0u+0x00000000u; // 800E1830
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1834
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1838
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E183C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1840
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1844
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1848
  return; // 800E184C
}

// GXSetTevColorS10
void f_800E1850(Ctx* __restrict c) {
  trace_call(0x800E1850u);
  c->r[8]=R32(c->r[4]+0x00000000u); // 800E1850
  c->r[6]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800E1854
  c->r[9]=R32(c->r[4]+0x00000004u); // 800E1858
  c->r[5]=0u+0xCC010000u; // 800E185C
  c->r[4]=0u+0x00000061u; // 800E1860
  c->r[0]=c->r[6]+0x000000E0u; // 800E1864
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800E1868
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800E186C
  c->r[7]=(rotl(c->r[8],16)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 800E1870
  c->r[6]=c->r[6]+0x000000E1u; // 800E1874
  c->r[7]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[7]&~0x007FF000u); // 800E1878
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 800E187C
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 800E1880
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E1884
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800E1888
  c->r[6]=(rotl(c->r[9],16)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 800E188C
  c->r[6]=(rotl(c->r[8],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 800E1890
  c->r[0]=0u+0x00000000u; // 800E1894
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800E1898
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800E189C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800E18A0
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800E18A4
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800E18A8
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E18AC
  return; // 800E18B0
}

// GXSetTevKColor
void f_800E18C0(Ctx* __restrict c) {
  trace_call(0x800E18C0u);
  c->r[9]=R32(c->r[4]+0x00000000u); // 800E18C0
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800E18C4
  c->r[4]=0u+0xCC010000u; // 800E18C8
  c->r[5]=0u+0x00000061u; // 800E18CC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E18D0
  c->r[0]=c->r[3]+0x000000E0u; // 800E18D4
  c->r[7]=0u+0x00000008u; // 800E18D8
  c->r[8]=rotl(c->r[0],24)&0xFF000000u; // 800E18DC
  c->r[0]=c->r[3]+0x000000E1u; // 800E18E0
  c->r[8]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 800E18E4
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E18E8
  c->r[8]=(rotl(c->r[9],12)&0x000FF000u)|(c->r[8]&~0x000FF000u); // 800E18EC
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800E18F0
  c->r[8]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 800E18F4
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800E18F8
  c->r[6]=(rotl(c->r[9],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800E18FC
  c->r[0]=0u+0x00000000u; // 800E1900
  c->r[6]=(rotl(c->r[9],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 800E1904
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1908
  c->r[6]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[6]&~0x00F00000u); // 800E190C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1910
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1914
  return; // 800E1918
}

// GXSetTevKColorSel
void f_800E1920(Ctx* __restrict c) {
  trace_call(0x800E1920u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E1920
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E1924
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 800E1928
  c->r[3]=c->r[5]+c->r[0]; // 800E192C
  if (crb(c,2)) { goto L_800E1944; } // 800E1930
  c->r[0]=R32(c->r[3]+0x00000200u); // 800E1934
  c->r[0]=(rotl(c->r[4],14)&0x0007C000u)|(c->r[0]&~0x0007C000u); // 800E1938
  W32(c->r[3]+0x00000200u,c->r[0]); // 800E193C
  goto L_800E1950; // 800E1940
L_800E1944:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 800E1944
  c->r[0]=(rotl(c->r[4],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800E1948
  W32(c->r[3]+0x00000200u,c->r[0]); // 800E194C
L_800E1950:;
  c->r[4]=0u+0xCC010000u; // 800E1950
  c->r[0]=0u+0x00000061u; // 800E1954
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1958
  c->r[0]=0u+0x00000000u; // 800E195C
  c->r[3]=R32(c->r[3]+0x00000200u); // 800E1960
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E1964
  W16(c->r[5]+0x00000002u,c->r[0]); // 800E1968
  return; // 800E196C
}

// GXSetTevKAlphaSel
void f_800E1970(Ctx* __restrict c) {
  trace_call(0x800E1970u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E1970
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E1974
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 800E1978
  c->r[3]=c->r[5]+c->r[0]; // 800E197C
  if (crb(c,2)) { goto L_800E1994; } // 800E1980
  c->r[0]=R32(c->r[3]+0x00000200u); // 800E1984
  c->r[0]=(rotl(c->r[4],19)&0x00F80000u)|(c->r[0]&~0x00F80000u); // 800E1988
  W32(c->r[3]+0x00000200u,c->r[0]); // 800E198C
  goto L_800E19A0; // 800E1990
L_800E1994:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 800E1994
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 800E1998
  W32(c->r[3]+0x00000200u,c->r[0]); // 800E199C
L_800E19A0:;
  c->r[4]=0u+0xCC010000u; // 800E19A0
  c->r[0]=0u+0x00000061u; // 800E19A4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E19A8
  c->r[0]=0u+0x00000000u; // 800E19AC
  c->r[3]=R32(c->r[3]+0x00000200u); // 800E19B0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E19B4
  W16(c->r[5]+0x00000002u,c->r[0]); // 800E19B8
  return; // 800E19BC
}

// GXSetTevSwapMode
void f_800E19C0(Ctx* __restrict c) {
  trace_call(0x800E19C0u);
  c->r[9]=R32(c->r[2]+0xFFFF9A80u); // 800E19C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E19C4
  c->r[6]=0u+0xCC010000u; // 800E19C8
  c->r[3]=0u+0x00000061u; // 800E19CC
  c->r[8]=c->r[9]+c->r[0]; // 800E19D0
  c->r[0]=0u+0x00000000u; // 800E19D4
  c->r[7]=R32(c->r[8]+0x000001C0u); // 800E19D8
  c->r[7]=(rotl(c->r[4],0)&0x00000003u)|(c->r[7]&~0x00000003u); // 800E19DC
  c->r[7]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[7]&~0x0000000Cu); // 800E19E0
  W32(c->r[8]+0x000001C0u,c->r[7]); // 800E19E4
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 800E19E8
  c->r[3]=R32(c->r[8]+0x000001C0u); // 800E19EC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E19F0
  W16(c->r[9]+0x00000002u,c->r[0]); // 800E19F4
  return; // 800E19F8
}

// GXSetTevSwapModeTable
void f_800E1A00(Ctx* __restrict c) {
  trace_call(0x800E1A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1A00
  c->r[11]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800E1A04
  c->r[12]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800E1A08
  c->r[8]=0u+0xCC010000u; // 800E1A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1A10
  c->r[9]=0u+0x00000061u; // 800E1A14
  c->r[3]=c->r[12]+0x00000001u; // 800E1A18
  c->r[0]=0u+0x00000000u; // 800E1A1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1A20
  c->r[30]=R32(c->r[2]+0xFFFF9A80u); // 800E1A24
  c->r[31]=c->r[30]+0x00000200u; // 800E1A28
  c->r[10]=R32(c->r[31]+c->r[11]); // 800E1A2C
  c->r[10]=(rotl(c->r[4],0)&0x00000003u)|(c->r[10]&~0x00000003u); // 800E1A30
  c->r[10]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[10]&~0x0000000Cu); // 800E1A34
  W32(c->r[31]+c->r[11],c->r[10]); // 800E1A38
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E1A3C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800E1A40
  c->r[3]=R32(c->r[31]+c->r[11]); // 800E1A44
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800E1A48
  c->r[3]=R32(c->r[31]+c->r[4]); // 800E1A4C
  c->r[3]=(rotl(c->r[6],0)&0x00000003u)|(c->r[3]&~0x00000003u); // 800E1A50
  c->r[3]=(rotl(c->r[7],2)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 800E1A54
  W32(c->r[31]+c->r[4],c->r[3]); // 800E1A58
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800E1A5C
  c->r[3]=R32(c->r[31]+c->r[4]); // 800E1A60
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800E1A64
  W16(c->r[30]+0x00000002u,c->r[0]); // 800E1A68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1A6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1A70
  c->r[1]=c->r[1]+0x00000010u; // 800E1A74
  return; // 800E1A78
}

// GXSetAlphaCompare
void f_800E1A80(Ctx* __restrict c) {
  trace_call(0x800E1A80u);
  c->r[8]=0u+0xCC010000u; // 800E1A80
  c->r[0]=0u+0x00000061u; // 800E1A84
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 800E1A88
  c->r[9]=0u+0xF3000000u; // 800E1A8C
  c->r[9]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 800E1A90
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E1A94
  c->r[9]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 800E1A98
  c->r[0]=0u+0x00000000u; // 800E1A9C
  c->r[9]=(rotl(c->r[3],16)&0x00070000u)|(c->r[9]&~0x00070000u); // 800E1AA0
  c->r[9]=(rotl(c->r[6],19)&0x00380000u)|(c->r[9]&~0x00380000u); // 800E1AA4
  c->r[9]=(rotl(c->r[5],22)&0x00C00000u)|(c->r[9]&~0x00C00000u); // 800E1AA8
  W32(c->r[8]+0xFFFF8000u,c->r[9]); // 800E1AAC
  W16(c->r[4]+0x00000002u,c->r[0]); // 800E1AB0
  return; // 800E1AB4
}

// GXSetZTexture
void f_800E1AC0(Ctx* __restrict c) {
  trace_call(0x800E1AC0u);
  cmps(c,0,(int32_t)c->r[4],17); // 800E1AC0
  c->r[7]=0u+0x00000000u; // 800E1AC4
  c->r[0]=0u+0x000000F4u; // 800E1AC8
  c->r[7]=(rotl(c->r[5],0)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 800E1ACC
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E1AD0
  if (crb(c,2)) { goto L_800E1AEC; } // 800E1AD4
  cmps(c,0,(int32_t)c->r[4],19); // 800E1AD8
  if (crb(c,2)) { goto L_800E1AF4; } // 800E1ADC
  cmps(c,0,(int32_t)c->r[4],22); // 800E1AE0
  if (crb(c,2)) { goto L_800E1AFC; } // 800E1AE4
  goto L_800E1B04; // 800E1AE8
L_800E1AEC:;
  c->r[5]=0u+0x00000000u; // 800E1AEC
  goto L_800E1B08; // 800E1AF0
L_800E1AF4:;
  c->r[5]=0u+0x00000001u; // 800E1AF4
  goto L_800E1B08; // 800E1AF8
L_800E1AFC:;
  c->r[5]=0u+0x00000002u; // 800E1AFC
  goto L_800E1B08; // 800E1B00
L_800E1B04:;
  c->r[5]=0u+0x00000002u; // 800E1B04
L_800E1B08:;
  c->r[4]=0u+0xCC010000u; // 800E1B08
  c->r[0]=0u+0x00000061u; // 800E1B0C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1B10
  c->r[6]=0u+0x00000000u; // 800E1B14
  c->r[6]=(rotl(c->r[5],0)&0x00000003u)|(c->r[6]&~0x00000003u); // 800E1B18
  c->r[5]=0u+0x000000F5u; // 800E1B1C
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 800E1B20
  c->r[6]=(rotl(c->r[3],2)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 800E1B24
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E1B28
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E1B2C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1B30
  c->r[0]=0u+0x00000000u; // 800E1B34
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1B38
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1B3C
  return; // 800E1B40
}

// GXSetTevOrder
void f_800E1B50(Ctx* __restrict c) {
  trace_call(0x800E1B50u);
  c->r[11]=rotl(c->r[5],0)&0xFFFFFEFFu; // 800E1B50
  c->r[7]=0u+0x00000008u; // 800E1B54
  c->r[9]=rotl(c->r[3],1)&0x00000001u; // 800E1B58
  c->r[10]=R32(c->r[2]+0xFFFF9A80u); // 800E1B5C
  c->r[0]=addc(c,~c->r[7],c->r[11],1); // 800E1B60
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E1B64
  c->r[0]=addc(c,c->r[7],0,c->xer_ca); // 800E1B68
  c->r[9]=c->r[9]+c->r[3]; // 800E1B6C
  c->r[7]=c->r[10]+c->r[8]; // 800E1B70
  cmps(c,0,(int32_t)c->r[4],8); // 800E1B74
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFCu; // 800E1B78
  c->r[0]=addc(c,~c->r[0],0x00000008u,1); // 800E1B7C
  W32(c->r[7]+0x000005A4u,c->r[5]); // 800E1B80
  c->r[7]=c->r[10]+c->r[8]; // 800E1B84
  c->r[9]=c->r[11]&~c->r[0]; // 800E1B88
  if (crb(c,0)) { goto L_800E1BAC; } // 800E1B8C
  c->r[0]=0u+0x00000001u; // 800E1B90
  c->r[8]=R32(c->r[10]+0x000005E8u); // 800E1B94
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800E1B98
  c->r[4]=0u+0x00000000u; // 800E1B9C
  c->r[0]=c->r[8]&~c->r[0]; // 800E1BA0
  W32(c->r[10]+0x000005E8u,c->r[0]); // 800E1BA4
  goto L_800E1BC0; // 800E1BA8
L_800E1BAC:;
  c->r[0]=0u+0x00000001u; // 800E1BAC
  c->r[8]=R32(c->r[10]+0x000005E8u); // 800E1BB0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800E1BB4
  c->r[0]=c->r[8]|c->r[0]; // 800E1BB8
  W32(c->r[10]+0x000005E8u,c->r[0]); // 800E1BBC
L_800E1BC0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E1BC0
  if (crb(c,2)) { goto L_800E1C24; } // 800E1BC4
  c->r[8]=R32(c->r[7]+0x00000150u); // 800E1BC8
  cmps(c,0,(int32_t)c->r[6],255); // 800E1BCC
  c->r[8]=(rotl(c->r[9],12)&0x00007000u)|(c->r[8]&~0x00007000u); // 800E1BD0
  c->r[8]=(rotl(c->r[4],15)&0x00038000u)|(c->r[8]&~0x00038000u); // 800E1BD4
  W32(c->r[7]+0x00000150u,c->r[8]); // 800E1BD8
  if (!crb(c,2)) { goto L_800E1BE8; } // 800E1BDC
  c->r[0]=0u+0x00000007u; // 800E1BE0
  goto L_800E1BF8; // 800E1BE4
L_800E1BE8:;
  c->r[3]=0u+0x802B0000u; // 800E1BE8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800E1BEC
  c->r[3]=c->r[3]+0xFFFFF560u; // 800E1BF0
  c->r[0]=R32(c->r[3]+c->r[0]); // 800E1BF4
L_800E1BF8:;
  cmps(c,0,(int32_t)c->r[5],255); // 800E1BF8
  c->r[8]=(rotl(c->r[0],19)&0x00380000u)|(c->r[8]&~0x00380000u); // 800E1BFC
  W32(c->r[7]+0x00000150u,c->r[8]); // 800E1C00
  c->r[3]=0u+0x00000000u; // 800E1C04
  if (crb(c,2)) { goto L_800E1C18; } // 800E1C08
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 800E1C0C
  if (!crb(c,2)) { goto L_800E1C18; } // 800E1C10
  c->r[3]=0u+0x00000001u; // 800E1C14
L_800E1C18:;
  c->r[8]=(rotl(c->r[3],18)&0x00040000u)|(c->r[8]&~0x00040000u); // 800E1C18
  W32(c->r[7]+0x00000150u,c->r[8]); // 800E1C1C
  goto L_800E1C7C; // 800E1C20
L_800E1C24:;
  c->r[8]=R32(c->r[7]+0x00000150u); // 800E1C24
  cmps(c,0,(int32_t)c->r[6],255); // 800E1C28
  c->r[8]=(rotl(c->r[9],0)&0x00000007u)|(c->r[8]&~0x00000007u); // 800E1C2C
  c->r[8]=(rotl(c->r[4],3)&0x00000038u)|(c->r[8]&~0x00000038u); // 800E1C30
  W32(c->r[7]+0x00000150u,c->r[8]); // 800E1C34
  if (!crb(c,2)) { goto L_800E1C44; } // 800E1C38
  c->r[0]=0u+0x00000007u; // 800E1C3C
  goto L_800E1C54; // 800E1C40
L_800E1C44:;
  c->r[3]=0u+0x802B0000u; // 800E1C44
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800E1C48
  c->r[3]=c->r[3]+0xFFFFF560u; // 800E1C4C
  c->r[0]=R32(c->r[3]+c->r[0]); // 800E1C50
L_800E1C54:;
  cmps(c,0,(int32_t)c->r[5],255); // 800E1C54
  c->r[8]=(rotl(c->r[0],7)&0x00000380u)|(c->r[8]&~0x00000380u); // 800E1C58
  W32(c->r[7]+0x00000150u,c->r[8]); // 800E1C5C
  c->r[3]=0u+0x00000000u; // 800E1C60
  if (crb(c,2)) { goto L_800E1C74; } // 800E1C64
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 800E1C68
  if (!crb(c,2)) { goto L_800E1C74; } // 800E1C6C
  c->r[3]=0u+0x00000001u; // 800E1C70
L_800E1C74:;
  c->r[8]=(rotl(c->r[3],6)&0x00000040u)|(c->r[8]&~0x00000040u); // 800E1C74
  W32(c->r[7]+0x00000150u,c->r[8]); // 800E1C78
L_800E1C7C:;
  c->r[4]=0u+0xCC010000u; // 800E1C7C
  c->r[0]=0u+0x00000061u; // 800E1C80
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1C84
  c->r[0]=0u+0x00000000u; // 800E1C88
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E1C8C
  c->r[3]=R32(c->r[7]+0x00000150u); // 800E1C90
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E1C94
  W16(c->r[5]+0x00000002u,c->r[0]); // 800E1C98
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800E1C9C
  c->r[0]=c->r[0]|0x00000001u; // 800E1CA0
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800E1CA4
  return; // 800E1CA8
}

// GXSetNumTevStages
void f_800E1CB0(Ctx* __restrict c) {
  trace_call(0x800E1CB0u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E1CB0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E1CB4
  c->r[3]=R32(c->r[4]+0x00000254u); // 800E1CB8
  c->r[3]=(rotl(c->r[0],10)&0x00003C00u)|(c->r[3]&~0x00003C00u); // 800E1CBC
  W32(c->r[4]+0x00000254u,c->r[3]); // 800E1CC0
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800E1CC4
  c->r[0]=c->r[0]|0x00000004u; // 800E1CC8
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800E1CCC
  return; // 800E1CD0
}

// GXSetFog
void f_800E1CE0(Ctx* __restrict c) {
  trace_call(0x800E1CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1CE0
  c->r[0]=c->lr; // 800E1CE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E1CE8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E1CEC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E1CF0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E1CF4
  c->r[31]=rotl(c->r[3],0)&0x00000007u; // 800E1CF8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E1CFC
  c->r[30]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[30]); // 800E1D00
  W32(c->r[1]+0x00000024u,c->r[29]); // 800E1D04
  c->r[29]=c->r[4]|c->r[4]; // 800E1D08
  W32(c->r[1]+0x00000020u,c->r[28]); // 800E1D0C
  if (crb(c,2)) { goto L_800E1D5C; } // 800E1D10
  fcmp(c,0,c->f[4],c->f[3]); // 800E1D14
  if (crb(c,2)) { goto L_800E1D24; } // 800E1D18
  fcmp(c,0,c->f[2],c->f[1]); // 800E1D1C
  if (!crb(c,2)) { goto L_800E1D34; } // 800E1D20
L_800E1D24:;
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1D24
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E1D28
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800E1D2C
  goto L_800E1E64; // 800E1D30
L_800E1D34:;
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[1]); // 800E1D34
  {uint32_t ea=c->r[2]+0xFFFF9AECu; c->f[5]=c->ps1[5]=RF32(ea);} // 800E1D38
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 800E1D3C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 800E1D40
  c->f[3]=c->ps1[3]=S(c->f[5]/c->f[6]); // 800E1D44
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800E1D48
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800E1D4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E1D50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800E1D54
  goto L_800E1E64; // 800E1D58
L_800E1D5C:;
  fcmp(c,0,c->f[4],c->f[3]); // 800E1D5C
  if (crb(c,2)) { goto L_800E1D6C; } // 800E1D60
  fcmp(c,0,c->f[2],c->f[1]); // 800E1D64
  if (!crb(c,2)) { goto L_800E1D7C; } // 800E1D68
L_800E1D6C:;
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E1D6C
  {uint32_t ea=c->r[2]+0xFFFF9AF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E1D70
  c->f[31]=c->f[3]; // 800E1D74
  goto L_800E1D98; // 800E1D78
L_800E1D7C:;
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 800E1D7C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800E1D80
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800E1D84
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 800E1D88
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800E1D8C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 800E1D90
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 800E1D94
L_800E1D98:;
  {uint32_t ea=c->r[2]+0xFFFF9AF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1D98
  c->r[28]=0u+0x00000000u; // 800E1D9C
  {uint32_t ea=c->r[2]+0xFFFF9AF8u; c->f[0]=RF64(ea);} // 800E1DA0
  goto L_800E1DB0; // 800E1DA4
L_800E1DA8:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 800E1DA8
  c->r[28]=c->r[28]+0x00000001u; // 800E1DAC
L_800E1DB0:;
  fcmp(c,0,c->f[4],c->f[0]); // 800E1DB0
  if (crb(c,1)) { IRQCHK(c); goto L_800E1DA8; } // 800E1DB4
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[0]=RF64(ea);} // 800E1DB8
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1DBC
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1DC0
  goto L_800E1DD0; // 800E1DC4
L_800E1DC8:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 800E1DC8
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800E1DCC
L_800E1DD0:;
  fcmp(c,0,c->f[4],c->f[1]); // 800E1DD0
  c->r[0]=c->cr; // 800E1DD4
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 800E1DD8
  if (crb(c,2)) { goto L_800E1DE8; } // 800E1DDC
  fcmp(c,0,c->f[4],c->f[0]); // 800E1DE0
  if (crb(c,0)) { IRQCHK(c); goto L_800E1DC8; } // 800E1DE4
L_800E1DE8:;
  c->r[0]=c->r[28]+0x00000001u; // 800E1DE8
  c->r[3]=0u+0x00000001u; // 800E1DEC
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800E1DF0
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1DF4
  c->r[0]=0u+0x43300000u; // 800E1DF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E1DFC
  c->r[3]=c->r[3]^0x80000000u; // 800E1E00
  {uint32_t ea=c->r[2]+0xFFFF9B18u; c->f[2]=RF64(ea);} // 800E1E04
  W32(c->r[1]+0x00000014u,c->r[3]); // 800E1E08
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 800E1E0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800E1E10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800E1E14
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 800E1E18
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E1E1C
  c->lr=0x800E1E24u; f_80217784(c); // 800E1E20
  c->r[4]=0u+0xCC010000u; // 800E1E24
  c->r[0]=0u+0x00000061u; // 800E1E28
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1E2C
  c->r[6]=0u+0x00000000u; // 800E1E30
  c->r[6]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 800E1E34
  c->r[3]=0u+0x000000EFu; // 800E1E38
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E1E3C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1E40
  c->r[5]=c->r[28]+0x00000001u; // 800E1E44
  c->r[3]=0u+0x000000F0u; // 800E1E48
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E1E4C
  c->r[6]=0u+0x00000000u; // 800E1E50
  c->r[6]=(rotl(c->r[5],0)&0x0000001Fu)|(c->r[6]&~0x0000001Fu); // 800E1E54
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E1E58
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 800E1E5C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1E60
L_800E1E64:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800E1E64
  c->r[4]=0u+0xCC010000u; // 800E1E68
  c->r[5]=0u+0x00000061u; // 800E1E6C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800E1E70
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1E74
  c->r[7]=0u+0x00000000u; // 800E1E78
  c->r[3]=0u+0x000000EEu; // 800E1E7C
  c->r[9]=R32(c->r[1]+0x00000008u); // 800E1E80
  c->r[7]=(rotl(c->r[6],20)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 800E1E84
  c->r[8]=0u+0x00000000u; // 800E1E88
  c->r[7]=(rotl(c->r[6],20)&0x0007F800u)|(c->r[7]&~0x0007F800u); // 800E1E8C
  c->r[7]=(rotl(c->r[6],20)&0x00080000u)|(c->r[7]&~0x00080000u); // 800E1E90
  c->r[8]=(rotl(c->r[9],20)&0x000007FFu)|(c->r[8]&~0x000007FFu); // 800E1E94
  c->r[7]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800E1E98
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 800E1E9C
  c->r[8]=(rotl(c->r[9],20)&0x0007F800u)|(c->r[8]&~0x0007F800u); // 800E1EA0
  c->r[6]=0u+0x00000000u; // 800E1EA4
  c->r[8]=(rotl(c->r[9],20)&0x00080000u)|(c->r[8]&~0x00080000u); // 800E1EA8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1EAC
  c->r[8]=(rotl(c->r[30],20)&0x00100000u)|(c->r[8]&~0x00100000u); // 800E1EB0
  c->r[7]=0u+0x000000F1u; // 800E1EB4
  c->r[8]=(rotl(c->r[31],21)&0x00E00000u)|(c->r[8]&~0x00E00000u); // 800E1EB8
  c->r[6]=(rotl(c->r[0],24)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 800E1EBC
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800E1EC0
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800E1EC4
  c->r[0]=0u+0x000000F2u; // 800E1EC8
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E1ECC
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E1ED0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E1ED4
  c->r[0]=0u+0x00000000u; // 800E1ED8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E1EDC
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E1EE0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800E1EE4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E1EE8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E1EEC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E1EF0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800E1EF4
  c->r[28]=R32(c->r[1]+0x00000020u); // 800E1EF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E1EFC
  c->lr=c->r[0]; // 800E1F00
  c->r[1]=c->r[1]+0x00000040u; // 800E1F04
  return; // 800E1F08
}

// fn_800E1F10
void f_800E1F10(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800E1F10
  if (crb(c,2)) { goto L_800E1FE8; } // 800E1F14
  c->r[11]=R16(c->r[5]+0x00000000u); // 800E1F18
  c->r[6]=0u+0xCC010000u; // 800E1F1C
  c->r[0]=0u+0x00000061u; // 800E1F20
  c->r[9]=R16(c->r[5]+0x00000002u); // 800E1F24
  c->r[10]=0u+0x00000000u; // 800E1F28
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E1F2C
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 800E1F30
  c->r[7]=0u+0x000000E9u; // 800E1F34
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 800E1F38
  c->r[11]=R16(c->r[5]+0x00000004u); // 800E1F3C
  c->r[8]=c->r[10]|c->r[10]; // 800E1F40
  c->r[9]=R16(c->r[5]+0x00000006u); // 800E1F44
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800E1F48
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800E1F4C
  c->r[10]=0u+0x00000000u; // 800E1F50
  c->r[7]=0u+0x000000EAu; // 800E1F54
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 800E1F58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E1F5C
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 800E1F60
  c->r[11]=R16(c->r[5]+0x00000008u); // 800E1F64
  c->r[8]=c->r[10]|c->r[10]; // 800E1F68
  c->r[9]=R16(c->r[5]+0x0000000Au); // 800E1F6C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800E1F70
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800E1F74
  c->r[10]=0u+0x00000000u; // 800E1F78
  c->r[7]=0u+0x000000EBu; // 800E1F7C
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 800E1F80
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E1F84
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 800E1F88
  c->r[11]=R16(c->r[5]+0x0000000Cu); // 800E1F8C
  c->r[8]=c->r[10]|c->r[10]; // 800E1F90
  c->r[9]=R16(c->r[5]+0x0000000Eu); // 800E1F94
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800E1F98
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800E1F9C
  c->r[10]=0u+0x00000000u; // 800E1FA0
  c->r[7]=0u+0x000000ECu; // 800E1FA4
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 800E1FA8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E1FAC
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 800E1FB0
  c->r[11]=R16(c->r[5]+0x00000010u); // 800E1FB4
  c->r[8]=c->r[10]|c->r[10]; // 800E1FB8
  c->r[9]=R16(c->r[5]+0x00000012u); // 800E1FBC
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800E1FC0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800E1FC4
  c->r[10]=0u+0x00000000u; // 800E1FC8
  c->r[7]=0u+0x000000EDu; // 800E1FCC
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 800E1FD0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E1FD4
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 800E1FD8
  c->r[8]=c->r[10]|c->r[10]; // 800E1FDC
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800E1FE0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800E1FE4
L_800E1FE8:;
  c->r[5]=0u+0xCC010000u; // 800E1FE8
  c->r[0]=0u+0x00000061u; // 800E1FEC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E1FF0
  c->r[4]=c->r[4]+0x00000156u; // 800E1FF4
  c->r[6]=0u+0x00000000u; // 800E1FF8
  c->r[0]=0u+0x00000000u; // 800E1FFC
  c->r[6]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 800E2000
  c->r[4]=0u+0x000000E8u; // 800E2004
  c->r[6]=(rotl(c->r[3],10)&0x00000400u)|(c->r[6]&~0x00000400u); // 800E2008
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E200C
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E2010
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800E2014
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E2018
  return; // 800E201C
}

// fn_800E2020
void f_800E2020(Ctx* __restrict c) {
  c->r[10]=R32(c->r[2]+0xFFFF9A80u); // 800E2020
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800E2024
  c->r[8]=c->r[3]+0xFFFFFFFEu; // 800E2028
  c->r[7]=0u+0xCC010000u; // 800E202C
  c->r[9]=R32(c->r[10]+0x00000220u); // 800E2030
  c->r[0]=cntlz(c->r[0]); // 800E2034
  c->r[9]=(rotl(c->r[0],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 800E2038
  c->r[8]=cntlz(c->r[8]); // 800E203C
  c->r[0]=0u+0x00000061u; // 800E2040
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 800E2044
  c->r[9]=(rotl(c->r[3],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 800E2048
  c->r[9]=(rotl(c->r[8],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 800E204C
  c->r[0]=0u+0x00000000u; // 800E2050
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 800E2054
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 800E2058
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 800E205C
  W32(c->r[7]+0xFFFF8000u,c->r[9]); // 800E2060
  W32(c->r[10]+0x00000220u,c->r[9]); // 800E2064
  W16(c->r[10]+0x00000002u,c->r[0]); // 800E2068
  return; // 800E206C
}

// GXSetColorUpdate
void f_800E2070(Ctx* __restrict c) {
  trace_call(0x800E2070u);
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800E2070
  c->r[4]=0u+0xCC010000u; // 800E2074
  c->r[5]=0u+0x00000061u; // 800E2078
  c->r[0]=0u+0x00000000u; // 800E207C
  c->r[6]=R32(c->r[7]+0x00000220u); // 800E2080
  c->r[6]=(rotl(c->r[3],3)&0x00000008u)|(c->r[6]&~0x00000008u); // 800E2084
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E2088
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E208C
  W32(c->r[7]+0x00000220u,c->r[6]); // 800E2090
  W16(c->r[7]+0x00000002u,c->r[0]); // 800E2094
  return; // 800E2098
}

// GXSetAlphaUpdate
void f_800E20A0(Ctx* __restrict c) {
  trace_call(0x800E20A0u);
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800E20A0
  c->r[4]=0u+0xCC010000u; // 800E20A4
  c->r[5]=0u+0x00000061u; // 800E20A8
  c->r[0]=0u+0x00000000u; // 800E20AC
  c->r[6]=R32(c->r[7]+0x00000220u); // 800E20B0
  c->r[6]=(rotl(c->r[3],4)&0x00000010u)|(c->r[6]&~0x00000010u); // 800E20B4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E20B8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E20BC
  W32(c->r[7]+0x00000220u,c->r[6]); // 800E20C0
  W16(c->r[7]+0x00000002u,c->r[0]); // 800E20C4
  return; // 800E20C8
}

// GXSetZMode
void f_800E20D0(Ctx* __restrict c) {
  trace_call(0x800E20D0u);
  c->r[9]=R32(c->r[2]+0xFFFF9A80u); // 800E20D0
  c->r[6]=0u+0xCC010000u; // 800E20D4
  c->r[7]=0u+0x00000061u; // 800E20D8
  c->r[0]=0u+0x00000000u; // 800E20DC
  c->r[8]=R32(c->r[9]+0x00000228u); // 800E20E0
  c->r[8]=(rotl(c->r[3],0)&0x00000001u)|(c->r[8]&~0x00000001u); // 800E20E4
  c->r[8]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[8]&~0x0000000Eu); // 800E20E8
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800E20EC
  c->r[8]=(rotl(c->r[5],4)&0x00000010u)|(c->r[8]&~0x00000010u); // 800E20F0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800E20F4
  W32(c->r[9]+0x00000228u,c->r[8]); // 800E20F8
  W16(c->r[9]+0x00000002u,c->r[0]); // 800E20FC
  return; // 800E2100
}

// GXSetZCompLoc
void f_800E2110(Ctx* __restrict c) {
  trace_call(0x800E2110u);
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800E2110
  c->r[4]=0u+0xCC010000u; // 800E2114
  c->r[5]=0u+0x00000061u; // 800E2118
  c->r[0]=0u+0x00000000u; // 800E211C
  c->r[6]=R32(c->r[7]+0x0000022Cu); // 800E2120
  c->r[6]=(rotl(c->r[3],6)&0x00000040u)|(c->r[6]&~0x00000040u); // 800E2124
  W32(c->r[7]+0x0000022Cu,c->r[6]); // 800E2128
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E212C
  c->r[3]=R32(c->r[7]+0x0000022Cu); // 800E2130
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800E2134
  W16(c->r[7]+0x00000002u,c->r[0]); // 800E2138
  return; // 800E213C
}

// fn_800E2140
void f_800E2140(Ctx* __restrict c) {
  c->r[9]=R32(c->r[2]+0xFFFF9A80u); // 800E2140
  c->r[6]=0u+0x802B0000u; // 800E2144
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E2148
  c->r[6]=c->r[6]+0xFFFFF588u; // 800E214C
  c->r[8]=R32(c->r[9]+0x0000022Cu); // 800E2150
  c->r[0]=R32(c->r[6]+c->r[7]); // 800E2154
  c->r[5]=c->r[8]|c->r[8]; // 800E2158
  c->r[5]=(rotl(c->r[0],0)&0x00000007u)|(c->r[5]&~0x00000007u); // 800E215C
  c->r[5]=(rotl(c->r[4],3)&0x00000038u)|(c->r[5]&~0x00000038u); // 800E2160
  W32(c->r[9]+0x0000022Cu,c->r[5]); // 800E2164
  cmpu(c,0,c->r[8],c->r[5]); // 800E2168
  if (crb(c,2)) { goto L_800E21A4; } // 800E216C
  c->r[5]=0u+0xCC010000u; // 800E2170
  c->r[0]=0u+0x00000061u; // 800E2174
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2178
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800E217C
  c->r[4]=cntlz(c->r[0]); // 800E2180
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 800E2184
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2188
  c->r[0]=R32(c->r[9]+0x00000254u); // 800E218C
  c->r[0]=(rotl(c->r[4],4)&0x00000200u)|(c->r[0]&~0x00000200u); // 800E2190
  W32(c->r[9]+0x00000254u,c->r[0]); // 800E2194
  c->r[0]=R32(c->r[9]+0x000005FCu); // 800E2198
  c->r[0]=c->r[0]|0x00000004u; // 800E219C
  W32(c->r[9]+0x000005FCu,c->r[0]); // 800E21A0
L_800E21A4:;
  c->r[0]=R32(c->r[6]+c->r[7]); // 800E21A4
  cmpu(c,0,c->r[0],0x00000004u); // 800E21A8
  if (!crb(c,2)) { goto L_800E21DC; } // 800E21AC
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800E21B0
  c->r[4]=R32(c->r[9]+0x00000224u); // 800E21B4
  c->r[4]=(rotl(c->r[0],9)&0x00000600u)|(c->r[4]&~0x00000600u); // 800E21B8
  c->r[3]=0u+0xCC010000u; // 800E21BC
  c->r[0]=0u+0x00000042u; // 800E21C0
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800E21C4
  W32(c->r[9]+0x00000224u,c->r[4]); // 800E21C8
  c->r[0]=0u+0x00000061u; // 800E21CC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E21D0
  c->r[0]=R32(c->r[9]+0x00000224u); // 800E21D4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E21D8
L_800E21DC:;
  c->r[0]=0u+0x00000000u; // 800E21DC
  W16(c->r[9]+0x00000002u,c->r[0]); // 800E21E0
  return; // 800E21E4
}

// GXSetDither
void f_800E21F0(Ctx* __restrict c) {
  trace_call(0x800E21F0u);
  c->r[7]=R32(c->r[2]+0xFFFF9A80u); // 800E21F0
  c->r[4]=0u+0xCC010000u; // 800E21F4
  c->r[5]=0u+0x00000061u; // 800E21F8
  c->r[0]=0u+0x00000000u; // 800E21FC
  c->r[6]=R32(c->r[7]+0x00000220u); // 800E2200
  c->r[6]=(rotl(c->r[3],2)&0x00000004u)|(c->r[6]&~0x00000004u); // 800E2204
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E2208
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800E220C
  W32(c->r[7]+0x00000220u,c->r[6]); // 800E2210
  W16(c->r[7]+0x00000002u,c->r[0]); // 800E2214
  return; // 800E2218
}

// GXSetDstAlpha
void f_800E2220(Ctx* __restrict c) {
  trace_call(0x800E2220u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800E2220
  c->r[5]=0u+0xCC010000u; // 800E2224
  c->r[6]=0u+0x00000061u; // 800E2228
  c->r[0]=0u+0x00000000u; // 800E222C
  c->r[7]=R32(c->r[8]+0x00000224u); // 800E2230
  c->r[7]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800E2234
  c->r[7]=(rotl(c->r[3],8)&0x00000100u)|(c->r[7]&~0x00000100u); // 800E2238
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800E223C
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 800E2240
  W32(c->r[8]+0x00000224u,c->r[7]); // 800E2244
  W16(c->r[8]+0x00000002u,c->r[0]); // 800E2248
  return; // 800E224C
}

// fn_800E2250
void f_800E2250(Ctx* __restrict c) {
  c->r[5]=0u+0xCC010000u; // 800E2250
  c->r[0]=0u+0x00000061u; // 800E2254
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2258
  c->r[6]=0u+0x00000000u; // 800E225C
  c->r[0]=0u+0x00000044u; // 800E2260
  c->r[6]=(rotl(c->r[4],0)&0x00000001u)|(c->r[6]&~0x00000001u); // 800E2264
  c->r[6]=(rotl(c->r[3],1)&0x00000002u)|(c->r[6]&~0x00000002u); // 800E2268
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E226C
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E2270
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800E2274
  c->r[0]=0u+0x00000000u; // 800E2278
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E227C
  return; // 800E2280
}

// GXSetFieldMode
void f_800E2290(Ctx* __restrict c) {
  trace_call(0x800E2290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2290
  c->r[0]=c->lr; // 800E2294
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E2298
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E229C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E22A0
  c->r[31]=0u+0xCC010000u; // 800E22A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E22A8
  c->r[30]=0u+0x00000061u; // 800E22AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E22B0
  c->r[29]=c->r[3]|c->r[3]; // 800E22B4
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800E22B8
  c->r[0]=(rotl(c->r[4],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 800E22BC
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 800E22C0
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 800E22C4
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800E22C8
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 800E22CC
  c->lr=0x800E22D4u; f_800E15E0(c); // 800E22D0
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 800E22D4
  c->r[0]=c->r[29]|0x68000000u; // 800E22D8
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 800E22DC
  c->lr=0x800E22E4u; f_800E15E0(c); // 800E22E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E22E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E22E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E22EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E22F0
  c->lr=c->r[0]; // 800E22F4
  c->r[1]=c->r[1]+0x00000020u; // 800E22F8
  return; // 800E22FC
}

// fn_800E2300
void f_800E2300(Ctx* __restrict c) {
  c->r[4]=0u+0xCC010000u; // 800E2300
  c->r[0]=0u+0x00000010u; // 800E2304
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2308
  c->r[3]=0u+0x00060000u; // 800E230C
  c->r[0]=c->r[3]+0x00001020u; // 800E2310
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E2314
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2318
  c->r[5]=c->r[4]+0xFFFF8000u; // 800E231C
  {uint32_t ea=c->r[3]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 800E2320
  {uint32_t ea=c->r[3]+0x00000534u; psq_load(c,1,ea,0,0);} // 800E2324
  {uint32_t ea=c->r[3]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 800E2328
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 800E232C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 800E2330
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E2334
  c->r[0]=R32(c->r[3]+0x00000528u); // 800E2338
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E233C
  return; // 800E2340
}

// fn_800E2350
void f_800E2350(Ctx* __restrict c) {
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E2350
  cmps(c,0,(int32_t)c->r[4],1); // 800E2354
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2358
  W32(c->r[5]+0x00000528u,c->r[4]); // 800E235C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2360
  {uint32_t ea=c->r[5]+0x0000052Cu; WF32(ea,c->f[1]);} // 800E2364
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2368
  {uint32_t ea=c->r[5]+0x00000534u; WF32(ea,c->f[0]);} // 800E236C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2370
  {uint32_t ea=c->r[5]+0x0000053Cu; WF32(ea,c->f[1]);} // 800E2374
  {uint32_t ea=c->r[5]+0x00000540u; WF32(ea,c->f[0]);} // 800E2378
  if (!crb(c,2)) { goto L_800E2394; } // 800E237C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2380
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[0]);} // 800E2384
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2388
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 800E238C
  goto L_800E23A4; // 800E2390
L_800E2394:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2394
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[0]);} // 800E2398
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E239C
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 800E23A0
L_800E23A4:;
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800E23A4
  c->r[0]=c->r[0]|0x08000000u; // 800E23A8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800E23AC
  return; // 800E23B0
}

// GXSetProjectionv
void f_800E23C0(Ctx* __restrict c) {
  trace_call(0x800E23C0u);
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E23C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E23C4
  fcmp(c,0,c->f[1],c->f[0]); // 800E23C8
  if (!crb(c,2)) { goto L_800E23D8; } // 800E23CC
  c->r[0]=0u+0x00000000u; // 800E23D0
  goto L_800E23DC; // 800E23D4
L_800E23D8:;
  c->r[0]=0u+0x00000001u; // 800E23D8
L_800E23DC:;
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E23DC
  W32(c->r[4]+0x00000528u,c->r[0]); // 800E23E0
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 800E23E4
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 800E23E8
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,0,0);} // 800E23EC
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_store(c,2,ea,0,0);} // 800E23F0
  {uint32_t ea=c->r[4]+0x00000534u; psq_store(c,1,ea,0,0);} // 800E23F4
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_store(c,0,ea,0,0);} // 800E23F8
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800E23FC
  c->r[0]=c->r[0]|0x08000000u; // 800E2400
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800E2404
  return; // 800E2408
}

// fn_800E2410
void f_800E2410(Ctx* __restrict c) {
  c->r[5]=0u+0xCC010000u; // 800E2410
  c->r[0]=0u+0x00000010u; // 800E2414
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2418
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E241C
  c->r[0]=c->r[0]|0x000B0000u; // 800E2420
  c->r[4]=c->r[5]+0xFFFF8000u; // 800E2424
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2428
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800E242C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 800E2430
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 800E2434
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 800E2438
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 800E243C
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 800E2440
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800E2444
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800E2448
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800E244C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800E2450
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800E2454
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E2458
  return; // 800E245C
}

// fn_800E2460
void f_800E2460(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E2460
  c->r[5]=0u+0xCC010000u; // 800E2464
  c->r[4]=c->r[0]-c->r[4]; // 800E2468
  c->r[0]=0u+0x00000010u; // 800E246C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2470
  c->r[4]=c->r[4]+0x00000400u; // 800E2474
  c->r[0]=c->r[4]|0x00080000u; // 800E2478
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E247C
  c->r[4]=c->r[5]+0xFFFF8000u; // 800E2480
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800E2484
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E2488
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 800E248C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2490
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 800E2494
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2498
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800E249C
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[4]);} // 800E24A0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800E24A4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800E24A8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800E24AC
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800E24B0
  return; // 800E24B4
}

// GXSetCurrentMtx
void f_800E24C0(Ctx* __restrict c) {
  trace_call(0x800E24C0u);
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E24C0
  c->r[0]=R32(c->r[4]+0x00000080u); // 800E24C4
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 800E24C8
  W32(c->r[4]+0x00000080u,c->r[0]); // 800E24CC
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800E24D0
  c->r[0]=c->r[0]|0x04000000u; // 800E24D4
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800E24D8
  return; // 800E24DC
}

// GXLoadTexMtxImm
void f_800E24E0(Ctx* __restrict c) {
  trace_call(0x800E24E0u);
  cmpu(c,0,c->r[4],0x00000040u); // 800E24E0
  if (crb(c,0)) { goto L_800E24F8; } // 800E24E4
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 800E24E8
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E24EC
  c->r[7]=c->r[4]+0x00000500u; // 800E24F0
  goto L_800E24FC; // 800E24F4
L_800E24F8:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E24F8
L_800E24FC:;
  cmps(c,0,(int32_t)c->r[5],1); // 800E24FC
  if (!crb(c,2)) { goto L_800E250C; } // 800E2500
  c->r[6]=0u+0x00000008u; // 800E2504
  goto L_800E2510; // 800E2508
L_800E250C:;
  c->r[6]=0u+0x0000000Cu; // 800E250C
L_800E2510:;
  c->r[4]=0u+0xCC010000u; // 800E2510
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800E2514
  c->r[0]=0u+0x00000010u; // 800E2518
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E251C
  c->r[0]=rotl(c->r[6],16)&0xFFFF0000u; // 800E2520
  cmps(c,0,(int32_t)c->r[5],0); // 800E2524
  c->r[0]=c->r[7]|c->r[0]; // 800E2528
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E252C
  if (!crb(c,2)) { goto L_800E256C; } // 800E2530
  c->r[4]=c->r[4]+0xFFFF8000u; // 800E2534
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800E2538
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 800E253C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 800E2540
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 800E2544
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 800E2548
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 800E254C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800E2550
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800E2554
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800E2558
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800E255C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800E2560
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E2564
  return; // 800E2568
L_800E256C:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 800E256C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 800E2570
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 800E2574
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 800E2578
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 800E257C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800E2580
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800E2584
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800E2588
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E258C
  return; // 800E2590
}

// __GXSetViewport
void f_800E25A0(Ctx* __restrict c) {
  trace_call(0x800E25A0u);
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800E25A0
  c->r[3]=0u+0x00050000u; // 800E25A4
  {uint32_t ea=c->r[2]+0xFFFF9B24u; c->f[7]=c->ps1[7]=RF32(ea);} // 800E25A8
  c->r[4]=0u+0xCC010000u; // 800E25AC
  {uint32_t ea=c->r[6]+0x00000550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E25B0
  c->r[5]=0u+0x00000010u; // 800E25B4
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E25B8
  c->r[0]=c->r[3]+0x0000101Au; // 800E25BC
  c->f[0]=-c->f[1]; // 800E25C0
  {uint32_t ea=c->r[6]+0x00000544u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E25C4
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[7]); // 800E25C8
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E25CC
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[7]); // 800E25D0
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E25D4
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E25D8
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 800E25DC
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E25E0
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E25E4
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[2]); // 800E25E8
  c->f[10]=c->ps1[10]=S(c->f[1]*c->f[2]); // 800E25EC
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E25F0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800E25F4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 800E25F8
  c->f[3]=c->ps1[3]=S(c->f[6]+c->f[8]); // 800E25FC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2600
  c->f[4]=c->ps1[4]=S(c->f[10]-c->f[9]); // 800E2604
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 800E2608
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 800E260C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800E2610
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 800E2614
  c->f[0]=c->ps1[0]=S(c->f[10]+c->f[0]); // 800E2618
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 800E261C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 800E2620
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800E2624
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800E2628
  return; // 800E262C
}

// GXSetViewportJitter
void f_800E2630(Ctx* __restrict c) {
  trace_call(0x800E2630u);
  cmps(c,0,(int32_t)c->r[3],0); // 800E2630
  if (!crb(c,2)) { goto L_800E2640; } // 800E2634
  {uint32_t ea=c->r[2]+0xFFFF9B24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2638
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800E263C
L_800E2640:;
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E2640
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 800E2644
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 800E2648
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 800E264C
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 800E2650
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 800E2654
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 800E2658
  c->r[0]=R32(c->r[3]+0x000005FCu); // 800E265C
  c->r[0]=c->r[0]|0x10000000u; // 800E2660
  W32(c->r[3]+0x000005FCu,c->r[0]); // 800E2664
  return; // 800E2668
}

// GXSetViewport
void f_800E2670(Ctx* __restrict c) {
  trace_call(0x800E2670u);
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E2670
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 800E2674
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 800E2678
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 800E267C
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 800E2680
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 800E2684
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 800E2688
  c->r[0]=R32(c->r[3]+0x000005FCu); // 800E268C
  c->r[0]=c->r[0]|0x10000000u; // 800E2690
  W32(c->r[3]+0x000005FCu,c->r[0]); // 800E2694
  return; // 800E2698
}

// GXSetScissor
void f_800E26A0(Ctx* __restrict c) {
  trace_call(0x800E26A0u);
  c->r[8]=R32(c->r[2]+0xFFFF9A80u); // 800E26A0
  c->r[4]=c->r[4]+0x00000156u; // 800E26A4
  c->r[9]=c->r[3]+0x00000156u; // 800E26A8
  c->r[7]=0u+0xCC010000u; // 800E26AC
  c->r[0]=R32(c->r[8]+0x00000148u); // 800E26B0
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 800E26B4
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 800E26B8
  W32(c->r[8]+0x00000148u,c->r[0]); // 800E26BC
  c->r[6]=c->r[4]+c->r[6]; // 800E26C0
  c->r[3]=c->r[9]+c->r[5]; // 800E26C4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800E26C8
  c->r[5]=R32(c->r[8]+0x0000014Cu); // 800E26CC
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 800E26D0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800E26D4
  c->r[5]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[5]&~0x007FF000u); // 800E26D8
  W32(c->r[8]+0x0000014Cu,c->r[5]); // 800E26DC
  c->r[4]=0u+0x00000061u; // 800E26E0
  c->r[0]=0u+0x00000000u; // 800E26E4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 800E26E8
  c->r[3]=R32(c->r[8]+0x00000148u); // 800E26EC
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800E26F0
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 800E26F4
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 800E26F8
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800E26FC
  W16(c->r[8]+0x00000002u,c->r[0]); // 800E2700
  return; // 800E2704
}

// GXSetScissorBoxOffset
void f_800E2710(Ctx* __restrict c) {
  trace_call(0x800E2710u);
  c->r[5]=0u+0xCC010000u; // 800E2710
  c->r[0]=0u+0x00000061u; // 800E2714
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2718
  c->r[0]=c->r[4]+0x00000156u; // 800E271C
  c->r[3]=c->r[3]+0x00000156u; // 800E2720
  c->r[4]=0u+0x00000059u; // 800E2724
  c->r[6]=0u+0x00000000u; // 800E2728
  c->r[6]=(rotl(c->r[3],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 800E272C
  c->r[3]=R32(c->r[2]+0xFFFF9A80u); // 800E2730
  c->r[6]=(rotl(c->r[0],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 800E2734
  c->r[0]=0u+0x00000000u; // 800E2738
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800E273C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800E2740
  W16(c->r[3]+0x00000002u,c->r[0]); // 800E2744
  return; // 800E2748
}

// GXSetClipMode
void f_800E2750(Ctx* __restrict c) {
  trace_call(0x800E2750u);
  c->r[6]=0u+0xCC010000u; // 800E2750
  c->r[0]=0u+0x00000010u; // 800E2754
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2758
  c->r[5]=0u+0x00001005u; // 800E275C
  c->r[4]=R32(c->r[2]+0xFFFF9A80u); // 800E2760
  c->r[0]=0u+0x00000001u; // 800E2764
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800E2768
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E276C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800E2770
  return; // 800E2774
}

// __GXSetMatrixIndex
void f_800E2780(Ctx* __restrict c) {
  trace_call(0x800E2780u);
  cmps(c,0,(int32_t)c->r[3],5); // 800E2780
  if (!crb(c,0)) { goto L_800E27C4; } // 800E2784
  c->r[5]=0u+0xCC010000u; // 800E2788
  c->r[0]=0u+0x00000008u; // 800E278C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E2790
  c->r[0]=0u+0x00000030u; // 800E2794
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800E2798
  c->r[3]=0u+0x00000010u; // 800E279C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27A0
  c->r[0]=0u+0x00001018u; // 800E27A4
  c->r[4]=R32(c->r[6]+0x00000080u); // 800E27A8
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800E27AC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 800E27B0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27B4
  c->r[0]=R32(c->r[6]+0x00000080u); // 800E27B8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27BC
  goto L_800E27FC; // 800E27C0
L_800E27C4:;
  c->r[5]=0u+0xCC010000u; // 800E27C4
  c->r[0]=0u+0x00000008u; // 800E27C8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27CC
  c->r[0]=0u+0x00000040u; // 800E27D0
  c->r[6]=R32(c->r[2]+0xFFFF9A80u); // 800E27D4
  c->r[3]=0u+0x00000010u; // 800E27D8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27DC
  c->r[0]=0u+0x00001019u; // 800E27E0
  c->r[4]=R32(c->r[6]+0x00000084u); // 800E27E4
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800E27E8
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 800E27EC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27F0
  c->r[0]=R32(c->r[6]+0x00000084u); // 800E27F4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800E27F8
L_800E27FC:;
  c->r[0]=0u+0x00000001u; // 800E27FC
  W16(c->r[6]+0x00000002u,c->r[0]); // 800E2800
  return; // 800E2804
}

// GXSetGPMetric
void f_800E2810(Ctx* __restrict c) {
  trace_call(0x800E2810u);
  c->r[5]=R32(c->r[2]+0xFFFF9A80u); // 800E2810
  c->r[6]=R32(c->r[5]+0x000005ECu); // 800E2814
  c->r[0]=c->r[6]+0xFFFFFFF5u; // 800E2818
  cmpu(c,0,c->r[0],0x0000000Fu); // 800E281C
  if (!crb(c,1)) { goto L_800E2860; } // 800E2820
  cmpu(c,0,c->r[6],0x0000000Au); // 800E2824
  if (!crb(c,1)) { goto L_800E2840; } // 800E2828
  c->r[0]=c->r[6]+0xFFFFFFE5u; // 800E282C
  cmpu(c,0,c->r[0],0x00000006u); // 800E2830
  if (!crb(c,1)) { goto L_800E2878; } // 800E2834
  cmps(c,0,(int32_t)c->r[6],34); // 800E2838
  if (!crb(c,2)) { goto L_800E288C; } // 800E283C
L_800E2840:;
  c->r[7]=0u+0xCC010000u; // 800E2840
  c->r[0]=0u+0x00000010u; // 800E2844
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 800E2848
  c->r[6]=0u+0x00001006u; // 800E284C
  c->r[0]=0u+0x00000000u; // 800E2850
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800E2854
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800E2858
  goto L_800E288C; // 800E285C
L_800E2860:;
  c->r[6]=0u+0xCC010000u; // 800E2860
  c->r[0]=0u+0x00000061u; // 800E2864
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2868
  c->r[0]=0u+0x23000000u; // 800E286C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2870
  goto L_800E288C; // 800E2874
L_800E2878:;
  c->r[6]=0u+0xCC010000u; // 800E2878
  c->r[0]=0u+0x00000061u; // 800E287C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2880
  c->r[0]=0u+0x24000000u; // 800E2884
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2888
L_800E288C:;
  c->r[6]=R32(c->r[5]+0x000005F0u); // 800E288C
  cmpu(c,0,c->r[6],0x00000008u); // 800E2890
  if (!crb(c,1)) { goto L_800E28B8; } // 800E2894
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 800E2898
  cmpu(c,0,c->r[0],0x00000007u); // 800E289C
  if (!crb(c,1)) { goto L_800E28D0; } // 800E28A0
  c->r[0]=c->r[6]+0xFFFFFFEFu; // 800E28A4
  cmpu(c,0,c->r[0],0x00000003u); // 800E28A8
  if (!crb(c,1)) { goto L_800E28FC; } // 800E28AC
  cmps(c,0,(int32_t)c->r[6],21); // 800E28B0
  if (!crb(c,2)) { goto L_800E2908; } // 800E28B4
L_800E28B8:;
  c->r[6]=0u+0xCC010000u; // 800E28B8
  c->r[0]=0u+0x00000061u; // 800E28BC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E28C0
  c->r[0]=0u+0x67000000u; // 800E28C4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E28C8
  goto L_800E2908; // 800E28CC
L_800E28D0:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 800E28D0
  c->r[6]=0u+0xCC010000u; // 800E28D4
  c->r[7]=0u+0x00000008u; // 800E28D8
  c->r[0]=0u+0x00000020u; // 800E28DC
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 800E28E0
  W32(c->r[5]+0x000005F4u,c->r[8]); // 800E28E4
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800E28E8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E28EC
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E28F0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E28F4
  goto L_800E2908; // 800E28F8
L_800E28FC:;
  c->r[6]=R32(c->r[13]+0xFFFFA694u); // 800E28FC
  c->r[0]=0u+0x00000000u; // 800E2900
  W16(c->r[6]+0x00000006u,c->r[0]); // 800E2904
L_800E2908:;
  cmpu(c,0,c->r[3],0x00000022u); // 800E2908
  W32(c->r[5]+0x000005ECu,c->r[3]); // 800E290C
  if (crb(c,1)) { goto L_800E2D2C; } // 800E2910
  c->r[6]=0u+0x802B0000u; // 800E2914
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E2918
  c->r[6]=c->r[6]+0xFFFFF600u; // 800E291C
  c->r[6]=R32(c->r[6]+c->r[0]); // 800E2920
  c->ctr=c->r[6]; // 800E2924
  if (true) { switch (c->ctr) { case 0x800E292Cu: goto L_800E292C; case 0x800E294Cu: goto L_800E294C; case 0x800E296Cu: goto L_800E296C; case 0x800E298Cu: goto L_800E298C; case 0x800E29ACu: goto L_800E29AC; case 0x800E29CCu: goto L_800E29CC; case 0x800E29ECu: goto L_800E29EC; case 0x800E2A0Cu: goto L_800E2A0C; case 0x800E2A2Cu: goto L_800E2A2C; case 0x800E2A4Cu: goto L_800E2A4C; case 0x800E2A6Cu: goto L_800E2A6C; case 0x800E2A8Cu: goto L_800E2A8C; case 0x800E2AACu: goto L_800E2AAC; case 0x800E2AC8u: goto L_800E2AC8; case 0x800E2AE4u: goto L_800E2AE4; case 0x800E2B00u: goto L_800E2B00; case 0x800E2B1Cu: goto L_800E2B1C; case 0x800E2B38u: goto L_800E2B38; case 0x800E2B54u: goto L_800E2B54; case 0x800E2B70u: goto L_800E2B70; case 0x800E2B8Cu: goto L_800E2B8C; case 0x800E2BA8u: goto L_800E2BA8; case 0x800E2BC4u: goto L_800E2BC4; case 0x800E2BE0u: goto L_800E2BE0; case 0x800E2BFCu: goto L_800E2BFC; case 0x800E2C18u: goto L_800E2C18; case 0x800E2C34u: goto L_800E2C34; case 0x800E2C50u: goto L_800E2C50; case 0x800E2C6Cu: goto L_800E2C6C; case 0x800E2C88u: goto L_800E2C88; case 0x800E2CA4u: goto L_800E2CA4; case 0x800E2CC0u: goto L_800E2CC0; case 0x800E2CDCu: goto L_800E2CDC; case 0x800E2CF8u: goto L_800E2CF8; case 0x800E2D14u: goto L_800E2D14; case 0x800E2D50u: goto L_800E2D50; case 0x800E2D6Cu: goto L_800E2D6C; case 0x800E2D88u: goto L_800E2D88; case 0x800E2DA4u: goto L_800E2DA4; case 0x800E2DC0u: goto L_800E2DC0; case 0x800E2DDCu: goto L_800E2DDC; case 0x800E2DF8u: goto L_800E2DF8; case 0x800E2E14u: goto L_800E2E14; case 0x800E2E30u: goto L_800E2E30; case 0x800E2E4Cu: goto L_800E2E4C; case 0x800E2E68u: goto L_800E2E68; case 0x800E2E98u: goto L_800E2E98; case 0x800E2EC8u: goto L_800E2EC8; case 0x800E2EF8u: goto L_800E2EF8; case 0x800E2F28u: goto L_800E2F28; case 0x800E2F58u: goto L_800E2F58; case 0x800E2F88u: goto L_800E2F88; case 0x800E2FB8u: goto L_800E2FB8; case 0x800E2FE4u: goto L_800E2FE4; case 0x800E2FF4u: goto L_800E2FF4; case 0x800E3004u: goto L_800E3004; case 0x800E3014u: goto L_800E3014; default: break; } dispatch(c,c->ctr); return; } // 800E2928
L_800E292C:;
  c->r[6]=0u+0xCC010000u; // 800E292C
  c->r[0]=0u+0x00000010u; // 800E2930
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2934
  c->r[3]=0u+0x00001006u; // 800E2938
  c->r[0]=0u+0x00000273u; // 800E293C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2940
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2944
  goto L_800E2D2C; // 800E2948
L_800E294C:;
  c->r[6]=0u+0xCC010000u; // 800E294C
  c->r[0]=0u+0x00000010u; // 800E2950
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2954
  c->r[3]=0u+0x00001006u; // 800E2958
  c->r[0]=0u+0x0000014Au; // 800E295C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2960
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2964
  goto L_800E2D2C; // 800E2968
L_800E296C:;
  c->r[6]=0u+0xCC010000u; // 800E296C
  c->r[0]=0u+0x00000010u; // 800E2970
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2974
  c->r[3]=0u+0x00001006u; // 800E2978
  c->r[0]=0u+0x0000016Bu; // 800E297C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2980
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2984
  goto L_800E2D2C; // 800E2988
L_800E298C:;
  c->r[6]=0u+0xCC010000u; // 800E298C
  c->r[0]=0u+0x00000010u; // 800E2990
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2994
  c->r[3]=0u+0x00001006u; // 800E2998
  c->r[0]=0u+0x00000084u; // 800E299C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E29A0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E29A4
  goto L_800E2D2C; // 800E29A8
L_800E29AC:;
  c->r[6]=0u+0xCC010000u; // 800E29AC
  c->r[0]=0u+0x00000010u; // 800E29B0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E29B4
  c->r[3]=0u+0x00001006u; // 800E29B8
  c->r[0]=0u+0x000000C6u; // 800E29BC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E29C0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E29C4
  goto L_800E2D2C; // 800E29C8
L_800E29CC:;
  c->r[6]=0u+0xCC010000u; // 800E29CC
  c->r[0]=0u+0x00000010u; // 800E29D0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E29D4
  c->r[3]=0u+0x00001006u; // 800E29D8
  c->r[0]=0u+0x00000210u; // 800E29DC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E29E0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E29E4
  goto L_800E2D2C; // 800E29E8
L_800E29EC:;
  c->r[6]=0u+0xCC010000u; // 800E29EC
  c->r[0]=0u+0x00000010u; // 800E29F0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E29F4
  c->r[3]=0u+0x00001006u; // 800E29F8
  c->r[0]=0u+0x00000252u; // 800E29FC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2A00
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A04
  goto L_800E2D2C; // 800E2A08
L_800E2A0C:;
  c->r[6]=0u+0xCC010000u; // 800E2A0C
  c->r[0]=0u+0x00000010u; // 800E2A10
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A14
  c->r[3]=0u+0x00001006u; // 800E2A18
  c->r[0]=0u+0x00000231u; // 800E2A1C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2A20
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A24
  goto L_800E2D2C; // 800E2A28
L_800E2A2C:;
  c->r[6]=0u+0xCC010000u; // 800E2A2C
  c->r[0]=0u+0x00000010u; // 800E2A30
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A34
  c->r[3]=0u+0x00001006u; // 800E2A38
  c->r[0]=0u+0x000001ADu; // 800E2A3C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2A40
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A44
  goto L_800E2D2C; // 800E2A48
L_800E2A4C:;
  c->r[6]=0u+0xCC010000u; // 800E2A4C
  c->r[0]=0u+0x00000010u; // 800E2A50
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A54
  c->r[3]=0u+0x00001006u; // 800E2A58
  c->r[0]=0u+0x000001CEu; // 800E2A5C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2A60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A64
  goto L_800E2D2C; // 800E2A68
L_800E2A6C:;
  c->r[6]=0u+0xCC010000u; // 800E2A6C
  c->r[0]=0u+0x00000010u; // 800E2A70
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A74
  c->r[3]=0u+0x00001006u; // 800E2A78
  c->r[0]=0u+0x00000021u; // 800E2A7C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2A80
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A84
  goto L_800E2D2C; // 800E2A88
L_800E2A8C:;
  c->r[6]=0u+0xCC010000u; // 800E2A8C
  c->r[0]=0u+0x00000010u; // 800E2A90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2A94
  c->r[3]=0u+0x00001006u; // 800E2A98
  c->r[0]=0u+0x00000153u; // 800E2A9C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800E2AA0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2AA4
  goto L_800E2D2C; // 800E2AA8
L_800E2AAC:;
  c->r[6]=0u+0xCC010000u; // 800E2AAC
  c->r[0]=0u+0x00000061u; // 800E2AB0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2AB4
  c->r[3]=0u+0x23010000u; // 800E2AB8
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 800E2ABC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2AC0
  goto L_800E2D2C; // 800E2AC4
L_800E2AC8:;
  c->r[6]=0u+0xCC010000u; // 800E2AC8
  c->r[0]=0u+0x00000061u; // 800E2ACC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2AD0
  c->r[3]=0u+0x23010000u; // 800E2AD4
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 800E2AD8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2ADC
  goto L_800E2D2C; // 800E2AE0
L_800E2AE4:;
  c->r[6]=0u+0xCC010000u; // 800E2AE4
  c->r[0]=0u+0x00000061u; // 800E2AE8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2AEC
  c->r[3]=0u+0x23010000u; // 800E2AF0
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 800E2AF4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2AF8
  goto L_800E2D2C; // 800E2AFC
L_800E2B00:;
  c->r[6]=0u+0xCC010000u; // 800E2B00
  c->r[0]=0u+0x00000061u; // 800E2B04
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B08
  c->r[3]=0u+0x23000000u; // 800E2B0C
  c->r[0]=c->r[3]+0x00001E7Fu; // 800E2B10
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B14
  goto L_800E2D2C; // 800E2B18
L_800E2B1C:;
  c->r[6]=0u+0xCC010000u; // 800E2B1C
  c->r[0]=0u+0x00000061u; // 800E2B20
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B24
  c->r[3]=0u+0x23010000u; // 800E2B28
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 800E2B2C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B30
  goto L_800E2D2C; // 800E2B34
L_800E2B38:;
  c->r[6]=0u+0xCC010000u; // 800E2B38
  c->r[0]=0u+0x00000061u; // 800E2B3C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B40
  c->r[3]=0u+0x23010000u; // 800E2B44
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 800E2B48
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B4C
  goto L_800E2D2C; // 800E2B50
L_800E2B54:;
  c->r[6]=0u+0xCC010000u; // 800E2B54
  c->r[0]=0u+0x00000061u; // 800E2B58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B5C
  c->r[3]=0u+0x23010000u; // 800E2B60
  c->r[0]=c->r[3]+0xFFFFACBFu; // 800E2B64
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B68
  goto L_800E2D2C; // 800E2B6C
L_800E2B70:;
  c->r[6]=0u+0xCC010000u; // 800E2B70
  c->r[0]=0u+0x00000061u; // 800E2B74
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B78
  c->r[3]=0u+0x23010000u; // 800E2B7C
  c->r[0]=c->r[3]+0xFFFFACFFu; // 800E2B80
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B84
  goto L_800E2D2C; // 800E2B88
L_800E2B8C:;
  c->r[6]=0u+0xCC010000u; // 800E2B8C
  c->r[0]=0u+0x00000061u; // 800E2B90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2B94
  c->r[3]=0u+0x23010000u; // 800E2B98
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 800E2B9C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BA0
  goto L_800E2D2C; // 800E2BA4
L_800E2BA8:;
  c->r[6]=0u+0xCC010000u; // 800E2BA8
  c->r[0]=0u+0x00000061u; // 800E2BAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BB0
  c->r[3]=0u+0x23010000u; // 800E2BB4
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 800E2BB8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BBC
  goto L_800E2D2C; // 800E2BC0
L_800E2BC4:;
  c->r[6]=0u+0xCC010000u; // 800E2BC4
  c->r[0]=0u+0x00000061u; // 800E2BC8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BCC
  c->r[3]=0u+0x23010000u; // 800E2BD0
  c->r[0]=c->r[3]+0xFFFFADBFu; // 800E2BD4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BD8
  goto L_800E2D2C; // 800E2BDC
L_800E2BE0:;
  c->r[6]=0u+0xCC010000u; // 800E2BE0
  c->r[0]=0u+0x00000061u; // 800E2BE4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BE8
  c->r[3]=0u+0x23010000u; // 800E2BEC
  c->r[0]=c->r[3]+0xFFFFADFFu; // 800E2BF0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2BF4
  goto L_800E2D2C; // 800E2BF8
L_800E2BFC:;
  c->r[6]=0u+0xCC010000u; // 800E2BFC
  c->r[0]=0u+0x00000061u; // 800E2C00
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C04
  c->r[3]=0u+0x23010000u; // 800E2C08
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 800E2C0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C10
  goto L_800E2D2C; // 800E2C14
L_800E2C18:;
  c->r[6]=0u+0xCC010000u; // 800E2C18
  c->r[0]=0u+0x00000061u; // 800E2C1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C20
  c->r[3]=0u+0x23010000u; // 800E2C24
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 800E2C28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C2C
  goto L_800E2D2C; // 800E2C30
L_800E2C34:;
  c->r[6]=0u+0xCC010000u; // 800E2C34
  c->r[0]=0u+0x00000061u; // 800E2C38
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C3C
  c->r[3]=0u+0x23010000u; // 800E2C40
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 800E2C44
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C48
  goto L_800E2D2C; // 800E2C4C
L_800E2C50:;
  c->r[6]=0u+0xCC010000u; // 800E2C50
  c->r[0]=0u+0x00000061u; // 800E2C54
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C58
  c->r[3]=0u+0x23010000u; // 800E2C5C
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 800E2C60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C64
  goto L_800E2D2C; // 800E2C68
L_800E2C6C:;
  c->r[6]=0u+0xCC010000u; // 800E2C6C
  c->r[0]=0u+0x00000061u; // 800E2C70
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C74
  c->r[3]=0u+0x24030000u; // 800E2C78
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 800E2C7C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C80
  goto L_800E2D2C; // 800E2C84
L_800E2C88:;
  c->r[6]=0u+0xCC010000u; // 800E2C88
  c->r[0]=0u+0x00000061u; // 800E2C8C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C90
  c->r[3]=0u+0x24030000u; // 800E2C94
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 800E2C98
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2C9C
  goto L_800E2D2C; // 800E2CA0
L_800E2CA4:;
  c->r[6]=0u+0xCC010000u; // 800E2CA4
  c->r[0]=0u+0x00000061u; // 800E2CA8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2CAC
  c->r[3]=0u+0x24030000u; // 800E2CB0
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 800E2CB4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2CB8
  goto L_800E2D2C; // 800E2CBC
L_800E2CC0:;
  c->r[6]=0u+0xCC010000u; // 800E2CC0
  c->r[0]=0u+0x00000061u; // 800E2CC4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2CC8
  c->r[3]=0u+0x24030000u; // 800E2CCC
  c->r[0]=c->r[3]+0xFFFFC108u; // 800E2CD0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2CD4
  goto L_800E2D2C; // 800E2CD8
L_800E2CDC:;
  c->r[6]=0u+0xCC010000u; // 800E2CDC
  c->r[0]=0u+0x00000061u; // 800E2CE0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2CE4
  c->r[3]=0u+0x24030000u; // 800E2CE8
  c->r[0]=c->r[3]+0xFFFFC129u; // 800E2CEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2CF0
  goto L_800E2D2C; // 800E2CF4
L_800E2CF8:;
  c->r[6]=0u+0xCC010000u; // 800E2CF8
  c->r[0]=0u+0x00000061u; // 800E2CFC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2D00
  c->r[3]=0u+0x24030000u; // 800E2D04
  c->r[0]=c->r[3]+0xFFFFC14Au; // 800E2D08
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2D0C
  goto L_800E2D2C; // 800E2D10
L_800E2D14:;
  c->r[6]=0u+0xCC010000u; // 800E2D14
  c->r[0]=0u+0x00000061u; // 800E2D18
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2D1C
  c->r[3]=0u+0x24030000u; // 800E2D20
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 800E2D24
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800E2D28
L_800E2D2C:;
  cmpu(c,0,c->r[4],0x00000015u); // 800E2D2C
  W32(c->r[5]+0x000005F0u,c->r[4]); // 800E2D30
  if (crb(c,1)) { goto L_800E3020; } // 800E2D34
  c->r[3]=0u+0x802B0000u; // 800E2D38
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E2D3C
  c->r[3]=c->r[3]+0xFFFFF5A8u; // 800E2D40
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E2D44
  c->ctr=c->r[3]; // 800E2D48
  if (true) { switch (c->ctr) { case 0x800E292Cu: goto L_800E292C; case 0x800E294Cu: goto L_800E294C; case 0x800E296Cu: goto L_800E296C; case 0x800E298Cu: goto L_800E298C; case 0x800E29ACu: goto L_800E29AC; case 0x800E29CCu: goto L_800E29CC; case 0x800E29ECu: goto L_800E29EC; case 0x800E2A0Cu: goto L_800E2A0C; case 0x800E2A2Cu: goto L_800E2A2C; case 0x800E2A4Cu: goto L_800E2A4C; case 0x800E2A6Cu: goto L_800E2A6C; case 0x800E2A8Cu: goto L_800E2A8C; case 0x800E2AACu: goto L_800E2AAC; case 0x800E2AC8u: goto L_800E2AC8; case 0x800E2AE4u: goto L_800E2AE4; case 0x800E2B00u: goto L_800E2B00; case 0x800E2B1Cu: goto L_800E2B1C; case 0x800E2B38u: goto L_800E2B38; case 0x800E2B54u: goto L_800E2B54; case 0x800E2B70u: goto L_800E2B70; case 0x800E2B8Cu: goto L_800E2B8C; case 0x800E2BA8u: goto L_800E2BA8; case 0x800E2BC4u: goto L_800E2BC4; case 0x800E2BE0u: goto L_800E2BE0; case 0x800E2BFCu: goto L_800E2BFC; case 0x800E2C18u: goto L_800E2C18; case 0x800E2C34u: goto L_800E2C34; case 0x800E2C50u: goto L_800E2C50; case 0x800E2C6Cu: goto L_800E2C6C; case 0x800E2C88u: goto L_800E2C88; case 0x800E2CA4u: goto L_800E2CA4; case 0x800E2CC0u: goto L_800E2CC0; case 0x800E2CDCu: goto L_800E2CDC; case 0x800E2CF8u: goto L_800E2CF8; case 0x800E2D14u: goto L_800E2D14; case 0x800E2D50u: goto L_800E2D50; case 0x800E2D6Cu: goto L_800E2D6C; case 0x800E2D88u: goto L_800E2D88; case 0x800E2DA4u: goto L_800E2DA4; case 0x800E2DC0u: goto L_800E2DC0; case 0x800E2DDCu: goto L_800E2DDC; case 0x800E2DF8u: goto L_800E2DF8; case 0x800E2E14u: goto L_800E2E14; case 0x800E2E30u: goto L_800E2E30; case 0x800E2E4Cu: goto L_800E2E4C; case 0x800E2E68u: goto L_800E2E68; case 0x800E2E98u: goto L_800E2E98; case 0x800E2EC8u: goto L_800E2EC8; case 0x800E2EF8u: goto L_800E2EF8; case 0x800E2F28u: goto L_800E2F28; case 0x800E2F58u: goto L_800E2F58; case 0x800E2F88u: goto L_800E2F88; case 0x800E2FB8u: goto L_800E2FB8; case 0x800E2FE4u: goto L_800E2FE4; case 0x800E2FF4u: goto L_800E2FF4; case 0x800E3004u: goto L_800E3004; case 0x800E3014u: goto L_800E3014; default: break; } dispatch(c,c->ctr); return; } // 800E2D4C
L_800E2D50:;
  c->r[4]=0u+0xCC010000u; // 800E2D50
  c->r[0]=0u+0x00000061u; // 800E2D54
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2D58
  c->r[3]=0u+0x67000000u; // 800E2D5C
  c->r[0]=c->r[3]+0x00000042u; // 800E2D60
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2D64
  goto L_800E3020; // 800E2D68
L_800E2D6C:;
  c->r[4]=0u+0xCC010000u; // 800E2D6C
  c->r[0]=0u+0x00000061u; // 800E2D70
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2D74
  c->r[3]=0u+0x67000000u; // 800E2D78
  c->r[0]=c->r[3]+0x00000084u; // 800E2D7C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2D80
  goto L_800E3020; // 800E2D84
L_800E2D88:;
  c->r[4]=0u+0xCC010000u; // 800E2D88
  c->r[0]=0u+0x00000061u; // 800E2D8C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2D90
  c->r[3]=0u+0x67000000u; // 800E2D94
  c->r[0]=c->r[3]+0x00000063u; // 800E2D98
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2D9C
  goto L_800E3020; // 800E2DA0
L_800E2DA4:;
  c->r[4]=0u+0xCC010000u; // 800E2DA4
  c->r[0]=0u+0x00000061u; // 800E2DA8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2DAC
  c->r[3]=0u+0x67000000u; // 800E2DB0
  c->r[0]=c->r[3]+0x00000129u; // 800E2DB4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2DB8
  goto L_800E3020; // 800E2DBC
L_800E2DC0:;
  c->r[4]=0u+0xCC010000u; // 800E2DC0
  c->r[0]=0u+0x00000061u; // 800E2DC4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2DC8
  c->r[3]=0u+0x67000000u; // 800E2DCC
  c->r[0]=c->r[3]+0x00000252u; // 800E2DD0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2DD4
  goto L_800E3020; // 800E2DD8
L_800E2DDC:;
  c->r[4]=0u+0xCC010000u; // 800E2DDC
  c->r[0]=0u+0x00000061u; // 800E2DE0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2DE4
  c->r[3]=0u+0x67000000u; // 800E2DE8
  c->r[0]=c->r[3]+0x00000021u; // 800E2DEC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2DF0
  goto L_800E3020; // 800E2DF4
L_800E2DF8:;
  c->r[4]=0u+0xCC010000u; // 800E2DF8
  c->r[0]=0u+0x00000061u; // 800E2DFC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E00
  c->r[3]=0u+0x67000000u; // 800E2E04
  c->r[0]=c->r[3]+0x0000014Bu; // 800E2E08
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E0C
  goto L_800E3020; // 800E2E10
L_800E2E14:;
  c->r[4]=0u+0xCC010000u; // 800E2E14
  c->r[0]=0u+0x00000061u; // 800E2E18
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E1C
  c->r[3]=0u+0x67000000u; // 800E2E20
  c->r[0]=c->r[3]+0x0000018Du; // 800E2E24
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E28
  goto L_800E3020; // 800E2E2C
L_800E2E30:;
  c->r[4]=0u+0xCC010000u; // 800E2E30
  c->r[0]=0u+0x00000061u; // 800E2E34
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E38
  c->r[3]=0u+0x67000000u; // 800E2E3C
  c->r[0]=c->r[3]+0x000001CFu; // 800E2E40
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E44
  goto L_800E3020; // 800E2E48
L_800E2E4C:;
  c->r[4]=0u+0xCC010000u; // 800E2E4C
  c->r[0]=0u+0x00000061u; // 800E2E50
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E54
  c->r[3]=0u+0x67000000u; // 800E2E58
  c->r[0]=c->r[3]+0x00000211u; // 800E2E5C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800E2E60
  goto L_800E3020; // 800E2E64
L_800E2E68:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2E68
  c->r[0]=0u+0x00000002u; // 800E2E6C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2E70
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2E74
  c->r[3]=0u+0xCC010000u; // 800E2E78
  c->r[0]=0u+0x00000008u; // 800E2E7C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2E80
  c->r[0]=0u+0x00000020u; // 800E2E84
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2E88
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2E8C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2E90
  goto L_800E3020; // 800E2E94
L_800E2E98:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2E98
  c->r[0]=0u+0x00000003u; // 800E2E9C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2EA0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2EA4
  c->r[3]=0u+0xCC010000u; // 800E2EA8
  c->r[0]=0u+0x00000008u; // 800E2EAC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2EB0
  c->r[0]=0u+0x00000020u; // 800E2EB4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2EB8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2EBC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2EC0
  goto L_800E3020; // 800E2EC4
L_800E2EC8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2EC8
  c->r[0]=0u+0x00000004u; // 800E2ECC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2ED0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2ED4
  c->r[3]=0u+0xCC010000u; // 800E2ED8
  c->r[0]=0u+0x00000008u; // 800E2EDC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2EE0
  c->r[0]=0u+0x00000020u; // 800E2EE4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2EE8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2EEC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2EF0
  goto L_800E3020; // 800E2EF4
L_800E2EF8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2EF8
  c->r[0]=0u+0x00000005u; // 800E2EFC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2F00
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2F04
  c->r[3]=0u+0xCC010000u; // 800E2F08
  c->r[0]=0u+0x00000008u; // 800E2F0C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F10
  c->r[0]=0u+0x00000020u; // 800E2F14
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F18
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2F1C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F20
  goto L_800E3020; // 800E2F24
L_800E2F28:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2F28
  c->r[0]=0u+0x00000006u; // 800E2F2C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2F30
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2F34
  c->r[3]=0u+0xCC010000u; // 800E2F38
  c->r[0]=0u+0x00000008u; // 800E2F3C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F40
  c->r[0]=0u+0x00000020u; // 800E2F44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F48
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2F4C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F50
  goto L_800E3020; // 800E2F54
L_800E2F58:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2F58
  c->r[0]=0u+0x00000007u; // 800E2F5C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2F60
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2F64
  c->r[3]=0u+0xCC010000u; // 800E2F68
  c->r[0]=0u+0x00000008u; // 800E2F6C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F70
  c->r[0]=0u+0x00000020u; // 800E2F74
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F78
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2F7C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2F80
  goto L_800E3020; // 800E2F84
L_800E2F88:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 800E2F88
  c->r[0]=0u+0x00000009u; // 800E2F8C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800E2F90
  W32(c->r[5]+0x000005F4u,c->r[3]); // 800E2F94
  c->r[3]=0u+0xCC010000u; // 800E2F98
  c->r[0]=0u+0x00000008u; // 800E2F9C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2FA0
  c->r[0]=0u+0x00000020u; // 800E2FA4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2FA8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2FAC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2FB0
  goto L_800E3020; // 800E2FB4
L_800E2FB8:;
  c->r[4]=0u+0x00000008u; // 800E2FB8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2FBC
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800E2FC0
  W32(c->r[5]+0x000005F4u,c->r[0]); // 800E2FC4
  c->r[3]=0u+0xCC010000u; // 800E2FC8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800E2FCC
  c->r[0]=0u+0x00000020u; // 800E2FD0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2FD4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800E2FD8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800E2FDC
  goto L_800E3020; // 800E2FE0
L_800E2FE4:;
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800E2FE4
  c->r[0]=0u+0x00000002u; // 800E2FE8
  W16(c->r[3]+0x00000006u,c->r[0]); // 800E2FEC
  goto L_800E3020; // 800E2FF0
L_800E2FF4:;
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800E2FF4
  c->r[0]=0u+0x00000003u; // 800E2FF8
  W16(c->r[3]+0x00000006u,c->r[0]); // 800E2FFC
  goto L_800E3020; // 800E3000
L_800E3004:;
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800E3004
  c->r[0]=0u+0x00000004u; // 800E3008
  W16(c->r[3]+0x00000006u,c->r[0]); // 800E300C
  goto L_800E3020; // 800E3010
L_800E3014:;
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800E3014
  c->r[0]=0u+0x00000005u; // 800E3018
  W16(c->r[3]+0x00000006u,c->r[0]); // 800E301C
L_800E3020:;
  c->r[0]=0u+0x00000000u; // 800E3020
  W16(c->r[5]+0x00000002u,c->r[0]); // 800E3024
  return; // 800E3028
}

// GXClearGPMetric
void f_800E3030(Ctx* __restrict c) {
  trace_call(0x800E3030u);
  c->r[3]=R32(c->r[13]+0xFFFFA694u); // 800E3030
  c->r[0]=0u+0x00000004u; // 800E3034
  W16(c->r[3]+0x00000004u,c->r[0]); // 800E3038
  return; // 800E303C
}

// __DVDFSInit
void f_800E3040(Ctx* __restrict c) {
  trace_call(0x800E3040u);
  c->r[3]=0u+0x80000000u; // 800E3040
  W32(c->r[13]+0xFFFFA70Cu,c->r[3]); // 800E3044
  c->r[3]=R32(c->r[3]+0x00000038u); // 800E3048
  W32(c->r[13]+0xFFFFA708u,c->r[3]); // 800E304C
  cmps(c,0,(int32_t)c->r[3],0); // 800E3050
  if (crb(c,2)) return; // 800E3054
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E3058
  W32(c->r[13]+0xFFFFA700u,c->r[0]); // 800E305C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800E3060
  c->r[0]=c->r[3]+c->r[0]; // 800E3064
  W32(c->r[13]+0xFFFFA704u,c->r[0]); // 800E3068
  return; // 800E306C
}

// DVDConvertPathToEntrynum
void f_800E3070(Ctx* __restrict c) {
  trace_call(0x800E3070u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3070
  c->r[0]=c->lr; // 800E3074
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E3078
  c->r[11]=c->r[1]+0x00000030u; // 800E307C
  c->lr=0x800E3084u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E3080
  c->r[26]=c->r[3]|c->r[3]; // 800E3084
  c->r[31]=0u+0x802D0000u; // 800E3088
  c->r[29]=R32(c->r[13]+0xFFFFA6F0u); // 800E308C
  c->r[28]=c->r[26]|c->r[26]; // 800E3090
  c->r[31]=c->r[31]+0x00005508u; // 800E3094
  c->r[30]=0u+0x802B0000u; // 800E3098
L_800E309C:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 800E309C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E30A0
  if (!crb(c,2)) { goto L_800E30B0; } // 800E30A4
  c->r[3]=c->r[29]|c->r[29]; // 800E30A8
  goto L_800E3360; // 800E30AC
L_800E30B0:;
  cmps(c,0,(int32_t)c->r[0],47); // 800E30B0
  if (!crb(c,2)) { goto L_800E30C4; } // 800E30B4
  c->r[29]=0u+0x00000000u; // 800E30B8
  c->r[26]=c->r[26]+0x00000001u; // 800E30BC
  IRQCHK(c); goto L_800E309C; // 800E30C0
L_800E30C4:;
  cmps(c,0,(int32_t)c->r[0],46); // 800E30C4
  if (!crb(c,2)) { goto L_800E3140; } // 800E30C8
  c->r[0]=R8(c->r[26]+0x00000001u); // 800E30CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E30D0
  cmps(c,0,(int32_t)c->r[0],46); // 800E30D4
  if (!crb(c,2)) { goto L_800E3120; } // 800E30D8
  c->r[0]=R8(c->r[26]+0x00000002u); // 800E30DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E30E0
  cmps(c,0,(int32_t)c->r[0],47); // 800E30E4
  if (!crb(c,2)) { goto L_800E3104; } // 800E30E8
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800E30EC
  c->r[3]=R32(c->r[13]+0xFFFFA708u); // 800E30F0
  c->r[26]=c->r[26]+0x00000003u; // 800E30F4
  c->r[3]=c->r[3]+c->r[0]; // 800E30F8
  c->r[29]=R32(c->r[3]+0x00000004u); // 800E30FC
  IRQCHK(c); goto L_800E309C; // 800E3100
L_800E3104:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E3104
  if (!crb(c,2)) { goto L_800E3140; } // 800E3108
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800E310C
  c->r[3]=R32(c->r[13]+0xFFFFA708u); // 800E3110
  c->r[3]=c->r[3]+c->r[0]; // 800E3114
  c->r[3]=R32(c->r[3]+0x00000004u); // 800E3118
  goto L_800E3360; // 800E311C
L_800E3120:;
  cmps(c,0,(int32_t)c->r[0],47); // 800E3120
  if (!crb(c,2)) { goto L_800E3130; } // 800E3124
  c->r[26]=c->r[26]+0x00000002u; // 800E3128
  IRQCHK(c); goto L_800E309C; // 800E312C
L_800E3130:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E3130
  if (!crb(c,2)) { goto L_800E3140; } // 800E3134
  c->r[3]=c->r[29]|c->r[29]; // 800E3138
  goto L_800E3360; // 800E313C
L_800E3140:;
  c->r[0]=R32(c->r[13]+0xFFFF9020u); // 800E3140
  cmps(c,0,(int32_t)c->r[0],0); // 800E3144
  if (!crb(c,2)) { goto L_800E31F4; } // 800E3148
  c->r[23]=c->r[26]|c->r[26]; // 800E314C
  c->r[5]=0u+0x00000000u; // 800E3150
  c->r[4]=0u+0x00000000u; // 800E3154
  goto L_800E31A4; // 800E3158
  c->r[0]=c->r[0]|0x00000000u; // 800E315C
L_800E3160:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800E3160
  cmps(c,0,(int32_t)c->r[0],46); // 800E3164
  if (!crb(c,2)) { goto L_800E3194; } // 800E3168
  c->r[0]=c->r[23]-c->r[26]; // 800E316C
  cmps(c,0,(int32_t)c->r[0],8); // 800E3170
  if (crb(c,1)) { goto L_800E3180; } // 800E3174
  cmps(c,0,(int32_t)c->r[5],1); // 800E3178
  if (!crb(c,2)) { goto L_800E3188; } // 800E317C
L_800E3180:;
  c->r[4]=0u+0x00000001u; // 800E3180
  goto L_800E31B8; // 800E3184
L_800E3188:;
  c->r[27]=c->r[23]+0x00000001u; // 800E3188
  c->r[5]=0u+0x00000001u; // 800E318C
  goto L_800E31A0; // 800E3190
L_800E3194:;
  cmps(c,0,(int32_t)c->r[0],32); // 800E3194
  if (!crb(c,2)) { goto L_800E31A0; } // 800E3198
  c->r[4]=0u+0x00000001u; // 800E319C
L_800E31A0:;
  c->r[23]=c->r[23]+0x00000001u; // 800E31A0
L_800E31A4:;
  c->r[3]=R8(c->r[23]+0x00000000u); // 800E31A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800E31A8
  if (crb(c,2)) { goto L_800E31B8; } // 800E31AC
  cmps(c,0,(int32_t)c->r[0],47); // 800E31B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3160; } // 800E31B4
L_800E31B8:;
  cmps(c,0,(int32_t)c->r[5],1); // 800E31B8
  if (!crb(c,2)) { goto L_800E31D0; } // 800E31BC
  c->r[0]=c->r[23]-c->r[27]; // 800E31C0
  cmps(c,0,(int32_t)c->r[0],3); // 800E31C4
  if (!crb(c,1)) { goto L_800E31D0; } // 800E31C8
  c->r[4]=0u+0x00000001u; // 800E31CC
L_800E31D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E31D0
  if (crb(c,2)) { goto L_800E3218; } // 800E31D4
  c->r[6]=c->r[28]|c->r[28]; // 800E31D8
  c->r[5]=c->r[30]+0xFFFFF690u; // 800E31DC
  c->r[3]=c->r[13]+0xFFFF9028u; // 800E31E0
  c->r[4]=0u+0x000001BBu; // 800E31E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E31E8
  c->lr=0x800E31F0u; f_800C84E0(c); // 800E31EC
  goto L_800E3218; // 800E31F0
L_800E31F4:;
  c->r[23]=c->r[26]|c->r[26]; // 800E31F4
  goto L_800E3204; // 800E31F8
  c->r[0]=c->r[0]|0x00000000u; // 800E31FC
L_800E3200:;
  c->r[23]=c->r[23]+0x00000001u; // 800E3200
L_800E3204:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 800E3204
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3208
  if (crb(c,2)) { goto L_800E3218; } // 800E320C
  cmps(c,0,(int32_t)c->r[0],47); // 800E3210
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3200; } // 800E3214
L_800E3218:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 800E3218
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800E321C
  c->r[7]=R32(c->r[13]+0xFFFFA708u); // 800E3220
  c->r[8]=c->r[23]-c->r[26]; // 800E3224
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E3228
  c->r[0]=R32(c->r[13]+0xFFFFA704u); // 800E322C
  c->r[4]=0u-c->r[5]; // 800E3230
  c->r[5]=c->r[4]|c->r[5]; // 800E3234
  c->r[3]=c->r[7]+c->r[3]; // 800E3238
  c->r[4]=R32(c->r[3]+0x00000008u); // 800E323C
  c->r[25]=rotl(c->r[5],1)&0x00000001u; // 800E3240
  c->r[10]=R32(c->r[31]+0x00000038u); // 800E3244
  c->r[3]=c->r[29]+0x00000001u; // 800E3248
  goto L_800E3334; // 800E324C
L_800E3250:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E3250
  {uint32_t ea=c->r[5]+c->r[7]; c->r[9]=R32(ea); c->r[5]=ea;} // 800E3254
  c->r[6]=rotl(c->r[9],0)&0xFF000000u; cr0(c,c->r[6]); // 800E3258
  if (!crb(c,2)) { goto L_800E3268; } // 800E325C
  cmps(c,0,(int32_t)c->r[25],1); // 800E3260
  if (crb(c,2)) { goto L_800E3320; } // 800E3264
L_800E3268:;
  c->r[9]=rotl(c->r[9],0)&0x00FFFFFFu; // 800E3268
  c->r[11]=c->r[26]|c->r[26]; // 800E326C
  c->r[12]=c->r[0]+c->r[9]; // 800E3270
  goto L_800E32E8; // 800E3274
L_800E3278:;
  c->r[9]=R8(c->r[12]+0x00000000u); // 800E3278
  c->r[29]=0u+0x00000001u; // 800E327C
  c->r[12]=c->r[12]+0x00000001u; // 800E3280
  c->r[24]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800E3284
  cmpu(c,0,c->r[24],0x000000FFu); // 800E3288
  if (crb(c,1)) { goto L_800E3294; } // 800E328C
  c->r[29]=0u+0x00000000u; // 800E3290
L_800E3294:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E3294
  if (crb(c,2)) { goto L_800E32A0; } // 800E3298
  goto L_800E32A8; // 800E329C
L_800E32A0:;
  c->r[9]=R32(c->r[10]+0x00000010u); // 800E32A0
  c->r[24]=R8(c->r[9]+c->r[24]); // 800E32A4
L_800E32A8:;
  c->r[9]=R8(c->r[11]+0x00000000u); // 800E32A8
  c->r[23]=0u+0x00000001u; // 800E32AC
  c->r[11]=c->r[11]+0x00000001u; // 800E32B0
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800E32B4
  cmpu(c,0,c->r[29],0x000000FFu); // 800E32B8
  if (crb(c,1)) { goto L_800E32C4; } // 800E32BC
  c->r[23]=0u+0x00000000u; // 800E32C0
L_800E32C4:;
  cmps(c,0,(int32_t)c->r[23],0); // 800E32C4
  if (crb(c,2)) { goto L_800E32D0; } // 800E32C8
  goto L_800E32D8; // 800E32CC
L_800E32D0:;
  c->r[9]=R32(c->r[10]+0x00000010u); // 800E32D0
  c->r[29]=R8(c->r[9]+c->r[29]); // 800E32D4
L_800E32D8:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[24]); // 800E32D8
  if (crb(c,2)) { goto L_800E32E8; } // 800E32DC
  c->r[9]=0u+0x00000000u; // 800E32E0
  goto L_800E3318; // 800E32E4
L_800E32E8:;
  c->r[9]=R8(c->r[12]+0x00000000u); // 800E32E8
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 800E32EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3278; } // 800E32F0
  c->r[9]=R8(c->r[11]+0x00000000u); // 800E32F4
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800E32F8
  cmps(c,0,(int32_t)c->r[9],47); // 800E32FC
  if (crb(c,2)) { goto L_800E330C; } // 800E3300
  cmps(c,0,(int32_t)c->r[9],0); // 800E3304
  if (!crb(c,2)) { goto L_800E3314; } // 800E3308
L_800E330C:;
  c->r[9]=0u+0x00000001u; // 800E330C
  goto L_800E3318; // 800E3310
L_800E3314:;
  c->r[9]=0u+0x00000000u; // 800E3314
L_800E3318:;
  cmps(c,0,(int32_t)c->r[9],1); // 800E3318
  if (crb(c,2)) { goto L_800E3344; } // 800E331C
L_800E3320:;
  cmps(c,0,(int32_t)c->r[6],0); // 800E3320
  if (crb(c,2)) { goto L_800E3330; } // 800E3324
  c->r[3]=R32(c->r[5]+0x00000008u); // 800E3328
  goto L_800E3334; // 800E332C
L_800E3330:;
  c->r[3]=c->r[3]+0x00000001u; // 800E3330
L_800E3334:;
  cmpu(c,0,c->r[3],c->r[4]); // 800E3334
  if (crb(c,0)) { IRQCHK(c); goto L_800E3250; } // 800E3338
  c->r[3]=0u+0xFFFFFFFFu; // 800E333C
  goto L_800E3360; // 800E3340
L_800E3344:;
  cmps(c,0,(int32_t)c->r[25],0); // 800E3344
  if (!crb(c,2)) { goto L_800E3350; } // 800E3348
  goto L_800E3360; // 800E334C
L_800E3350:;
  c->r[4]=c->r[8]+c->r[26]; // 800E3350
  c->r[29]=c->r[3]|c->r[3]; // 800E3354
  c->r[26]=c->r[4]+0x00000001u; // 800E3358
  IRQCHK(c); goto L_800E309C; // 800E335C
L_800E3360:;
  c->r[11]=c->r[1]+0x00000030u; // 800E3360
  c->lr=0x800E3368u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3364
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E3368
  c->lr=c->r[0]; // 800E336C
  c->r[1]=c->r[1]+0x00000030u; // 800E3370
  return; // 800E3374
}

// DVDFastOpen
void f_800E3380(Ctx* __restrict c) {
  trace_call(0x800E3380u);
  cmps(c,0,(int32_t)c->r[3],0); // 800E3380
  if (crb(c,0)) { goto L_800E33A8; } // 800E3384
  c->r[0]=R32(c->r[13]+0xFFFFA700u); // 800E3388
  cmpu(c,0,c->r[3],c->r[0]); // 800E338C
  if (!crb(c,0)) { goto L_800E33A8; } // 800E3390
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E3394
  c->r[3]=R32(c->r[13]+0xFFFFA708u); // 800E3398
  c->r[0]=R32(c->r[3]+c->r[7]); // 800E339C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800E33A0
  if (crb(c,2)) { goto L_800E33B0; } // 800E33A4
L_800E33A8:;
  c->r[3]=0u+0x00000000u; // 800E33A8
  return; // 800E33AC
L_800E33B0:;
  c->r[3]=c->r[3]+c->r[7]; // 800E33B0
  c->r[5]=R32(c->r[13]+0xFFFFA758u); // 800E33B4
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E33B8
  c->r[0]=0u+0x00000000u; // 800E33BC
  c->r[3]=0u+0x00000001u; // 800E33C0
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 800E33C4
  W32(c->r[4]+0x00000030u,c->r[5]); // 800E33C8
  c->r[5]=R32(c->r[13]+0xFFFFA708u); // 800E33CC
  c->r[5]=c->r[5]+c->r[7]; // 800E33D0
  c->r[5]=R32(c->r[5]+0x00000008u); // 800E33D4
  W32(c->r[4]+0x00000034u,c->r[5]); // 800E33D8
  W32(c->r[4]+0x00000038u,c->r[0]); // 800E33DC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E33E0
  return; // 800E33E4
}

// DVDOpen
void f_800E33F0(Ctx* __restrict c) {
  trace_call(0x800E33F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E33F0
  c->r[0]=c->lr; // 800E33F4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800E33F8
  c->r[11]=c->r[1]+0x000000A0u; // 800E33FC
  c->lr=0x800E3404u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E3400
  c->r[28]=c->r[3]|c->r[3]; // 800E3404
  c->r[27]=c->r[4]|c->r[4]; // 800E3408
  c->lr=0x800E3410u; f_800E3070(c); // 800E340C
  cmps(c,0,(int32_t)c->r[3],0); // 800E3410
  if (!crb(c,0)) { goto L_800E363C; } // 800E3414
  c->r[29]=R32(c->r[13]+0xFFFFA6F0u); // 800E3418
  cmps(c,0,(int32_t)c->r[29],0); // 800E341C
  if (!crb(c,2)) { goto L_800E342C; } // 800E3420
  c->r[4]=0u+0x00000000u; // 800E3424
  goto L_800E35C0; // 800E3428
L_800E342C:;
  c->r[8]=R32(c->r[13]+0xFFFFA708u); // 800E342C
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800E3430
  c->r[7]=R32(c->r[13]+0xFFFFA704u); // 800E3434
  c->r[6]=c->r[8]+0x00000004u; // 800E3438
  c->r[3]=R32(c->r[6]+c->r[0]); // 800E343C
  c->r[0]=R32(c->r[8]+c->r[0]); // 800E3440
  cmps(c,0,(int32_t)c->r[3],0); // 800E3444
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800E3448
  c->r[30]=c->r[7]+c->r[0]; // 800E344C
  if (!crb(c,2)) { goto L_800E345C; } // 800E3450
  c->r[4]=0u+0x00000000u; // 800E3454
  goto L_800E3560; // 800E3458
L_800E345C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E345C
  c->r[3]=R32(c->r[6]+c->r[0]); // 800E3460
  c->r[0]=R32(c->r[8]+c->r[0]); // 800E3464
  cmps(c,0,(int32_t)c->r[3],0); // 800E3468
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800E346C
  c->r[31]=c->r[7]+c->r[0]; // 800E3470
  if (!crb(c,2)) { goto L_800E3480; } // 800E3474
  c->r[4]=0u+0x00000000u; // 800E3478
  goto L_800E3500; // 800E347C
L_800E3480:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E3480
  c->r[4]=c->r[1]+0x00000008u; // 800E3484
  c->r[5]=0u+0x00000080u; // 800E3488
  c->r[0]=R32(c->r[8]+c->r[3]); // 800E348C
  c->r[3]=R32(c->r[6]+c->r[3]); // 800E3490
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800E3494
  c->r[27]=c->r[7]+c->r[0]; // 800E3498
  c->lr=0x800E34A0u; f_800E36E0(c); // 800E349C
  cmpu(c,0,c->r[3],0x00000080u); // 800E34A0
  c->r[4]=c->r[3]|c->r[3]; // 800E34A4
  if (!crb(c,2)) { goto L_800E34B0; } // 800E34A8
  goto L_800E3500; // 800E34AC
L_800E34B0:;
  c->r[4]=c->r[3]+0x00000001u; // 800E34B0
  c->r[5]=c->r[1]+0x00000008u; // 800E34B4
  c->r[0]=0u+0x0000002Fu; // 800E34B8
  W8(c->r[5]+c->r[3],c->r[0]); // 800E34BC
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 800E34C0
  c->r[5]=c->r[5]+c->r[4]; // 800E34C4
  c->r[3]=c->r[6]|c->r[6]; // 800E34C8
  goto L_800E34E4; // 800E34CC
L_800E34D0:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 800E34D0
  c->r[27]=c->r[27]+0x00000001u; // 800E34D4
  W8(c->r[5]+0x00000000u,c->r[0]); // 800E34D8
  c->r[5]=c->r[5]+0x00000001u; // 800E34DC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800E34E0
L_800E34E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800E34E4
  if (crb(c,2)) { goto L_800E34F8; } // 800E34E8
  c->r[0]=R8(c->r[27]+0x00000000u); // 800E34EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E34F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800E34D0; } // 800E34F4
L_800E34F8:;
  c->r[0]=c->r[6]-c->r[3]; // 800E34F8
  c->r[4]=c->r[4]+c->r[0]; // 800E34FC
L_800E3500:;
  cmpu(c,0,c->r[4],0x00000080u); // 800E3500
  if (!crb(c,2)) { goto L_800E350C; } // 800E3504
  goto L_800E3560; // 800E3508
L_800E350C:;
  c->r[5]=c->r[4]+0x00000001u; // 800E350C
  c->r[3]=c->r[1]+0x00000008u; // 800E3510
  c->r[0]=0u+0x0000002Fu; // 800E3514
  W8(c->r[3]+c->r[4],c->r[0]); // 800E3518
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 800E351C
  c->r[3]=c->r[3]+c->r[5]; // 800E3520
  c->r[4]=c->r[6]|c->r[6]; // 800E3524
  goto L_800E3544; // 800E3528
  c->r[0]=c->r[0]|0x00000000u; // 800E352C
L_800E3530:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800E3530
  c->r[31]=c->r[31]+0x00000001u; // 800E3534
  W8(c->r[3]+0x00000000u,c->r[0]); // 800E3538
  c->r[3]=c->r[3]+0x00000001u; // 800E353C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800E3540
L_800E3544:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E3544
  if (crb(c,2)) { goto L_800E3558; } // 800E3548
  c->r[0]=R8(c->r[31]+0x00000000u); // 800E354C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3550
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3530; } // 800E3554
L_800E3558:;
  c->r[0]=c->r[6]-c->r[4]; // 800E3558
  c->r[4]=c->r[5]+c->r[0]; // 800E355C
L_800E3560:;
  cmpu(c,0,c->r[4],0x00000080u); // 800E3560
  if (!crb(c,2)) { goto L_800E356C; } // 800E3564
  goto L_800E35C0; // 800E3568
L_800E356C:;
  c->r[5]=c->r[4]+0x00000001u; // 800E356C
  c->r[3]=c->r[1]+0x00000008u; // 800E3570
  c->r[0]=0u+0x0000002Fu; // 800E3574
  W8(c->r[3]+c->r[4],c->r[0]); // 800E3578
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 800E357C
  c->r[3]=c->r[3]+c->r[5]; // 800E3580
  c->r[4]=c->r[6]|c->r[6]; // 800E3584
  goto L_800E35A4; // 800E3588
  c->r[0]=c->r[0]|0x00000000u; // 800E358C
L_800E3590:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800E3590
  c->r[30]=c->r[30]+0x00000001u; // 800E3594
  W8(c->r[3]+0x00000000u,c->r[0]); // 800E3598
  c->r[3]=c->r[3]+0x00000001u; // 800E359C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800E35A0
L_800E35A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E35A4
  if (crb(c,2)) { goto L_800E35B8; } // 800E35A8
  c->r[0]=R8(c->r[30]+0x00000000u); // 800E35AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E35B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3590; } // 800E35B4
L_800E35B8:;
  c->r[0]=c->r[6]-c->r[4]; // 800E35B8
  c->r[4]=c->r[5]+c->r[0]; // 800E35BC
L_800E35C0:;
  cmpu(c,0,c->r[4],0x00000080u); // 800E35C0
  if (!crb(c,2)) { goto L_800E35D4; } // 800E35C4
  c->r[0]=0u+0x00000000u; // 800E35C8
  W8(c->r[1]+0x00000087u,c->r[0]); // 800E35CC
  goto L_800E361C; // 800E35D0
L_800E35D4:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800E35D4
  c->r[3]=R32(c->r[13]+0xFFFFA708u); // 800E35D8
  c->r[0]=R32(c->r[3]+c->r[0]); // 800E35DC
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800E35E0
  if (crb(c,2)) { goto L_800E3610; } // 800E35E4
  cmpu(c,0,c->r[4],0x0000007Fu); // 800E35E8
  if (!crb(c,2)) { goto L_800E3600; } // 800E35EC
  c->r[3]=c->r[1]+0x00000008u; // 800E35F0
  c->r[0]=0u+0x00000000u; // 800E35F4
  W8(c->r[3]+c->r[4],c->r[0]); // 800E35F8
  goto L_800E361C; // 800E35FC
L_800E3600:;
  c->r[3]=c->r[1]+0x00000008u; // 800E3600
  c->r[0]=0u+0x0000002Fu; // 800E3604
  W8(c->r[3]+c->r[4],c->r[0]); // 800E3608
  c->r[4]=c->r[4]+0x00000001u; // 800E360C
L_800E3610:;
  c->r[3]=c->r[1]+0x00000008u; // 800E3610
  c->r[0]=0u+0x00000000u; // 800E3614
  W8(c->r[3]+c->r[4],c->r[0]); // 800E3618
L_800E361C:;
  c->r[3]=0u+0x802B0000u; // 800E361C
  c->r[4]=c->r[28]|c->r[28]; // 800E3620
  c->r[3]=c->r[3]+0xFFFFF758u; // 800E3624
  c->r[5]=c->r[1]+0x00000008u; // 800E3628
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E362C
  c->lr=0x800E3634u; f_800C8450(c); // 800E3630
  c->r[3]=0u+0x00000000u; // 800E3634
  goto L_800E368C; // 800E3638
L_800E363C:;
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E363C
  c->r[3]=R32(c->r[13]+0xFFFFA708u); // 800E3640
  c->r[0]=R32(c->r[3]+c->r[6]); // 800E3644
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800E3648
  if (crb(c,2)) { goto L_800E3658; } // 800E364C
  c->r[3]=0u+0x00000000u; // 800E3650
  goto L_800E368C; // 800E3654
L_800E3658:;
  c->r[3]=c->r[3]+c->r[6]; // 800E3658
  c->r[4]=R32(c->r[13]+0xFFFFA758u); // 800E365C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E3660
  c->r[0]=0u+0x00000000u; // 800E3664
  c->r[3]=0u+0x00000001u; // 800E3668
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]>>((c->r[4])&31)); // 800E366C
  W32(c->r[27]+0x00000030u,c->r[4]); // 800E3670
  c->r[4]=R32(c->r[13]+0xFFFFA708u); // 800E3674
  c->r[4]=c->r[4]+c->r[6]; // 800E3678
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E367C
  W32(c->r[27]+0x00000034u,c->r[4]); // 800E3680
  W32(c->r[27]+0x00000038u,c->r[0]); // 800E3684
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800E3688
L_800E368C:;
  c->r[11]=c->r[1]+0x000000A0u; // 800E368C
  c->lr=0x800E3694u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3690
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800E3694
  c->lr=c->r[0]; // 800E3698
  c->r[1]=c->r[1]+0x000000A0u; // 800E369C
  return; // 800E36A0
}

// DVDClose
void f_800E36B0(Ctx* __restrict c) {
  trace_call(0x800E36B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E36B0
  c->r[0]=c->lr; // 800E36B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E36B8
  c->lr=0x800E36C0u; f_800E8260(c); // 800E36BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E36C0
  c->r[3]=0u+0x00000001u; // 800E36C4
  c->lr=c->r[0]; // 800E36C8
  c->r[1]=c->r[1]+0x00000010u; // 800E36CC
  return; // 800E36D0
}

// entryToPath_800E36E0
void f_800E36E0(Ctx* __restrict c) {
  trace_call(0x800E36E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E36E0
  c->r[0]=c->lr; // 800E36E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E36E8
  c->r[11]=c->r[1]+0x00000020u; // 800E36EC
  c->lr=0x800E36F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E36F0
  cmps(c,0,(int32_t)c->r[3],0); // 800E36F4
  c->r[28]=c->r[4]|c->r[4]; // 800E36F8
  c->r[29]=c->r[5]|c->r[5]; // 800E36FC
  if (!crb(c,2)) { goto L_800E370C; } // 800E3700
  c->r[3]=0u+0x00000000u; // 800E3704
  goto L_800E3890; // 800E3708
L_800E370C:;
  c->r[8]=R32(c->r[13]+0xFFFFA708u); // 800E370C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E3710
  c->r[7]=R32(c->r[13]+0xFFFFA704u); // 800E3714
  c->r[6]=c->r[8]+0x00000004u; // 800E3718
  c->r[3]=R32(c->r[6]+c->r[0]); // 800E371C
  c->r[0]=R32(c->r[8]+c->r[0]); // 800E3720
  cmps(c,0,(int32_t)c->r[3],0); // 800E3724
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800E3728
  c->r[30]=c->r[7]+c->r[0]; // 800E372C
  if (!crb(c,2)) { goto L_800E373C; } // 800E3730
  c->r[4]=0u+0x00000000u; // 800E3734
  goto L_800E3830; // 800E3738
L_800E373C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E373C
  c->r[3]=R32(c->r[6]+c->r[0]); // 800E3740
  c->r[0]=R32(c->r[8]+c->r[0]); // 800E3744
  cmps(c,0,(int32_t)c->r[3],0); // 800E3748
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800E374C
  c->r[31]=c->r[7]+c->r[0]; // 800E3750
  if (!crb(c,2)) { goto L_800E3760; } // 800E3754
  c->r[4]=0u+0x00000000u; // 800E3758
  goto L_800E37D8; // 800E375C
L_800E3760:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E3760
  c->r[0]=R32(c->r[8]+c->r[3]); // 800E3764
  c->r[3]=R32(c->r[6]+c->r[3]); // 800E3768
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800E376C
  c->r[27]=c->r[7]+c->r[0]; // 800E3770
  c->lr=0x800E3778u; f_800E36E0(c); // 800E3774
  cmpu(c,0,c->r[3],c->r[29]); // 800E3778
  c->r[4]=c->r[3]|c->r[3]; // 800E377C
  if (!crb(c,2)) { goto L_800E3788; } // 800E3780
  goto L_800E37D8; // 800E3784
L_800E3788:;
  c->r[4]=c->r[3]+0x00000001u; // 800E3788
  c->r[0]=0u+0x0000002Fu; // 800E378C
  c->r[6]=c->r[29]-c->r[4]; // 800E3790
  W8(c->r[28]+c->r[3],c->r[0]); // 800E3794
  c->r[3]=c->r[28]+c->r[4]; // 800E3798
  c->r[5]=c->r[6]|c->r[6]; // 800E379C
  goto L_800E37BC; // 800E37A0
  c->r[0]=c->r[0]|0x00000000u; // 800E37A4
L_800E37A8:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 800E37A8
  c->r[27]=c->r[27]+0x00000001u; // 800E37AC
  W8(c->r[3]+0x00000000u,c->r[0]); // 800E37B0
  c->r[3]=c->r[3]+0x00000001u; // 800E37B4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800E37B8
L_800E37BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800E37BC
  if (crb(c,2)) { goto L_800E37D0; } // 800E37C0
  c->r[0]=R8(c->r[27]+0x00000000u); // 800E37C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E37C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800E37A8; } // 800E37CC
L_800E37D0:;
  c->r[0]=c->r[6]-c->r[5]; // 800E37D0
  c->r[4]=c->r[4]+c->r[0]; // 800E37D4
L_800E37D8:;
  cmpu(c,0,c->r[4],c->r[29]); // 800E37D8
  if (!crb(c,2)) { goto L_800E37E4; } // 800E37DC
  goto L_800E3830; // 800E37E0
L_800E37E4:;
  c->r[3]=c->r[4]+0x00000001u; // 800E37E4
  c->r[0]=0u+0x0000002Fu; // 800E37E8
  c->r[6]=c->r[29]-c->r[3]; // 800E37EC
  W8(c->r[28]+c->r[4],c->r[0]); // 800E37F0
  c->r[4]=c->r[28]+c->r[3]; // 800E37F4
  c->r[5]=c->r[6]|c->r[6]; // 800E37F8
  goto L_800E3814; // 800E37FC
L_800E3800:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800E3800
  c->r[31]=c->r[31]+0x00000001u; // 800E3804
  W8(c->r[4]+0x00000000u,c->r[0]); // 800E3808
  c->r[4]=c->r[4]+0x00000001u; // 800E380C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800E3810
L_800E3814:;
  cmps(c,0,(int32_t)c->r[5],0); // 800E3814
  if (crb(c,2)) { goto L_800E3828; } // 800E3818
  c->r[0]=R8(c->r[31]+0x00000000u); // 800E381C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3820
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3800; } // 800E3824
L_800E3828:;
  c->r[0]=c->r[6]-c->r[5]; // 800E3828
  c->r[4]=c->r[3]+c->r[0]; // 800E382C
L_800E3830:;
  cmpu(c,0,c->r[4],c->r[29]); // 800E3830
  if (!crb(c,2)) { goto L_800E3840; } // 800E3834
  c->r[3]=c->r[4]|c->r[4]; // 800E3838
  goto L_800E3890; // 800E383C
L_800E3840:;
  c->r[6]=c->r[4]+0x00000001u; // 800E3840
  c->r[0]=0u+0x0000002Fu; // 800E3844
  c->r[5]=c->r[29]-c->r[6]; // 800E3848
  W8(c->r[28]+c->r[4],c->r[0]); // 800E384C
  c->r[3]=c->r[28]+c->r[6]; // 800E3850
  c->r[4]=c->r[5]|c->r[5]; // 800E3854
  goto L_800E3874; // 800E3858
  c->r[0]=c->r[0]|0x00000000u; // 800E385C
L_800E3860:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800E3860
  c->r[30]=c->r[30]+0x00000001u; // 800E3864
  W8(c->r[3]+0x00000000u,c->r[0]); // 800E3868
  c->r[3]=c->r[3]+0x00000001u; // 800E386C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800E3870
L_800E3874:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E3874
  if (crb(c,2)) { goto L_800E3888; } // 800E3878
  c->r[0]=R8(c->r[30]+0x00000000u); // 800E387C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3880
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3860; } // 800E3884
L_800E3888:;
  c->r[0]=c->r[5]-c->r[4]; // 800E3888
  c->r[3]=c->r[6]+c->r[0]; // 800E388C
L_800E3890:;
  c->r[11]=c->r[1]+0x00000020u; // 800E3890
  c->lr=0x800E3898u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3894
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3898
  c->lr=c->r[0]; // 800E389C
  c->r[1]=c->r[1]+0x00000020u; // 800E38A0
  return; // 800E38A4
}

// DVDReadAsyncPrio
void f_800E38B0(Ctx* __restrict c) {
  trace_call(0x800E38B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38B0
  c->r[0]=c->lr; // 800E38B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E38B8
  c->r[11]=c->r[1]+0x00000020u; // 800E38BC
  c->lr=0x800E38C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E38C0
  cmps(c,0,(int32_t)c->r[6],0); // 800E38C4
  c->r[26]=c->r[3]|c->r[3]; // 800E38C8
  c->r[27]=c->r[4]|c->r[4]; // 800E38CC
  c->r[28]=c->r[5]|c->r[5]; // 800E38D0
  c->r[29]=c->r[6]|c->r[6]; // 800E38D4
  c->r[30]=c->r[7]|c->r[7]; // 800E38D8
  c->r[31]=c->r[8]|c->r[8]; // 800E38DC
  if (crb(c,0)) { goto L_800E38F0; } // 800E38E0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E38E4
  cmpu(c,0,c->r[6],c->r[0]); // 800E38E8
  if (!crb(c,1)) { goto L_800E3908; } // 800E38EC
L_800E38F0:;
  c->r[5]=0u+0x802B0000u; // 800E38F0
  c->r[3]=c->r[13]+0xFFFF9028u; // 800E38F4
  c->r[5]=c->r[5]+0xFFFFF790u; // 800E38F8
  c->r[4]=0u+0x00000337u; // 800E38FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E3900
  c->lr=0x800E3908u; f_800C84E0(c); // 800E3904
L_800E3908:;
  c->r[4]=c->r[29]+c->r[28]; cr0(c,c->r[4]); // 800E3908
  if (crb(c,0)) { goto L_800E3920; } // 800E390C
  c->r[3]=R32(c->r[26]+0x00000034u); // 800E3910
  c->r[0]=c->r[3]+0x00000020u; // 800E3914
  cmpu(c,0,c->r[4],c->r[0]); // 800E3918
  if (crb(c,0)) { goto L_800E3938; } // 800E391C
L_800E3920:;
  c->r[5]=0u+0x802B0000u; // 800E3920
  c->r[3]=c->r[13]+0xFFFF9028u; // 800E3924
  c->r[5]=c->r[5]+0xFFFFF790u; // 800E3928
  c->r[4]=0u+0x0000033Du; // 800E392C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E3930
  c->lr=0x800E3938u; f_800C84E0(c); // 800E3934
L_800E3938:;
  c->r[6]=R32(c->r[26]+0x00000030u); // 800E3938
  c->r[0]=sraw(c,c->r[29],2); // 800E393C
  c->r[7]=0u+0x800E0000u; // 800E3940
  W32(c->r[26]+0x00000038u,c->r[30]); // 800E3944
  c->r[3]=c->r[26]|c->r[26]; // 800E3948
  c->r[4]=c->r[27]|c->r[27]; // 800E394C
  c->r[5]=c->r[28]|c->r[28]; // 800E3950
  c->r[8]=c->r[31]|c->r[31]; // 800E3954
  c->r[6]=c->r[6]+c->r[0]; // 800E3958
  c->r[7]=c->r[7]+0x00003980u; // 800E395C
  c->lr=0x800E3964u; f_800E7B50(c); // 800E3960
  c->r[11]=c->r[1]+0x00000020u; // 800E3964
  c->r[3]=0u+0x00000001u; // 800E3968
  c->lr=0x800E3970u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E396C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3970
  c->lr=c->r[0]; // 800E3974
  c->r[1]=c->r[1]+0x00000020u; // 800E3978
  return; // 800E397C
}

// cbForReadAsync
void f_800E3980(Ctx* __restrict c) {
  trace_call(0x800E3980u);
  c->r[12]=R32(c->r[4]+0x00000038u); // 800E3980
  cmps(c,0,(int32_t)c->r[12],0); // 800E3984
  if (crb(c,2)) return; // 800E3988
  c->ctr=c->r[12]; // 800E398C
  if (true) { dispatch(c,c->ctr); return; } // 800E3990
  return; // 800E3994
}

// DVDReadPrio
void f_800E39A0(Ctx* __restrict c) {
  trace_call(0x800E39A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E39A0
  c->r[0]=c->lr; // 800E39A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E39A8
  c->r[11]=c->r[1]+0x00000020u; // 800E39AC
  c->lr=0x800E39B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E39B0
  cmps(c,0,(int32_t)c->r[6],0); // 800E39B4
  c->r[27]=c->r[3]|c->r[3]; // 800E39B8
  c->r[28]=c->r[4]|c->r[4]; // 800E39BC
  c->r[29]=c->r[5]|c->r[5]; // 800E39C0
  c->r[31]=c->r[6]|c->r[6]; // 800E39C4
  c->r[30]=c->r[7]|c->r[7]; // 800E39C8
  if (crb(c,0)) { goto L_800E39DC; } // 800E39CC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E39D0
  cmpu(c,0,c->r[6],c->r[0]); // 800E39D4
  if (!crb(c,1)) { goto L_800E39F4; } // 800E39D8
L_800E39DC:;
  c->r[5]=0u+0x802B0000u; // 800E39DC
  c->r[3]=c->r[13]+0xFFFF9028u; // 800E39E0
  c->r[5]=c->r[5]+0xFFFFF7C4u; // 800E39E4
  c->r[4]=0u+0x0000037Du; // 800E39E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E39EC
  c->lr=0x800E39F4u; f_800C84E0(c); // 800E39F0
L_800E39F4:;
  c->r[4]=c->r[31]+c->r[29]; cr0(c,c->r[4]); // 800E39F4
  if (crb(c,0)) { goto L_800E3A0C; } // 800E39F8
  c->r[3]=R32(c->r[27]+0x00000034u); // 800E39FC
  c->r[0]=c->r[3]+0x00000020u; // 800E3A00
  cmpu(c,0,c->r[4],c->r[0]); // 800E3A04
  if (crb(c,0)) { goto L_800E3A24; } // 800E3A08
L_800E3A0C:;
  c->r[5]=0u+0x802B0000u; // 800E3A0C
  c->r[3]=c->r[13]+0xFFFF9028u; // 800E3A10
  c->r[5]=c->r[5]+0xFFFFF7C4u; // 800E3A14
  c->r[4]=0u+0x00000383u; // 800E3A18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E3A1C
  c->lr=0x800E3A24u; f_800C84E0(c); // 800E3A20
L_800E3A24:;
  c->r[6]=R32(c->r[27]+0x00000030u); // 800E3A24
  c->r[0]=sraw(c,c->r[31],2); // 800E3A28
  c->r[7]=0u+0x800E0000u; // 800E3A2C
  c->r[3]=c->r[27]|c->r[27]; // 800E3A30
  c->r[4]=c->r[28]|c->r[28]; // 800E3A34
  c->r[5]=c->r[29]|c->r[29]; // 800E3A38
  c->r[8]=c->r[30]|c->r[30]; // 800E3A3C
  c->r[6]=c->r[6]+c->r[0]; // 800E3A40
  c->r[7]=c->r[7]+0x00003AD0u; // 800E3A44
  c->lr=0x800E3A4Cu; f_800E7B50(c); // 800E3A48
  cmps(c,0,(int32_t)c->r[3],0); // 800E3A4C
  if (!crb(c,2)) { goto L_800E3A5C; } // 800E3A50
  c->r[3]=0u+0xFFFFFFFFu; // 800E3A54
  goto L_800E3AB0; // 800E3A58
L_800E3A5C:;
  c->lr=0x800E3A60u; f_800CBAA0(c); // 800E3A5C
  c->r[31]=c->r[3]|c->r[3]; // 800E3A60
L_800E3A64:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800E3A64
  cmps(c,0,(int32_t)c->r[0],0); // 800E3A68
  if (!crb(c,2)) { goto L_800E3A78; } // 800E3A6C
  c->r[30]=R32(c->r[27]+0x00000020u); // 800E3A70
  goto L_800E3AA4; // 800E3A74
L_800E3A78:;
  cmps(c,0,(int32_t)c->r[0],-1); // 800E3A78
  if (!crb(c,2)) { goto L_800E3A88; } // 800E3A7C
  c->r[30]=0u+0xFFFFFFFFu; // 800E3A80
  goto L_800E3AA4; // 800E3A84
L_800E3A88:;
  cmps(c,0,(int32_t)c->r[0],10); // 800E3A88
  if (!crb(c,2)) { goto L_800E3A98; } // 800E3A8C
  c->r[30]=0u+0xFFFFFFFDu; // 800E3A90
  goto L_800E3AA4; // 800E3A94
L_800E3A98:;
  c->r[3]=c->r[13]+0xFFFFA6F8u; // 800E3A98
  c->lr=0x800E3AA0u; f_800CF9E0(c); // 800E3A9C
  IRQCHK(c); goto L_800E3A64; // 800E3AA0
L_800E3AA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E3AA4
  c->lr=0x800E3AACu; f_800CBAE0(c); // 800E3AA8
  c->r[3]=c->r[30]|c->r[30]; // 800E3AAC
L_800E3AB0:;
  c->r[11]=c->r[1]+0x00000020u; // 800E3AB0
  c->lr=0x800E3AB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3AB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3AB8
  c->lr=c->r[0]; // 800E3ABC
  c->r[1]=c->r[1]+0x00000020u; // 800E3AC0
  return; // 800E3AC4
}

// cbForReadSync
void f_800E3AD0(Ctx* __restrict c) {
  trace_call(0x800E3AD0u);
  c->r[3]=c->r[13]+0xFFFFA6F8u; // 800E3AD0
  f_800CFAD0(c); return; // 800E3AD4
}

// DVDGetTransferredSize
void f_800E3AE0(Ctx* __restrict c) {
  trace_call(0x800E3AE0u);
  c->r[3]=R32(c->r[13]+0xFFFFA70Cu); // 800E3AE0
  c->r[3]=R32(c->r[3]+0x00000038u); // 800E3AE4
  return; // 800E3AE8
}

// StampCommand
void f_800E3AF0(Ctx* __restrict c) {
  trace_call(0x800E3AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3AF0
  c->r[0]=c->lr; // 800E3AF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3AF8
  c->r[11]=c->r[1]+0x00000020u; // 800E3AFC
  c->lr=0x800E3B04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E3B00
  c->r[27]=c->r[3]|c->r[3]; // 800E3B04
  c->r[28]=c->r[4]|c->r[4]; // 800E3B08
  c->r[29]=c->r[5]|c->r[5]; // 800E3B0C
  c->lr=0x800E3B14u; f_800CBAA0(c); // 800E3B10
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3B14
  c->r[31]=c->r[3]|c->r[3]; // 800E3B18
  cmpu(c,0,c->r[0],0x00000005u); // 800E3B1C
  if (crb(c,0)) { goto L_800E3B2C; } // 800E3B20
  c->r[0]=0u+0x00000000u; // 800E3B24
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E3B28
L_800E3B2C:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3B2C
  c->r[30]=0u+0x802F0000u; // 800E3B30
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E3B34
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E3B38
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3B3C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3B40
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E3B44
  c->r[4]=c->r[30]+c->r[4]; // 800E3B48
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 800E3B4C
  c->r[3]=c->r[30]+c->r[3]; // 800E3B50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3B54
  W32(c->r[3]+0x00000020u,c->r[28]); // 800E3B58
  c->r[3]=c->r[30]+c->r[0]; // 800E3B5C
  W32(c->r[3]+0x00000024u,c->r[29]); // 800E3B60
  c->lr=0x800E3B68u; f_800D0530(c); // 800E3B64
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3B68
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E3B6C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3B70
  c->r[0]=c->r[4]+0x00000001u; // 800E3B74
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E3B78
  c->r[4]=c->r[30]+c->r[5]; // 800E3B7C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E3B80
  c->r[3]=c->r[31]|c->r[31]; // 800E3B84
  c->lr=0x800E3B8Cu; f_800CBAE0(c); // 800E3B88
  c->r[11]=c->r[1]+0x00000020u; // 800E3B8C
  c->lr=0x800E3B94u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3B90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3B94
  c->lr=c->r[0]; // 800E3B98
  c->r[1]=c->r[1]+0x00000020u; // 800E3B9C
  return; // 800E3BA0
}

// defaultOptionalCommandChecker
void f_800E3BB0(Ctx* __restrict c) {
  trace_call(0x800E3BB0u);
  return; // 800E3BB0
}

// DVDInit
void f_800E3BC0(Ctx* __restrict c) {
  trace_call(0x800E3BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3BC0
  c->r[0]=c->lr; // 800E3BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3BC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3BCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3BD0
  c->r[0]=R32(c->r[13]+0xFFFFA75Cu); // 800E3BD4
  cmps(c,0,(int32_t)c->r[0],0); // 800E3BD8
  if (!crb(c,2)) { goto L_800E3CFC; } // 800E3BDC
  c->r[3]=R32(c->r[13]+0xFFFF9030u); // 800E3BE0
  c->lr=0x800E3BE8u; f_800C65B0(c); // 800E3BE4
  c->r[0]=0u+0x00000001u; // 800E3BE8
  W32(c->r[13]+0xFFFFA75Cu,c->r[0]); // 800E3BEC
  c->lr=0x800E3BF4u; f_800E9A80(c); // 800E3BF0
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800E3BF4
  cmps(c,0,(int32_t)c->r[0],0); // 800E3BF8
  if (!crb(c,2)) { goto L_800E3C5C; } // 800E3BFC
  c->r[3]=0u+0x80000000u; // 800E3C00
  c->r[0]=R8(c->r[3]+0x00003187u); // 800E3C04
  cmpu(c,0,c->r[0],0x00000080u); // 800E3C08
  if (!crb(c,2)) { goto L_800E3C5C; } // 800E3C0C
  c->lr=0x800E3C14u; f_800F9610(c); // 800E3C10
  cmps(c,0,(int32_t)c->r[3],0); // 800E3C14
  if (!crb(c,2)) { goto L_800E3C2C; } // 800E3C18
  c->r[4]=0u+0x802F0000u; // 800E3C1C
  c->r[3]=0u+0x00000000u; // 800E3C20
  c->r[4]=c->r[4]+0xFFFFAFC0u; // 800E3C24
  c->lr=0x800E3C2Cu; f_800F9AA0(c); // 800E3C28
L_800E3C2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800E3C2C
  if (!crb(c,2)) { goto L_800E3C40; } // 800E3C30
  c->r[3]=0u+0x00000000u; // 800E3C34
  c->r[4]=c->r[13]+0xFFFFA780u; // 800E3C38
  c->lr=0x800E3C40u; f_800F9B50(c); // 800E3C3C
L_800E3C40:;
  cmps(c,0,(int32_t)c->r[3],0); // 800E3C40
  if (!crb(c,2)) { goto L_800E3C58; } // 800E3C44
  c->r[3]=0u+0x802F0000u; // 800E3C48
  c->r[4]=c->r[13]+0xFFFFA780u; // 800E3C4C
  c->r[3]=c->r[3]+0xFFFFB0C0u; // 800E3C50
  c->lr=0x800E3C58u; f_800F9B50(c); // 800E3C54
L_800E3C58:;
  c->lr=0x800E3C5Cu; f_800F9670(c); // 800E3C58
L_800E3C5C:;
  c->lr=0x800E3C60u; f_800E3040(c); // 800E3C5C
  c->lr=0x800E3C64u; f_800E8720(c); // 800E3C60
  c->r[0]=0u+0x80000000u; // 800E3C64
  c->r[3]=0u+0x00000000u; // 800E3C68
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E3C6C
  c->r[3]=c->r[13]+0xFFFFA6F8u; // 800E3C70
  W32(c->r[13]+0xFFFFA7A8u,c->r[0]); // 800E3C74
  W32(c->r[13]+0xFFFFA7ACu,c->r[0]); // 800E3C78
  c->lr=0x800E3C80u; f_800CE950(c); // 800E3C7C
  c->lr=0x800E3C84u; f_800EBDC0(c); // 800E3C80
  c->lr=0x800E3C88u; f_800EBDD0(c); // 800E3C84
  c->r[3]=R32(c->r[13]+0xFFFFA7A8u); // 800E3C88
  c->r[3]=R32(c->r[3]+0x00000020u); // 800E3C8C
  c->r[0]=c->r[3]+0x1AE00000u; // 800E3C90
  cmpu(c,0,c->r[0],0x00007C22u); // 800E3C94
  if (crb(c,2)) { goto L_800E3CB0; } // 800E3C98
  c->r[0]=c->r[3]+0xF2EB0000u; // 800E3C9C
  cmpu(c,0,c->r[0],0x0000EA5Eu); // 800E3CA0
  if (crb(c,2)) { goto L_800E3CB0; } // 800E3CA4
  c->r[0]=0u+0x00000001u; // 800E3CA8
  W32(c->r[13]+0xFFFFA73Cu,c->r[0]); // 800E3CAC
L_800E3CB0:;
  c->r[31]=0u+0x802F0000u; // 800E3CB0
  c->r[4]=0u+0x00000000u; // 800E3CB4
  c->r[3]=c->r[31]+0xFFFFFE00u; // 800E3CB8
  c->r[5]=0u+0x00000080u; // 800E3CBC
  c->lr=0x800E3CC4u; f_800046B4(c); // 800E3CC0
  c->r[30]=0u+0x80000000u; // 800E3CC4
  c->r[3]=c->r[31]+0xFFFFFE00u; // 800E3CC8
  c->r[4]=c->r[30]|c->r[30]; // 800E3CCC
  c->r[5]=0u+0x00000004u; // 800E3CD0
  c->lr=0x800E3CD8u; f_80004364(c); // 800E3CD4
  c->r[5]=c->r[31]+0xFFFFFE00u; // 800E3CD8
  c->r[0]=R8(c->r[30]+0x00000006u); // 800E3CDC
  W8(c->r[5]+0x00000004u,c->r[0]); // 800E3CE0
  c->r[0]=0u+0x00000000u; // 800E3CE4
  c->r[3]=0u+0x00000001u; // 800E3CE8
  c->r[4]=R8(c->r[30]+0x00000007u); // 800E3CEC
  W8(c->r[5]+0x00000005u,c->r[4]); // 800E3CF0
  W32(c->r[13]+0xFFFFA758u,c->r[0]); // 800E3CF4
  c->lr=0x800E3CFCu; f_800E9580(c); // 800E3CF8
L_800E3CFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3CFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3D00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3D04
  c->lr=c->r[0]; // 800E3D08
  c->r[1]=c->r[1]+0x00000010u; // 800E3D0C
  return; // 800E3D10
}

// stateReadingFST
void f_800E3D20(Ctx* __restrict c) {
  trace_call(0x800E3D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3D20
  c->r[0]=c->lr; // 800E3D24
  c->r[4]=0u+0x800E0000u; // 800E3D28
  c->r[3]=0u+0x802F0000u; // 800E3D2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3D30
  c->r[4]=c->r[4]+0x00003D20u; // 800E3D34
  c->r[3]=c->r[3]+0xFFFFFAC0u; // 800E3D38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E3D3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E3D40
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E3D44
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E3D48
  W32(c->r[13]+0xFFFFA7B4u,c->r[4]); // 800E3D4C
  c->r[4]=R32(c->r[13]+0xFFFFA7A8u); // 800E3D50
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E3D54
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 800E3D58
  cmpu(c,0,c->r[3],c->r[0]); // 800E3D5C
  if (!crb(c,0)) { goto L_800E3D7C; } // 800E3D60
  c->r[5]=0u+0x802B0000u; // 800E3D64
  c->r[3]=c->r[13]+0xFFFF903Cu; // 800E3D68
  c->r[5]=c->r[5]+0xFFFFF840u; // 800E3D6C
  c->r[4]=0u+0x00000442u; // 800E3D70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E3D74
  c->lr=0x800E3D7Cu; f_800C84E0(c); // 800E3D78
L_800E3D7C:;
  c->r[3]=0u+0x00000000u; // 800E3D7C
  c->lr=0x800E3D84u; f_800EBDE0(c); // 800E3D80
  c->r[3]=R32(c->r[13]+0xFFFFA758u); // 800E3D84
  c->r[6]=0u+0x802F0000u; // 800E3D88
  c->r[6]=c->r[6]+0xFFFFFAC0u; // 800E3D8C
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800E3D90
  c->r[3]=~(c->r[3]|c->r[3]); // 800E3D94
  c->r[5]=R32(c->r[6]+0x00000008u); // 800E3D98
  c->r[4]=rotl(c->r[3],0)&0x00000002u; // 800E3D9C
  c->r[3]=R32(c->r[6]+0x00000004u); // 800E3DA0
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800E3DA4
  c->r[4]=c->r[4]+0x0000001Fu; // 800E3DA8
  c->r[29]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800E3DAC
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 800E3DB0
  c->lr=0x800E3DB8u; f_800CBAA0(c); // 800E3DB4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3DB8
  c->r[31]=c->r[3]|c->r[3]; // 800E3DBC
  cmpu(c,0,c->r[0],0x00000005u); // 800E3DC0
  if (crb(c,0)) { goto L_800E3DD0; } // 800E3DC4
  c->r[0]=0u+0x00000000u; // 800E3DC8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E3DCC
L_800E3DD0:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3DD0
  c->r[30]=0u+0x802F0000u; // 800E3DD4
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E3DD8
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E3DDC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3DE0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3DE4
  c->r[5]=0u+0x00000001u; // 800E3DE8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E3DEC
  c->r[4]=c->r[30]+c->r[4]; // 800E3DF0
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 800E3DF4
  c->r[3]=c->r[30]+c->r[3]; // 800E3DF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3DFC
  W32(c->r[3]+0x00000020u,c->r[29]); // 800E3E00
  c->r[3]=c->r[30]+c->r[0]; // 800E3E04
  W32(c->r[3]+0x00000024u,c->r[28]); // 800E3E08
  c->lr=0x800E3E10u; f_800D0530(c); // 800E3E0C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3E10
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E3E14
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3E18
  c->r[0]=c->r[4]+0x00000001u; // 800E3E1C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E3E20
  c->r[4]=c->r[30]+c->r[5]; // 800E3E24
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E3E28
  c->r[3]=c->r[31]|c->r[31]; // 800E3E2C
  c->lr=0x800E3E34u; f_800CBAE0(c); // 800E3E30
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800E3E34
  c->r[4]=0u+0x802F0000u; // 800E3E38
  c->r[4]=c->r[4]+0xFFFFFAC0u; // 800E3E3C
  c->r[6]=0u+0x800E0000u; // 800E3E40
  c->r[0]=~(c->r[0]|c->r[0]); // 800E3E44
  c->r[3]=R32(c->r[4]+0x00000008u); // 800E3E48
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800E3E4C
  c->r[7]=R32(c->r[13]+0xFFFFA7A8u); // 800E3E50
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800E3E54
  c->r[5]=R32(c->r[4]+0x00000004u); // 800E3E58
  c->r[4]=c->r[3]+0x0000001Fu; // 800E3E5C
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800E3E60
  c->r[3]=R32(c->r[7]+0x00000038u); // 800E3E64
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 800E3E68
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 800E3E6C
  c->r[6]=c->r[6]+0x00003EA0u; // 800E3E70
  c->lr=0x800E3E78u; f_800EB600(c); // 800E3E74
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3E78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E3E7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E3E80
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E3E84
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E3E88
  c->lr=c->r[0]; // 800E3E8C
  c->r[1]=c->r[1]+0x00000020u; // 800E3E90
  return; // 800E3E94
}

// cbForStateReadingFST
void f_800E3EA0(Ctx* __restrict c) {
  trace_call(0x800E3EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3EA0
  c->r[0]=c->lr; // 800E3EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3EAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3EB0
  c->r[30]=c->r[3]|c->r[3]; // 800E3EB4
  c->lr=0x800E3EBCu; f_800CBAA0(c); // 800E3EB8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3EBC
  cmps(c,0,(int32_t)c->r[0],0); // 800E3EC0
  if (!crb(c,2)) { goto L_800E3ED8; } // 800E3EC4
  c->r[4]=0u+0x802F0000u; // 800E3EC8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E3ECC
  W32(c->r[4]+0x00000078u,c->r[30]); // 800E3ED0
  goto L_800E3EF0; // 800E3ED4
L_800E3ED8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3ED8
  c->r[4]=0u+0x802F0000u; // 800E3EDC
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E3EE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3EE4
  c->r[4]=c->r[4]+c->r[0]; // 800E3EE8
  W32(c->r[4]+0x00000014u,c->r[30]); // 800E3EEC
L_800E3EF0:;
  c->lr=0x800E3EF4u; f_800CBAE0(c); // 800E3EF0
  cmpu(c,0,c->r[30],0x00000010u); // 800E3EF4
  if (!crb(c,2)) { goto L_800E3F14; } // 800E3EF8
  c->r[3]=0u+0x01230000u; // 800E3EFC
  c->r[4]=0u+0x800E0000u; // 800E3F00
  c->r[3]=c->r[3]+0x00004568u; // 800E3F04
  c->r[4]=c->r[4]+0x00004170u; // 800E3F08
  c->lr=0x800E3F10u; f_800E9350(c); // 800E3F0C
  goto L_800E400C; // 800E3F10
L_800E3F14:;
  cmpu(c,0,c->r[30],0x00000020u); // 800E3F14
  if (!crb(c,2)) { goto L_800E3F34; } // 800E3F18
  c->r[3]=0u+0x01230000u; // 800E3F1C
  c->r[4]=0u+0x800E0000u; // 800E3F20
  c->r[3]=c->r[3]+0x00004569u; // 800E3F24
  c->r[4]=c->r[4]+0x00004170u; // 800E3F28
  c->lr=0x800E3F30u; f_800E9350(c); // 800E3F2C
  goto L_800E400C; // 800E3F30
L_800E3F34:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800E3F34
  if (crb(c,2)) { goto L_800E3F7C; } // 800E3F38
  c->r[30]=0u+0x00000000u; // 800E3F3C
  W32(c->r[13]+0xFFFFA738u,c->r[30]); // 800E3F40
  c->lr=0x800E3F48u; f_800E3040(c); // 800E3F44
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E3F48
  c->r[3]=0u+0x802F0000u; // 800E3F4C
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E3F50
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E3F54
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 800E3F58
  c->r[12]=R32(c->r[4]+0x00000028u); // 800E3F5C
  cmps(c,0,(int32_t)c->r[12],0); // 800E3F60
  if (crb(c,2)) { goto L_800E3F74; } // 800E3F64
  c->r[3]=0u+0x00000000u; // 800E3F68
  c->ctr=c->r[12]; // 800E3F6C
  if (true) { c->lr=0x800E3F74u; dispatch(c,c->ctr); } // 800E3F70
L_800E3F74:;
  c->lr=0x800E3F78u; f_800E68A0(c); // 800E3F74
  goto L_800E400C; // 800E3F78
L_800E3F7C:;
  c->lr=0x800E3F80u; f_800CBAA0(c); // 800E3F7C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3F80
  c->r[31]=c->r[3]|c->r[3]; // 800E3F84
  cmpu(c,0,c->r[0],0x00000005u); // 800E3F88
  if (crb(c,0)) { goto L_800E3F98; } // 800E3F8C
  c->r[0]=0u+0x00000000u; // 800E3F90
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E3F94
L_800E3F98:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3F98
  c->r[30]=0u+0x802F0000u; // 800E3F9C
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E3FA0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E3FA4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3FA8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3FAC
  c->r[6]=0u+0x00000027u; // 800E3FB0
  c->r[4]=0u+0x00000000u; // 800E3FB4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E3FB8
  c->r[5]=c->r[30]+c->r[5]; // 800E3FBC
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E3FC0
  c->r[3]=c->r[30]+c->r[3]; // 800E3FC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3FC8
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E3FCC
  c->r[3]=c->r[30]+c->r[0]; // 800E3FD0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E3FD4
  c->lr=0x800E3FDCu; f_800D0530(c); // 800E3FD8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E3FDC
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E3FE0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E3FE4
  c->r[0]=c->r[4]+0x00000001u; // 800E3FE8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E3FEC
  c->r[4]=c->r[30]+c->r[5]; // 800E3FF0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E3FF4
  c->r[3]=c->r[31]|c->r[31]; // 800E3FF8
  c->lr=0x800E4000u; f_800CBAE0(c); // 800E3FFC
  c->r[3]=0u+0x800E0000u; // 800E4000
  c->r[3]=c->r[3]+0x00004380u; // 800E4004
  c->lr=0x800E400Cu; f_800EAE30(c); // 800E4008
L_800E400C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E400C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4010
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4014
  c->lr=c->r[0]; // 800E4018
  c->r[1]=c->r[1]+0x00000010u; // 800E401C
  return; // 800E4020
}

// FatalAlarmHandler
void f_800E4030(Ctx* __restrict c) {
  trace_call(0x800E4030u);
  f_800E9600(c); return; // 800E4030
}

// cbForStateError
void f_800E4040(Ctx* __restrict c) {
  trace_call(0x800E4040u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4040
  c->r[0]=c->lr; // 800E4044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E404C
  c->r[31]=c->r[3]|c->r[3]; // 800E4050
  c->lr=0x800E4058u; f_800E95E0(c); // 800E4054
  cmps(c,0,(int32_t)c->r[3],0); // 800E4058
  if (crb(c,2)) { goto L_800E4088; } // 800E405C
  c->r[31]=0u+0x802F0000u; // 800E4060
  c->r[3]=c->r[31]+0xFFFFFB10u; // 800E4064
  c->lr=0x800E406Cu; f_800C66D0(c); // 800E4068
  c->r[7]=0u+0x800E0000u; // 800E406C
  c->r[3]=c->r[31]+0xFFFFFB10u; // 800E4070
  c->r[7]=c->r[7]+0x00004030u; // 800E4074
  c->r[6]=0u+0x00000001u; // 800E4078
  c->r[5]=0u+0x00000000u; // 800E407C
  c->lr=0x800E4084u; f_800C6930(c); // 800E4080
  goto L_800E413C; // 800E4084
L_800E4088:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E4088
  c->r[0]=0u+0xFFFFFFFFu; // 800E408C
  cmpu(c,0,c->r[31],0x00000010u); // 800E4090
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E4094
  if (!crb(c,2)) { goto L_800E40B4; } // 800E4098
  c->r[3]=0u+0x01230000u; // 800E409C
  c->r[4]=0u+0x800E0000u; // 800E40A0
  c->r[3]=c->r[3]+0x00004568u; // 800E40A4
  c->r[4]=c->r[4]+0x00004170u; // 800E40A8
  c->lr=0x800E40B0u; f_800E9350(c); // 800E40AC
  goto L_800E413C; // 800E40B0
L_800E40B4:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E40B4
  if (!crb(c,2)) { goto L_800E40D4; } // 800E40B8
  c->r[3]=0u+0x01230000u; // 800E40BC
  c->r[4]=0u+0x800E0000u; // 800E40C0
  c->r[3]=c->r[3]+0x00004569u; // 800E40C4
  c->r[4]=c->r[4]+0x00004170u; // 800E40C8
  c->lr=0x800E40D0u; f_800E9350(c); // 800E40CC
  goto L_800E413C; // 800E40D0
L_800E40D4:;
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E40D4
  c->r[3]=0u+0x802F0000u; // 800E40D8
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E40DC
  c->r[0]=0u+0x00000001u; // 800E40E0
  W32(c->r[13]+0xFFFFA72Cu,c->r[0]); // 800E40E4
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E40E8
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E40EC
  cmps(c,0,(int32_t)c->r[12],0); // 800E40F0
  if (crb(c,2)) { goto L_800E4108; } // 800E40F4
  c->r[4]=c->r[31]|c->r[31]; // 800E40F8
  c->r[3]=0u+0xFFFFFFFFu; // 800E40FC
  c->ctr=c->r[12]; // 800E4100
  if (true) { c->lr=0x800E4108u; dispatch(c,c->ctr); } // 800E4104
L_800E4108:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E4108
  cmps(c,0,(int32_t)c->r[0],0); // 800E410C
  if (crb(c,2)) { goto L_800E4138; } // 800E4110
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E4114
  c->r[0]=0u+0x00000000u; // 800E4118
  W32(c->r[13]+0xFFFFA730u,c->r[0]); // 800E411C
  cmps(c,0,(int32_t)c->r[12],0); // 800E4120
  if (crb(c,2)) { goto L_800E4138; } // 800E4124
  c->r[4]=c->r[31]|c->r[31]; // 800E4128
  c->r[3]=0u+0x00000000u; // 800E412C
  c->ctr=c->r[12]; // 800E4130
  if (true) { c->lr=0x800E4138u; dispatch(c,c->ctr); } // 800E4134
L_800E4138:;
  c->lr=0x800E413Cu; f_800E68A0(c); // 800E4138
L_800E413C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E413C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4140
  c->lr=c->r[0]; // 800E4144
  c->r[1]=c->r[1]+0x00000010u; // 800E4148
  return; // 800E414C
}

// cbForStoreErrorCode1
void f_800E4150(Ctx* __restrict c) {
  trace_call(0x800E4150u);
  c->r[5]=0u+0x800E0000u; // 800E4150
  c->r[3]=0u+0x00000000u; // 800E4154
  c->r[5]=c->r[5]+0x00004040u; // 800E4158
  c->r[4]=0u+0x00000000u; // 800E415C
  f_800EAB20(c); return; // 800E4160
}

// cbForStoreErrorCode2
void f_800E4170(Ctx* __restrict c) {
  trace_call(0x800E4170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4170
  c->r[0]=c->lr; // 800E4174
  c->r[3]=0u+0x00000000u; // 800E4178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E417C
  c->lr=0x800E4184u; f_800EAFA0(c); // 800E4180
  c->r[3]=0u+0x800E0000u; // 800E4184
  c->r[3]=c->r[3]+0x00004040u; // 800E4188
  c->lr=0x800E4190u; f_800EAFB0(c); // 800E418C
  c->r[0]=0u+0x00000000u; // 800E4190
  W32(c->r[13]+0xFFFFA794u,c->r[0]); // 800E4194
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E4198
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E419C
  c->lr=c->r[0]; // 800E41A0
  c->r[1]=c->r[1]+0x00000010u; // 800E41A4
  return; // 800E41A8
}

// CategorizeError
void f_800E41B0(Ctx* __restrict c) {
  trace_call(0x800E41B0u);
  c->r[0]=c->r[3]+0xFFFE0000u; // 800E41B0
  cmpu(c,0,c->r[0],0x00000400u); // 800E41B4
  if (!crb(c,2)) { goto L_800E41C8; } // 800E41B8
  W32(c->r[13]+0xFFFFA798u,c->r[3]); // 800E41BC
  c->r[3]=0u+0x00000001u; // 800E41C0
  return; // 800E41C4
L_800E41C8:;
  c->r[4]=rotl(c->r[3],0)&0x00FFFFFFu; // 800E41C8
  c->r[0]=c->r[4]+0xFFFA0000u; // 800E41CC
  cmpu(c,0,c->r[0],0x00002800u); // 800E41D0
  if (crb(c,2)) { goto L_800E41FC; } // 800E41D4
  c->r[0]=c->r[4]+0xFFFE0000u; // 800E41D8
  cmpu(c,0,c->r[0],0x00003A00u); // 800E41DC
  if (crb(c,2)) { goto L_800E41FC; } // 800E41E0
  c->r[3]=c->r[4]+0xFFFB0000u; // 800E41E4
  cmpu(c,0,c->r[3],0x00003000u); // 800E41E8
  if (crb(c,2)) { goto L_800E41FC; } // 800E41EC
  c->r[0]=c->r[4]+0xFFF50000u; // 800E41F0
  cmpu(c,0,c->r[0],0x00005A01u); // 800E41F4
  if (!crb(c,2)) { goto L_800E4204; } // 800E41F8
L_800E41FC:;
  c->r[3]=0u+0x00000000u; // 800E41FC
  return; // 800E4200
L_800E4204:;
  cmpu(c,0,c->r[3],0x00002000u); // 800E4204
  if (!crb(c,2)) { goto L_800E4238; } // 800E4208
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E420C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E4210
  cmpu(c,0,c->r[0],0x00000025u); // 800E4214
  if (crb(c,2)) { goto L_800E4230; } // 800E4218
  c->r[3]=0u+0x800E0000u; // 800E421C
  c->r[0]=R32(c->r[13]+0xFFFFA7B4u); // 800E4220
  c->r[3]=c->r[3]+0x00006170u; // 800E4224
  cmpu(c,0,c->r[0],c->r[3]); // 800E4228
  if (!crb(c,2)) { goto L_800E4238; } // 800E422C
L_800E4230:;
  c->r[3]=0u+0x00000000u; // 800E4230
  return; // 800E4234
L_800E4238:;
  c->r[3]=R32(c->r[13]+0xFFFFA738u); // 800E4238
  c->r[0]=c->r[3]+0x00000001u; // 800E423C
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E4240
  c->r[0]=R32(c->r[13]+0xFFFFA738u); // 800E4244
  cmps(c,0,(int32_t)c->r[0],2); // 800E4248
  if (!crb(c,2)) { goto L_800E4274; } // 800E424C
  c->r[0]=R32(c->r[13]+0xFFFFA798u); // 800E4250
  cmpu(c,0,c->r[4],c->r[0]); // 800E4254
  if (!crb(c,2)) { goto L_800E4268; } // 800E4258
  W32(c->r[13]+0xFFFFA798u,c->r[4]); // 800E425C
  c->r[3]=0u+0x00000001u; // 800E4260
  return; // 800E4264
L_800E4268:;
  W32(c->r[13]+0xFFFFA798u,c->r[4]); // 800E4268
  c->r[3]=0u+0x00000002u; // 800E426C
  return; // 800E4270
L_800E4274:;
  c->r[0]=c->r[4]+0xFFFD0000u; // 800E4274
  W32(c->r[13]+0xFFFFA798u,c->r[4]); // 800E4278
  cmpu(c,0,c->r[0],0x00001100u); // 800E427C
  if (crb(c,2)) { goto L_800E4294; } // 800E4280
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E4284
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E4288
  cmpu(c,0,c->r[0],0x00000005u); // 800E428C
  if (!crb(c,2)) { goto L_800E429C; } // 800E4290
L_800E4294:;
  c->r[3]=0u+0x00000002u; // 800E4294
  return; // 800E4298
L_800E429C:;
  c->r[3]=0u+0x00000003u; // 800E429C
  return; // 800E42A0
}

// cbForStoreErrorCode3
void f_800E42B0(Ctx* __restrict c) {
  trace_call(0x800E42B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E42B0
  c->r[0]=c->lr; // 800E42B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E42B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E42BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E42C0
  c->lr=0x800E42C8u; f_800CBAA0(c); // 800E42C4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E42C8
  c->r[31]=c->r[3]|c->r[3]; // 800E42CC
  cmpu(c,0,c->r[0],0x00000005u); // 800E42D0
  if (crb(c,0)) { goto L_800E42E0; } // 800E42D4
  c->r[0]=0u+0x00000000u; // 800E42D8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E42DC
L_800E42E0:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E42E0
  c->r[30]=0u+0x802F0000u; // 800E42E4
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E42E8
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E42EC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E42F0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E42F4
  c->r[6]=0u+0x00000010u; // 800E42F8
  c->r[4]=0u+0x00000000u; // 800E42FC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E4300
  c->r[5]=c->r[30]+c->r[5]; // 800E4304
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E4308
  c->r[3]=c->r[30]+c->r[3]; // 800E430C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4310
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E4314
  c->r[3]=c->r[30]+c->r[0]; // 800E4318
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E431C
  c->lr=0x800E4324u; f_800D0530(c); // 800E4320
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4324
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4328
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E432C
  c->r[0]=c->r[4]+0x00000001u; // 800E4330
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4334
  c->r[4]=c->r[30]+c->r[5]; // 800E4338
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E433C
  c->r[3]=c->r[31]|c->r[31]; // 800E4340
  c->lr=0x800E4348u; f_800CBAE0(c); // 800E4344
  c->r[5]=0u+0x800E0000u; // 800E4348
  c->r[3]=0u+0x00000000u; // 800E434C
  c->r[5]=c->r[5]+0x00004B50u; // 800E4350
  c->r[4]=0u+0x00000000u; // 800E4354
  c->lr=0x800E435Cu; f_800EAB20(c); // 800E4358
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E435C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4360
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4364
  c->lr=c->r[0]; // 800E4368
  c->r[1]=c->r[1]+0x00000010u; // 800E436C
  return; // 800E4370
}

// cbForStateGettingError
void f_800E4380(Ctx* __restrict c) {
  trace_call(0x800E4380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4380
  c->r[0]=c->lr; // 800E4384
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4388
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E438C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E4390
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E4394
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E4398
  c->r[28]=c->r[3]|c->r[3]; // 800E439C
  c->lr=0x800E43A4u; f_800CBAA0(c); // 800E43A0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E43A4
  cmps(c,0,(int32_t)c->r[0],0); // 800E43A8
  if (!crb(c,2)) { goto L_800E43C0; } // 800E43AC
  c->r[4]=0u+0x802F0000u; // 800E43B0
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E43B4
  W32(c->r[4]+0x00000078u,c->r[28]); // 800E43B8
  goto L_800E43D8; // 800E43BC
L_800E43C0:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E43C0
  c->r[4]=0u+0x802F0000u; // 800E43C4
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E43C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E43CC
  c->r[4]=c->r[4]+c->r[0]; // 800E43D0
  W32(c->r[4]+0x00000014u,c->r[28]); // 800E43D4
L_800E43D8:;
  c->lr=0x800E43DCu; f_800CBAE0(c); // 800E43D8
  cmpu(c,0,c->r[28],0x00000010u); // 800E43DC
  if (!crb(c,2)) { goto L_800E43FC; } // 800E43E0
  c->r[3]=0u+0x01230000u; // 800E43E4
  c->r[4]=0u+0x800E0000u; // 800E43E8
  c->r[3]=c->r[3]+0x00004568u; // 800E43EC
  c->r[4]=c->r[4]+0x00004170u; // 800E43F0
  c->lr=0x800E43F8u; f_800E9350(c); // 800E43F4
  goto L_800E4864; // 800E43F8
L_800E43FC:;
  cmpu(c,0,c->r[28],0x00000020u); // 800E43FC
  if (!crb(c,2)) { goto L_800E441C; } // 800E4400
  c->r[3]=0u+0x01230000u; // 800E4404
  c->r[4]=0u+0x800E0000u; // 800E4408
  c->r[3]=c->r[3]+0x00004569u; // 800E440C
  c->r[4]=c->r[4]+0x00004170u; // 800E4410
  c->lr=0x800E4418u; f_800E9350(c); // 800E4414
  goto L_800E4864; // 800E4418
L_800E441C:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 800E441C
  if (crb(c,2)) { goto L_800E443C; } // 800E4420
  c->r[3]=0u+0x01230000u; // 800E4424
  c->r[4]=0u+0x800E0000u; // 800E4428
  c->r[3]=c->r[3]+0x00004567u; // 800E442C
  c->r[4]=c->r[4]+0x00004150u; // 800E4430
  c->lr=0x800E4438u; f_800E9350(c); // 800E4434
  goto L_800E4864; // 800E4438
L_800E443C:;
  c->lr=0x800E4440u; f_800EBDB0(c); // 800E443C
  c->r[29]=c->r[3]|c->r[3]; // 800E4440
  c->r[28]=rotl(c->r[3],0)&0xFF000000u; // 800E4444
  c->lr=0x800E444Cu; f_800E41B0(c); // 800E4448
  cmpu(c,0,c->r[3],0x00000001u); // 800E444C
  c->r[30]=c->r[3]|c->r[3]; // 800E4450
  if (!crb(c,2)) { goto L_800E446C; } // 800E4454
  c->r[4]=0u+0x800E0000u; // 800E4458
  c->r[3]=c->r[29]|c->r[29]; // 800E445C
  c->r[4]=c->r[4]+0x00004150u; // 800E4460
  c->lr=0x800E4468u; f_800E9350(c); // 800E4464
  goto L_800E4864; // 800E4468
L_800E446C:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800E446C
  cmpu(c,0,c->r[0],0x00000001u); // 800E4470
  if (crb(c,1)) { goto L_800E4480; } // 800E4474
  c->r[4]=0u+0x00000000u; // 800E4478
  goto L_800E44E4; // 800E447C
L_800E4480:;
  c->r[0]=c->r[28]+0xFF000000u; // 800E4480
  cmpu(c,0,c->r[0],0x00000000u); // 800E4484
  if (!crb(c,2)) { goto L_800E4494; } // 800E4488
  c->r[4]=0u+0x00000004u; // 800E448C
  goto L_800E44E4; // 800E4490
L_800E4494:;
  c->r[0]=c->r[28]+0xFE000000u; // 800E4494
  cmpu(c,0,c->r[0],0x00000000u); // 800E4498
  if (!crb(c,2)) { goto L_800E44A8; } // 800E449C
  c->r[4]=0u+0x00000006u; // 800E44A0
  goto L_800E44E4; // 800E44A4
L_800E44A8:;
  c->r[0]=c->r[28]+0xFD000000u; // 800E44A8
  cmpu(c,0,c->r[0],0x00000000u); // 800E44AC
  if (!crb(c,2)) { goto L_800E44BC; } // 800E44B0
  c->r[4]=0u+0x00000003u; // 800E44B4
  goto L_800E44E4; // 800E44B8
L_800E44BC:;
  cmps(c,0,(int32_t)c->r[28],0); // 800E44BC
  if (!crb(c,2)) { goto L_800E44E0; } // 800E44C0
  c->r[0]=c->r[29]+0xFFFB0000u; // 800E44C4
  cmpu(c,0,c->r[0],0x00003000u); // 800E44C8
  if (!crb(c,2)) { goto L_800E44D8; } // 800E44CC
  c->r[4]=0u+0x00000001u; // 800E44D0
  goto L_800E44E4; // 800E44D4
L_800E44D8:;
  c->r[4]=0u+0x00000005u; // 800E44D8
  goto L_800E44E4; // 800E44DC
L_800E44E0:;
  c->r[4]=0u+0x00000005u; // 800E44E0
L_800E44E4:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E44E4
  cmps(c,0,(int32_t)c->r[0],0); // 800E44E8
  if (crb(c,2)) { goto L_800E4558; } // 800E44EC
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E44F0
  c->r[3]=0u+0x802F0000u; // 800E44F4
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E44F8
  W32(c->r[13]+0xFFFFA734u,c->r[4]); // 800E44FC
  c->r[4]=0u+0x00000000u; // 800E4500
  c->r[0]=0u+0x0000000Au; // 800E4504
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E4508
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E450C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E4510
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E4514
  cmps(c,0,(int32_t)c->r[12],0); // 800E4518
  if (crb(c,2)) { goto L_800E4530; } // 800E451C
  c->r[4]=c->r[31]|c->r[31]; // 800E4520
  c->r[3]=0u+0xFFFFFFFDu; // 800E4524
  c->ctr=c->r[12]; // 800E4528
  if (true) { c->lr=0x800E4530u; dispatch(c,c->ctr); } // 800E452C
L_800E4530:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E4530
  cmps(c,0,(int32_t)c->r[12],0); // 800E4534
  if (crb(c,2)) { goto L_800E454C; } // 800E4538
  c->r[4]=c->r[31]|c->r[31]; // 800E453C
  c->r[3]=0u+0x00000000u; // 800E4540
  c->ctr=c->r[12]; // 800E4544
  if (true) { c->lr=0x800E454Cu; dispatch(c,c->ctr); } // 800E4548
L_800E454C:;
  c->lr=0x800E4550u; f_800E68A0(c); // 800E454C
  c->r[0]=0u+0x00000001u; // 800E4550
  goto L_800E455C; // 800E4554
L_800E4558:;
  c->r[0]=0u+0x00000000u; // 800E4558
L_800E455C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E455C
  if (!crb(c,2)) { goto L_800E4864; } // 800E4560
  cmpu(c,0,c->r[30],0x00000002u); // 800E4564
  if (!crb(c,2)) { goto L_800E4580; } // 800E4568
  c->r[4]=0u+0x800E0000u; // 800E456C
  c->r[3]=c->r[29]|c->r[29]; // 800E4570
  c->r[4]=c->r[4]+0x000042B0u; // 800E4574
  c->lr=0x800E457Cu; f_800E9350(c); // 800E4578
  goto L_800E4864; // 800E457C
L_800E4580:;
  cmpu(c,0,c->r[30],0x00000003u); // 800E4580
  if (!crb(c,2)) { goto L_800E4650; } // 800E4584
  c->r[3]=rotl(c->r[29],0)&0x00FFFFFFu; // 800E4588
  c->r[0]=c->r[3]+0xFFFD0000u; // 800E458C
  cmpu(c,0,c->r[0],0x00001100u); // 800E4590
  if (!crb(c,2)) { goto L_800E463C; } // 800E4594
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E4598
  c->r[29]=R32(c->r[3]+0x00000010u); // 800E459C
  c->lr=0x800E45A4u; f_800CBAA0(c); // 800E45A0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E45A4
  c->r[31]=c->r[3]|c->r[3]; // 800E45A8
  cmpu(c,0,c->r[0],0x00000005u); // 800E45AC
  if (crb(c,0)) { goto L_800E45BC; } // 800E45B0
  c->r[0]=0u+0x00000000u; // 800E45B4
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E45B8
L_800E45BC:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E45BC
  c->r[30]=0u+0x802F0000u; // 800E45C0
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E45C4
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E45C8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E45CC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E45D0
  c->r[6]=0u+0x00000002u; // 800E45D4
  c->r[4]=0u+0x00000000u; // 800E45D8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E45DC
  c->r[5]=c->r[30]+c->r[5]; // 800E45E0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E45E4
  c->r[3]=c->r[30]+c->r[3]; // 800E45E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E45EC
  W32(c->r[3]+0x00000020u,c->r[29]); // 800E45F0
  c->r[3]=c->r[30]+c->r[0]; // 800E45F4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E45F8
  c->lr=0x800E4600u; f_800D0530(c); // 800E45FC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4600
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4604
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4608
  c->r[0]=c->r[4]+0x00000001u; // 800E460C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4610
  c->r[4]=c->r[30]+c->r[5]; // 800E4614
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E4618
  c->r[3]=c->r[31]|c->r[31]; // 800E461C
  c->lr=0x800E4624u; f_800CBAE0(c); // 800E4620
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E4624
  c->r[4]=0u+0x800E0000u; // 800E4628
  c->r[4]=c->r[4]+0x00004890u; // 800E462C
  c->r[3]=R32(c->r[3]+0x00000010u); // 800E4630
  c->lr=0x800E4638u; f_800EB7B0(c); // 800E4634
  goto L_800E4864; // 800E4638
L_800E463C:;
  c->r[12]=R32(c->r[13]+0xFFFFA7B4u); // 800E463C
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E4640
  c->ctr=c->r[12]; // 800E4644
  if (true) { c->lr=0x800E464Cu; dispatch(c,c->ctr); } // 800E4648
  goto L_800E4864; // 800E464C
L_800E4650:;
  c->r[0]=c->r[28]+0xFF000000u; // 800E4650
  cmpu(c,0,c->r[0],0x00000000u); // 800E4654
  if (!crb(c,2)) { goto L_800E46DC; } // 800E4658
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E465C
  c->r[0]=0u+0x00000005u; // 800E4660
  c->r[3]=0u+0x00000001u; // 800E4664
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E4668
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E466C
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E4670
  cmps(c,0,(int32_t)c->r[0],0); // 800E4674
  if (!crb(c,2)) { goto L_800E4864; } // 800E4678
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E467C
  cmps(c,0,(int32_t)c->r[0],0); // 800E4680
  if (!crb(c,2)) { goto L_800E4864; } // 800E4684
  c->r[30]=0u+0x802F0000u; // 800E4688
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E468C
  c->r[3]=c->r[30]+0xFFFFFB40u; // 800E4690
  c->lr=0x800E4698u; f_800C66D0(c); // 800E4694
  c->lr=0x800E469Cu; f_800D0530(c); // 800E4698
  c->r[5]=0u+0x80000000u; // 800E469C
  c->r[4]=0u+0x10620000u; // 800E46A0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E46A4
  c->r[9]=0u+0x800E0000u; // 800E46A8
  c->r[6]=c->r[3]|c->r[3]; // 800E46AC
  c->r[4]=c->r[4]+0x00004DD3u; // 800E46B0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E46B4
  c->r[3]=c->r[30]+0xFFFFFB40u; // 800E46B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E46BC
  c->r[9]=c->r[9]+0x00006870u; // 800E46C0
  c->r[5]=0u+0x00000000u; // 800E46C4
  c->r[7]=0u+0x00000000u; // 800E46C8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E46CC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E46D0
  c->lr=0x800E46D8u; f_800C69A0(c); // 800E46D4
  goto L_800E4864; // 800E46D8
L_800E46DC:;
  c->r[0]=c->r[28]+0xFE000000u; // 800E46DC
  cmpu(c,0,c->r[0],0x00000000u); // 800E46E0
  if (!crb(c,2)) { goto L_800E46FC; } // 800E46E4
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E46E8
  c->r[0]=0u+0x00000003u; // 800E46EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E46F0
  c->lr=0x800E46F8u; f_800E5D60(c); // 800E46F4
  goto L_800E4864; // 800E46F8
L_800E46FC:;
  c->r[0]=c->r[28]+0xFD000000u; // 800E46FC
  cmpu(c,0,c->r[0],0x00000000u); // 800E4700
  if (!crb(c,2)) { goto L_800E4788; } // 800E4704
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E4708
  c->r[0]=0u+0x00000004u; // 800E470C
  c->r[3]=0u+0x00000001u; // 800E4710
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E4714
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E4718
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E471C
  cmps(c,0,(int32_t)c->r[0],0); // 800E4720
  if (!crb(c,2)) { goto L_800E4864; } // 800E4724
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E4728
  cmps(c,0,(int32_t)c->r[0],0); // 800E472C
  if (!crb(c,2)) { goto L_800E4864; } // 800E4730
  c->r[30]=0u+0x802F0000u; // 800E4734
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E4738
  c->r[3]=c->r[30]+0xFFFFFB40u; // 800E473C
  c->lr=0x800E4744u; f_800C66D0(c); // 800E4740
  c->lr=0x800E4748u; f_800D0530(c); // 800E4744
  c->r[5]=0u+0x80000000u; // 800E4748
  c->r[4]=0u+0x10620000u; // 800E474C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E4750
  c->r[9]=0u+0x800E0000u; // 800E4754
  c->r[6]=c->r[3]|c->r[3]; // 800E4758
  c->r[4]=c->r[4]+0x00004DD3u; // 800E475C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E4760
  c->r[3]=c->r[30]+0xFFFFFB40u; // 800E4764
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E4768
  c->r[9]=c->r[9]+0x00006870u; // 800E476C
  c->r[5]=0u+0x00000000u; // 800E4770
  c->r[7]=0u+0x00000000u; // 800E4774
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E4778
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E477C
  c->lr=0x800E4784u; f_800C69A0(c); // 800E4780
  goto L_800E4864; // 800E4784
L_800E4788:;
  cmps(c,0,(int32_t)c->r[28],0); // 800E4788
  if (!crb(c,2)) { goto L_800E4850; } // 800E478C
  c->r[0]=c->r[29]+0xFFFB0000u; // 800E4790
  cmpu(c,0,c->r[0],0x00003000u); // 800E4794
  if (!crb(c,2)) { goto L_800E4838; } // 800E4798
  c->lr=0x800E47A0u; f_800CBAA0(c); // 800E479C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E47A0
  c->r[31]=c->r[3]|c->r[3]; // 800E47A4
  cmpu(c,0,c->r[0],0x00000005u); // 800E47A8
  if (crb(c,0)) { goto L_800E47B8; } // 800E47AC
  c->r[0]=0u+0x00000000u; // 800E47B0
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E47B4
L_800E47B8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E47B8
  c->r[30]=0u+0x802F0000u; // 800E47BC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E47C0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E47C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E47C8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E47CC
  c->r[6]=0u+0x00000010u; // 800E47D0
  c->r[4]=0u+0x00000000u; // 800E47D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E47D8
  c->r[5]=c->r[30]+c->r[5]; // 800E47DC
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E47E0
  c->r[3]=c->r[30]+c->r[3]; // 800E47E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E47E8
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E47EC
  c->r[3]=c->r[30]+c->r[0]; // 800E47F0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E47F4
  c->lr=0x800E47FCu; f_800D0530(c); // 800E47F8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E47FC
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4800
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4804
  c->r[0]=c->r[4]+0x00000001u; // 800E4808
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E480C
  c->r[4]=c->r[30]+c->r[5]; // 800E4810
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E4814
  c->r[3]=c->r[31]|c->r[31]; // 800E4818
  c->lr=0x800E4820u; f_800CBAE0(c); // 800E481C
  c->r[5]=0u+0x800E0000u; // 800E4820
  c->r[3]=0u+0x00000000u; // 800E4824
  c->r[5]=c->r[5]+0x000059F0u; // 800E4828
  c->r[4]=0u+0x00000000u; // 800E482C
  c->lr=0x800E4834u; f_800EAB20(c); // 800E4830
  goto L_800E4864; // 800E4834
L_800E4838:;
  c->r[3]=0u+0x01230000u; // 800E4838
  c->r[4]=0u+0x800E0000u; // 800E483C
  c->r[3]=c->r[3]+0x00004567u; // 800E4840
  c->r[4]=c->r[4]+0x00004150u; // 800E4844
  c->lr=0x800E484Cu; f_800E9350(c); // 800E4848
  goto L_800E4864; // 800E484C
L_800E4850:;
  c->r[3]=0u+0x01230000u; // 800E4850
  c->r[4]=0u+0x800E0000u; // 800E4854
  c->r[3]=c->r[3]+0x00004567u; // 800E4858
  c->r[4]=c->r[4]+0x00004150u; // 800E485C
  c->lr=0x800E4864u; f_800E9350(c); // 800E4860
L_800E4864:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4864
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E4868
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E486C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E4870
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E4874
  c->lr=c->r[0]; // 800E4878
  c->r[1]=c->r[1]+0x00000020u; // 800E487C
  return; // 800E4880
}

// cbForUnrecoveredError
void f_800E4890(Ctx* __restrict c) {
  trace_call(0x800E4890u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4890
  c->r[0]=c->lr; // 800E4894
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E489C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E48A0
  c->r[30]=c->r[3]|c->r[3]; // 800E48A4
  c->lr=0x800E48ACu; f_800CBAA0(c); // 800E48A8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E48AC
  cmps(c,0,(int32_t)c->r[0],0); // 800E48B0
  if (!crb(c,2)) { goto L_800E48C8; } // 800E48B4
  c->r[4]=0u+0x802F0000u; // 800E48B8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E48BC
  W32(c->r[4]+0x00000078u,c->r[30]); // 800E48C0
  goto L_800E48E0; // 800E48C4
L_800E48C8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E48C8
  c->r[4]=0u+0x802F0000u; // 800E48CC
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E48D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E48D4
  c->r[4]=c->r[4]+c->r[0]; // 800E48D8
  W32(c->r[4]+0x00000014u,c->r[30]); // 800E48DC
L_800E48E0:;
  c->lr=0x800E48E4u; f_800CBAE0(c); // 800E48E0
  cmpu(c,0,c->r[30],0x00000010u); // 800E48E4
  if (!crb(c,2)) { goto L_800E4904; } // 800E48E8
  c->r[3]=0u+0x01230000u; // 800E48EC
  c->r[4]=0u+0x800E0000u; // 800E48F0
  c->r[3]=c->r[3]+0x00004568u; // 800E48F4
  c->r[4]=c->r[4]+0x00004170u; // 800E48F8
  c->lr=0x800E4900u; f_800E9350(c); // 800E48FC
  goto L_800E4A58; // 800E4900
L_800E4904:;
  cmpu(c,0,c->r[30],0x00000020u); // 800E4904
  if (!crb(c,2)) { goto L_800E4924; } // 800E4908
  c->r[3]=0u+0x01230000u; // 800E490C
  c->r[4]=0u+0x800E0000u; // 800E4910
  c->r[3]=c->r[3]+0x00004569u; // 800E4914
  c->r[4]=c->r[4]+0x00004170u; // 800E4918
  c->lr=0x800E4920u; f_800E9350(c); // 800E491C
  goto L_800E4A58; // 800E4920
L_800E4924:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800E4924
  if (crb(c,2)) { goto L_800E49C8; } // 800E4928
  c->lr=0x800E4930u; f_800CBAA0(c); // 800E492C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4930
  c->r[31]=c->r[3]|c->r[3]; // 800E4934
  cmpu(c,0,c->r[0],0x00000005u); // 800E4938
  if (crb(c,0)) { goto L_800E4948; } // 800E493C
  c->r[0]=0u+0x00000000u; // 800E4940
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4944
L_800E4948:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4948
  c->r[30]=0u+0x802F0000u; // 800E494C
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E4950
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E4954
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4958
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E495C
  c->r[6]=0u+0x00000010u; // 800E4960
  c->r[4]=0u+0x00000000u; // 800E4964
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E4968
  c->r[5]=c->r[30]+c->r[5]; // 800E496C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E4970
  c->r[3]=c->r[30]+c->r[3]; // 800E4974
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4978
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E497C
  c->r[3]=c->r[30]+c->r[0]; // 800E4980
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E4984
  c->lr=0x800E498Cu; f_800D0530(c); // 800E4988
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E498C
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4990
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4994
  c->r[0]=c->r[4]+0x00000001u; // 800E4998
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E499C
  c->r[4]=c->r[30]+c->r[5]; // 800E49A0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E49A4
  c->r[3]=c->r[31]|c->r[31]; // 800E49A8
  c->lr=0x800E49B0u; f_800CBAE0(c); // 800E49AC
  c->r[5]=0u+0x800E0000u; // 800E49B0
  c->r[3]=0u+0x00000000u; // 800E49B4
  c->r[5]=c->r[5]+0x00004B50u; // 800E49B8
  c->r[4]=0u+0x00000000u; // 800E49BC
  c->lr=0x800E49C4u; f_800EAB20(c); // 800E49C0
  goto L_800E4A58; // 800E49C4
L_800E49C8:;
  c->lr=0x800E49CCu; f_800CBAA0(c); // 800E49C8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E49CC
  c->r[31]=c->r[3]|c->r[3]; // 800E49D0
  cmpu(c,0,c->r[0],0x00000005u); // 800E49D4
  if (crb(c,0)) { goto L_800E49E4; } // 800E49D8
  c->r[0]=0u+0x00000000u; // 800E49DC
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E49E0
L_800E49E4:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E49E4
  c->r[30]=0u+0x802F0000u; // 800E49E8
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E49EC
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E49F0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E49F4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E49F8
  c->r[6]=0u+0x00000027u; // 800E49FC
  c->r[4]=0u+0x00000000u; // 800E4A00
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E4A04
  c->r[5]=c->r[30]+c->r[5]; // 800E4A08
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E4A0C
  c->r[3]=c->r[30]+c->r[3]; // 800E4A10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4A14
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E4A18
  c->r[3]=c->r[30]+c->r[0]; // 800E4A1C
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E4A20
  c->lr=0x800E4A28u; f_800D0530(c); // 800E4A24
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4A28
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4A2C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4A30
  c->r[0]=c->r[4]+0x00000001u; // 800E4A34
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4A38
  c->r[4]=c->r[30]+c->r[5]; // 800E4A3C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E4A40
  c->r[3]=c->r[31]|c->r[31]; // 800E4A44
  c->lr=0x800E4A4Cu; f_800CBAE0(c); // 800E4A48
  c->r[3]=0u+0x800E0000u; // 800E4A4C
  c->r[3]=c->r[3]+0x00004A70u; // 800E4A50
  c->lr=0x800E4A58u; f_800EAE30(c); // 800E4A54
L_800E4A58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4A58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4A5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4A60
  c->lr=c->r[0]; // 800E4A64
  c->r[1]=c->r[1]+0x00000010u; // 800E4A68
  return; // 800E4A6C
}

// cbForUnrecoveredErrorRetry
void f_800E4A70(Ctx* __restrict c) {
  trace_call(0x800E4A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4A70
  c->r[0]=c->lr; // 800E4A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4A7C
  c->r[31]=c->r[3]|c->r[3]; // 800E4A80
  c->lr=0x800E4A88u; f_800CBAA0(c); // 800E4A84
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4A88
  cmps(c,0,(int32_t)c->r[0],0); // 800E4A8C
  if (!crb(c,2)) { goto L_800E4AA4; } // 800E4A90
  c->r[4]=0u+0x802F0000u; // 800E4A94
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E4A98
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E4A9C
  goto L_800E4ABC; // 800E4AA0
L_800E4AA4:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4AA4
  c->r[4]=0u+0x802F0000u; // 800E4AA8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E4AAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4AB0
  c->r[4]=c->r[4]+c->r[0]; // 800E4AB4
  W32(c->r[4]+0x00000014u,c->r[31]); // 800E4AB8
L_800E4ABC:;
  c->lr=0x800E4AC0u; f_800CBAE0(c); // 800E4ABC
  cmpu(c,0,c->r[31],0x00000010u); // 800E4AC0
  if (!crb(c,2)) { goto L_800E4AE0; } // 800E4AC4
  c->r[3]=0u+0x01230000u; // 800E4AC8
  c->r[4]=0u+0x800E0000u; // 800E4ACC
  c->r[3]=c->r[3]+0x00004568u; // 800E4AD0
  c->r[4]=c->r[4]+0x00004170u; // 800E4AD4
  c->lr=0x800E4ADCu; f_800E9350(c); // 800E4AD8
  goto L_800E4B30; // 800E4ADC
L_800E4AE0:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E4AE0
  if (!crb(c,2)) { goto L_800E4B00; } // 800E4AE4
  c->r[3]=0u+0x01230000u; // 800E4AE8
  c->r[4]=0u+0x800E0000u; // 800E4AEC
  c->r[3]=c->r[3]+0x00004569u; // 800E4AF0
  c->r[4]=c->r[4]+0x00004170u; // 800E4AF4
  c->lr=0x800E4AFCu; f_800E9350(c); // 800E4AF8
  goto L_800E4B30; // 800E4AFC
L_800E4B00:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800E4B00
  if (crb(c,2)) { goto L_800E4B20; } // 800E4B04
  c->r[3]=0u+0x01230000u; // 800E4B08
  c->r[4]=0u+0x800E0000u; // 800E4B0C
  c->r[3]=c->r[3]+0x00004567u; // 800E4B10
  c->r[4]=c->r[4]+0x00004150u; // 800E4B14
  c->lr=0x800E4B1Cu; f_800E9350(c); // 800E4B18
  goto L_800E4B30; // 800E4B1C
L_800E4B20:;
  c->lr=0x800E4B24u; f_800EBDB0(c); // 800E4B20
  c->r[4]=0u+0x800E0000u; // 800E4B24
  c->r[4]=c->r[4]+0x00004150u; // 800E4B28
  c->lr=0x800E4B30u; f_800E9350(c); // 800E4B2C
L_800E4B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4B30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4B34
  c->lr=c->r[0]; // 800E4B38
  c->r[1]=c->r[1]+0x00000010u; // 800E4B3C
  return; // 800E4B40
}

// cbForStateGoToRetry
void f_800E4B50(Ctx* __restrict c) {
  trace_call(0x800E4B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4B50
  c->r[0]=c->lr; // 800E4B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4B5C
  c->r[31]=c->r[3]|c->r[3]; // 800E4B60
  c->lr=0x800E4B68u; f_800CBAA0(c); // 800E4B64
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4B68
  cmps(c,0,(int32_t)c->r[0],0); // 800E4B6C
  if (!crb(c,2)) { goto L_800E4B84; } // 800E4B70
  c->r[4]=0u+0x802F0000u; // 800E4B74
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E4B78
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E4B7C
  goto L_800E4B9C; // 800E4B80
L_800E4B84:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4B84
  c->r[4]=0u+0x802F0000u; // 800E4B88
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E4B8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4B90
  c->r[4]=c->r[4]+c->r[0]; // 800E4B94
  W32(c->r[4]+0x00000014u,c->r[31]); // 800E4B98
L_800E4B9C:;
  c->lr=0x800E4BA0u; f_800CBAE0(c); // 800E4B9C
  cmpu(c,0,c->r[31],0x00000010u); // 800E4BA0
  if (!crb(c,2)) { goto L_800E4BC0; } // 800E4BA4
  c->r[3]=0u+0x01230000u; // 800E4BA8
  c->r[4]=0u+0x800E0000u; // 800E4BAC
  c->r[3]=c->r[3]+0x00004568u; // 800E4BB0
  c->r[4]=c->r[4]+0x00004170u; // 800E4BB4
  c->lr=0x800E4BBCu; f_800E9350(c); // 800E4BB8
  goto L_800E4D7C; // 800E4BBC
L_800E4BC0:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E4BC0
  if (!crb(c,2)) { goto L_800E4BE0; } // 800E4BC4
  c->r[3]=0u+0x01230000u; // 800E4BC8
  c->r[4]=0u+0x800E0000u; // 800E4BCC
  c->r[3]=c->r[3]+0x00004569u; // 800E4BD0
  c->r[4]=c->r[4]+0x00004170u; // 800E4BD4
  c->lr=0x800E4BDCu; f_800E9350(c); // 800E4BD8
  goto L_800E4D7C; // 800E4BDC
L_800E4BE0:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800E4BE0
  if (crb(c,2)) { goto L_800E4C00; } // 800E4BE4
  c->r[3]=0u+0x01230000u; // 800E4BE8
  c->r[4]=0u+0x800E0000u; // 800E4BEC
  c->r[3]=c->r[3]+0x00004567u; // 800E4BF0
  c->r[4]=c->r[4]+0x00004150u; // 800E4BF4
  c->lr=0x800E4BFCu; f_800E9350(c); // 800E4BF8
  goto L_800E4D7C; // 800E4BFC
L_800E4C00:;
  c->r[0]=0u+0x00000000u; // 800E4C00
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E4C04
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C08
  cmpu(c,0,c->r[0],0x00000004u); // 800E4C0C
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C10
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C14
  cmpu(c,0,c->r[0],0x00000005u); // 800E4C18
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C1C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C20
  cmpu(c,0,c->r[0],0x0000000Du); // 800E4C24
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C28
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C2C
  cmpu(c,0,c->r[0],0x00000021u); // 800E4C30
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C34
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C38
  cmpu(c,0,c->r[0],0x00000022u); // 800E4C3C
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C40
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C44
  cmpu(c,0,c->r[0],0x00000029u); // 800E4C48
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C4C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C50
  cmpu(c,0,c->r[0],0x0000002Au); // 800E4C54
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C58
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C5C
  cmpu(c,0,c->r[0],0x0000000Fu); // 800E4C60
  if (crb(c,2)) { goto L_800E4C74; } // 800E4C64
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4C68
  cmpu(c,0,c->r[0],0x00000025u); // 800E4C6C
  if (!crb(c,2)) { goto L_800E4C7C; } // 800E4C70
L_800E4C74:;
  c->r[0]=0u+0x00000001u; // 800E4C74
  W32(c->r[13]+0xFFFFA794u,c->r[0]); // 800E4C78
L_800E4C7C:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E4C7C
  cmps(c,0,(int32_t)c->r[0],0); // 800E4C80
  if (crb(c,2)) { goto L_800E4CF4; } // 800E4C84
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E4C88
  c->r[3]=0u+0x802F0000u; // 800E4C8C
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E4C90
  c->r[0]=0u+0x00000002u; // 800E4C94
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E4C98
  c->r[4]=0u+0x00000000u; // 800E4C9C
  c->r[0]=0u+0x0000000Au; // 800E4CA0
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E4CA4
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E4CA8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E4CAC
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E4CB0
  cmps(c,0,(int32_t)c->r[12],0); // 800E4CB4
  if (crb(c,2)) { goto L_800E4CCC; } // 800E4CB8
  c->r[4]=c->r[31]|c->r[31]; // 800E4CBC
  c->r[3]=0u+0xFFFFFFFDu; // 800E4CC0
  c->ctr=c->r[12]; // 800E4CC4
  if (true) { c->lr=0x800E4CCCu; dispatch(c,c->ctr); } // 800E4CC8
L_800E4CCC:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E4CCC
  cmps(c,0,(int32_t)c->r[12],0); // 800E4CD0
  if (crb(c,2)) { goto L_800E4CE8; } // 800E4CD4
  c->r[4]=c->r[31]|c->r[31]; // 800E4CD8
  c->r[3]=0u+0x00000000u; // 800E4CDC
  c->ctr=c->r[12]; // 800E4CE0
  if (true) { c->lr=0x800E4CE8u; dispatch(c,c->ctr); } // 800E4CE4
L_800E4CE8:;
  c->lr=0x800E4CECu; f_800E68A0(c); // 800E4CE8
  c->r[0]=0u+0x00000001u; // 800E4CEC
  goto L_800E4CF8; // 800E4CF0
L_800E4CF4:;
  c->r[0]=0u+0x00000000u; // 800E4CF4
L_800E4CF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E4CF8
  if (!crb(c,2)) { goto L_800E4D7C; } // 800E4CFC
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E4D00
  c->r[0]=0u+0x0000000Bu; // 800E4D04
  c->r[3]=0u+0x00000001u; // 800E4D08
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E4D0C
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E4D10
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E4D14
  cmps(c,0,(int32_t)c->r[0],0); // 800E4D18
  if (!crb(c,2)) { goto L_800E4D7C; } // 800E4D1C
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E4D20
  cmps(c,0,(int32_t)c->r[0],0); // 800E4D24
  if (!crb(c,2)) { goto L_800E4D7C; } // 800E4D28
  c->r[31]=0u+0x802F0000u; // 800E4D2C
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E4D30
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E4D34
  c->lr=0x800E4D3Cu; f_800C66D0(c); // 800E4D38
  c->lr=0x800E4D40u; f_800D0530(c); // 800E4D3C
  c->r[5]=0u+0x80000000u; // 800E4D40
  c->r[4]=0u+0x10620000u; // 800E4D44
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E4D48
  c->r[9]=0u+0x800E0000u; // 800E4D4C
  c->r[6]=c->r[3]|c->r[3]; // 800E4D50
  c->r[4]=c->r[4]+0x00004DD3u; // 800E4D54
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E4D58
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E4D5C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E4D60
  c->r[9]=c->r[9]+0x00006870u; // 800E4D64
  c->r[5]=0u+0x00000000u; // 800E4D68
  c->r[7]=0u+0x00000000u; // 800E4D6C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E4D70
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E4D74
  c->lr=0x800E4D7Cu; f_800C69A0(c); // 800E4D78
L_800E4D7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4D80
  c->lr=c->r[0]; // 800E4D84
  c->r[1]=c->r[1]+0x00000010u; // 800E4D88
  return; // 800E4D8C
}

// stateCheckID
void f_800E4D90(Ctx* __restrict c) {
  trace_call(0x800E4D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4D90
  c->r[0]=c->lr; // 800E4D94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4D98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E4D9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E4DA0
  c->r[30]=0u+0x802F0000u; // 800E4DA4
  c->r[30]=c->r[30]+0xFFFFAFC0u; // 800E4DA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E4DAC
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E4DB0
  cmps(c,0,(int32_t)c->r[0],3); // 800E4DB4
  if (crb(c,2)) { goto L_800E4DC0; } // 800E4DB8
  goto L_800E4F4C; // 800E4DBC
L_800E4DC0:;
  c->r[31]=0u+0x00000000u; // 800E4DC0
  W32(c->r[13]+0xFFFFA750u,c->r[31]); // 800E4DC4
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E4DC8
  c->r[3]=c->r[30]+0x00004BC0u; // 800E4DCC
  c->r[4]=R32(c->r[4]+0x00000024u); // 800E4DD0
  c->lr=0x800E4DD8u; f_800E93C0(c); // 800E4DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800E4DD8
  if (crb(c,2)) { goto L_800E4EB4; } // 800E4DDC
  c->r[3]=R32(c->r[13]+0xFFFFA7ACu); // 800E4DE0
  c->r[4]=c->r[30]+0x00004BC0u; // 800E4DE4
  c->r[5]=0u+0x00000020u; // 800E4DE8
  c->lr=0x800E4DF0u; f_80004364(c); // 800E4DEC
  c->r[5]=R32(c->r[13]+0xFFFFA7B0u); // 800E4DF0
  c->r[0]=0u+0x00000001u; // 800E4DF4
  c->r[3]=c->r[30]+0x00004B00u; // 800E4DF8
  c->r[4]=0u+0x00000020u; // 800E4DFC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800E4E00
  c->lr=0x800E4E08u; f_800C7750(c); // 800E4E04
  W32(c->r[13]+0xFFFFA738u,c->r[31]); // 800E4E08
  c->r[3]=0u+0x00000000u; // 800E4E0C
  c->lr=0x800E4E14u; f_800EBDE0(c); // 800E4E10
  c->lr=0x800E4E18u; f_800CBAA0(c); // 800E4E14
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4E18
  c->r[29]=c->r[3]|c->r[3]; // 800E4E1C
  cmpu(c,0,c->r[0],0x00000005u); // 800E4E20
  if (crb(c,0)) { goto L_800E4E2C; } // 800E4E24
  W32(c->r[13]+0xFFFFA720u,c->r[31]); // 800E4E28
L_800E4E2C:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4E2C
  c->r[31]=0u+0x802F0000u; // 800E4E30
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E4E34
  c->r[31]=c->r[31]+0xFFFFFE00u; // 800E4E38
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4E3C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4E40
  c->r[7]=0u+0x00000021u; // 800E4E44
  c->r[5]=0u+0x00010000u; // 800E4E48
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E4E4C
  c->r[4]=0u+0x00000020u; // 800E4E50
  c->r[6]=c->r[31]+c->r[6]; // 800E4E54
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800E4E58
  c->r[3]=c->r[31]+c->r[3]; // 800E4E5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4E60
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E4E64
  c->r[3]=c->r[31]+c->r[0]; // 800E4E68
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E4E6C
  c->lr=0x800E4E74u; f_800D0530(c); // 800E4E70
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4E74
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4E78
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4E7C
  c->r[0]=c->r[4]+0x00000001u; // 800E4E80
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4E84
  c->r[4]=c->r[31]+c->r[5]; // 800E4E88
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E4E8C
  c->r[3]=c->r[29]|c->r[29]; // 800E4E90
  c->lr=0x800E4E98u; f_800CBAE0(c); // 800E4E94
  c->r[6]=0u+0x800E0000u; // 800E4E98
  c->r[3]=c->r[30]+0x00004BE0u; // 800E4E9C
  c->r[6]=c->r[6]+0x000050D0u; // 800E4EA0
  c->r[4]=0u+0x00000020u; // 800E4EA4
  c->r[5]=0u+0x00010000u; // 800E4EA8
  c->lr=0x800E4EB0u; f_800EA980(c); // 800E4EAC
  goto L_800E50AC; // 800E4EB0
L_800E4EB4:;
  c->lr=0x800E4EB8u; f_800CBAA0(c); // 800E4EB4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4EB8
  c->r[29]=c->r[3]|c->r[3]; // 800E4EBC
  cmpu(c,0,c->r[0],0x00000005u); // 800E4EC0
  if (crb(c,0)) { goto L_800E4ECC; } // 800E4EC4
  W32(c->r[13]+0xFFFFA720u,c->r[31]); // 800E4EC8
L_800E4ECC:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4ECC
  c->r[30]=0u+0x802F0000u; // 800E4ED0
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E4ED4
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E4ED8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4EDC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4EE0
  c->r[6]=0u+0x00000010u; // 800E4EE4
  c->r[4]=0u+0x00000000u; // 800E4EE8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E4EEC
  c->r[5]=c->r[30]+c->r[5]; // 800E4EF0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E4EF4
  c->r[3]=c->r[30]+c->r[3]; // 800E4EF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4EFC
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E4F00
  c->r[3]=c->r[30]+c->r[0]; // 800E4F04
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E4F08
  c->lr=0x800E4F10u; f_800D0530(c); // 800E4F0C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4F10
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4F14
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4F18
  c->r[0]=c->r[4]+0x00000001u; // 800E4F1C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4F20
  c->r[4]=c->r[30]+c->r[5]; // 800E4F24
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E4F28
  c->r[3]=c->r[29]|c->r[29]; // 800E4F2C
  c->lr=0x800E4F34u; f_800CBAE0(c); // 800E4F30
  c->r[5]=0u+0x800E0000u; // 800E4F34
  c->r[3]=0u+0x00000000u; // 800E4F38
  c->r[5]=c->r[5]+0x000059F0u; // 800E4F3C
  c->r[4]=0u+0x00000000u; // 800E4F40
  c->lr=0x800E4F48u; f_800EAB20(c); // 800E4F44
  goto L_800E50AC; // 800E4F48
L_800E4F4C:;
  c->r[4]=R32(c->r[13]+0xFFFFA7ACu); // 800E4F4C
  c->r[3]=c->r[30]+0x00004BC0u; // 800E4F50
  c->r[5]=0u+0x00000020u; // 800E4F54
  c->lr=0x800E4F5Cu; f_8021C08C(c); // 800E4F58
  cmps(c,0,(int32_t)c->r[3],0); // 800E4F5C
  if (crb(c,2)) { goto L_800E5000; } // 800E4F60
  c->lr=0x800E4F68u; f_800CBAA0(c); // 800E4F64
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4F68
  c->r[29]=c->r[3]|c->r[3]; // 800E4F6C
  cmpu(c,0,c->r[0],0x00000005u); // 800E4F70
  if (crb(c,0)) { goto L_800E4F80; } // 800E4F74
  c->r[0]=0u+0x00000000u; // 800E4F78
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4F7C
L_800E4F80:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4F80
  c->r[30]=0u+0x802F0000u; // 800E4F84
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E4F88
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E4F8C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4F90
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4F94
  c->r[6]=0u+0x00000010u; // 800E4F98
  c->r[4]=0u+0x00000000u; // 800E4F9C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E4FA0
  c->r[5]=c->r[30]+c->r[5]; // 800E4FA4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E4FA8
  c->r[3]=c->r[30]+c->r[3]; // 800E4FAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4FB0
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E4FB4
  c->r[3]=c->r[30]+c->r[0]; // 800E4FB8
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E4FBC
  c->lr=0x800E4FC4u; f_800D0530(c); // 800E4FC0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E4FC4
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E4FC8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E4FCC
  c->r[0]=c->r[4]+0x00000001u; // 800E4FD0
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E4FD4
  c->r[4]=c->r[30]+c->r[5]; // 800E4FD8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E4FDC
  c->r[3]=c->r[29]|c->r[29]; // 800E4FE0
  c->lr=0x800E4FE8u; f_800CBAE0(c); // 800E4FE4
  c->r[5]=0u+0x800E0000u; // 800E4FE8
  c->r[3]=0u+0x00000000u; // 800E4FEC
  c->r[5]=c->r[5]+0x000059F0u; // 800E4FF0
  c->r[4]=0u+0x00000000u; // 800E4FF4
  c->lr=0x800E4FFCu; f_800EAB20(c); // 800E4FF8
  goto L_800E50AC; // 800E4FFC
L_800E5000:;
  c->r[31]=0u+0x00000000u; // 800E5000
  W32(c->r[13]+0xFFFFA738u,c->r[31]); // 800E5004
  c->r[3]=0u+0x00000000u; // 800E5008
  c->lr=0x800E5010u; f_800EBDE0(c); // 800E500C
  c->lr=0x800E5014u; f_800CBAA0(c); // 800E5010
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5014
  c->r[29]=c->r[3]|c->r[3]; // 800E5018
  cmpu(c,0,c->r[0],0x00000005u); // 800E501C
  if (crb(c,0)) { goto L_800E5028; } // 800E5020
  W32(c->r[13]+0xFFFFA720u,c->r[31]); // 800E5024
L_800E5028:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5028
  c->r[31]=0u+0x802F0000u; // 800E502C
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E5030
  c->r[31]=c->r[31]+0xFFFFFE00u; // 800E5034
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5038
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E503C
  c->r[7]=0u+0x00000021u; // 800E5040
  c->r[5]=0u+0x00010000u; // 800E5044
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E5048
  c->r[4]=0u+0x00000020u; // 800E504C
  c->r[6]=c->r[31]+c->r[6]; // 800E5050
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800E5054
  c->r[3]=c->r[31]+c->r[3]; // 800E5058
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E505C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E5060
  c->r[3]=c->r[31]+c->r[0]; // 800E5064
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E5068
  c->lr=0x800E5070u; f_800D0530(c); // 800E506C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5070
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5074
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5078
  c->r[0]=c->r[4]+0x00000001u; // 800E507C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5080
  c->r[4]=c->r[31]+c->r[5]; // 800E5084
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E5088
  c->r[3]=c->r[29]|c->r[29]; // 800E508C
  c->lr=0x800E5094u; f_800CBAE0(c); // 800E5090
  c->r[6]=0u+0x800E0000u; // 800E5094
  c->r[3]=c->r[30]+0x00004BE0u; // 800E5098
  c->r[6]=c->r[6]+0x000050D0u; // 800E509C
  c->r[4]=0u+0x00000020u; // 800E50A0
  c->r[5]=0u+0x00010000u; // 800E50A4
  c->lr=0x800E50ACu; f_800EA980(c); // 800E50A8
L_800E50AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E50AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E50B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E50B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E50B8
  c->lr=c->r[0]; // 800E50BC
  c->r[1]=c->r[1]+0x00000020u; // 800E50C0
  return; // 800E50C4
}

// cbForStateReadingTOC
void f_800E50D0(Ctx* __restrict c) {
  trace_call(0x800E50D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E50D0
  c->r[0]=c->lr; // 800E50D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E50D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E50DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E50E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E50E4
  c->r[29]=c->r[3]|c->r[3]; // 800E50E8
  c->lr=0x800E50F0u; f_800CBAA0(c); // 800E50EC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E50F0
  cmps(c,0,(int32_t)c->r[0],0); // 800E50F4
  if (!crb(c,2)) { goto L_800E510C; } // 800E50F8
  c->r[4]=0u+0x802F0000u; // 800E50FC
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E5100
  W32(c->r[4]+0x00000078u,c->r[29]); // 800E5104
  goto L_800E5128; // 800E5108
L_800E510C:;
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E510C
  c->r[5]=0u+0x802F0000u; // 800E5110
  c->r[5]=c->r[5]+0xFFFFFE00u; // 800E5114
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E5118
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E511C
  c->r[4]=c->r[5]+c->r[0]; // 800E5120
  W32(c->r[4]+0x00000028u,c->r[29]); // 800E5124
L_800E5128:;
  c->lr=0x800E512Cu; f_800CBAE0(c); // 800E5128
  cmpu(c,0,c->r[29],0x00000010u); // 800E512C
  if (!crb(c,2)) { goto L_800E514C; } // 800E5130
  c->r[3]=0u+0x01230000u; // 800E5134
  c->r[4]=0u+0x800E0000u; // 800E5138
  c->r[3]=c->r[3]+0x00004568u; // 800E513C
  c->r[4]=c->r[4]+0x00004170u; // 800E5140
  c->lr=0x800E5148u; f_800E9350(c); // 800E5144
  goto L_800E5254; // 800E5148
L_800E514C:;
  cmpu(c,0,c->r[29],0x00000020u); // 800E514C
  if (!crb(c,2)) { goto L_800E516C; } // 800E5150
  c->r[3]=0u+0x01230000u; // 800E5154
  c->r[4]=0u+0x800E0000u; // 800E5158
  c->r[3]=c->r[3]+0x00004569u; // 800E515C
  c->r[4]=c->r[4]+0x00004170u; // 800E5160
  c->lr=0x800E5168u; f_800E9350(c); // 800E5164
  goto L_800E5254; // 800E5168
L_800E516C:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 800E516C
  if (crb(c,2)) { goto L_800E5238; } // 800E5170
  c->r[4]=0u+0x802F0000u; // 800E5174
  c->r[29]=0u+0x00000000u; // 800E5178
  c->r[4]=c->r[4]+0xFFFFFBA0u; // 800E517C
  W32(c->r[13]+0xFFFFA738u,c->r[29]); // 800E5180
  c->r[3]=0u+0x00000000u; // 800E5184
  W32(c->r[13]+0xFFFFA770u,c->r[4]); // 800E5188
  c->lr=0x800E5190u; f_800EBDE0(c); // 800E518C
  c->lr=0x800E5194u; f_800CBAA0(c); // 800E5190
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5194
  c->r[30]=c->r[3]|c->r[3]; // 800E5198
  cmpu(c,0,c->r[0],0x00000005u); // 800E519C
  if (crb(c,0)) { goto L_800E51A8; } // 800E51A0
  W32(c->r[13]+0xFFFFA720u,c->r[29]); // 800E51A4
L_800E51A8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E51A8
  c->r[31]=0u+0x802F0000u; // 800E51AC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E51B0
  c->r[29]=0u+0x00010000u; // 800E51B4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E51B8
  c->r[31]=c->r[31]+0xFFFFFE00u; // 800E51BC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E51C0
  c->r[6]=0u+0x00000021u; // 800E51C4
  c->r[5]=c->r[29]+0x00000008u; // 800E51C8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E51CC
  c->r[4]=c->r[31]+c->r[4]; // 800E51D0
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 800E51D4
  c->r[3]=c->r[31]+c->r[3]; // 800E51D8
  c->r[4]=0u+0x00000020u; // 800E51DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E51E0
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E51E4
  c->r[3]=c->r[31]+c->r[0]; // 800E51E8
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E51EC
  c->lr=0x800E51F4u; f_800D0530(c); // 800E51F0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E51F4
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E51F8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E51FC
  c->r[0]=c->r[4]+0x00000001u; // 800E5200
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5204
  c->r[4]=c->r[31]+c->r[5]; // 800E5208
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E520C
  c->r[3]=c->r[30]|c->r[30]; // 800E5210
  c->lr=0x800E5218u; f_800CBAE0(c); // 800E5214
  c->r[3]=0u+0x802F0000u; // 800E5218
  c->r[6]=0u+0x800E0000u; // 800E521C
  c->r[5]=c->r[29]+0x00000008u; // 800E5220
  c->r[4]=0u+0x00000020u; // 800E5224
  c->r[3]=c->r[3]+0xFFFFFBC0u; // 800E5228
  c->r[6]=c->r[6]+0x00005270u; // 800E522C
  c->lr=0x800E5234u; f_800EA980(c); // 800E5230
  goto L_800E5254; // 800E5234
L_800E5238:;
  c->r[3]=0u+0x00000027u; // 800E5238
  c->r[4]=0u+0x00000000u; // 800E523C
  c->r[5]=0u+0x00000000u; // 800E5240
  c->lr=0x800E5248u; f_800E3AF0(c); // 800E5244
  c->r[3]=0u+0x800E0000u; // 800E5248
  c->r[3]=c->r[3]+0x00004380u; // 800E524C
  c->lr=0x800E5254u; f_800EAE30(c); // 800E5250
L_800E5254:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5254
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E5258
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E525C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E5260
  c->lr=c->r[0]; // 800E5264
  c->r[1]=c->r[1]+0x00000020u; // 800E5268
  return; // 800E526C
}

// cbForStateReadingPartitionInfo
void f_800E5270(Ctx* __restrict c) {
  trace_call(0x800E5270u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5270
  c->r[0]=c->lr; // 800E5274
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5278
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E527C
  c->r[31]=0u+0x802F0000u; // 800E5280
  c->r[31]=c->r[31]+0xFFFFAFC0u; // 800E5284
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E5288
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E528C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E5290
  c->r[28]=c->r[3]|c->r[3]; // 800E5294
  c->lr=0x800E529Cu; f_800CBAA0(c); // 800E5298
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E529C
  cmps(c,0,(int32_t)c->r[0],0); // 800E52A0
  if (!crb(c,2)) { goto L_800E52B8; } // 800E52A4
  c->r[4]=0u+0x802F0000u; // 800E52A8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E52AC
  W32(c->r[4]+0x00000078u,c->r[28]); // 800E52B0
  goto L_800E52D4; // 800E52B4
L_800E52B8:;
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E52B8
  c->r[5]=0u+0x802F0000u; // 800E52BC
  c->r[5]=c->r[5]+0xFFFFFE00u; // 800E52C0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E52C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E52C8
  c->r[4]=c->r[5]+c->r[0]; // 800E52CC
  W32(c->r[4]+0x00000028u,c->r[28]); // 800E52D0
L_800E52D4:;
  c->lr=0x800E52D8u; f_800CBAE0(c); // 800E52D4
  cmpu(c,0,c->r[28],0x00000010u); // 800E52D8
  if (!crb(c,2)) { goto L_800E52F8; } // 800E52DC
  c->r[3]=0u+0x01230000u; // 800E52E0
  c->r[4]=0u+0x800E0000u; // 800E52E4
  c->r[3]=c->r[3]+0x00004568u; // 800E52E8
  c->r[4]=c->r[4]+0x00004170u; // 800E52EC
  c->lr=0x800E52F4u; f_800E9350(c); // 800E52F0
  goto L_800E56CC; // 800E52F4
L_800E52F8:;
  cmpu(c,0,c->r[28],0x00000020u); // 800E52F8
  if (!crb(c,2)) { goto L_800E5318; } // 800E52FC
  c->r[3]=0u+0x01230000u; // 800E5300
  c->r[4]=0u+0x800E0000u; // 800E5304
  c->r[3]=c->r[3]+0x00004569u; // 800E5308
  c->r[4]=c->r[4]+0x00004170u; // 800E530C
  c->lr=0x800E5314u; f_800E9350(c); // 800E5310
  goto L_800E56CC; // 800E5314
L_800E5318:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 800E5318
  if (crb(c,2)) { goto L_800E56B0; } // 800E531C
  c->r[0]=0u+0x00000000u; // 800E5320
  c->r[6]=c->r[31]+0x00004C00u; // 800E5324
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E5328
  c->r[5]=0u+0x80000000u; // 800E532C
  W32(c->r[13]+0xFFFFA76Cu,c->r[6]); // 800E5330
  W32(c->r[13]+0xFFFFA768u,c->r[0]); // 800E5334
  c->r[0]=R32(c->r[5]+0x00003198u); // 800E5338
  cmps(c,0,(int32_t)c->r[0],0); // 800E533C
  if (crb(c,2)) { goto L_800E5360; } // 800E5340
  W32(c->r[13]+0xFFFFA768u,c->r[6]); // 800E5344
  c->r[0]=R32(c->r[5]+0x00003194u); // 800E5348
  W32(c->r[6]+0x00000004u,c->r[0]); // 800E534C
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E5350
  c->r[0]=R32(c->r[5]+0x00003198u); // 800E5354
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E5358
  goto L_800E53A0; // 800E535C
L_800E5360:;
  c->r[3]=R32(c->r[13]+0xFFFFA770u); // 800E5360
  c->r[7]=0u+0x00000000u; // 800E5364
  goto L_800E5390; // 800E5368
  c->r[0]=c->r[0]|0x00000000u; // 800E536C
L_800E5370:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 800E5370
  c->r[0]=R32(c->r[5]+0x00003194u); // 800E5374
  cmpu(c,0,c->r[4],c->r[0]); // 800E5378
  if (!crb(c,2)) { goto L_800E5384; } // 800E537C
  W32(c->r[13]+0xFFFFA768u,c->r[6]); // 800E5380
L_800E5384:;
  c->r[6]=c->r[6]+0x00000008u; // 800E5384
  W32(c->r[13]+0xFFFFA76Cu,c->r[6]); // 800E5388
  c->r[7]=c->r[7]+0x00000001u; // 800E538C
L_800E5390:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5390
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800E5394
  cmpu(c,0,c->r[4],c->r[0]); // 800E5398
  if (crb(c,0)) { IRQCHK(c); goto L_800E5370; } // 800E539C
L_800E53A0:;
  c->r[0]=R32(c->r[13]+0xFFFFA768u); // 800E53A0
  cmps(c,0,(int32_t)c->r[0],0); // 800E53A4
  if (crb(c,2)) { goto L_800E55B4; } // 800E53A8
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E53AC
  cmps(c,0,(int32_t)c->r[0],3); // 800E53B0
  if (crb(c,2)) { goto L_800E53BC; } // 800E53B4
  goto L_800E54B8; // 800E53B8
L_800E53BC:;
  c->r[29]=0u+0x00000000u; // 800E53BC
  W32(c->r[13]+0xFFFFA738u,c->r[29]); // 800E53C0
  c->r[3]=0u+0x00000000u; // 800E53C4
  c->lr=0x800E53CCu; f_800EBDE0(c); // 800E53C8
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E53CC
  c->r[28]=R32(c->r[3]+0x00000000u); // 800E53D0
  c->lr=0x800E53D8u; f_800CBAA0(c); // 800E53D4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E53D8
  c->r[30]=c->r[3]|c->r[3]; // 800E53DC
  cmpu(c,0,c->r[0],0x00000005u); // 800E53E0
  if (crb(c,0)) { goto L_800E53EC; } // 800E53E4
  W32(c->r[13]+0xFFFFA720u,c->r[29]); // 800E53E8
L_800E53EC:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E53EC
  c->r[29]=0u+0x802F0000u; // 800E53F0
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E53F4
  c->r[29]=c->r[29]+0xFFFFFE00u; // 800E53F8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E53FC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5400
  c->r[6]=0u+0x00000022u; // 800E5404
  c->r[4]=0u+0x00000000u; // 800E5408
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E540C
  c->r[5]=c->r[29]+c->r[5]; // 800E5410
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E5414
  c->r[3]=c->r[29]+c->r[3]; // 800E5418
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E541C
  W32(c->r[3]+0x00000020u,c->r[28]); // 800E5420
  c->r[3]=c->r[29]+c->r[0]; // 800E5424
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E5428
  c->lr=0x800E5430u; f_800D0530(c); // 800E542C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5430
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5434
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5438
  c->r[0]=c->r[4]+0x00000001u; // 800E543C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5440
  c->r[4]=c->r[29]+c->r[5]; // 800E5444
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E5448
  c->r[3]=c->r[30]|c->r[30]; // 800E544C
  c->lr=0x800E5454u; f_800CBAE0(c); // 800E5450
  c->r[3]=0u+0x80000000u; // 800E5454
  c->r[0]=R8(c->r[3]+0x00003187u); // 800E5458
  cmpu(c,0,c->r[0],0x00000080u); // 800E545C
  if (!crb(c,2)) { goto L_800E5490; } // 800E5460
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E5464
  c->r[9]=0u+0x800E0000u; // 800E5468
  c->r[5]=R32(c->r[13]+0xFFFFA780u); // 800E546C
  c->r[4]=c->r[31]+0x00000000u; // 800E5470
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E5474
  c->r[6]=c->r[31]+0x00000100u; // 800E5478
  c->r[9]=c->r[9]+0x000056F0u; // 800E547C
  c->r[7]=0u+0x00000000u; // 800E5480
  c->r[8]=0u+0x00000000u; // 800E5484
  c->lr=0x800E548Cu; f_800EA0F0(c); // 800E5488
  goto L_800E56CC; // 800E548C
L_800E5490:;
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E5490
  c->r[8]=0u+0x800E0000u; // 800E5494
  c->r[7]=c->r[31]+0x00000100u; // 800E5498
  c->r[4]=0u+0x00000000u; // 800E549C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E54A0
  c->r[8]=c->r[8]+0x000056F0u; // 800E54A4
  c->r[5]=0u+0x00000000u; // 800E54A8
  c->r[6]=0u+0x00000000u; // 800E54AC
  c->lr=0x800E54B4u; f_800E9E80(c); // 800E54B0
  goto L_800E56CC; // 800E54B4
L_800E54B8:;
  c->r[29]=0u+0x00000000u; // 800E54B8
  W32(c->r[13]+0xFFFFA738u,c->r[29]); // 800E54BC
  c->r[3]=0u+0x00000000u; // 800E54C0
  c->lr=0x800E54C8u; f_800EBDE0(c); // 800E54C4
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E54C8
  c->r[28]=R32(c->r[3]+0x00000000u); // 800E54CC
  c->lr=0x800E54D4u; f_800CBAA0(c); // 800E54D0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E54D4
  c->r[30]=c->r[3]|c->r[3]; // 800E54D8
  cmpu(c,0,c->r[0],0x00000005u); // 800E54DC
  if (crb(c,0)) { goto L_800E54E8; } // 800E54E0
  W32(c->r[13]+0xFFFFA720u,c->r[29]); // 800E54E4
L_800E54E8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E54E8
  c->r[29]=0u+0x802F0000u; // 800E54EC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E54F0
  c->r[29]=c->r[29]+0xFFFFFE00u; // 800E54F4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E54F8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E54FC
  c->r[6]=0u+0x00000022u; // 800E5500
  c->r[4]=0u+0x00000000u; // 800E5504
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E5508
  c->r[5]=c->r[29]+c->r[5]; // 800E550C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E5510
  c->r[3]=c->r[29]+c->r[3]; // 800E5514
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5518
  W32(c->r[3]+0x00000020u,c->r[28]); // 800E551C
  c->r[3]=c->r[29]+c->r[0]; // 800E5520
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E5524
  c->lr=0x800E552Cu; f_800D0530(c); // 800E5528
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E552C
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5530
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5534
  c->r[0]=c->r[4]+0x00000001u; // 800E5538
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E553C
  c->r[4]=c->r[29]+c->r[5]; // 800E5540
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E5544
  c->r[3]=c->r[30]|c->r[30]; // 800E5548
  c->lr=0x800E5550u; f_800CBAE0(c); // 800E554C
  c->r[3]=0u+0x80000000u; // 800E5550
  c->r[0]=R8(c->r[3]+0x00003187u); // 800E5554
  cmpu(c,0,c->r[0],0x00000080u); // 800E5558
  if (!crb(c,2)) { goto L_800E558C; } // 800E555C
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E5560
  c->r[9]=0u+0x800E0000u; // 800E5564
  c->r[5]=R32(c->r[13]+0xFFFFA780u); // 800E5568
  c->r[4]=c->r[31]+0x00000000u; // 800E556C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E5570
  c->r[6]=c->r[31]+0x00000100u; // 800E5574
  c->r[9]=c->r[9]+0x00005880u; // 800E5578
  c->r[7]=0u+0x00000000u; // 800E557C
  c->r[8]=0u+0x00000000u; // 800E5580
  c->lr=0x800E5588u; f_800EA0F0(c); // 800E5584
  goto L_800E56CC; // 800E5588
L_800E558C:;
  c->r[3]=R32(c->r[13]+0xFFFFA768u); // 800E558C
  c->r[8]=0u+0x800E0000u; // 800E5590
  c->r[7]=c->r[31]+0x00000100u; // 800E5594
  c->r[4]=0u+0x00000000u; // 800E5598
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E559C
  c->r[8]=c->r[8]+0x00005880u; // 800E55A0
  c->r[5]=0u+0x00000000u; // 800E55A4
  c->r[6]=0u+0x00000000u; // 800E55A8
  c->lr=0x800E55B0u; f_800E9E80(c); // 800E55AC
  goto L_800E56CC; // 800E55B0
L_800E55B4:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E55B4
  cmps(c,0,(int32_t)c->r[0],0); // 800E55B8
  if (crb(c,2)) { goto L_800E5628; } // 800E55BC
  c->r[28]=R32(c->r[13]+0xFFFFA7B0u); // 800E55C0
  c->r[3]=c->r[31]+0x00004B20u; // 800E55C4
  c->r[0]=0u+0x00000001u; // 800E55C8
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E55CC
  c->r[4]=0u+0x00000000u; // 800E55D0
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E55D4
  c->r[0]=0u+0x0000000Au; // 800E55D8
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E55DC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800E55E0
  c->r[12]=R32(c->r[28]+0x00000028u); // 800E55E4
  cmps(c,0,(int32_t)c->r[12],0); // 800E55E8
  if (crb(c,2)) { goto L_800E5600; } // 800E55EC
  c->r[4]=c->r[28]|c->r[28]; // 800E55F0
  c->r[3]=0u+0xFFFFFFFDu; // 800E55F4
  c->ctr=c->r[12]; // 800E55F8
  if (true) { c->lr=0x800E5600u; dispatch(c,c->ctr); } // 800E55FC
L_800E5600:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E5600
  cmps(c,0,(int32_t)c->r[12],0); // 800E5604
  if (crb(c,2)) { goto L_800E561C; } // 800E5608
  c->r[4]=c->r[28]|c->r[28]; // 800E560C
  c->r[3]=0u+0x00000000u; // 800E5610
  c->ctr=c->r[12]; // 800E5614
  if (true) { c->lr=0x800E561Cu; dispatch(c,c->ctr); } // 800E5618
L_800E561C:;
  c->lr=0x800E5620u; f_800E68A0(c); // 800E561C
  c->r[0]=0u+0x00000001u; // 800E5620
  goto L_800E562C; // 800E5624
L_800E5628:;
  c->r[0]=0u+0x00000000u; // 800E5628
L_800E562C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E562C
  if (!crb(c,2)) { goto L_800E56CC; } // 800E5630
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E5634
  c->r[0]=0u+0x00000006u; // 800E5638
  c->r[3]=0u+0x00000001u; // 800E563C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E5640
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E5644
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E5648
  cmps(c,0,(int32_t)c->r[0],0); // 800E564C
  if (!crb(c,2)) { goto L_800E56CC; } // 800E5650
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E5654
  cmps(c,0,(int32_t)c->r[0],0); // 800E5658
  if (!crb(c,2)) { goto L_800E56CC; } // 800E565C
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E5660
  c->r[3]=c->r[31]+0x00004B80u; // 800E5664
  c->lr=0x800E566Cu; f_800C66D0(c); // 800E5668
  c->lr=0x800E5670u; f_800D0530(c); // 800E566C
  c->r[5]=0u+0x80000000u; // 800E5670
  c->r[4]=0u+0x10620000u; // 800E5674
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E5678
  c->r[9]=0u+0x800E0000u; // 800E567C
  c->r[6]=c->r[3]|c->r[3]; // 800E5680
  c->r[4]=c->r[4]+0x00004DD3u; // 800E5684
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E5688
  c->r[3]=c->r[31]+0x00004B80u; // 800E568C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E5690
  c->r[9]=c->r[9]+0x00006870u; // 800E5694
  c->r[5]=0u+0x00000000u; // 800E5698
  c->r[7]=0u+0x00000000u; // 800E569C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E56A0
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E56A4
  c->lr=0x800E56ACu; f_800C69A0(c); // 800E56A8
  goto L_800E56CC; // 800E56AC
L_800E56B0:;
  c->r[3]=0u+0x00000027u; // 800E56B0
  c->r[4]=0u+0x00000000u; // 800E56B4
  c->r[5]=0u+0x00000000u; // 800E56B8
  c->lr=0x800E56C0u; f_800E3AF0(c); // 800E56BC
  c->r[3]=0u+0x800E0000u; // 800E56C0
  c->r[3]=c->r[3]+0x00004380u; // 800E56C4
  c->lr=0x800E56CCu; f_800EAE30(c); // 800E56C8
L_800E56CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E56CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E56D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E56D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E56D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E56DC
  c->lr=c->r[0]; // 800E56E0
  c->r[1]=c->r[1]+0x00000020u; // 800E56E4
  return; // 800E56E8
}

// cbForStateOpenPartition
void f_800E56F0(Ctx* __restrict c) {
  trace_call(0x800E56F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E56F0
  c->r[0]=c->lr; // 800E56F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E56F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E56FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E5700
  c->r[30]=c->r[3]|c->r[3]; // 800E5704
  c->lr=0x800E570Cu; f_800CBAA0(c); // 800E5708
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E570C
  cmps(c,0,(int32_t)c->r[0],0); // 800E5710
  if (!crb(c,2)) { goto L_800E5728; } // 800E5714
  c->r[4]=0u+0x802F0000u; // 800E5718
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E571C
  W32(c->r[4]+0x00000078u,c->r[30]); // 800E5720
  goto L_800E5744; // 800E5724
L_800E5728:;
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5728
  c->r[5]=0u+0x802F0000u; // 800E572C
  c->r[5]=c->r[5]+0xFFFFFE00u; // 800E5730
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E5734
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5738
  c->r[4]=c->r[5]+c->r[0]; // 800E573C
  W32(c->r[4]+0x00000028u,c->r[30]); // 800E5740
L_800E5744:;
  c->lr=0x800E5748u; f_800CBAE0(c); // 800E5744
  cmpu(c,0,c->r[30],0x00000010u); // 800E5748
  if (!crb(c,2)) { goto L_800E5768; } // 800E574C
  c->r[3]=0u+0x01230000u; // 800E5750
  c->r[4]=0u+0x800E0000u; // 800E5754
  c->r[3]=c->r[3]+0x00004568u; // 800E5758
  c->r[4]=c->r[4]+0x00004170u; // 800E575C
  c->lr=0x800E5764u; f_800E9350(c); // 800E5760
  goto L_800E5860; // 800E5764
L_800E5768:;
  cmpu(c,0,c->r[30],0x00000020u); // 800E5768
  if (!crb(c,2)) { goto L_800E5788; } // 800E576C
  c->r[3]=0u+0x01230000u; // 800E5770
  c->r[4]=0u+0x800E0000u; // 800E5774
  c->r[3]=c->r[3]+0x00004569u; // 800E5778
  c->r[4]=c->r[4]+0x00004170u; // 800E577C
  c->lr=0x800E5784u; f_800E9350(c); // 800E5780
  goto L_800E5860; // 800E5784
L_800E5788:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800E5788
  if (crb(c,2)) { goto L_800E5844; } // 800E578C
  c->r[30]=0u+0x00000000u; // 800E5790
  W32(c->r[13]+0xFFFFA738u,c->r[30]); // 800E5794
  c->r[3]=0u+0x00000000u; // 800E5798
  c->lr=0x800E57A0u; f_800EBDE0(c); // 800E579C
  c->lr=0x800E57A4u; f_800CBAA0(c); // 800E57A0
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E57A4
  c->r[31]=c->r[3]|c->r[3]; // 800E57A8
  cmpu(c,0,c->r[0],0x00000005u); // 800E57AC
  if (crb(c,0)) { goto L_800E57B8; } // 800E57B0
  W32(c->r[13]+0xFFFFA720u,c->r[30]); // 800E57B4
L_800E57B8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E57B8
  c->r[30]=0u+0x802F0000u; // 800E57BC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E57C0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E57C4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E57C8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E57CC
  c->r[7]=0u+0x00000001u; // 800E57D0
  c->r[5]=0u+0x00000108u; // 800E57D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E57D8
  c->r[4]=0u+0x00000020u; // 800E57DC
  c->r[6]=c->r[30]+c->r[6]; // 800E57E0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800E57E4
  c->r[3]=c->r[30]+c->r[3]; // 800E57E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E57EC
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E57F0
  c->r[3]=c->r[30]+c->r[0]; // 800E57F4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E57F8
  c->lr=0x800E5800u; f_800D0530(c); // 800E57FC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5800
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5804
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5808
  c->r[0]=c->r[4]+0x00000001u; // 800E580C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5810
  c->r[4]=c->r[30]+c->r[5]; // 800E5814
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E5818
  c->r[3]=c->r[31]|c->r[31]; // 800E581C
  c->lr=0x800E5824u; f_800CBAE0(c); // 800E5820
  c->r[3]=0u+0x802F0000u; // 800E5824
  c->r[6]=0u+0x800E0000u; // 800E5828
  c->r[3]=c->r[3]+0xFFFFFAC0u; // 800E582C
  c->r[4]=0u+0x00000020u; // 800E5830
  c->r[6]=c->r[6]+0x00005BC0u; // 800E5834
  c->r[5]=0u+0x00000108u; // 800E5838
  c->lr=0x800E5840u; f_800EB600(c); // 800E583C
  goto L_800E5860; // 800E5840
L_800E5844:;
  c->r[3]=0u+0x00000027u; // 800E5844
  c->r[4]=0u+0x00000000u; // 800E5848
  c->r[5]=0u+0x00000000u; // 800E584C
  c->lr=0x800E5854u; f_800E3AF0(c); // 800E5850
  c->r[3]=0u+0x800E0000u; // 800E5854
  c->r[3]=c->r[3]+0x00004380u; // 800E5858
  c->lr=0x800E5860u; f_800EAE30(c); // 800E585C
L_800E5860:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5864
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E5868
  c->lr=c->r[0]; // 800E586C
  c->r[1]=c->r[1]+0x00000010u; // 800E5870
  return; // 800E5874
}

// cbForStateOpenPartition2
void f_800E5880(Ctx* __restrict c) {
  trace_call(0x800E5880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5880
  c->r[0]=c->lr; // 800E5884
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E588C
  c->r[31]=c->r[3]|c->r[3]; // 800E5890
  c->lr=0x800E5898u; f_800CBAA0(c); // 800E5894
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5898
  cmps(c,0,(int32_t)c->r[0],0); // 800E589C
  if (!crb(c,2)) { goto L_800E58B4; } // 800E58A0
  c->r[4]=0u+0x802F0000u; // 800E58A4
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E58A8
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E58AC
  goto L_800E58CC; // 800E58B0
L_800E58B4:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E58B4
  c->r[4]=0u+0x802F0000u; // 800E58B8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E58BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E58C0
  c->r[4]=c->r[4]+c->r[0]; // 800E58C4
  W32(c->r[4]+0x00000014u,c->r[31]); // 800E58C8
L_800E58CC:;
  c->lr=0x800E58D0u; f_800CBAE0(c); // 800E58CC
  cmpu(c,0,c->r[31],0x00000010u); // 800E58D0
  if (!crb(c,2)) { goto L_800E58F0; } // 800E58D4
  c->r[3]=0u+0x01230000u; // 800E58D8
  c->r[4]=0u+0x800E0000u; // 800E58DC
  c->r[3]=c->r[3]+0x00004568u; // 800E58E0
  c->r[4]=c->r[4]+0x00004170u; // 800E58E4
  c->lr=0x800E58ECu; f_800E9350(c); // 800E58E8
  goto L_800E59D0; // 800E58EC
L_800E58F0:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E58F0
  if (!crb(c,2)) { goto L_800E5910; } // 800E58F4
  c->r[3]=0u+0x01230000u; // 800E58F8
  c->r[4]=0u+0x800E0000u; // 800E58FC
  c->r[3]=c->r[3]+0x00004569u; // 800E5900
  c->r[4]=c->r[4]+0x00004170u; // 800E5904
  c->lr=0x800E590Cu; f_800E9350(c); // 800E5908
  goto L_800E59D0; // 800E590C
L_800E5910:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800E5910
  if (crb(c,2)) { goto L_800E59B4; } // 800E5914
  c->r[4]=0u+0x00000000u; // 800E5918
  W32(c->r[13]+0xFFFFA738u,c->r[4]); // 800E591C
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E5920
  cmps(c,0,(int32_t)c->r[0],0); // 800E5924
  if (crb(c,2)) { goto L_800E5990; } // 800E5928
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E592C
  c->r[3]=0u+0x802F0000u; // 800E5930
  W32(c->r[13]+0xFFFFA734u,c->r[4]); // 800E5934
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E5938
  c->r[0]=0u+0x0000000Au; // 800E593C
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E5940
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E5944
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E5948
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E594C
  cmps(c,0,(int32_t)c->r[12],0); // 800E5950
  if (crb(c,2)) { goto L_800E5968; } // 800E5954
  c->r[4]=c->r[31]|c->r[31]; // 800E5958
  c->r[3]=0u+0xFFFFFFFDu; // 800E595C
  c->ctr=c->r[12]; // 800E5960
  if (true) { c->lr=0x800E5968u; dispatch(c,c->ctr); } // 800E5964
L_800E5968:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E5968
  cmps(c,0,(int32_t)c->r[12],0); // 800E596C
  if (crb(c,2)) { goto L_800E5984; } // 800E5970
  c->r[4]=c->r[31]|c->r[31]; // 800E5974
  c->r[3]=0u+0x00000000u; // 800E5978
  c->ctr=c->r[12]; // 800E597C
  if (true) { c->lr=0x800E5984u; dispatch(c,c->ctr); } // 800E5980
L_800E5984:;
  c->lr=0x800E5988u; f_800E68A0(c); // 800E5984
  c->r[0]=0u+0x00000001u; // 800E5988
  goto L_800E5994; // 800E598C
L_800E5990:;
  c->r[0]=0u+0x00000000u; // 800E5990
L_800E5994:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E5994
  if (!crb(c,2)) { goto L_800E59D0; } // 800E5998
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E599C
  c->r[0]=0u+0x00000001u; // 800E59A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E59A4
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E59A8
  c->lr=0x800E59B0u; f_800E6BC0(c); // 800E59AC
  goto L_800E59D0; // 800E59B0
L_800E59B4:;
  c->r[3]=0u+0x00000027u; // 800E59B4
  c->r[4]=0u+0x00000000u; // 800E59B8
  c->r[5]=0u+0x00000000u; // 800E59BC
  c->lr=0x800E59C4u; f_800E3AF0(c); // 800E59C0
  c->r[3]=0u+0x800E0000u; // 800E59C4
  c->r[3]=c->r[3]+0x00004380u; // 800E59C8
  c->lr=0x800E59D0u; f_800EAE30(c); // 800E59CC
L_800E59D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E59D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E59D4
  c->lr=c->r[0]; // 800E59D8
  c->r[1]=c->r[1]+0x00000010u; // 800E59DC
  return; // 800E59E0
}

// cbForStateCheckID1
void f_800E59F0(Ctx* __restrict c) {
  trace_call(0x800E59F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E59F0
  c->r[0]=c->lr; // 800E59F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E59F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E59FC
  c->r[31]=c->r[3]|c->r[3]; // 800E5A00
  c->lr=0x800E5A08u; f_800CBAA0(c); // 800E5A04
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5A08
  cmps(c,0,(int32_t)c->r[0],0); // 800E5A0C
  if (!crb(c,2)) { goto L_800E5A24; } // 800E5A10
  c->r[4]=0u+0x802F0000u; // 800E5A14
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E5A18
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E5A1C
  goto L_800E5A3C; // 800E5A20
L_800E5A24:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5A24
  c->r[4]=0u+0x802F0000u; // 800E5A28
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E5A2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5A30
  c->r[4]=c->r[4]+c->r[0]; // 800E5A34
  W32(c->r[4]+0x00000014u,c->r[31]); // 800E5A38
L_800E5A3C:;
  c->lr=0x800E5A40u; f_800CBAE0(c); // 800E5A3C
  cmpu(c,0,c->r[31],0x00000010u); // 800E5A40
  if (!crb(c,2)) { goto L_800E5A60; } // 800E5A44
  c->r[3]=0u+0x01230000u; // 800E5A48
  c->r[4]=0u+0x800E0000u; // 800E5A4C
  c->r[3]=c->r[3]+0x00004568u; // 800E5A50
  c->r[4]=c->r[4]+0x00004170u; // 800E5A54
  c->lr=0x800E5A5Cu; f_800E9350(c); // 800E5A58
  goto L_800E5BA4; // 800E5A5C
L_800E5A60:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E5A60
  if (!crb(c,2)) { goto L_800E5A80; } // 800E5A64
  c->r[3]=0u+0x01230000u; // 800E5A68
  c->r[4]=0u+0x800E0000u; // 800E5A6C
  c->r[3]=c->r[3]+0x00004569u; // 800E5A70
  c->r[4]=c->r[4]+0x00004170u; // 800E5A74
  c->lr=0x800E5A7Cu; f_800E9350(c); // 800E5A78
  goto L_800E5BA4; // 800E5A7C
L_800E5A80:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800E5A80
  if (crb(c,2)) { goto L_800E5AA0; } // 800E5A84
  c->r[3]=0u+0x01230000u; // 800E5A88
  c->r[4]=0u+0x800E0000u; // 800E5A8C
  c->r[3]=c->r[3]+0x00004567u; // 800E5A90
  c->r[4]=c->r[4]+0x00004150u; // 800E5A94
  c->lr=0x800E5A9Cu; f_800E9350(c); // 800E5A98
  goto L_800E5BA4; // 800E5A9C
L_800E5AA0:;
  c->r[4]=0u+0x00000000u; // 800E5AA0
  W32(c->r[13]+0xFFFFA738u,c->r[4]); // 800E5AA4
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E5AA8
  cmps(c,0,(int32_t)c->r[0],0); // 800E5AAC
  if (crb(c,2)) { goto L_800E5B1C; } // 800E5AB0
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E5AB4
  c->r[3]=0u+0x802F0000u; // 800E5AB8
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E5ABC
  c->r[0]=0u+0x00000001u; // 800E5AC0
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E5AC4
  c->r[0]=0u+0x0000000Au; // 800E5AC8
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E5ACC
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E5AD0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E5AD4
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E5AD8
  cmps(c,0,(int32_t)c->r[12],0); // 800E5ADC
  if (crb(c,2)) { goto L_800E5AF4; } // 800E5AE0
  c->r[4]=c->r[31]|c->r[31]; // 800E5AE4
  c->r[3]=0u+0xFFFFFFFDu; // 800E5AE8
  c->ctr=c->r[12]; // 800E5AEC
  if (true) { c->lr=0x800E5AF4u; dispatch(c,c->ctr); } // 800E5AF0
L_800E5AF4:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E5AF4
  cmps(c,0,(int32_t)c->r[12],0); // 800E5AF8
  if (crb(c,2)) { goto L_800E5B10; } // 800E5AFC
  c->r[4]=c->r[31]|c->r[31]; // 800E5B00
  c->r[3]=0u+0x00000000u; // 800E5B04
  c->ctr=c->r[12]; // 800E5B08
  if (true) { c->lr=0x800E5B10u; dispatch(c,c->ctr); } // 800E5B0C
L_800E5B10:;
  c->lr=0x800E5B14u; f_800E68A0(c); // 800E5B10
  c->r[0]=0u+0x00000001u; // 800E5B14
  goto L_800E5B20; // 800E5B18
L_800E5B1C:;
  c->r[0]=0u+0x00000000u; // 800E5B1C
L_800E5B20:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E5B20
  if (!crb(c,2)) { goto L_800E5BA4; } // 800E5B24
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E5B28
  c->r[0]=0u+0x00000006u; // 800E5B2C
  c->r[3]=0u+0x00000001u; // 800E5B30
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E5B34
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E5B38
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E5B3C
  cmps(c,0,(int32_t)c->r[0],0); // 800E5B40
  if (!crb(c,2)) { goto L_800E5BA4; } // 800E5B44
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E5B48
  cmps(c,0,(int32_t)c->r[0],0); // 800E5B4C
  if (!crb(c,2)) { goto L_800E5BA4; } // 800E5B50
  c->r[31]=0u+0x802F0000u; // 800E5B54
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E5B58
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E5B5C
  c->lr=0x800E5B64u; f_800C66D0(c); // 800E5B60
  c->lr=0x800E5B68u; f_800D0530(c); // 800E5B64
  c->r[5]=0u+0x80000000u; // 800E5B68
  c->r[4]=0u+0x10620000u; // 800E5B6C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E5B70
  c->r[9]=0u+0x800E0000u; // 800E5B74
  c->r[6]=c->r[3]|c->r[3]; // 800E5B78
  c->r[4]=c->r[4]+0x00004DD3u; // 800E5B7C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E5B80
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E5B84
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E5B88
  c->r[9]=c->r[9]+0x00006870u; // 800E5B8C
  c->r[5]=0u+0x00000000u; // 800E5B90
  c->r[7]=0u+0x00000000u; // 800E5B94
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E5B98
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E5B9C
  c->lr=0x800E5BA4u; f_800C69A0(c); // 800E5BA0
L_800E5BA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5BA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5BA8
  c->lr=c->r[0]; // 800E5BAC
  c->r[1]=c->r[1]+0x00000010u; // 800E5BB0
  return; // 800E5BB4
}

// cbForStateCheckID2
void f_800E5BC0(Ctx* __restrict c) {
  trace_call(0x800E5BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5BC0
  c->r[0]=c->lr; // 800E5BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5BC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5BCC
  c->r[31]=c->r[3]|c->r[3]; // 800E5BD0
  c->lr=0x800E5BD8u; f_800CBAA0(c); // 800E5BD4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5BD8
  cmps(c,0,(int32_t)c->r[0],0); // 800E5BDC
  if (!crb(c,2)) { goto L_800E5BF4; } // 800E5BE0
  c->r[4]=0u+0x802F0000u; // 800E5BE4
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E5BE8
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E5BEC
  goto L_800E5C10; // 800E5BF0
L_800E5BF4:;
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5BF4
  c->r[5]=0u+0x802F0000u; // 800E5BF8
  c->r[5]=c->r[5]+0xFFFFFE00u; // 800E5BFC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E5C00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5C04
  c->r[4]=c->r[5]+c->r[0]; // 800E5C08
  W32(c->r[4]+0x00000028u,c->r[31]); // 800E5C0C
L_800E5C10:;
  c->lr=0x800E5C14u; f_800CBAE0(c); // 800E5C10
  cmpu(c,0,c->r[31],0x00000010u); // 800E5C14
  if (!crb(c,2)) { goto L_800E5C34; } // 800E5C18
  c->r[3]=0u+0x01230000u; // 800E5C1C
  c->r[4]=0u+0x800E0000u; // 800E5C20
  c->r[3]=c->r[3]+0x00004568u; // 800E5C24
  c->r[4]=c->r[4]+0x00004170u; // 800E5C28
  c->lr=0x800E5C30u; f_800E9350(c); // 800E5C2C
  goto L_800E5D40; // 800E5C30
L_800E5C34:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E5C34
  if (!crb(c,2)) { goto L_800E5C54; } // 800E5C38
  c->r[3]=0u+0x01230000u; // 800E5C3C
  c->r[4]=0u+0x800E0000u; // 800E5C40
  c->r[3]=c->r[3]+0x00004569u; // 800E5C44
  c->r[4]=c->r[4]+0x00004170u; // 800E5C48
  c->lr=0x800E5C50u; f_800E9350(c); // 800E5C4C
  goto L_800E5D40; // 800E5C50
L_800E5C54:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800E5C54
  if (crb(c,2)) { goto L_800E5D24; } // 800E5C58
  c->r[5]=0u+0x800E0000u; // 800E5C5C
  c->r[0]=0u+0x00000000u; // 800E5C60
  c->r[5]=c->r[5]+0x00003D20u; // 800E5C64
  c->r[3]=0u+0x802F0000u; // 800E5C68
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E5C6C
  c->r[3]=c->r[3]+0xFFFFFAC0u; // 800E5C70
  c->r[4]=R32(c->r[13]+0xFFFFA7A8u); // 800E5C74
  W32(c->r[13]+0xFFFFA7B4u,c->r[5]); // 800E5C78
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E5C7C
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 800E5C80
  cmpu(c,0,c->r[3],c->r[0]); // 800E5C84
  if (!crb(c,0)) { goto L_800E5CA4; } // 800E5C88
  c->r[5]=0u+0x802B0000u; // 800E5C8C
  c->r[3]=c->r[13]+0xFFFF903Cu; // 800E5C90
  c->r[5]=c->r[5]+0xFFFFF840u; // 800E5C94
  c->r[4]=0u+0x00000442u; // 800E5C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E5C9C
  c->lr=0x800E5CA4u; f_800C84E0(c); // 800E5CA0
L_800E5CA4:;
  c->r[3]=0u+0x00000000u; // 800E5CA4
  c->lr=0x800E5CACu; f_800EBDE0(c); // 800E5CA8
  c->r[6]=R32(c->r[13]+0xFFFFA758u); // 800E5CAC
  c->r[31]=0u+0x802F0000u; // 800E5CB0
  c->r[31]=c->r[31]+0xFFFFFAC0u; // 800E5CB4
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800E5CB8
  c->r[4]=R32(c->r[31]+0x00000008u); // 800E5CBC
  c->r[3]=0u+0x00000001u; // 800E5CC0
  c->r[0]=~(c->r[0]|c->r[0]); // 800E5CC4
  c->r[7]=R32(c->r[31]+0x00000004u); // 800E5CC8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800E5CCC
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800E5CD0
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 800E5CD4
  c->r[0]=c->r[5]+0x0000001Fu; // 800E5CD8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800E5CDC
  c->lr=0x800E5CE4u; f_800E3AF0(c); // 800E5CE0
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800E5CE4
  c->r[6]=0u+0x800E0000u; // 800E5CE8
  c->r[3]=R32(c->r[31]+0x00000008u); // 800E5CEC
  c->r[6]=c->r[6]+0x00003EA0u; // 800E5CF0
  c->r[0]=~(c->r[0]|c->r[0]); // 800E5CF4
  c->r[7]=R32(c->r[13]+0xFFFFA7A8u); // 800E5CF8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800E5CFC
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E5D00
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800E5D04
  c->r[0]=R32(c->r[13]+0xFFFFA758u); // 800E5D08
  c->r[4]=c->r[3]+0x0000001Fu; // 800E5D0C
  c->r[3]=R32(c->r[7]+0x00000038u); // 800E5D10
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 800E5D14
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 800E5D18
  c->lr=0x800E5D20u; f_800EB600(c); // 800E5D1C
  goto L_800E5D40; // 800E5D20
L_800E5D24:;
  c->r[3]=0u+0x00000027u; // 800E5D24
  c->r[4]=0u+0x00000000u; // 800E5D28
  c->r[5]=0u+0x00000000u; // 800E5D2C
  c->lr=0x800E5D34u; f_800E3AF0(c); // 800E5D30
  c->r[3]=0u+0x800E0000u; // 800E5D34
  c->r[3]=c->r[3]+0x00004380u; // 800E5D38
  c->lr=0x800E5D40u; f_800EAE30(c); // 800E5D3C
L_800E5D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5D44
  c->lr=c->r[0]; // 800E5D48
  c->r[1]=c->r[1]+0x00000010u; // 800E5D4C
  return; // 800E5D50
}

// stateCoverClosed
void f_800E5D60(Ctx* __restrict c) {
  trace_call(0x800E5D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5D60
  c->r[0]=c->lr; // 800E5D64
  c->r[3]=0u+0x00000001u; // 800E5D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5D6C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E5D70
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E5D74
  cmpu(c,0,c->r[0],0x0000002Au); // 800E5D78
  if (crb(c,1)) { goto L_800E5DF8; } // 800E5D7C
  c->r[3]=0u+0x802B0000u; // 800E5D80
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E5D84
  c->r[3]=c->r[3]+0xFFFFF874u; // 800E5D88
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E5D8C
  c->ctr=c->r[3]; // 800E5D90
  if (true) { switch (c->ctr) { case 0x800E5D98u: goto L_800E5D98; case 0x800E5DCCu: goto L_800E5DCC; case 0x800E5DD4u: goto L_800E5DD4; case 0x800E5DECu: goto L_800E5DEC; case 0x800E5DF8u: goto L_800E5DF8; default: break; } dispatch(c,c->ctr); return; } // 800E5D94
L_800E5D98:;
  c->lr=0x800E5D9Cu; f_800E8720(c); // 800E5D98
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E5D9C
  c->r[3]=0u+0x802F0000u; // 800E5DA0
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E5DA4
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E5DA8
  c->r[12]=R32(c->r[4]+0x00000028u); // 800E5DAC
  cmps(c,0,(int32_t)c->r[12],0); // 800E5DB0
  if (crb(c,2)) { goto L_800E5DC4; } // 800E5DB4
  c->r[3]=0u+0xFFFFFFFCu; // 800E5DB8
  c->ctr=c->r[12]; // 800E5DBC
  if (true) { c->lr=0x800E5DC4u; dispatch(c,c->ctr); } // 800E5DC0
L_800E5DC4:;
  c->lr=0x800E5DC8u; f_800E68A0(c); // 800E5DC4
  goto L_800E5E14; // 800E5DC8
L_800E5DCC:;
  c->r[0]=0u+0x00000000u; // 800E5DCC
  W32(c->r[13]+0xFFFFA790u,c->r[0]); // 800E5DD0
L_800E5DD4:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E5DD4
  c->r[0]=0u+0x00000001u; // 800E5DD8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E5DDC
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E5DE0
  c->lr=0x800E5DE8u; f_800E6BC0(c); // 800E5DE4
  goto L_800E5E14; // 800E5DE8
L_800E5DEC:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800E5DEC
  cmps(c,0,(int32_t)c->r[0],0); // 800E5DF0
  if (!crb(c,2)) { goto L_800E5E14; } // 800E5DF4
L_800E5DF8:;
  c->r[0]=0u+0x00000000u; // 800E5DF8
  W32(c->r[13]+0xFFFFA790u,c->r[0]); // 800E5DFC
  c->r[3]=0u+0x00000001u; // 800E5E00
  c->lr=0x800E5E08u; f_800EAFA0(c); // 800E5E04
  c->r[3]=0u+0x800E0000u; // 800E5E08
  c->r[3]=c->r[3]+0x00006080u; // 800E5E0C
  c->lr=0x800E5E14u; f_800EAFB0(c); // 800E5E10
L_800E5E14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5E14
  c->lr=c->r[0]; // 800E5E18
  c->r[1]=c->r[1]+0x00000010u; // 800E5E1C
  return; // 800E5E20
}

// ResetAlarmHandler
void f_800E5E30(Ctx* __restrict c) {
  trace_call(0x800E5E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5E30
  c->r[0]=c->lr; // 800E5E34
  c->r[3]=0u+0x80000000u; // 800E5E38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5E3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5E40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E5E44
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800E5E48
  cmpu(c,0,c->r[0],0x00008003u); // 800E5E4C
  if (!crb(c,2)) { goto L_800E5F00; } // 800E5E50
  c->r[4]=0u+0x800E0000u; // 800E5E54
  c->r[3]=0u+0x00000000u; // 800E5E58
  c->r[4]=c->r[4]+0x00006170u; // 800E5E5C
  W32(c->r[13]+0xFFFFA7B4u,c->r[4]); // 800E5E60
  c->lr=0x800E5E68u; f_800EBDE0(c); // 800E5E64
  c->lr=0x800E5E6Cu; f_800CBAA0(c); // 800E5E68
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5E6C
  c->r[31]=c->r[3]|c->r[3]; // 800E5E70
  cmpu(c,0,c->r[0],0x00000005u); // 800E5E74
  if (crb(c,0)) { goto L_800E5E84; } // 800E5E78
  c->r[0]=0u+0x00000000u; // 800E5E7C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5E80
L_800E5E84:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5E84
  c->r[30]=0u+0x802F0000u; // 800E5E88
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E5E8C
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E5E90
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5E94
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5E98
  c->r[6]=0u+0x00000025u; // 800E5E9C
  c->r[4]=0u+0x00000000u; // 800E5EA0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E5EA4
  c->r[5]=c->r[30]+c->r[5]; // 800E5EA8
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E5EAC
  c->r[3]=c->r[30]+c->r[3]; // 800E5EB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5EB4
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E5EB8
  c->r[3]=c->r[30]+c->r[0]; // 800E5EBC
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E5EC0
  c->lr=0x800E5EC8u; f_800D0530(c); // 800E5EC4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5EC8
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E5ECC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5ED0
  c->r[0]=c->r[4]+0x00000001u; // 800E5ED4
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5ED8
  c->r[4]=c->r[30]+c->r[5]; // 800E5EDC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E5EE0
  c->r[3]=c->r[31]|c->r[31]; // 800E5EE4
  c->lr=0x800E5EECu; f_800CBAE0(c); // 800E5EE8
  c->r[4]=0u+0x800E0000u; // 800E5EEC
  c->r[3]=0u+0x00020000u; // 800E5EF0
  c->r[4]=c->r[4]+0x00006240u; // 800E5EF4
  c->lr=0x800E5EFCu; f_800EB470(c); // 800E5EF8
  goto L_800E6068; // 800E5EFC
L_800E5F00:;
  c->r[3]=0u+0x802F0000u; // 800E5F00
  c->r[4]=0u+0x00000020u; // 800E5F04
  c->r[3]=c->r[3]+0xFFFFFB80u; // 800E5F08
  c->lr=0x800E5F10u; f_800C7750(c); // 800E5F0C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E5F10
  c->r[3]=0u+0x800E0000u; // 800E5F14
  c->r[3]=c->r[3]+0x00006480u; // 800E5F18
  W32(c->r[13]+0xFFFFA7B4u,c->r[3]); // 800E5F1C
  cmpu(c,0,c->r[0],0x00000028u); // 800E5F20
  if (!crb(c,2)) { goto L_800E5FC4; } // 800E5F24
  c->r[4]=0u+0x00000000u; // 800E5F28
  W32(c->r[13]+0xFFFFA738u,c->r[4]); // 800E5F2C
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E5F30
  cmps(c,0,(int32_t)c->r[0],0); // 800E5F34
  if (crb(c,2)) { goto L_800E5FA0; } // 800E5F38
  c->r[30]=R32(c->r[13]+0xFFFFA7B0u); // 800E5F3C
  c->r[3]=0u+0x802F0000u; // 800E5F40
  W32(c->r[13]+0xFFFFA734u,c->r[4]); // 800E5F44
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E5F48
  c->r[0]=0u+0x0000000Au; // 800E5F4C
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E5F50
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E5F54
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800E5F58
  c->r[12]=R32(c->r[30]+0x00000028u); // 800E5F5C
  cmps(c,0,(int32_t)c->r[12],0); // 800E5F60
  if (crb(c,2)) { goto L_800E5F78; } // 800E5F64
  c->r[4]=c->r[30]|c->r[30]; // 800E5F68
  c->r[3]=0u+0xFFFFFFFDu; // 800E5F6C
  c->ctr=c->r[12]; // 800E5F70
  if (true) { c->lr=0x800E5F78u; dispatch(c,c->ctr); } // 800E5F74
L_800E5F78:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E5F78
  cmps(c,0,(int32_t)c->r[12],0); // 800E5F7C
  if (crb(c,2)) { goto L_800E5F94; } // 800E5F80
  c->r[4]=c->r[30]|c->r[30]; // 800E5F84
  c->r[3]=0u+0x00000000u; // 800E5F88
  c->ctr=c->r[12]; // 800E5F8C
  if (true) { c->lr=0x800E5F94u; dispatch(c,c->ctr); } // 800E5F90
L_800E5F94:;
  c->lr=0x800E5F98u; f_800E68A0(c); // 800E5F94
  c->r[0]=0u+0x00000001u; // 800E5F98
  goto L_800E5FA4; // 800E5F9C
L_800E5FA0:;
  c->r[0]=0u+0x00000000u; // 800E5FA0
L_800E5FA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E5FA4
  if (!crb(c,2)) { goto L_800E6068; } // 800E5FA8
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E5FAC
  c->r[0]=0u+0x00000001u; // 800E5FB0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E5FB4
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E5FB8
  c->lr=0x800E5FC0u; f_800E6BC0(c); // 800E5FBC
  goto L_800E6068; // 800E5FC0
L_800E5FC4:;
  c->r[3]=0u+0x00000000u; // 800E5FC4
  c->lr=0x800E5FCCu; f_800EBDE0(c); // 800E5FC8
  c->lr=0x800E5FD0u; f_800CBAA0(c); // 800E5FCC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5FD0
  c->r[31]=c->r[3]|c->r[3]; // 800E5FD4
  cmpu(c,0,c->r[0],0x00000005u); // 800E5FD8
  if (crb(c,0)) { goto L_800E5FE8; } // 800E5FDC
  c->r[0]=0u+0x00000000u; // 800E5FE0
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E5FE4
L_800E5FE8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5FE8
  c->r[30]=0u+0x802F0000u; // 800E5FEC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E5FF0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E5FF4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E5FF8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E5FFC
  c->r[7]=0u+0x00000005u; // 800E6000
  c->r[5]=0u+0x00000000u; // 800E6004
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E6008
  c->r[4]=0u+0x00000020u; // 800E600C
  c->r[6]=c->r[30]+c->r[6]; // 800E6010
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800E6014
  c->r[3]=c->r[30]+c->r[3]; // 800E6018
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E601C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E6020
  c->r[3]=c->r[30]+c->r[0]; // 800E6024
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E6028
  c->lr=0x800E6030u; f_800D0530(c); // 800E602C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6030
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E6034
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6038
  c->r[0]=c->r[4]+0x00000001u; // 800E603C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6040
  c->r[4]=c->r[30]+c->r[5]; // 800E6044
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E6048
  c->r[3]=c->r[31]|c->r[31]; // 800E604C
  c->lr=0x800E6054u; f_800CBAE0(c); // 800E6050
  c->r[3]=0u+0x802F0000u; // 800E6054
  c->r[4]=0u+0x800E0000u; // 800E6058
  c->r[3]=c->r[3]+0xFFFFFB80u; // 800E605C
  c->r[4]=c->r[4]+0x00006600u; // 800E6060
  c->lr=0x800E6068u; f_800E9CF0(c); // 800E6064
L_800E6068:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E606C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E6070
  c->lr=c->r[0]; // 800E6074
  c->r[1]=c->r[1]+0x00000010u; // 800E6078
  return; // 800E607C
}

// cbForStateReset
void f_800E6080(Ctx* __restrict c) {
  trace_call(0x800E6080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6080
  c->r[0]=c->lr; // 800E6084
  cmpu(c,0,c->r[3],0x00000010u); // 800E6088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E608C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6090
  if (!crb(c,2)) { goto L_800E60B0; } // 800E6094
  c->r[3]=0u+0x01230000u; // 800E6098
  c->r[4]=0u+0x800E0000u; // 800E609C
  c->r[3]=c->r[3]+0x00004568u; // 800E60A0
  c->r[4]=c->r[4]+0x00004170u; // 800E60A4
  c->lr=0x800E60ACu; f_800E9350(c); // 800E60A8
  goto L_800E6150; // 800E60AC
L_800E60B0:;
  cmpu(c,0,c->r[3],0x00000020u); // 800E60B0
  if (!crb(c,2)) { goto L_800E60D0; } // 800E60B4
  c->r[3]=0u+0x01230000u; // 800E60B8
  c->r[4]=0u+0x800E0000u; // 800E60BC
  c->r[3]=c->r[3]+0x00004569u; // 800E60C0
  c->r[4]=c->r[4]+0x00004170u; // 800E60C4
  c->lr=0x800E60CCu; f_800E9350(c); // 800E60C8
  goto L_800E6150; // 800E60CC
L_800E60D0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E60D0
  if (crb(c,2)) { goto L_800E6134; } // 800E60D4
  c->lr=0x800E60DCu; f_800D0540(c); // 800E60D8
  W32(c->r[13]+0xFFFFA78Cu,c->r[4]); // 800E60DC
  c->r[0]=0u+0x00000000u; // 800E60E0
  c->r[31]=0u+0x802F0000u; // 800E60E4
  W32(c->r[13]+0xFFFFA788u,c->r[3]); // 800E60E8
  c->r[3]=c->r[31]+0xFFFFFBE0u; // 800E60EC
  W32(c->r[13]+0xFFFFA794u,c->r[0]); // 800E60F0
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E60F4
  c->lr=0x800E60FCu; f_800C66D0(c); // 800E60F8
  c->r[4]=0u+0x80000000u; // 800E60FC
  c->r[7]=0u+0x800E0000u; // 800E6100
  c->r[0]=R32(c->r[4]+0x000000F8u); // 800E6104
  c->r[3]=0u+0x10620000u; // 800E6108
  c->r[4]=c->r[3]+0x00004DD3u; // 800E610C
  c->r[7]=c->r[7]+0x00005E30u; // 800E6110
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E6114
  c->r[3]=c->r[31]+0xFFFFFBE0u; // 800E6118
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E611C
  c->r[5]=0u+0x00000000u; // 800E6120
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E6124
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E6128
  c->lr=0x800E6130u; f_800C6930(c); // 800E612C
  goto L_800E6150; // 800E6130
L_800E6134:;
  c->r[3]=0u+0x00000027u; // 800E6134
  c->r[4]=0u+0x00000000u; // 800E6138
  c->r[5]=0u+0x00000000u; // 800E613C
  c->lr=0x800E6144u; f_800E3AF0(c); // 800E6140
  c->r[3]=0u+0x800E0000u; // 800E6144
  c->r[3]=c->r[3]+0x00004380u; // 800E6148
  c->lr=0x800E6150u; f_800EAE30(c); // 800E614C
L_800E6150:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6154
  c->lr=c->r[0]; // 800E6158
  c->r[1]=c->r[1]+0x00000010u; // 800E615C
  return; // 800E6160
}

// stateDownRotation
void f_800E6170(Ctx* __restrict c) {
  trace_call(0x800E6170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6170
  c->r[0]=c->lr; // 800E6174
  c->r[3]=0u+0x00000000u; // 800E6178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E617C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6180
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E6184
  c->lr=0x800E618Cu; f_800EBDE0(c); // 800E6188
  c->lr=0x800E6190u; f_800CBAA0(c); // 800E618C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6190
  c->r[31]=c->r[3]|c->r[3]; // 800E6194
  cmpu(c,0,c->r[0],0x00000005u); // 800E6198
  if (crb(c,0)) { goto L_800E61A8; } // 800E619C
  c->r[0]=0u+0x00000000u; // 800E61A0
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E61A4
L_800E61A8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E61A8
  c->r[30]=0u+0x802F0000u; // 800E61AC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E61B0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E61B4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E61B8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E61BC
  c->r[6]=0u+0x00000025u; // 800E61C0
  c->r[4]=0u+0x00000000u; // 800E61C4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E61C8
  c->r[5]=c->r[30]+c->r[5]; // 800E61CC
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E61D0
  c->r[3]=c->r[30]+c->r[3]; // 800E61D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E61D8
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E61DC
  c->r[3]=c->r[30]+c->r[0]; // 800E61E0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E61E4
  c->lr=0x800E61ECu; f_800D0530(c); // 800E61E8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E61EC
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E61F0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E61F4
  c->r[0]=c->r[4]+0x00000001u; // 800E61F8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E61FC
  c->r[4]=c->r[30]+c->r[5]; // 800E6200
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E6204
  c->r[3]=c->r[31]|c->r[31]; // 800E6208
  c->lr=0x800E6210u; f_800CBAE0(c); // 800E620C
  c->r[4]=0u+0x800E0000u; // 800E6210
  c->r[3]=0u+0x00020000u; // 800E6214
  c->r[4]=c->r[4]+0x00006240u; // 800E6218
  c->lr=0x800E6220u; f_800EB470(c); // 800E621C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6224
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E6228
  c->lr=c->r[0]; // 800E622C
  c->r[1]=c->r[1]+0x00000010u; // 800E6230
  return; // 800E6234
}

// cbForStateDownRotation
void f_800E6240(Ctx* __restrict c) {
  trace_call(0x800E6240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6240
  c->r[0]=c->lr; // 800E6244
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E624C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E6250
  c->r[30]=c->r[3]|c->r[3]; // 800E6254
  c->lr=0x800E625Cu; f_800CBAA0(c); // 800E6258
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E625C
  cmps(c,0,(int32_t)c->r[0],0); // 800E6260
  if (!crb(c,2)) { goto L_800E6278; } // 800E6264
  c->r[4]=0u+0x802F0000u; // 800E6268
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E626C
  W32(c->r[4]+0x00000078u,c->r[30]); // 800E6270
  goto L_800E6294; // 800E6274
L_800E6278:;
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E6278
  c->r[5]=0u+0x802F0000u; // 800E627C
  c->r[5]=c->r[5]+0xFFFFFE00u; // 800E6280
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E6284
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6288
  c->r[4]=c->r[5]+c->r[0]; // 800E628C
  W32(c->r[4]+0x00000028u,c->r[30]); // 800E6290
L_800E6294:;
  c->lr=0x800E6298u; f_800CBAE0(c); // 800E6294
  cmpu(c,0,c->r[30],0x00000010u); // 800E6298
  if (!crb(c,2)) { goto L_800E62B8; } // 800E629C
  c->r[3]=0u+0x01230000u; // 800E62A0
  c->r[4]=0u+0x800E0000u; // 800E62A4
  c->r[3]=c->r[3]+0x00004568u; // 800E62A8
  c->r[4]=c->r[4]+0x00004170u; // 800E62AC
  c->lr=0x800E62B4u; f_800E9350(c); // 800E62B0
  goto L_800E6468; // 800E62B4
L_800E62B8:;
  cmpu(c,0,c->r[30],0x00000020u); // 800E62B8
  if (!crb(c,2)) { goto L_800E62D8; } // 800E62BC
  c->r[3]=0u+0x01230000u; // 800E62C0
  c->r[4]=0u+0x800E0000u; // 800E62C4
  c->r[3]=c->r[3]+0x00004569u; // 800E62C8
  c->r[4]=c->r[4]+0x00004170u; // 800E62CC
  c->lr=0x800E62D4u; f_800E9350(c); // 800E62D0
  goto L_800E6468; // 800E62D4
L_800E62D8:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800E62D8
  if (crb(c,2)) { goto L_800E644C; } // 800E62DC
  c->r[3]=0u+0x802F0000u; // 800E62E0
  c->r[4]=0u+0x00000020u; // 800E62E4
  c->r[3]=c->r[3]+0xFFFFFB80u; // 800E62E8
  c->lr=0x800E62F0u; f_800C7750(c); // 800E62EC
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E62F0
  c->r[3]=0u+0x800E0000u; // 800E62F4
  c->r[3]=c->r[3]+0x00006480u; // 800E62F8
  W32(c->r[13]+0xFFFFA7B4u,c->r[3]); // 800E62FC
  cmpu(c,0,c->r[0],0x00000028u); // 800E6300
  if (!crb(c,2)) { goto L_800E63A4; } // 800E6304
  c->r[4]=0u+0x00000000u; // 800E6308
  W32(c->r[13]+0xFFFFA738u,c->r[4]); // 800E630C
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E6310
  cmps(c,0,(int32_t)c->r[0],0); // 800E6314
  if (crb(c,2)) { goto L_800E6380; } // 800E6318
  c->r[30]=R32(c->r[13]+0xFFFFA7B0u); // 800E631C
  c->r[3]=0u+0x802F0000u; // 800E6320
  W32(c->r[13]+0xFFFFA734u,c->r[4]); // 800E6324
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E6328
  c->r[0]=0u+0x0000000Au; // 800E632C
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E6330
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E6334
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800E6338
  c->r[12]=R32(c->r[30]+0x00000028u); // 800E633C
  cmps(c,0,(int32_t)c->r[12],0); // 800E6340
  if (crb(c,2)) { goto L_800E6358; } // 800E6344
  c->r[4]=c->r[30]|c->r[30]; // 800E6348
  c->r[3]=0u+0xFFFFFFFDu; // 800E634C
  c->ctr=c->r[12]; // 800E6350
  if (true) { c->lr=0x800E6358u; dispatch(c,c->ctr); } // 800E6354
L_800E6358:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E6358
  cmps(c,0,(int32_t)c->r[12],0); // 800E635C
  if (crb(c,2)) { goto L_800E6374; } // 800E6360
  c->r[4]=c->r[30]|c->r[30]; // 800E6364
  c->r[3]=0u+0x00000000u; // 800E6368
  c->ctr=c->r[12]; // 800E636C
  if (true) { c->lr=0x800E6374u; dispatch(c,c->ctr); } // 800E6370
L_800E6374:;
  c->lr=0x800E6378u; f_800E68A0(c); // 800E6374
  c->r[0]=0u+0x00000001u; // 800E6378
  goto L_800E6384; // 800E637C
L_800E6380:;
  c->r[0]=0u+0x00000000u; // 800E6380
L_800E6384:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E6384
  if (!crb(c,2)) { goto L_800E6468; } // 800E6388
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E638C
  c->r[0]=0u+0x00000001u; // 800E6390
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6394
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6398
  c->lr=0x800E63A0u; f_800E6BC0(c); // 800E639C
  goto L_800E6468; // 800E63A0
L_800E63A4:;
  c->r[3]=0u+0x00000000u; // 800E63A4
  c->lr=0x800E63ACu; f_800EBDE0(c); // 800E63A8
  c->lr=0x800E63B0u; f_800CBAA0(c); // 800E63AC
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E63B0
  c->r[31]=c->r[3]|c->r[3]; // 800E63B4
  cmpu(c,0,c->r[0],0x00000005u); // 800E63B8
  if (crb(c,0)) { goto L_800E63C8; } // 800E63BC
  c->r[0]=0u+0x00000000u; // 800E63C0
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E63C4
L_800E63C8:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E63C8
  c->r[30]=0u+0x802F0000u; // 800E63CC
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E63D0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E63D4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E63D8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E63DC
  c->r[7]=0u+0x00000005u; // 800E63E0
  c->r[5]=0u+0x00000000u; // 800E63E4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E63E8
  c->r[4]=0u+0x00000020u; // 800E63EC
  c->r[6]=c->r[30]+c->r[6]; // 800E63F0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800E63F4
  c->r[3]=c->r[30]+c->r[3]; // 800E63F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E63FC
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E6400
  c->r[3]=c->r[30]+c->r[0]; // 800E6404
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E6408
  c->lr=0x800E6410u; f_800D0530(c); // 800E640C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6410
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E6414
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6418
  c->r[0]=c->r[4]+0x00000001u; // 800E641C
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6420
  c->r[4]=c->r[30]+c->r[5]; // 800E6424
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E6428
  c->r[3]=c->r[31]|c->r[31]; // 800E642C
  c->lr=0x800E6434u; f_800CBAE0(c); // 800E6430
  c->r[3]=0u+0x802F0000u; // 800E6434
  c->r[4]=0u+0x800E0000u; // 800E6438
  c->r[3]=c->r[3]+0xFFFFFB80u; // 800E643C
  c->r[4]=c->r[4]+0x00006600u; // 800E6440
  c->lr=0x800E6448u; f_800E9CF0(c); // 800E6444
  goto L_800E6468; // 800E6448
L_800E644C:;
  c->r[3]=0u+0x00000027u; // 800E644C
  c->r[4]=0u+0x00000000u; // 800E6450
  c->r[5]=0u+0x00000000u; // 800E6454
  c->lr=0x800E645Cu; f_800E3AF0(c); // 800E6458
  c->r[3]=0u+0x800E0000u; // 800E645C
  c->r[3]=c->r[3]+0x00004380u; // 800E6460
  c->lr=0x800E6468u; f_800EAE30(c); // 800E6464
L_800E6468:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6468
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E646C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E6470
  c->lr=c->r[0]; // 800E6474
  c->r[1]=c->r[1]+0x00000010u; // 800E6478
  return; // 800E647C
}

// stateCoverClosed_CMD
void f_800E6480(Ctx* __restrict c) {
  trace_call(0x800E6480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6480
  c->r[0]=c->lr; // 800E6484
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E648C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E6490
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E6494
  cmpu(c,0,c->r[0],0x00000028u); // 800E6498
  if (!crb(c,2)) { goto L_800E653C; } // 800E649C
  c->r[4]=0u+0x00000000u; // 800E64A0
  W32(c->r[13]+0xFFFFA738u,c->r[4]); // 800E64A4
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E64A8
  cmps(c,0,(int32_t)c->r[0],0); // 800E64AC
  if (crb(c,2)) { goto L_800E6518; } // 800E64B0
  c->r[30]=R32(c->r[13]+0xFFFFA7B0u); // 800E64B4
  c->r[3]=0u+0x802F0000u; // 800E64B8
  W32(c->r[13]+0xFFFFA734u,c->r[4]); // 800E64BC
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E64C0
  c->r[0]=0u+0x0000000Au; // 800E64C4
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E64C8
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E64CC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800E64D0
  c->r[12]=R32(c->r[30]+0x00000028u); // 800E64D4
  cmps(c,0,(int32_t)c->r[12],0); // 800E64D8
  if (crb(c,2)) { goto L_800E64F0; } // 800E64DC
  c->r[4]=c->r[30]|c->r[30]; // 800E64E0
  c->r[3]=0u+0xFFFFFFFDu; // 800E64E4
  c->ctr=c->r[12]; // 800E64E8
  if (true) { c->lr=0x800E64F0u; dispatch(c,c->ctr); } // 800E64EC
L_800E64F0:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E64F0
  cmps(c,0,(int32_t)c->r[12],0); // 800E64F4
  if (crb(c,2)) { goto L_800E650C; } // 800E64F8
  c->r[4]=c->r[30]|c->r[30]; // 800E64FC
  c->r[3]=0u+0x00000000u; // 800E6500
  c->ctr=c->r[12]; // 800E6504
  if (true) { c->lr=0x800E650Cu; dispatch(c,c->ctr); } // 800E6508
L_800E650C:;
  c->lr=0x800E6510u; f_800E68A0(c); // 800E650C
  c->r[0]=0u+0x00000001u; // 800E6510
  goto L_800E651C; // 800E6514
L_800E6518:;
  c->r[0]=0u+0x00000000u; // 800E6518
L_800E651C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E651C
  if (!crb(c,2)) { goto L_800E65E0; } // 800E6520
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6524
  c->r[0]=0u+0x00000001u; // 800E6528
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E652C
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6530
  c->lr=0x800E6538u; f_800E6BC0(c); // 800E6534
  goto L_800E65E0; // 800E6538
L_800E653C:;
  c->r[3]=0u+0x00000000u; // 800E653C
  c->lr=0x800E6544u; f_800EBDE0(c); // 800E6540
  c->lr=0x800E6548u; f_800CBAA0(c); // 800E6544
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6548
  c->r[31]=c->r[3]|c->r[3]; // 800E654C
  cmpu(c,0,c->r[0],0x00000005u); // 800E6550
  if (crb(c,0)) { goto L_800E6560; } // 800E6554
  c->r[0]=0u+0x00000000u; // 800E6558
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E655C
L_800E6560:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6560
  c->r[30]=0u+0x802F0000u; // 800E6564
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E6568
  c->r[30]=c->r[30]+0xFFFFFE00u; // 800E656C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6570
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6574
  c->r[7]=0u+0x00000005u; // 800E6578
  c->r[5]=0u+0x00000000u; // 800E657C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E6580
  c->r[4]=0u+0x00000020u; // 800E6584
  c->r[6]=c->r[30]+c->r[6]; // 800E6588
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800E658C
  c->r[3]=c->r[30]+c->r[3]; // 800E6590
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6594
  W32(c->r[3]+0x00000020u,c->r[5]); // 800E6598
  c->r[3]=c->r[30]+c->r[0]; // 800E659C
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E65A0
  c->lr=0x800E65A8u; f_800D0530(c); // 800E65A4
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E65A8
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E65AC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E65B0
  c->r[0]=c->r[4]+0x00000001u; // 800E65B4
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E65B8
  c->r[4]=c->r[30]+c->r[5]; // 800E65BC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E65C0
  c->r[3]=c->r[31]|c->r[31]; // 800E65C4
  c->lr=0x800E65CCu; f_800CBAE0(c); // 800E65C8
  c->r[3]=0u+0x802F0000u; // 800E65CC
  c->r[4]=0u+0x800E0000u; // 800E65D0
  c->r[3]=c->r[3]+0xFFFFFB80u; // 800E65D4
  c->r[4]=c->r[4]+0x00006600u; // 800E65D8
  c->lr=0x800E65E0u; f_800E9CF0(c); // 800E65DC
L_800E65E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E65E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E65E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E65E8
  c->lr=c->r[0]; // 800E65EC
  c->r[1]=c->r[1]+0x00000010u; // 800E65F0
  return; // 800E65F4
}

// cbForStateCoverClosed
void f_800E6600(Ctx* __restrict c) {
  trace_call(0x800E6600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6600
  c->r[0]=c->lr; // 800E6604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E660C
  c->r[31]=c->r[3]|c->r[3]; // 800E6610
  c->lr=0x800E6618u; f_800CBAA0(c); // 800E6614
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6618
  cmps(c,0,(int32_t)c->r[0],0); // 800E661C
  if (!crb(c,2)) { goto L_800E6634; } // 800E6620
  c->r[4]=0u+0x802F0000u; // 800E6624
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E6628
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E662C
  goto L_800E664C; // 800E6630
L_800E6634:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6634
  c->r[4]=0u+0x802F0000u; // 800E6638
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E663C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6640
  c->r[4]=c->r[4]+c->r[0]; // 800E6644
  W32(c->r[4]+0x00000014u,c->r[31]); // 800E6648
L_800E664C:;
  c->lr=0x800E6650u; f_800CBAE0(c); // 800E664C
  cmpu(c,0,c->r[31],0x00000010u); // 800E6650
  if (!crb(c,2)) { goto L_800E6670; } // 800E6654
  c->r[3]=0u+0x01230000u; // 800E6658
  c->r[4]=0u+0x800E0000u; // 800E665C
  c->r[3]=c->r[3]+0x00004568u; // 800E6660
  c->r[4]=c->r[4]+0x00004170u; // 800E6664
  c->lr=0x800E666Cu; f_800E9350(c); // 800E6668
  goto L_800E66C4; // 800E666C
L_800E6670:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E6670
  if (!crb(c,2)) { goto L_800E6690; } // 800E6674
  c->r[3]=0u+0x01230000u; // 800E6678
  c->r[4]=0u+0x800E0000u; // 800E667C
  c->r[3]=c->r[3]+0x00004569u; // 800E6680
  c->r[4]=c->r[4]+0x00004170u; // 800E6684
  c->lr=0x800E668Cu; f_800E9350(c); // 800E6688
  goto L_800E66C4; // 800E668C
L_800E6690:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800E6690
  if (crb(c,2)) { goto L_800E66A8; } // 800E6694
  c->r[0]=0u+0x00000000u; // 800E6698
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E669C
  c->lr=0x800E66A4u; f_800E4D90(c); // 800E66A0
  goto L_800E66C4; // 800E66A4
L_800E66A8:;
  c->r[3]=0u+0x00000027u; // 800E66A8
  c->r[4]=0u+0x00000000u; // 800E66AC
  c->r[5]=0u+0x00000000u; // 800E66B0
  c->lr=0x800E66B8u; f_800E3AF0(c); // 800E66B4
  c->r[3]=0u+0x800E0000u; // 800E66B8
  c->r[3]=c->r[3]+0x00004380u; // 800E66BC
  c->lr=0x800E66C4u; f_800EAE30(c); // 800E66C0
L_800E66C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E66C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E66C8
  c->lr=c->r[0]; // 800E66CC
  c->r[1]=c->r[1]+0x00000010u; // 800E66D0
  return; // 800E66D4
}

// cbForPrepareCoverRegister
void f_800E66E0(Ctx* __restrict c) {
  trace_call(0x800E66E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E66E0
  c->r[0]=c->lr; // 800E66E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E66E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E66EC
  c->r[31]=0u+0x00000000u; // 800E66F0
  W32(c->r[13]+0xFFFFA754u,c->r[31]); // 800E66F4
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E66F8
  cmps(c,0,(int32_t)c->r[0],0); // 800E66FC
  if (crb(c,2)) { goto L_800E6788; } // 800E6700
  c->lr=0x800E6708u; f_800EB930(c); // 800E6704
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E6708
  if (!crb(c,2)) { goto L_800E6854; } // 800E670C
  c->r[3]=0u+0x802F0000u; // 800E6710
  c->r[3]=c->r[3]+0xFFFFFB40u; // 800E6714
  c->lr=0x800E671Cu; f_800C6A30(c); // 800E6718
  W32(c->r[13]+0xFFFFA748u,c->r[31]); // 800E671C
  W32(c->r[13]+0xFFFFA748u,c->r[31]); // 800E6720
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E6724
  cmpu(c,0,c->r[0],0x00000003u); // 800E6728
  if (!crb(c,2)) { goto L_800E6738; } // 800E672C
  c->r[0]=0u+0x00000001u; // 800E6730
  W32(c->r[13]+0xFFFFA750u,c->r[0]); // 800E6734
L_800E6738:;
  c->r[0]=R32(c->r[13]+0xFFFFA790u); // 800E6738
  cmpu(c,0,c->r[0],0x00000002u); // 800E673C
  if (!crb(c,2)) { goto L_800E675C; } // 800E6740
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6744
  cmps(c,0,(int32_t)c->r[3],0); // 800E6748
  if (crb(c,2)) { goto L_800E6854; } // 800E674C
  c->r[0]=0u+0x0000000Cu; // 800E6750
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6754
  goto L_800E6854; // 800E6758
L_800E675C:;
  c->lr=0x800E6760u; f_800EBDD0(c); // 800E675C
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6760
  cmps(c,0,(int32_t)c->r[3],0); // 800E6764
  if (crb(c,2)) { goto L_800E677C; } // 800E6768
  c->r[0]=0u+0x00000003u; // 800E676C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6770
  c->lr=0x800E6778u; f_800E5D60(c); // 800E6774
  goto L_800E6854; // 800E6778
L_800E677C:;
  c->r[0]=0u+0x00000007u; // 800E677C
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E6780
  goto L_800E6854; // 800E6784
L_800E6788:;
  c->lr=0x800E678Cu; f_800EB930(c); // 800E6788
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E678C
  if (crb(c,2)) { goto L_800E67CC; } // 800E6790
  c->r[0]=R32(c->r[13]+0xFFFFA790u); // 800E6794
  c->r[3]=0u+0x00000001u; // 800E6798
  W32(c->r[13]+0xFFFFA744u,c->r[31]); // 800E679C
  cmpu(c,0,c->r[0],0x00000002u); // 800E67A0
  W32(c->r[13]+0xFFFFA748u,c->r[3]); // 800E67A4
  if (!crb(c,2)) { goto L_800E67BC; } // 800E67A8
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E67AC
  c->r[0]=0u+0x0000000Cu; // 800E67B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E67B4
  goto L_800E6854; // 800E67B8
L_800E67BC:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E67BC
  c->r[0]=0u+0x00000005u; // 800E67C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E67C4
  goto L_800E6854; // 800E67C8
L_800E67CC:;
  c->lr=0x800E67D0u; f_800EB930(c); // 800E67CC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800E67D0
  if (crb(c,2)) { goto L_800E6854; } // 800E67D4
  c->r[3]=0u+0x802F0000u; // 800E67D8
  c->r[3]=c->r[3]+0xFFFFFB40u; // 800E67DC
  c->lr=0x800E67E4u; f_800C6A30(c); // 800E67E0
  W32(c->r[13]+0xFFFFA744u,c->r[31]); // 800E67E4
  c->r[3]=0u+0x00000000u; // 800E67E8
  c->lr=0x800E67F0u; f_800EBDE0(c); // 800E67EC
  W32(c->r[13]+0xFFFFA748u,c->r[31]); // 800E67F0
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E67F4
  cmpu(c,0,c->r[0],0x00000003u); // 800E67F8
  if (!crb(c,2)) { goto L_800E6808; } // 800E67FC
  c->r[0]=0u+0x00000001u; // 800E6800
  W32(c->r[13]+0xFFFFA750u,c->r[0]); // 800E6804
L_800E6808:;
  c->r[0]=R32(c->r[13]+0xFFFFA790u); // 800E6808
  cmpu(c,0,c->r[0],0x00000002u); // 800E680C
  if (!crb(c,2)) { goto L_800E682C; } // 800E6810
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6814
  cmps(c,0,(int32_t)c->r[3],0); // 800E6818
  if (crb(c,2)) { goto L_800E6854; } // 800E681C
  c->r[0]=0u+0x0000000Cu; // 800E6820
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6824
  goto L_800E6854; // 800E6828
L_800E682C:;
  c->lr=0x800E6830u; f_800EBDD0(c); // 800E682C
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6830
  cmps(c,0,(int32_t)c->r[3],0); // 800E6834
  if (crb(c,2)) { goto L_800E684C; } // 800E6838
  c->r[0]=0u+0x00000003u; // 800E683C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6840
  c->lr=0x800E6848u; f_800E5D60(c); // 800E6844
  goto L_800E6854; // 800E6848
L_800E684C:;
  c->r[0]=0u+0x00000007u; // 800E684C
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E6850
L_800E6854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6858
  c->lr=c->r[0]; // 800E685C
  c->r[1]=c->r[1]+0x00000010u; // 800E6860
  return; // 800E6864
}

// CoverAlarmHandler
void f_800E6870(Ctx* __restrict c) {
  trace_call(0x800E6870u);
  c->r[0]=R32(c->r[13]+0xFFFFA754u); // 800E6870
  cmps(c,0,(int32_t)c->r[0],0); // 800E6874
  if (!crb(c,2)) return; // 800E6878
  c->r[0]=0u+0x00000001u; // 800E687C
  c->r[3]=0u+0x800E0000u; // 800E6880
  W32(c->r[13]+0xFFFFA754u,c->r[0]); // 800E6884
  c->r[3]=c->r[3]+0x000066E0u; // 800E6888
  f_800EB960(c); return; // 800E688C
  return; // 800E6890
}

// stateReady
void f_800E68A0(Ctx* __restrict c) {
  trace_call(0x800E68A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E68A0
  c->r[0]=c->lr; // 800E68A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E68A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E68AC
  c->r[0]=R32(c->r[13]+0xFFFFA724u); // 800E68B0
  cmps(c,0,(int32_t)c->r[0],0); // 800E68B4
  if (crb(c,2)) { goto L_800E68D0; } // 800E68B8
  c->r[3]=0u+0x00000001u; // 800E68BC
  c->r[0]=0u+0x00000000u; // 800E68C0
  W32(c->r[13]+0xFFFFA728u,c->r[3]); // 800E68C4
  W32(c->r[13]+0xFFFFA7B0u,c->r[0]); // 800E68C8
  goto L_800E6BA8; // 800E68CC
L_800E68D0:;
  c->lr=0x800E68D4u; f_800E8870(c); // 800E68D0
  cmps(c,0,(int32_t)c->r[3],0); // 800E68D4
  if (!crb(c,2)) { goto L_800E68E8; } // 800E68D8
  c->r[0]=0u+0x00000000u; // 800E68DC
  W32(c->r[13]+0xFFFFA7B0u,c->r[0]); // 800E68E0
  goto L_800E6BA8; // 800E68E4
L_800E68E8:;
  c->lr=0x800E68ECu; f_800E87D0(c); // 800E68E8
  c->r[0]=R32(c->r[13]+0xFFFFA72Cu); // 800E68EC
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E68F0
  cmps(c,0,(int32_t)c->r[0],0); // 800E68F4
  if (crb(c,2)) { goto L_800E6934; } // 800E68F8
  c->r[0]=0u+0xFFFFFFFFu; // 800E68FC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6900
  c->r[3]=0u+0x802F0000u; // 800E6904
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E6908
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E690C
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E6910
  c->r[12]=R32(c->r[4]+0x00000028u); // 800E6914
  cmps(c,0,(int32_t)c->r[12],0); // 800E6918
  if (crb(c,2)) { goto L_800E692C; } // 800E691C
  c->r[3]=0u+0xFFFFFFFFu; // 800E6920
  c->ctr=c->r[12]; // 800E6924
  if (true) { c->lr=0x800E692Cu; dispatch(c,c->ctr); } // 800E6928
L_800E692C:;
  c->lr=0x800E6930u; f_800E68A0(c); // 800E692C
  goto L_800E6BA8; // 800E6930
L_800E6934:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E6934
  W32(c->r[13]+0xFFFFA7A4u,c->r[0]); // 800E6938
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E693C
  cmpu(c,0,c->r[0],0x00000020u); // 800E6940
  if (crb(c,2)) { goto L_800E6960; } // 800E6944
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E6948
  cmpu(c,0,c->r[0],0x0000000Eu); // 800E694C
  if (crb(c,2)) { goto L_800E6960; } // 800E6950
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E6954
  cmpu(c,0,c->r[0],0x00000023u); // 800E6958
  if (!crb(c,2)) { goto L_800E6968; } // 800E695C
L_800E6960:;
  c->r[0]=0u+0x00000000u; // 800E6960
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E6964
L_800E6968:;
  c->r[0]=R32(c->r[13]+0xFFFFA734u); // 800E6968
  cmps(c,0,(int32_t)c->r[0],0); // 800E696C
  if (crb(c,2)) { goto L_800E6B50; } // 800E6970
  c->r[4]=R32(c->r[13]+0xFFFFA734u); // 800E6974
  c->r[0]=c->r[4]+0xFFFFFFFAu; // 800E6978
  cmpu(c,0,c->r[0],0x00000001u); // 800E697C
  if (!crb(c,1)) { goto L_800E6B24; } // 800E6980
  cmpu(c,0,c->r[4],0x00000002u); // 800E6984
  if (crb(c,2)) { goto L_800E69B0; } // 800E6988
  cmpu(c,0,c->r[4],0x00000003u); // 800E698C
  if (crb(c,2)) { goto L_800E6A2C; } // 800E6990
  cmpu(c,0,c->r[4],0x00000004u); // 800E6994
  if (crb(c,2)) { goto L_800E6AA8; } // 800E6998
  cmpu(c,0,c->r[4],0x00000001u); // 800E699C
  if (crb(c,2)) { goto L_800E6B24; } // 800E69A0
  cmpu(c,0,c->r[4],0x00000005u); // 800E69A4
  if (crb(c,2)) { goto L_800E6B34; } // 800E69A8
  goto L_800E6B44; // 800E69AC
L_800E69B0:;
  c->r[0]=0u+0x0000000Bu; // 800E69B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E69B4
  c->r[3]=0u+0x00000001u; // 800E69B8
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E69BC
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E69C0
  cmps(c,0,(int32_t)c->r[0],0); // 800E69C4
  if (!crb(c,2)) { goto L_800E6B44; } // 800E69C8
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E69CC
  cmps(c,0,(int32_t)c->r[0],0); // 800E69D0
  if (!crb(c,2)) { goto L_800E6B44; } // 800E69D4
  c->r[31]=0u+0x802F0000u; // 800E69D8
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E69DC
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E69E0
  c->lr=0x800E69E8u; f_800C66D0(c); // 800E69E4
  c->lr=0x800E69ECu; f_800D0530(c); // 800E69E8
  c->r[5]=0u+0x80000000u; // 800E69EC
  c->r[4]=0u+0x10620000u; // 800E69F0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E69F4
  c->r[9]=0u+0x800E0000u; // 800E69F8
  c->r[6]=c->r[3]|c->r[3]; // 800E69FC
  c->r[4]=c->r[4]+0x00004DD3u; // 800E6A00
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E6A04
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E6A08
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E6A0C
  c->r[9]=c->r[9]+0x00006870u; // 800E6A10
  c->r[5]=0u+0x00000000u; // 800E6A14
  c->r[7]=0u+0x00000000u; // 800E6A18
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E6A1C
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E6A20
  c->lr=0x800E6A28u; f_800C69A0(c); // 800E6A24
  goto L_800E6B44; // 800E6A28
L_800E6A2C:;
  c->r[0]=0u+0x00000004u; // 800E6A2C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6A30
  c->r[3]=0u+0x00000001u; // 800E6A34
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E6A38
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E6A3C
  cmps(c,0,(int32_t)c->r[0],0); // 800E6A40
  if (!crb(c,2)) { goto L_800E6B44; } // 800E6A44
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E6A48
  cmps(c,0,(int32_t)c->r[0],0); // 800E6A4C
  if (!crb(c,2)) { goto L_800E6B44; } // 800E6A50
  c->r[31]=0u+0x802F0000u; // 800E6A54
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E6A58
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E6A5C
  c->lr=0x800E6A64u; f_800C66D0(c); // 800E6A60
  c->lr=0x800E6A68u; f_800D0530(c); // 800E6A64
  c->r[5]=0u+0x80000000u; // 800E6A68
  c->r[4]=0u+0x10620000u; // 800E6A6C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E6A70
  c->r[9]=0u+0x800E0000u; // 800E6A74
  c->r[6]=c->r[3]|c->r[3]; // 800E6A78
  c->r[4]=c->r[4]+0x00004DD3u; // 800E6A7C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E6A80
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E6A84
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E6A88
  c->r[9]=c->r[9]+0x00006870u; // 800E6A8C
  c->r[5]=0u+0x00000000u; // 800E6A90
  c->r[7]=0u+0x00000000u; // 800E6A94
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E6A98
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E6A9C
  c->lr=0x800E6AA4u; f_800C69A0(c); // 800E6AA0
  goto L_800E6B44; // 800E6AA4
L_800E6AA8:;
  c->r[0]=0u+0x00000005u; // 800E6AA8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6AAC
  c->r[3]=0u+0x00000001u; // 800E6AB0
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E6AB4
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E6AB8
  cmps(c,0,(int32_t)c->r[0],0); // 800E6ABC
  if (!crb(c,2)) { goto L_800E6B44; } // 800E6AC0
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E6AC4
  cmps(c,0,(int32_t)c->r[0],0); // 800E6AC8
  if (!crb(c,2)) { goto L_800E6B44; } // 800E6ACC
  c->r[31]=0u+0x802F0000u; // 800E6AD0
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E6AD4
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E6AD8
  c->lr=0x800E6AE0u; f_800C66D0(c); // 800E6ADC
  c->lr=0x800E6AE4u; f_800D0530(c); // 800E6AE0
  c->r[5]=0u+0x80000000u; // 800E6AE4
  c->r[4]=0u+0x10620000u; // 800E6AE8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E6AEC
  c->r[9]=0u+0x800E0000u; // 800E6AF0
  c->r[6]=c->r[3]|c->r[3]; // 800E6AF4
  c->r[4]=c->r[4]+0x00004DD3u; // 800E6AF8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E6AFC
  c->r[3]=c->r[31]+0xFFFFFB40u; // 800E6B00
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E6B04
  c->r[9]=c->r[9]+0x00006870u; // 800E6B08
  c->r[5]=0u+0x00000000u; // 800E6B0C
  c->r[7]=0u+0x00000000u; // 800E6B10
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E6B14
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E6B18
  c->lr=0x800E6B20u; f_800C69A0(c); // 800E6B1C
  goto L_800E6B44; // 800E6B20
L_800E6B24:;
  c->r[0]=0u+0x00000003u; // 800E6B24
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6B28
  c->lr=0x800E6B30u; f_800E5D60(c); // 800E6B2C
  goto L_800E6B44; // 800E6B30
L_800E6B34:;
  c->r[4]=0u+0x800E0000u; // 800E6B34
  c->r[3]=R32(c->r[13]+0xFFFFA79Cu); // 800E6B38
  c->r[4]=c->r[4]+0x00004150u; // 800E6B3C
  c->lr=0x800E6B44u; f_800E9350(c); // 800E6B40
L_800E6B44:;
  c->r[0]=0u+0x00000000u; // 800E6B44
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E6B48
  goto L_800E6BA8; // 800E6B4C
L_800E6B50:;
  c->r[0]=R32(c->r[13]+0xFFFFA790u); // 800E6B50
  cmpu(c,0,c->r[0],0x00000002u); // 800E6B54
  if (crb(c,2)) { goto L_800E6B68; } // 800E6B58
  cmps(c,0,(int32_t)c->r[0],0); // 800E6B5C
  if (crb(c,2)) { goto L_800E6B90; } // 800E6B60
  goto L_800E6BA4; // 800E6B64
L_800E6B68:;
  c->r[0]=R32(c->r[13]+0xFFFFA74Cu); // 800E6B68
  cmps(c,0,(int32_t)c->r[0],0); // 800E6B6C
  if (crb(c,2)) { goto L_800E6B80; } // 800E6B70
  c->r[0]=0u+0x0000000Cu; // 800E6B74
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6B78
  goto L_800E6BA8; // 800E6B7C
L_800E6B80:;
  c->r[0]=0u+0x00000003u; // 800E6B80
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6B84
  c->lr=0x800E6B8Cu; f_800E5D60(c); // 800E6B88
  goto L_800E6BA8; // 800E6B8C
L_800E6B90:;
  c->r[0]=0u+0x00000001u; // 800E6B90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6B94
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E6B98
  c->lr=0x800E6BA0u; f_800E6BC0(c); // 800E6B9C
  goto L_800E6BA8; // 800E6BA0
L_800E6BA4:;
  c->lr=0x800E6BA8u; f_800E5D60(c); // 800E6BA4
L_800E6BA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6BA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6BAC
  c->lr=c->r[0]; // 800E6BB0
  c->r[1]=c->r[1]+0x00000010u; // 800E6BB4
  return; // 800E6BB8
}

// stateBusy
void f_800E6BC0(Ctx* __restrict c) {
  trace_call(0x800E6BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6BC0
  c->r[0]=c->lr; // 800E6BC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E6BC8
  c->r[11]=c->r[1]+0x00000030u; // 800E6BCC
  c->lr=0x800E6BD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E6BD0
  c->r[4]=0u+0x800E0000u; // 800E6BD4
  c->r[29]=c->r[3]|c->r[3]; // 800E6BD8
  c->r[4]=c->r[4]+0x00006BC0u; // 800E6BDC
  W32(c->r[13]+0xFFFFA7B4u,c->r[4]); // 800E6BE0
  c->r[30]=R32(c->r[3]+0x00000008u); // 800E6BE4
  cmpu(c,0,c->r[30],0x0000002Au); // 800E6BE8
  if (crb(c,1)) { goto L_800E6C8C; } // 800E6BEC
  c->r[4]=0u+0x802B0000u; // 800E6BF0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800E6BF4
  c->r[4]=c->r[4]+0xFFFFF9CCu; // 800E6BF8
  c->r[4]=R32(c->r[4]+c->r[0]); // 800E6BFC
  c->ctr=c->r[4]; // 800E6C00
  if (true) { switch (c->ctr) { case 0x800E6C08u: goto L_800E6C08; case 0x800E6C8Cu: goto L_800E6C8C; case 0x800E6CB0u: goto L_800E6CB0; case 0x800E6CD4u: goto L_800E6CD4; case 0x800E6DFCu: goto L_800E6DFC; case 0x800E6E18u: goto L_800E6E18; case 0x800E6E30u: goto L_800E6E30; case 0x800E6E48u: goto L_800E6E48; case 0x800E6E68u: goto L_800E6E68; case 0x800E6E8Cu: goto L_800E6E8C; case 0x800E6EACu: goto L_800E6EAC; case 0x800E6EC4u: goto L_800E6EC4; case 0x800E6FECu: goto L_800E6FEC; case 0x800E7018u: goto L_800E7018; case 0x800E7030u: goto L_800E7030; case 0x800E7040u: goto L_800E7040; case 0x800E7050u: goto L_800E7050; case 0x800E706Cu: goto L_800E706C; case 0x800E7098u: goto L_800E7098; case 0x800E710Cu: goto L_800E710C; case 0x800E7140u: goto L_800E7140; default: break; } dispatch(c,c->ctr); return; } // 800E6C04
L_800E6C08:;
  c->r[26]=R32(c->r[3]+0x00000014u); // 800E6C08
  c->r[27]=R32(c->r[3]+0x00000010u); // 800E6C0C
  c->lr=0x800E6C14u; f_800CBAA0(c); // 800E6C10
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6C14
  c->r[31]=c->r[3]|c->r[3]; // 800E6C18
  cmpu(c,0,c->r[0],0x00000005u); // 800E6C1C
  if (crb(c,0)) { goto L_800E6C2C; } // 800E6C20
  c->r[0]=0u+0x00000000u; // 800E6C24
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6C28
L_800E6C2C:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6C2C
  c->r[28]=0u+0x802F0000u; // 800E6C30
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E6C34
  c->r[28]=c->r[28]+0xFFFFFE00u; // 800E6C38
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6C3C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6C40
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E6C44
  c->r[4]=c->r[28]+c->r[4]; // 800E6C48
  W32(c->r[4]+0x0000001Cu,c->r[30]); // 800E6C4C
  c->r[3]=c->r[28]+c->r[3]; // 800E6C50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6C54
  W32(c->r[3]+0x00000020u,c->r[27]); // 800E6C58
  c->r[3]=c->r[28]+c->r[0]; // 800E6C5C
  W32(c->r[3]+0x00000024u,c->r[26]); // 800E6C60
  c->lr=0x800E6C68u; f_800D0530(c); // 800E6C64
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6C68
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E6C6C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6C70
  c->r[0]=c->r[4]+0x00000001u; // 800E6C74
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6C78
  c->r[4]=c->r[28]+c->r[5]; // 800E6C7C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E6C80
  c->r[3]=c->r[31]|c->r[31]; // 800E6C84
  c->lr=0x800E6C8Cu; f_800CBAE0(c); // 800E6C88
L_800E6C8C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800E6C8C
  cmpu(c,0,c->r[0],0x0000002Au); // 800E6C90
  if (crb(c,1)) { goto L_800E7140; } // 800E6C94
  c->r[3]=0u+0x802B0000u; // 800E6C98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E6C9C
  c->r[3]=c->r[3]+0xFFFFF920u; // 800E6CA0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E6CA4
  c->ctr=c->r[3]; // 800E6CA8
  if (true) { switch (c->ctr) { case 0x800E6C08u: goto L_800E6C08; case 0x800E6C8Cu: goto L_800E6C8C; case 0x800E6CB0u: goto L_800E6CB0; case 0x800E6CD4u: goto L_800E6CD4; case 0x800E6DFCu: goto L_800E6DFC; case 0x800E6E18u: goto L_800E6E18; case 0x800E6E30u: goto L_800E6E30; case 0x800E6E48u: goto L_800E6E48; case 0x800E6E68u: goto L_800E6E68; case 0x800E6E8Cu: goto L_800E6E8C; case 0x800E6EACu: goto L_800E6EAC; case 0x800E6EC4u: goto L_800E6EC4; case 0x800E6FECu: goto L_800E6FEC; case 0x800E7018u: goto L_800E7018; case 0x800E7030u: goto L_800E7030; case 0x800E7040u: goto L_800E7040; case 0x800E7050u: goto L_800E7050; case 0x800E706Cu: goto L_800E706C; case 0x800E7098u: goto L_800E7098; case 0x800E710Cu: goto L_800E710C; case 0x800E7140u: goto L_800E7140; default: break; } dispatch(c,c->ctr); return; } // 800E6CAC
L_800E6CB0:;
  c->r[3]=0u+0x00000000u; // 800E6CB0
  c->lr=0x800E6CB8u; f_800EBDE0(c); // 800E6CB4
  c->r[0]=0u+0x00000020u; // 800E6CB8
  c->r[4]=0u+0x800E0000u; // 800E6CBC
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800E6CC0
  c->r[4]=c->r[4]+0x00007170u; // 800E6CC4
  c->r[3]=R32(c->r[29]+0x00000018u); // 800E6CC8
  c->lr=0x800E6CD0u; f_800E9CF0(c); // 800E6CCC
  goto L_800E7158; // 800E6CD0
L_800E6CD4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 800E6CD4
  cmps(c,0,(int32_t)c->r[0],0); // 800E6CD8
  if (!crb(c,2)) { goto L_800E6D18; } // 800E6CDC
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E6CE0
  c->r[3]=0u+0x802F0000u; // 800E6CE4
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E6CE8
  c->r[0]=0u+0x00000000u; // 800E6CEC
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E6CF0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E6CF4
  c->r[12]=R32(c->r[4]+0x00000028u); // 800E6CF8
  cmps(c,0,(int32_t)c->r[12],0); // 800E6CFC
  if (crb(c,2)) { goto L_800E6D10; } // 800E6D00
  c->r[3]=0u+0x00000000u; // 800E6D04
  c->ctr=c->r[12]; // 800E6D08
  if (true) { c->lr=0x800E6D10u; dispatch(c,c->ctr); } // 800E6D0C
L_800E6D10:;
  c->lr=0x800E6D14u; f_800E68A0(c); // 800E6D10
  goto L_800E7158; // 800E6D14
L_800E6D18:;
  c->r[3]=0u+0x00000000u; // 800E6D18
  c->lr=0x800E6D20u; f_800EBDE0(c); // 800E6D1C
  c->r[4]=R32(c->r[29]+0x00000020u); // 800E6D20
  c->r[0]=0u+0x00080000u; // 800E6D24
  c->r[3]=R32(c->r[29]+0x00000014u); // 800E6D28
  c->r[30]=c->r[3]-c->r[4]; // 800E6D2C
  cmpu(c,0,c->r[30],c->r[0]); // 800E6D30
  if (!crb(c,1)) { goto L_800E6D3C; } // 800E6D34
  c->r[30]=0u+0x00080000u; // 800E6D38
L_800E6D3C:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 800E6D3C
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E6D40
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E6D44
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 800E6D48
  c->r[26]=R32(c->r[29]+0x00000008u); // 800E6D4C
  c->r[27]=c->r[3]+c->r[0]; // 800E6D50
  c->lr=0x800E6D58u; f_800CBAA0(c); // 800E6D54
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6D58
  c->r[31]=c->r[3]|c->r[3]; // 800E6D5C
  cmpu(c,0,c->r[0],0x00000005u); // 800E6D60
  if (crb(c,0)) { goto L_800E6D70; } // 800E6D64
  c->r[0]=0u+0x00000000u; // 800E6D68
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6D6C
L_800E6D70:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6D70
  c->r[28]=0u+0x802F0000u; // 800E6D74
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E6D78
  c->r[28]=c->r[28]+0xFFFFFE00u; // 800E6D7C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6D80
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6D84
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E6D88
  c->r[4]=c->r[28]+c->r[4]; // 800E6D8C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 800E6D90
  c->r[3]=c->r[28]+c->r[3]; // 800E6D94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6D98
  W32(c->r[3]+0x00000020u,c->r[27]); // 800E6D9C
  c->r[3]=c->r[28]+c->r[0]; // 800E6DA0
  W32(c->r[3]+0x00000024u,c->r[30]); // 800E6DA4
  c->lr=0x800E6DACu; f_800D0530(c); // 800E6DA8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6DAC
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E6DB0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6DB4
  c->r[0]=c->r[4]+0x00000001u; // 800E6DB8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6DBC
  c->r[4]=c->r[28]+c->r[5]; // 800E6DC0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E6DC4
  c->r[3]=c->r[31]|c->r[31]; // 800E6DC8
  c->lr=0x800E6DD0u; f_800CBAE0(c); // 800E6DCC
  c->r[3]=R32(c->r[29]+0x00000020u); // 800E6DD0
  c->r[6]=0u+0x800E0000u; // 800E6DD4
  c->r[7]=R32(c->r[29]+0x00000018u); // 800E6DD8
  c->r[6]=c->r[6]+0x00007170u; // 800E6DDC
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800E6DE0
  c->r[5]=R32(c->r[29]+0x00000010u); // 800E6DE4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 800E6DE8
  c->r[3]=c->r[7]+c->r[3]; // 800E6DEC
  c->r[5]=c->r[5]+c->r[0]; // 800E6DF0
  c->lr=0x800E6DF8u; f_800EB600(c); // 800E6DF4
  goto L_800E7158; // 800E6DF8
L_800E6DFC:;
  c->r[3]=0u+0x00000000u; // 800E6DFC
  c->lr=0x800E6E04u; f_800EBDE0(c); // 800E6E00
  c->r[4]=0u+0x800E0000u; // 800E6E04
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E6E08
  c->r[4]=c->r[4]+0x00007170u; // 800E6E0C
  c->lr=0x800E6E14u; f_800EB7B0(c); // 800E6E10
  goto L_800E7158; // 800E6E14
L_800E6E18:;
  c->r[5]=0u+0x800E0000u; // 800E6E18
  c->r[3]=0u+0x00000000u; // 800E6E1C
  c->r[5]=c->r[5]+0x00007170u; // 800E6E20
  c->r[4]=0u+0x00000000u; // 800E6E24
  c->lr=0x800E6E2Cu; f_800EAB20(c); // 800E6E28
  goto L_800E7158; // 800E6E2C
L_800E6E30:;
  c->r[5]=0u+0x800E0000u; // 800E6E30
  c->r[3]=0u+0x00000000u; // 800E6E34
  c->r[5]=c->r[5]+0x00007170u; // 800E6E38
  c->r[4]=0u+0x00000000u; // 800E6E3C
  c->lr=0x800E6E44u; f_800EAB20(c); // 800E6E40
  goto L_800E7158; // 800E6E44
L_800E6E48:;
  c->r[3]=0u+0x00000000u; // 800E6E48
  c->lr=0x800E6E50u; f_800EBDE0(c); // 800E6E4C
  c->r[5]=0u+0x800E0000u; // 800E6E50
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E6E54
  c->r[4]=R32(c->r[29]+0x00000014u); // 800E6E58
  c->r[5]=c->r[5]+0x00007170u; // 800E6E5C
  c->lr=0x800E6E64u; f_800EB130(c); // 800E6E60
  goto L_800E7158; // 800E6E64
L_800E6E68:;
  c->r[3]=0u+0x00000000u; // 800E6E68
  c->lr=0x800E6E70u; f_800EBDE0(c); // 800E6E6C
  c->r[0]=0u+0x00000020u; // 800E6E70
  c->r[4]=0u+0x800E0000u; // 800E6E74
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800E6E78
  c->r[4]=c->r[4]+0x00007170u; // 800E6E7C
  c->r[3]=R32(c->r[29]+0x00000018u); // 800E6E80
  c->lr=0x800E6E88u; f_800EACC0(c); // 800E6E84
  goto L_800E7158; // 800E6E88
L_800E6E8C:;
  c->r[3]=0u+0x00000000u; // 800E6E8C
  c->lr=0x800E6E94u; f_800EBDE0(c); // 800E6E90
  c->r[5]=0u+0x800E0000u; // 800E6E94
  c->r[3]=0u+0x00000000u; // 800E6E98
  c->r[5]=c->r[5]+0x00007170u; // 800E6E9C
  c->r[4]=0u+0x00000000u; // 800E6EA0
  c->lr=0x800E6EA8u; f_800EAB20(c); // 800E6EA4
  goto L_800E7158; // 800E6EA8
L_800E6EAC:;
  c->r[3]=0u+0x00000001u; // 800E6EAC
  c->lr=0x800E6EB4u; f_800EAFA0(c); // 800E6EB0
  c->r[3]=0u+0x800E0000u; // 800E6EB4
  c->r[3]=c->r[3]+0x00007170u; // 800E6EB8
  c->lr=0x800E6EC0u; f_800EAFB0(c); // 800E6EBC
  goto L_800E7158; // 800E6EC0
L_800E6EC4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 800E6EC4
  cmps(c,0,(int32_t)c->r[0],0); // 800E6EC8
  if (!crb(c,2)) { goto L_800E6F08; } // 800E6ECC
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E6ED0
  c->r[3]=0u+0x802F0000u; // 800E6ED4
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E6ED8
  c->r[0]=0u+0x00000000u; // 800E6EDC
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E6EE0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E6EE4
  c->r[12]=R32(c->r[4]+0x00000028u); // 800E6EE8
  cmps(c,0,(int32_t)c->r[12],0); // 800E6EEC
  if (crb(c,2)) { goto L_800E6F00; } // 800E6EF0
  c->r[3]=0u+0x00000000u; // 800E6EF4
  c->ctr=c->r[12]; // 800E6EF8
  if (true) { c->lr=0x800E6F00u; dispatch(c,c->ctr); } // 800E6EFC
L_800E6F00:;
  c->lr=0x800E6F04u; f_800E68A0(c); // 800E6F00
  goto L_800E7158; // 800E6F04
L_800E6F08:;
  c->r[3]=0u+0x00000000u; // 800E6F08
  c->lr=0x800E6F10u; f_800EBDE0(c); // 800E6F0C
  c->r[4]=R32(c->r[29]+0x00000020u); // 800E6F10
  c->r[0]=0u+0x00080000u; // 800E6F14
  c->r[3]=R32(c->r[29]+0x00000014u); // 800E6F18
  c->r[30]=c->r[3]-c->r[4]; // 800E6F1C
  cmpu(c,0,c->r[30],c->r[0]); // 800E6F20
  if (!crb(c,1)) { goto L_800E6F2C; } // 800E6F24
  c->r[30]=0u+0x00080000u; // 800E6F28
L_800E6F2C:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 800E6F2C
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E6F30
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E6F34
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 800E6F38
  c->r[26]=R32(c->r[29]+0x00000008u); // 800E6F3C
  c->r[27]=c->r[3]+c->r[0]; // 800E6F40
  c->lr=0x800E6F48u; f_800CBAA0(c); // 800E6F44
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6F48
  c->r[31]=c->r[3]|c->r[3]; // 800E6F4C
  cmpu(c,0,c->r[0],0x00000005u); // 800E6F50
  if (crb(c,0)) { goto L_800E6F60; } // 800E6F54
  c->r[0]=0u+0x00000000u; // 800E6F58
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6F5C
L_800E6F60:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6F60
  c->r[28]=0u+0x802F0000u; // 800E6F64
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E6F68
  c->r[28]=c->r[28]+0xFFFFFE00u; // 800E6F6C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6F70
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6F74
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E6F78
  c->r[4]=c->r[28]+c->r[4]; // 800E6F7C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 800E6F80
  c->r[3]=c->r[28]+c->r[3]; // 800E6F84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6F88
  W32(c->r[3]+0x00000020u,c->r[27]); // 800E6F8C
  c->r[3]=c->r[28]+c->r[0]; // 800E6F90
  W32(c->r[3]+0x00000024u,c->r[30]); // 800E6F94
  c->lr=0x800E6F9Cu; f_800D0530(c); // 800E6F98
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E6F9C
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E6FA0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E6FA4
  c->r[0]=c->r[4]+0x00000001u; // 800E6FA8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E6FAC
  c->r[4]=c->r[28]+c->r[5]; // 800E6FB0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E6FB4
  c->r[3]=c->r[31]|c->r[31]; // 800E6FB8
  c->lr=0x800E6FC0u; f_800CBAE0(c); // 800E6FBC
  c->r[3]=R32(c->r[29]+0x00000020u); // 800E6FC0
  c->r[6]=0u+0x800E0000u; // 800E6FC4
  c->r[7]=R32(c->r[29]+0x00000018u); // 800E6FC8
  c->r[6]=c->r[6]+0x00007170u; // 800E6FCC
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800E6FD0
  c->r[5]=R32(c->r[29]+0x00000010u); // 800E6FD4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 800E6FD8
  c->r[3]=c->r[7]+c->r[3]; // 800E6FDC
  c->r[5]=c->r[5]+c->r[0]; // 800E6FE0
  c->lr=0x800E6FE8u; f_800EA980(c); // 800E6FE4
  goto L_800E7158; // 800E6FE8
L_800E6FEC:;
  c->r[3]=0u+0x00000000u; // 800E6FEC
  c->lr=0x800E6FF4u; f_800EBDE0(c); // 800E6FF0
  c->r[8]=0u+0x800E0000u; // 800E6FF4
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E6FF8
  c->r[7]=R32(c->r[29]+0x00000018u); // 800E6FFC
  c->r[8]=c->r[8]+0x00007170u; // 800E7000
  c->r[4]=0u+0x00000000u; // 800E7004
  c->r[5]=0u+0x00000000u; // 800E7008
  c->r[6]=0u+0x00000000u; // 800E700C
  c->lr=0x800E7014u; f_800E9E80(c); // 800E7010
  goto L_800E7158; // 800E7014
L_800E7018:;
  c->r[3]=0u+0x00000000u; // 800E7018
  c->lr=0x800E7020u; f_800EBDE0(c); // 800E701C
  c->r[3]=0u+0x800E0000u; // 800E7020
  c->r[3]=c->r[3]+0x00007170u; // 800E7024
  c->lr=0x800E702Cu; f_800EA810(c); // 800E7028
  goto L_800E7158; // 800E702C
L_800E7030:;
  c->r[3]=0u+0x800E0000u; // 800E7030
  c->r[3]=c->r[3]+0x00007170u; // 800E7034
  c->lr=0x800E703Cu; f_800EB960(c); // 800E7038
  goto L_800E7158; // 800E703C
L_800E7040:;
  c->r[3]=0u+0x800E0000u; // 800E7040
  c->r[3]=c->r[3]+0x00007170u; // 800E7044
  c->lr=0x800E704Cu; f_800EB960(c); // 800E7048
  goto L_800E7158; // 800E704C
L_800E7050:;
  c->r[3]=0u+0x00000000u; // 800E7050
  c->lr=0x800E7058u; f_800EBDE0(c); // 800E7054
  c->r[4]=0u+0x800E0000u; // 800E7058
  c->r[3]=0u+0x00020000u; // 800E705C
  c->r[4]=c->r[4]+0x00007170u; // 800E7060
  c->lr=0x800E7068u; f_800EB470(c); // 800E7064
  goto L_800E7158; // 800E7068
L_800E706C:;
  c->r[3]=0u+0x00000000u; // 800E706C
  c->lr=0x800E7074u; f_800EBDE0(c); // 800E7070
  c->r[3]=0u+0x802F0000u; // 800E7074
  c->r[0]=0u+0x00000020u; // 800E7078
  c->r[3]=c->r[3]+0xFFFFFB80u; // 800E707C
  c->r[4]=0u+0x800E0000u; // 800E7080
  W32(c->r[29]+0x00000018u,c->r[3]); // 800E7084
  c->r[4]=c->r[4]+0x00007170u; // 800E7088
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800E708C
  c->lr=0x800E7094u; f_800E9CF0(c); // 800E7090
  goto L_800E7158; // 800E7094
L_800E7098:;
  c->r[3]=0u+0x00000000u; // 800E7098
  c->lr=0x800E70A0u; f_800EBDE0(c); // 800E709C
  c->r[10]=R32(c->r[29]+0x00000018u); // 800E70A0
  c->r[0]=R32(c->r[10]+0x000003A0u); // 800E70A4
  cmps(c,0,(int32_t)c->r[0],0); // 800E70A8
  if (!crb(c,2)) { goto L_800E70D8; } // 800E70AC
  c->r[0]=R32(c->r[10]+0x00004DC0u); // 800E70B0
  cmps(c,0,(int32_t)c->r[0],0); // 800E70B4
  if (!crb(c,2)) { goto L_800E70D8; } // 800E70B8
  c->r[6]=0u+0x800E0000u; // 800E70BC
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E70C0
  c->r[4]=c->r[10]+0x000003A0u; // 800E70C4
  c->r[5]=c->r[10]+0x00004DC0u; // 800E70C8
  c->r[6]=c->r[6]+0x00007170u; // 800E70CC
  c->lr=0x800E70D4u; f_800EA360(c); // 800E70D0
  goto L_800E7158; // 800E70D4
L_800E70D8:;
  c->r[3]=0u+0x800E0000u; // 800E70D8
  c->r[4]=c->r[10]|c->r[10]; // 800E70DC
  c->r[3]=c->r[3]+0x00007170u; // 800E70E0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E70E4
  c->r[5]=c->r[10]+0x000003A0u; // 800E70E8
  c->r[6]=c->r[10]+0x000003C0u; // 800E70EC
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E70F0
  c->r[7]=c->r[10]+0x00004DC0u; // 800E70F4
  c->r[8]=c->r[10]+0x00004DE0u; // 800E70F8
  c->r[9]=c->r[10]+0x00005DE0u; // 800E70FC
  c->r[10]=c->r[10]+0x00005E00u; // 800E7100
  c->lr=0x800E7108u; f_800EA570(c); // 800E7104
  goto L_800E7158; // 800E7108
L_800E710C:;
  c->r[3]=0u+0x00000000u; // 800E710C
  c->lr=0x800E7114u; f_800EBDE0(c); // 800E7110
  c->r[8]=R32(c->r[29]+0x00000018u); // 800E7114
  c->r[9]=0u+0x800E0000u; // 800E7118
  c->r[3]=R32(c->r[29]+0x00000010u); // 800E711C
  c->r[9]=c->r[9]+0x00007170u; // 800E7120
  c->r[5]=R32(c->r[8]+0x000003A0u); // 800E7124
  c->r[4]=c->r[8]+0x000002C0u; // 800E7128
  c->r[7]=R32(c->r[8]+0x00004DC0u); // 800E712C
  c->r[6]=c->r[8]+0x000003C0u; // 800E7130
  c->r[8]=c->r[8]+0x00004DE0u; // 800E7134
  c->lr=0x800E713Cu; f_800EA0F0(c); // 800E7138
  goto L_800E7158; // 800E713C
L_800E7140:;
  c->r[12]=R32(c->r[13]+0xFFFF9038u); // 800E7140
  c->r[4]=0u+0x800E0000u; // 800E7144
  c->r[3]=c->r[29]|c->r[29]; // 800E7148
  c->r[4]=c->r[4]+0x00007170u; // 800E714C
  c->ctr=c->r[12]; // 800E7150
  if (true) { c->lr=0x800E7158u; dispatch(c,c->ctr); } // 800E7154
L_800E7158:;
  c->r[11]=c->r[1]+0x00000030u; // 800E7158
  c->lr=0x800E7160u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E715C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E7160
  c->lr=c->r[0]; // 800E7164
  c->r[1]=c->r[1]+0x00000030u; // 800E7168
  return; // 800E716C
}

// cbForStateBusy
void f_800E7170(Ctx* __restrict c) {
  trace_call(0x800E7170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7170
  c->r[0]=c->lr; // 800E7174
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7178
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E717C
  c->r[31]=c->r[3]|c->r[3]; // 800E7180
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E7184
  c->r[30]=0u+0x802F0000u; // 800E7188
  c->r[30]=c->r[30]+0xFFFFAFC0u; // 800E718C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E7190
  c->lr=0x800E7198u; f_800CBAA0(c); // 800E7194
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E7198
  cmps(c,0,(int32_t)c->r[0],0); // 800E719C
  if (!crb(c,2)) { goto L_800E71B4; } // 800E71A0
  c->r[4]=0u+0x802F0000u; // 800E71A4
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E71A8
  W32(c->r[4]+0x00000078u,c->r[31]); // 800E71AC
  goto L_800E71D0; // 800E71B0
L_800E71B4:;
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E71B4
  c->r[5]=0u+0x802F0000u; // 800E71B8
  c->r[5]=c->r[5]+0xFFFFFE00u; // 800E71BC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E71C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E71C4
  c->r[4]=c->r[5]+c->r[0]; // 800E71C8
  W32(c->r[4]+0x00000028u,c->r[31]); // 800E71CC
L_800E71D0:;
  c->lr=0x800E71D4u; f_800CBAE0(c); // 800E71D0
  cmpu(c,0,c->r[31],0x00000010u); // 800E71D4
  if (!crb(c,2)) { goto L_800E71F4; } // 800E71D8
  c->r[3]=0u+0x01230000u; // 800E71DC
  c->r[4]=0u+0x800E0000u; // 800E71E0
  c->r[3]=c->r[3]+0x00004568u; // 800E71E4
  c->r[4]=c->r[4]+0x00004170u; // 800E71E8
  c->lr=0x800E71F0u; f_800E9350(c); // 800E71EC
  goto L_800E7B34; // 800E71F0
L_800E71F4:;
  cmpu(c,0,c->r[31],0x00000020u); // 800E71F4
  if (!crb(c,2)) { goto L_800E7214; } // 800E71F8
  c->r[3]=0u+0x01230000u; // 800E71FC
  c->r[4]=0u+0x800E0000u; // 800E7200
  c->r[3]=c->r[3]+0x00004569u; // 800E7204
  c->r[4]=c->r[4]+0x00004170u; // 800E7208
  c->lr=0x800E7210u; f_800E9350(c); // 800E720C
  goto L_800E7B34; // 800E7210
L_800E7214:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7214
  cmpu(c,0,c->r[0],0x00000003u); // 800E7218
  if (crb(c,2)) { goto L_800E722C; } // 800E721C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7220
  cmpu(c,0,c->r[0],0x0000000Fu); // 800E7224
  if (!crb(c,2)) { goto L_800E7370; } // 800E7228
L_800E722C:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800E722C
  if (crb(c,2)) { goto L_800E724C; } // 800E7230
  c->r[3]=0u+0x01230000u; // 800E7234
  c->r[4]=0u+0x800E0000u; // 800E7238
  c->r[3]=c->r[3]+0x00004567u; // 800E723C
  c->r[4]=c->r[4]+0x00004150u; // 800E7240
  c->lr=0x800E7248u; f_800E9350(c); // 800E7244
  goto L_800E7B34; // 800E7248
L_800E724C:;
  c->r[0]=0u+0x00000000u; // 800E724C
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E7250
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7254
  cmpu(c,0,c->r[0],0x0000000Fu); // 800E7258
  if (!crb(c,2)) { goto L_800E7268; } // 800E725C
  c->r[0]=0u+0x00000001u; // 800E7260
  W32(c->r[13]+0xFFFFA794u,c->r[0]); // 800E7264
L_800E7268:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E7268
  cmps(c,0,(int32_t)c->r[0],0); // 800E726C
  if (crb(c,2)) { goto L_800E72DC; } // 800E7270
  c->r[29]=R32(c->r[13]+0xFFFFA7B0u); // 800E7274
  c->r[3]=c->r[30]+0x00004B20u; // 800E7278
  c->r[0]=0u+0x00000007u; // 800E727C
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E7280
  c->r[4]=0u+0x00000000u; // 800E7284
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E7288
  c->r[0]=0u+0x0000000Au; // 800E728C
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E7290
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E7294
  c->r[12]=R32(c->r[29]+0x00000028u); // 800E7298
  cmps(c,0,(int32_t)c->r[12],0); // 800E729C
  if (crb(c,2)) { goto L_800E72B4; } // 800E72A0
  c->r[4]=c->r[29]|c->r[29]; // 800E72A4
  c->r[3]=0u+0xFFFFFFFDu; // 800E72A8
  c->ctr=c->r[12]; // 800E72AC
  if (true) { c->lr=0x800E72B4u; dispatch(c,c->ctr); } // 800E72B0
L_800E72B4:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E72B4
  cmps(c,0,(int32_t)c->r[12],0); // 800E72B8
  if (crb(c,2)) { goto L_800E72D0; } // 800E72BC
  c->r[4]=c->r[29]|c->r[29]; // 800E72C0
  c->r[3]=0u+0x00000000u; // 800E72C4
  c->ctr=c->r[12]; // 800E72C8
  if (true) { c->lr=0x800E72D0u; dispatch(c,c->ctr); } // 800E72CC
L_800E72D0:;
  c->lr=0x800E72D4u; f_800E68A0(c); // 800E72D0
  c->r[0]=0u+0x00000001u; // 800E72D4
  goto L_800E72E0; // 800E72D8
L_800E72DC:;
  c->r[0]=0u+0x00000000u; // 800E72DC
L_800E72E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E72E0
  if (!crb(c,2)) { goto L_800E7B34; } // 800E72E4
  c->r[0]=R32(c->r[13]+0xFFFFA790u); // 800E72E8
  cmpu(c,0,c->r[0],0x00000002u); // 800E72EC
  if (crb(c,2)) { goto L_800E7B34; } // 800E72F0
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E72F4
  c->r[0]=0u+0x00000007u; // 800E72F8
  c->r[3]=0u+0x00000001u; // 800E72FC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E7300
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E7304
  W32(c->r[13]+0xFFFFA790u,c->r[3]); // 800E7308
  cmps(c,0,(int32_t)c->r[0],0); // 800E730C
  if (!crb(c,2)) { goto L_800E7B34; } // 800E7310
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E7314
  cmps(c,0,(int32_t)c->r[0],0); // 800E7318
  if (!crb(c,2)) { goto L_800E7B34; } // 800E731C
  W32(c->r[13]+0xFFFFA744u,c->r[3]); // 800E7320
  c->r[3]=c->r[30]+0x00004B80u; // 800E7324
  c->lr=0x800E732Cu; f_800C66D0(c); // 800E7328
  c->lr=0x800E7330u; f_800D0530(c); // 800E732C
  c->r[5]=0u+0x80000000u; // 800E7330
  c->r[4]=0u+0x10620000u; // 800E7334
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800E7338
  c->r[9]=0u+0x800E0000u; // 800E733C
  c->r[6]=c->r[3]|c->r[3]; // 800E7340
  c->r[4]=c->r[4]+0x00004DD3u; // 800E7344
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E7348
  c->r[3]=c->r[30]+0x00004B80u; // 800E734C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800E7350
  c->r[9]=c->r[9]+0x00006870u; // 800E7354
  c->r[5]=0u+0x00000000u; // 800E7358
  c->r[7]=0u+0x00000000u; // 800E735C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800E7360
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800E7364
  c->lr=0x800E736Cu; f_800C69A0(c); // 800E7368
  goto L_800E7B34; // 800E736C
L_800E7370:;
  c->r[4]=R32(c->r[13]+0xFFFFA7A4u); // 800E7370
  cmpu(c,0,c->r[4],0x00000001u); // 800E7374
  if (crb(c,2)) { goto L_800E739C; } // 800E7378
  cmpu(c,0,c->r[4],0x00000004u); // 800E737C
  if (crb(c,2)) { goto L_800E739C; } // 800E7380
  cmpu(c,0,c->r[4],0x00000005u); // 800E7384
  if (crb(c,2)) { goto L_800E739C; } // 800E7388
  cmpu(c,0,c->r[4],0x00000021u); // 800E738C
  if (crb(c,2)) { goto L_800E739C; } // 800E7390
  cmpu(c,0,c->r[4],0x0000000Eu); // 800E7394
  if (!crb(c,2)) { goto L_800E73A4; } // 800E7398
L_800E739C:;
  c->r[0]=0u+0x00000001u; // 800E739C
  goto L_800E73BC; // 800E73A0
L_800E73A4:;
  c->r[0]=R32(c->r[13]+0xFFFF9044u); // 800E73A4
  cmpu(c,0,c->r[4],c->r[0]); // 800E73A8
  if (!crb(c,2)) { goto L_800E73B8; } // 800E73AC
  c->r[0]=0u+0x00000001u; // 800E73B0
  goto L_800E73BC; // 800E73B4
L_800E73B8:;
  c->r[0]=0u+0x00000000u; // 800E73B8
L_800E73BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E73BC
  if (crb(c,2)) { goto L_800E73EC; } // 800E73C0
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 800E73C4
  if (crb(c,2)) { goto L_800E73D8; } // 800E73C8
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E73CC
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 800E73D0
  goto L_800E73DC; // 800E73D4
L_800E73D8:;
  c->r[4]=0u+0x00000000u; // 800E73D8
L_800E73DC:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E73DC
  c->r[0]=R32(c->r[3]+0x00000020u); // 800E73E0
  c->r[0]=c->r[0]+c->r[4]; // 800E73E4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800E73E8
L_800E73EC:;
  c->r[0]=R32(c->r[13]+0xFFFFA740u); // 800E73EC
  cmps(c,0,(int32_t)c->r[0],0); // 800E73F0
  if (crb(c,2)) { goto L_800E7458; } // 800E73F4
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E73F8
  c->r[4]=0u+0x00000000u; // 800E73FC
  W32(c->r[13]+0xFFFFA740u,c->r[4]); // 800E7400
  c->r[3]=c->r[30]+0x00004B20u; // 800E7404
  c->r[0]=0u+0x0000000Au; // 800E7408
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E740C
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E7410
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E7414
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E7418
  cmps(c,0,(int32_t)c->r[12],0); // 800E741C
  if (crb(c,2)) { goto L_800E7434; } // 800E7420
  c->r[4]=c->r[31]|c->r[31]; // 800E7424
  c->r[3]=0u+0xFFFFFFFDu; // 800E7428
  c->ctr=c->r[12]; // 800E742C
  if (true) { c->lr=0x800E7434u; dispatch(c,c->ctr); } // 800E7430
L_800E7434:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E7434
  cmps(c,0,(int32_t)c->r[12],0); // 800E7438
  if (crb(c,2)) { goto L_800E7450; } // 800E743C
  c->r[4]=c->r[31]|c->r[31]; // 800E7440
  c->r[3]=0u+0x00000000u; // 800E7444
  c->ctr=c->r[12]; // 800E7448
  if (true) { c->lr=0x800E7450u; dispatch(c,c->ctr); } // 800E744C
L_800E7450:;
  c->lr=0x800E7454u; f_800E68A0(c); // 800E7450
  goto L_800E7B34; // 800E7454
L_800E7458:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800E7458
  if (crb(c,2)) { goto L_800E79F4; } // 800E745C
  c->r[29]=0u+0x00000000u; // 800E7460
  W32(c->r[13]+0xFFFFA738u,c->r[29]); // 800E7464
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7468
  cmpu(c,0,c->r[0],0x00000010u); // 800E746C
  if (!crb(c,2)) { goto L_800E74D0; } // 800E7470
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E7474
  c->r[0]=R32(c->r[3]+0x00000010u); // 800E7478
  cmps(c,0,(int32_t)c->r[0],0); // 800E747C
  if (crb(c,2)) { goto L_800E7490; } // 800E7480
  c->r[0]=0u+0x00000002u; // 800E7484
  W32(c->r[13]+0xFFFFA790u,c->r[0]); // 800E7488
  goto L_800E7498; // 800E748C
L_800E7490:;
  c->r[0]=0u+0x00000001u; // 800E7490
  W32(c->r[13]+0xFFFFA790u,c->r[0]); // 800E7494
L_800E7498:;
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7498
  c->r[3]=c->r[30]+0x00004B20u; // 800E749C
  c->r[0]=0u+0x00000000u; // 800E74A0
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E74A4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E74A8
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E74AC
  cmps(c,0,(int32_t)c->r[12],0); // 800E74B0
  if (crb(c,2)) { goto L_800E74C8; } // 800E74B4
  c->r[4]=c->r[31]|c->r[31]; // 800E74B8
  c->r[3]=0u+0x00000000u; // 800E74BC
  c->ctr=c->r[12]; // 800E74C0
  if (true) { c->lr=0x800E74C8u; dispatch(c,c->ctr); } // 800E74C4
L_800E74C8:;
  c->lr=0x800E74CCu; f_800E68A0(c); // 800E74C8
  goto L_800E7B34; // 800E74CC
L_800E74D0:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E74D0
  cmpu(c,0,c->r[0],0x00000020u); // 800E74D4
  if (!crb(c,2)) { goto L_800E7524; } // 800E74D8
  c->lr=0x800E74E0u; f_800D0540(c); // 800E74DC
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E74E0
  c->r[0]=c->r[30]+0x00004B20u; // 800E74E4
  W32(c->r[13]+0xFFFFA78Cu,c->r[4]); // 800E74E8
  W32(c->r[13]+0xFFFFA788u,c->r[3]); // 800E74EC
  W32(c->r[13]+0xFFFFA794u,c->r[29]); // 800E74F0
  W32(c->r[13]+0xFFFFA7B0u,c->r[0]); // 800E74F4
  W32(c->r[13]+0xFFFFA734u,c->r[29]); // 800E74F8
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 800E74FC
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E7500
  cmps(c,0,(int32_t)c->r[12],0); // 800E7504
  if (crb(c,2)) { goto L_800E751C; } // 800E7508
  c->r[4]=c->r[31]|c->r[31]; // 800E750C
  c->r[3]=0u+0x00000000u; // 800E7510
  c->ctr=c->r[12]; // 800E7514
  if (true) { c->lr=0x800E751Cu; dispatch(c,c->ctr); } // 800E7518
L_800E751C:;
  c->lr=0x800E7520u; f_800E68A0(c); // 800E751C
  goto L_800E7B34; // 800E7520
L_800E7524:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E7524
  cmps(c,0,(int32_t)c->r[0],0); // 800E7528
  if (crb(c,2)) { goto L_800E7590; } // 800E752C
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7530
  c->r[3]=c->r[30]+0x00004B20u; // 800E7534
  W32(c->r[13]+0xFFFFA734u,c->r[29]); // 800E7538
  c->r[0]=0u+0x0000000Au; // 800E753C
  W32(c->r[13]+0xFFFFA730u,c->r[29]); // 800E7540
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E7544
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E7548
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E754C
  cmps(c,0,(int32_t)c->r[12],0); // 800E7550
  if (crb(c,2)) { goto L_800E7568; } // 800E7554
  c->r[4]=c->r[31]|c->r[31]; // 800E7558
  c->r[3]=0u+0xFFFFFFFDu; // 800E755C
  c->ctr=c->r[12]; // 800E7560
  if (true) { c->lr=0x800E7568u; dispatch(c,c->ctr); } // 800E7564
L_800E7568:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E7568
  cmps(c,0,(int32_t)c->r[12],0); // 800E756C
  if (crb(c,2)) { goto L_800E7584; } // 800E7570
  c->r[4]=c->r[31]|c->r[31]; // 800E7574
  c->r[3]=0u+0x00000000u; // 800E7578
  c->ctr=c->r[12]; // 800E757C
  if (true) { c->lr=0x800E7584u; dispatch(c,c->ctr); } // 800E7580
L_800E7584:;
  c->lr=0x800E7588u; f_800E68A0(c); // 800E7584
  c->r[0]=0u+0x00000001u; // 800E7588
  goto L_800E7594; // 800E758C
L_800E7590:;
  c->r[0]=0u+0x00000000u; // 800E7590
L_800E7594:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7594
  if (!crb(c,2)) { goto L_800E7B34; } // 800E7598
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E759C
  cmpu(c,0,c->r[0],0x00000026u); // 800E75A0
  if (!crb(c,2)) { goto L_800E7658; } // 800E75A4
  c->lr=0x800E75ACu; f_800EB930(c); // 800E75A8
  c->r[31]=c->r[3]|c->r[3]; // 800E75AC
  c->lr=0x800E75B4u; f_800D0540(c); // 800E75B0
  c->r[6]=0u+0x80000000u; // 800E75B4
  c->r[5]=0u+0x10620000u; // 800E75B8
  c->r[6]=R32(c->r[6]+0x000000F8u); // 800E75BC
  c->r[7]=c->r[5]+0x00004DD3u; // 800E75C0
  c->r[8]=R32(c->r[13]+0xFFFFA788u); // 800E75C4
  c->r[0]=0u+0x00000000u; // 800E75C8
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 800E75CC
  c->r[9]=R32(c->r[13]+0xFFFFA78Cu); // 800E75D0
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 800E75D4
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 800E75D8
  c->r[5]=c->r[0]^0x80000000u; // 800E75DC
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 800E75E0
  c->r[0]=c->r[0]^0x80000000u; // 800E75E4
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 800E75E8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800E75EC
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 800E75F0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800E75F4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800E75F8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800E75FC
  if (crb(c,2)) { goto L_800E760C; } // 800E7600
  c->r[3]=0u+0x00000000u; // 800E7604
  goto L_800E7620; // 800E7608
L_800E760C:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800E760C
  if (crb(c,2)) { goto L_800E761C; } // 800E7610
  c->r[3]=0u+0x00000001u; // 800E7614
  goto L_800E7620; // 800E7618
L_800E761C:;
  c->r[3]=0u+0x00000002u; // 800E761C
L_800E7620:;
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7620
  c->r[4]=c->r[30]+0x00004B20u; // 800E7624
  c->r[0]=0u+0x00000000u; // 800E7628
  W32(c->r[13]+0xFFFFA7B0u,c->r[4]); // 800E762C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E7630
  W32(c->r[31]+0x00000010u,c->r[3]); // 800E7634
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E7638
  cmps(c,0,(int32_t)c->r[12],0); // 800E763C
  if (crb(c,2)) { goto L_800E7650; } // 800E7640
  c->r[4]=c->r[31]|c->r[31]; // 800E7644
  c->ctr=c->r[12]; // 800E7648
  if (true) { c->lr=0x800E7650u; dispatch(c,c->ctr); } // 800E764C
L_800E7650:;
  c->lr=0x800E7654u; f_800E68A0(c); // 800E7650
  goto L_800E7B34; // 800E7654
L_800E7658:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7658
  cmpu(c,0,c->r[0],0x00000024u); // 800E765C
  if (!crb(c,2)) { goto L_800E76D0; } // 800E7660
  c->lr=0x800E7668u; f_800EB930(c); // 800E7664
  c->r[0]=rotl(c->r[3],30)&0x00000001u; cr0(c,c->r[0]); // 800E7668
  if (!crb(c,2)) { goto L_800E7678; } // 800E766C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E7670
  if (crb(c,2)) { goto L_800E7680; } // 800E7674
L_800E7678:;
  c->r[3]=0u+0x00000000u; // 800E7678
  goto L_800E7698; // 800E767C
L_800E7680:;
  c->r[0]=R32(c->r[13]+0xFFFFA734u); // 800E7680
  cmps(c,0,(int32_t)c->r[0],0); // 800E7684
  if (crb(c,2)) { goto L_800E7694; } // 800E7688
  c->r[3]=0u+0x00000000u; // 800E768C
  goto L_800E7698; // 800E7690
L_800E7694:;
  c->r[3]=0u+0x00000001u; // 800E7694
L_800E7698:;
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7698
  c->r[4]=c->r[30]+0x00004B20u; // 800E769C
  c->r[0]=0u+0x00000000u; // 800E76A0
  W32(c->r[13]+0xFFFFA7B0u,c->r[4]); // 800E76A4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E76A8
  W32(c->r[31]+0x00000010u,c->r[3]); // 800E76AC
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E76B0
  cmps(c,0,(int32_t)c->r[12],0); // 800E76B4
  if (crb(c,2)) { goto L_800E76C8; } // 800E76B8
  c->r[4]=c->r[31]|c->r[31]; // 800E76BC
  c->ctr=c->r[12]; // 800E76C0
  if (true) { c->lr=0x800E76C8u; dispatch(c,c->ctr); } // 800E76C4
L_800E76C8:;
  c->lr=0x800E76CCu; f_800E68A0(c); // 800E76C8
  goto L_800E7B34; // 800E76CC
L_800E76D0:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E76D0
  cmpu(c,0,c->r[0],0x00000028u); // 800E76D4
  if (!crb(c,2)) { goto L_800E77E8; } // 800E76D8
  c->r[4]=R32(c->r[13]+0xFFFFA7B0u); // 800E76DC
  c->r[3]=c->r[30]+0x00004BC0u; // 800E76E0
  c->r[4]=R32(c->r[4]+0x00000024u); // 800E76E4
  c->lr=0x800E76ECu; f_800E93C0(c); // 800E76E8
  cmps(c,0,(int32_t)c->r[3],0); // 800E76EC
  if (crb(c,2)) { goto L_800E774C; } // 800E76F0
  c->r[3]=R32(c->r[13]+0xFFFFA7ACu); // 800E76F4
  c->r[4]=c->r[30]+0x00004BC0u; // 800E76F8
  c->r[5]=0u+0x00000020u; // 800E76FC
  c->lr=0x800E7704u; f_80004364(c); // 800E7700
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7704
  c->r[4]=c->r[30]+0x00004B20u; // 800E7708
  c->r[3]=0u+0x00000000u; // 800E770C
  c->r[0]=0u+0x00000001u; // 800E7710
  W32(c->r[13]+0xFFFFA7B0u,c->r[4]); // 800E7714
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800E7718
  W32(c->r[31]+0x00000010u,c->r[0]); // 800E771C
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E7720
  cmps(c,0,(int32_t)c->r[12],0); // 800E7724
  if (crb(c,2)) { goto L_800E773C; } // 800E7728
  c->r[4]=c->r[31]|c->r[31]; // 800E772C
  c->r[3]=0u+0x00000001u; // 800E7730
  c->ctr=c->r[12]; // 800E7734
  if (true) { c->lr=0x800E773Cu; dispatch(c,c->ctr); } // 800E7738
L_800E773C:;
  c->r[0]=0u+0x00000000u; // 800E773C
  W32(c->r[13]+0xFFFFA738u,c->r[0]); // 800E7740
  c->lr=0x800E7748u; f_800E68A0(c); // 800E7744
  goto L_800E7B34; // 800E7748
L_800E774C:;
  c->lr=0x800E7750u; f_800CBAA0(c); // 800E774C
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E7750
  c->r[30]=c->r[3]|c->r[3]; // 800E7754
  cmpu(c,0,c->r[0],0x00000005u); // 800E7758
  if (crb(c,0)) { goto L_800E7768; } // 800E775C
  c->r[0]=0u+0x00000000u; // 800E7760
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E7764
L_800E7768:;
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E7768
  c->r[31]=0u+0x802F0000u; // 800E776C
  c->r[3]=R32(c->r[13]+0xFFFFA720u); // 800E7770
  c->r[31]=c->r[31]+0xFFFFFE00u; // 800E7774
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E7778
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E777C
  c->r[6]=0u+0x00000010u; // 800E7780
  c->r[4]=0u+0x00000000u; // 800E7784
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800E7788
  c->r[5]=c->r[31]+c->r[5]; // 800E778C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800E7790
  c->r[3]=c->r[31]+c->r[3]; // 800E7794
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E7798
  W32(c->r[3]+0x00000020u,c->r[4]); // 800E779C
  c->r[3]=c->r[31]+c->r[0]; // 800E77A0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800E77A4
  c->lr=0x800E77ACu; f_800D0530(c); // 800E77A8
  c->r[0]=R32(c->r[13]+0xFFFFA720u); // 800E77AC
  c->r[4]=R32(c->r[13]+0xFFFFA720u); // 800E77B0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800E77B4
  c->r[0]=c->r[4]+0x00000001u; // 800E77B8
  W32(c->r[13]+0xFFFFA720u,c->r[0]); // 800E77BC
  c->r[4]=c->r[31]+c->r[5]; // 800E77C0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E77C4
  c->r[3]=c->r[30]|c->r[30]; // 800E77C8
  c->lr=0x800E77D0u; f_800CBAE0(c); // 800E77CC
  c->r[5]=0u+0x800E0000u; // 800E77D0
  c->r[3]=0u+0x00000000u; // 800E77D4
  c->r[5]=c->r[5]+0x000059F0u; // 800E77D8
  c->r[4]=0u+0x00000000u; // 800E77DC
  c->lr=0x800E77E4u; f_800EAB20(c); // 800E77E0
  goto L_800E7B34; // 800E77E4
L_800E77E8:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E77E8
  cmpu(c,0,c->r[0],0x00000029u); // 800E77EC
  if (!crb(c,2)) { goto L_800E7844; } // 800E77F0
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E77F4
  c->r[4]=R32(c->r[3]+0x00000018u); // 800E77F8
  c->r[0]=R32(c->r[4]+0x00005DE0u); // 800E77FC
  cmps(c,0,(int32_t)c->r[0],0); // 800E7800
  if (!crb(c,2)) { goto L_800E7810; } // 800E7804
  c->lr=0x800E780Cu; f_800E6BC0(c); // 800E7808
  goto L_800E7B34; // 800E780C
L_800E7810:;
  c->r[0]=c->r[30]+0x00004B20u; // 800E7810
  W32(c->r[13]+0xFFFFA7B0u,c->r[0]); // 800E7814
  c->r[0]=0u+0x00000000u; // 800E7818
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E781C
  c->r[12]=R32(c->r[3]+0x00000028u); // 800E7820
  cmps(c,0,(int32_t)c->r[12],0); // 800E7824
  if (crb(c,2)) { goto L_800E783C; } // 800E7828
  c->r[4]=c->r[3]|c->r[3]; // 800E782C
  c->r[3]=0u+0x00000000u; // 800E7830
  c->ctr=c->r[12]; // 800E7834
  if (true) { c->lr=0x800E783Cu; dispatch(c,c->ctr); } // 800E7838
L_800E783C:;
  c->lr=0x800E7840u; f_800E68A0(c); // 800E783C
  goto L_800E7B34; // 800E7840
L_800E7844:;
  c->r[4]=R32(c->r[13]+0xFFFFA7A4u); // 800E7844
  cmpu(c,0,c->r[4],0x00000001u); // 800E7848
  if (crb(c,2)) { goto L_800E7870; } // 800E784C
  cmpu(c,0,c->r[4],0x00000004u); // 800E7850
  if (crb(c,2)) { goto L_800E7870; } // 800E7854
  cmpu(c,0,c->r[4],0x00000005u); // 800E7858
  if (crb(c,2)) { goto L_800E7870; } // 800E785C
  cmpu(c,0,c->r[4],0x00000021u); // 800E7860
  if (crb(c,2)) { goto L_800E7870; } // 800E7864
  cmpu(c,0,c->r[4],0x0000000Eu); // 800E7868
  if (!crb(c,2)) { goto L_800E7878; } // 800E786C
L_800E7870:;
  c->r[0]=0u+0x00000001u; // 800E7870
  goto L_800E7890; // 800E7874
L_800E7878:;
  c->r[0]=R32(c->r[13]+0xFFFF9044u); // 800E7878
  cmpu(c,0,c->r[4],c->r[0]); // 800E787C
  if (!crb(c,2)) { goto L_800E788C; } // 800E7880
  c->r[0]=0u+0x00000001u; // 800E7884
  goto L_800E7890; // 800E7888
L_800E788C:;
  c->r[0]=0u+0x00000000u; // 800E788C
L_800E7890:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7890
  if (crb(c,2)) { goto L_800E78E8; } // 800E7894
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E7898
  c->r[4]=R32(c->r[3]+0x00000020u); // 800E789C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800E78A0
  cmpu(c,0,c->r[4],c->r[0]); // 800E78A4
  if (crb(c,2)) { goto L_800E78B4; } // 800E78A8
  c->lr=0x800E78B0u; f_800E6BC0(c); // 800E78AC
  goto L_800E7B34; // 800E78B0
L_800E78B4:;
  c->r[0]=c->r[30]+0x00004B20u; // 800E78B4
  W32(c->r[13]+0xFFFFA7B0u,c->r[0]); // 800E78B8
  c->r[0]=0u+0x00000000u; // 800E78BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E78C0
  c->r[12]=R32(c->r[3]+0x00000028u); // 800E78C4
  cmps(c,0,(int32_t)c->r[12],0); // 800E78C8
  if (crb(c,2)) { goto L_800E78E0; } // 800E78CC
  c->r[4]=c->r[3]|c->r[3]; // 800E78D0
  c->r[3]=R32(c->r[3]+0x00000020u); // 800E78D4
  c->ctr=c->r[12]; // 800E78D8
  if (true) { c->lr=0x800E78E0u; dispatch(c,c->ctr); } // 800E78DC
L_800E78E0:;
  c->lr=0x800E78E4u; f_800E68A0(c); // 800E78E0
  goto L_800E7B34; // 800E78E4
L_800E78E8:;
  c->r[4]=R32(c->r[13]+0xFFFFA7A4u); // 800E78E8
  cmpu(c,0,c->r[4],0x00000009u); // 800E78EC
  if (crb(c,2)) { goto L_800E790C; } // 800E78F0
  cmpu(c,0,c->r[4],0x0000000Au); // 800E78F4
  if (crb(c,2)) { goto L_800E790C; } // 800E78F8
  cmpu(c,0,c->r[4],0x0000000Bu); // 800E78FC
  if (crb(c,2)) { goto L_800E790C; } // 800E7900
  cmpu(c,0,c->r[4],0x0000000Cu); // 800E7904
  if (!crb(c,2)) { goto L_800E7914; } // 800E7908
L_800E790C:;
  c->r[0]=0u+0x00000001u; // 800E790C
  goto L_800E7958; // 800E7910
L_800E7914:;
  c->r[3]=0u+0x802B0000u; // 800E7914
  {uint32_t ea=c->r[3]+0xFFFFFA78u; c->r[0]=R32(ea); c->r[3]=ea;} // 800E7918
  cmpu(c,0,c->r[4],c->r[0]); // 800E791C
  if (!crb(c,2)) { goto L_800E792C; } // 800E7920
  c->r[0]=0u+0x00000001u; // 800E7924
  goto L_800E7958; // 800E7928
L_800E792C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E792C
  cmpu(c,0,c->r[4],c->r[0]); // 800E7930
  if (!crb(c,2)) { goto L_800E7940; } // 800E7934
  c->r[0]=0u+0x00000001u; // 800E7938
  goto L_800E7958; // 800E793C
L_800E7940:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E7940
  cmpu(c,0,c->r[4],c->r[0]); // 800E7944
  if (!crb(c,2)) { goto L_800E7954; } // 800E7948
  c->r[0]=0u+0x00000001u; // 800E794C
  goto L_800E7958; // 800E7950
L_800E7954:;
  c->r[0]=0u+0x00000000u; // 800E7954
L_800E7958:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7958
  if (crb(c,2)) { goto L_800E79BC; } // 800E795C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7960
  cmpu(c,0,c->r[0],0x0000000Bu); // 800E7964
  if (crb(c,2)) { goto L_800E7978; } // 800E7968
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E796C
  cmpu(c,0,c->r[0],0x0000000Au); // 800E7970
  if (!crb(c,2)) { goto L_800E7984; } // 800E7974
L_800E7978:;
  c->lr=0x800E797Cu; f_800EBDB0(c); // 800E7978
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E797C
  goto L_800E7988; // 800E7980
L_800E7984:;
  c->lr=0x800E7988u; f_800EBDB0(c); // 800E7984
L_800E7988:;
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7988
  c->r[4]=c->r[30]+0x00004B20u; // 800E798C
  c->r[0]=0u+0x00000000u; // 800E7990
  W32(c->r[13]+0xFFFFA7B0u,c->r[4]); // 800E7994
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E7998
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E799C
  cmps(c,0,(int32_t)c->r[12],0); // 800E79A0
  if (crb(c,2)) { goto L_800E79B4; } // 800E79A4
  c->r[4]=c->r[31]|c->r[31]; // 800E79A8
  c->ctr=c->r[12]; // 800E79AC
  if (true) { c->lr=0x800E79B4u; dispatch(c,c->ctr); } // 800E79B0
L_800E79B4:;
  c->lr=0x800E79B8u; f_800E68A0(c); // 800E79B4
  goto L_800E7B34; // 800E79B8
L_800E79BC:;
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E79BC
  c->r[3]=c->r[30]+0x00004B20u; // 800E79C0
  c->r[0]=0u+0x00000000u; // 800E79C4
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E79C8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E79CC
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E79D0
  cmps(c,0,(int32_t)c->r[12],0); // 800E79D4
  if (crb(c,2)) { goto L_800E79EC; } // 800E79D8
  c->r[4]=c->r[31]|c->r[31]; // 800E79DC
  c->r[3]=0u+0x00000000u; // 800E79E0
  c->ctr=c->r[12]; // 800E79E4
  if (true) { c->lr=0x800E79ECu; dispatch(c,c->ctr); } // 800E79E8
L_800E79EC:;
  c->lr=0x800E79F0u; f_800E68A0(c); // 800E79EC
  goto L_800E7B34; // 800E79F0
L_800E79F4:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E79F4
  cmpu(c,0,c->r[0],0x0000000Eu); // 800E79F8
  if (!crb(c,2)) { goto L_800E7A18; } // 800E79FC
  c->r[3]=0u+0x01230000u; // 800E7A00
  c->r[4]=0u+0x800E0000u; // 800E7A04
  c->r[3]=c->r[3]+0x00004567u; // 800E7A08
  c->r[4]=c->r[4]+0x00004150u; // 800E7A0C
  c->lr=0x800E7A14u; f_800E9350(c); // 800E7A10
  goto L_800E7B34; // 800E7A14
L_800E7A18:;
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7A18
  cmpu(c,0,c->r[0],0x00000001u); // 800E7A1C
  if (crb(c,2)) { goto L_800E7A54; } // 800E7A20
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7A24
  cmpu(c,0,c->r[0],0x00000004u); // 800E7A28
  if (crb(c,2)) { goto L_800E7A54; } // 800E7A2C
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7A30
  cmpu(c,0,c->r[0],0x00000005u); // 800E7A34
  if (crb(c,2)) { goto L_800E7A54; } // 800E7A38
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7A3C
  cmpu(c,0,c->r[0],0x00000021u); // 800E7A40
  if (crb(c,2)) { goto L_800E7A54; } // 800E7A44
  c->r[0]=R32(c->r[13]+0xFFFFA7A4u); // 800E7A48
  cmpu(c,0,c->r[0],0x0000000Eu); // 800E7A4C
  if (!crb(c,2)) { goto L_800E7B18; } // 800E7A50
L_800E7A54:;
  c->r[29]=R32(c->r[13]+0xFFFFA7B0u); // 800E7A54
  c->r[3]=R32(c->r[29]+0x00000020u); // 800E7A58
  c->r[0]=R32(c->r[29]+0x00000014u); // 800E7A5C
  cmpu(c,0,c->r[3],c->r[0]); // 800E7A60
  if (!crb(c,2)) { goto L_800E7B18; } // 800E7A64
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E7A68
  cmps(c,0,(int32_t)c->r[0],0); // 800E7A6C
  if (crb(c,2)) { goto L_800E7AD4; } // 800E7A70
  c->r[4]=0u+0x00000000u; // 800E7A74
  W32(c->r[13]+0xFFFFA734u,c->r[4]); // 800E7A78
  c->r[3]=c->r[30]+0x00004B20u; // 800E7A7C
  c->r[0]=0u+0x0000000Au; // 800E7A80
  W32(c->r[13]+0xFFFFA730u,c->r[4]); // 800E7A84
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E7A88
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E7A8C
  c->r[12]=R32(c->r[29]+0x00000028u); // 800E7A90
  cmps(c,0,(int32_t)c->r[12],0); // 800E7A94
  if (crb(c,2)) { goto L_800E7AAC; } // 800E7A98
  c->r[4]=c->r[29]|c->r[29]; // 800E7A9C
  c->r[3]=0u+0xFFFFFFFDu; // 800E7AA0
  c->ctr=c->r[12]; // 800E7AA4
  if (true) { c->lr=0x800E7AACu; dispatch(c,c->ctr); } // 800E7AA8
L_800E7AAC:;
  c->r[12]=R32(c->r[13]+0xFFFFA7A0u); // 800E7AAC
  cmps(c,0,(int32_t)c->r[12],0); // 800E7AB0
  if (crb(c,2)) { goto L_800E7AC8; } // 800E7AB4
  c->r[4]=c->r[29]|c->r[29]; // 800E7AB8
  c->r[3]=0u+0x00000000u; // 800E7ABC
  c->ctr=c->r[12]; // 800E7AC0
  if (true) { c->lr=0x800E7AC8u; dispatch(c,c->ctr); } // 800E7AC4
L_800E7AC8:;
  c->lr=0x800E7ACCu; f_800E68A0(c); // 800E7AC8
  c->r[0]=0u+0x00000001u; // 800E7ACC
  goto L_800E7AD8; // 800E7AD0
L_800E7AD4:;
  c->r[0]=0u+0x00000000u; // 800E7AD4
L_800E7AD8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7AD8
  if (!crb(c,2)) { goto L_800E7B34; } // 800E7ADC
  c->r[31]=R32(c->r[13]+0xFFFFA7B0u); // 800E7AE0
  c->r[3]=c->r[30]+0x00004B20u; // 800E7AE4
  c->r[0]=0u+0x00000000u; // 800E7AE8
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E7AEC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E7AF0
  c->r[12]=R32(c->r[31]+0x00000028u); // 800E7AF4
  cmps(c,0,(int32_t)c->r[12],0); // 800E7AF8
  if (crb(c,2)) { goto L_800E7B10; } // 800E7AFC
  c->r[4]=c->r[31]|c->r[31]; // 800E7B00
  c->r[3]=R32(c->r[31]+0x00000020u); // 800E7B04
  c->ctr=c->r[12]; // 800E7B08
  if (true) { c->lr=0x800E7B10u; dispatch(c,c->ctr); } // 800E7B0C
L_800E7B10:;
  c->lr=0x800E7B14u; f_800E68A0(c); // 800E7B10
  goto L_800E7B34; // 800E7B14
L_800E7B18:;
  c->r[3]=0u+0x00000027u; // 800E7B18
  c->r[4]=0u+0x00000000u; // 800E7B1C
  c->r[5]=0u+0x00000000u; // 800E7B20
  c->lr=0x800E7B28u; f_800E3AF0(c); // 800E7B24
  c->r[3]=0u+0x800E0000u; // 800E7B28
  c->r[3]=c->r[3]+0x00004380u; // 800E7B2C
  c->lr=0x800E7B34u; f_800EAE30(c); // 800E7B30
L_800E7B34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E7B34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E7B38
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E7B3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E7B40
  c->lr=c->r[0]; // 800E7B44
  c->r[1]=c->r[1]+0x00000020u; // 800E7B48
  return; // 800E7B4C
}

// DVDReadAbsAsyncPrio
void f_800E7B50(Ctx* __restrict c) {
  trace_call(0x800E7B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7B50
  c->r[0]=c->lr; // 800E7B54
  c->r[9]=0u+0x00000001u; // 800E7B58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7B5C
  c->r[0]=0u+0x00000000u; // 800E7B60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E7B64
  c->r[31]=c->r[8]|c->r[8]; // 800E7B68
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E7B6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E7B70
  c->r[29]=c->r[3]|c->r[3]; // 800E7B74
  W32(c->r[3]+0x00000008u,c->r[9]); // 800E7B78
  W32(c->r[3]+0x00000018u,c->r[4]); // 800E7B7C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800E7B80
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E7B84
  W32(c->r[3]+0x00000020u,c->r[0]); // 800E7B88
  W32(c->r[3]+0x00000028u,c->r[7]); // 800E7B8C
  c->r[0]=R32(c->r[13]+0xFFFF9034u); // 800E7B90
  cmps(c,0,(int32_t)c->r[0],0); // 800E7B94
  if (crb(c,2)) { goto L_800E7BD0; } // 800E7B98
  cmpu(c,0,c->r[9],0x00000001u); // 800E7B9C
  if (crb(c,2)) { goto L_800E7BC4; } // 800E7BA0
  cmpu(c,0,c->r[9],0x00000004u); // 800E7BA4
  if (crb(c,2)) { goto L_800E7BC4; } // 800E7BA8
  cmpu(c,0,c->r[9],0x00000005u); // 800E7BAC
  if (crb(c,2)) { goto L_800E7BC4; } // 800E7BB0
  cmpu(c,0,c->r[9],0x00000021u); // 800E7BB4
  if (crb(c,2)) { goto L_800E7BC4; } // 800E7BB8
  cmpu(c,0,c->r[9],0x0000000Eu); // 800E7BBC
  if (!crb(c,2)) { goto L_800E7BD0; } // 800E7BC0
L_800E7BC4:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 800E7BC4
  c->r[4]=R32(c->r[29]+0x00000014u); // 800E7BC8
  c->lr=0x800E7BD0u; f_800C7750(c); // 800E7BCC
L_800E7BD0:;
  c->lr=0x800E7BD4u; f_800CBAA0(c); // 800E7BD0
  c->r[0]=0u+0x00000002u; // 800E7BD4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E7BD8
  c->r[30]=c->r[3]|c->r[3]; // 800E7BDC
  c->r[3]=c->r[31]|c->r[31]; // 800E7BE0
  c->r[4]=c->r[29]|c->r[29]; // 800E7BE4
  c->lr=0x800E7BECu; f_800E8760(c); // 800E7BE8
  c->r[0]=R32(c->r[13]+0xFFFFA7B0u); // 800E7BEC
  c->r[31]=c->r[3]|c->r[3]; // 800E7BF0
  cmps(c,0,(int32_t)c->r[0],0); // 800E7BF4
  if (!crb(c,2)) { goto L_800E7C0C; } // 800E7BF8
  c->r[0]=R32(c->r[13]+0xFFFFA724u); // 800E7BFC
  cmps(c,0,(int32_t)c->r[0],0); // 800E7C00
  if (!crb(c,2)) { goto L_800E7C0C; } // 800E7C04
  c->lr=0x800E7C0Cu; f_800E68A0(c); // 800E7C08
L_800E7C0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E7C0C
  c->lr=0x800E7C14u; f_800CBAE0(c); // 800E7C10
  c->r[3]=c->r[31]|c->r[31]; // 800E7C14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E7C18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E7C1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E7C20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E7C24
  c->lr=c->r[0]; // 800E7C28
  c->r[1]=c->r[1]+0x00000020u; // 800E7C2C
  return; // 800E7C30
}

// DVDInquiryAsync
void f_800E7C40(Ctx* __restrict c) {
  trace_call(0x800E7C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7C40
  c->r[0]=c->lr; // 800E7C44
  c->r[7]=0u+0x0000000Eu; // 800E7C48
  c->r[6]=0u+0x00000020u; // 800E7C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7C50
  c->r[0]=0u+0x00000000u; // 800E7C54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7C58
  c->r[31]=c->r[3]|c->r[3]; // 800E7C5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E7C60
  W32(c->r[3]+0x00000008u,c->r[7]); // 800E7C64
  W32(c->r[3]+0x00000018u,c->r[4]); // 800E7C68
  W32(c->r[3]+0x00000014u,c->r[6]); // 800E7C6C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800E7C70
  W32(c->r[3]+0x00000028u,c->r[5]); // 800E7C74
  c->r[0]=R32(c->r[13]+0xFFFF9034u); // 800E7C78
  cmps(c,0,(int32_t)c->r[0],0); // 800E7C7C
  if (crb(c,2)) { goto L_800E7CB8; } // 800E7C80
  cmpu(c,0,c->r[7],0x00000001u); // 800E7C84
  if (crb(c,2)) { goto L_800E7CAC; } // 800E7C88
  cmpu(c,0,c->r[7],0x00000004u); // 800E7C8C
  if (crb(c,2)) { goto L_800E7CAC; } // 800E7C90
  cmpu(c,0,c->r[7],0x00000005u); // 800E7C94
  if (crb(c,2)) { goto L_800E7CAC; } // 800E7C98
  cmpu(c,0,c->r[7],0x00000021u); // 800E7C9C
  if (crb(c,2)) { goto L_800E7CAC; } // 800E7CA0
  cmpu(c,0,c->r[7],0x0000000Eu); // 800E7CA4
  if (!crb(c,2)) { goto L_800E7CB8; } // 800E7CA8
L_800E7CAC:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 800E7CAC
  c->r[4]=R32(c->r[31]+0x00000014u); // 800E7CB0
  c->lr=0x800E7CB8u; f_800C7750(c); // 800E7CB4
L_800E7CB8:;
  c->lr=0x800E7CBCu; f_800CBAA0(c); // 800E7CB8
  c->r[0]=0u+0x00000002u; // 800E7CBC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E7CC0
  c->r[30]=c->r[3]|c->r[3]; // 800E7CC4
  c->r[4]=c->r[31]|c->r[31]; // 800E7CC8
  c->r[3]=0u+0x00000002u; // 800E7CCC
  c->lr=0x800E7CD4u; f_800E8760(c); // 800E7CD0
  c->r[0]=R32(c->r[13]+0xFFFFA7B0u); // 800E7CD4
  c->r[31]=c->r[3]|c->r[3]; // 800E7CD8
  cmps(c,0,(int32_t)c->r[0],0); // 800E7CDC
  if (!crb(c,2)) { goto L_800E7CF4; } // 800E7CE0
  c->r[0]=R32(c->r[13]+0xFFFFA724u); // 800E7CE4
  cmps(c,0,(int32_t)c->r[0],0); // 800E7CE8
  if (!crb(c,2)) { goto L_800E7CF4; } // 800E7CEC
  c->lr=0x800E7CF4u; f_800E68A0(c); // 800E7CF0
L_800E7CF4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E7CF4
  c->lr=0x800E7CFCu; f_800CBAE0(c); // 800E7CF8
  c->r[3]=c->r[31]|c->r[31]; // 800E7CFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7D00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E7D04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7D08
  c->lr=c->r[0]; // 800E7D0C
  c->r[1]=c->r[1]+0x00000010u; // 800E7D10
  return; // 800E7D14
}

// DVDGetCommandBlockStatus
void f_800E7D20(Ctx* __restrict c) {
  trace_call(0x800E7D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7D20
  c->r[0]=c->lr; // 800E7D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7D28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E7D2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E7D30
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E7D34
  c->r[29]=c->r[3]|c->r[3]; // 800E7D38
  c->lr=0x800E7D40u; f_800CBAA0(c); // 800E7D3C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E7D40
  c->r[30]=c->r[3]|c->r[3]; // 800E7D44
  cmps(c,0,(int32_t)c->r[0],3); // 800E7D48
  if (!crb(c,2)) { goto L_800E7D58; } // 800E7D4C
  c->r[31]=0u+0x00000001u; // 800E7D50
  goto L_800E7DC0; // 800E7D54
L_800E7D58:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E7D58
  cmps(c,0,(int32_t)c->r[0],5); // 800E7D5C
  if (!crb(c,2)) { goto L_800E7D6C; } // 800E7D60
  c->r[31]=0u+0x00000004u; // 800E7D64
  goto L_800E7DC0; // 800E7D68
L_800E7D6C:;
  c->r[31]=0u+0x802F0000u; // 800E7D6C
  c->r[0]=R32(c->r[13]+0xFFFFA7B0u); // 800E7D70
  c->r[31]=c->r[31]+0xFFFFFC10u; // 800E7D74
  cmpu(c,0,c->r[0],c->r[31]); // 800E7D78
  if (!crb(c,2)) { goto L_800E7DBC; } // 800E7D7C
  c->lr=0x800E7D84u; f_800E88D0(c); // 800E7D80
  cmps(c,0,(int32_t)c->r[3],0); // 800E7D84
  if (crb(c,2)) { goto L_800E7DA4; } // 800E7D88
  cmpu(c,0,c->r[29],c->r[3]); // 800E7D8C
  if (!crb(c,2)) { goto L_800E7D9C; } // 800E7D90
  c->r[31]=0u+0x00000001u; // 800E7D94
  goto L_800E7DC0; // 800E7D98
L_800E7D9C:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 800E7D9C
  goto L_800E7DC0; // 800E7DA0
L_800E7DA4:;
  cmpu(c,0,c->r[29],c->r[31]); // 800E7DA4
  if (!crb(c,2)) { goto L_800E7DB4; } // 800E7DA8
  c->r[31]=0u+0x00000000u; // 800E7DAC
  goto L_800E7DC0; // 800E7DB0
L_800E7DB4:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 800E7DB4
  goto L_800E7DC0; // 800E7DB8
L_800E7DBC:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 800E7DBC
L_800E7DC0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E7DC0
  c->lr=0x800E7DC8u; f_800CBAE0(c); // 800E7DC4
  c->r[3]=c->r[31]|c->r[31]; // 800E7DC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E7DCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E7DD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E7DD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E7DD8
  c->lr=c->r[0]; // 800E7DDC
  c->r[1]=c->r[1]+0x00000020u; // 800E7DE0
  return; // 800E7DE4
}

// DVDGetDriveStatus
void f_800E7DF0(Ctx* __restrict c) {
  trace_call(0x800E7DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7DF0
  c->r[0]=c->lr; // 800E7DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7DFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E7E00
  c->lr=0x800E7E08u; f_800CBAA0(c); // 800E7E04
  c->r[0]=R32(c->r[13]+0xFFFFA72Cu); // 800E7E08
  c->r[31]=c->r[3]|c->r[3]; // 800E7E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800E7E10
  if (crb(c,2)) { goto L_800E7E20; } // 800E7E14
  c->r[30]=0u+0xFFFFFFFFu; // 800E7E18
  goto L_800E7E68; // 800E7E1C
L_800E7E20:;
  c->r[0]=R32(c->r[13]+0xFFFFA728u); // 800E7E20
  cmps(c,0,(int32_t)c->r[0],0); // 800E7E24
  if (crb(c,2)) { goto L_800E7E34; } // 800E7E28
  c->r[30]=0u+0x00000008u; // 800E7E2C
  goto L_800E7E68; // 800E7E30
L_800E7E34:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E7E34
  cmps(c,0,(int32_t)c->r[3],0); // 800E7E38
  if (!crb(c,2)) { goto L_800E7E48; } // 800E7E3C
  c->r[30]=0u+0x00000000u; // 800E7E40
  goto L_800E7E68; // 800E7E44
L_800E7E48:;
  c->r[4]=0u+0x802F0000u; // 800E7E48
  c->r[4]=c->r[4]+0xFFFFFAE0u; // 800E7E4C
  cmpu(c,0,c->r[3],c->r[4]); // 800E7E50
  if (!crb(c,2)) { goto L_800E7E60; } // 800E7E54
  c->r[3]=0u+0x00000000u; // 800E7E58
  goto L_800E7E64; // 800E7E5C
L_800E7E60:;
  c->lr=0x800E7E64u; f_800E7D20(c); // 800E7E60
L_800E7E64:;
  c->r[30]=c->r[3]|c->r[3]; // 800E7E64
L_800E7E68:;
  c->r[3]=c->r[31]|c->r[31]; // 800E7E68
  c->lr=0x800E7E70u; f_800CBAE0(c); // 800E7E6C
  c->r[3]=c->r[30]|c->r[30]; // 800E7E70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7E74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E7E78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7E7C
  c->lr=c->r[0]; // 800E7E80
  c->r[1]=c->r[1]+0x00000010u; // 800E7E84
  return; // 800E7E88
}

// DVDSetAutoInvalidation
void f_800E7E90(Ctx* __restrict c) {
  trace_call(0x800E7E90u);
  c->r[0]=c->r[3]|c->r[3]; // 800E7E90
  c->r[3]=R32(c->r[13]+0xFFFF9034u); // 800E7E94
  W32(c->r[13]+0xFFFF9034u,c->r[0]); // 800E7E98
  return; // 800E7E9C
}

// DVDResume
void f_800E7EA0(Ctx* __restrict c) {
  trace_call(0x800E7EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7EA0
  c->r[0]=c->lr; // 800E7EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7EAC
  c->lr=0x800E7EB4u; f_800CBAA0(c); // 800E7EB0
  c->r[4]=0u+0x00000000u; // 800E7EB4
  W32(c->r[13]+0xFFFFA724u,c->r[4]); // 800E7EB8
  c->r[0]=R32(c->r[13]+0xFFFFA728u); // 800E7EBC
  c->r[31]=c->r[3]|c->r[3]; // 800E7EC0
  cmps(c,0,(int32_t)c->r[0],0); // 800E7EC4
  if (crb(c,2)) { goto L_800E7ED4; } // 800E7EC8
  W32(c->r[13]+0xFFFFA728u,c->r[4]); // 800E7ECC
  c->lr=0x800E7ED4u; f_800E68A0(c); // 800E7ED0
L_800E7ED4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E7ED4
  c->lr=0x800E7EDCu; f_800CBAE0(c); // 800E7ED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7EDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7EE0
  c->lr=c->r[0]; // 800E7EE4
  c->r[1]=c->r[1]+0x00000010u; // 800E7EE8
  return; // 800E7EEC
}

// DVDCancelAsync
void f_800E7EF0(Ctx* __restrict c) {
  trace_call(0x800E7EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7EF0
  c->r[0]=c->lr; // 800E7EF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7EF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E7EFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E7F00
  c->r[30]=c->r[4]|c->r[4]; // 800E7F04
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E7F08
  c->r[29]=c->r[3]|c->r[3]; // 800E7F0C
  c->lr=0x800E7F14u; f_800CBAA0(c); // 800E7F10
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800E7F14
  c->r[31]=c->r[3]|c->r[3]; // 800E7F18
  c->r[0]=c->r[4]+0x00000001u; // 800E7F1C
  cmpu(c,0,c->r[0],0x0000000Du); // 800E7F20
  if (crb(c,1)) { goto L_800E822C; } // 800E7F24
  c->r[4]=0u+0x802B0000u; // 800E7F28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E7F2C
  c->r[4]=c->r[4]+0xFFFFFB30u; // 800E7F30
  c->r[4]=R32(c->r[4]+c->r[0]); // 800E7F34
  c->ctr=c->r[4]; // 800E7F38
  if (true) { switch (c->ctr) { case 0x800E7F40u: goto L_800E7F40; case 0x800E7F60u: goto L_800E7F60; case 0x800E7FC4u: goto L_800E7FC4; case 0x800E8010u: goto L_800E8010; case 0x800E8034u: goto L_800E8034; case 0x800E8054u: goto L_800E8054; case 0x800E80B4u: goto L_800E80B4; case 0x800E80E0u: goto L_800E80E0; case 0x800E81DCu: goto L_800E81DC; case 0x800E822Cu: goto L_800E822C; default: break; } dispatch(c,c->ctr); return; } // 800E7F3C
L_800E7F40:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E7F40
  if (crb(c,2)) { goto L_800E822C; } // 800E7F44
  c->r[12]=c->r[30]|c->r[30]; // 800E7F48
  c->r[4]=c->r[29]|c->r[29]; // 800E7F4C
  c->r[3]=0u+0x00000000u; // 800E7F50
  c->ctr=c->r[12]; // 800E7F54
  if (true) { c->lr=0x800E7F5Cu; dispatch(c,c->ctr); } // 800E7F58
  goto L_800E822C; // 800E7F5C
L_800E7F60:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E7F60
  cmps(c,0,(int32_t)c->r[0],0); // 800E7F64
  if (crb(c,2)) { goto L_800E7F78; } // 800E7F68
  c->lr=0x800E7F70u; f_800CBAE0(c); // 800E7F6C
  c->r[3]=0u+0x00000000u; // 800E7F70
  goto L_800E8238; // 800E7F74
L_800E7F78:;
  c->r[0]=0u+0x00000001u; // 800E7F78
  W32(c->r[13]+0xFFFFA730u,c->r[0]); // 800E7F7C
  W32(c->r[13]+0xFFFFA7A0u,c->r[30]); // 800E7F80
  c->r[0]=R32(c->r[29]+0x00000008u); // 800E7F84
  cmpu(c,0,c->r[0],0x00000004u); // 800E7F88
  if (crb(c,2)) { goto L_800E7FB8; } // 800E7F8C
  cmpu(c,0,c->r[0],0x00000021u); // 800E7F90
  if (crb(c,2)) { goto L_800E7FB8; } // 800E7F94
  cmpu(c,0,c->r[0],0x00000022u); // 800E7F98
  if (crb(c,2)) { goto L_800E7FB8; } // 800E7F9C
  cmpu(c,0,c->r[0],0x00000029u); // 800E7FA0
  if (crb(c,2)) { goto L_800E7FB8; } // 800E7FA4
  cmpu(c,0,c->r[0],0x0000002Au); // 800E7FA8
  if (crb(c,2)) { goto L_800E7FB8; } // 800E7FAC
  cmpu(c,0,c->r[0],0x00000001u); // 800E7FB0
  if (!crb(c,2)) { goto L_800E822C; } // 800E7FB4
L_800E7FB8:;
  c->r[0]=0u+0x00000001u; // 800E7FB8
  W32(c->r[13]+0xFFFFA740u,c->r[0]); // 800E7FBC
  goto L_800E822C; // 800E7FC0
L_800E7FC4:;
  c->r[3]=c->r[29]|c->r[29]; // 800E7FC4
  c->lr=0x800E7FCCu; f_800E8940(c); // 800E7FC8
  c->r[12]=R32(c->r[29]+0x00000028u); // 800E7FCC
  c->r[0]=0u+0x0000000Au; // 800E7FD0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E7FD4
  cmps(c,0,(int32_t)c->r[12],0); // 800E7FD8
  if (crb(c,2)) { goto L_800E7FF0; } // 800E7FDC
  c->r[4]=c->r[29]|c->r[29]; // 800E7FE0
  c->r[3]=0u+0xFFFFFFFDu; // 800E7FE4
  c->ctr=c->r[12]; // 800E7FE8
  if (true) { c->lr=0x800E7FF0u; dispatch(c,c->ctr); } // 800E7FEC
L_800E7FF0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E7FF0
  if (crb(c,2)) { goto L_800E822C; } // 800E7FF4
  c->r[12]=c->r[30]|c->r[30]; // 800E7FF8
  c->r[4]=c->r[29]|c->r[29]; // 800E7FFC
  c->r[3]=0u+0x00000000u; // 800E8000
  c->ctr=c->r[12]; // 800E8004
  if (true) { c->lr=0x800E800Cu; dispatch(c,c->ctr); } // 800E8008
  goto L_800E822C; // 800E800C
L_800E8010:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800E8010
  cmpu(c,0,c->r[0],0x0000002Au); // 800E8014
  if (crb(c,1)) { goto L_800E80B4; } // 800E8018
  c->r[3]=0u+0x802B0000u; // 800E801C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E8020
  c->r[3]=c->r[3]+0xFFFFFA84u; // 800E8024
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E8028
  c->ctr=c->r[3]; // 800E802C
  if (true) { switch (c->ctr) { case 0x800E7F40u: goto L_800E7F40; case 0x800E7F60u: goto L_800E7F60; case 0x800E7FC4u: goto L_800E7FC4; case 0x800E8010u: goto L_800E8010; case 0x800E8034u: goto L_800E8034; case 0x800E8054u: goto L_800E8054; case 0x800E80B4u: goto L_800E80B4; case 0x800E80E0u: goto L_800E80E0; case 0x800E81DCu: goto L_800E81DC; case 0x800E822Cu: goto L_800E822C; default: break; } dispatch(c,c->ctr); return; } // 800E8030
L_800E8034:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E8034
  if (crb(c,2)) { goto L_800E822C; } // 800E8038
  c->r[12]=c->r[30]|c->r[30]; // 800E803C
  c->r[4]=c->r[29]|c->r[29]; // 800E8040
  c->r[3]=0u+0x00000000u; // 800E8044
  c->ctr=c->r[12]; // 800E8048
  if (true) { c->lr=0x800E8050u; dispatch(c,c->ctr); } // 800E804C
  goto L_800E822C; // 800E8050
L_800E8054:;
  c->r[0]=R32(c->r[13]+0xFFFFA448u); // 800E8054
  cmps(c,0,(int32_t)c->r[0],0); // 800E8058
  if (crb(c,2)) { goto L_800E80B4; } // 800E805C
  c->r[3]=0u+0x802F0000u; // 800E8060
  c->r[0]=0u+0x0000000Au; // 800E8064
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E8068
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E806C
  c->r[12]=R32(c->r[29]+0x00000028u); // 800E8070
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E8074
  cmps(c,0,(int32_t)c->r[12],0); // 800E8078
  if (crb(c,2)) { goto L_800E8090; } // 800E807C
  c->r[4]=c->r[29]|c->r[29]; // 800E8080
  c->r[3]=0u+0xFFFFFFFDu; // 800E8084
  c->ctr=c->r[12]; // 800E8088
  if (true) { c->lr=0x800E8090u; dispatch(c,c->ctr); } // 800E808C
L_800E8090:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E8090
  if (crb(c,2)) { goto L_800E80AC; } // 800E8094
  c->r[12]=c->r[30]|c->r[30]; // 800E8098
  c->r[4]=c->r[29]|c->r[29]; // 800E809C
  c->r[3]=0u+0x00000000u; // 800E80A0
  c->ctr=c->r[12]; // 800E80A4
  if (true) { c->lr=0x800E80ACu; dispatch(c,c->ctr); } // 800E80A8
L_800E80AC:;
  c->lr=0x800E80B0u; f_800E68A0(c); // 800E80AC
  goto L_800E822C; // 800E80B0
L_800E80B4:;
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E80B4
  cmps(c,0,(int32_t)c->r[0],0); // 800E80B8
  if (crb(c,2)) { goto L_800E80D0; } // 800E80BC
  c->r[3]=c->r[31]|c->r[31]; // 800E80C0
  c->lr=0x800E80C8u; f_800CBAE0(c); // 800E80C4
  c->r[3]=0u+0x00000000u; // 800E80C8
  goto L_800E8238; // 800E80CC
L_800E80D0:;
  c->r[0]=0u+0x00000001u; // 800E80D0
  W32(c->r[13]+0xFFFFA730u,c->r[0]); // 800E80D4
  W32(c->r[13]+0xFFFFA7A0u,c->r[30]); // 800E80D8
  goto L_800E822C; // 800E80DC
L_800E80E0:;
  c->r[0]=R32(c->r[13]+0xFFFFA748u); // 800E80E0
  cmps(c,0,(int32_t)c->r[0],0); // 800E80E4
  if (!crb(c,2)) { goto L_800E8104; } // 800E80E8
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E80EC
  cmps(c,0,(int32_t)c->r[0],0); // 800E80F0
  if (!crb(c,2)) { goto L_800E8104; } // 800E80F4
  c->lr=0x800E80FCu; f_800CBAE0(c); // 800E80F8
  c->r[3]=0u+0x00000000u; // 800E80FC
  goto L_800E8238; // 800E8100
L_800E8104:;
  c->r[0]=R32(c->r[13]+0xFFFFA744u); // 800E8104
  cmps(c,0,(int32_t)c->r[0],0); // 800E8108
  if (crb(c,2)) { goto L_800E8124; } // 800E810C
  c->r[3]=0u+0x802F0000u; // 800E8110
  c->r[3]=c->r[3]+0xFFFFFB40u; // 800E8114
  c->lr=0x800E811Cu; f_800C6A30(c); // 800E8118
  c->r[0]=0u+0x00000000u; // 800E811C
  W32(c->r[13]+0xFFFFA744u,c->r[0]); // 800E8120
L_800E8124:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E8124
  cmps(c,0,(int32_t)c->r[0],4); // 800E8128
  if (!crb(c,2)) { goto L_800E8138; } // 800E812C
  c->r[0]=0u+0x00000003u; // 800E8130
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E8134
L_800E8138:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E8138
  cmps(c,0,(int32_t)c->r[0],5); // 800E813C
  if (!crb(c,2)) { goto L_800E814C; } // 800E8140
  c->r[0]=0u+0x00000004u; // 800E8144
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E8148
L_800E814C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E814C
  cmps(c,0,(int32_t)c->r[0],6); // 800E8150
  if (!crb(c,2)) { goto L_800E8160; } // 800E8154
  c->r[0]=0u+0x00000001u; // 800E8158
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E815C
L_800E8160:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E8160
  cmps(c,0,(int32_t)c->r[0],11); // 800E8164
  if (!crb(c,2)) { goto L_800E8174; } // 800E8168
  c->r[0]=0u+0x00000002u; // 800E816C
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E8170
L_800E8174:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E8174
  cmps(c,0,(int32_t)c->r[0],7); // 800E8178
  if (!crb(c,2)) { goto L_800E8188; } // 800E817C
  c->r[0]=0u+0x00000007u; // 800E8180
  W32(c->r[13]+0xFFFFA734u,c->r[0]); // 800E8184
L_800E8188:;
  c->r[3]=0u+0x802F0000u; // 800E8188
  c->r[0]=0u+0x0000000Au; // 800E818C
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E8190
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E8194
  c->r[12]=R32(c->r[29]+0x00000028u); // 800E8198
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E819C
  cmps(c,0,(int32_t)c->r[12],0); // 800E81A0
  if (crb(c,2)) { goto L_800E81B8; } // 800E81A4
  c->r[4]=c->r[29]|c->r[29]; // 800E81A8
  c->r[3]=0u+0xFFFFFFFDu; // 800E81AC
  c->ctr=c->r[12]; // 800E81B0
  if (true) { c->lr=0x800E81B8u; dispatch(c,c->ctr); } // 800E81B4
L_800E81B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E81B8
  if (crb(c,2)) { goto L_800E81D4; } // 800E81BC
  c->r[12]=c->r[30]|c->r[30]; // 800E81C0
  c->r[4]=c->r[29]|c->r[29]; // 800E81C4
  c->r[3]=0u+0x00000000u; // 800E81C8
  c->ctr=c->r[12]; // 800E81CC
  if (true) { c->lr=0x800E81D4u; dispatch(c,c->ctr); } // 800E81D0
L_800E81D4:;
  c->lr=0x800E81D8u; f_800E68A0(c); // 800E81D4
  goto L_800E822C; // 800E81D8
L_800E81DC:;
  c->r[3]=0u+0x802F0000u; // 800E81DC
  c->r[0]=0u+0x0000000Au; // 800E81E0
  c->r[3]=c->r[3]+0xFFFFFAE0u; // 800E81E4
  W32(c->r[13]+0xFFFFA7B0u,c->r[3]); // 800E81E8
  c->r[12]=R32(c->r[29]+0x00000028u); // 800E81EC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E81F0
  cmps(c,0,(int32_t)c->r[12],0); // 800E81F4
  if (crb(c,2)) { goto L_800E820C; } // 800E81F8
  c->r[4]=c->r[29]|c->r[29]; // 800E81FC
  c->r[3]=0u+0xFFFFFFFDu; // 800E8200
  c->ctr=c->r[12]; // 800E8204
  if (true) { c->lr=0x800E820Cu; dispatch(c,c->ctr); } // 800E8208
L_800E820C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E820C
  if (crb(c,2)) { goto L_800E8228; } // 800E8210
  c->r[12]=c->r[30]|c->r[30]; // 800E8214
  c->r[4]=c->r[29]|c->r[29]; // 800E8218
  c->r[3]=0u+0x00000000u; // 800E821C
  c->ctr=c->r[12]; // 800E8220
  if (true) { c->lr=0x800E8228u; dispatch(c,c->ctr); } // 800E8224
L_800E8228:;
  c->lr=0x800E822Cu; f_800E68A0(c); // 800E8228
L_800E822C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E822C
  c->lr=0x800E8234u; f_800CBAE0(c); // 800E8230
  c->r[3]=0u+0x00000001u; // 800E8234
L_800E8238:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8238
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E823C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E8240
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E8244
  c->lr=c->r[0]; // 800E8248
  c->r[1]=c->r[1]+0x00000020u; // 800E824C
  return; // 800E8250
}

// DVDCancel
void f_800E8260(Ctx* __restrict c) {
  trace_call(0x800E8260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8260
  c->r[0]=c->lr; // 800E8264
  c->r[4]=0u+0x800F0000u; // 800E8268
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E826C
  c->r[4]=c->r[4]+0xFFFF8320u; // 800E8270
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E8274
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E8278
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E827C
  c->r[29]=c->r[3]|c->r[3]; // 800E8280
  c->lr=0x800E8288u; f_800E7EF0(c); // 800E8284
  cmps(c,0,(int32_t)c->r[3],0); // 800E8288
  if (!crb(c,2)) { goto L_800E8298; } // 800E828C
  c->r[3]=0u+0xFFFFFFFFu; // 800E8290
  goto L_800E8304; // 800E8294
L_800E8298:;
  c->lr=0x800E829Cu; f_800CBAA0(c); // 800E8298
  c->r[30]=c->r[3]|c->r[3]; // 800E829C
  c->r[31]=0u+0x802B0000u; // 800E82A0
L_800E82A4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E82A4
  cmps(c,0,(int32_t)c->r[0],0); // 800E82A8
  if (crb(c,2)) { goto L_800E82F8; } // 800E82AC
  cmps(c,0,(int32_t)c->r[0],-1); // 800E82B0
  if (crb(c,2)) { goto L_800E82F8; } // 800E82B4
  cmps(c,0,(int32_t)c->r[0],10); // 800E82B8
  if (crb(c,2)) { goto L_800E82F8; } // 800E82BC
  cmps(c,0,(int32_t)c->r[0],3); // 800E82C0
  if (!crb(c,2)) { goto L_800E82EC; } // 800E82C4
  c->r[3]=R32(c->r[29]+0x00000008u); // 800E82C8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800E82CC
  cmpu(c,0,c->r[0],0x00000026u); // 800E82D0
  if (crb(c,1)) { goto L_800E82EC; } // 800E82D4
  c->r[3]=c->r[31]+0xFFFFFB68u; // 800E82D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E82DC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E82E0
  c->ctr=c->r[3]; // 800E82E4
  if (true) { switch (c->ctr) { case 0x800E82ECu: goto L_800E82EC; case 0x800E82F8u: goto L_800E82F8; default: break; } dispatch(c,c->ctr); return; } // 800E82E8
L_800E82EC:;
  c->r[3]=c->r[13]+0xFFFFA6F8u; // 800E82EC
  c->lr=0x800E82F4u; f_800CF9E0(c); // 800E82F0
  IRQCHK(c); goto L_800E82A4; // 800E82F4
L_800E82F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800E82F8
  c->lr=0x800E8300u; f_800CBAE0(c); // 800E82FC
  c->r[3]=0u+0x00000000u; // 800E8300
L_800E8304:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8304
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E8308
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E830C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E8310
  c->lr=c->r[0]; // 800E8314
  c->r[1]=c->r[1]+0x00000020u; // 800E8318
  return; // 800E831C
}

// cbForCancelSync
void f_800E8320(Ctx* __restrict c) {
  trace_call(0x800E8320u);
  c->r[3]=c->r[13]+0xFFFFA6F8u; // 800E8320
  f_800CFAD0(c); return; // 800E8324
}

// __BS2DVDLowCallback
void f_800E8330(Ctx* __restrict c) {
  trace_call(0x800E8330u);
  c->r[3]=0u+0x80000000u; // 800E8330
  return; // 800E8334
}

// fn_800E8340
void f_800E8340(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFA760u,c->r[3]); // 800E8340
  return; // 800E8344
}

// __DVDGetCoverStatus
void f_800E8350(Ctx* __restrict c) {
  trace_call(0x800E8350u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8350
  c->r[0]=c->lr; // 800E8354
  c->r[3]=0u+0x800F0000u; // 800E8358
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E835C
  c->r[0]=0u+0x00000000u; // 800E8360
  c->r[3]=c->r[3]+0xFFFF8340u; // 800E8364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8368
  W32(c->r[13]+0xFFFFA760u,c->r[0]); // 800E836C
  c->lr=0x800E8374u; f_800EB960(c); // 800E8370
  c->r[0]=c->r[0]|0x00000000u; // 800E8374
L_800E8378:;
  c->r[0]=R32(c->r[13]+0xFFFFA760u); // 800E8378
  cmps(c,0,(int32_t)c->r[0],0); // 800E837C
  if (crb(c,2)) { IRQCHK(c); goto L_800E8378; } // 800E8380
  c->r[0]=R32(c->r[13]+0xFFFFA760u); // 800E8384
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800E8388
  if (!crb(c,2)) { goto L_800E8398; } // 800E838C
  c->r[3]=0u+0x00000000u; // 800E8390
  goto L_800E8408; // 800E8394
L_800E8398:;
  c->lr=0x800E839Cu; f_800EB930(c); // 800E8398
  c->r[31]=c->r[3]|c->r[3]; // 800E839C
  c->lr=0x800E83A4u; f_800D0540(c); // 800E83A0
  c->r[6]=0u+0x80000000u; // 800E83A4
  c->r[5]=0u+0x10620000u; // 800E83A8
  c->r[6]=R32(c->r[6]+0x000000F8u); // 800E83AC
  c->r[7]=c->r[5]+0x00004DD3u; // 800E83B0
  c->r[8]=R32(c->r[13]+0xFFFFA788u); // 800E83B4
  c->r[0]=0u+0x00000000u; // 800E83B8
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 800E83BC
  c->r[9]=R32(c->r[13]+0xFFFFA78Cu); // 800E83C0
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 800E83C4
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 800E83C8
  c->r[5]=c->r[0]^0x80000000u; // 800E83CC
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 800E83D0
  c->r[0]=c->r[0]^0x80000000u; // 800E83D4
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 800E83D8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800E83DC
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 800E83E0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800E83E4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800E83E8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800E83EC
  if (crb(c,2)) { goto L_800E83FC; } // 800E83F0
  c->r[3]=0u+0x00000000u; // 800E83F4
  goto L_800E8408; // 800E83F8
L_800E83FC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 800E83FC
  c->r[3]=0u-c->r[0]; // 800E8400
  c->r[3]=c->r[3]+0x00000002u; // 800E8404
L_800E8408:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E840C
  c->lr=c->r[0]; // 800E8410
  c->r[1]=c->r[1]+0x00000010u; // 800E8414
  return; // 800E8418
}

// fn_800E8420
void f_800E8420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8420
  c->r[0]=c->lr; // 800E8424
  c->r[3]=0u+0x00000000u; // 800E8428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E842C
  c->r[0]=0u+0x00000000u; // 800E8430
  W32(c->r[13]+0xFFFFA760u,c->r[0]); // 800E8434
  c->lr=0x800E843Cu; f_800EAFA0(c); // 800E8438
  c->r[3]=0u+0x800F0000u; // 800E843C
  c->r[3]=c->r[3]+0xFFFF8340u; // 800E8440
  c->lr=0x800E8448u; f_800EAFB0(c); // 800E8444
L_800E8448:;
  c->r[0]=R32(c->r[13]+0xFFFFA760u); // 800E8448
  cmps(c,0,(int32_t)c->r[0],0); // 800E844C
  if (crb(c,2)) { IRQCHK(c); goto L_800E8448; } // 800E8450
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8454
  c->lr=c->r[0]; // 800E8458
  c->r[1]=c->r[1]+0x00000010u; // 800E845C
  return; // 800E8460
}

// __DVDPrepareResetAsync
void f_800E8470(Ctx* __restrict c) {
  trace_call(0x800E8470u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8470
  c->r[0]=c->lr; // 800E8474
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E8478
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E847C
  c->r[31]=c->r[3]|c->r[3]; // 800E8480
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E8484
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E8488
  c->lr=0x800E8490u; f_800CBAA0(c); // 800E848C
  c->r[29]=c->r[3]|c->r[3]; // 800E8490
  c->lr=0x800E8498u; f_800E8720(c); // 800E8494
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E8498
  cmps(c,0,(int32_t)c->r[0],0); // 800E849C
  if (crb(c,2)) { goto L_800E84AC; } // 800E84A0
  W32(c->r[13]+0xFFFFA7A0u,c->r[31]); // 800E84A4
  goto L_800E8568; // 800E84A8
L_800E84AC:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E84AC
  cmps(c,0,(int32_t)c->r[3],0); // 800E84B0
  if (crb(c,2)) { goto L_800E84C0; } // 800E84B4
  c->r[0]=0u+0x00000000u; // 800E84B8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E84BC
L_800E84C0:;
  c->lr=0x800E84C4u; f_800CBAA0(c); // 800E84C0
  c->r[30]=c->r[3]|c->r[3]; // 800E84C4
  c->lr=0x800E84CCu; f_800CBAA0(c); // 800E84C8
  c->r[0]=R32(c->r[13]+0xFFFFA7B0u); // 800E84CC
  c->r[4]=0u+0x00000001u; // 800E84D0
  W32(c->r[13]+0xFFFFA724u,c->r[4]); // 800E84D4
  cmps(c,0,(int32_t)c->r[0],0); // 800E84D8
  if (!crb(c,2)) { goto L_800E84E4; } // 800E84DC
  W32(c->r[13]+0xFFFFA728u,c->r[4]); // 800E84E0
L_800E84E4:;
  c->lr=0x800E84E8u; f_800CBAE0(c); // 800E84E4
  goto L_800E84F4; // 800E84E8
L_800E84EC:;
  c->r[4]=0u+0x00000000u; // 800E84EC
  c->lr=0x800E84F4u; f_800E7EF0(c); // 800E84F0
L_800E84F4:;
  c->lr=0x800E84F8u; f_800E87D0(c); // 800E84F4
  cmps(c,0,(int32_t)c->r[3],0); // 800E84F8
  if (!crb(c,2)) { IRQCHK(c); goto L_800E84EC; } // 800E84FC
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E8500
  cmps(c,0,(int32_t)c->r[3],0); // 800E8504
  if (crb(c,2)) { goto L_800E8518; } // 800E8508
  c->r[4]=c->r[31]|c->r[31]; // 800E850C
  c->lr=0x800E8514u; f_800E7EF0(c); // 800E8510
  goto L_800E8534; // 800E8514
L_800E8518:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E8518
  if (crb(c,2)) { goto L_800E8534; } // 800E851C
  c->r[12]=c->r[31]|c->r[31]; // 800E8520
  c->r[3]=0u+0x00000000u; // 800E8524
  c->r[4]=0u+0x00000000u; // 800E8528
  c->ctr=c->r[12]; // 800E852C
  if (true) { c->lr=0x800E8534u; dispatch(c,c->ctr); } // 800E8530
L_800E8534:;
  c->lr=0x800E8538u; f_800CBAA0(c); // 800E8534
  c->r[4]=0u+0x00000000u; // 800E8538
  W32(c->r[13]+0xFFFFA724u,c->r[4]); // 800E853C
  c->r[0]=R32(c->r[13]+0xFFFFA728u); // 800E8540
  c->r[31]=c->r[3]|c->r[3]; // 800E8544
  cmps(c,0,(int32_t)c->r[0],0); // 800E8548
  if (crb(c,2)) { goto L_800E8558; } // 800E854C
  W32(c->r[13]+0xFFFFA728u,c->r[4]); // 800E8550
  c->lr=0x800E8558u; f_800E68A0(c); // 800E8554
L_800E8558:;
  c->r[3]=c->r[31]|c->r[31]; // 800E8558
  c->lr=0x800E8560u; f_800CBAE0(c); // 800E855C
  c->r[3]=c->r[30]|c->r[30]; // 800E8560
  c->lr=0x800E8568u; f_800CBAE0(c); // 800E8564
L_800E8568:;
  c->r[3]=c->r[29]|c->r[29]; // 800E8568
  c->lr=0x800E8570u; f_800CBAE0(c); // 800E856C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8570
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E8574
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E8578
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E857C
  c->lr=c->r[0]; // 800E8580
  c->r[1]=c->r[1]+0x00000020u; // 800E8584
  return; // 800E8588
}

// Callback_800E8590
void f_800E8590(Ctx* __restrict c) {
  trace_call(0x800E8590u);
  c->r[0]=0u+0x00000001u; // 800E8590
  W32(c->r[13]+0xFFFFA764u,c->r[0]); // 800E8594
  return; // 800E8598
}

// __DVDPrepareReset
void f_800E85A0(Ctx* __restrict c) {
  trace_call(0x800E85A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E85A0
  c->r[0]=c->lr; // 800E85A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E85A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E85AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E85B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E85B4
  c->lr=0x800E85BCu; f_800CBAA0(c); // 800E85B8
  c->r[31]=0u+0x00000000u; // 800E85BC
  W32(c->r[13]+0xFFFFA764u,c->r[31]); // 800E85C0
  c->lr=0x800E85C8u; f_800CBAA0(c); // 800E85C4
  c->r[29]=c->r[3]|c->r[3]; // 800E85C8
  c->lr=0x800E85D0u; f_800E8720(c); // 800E85CC
  c->r[0]=R32(c->r[13]+0xFFFFA730u); // 800E85D0
  cmps(c,0,(int32_t)c->r[0],0); // 800E85D4
  if (crb(c,2)) { goto L_800E85EC; } // 800E85D8
  c->r[3]=0u+0x800F0000u; // 800E85DC
  c->r[3]=c->r[3]+0xFFFF8590u; // 800E85E0
  W32(c->r[13]+0xFFFFA7A0u,c->r[3]); // 800E85E4
  goto L_800E86A0; // 800E85E8
L_800E85EC:;
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E85EC
  cmps(c,0,(int32_t)c->r[3],0); // 800E85F0
  if (crb(c,2)) { goto L_800E85FC; } // 800E85F4
  W32(c->r[3]+0x00000028u,c->r[31]); // 800E85F8
L_800E85FC:;
  c->lr=0x800E8600u; f_800CBAA0(c); // 800E85FC
  c->r[31]=c->r[3]|c->r[3]; // 800E8600
  c->lr=0x800E8608u; f_800CBAA0(c); // 800E8604
  c->r[0]=R32(c->r[13]+0xFFFFA7B0u); // 800E8608
  c->r[4]=0u+0x00000001u; // 800E860C
  W32(c->r[13]+0xFFFFA724u,c->r[4]); // 800E8610
  cmps(c,0,(int32_t)c->r[0],0); // 800E8614
  if (!crb(c,2)) { goto L_800E8620; } // 800E8618
  W32(c->r[13]+0xFFFFA728u,c->r[4]); // 800E861C
L_800E8620:;
  c->lr=0x800E8624u; f_800CBAE0(c); // 800E8620
  goto L_800E8630; // 800E8624
L_800E8628:;
  c->r[4]=0u+0x00000000u; // 800E8628
  c->lr=0x800E8630u; f_800E7EF0(c); // 800E862C
L_800E8630:;
  c->lr=0x800E8634u; f_800E87D0(c); // 800E8630
  cmps(c,0,(int32_t)c->r[3],0); // 800E8634
  if (!crb(c,2)) { IRQCHK(c); goto L_800E8628; } // 800E8638
  c->r[3]=R32(c->r[13]+0xFFFFA7B0u); // 800E863C
  cmps(c,0,(int32_t)c->r[3],0); // 800E8640
  if (crb(c,2)) { goto L_800E8658; } // 800E8644
  c->r[4]=0u+0x800F0000u; // 800E8648
  c->r[4]=c->r[4]+0xFFFF8590u; // 800E864C
  c->lr=0x800E8654u; f_800E7EF0(c); // 800E8650
  goto L_800E866C; // 800E8654
L_800E8658:;
  c->r[0]=0u+0x800F0000u; // 800E8658
  c->r[0]=addc(c,c->r[0],0xFFFF8590u,0); cr0(c,c->r[0]); // 800E865C
  if (crb(c,2)) { goto L_800E866C; } // 800E8660
  c->r[0]=0u+0x00000001u; // 800E8664
  W32(c->r[13]+0xFFFFA764u,c->r[0]); // 800E8668
L_800E866C:;
  c->lr=0x800E8670u; f_800CBAA0(c); // 800E866C
  c->r[4]=0u+0x00000000u; // 800E8670
  W32(c->r[13]+0xFFFFA724u,c->r[4]); // 800E8674
  c->r[0]=R32(c->r[13]+0xFFFFA728u); // 800E8678
  c->r[30]=c->r[3]|c->r[3]; // 800E867C
  cmps(c,0,(int32_t)c->r[0],0); // 800E8680
  if (crb(c,2)) { goto L_800E8690; } // 800E8684
  W32(c->r[13]+0xFFFFA728u,c->r[4]); // 800E8688
  c->lr=0x800E8690u; f_800E68A0(c); // 800E868C
L_800E8690:;
  c->r[3]=c->r[30]|c->r[30]; // 800E8690
  c->lr=0x800E8698u; f_800CBAE0(c); // 800E8694
  c->r[3]=c->r[31]|c->r[31]; // 800E8698
  c->lr=0x800E86A0u; f_800CBAE0(c); // 800E869C
L_800E86A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800E86A0
  c->lr=0x800E86A8u; f_800CBAE0(c); // 800E86A4
  c->lr=0x800E86ACu; f_800CBAC0(c); // 800E86A8
  c->r[0]=c->r[0]|0x00000000u; // 800E86AC
L_800E86B0:;
  c->r[0]=R32(c->r[13]+0xFFFFA764u); // 800E86B0
  cmps(c,0,(int32_t)c->r[0],1); // 800E86B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800E86B0; } // 800E86B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E86BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E86C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E86C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E86C8
  c->lr=c->r[0]; // 800E86CC
  c->r[1]=c->r[1]+0x00000020u; // 800E86D0
  return; // 800E86D4
}

// __DVDTestAlarm
void f_800E86E0(Ctx* __restrict c) {
  trace_call(0x800E86E0u);
  c->r[4]=0u+0x802F0000u; // 800E86E0
  c->r[4]=c->r[4]+0xFFFFFBE0u; // 800E86E4
  cmpu(c,0,c->r[3],c->r[4]); // 800E86E8
  if (!crb(c,2)) { goto L_800E86F8; } // 800E86EC
  c->r[3]=0u+0x00000001u; // 800E86F0
  return; // 800E86F4
L_800E86F8:;
  f_800EBF50(c); return; // 800E86F8
  return; // 800E86FC
}

// __DVDStopMotorAsync
void f_800E8700(Ctx* __restrict c) {
  trace_call(0x800E8700u);
  c->r[3]=0u+0x00000001u; // 800E8700
  return; // 800E8704
}

// __DVDRestartMotor
void f_800E8710(Ctx* __restrict c) {
  trace_call(0x800E8710u);
  return; // 800E8710
}

// __DVDClearWaitingQueue
void f_800E8720(Ctx* __restrict c) {
  trace_call(0x800E8720u);
  c->r[6]=0u+0x802F0000u; // 800E8720
  c->r[6]=c->r[6]+0xFFFFFC70u; // 800E8724
  W32(c->r[6]+0x00000000u,c->r[6]); // 800E8728
  c->r[5]=c->r[6]+0x00000008u; // 800E872C
  c->r[4]=c->r[6]+0x00000010u; // 800E8730
  c->r[3]=c->r[6]+0x00000018u; // 800E8734
  W32(c->r[6]+0x00000004u,c->r[6]); // 800E8738
  W32(c->r[5]+0x00000000u,c->r[5]); // 800E873C
  W32(c->r[5]+0x00000004u,c->r[5]); // 800E8740
  W32(c->r[4]+0x00000000u,c->r[4]); // 800E8744
  W32(c->r[4]+0x00000004u,c->r[4]); // 800E8748
  W32(c->r[3]+0x00000000u,c->r[3]); // 800E874C
  W32(c->r[3]+0x00000004u,c->r[3]); // 800E8750
  return; // 800E8754
}

// __DVDPushWaitingQueue
void f_800E8760(Ctx* __restrict c) {
  trace_call(0x800E8760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8760
  c->r[0]=c->lr; // 800E8764
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E876C
  c->r[31]=c->r[4]|c->r[4]; // 800E8770
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E8774
  c->r[30]=c->r[3]|c->r[3]; // 800E8778
  c->lr=0x800E8780u; f_800CBAA0(c); // 800E877C
  c->r[4]=0u+0x802F0000u; // 800E8780
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800E8784
  c->r[4]=c->r[4]+0xFFFFFC70u; // 800E8788
  c->r[5]=c->r[4]+c->r[0]; // 800E878C
  c->r[4]=R32(c->r[5]+0x00000004u); // 800E8790
  W32(c->r[4]+0x00000000u,c->r[31]); // 800E8794
  c->r[0]=R32(c->r[5]+0x00000004u); // 800E8798
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E879C
  W32(c->r[31]+0x00000000u,c->r[5]); // 800E87A0
  W32(c->r[5]+0x00000004u,c->r[31]); // 800E87A4
  c->lr=0x800E87ACu; f_800CBAE0(c); // 800E87A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E87AC
  c->r[3]=0u+0x00000001u; // 800E87B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E87B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E87B8
  c->lr=c->r[0]; // 800E87BC
  c->r[1]=c->r[1]+0x00000010u; // 800E87C0
  return; // 800E87C4
}

// __DVDPopWaitingQueue
void f_800E87D0(Ctx* __restrict c) {
  trace_call(0x800E87D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E87D0
  c->r[0]=c->lr; // 800E87D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E87D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E87DC
  c->lr=0x800E87E4u; f_800CBAA0(c); // 800E87E0
  c->r[4]=0u+0x802F0000u; // 800E87E4
  c->r[0]=0u+0x00000004u; // 800E87E8
  c->r[31]=0u+0x00000000u; // 800E87EC
  c->r[4]=c->r[4]+0xFFFFFC70u; // 800E87F0
  c->ctr=c->r[0]; // 800E87F4
L_800E87F8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E87F8
  cmpu(c,0,c->r[0],c->r[4]); // 800E87FC
  if (crb(c,2)) { goto L_800E8848; } // 800E8800
  c->lr=0x800E8808u; f_800CBAE0(c); // 800E8804
  c->lr=0x800E880Cu; f_800CBAA0(c); // 800E8808
  c->r[4]=0u+0x802F0000u; // 800E880C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800E8810
  c->r[4]=c->r[4]+0xFFFFFC70u; // 800E8814
  c->r[31]=R32(c->r[4]+c->r[0]); // 800E8818
  c->r[5]=c->r[4]+c->r[0]; // 800E881C
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E8820
  W32(c->r[5]+0x00000000u,c->r[0]); // 800E8824
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E8828
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E882C
  c->lr=0x800E8834u; f_800CBAE0(c); // 800E8830
  c->r[0]=0u+0x00000000u; // 800E8834
  W32(c->r[31]+0x00000000u,c->r[0]); // 800E8838
  c->r[3]=c->r[31]|c->r[31]; // 800E883C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E8840
  goto L_800E885C; // 800E8844
L_800E8848:;
  c->r[4]=c->r[4]+0x00000008u; // 800E8848
  c->r[31]=c->r[31]+0x00000001u; // 800E884C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E87F8; } // 800E8850
  c->lr=0x800E8858u; f_800CBAE0(c); // 800E8854
  c->r[3]=0u+0x00000000u; // 800E8858
L_800E885C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E885C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8860
  c->lr=c->r[0]; // 800E8864
  c->r[1]=c->r[1]+0x00000010u; // 800E8868
  return; // 800E886C
}

// __DVDCheckWaitingQueue
void f_800E8870(Ctx* __restrict c) {
  trace_call(0x800E8870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8870
  c->r[0]=c->lr; // 800E8874
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8878
  c->lr=0x800E8880u; f_800CBAA0(c); // 800E887C
  c->r[4]=0u+0x802F0000u; // 800E8880
  c->r[0]=0u+0x00000004u; // 800E8884
  c->r[4]=c->r[4]+0xFFFFFC70u; // 800E8888
  c->ctr=c->r[0]; // 800E888C
L_800E8890:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E8890
  cmpu(c,0,c->r[0],c->r[4]); // 800E8894
  if (crb(c,2)) { goto L_800E88A8; } // 800E8898
  c->lr=0x800E88A0u; f_800CBAE0(c); // 800E889C
  c->r[3]=0u+0x00000001u; // 800E88A0
  goto L_800E88B8; // 800E88A4
L_800E88A8:;
  c->r[4]=c->r[4]+0x00000008u; // 800E88A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E8890; } // 800E88AC
  c->lr=0x800E88B4u; f_800CBAE0(c); // 800E88B0
  c->r[3]=0u+0x00000000u; // 800E88B4
L_800E88B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E88B8
  c->lr=c->r[0]; // 800E88BC
  c->r[1]=c->r[1]+0x00000010u; // 800E88C0
  return; // 800E88C4
}

// __DVDGetNextWaitingQueue
void f_800E88D0(Ctx* __restrict c) {
  trace_call(0x800E88D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E88D0
  c->r[0]=c->lr; // 800E88D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E88D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E88DC
  c->lr=0x800E88E4u; f_800CBAA0(c); // 800E88E0
  c->r[4]=0u+0x802F0000u; // 800E88E4
  c->r[0]=0u+0x00000004u; // 800E88E8
  c->r[4]=c->r[4]+0xFFFFFC70u; // 800E88EC
  c->ctr=c->r[0]; // 800E88F0
  c->r[0]=c->r[0]|0x00000000u; // 800E88F4
L_800E88F8:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 800E88F8
  cmpu(c,0,c->r[31],c->r[4]); // 800E88FC
  if (crb(c,2)) { goto L_800E8910; } // 800E8900
  c->lr=0x800E8908u; f_800CBAE0(c); // 800E8904
  c->r[3]=c->r[31]|c->r[31]; // 800E8908
  goto L_800E8920; // 800E890C
L_800E8910:;
  c->r[4]=c->r[4]+0x00000008u; // 800E8910
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E88F8; } // 800E8914
  c->lr=0x800E891Cu; f_800CBAE0(c); // 800E8918
  c->r[3]=0u+0x00000000u; // 800E891C
L_800E8920:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8924
  c->lr=c->r[0]; // 800E8928
  c->r[1]=c->r[1]+0x00000010u; // 800E892C
  return; // 800E8930
}

// __DVDDequeueWaitingQueue
void f_800E8940(Ctx* __restrict c) {
  trace_call(0x800E8940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8940
  c->r[0]=c->lr; // 800E8944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E894C
  c->r[31]=c->r[3]|c->r[3]; // 800E8950
  c->lr=0x800E8958u; f_800CBAA0(c); // 800E8954
  c->r[4]=R32(c->r[31]+0x00000004u); // 800E8958
  c->r[5]=R32(c->r[31]+0x00000000u); // 800E895C
  cmps(c,0,(int32_t)c->r[4],0); // 800E8960
  if (crb(c,2)) { goto L_800E8970; } // 800E8964
  cmps(c,0,(int32_t)c->r[5],0); // 800E8968
  if (!crb(c,2)) { goto L_800E897C; } // 800E896C
L_800E8970:;
  c->lr=0x800E8974u; f_800CBAE0(c); // 800E8970
  c->r[3]=0u+0x00000000u; // 800E8974
  goto L_800E898C; // 800E8978
L_800E897C:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 800E897C
  W32(c->r[5]+0x00000004u,c->r[4]); // 800E8980
  c->lr=0x800E8988u; f_800CBAE0(c); // 800E8984
  c->r[3]=0u+0x00000001u; // 800E8988
L_800E898C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E898C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8990
  c->lr=c->r[0]; // 800E8994
  c->r[1]=c->r[1]+0x00000010u; // 800E8998
  return; // 800E899C
}

// cbForNandClose
void f_800E89A0(Ctx* __restrict c) {
  trace_call(0x800E89A0u);
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E89A0
  cmps(c,0,(int32_t)c->r[12],0); // 800E89A4
  if (crb(c,2)) return; // 800E89A8
  c->r[0]=cntlz(c->r[3]); // 800E89AC
  c->r[4]=0u+0x00000000u; // 800E89B0
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 800E89B4
  c->r[3]=0u-c->r[0]; // 800E89B8
  c->r[3]=c->r[3]+0x00000002u; // 800E89BC
  c->ctr=c->r[12]; // 800E89C0
  if (true) { dispatch(c,c->ctr); return; } // 800E89C4
  return; // 800E89C8
}

// cbForNandWrite
void f_800E89D0(Ctx* __restrict c) {
  trace_call(0x800E89D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E89D0
  c->r[0]=c->lr; // 800E89D4
  c->r[3]=0u+0x802F0000u; // 800E89D8
  c->r[4]=0u+0x800F0000u; // 800E89DC
  c->r[5]=0u+0x802F0000u; // 800E89E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E89E4
  c->r[3]=c->r[3]+0xFFFFFCA0u; // 800E89E8
  c->r[4]=c->r[4]+0xFFFF89A0u; // 800E89EC
  c->r[5]=c->r[5]+0xFFFFFD2Cu; // 800E89F0
  c->lr=0x800E89F8u; f_800F3E30(c); // 800E89F4
  cmps(c,0,(int32_t)c->r[3],0); // 800E89F8
  if (crb(c,2)) { goto L_800E8A1C; } // 800E89FC
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8A00
  cmps(c,0,(int32_t)c->r[12],0); // 800E8A04
  if (crb(c,2)) { goto L_800E8A1C; } // 800E8A08
  c->r[3]=0u+0x00000002u; // 800E8A0C
  c->r[4]=0u+0x00000000u; // 800E8A10
  c->ctr=c->r[12]; // 800E8A14
  if (true) { c->lr=0x800E8A1Cu; dispatch(c,c->ctr); } // 800E8A18
L_800E8A1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8A1C
  c->lr=c->r[0]; // 800E8A20
  c->r[1]=c->r[1]+0x00000010u; // 800E8A24
  return; // 800E8A28
}

// cbForNandSeek
void f_800E8A30(Ctx* __restrict c) {
  trace_call(0x800E8A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8A30
  c->r[0]=c->lr; // 800E8A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8A3C
  c->r[31]=0u+0x802F0000u; // 800E8A40
  c->r[31]=c->r[31]+0xFFFFFCA0u; // 800E8A44
  c->r[4]=R32(c->r[13]+0xFFFFA7BCu); // 800E8A48
  c->r[5]=c->r[4]+0x00000001u; // 800E8A4C
  c->r[0]=rotl(c->r[5],7)&0xFFFFFF80u; // 800E8A50
  cmpu(c,0,c->r[3],c->r[0]); // 800E8A54
  if (!crb(c,2)) { goto L_800E8AFC; } // 800E8A58
  cmps(c,0,(int32_t)c->r[4],0); // 800E8A5C
  if (!crb(c,2)) { goto L_800E8A90; } // 800E8A60
  c->r[4]=0u+0x24920000u; // 800E8A64
  c->r[3]=c->r[31]+0x00000160u; // 800E8A68
  c->r[0]=c->r[4]+0x00004925u; // 800E8A6C
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 800E8A70
  c->r[0]=c->r[5]-c->r[4]; // 800E8A74
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800E8A78
  c->r[0]=c->r[0]+c->r[4]; // 800E8A7C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E8A80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 800E8A84
  c->r[0]=c->r[5]-c->r[0]; // 800E8A88
  W32(c->r[3]+0x00000018u,c->r[0]); // 800E8A8C
L_800E8A90:;
  c->r[3]=c->r[31]+0x00000160u; // 800E8A90
  c->r[4]=0u+0x00000080u; // 800E8A94
  c->lr=0x800E8A9Cu; f_800C7780(c); // 800E8A98
  c->r[6]=0u+0x800F0000u; // 800E8A9C
  c->r[3]=c->r[31]+0x00000000u; // 800E8AA0
  c->r[4]=c->r[31]+0x00000160u; // 800E8AA4
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8AA8
  c->r[6]=c->r[6]+0xFFFF89D0u; // 800E8AAC
  c->r[5]=0u+0x00000080u; // 800E8AB0
  c->lr=0x800E8AB8u; f_800F3310(c); // 800E8AB4
  cmps(c,0,(int32_t)c->r[3],0); // 800E8AB8
  if (crb(c,2)) { goto L_800E8B18; } // 800E8ABC
  c->r[4]=0u+0x800F0000u; // 800E8AC0
  c->r[3]=c->r[31]+0x00000000u; // 800E8AC4
  c->r[4]=c->r[4]+0xFFFF89A0u; // 800E8AC8
  c->r[5]=c->r[31]+0x0000008Cu; // 800E8ACC
  c->lr=0x800E8AD4u; f_800F3E30(c); // 800E8AD0
  cmps(c,0,(int32_t)c->r[3],0); // 800E8AD4
  if (crb(c,2)) { goto L_800E8B18; } // 800E8AD8
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8ADC
  cmps(c,0,(int32_t)c->r[12],0); // 800E8AE0
  if (crb(c,2)) { goto L_800E8B18; } // 800E8AE4
  c->r[3]=0u+0x00000002u; // 800E8AE8
  c->r[4]=0u+0x00000000u; // 800E8AEC
  c->ctr=c->r[12]; // 800E8AF0
  if (true) { c->lr=0x800E8AF8u; dispatch(c,c->ctr); } // 800E8AF4
  goto L_800E8B18; // 800E8AF8
L_800E8AFC:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8AFC
  cmps(c,0,(int32_t)c->r[12],0); // 800E8B00
  if (crb(c,2)) { goto L_800E8B18; } // 800E8B04
  c->r[3]=0u+0x00000002u; // 800E8B08
  c->r[4]=0u+0x00000000u; // 800E8B0C
  c->ctr=c->r[12]; // 800E8B10
  if (true) { c->lr=0x800E8B18u; dispatch(c,c->ctr); } // 800E8B14
L_800E8B18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8B1C
  c->lr=c->r[0]; // 800E8B20
  c->r[1]=c->r[1]+0x00000010u; // 800E8B24
  return; // 800E8B28
}

// cbForNandWrite0
void f_800E8B30(Ctx* __restrict c) {
  trace_call(0x800E8B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8B30
  c->r[0]=c->lr; // 800E8B34
  cmpu(c,0,c->r[3],0x00000080u); // 800E8B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8B40
  c->r[31]=0u+0x802F0000u; // 800E8B44
  c->r[31]=c->r[31]+0xFFFFFCA0u; // 800E8B48
  if (!crb(c,2)) { goto L_800E8C54; } // 800E8B4C
  c->r[4]=R32(c->r[13]+0xFFFFA7BCu); // 800E8B50
  c->r[6]=0u+0x800F0000u; // 800E8B54
  c->r[3]=c->r[31]+0x00000000u; // 800E8B58
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8B5C
  c->r[0]=c->r[4]+0x00000001u; // 800E8B60
  c->r[6]=c->r[6]+0xFFFF8A30u; // 800E8B64
  c->r[4]=rotl(c->r[0],7)&0xFFFFFF80u; // 800E8B68
  c->r[5]=0u+0x00000000u; // 800E8B6C
  c->lr=0x800E8B74u; f_800F3390(c); // 800E8B70
  cmps(c,0,(int32_t)c->r[3],0); // 800E8B74
  if (crb(c,2)) { goto L_800E8C70; } // 800E8B78
  c->r[4]=R32(c->r[13]+0xFFFFA7BCu); // 800E8B7C
  c->r[5]=c->r[4]+0x00000001u; // 800E8B80
  c->r[3]=rotl(c->r[5],7)&0xFFFFFF80u; // 800E8B84
  c->r[0]=c->r[3]+0x00010000u; // 800E8B88
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800E8B8C
  if (!crb(c,2)) { goto L_800E8C34; } // 800E8B90
  cmps(c,0,(int32_t)c->r[4],0); // 800E8B94
  if (!crb(c,2)) { goto L_800E8BC8; } // 800E8B98
  c->r[4]=0u+0x24920000u; // 800E8B9C
  c->r[3]=c->r[31]+0x00000160u; // 800E8BA0
  c->r[0]=c->r[4]+0x00004925u; // 800E8BA4
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 800E8BA8
  c->r[0]=c->r[5]-c->r[4]; // 800E8BAC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800E8BB0
  c->r[0]=c->r[0]+c->r[4]; // 800E8BB4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E8BB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 800E8BBC
  c->r[0]=c->r[5]-c->r[0]; // 800E8BC0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800E8BC4
L_800E8BC8:;
  c->r[3]=c->r[31]+0x00000160u; // 800E8BC8
  c->r[4]=0u+0x00000080u; // 800E8BCC
  c->lr=0x800E8BD4u; f_800C7780(c); // 800E8BD0
  c->r[6]=0u+0x800F0000u; // 800E8BD4
  c->r[3]=c->r[31]+0x00000000u; // 800E8BD8
  c->r[4]=c->r[31]+0x00000160u; // 800E8BDC
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8BE0
  c->r[6]=c->r[6]+0xFFFF89D0u; // 800E8BE4
  c->r[5]=0u+0x00000080u; // 800E8BE8
  c->lr=0x800E8BF0u; f_800F3310(c); // 800E8BEC
  cmps(c,0,(int32_t)c->r[3],0); // 800E8BF0
  if (crb(c,2)) { goto L_800E8C70; } // 800E8BF4
  c->r[4]=0u+0x800F0000u; // 800E8BF8
  c->r[3]=c->r[31]+0x00000000u; // 800E8BFC
  c->r[4]=c->r[4]+0xFFFF89A0u; // 800E8C00
  c->r[5]=c->r[31]+0x0000008Cu; // 800E8C04
  c->lr=0x800E8C0Cu; f_800F3E30(c); // 800E8C08
  cmps(c,0,(int32_t)c->r[3],0); // 800E8C0C
  if (crb(c,2)) { goto L_800E8C70; } // 800E8C10
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8C14
  cmps(c,0,(int32_t)c->r[12],0); // 800E8C18
  if (crb(c,2)) { goto L_800E8C70; } // 800E8C1C
  c->r[3]=0u+0x00000002u; // 800E8C20
  c->r[4]=0u+0x00000000u; // 800E8C24
  c->ctr=c->r[12]; // 800E8C28
  if (true) { c->lr=0x800E8C30u; dispatch(c,c->ctr); } // 800E8C2C
  goto L_800E8C70; // 800E8C30
L_800E8C34:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8C34
  cmps(c,0,(int32_t)c->r[12],0); // 800E8C38
  if (crb(c,2)) { goto L_800E8C70; } // 800E8C3C
  c->r[3]=0u+0x00000002u; // 800E8C40
  c->r[4]=0u+0x00000000u; // 800E8C44
  c->ctr=c->r[12]; // 800E8C48
  if (true) { c->lr=0x800E8C50u; dispatch(c,c->ctr); } // 800E8C4C
  goto L_800E8C70; // 800E8C50
L_800E8C54:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8C54
  cmps(c,0,(int32_t)c->r[12],0); // 800E8C58
  if (crb(c,2)) { goto L_800E8C70; } // 800E8C5C
  c->r[3]=0u+0x00000002u; // 800E8C60
  c->r[4]=0u+0x00000000u; // 800E8C64
  c->ctr=c->r[12]; // 800E8C68
  if (true) { c->lr=0x800E8C70u; dispatch(c,c->ctr); } // 800E8C6C
L_800E8C70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8C70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8C74
  c->lr=c->r[0]; // 800E8C78
  c->r[1]=c->r[1]+0x00000010u; // 800E8C7C
  return; // 800E8C80
}

// cbForNandSeek2
void f_800E8C90(Ctx* __restrict c) {
  trace_call(0x800E8C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8C90
  c->r[0]=c->lr; // 800E8C94
  cmpu(c,0,c->r[3],0x00000080u); // 800E8C98
  c->r[7]=0u+0x802F0000u; // 800E8C9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8CA0
  c->r[7]=c->r[7]+0xFFFFFCA0u; // 800E8CA4
  if (!crb(c,2)) { goto L_800E8D20; } // 800E8CA8
  c->r[4]=c->r[7]+0x000001E0u; // 800E8CAC
  c->r[3]=0u+0x24920000u; // 800E8CB0
  c->r[5]=R32(c->r[4]+0x00000018u); // 800E8CB4
  c->r[0]=c->r[3]+0x00004925u; // 800E8CB8
  c->r[6]=0u+0x800F0000u; // 800E8CBC
  c->r[3]=c->r[7]+0x00000000u; // 800E8CC0
  c->r[9]=c->r[5]+0x00000001u; // 800E8CC4
  c->r[7]=c->r[7]+0x0000008Cu; // 800E8CC8
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800E8CCC
  c->r[6]=c->r[6]+0xFFFF8B30u; // 800E8CD0
  c->r[5]=0u+0x00000080u; // 800E8CD4
  c->r[0]=c->r[9]-c->r[8]; // 800E8CD8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800E8CDC
  c->r[0]=c->r[0]+c->r[8]; // 800E8CE0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E8CE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 800E8CE8
  c->r[0]=c->r[9]-c->r[0]; // 800E8CEC
  W32(c->r[4]+0x00000018u,c->r[0]); // 800E8CF0
  c->lr=0x800E8CF8u; f_800F3310(c); // 800E8CF4
  cmps(c,0,(int32_t)c->r[3],0); // 800E8CF8
  if (crb(c,2)) { goto L_800E8D3C; } // 800E8CFC
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8D00
  cmps(c,0,(int32_t)c->r[12],0); // 800E8D04
  if (crb(c,2)) { goto L_800E8D3C; } // 800E8D08
  c->r[3]=0u+0x00000002u; // 800E8D0C
  c->r[4]=0u+0x00000000u; // 800E8D10
  c->ctr=c->r[12]; // 800E8D14
  if (true) { c->lr=0x800E8D1Cu; dispatch(c,c->ctr); } // 800E8D18
  goto L_800E8D3C; // 800E8D1C
L_800E8D20:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8D20
  cmps(c,0,(int32_t)c->r[12],0); // 800E8D24
  if (crb(c,2)) { goto L_800E8D3C; } // 800E8D28
  c->r[3]=0u+0x00000002u; // 800E8D2C
  c->r[4]=0u+0x00000000u; // 800E8D30
  c->ctr=c->r[12]; // 800E8D34
  if (true) { c->lr=0x800E8D3Cu; dispatch(c,c->ctr); } // 800E8D38
L_800E8D3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8D3C
  c->lr=c->r[0]; // 800E8D40
  c->r[1]=c->r[1]+0x00000010u; // 800E8D44
  return; // 800E8D48
}

// cbForNandRead
void f_800E8D50(Ctx* __restrict c) {
  trace_call(0x800E8D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8D50
  c->r[0]=c->lr; // 800E8D54
  cmpu(c,0,c->r[3],0x00000080u); // 800E8D58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8D5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8D60
  c->r[31]=0u+0x802F0000u; // 800E8D64
  c->r[31]=c->r[31]+0xFFFFFCA0u; // 800E8D68
  if (!crb(c,2)) { goto L_800E8DC0; } // 800E8D6C
  c->r[3]=c->r[31]+0x000001E0u; // 800E8D70
  c->r[6]=0u+0x800F0000u; // 800E8D74
  c->r[0]=R32(c->r[3]+0x00000018u); // 800E8D78
  c->r[3]=c->r[31]+0x00000000u; // 800E8D7C
  W32(c->r[13]+0xFFFFA7BCu,c->r[0]); // 800E8D80
  c->r[6]=c->r[6]+0xFFFF8C90u; // 800E8D84
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8D88
  c->r[4]=0u+0x00000080u; // 800E8D8C
  c->r[5]=0u+0x00000000u; // 800E8D90
  c->lr=0x800E8D98u; f_800F3390(c); // 800E8D94
  cmps(c,0,(int32_t)c->r[3],0); // 800E8D98
  if (crb(c,2)) { goto L_800E8E24; } // 800E8D9C
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8DA0
  cmps(c,0,(int32_t)c->r[12],0); // 800E8DA4
  if (crb(c,2)) { goto L_800E8E24; } // 800E8DA8
  c->r[3]=0u+0x00000002u; // 800E8DAC
  c->r[4]=0u+0x00000000u; // 800E8DB0
  c->ctr=c->r[12]; // 800E8DB4
  if (true) { c->lr=0x800E8DBCu; dispatch(c,c->ctr); } // 800E8DB8
  goto L_800E8E24; // 800E8DBC
L_800E8DC0:;
  c->r[4]=c->r[31]+0x00000160u; // 800E8DC0
  c->r[0]=0u+0x00000001u; // 800E8DC4
  c->r[6]=0u+0x800F0000u; // 800E8DC8
  W32(c->r[4]+0x00000018u,c->r[0]); // 800E8DCC
  c->r[3]=c->r[31]+0x00000000u; // 800E8DD0
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8DD4
  c->r[6]=c->r[6]+0xFFFF89D0u; // 800E8DD8
  c->r[5]=0u+0x00000080u; // 800E8DDC
  c->lr=0x800E8DE4u; f_800F3310(c); // 800E8DE0
  cmps(c,0,(int32_t)c->r[3],0); // 800E8DE4
  if (crb(c,2)) { goto L_800E8E24; } // 800E8DE8
  c->r[4]=0u+0x800F0000u; // 800E8DEC
  c->r[3]=c->r[31]+0x00000000u; // 800E8DF0
  c->r[4]=c->r[4]+0xFFFF89A0u; // 800E8DF4
  c->r[5]=c->r[31]+0x0000008Cu; // 800E8DF8
  c->lr=0x800E8E00u; f_800F3E30(c); // 800E8DFC
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E00
  if (crb(c,2)) { goto L_800E8E24; } // 800E8E04
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8E08
  cmps(c,0,(int32_t)c->r[12],0); // 800E8E0C
  if (crb(c,2)) { goto L_800E8E24; } // 800E8E10
  c->r[3]=0u+0x00000002u; // 800E8E14
  c->r[4]=0u+0x00000000u; // 800E8E18
  c->ctr=c->r[12]; // 800E8E1C
  if (true) { c->lr=0x800E8E24u; dispatch(c,c->ctr); } // 800E8E20
L_800E8E24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8E28
  c->lr=c->r[0]; // 800E8E2C
  c->r[1]=c->r[1]+0x00000010u; // 800E8E30
  return; // 800E8E34
}

// cbForNandSeek0
void f_800E8E40(Ctx* __restrict c) {
  trace_call(0x800E8E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8E40
  c->r[0]=c->lr; // 800E8E44
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E48
  c->r[7]=0u+0x802F0000u; // 800E8E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8E50
  c->r[7]=c->r[7]+0xFFFFFCA0u; // 800E8E54
  if (!crb(c,2)) { goto L_800E8EB4; } // 800E8E58
  c->r[5]=c->r[7]+0x00000160u; // 800E8E5C
  c->r[3]=0u+0x00000000u; // 800E8E60
  c->r[0]=0u+0x00000001u; // 800E8E64
  c->r[6]=0u+0x800F0000u; // 800E8E68
  W32(c->r[13]+0xFFFFA7BCu,c->r[3]); // 800E8E6C
  c->r[3]=c->r[7]+0x00000000u; // 800E8E70
  c->r[4]=c->r[7]+0x000001E0u; // 800E8E74
  c->r[6]=c->r[6]+0xFFFF8B30u; // 800E8E78
  W32(c->r[5]+0x00000018u,c->r[0]); // 800E8E7C
  c->r[7]=c->r[7]+0x0000008Cu; // 800E8E80
  c->r[5]=0u+0x00000080u; // 800E8E84
  c->lr=0x800E8E8Cu; f_800F3310(c); // 800E8E88
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E8C
  if (crb(c,2)) { goto L_800E8ED0; } // 800E8E90
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8E94
  cmps(c,0,(int32_t)c->r[12],0); // 800E8E98
  if (crb(c,2)) { goto L_800E8ED0; } // 800E8E9C
  c->r[3]=0u+0x00000002u; // 800E8EA0
  c->r[4]=0u+0x00000000u; // 800E8EA4
  c->ctr=c->r[12]; // 800E8EA8
  if (true) { c->lr=0x800E8EB0u; dispatch(c,c->ctr); } // 800E8EAC
  goto L_800E8ED0; // 800E8EB0
L_800E8EB4:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8EB4
  cmps(c,0,(int32_t)c->r[12],0); // 800E8EB8
  if (crb(c,2)) { goto L_800E8ED0; } // 800E8EBC
  c->r[3]=0u+0x00000002u; // 800E8EC0
  c->r[4]=0u+0x00000000u; // 800E8EC4
  c->ctr=c->r[12]; // 800E8EC8
  if (true) { c->lr=0x800E8ED0u; dispatch(c,c->ctr); } // 800E8ECC
L_800E8ED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8ED0
  c->lr=c->r[0]; // 800E8ED4
  c->r[1]=c->r[1]+0x00000010u; // 800E8ED8
  return; // 800E8EDC
}

// cbForNandSeek1
void f_800E8EE0(Ctx* __restrict c) {
  trace_call(0x800E8EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8EE0
  c->r[0]=c->lr; // 800E8EE4
  cmpu(c,0,c->r[3],0x00000080u); // 800E8EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8EEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8EF0
  c->r[31]=0u+0x802F0000u; // 800E8EF4
  c->r[31]=c->r[31]+0xFFFFFCA0u; // 800E8EF8
  if (!crb(c,2)) { goto L_800E8F8C; } // 800E8EFC
  c->r[6]=0u+0x800F0000u; // 800E8F00
  c->r[3]=c->r[31]+0x00000000u; // 800E8F04
  c->r[4]=c->r[31]+0x000001E0u; // 800E8F08
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8F0C
  c->r[6]=c->r[6]+0xFFFF8D50u; // 800E8F10
  c->r[5]=0u+0x00000080u; // 800E8F14
  c->lr=0x800E8F1Cu; f_800F3220(c); // 800E8F18
  cmps(c,0,(int32_t)c->r[3],0); // 800E8F1C
  if (crb(c,2)) { goto L_800E8FCC; } // 800E8F20
  c->r[4]=c->r[31]+0x00000160u; // 800E8F24
  c->r[0]=0u+0x00000001u; // 800E8F28
  c->r[6]=0u+0x800F0000u; // 800E8F2C
  W32(c->r[4]+0x00000018u,c->r[0]); // 800E8F30
  c->r[3]=c->r[31]+0x00000000u; // 800E8F34
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8F38
  c->r[6]=c->r[6]+0xFFFF89D0u; // 800E8F3C
  c->r[5]=0u+0x00000080u; // 800E8F40
  c->lr=0x800E8F48u; f_800F3310(c); // 800E8F44
  cmps(c,0,(int32_t)c->r[3],0); // 800E8F48
  if (crb(c,2)) { goto L_800E8FCC; } // 800E8F4C
  c->r[4]=0u+0x800F0000u; // 800E8F50
  c->r[3]=c->r[31]+0x00000000u; // 800E8F54
  c->r[4]=c->r[4]+0xFFFF89A0u; // 800E8F58
  c->r[5]=c->r[31]+0x0000008Cu; // 800E8F5C
  c->lr=0x800E8F64u; f_800F3E30(c); // 800E8F60
  cmps(c,0,(int32_t)c->r[3],0); // 800E8F64
  if (crb(c,2)) { goto L_800E8FCC; } // 800E8F68
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8F6C
  cmps(c,0,(int32_t)c->r[12],0); // 800E8F70
  if (crb(c,2)) { goto L_800E8FCC; } // 800E8F74
  c->r[3]=0u+0x00000002u; // 800E8F78
  c->r[4]=0u+0x00000000u; // 800E8F7C
  c->ctr=c->r[12]; // 800E8F80
  if (true) { c->lr=0x800E8F88u; dispatch(c,c->ctr); } // 800E8F84
  goto L_800E8FCC; // 800E8F88
L_800E8F8C:;
  c->r[6]=0u+0x800F0000u; // 800E8F8C
  c->r[3]=c->r[31]+0x00000000u; // 800E8F90
  c->r[6]=c->r[6]+0xFFFF8E40u; // 800E8F94
  c->r[7]=c->r[31]+0x0000008Cu; // 800E8F98
  c->r[4]=0u+0x00000000u; // 800E8F9C
  c->r[5]=0u+0x00000000u; // 800E8FA0
  c->lr=0x800E8FA8u; f_800F3390(c); // 800E8FA4
  cmps(c,0,(int32_t)c->r[3],0); // 800E8FA8
  if (crb(c,2)) { goto L_800E8FCC; } // 800E8FAC
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E8FB0
  cmps(c,0,(int32_t)c->r[12],0); // 800E8FB4
  if (crb(c,2)) { goto L_800E8FCC; } // 800E8FB8
  c->r[3]=0u+0x00000002u; // 800E8FBC
  c->r[4]=0u+0x00000000u; // 800E8FC0
  c->ctr=c->r[12]; // 800E8FC4
  if (true) { c->lr=0x800E8FCCu; dispatch(c,c->ctr); } // 800E8FC8
L_800E8FCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8FCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8FD0
  c->lr=c->r[0]; // 800E8FD4
  c->r[1]=c->r[1]+0x00000010u; // 800E8FD8
  return; // 800E8FDC
}

// cbForNandOpen
void f_800E8FE0(Ctx* __restrict c) {
  trace_call(0x800E8FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8FE0
  c->r[0]=c->lr; // 800E8FE4
  cmps(c,0,(int32_t)c->r[3],0); // 800E8FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8FF0
  c->r[31]=0u+0x802F0000u; // 800E8FF4
  c->r[31]=c->r[31]+0xFFFFFCA0u; // 800E8FF8
  if (!crb(c,2)) { goto L_800E90CC; } // 800E8FFC
  c->r[0]=R32(c->r[13]+0xFFFFA7B8u); // 800E9000
  cmps(c,0,(int32_t)c->r[0],0); // 800E9004
  if (crb(c,2)) { goto L_800E9074; } // 800E9008
  c->r[6]=0u+0x800F0000u; // 800E900C
  c->r[3]=c->r[31]+0x00000000u; // 800E9010
  c->r[6]=c->r[6]+0xFFFF8EE0u; // 800E9014
  c->r[7]=c->r[31]+0x0000008Cu; // 800E9018
  c->r[4]=0u+0x00000080u; // 800E901C
  c->r[5]=0u+0x00000000u; // 800E9020
  c->lr=0x800E9028u; f_800F3390(c); // 800E9024
  cmps(c,0,(int32_t)c->r[3],0); // 800E9028
  if (crb(c,2)) { goto L_800E90E8; } // 800E902C
  c->r[6]=0u+0x800F0000u; // 800E9030
  c->r[3]=c->r[31]+0x00000000u; // 800E9034
  c->r[6]=c->r[6]+0xFFFF8E40u; // 800E9038
  c->r[7]=c->r[31]+0x0000008Cu; // 800E903C
  c->r[4]=0u+0x00000000u; // 800E9040
  c->r[5]=0u+0x00000000u; // 800E9044
  c->lr=0x800E904Cu; f_800F3390(c); // 800E9048
  cmps(c,0,(int32_t)c->r[3],0); // 800E904C
  if (crb(c,2)) { goto L_800E90E8; } // 800E9050
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E9054
  cmps(c,0,(int32_t)c->r[12],0); // 800E9058
  if (crb(c,2)) { goto L_800E90E8; } // 800E905C
  c->r[3]=0u+0x00000002u; // 800E9060
  c->r[4]=0u+0x00000000u; // 800E9064
  c->ctr=c->r[12]; // 800E9068
  if (true) { c->lr=0x800E9070u; dispatch(c,c->ctr); } // 800E906C
  goto L_800E90E8; // 800E9070
L_800E9074:;
  c->r[5]=c->r[31]+0x00000160u; // 800E9074
  c->r[3]=0u+0x00000000u; // 800E9078
  c->r[0]=0u+0x00000001u; // 800E907C
  c->r[6]=0u+0x800F0000u; // 800E9080
  W32(c->r[13]+0xFFFFA7BCu,c->r[3]); // 800E9084
  c->r[3]=c->r[31]+0x00000000u; // 800E9088
  c->r[4]=c->r[31]+0x000001E0u; // 800E908C
  c->r[6]=c->r[6]+0xFFFF8B30u; // 800E9090
  W32(c->r[5]+0x00000018u,c->r[0]); // 800E9094
  c->r[7]=c->r[31]+0x0000008Cu; // 800E9098
  c->r[5]=0u+0x00000080u; // 800E909C
  c->lr=0x800E90A4u; f_800F3310(c); // 800E90A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E90A4
  if (crb(c,2)) { goto L_800E90E8; } // 800E90A8
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E90AC
  cmps(c,0,(int32_t)c->r[12],0); // 800E90B0
  if (crb(c,2)) { goto L_800E90E8; } // 800E90B4
  c->r[3]=0u+0x00000002u; // 800E90B8
  c->r[4]=0u+0x00000000u; // 800E90BC
  c->ctr=c->r[12]; // 800E90C0
  if (true) { c->lr=0x800E90C8u; dispatch(c,c->ctr); } // 800E90C4
  goto L_800E90E8; // 800E90C8
L_800E90CC:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E90CC
  cmps(c,0,(int32_t)c->r[12],0); // 800E90D0
  if (crb(c,2)) { goto L_800E90E8; } // 800E90D4
  c->r[3]=0u+0x00000002u; // 800E90D8
  c->r[4]=0u+0x00000000u; // 800E90DC
  c->ctr=c->r[12]; // 800E90E0
  if (true) { c->lr=0x800E90E8u; dispatch(c,c->ctr); } // 800E90E4
L_800E90E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E90E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E90EC
  c->lr=c->r[0]; // 800E90F0
  c->r[1]=c->r[1]+0x00000010u; // 800E90F4
  return; // 800E90F8
}

// cbForNandCreate
void f_800E9100(Ctx* __restrict c) {
  trace_call(0x800E9100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9100
  c->r[0]=c->lr; // 800E9104
  cmps(c,0,(int32_t)c->r[3],0); // 800E9108
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E910C
  if (crb(c,2)) { goto L_800E9124; } // 800E9110
  cmps(c,0,(int32_t)c->r[3],-6); // 800E9114
  if (!crb(c,2)) { goto L_800E9174; } // 800E9118
  c->r[0]=0u+0x00000001u; // 800E911C
  W32(c->r[13]+0xFFFFA7B8u,c->r[0]); // 800E9120
L_800E9124:;
  c->r[3]=0u+0x802B0000u; // 800E9124
  c->r[4]=0u+0x802F0000u; // 800E9128
  c->r[6]=0u+0x800F0000u; // 800E912C
  c->r[7]=0u+0x802F0000u; // 800E9130
  c->r[3]=c->r[3]+0xFFFFFC08u; // 800E9134
  c->r[4]=c->r[4]+0xFFFFFCA0u; // 800E9138
  c->r[6]=c->r[6]+0xFFFF8FE0u; // 800E913C
  c->r[7]=c->r[7]+0xFFFFFD2Cu; // 800E9140
  c->r[5]=0u+0x00000003u; // 800E9144
  c->lr=0x800E914Cu; f_800F3CC0(c); // 800E9148
  cmps(c,0,(int32_t)c->r[3],0); // 800E914C
  if (crb(c,2)) { goto L_800E9190; } // 800E9150
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E9154
  cmps(c,0,(int32_t)c->r[12],0); // 800E9158
  if (crb(c,2)) { goto L_800E9190; } // 800E915C
  c->r[3]=0u+0x00000002u; // 800E9160
  c->r[4]=0u+0x00000000u; // 800E9164
  c->ctr=c->r[12]; // 800E9168
  if (true) { c->lr=0x800E9170u; dispatch(c,c->ctr); } // 800E916C
  goto L_800E9190; // 800E9170
L_800E9174:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E9174
  cmps(c,0,(int32_t)c->r[12],0); // 800E9178
  if (crb(c,2)) { goto L_800E9190; } // 800E917C
  c->r[3]=0u+0x00000002u; // 800E9180
  c->r[4]=0u+0x00000000u; // 800E9184
  c->ctr=c->r[12]; // 800E9188
  if (true) { c->lr=0x800E9190u; dispatch(c,c->ctr); } // 800E918C
L_800E9190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9190
  c->lr=c->r[0]; // 800E9194
  c->r[1]=c->r[1]+0x00000010u; // 800E9198
  return; // 800E919C
}

// cbForNandCreateDir
void f_800E91A0(Ctx* __restrict c) {
  trace_call(0x800E91A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E91A0
  c->r[0]=c->lr; // 800E91A4
  cmps(c,0,(int32_t)c->r[3],0); // 800E91A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E91AC
  if (crb(c,2)) { goto L_800E91BC; } // 800E91B0
  cmps(c,0,(int32_t)c->r[3],-6); // 800E91B4
  if (!crb(c,2)) { goto L_800E9208; } // 800E91B8
L_800E91BC:;
  c->r[3]=0u+0x802B0000u; // 800E91BC
  c->r[6]=0u+0x800F0000u; // 800E91C0
  c->r[7]=0u+0x802F0000u; // 800E91C4
  c->r[4]=0u+0x0000003Fu; // 800E91C8
  c->r[3]=c->r[3]+0xFFFFFC08u; // 800E91CC
  c->r[6]=c->r[6]+0xFFFF9100u; // 800E91D0
  c->r[7]=c->r[7]+0xFFFFFD2Cu; // 800E91D4
  c->r[5]=0u+0x00000000u; // 800E91D8
  c->lr=0x800E91E0u; f_800F2EA0(c); // 800E91DC
  cmps(c,0,(int32_t)c->r[3],0); // 800E91E0
  if (crb(c,2)) { goto L_800E9224; } // 800E91E4
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E91E8
  cmps(c,0,(int32_t)c->r[12],0); // 800E91EC
  if (crb(c,2)) { goto L_800E9224; } // 800E91F0
  c->r[3]=0u+0x00000002u; // 800E91F4
  c->r[4]=0u+0x00000000u; // 800E91F8
  c->ctr=c->r[12]; // 800E91FC
  if (true) { c->lr=0x800E9204u; dispatch(c,c->ctr); } // 800E9200
  goto L_800E9224; // 800E9204
L_800E9208:;
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E9208
  cmps(c,0,(int32_t)c->r[12],0); // 800E920C
  if (crb(c,2)) { goto L_800E9224; } // 800E9210
  c->r[3]=0u+0x00000002u; // 800E9214
  c->r[4]=0u+0x00000000u; // 800E9218
  c->ctr=c->r[12]; // 800E921C
  if (true) { c->lr=0x800E9224u; dispatch(c,c->ctr); } // 800E9220
L_800E9224:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9224
  c->lr=c->r[0]; // 800E9228
  c->r[1]=c->r[1]+0x00000010u; // 800E922C
  return; // 800E9230
}

// cbForPrepareControlRegister
void f_800E9240(Ctx* __restrict c) {
  trace_call(0x800E9240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9240
  c->r[0]=c->lr; // 800E9244
  cmpu(c,0,c->r[3],0x00000001u); // 800E9248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E924C
  if (!crb(c,2)) { goto L_800E9268; } // 800E9250
  c->lr=0x800E9258u; f_800EB950(c); // 800E9254
  c->r[4]=0u+0x802F0000u; // 800E9258
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E925C
  W32(c->r[4]+0x00000014u,c->r[3]); // 800E9260
  goto L_800E9278; // 800E9264
L_800E9268:;
  c->r[3]=0u+0x802F0000u; // 800E9268
  c->r[0]=0u+0xFFFFFFFFu; // 800E926C
  c->r[3]=c->r[3]+0xFFFFFE00u; // 800E9270
  W32(c->r[3]+0x00000014u,c->r[0]); // 800E9274
L_800E9278:;
  c->r[3]=0u+0x802B0000u; // 800E9278
  c->r[6]=0u+0x800F0000u; // 800E927C
  c->r[7]=0u+0x802F0000u; // 800E9280
  c->r[4]=0u+0x0000003Fu; // 800E9284
  c->r[3]=c->r[3]+0xFFFFFC24u; // 800E9288
  c->r[6]=c->r[6]+0xFFFF91A0u; // 800E928C
  c->r[7]=c->r[7]+0xFFFFFD2Cu; // 800E9290
  c->r[5]=0u+0x00000000u; // 800E9294
  c->lr=0x800E929Cu; f_800F3440(c); // 800E9298
  cmps(c,0,(int32_t)c->r[3],0); // 800E929C
  if (crb(c,2)) { goto L_800E92C0; } // 800E92A0
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E92A4
  cmps(c,0,(int32_t)c->r[12],0); // 800E92A8
  if (crb(c,2)) { goto L_800E92C0; } // 800E92AC
  c->r[3]=0u+0x00000002u; // 800E92B0
  c->r[4]=0u+0x00000000u; // 800E92B4
  c->ctr=c->r[12]; // 800E92B8
  if (true) { c->lr=0x800E92C0u; dispatch(c,c->ctr); } // 800E92BC
L_800E92C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E92C0
  c->lr=c->r[0]; // 800E92C4
  c->r[1]=c->r[1]+0x00000010u; // 800E92C8
  return; // 800E92CC
}

// cbForPrepareStatusRegister
void f_800E92D0(Ctx* __restrict c) {
  trace_call(0x800E92D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E92D0
  c->r[0]=c->lr; // 800E92D4
  cmpu(c,0,c->r[3],0x00000001u); // 800E92D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E92DC
  if (!crb(c,2)) { goto L_800E92F8; } // 800E92E0
  c->lr=0x800E92E8u; f_800EB940(c); // 800E92E4
  c->r[4]=0u+0x802F0000u; // 800E92E8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 800E92EC
  W32(c->r[4]+0x00000010u,c->r[3]); // 800E92F0
  goto L_800E9308; // 800E92F4
L_800E92F8:;
  c->r[3]=0u+0x802F0000u; // 800E92F8
  c->r[0]=0u+0xFFFFFFFFu; // 800E92FC
  c->r[3]=c->r[3]+0xFFFFFE00u; // 800E9300
  W32(c->r[3]+0x00000010u,c->r[0]); // 800E9304
L_800E9308:;
  c->r[3]=0u+0x800F0000u; // 800E9308
  c->r[3]=c->r[3]+0xFFFF9240u; // 800E930C
  c->lr=0x800E9314u; f_800EBC40(c); // 800E9310
  cmps(c,0,(int32_t)c->r[3],0); // 800E9314
  if (!crb(c,2)) { goto L_800E9338; } // 800E9318
  c->r[12]=R32(c->r[13]+0xFFFFA7C0u); // 800E931C
  cmps(c,0,(int32_t)c->r[12],0); // 800E9320
  if (crb(c,2)) { goto L_800E9338; } // 800E9324
  c->r[3]=0u+0x00000002u; // 800E9328
  c->r[4]=0u+0x00000000u; // 800E932C
  c->ctr=c->r[12]; // 800E9330
  if (true) { c->lr=0x800E9338u; dispatch(c,c->ctr); } // 800E9334
L_800E9338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9338
  c->lr=c->r[0]; // 800E933C
  c->r[1]=c->r[1]+0x00000010u; // 800E9340
  return; // 800E9344
}

// __DVDStoreErrorCode
void f_800E9350(Ctx* __restrict c) {
  trace_call(0x800E9350u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9350
  c->r[0]=c->lr; // 800E9354
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9358
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E935C
  c->r[31]=0u+0x802F0000u; // 800E9360
  c->r[31]=c->r[31]+0xFFFFFE00u; // 800E9364
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E9368
  c->r[30]=c->r[4]|c->r[4]; // 800E936C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E9370
  c->lr=0x800E9378u; f_800D0510(c); // 800E9374
  c->r[6]=0u+0x80000000u; // 800E9378
  c->r[5]=0u+0x00000000u; // 800E937C
  c->r[0]=R32(c->r[6]+0x000000F8u); // 800E9380
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800E9384
  c->lr=0x800E938Cu; f_802179FC(c); // 800E9388
  c->r[3]=0u+0x800F0000u; // 800E938C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800E9390
  c->r[3]=c->r[3]+0xFFFF92D0u; // 800E9394
  W32(c->r[13]+0xFFFFA7C0u,c->r[30]); // 800E9398
  c->lr=0x800E93A0u; f_800EBAD0(c); // 800E939C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E93A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E93A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E93A8
  c->lr=c->r[0]; // 800E93AC
  c->r[1]=c->r[1]+0x00000010u; // 800E93B0
  return; // 800E93B4
}

// DVDCompareDiskID
void f_800E93C0(Ctx* __restrict c) {
  trace_call(0x800E93C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E93C0
  c->r[0]=c->lr; // 800E93C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E93C8
  c->r[0]=R8(c->r[3]+0x00000000u); // 800E93CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E93D0
  c->r[31]=c->r[4]|c->r[4]; // 800E93D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E93D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E93DC
  c->r[30]=c->r[3]|c->r[3]; // 800E93E0
  if (crb(c,2)) { goto L_800E940C; } // 800E93E4
  c->r[0]=R8(c->r[4]+0x00000000u); // 800E93E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E93EC
  if (crb(c,2)) { goto L_800E940C; } // 800E93F0
  c->r[5]=0u+0x00000004u; // 800E93F4
  c->lr=0x800E93FCu; f_80220224(c); // 800E93F8
  cmps(c,0,(int32_t)c->r[3],0); // 800E93FC
  if (crb(c,2)) { goto L_800E940C; } // 800E9400
  c->r[3]=0u+0x00000000u; // 800E9404
  goto L_800E9498; // 800E9408
L_800E940C:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 800E940C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E9410
  if (crb(c,2)) { goto L_800E943C; } // 800E9414
  c->r[0]=R8(c->r[31]+0x00000004u); // 800E9418
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E941C
  if (crb(c,2)) { goto L_800E943C; } // 800E9420
  c->r[3]=c->r[30]+0x00000004u; // 800E9424
  c->r[4]=c->r[31]+0x00000004u; // 800E9428
  c->r[5]=0u+0x00000002u; // 800E942C
  c->lr=0x800E9434u; f_80220224(c); // 800E9430
  cmps(c,0,(int32_t)c->r[3],0); // 800E9434
  if (crb(c,2)) { goto L_800E9444; } // 800E9438
L_800E943C:;
  c->r[3]=0u+0x00000000u; // 800E943C
  goto L_800E9498; // 800E9440
L_800E9444:;
  c->r[3]=R8(c->r[30]+0x00000006u); // 800E9444
  cmpu(c,0,c->r[3],0x000000FFu); // 800E9448
  if (crb(c,2)) { goto L_800E946C; } // 800E944C
  c->r[0]=R8(c->r[31]+0x00000006u); // 800E9450
  cmpu(c,0,c->r[0],0x000000FFu); // 800E9454
  if (crb(c,2)) { goto L_800E946C; } // 800E9458
  cmpu(c,0,c->r[3],c->r[0]); // 800E945C
  if (crb(c,2)) { goto L_800E946C; } // 800E9460
  c->r[3]=0u+0x00000000u; // 800E9464
  goto L_800E9498; // 800E9468
L_800E946C:;
  c->r[3]=R8(c->r[30]+0x00000007u); // 800E946C
  cmpu(c,0,c->r[3],0x000000FFu); // 800E9470
  if (crb(c,2)) { goto L_800E9494; } // 800E9474
  c->r[0]=R8(c->r[31]+0x00000007u); // 800E9478
  cmpu(c,0,c->r[0],0x000000FFu); // 800E947C
  if (crb(c,2)) { goto L_800E9494; } // 800E9480
  cmpu(c,0,c->r[3],c->r[0]); // 800E9484
  if (crb(c,2)) { goto L_800E9494; } // 800E9488
  c->r[3]=0u+0x00000000u; // 800E948C
  goto L_800E9498; // 800E9490
L_800E9494:;
  c->r[3]=0u+0x00000001u; // 800E9494
L_800E9498:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E949C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E94A0
  c->lr=c->r[0]; // 800E94A4
  c->r[1]=c->r[1]+0x00000010u; // 800E94A8
  return; // 800E94AC
}

// __DVDShowFatalMessage
void f_800E94B0(Ctx* __restrict c) {
  trace_call(0x800E94B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E94B0
  c->r[0]=c->lr; // 800E94B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E94B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E94BC
  c->r[31]=0u+0x00000000u; // 800E94C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E94C4
  c->r[30]=R32(c->r[2]+0xFFFF9B30u); // 800E94C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E94CC
  c->lr=0x800E94D4u; f_800F7830(c); // 800E94D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800E94D4
  if (!crb(c,2)) { goto L_800E94E8; } // 800E94D8
  c->r[3]=0u+0x00000001u; // 800E94DC
  c->lr=0x800E94E4u; f_800CB0A0(c); // 800E94E0
  goto L_800E94F0; // 800E94E4
L_800E94E8:;
  c->r[3]=0u+0x00000000u; // 800E94E8
  c->lr=0x800E94F0u; f_800CB0A0(c); // 800E94EC
L_800E94F0:;
  c->lr=0x800E94F4u; f_800F7E90(c); // 800E94F0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800E94F4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800E94F8
  cmpu(c,0,c->r[0],0x00000001u); // 800E94FC
  if (!crb(c,1)) { goto L_800E9524; } // 800E9500
  cmps(c,0,(int32_t)c->r[3],2); // 800E9504
  if (crb(c,2)) { goto L_800E9518; } // 800E9508
  c->r[29]=0u+0x80230000u; // 800E950C
  c->r[29]=c->r[29]+0x000019F0u; // 800E9510
  goto L_800E9528; // 800E9514
L_800E9518:;
  c->r[29]=0u+0x80230000u; // 800E9518
  c->r[29]=c->r[29]+0x00001A0Cu; // 800E951C
  goto L_800E9528; // 800E9520
L_800E9524:;
  c->r[29]=c->r[13]+0xFFFF9048u; // 800E9524
L_800E9528:;
  c->lr=0x800E952Cu; f_800F7830(c); // 800E9528
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E952C
  cmpu(c,0,c->r[0],0x00000006u); // 800E9530
  if (!crb(c,1)) { goto L_800E9540; } // 800E9534
  c->r[5]=R32(c->r[29]+0x00000004u); // 800E9538
  goto L_800E954C; // 800E953C
L_800E9540:;
  c->lr=0x800E9544u; f_800F7830(c); // 800E9540
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800E9544
  c->r[5]=R32(c->r[29]+c->r[0]); // 800E9548
L_800E954C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800E954C
  c->r[3]=c->r[1]+0x0000000Cu; // 800E9550
  c->r[4]=c->r[1]+0x00000008u; // 800E9554
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800E9558
  c->lr=0x800E9560u; f_800CA5D0(c); // 800E955C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E9560
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E9564
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E9568
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E956C
  c->lr=c->r[0]; // 800E9570
  c->r[1]=c->r[1]+0x00000020u; // 800E9574
  return; // 800E9578
}

// DVDSetAutoFatalMessaging
void f_800E9580(Ctx* __restrict c) {
  trace_call(0x800E9580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9580
  c->r[0]=c->lr; // 800E9584
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E958C
  c->r[31]=c->r[3]|c->r[3]; // 800E9590
  c->lr=0x800E9598u; f_800CBAA0(c); // 800E9594
  c->r[5]=R32(c->r[13]+0xFFFFA7C8u); // 800E9598
  cmps(c,0,(int32_t)c->r[31],0); // 800E959C
  c->r[4]=0u+0x00000000u; // 800E95A0
  c->r[0]=0u-c->r[5]; // 800E95A4
  c->r[0]=c->r[0]|c->r[5]; // 800E95A8
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 800E95AC
  if (crb(c,2)) { goto L_800E95BC; } // 800E95B0
  c->r[4]=0u+0x800F0000u; // 800E95B4
  c->r[4]=c->r[4]+0xFFFF94B0u; // 800E95B8
L_800E95BC:;
  W32(c->r[13]+0xFFFFA7C8u,c->r[4]); // 800E95BC
  c->lr=0x800E95C4u; f_800CBAE0(c); // 800E95C0
  c->r[3]=c->r[31]|c->r[31]; // 800E95C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E95C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E95CC
  c->lr=c->r[0]; // 800E95D0
  c->r[1]=c->r[1]+0x00000010u; // 800E95D4
  return; // 800E95D8
}

// __DVDGetAutoFatalMessaging
void f_800E95E0(Ctx* __restrict c) {
  trace_call(0x800E95E0u);
  c->r[3]=R32(c->r[13]+0xFFFFA7C8u); // 800E95E0
  c->r[0]=0u-c->r[3]; // 800E95E4
  c->r[0]=c->r[0]|c->r[3]; // 800E95E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800E95EC
  return; // 800E95F0
}

// __DVDPrintFatalMessage
void f_800E9600(Ctx* __restrict c) {
  trace_call(0x800E9600u);
  c->r[12]=R32(c->r[13]+0xFFFFA7C8u); // 800E9600
  cmps(c,0,(int32_t)c->r[12],0); // 800E9604
  if (crb(c,2)) return; // 800E9608
  c->ctr=c->r[12]; // 800E960C
  if (true) { dispatch(c,c->ctr); return; } // 800E9610
  return; // 800E9614
}

// lowCallback
void f_800E9620(Ctx* __restrict c) {
  trace_call(0x800E9620u);
  W32(c->r[13]+0xFFFFA7D0u,c->r[3]); // 800E9620
  c->r[0]=0u+0x00000001u; // 800E9624
  W32(c->r[13]+0xFFFF9050u,c->r[0]); // 800E9628
  return; // 800E962C
}

// __DVDCheckDevice
void f_800E9630(Ctx* __restrict c) {
  trace_call(0x800E9630u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9630
  c->r[0]=c->lr; // 800E9634
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E9638
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E963C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E9640
  W32(c->r[1]+0x00000024u,c->r[29]); // 800E9644
  c->r[29]=0u+0x460A0000u; // 800E9648
  c->lr=0x800E9650u; f_800CC570(c); // 800E964C
  c->r[0]=c->r[3]+0xF8000000u; // 800E9650
  cmpu(c,0,c->r[0],0x00000000u); // 800E9654
  if (!crb(c,2)) { goto L_800E9664; } // 800E9658
  c->r[3]=0u+0x00000001u; // 800E965C
  goto L_800E9890; // 800E9660
L_800E9664:;
  c->r[3]=c->r[1]+0x00000010u; // 800E9664
  c->lr=0x800E966Cu; f_800C5260(c); // 800E9668
  c->r[0]=R8(c->r[1]+0x00000011u); // 800E966C
  cmpu(c,0,c->r[0],0x0000001Eu); // 800E9670
  if (crb(c,0)) { goto L_800E9680; } // 800E9674
  cmpu(c,0,c->r[0],0x000000FEu); // 800E9678
  if (crb(c,0)) { goto L_800E9688; } // 800E967C
L_800E9680:;
  c->r[3]=0u+0x00000001u; // 800E9680
  goto L_800E9890; // 800E9684
L_800E9688:;
  c->r[3]=0u+0x80000000u; // 800E9688
  c->r[0]=R8(c->r[3]+0x0000319Cu); // 800E968C
  cmpu(c,0,c->r[0],0x00000081u); // 800E9690
  if (!crb(c,2)) { goto L_800E969C; } // 800E9694
  c->r[29]=0u+0x7ED40000u; // 800E9698
L_800E969C:;
  c->r[0]=0u+0x00000000u; // 800E969C
  c->r[3]=0u+0x802F0000u; // 800E96A0
  c->r[6]=0u+0x800F0000u; // 800E96A4
  W32(c->r[13]+0xFFFF9050u,c->r[0]); // 800E96A8
  c->r[5]=c->r[29]|c->r[29]; // 800E96AC
  c->r[3]=c->r[3]+0xFFFFFF00u; // 800E96B0
  c->r[6]=c->r[6]+0xFFFF9620u; // 800E96B4
  c->r[4]=0u+0x00000020u; // 800E96B8
  c->lr=0x800E96C0u; f_800EA980(c); // 800E96BC
L_800E96C0:;
  c->r[0]=R32(c->r[13]+0xFFFF9050u); // 800E96C0
  cmps(c,0,(int32_t)c->r[0],0); // 800E96C4
  if (crb(c,2)) { IRQCHK(c); goto L_800E96C0; } // 800E96C8
  c->r[0]=R32(c->r[13]+0xFFFFA7D0u); // 800E96CC
  cmps(c,0,(int32_t)c->r[0],2); // 800E96D0
  if (crb(c,2)) { goto L_800E96E8; } // 800E96D4
  if (!crb(c,0)) { goto L_800E9888; } // 800E96D8
  cmps(c,0,(int32_t)c->r[0],1); // 800E96DC
  if (!crb(c,0)) { goto L_800E9810; } // 800E96E0
  goto L_800E9888; // 800E96E4
L_800E96E8:;
  c->r[0]=0u+0x00000000u; // 800E96E8
  c->r[3]=0u+0x800F0000u; // 800E96EC
  W32(c->r[13]+0xFFFF9050u,c->r[0]); // 800E96F0
  c->r[3]=c->r[3]+0xFFFF9620u; // 800E96F4
  c->lr=0x800E96FCu; f_800EAE30(c); // 800E96F8
  c->r[0]=c->r[0]|0x00000000u; // 800E96FC
L_800E9700:;
  c->r[0]=R32(c->r[13]+0xFFFF9050u); // 800E9700
  cmps(c,0,(int32_t)c->r[0],0); // 800E9704
  if (crb(c,2)) { IRQCHK(c); goto L_800E9700; } // 800E9708
  c->lr=0x800E9710u; f_800EBDB0(c); // 800E970C
  c->r[0]=R32(c->r[13]+0xFFFFA7D0u); // 800E9710
  cmps(c,0,(int32_t)c->r[0],1); // 800E9714
  if (crb(c,2)) { goto L_800E9720; } // 800E9718
  goto L_800E9888; // 800E971C
L_800E9720:;
  c->lr=0x800E9724u; f_800EBDB0(c); // 800E9720
  c->r[0]=rotl(c->r[3],0)&0xFF000000u; cr0(c,c->r[0]); // 800E9724
  if (!crb(c,2)) { goto L_800E9880; } // 800E9728
  c->lr=0x800E9730u; f_800EBDB0(c); // 800E972C
  c->r[4]=0u+0x00050000u; // 800E9730
  c->r[3]=rotl(c->r[3],0)&0x00FFFFFFu; // 800E9734
  c->r[0]=c->r[4]+0x00002100u; // 800E9738
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800E973C
  if (crb(c,2)) { goto L_800E9748; } // 800E9740
  goto L_800E9810; // 800E9744
L_800E9748:;
  c->r[0]=0u+0x00000000u; // 800E9748
  c->r[3]=0u+0x802F0000u; // 800E974C
  c->r[6]=0u+0x800F0000u; // 800E9750
  W32(c->r[13]+0xFFFF9050u,c->r[0]); // 800E9754
  c->r[3]=c->r[3]+0xFFFFFF00u; // 800E9758
  c->r[4]=0u+0x00040000u; // 800E975C
  c->r[6]=c->r[6]+0xFFFF9620u; // 800E9760
  c->r[5]=0u+0x00000000u; // 800E9764
  c->lr=0x800E976Cu; f_800EB2D0(c); // 800E9768
  c->r[0]=c->r[0]|0x00000000u; // 800E976C
L_800E9770:;
  c->r[0]=R32(c->r[13]+0xFFFF9050u); // 800E9770
  cmps(c,0,(int32_t)c->r[0],0); // 800E9774
  if (crb(c,2)) { IRQCHK(c); goto L_800E9770; } // 800E9778
  c->r[0]=R32(c->r[13]+0xFFFFA7D0u); // 800E977C
  cmps(c,0,(int32_t)c->r[0],2); // 800E9780
  if (crb(c,2)) { goto L_800E9798; } // 800E9784
  if (!crb(c,0)) { goto L_800E9888; } // 800E9788
  cmps(c,0,(int32_t)c->r[0],1); // 800E978C
  if (!crb(c,0)) { goto L_800E9810; } // 800E9790
  goto L_800E9888; // 800E9794
L_800E9798:;
  c->r[0]=0u+0x00000000u; // 800E9798
  c->r[3]=0u+0x800F0000u; // 800E979C
  W32(c->r[13]+0xFFFF9050u,c->r[0]); // 800E97A0
  c->r[3]=c->r[3]+0xFFFF9620u; // 800E97A4
  c->lr=0x800E97ACu; f_800EAE30(c); // 800E97A8
  c->r[0]=c->r[0]|0x00000000u; // 800E97AC
L_800E97B0:;
  c->r[0]=R32(c->r[13]+0xFFFF9050u); // 800E97B0
  cmps(c,0,(int32_t)c->r[0],0); // 800E97B4
  if (crb(c,2)) { IRQCHK(c); goto L_800E97B0; } // 800E97B8
  c->lr=0x800E97C0u; f_800EBDB0(c); // 800E97BC
  c->r[0]=R32(c->r[13]+0xFFFFA7D0u); // 800E97C0
  cmps(c,0,(int32_t)c->r[0],1); // 800E97C4
  if (crb(c,2)) { goto L_800E97D0; } // 800E97C8
  goto L_800E9888; // 800E97CC
L_800E97D0:;
  c->lr=0x800E97D4u; f_800EBDB0(c); // 800E97D0
  c->r[0]=rotl(c->r[3],0)&0xFF000000u; cr0(c,c->r[0]); // 800E97D4
  if (!crb(c,2)) { goto L_800E9880; } // 800E97D8
  c->lr=0x800E97E0u; f_800EBDB0(c); // 800E97DC
  c->r[4]=0u+0x00050000u; // 800E97E0
  c->r[3]=rotl(c->r[3],0)&0x00FFFFFFu; // 800E97E4
  c->r[0]=c->r[4]+0x00003100u; // 800E97E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800E97EC
  if (crb(c,2)) { goto L_800E9808; } // 800E97F0
  if (!crb(c,0)) { goto L_800E9810; } // 800E97F4
  c->r[0]=c->r[4]+0x00002000u; // 800E97F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800E97FC
  if (crb(c,2)) { goto L_800E9808; } // 800E9800
  goto L_800E9810; // 800E9804
L_800E9808:;
  c->r[3]=0u+0x00000001u; // 800E9808
  goto L_800E9890; // 800E980C
L_800E9810:;
  c->r[30]=R32(c->r[2]+0xFFFF9B38u); // 800E9810
  c->r[31]=0u+0x00000000u; // 800E9814
  c->lr=0x800E981Cu; f_800F7830(c); // 800E9818
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800E981C
  if (!crb(c,2)) { goto L_800E9830; } // 800E9820
  c->r[3]=0u+0x00000001u; // 800E9824
  c->lr=0x800E982Cu; f_800CB0A0(c); // 800E9828
  goto L_800E9838; // 800E982C
L_800E9830:;
  c->r[3]=0u+0x00000000u; // 800E9830
  c->lr=0x800E9838u; f_800CB0A0(c); // 800E9834
L_800E9838:;
  c->r[29]=0u+0x80230000u; // 800E9838
  c->r[29]=c->r[29]+0x00001A28u; // 800E983C
  c->lr=0x800E9844u; f_800F7830(c); // 800E9840
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800E9844
  cmpu(c,0,c->r[0],0x00000006u); // 800E9848
  if (!crb(c,1)) { goto L_800E9858; } // 800E984C
  c->r[5]=R32(c->r[29]+0x00000004u); // 800E9850
  goto L_800E9864; // 800E9854
L_800E9858:;
  c->lr=0x800E985Cu; f_800F7830(c); // 800E9858
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800E985C
  c->r[5]=R32(c->r[29]+c->r[0]); // 800E9860
L_800E9864:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9864
  c->r[4]=c->r[1]+0x0000000Cu; // 800E9868
  c->r[3]=c->r[1]+0x00000008u; // 800E986C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E9870
  c->lr=0x800E9878u; f_800CA5D0(c); // 800E9874
  c->r[3]=0u+0x00000000u; // 800E9878
  goto L_800E9890; // 800E987C
L_800E9880:;
  c->r[3]=0u+0x00000000u; // 800E9880
  goto L_800E9890; // 800E9884
L_800E9888:;
  c->lr=0x800E988Cu; f_800E94B0(c); // 800E9888
  c->r[3]=0u+0x00000000u; // 800E988C
L_800E9890:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E9890
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E9894
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E9898
  c->r[29]=R32(c->r[1]+0x00000024u); // 800E989C
  c->lr=c->r[0]; // 800E98A0
  c->r[1]=c->r[1]+0x00000030u; // 800E98A4
  return; // 800E98A8
}

// doTransactionCallback
void f_800E98B0(Ctx* __restrict c) {
  trace_call(0x800E98B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E98B0
  c->r[0]=c->lr; // 800E98B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E98B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E98BC
  c->r[31]=c->r[4]|c->r[4]; // 800E98C0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800E98C4
  c->r[0]=c->r[5]+0x01150000u; // 800E98C8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800E98CC
  if (crb(c,2)) { goto L_800E98F4; } // 800E98D0
  c->r[3]=0u+0x802B0000u; // 800E98D4
  c->r[3]=c->r[3]+0x00000598u; // 800E98D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E98DC
  c->lr=0x800E98E4u; f_800C8450(c); // 800E98E0
  c->r[3]=0u+0xFEEC0000u; // 800E98E4
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 800E98E8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E98EC
  goto L_800E9948; // 800E98F0
L_800E98F4:;
  c->r[6]=0u+0x00000000u; // 800E98F4
  W8(c->r[13]+0xFFFFA7D8u,c->r[6]); // 800E98F8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E98FC
  cmps(c,0,(int32_t)c->r[0],0); // 800E9900
  if (crb(c,2)) { goto L_800E9948; } // 800E9904
  c->r[0]=R8(c->r[13]+0xFFFFA7F8u); // 800E9908
  c->r[5]=0u+0x00000001u; // 800E990C
  W8(c->r[13]+0xFFFFA7D9u,c->r[5]); // 800E9910
  cmpu(c,0,c->r[0],0x00000001u); // 800E9914
  if (!crb(c,2)) { goto L_800E9924; } // 800E9918
  W8(c->r[13]+0xFFFFA7F8u,c->r[6]); // 800E991C
  c->r[3]=c->r[3]|0x00000008u; // 800E9920
L_800E9924:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800E9924
  if (crb(c,2)) { goto L_800E9934; } // 800E9928
  c->r[0]=0u+0x00000000u; // 800E992C
  W32(c->r[13]+0xFFFFA7ECu,c->r[0]); // 800E9930
L_800E9934:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800E9934
  c->ctr=c->r[12]; // 800E9938
  if (true) { c->lr=0x800E9940u; dispatch(c,c->ctr); } // 800E993C
  c->r[0]=0u+0x00000000u; // 800E9940
  W8(c->r[13]+0xFFFFA7D9u,c->r[0]); // 800E9944
L_800E9948:;
  c->r[0]=0u+0x00000000u; // 800E9948
  W8(c->r[31]+0x00000008u,c->r[0]); // 800E994C
  c->r[3]=0u+0x00000000u; // 800E9950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9958
  c->lr=c->r[0]; // 800E995C
  c->r[1]=c->r[1]+0x00000010u; // 800E9960
  return; // 800E9964
}

// doPrepareCoverRegisterCallback
void f_800E9970(Ctx* __restrict c) {
  trace_call(0x800E9970u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9970
  c->r[0]=c->lr; // 800E9974
  c->r[5]=0u+0x802F0000u; // 800E9978
  c->r[6]=0u+0x802F0000u; // 800E997C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9980
  c->r[5]=c->r[5]+0xFFFFFFA0u; // 800E9984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9988
  c->r[31]=c->r[4]|c->r[4]; // 800E998C
  c->r[0]=R32(c->r[6]+0xFFFFFFC0u); // 800E9990
  c->r[6]=0u+0x00000000u; // 800E9994
  W8(c->r[13]+0xFFFFA7D8u,c->r[6]); // 800E9998
  W32(c->r[5]+0x00000004u,c->r[0]); // 800E999C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800E99A0
  c->r[0]=c->r[5]+0x01150000u; // 800E99A4
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800E99A8
  if (crb(c,2)) { goto L_800E99D0; } // 800E99AC
  c->r[3]=0u+0x802B0000u; // 800E99B0
  c->r[3]=c->r[3]+0x00000598u; // 800E99B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E99B8
  c->lr=0x800E99C0u; f_800C8450(c); // 800E99BC
  c->r[3]=0u+0xFEEC0000u; // 800E99C0
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 800E99C4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800E99C8
  goto L_800E9A0C; // 800E99CC
L_800E99D0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E99D0
  cmps(c,0,(int32_t)c->r[0],0); // 800E99D4
  if (crb(c,2)) { goto L_800E9A0C; } // 800E99D8
  c->r[0]=R8(c->r[13]+0xFFFFA7F8u); // 800E99DC
  c->r[5]=0u+0x00000001u; // 800E99E0
  W8(c->r[13]+0xFFFFA7D9u,c->r[5]); // 800E99E4
  cmpu(c,0,c->r[0],0x00000001u); // 800E99E8
  if (!crb(c,2)) { goto L_800E99F8; } // 800E99EC
  W8(c->r[13]+0xFFFFA7F8u,c->r[6]); // 800E99F0
  c->r[3]=c->r[3]|0x00000008u; // 800E99F4
L_800E99F8:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800E99F8
  c->ctr=c->r[12]; // 800E99FC
  if (true) { c->lr=0x800E9A04u; dispatch(c,c->ctr); } // 800E9A00
  c->r[0]=0u+0x00000000u; // 800E9A04
  W8(c->r[13]+0xFFFFA7D9u,c->r[0]); // 800E9A08
L_800E9A0C:;
  c->r[0]=0u+0x00000000u; // 800E9A0C
  W8(c->r[31]+0x00000008u,c->r[0]); // 800E9A10
  c->r[3]=0u+0x00000000u; // 800E9A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9A1C
  c->lr=c->r[0]; // 800E9A20
  c->r[1]=c->r[1]+0x00000010u; // 800E9A24
  return; // 800E9A28
}

// DVDLowFinalize
void f_800E9A30(Ctx* __restrict c) {
  trace_call(0x800E9A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9A30
  c->r[0]=c->lr; // 800E9A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9A38
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800E9A3C
  c->lr=0x800E9A44u; f_800FAB20(c); // 800E9A40
  cmps(c,0,(int32_t)c->r[3],0); // 800E9A44
  if (crb(c,2)) { goto L_800E9A64; } // 800E9A48
  c->r[3]=0u+0x802B0000u; // 800E9A4C
  c->r[3]=c->r[3]+0x000005F8u; // 800E9A50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9A54
  c->lr=0x800E9A5Cu; f_800C8450(c); // 800E9A58
  c->r[3]=0u+0x00000000u; // 800E9A5C
  goto L_800E9A70; // 800E9A60
L_800E9A64:;
  c->r[0]=0u+0x00000000u; // 800E9A64
  W8(c->r[13]+0xFFFFA7E5u,c->r[0]); // 800E9A68
  c->r[3]=0u+0x00000001u; // 800E9A6C
L_800E9A70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9A70
  c->lr=c->r[0]; // 800E9A74
  c->r[1]=c->r[1]+0x00000010u; // 800E9A78
  return; // 800E9A7C
}

// DVDLowInit
void f_800E9A80(Ctx* __restrict c) {
  trace_call(0x800E9A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9A80
  c->r[0]=c->lr; // 800E9A84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9A88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9A8C
  c->r[31]=0u+0x802B0000u; // 800E9A90
  c->r[31]=c->r[31]+0x00000598u; // 800E9A94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E9A98
  c->r[0]=R8(c->r[13]+0xFFFFA7E5u); // 800E9A9C
  cmps(c,0,(int32_t)c->r[0],0); // 800E9AA0
  if (!crb(c,2)) { goto L_800E9C28; } // 800E9AA4
  c->r[0]=0u+0x00000001u; // 800E9AA8
  W8(c->r[13]+0xFFFFA7E5u,c->r[0]); // 800E9AAC
  c->lr=0x800E9AB4u; f_800FA490(c); // 800E9AB0
  cmps(c,0,(int32_t)c->r[3],0); // 800E9AB4
  if (crb(c,2)) { goto L_800E9AD4; } // 800E9AB8
  c->r[4]=c->r[3]|c->r[3]; // 800E9ABC
  c->r[3]=c->r[31]+0x00000088u; // 800E9AC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9AC4
  c->lr=0x800E9ACCu; f_800C8450(c); // 800E9AC8
  c->r[3]=0u+0x00000000u; // 800E9ACC
  goto L_800E9CCC; // 800E9AD0
L_800E9AD4:;
  c->lr=0x800E9AD8u; f_800FA030(c); // 800E9AD4
  c->r[30]=c->r[3]|c->r[3]; // 800E9AD8
  c->lr=0x800E9AE0u; f_800FA020(c); // 800E9ADC
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 800E9AE0
  if (crb(c,2)) { goto L_800E9AF0; } // 800E9AE4
  c->r[0]=c->r[30]+0x0000001Fu; // 800E9AE8
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 800E9AEC
L_800E9AF0:;
  c->r[0]=c->r[30]+0x00000080u; // 800E9AF0
  cmpu(c,0,c->r[0],c->r[3]); // 800E9AF4
  if (!crb(c,1)) { goto L_800E9B0C; } // 800E9AF8
  c->r[3]=c->r[31]+0x000000A8u; // 800E9AFC
  c->r[4]=0u+0x00000080u; // 800E9B00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9B04
  c->lr=0x800E9B0Cu; f_800C8450(c); // 800E9B08
L_800E9B0C:;
  c->r[3]=c->r[30]+0x00000080u; // 800E9B0C
  c->lr=0x800E9B14u; f_800FA040(c); // 800E9B10
  cmps(c,0,(int32_t)c->r[30],0); // 800E9B14
  W32(c->r[13]+0xFFFFA7F4u,c->r[30]); // 800E9B18
  if (!crb(c,2)) { goto L_800E9B34; } // 800E9B1C
  c->r[3]=c->r[31]+0x000000E4u; // 800E9B20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9B24
  c->lr=0x800E9B2Cu; f_800C8450(c); // 800E9B28
  c->r[0]=0u+0x00000000u; // 800E9B2C
  goto L_800E9B98; // 800E9B30
L_800E9B34:;
  c->lr=0x800E9B38u; f_800FA030(c); // 800E9B34
  c->r[30]=c->r[3]|c->r[3]; // 800E9B38
  c->lr=0x800E9B40u; f_800FA020(c); // 800E9B3C
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 800E9B40
  if (crb(c,2)) { goto L_800E9B50; } // 800E9B44
  c->r[0]=c->r[30]+0x0000001Fu; // 800E9B48
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 800E9B4C
L_800E9B50:;
  c->r[0]=c->r[30]+0x00000020u; // 800E9B50
  cmpu(c,0,c->r[0],c->r[3]); // 800E9B54
  if (!crb(c,1)) { goto L_800E9B6C; } // 800E9B58
  c->r[3]=c->r[31]+0x000000A8u; // 800E9B5C
  c->r[4]=0u+0x00000020u; // 800E9B60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9B64
  c->lr=0x800E9B6Cu; f_800C8450(c); // 800E9B68
L_800E9B6C:;
  c->r[3]=c->r[30]+0x00000020u; // 800E9B6C
  c->lr=0x800E9B74u; f_800FA040(c); // 800E9B70
  cmps(c,0,(int32_t)c->r[30],0); // 800E9B74
  W32(c->r[13]+0xFFFFA7F0u,c->r[30]); // 800E9B78
  if (!crb(c,2)) { goto L_800E9B94; } // 800E9B7C
  c->r[3]=c->r[31]+0x0000010Cu; // 800E9B80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9B84
  c->lr=0x800E9B8Cu; f_800C8450(c); // 800E9B88
  c->r[0]=0u+0x00000000u; // 800E9B8C
  goto L_800E9B98; // 800E9B90
L_800E9B94:;
  c->r[0]=0u+0x00000001u; // 800E9B94
L_800E9B98:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E9B98
  if (!crb(c,2)) { goto L_800E9BA8; } // 800E9B9C
  c->r[3]=0u+0x00000000u; // 800E9BA0
  goto L_800E9CCC; // 800E9BA4
L_800E9BA8:;
  c->r[0]=R8(c->r[13]+0xFFFFA7E4u); // 800E9BA8
  cmps(c,0,(int32_t)c->r[0],0); // 800E9BAC
  if (!crb(c,2)) { goto L_800E9C28; } // 800E9BB0
  c->r[5]=0u+0x00000000u; // 800E9BB4
  c->r[4]=0u+0x802F0000u; // 800E9BB8
  {uint32_t ea=c->r[4]+0xFFFFFF20u; W32(ea,c->r[5]); c->r[4]=ea;} // 800E9BBC
  c->r[3]=0u+0xFEEC0000u; // 800E9BC0
  c->r[0]=0u+0x00000001u; // 800E9BC4
  c->r[6]=0u+0x00000002u; // 800E9BC8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E9BCC
  c->r[3]=c->r[3]+0xFFFFDAEDu; // 800E9BD0
  W8(c->r[4]+0x00000008u,c->r[5]); // 800E9BD4
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800E9BD8
  W32(c->r[4]+0x00000010u,c->r[5]); // 800E9BDC
  W32(c->r[4]+0x00000020u,c->r[5]); // 800E9BE0
  W32(c->r[4]+0x00000024u,c->r[5]); // 800E9BE4
  W8(c->r[4]+0x00000028u,c->r[5]); // 800E9BE8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800E9BEC
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E9BF0
  W32(c->r[4]+0x00000040u,c->r[5]); // 800E9BF4
  W32(c->r[4]+0x00000044u,c->r[5]); // 800E9BF8
  W8(c->r[4]+0x00000048u,c->r[5]); // 800E9BFC
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 800E9C00
  W32(c->r[4]+0x00000050u,c->r[6]); // 800E9C04
  c->r[6]=0u+0x00000003u; // 800E9C08
  W32(c->r[4]+0x00000060u,c->r[5]); // 800E9C0C
  W32(c->r[4]+0x00000064u,c->r[5]); // 800E9C10
  W8(c->r[4]+0x00000068u,c->r[5]); // 800E9C14
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 800E9C18
  W32(c->r[4]+0x00000070u,c->r[6]); // 800E9C1C
  W32(c->r[13]+0xFFFFA7E0u,c->r[5]); // 800E9C20
  W8(c->r[13]+0xFFFFA7E4u,c->r[0]); // 800E9C24
L_800E9C28:;
  c->r[3]=R32(c->r[13]+0xFFFFA7F0u); // 800E9C28
  c->r[4]=c->r[13]+0xFFFF9060u; // 800E9C2C
  c->r[5]=0u+0x00000020u; // 800E9C30
  c->lr=0x800E9C38u; f_8022004C(c); // 800E9C34
  c->r[3]=R32(c->r[13]+0xFFFFA7F0u); // 800E9C38
  c->r[4]=0u+0x00000000u; // 800E9C3C
  c->lr=0x800E9C44u; f_800FA930(c); // 800E9C40
  cmps(c,0,(int32_t)c->r[3],0); // 800E9C44
  W32(c->r[13]+0xFFFF9058u,c->r[3]); // 800E9C48
  if (crb(c,0)) { goto L_800E9C58; } // 800E9C4C
  c->r[3]=0u+0x00000001u; // 800E9C50
  goto L_800E9CCC; // 800E9C54
L_800E9C58:;
  cmps(c,0,(int32_t)c->r[3],-5); // 800E9C58
  if (crb(c,2)) { goto L_800E9CA4; } // 800E9C5C
  if (!crb(c,0)) { goto L_800E9C70; } // 800E9C60
  cmps(c,0,(int32_t)c->r[3],-6); // 800E9C64
  if (!crb(c,0)) { goto L_800E9C7C; } // 800E9C68
  goto L_800E9CB8; // 800E9C6C
L_800E9C70:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800E9C70
  if (crb(c,2)) { goto L_800E9C90; } // 800E9C74
  goto L_800E9CB8; // 800E9C78
L_800E9C7C:;
  c->r[3]=c->r[31]+0x0000012Cu; // 800E9C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9C80
  c->lr=0x800E9C88u; f_800C8450(c); // 800E9C84
  c->r[3]=0u+0x00000000u; // 800E9C88
  goto L_800E9CCC; // 800E9C8C
L_800E9C90:;
  c->r[3]=c->r[31]+0x00000178u; // 800E9C90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9C94
  c->lr=0x800E9C9Cu; f_800C8450(c); // 800E9C98
  c->r[3]=0u+0x00000000u; // 800E9C9C
  goto L_800E9CCC; // 800E9CA0
L_800E9CA4:;
  c->r[3]=c->r[31]+0x000001C0u; // 800E9CA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9CA8
  c->lr=0x800E9CB0u; f_800C8450(c); // 800E9CAC
  c->r[3]=0u+0x00000000u; // 800E9CB0
  goto L_800E9CCC; // 800E9CB4
L_800E9CB8:;
  c->r[4]=c->r[3]|c->r[3]; // 800E9CB8
  c->r[3]=c->r[31]+0x0000020Cu; // 800E9CBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9CC0
  c->lr=0x800E9CC8u; f_800C8450(c); // 800E9CC4
  c->r[3]=0u+0x00000000u; // 800E9CC8
L_800E9CCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E9CD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E9CD4
  c->lr=c->r[0]; // 800E9CD8
  c->r[1]=c->r[1]+0x00000010u; // 800E9CDC
  return; // 800E9CE0
}

// DVDLowReadDiskID
void f_800E9CF0(Ctx* __restrict c) {
  trace_call(0x800E9CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9CF0
  c->r[0]=c->lr; // 800E9CF4
  c->r[7]=0u+0x802F0000u; // 800E9CF8
  c->r[10]=0u+0x00000001u; // 800E9CFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E9D00
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800E9D04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E9D08
  c->r[31]=0u+0x802B0000u; // 800E9D0C
  c->r[31]=c->r[31]+0x00000598u; // 800E9D10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E9D14
  c->r[30]=c->r[3]|c->r[3]; // 800E9D18
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E9D1C
  c->r[9]=R32(c->r[13]+0xFFFFA7E0u); // 800E9D20
  W8(c->r[13]+0xFFFFA7D8u,c->r[10]); // 800E9D24
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800E9D28
  c->r[6]=c->r[7]+c->r[8]; // 800E9D2C
  c->r[5]=R8(c->r[6]+0x00000008u); // 800E9D30
  c->r[0]=0u-c->r[5]; // 800E9D34
  c->r[0]=c->r[0]|c->r[5]; // 800E9D38
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800E9D3C
  cmpu(c,0,c->r[0],0x00000001u); // 800E9D40
  if (!crb(c,2)) { goto L_800E9D6C; } // 800E9D44
  c->r[4]=c->r[9]|c->r[9]; // 800E9D48
  c->r[3]=c->r[31]+0x00000240u; // 800E9D4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9D50
  c->lr=0x800E9D58u; f_800C8450(c); // 800E9D54
  c->r[3]=c->r[31]+0x00000278u; // 800E9D58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9D5C
  c->lr=0x800E9D64u; f_800C8450(c); // 800E9D60
  c->r[0]=c->r[0]|0x00000000u; // 800E9D64
L_800E9D68:;
  IRQCHK(c); goto L_800E9D68; // 800E9D68
L_800E9D6C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800E9D6C
  c->r[0]=c->r[5]+0x01150000u; // 800E9D70
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800E9D74
  if (crb(c,2)) { goto L_800E9D8C; } // 800E9D78
  c->r[3]=c->r[31]+0x000002A8u; // 800E9D7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9D80
  c->lr=0x800E9D88u; f_800C8450(c); // 800E9D84
L_800E9D88:;
  IRQCHK(c); goto L_800E9D88; // 800E9D88
L_800E9D8C:;
  W32(c->r[7]+c->r[8],c->r[4]); // 800E9D8C
  c->r[0]=c->r[9]+0x00000001u; // 800E9D90
  cmps(c,0,(int32_t)c->r[0],4); // 800E9D94
  W32(c->r[6]+0x00000004u,c->r[10]); // 800E9D98
  W8(c->r[6]+0x00000008u,c->r[10]); // 800E9D9C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800E9DA0
  if (crb(c,0)) { goto L_800E9DB0; } // 800E9DA4
  c->r[0]=0u+0x00000000u; // 800E9DA8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800E9DAC
L_800E9DB0:;
  c->r[4]=0u+0x802F0000u; // 800E9DB0
  cmps(c,0,(int32_t)c->r[3],0); // 800E9DB4
  c->r[0]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800E9DB8
  c->r[4]=c->r[4]+0xFFFFFF20u; // 800E9DBC
  c->r[29]=c->r[4]+c->r[0]; // 800E9DC0
  if (!crb(c,2)) { goto L_800E9DD4; } // 800E9DC4
  c->r[3]=c->r[31]+0x000002E8u; // 800E9DC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9DCC
  c->lr=0x800E9DD4u; f_800C8450(c); // 800E9DD0
L_800E9DD4:;
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800E9DD4
  c->r[0]=c->r[3]+0x00000001u; // 800E9DD8
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800E9DDC
  cmps(c,0,(int32_t)c->r[0],4); // 800E9DE0
  if (crb(c,0)) { goto L_800E9DF0; } // 800E9DE4
  c->r[0]=0u+0x00000000u; // 800E9DE8
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800E9DEC
L_800E9DF0:;
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800E9DF0
  c->r[9]=0u+0x800F0000u; // 800E9DF4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800E9DF8
  c->r[4]=0u+0x00000070u; // 800E9DFC
  W8(c->r[3]+c->r[0],c->r[4]); // 800E9E00
  c->r[7]=c->r[30]|c->r[30]; // 800E9E04
  c->r[10]=c->r[29]|c->r[29]; // 800E9E08
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800E9E0C
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800E9E10
  c->r[4]=0u+0x00000070u; // 800E9E14
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800E9E18
  c->r[6]=0u+0x00000020u; // 800E9E1C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800E9E20
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800E9E24
  c->r[5]=c->r[5]+c->r[0]; // 800E9E28
  c->r[8]=0u+0x00000020u; // 800E9E2C
  c->lr=0x800E9E34u; f_800FB1C0(c); // 800E9E30
  cmps(c,0,(int32_t)c->r[3],0); // 800E9E34
  if (crb(c,2)) { goto L_800E9E5C; } // 800E9E38
  c->r[4]=c->r[3]|c->r[3]; // 800E9E3C
  c->r[3]=c->r[31]+0x00000324u; // 800E9E40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9E44
  c->lr=0x800E9E4Cu; f_800C8450(c); // 800E9E48
  c->r[0]=0u+0x00000000u; // 800E9E4C
  W8(c->r[29]+0x00000008u,c->r[0]); // 800E9E50
  c->r[3]=0u+0x00000000u; // 800E9E54
  goto L_800E9E60; // 800E9E58
L_800E9E5C:;
  c->r[3]=0u+0x00000001u; // 800E9E5C
L_800E9E60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E9E60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E9E64
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E9E68
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E9E6C
  c->lr=c->r[0]; // 800E9E70
  c->r[1]=c->r[1]+0x00000020u; // 800E9E74
  return; // 800E9E78
}

// DVDLowOpenPartition
void f_800E9E80(Ctx* __restrict c) {
  trace_call(0x800E9E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9E80
  c->r[0]=c->lr; // 800E9E84
  c->r[9]=0u+0x802F0000u; // 800E9E88
  cmps(c,0,(int32_t)c->r[4],0); // 800E9E8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E9E90
  c->r[9]=c->r[9]+0xFFFFFF20u; // 800E9E94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E9E98
  c->r[31]=0u+0x802B0000u; // 800E9E9C
  c->r[31]=c->r[31]+0x00000598u; // 800E9EA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E9EA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E9EA8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E9EAC
  if (crb(c,2)) { goto L_800E9ED0; } // 800E9EB0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800E9EB4
  if (crb(c,2)) { goto L_800E9ED0; } // 800E9EB8
  c->r[3]=c->r[31]+0x00000360u; // 800E9EBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9EC0
  c->lr=0x800E9EC8u; f_800C8450(c); // 800E9EC4
  c->r[3]=0u+0x00000000u; // 800E9EC8
  goto L_800EA0CC; // 800E9ECC
L_800E9ED0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800E9ED0
  if (crb(c,2)) { goto L_800E9EF4; } // 800E9ED4
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800E9ED8
  if (crb(c,2)) { goto L_800E9EF4; } // 800E9EDC
  c->r[3]=c->r[31]+0x00000398u; // 800E9EE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9EE4
  c->lr=0x800E9EECu; f_800C8450(c); // 800E9EE8
  c->r[3]=0u+0x00000000u; // 800E9EEC
  goto L_800EA0CC; // 800E9EF0
L_800E9EF4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800E9EF4
  if (crb(c,2)) { goto L_800E9F18; } // 800E9EF8
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 800E9EFC
  if (crb(c,2)) { goto L_800E9F18; } // 800E9F00
  c->r[3]=c->r[31]+0x00000398u; // 800E9F04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9F08
  c->lr=0x800E9F10u; f_800C8450(c); // 800E9F0C
  c->r[3]=0u+0x00000000u; // 800E9F10
  goto L_800EA0CC; // 800E9F14
L_800E9F18:;
  c->r[29]=R32(c->r[13]+0xFFFFA7E0u); // 800E9F18
  c->r[28]=0u+0x00000001u; // 800E9F1C
  c->r[12]=c->r[9]+0x00000000u; // 800E9F20
  W8(c->r[13]+0xFFFFA7D8u,c->r[28]); // 800E9F24
  c->r[30]=rotl(c->r[29],5)&0xFFFFFFE0u; // 800E9F28
  c->r[11]=c->r[12]+c->r[30]; // 800E9F2C
  c->r[10]=R8(c->r[11]+0x00000008u); // 800E9F30
  c->r[0]=0u-c->r[10]; // 800E9F34
  c->r[0]=c->r[0]|c->r[10]; // 800E9F38
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800E9F3C
  cmpu(c,0,c->r[0],0x00000001u); // 800E9F40
  if (!crb(c,2)) { goto L_800E9F6C; } // 800E9F44
  c->r[4]=c->r[29]|c->r[29]; // 800E9F48
  c->r[3]=c->r[31]+0x00000240u; // 800E9F4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9F50
  c->lr=0x800E9F58u; f_800C8450(c); // 800E9F54
  c->r[3]=c->r[31]+0x00000278u; // 800E9F58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9F5C
  c->lr=0x800E9F64u; f_800C8450(c); // 800E9F60
  c->r[0]=c->r[0]|0x00000000u; // 800E9F64
L_800E9F68:;
  IRQCHK(c); goto L_800E9F68; // 800E9F68
L_800E9F6C:;
  c->r[10]=R32(c->r[11]+0x0000000Cu); // 800E9F6C
  c->r[0]=c->r[10]+0x01150000u; // 800E9F70
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800E9F74
  if (crb(c,2)) { goto L_800E9F8C; } // 800E9F78
  c->r[3]=c->r[31]+0x000002A8u; // 800E9F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9F80
  c->lr=0x800E9F88u; f_800C8450(c); // 800E9F84
L_800E9F88:;
  IRQCHK(c); goto L_800E9F88; // 800E9F88
L_800E9F8C:;
  W32(c->r[12]+c->r[30],c->r[8]); // 800E9F8C
  c->r[0]=c->r[29]+0x00000001u; // 800E9F90
  cmps(c,0,(int32_t)c->r[0],4); // 800E9F94
  W32(c->r[11]+0x00000004u,c->r[28]); // 800E9F98
  W8(c->r[11]+0x00000008u,c->r[28]); // 800E9F9C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800E9FA0
  if (crb(c,0)) { goto L_800E9FB0; } // 800E9FA4
  c->r[0]=0u+0x00000000u; // 800E9FA8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800E9FAC
L_800E9FB0:;
  c->r[8]=R32(c->r[13]+0xFFFFA7DCu); // 800E9FB0
  c->r[11]=rotl(c->r[29],5)&0xFFFFFFE0u; // 800E9FB4
  c->r[10]=c->r[9]+0x00000000u; // 800E9FB8
  c->r[0]=c->r[8]+0x00000001u; // 800E9FBC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800E9FC0
  cmps(c,0,(int32_t)c->r[0],4); // 800E9FC4
  c->r[30]=c->r[10]+c->r[11]; // 800E9FC8
  if (crb(c,0)) { goto L_800E9FD8; } // 800E9FCC
  c->r[0]=0u+0x00000000u; // 800E9FD0
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800E9FD4
L_800E9FD8:;
  c->r[8]=R32(c->r[13]+0xFFFFA7F4u); // 800E9FD8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800E9FDC
  c->r[10]=0u+0x0000008Bu; // 800E9FE0
  cmps(c,0,(int32_t)c->r[4],0); // 800E9FE4
  W8(c->r[8]+c->r[0],c->r[10]); // 800E9FE8
  c->r[8]=c->r[9]+0x000000C0u; // 800E9FEC
  c->r[0]=0u+0x00000020u; // 800E9FF0
  c->r[10]=R32(c->r[13]+0xFFFFA7DCu); // 800E9FF4
  c->r[11]=R32(c->r[13]+0xFFFFA7F4u); // 800E9FF8
  c->r[10]=rotl(c->r[10],5)&0xFFFFFFE0u; // 800E9FFC
  c->r[10]=c->r[11]+c->r[10]; // 800EA000
  W32(c->r[10]+0x00000004u,c->r[3]); // 800EA004
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800EA008
  c->r[10]=R32(c->r[13]+0xFFFFA7F4u); // 800EA00C
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800EA010
  W32(c->r[8]+0x00000004u,c->r[0]); // 800EA014
  c->r[0]=c->r[10]+c->r[3]; // 800EA018
  W32(c->r[9]+0x000000C0u,c->r[0]); // 800EA01C
  W32(c->r[8]+0x00000008u,c->r[4]); // 800EA020
  if (!crb(c,2)) { goto L_800EA034; } // 800EA024
  c->r[0]=0u+0x00000000u; // 800EA028
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 800EA02C
  goto L_800EA03C; // 800EA030
L_800EA034:;
  c->r[0]=0u+0x000002A4u; // 800EA034
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 800EA038
L_800EA03C:;
  c->r[3]=c->r[9]+0x000000C0u; // 800EA03C
  cmps(c,0,(int32_t)c->r[6],0); // 800EA040
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EA044
  if (!crb(c,2)) { goto L_800EA058; } // 800EA048
  c->r[0]=0u+0x00000000u; // 800EA04C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800EA050
  goto L_800EA05C; // 800EA054
L_800EA058:;
  W32(c->r[3]+0x00000014u,c->r[5]); // 800EA058
L_800EA05C:;
  c->r[6]=c->r[9]+0x000000C0u; // 800EA05C
  c->r[4]=c->r[9]+0x00000120u; // 800EA060
  W32(c->r[6]+0x00000018u,c->r[7]); // 800EA064
  c->r[3]=0u+0x000049E4u; // 800EA068
  c->r[0]=0u+0x00000020u; // 800EA06C
  c->r[8]=0u+0x800F0000u; // 800EA070
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 800EA074
  c->r[7]=c->r[6]|c->r[6]; // 800EA078
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EA07C
  c->r[9]=c->r[30]|c->r[30]; // 800EA080
  W32(c->r[6]+0x00000020u,c->r[4]); // 800EA084
  c->r[8]=c->r[8]+0xFFFF98B0u; // 800EA088
  c->r[4]=0u+0x0000008Bu; // 800EA08C
  c->r[5]=0u+0x00000003u; // 800EA090
  W32(c->r[6]+0x00000024u,c->r[0]); // 800EA094
  c->r[6]=0u+0x00000002u; // 800EA098
  c->lr=0x800EA0A0u; f_800FB570(c); // 800EA09C
  cmps(c,0,(int32_t)c->r[3],0); // 800EA0A0
  if (crb(c,2)) { goto L_800EA0C8; } // 800EA0A4
  c->r[4]=c->r[3]|c->r[3]; // 800EA0A8
  c->r[3]=c->r[31]+0x000003D0u; // 800EA0AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA0B0
  c->lr=0x800EA0B8u; f_800C8450(c); // 800EA0B4
  c->r[0]=0u+0x00000000u; // 800EA0B8
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EA0BC
  c->r[3]=0u+0x00000000u; // 800EA0C0
  goto L_800EA0CC; // 800EA0C4
L_800EA0C8:;
  c->r[3]=0u+0x00000001u; // 800EA0C8
L_800EA0CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA0CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EA0D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EA0D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EA0D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EA0DC
  c->lr=c->r[0]; // 800EA0E0
  c->r[1]=c->r[1]+0x00000020u; // 800EA0E4
  return; // 800EA0E8
}

// DVDLowOpenPartitionWithTmdAndTicketView
void f_800EA0F0(Ctx* __restrict c) {
  trace_call(0x800EA0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA0F0
  c->r[0]=c->lr; // 800EA0F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA0F8
  c->r[11]=c->r[1]+0x00000020u; // 800EA0FC
  c->lr=0x800EA104u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EA100
  cmps(c,0,(int32_t)c->r[8],0); // 800EA104
  c->r[10]=0u+0x802F0000u; // 800EA108
  c->r[31]=0u+0x802B0000u; // 800EA10C
  c->r[10]=c->r[10]+0xFFFFFF20u; // 800EA110
  c->r[31]=c->r[31]+0x00000598u; // 800EA114
  if (crb(c,2)) { goto L_800EA12C; } // 800EA118
  c->r[0]=rotl(c->r[8],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA11C
  if (crb(c,2)) { goto L_800EA12C; } // 800EA120
  c->r[3]=0u+0x00000000u; // 800EA124
  goto L_800EA33C; // 800EA128
L_800EA12C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800EA12C
  if (!crb(c,2)) { goto L_800EA14C; } // 800EA130
  c->r[3]=c->r[31]+0x00000458u; // 800EA134
  c->r[4]=c->r[31]+0x000004C8u; // 800EA138
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA13C
  c->lr=0x800EA144u; f_800C8450(c); // 800EA140
  c->r[3]=0u+0x00000000u; // 800EA144
  goto L_800EA33C; // 800EA148
L_800EA14C:;
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA14C
  if (crb(c,2)) { goto L_800EA16C; } // 800EA150
  c->r[3]=c->r[31]+0x0000047Cu; // 800EA154
  c->r[4]=c->r[31]+0x000004C8u; // 800EA158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA15C
  c->lr=0x800EA164u; f_800C8450(c); // 800EA160
  c->r[3]=0u+0x00000000u; // 800EA164
  goto L_800EA33C; // 800EA168
L_800EA16C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800EA16C
  if (!crb(c,2)) { goto L_800EA18C; } // 800EA170
  c->r[3]=c->r[31]+0x000004F0u; // 800EA174
  c->r[4]=c->r[31]+0x000004C8u; // 800EA178
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA17C
  c->lr=0x800EA184u; f_800C8450(c); // 800EA180
  c->r[3]=0u+0x00000000u; // 800EA184
  goto L_800EA33C; // 800EA188
L_800EA18C:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA18C
  if (crb(c,2)) { goto L_800EA1AC; } // 800EA190
  c->r[3]=c->r[31]+0x0000051Cu; // 800EA194
  c->r[4]=c->r[31]+0x000004C8u; // 800EA198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA19C
  c->lr=0x800EA1A4u; f_800C8450(c); // 800EA1A0
  c->r[3]=0u+0x00000000u; // 800EA1A4
  goto L_800EA33C; // 800EA1A8
L_800EA1AC:;
  c->r[28]=R32(c->r[13]+0xFFFFA7E0u); // 800EA1AC
  c->r[27]=0u+0x00000001u; // 800EA1B0
  c->r[29]=c->r[10]+0x00000000u; // 800EA1B4
  W8(c->r[13]+0xFFFFA7D8u,c->r[27]); // 800EA1B8
  c->r[30]=rotl(c->r[28],5)&0xFFFFFFE0u; // 800EA1BC
  c->r[12]=c->r[29]+c->r[30]; // 800EA1C0
  c->r[11]=R8(c->r[12]+0x00000008u); // 800EA1C4
  c->r[0]=0u-c->r[11]; // 800EA1C8
  c->r[0]=c->r[0]|c->r[11]; // 800EA1CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EA1D0
  cmpu(c,0,c->r[0],0x00000001u); // 800EA1D4
  if (!crb(c,2)) { goto L_800EA1FC; } // 800EA1D8
  c->r[4]=c->r[28]|c->r[28]; // 800EA1DC
  c->r[3]=c->r[31]+0x00000240u; // 800EA1E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA1E4
  c->lr=0x800EA1ECu; f_800C8450(c); // 800EA1E8
  c->r[3]=c->r[31]+0x00000278u; // 800EA1EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA1F0
  c->lr=0x800EA1F8u; f_800C8450(c); // 800EA1F4
L_800EA1F8:;
  IRQCHK(c); goto L_800EA1F8; // 800EA1F8
L_800EA1FC:;
  c->r[11]=R32(c->r[12]+0x0000000Cu); // 800EA1FC
  c->r[0]=c->r[11]+0x01150000u; // 800EA200
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EA204
  if (crb(c,2)) { goto L_800EA21C; } // 800EA208
  c->r[3]=c->r[31]+0x000002A8u; // 800EA20C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA210
  c->lr=0x800EA218u; f_800C8450(c); // 800EA214
L_800EA218:;
  IRQCHK(c); goto L_800EA218; // 800EA218
L_800EA21C:;
  W32(c->r[29]+c->r[30],c->r[9]); // 800EA21C
  c->r[0]=c->r[28]+0x00000001u; // 800EA220
  cmps(c,0,(int32_t)c->r[0],4); // 800EA224
  W32(c->r[12]+0x00000004u,c->r[27]); // 800EA228
  W8(c->r[12]+0x00000008u,c->r[27]); // 800EA22C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA230
  if (crb(c,0)) { goto L_800EA240; } // 800EA234
  c->r[0]=0u+0x00000000u; // 800EA238
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA23C
L_800EA240:;
  c->r[9]=R32(c->r[13]+0xFFFFA7DCu); // 800EA240
  c->r[12]=rotl(c->r[28],5)&0xFFFFFFE0u; // 800EA244
  c->r[11]=c->r[10]+0x00000000u; // 800EA248
  c->r[0]=c->r[9]+0x00000001u; // 800EA24C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA250
  cmps(c,0,(int32_t)c->r[0],4); // 800EA254
  c->r[30]=c->r[11]+c->r[12]; // 800EA258
  if (crb(c,0)) { goto L_800EA268; } // 800EA25C
  c->r[0]=0u+0x00000000u; // 800EA260
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA264
L_800EA268:;
  c->r[9]=R32(c->r[13]+0xFFFFA7F4u); // 800EA268
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EA26C
  c->r[11]=0u+0x00000094u; // 800EA270
  cmps(c,0,(int32_t)c->r[8],0); // 800EA274
  W8(c->r[9]+c->r[0],c->r[11]); // 800EA278
  c->r[9]=c->r[10]+0x000000C0u; // 800EA27C
  c->r[11]=0u+0x00000020u; // 800EA280
  c->r[0]=0u+0x000000D8u; // 800EA284
  c->r[12]=R32(c->r[13]+0xFFFFA7DCu); // 800EA288
  c->r[29]=R32(c->r[13]+0xFFFFA7F4u); // 800EA28C
  c->r[12]=rotl(c->r[12],5)&0xFFFFFFE0u; // 800EA290
  c->r[12]=c->r[29]+c->r[12]; // 800EA294
  W32(c->r[12]+0x00000004u,c->r[3]); // 800EA298
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800EA29C
  c->r[12]=R32(c->r[13]+0xFFFFA7F4u); // 800EA2A0
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800EA2A4
  W32(c->r[9]+0x00000004u,c->r[11]); // 800EA2A8
  c->r[3]=c->r[12]+c->r[3]; // 800EA2AC
  W32(c->r[10]+0x000000C0u,c->r[3]); // 800EA2B0
  W32(c->r[9]+0x00000008u,c->r[4]); // 800EA2B4
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 800EA2B8
  W32(c->r[9]+0x00000010u,c->r[6]); // 800EA2BC
  W32(c->r[9]+0x00000014u,c->r[5]); // 800EA2C0
  W32(c->r[9]+0x00000018u,c->r[8]); // 800EA2C4
  if (!crb(c,2)) { goto L_800EA2D8; } // 800EA2C8
  c->r[0]=0u+0x00000000u; // 800EA2CC
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 800EA2D0
  goto L_800EA2DC; // 800EA2D4
L_800EA2D8:;
  W32(c->r[9]+0x0000001Cu,c->r[7]); // 800EA2D8
L_800EA2DC:;
  c->r[7]=c->r[10]+0x000000C0u; // 800EA2DC
  c->r[3]=c->r[10]+0x00000120u; // 800EA2E0
  c->r[0]=0u+0x00000020u; // 800EA2E4
  c->r[8]=0u+0x800F0000u; // 800EA2E8
  W32(c->r[7]+0x00000020u,c->r[3]); // 800EA2EC
  c->r[9]=c->r[30]|c->r[30]; // 800EA2F0
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EA2F4
  c->r[8]=c->r[8]+0xFFFF98B0u; // 800EA2F8
  W32(c->r[7]+0x00000024u,c->r[0]); // 800EA2FC
  c->r[4]=0u+0x00000094u; // 800EA300
  c->r[5]=0u+0x00000004u; // 800EA304
  c->r[6]=0u+0x00000001u; // 800EA308
  c->lr=0x800EA310u; f_800FB570(c); // 800EA30C
  cmps(c,0,(int32_t)c->r[3],0); // 800EA310
  if (crb(c,2)) { goto L_800EA338; } // 800EA314
  c->r[4]=c->r[3]|c->r[3]; // 800EA318
  c->r[3]=c->r[31]+0x000003D0u; // 800EA31C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA320
  c->lr=0x800EA328u; f_800C8450(c); // 800EA324
  c->r[0]=0u+0x00000000u; // 800EA328
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EA32C
  c->r[3]=0u+0x00000000u; // 800EA330
  goto L_800EA33C; // 800EA334
L_800EA338:;
  c->r[3]=0u+0x00000001u; // 800EA338
L_800EA33C:;
  c->r[11]=c->r[1]+0x00000020u; // 800EA33C
  c->lr=0x800EA344u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EA340
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA344
  c->lr=c->r[0]; // 800EA348
  c->r[1]=c->r[1]+0x00000020u; // 800EA34C
  return; // 800EA350
}

// DVDLowGetNoDiscBufferSizes
void f_800EA360(Ctx* __restrict c) {
  trace_call(0x800EA360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA360
  c->r[0]=c->lr; // 800EA364
  cmps(c,0,(int32_t)c->r[4],0); // 800EA368
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA36C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA370
  c->r[31]=0u+0x802B0000u; // 800EA374
  c->r[31]=c->r[31]+0x00000598u; // 800EA378
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA37C
  if (crb(c,2)) { goto L_800EA38C; } // 800EA380
  cmps(c,0,(int32_t)c->r[5],0); // 800EA384
  if (!crb(c,2)) { goto L_800EA3A4; } // 800EA388
L_800EA38C:;
  c->r[3]=c->r[31]+0x00000560u; // 800EA38C
  c->r[4]=c->r[31]+0x00000544u; // 800EA390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA394
  c->lr=0x800EA39Cu; f_800C8450(c); // 800EA398
  c->r[3]=0u+0x00000000u; // 800EA39C
  goto L_800EA558; // 800EA3A0
L_800EA3A4:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA3A4
  if (crb(c,2)) { goto L_800EA3C4; } // 800EA3A8
  c->r[3]=c->r[31]+0x00000584u; // 800EA3AC
  c->r[4]=c->r[31]+0x00000544u; // 800EA3B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA3B4
  c->lr=0x800EA3BCu; f_800C8450(c); // 800EA3B8
  c->r[3]=0u+0x00000000u; // 800EA3BC
  goto L_800EA558; // 800EA3C0
L_800EA3C4:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA3C4
  if (crb(c,2)) { goto L_800EA3E4; } // 800EA3C8
  c->r[3]=c->r[31]+0x000005ACu; // 800EA3CC
  c->r[4]=c->r[31]+0x00000544u; // 800EA3D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA3D4
  c->lr=0x800EA3DCu; f_800C8450(c); // 800EA3D8
  c->r[3]=0u+0x00000000u; // 800EA3DC
  goto L_800EA558; // 800EA3E0
L_800EA3E4:;
  c->r[11]=R32(c->r[13]+0xFFFFA7E0u); // 800EA3E4
  c->r[9]=0u+0x802F0000u; // 800EA3E8
  c->r[12]=0u+0x00000001u; // 800EA3EC
  W8(c->r[13]+0xFFFFA7D8u,c->r[12]); // 800EA3F0
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EA3F4
  c->r[9]=c->r[9]+0xFFFFFF20u; // 800EA3F8
  c->r[8]=c->r[9]+c->r[10]; // 800EA3FC
  c->r[7]=R8(c->r[8]+0x00000008u); // 800EA400
  c->r[0]=0u-c->r[7]; // 800EA404
  c->r[0]=c->r[0]|c->r[7]; // 800EA408
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EA40C
  cmpu(c,0,c->r[0],0x00000001u); // 800EA410
  if (!crb(c,2)) { goto L_800EA43C; } // 800EA414
  c->r[4]=c->r[11]|c->r[11]; // 800EA418
  c->r[3]=c->r[31]+0x00000240u; // 800EA41C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA420
  c->lr=0x800EA428u; f_800C8450(c); // 800EA424
  c->r[3]=c->r[31]+0x00000278u; // 800EA428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA42C
  c->lr=0x800EA434u; f_800C8450(c); // 800EA430
  c->r[0]=c->r[0]|0x00000000u; // 800EA434
L_800EA438:;
  IRQCHK(c); goto L_800EA438; // 800EA438
L_800EA43C:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 800EA43C
  c->r[0]=c->r[7]+0x01150000u; // 800EA440
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EA444
  if (crb(c,2)) { goto L_800EA45C; } // 800EA448
  c->r[3]=c->r[31]+0x000002A8u; // 800EA44C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA450
  c->lr=0x800EA458u; f_800C8450(c); // 800EA454
L_800EA458:;
  IRQCHK(c); goto L_800EA458; // 800EA458
L_800EA45C:;
  W32(c->r[9]+c->r[10],c->r[6]); // 800EA45C
  c->r[0]=c->r[11]+0x00000001u; // 800EA460
  cmps(c,0,(int32_t)c->r[0],4); // 800EA464
  W32(c->r[8]+0x00000004u,c->r[12]); // 800EA468
  W8(c->r[8]+0x00000008u,c->r[12]); // 800EA46C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA470
  if (crb(c,0)) { goto L_800EA480; } // 800EA474
  c->r[0]=0u+0x00000000u; // 800EA478
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA47C
L_800EA480:;
  c->r[6]=R32(c->r[13]+0xFFFFA7DCu); // 800EA480
  c->r[7]=0u+0x802F0000u; // 800EA484
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EA488
  c->r[0]=c->r[6]+0x00000001u; // 800EA48C
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EA490
  cmps(c,0,(int32_t)c->r[0],4); // 800EA494
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA498
  c->r[30]=c->r[7]+c->r[8]; // 800EA49C
  if (crb(c,0)) { goto L_800EA4AC; } // 800EA4A0
  c->r[0]=0u+0x00000000u; // 800EA4A4
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA4A8
L_800EA4AC:;
  c->r[6]=R32(c->r[13]+0xFFFFA7F4u); // 800EA4AC
  c->r[8]=0u+0x800F0000u; // 800EA4B0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EA4B4
  c->r[7]=0u+0x00000092u; // 800EA4B8
  W8(c->r[6]+c->r[0],c->r[7]); // 800EA4BC
  c->r[11]=0u+0x802F0000u; // 800EA4C0
  c->r[7]=c->r[11]+0xFFFFFFE0u; // 800EA4C4
  c->r[10]=0u+0x00000020u; // 800EA4C8
  c->r[6]=R32(c->r[13]+0xFFFFA7DCu); // 800EA4CC
  c->r[0]=0u+0x00000004u; // 800EA4D0
  c->r[12]=R32(c->r[13]+0xFFFFA7F4u); // 800EA4D4
  c->r[9]=c->r[30]|c->r[30]; // 800EA4D8
  c->r[6]=rotl(c->r[6],5)&0xFFFFFFE0u; // 800EA4DC
  c->r[8]=c->r[8]+0xFFFF98B0u; // 800EA4E0
  c->r[6]=c->r[12]+c->r[6]; // 800EA4E4
  W32(c->r[6]+0x00000004u,c->r[3]); // 800EA4E8
  c->r[6]=0u+0x00000002u; // 800EA4EC
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800EA4F0
  c->r[12]=R32(c->r[13]+0xFFFFA7F4u); // 800EA4F4
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800EA4F8
  W32(c->r[7]+0x00000008u,c->r[4]); // 800EA4FC
  c->r[12]=c->r[12]+c->r[3]; // 800EA500
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EA504
  W32(c->r[7]+0x00000010u,c->r[5]); // 800EA508
  c->r[4]=0u+0x00000092u; // 800EA50C
  c->r[5]=0u+0x00000001u; // 800EA510
  W32(c->r[11]+0xFFFFFFE0u,c->r[12]); // 800EA514
  W32(c->r[7]+0x00000004u,c->r[10]); // 800EA518
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800EA51C
  W32(c->r[7]+0x00000014u,c->r[0]); // 800EA520
  c->lr=0x800EA528u; f_800FB570(c); // 800EA524
  cmps(c,0,(int32_t)c->r[3],0); // 800EA528
  if (crb(c,2)) { goto L_800EA554; } // 800EA52C
  c->r[5]=c->r[3]|c->r[3]; // 800EA530
  c->r[3]=c->r[31]+0x000005D4u; // 800EA534
  c->r[4]=c->r[31]+0x00000544u; // 800EA538
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA53C
  c->lr=0x800EA544u; f_800C8450(c); // 800EA540
  c->r[0]=0u+0x00000000u; // 800EA544
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EA548
  c->r[3]=0u+0x00000000u; // 800EA54C
  goto L_800EA558; // 800EA550
L_800EA554:;
  c->r[3]=0u+0x00000001u; // 800EA554
L_800EA558:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA55C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA560
  c->lr=c->r[0]; // 800EA564
  c->r[1]=c->r[1]+0x00000010u; // 800EA568
  return; // 800EA56C
}

// DVDLowGetNoDiscOpenPartitionParams
void f_800EA570(Ctx* __restrict c) {
  trace_call(0x800EA570u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA570
  c->r[0]=c->lr; // 800EA574
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EA578
  c->r[11]=c->r[1]+0x00000030u; // 800EA57C
  c->lr=0x800EA584u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EA580
  cmps(c,0,(int32_t)c->r[4],0); // 800EA584
  c->r[31]=0u+0x802B0000u; // 800EA588
  c->r[28]=R32(c->r[1]+0x00000038u); // 800EA58C
  c->r[31]=c->r[31]+0x00000598u; // 800EA590
  if (crb(c,2)) { goto L_800EA5C8; } // 800EA594
  cmps(c,0,(int32_t)c->r[5],0); // 800EA598
  if (crb(c,2)) { goto L_800EA5C8; } // 800EA59C
  cmps(c,0,(int32_t)c->r[6],0); // 800EA5A0
  if (crb(c,2)) { goto L_800EA5C8; } // 800EA5A4
  cmps(c,0,(int32_t)c->r[7],0); // 800EA5A8
  if (crb(c,2)) { goto L_800EA5C8; } // 800EA5AC
  cmps(c,0,(int32_t)c->r[8],0); // 800EA5B0
  if (crb(c,2)) { goto L_800EA5C8; } // 800EA5B4
  cmps(c,0,(int32_t)c->r[9],0); // 800EA5B8
  if (crb(c,2)) { goto L_800EA5C8; } // 800EA5BC
  cmps(c,0,(int32_t)c->r[10],0); // 800EA5C0
  if (!crb(c,2)) { goto L_800EA5E0; } // 800EA5C4
L_800EA5C8:;
  c->r[3]=c->r[31]+0x00000560u; // 800EA5C8
  c->r[4]=c->r[31]+0x00000604u; // 800EA5CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA5D0
  c->lr=0x800EA5D8u; f_800C8450(c); // 800EA5D4
  c->r[3]=0u+0x00000000u; // 800EA5D8
  goto L_800EA7F0; // 800EA5DC
L_800EA5E0:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA5E0
  if (!crb(c,2)) { goto L_800EA618; } // 800EA5E4
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA5E8
  if (!crb(c,2)) { goto L_800EA618; } // 800EA5EC
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA5F0
  if (!crb(c,2)) { goto L_800EA618; } // 800EA5F4
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA5F8
  if (!crb(c,2)) { goto L_800EA618; } // 800EA5FC
  c->r[0]=rotl(c->r[8],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA600
  if (!crb(c,2)) { goto L_800EA618; } // 800EA604
  c->r[0]=rotl(c->r[9],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA608
  if (!crb(c,2)) { goto L_800EA618; } // 800EA60C
  c->r[0]=rotl(c->r[10],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EA610
  if (crb(c,2)) { goto L_800EA630; } // 800EA614
L_800EA618:;
  c->r[3]=c->r[31]+0x00000628u; // 800EA618
  c->r[4]=c->r[31]+0x00000604u; // 800EA61C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA620
  c->lr=0x800EA628u; f_800C8450(c); // 800EA624
  c->r[3]=0u+0x00000000u; // 800EA628
  goto L_800EA7F0; // 800EA62C
L_800EA630:;
  c->r[26]=R32(c->r[13]+0xFFFFA7E0u); // 800EA630
  c->r[24]=0u+0x802F0000u; // 800EA634
  c->r[27]=0u+0x00000001u; // 800EA638
  W8(c->r[13]+0xFFFFA7D8u,c->r[27]); // 800EA63C
  c->r[25]=rotl(c->r[26],5)&0xFFFFFFE0u; // 800EA640
  c->r[24]=c->r[24]+0xFFFFFF20u; // 800EA644
  c->r[12]=c->r[24]+c->r[25]; // 800EA648
  c->r[11]=R8(c->r[12]+0x00000008u); // 800EA64C
  c->r[0]=0u-c->r[11]; // 800EA650
  c->r[0]=c->r[0]|c->r[11]; // 800EA654
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EA658
  cmpu(c,0,c->r[0],0x00000001u); // 800EA65C
  if (!crb(c,2)) { goto L_800EA684; } // 800EA660
  c->r[4]=c->r[26]|c->r[26]; // 800EA664
  c->r[3]=c->r[31]+0x00000240u; // 800EA668
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA66C
  c->lr=0x800EA674u; f_800C8450(c); // 800EA670
  c->r[3]=c->r[31]+0x00000278u; // 800EA674
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA678
  c->lr=0x800EA680u; f_800C8450(c); // 800EA67C
L_800EA680:;
  IRQCHK(c); goto L_800EA680; // 800EA680
L_800EA684:;
  c->r[11]=R32(c->r[12]+0x0000000Cu); // 800EA684
  c->r[0]=c->r[11]+0x01150000u; // 800EA688
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EA68C
  if (crb(c,2)) { goto L_800EA6A4; } // 800EA690
  c->r[3]=c->r[31]+0x000002A8u; // 800EA694
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA698
  c->lr=0x800EA6A0u; f_800C8450(c); // 800EA69C
L_800EA6A0:;
  IRQCHK(c); goto L_800EA6A0; // 800EA6A0
L_800EA6A4:;
  W32(c->r[24]+c->r[25],c->r[28]); // 800EA6A4
  c->r[0]=c->r[26]+0x00000001u; // 800EA6A8
  cmps(c,0,(int32_t)c->r[0],4); // 800EA6AC
  W32(c->r[12]+0x00000004u,c->r[27]); // 800EA6B0
  W8(c->r[12]+0x00000008u,c->r[27]); // 800EA6B4
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA6B8
  if (crb(c,0)) { goto L_800EA6C8; } // 800EA6BC
  c->r[0]=0u+0x00000000u; // 800EA6C0
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA6C4
L_800EA6C8:;
  c->r[11]=R32(c->r[13]+0xFFFFA7DCu); // 800EA6C8
  c->r[12]=0u+0x802F0000u; // 800EA6CC
  c->r[24]=rotl(c->r[26],5)&0xFFFFFFE0u; // 800EA6D0
  c->r[0]=c->r[11]+0x00000001u; // 800EA6D4
  c->r[12]=c->r[12]+0xFFFFFF20u; // 800EA6D8
  cmps(c,0,(int32_t)c->r[0],4); // 800EA6DC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA6E0
  c->r[30]=c->r[12]+c->r[24]; // 800EA6E4
  if (crb(c,0)) { goto L_800EA6F4; } // 800EA6E8
  c->r[0]=0u+0x00000000u; // 800EA6EC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA6F0
L_800EA6F4:;
  c->r[11]=R32(c->r[13]+0xFFFFA7F4u); // 800EA6F4
  c->r[26]=0u+0x802F0000u; // 800EA6F8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EA6FC
  c->r[12]=0u+0x00000090u; // 800EA700
  W8(c->r[11]+c->r[0],c->r[12]); // 800EA704
  c->r[28]=c->r[26]+0xFFFFFFE0u; // 800EA708
  c->r[27]=0u+0x00000020u; // 800EA70C
  c->r[29]=0u+0x00000004u; // 800EA710
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EA714
  c->r[12]=0u+0x000002A4u; // 800EA718
  c->r[24]=R32(c->r[13]+0xFFFFA7F4u); // 800EA71C
  c->r[11]=0u+0x00020000u; // 800EA720
  c->r[25]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EA724
  c->r[25]=c->r[24]+c->r[25]; // 800EA728
  c->r[0]=c->r[11]+0xFFFF8000u; // 800EA72C
  W32(c->r[25]+0x00000004u,c->r[3]); // 800EA730
  c->r[11]=0u+0x800F0000u; // 800EA734
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800EA738
  c->r[25]=R32(c->r[13]+0xFFFFA7F4u); // 800EA73C
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800EA740
  W32(c->r[28]+0x00000018u,c->r[4]); // 800EA744
  c->r[25]=c->r[25]+c->r[3]; // 800EA748
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EA74C
  W32(c->r[28]+0x00000028u,c->r[6]); // 800EA750
  c->r[4]=0u+0x00000090u; // 800EA754
  c->r[6]=0u+0x00000007u; // 800EA758
  W32(c->r[26]+0xFFFFFFE0u,c->r[25]); // 800EA75C
  W32(c->r[28]+0x00000004u,c->r[27]); // 800EA760
  W32(c->r[28]+0x00000008u,c->r[5]); // 800EA764
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800EA768
  W32(c->r[28]+0x00000010u,c->r[7]); // 800EA76C
  W32(c->r[28]+0x00000014u,c->r[29]); // 800EA770
  W32(c->r[28]+0x0000001Cu,c->r[12]); // 800EA774
  W32(c->r[28]+0x00000020u,c->r[5]); // 800EA778
  W32(c->r[28]+0x00000024u,c->r[29]); // 800EA77C
  c->r[12]=R32(c->r[5]+0x00000000u); // 800EA780
  c->r[5]=0u+0x00000003u; // 800EA784
  W32(c->r[28]+0x0000002Cu,c->r[12]); // 800EA788
  W32(c->r[28]+0x00000038u,c->r[8]); // 800EA78C
  c->r[8]=c->r[11]+0xFFFF98B0u; // 800EA790
  W32(c->r[28]+0x00000030u,c->r[7]); // 800EA794
  W32(c->r[28]+0x00000034u,c->r[29]); // 800EA798
  c->r[11]=R32(c->r[7]+0x00000000u); // 800EA79C
  c->r[7]=c->r[28]|c->r[28]; // 800EA7A0
  W32(c->r[28]+0x0000003Cu,c->r[11]); // 800EA7A4
  W32(c->r[28]+0x00000040u,c->r[9]); // 800EA7A8
  c->r[9]=c->r[30]|c->r[30]; // 800EA7AC
  W32(c->r[28]+0x00000044u,c->r[29]); // 800EA7B0
  W32(c->r[28]+0x00000048u,c->r[10]); // 800EA7B4
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 800EA7B8
  c->lr=0x800EA7C0u; f_800FB570(c); // 800EA7BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EA7C0
  if (crb(c,2)) { goto L_800EA7EC; } // 800EA7C4
  c->r[5]=c->r[3]|c->r[3]; // 800EA7C8
  c->r[3]=c->r[31]+0x000005D4u; // 800EA7CC
  c->r[4]=c->r[31]+0x00000604u; // 800EA7D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA7D4
  c->lr=0x800EA7DCu; f_800C8450(c); // 800EA7D8
  c->r[0]=0u+0x00000000u; // 800EA7DC
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EA7E0
  c->r[3]=0u+0x00000000u; // 800EA7E4
  goto L_800EA7F0; // 800EA7E8
L_800EA7EC:;
  c->r[3]=0u+0x00000001u; // 800EA7EC
L_800EA7F0:;
  c->r[11]=c->r[1]+0x00000030u; // 800EA7F0
  c->lr=0x800EA7F8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EA7F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EA7F8
  c->lr=c->r[0]; // 800EA7FC
  c->r[1]=c->r[1]+0x00000030u; // 800EA800
  return; // 800EA804
}

// DVDLowClosePartition
void f_800EA810(Ctx* __restrict c) {
  trace_call(0x800EA810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA810
  c->r[0]=c->lr; // 800EA814
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA81C
  c->r[31]=0u+0x802B0000u; // 800EA820
  c->r[31]=c->r[31]+0x00000598u; // 800EA824
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA828
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EA82C
  c->r[0]=c->r[4]+0x00000001u; // 800EA830
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA834
  cmps(c,0,(int32_t)c->r[0],4); // 800EA838
  if (crb(c,0)) { goto L_800EA848; } // 800EA83C
  c->r[0]=0u+0x00000000u; // 800EA840
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EA844
L_800EA848:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EA848
  c->r[7]=0u+0x802F0000u; // 800EA84C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EA850
  c->r[5]=0u+0x0000008Cu; // 800EA854
  W8(c->r[4]+c->r[0],c->r[5]); // 800EA858
  c->r[9]=0u+0x00000001u; // 800EA85C
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EA860
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EA864
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EA868
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EA86C
  c->r[6]=c->r[7]+c->r[8]; // 800EA870
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EA874
  c->r[0]=0u-c->r[5]; // 800EA878
  c->r[0]=c->r[0]|c->r[5]; // 800EA87C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EA880
  cmpu(c,0,c->r[0],0x00000001u); // 800EA884
  if (!crb(c,2)) { goto L_800EA8AC; } // 800EA888
  c->r[3]=c->r[31]+0x00000240u; // 800EA88C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA890
  c->lr=0x800EA898u; f_800C8450(c); // 800EA894
  c->r[3]=c->r[31]+0x00000278u; // 800EA898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA89C
  c->lr=0x800EA8A4u; f_800C8450(c); // 800EA8A0
  c->r[0]=c->r[0]|0x00000000u; // 800EA8A4
L_800EA8A8:;
  IRQCHK(c); goto L_800EA8A8; // 800EA8A8
L_800EA8AC:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EA8AC
  c->r[0]=c->r[5]+0x01150000u; // 800EA8B0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EA8B4
  if (crb(c,2)) { goto L_800EA8CC; } // 800EA8B8
  c->r[3]=c->r[31]+0x000002A8u; // 800EA8BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA8C0
  c->lr=0x800EA8C8u; f_800C8450(c); // 800EA8C4
L_800EA8C8:;
  IRQCHK(c); goto L_800EA8C8; // 800EA8C8
L_800EA8CC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EA8CC
  c->r[0]=c->r[4]+0x00000001u; // 800EA8D0
  cmps(c,0,(int32_t)c->r[0],4); // 800EA8D4
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EA8D8
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EA8DC
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA8E0
  if (crb(c,0)) { goto L_800EA8F0; } // 800EA8E4
  c->r[0]=0u+0x00000000u; // 800EA8E8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EA8EC
L_800EA8F0:;
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EA8F0
  c->r[3]=0u+0x802F0000u; // 800EA8F4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EA8F8
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EA8FC
  c->r[3]=c->r[3]+0xFFFFFF20u; // 800EA900
  c->r[9]=0u+0x800F0000u; // 800EA904
  c->r[30]=c->r[3]+c->r[5]; // 800EA908
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EA90C
  c->r[5]=c->r[4]+c->r[0]; // 800EA910
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EA914
  c->r[10]=c->r[30]|c->r[30]; // 800EA918
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EA91C
  c->r[4]=0u+0x0000008Cu; // 800EA920
  c->r[6]=0u+0x00000020u; // 800EA924
  c->r[7]=0u+0x00000000u; // 800EA928
  c->r[8]=0u+0x00000000u; // 800EA92C
  c->lr=0x800EA934u; f_800FB1C0(c); // 800EA930
  cmps(c,0,(int32_t)c->r[3],0); // 800EA934
  if (crb(c,2)) { goto L_800EA95C; } // 800EA938
  c->r[4]=c->r[3]|c->r[3]; // 800EA93C
  c->r[3]=c->r[31]+0x00000668u; // 800EA940
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA944
  c->lr=0x800EA94Cu; f_800C8450(c); // 800EA948
  c->r[0]=0u+0x00000000u; // 800EA94C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EA950
  c->r[3]=0u+0x00000000u; // 800EA954
  goto L_800EA960; // 800EA958
L_800EA95C:;
  c->r[3]=0u+0x00000001u; // 800EA95C
L_800EA960:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA964
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA968
  c->lr=c->r[0]; // 800EA96C
  c->r[1]=c->r[1]+0x00000010u; // 800EA970
  return; // 800EA974
}

// DVDLowUnencryptedRead
void f_800EA980(Ctx* __restrict c) {
  trace_call(0x800EA980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA980
  c->r[0]=c->lr; // 800EA984
  c->r[9]=0u+0x802F0000u; // 800EA988
  c->r[12]=0u+0x00000001u; // 800EA98C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA990
  c->r[9]=c->r[9]+0xFFFFFF20u; // 800EA994
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA998
  c->r[31]=0u+0x802B0000u; // 800EA99C
  c->r[31]=c->r[31]+0x00000598u; // 800EA9A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA9A4
  c->r[11]=R32(c->r[13]+0xFFFFA7E0u); // 800EA9A8
  W8(c->r[13]+0xFFFFA7D8u,c->r[12]); // 800EA9AC
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EA9B0
  c->r[8]=c->r[9]+c->r[10]; // 800EA9B4
  c->r[7]=R8(c->r[8]+0x00000008u); // 800EA9B8
  c->r[0]=0u-c->r[7]; // 800EA9BC
  c->r[0]=c->r[0]|c->r[7]; // 800EA9C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EA9C4
  cmpu(c,0,c->r[0],0x00000001u); // 800EA9C8
  if (!crb(c,2)) { goto L_800EA9F4; } // 800EA9CC
  c->r[4]=c->r[11]|c->r[11]; // 800EA9D0
  c->r[3]=c->r[31]+0x00000240u; // 800EA9D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA9D8
  c->lr=0x800EA9E0u; f_800C8450(c); // 800EA9DC
  c->r[3]=c->r[31]+0x00000278u; // 800EA9E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EA9E4
  c->lr=0x800EA9ECu; f_800C8450(c); // 800EA9E8
  c->r[0]=c->r[0]|0x00000000u; // 800EA9EC
L_800EA9F0:;
  IRQCHK(c); goto L_800EA9F0; // 800EA9F0
L_800EA9F4:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 800EA9F4
  c->r[0]=c->r[7]+0x01150000u; // 800EA9F8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EA9FC
  if (crb(c,2)) { goto L_800EAA14; } // 800EAA00
  c->r[3]=c->r[31]+0x000002A8u; // 800EAA04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAA08
  c->lr=0x800EAA10u; f_800C8450(c); // 800EAA0C
L_800EAA10:;
  IRQCHK(c); goto L_800EAA10; // 800EAA10
L_800EAA14:;
  W32(c->r[9]+c->r[10],c->r[6]); // 800EAA14
  c->r[0]=c->r[11]+0x00000001u; // 800EAA18
  cmps(c,0,(int32_t)c->r[0],4); // 800EAA1C
  W32(c->r[8]+0x00000004u,c->r[12]); // 800EAA20
  W8(c->r[8]+0x00000008u,c->r[12]); // 800EAA24
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EAA28
  if (crb(c,0)) { goto L_800EAA38; } // 800EAA2C
  c->r[0]=0u+0x00000000u; // 800EAA30
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EAA34
L_800EAA38:;
  c->r[6]=R32(c->r[13]+0xFFFFA7DCu); // 800EAA38
  c->r[7]=0u+0x802F0000u; // 800EAA3C
  W32(c->r[13]+0xFFFFA7ECu,c->r[4]); // 800EAA40
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EAA44
  c->r[0]=c->r[6]+0x00000001u; // 800EAA48
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EAA4C
  cmps(c,0,(int32_t)c->r[0],4); // 800EAA50
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EAA54
  c->r[30]=c->r[7]+c->r[8]; // 800EAA58
  if (crb(c,0)) { goto L_800EAA68; } // 800EAA5C
  c->r[0]=0u+0x00000000u; // 800EAA60
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EAA64
L_800EAA68:;
  c->r[6]=R32(c->r[13]+0xFFFFA7F4u); // 800EAA68
  c->r[9]=0u+0x800F0000u; // 800EAA6C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAA70
  c->r[7]=0u+0x0000008Du; // 800EAA74
  W8(c->r[6]+c->r[0],c->r[7]); // 800EAA78
  c->r[7]=c->r[3]|c->r[3]; // 800EAA7C
  c->r[8]=c->r[4]|c->r[4]; // 800EAA80
  c->r[10]=c->r[30]|c->r[30]; // 800EAA84
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAA88
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EAA8C
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EAA90
  c->r[6]=0u+0x00000020u; // 800EAA94
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAA98
  c->r[3]=c->r[3]+c->r[0]; // 800EAA9C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800EAAA0
  c->r[4]=0u+0x0000008Du; // 800EAAA4
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAAA8
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EAAAC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAAB0
  c->r[3]=c->r[3]+c->r[0]; // 800EAAB4
  W32(c->r[3]+0x00000008u,c->r[5]); // 800EAAB8
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAABC
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EAAC0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAAC4
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EAAC8
  c->r[5]=c->r[5]+c->r[0]; // 800EAACC
  c->lr=0x800EAAD4u; f_800FB1C0(c); // 800EAAD0
  cmps(c,0,(int32_t)c->r[3],0); // 800EAAD4
  if (crb(c,2)) { goto L_800EAAFC; } // 800EAAD8
  c->r[4]=c->r[3]|c->r[3]; // 800EAADC
  c->r[3]=c->r[31]+0x000006A8u; // 800EAAE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAAE4
  c->lr=0x800EAAECu; f_800C8450(c); // 800EAAE8
  c->r[0]=0u+0x00000000u; // 800EAAEC
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EAAF0
  c->r[3]=0u+0x00000000u; // 800EAAF4
  goto L_800EAB00; // 800EAAF8
L_800EAAFC:;
  c->r[3]=0u+0x00000001u; // 800EAAFC
L_800EAB00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAB00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAB04
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAB08
  c->lr=c->r[0]; // 800EAB0C
  c->r[1]=c->r[1]+0x00000010u; // 800EAB10
  return; // 800EAB14
}

// DVDLowStopMotor
void f_800EAB20(Ctx* __restrict c) {
  trace_call(0x800EAB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAB20
  c->r[0]=c->lr; // 800EAB24
  c->r[8]=0u+0x802F0000u; // 800EAB28
  c->r[11]=0u+0x00000001u; // 800EAB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAB30
  c->r[8]=c->r[8]+0xFFFFFF20u; // 800EAB34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAB38
  c->r[31]=0u+0x802B0000u; // 800EAB3C
  c->r[31]=c->r[31]+0x00000598u; // 800EAB40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAB44
  c->r[10]=R32(c->r[13]+0xFFFFA7E0u); // 800EAB48
  W8(c->r[13]+0xFFFFA7D8u,c->r[11]); // 800EAB4C
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 800EAB50
  c->r[7]=c->r[8]+c->r[9]; // 800EAB54
  c->r[6]=R8(c->r[7]+0x00000008u); // 800EAB58
  c->r[0]=0u-c->r[6]; // 800EAB5C
  c->r[0]=c->r[0]|c->r[6]; // 800EAB60
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EAB64
  cmpu(c,0,c->r[0],0x00000001u); // 800EAB68
  if (!crb(c,2)) { goto L_800EAB94; } // 800EAB6C
  c->r[4]=c->r[10]|c->r[10]; // 800EAB70
  c->r[3]=c->r[31]+0x00000240u; // 800EAB74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAB78
  c->lr=0x800EAB80u; f_800C8450(c); // 800EAB7C
  c->r[3]=c->r[31]+0x00000278u; // 800EAB80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAB84
  c->lr=0x800EAB8Cu; f_800C8450(c); // 800EAB88
  c->r[0]=c->r[0]|0x00000000u; // 800EAB8C
L_800EAB90:;
  IRQCHK(c); goto L_800EAB90; // 800EAB90
L_800EAB94:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 800EAB94
  c->r[0]=c->r[6]+0x01150000u; // 800EAB98
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EAB9C
  if (crb(c,2)) { goto L_800EABB4; } // 800EABA0
  c->r[3]=c->r[31]+0x000002A8u; // 800EABA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EABA8
  c->lr=0x800EABB0u; f_800C8450(c); // 800EABAC
L_800EABB0:;
  IRQCHK(c); goto L_800EABB0; // 800EABB0
L_800EABB4:;
  W32(c->r[8]+c->r[9],c->r[5]); // 800EABB4
  c->r[0]=c->r[10]+0x00000001u; // 800EABB8
  cmps(c,0,(int32_t)c->r[0],4); // 800EABBC
  W32(c->r[7]+0x00000004u,c->r[11]); // 800EABC0
  W8(c->r[7]+0x00000008u,c->r[11]); // 800EABC4
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EABC8
  if (crb(c,0)) { goto L_800EABD8; } // 800EABCC
  c->r[0]=0u+0x00000000u; // 800EABD0
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EABD4
L_800EABD8:;
  c->r[5]=R32(c->r[13]+0xFFFFA7DCu); // 800EABD8
  c->r[6]=0u+0x802F0000u; // 800EABDC
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 800EABE0
  c->r[0]=c->r[5]+0x00000001u; // 800EABE4
  c->r[6]=c->r[6]+0xFFFFFF20u; // 800EABE8
  cmps(c,0,(int32_t)c->r[0],4); // 800EABEC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EABF0
  c->r[30]=c->r[6]+c->r[7]; // 800EABF4
  if (crb(c,0)) { goto L_800EAC04; } // 800EABF8
  c->r[0]=0u+0x00000000u; // 800EABFC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EAC00
L_800EAC04:;
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EAC04
  c->r[7]=0u+0x802F0000u; // 800EAC08
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAC0C
  c->r[6]=0u+0x000000E3u; // 800EAC10
  W8(c->r[5]+c->r[0],c->r[6]); // 800EAC14
  c->r[9]=0u+0x800F0000u; // 800EAC18
  c->r[10]=c->r[30]|c->r[30]; // 800EAC1C
  c->r[7]=c->r[7]+0xFFFFFFA0u; // 800EAC20
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAC24
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EAC28
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EAC2C
  c->r[6]=0u+0x00000020u; // 800EAC30
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAC34
  c->r[8]=0u+0x00000020u; // 800EAC38
  c->r[5]=c->r[5]+c->r[0]; // 800EAC3C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EAC40
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAC44
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EAC48
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAC4C
  c->r[3]=c->r[3]+c->r[0]; // 800EAC50
  W32(c->r[3]+0x00000008u,c->r[4]); // 800EAC54
  c->r[4]=0u+0x000000E3u; // 800EAC58
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAC5C
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EAC60
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAC64
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EAC68
  c->r[5]=c->r[5]+c->r[0]; // 800EAC6C
  c->lr=0x800EAC74u; f_800FB1C0(c); // 800EAC70
  cmps(c,0,(int32_t)c->r[3],0); // 800EAC74
  if (crb(c,2)) { goto L_800EAC9C; } // 800EAC78
  c->r[4]=c->r[3]|c->r[3]; // 800EAC7C
  c->r[3]=c->r[31]+0x000006E8u; // 800EAC80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAC84
  c->lr=0x800EAC8Cu; f_800C8450(c); // 800EAC88
  c->r[0]=0u+0x00000000u; // 800EAC8C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EAC90
  c->r[3]=0u+0x00000000u; // 800EAC94
  goto L_800EACA0; // 800EAC98
L_800EAC9C:;
  c->r[3]=0u+0x00000001u; // 800EAC9C
L_800EACA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EACA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EACA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EACA8
  c->lr=c->r[0]; // 800EACAC
  c->r[1]=c->r[1]+0x00000010u; // 800EACB0
  return; // 800EACB4
}

// DVDLowInquiry
void f_800EACC0(Ctx* __restrict c) {
  trace_call(0x800EACC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EACC0
  c->r[0]=c->lr; // 800EACC4
  c->r[7]=0u+0x802F0000u; // 800EACC8
  c->r[10]=0u+0x00000001u; // 800EACCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EACD0
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EACD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EACD8
  c->r[31]=0u+0x802B0000u; // 800EACDC
  c->r[31]=c->r[31]+0x00000598u; // 800EACE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EACE4
  c->r[9]=R32(c->r[13]+0xFFFFA7E0u); // 800EACE8
  W8(c->r[13]+0xFFFFA7D8u,c->r[10]); // 800EACEC
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800EACF0
  c->r[6]=c->r[7]+c->r[8]; // 800EACF4
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EACF8
  c->r[0]=0u-c->r[5]; // 800EACFC
  c->r[0]=c->r[0]|c->r[5]; // 800EAD00
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EAD04
  cmpu(c,0,c->r[0],0x00000001u); // 800EAD08
  if (!crb(c,2)) { goto L_800EAD34; } // 800EAD0C
  c->r[4]=c->r[9]|c->r[9]; // 800EAD10
  c->r[3]=c->r[31]+0x00000240u; // 800EAD14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAD18
  c->lr=0x800EAD20u; f_800C8450(c); // 800EAD1C
  c->r[3]=c->r[31]+0x00000278u; // 800EAD20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAD24
  c->lr=0x800EAD2Cu; f_800C8450(c); // 800EAD28
  c->r[0]=c->r[0]|0x00000000u; // 800EAD2C
L_800EAD30:;
  IRQCHK(c); goto L_800EAD30; // 800EAD30
L_800EAD34:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EAD34
  c->r[0]=c->r[5]+0x01150000u; // 800EAD38
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EAD3C
  if (crb(c,2)) { goto L_800EAD54; } // 800EAD40
  c->r[3]=c->r[31]+0x000002A8u; // 800EAD44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAD48
  c->lr=0x800EAD50u; f_800C8450(c); // 800EAD4C
L_800EAD50:;
  IRQCHK(c); goto L_800EAD50; // 800EAD50
L_800EAD54:;
  W32(c->r[7]+c->r[8],c->r[4]); // 800EAD54
  c->r[0]=c->r[9]+0x00000001u; // 800EAD58
  cmps(c,0,(int32_t)c->r[0],4); // 800EAD5C
  W32(c->r[6]+0x00000004u,c->r[10]); // 800EAD60
  W8(c->r[6]+0x00000008u,c->r[10]); // 800EAD64
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EAD68
  if (crb(c,0)) { goto L_800EAD78; } // 800EAD6C
  c->r[0]=0u+0x00000000u; // 800EAD70
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EAD74
L_800EAD78:;
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EAD78
  c->r[5]=0u+0x802F0000u; // 800EAD7C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800EAD80
  c->r[0]=c->r[4]+0x00000001u; // 800EAD84
  c->r[5]=c->r[5]+0xFFFFFF20u; // 800EAD88
  cmps(c,0,(int32_t)c->r[0],4); // 800EAD8C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EAD90
  c->r[30]=c->r[5]+c->r[6]; // 800EAD94
  if (crb(c,0)) { goto L_800EADA4; } // 800EAD98
  c->r[0]=0u+0x00000000u; // 800EAD9C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EADA0
L_800EADA4:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EADA4
  c->r[9]=0u+0x800F0000u; // 800EADA8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EADAC
  c->r[5]=0u+0x00000012u; // 800EADB0
  W8(c->r[4]+c->r[0],c->r[5]); // 800EADB4
  c->r[7]=c->r[3]|c->r[3]; // 800EADB8
  c->r[10]=c->r[30]|c->r[30]; // 800EADBC
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EADC0
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EADC4
  c->r[4]=0u+0x00000012u; // 800EADC8
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EADCC
  c->r[6]=0u+0x00000020u; // 800EADD0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EADD4
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EADD8
  c->r[5]=c->r[5]+c->r[0]; // 800EADDC
  c->r[8]=0u+0x00000020u; // 800EADE0
  c->lr=0x800EADE8u; f_800FB1C0(c); // 800EADE4
  cmps(c,0,(int32_t)c->r[3],0); // 800EADE8
  if (crb(c,2)) { goto L_800EAE10; } // 800EADEC
  c->r[4]=c->r[3]|c->r[3]; // 800EADF0
  c->r[3]=c->r[31]+0x00000768u; // 800EADF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EADF8
  c->lr=0x800EAE00u; f_800C8450(c); // 800EADFC
  c->r[0]=0u+0x00000000u; // 800EAE00
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EAE04
  c->r[3]=0u+0x00000000u; // 800EAE08
  goto L_800EAE14; // 800EAE0C
L_800EAE10:;
  c->r[3]=0u+0x00000001u; // 800EAE10
L_800EAE14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAE14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAE18
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAE1C
  c->lr=c->r[0]; // 800EAE20
  c->r[1]=c->r[1]+0x00000010u; // 800EAE24
  return; // 800EAE28
}

// DVDLowRequestError
void f_800EAE30(Ctx* __restrict c) {
  trace_call(0x800EAE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAE30
  c->r[0]=c->lr; // 800EAE34
  c->r[7]=0u+0x802F0000u; // 800EAE38
  c->r[9]=0u+0x00000001u; // 800EAE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAE40
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EAE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAE48
  c->r[31]=0u+0x802B0000u; // 800EAE4C
  c->r[31]=c->r[31]+0x00000598u; // 800EAE50
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAE54
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EAE58
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EAE5C
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EAE60
  c->r[6]=c->r[7]+c->r[8]; // 800EAE64
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EAE68
  c->r[0]=0u-c->r[5]; // 800EAE6C
  c->r[0]=c->r[0]|c->r[5]; // 800EAE70
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EAE74
  cmpu(c,0,c->r[0],0x00000001u); // 800EAE78
  if (!crb(c,2)) { goto L_800EAE9C; } // 800EAE7C
  c->r[3]=c->r[31]+0x00000240u; // 800EAE80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAE84
  c->lr=0x800EAE8Cu; f_800C8450(c); // 800EAE88
  c->r[3]=c->r[31]+0x00000278u; // 800EAE8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAE90
  c->lr=0x800EAE98u; f_800C8450(c); // 800EAE94
L_800EAE98:;
  IRQCHK(c); goto L_800EAE98; // 800EAE98
L_800EAE9C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EAE9C
  c->r[0]=c->r[5]+0x01150000u; // 800EAEA0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EAEA4
  if (crb(c,2)) { goto L_800EAEBC; } // 800EAEA8
  c->r[3]=c->r[31]+0x000002A8u; // 800EAEAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAEB0
  c->lr=0x800EAEB8u; f_800C8450(c); // 800EAEB4
L_800EAEB8:;
  IRQCHK(c); goto L_800EAEB8; // 800EAEB8
L_800EAEBC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EAEBC
  c->r[0]=c->r[4]+0x00000001u; // 800EAEC0
  cmps(c,0,(int32_t)c->r[0],4); // 800EAEC4
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EAEC8
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EAECC
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EAED0
  if (crb(c,0)) { goto L_800EAEE0; } // 800EAED4
  c->r[0]=0u+0x00000000u; // 800EAED8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EAEDC
L_800EAEE0:;
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800EAEE0
  c->r[5]=0u+0x802F0000u; // 800EAEE4
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EAEE8
  c->r[0]=c->r[3]+0x00000001u; // 800EAEEC
  c->r[5]=c->r[5]+0xFFFFFF20u; // 800EAEF0
  cmps(c,0,(int32_t)c->r[0],4); // 800EAEF4
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EAEF8
  c->r[30]=c->r[5]+c->r[4]; // 800EAEFC
  if (crb(c,0)) { goto L_800EAF0C; } // 800EAF00
  c->r[0]=0u+0x00000000u; // 800EAF04
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EAF08
L_800EAF0C:;
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EAF0C
  c->r[7]=0u+0x802F0000u; // 800EAF10
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAF14
  c->r[4]=0u+0x000000E0u; // 800EAF18
  W8(c->r[3]+c->r[0],c->r[4]); // 800EAF1C
  c->r[9]=0u+0x800F0000u; // 800EAF20
  c->r[10]=c->r[30]|c->r[30]; // 800EAF24
  c->r[7]=c->r[7]+0xFFFFFFA0u; // 800EAF28
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EAF2C
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EAF30
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EAF34
  c->r[4]=0u+0x000000E0u; // 800EAF38
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EAF3C
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EAF40
  c->r[5]=c->r[5]+c->r[0]; // 800EAF44
  c->r[6]=0u+0x00000020u; // 800EAF48
  c->r[8]=0u+0x00000020u; // 800EAF4C
  c->lr=0x800EAF54u; f_800FB1C0(c); // 800EAF50
  cmps(c,0,(int32_t)c->r[3],0); // 800EAF54
  if (crb(c,2)) { goto L_800EAF7C; } // 800EAF58
  c->r[4]=c->r[3]|c->r[3]; // 800EAF5C
  c->r[3]=c->r[31]+0x000007A0u; // 800EAF60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EAF64
  c->lr=0x800EAF6Cu; f_800C8450(c); // 800EAF68
  c->r[0]=0u+0x00000000u; // 800EAF6C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EAF70
  c->r[3]=0u+0x00000000u; // 800EAF74
  goto L_800EAF80; // 800EAF78
L_800EAF7C:;
  c->r[3]=0u+0x00000001u; // 800EAF7C
L_800EAF80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAF80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAF84
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAF88
  c->lr=c->r[0]; // 800EAF8C
  c->r[1]=c->r[1]+0x00000010u; // 800EAF90
  return; // 800EAF94
}

// DVDLowSetSpinupFlag
void f_800EAFA0(Ctx* __restrict c) {
  trace_call(0x800EAFA0u);
  W32(c->r[13]+0xFFFFA7E8u,c->r[3]); // 800EAFA0
  c->r[3]=0u+0x00000001u; // 800EAFA4
  return; // 800EAFA8
}

// DVDLowReset
void f_800EAFB0(Ctx* __restrict c) {
  trace_call(0x800EAFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAFB0
  c->r[0]=c->lr; // 800EAFB4
  c->r[7]=0u+0x802F0000u; // 800EAFB8
  c->r[9]=0u+0x00000001u; // 800EAFBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAFC0
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EAFC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAFC8
  c->r[31]=0u+0x802B0000u; // 800EAFCC
  c->r[31]=c->r[31]+0x00000598u; // 800EAFD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAFD4
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EAFD8
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EAFDC
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EAFE0
  c->r[6]=c->r[7]+c->r[8]; // 800EAFE4
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EAFE8
  c->r[0]=0u-c->r[5]; // 800EAFEC
  c->r[0]=c->r[0]|c->r[5]; // 800EAFF0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EAFF4
  cmpu(c,0,c->r[0],0x00000001u); // 800EAFF8
  if (!crb(c,2)) { goto L_800EB01C; } // 800EAFFC
  c->r[3]=c->r[31]+0x00000240u; // 800EB000
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB004
  c->lr=0x800EB00Cu; f_800C8450(c); // 800EB008
  c->r[3]=c->r[31]+0x00000278u; // 800EB00C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB010
  c->lr=0x800EB018u; f_800C8450(c); // 800EB014
L_800EB018:;
  IRQCHK(c); goto L_800EB018; // 800EB018
L_800EB01C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EB01C
  c->r[0]=c->r[5]+0x01150000u; // 800EB020
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EB024
  if (crb(c,2)) { goto L_800EB03C; } // 800EB028
  c->r[3]=c->r[31]+0x000002A8u; // 800EB02C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB030
  c->lr=0x800EB038u; f_800C8450(c); // 800EB034
L_800EB038:;
  IRQCHK(c); goto L_800EB038; // 800EB038
L_800EB03C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EB03C
  c->r[0]=c->r[4]+0x00000001u; // 800EB040
  cmps(c,0,(int32_t)c->r[0],4); // 800EB044
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EB048
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EB04C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB050
  if (crb(c,0)) { goto L_800EB060; } // 800EB054
  c->r[0]=0u+0x00000000u; // 800EB058
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB05C
L_800EB060:;
  c->r[3]=R32(c->r[13]+0xFFFFA7DCu); // 800EB060
  c->r[5]=0u+0x802F0000u; // 800EB064
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EB068
  c->r[0]=c->r[3]+0x00000001u; // 800EB06C
  c->r[5]=c->r[5]+0xFFFFFF20u; // 800EB070
  cmps(c,0,(int32_t)c->r[0],4); // 800EB074
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB078
  c->r[30]=c->r[5]+c->r[4]; // 800EB07C
  if (crb(c,0)) { goto L_800EB08C; } // 800EB080
  c->r[0]=0u+0x00000000u; // 800EB084
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB088
L_800EB08C:;
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB08C
  c->r[9]=0u+0x800F0000u; // 800EB090
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB094
  c->r[4]=0u+0x0000008Au; // 800EB098
  W8(c->r[3]+c->r[0],c->r[4]); // 800EB09C
  c->r[10]=c->r[30]|c->r[30]; // 800EB0A0
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EB0A4
  c->r[4]=0u+0x0000008Au; // 800EB0A8
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB0AC
  c->r[6]=0u+0x00000020u; // 800EB0B0
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB0B4
  c->r[7]=0u+0x00000000u; // 800EB0B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB0BC
  c->r[5]=R32(c->r[13]+0xFFFFA7E8u); // 800EB0C0
  c->r[3]=c->r[3]+c->r[0]; // 800EB0C4
  c->r[8]=0u+0x00000000u; // 800EB0C8
  W32(c->r[3]+0x00000004u,c->r[5]); // 800EB0CC
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB0D0
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB0D4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB0D8
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EB0DC
  c->r[5]=c->r[5]+c->r[0]; // 800EB0E0
  c->lr=0x800EB0E8u; f_800FB1C0(c); // 800EB0E4
  cmps(c,0,(int32_t)c->r[3],0); // 800EB0E8
  if (crb(c,2)) { goto L_800EB110; } // 800EB0EC
  c->r[4]=c->r[3]|c->r[3]; // 800EB0F0
  c->r[3]=c->r[31]+0x00000860u; // 800EB0F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB0F8
  c->lr=0x800EB100u; f_800C8450(c); // 800EB0FC
  c->r[0]=0u+0x00000000u; // 800EB100
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EB104
  c->r[3]=0u+0x00000000u; // 800EB108
  goto L_800EB114; // 800EB10C
L_800EB110:;
  c->r[3]=0u+0x00000001u; // 800EB110
L_800EB114:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB114
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB118
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB11C
  c->lr=c->r[0]; // 800EB120
  c->r[1]=c->r[1]+0x00000010u; // 800EB124
  return; // 800EB128
}

// DVDLowAudioBufferConfig
void f_800EB130(Ctx* __restrict c) {
  trace_call(0x800EB130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB130
  c->r[0]=c->lr; // 800EB134
  c->r[8]=0u+0x802F0000u; // 800EB138
  c->r[11]=0u+0x00000001u; // 800EB13C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB140
  c->r[8]=c->r[8]+0xFFFFFF20u; // 800EB144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB148
  c->r[31]=0u+0x802B0000u; // 800EB14C
  c->r[31]=c->r[31]+0x00000598u; // 800EB150
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB154
  c->r[10]=R32(c->r[13]+0xFFFFA7E0u); // 800EB158
  W8(c->r[13]+0xFFFFA7D8u,c->r[11]); // 800EB15C
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 800EB160
  c->r[7]=c->r[8]+c->r[9]; // 800EB164
  c->r[6]=R8(c->r[7]+0x00000008u); // 800EB168
  c->r[0]=0u-c->r[6]; // 800EB16C
  c->r[0]=c->r[0]|c->r[6]; // 800EB170
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EB174
  cmpu(c,0,c->r[0],0x00000001u); // 800EB178
  if (!crb(c,2)) { goto L_800EB1A4; } // 800EB17C
  c->r[4]=c->r[10]|c->r[10]; // 800EB180
  c->r[3]=c->r[31]+0x00000240u; // 800EB184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB188
  c->lr=0x800EB190u; f_800C8450(c); // 800EB18C
  c->r[3]=c->r[31]+0x00000278u; // 800EB190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB194
  c->lr=0x800EB19Cu; f_800C8450(c); // 800EB198
  c->r[0]=c->r[0]|0x00000000u; // 800EB19C
L_800EB1A0:;
  IRQCHK(c); goto L_800EB1A0; // 800EB1A0
L_800EB1A4:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 800EB1A4
  c->r[0]=c->r[6]+0x01150000u; // 800EB1A8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EB1AC
  if (crb(c,2)) { goto L_800EB1C4; } // 800EB1B0
  c->r[3]=c->r[31]+0x000002A8u; // 800EB1B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB1B8
  c->lr=0x800EB1C0u; f_800C8450(c); // 800EB1BC
L_800EB1C0:;
  IRQCHK(c); goto L_800EB1C0; // 800EB1C0
L_800EB1C4:;
  W32(c->r[8]+c->r[9],c->r[5]); // 800EB1C4
  c->r[0]=c->r[10]+0x00000001u; // 800EB1C8
  cmps(c,0,(int32_t)c->r[0],4); // 800EB1CC
  W32(c->r[7]+0x00000004u,c->r[11]); // 800EB1D0
  W8(c->r[7]+0x00000008u,c->r[11]); // 800EB1D4
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB1D8
  if (crb(c,0)) { goto L_800EB1E8; } // 800EB1DC
  c->r[0]=0u+0x00000000u; // 800EB1E0
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB1E4
L_800EB1E8:;
  c->r[5]=R32(c->r[13]+0xFFFFA7DCu); // 800EB1E8
  c->r[6]=0u+0x802F0000u; // 800EB1EC
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 800EB1F0
  c->r[0]=c->r[5]+0x00000001u; // 800EB1F4
  c->r[6]=c->r[6]+0xFFFFFF20u; // 800EB1F8
  cmps(c,0,(int32_t)c->r[0],4); // 800EB1FC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB200
  c->r[30]=c->r[6]+c->r[7]; // 800EB204
  if (crb(c,0)) { goto L_800EB214; } // 800EB208
  c->r[0]=0u+0x00000000u; // 800EB20C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB210
L_800EB214:;
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB214
  c->r[7]=0u+0x802F0000u; // 800EB218
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB21C
  c->r[6]=0u+0x000000E4u; // 800EB220
  W8(c->r[5]+c->r[0],c->r[6]); // 800EB224
  c->r[9]=0u+0x800F0000u; // 800EB228
  c->r[10]=c->r[30]|c->r[30]; // 800EB22C
  c->r[7]=c->r[7]+0xFFFFFFA0u; // 800EB230
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB234
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EB238
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB23C
  c->r[6]=0u+0x00000020u; // 800EB240
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB244
  c->r[8]=0u+0x00000020u; // 800EB248
  c->r[5]=c->r[5]+c->r[0]; // 800EB24C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EB250
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB254
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB258
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB25C
  c->r[3]=c->r[3]+c->r[0]; // 800EB260
  W32(c->r[3]+0x00000008u,c->r[4]); // 800EB264
  c->r[4]=0u+0x000000E4u; // 800EB268
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB26C
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB270
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB274
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EB278
  c->r[5]=c->r[5]+c->r[0]; // 800EB27C
  c->lr=0x800EB284u; f_800FB1C0(c); // 800EB280
  cmps(c,0,(int32_t)c->r[3],0); // 800EB284
  if (crb(c,2)) { goto L_800EB2AC; } // 800EB288
  c->r[4]=c->r[3]|c->r[3]; // 800EB28C
  c->r[3]=c->r[31]+0x00000898u; // 800EB290
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB294
  c->lr=0x800EB29Cu; f_800C8450(c); // 800EB298
  c->r[0]=0u+0x00000000u; // 800EB29C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EB2A0
  c->r[3]=0u+0x00000000u; // 800EB2A4
  goto L_800EB2B0; // 800EB2A8
L_800EB2AC:;
  c->r[3]=0u+0x00000001u; // 800EB2AC
L_800EB2B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB2B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB2B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB2B8
  c->lr=c->r[0]; // 800EB2BC
  c->r[1]=c->r[1]+0x00000010u; // 800EB2C0
  return; // 800EB2C4
}

// DVDLowReportKey
void f_800EB2D0(Ctx* __restrict c) {
  trace_call(0x800EB2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB2D0
  c->r[0]=c->lr; // 800EB2D4
  c->r[9]=0u+0x802F0000u; // 800EB2D8
  c->r[12]=0u+0x00000001u; // 800EB2DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB2E0
  c->r[9]=c->r[9]+0xFFFFFF20u; // 800EB2E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB2E8
  c->r[31]=0u+0x802B0000u; // 800EB2EC
  c->r[31]=c->r[31]+0x00000598u; // 800EB2F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB2F4
  c->r[11]=R32(c->r[13]+0xFFFFA7E0u); // 800EB2F8
  W8(c->r[13]+0xFFFFA7D8u,c->r[12]); // 800EB2FC
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EB300
  c->r[8]=c->r[9]+c->r[10]; // 800EB304
  c->r[7]=R8(c->r[8]+0x00000008u); // 800EB308
  c->r[0]=0u-c->r[7]; // 800EB30C
  c->r[0]=c->r[0]|c->r[7]; // 800EB310
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EB314
  cmpu(c,0,c->r[0],0x00000001u); // 800EB318
  if (!crb(c,2)) { goto L_800EB344; } // 800EB31C
  c->r[4]=c->r[11]|c->r[11]; // 800EB320
  c->r[3]=c->r[31]+0x00000240u; // 800EB324
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB328
  c->lr=0x800EB330u; f_800C8450(c); // 800EB32C
  c->r[3]=c->r[31]+0x00000278u; // 800EB330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB334
  c->lr=0x800EB33Cu; f_800C8450(c); // 800EB338
  c->r[0]=c->r[0]|0x00000000u; // 800EB33C
L_800EB340:;
  IRQCHK(c); goto L_800EB340; // 800EB340
L_800EB344:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 800EB344
  c->r[0]=c->r[7]+0x01150000u; // 800EB348
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EB34C
  if (crb(c,2)) { goto L_800EB364; } // 800EB350
  c->r[3]=c->r[31]+0x000002A8u; // 800EB354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB358
  c->lr=0x800EB360u; f_800C8450(c); // 800EB35C
L_800EB360:;
  IRQCHK(c); goto L_800EB360; // 800EB360
L_800EB364:;
  W32(c->r[9]+c->r[10],c->r[6]); // 800EB364
  c->r[0]=c->r[11]+0x00000001u; // 800EB368
  cmps(c,0,(int32_t)c->r[0],4); // 800EB36C
  W32(c->r[8]+0x00000004u,c->r[12]); // 800EB370
  W8(c->r[8]+0x00000008u,c->r[12]); // 800EB374
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB378
  if (crb(c,0)) { goto L_800EB388; } // 800EB37C
  c->r[0]=0u+0x00000000u; // 800EB380
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB384
L_800EB388:;
  c->r[6]=R32(c->r[13]+0xFFFFA7DCu); // 800EB388
  c->r[7]=0u+0x802F0000u; // 800EB38C
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EB390
  c->r[0]=c->r[6]+0x00000001u; // 800EB394
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EB398
  cmps(c,0,(int32_t)c->r[0],4); // 800EB39C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB3A0
  c->r[30]=c->r[7]+c->r[8]; // 800EB3A4
  if (crb(c,0)) { goto L_800EB3B4; } // 800EB3A8
  c->r[0]=0u+0x00000000u; // 800EB3AC
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB3B0
L_800EB3B4:;
  c->r[6]=R32(c->r[13]+0xFFFFA7F4u); // 800EB3B4
  c->r[11]=rotl(c->r[4],16)&0x0000FFFFu; // 800EB3B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB3BC
  c->r[4]=0u+0x000000A4u; // 800EB3C0
  W8(c->r[6]+c->r[0],c->r[4]); // 800EB3C4
  c->r[7]=c->r[3]|c->r[3]; // 800EB3C8
  c->r[9]=0u+0x800F0000u; // 800EB3CC
  c->r[10]=c->r[30]|c->r[30]; // 800EB3D0
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB3D4
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EB3D8
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB3DC
  c->r[4]=0u+0x000000A4u; // 800EB3E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB3E4
  c->r[6]=0u+0x00000020u; // 800EB3E8
  c->r[3]=c->r[3]+c->r[0]; // 800EB3EC
  c->r[8]=0u+0x00000020u; // 800EB3F0
  W32(c->r[3]+0x00000004u,c->r[11]); // 800EB3F4
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB3F8
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB3FC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB400
  c->r[3]=c->r[3]+c->r[0]; // 800EB404
  W32(c->r[3]+0x00000008u,c->r[5]); // 800EB408
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB40C
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB410
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB414
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EB418
  c->r[5]=c->r[5]+c->r[0]; // 800EB41C
  c->lr=0x800EB424u; f_800FB1C0(c); // 800EB420
  cmps(c,0,(int32_t)c->r[3],0); // 800EB424
  if (crb(c,2)) { goto L_800EB44C; } // 800EB428
  c->r[4]=c->r[3]|c->r[3]; // 800EB42C
  c->r[3]=c->r[31]+0x00000A98u; // 800EB430
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB434
  c->lr=0x800EB43Cu; f_800C8450(c); // 800EB438
  c->r[0]=0u+0x00000000u; // 800EB43C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EB440
  c->r[3]=0u+0x00000000u; // 800EB444
  goto L_800EB450; // 800EB448
L_800EB44C:;
  c->r[3]=0u+0x00000001u; // 800EB44C
L_800EB450:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB454
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB458
  c->lr=c->r[0]; // 800EB45C
  c->r[1]=c->r[1]+0x00000010u; // 800EB460
  return; // 800EB464
}

// DVDLowSetMaximumRotation
void f_800EB470(Ctx* __restrict c) {
  trace_call(0x800EB470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB470
  c->r[0]=c->lr; // 800EB474
  c->r[7]=0u+0x802F0000u; // 800EB478
  c->r[10]=0u+0x00000001u; // 800EB47C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB480
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EB484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB488
  c->r[31]=0u+0x802B0000u; // 800EB48C
  c->r[31]=c->r[31]+0x00000598u; // 800EB490
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB494
  c->r[9]=R32(c->r[13]+0xFFFFA7E0u); // 800EB498
  W8(c->r[13]+0xFFFFA7D8u,c->r[10]); // 800EB49C
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800EB4A0
  c->r[6]=c->r[7]+c->r[8]; // 800EB4A4
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EB4A8
  c->r[0]=0u-c->r[5]; // 800EB4AC
  c->r[0]=c->r[0]|c->r[5]; // 800EB4B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EB4B4
  cmpu(c,0,c->r[0],0x00000001u); // 800EB4B8
  if (!crb(c,2)) { goto L_800EB4E4; } // 800EB4BC
  c->r[4]=c->r[9]|c->r[9]; // 800EB4C0
  c->r[3]=c->r[31]+0x00000240u; // 800EB4C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB4C8
  c->lr=0x800EB4D0u; f_800C8450(c); // 800EB4CC
  c->r[3]=c->r[31]+0x00000278u; // 800EB4D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB4D4
  c->lr=0x800EB4DCu; f_800C8450(c); // 800EB4D8
  c->r[0]=c->r[0]|0x00000000u; // 800EB4DC
L_800EB4E0:;
  IRQCHK(c); goto L_800EB4E0; // 800EB4E0
L_800EB4E4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EB4E4
  c->r[0]=c->r[5]+0x01150000u; // 800EB4E8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EB4EC
  if (crb(c,2)) { goto L_800EB504; } // 800EB4F0
  c->r[3]=c->r[31]+0x000002A8u; // 800EB4F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB4F8
  c->lr=0x800EB500u; f_800C8450(c); // 800EB4FC
L_800EB500:;
  IRQCHK(c); goto L_800EB500; // 800EB500
L_800EB504:;
  W32(c->r[7]+c->r[8],c->r[4]); // 800EB504
  c->r[0]=c->r[9]+0x00000001u; // 800EB508
  cmps(c,0,(int32_t)c->r[0],4); // 800EB50C
  W32(c->r[6]+0x00000004u,c->r[10]); // 800EB510
  W8(c->r[6]+0x00000008u,c->r[10]); // 800EB514
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB518
  if (crb(c,0)) { goto L_800EB528; } // 800EB51C
  c->r[0]=0u+0x00000000u; // 800EB520
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB524
L_800EB528:;
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EB528
  c->r[5]=0u+0x802F0000u; // 800EB52C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800EB530
  c->r[0]=c->r[4]+0x00000001u; // 800EB534
  c->r[5]=c->r[5]+0xFFFFFF20u; // 800EB538
  cmps(c,0,(int32_t)c->r[0],4); // 800EB53C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB540
  c->r[30]=c->r[5]+c->r[6]; // 800EB544
  if (crb(c,0)) { goto L_800EB554; } // 800EB548
  c->r[0]=0u+0x00000000u; // 800EB54C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB550
L_800EB554:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EB554
  c->r[9]=0u+0x800F0000u; // 800EB558
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB55C
  c->r[5]=0u+0x000000DDu; // 800EB560
  W8(c->r[4]+c->r[0],c->r[5]); // 800EB564
  c->r[5]=rotl(c->r[3],16)&0x00000003u; // 800EB568
  c->r[10]=c->r[30]|c->r[30]; // 800EB56C
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EB570
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB574
  c->r[4]=0u+0x000000DDu; // 800EB578
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB57C
  c->r[6]=0u+0x00000020u; // 800EB580
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB584
  c->r[7]=0u+0x00000000u; // 800EB588
  c->r[3]=c->r[3]+c->r[0]; // 800EB58C
  c->r[8]=0u+0x00000000u; // 800EB590
  W32(c->r[3]+0x00000004u,c->r[5]); // 800EB594
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB598
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB59C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB5A0
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EB5A4
  c->r[5]=c->r[5]+c->r[0]; // 800EB5A8
  c->lr=0x800EB5B0u; f_800FB1C0(c); // 800EB5AC
  cmps(c,0,(int32_t)c->r[3],0); // 800EB5B0
  if (crb(c,2)) { goto L_800EB5D8; } // 800EB5B4
  c->r[4]=c->r[3]|c->r[3]; // 800EB5B8
  c->r[3]=c->r[31]+0x00000C4Cu; // 800EB5BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB5C0
  c->lr=0x800EB5C8u; f_800C8450(c); // 800EB5C4
  c->r[0]=0u+0x00000000u; // 800EB5C8
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EB5CC
  c->r[3]=0u+0x00000000u; // 800EB5D0
  goto L_800EB5DC; // 800EB5D4
L_800EB5D8:;
  c->r[3]=0u+0x00000001u; // 800EB5D8
L_800EB5DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB5DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB5E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB5E4
  c->lr=c->r[0]; // 800EB5E8
  c->r[1]=c->r[1]+0x00000010u; // 800EB5EC
  return; // 800EB5F0
}

// DVDLowRead
void f_800EB600(Ctx* __restrict c) {
  trace_call(0x800EB600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB600
  c->r[0]=c->lr; // 800EB604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB608
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EB60C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB610
  c->r[31]=0u+0x802B0000u; // 800EB614
  c->r[31]=c->r[31]+0x00000598u; // 800EB618
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB61C
  if (crb(c,2)) { goto L_800EB638; } // 800EB620
  c->r[3]=c->r[31]+0x00000C8Cu; // 800EB624
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB628
  c->lr=0x800EB630u; f_800C8450(c); // 800EB62C
  c->r[3]=0u+0x00000000u; // 800EB630
  goto L_800EB798; // 800EB634
L_800EB638:;
  c->r[11]=R32(c->r[13]+0xFFFFA7E0u); // 800EB638
  c->r[9]=0u+0x802F0000u; // 800EB63C
  c->r[12]=0u+0x00000001u; // 800EB640
  W8(c->r[13]+0xFFFFA7D8u,c->r[12]); // 800EB644
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EB648
  c->r[9]=c->r[9]+0xFFFFFF20u; // 800EB64C
  c->r[8]=c->r[9]+c->r[10]; // 800EB650
  c->r[7]=R8(c->r[8]+0x00000008u); // 800EB654
  c->r[0]=0u-c->r[7]; // 800EB658
  c->r[0]=c->r[0]|c->r[7]; // 800EB65C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EB660
  cmpu(c,0,c->r[0],0x00000001u); // 800EB664
  if (!crb(c,2)) { goto L_800EB68C; } // 800EB668
  c->r[4]=c->r[11]|c->r[11]; // 800EB66C
  c->r[3]=c->r[31]+0x00000240u; // 800EB670
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB674
  c->lr=0x800EB67Cu; f_800C8450(c); // 800EB678
  c->r[3]=c->r[31]+0x00000278u; // 800EB67C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB680
  c->lr=0x800EB688u; f_800C8450(c); // 800EB684
L_800EB688:;
  IRQCHK(c); goto L_800EB688; // 800EB688
L_800EB68C:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 800EB68C
  c->r[0]=c->r[7]+0x01150000u; // 800EB690
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EB694
  if (crb(c,2)) { goto L_800EB6AC; } // 800EB698
  c->r[3]=c->r[31]+0x000002A8u; // 800EB69C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB6A0
  c->lr=0x800EB6A8u; f_800C8450(c); // 800EB6A4
L_800EB6A8:;
  IRQCHK(c); goto L_800EB6A8; // 800EB6A8
L_800EB6AC:;
  W32(c->r[9]+c->r[10],c->r[6]); // 800EB6AC
  c->r[0]=c->r[11]+0x00000001u; // 800EB6B0
  cmps(c,0,(int32_t)c->r[0],4); // 800EB6B4
  W32(c->r[8]+0x00000004u,c->r[12]); // 800EB6B8
  W8(c->r[8]+0x00000008u,c->r[12]); // 800EB6BC
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB6C0
  if (crb(c,0)) { goto L_800EB6D0; } // 800EB6C4
  c->r[0]=0u+0x00000000u; // 800EB6C8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB6CC
L_800EB6D0:;
  c->r[6]=R32(c->r[13]+0xFFFFA7DCu); // 800EB6D0
  c->r[7]=0u+0x802F0000u; // 800EB6D4
  W32(c->r[13]+0xFFFFA7ECu,c->r[4]); // 800EB6D8
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 800EB6DC
  c->r[0]=c->r[6]+0x00000001u; // 800EB6E0
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EB6E4
  cmps(c,0,(int32_t)c->r[0],4); // 800EB6E8
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB6EC
  c->r[30]=c->r[7]+c->r[8]; // 800EB6F0
  if (crb(c,0)) { goto L_800EB700; } // 800EB6F4
  c->r[0]=0u+0x00000000u; // 800EB6F8
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB6FC
L_800EB700:;
  c->r[6]=R32(c->r[13]+0xFFFFA7F4u); // 800EB700
  c->r[9]=0u+0x800F0000u; // 800EB704
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB708
  c->r[7]=0u+0x00000071u; // 800EB70C
  W8(c->r[6]+c->r[0],c->r[7]); // 800EB710
  c->r[7]=c->r[3]|c->r[3]; // 800EB714
  c->r[8]=c->r[4]|c->r[4]; // 800EB718
  c->r[10]=c->r[30]|c->r[30]; // 800EB71C
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB720
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EB724
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB728
  c->r[6]=0u+0x00000020u; // 800EB72C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB730
  c->r[3]=c->r[3]+c->r[0]; // 800EB734
  W32(c->r[3]+0x00000004u,c->r[4]); // 800EB738
  c->r[4]=0u+0x00000071u; // 800EB73C
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB740
  c->r[3]=R32(c->r[13]+0xFFFFA7F4u); // 800EB744
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB748
  c->r[3]=c->r[3]+c->r[0]; // 800EB74C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800EB750
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB754
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB758
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB75C
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EB760
  c->r[5]=c->r[5]+c->r[0]; // 800EB764
  c->lr=0x800EB76Cu; f_800FB1C0(c); // 800EB768
  cmps(c,0,(int32_t)c->r[3],0); // 800EB76C
  if (crb(c,2)) { goto L_800EB794; } // 800EB770
  c->r[4]=c->r[3]|c->r[3]; // 800EB774
  c->r[3]=c->r[31]+0x00000CCCu; // 800EB778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB77C
  c->lr=0x800EB784u; f_800C8450(c); // 800EB780
  c->r[0]=0u+0x00000000u; // 800EB784
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EB788
  c->r[3]=0u+0x00000000u; // 800EB78C
  goto L_800EB798; // 800EB790
L_800EB794:;
  c->r[3]=0u+0x00000001u; // 800EB794
L_800EB798:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB798
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB79C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB7A0
  c->lr=c->r[0]; // 800EB7A4
  c->r[1]=c->r[1]+0x00000010u; // 800EB7A8
  return; // 800EB7AC
}

// DVDLowSeek
void f_800EB7B0(Ctx* __restrict c) {
  trace_call(0x800EB7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB7B0
  c->r[0]=c->lr; // 800EB7B4
  c->r[7]=0u+0x802F0000u; // 800EB7B8
  c->r[10]=0u+0x00000001u; // 800EB7BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB7C0
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EB7C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB7C8
  c->r[31]=0u+0x802B0000u; // 800EB7CC
  c->r[31]=c->r[31]+0x00000598u; // 800EB7D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB7D4
  c->r[9]=R32(c->r[13]+0xFFFFA7E0u); // 800EB7D8
  W8(c->r[13]+0xFFFFA7D8u,c->r[10]); // 800EB7DC
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800EB7E0
  c->r[6]=c->r[7]+c->r[8]; // 800EB7E4
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EB7E8
  c->r[0]=0u-c->r[5]; // 800EB7EC
  c->r[0]=c->r[0]|c->r[5]; // 800EB7F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EB7F4
  cmpu(c,0,c->r[0],0x00000001u); // 800EB7F8
  if (!crb(c,2)) { goto L_800EB824; } // 800EB7FC
  c->r[4]=c->r[9]|c->r[9]; // 800EB800
  c->r[3]=c->r[31]+0x00000240u; // 800EB804
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB808
  c->lr=0x800EB810u; f_800C8450(c); // 800EB80C
  c->r[3]=c->r[31]+0x00000278u; // 800EB810
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB814
  c->lr=0x800EB81Cu; f_800C8450(c); // 800EB818
  c->r[0]=c->r[0]|0x00000000u; // 800EB81C
L_800EB820:;
  IRQCHK(c); goto L_800EB820; // 800EB820
L_800EB824:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EB824
  c->r[0]=c->r[5]+0x01150000u; // 800EB828
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EB82C
  if (crb(c,2)) { goto L_800EB844; } // 800EB830
  c->r[3]=c->r[31]+0x000002A8u; // 800EB834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB838
  c->lr=0x800EB840u; f_800C8450(c); // 800EB83C
L_800EB840:;
  IRQCHK(c); goto L_800EB840; // 800EB840
L_800EB844:;
  W32(c->r[7]+c->r[8],c->r[4]); // 800EB844
  c->r[0]=c->r[9]+0x00000001u; // 800EB848
  cmps(c,0,(int32_t)c->r[0],4); // 800EB84C
  W32(c->r[6]+0x00000004u,c->r[10]); // 800EB850
  W8(c->r[6]+0x00000008u,c->r[10]); // 800EB854
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB858
  if (crb(c,0)) { goto L_800EB868; } // 800EB85C
  c->r[0]=0u+0x00000000u; // 800EB860
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EB864
L_800EB868:;
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EB868
  c->r[5]=0u+0x802F0000u; // 800EB86C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 800EB870
  c->r[0]=c->r[4]+0x00000001u; // 800EB874
  c->r[5]=c->r[5]+0xFFFFFF20u; // 800EB878
  cmps(c,0,(int32_t)c->r[0],4); // 800EB87C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB880
  c->r[30]=c->r[5]+c->r[6]; // 800EB884
  if (crb(c,0)) { goto L_800EB894; } // 800EB888
  c->r[0]=0u+0x00000000u; // 800EB88C
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB890
L_800EB894:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EB894
  c->r[9]=0u+0x800F0000u; // 800EB898
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB89C
  c->r[5]=0u+0x000000ABu; // 800EB8A0
  W8(c->r[4]+c->r[0],c->r[5]); // 800EB8A4
  c->r[10]=c->r[30]|c->r[30]; // 800EB8A8
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EB8AC
  c->r[4]=0u+0x000000ABu; // 800EB8B0
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB8B4
  c->r[6]=0u+0x00000020u; // 800EB8B8
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB8BC
  c->r[7]=0u+0x00000000u; // 800EB8C0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB8C4
  c->r[8]=0u+0x00000000u; // 800EB8C8
  c->r[5]=c->r[5]+c->r[0]; // 800EB8CC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EB8D0
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EB8D4
  c->r[5]=R32(c->r[13]+0xFFFFA7F4u); // 800EB8D8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB8DC
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EB8E0
  c->r[5]=c->r[5]+c->r[0]; // 800EB8E4
  c->lr=0x800EB8ECu; f_800FB1C0(c); // 800EB8E8
  cmps(c,0,(int32_t)c->r[3],0); // 800EB8EC
  if (crb(c,2)) { goto L_800EB914; } // 800EB8F0
  c->r[4]=c->r[3]|c->r[3]; // 800EB8F4
  c->r[3]=c->r[31]+0x00000D00u; // 800EB8F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB8FC
  c->lr=0x800EB904u; f_800C8450(c); // 800EB900
  c->r[0]=0u+0x00000000u; // 800EB904
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EB908
  c->r[3]=0u+0x00000000u; // 800EB90C
  goto L_800EB918; // 800EB910
L_800EB914:;
  c->r[3]=0u+0x00000001u; // 800EB914
L_800EB918:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB91C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB920
  c->lr=c->r[0]; // 800EB924
  c->r[1]=c->r[1]+0x00000010u; // 800EB928
  return; // 800EB92C
}

// DVDLowGetCoverRegister
void f_800EB930(Ctx* __restrict c) {
  trace_call(0x800EB930u);
  c->r[3]=0u+0x802F0000u; // 800EB930
  c->r[3]=c->r[3]+0xFFFFFFA0u; // 800EB934
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB938
  return; // 800EB93C
}

// DVDLowGetStatusRegister
void f_800EB940(Ctx* __restrict c) {
  trace_call(0x800EB940u);
  c->r[3]=0u+0x802F0000u; // 800EB940
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800EB944
  return; // 800EB948
}

// DVDLowGetControlRegister
void f_800EB950(Ctx* __restrict c) {
  trace_call(0x800EB950u);
  c->r[3]=0u+0x802F0000u; // 800EB950
  c->r[3]=R32(c->r[3]+0x000000C0u); // 800EB954
  return; // 800EB958
}

// DVDLowPrepareCoverRegister
void f_800EB960(Ctx* __restrict c) {
  trace_call(0x800EB960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB960
  c->r[0]=c->lr; // 800EB964
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB96C
  c->r[31]=0u+0x802B0000u; // 800EB970
  c->r[31]=c->r[31]+0x00000598u; // 800EB974
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB978
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EB97C
  c->r[0]=c->r[4]+0x00000001u; // 800EB980
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB984
  cmps(c,0,(int32_t)c->r[0],4); // 800EB988
  if (crb(c,0)) { goto L_800EB998; } // 800EB98C
  c->r[0]=0u+0x00000000u; // 800EB990
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EB994
L_800EB998:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EB998
  c->r[7]=0u+0x802F0000u; // 800EB99C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EB9A0
  c->r[5]=0u+0x0000007Au; // 800EB9A4
  W8(c->r[4]+c->r[0],c->r[5]); // 800EB9A8
  c->r[9]=0u+0x00000001u; // 800EB9AC
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EB9B0
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EB9B4
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EB9B8
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EB9BC
  c->r[6]=c->r[7]+c->r[8]; // 800EB9C0
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EB9C4
  c->r[0]=0u-c->r[5]; // 800EB9C8
  c->r[0]=c->r[0]|c->r[5]; // 800EB9CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EB9D0
  cmpu(c,0,c->r[0],0x00000001u); // 800EB9D4
  if (!crb(c,2)) { goto L_800EB9FC; } // 800EB9D8
  c->r[3]=c->r[31]+0x00000240u; // 800EB9DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB9E0
  c->lr=0x800EB9E8u; f_800C8450(c); // 800EB9E4
  c->r[3]=c->r[31]+0x00000278u; // 800EB9E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB9EC
  c->lr=0x800EB9F4u; f_800C8450(c); // 800EB9F0
  c->r[0]=c->r[0]|0x00000000u; // 800EB9F4
L_800EB9F8:;
  IRQCHK(c); goto L_800EB9F8; // 800EB9F8
L_800EB9FC:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EB9FC
  c->r[0]=c->r[5]+0x01150000u; // 800EBA00
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EBA04
  if (crb(c,2)) { goto L_800EBA1C; } // 800EBA08
  c->r[3]=c->r[31]+0x000002A8u; // 800EBA0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBA10
  c->lr=0x800EBA18u; f_800C8450(c); // 800EBA14
L_800EBA18:;
  IRQCHK(c); goto L_800EBA18; // 800EBA18
L_800EBA1C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EBA1C
  c->r[0]=c->r[4]+0x00000001u; // 800EBA20
  cmps(c,0,(int32_t)c->r[0],4); // 800EBA24
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EBA28
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EBA2C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBA30
  if (crb(c,0)) { goto L_800EBA40; } // 800EBA34
  c->r[0]=0u+0x00000000u; // 800EBA38
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBA3C
L_800EBA40:;
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EBA40
  c->r[3]=0u+0x802F0000u; // 800EBA44
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBA48
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBA4C
  c->r[3]=c->r[3]+0xFFFFFF20u; // 800EBA50
  c->r[7]=0u+0x802F0000u; // 800EBA54
  c->r[30]=c->r[3]+c->r[5]; // 800EBA58
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBA5C
  c->r[9]=0u+0x800F0000u; // 800EBA60
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EBA64
  c->r[5]=c->r[4]+c->r[0]; // 800EBA68
  c->r[10]=c->r[30]|c->r[30]; // 800EBA6C
  c->r[7]=c->r[7]+0xFFFFFFC0u; // 800EBA70
  c->r[9]=c->r[9]+0xFFFF9970u; // 800EBA74
  c->r[4]=0u+0x0000007Au; // 800EBA78
  c->r[6]=0u+0x00000020u; // 800EBA7C
  c->r[8]=0u+0x00000020u; // 800EBA80
  c->lr=0x800EBA88u; f_800FB1C0(c); // 800EBA84
  cmps(c,0,(int32_t)c->r[3],0); // 800EBA88
  if (crb(c,2)) { goto L_800EBAB0; } // 800EBA8C
  c->r[4]=c->r[3]|c->r[3]; // 800EBA90
  c->r[3]=c->r[31]+0x00000DB0u; // 800EBA94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBA98
  c->lr=0x800EBAA0u; f_800C8450(c); // 800EBA9C
  c->r[0]=0u+0x00000000u; // 800EBAA0
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EBAA4
  c->r[3]=0u+0x00000000u; // 800EBAA8
  goto L_800EBAB4; // 800EBAAC
L_800EBAB0:;
  c->r[3]=0u+0x00000001u; // 800EBAB0
L_800EBAB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBAB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBAB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EBABC
  c->lr=c->r[0]; // 800EBAC0
  c->r[1]=c->r[1]+0x00000010u; // 800EBAC4
  return; // 800EBAC8
}

// DVDLowPrepareStatusRegister
void f_800EBAD0(Ctx* __restrict c) {
  trace_call(0x800EBAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBAD0
  c->r[0]=c->lr; // 800EBAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBADC
  c->r[31]=0u+0x802B0000u; // 800EBAE0
  c->r[31]=c->r[31]+0x00000598u; // 800EBAE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EBAE8
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EBAEC
  c->r[0]=c->r[4]+0x00000001u; // 800EBAF0
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EBAF4
  cmps(c,0,(int32_t)c->r[0],4); // 800EBAF8
  if (crb(c,0)) { goto L_800EBB08; } // 800EBAFC
  c->r[0]=0u+0x00000000u; // 800EBB00
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EBB04
L_800EBB08:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBB08
  c->r[7]=0u+0x802F0000u; // 800EBB0C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBB10
  c->r[5]=0u+0x00000095u; // 800EBB14
  W8(c->r[4]+c->r[0],c->r[5]); // 800EBB18
  c->r[9]=0u+0x00000001u; // 800EBB1C
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EBB20
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EBB24
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EBB28
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBB2C
  c->r[6]=c->r[7]+c->r[8]; // 800EBB30
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EBB34
  c->r[0]=0u-c->r[5]; // 800EBB38
  c->r[0]=c->r[0]|c->r[5]; // 800EBB3C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EBB40
  cmpu(c,0,c->r[0],0x00000001u); // 800EBB44
  if (!crb(c,2)) { goto L_800EBB6C; } // 800EBB48
  c->r[3]=c->r[31]+0x00000240u; // 800EBB4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBB50
  c->lr=0x800EBB58u; f_800C8450(c); // 800EBB54
  c->r[3]=c->r[31]+0x00000278u; // 800EBB58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBB5C
  c->lr=0x800EBB64u; f_800C8450(c); // 800EBB60
  c->r[0]=c->r[0]|0x00000000u; // 800EBB64
L_800EBB68:;
  IRQCHK(c); goto L_800EBB68; // 800EBB68
L_800EBB6C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EBB6C
  c->r[0]=c->r[5]+0x01150000u; // 800EBB70
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EBB74
  if (crb(c,2)) { goto L_800EBB8C; } // 800EBB78
  c->r[3]=c->r[31]+0x000002A8u; // 800EBB7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBB80
  c->lr=0x800EBB88u; f_800C8450(c); // 800EBB84
L_800EBB88:;
  IRQCHK(c); goto L_800EBB88; // 800EBB88
L_800EBB8C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EBB8C
  c->r[0]=c->r[4]+0x00000001u; // 800EBB90
  cmps(c,0,(int32_t)c->r[0],4); // 800EBB94
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EBB98
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EBB9C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBBA0
  if (crb(c,0)) { goto L_800EBBB0; } // 800EBBA4
  c->r[0]=0u+0x00000000u; // 800EBBA8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBBAC
L_800EBBB0:;
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EBBB0
  c->r[3]=0u+0x802F0000u; // 800EBBB4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBBB8
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBBBC
  c->r[3]=c->r[3]+0xFFFFFF20u; // 800EBBC0
  c->r[7]=0u+0x802F0000u; // 800EBBC4
  c->r[30]=c->r[3]+c->r[5]; // 800EBBC8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBBCC
  c->r[9]=0u+0x800F0000u; // 800EBBD0
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EBBD4
  c->r[5]=c->r[4]+c->r[0]; // 800EBBD8
  c->r[10]=c->r[30]|c->r[30]; // 800EBBDC
  c->r[7]=c->r[7]+0x000000A0u; // 800EBBE0
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EBBE4
  c->r[4]=0u+0x00000095u; // 800EBBE8
  c->r[6]=0u+0x00000020u; // 800EBBEC
  c->r[8]=0u+0x00000020u; // 800EBBF0
  c->lr=0x800EBBF8u; f_800FB1C0(c); // 800EBBF4
  cmps(c,0,(int32_t)c->r[3],0); // 800EBBF8
  if (crb(c,2)) { goto L_800EBC20; } // 800EBBFC
  c->r[4]=c->r[3]|c->r[3]; // 800EBC00
  c->r[3]=c->r[31]+0x00000DF4u; // 800EBC04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBC08
  c->lr=0x800EBC10u; f_800C8450(c); // 800EBC0C
  c->r[0]=0u+0x00000000u; // 800EBC10
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EBC14
  c->r[3]=0u+0x00000000u; // 800EBC18
  goto L_800EBC24; // 800EBC1C
L_800EBC20:;
  c->r[3]=0u+0x00000001u; // 800EBC20
L_800EBC24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBC28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EBC2C
  c->lr=c->r[0]; // 800EBC30
  c->r[1]=c->r[1]+0x00000010u; // 800EBC34
  return; // 800EBC38
}

// DVDLowPrepareControlRegister
void f_800EBC40(Ctx* __restrict c) {
  trace_call(0x800EBC40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC40
  c->r[0]=c->lr; // 800EBC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBC48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBC4C
  c->r[31]=0u+0x802B0000u; // 800EBC50
  c->r[31]=c->r[31]+0x00000598u; // 800EBC54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EBC58
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EBC5C
  c->r[0]=c->r[4]+0x00000001u; // 800EBC60
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EBC64
  cmps(c,0,(int32_t)c->r[0],4); // 800EBC68
  if (crb(c,0)) { goto L_800EBC78; } // 800EBC6C
  c->r[0]=0u+0x00000000u; // 800EBC70
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EBC74
L_800EBC78:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBC78
  c->r[7]=0u+0x802F0000u; // 800EBC7C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBC80
  c->r[5]=0u+0x00000096u; // 800EBC84
  W8(c->r[4]+c->r[0],c->r[5]); // 800EBC88
  c->r[9]=0u+0x00000001u; // 800EBC8C
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EBC90
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EBC94
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EBC98
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBC9C
  c->r[6]=c->r[7]+c->r[8]; // 800EBCA0
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EBCA4
  c->r[0]=0u-c->r[5]; // 800EBCA8
  c->r[0]=c->r[0]|c->r[5]; // 800EBCAC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EBCB0
  cmpu(c,0,c->r[0],0x00000001u); // 800EBCB4
  if (!crb(c,2)) { goto L_800EBCDC; } // 800EBCB8
  c->r[3]=c->r[31]+0x00000240u; // 800EBCBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBCC0
  c->lr=0x800EBCC8u; f_800C8450(c); // 800EBCC4
  c->r[3]=c->r[31]+0x00000278u; // 800EBCC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBCCC
  c->lr=0x800EBCD4u; f_800C8450(c); // 800EBCD0
  c->r[0]=c->r[0]|0x00000000u; // 800EBCD4
L_800EBCD8:;
  IRQCHK(c); goto L_800EBCD8; // 800EBCD8
L_800EBCDC:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EBCDC
  c->r[0]=c->r[5]+0x01150000u; // 800EBCE0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EBCE4
  if (crb(c,2)) { goto L_800EBCFC; } // 800EBCE8
  c->r[3]=c->r[31]+0x000002A8u; // 800EBCEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBCF0
  c->lr=0x800EBCF8u; f_800C8450(c); // 800EBCF4
L_800EBCF8:;
  IRQCHK(c); goto L_800EBCF8; // 800EBCF8
L_800EBCFC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EBCFC
  c->r[0]=c->r[4]+0x00000001u; // 800EBD00
  cmps(c,0,(int32_t)c->r[0],4); // 800EBD04
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EBD08
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EBD0C
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBD10
  if (crb(c,0)) { goto L_800EBD20; } // 800EBD14
  c->r[0]=0u+0x00000000u; // 800EBD18
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBD1C
L_800EBD20:;
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EBD20
  c->r[3]=0u+0x802F0000u; // 800EBD24
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBD28
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBD2C
  c->r[3]=c->r[3]+0xFFFFFF20u; // 800EBD30
  c->r[7]=0u+0x802F0000u; // 800EBD34
  c->r[30]=c->r[3]+c->r[5]; // 800EBD38
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBD3C
  c->r[9]=0u+0x800F0000u; // 800EBD40
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EBD44
  c->r[5]=c->r[4]+c->r[0]; // 800EBD48
  c->r[10]=c->r[30]|c->r[30]; // 800EBD4C
  c->r[7]=c->r[7]+0x000000C0u; // 800EBD50
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EBD54
  c->r[4]=0u+0x00000096u; // 800EBD58
  c->r[6]=0u+0x00000020u; // 800EBD5C
  c->r[8]=0u+0x00000020u; // 800EBD60
  c->lr=0x800EBD68u; f_800FB1C0(c); // 800EBD64
  cmps(c,0,(int32_t)c->r[3],0); // 800EBD68
  if (crb(c,2)) { goto L_800EBD90; } // 800EBD6C
  c->r[4]=c->r[3]|c->r[3]; // 800EBD70
  c->r[3]=c->r[31]+0x00000E3Cu; // 800EBD74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBD78
  c->lr=0x800EBD80u; f_800C8450(c); // 800EBD7C
  c->r[0]=0u+0x00000000u; // 800EBD80
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EBD84
  c->r[3]=0u+0x00000000u; // 800EBD88
  goto L_800EBD94; // 800EBD8C
L_800EBD90:;
  c->r[3]=0u+0x00000001u; // 800EBD90
L_800EBD94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBD98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EBD9C
  c->lr=c->r[0]; // 800EBDA0
  c->r[1]=c->r[1]+0x00000010u; // 800EBDA4
  return; // 800EBDA8
}

// DVDLowGetImmBufferReg
void f_800EBDB0(Ctx* __restrict c) {
  trace_call(0x800EBDB0u);
  c->r[3]=0u+0x802F0000u; // 800EBDB0
  c->r[3]=R32(c->r[3]+0xFFFFFFA0u); // 800EBDB4
  return; // 800EBDB8
}

// DVDLowUnmaskStatusInterrupts
void f_800EBDC0(Ctx* __restrict c) {
  trace_call(0x800EBDC0u);
  c->r[3]=0u+0x00000001u; // 800EBDC0
  return; // 800EBDC4
}

// DVDLowMaskCoverInterrupt
void f_800EBDD0(Ctx* __restrict c) {
  trace_call(0x800EBDD0u);
  c->r[3]=0u+0x00000001u; // 800EBDD0
  return; // 800EBDD4
}

// DVDLowClearCoverInterrupt
void f_800EBDE0(Ctx* __restrict c) {
  trace_call(0x800EBDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBDE0
  c->r[0]=c->lr; // 800EBDE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBDE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBDEC
  c->r[31]=0u+0x802B0000u; // 800EBDF0
  c->r[31]=c->r[31]+0x00000598u; // 800EBDF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EBDF8
  c->r[4]=R32(c->r[13]+0xFFFFA7DCu); // 800EBDFC
  c->r[0]=c->r[4]+0x00000001u; // 800EBE00
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EBE04
  cmps(c,0,(int32_t)c->r[0],4); // 800EBE08
  if (crb(c,0)) { goto L_800EBE18; } // 800EBE0C
  c->r[0]=0u+0x00000000u; // 800EBE10
  W32(c->r[13]+0xFFFFA7DCu,c->r[0]); // 800EBE14
L_800EBE18:;
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBE18
  c->r[7]=0u+0x802F0000u; // 800EBE1C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBE20
  c->r[5]=0u+0x00000086u; // 800EBE24
  W8(c->r[4]+c->r[0],c->r[5]); // 800EBE28
  c->r[9]=0u+0x00000001u; // 800EBE2C
  c->r[7]=c->r[7]+0xFFFFFF20u; // 800EBE30
  c->r[4]=R32(c->r[13]+0xFFFFA7E0u); // 800EBE34
  W8(c->r[13]+0xFFFFA7D8u,c->r[9]); // 800EBE38
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBE3C
  c->r[6]=c->r[7]+c->r[8]; // 800EBE40
  c->r[5]=R8(c->r[6]+0x00000008u); // 800EBE44
  c->r[0]=0u-c->r[5]; // 800EBE48
  c->r[0]=c->r[0]|c->r[5]; // 800EBE4C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800EBE50
  cmpu(c,0,c->r[0],0x00000001u); // 800EBE54
  if (!crb(c,2)) { goto L_800EBE7C; } // 800EBE58
  c->r[3]=c->r[31]+0x00000240u; // 800EBE5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBE60
  c->lr=0x800EBE68u; f_800C8450(c); // 800EBE64
  c->r[3]=c->r[31]+0x00000278u; // 800EBE68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBE6C
  c->lr=0x800EBE74u; f_800C8450(c); // 800EBE70
  c->r[0]=c->r[0]|0x00000000u; // 800EBE74
L_800EBE78:;
  IRQCHK(c); goto L_800EBE78; // 800EBE78
L_800EBE7C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800EBE7C
  c->r[0]=c->r[5]+0x01150000u; // 800EBE80
  cmpu(c,0,c->r[0],0x0000DAEDu); // 800EBE84
  if (crb(c,2)) { goto L_800EBE9C; } // 800EBE88
  c->r[3]=c->r[31]+0x000002A8u; // 800EBE8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBE90
  c->lr=0x800EBE98u; f_800C8450(c); // 800EBE94
L_800EBE98:;
  IRQCHK(c); goto L_800EBE98; // 800EBE98
L_800EBE9C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 800EBE9C
  c->r[0]=c->r[4]+0x00000001u; // 800EBEA0
  cmps(c,0,(int32_t)c->r[0],4); // 800EBEA4
  W32(c->r[6]+0x00000004u,c->r[9]); // 800EBEA8
  W8(c->r[6]+0x00000008u,c->r[9]); // 800EBEAC
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBEB0
  if (crb(c,0)) { goto L_800EBEC0; } // 800EBEB4
  c->r[0]=0u+0x00000000u; // 800EBEB8
  W32(c->r[13]+0xFFFFA7E0u,c->r[0]); // 800EBEBC
L_800EBEC0:;
  c->r[0]=R32(c->r[13]+0xFFFFA7DCu); // 800EBEC0
  c->r[3]=0u+0x802F0000u; // 800EBEC4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 800EBEC8
  c->r[4]=R32(c->r[13]+0xFFFFA7F4u); // 800EBECC
  c->r[3]=c->r[3]+0xFFFFFF20u; // 800EBED0
  c->r[9]=0u+0x800F0000u; // 800EBED4
  c->r[30]=c->r[3]+c->r[5]; // 800EBED8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EBEDC
  c->r[5]=c->r[4]+c->r[0]; // 800EBEE0
  c->r[3]=R32(c->r[13]+0xFFFF9058u); // 800EBEE4
  c->r[10]=c->r[30]|c->r[30]; // 800EBEE8
  c->r[9]=c->r[9]+0xFFFF98B0u; // 800EBEEC
  c->r[4]=0u+0x00000086u; // 800EBEF0
  c->r[6]=0u+0x00000020u; // 800EBEF4
  c->r[7]=0u+0x00000000u; // 800EBEF8
  c->r[8]=0u+0x00000000u; // 800EBEFC
  c->lr=0x800EBF04u; f_800FB1C0(c); // 800EBF00
  cmps(c,0,(int32_t)c->r[3],0); // 800EBF04
  if (crb(c,2)) { goto L_800EBF2C; } // 800EBF08
  c->r[4]=c->r[3]|c->r[3]; // 800EBF0C
  c->r[3]=c->r[31]+0x00000E84u; // 800EBF10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EBF14
  c->lr=0x800EBF1Cu; f_800C8450(c); // 800EBF18
  c->r[0]=0u+0x00000000u; // 800EBF1C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800EBF20
  c->r[3]=0u+0x00000000u; // 800EBF24
  goto L_800EBF30; // 800EBF28
L_800EBF2C:;
  c->r[3]=0u+0x00000001u; // 800EBF2C
L_800EBF30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBF30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBF34
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EBF38
  c->lr=c->r[0]; // 800EBF3C
  c->r[1]=c->r[1]+0x00000010u; // 800EBF40
  return; // 800EBF44
}

// __DVDLowTestAlarm
void f_800EBF50(Ctx* __restrict c) {
  trace_call(0x800EBF50u);
  c->r[3]=0u+0x00000000u; // 800EBF50
  return; // 800EBF54
}

void hle_AIRegisterDMACallback(Ctx*);
// AIRegisterDMACallback
void f_800EBF60(Ctx* __restrict c) {
  hle_AIRegisterDMACallback(c);
}

void hle_AIInitDMA(Ctx*);
// AIInitDMA
void f_800EBFB0(Ctx* __restrict c) {
  hle_AIInitDMA(c);
}

void hle_AIStartDMA(Ctx*);
// AIStartDMA
void f_800EC030(Ctx* __restrict c) {
  hle_AIStartDMA(c);
}

// AIGetDMABytesLeft
void f_800EC050(Ctx* __restrict c) {
  stub_log(0x800EC050u); c->r[3]=0; return;
}

// AIGetDMAStartAddr
void f_800EC060(Ctx* __restrict c) {
  trace_call(0x800EC060u);
  c->r[3]=0u+0xCC000000u; // 800EC060
  c->r[4]=R16(c->r[3]+0x00005030u); // 800EC064
  c->r[0]=R16(c->r[3]+0x00005032u); // 800EC068
  c->r[3]=rotl(c->r[0],0)&0x0000FFE0u; // 800EC06C
  c->r[3]=(rotl(c->r[4],16)&0x1FFF0000u)|(c->r[3]&~0x1FFF0000u); // 800EC070
  return; // 800EC074
}

// AIGetDMALength
void f_800EC080(Ctx* __restrict c) {
  trace_call(0x800EC080u);
  c->r[3]=0u+0xCC000000u; // 800EC080
  c->r[0]=R16(c->r[3]+0x00005036u); // 800EC084
  c->r[3]=rotl(c->r[0],5)&0x000FFFE0u; // 800EC088
  return; // 800EC08C
}

// AICheckInit
void f_800EC090(Ctx* __restrict c) {
  trace_call(0x800EC090u);
  c->r[3]=R32(c->r[13]+0xFFFFA800u); // 800EC090
  return; // 800EC094
}

// AIInit
void f_800EC0A0(Ctx* __restrict c) {
  trace_call(0x800EC0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC0A0
  c->r[0]=c->lr; // 800EC0A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC0A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC0AC
  c->r[31]=c->r[3]|c->r[3]; // 800EC0B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC0B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC0B8
  c->r[0]=R32(c->r[13]+0xFFFFA800u); // 800EC0BC
  cmps(c,0,(int32_t)c->r[0],1); // 800EC0C0
  if (crb(c,2)) { goto L_800EC204; } // 800EC0C4
  c->r[3]=R32(c->r[13]+0xFFFF9068u); // 800EC0C8
  c->lr=0x800EC0D0u; f_800C65B0(c); // 800EC0CC
  c->r[3]=0u+0x80000000u; // 800EC0D0
  c->r[4]=0u+0x431C0000u; // 800EC0D4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800EC0D8
  c->r[7]=0u+0x00000000u; // 800EC0DC
  c->r[5]=0u+0x10620000u; // 800EC0E0
  c->r[4]=c->r[4]+0xFFFFDE83u; // 800EC0E4
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800EC0E8
  c->r[3]=0u+0x00010000u; // 800EC0EC
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 800EC0F0
  c->r[9]=c->r[5]+0x00004DD3u; // 800EC0F4
  c->r[0]=c->r[3]+0xFFFFA428u; // 800EC0F8
  W32(c->r[13]+0xFFFFA828u,c->r[7]); // 800EC0FC
  c->r[4]=c->r[3]+0xFFFFA410u; // 800EC100
  c->r[3]=c->r[3]+0xFFFFF618u; // 800EC104
  c->r[10]=rotl(c->r[6],17)&0x0001FFFFu; // 800EC108
  W32(c->r[13]+0xFFFFA820u,c->r[7]); // 800EC10C
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 800EC110
  c->r[30]=0u+0xCD000000u; // 800EC114
  W32(c->r[13]+0xFFFFA818u,c->r[7]); // 800EC118
  c->r[0]=0u+0xFFFFFFEAu; // 800EC11C
  W32(c->r[13]+0xFFFFA810u,c->r[7]); // 800EC120
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[4]); // 800EC124
  W32(c->r[13]+0xFFFFA808u,c->r[7]); // 800EC128
  c->r[4]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[3]); // 800EC12C
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)31524); // 800EC130
  c->r[3]=(uint32_t)((int32_t)c->r[10]*(int32_t)3000); // 800EC134
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[8])>>32); // 800EC138
  c->r[6]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[6])>>32); // 800EC13C
  c->r[8]=rotl(c->r[8],23)&0x007FFFFFu; // 800EC140
  W32(c->r[13]+0xFFFFA82Cu,c->r[8]); // 800EC144
  c->r[5]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[5])>>32); // 800EC148
  c->r[6]=rotl(c->r[6],23)&0x007FFFFFu; // 800EC14C
  W32(c->r[13]+0xFFFFA824u,c->r[6]); // 800EC150
  c->r[4]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[4])>>32); // 800EC154
  c->r[5]=rotl(c->r[5],23)&0x007FFFFFu; // 800EC158
  W32(c->r[13]+0xFFFFA81Cu,c->r[5]); // 800EC15C
  c->r[3]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[3])>>32); // 800EC160
  c->r[4]=rotl(c->r[4],23)&0x007FFFFFu; // 800EC164
  W32(c->r[13]+0xFFFFA814u,c->r[4]); // 800EC168
  c->r[3]=rotl(c->r[3],23)&0x007FFFFFu; // 800EC16C
  W32(c->r[13]+0xFFFFA80Cu,c->r[3]); // 800EC170
  c->r[3]=R32(c->r[30]+0x00006C00u); // 800EC174
  c->r[0]=c->r[3]&c->r[0]; // 800EC178
  W32(c->r[30]+0x00006C00u,c->r[0]); // 800EC17C
  W32(c->r[30]+0x00006C04u,c->r[7]); // 800EC180
  W32(c->r[30]+0x00006C0Cu,c->r[7]); // 800EC184
  c->r[0]=R32(c->r[30]+0x00006C00u); // 800EC188
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800EC18C
  c->r[0]=c->r[0]|0x00000020u; // 800EC190
  W32(c->r[30]+0x00006C00u,c->r[0]); // 800EC194
  c->r[0]=R32(c->r[30]+0x00006C00u); // 800EC198
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 800EC19C
  c->r[0]=c->r[0]^0x00000001u; // 800EC1A0
  cmps(c,0,(int32_t)c->r[0],0); // 800EC1A4
  if (crb(c,2)) { goto L_800EC1D8; } // 800EC1A8
  c->r[0]=R32(c->r[30]+0x00006C00u); // 800EC1AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800EC1B0
  W32(c->r[30]+0x00006C00u,c->r[0]); // 800EC1B4
  c->lr=0x800EC1BCu; f_800CBAA0(c); // 800EC1B8
  c->r[29]=c->r[3]|c->r[3]; // 800EC1BC
  c->lr=0x800EC1C4u; f_800EC340(c); // 800EC1C0
  c->r[0]=R32(c->r[30]+0x00006C00u); // 800EC1C4
  c->r[3]=c->r[29]|c->r[29]; // 800EC1C8
  c->r[0]=c->r[0]|0x00000040u; // 800EC1CC
  W32(c->r[30]+0x00006C00u,c->r[0]); // 800EC1D0
  c->lr=0x800EC1D8u; f_800CBAE0(c); // 800EC1D4
L_800EC1D8:;
  c->r[0]=0u+0x00000000u; // 800EC1D8
  c->r[4]=0u+0x800F0000u; // 800EC1DC
  W32(c->r[13]+0xFFFFA838u,c->r[0]); // 800EC1E0
  c->r[4]=c->r[4]+0xFFFFC220u; // 800EC1E4
  c->r[3]=0u+0x00000005u; // 800EC1E8
  W32(c->r[13]+0xFFFFA834u,c->r[31]); // 800EC1EC
  c->lr=0x800EC1F4u; f_800CBB10(c); // 800EC1F0
  c->r[3]=0u+0x04000000u; // 800EC1F4
  c->lr=0x800EC1FCu; f_800CBEF0(c); // 800EC1F8
  c->r[0]=0u+0x00000001u; // 800EC1FC
  W32(c->r[13]+0xFFFFA800u,c->r[0]); // 800EC200
L_800EC204:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC204
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC208
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EC20C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EC210
  c->lr=c->r[0]; // 800EC214
  c->r[1]=c->r[1]+0x00000020u; // 800EC218
  return; // 800EC21C
}

// __AIDHandler
void f_800EC220(Ctx* __restrict c) {
  trace_call(0x800EC220u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC220
  c->r[0]=c->lr; // 800EC224
  c->r[6]=0u+0xCC000000u; // 800EC228
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800EC22C
  c->r[0]=0u+0xFFFFFF5Fu; // 800EC230
  c->r[3]=c->r[1]+0x00000008u; // 800EC234
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800EC238
  c->r[31]=c->r[4]|c->r[4]; // 800EC23C
  c->r[5]=R16(c->r[6]+0x0000500Au); // 800EC240
  c->r[0]=c->r[5]&c->r[0]; // 800EC244
  c->r[0]=c->r[0]|0x00000008u; // 800EC248
  W16(c->r[6]+0x0000500Au,c->r[0]); // 800EC24C
  c->lr=0x800EC254u; f_800C8020(c); // 800EC250
  c->r[3]=c->r[1]+0x00000008u; // 800EC254
  c->lr=0x800EC25Cu; f_800C7DE0(c); // 800EC258
  c->r[3]=R32(c->r[13]+0xFFFFA838u); // 800EC25C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC260
  if (crb(c,2)) { goto L_800EC2A4; } // 800EC264
  c->r[0]=R32(c->r[13]+0xFFFFA804u); // 800EC268
  cmps(c,0,(int32_t)c->r[0],0); // 800EC26C
  if (!crb(c,2)) { goto L_800EC2A4; } // 800EC270
  c->r[0]=R32(c->r[13]+0xFFFFA834u); // 800EC274
  c->r[4]=0u+0x00000001u; // 800EC278
  W32(c->r[13]+0xFFFFA804u,c->r[4]); // 800EC27C
  cmps(c,0,(int32_t)c->r[0],0); // 800EC280
  if (crb(c,2)) { goto L_800EC290; } // 800EC284
  c->lr=0x800EC28Cu; f_800EC2D0(c); // 800EC288
  goto L_800EC29C; // 800EC28C
L_800EC290:;
  c->r[12]=c->r[3]|c->r[3]; // 800EC290
  c->ctr=c->r[12]; // 800EC294
  if (true) { c->lr=0x800EC29Cu; dispatch(c,c->ctr); } // 800EC298
L_800EC29C:;
  c->r[0]=0u+0x00000000u; // 800EC29C
  W32(c->r[13]+0xFFFFA804u,c->r[0]); // 800EC2A0
L_800EC2A4:;
  c->r[3]=c->r[1]+0x00000008u; // 800EC2A4
  c->lr=0x800EC2ACu; f_800C8020(c); // 800EC2A8
  c->r[3]=c->r[31]|c->r[31]; // 800EC2AC
  c->lr=0x800EC2B4u; f_800C7DE0(c); // 800EC2B0
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800EC2B4
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800EC2B8
  c->lr=c->r[0]; // 800EC2BC
  c->r[1]=c->r[1]+0x000002E0u; // 800EC2C0
  return; // 800EC2C4
}

// __AICallbackStackSwitch
void f_800EC2D0(Ctx* __restrict c) {
  trace_call(0x800EC2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC2D0
  c->r[0]=c->lr; // 800EC2D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC2D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC2DC
  c->r[31]=c->r[1]|c->r[1]; // 800EC2E0
  c->r[31]=c->r[3]|c->r[3]; // 800EC2E4
  c->r[5]=0u+0x803A0000u; // 800EC2E8
  c->r[5]=c->r[5]+0xFFFFADD0u; // 800EC2EC
  W32(c->r[5]+0x00000000u,c->r[1]); // 800EC2F0
  c->r[5]=0u+0x803A0000u; // 800EC2F4
  c->r[5]=c->r[5]+0xFFFFADD4u; // 800EC2F8
  c->r[1]=R32(c->r[5]+0x00000000u); // 800EC2FC
  c->r[1]=c->r[1]+0xFFFFFFF8u; // 800EC300
  c->lr=c->r[31]; // 800EC304
  if (true) { uint32_t t=c->lr; c->lr=0x800EC30Cu; dispatch(c,t); } // 800EC308
  c->r[5]=0u+0x803A0000u; // 800EC30C
  c->r[5]=c->r[5]+0xFFFFADD0u; // 800EC310
  c->r[1]=R32(c->r[5]+0x00000000u); // 800EC314
  c->r[10]=c->r[1]|c->r[1]; // 800EC318
  c->r[31]=R32(c->r[10]+0x0000000Cu); // 800EC31C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800EC320
  c->r[0]=R32(c->r[10]+0x00000004u); // 800EC324
  c->r[1]=c->r[10]|c->r[10]; // 800EC328
  c->lr=c->r[0]; // 800EC32C
  return; // 800EC330
}

// __AI_SRC_INIT
void f_800EC340(Ctx* __restrict c) {
  stub_log(0x800EC340u);  return;
}

// AXInit
void f_800EC510(Ctx* __restrict c) {
  trace_call(0x800EC510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC510
  c->r[0]=c->lr; // 800EC514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC518
  c->r[0]=R32(c->r[13]+0xFFFFA840u); // 800EC51C
  cmps(c,0,(int32_t)c->r[0],0); // 800EC520
  if (!crb(c,2)) { goto L_800EC554; } // 800EC524
  c->r[3]=R32(c->r[13]+0xFFFF9070u); // 800EC528
  c->lr=0x800EC530u; f_800C65B0(c); // 800EC52C
  c->lr=0x800EC534u; f_800EC650(c); // 800EC530
  c->lr=0x800EC538u; f_800EF320(c); // 800EC534
  c->lr=0x800EC53Cu; f_800EE8A0(c); // 800EC538
  c->lr=0x800EC540u; f_800ECA70(c); // 800EC53C
  c->lr=0x800EC544u; f_800EDD10(c); // 800EC540
  c->r[3]=0u+0x00000000u; // 800EC544
  c->lr=0x800EC54Cu; f_800EE280(c); // 800EC548
  c->r[0]=0u+0x00000001u; // 800EC54C
  W32(c->r[13]+0xFFFFA840u,c->r[0]); // 800EC550
L_800EC554:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC554
  c->lr=c->r[0]; // 800EC558
  c->r[1]=c->r[1]+0x00000010u; // 800EC55C
  return; // 800EC560
}

// AXIsInit
void f_800EC570(Ctx* __restrict c) {
  trace_call(0x800EC570u);
  c->r[3]=R32(c->r[13]+0xFFFFA840u); // 800EC570
  return; // 800EC574
}

// __AXGetStackHead
void f_800EC580(Ctx* __restrict c) {
  trace_call(0x800EC580u);
  c->r[4]=0u+0x802F0000u; // 800EC580
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC584
  c->r[4]=c->r[4]+0x000000E0u; // 800EC588
  c->r[3]=R32(c->r[4]+c->r[0]); // 800EC58C
  return; // 800EC590
}

// __AXServiceCallbackStack
void f_800EC5A0(Ctx* __restrict c) {
  trace_call(0x800EC5A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC5A0
  c->r[0]=c->lr; // 800EC5A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC5A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC5AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC5B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC5B4
  c->r[29]=R32(c->r[13]+0xFFFFA848u); // 800EC5B8
  cmps(c,0,(int32_t)c->r[29],0); // 800EC5BC
  if (crb(c,2)) { goto L_800EC5CC; } // 800EC5C0
  c->r[0]=R32(c->r[29]+0x00000008u); // 800EC5C4
  W32(c->r[13]+0xFFFFA848u,c->r[0]); // 800EC5C8
L_800EC5CC:;
  c->r[30]=0u+0x802F0000u; // 800EC5CC
  c->r[31]=0u+0x00000000u; // 800EC5D0
  goto L_800EC628; // 800EC5D4
L_800EC5D8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800EC5D8
  cmps(c,0,(int32_t)c->r[0],0); // 800EC5DC
  if (crb(c,2)) { goto L_800EC614; } // 800EC5E0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800EC5E4
  cmps(c,0,(int32_t)c->r[12],0); // 800EC5E8
  if (crb(c,2)) { goto L_800EC5FC; } // 800EC5EC
  c->r[3]=c->r[29]|c->r[29]; // 800EC5F0
  c->ctr=c->r[12]; // 800EC5F4
  if (true) { c->lr=0x800EC5FCu; dispatch(c,c->ctr); } // 800EC5F8
L_800EC5FC:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC5FC
  c->lr=0x800EC604u; f_800EC730(c); // 800EC600
  c->r[0]=R32(c->r[30]+0x000000E0u); // 800EC604
  W32(c->r[29]+0x00000000u,c->r[0]); // 800EC608
  W32(c->r[30]+0x000000E0u,c->r[29]); // 800EC60C
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800EC610
L_800EC614:;
  c->r[29]=R32(c->r[13]+0xFFFFA848u); // 800EC614
  cmps(c,0,(int32_t)c->r[29],0); // 800EC618
  if (crb(c,2)) { goto L_800EC628; } // 800EC61C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800EC620
  W32(c->r[13]+0xFFFFA848u,c->r[0]); // 800EC624
L_800EC628:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EC628
  if (!crb(c,2)) { IRQCHK(c); goto L_800EC5D8; } // 800EC62C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC630
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC634
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EC638
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EC63C
  c->lr=c->r[0]; // 800EC640
  c->r[1]=c->r[1]+0x00000020u; // 800EC644
  return; // 800EC648
}

// __AXAllocInit
void f_800EC650(Ctx* __restrict c) {
  trace_call(0x800EC650u);
  c->r[4]=0u+0x802F0000u; // 800EC650
  c->r[5]=0u+0x802F0000u; // 800EC654
  c->r[3]=0u+0x00000000u; // 800EC658
  c->r[0]=0u+0x00000002u; // 800EC65C
  W32(c->r[13]+0xFFFFA848u,c->r[3]); // 800EC660
  c->r[4]=c->r[4]+0x00000160u; // 800EC664
  c->r[5]=c->r[5]+0x000000E0u; // 800EC668
  c->ctr=c->r[0]; // 800EC66C
L_800EC670:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EC670
  W32(c->r[5]+0x00000000u,c->r[3]); // 800EC674
  W32(c->r[4]+0x00000004u,c->r[3]); // 800EC678
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EC67C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800EC680
  W32(c->r[5]+0x00000008u,c->r[3]); // 800EC684
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800EC688
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800EC68C
  W32(c->r[4]+0x00000010u,c->r[3]); // 800EC690
  W32(c->r[5]+0x00000010u,c->r[3]); // 800EC694
  W32(c->r[4]+0x00000014u,c->r[3]); // 800EC698
  W32(c->r[5]+0x00000014u,c->r[3]); // 800EC69C
  W32(c->r[4]+0x00000018u,c->r[3]); // 800EC6A0
  W32(c->r[5]+0x00000018u,c->r[3]); // 800EC6A4
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800EC6A8
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 800EC6AC
  W32(c->r[4]+0x00000020u,c->r[3]); // 800EC6B0
  W32(c->r[5]+0x00000020u,c->r[3]); // 800EC6B4
  W32(c->r[4]+0x00000024u,c->r[3]); // 800EC6B8
  W32(c->r[5]+0x00000024u,c->r[3]); // 800EC6BC
  W32(c->r[4]+0x00000028u,c->r[3]); // 800EC6C0
  W32(c->r[5]+0x00000028u,c->r[3]); // 800EC6C4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800EC6C8
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 800EC6CC
  W32(c->r[4]+0x00000030u,c->r[3]); // 800EC6D0
  W32(c->r[5]+0x00000030u,c->r[3]); // 800EC6D4
  W32(c->r[4]+0x00000034u,c->r[3]); // 800EC6D8
  W32(c->r[5]+0x00000034u,c->r[3]); // 800EC6DC
  W32(c->r[4]+0x00000038u,c->r[3]); // 800EC6E0
  W32(c->r[5]+0x00000038u,c->r[3]); // 800EC6E4
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 800EC6E8
  c->r[4]=c->r[4]+0x00000040u; // 800EC6EC
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 800EC6F0
  c->r[5]=c->r[5]+0x00000040u; // 800EC6F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EC670; } // 800EC6F8
  return; // 800EC6FC
}

// __AXPushFreeStack
void f_800EC700(Ctx* __restrict c) {
  trace_call(0x800EC700u);
  c->r[5]=0u+0x802F0000u; // 800EC700
  c->r[0]=0u+0x00000000u; // 800EC704
  c->r[4]=R32(c->r[5]+0x000000E0u); // 800EC708
  W32(c->r[3]+0x00000000u,c->r[4]); // 800EC70C
  W32(c->r[5]+0x000000E0u,c->r[3]); // 800EC710
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EC714
  return; // 800EC718
}

// __AXPushCallbackStack
void f_800EC720(Ctx* __restrict c) {
  trace_call(0x800EC720u);
  c->r[0]=R32(c->r[13]+0xFFFFA848u); // 800EC720
  W32(c->r[3]+0x00000008u,c->r[0]); // 800EC724
  W32(c->r[13]+0xFFFFA848u,c->r[3]); // 800EC728
  return; // 800EC72C
}

// __AXRemoveFromStack
void f_800EC730(Ctx* __restrict c) {
  trace_call(0x800EC730u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800EC730
  c->r[5]=0u+0x802F0000u; // 800EC734
  c->r[4]=0u+0x802F0000u; // 800EC738
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC73C
  c->r[5]=c->r[5]+0x000000E0u; // 800EC740
  c->r[4]=c->r[4]+0x00000160u; // 800EC744
  c->r[0]=R32(c->r[5]+c->r[6]); // 800EC748
  c->r[7]=R32(c->r[4]+c->r[6]); // 800EC74C
  cmpu(c,0,c->r[0],c->r[7]); // 800EC750
  if (!crb(c,2)) { goto L_800EC768; } // 800EC754
  c->r[0]=0u+0x00000000u; // 800EC758
  W32(c->r[4]+c->r[6],c->r[0]); // 800EC75C
  W32(c->r[5]+c->r[6],c->r[0]); // 800EC760
  return; // 800EC764
L_800EC768:;
  cmpu(c,0,c->r[3],c->r[0]); // 800EC768
  if (!crb(c,2)) { goto L_800EC784; } // 800EC76C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EC770
  c->r[0]=0u+0x00000000u; // 800EC774
  W32(c->r[5]+c->r[6],c->r[3]); // 800EC778
  W32(c->r[3]+0x00000004u,c->r[0]); // 800EC77C
  return; // 800EC780
L_800EC784:;
  cmpu(c,0,c->r[3],c->r[7]); // 800EC784
  if (!crb(c,2)) { goto L_800EC7A0; } // 800EC788
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EC78C
  c->r[0]=0u+0x00000000u; // 800EC790
  W32(c->r[4]+c->r[6],c->r[3]); // 800EC794
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EC798
  return; // 800EC79C
L_800EC7A0:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800EC7A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EC7A4
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EC7A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800EC7AC
  return; // 800EC7B0
}

// AXFreeVoice
void f_800EC7C0(Ctx* __restrict c) {
  trace_call(0x800EC7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC7C0
  c->r[0]=c->lr; // 800EC7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC7C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC7CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EC7D0
  c->r[30]=c->r[3]|c->r[3]; // 800EC7D4
  c->lr=0x800EC7DCu; f_800CBAA0(c); // 800EC7D8
  c->r[31]=c->r[3]|c->r[3]; // 800EC7DC
  c->r[3]=c->r[30]|c->r[30]; // 800EC7E0
  c->lr=0x800EC7E8u; f_800EC730(c); // 800EC7E4
  c->r[0]=R16(c->r[30]+0x00000038u); // 800EC7E8
  cmpu(c,0,c->r[0],0x00000001u); // 800EC7EC
  if (!crb(c,2)) { goto L_800EC7FC; } // 800EC7F0
  c->r[0]=0u+0x00000001u; // 800EC7F4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EC7F8
L_800EC7FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800EC7FC
  c->lr=0x800EC804u; f_800EF2E0(c); // 800EC800
  c->r[5]=0u+0x802F0000u; // 800EC804
  c->r[0]=0u+0x00000000u; // 800EC808
  c->r[4]=R32(c->r[5]+0x000000E0u); // 800EC80C
  c->r[3]=c->r[31]|c->r[31]; // 800EC810
  W32(c->r[30]+0x00000000u,c->r[4]); // 800EC814
  W32(c->r[5]+0x000000E0u,c->r[30]); // 800EC818
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800EC81C
  c->lr=0x800EC824u; f_800CBAE0(c); // 800EC820
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC828
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EC82C
  c->lr=c->r[0]; // 800EC830
  c->r[1]=c->r[1]+0x00000010u; // 800EC834
  return; // 800EC838
}

// AXAcquireVoice
void f_800EC840(Ctx* __restrict c) {
  trace_call(0x800EC840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC840
  c->r[0]=c->lr; // 800EC844
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC848
  c->r[11]=c->r[1]+0x00000020u; // 800EC84C
  c->lr=0x800EC854u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EC850
  c->r[27]=c->r[3]|c->r[3]; // 800EC854
  c->r[28]=c->r[4]|c->r[4]; // 800EC858
  c->r[29]=c->r[5]|c->r[5]; // 800EC85C
  c->lr=0x800EC864u; f_800CBAA0(c); // 800EC860
  c->r[4]=0u+0x802F0000u; // 800EC864
  c->r[31]=c->r[3]|c->r[3]; // 800EC868
  c->r[30]=R32(c->r[4]+0x000000E0u); // 800EC86C
  cmps(c,0,(int32_t)c->r[30],0); // 800EC870
  if (crb(c,2)) { goto L_800EC880; } // 800EC874
  c->r[0]=R32(c->r[30]+0x00000000u); // 800EC878
  W32(c->r[4]+0x000000E0u,c->r[0]); // 800EC87C
L_800EC880:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EC880
  if (!crb(c,2)) { goto L_800EC940; } // 800EC884
  c->r[3]=0u+0x802F0000u; // 800EC888
  c->r[4]=0u+0x802F0000u; // 800EC88C
  c->r[3]=c->r[3]+0x000000E0u; // 800EC890
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 800EC894
  c->r[4]=c->r[4]+0x00000160u; // 800EC898
  c->r[5]=c->r[3]+0x00000004u; // 800EC89C
  c->r[3]=0u+0x00000000u; // 800EC8A0
  c->r[6]=c->r[4]+0x00000004u; // 800EC8A4
  c->ctr=c->r[0]; // 800EC8A8
  cmpu(c,0,c->r[27],0x00000001u); // 800EC8AC
  if (!crb(c,1)) { goto L_800EC940; } // 800EC8B0
  c->r[0]=c->r[0]|0x00000000u; // 800EC8B4
L_800EC8B8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800EC8B8
  c->r[30]=0u+0x00000000u; // 800EC8BC
  cmps(c,0,(int32_t)c->r[0],0); // 800EC8C0
  if (crb(c,2)) { goto L_800EC8FC; } // 800EC8C4
  c->r[7]=R32(c->r[6]+0x00000000u); // 800EC8C8
  cmpu(c,0,c->r[0],c->r[7]); // 800EC8CC
  if (!crb(c,2)) { goto L_800EC8E4; } // 800EC8D0
  W32(c->r[6]+0x00000000u,c->r[3]); // 800EC8D4
  c->r[30]=c->r[0]|c->r[0]; // 800EC8D8
  W32(c->r[5]+0x00000000u,c->r[3]); // 800EC8DC
  goto L_800EC8FC; // 800EC8E0
L_800EC8E4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800EC8E4
  if (crb(c,2)) { goto L_800EC8FC; } // 800EC8E8
  c->r[4]=R32(c->r[7]+0x00000004u); // 800EC8EC
  c->r[30]=c->r[7]|c->r[7]; // 800EC8F0
  W32(c->r[6]+0x00000000u,c->r[4]); // 800EC8F4
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EC8F8
L_800EC8FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EC8FC
  if (crb(c,2)) { goto L_800EC934; } // 800EC900
  c->r[0]=R16(c->r[30]+0x00000038u); // 800EC904
  cmpu(c,0,c->r[0],0x00000001u); // 800EC908
  if (!crb(c,2)) { goto L_800EC918; } // 800EC90C
  c->r[0]=0u+0x00000001u; // 800EC910
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EC914
L_800EC918:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 800EC918
  cmps(c,0,(int32_t)c->r[12],0); // 800EC91C
  if (crb(c,2)) { goto L_800EC940; } // 800EC920
  c->r[3]=c->r[30]|c->r[30]; // 800EC924
  c->ctr=c->r[12]; // 800EC928
  if (true) { c->lr=0x800EC930u; dispatch(c,c->ctr); } // 800EC92C
  goto L_800EC940; // 800EC930
L_800EC934:;
  c->r[5]=c->r[5]+0x00000004u; // 800EC934
  c->r[6]=c->r[6]+0x00000004u; // 800EC938
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EC8B8; } // 800EC93C
L_800EC940:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EC940
  if (crb(c,2)) { goto L_800EC9A0; } // 800EC944
  c->r[4]=0u+0x802F0000u; // 800EC948
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EC94C
  c->r[4]=c->r[4]+0x000000E0u; // 800EC950
  c->r[0]=0u+0x00000000u; // 800EC954
  c->r[3]=R32(c->r[4]+c->r[5]); // 800EC958
  W32(c->r[30]+0x00000000u,c->r[3]); // 800EC95C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC960
  W32(c->r[30]+0x00000004u,c->r[0]); // 800EC964
  if (crb(c,2)) { goto L_800EC97C; } // 800EC968
  c->r[3]=R32(c->r[4]+c->r[5]); // 800EC96C
  W32(c->r[3]+0x00000004u,c->r[30]); // 800EC970
  W32(c->r[4]+c->r[5],c->r[30]); // 800EC974
  goto L_800EC98C; // 800EC978
L_800EC97C:;
  c->r[3]=0u+0x802F0000u; // 800EC97C
  W32(c->r[4]+c->r[5],c->r[30]); // 800EC980
  c->r[3]=c->r[3]+0x00000160u; // 800EC984
  W32(c->r[3]+c->r[5],c->r[30]); // 800EC988
L_800EC98C:;
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 800EC98C
  c->r[3]=c->r[30]|c->r[30]; // 800EC990
  W32(c->r[30]+0x00000010u,c->r[28]); // 800EC994
  W32(c->r[30]+0x00000014u,c->r[29]); // 800EC998
  c->lr=0x800EC9A0u; f_800EF2E0(c); // 800EC99C
L_800EC9A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC9A0
  c->lr=0x800EC9A8u; f_800CBAE0(c); // 800EC9A4
  c->r[11]=c->r[1]+0x00000020u; // 800EC9A8
  c->r[3]=c->r[30]|c->r[30]; // 800EC9AC
  c->lr=0x800EC9B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EC9B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC9B4
  c->lr=c->r[0]; // 800EC9B8
  c->r[1]=c->r[1]+0x00000020u; // 800EC9BC
  return; // 800EC9C0
}

// AXSetVoicePriority
void f_800EC9D0(Ctx* __restrict c) {
  trace_call(0x800EC9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC9D0
  c->r[0]=c->lr; // 800EC9D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC9D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC9DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC9E0
  c->r[30]=c->r[4]|c->r[4]; // 800EC9E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC9E8
  c->r[29]=c->r[3]|c->r[3]; // 800EC9EC
  c->lr=0x800EC9F4u; f_800CBAA0(c); // 800EC9F0
  c->r[31]=c->r[3]|c->r[3]; // 800EC9F4
  c->r[3]=c->r[29]|c->r[29]; // 800EC9F8
  c->lr=0x800ECA00u; f_800EC730(c); // 800EC9FC
  c->r[4]=0u+0x802F0000u; // 800ECA00
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800ECA04
  c->r[4]=c->r[4]+0x000000E0u; // 800ECA08
  c->r[0]=0u+0x00000000u; // 800ECA0C
  c->r[3]=R32(c->r[4]+c->r[5]); // 800ECA10
  W32(c->r[29]+0x00000000u,c->r[3]); // 800ECA14
  cmps(c,0,(int32_t)c->r[3],0); // 800ECA18
  W32(c->r[29]+0x00000004u,c->r[0]); // 800ECA1C
  if (crb(c,2)) { goto L_800ECA34; } // 800ECA20
  c->r[3]=R32(c->r[4]+c->r[5]); // 800ECA24
  W32(c->r[3]+0x00000004u,c->r[29]); // 800ECA28
  W32(c->r[4]+c->r[5],c->r[29]); // 800ECA2C
  goto L_800ECA44; // 800ECA30
L_800ECA34:;
  c->r[3]=0u+0x802F0000u; // 800ECA34
  W32(c->r[4]+c->r[5],c->r[29]); // 800ECA38
  c->r[3]=c->r[3]+0x00000160u; // 800ECA3C
  W32(c->r[3]+c->r[5],c->r[29]); // 800ECA40
L_800ECA44:;
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800ECA44
  c->r[3]=c->r[31]|c->r[31]; // 800ECA48
  c->lr=0x800ECA50u; f_800CBAE0(c); // 800ECA4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECA50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECA54
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ECA58
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ECA5C
  c->lr=c->r[0]; // 800ECA60
  c->r[1]=c->r[1]+0x00000020u; // 800ECA64
  return; // 800ECA68
}

// __AXAuxInit
void f_800ECA70(Ctx* __restrict c) {
  trace_call(0x800ECA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECA70
  c->r[0]=c->lr; // 800ECA74
  c->r[6]=0u+0x802F0000u; // 800ECA78
  c->r[5]=0u+0x00000000u; // 800ECA7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECA80
  c->r[6]=c->r[6]+0x000001E0u; // 800ECA84
  c->r[0]=0u+0x00000020u; // 800ECA88
  c->r[4]=0u+0x00000001u; // 800ECA8C
  c->r[3]=0u+0x00000002u; // 800ECA90
  W32(c->r[13]+0xFFFFA888u,c->r[5]); // 800ECA94
  c->r[7]=c->r[6]+0x00000000u; // 800ECA98
  c->r[8]=c->r[6]+0x00001200u; // 800ECA9C
  W32(c->r[13]+0xFFFFA884u,c->r[5]); // 800ECAA0
  c->r[6]=c->r[6]+0x00002400u; // 800ECAA4
  W32(c->r[13]+0xFFFFA880u,c->r[5]); // 800ECAA8
  W32(c->r[13]+0xFFFFA87Cu,c->r[5]); // 800ECAAC
  W32(c->r[13]+0xFFFFA878u,c->r[5]); // 800ECAB0
  W32(c->r[13]+0xFFFFA874u,c->r[5]); // 800ECAB4
  W32(c->r[13]+0xFFFFA858u,c->r[5]); // 800ECAB8
  W32(c->r[13]+0xFFFFA854u,c->r[4]); // 800ECABC
  W32(c->r[13]+0xFFFFA850u,c->r[3]); // 800ECAC0
  c->ctr=c->r[0]; // 800ECAC4
L_800ECAC8:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 800ECAC8
  W32(c->r[8]+0x00000000u,c->r[5]); // 800ECACC
  W32(c->r[6]+0x00000000u,c->r[5]); // 800ECAD0
  W32(c->r[7]+0x00000004u,c->r[5]); // 800ECAD4
  W32(c->r[8]+0x00000004u,c->r[5]); // 800ECAD8
  W32(c->r[6]+0x00000004u,c->r[5]); // 800ECADC
  W32(c->r[7]+0x00000008u,c->r[5]); // 800ECAE0
  W32(c->r[8]+0x00000008u,c->r[5]); // 800ECAE4
  W32(c->r[6]+0x00000008u,c->r[5]); // 800ECAE8
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 800ECAEC
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 800ECAF0
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800ECAF4
  W32(c->r[7]+0x00000010u,c->r[5]); // 800ECAF8
  W32(c->r[8]+0x00000010u,c->r[5]); // 800ECAFC
  W32(c->r[6]+0x00000010u,c->r[5]); // 800ECB00
  W32(c->r[7]+0x00000014u,c->r[5]); // 800ECB04
  W32(c->r[8]+0x00000014u,c->r[5]); // 800ECB08
  W32(c->r[6]+0x00000014u,c->r[5]); // 800ECB0C
  W32(c->r[7]+0x00000018u,c->r[5]); // 800ECB10
  W32(c->r[8]+0x00000018u,c->r[5]); // 800ECB14
  W32(c->r[6]+0x00000018u,c->r[5]); // 800ECB18
  W32(c->r[7]+0x0000001Cu,c->r[5]); // 800ECB1C
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 800ECB20
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 800ECB24
  W32(c->r[7]+0x00000020u,c->r[5]); // 800ECB28
  c->r[7]=c->r[7]+0x00000024u; // 800ECB2C
  W32(c->r[8]+0x00000020u,c->r[5]); // 800ECB30
  c->r[8]=c->r[8]+0x00000024u; // 800ECB34
  W32(c->r[6]+0x00000020u,c->r[5]); // 800ECB38
  c->r[6]=c->r[6]+0x00000024u; // 800ECB3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ECAC8; } // 800ECB40
  c->r[3]=c->r[13]+0xFFFFA894u; // 800ECB44
  c->r[4]=0u+0x00000000u; // 800ECB48
  c->r[5]=0u+0x00000003u; // 800ECB4C
  c->lr=0x800ECB54u; f_800046B4(c); // 800ECB50
  c->r[3]=c->r[13]+0xFFFFA890u; // 800ECB54
  c->r[4]=0u+0x00000000u; // 800ECB58
  c->r[5]=0u+0x00000003u; // 800ECB5C
  c->lr=0x800ECB64u; f_800046B4(c); // 800ECB60
  c->r[3]=c->r[13]+0xFFFFA88Cu; // 800ECB64
  c->r[4]=0u+0x00000000u; // 800ECB68
  c->r[5]=0u+0x00000003u; // 800ECB6C
  c->lr=0x800ECB74u; f_800046B4(c); // 800ECB70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECB74
  c->lr=c->r[0]; // 800ECB78
  c->r[1]=c->r[1]+0x00000010u; // 800ECB7C
  return; // 800ECB80
}

// __AXGetAuxAInput
void f_800ECB90(Ctx* __restrict c) {
  trace_call(0x800ECB90u);
  c->r[0]=R32(c->r[13]+0xFFFFA888u); // 800ECB90
  cmps(c,0,(int32_t)c->r[0],0); // 800ECB94
  if (crb(c,2)) { goto L_800ECBB8; } // 800ECB98
  c->r[0]=R32(c->r[13]+0xFFFFA858u); // 800ECB9C
  c->r[4]=0u+0x802F0000u; // 800ECBA0
  c->r[4]=c->r[4]+0x000001E0u; // 800ECBA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECBA8
  c->r[0]=c->r[4]+c->r[0]; // 800ECBAC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECBB0
  return; // 800ECBB4
L_800ECBB8:;
  c->r[0]=0u+0x00000000u; // 800ECBB8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECBBC
  return; // 800ECBC0
}

// __AXGetAuxAOutput
void f_800ECBD0(Ctx* __restrict c) {
  trace_call(0x800ECBD0u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECBD0
  c->r[4]=0u+0x802F0000u; // 800ECBD4
  c->r[4]=c->r[4]+0x000001E0u; // 800ECBD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECBDC
  c->r[0]=c->r[4]+c->r[0]; // 800ECBE0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECBE4
  return; // 800ECBE8
}

// __AXGetAuxAInputDpl2
void f_800ECBF0(Ctx* __restrict c) {
  trace_call(0x800ECBF0u);
  c->r[0]=R32(c->r[13]+0xFFFFA858u); // 800ECBF0
  c->r[4]=0u+0x802F0000u; // 800ECBF4
  c->r[4]=c->r[4]+0x000001E0u; // 800ECBF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECBFC
  c->r[4]=c->r[4]+c->r[0]; // 800ECC00
  c->r[0]=c->r[4]+0x00000480u; // 800ECC04
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECC08
  return; // 800ECC0C
}

// __AXGetAuxAOutputDpl2R
void f_800ECC10(Ctx* __restrict c) {
  trace_call(0x800ECC10u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECC10
  c->r[4]=0u+0x802F0000u; // 800ECC14
  c->r[4]=c->r[4]+0x000001E0u; // 800ECC18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECC1C
  c->r[4]=c->r[4]+c->r[0]; // 800ECC20
  c->r[0]=c->r[4]+0x00000180u; // 800ECC24
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECC28
  return; // 800ECC2C
}

// __AXGetAuxAOutputDpl2Ls
void f_800ECC30(Ctx* __restrict c) {
  trace_call(0x800ECC30u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECC30
  c->r[4]=0u+0x802F0000u; // 800ECC34
  c->r[4]=c->r[4]+0x000001E0u; // 800ECC38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECC3C
  c->r[4]=c->r[4]+c->r[0]; // 800ECC40
  c->r[0]=c->r[4]+0x00000300u; // 800ECC44
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECC48
  return; // 800ECC4C
}

// __AXGetAuxAOutputDpl2Rs
void f_800ECC50(Ctx* __restrict c) {
  trace_call(0x800ECC50u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECC50
  c->r[4]=0u+0x802F0000u; // 800ECC54
  c->r[4]=c->r[4]+0x000001E0u; // 800ECC58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECC5C
  c->r[4]=c->r[4]+c->r[0]; // 800ECC60
  c->r[0]=c->r[4]+0x00000480u; // 800ECC64
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECC68
  return; // 800ECC6C
}

// __AXGetAuxBInput
void f_800ECC70(Ctx* __restrict c) {
  trace_call(0x800ECC70u);
  c->r[0]=R32(c->r[13]+0xFFFFA884u); // 800ECC70
  cmps(c,0,(int32_t)c->r[0],0); // 800ECC74
  if (crb(c,2)) { goto L_800ECC98; } // 800ECC78
  c->r[0]=R32(c->r[13]+0xFFFFA858u); // 800ECC7C
  c->r[4]=0u+0x802F0000u; // 800ECC80
  c->r[4]=c->r[4]+0x000013E0u; // 800ECC84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECC88
  c->r[0]=c->r[4]+c->r[0]; // 800ECC8C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECC90
  return; // 800ECC94
L_800ECC98:;
  c->r[0]=0u+0x00000000u; // 800ECC98
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECC9C
  return; // 800ECCA0
}

// __AXGetAuxBOutput
void f_800ECCB0(Ctx* __restrict c) {
  trace_call(0x800ECCB0u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECCB0
  c->r[4]=0u+0x802F0000u; // 800ECCB4
  c->r[4]=c->r[4]+0x000013E0u; // 800ECCB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECCBC
  c->r[0]=c->r[4]+c->r[0]; // 800ECCC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECCC4
  return; // 800ECCC8
}

// __AXGetAuxBInputDpl2
void f_800ECCD0(Ctx* __restrict c) {
  trace_call(0x800ECCD0u);
  c->r[0]=R32(c->r[13]+0xFFFFA858u); // 800ECCD0
  c->r[4]=0u+0x802F0000u; // 800ECCD4
  c->r[4]=c->r[4]+0x000013E0u; // 800ECCD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECCDC
  c->r[4]=c->r[4]+c->r[0]; // 800ECCE0
  c->r[0]=c->r[4]+0x00000480u; // 800ECCE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECCE8
  return; // 800ECCEC
}

// __AXGetAuxBOutputDpl2R
void f_800ECCF0(Ctx* __restrict c) {
  trace_call(0x800ECCF0u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECCF0
  c->r[4]=0u+0x802F0000u; // 800ECCF4
  c->r[4]=c->r[4]+0x000013E0u; // 800ECCF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECCFC
  c->r[4]=c->r[4]+c->r[0]; // 800ECD00
  c->r[0]=c->r[4]+0x00000180u; // 800ECD04
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECD08
  return; // 800ECD0C
}

// __AXGetAuxBOutputDpl2Ls
void f_800ECD10(Ctx* __restrict c) {
  trace_call(0x800ECD10u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECD10
  c->r[4]=0u+0x802F0000u; // 800ECD14
  c->r[4]=c->r[4]+0x000013E0u; // 800ECD18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECD1C
  c->r[4]=c->r[4]+c->r[0]; // 800ECD20
  c->r[0]=c->r[4]+0x00000300u; // 800ECD24
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECD28
  return; // 800ECD2C
}

// __AXGetAuxBOutputDpl2Rs
void f_800ECD30(Ctx* __restrict c) {
  trace_call(0x800ECD30u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECD30
  c->r[4]=0u+0x802F0000u; // 800ECD34
  c->r[4]=c->r[4]+0x000013E0u; // 800ECD38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECD3C
  c->r[4]=c->r[4]+c->r[0]; // 800ECD40
  c->r[0]=c->r[4]+0x00000480u; // 800ECD44
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECD48
  return; // 800ECD4C
}

// __AXGetAuxCInput
void f_800ECD50(Ctx* __restrict c) {
  trace_call(0x800ECD50u);
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 800ECD50
  cmps(c,0,(int32_t)c->r[0],0); // 800ECD54
  if (crb(c,2)) { goto L_800ECD78; } // 800ECD58
  c->r[0]=R32(c->r[13]+0xFFFFA858u); // 800ECD5C
  c->r[4]=0u+0x802F0000u; // 800ECD60
  c->r[4]=c->r[4]+0x000025E0u; // 800ECD64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 800ECD68
  c->r[0]=c->r[4]+c->r[0]; // 800ECD6C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECD70
  return; // 800ECD74
L_800ECD78:;
  c->r[0]=0u+0x00000000u; // 800ECD78
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECD7C
  return; // 800ECD80
}

// __AXGetAuxCOutput
void f_800ECD90(Ctx* __restrict c) {
  trace_call(0x800ECD90u);
  c->r[0]=R32(c->r[13]+0xFFFFA854u); // 800ECD90
  c->r[4]=0u+0x802F0000u; // 800ECD94
  c->r[4]=c->r[4]+0x000025E0u; // 800ECD98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 800ECD9C
  c->r[0]=c->r[4]+c->r[0]; // 800ECDA0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ECDA4
  return; // 800ECDA8
}

// __AXProcessAux
void f_800ECDB0(Ctx* __restrict c) {
  trace_call(0x800ECDB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECDB0
  c->r[0]=c->lr; // 800ECDB4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800ECDB8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800ECDBC
  c->r[31]=0u+0x802F0000u; // 800ECDC0
  c->r[31]=c->r[31]+0x000001E0u; // 800ECDC4
  W32(c->r[1]+0x00000058u,c->r[30]); // 800ECDC8
  c->r[8]=c->r[31]+0x00000000u; // 800ECDCC
  c->r[3]=c->r[31]+0x00001200u; // 800ECDD0
  W32(c->r[1]+0x00000054u,c->r[29]); // 800ECDD4
  c->r[9]=R32(c->r[13]+0xFFFFA858u); // 800ECDD8
  c->r[7]=R32(c->r[13]+0xFFFFA854u); // 800ECDDC
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)1536); // 800ECDE0
  c->r[0]=R32(c->r[13]+0xFFFFA888u); // 800ECDE4
  cmps(c,0,(int32_t)c->r[0],0); // 800ECDE8
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)1536); // 800ECDEC
  c->r[0]=c->r[8]+c->r[5]; // 800ECDF0
  W32(c->r[13]+0xFFFFA870u,c->r[0]); // 800ECDF4
  c->r[0]=c->r[3]+c->r[5]; // 800ECDF8
  W32(c->r[13]+0xFFFFA868u,c->r[0]); // 800ECDFC
  c->r[5]=c->r[3]+c->r[4]; // 800ECE00
  c->r[6]=c->r[8]+c->r[4]; // 800ECE04
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)1152); // 800ECE08
  c->r[4]=c->r[31]+0x00002400u; // 800ECE0C
  W32(c->r[13]+0xFFFFA86Cu,c->r[6]); // 800ECE10
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)1152); // 800ECE14
  W32(c->r[13]+0xFFFFA864u,c->r[5]); // 800ECE18
  c->r[3]=c->r[4]+c->r[3]; // 800ECE1C
  W32(c->r[13]+0xFFFFA860u,c->r[3]); // 800ECE20
  c->r[0]=c->r[4]+c->r[0]; // 800ECE24
  W32(c->r[13]+0xFFFFA85Cu,c->r[0]); // 800ECE28
  if (crb(c,2)) { goto L_800ECEDC; } // 800ECE2C
  c->r[0]=R32(c->r[13]+0xFFFFA8B0u); // 800ECE30
  cmpu(c,0,c->r[0],0x00000002u); // 800ECE34
  if (!crb(c,2)) { goto L_800ECE90; } // 800ECE38
  c->r[0]=R32(c->r[13]+0xFFFFA850u); // 800ECE3C
  c->r[4]=0u+0x00000600u; // 800ECE40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECE44
  c->r[3]=c->r[8]+c->r[0]; // 800ECE48
  W32(c->r[1]+0x00000040u,c->r[3]); // 800ECE4C
  c->r[6]=c->r[3]+0x00000180u; // 800ECE50
  c->r[5]=c->r[3]+0x00000300u; // 800ECE54
  c->r[0]=c->r[3]+0x00000480u; // 800ECE58
  W32(c->r[1]+0x00000044u,c->r[6]); // 800ECE5C
  W32(c->r[1]+0x00000048u,c->r[5]); // 800ECE60
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800ECE64
  c->lr=0x800ECE6Cu; f_800C7750(c); // 800ECE68
  c->r[12]=R32(c->r[13]+0xFFFFA888u); // 800ECE6C
  c->r[3]=c->r[1]+0x00000040u; // 800ECE70
  c->r[4]=R32(c->r[13]+0xFFFFA87Cu); // 800ECE74
  c->ctr=c->r[12]; // 800ECE78
  if (true) { c->lr=0x800ECE80u; dispatch(c,c->ctr); } // 800ECE7C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800ECE80
  c->r[4]=0u+0x00000600u; // 800ECE84
  c->lr=0x800ECE8Cu; f_800C77E0(c); // 800ECE88
  goto L_800ECF20; // 800ECE8C
L_800ECE90:;
  c->r[0]=R32(c->r[13]+0xFFFFA850u); // 800ECE90
  c->r[4]=0u+0x00000480u; // 800ECE94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 800ECE98
  c->r[3]=c->r[8]+c->r[0]; // 800ECE9C
  W32(c->r[1]+0x00000030u,c->r[3]); // 800ECEA0
  c->r[5]=c->r[3]+0x00000180u; // 800ECEA4
  c->r[0]=c->r[3]+0x00000300u; // 800ECEA8
  W32(c->r[1]+0x00000034u,c->r[5]); // 800ECEAC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800ECEB0
  c->lr=0x800ECEB8u; f_800C7750(c); // 800ECEB4
  c->r[12]=R32(c->r[13]+0xFFFFA888u); // 800ECEB8
  c->r[3]=c->r[1]+0x00000030u; // 800ECEBC
  c->r[4]=R32(c->r[13]+0xFFFFA87Cu); // 800ECEC0
  c->ctr=c->r[12]; // 800ECEC4
  if (true) { c->lr=0x800ECECCu; dispatch(c,c->ctr); } // 800ECEC8
  c->r[3]=R32(c->r[1]+0x00000030u); // 800ECECC
  c->r[4]=0u+0x00000480u; // 800ECED0
  c->lr=0x800ECED8u; f_800C77E0(c); // 800ECED4
  goto L_800ECF20; // 800ECED8
L_800ECEDC:;
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ECEDC
  c->r[30]=c->r[13]+0xFFFFA894u; // 800ECEE0
  c->r[0]=R8(c->r[30]+c->r[3]); // 800ECEE4
  cmps(c,0,(int32_t)c->r[0],0); // 800ECEE8
  if (crb(c,2)) { goto L_800ECF20; } // 800ECEEC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 800ECEF0
  c->r[4]=0u+0x00000000u; // 800ECEF4
  c->r[5]=0u+0x00000600u; // 800ECEF8
  c->r[29]=c->r[8]+c->r[0]; // 800ECEFC
  c->r[3]=c->r[29]|c->r[29]; // 800ECF00
  c->lr=0x800ECF08u; f_800046B4(c); // 800ECF04
  c->r[3]=c->r[29]|c->r[29]; // 800ECF08
  c->r[4]=0u+0x00000600u; // 800ECF0C
  c->lr=0x800ECF14u; f_800C7780(c); // 800ECF10
  c->r[0]=R32(c->r[13]+0xFFFFA850u); // 800ECF14
  c->r[3]=0u+0x00000000u; // 800ECF18
  W8(c->r[30]+c->r[0],c->r[3]); // 800ECF1C
L_800ECF20:;
  c->r[0]=R32(c->r[13]+0xFFFFA884u); // 800ECF20
  cmps(c,0,(int32_t)c->r[0],0); // 800ECF24
  if (crb(c,2)) { goto L_800ECFE0; } // 800ECF28
  c->r[0]=R32(c->r[13]+0xFFFFA8B0u); // 800ECF2C
  cmpu(c,0,c->r[0],0x00000002u); // 800ECF30
  if (!crb(c,2)) { goto L_800ECF90; } // 800ECF34
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ECF38
  c->r[0]=c->r[31]+0x00001200u; // 800ECF3C
  c->r[4]=0u+0x00000600u; // 800ECF40
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 800ECF44
  c->r[3]=c->r[0]+c->r[3]; // 800ECF48
  W32(c->r[1]+0x00000020u,c->r[3]); // 800ECF4C
  c->r[6]=c->r[3]+0x00000180u; // 800ECF50
  c->r[5]=c->r[3]+0x00000300u; // 800ECF54
  c->r[0]=c->r[3]+0x00000480u; // 800ECF58
  W32(c->r[1]+0x00000024u,c->r[6]); // 800ECF5C
  W32(c->r[1]+0x00000028u,c->r[5]); // 800ECF60
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800ECF64
  c->lr=0x800ECF6Cu; f_800C7750(c); // 800ECF68
  c->r[12]=R32(c->r[13]+0xFFFFA884u); // 800ECF6C
  c->r[3]=c->r[1]+0x00000020u; // 800ECF70
  c->r[4]=R32(c->r[13]+0xFFFFA878u); // 800ECF74
  c->ctr=c->r[12]; // 800ECF78
  if (true) { c->lr=0x800ECF80u; dispatch(c,c->ctr); } // 800ECF7C
  c->r[3]=R32(c->r[1]+0x00000020u); // 800ECF80
  c->r[4]=0u+0x00000600u; // 800ECF84
  c->lr=0x800ECF8Cu; f_800C77E0(c); // 800ECF88
  goto L_800ED028; // 800ECF8C
L_800ECF90:;
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ECF90
  c->r[0]=c->r[31]+0x00001200u; // 800ECF94
  c->r[4]=0u+0x00000480u; // 800ECF98
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 800ECF9C
  c->r[3]=c->r[0]+c->r[3]; // 800ECFA0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800ECFA4
  c->r[5]=c->r[3]+0x00000180u; // 800ECFA8
  c->r[0]=c->r[3]+0x00000300u; // 800ECFAC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800ECFB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800ECFB4
  c->lr=0x800ECFBCu; f_800C7750(c); // 800ECFB8
  c->r[12]=R32(c->r[13]+0xFFFFA884u); // 800ECFBC
  c->r[3]=c->r[1]+0x00000014u; // 800ECFC0
  c->r[4]=R32(c->r[13]+0xFFFFA878u); // 800ECFC4
  c->ctr=c->r[12]; // 800ECFC8
  if (true) { c->lr=0x800ECFD0u; dispatch(c,c->ctr); } // 800ECFCC
  c->r[3]=R32(c->r[1]+0x00000014u); // 800ECFD0
  c->r[4]=0u+0x00000480u; // 800ECFD4
  c->lr=0x800ECFDCu; f_800C77E0(c); // 800ECFD8
  goto L_800ED028; // 800ECFDC
L_800ECFE0:;
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ECFE0
  c->r[30]=c->r[13]+0xFFFFA890u; // 800ECFE4
  c->r[0]=R8(c->r[30]+c->r[3]); // 800ECFE8
  cmps(c,0,(int32_t)c->r[0],0); // 800ECFEC
  if (crb(c,2)) { goto L_800ED028; } // 800ECFF0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 800ECFF4
  c->r[0]=c->r[31]+0x00001200u; // 800ECFF8
  c->r[4]=0u+0x00000000u; // 800ECFFC
  c->r[5]=0u+0x00000600u; // 800ED000
  c->r[29]=c->r[0]+c->r[3]; // 800ED004
  c->r[3]=c->r[29]|c->r[29]; // 800ED008
  c->lr=0x800ED010u; f_800046B4(c); // 800ED00C
  c->r[3]=c->r[29]|c->r[29]; // 800ED010
  c->r[4]=0u+0x00000600u; // 800ED014
  c->lr=0x800ED01Cu; f_800C7780(c); // 800ED018
  c->r[0]=R32(c->r[13]+0xFFFFA850u); // 800ED01C
  c->r[3]=0u+0x00000000u; // 800ED020
  W8(c->r[30]+c->r[0],c->r[3]); // 800ED024
L_800ED028:;
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 800ED028
  cmps(c,0,(int32_t)c->r[0],0); // 800ED02C
  if (crb(c,2)) { goto L_800ED090; } // 800ED030
  c->r[0]=R32(c->r[13]+0xFFFFA8B0u); // 800ED034
  cmpu(c,0,c->r[0],0x00000002u); // 800ED038
  if (crb(c,2)) { goto L_800ED090; } // 800ED03C
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ED040
  c->r[0]=c->r[31]+0x00002400u; // 800ED044
  c->r[4]=0u+0x00000480u; // 800ED048
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 800ED04C
  c->r[3]=c->r[0]+c->r[3]; // 800ED050
  W32(c->r[1]+0x00000008u,c->r[3]); // 800ED054
  c->r[5]=c->r[3]+0x00000180u; // 800ED058
  c->r[0]=c->r[3]+0x00000300u; // 800ED05C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800ED060
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ED064
  c->lr=0x800ED06Cu; f_800C7750(c); // 800ED068
  c->r[12]=R32(c->r[13]+0xFFFFA880u); // 800ED06C
  c->r[3]=c->r[1]+0x00000008u; // 800ED070
  c->r[4]=R32(c->r[13]+0xFFFFA874u); // 800ED074
  c->ctr=c->r[12]; // 800ED078
  if (true) { c->lr=0x800ED080u; dispatch(c,c->ctr); } // 800ED07C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800ED080
  c->r[4]=0u+0x00000480u; // 800ED084
  c->lr=0x800ED08Cu; f_800C77E0(c); // 800ED088
  goto L_800ED0E4; // 800ED08C
L_800ED090:;
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 800ED090
  cmps(c,0,(int32_t)c->r[0],0); // 800ED094
  if (!crb(c,2)) { goto L_800ED0E4; } // 800ED098
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ED09C
  c->r[30]=c->r[13]+0xFFFFA88Cu; // 800ED0A0
  c->r[0]=R8(c->r[30]+c->r[3]); // 800ED0A4
  cmps(c,0,(int32_t)c->r[0],0); // 800ED0A8
  if (crb(c,2)) { goto L_800ED0E4; } // 800ED0AC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 800ED0B0
  c->r[0]=c->r[31]+0x00002400u; // 800ED0B4
  c->r[4]=0u+0x00000000u; // 800ED0B8
  c->r[5]=0u+0x00000480u; // 800ED0BC
  c->r[29]=c->r[0]+c->r[3]; // 800ED0C0
  c->r[3]=c->r[29]|c->r[29]; // 800ED0C4
  c->lr=0x800ED0CCu; f_800046B4(c); // 800ED0C8
  c->r[3]=c->r[29]|c->r[29]; // 800ED0CC
  c->r[4]=0u+0x00000480u; // 800ED0D0
  c->lr=0x800ED0D8u; f_800C7780(c); // 800ED0D4
  c->r[0]=R32(c->r[13]+0xFFFFA850u); // 800ED0D8
  c->r[3]=0u+0x00000000u; // 800ED0DC
  W8(c->r[30]+c->r[0],c->r[3]); // 800ED0E0
L_800ED0E4:;
  c->r[3]=0u+0xAAAB0000u; // 800ED0E4
  c->r[5]=R32(c->r[13]+0xFFFFA858u); // 800ED0E8
  c->r[0]=c->r[3]+0xFFFFAAABu; // 800ED0EC
  c->r[3]=R32(c->r[13]+0xFFFFA850u); // 800ED0F0
  c->r[4]=R32(c->r[13]+0xFFFFA854u); // 800ED0F4
  c->r[7]=c->r[5]+0x00000001u; // 800ED0F8
  c->r[3]=c->r[3]+0x00000001u; // 800ED0FC
  c->r[5]=c->r[4]+0x00000001u; // 800ED100
  c->r[6]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 800ED104
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 800ED108
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800ED10C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800ED110
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800ED114
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)3); // 800ED118
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800ED11C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 800ED120
  c->r[6]=c->r[7]-c->r[6]; // 800ED124
  W32(c->r[13]+0xFFFFA858u,c->r[6]); // 800ED128
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800ED12C
  c->r[4]=c->r[5]-c->r[4]; // 800ED130
  W32(c->r[13]+0xFFFFA854u,c->r[4]); // 800ED134
  c->r[0]=c->r[3]-c->r[0]; // 800ED138
  W32(c->r[13]+0xFFFFA850u,c->r[0]); // 800ED13C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800ED140
  c->r[30]=R32(c->r[1]+0x00000058u); // 800ED144
  c->r[29]=R32(c->r[1]+0x00000054u); // 800ED148
  c->r[0]=R32(c->r[1]+0x00000064u); // 800ED14C
  c->lr=c->r[0]; // 800ED150
  c->r[1]=c->r[1]+0x00000060u; // 800ED154
  return; // 800ED158
}

// AXRegisterAuxACallback
void f_800ED160(Ctx* __restrict c) {
  trace_call(0x800ED160u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED160
  c->r[0]=c->lr; // 800ED164
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED16C
  c->r[31]=c->r[3]|c->r[3]; // 800ED170
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED174
  c->r[30]=c->r[4]|c->r[4]; // 800ED178
  c->lr=0x800ED180u; f_800CBAA0(c); // 800ED17C
  cmps(c,0,(int32_t)c->r[31],0); // 800ED180
  W32(c->r[13]+0xFFFFA888u,c->r[31]); // 800ED184
  c->r[31]=c->r[3]|c->r[3]; // 800ED188
  W32(c->r[13]+0xFFFFA87Cu,c->r[30]); // 800ED18C
  if (!crb(c,2)) { goto L_800ED1A4; } // 800ED190
  c->r[3]=c->r[13]+0xFFFFA894u; // 800ED194
  c->r[4]=0u+0x00000001u; // 800ED198
  c->r[5]=0u+0x00000003u; // 800ED19C
  c->lr=0x800ED1A4u; f_800046B4(c); // 800ED1A0
L_800ED1A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800ED1A4
  c->lr=0x800ED1ACu; f_800CBAE0(c); // 800ED1A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED1AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED1B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED1B4
  c->lr=c->r[0]; // 800ED1B8
  c->r[1]=c->r[1]+0x00000010u; // 800ED1BC
  return; // 800ED1C0
}

// AXRegisterAuxBCallback
void f_800ED1D0(Ctx* __restrict c) {
  trace_call(0x800ED1D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED1D0
  c->r[0]=c->lr; // 800ED1D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED1D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED1DC
  c->r[31]=c->r[3]|c->r[3]; // 800ED1E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED1E4
  c->r[30]=c->r[4]|c->r[4]; // 800ED1E8
  c->lr=0x800ED1F0u; f_800CBAA0(c); // 800ED1EC
  cmps(c,0,(int32_t)c->r[31],0); // 800ED1F0
  W32(c->r[13]+0xFFFFA884u,c->r[31]); // 800ED1F4
  c->r[31]=c->r[3]|c->r[3]; // 800ED1F8
  W32(c->r[13]+0xFFFFA878u,c->r[30]); // 800ED1FC
  if (!crb(c,2)) { goto L_800ED214; } // 800ED200
  c->r[3]=c->r[13]+0xFFFFA890u; // 800ED204
  c->r[4]=0u+0x00000001u; // 800ED208
  c->r[5]=0u+0x00000003u; // 800ED20C
  c->lr=0x800ED214u; f_800046B4(c); // 800ED210
L_800ED214:;
  c->r[3]=c->r[31]|c->r[31]; // 800ED214
  c->lr=0x800ED21Cu; f_800CBAE0(c); // 800ED218
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED21C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED220
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED224
  c->lr=c->r[0]; // 800ED228
  c->r[1]=c->r[1]+0x00000010u; // 800ED22C
  return; // 800ED230
}

// AXRegisterAuxCCallback
void f_800ED240(Ctx* __restrict c) {
  trace_call(0x800ED240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED240
  c->r[0]=c->lr; // 800ED244
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED24C
  c->r[31]=c->r[3]|c->r[3]; // 800ED250
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED254
  c->r[30]=c->r[4]|c->r[4]; // 800ED258
  c->lr=0x800ED260u; f_800CBAA0(c); // 800ED25C
  cmps(c,0,(int32_t)c->r[31],0); // 800ED260
  W32(c->r[13]+0xFFFFA880u,c->r[31]); // 800ED264
  c->r[31]=c->r[3]|c->r[3]; // 800ED268
  W32(c->r[13]+0xFFFFA874u,c->r[30]); // 800ED26C
  if (!crb(c,2)) { goto L_800ED284; } // 800ED270
  c->r[3]=c->r[13]+0xFFFFA88Cu; // 800ED274
  c->r[4]=0u+0x00000001u; // 800ED278
  c->r[5]=0u+0x00000003u; // 800ED27C
  c->lr=0x800ED284u; f_800046B4(c); // 800ED280
L_800ED284:;
  c->r[3]=c->r[31]|c->r[31]; // 800ED284
  c->lr=0x800ED28Cu; f_800CBAE0(c); // 800ED288
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED28C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED290
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED294
  c->lr=c->r[0]; // 800ED298
  c->r[1]=c->r[1]+0x00000010u; // 800ED29C
  return; // 800ED2A0
}

// AXGetAuxACallback
void f_800ED2B0(Ctx* __restrict c) {
  trace_call(0x800ED2B0u);
  c->r[0]=R32(c->r[13]+0xFFFFA888u); // 800ED2B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ED2B4
  c->r[0]=R32(c->r[13]+0xFFFFA87Cu); // 800ED2B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ED2BC
  return; // 800ED2C0
}

// AXGetAuxBCallback
void f_800ED2D0(Ctx* __restrict c) {
  trace_call(0x800ED2D0u);
  c->r[0]=R32(c->r[13]+0xFFFFA884u); // 800ED2D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ED2D4
  c->r[0]=R32(c->r[13]+0xFFFFA878u); // 800ED2D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ED2DC
  return; // 800ED2E0
}

// AXGetAuxCCallback
void f_800ED2F0(Ctx* __restrict c) {
  trace_call(0x800ED2F0u);
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 800ED2F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ED2F4
  c->r[0]=R32(c->r[13]+0xFFFFA874u); // 800ED2F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ED2FC
  return; // 800ED300
}

// __AXGetCommandListCycles
void f_800ED310(Ctx* __restrict c) {
  trace_call(0x800ED310u);
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED310
  return; // 800ED314
}

// __AXGetCommandListAddress
void f_800ED320(Ctx* __restrict c) {
  trace_call(0x800ED320u);
  c->r[5]=R32(c->r[13]+0xFFFFA8B8u); // 800ED320
  c->r[4]=0u+0x802F0000u; // 800ED324
  c->r[4]=c->r[4]+0x00003360u; // 800ED328
  c->r[3]=c->r[5]+0x00000001u; // 800ED32C
  c->r[5]=rotl(c->r[5],7)&0xFFFFFF80u; // 800ED330
  c->r[0]=rotl(c->r[3],7)&0x00000080u; // 800ED334
  c->r[3]=rotl(c->r[3],0)&0x00000001u; // 800ED338
  W32(c->r[13]+0xFFFFA8B8u,c->r[3]); // 800ED33C
  c->r[0]=c->r[4]+c->r[0]; // 800ED340
  W32(c->r[13]+0xFFFFA8B4u,c->r[0]); // 800ED344
  c->r[3]=c->r[4]+c->r[5]; // 800ED348
  return; // 800ED34C
}

// __AXNextFrame
void f_800ED350(Ctx* __restrict c) {
  trace_call(0x800ED350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED350
  c->r[0]=c->lr; // 800ED354
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED358
  c->r[0]=0u+0x00001E83u; // 800ED35C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED360
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ED364
  c->r[30]=c->r[5]|c->r[5]; // 800ED368
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ED36C
  c->r[29]=c->r[4]|c->r[4]; // 800ED370
  W32(c->r[1]+0x00000010u,c->r[28]); // 800ED374
  c->r[28]=c->r[3]|c->r[3]; // 800ED378
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED37C
  c->r[31]=R32(c->r[13]+0xFFFFA8B4u); // 800ED380
  c->lr=0x800ED388u; f_800EE630(c); // 800ED384
  W32(c->r[1]+0x00000008u,c->r[3]); // 800ED388
  c->r[0]=0u+0x00000000u; // 800ED38C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED390
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED394
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED398
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED39C
  c->r[3]=c->r[3]+0x00000002u; // 800ED3A0
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED3A4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED3A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED3AC
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED3B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED3B4
  c->r[3]=c->r[3]+0x00000002u; // 800ED3B8
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED3BC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED3C0
  c->r[5]=R32(c->r[13]+0xFFFFA8B0u); // 800ED3C4
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED3C8
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED3CC
  cmps(c,0,(int32_t)c->r[5],0); // 800ED3D0
  c->r[4]=c->r[4]+0x00000002u; // 800ED3D4
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED3D8
  c->r[0]=c->r[3]+0x0000101Eu; // 800ED3DC
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED3E0
  if (crb(c,2)) { goto L_800ED3FC; } // 800ED3E4
  cmpu(c,0,c->r[5],0x00000001u); // 800ED3E8
  if (crb(c,2)) { goto L_800ED444; } // 800ED3EC
  cmpu(c,0,c->r[5],0x00000002u); // 800ED3F0
  if (crb(c,2)) { goto L_800ED48C; } // 800ED3F4
  goto L_800ED4D0; // 800ED3F8
L_800ED3FC:;
  c->r[0]=0u+0x00000001u; // 800ED3FC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED400
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 800ED404
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED408
  c->r[3]=c->r[3]+0x00000002u; // 800ED40C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED410
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED414
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED418
  c->r[3]=c->r[3]+0x00000002u; // 800ED41C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED420
  W16(c->r[3]+0x00000000u,c->r[28]); // 800ED424
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED428
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED42C
  c->r[5]=c->r[4]+0x00000002u; // 800ED430
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED434
  c->r[0]=c->r[3]+0x000002DDu; // 800ED438
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED43C
  goto L_800ED4D0; // 800ED440
L_800ED444:;
  c->r[0]=0u+0x00000002u; // 800ED444
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED448
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 800ED44C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED450
  c->r[3]=c->r[3]+0x00000002u; // 800ED454
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED458
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED45C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED460
  c->r[3]=c->r[3]+0x00000002u; // 800ED464
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED468
  W16(c->r[3]+0x00000000u,c->r[28]); // 800ED46C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED470
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED474
  c->r[5]=c->r[4]+0x00000002u; // 800ED478
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED47C
  c->r[0]=c->r[3]+0x0000033Du; // 800ED480
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED484
  goto L_800ED4D0; // 800ED488
L_800ED48C:;
  c->r[0]=0u+0x00000003u; // 800ED48C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED490
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 800ED494
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED498
  c->r[3]=c->r[3]+0x00000002u; // 800ED49C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED4A0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED4A4
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED4A8
  c->r[3]=c->r[3]+0x00000002u; // 800ED4AC
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED4B0
  W16(c->r[3]+0x00000000u,c->r[28]); // 800ED4B4
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED4B8
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED4BC
  c->r[5]=c->r[4]+0x00000002u; // 800ED4C0
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED4C4
  c->r[0]=c->r[3]+0x0000039Du; // 800ED4C8
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED4CC
L_800ED4D0:;
  c->lr=0x800ED4D4u; f_800EF2D0(c); // 800ED4D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800ED4D4
  c->r[0]=0u+0x00000004u; // 800ED4D8
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED4DC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED4E0
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED4E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED4E8
  c->r[3]=c->r[3]+0x00000002u; // 800ED4EC
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED4F0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED4F4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED4F8
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED4FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED500
  c->r[3]=c->r[3]+0x00000002u; // 800ED504
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED508
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED50C
  c->r[0]=R32(c->r[13]+0xFFFFA8B0u); // 800ED510
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED514
  cmpu(c,0,c->r[0],0x00000002u); // 800ED518
  c->r[5]=c->r[3]+0x00000002u; // 800ED51C
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED520
  if (!crb(c,2)) { goto L_800ED84C; } // 800ED524
  c->r[3]=c->r[1]+0x00000008u; // 800ED528
  c->lr=0x800ED530u; f_800ECB90(c); // 800ED52C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED530
  cmps(c,0,(int32_t)c->r[0],0); // 800ED534
  if (crb(c,2)) { goto L_800ED6B8; } // 800ED538
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED53C
  c->r[0]=0u+0x00000008u; // 800ED540
  c->r[3]=c->r[1]+0x00000008u; // 800ED544
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED548
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED54C
  c->r[0]=R16(c->r[13]+0xFFFFA89Cu); // 800ED550
  c->r[4]=c->r[4]+0x00000002u; // 800ED554
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED558
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED55C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED560
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED564
  c->r[4]=c->r[4]+0x00000002u; // 800ED568
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED56C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED570
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED574
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED578
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED57C
  c->r[4]=c->r[4]+0x00000002u; // 800ED580
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED584
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED588
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED58C
  c->r[5]=c->r[4]+0x00000002u; // 800ED590
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED594
  c->lr=0x800ED59Cu; f_800ECBF0(c); // 800ED598
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED59C
  c->r[3]=c->r[1]+0x00000008u; // 800ED5A0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED5A4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED5A8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED5AC
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED5B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED5B4
  c->r[4]=c->r[4]+0x00000002u; // 800ED5B8
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED5BC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED5C0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED5C4
  c->r[5]=c->r[4]+0x00000002u; // 800ED5C8
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED5CC
  c->lr=0x800ED5D4u; f_800ECBD0(c); // 800ED5D0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED5D4
  c->r[3]=c->r[1]+0x00000008u; // 800ED5D8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED5DC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED5E0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED5E4
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED5E8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED5EC
  c->r[4]=c->r[4]+0x00000002u; // 800ED5F0
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED5F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED5F8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED5FC
  c->r[5]=c->r[4]+0x00000002u; // 800ED600
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED604
  c->lr=0x800ED60Cu; f_800ECC10(c); // 800ED608
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED60C
  c->r[3]=c->r[1]+0x00000008u; // 800ED610
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED614
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED618
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED61C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED620
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED624
  c->r[4]=c->r[4]+0x00000002u; // 800ED628
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED62C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED630
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED634
  c->r[5]=c->r[4]+0x00000002u; // 800ED638
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED63C
  c->lr=0x800ED644u; f_800ECC30(c); // 800ED640
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED644
  c->r[3]=c->r[1]+0x00000008u; // 800ED648
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED64C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED650
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED654
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED658
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED65C
  c->r[4]=c->r[4]+0x00000002u; // 800ED660
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED664
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED668
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED66C
  c->r[5]=c->r[4]+0x00000002u; // 800ED670
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED674
  c->lr=0x800ED67Cu; f_800ECC50(c); // 800ED678
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED67C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED680
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED684
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED688
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED68C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED690
  c->r[3]=c->r[3]+0x00000002u; // 800ED694
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED698
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED69C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED6A0
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED6A4
  c->r[5]=c->r[4]+0x00000002u; // 800ED6A8
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED6AC
  c->r[0]=c->r[3]+0x00000BDCu; // 800ED6B0
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED6B4
L_800ED6B8:;
  c->r[3]=c->r[1]+0x00000008u; // 800ED6B8
  c->lr=0x800ED6C0u; f_800ECC70(c); // 800ED6BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED6C0
  cmps(c,0,(int32_t)c->r[0],0); // 800ED6C4
  if (crb(c,2)) { goto L_800EDA5C; } // 800ED6C8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED6CC
  c->r[0]=0u+0x00000009u; // 800ED6D0
  c->r[3]=c->r[1]+0x00000008u; // 800ED6D4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED6D8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED6DC
  c->r[0]=R16(c->r[13]+0xFFFFA89Au); // 800ED6E0
  c->r[4]=c->r[4]+0x00000002u; // 800ED6E4
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED6E8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED6EC
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED6F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED6F4
  c->r[4]=c->r[4]+0x00000002u; // 800ED6F8
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED6FC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED700
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED704
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED708
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED70C
  c->r[4]=c->r[4]+0x00000002u; // 800ED710
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED714
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED718
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED71C
  c->r[5]=c->r[4]+0x00000002u; // 800ED720
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED724
  c->lr=0x800ED72Cu; f_800ECCD0(c); // 800ED728
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED72C
  c->r[3]=c->r[1]+0x00000008u; // 800ED730
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED734
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED738
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED73C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED740
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED744
  c->r[4]=c->r[4]+0x00000002u; // 800ED748
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED74C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED750
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED754
  c->r[5]=c->r[4]+0x00000002u; // 800ED758
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED75C
  c->lr=0x800ED764u; f_800ECCB0(c); // 800ED760
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED764
  c->r[3]=c->r[1]+0x00000008u; // 800ED768
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED76C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED770
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED774
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED778
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED77C
  c->r[4]=c->r[4]+0x00000002u; // 800ED780
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED784
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED788
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED78C
  c->r[5]=c->r[4]+0x00000002u; // 800ED790
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED794
  c->lr=0x800ED79Cu; f_800ECCF0(c); // 800ED798
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED79C
  c->r[3]=c->r[1]+0x00000008u; // 800ED7A0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED7A4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED7A8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED7AC
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED7B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED7B4
  c->r[4]=c->r[4]+0x00000002u; // 800ED7B8
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED7BC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED7C0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED7C4
  c->r[5]=c->r[4]+0x00000002u; // 800ED7C8
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED7CC
  c->lr=0x800ED7D4u; f_800ECD10(c); // 800ED7D0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED7D4
  c->r[3]=c->r[1]+0x00000008u; // 800ED7D8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED7DC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED7E0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED7E4
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED7E8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED7EC
  c->r[4]=c->r[4]+0x00000002u; // 800ED7F0
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED7F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED7F8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED7FC
  c->r[5]=c->r[4]+0x00000002u; // 800ED800
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED804
  c->lr=0x800ED80Cu; f_800ECD30(c); // 800ED808
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED80C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED810
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED814
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED818
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED81C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED820
  c->r[3]=c->r[3]+0x00000002u; // 800ED824
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED828
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED82C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED830
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED834
  c->r[5]=c->r[4]+0x00000002u; // 800ED838
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED83C
  c->r[0]=c->r[3]+0x00000BDCu; // 800ED840
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED844
  goto L_800EDA5C; // 800ED848
L_800ED84C:;
  c->r[3]=c->r[1]+0x00000008u; // 800ED84C
  c->lr=0x800ED854u; f_800ECB90(c); // 800ED850
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED854
  cmps(c,0,(int32_t)c->r[0],0); // 800ED858
  if (crb(c,2)) { goto L_800ED8FC; } // 800ED85C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED860
  c->r[0]=0u+0x00000005u; // 800ED864
  c->r[3]=c->r[1]+0x00000008u; // 800ED868
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED86C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED870
  c->r[0]=R16(c->r[13]+0xFFFFA89Cu); // 800ED874
  c->r[4]=c->r[4]+0x00000002u; // 800ED878
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED87C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED880
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED884
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED888
  c->r[4]=c->r[4]+0x00000002u; // 800ED88C
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED890
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED894
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED898
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED89C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED8A0
  c->r[4]=c->r[4]+0x00000002u; // 800ED8A4
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED8A8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED8AC
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED8B0
  c->r[5]=c->r[4]+0x00000002u; // 800ED8B4
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED8B8
  c->lr=0x800ED8C0u; f_800ECBD0(c); // 800ED8BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED8C0
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED8C4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED8C8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED8CC
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED8D0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED8D4
  c->r[3]=c->r[3]+0x00000002u; // 800ED8D8
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED8DC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED8E0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED8E4
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED8E8
  c->r[5]=c->r[4]+0x00000002u; // 800ED8EC
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED8F0
  c->r[0]=c->r[3]+0x000008BBu; // 800ED8F4
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED8F8
L_800ED8FC:;
  c->r[3]=c->r[1]+0x00000008u; // 800ED8FC
  c->lr=0x800ED904u; f_800ECC70(c); // 800ED900
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED904
  cmps(c,0,(int32_t)c->r[0],0); // 800ED908
  if (crb(c,2)) { goto L_800ED9AC; } // 800ED90C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED910
  c->r[0]=0u+0x00000006u; // 800ED914
  c->r[3]=c->r[1]+0x00000008u; // 800ED918
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED91C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED920
  c->r[0]=R16(c->r[13]+0xFFFFA89Au); // 800ED924
  c->r[4]=c->r[4]+0x00000002u; // 800ED928
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED92C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED930
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED934
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED938
  c->r[4]=c->r[4]+0x00000002u; // 800ED93C
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED940
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED944
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED948
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED94C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED950
  c->r[4]=c->r[4]+0x00000002u; // 800ED954
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED958
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED95C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED960
  c->r[5]=c->r[4]+0x00000002u; // 800ED964
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED968
  c->lr=0x800ED970u; f_800ECCB0(c); // 800ED96C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED970
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED974
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED978
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED97C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800ED980
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED984
  c->r[3]=c->r[3]+0x00000002u; // 800ED988
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800ED98C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800ED990
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED994
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800ED998
  c->r[5]=c->r[4]+0x00000002u; // 800ED99C
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800ED9A0
  c->r[0]=c->r[3]+0x000008BBu; // 800ED9A4
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800ED9A8
L_800ED9AC:;
  c->r[3]=c->r[1]+0x00000008u; // 800ED9AC
  c->lr=0x800ED9B4u; f_800ECD50(c); // 800ED9B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED9B4
  cmps(c,0,(int32_t)c->r[0],0); // 800ED9B8
  if (crb(c,2)) { goto L_800EDA5C; } // 800ED9BC
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED9C0
  c->r[0]=0u+0x00000007u; // 800ED9C4
  c->r[3]=c->r[1]+0x00000008u; // 800ED9C8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED9CC
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED9D0
  c->r[0]=R16(c->r[13]+0xFFFFA898u); // 800ED9D4
  c->r[4]=c->r[4]+0x00000002u; // 800ED9D8
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED9DC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED9E0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED9E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ED9E8
  c->r[4]=c->r[4]+0x00000002u; // 800ED9EC
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800ED9F0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800ED9F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800ED9F8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800ED9FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800EDA00
  c->r[4]=c->r[4]+0x00000002u; // 800EDA04
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800EDA08
  W16(c->r[4]+0x00000000u,c->r[0]); // 800EDA0C
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA10
  c->r[5]=c->r[4]+0x00000002u; // 800EDA14
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDA18
  c->lr=0x800EDA20u; f_800ECD90(c); // 800EDA1C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800EDA20
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA24
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800EDA28
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDA2C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA30
  c->r[0]=R32(c->r[1]+0x00000008u); // 800EDA34
  c->r[3]=c->r[3]+0x00000002u; // 800EDA38
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDA3C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDA40
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA44
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800EDA48
  c->r[5]=c->r[4]+0x00000002u; // 800EDA4C
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDA50
  c->r[0]=c->r[3]+0x000008BBu; // 800EDA54
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800EDA58
L_800EDA5C:;
  c->r[0]=R32(c->r[13]+0xFFFFA8A8u); // 800EDA5C
  cmps(c,0,(int32_t)c->r[0],0); // 800EDA60
  if (crb(c,2)) { goto L_800EDAE4; } // 800EDA64
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA68
  c->r[0]=0u+0x0000000Au; // 800EDA6C
  c->r[3]=0u+0x00010000u; // 800EDA70
  W16(c->r[4]+0x00000000u,c->r[0]); // 800EDA74
  c->r[0]=c->r[3]+0xFFFF8000u; // 800EDA78
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA7C
  c->r[3]=c->r[3]+0x00000002u; // 800EDA80
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDA84
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDA88
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDA8C
  c->r[0]=R16(c->r[13]+0xFFFFA8A0u); // 800EDA90
  c->r[3]=c->r[3]+0x00000002u; // 800EDA94
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDA98
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDA9C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDAA0
  c->r[0]=R32(c->r[13]+0xFFFFA8A4u); // 800EDAA4
  c->r[3]=c->r[3]+0x00000002u; // 800EDAA8
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDAAC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800EDAB0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDAB4
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDAB8
  c->r[0]=R32(c->r[13]+0xFFFFA8A4u); // 800EDABC
  c->r[3]=c->r[3]+0x00000002u; // 800EDAC0
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDAC4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDAC8
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDACC
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800EDAD0
  c->r[5]=c->r[4]+0x00000002u; // 800EDAD4
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDAD8
  c->r[0]=c->r[3]+0x0000073Au; // 800EDADC
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800EDAE0
L_800EDAE4:;
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDAE4
  c->r[0]=0u+0x0000000Du; // 800EDAE8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDAEC
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDAF0
  c->r[3]=c->r[3]+0x00000002u; // 800EDAF4
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDAF8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800EDAFC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800EDB00
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB04
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB08
  c->r[3]=c->r[3]+0x00000002u; // 800EDB0C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB10
  c->r[0]=R32(c->r[30]+0x00000000u); // 800EDB14
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB18
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB1C
  c->r[3]=c->r[3]+0x00000002u; // 800EDB20
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB24
  c->r[0]=R32(c->r[30]+0x00000004u); // 800EDB28
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800EDB2C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB30
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB34
  c->r[3]=c->r[3]+0x00000002u; // 800EDB38
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB3C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800EDB40
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB44
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB48
  c->r[3]=c->r[3]+0x00000002u; // 800EDB4C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB50
  c->r[0]=R32(c->r[30]+0x00000008u); // 800EDB54
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800EDB58
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB5C
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB60
  c->r[3]=c->r[3]+0x00000002u; // 800EDB64
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB68
  c->r[0]=R32(c->r[30]+0x00000008u); // 800EDB6C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB70
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB74
  c->r[3]=c->r[3]+0x00000002u; // 800EDB78
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB7C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800EDB80
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800EDB84
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB88
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDB8C
  c->r[3]=c->r[3]+0x00000002u; // 800EDB90
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDB94
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800EDB98
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDB9C
  c->r[0]=R32(c->r[13]+0xFFFFA8B0u); // 800EDBA0
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDBA4
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800EDBA8
  cmpu(c,0,c->r[0],0x00000002u); // 800EDBAC
  c->r[4]=c->r[4]+0x00000002u; // 800EDBB0
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800EDBB4
  c->r[0]=c->r[3]+0x00000199u; // 800EDBB8
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800EDBBC
  if (!crb(c,2)) { goto L_800EDC44; } // 800EDBC0
  c->r[0]=0u+0x0000000Cu; // 800EDBC4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800EDBC8
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 800EDBCC
  c->r[5]=R32(c->r[13]+0xFFFFA8B4u); // 800EDBD0
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 800EDBD4
  c->r[4]=R16(c->r[13]+0xFFFFA89Eu); // 800EDBD8
  c->r[5]=c->r[5]+0x00000002u; // 800EDBDC
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDBE0
  W16(c->r[5]+0x00000000u,c->r[4]); // 800EDBE4
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDBE8
  c->r[4]=c->r[4]+0x00000002u; // 800EDBEC
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800EDBF0
  W16(c->r[4]+0x00000000u,c->r[3]); // 800EDBF4
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDBF8
  c->r[3]=c->r[3]+0x00000002u; // 800EDBFC
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDC00
  W16(c->r[3]+0x00000000u,c->r[28]); // 800EDC04
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC08
  c->r[3]=c->r[3]+0x00000002u; // 800EDC0C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDC10
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDC14
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC18
  c->r[3]=c->r[3]+0x00000002u; // 800EDC1C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDC20
  W16(c->r[3]+0x00000000u,c->r[29]); // 800EDC24
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC28
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800EDC2C
  c->r[5]=c->r[4]+0x00000002u; // 800EDC30
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDC34
  c->r[0]=c->r[3]+0x000004ABu; // 800EDC38
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800EDC3C
  goto L_800EDCC0; // 800EDC40
L_800EDC44:;
  c->r[0]=0u+0x0000000Bu; // 800EDC44
  W16(c->r[4]+0x00000000u,c->r[0]); // 800EDC48
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 800EDC4C
  c->r[5]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC50
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 800EDC54
  c->r[4]=R16(c->r[13]+0xFFFFA89Eu); // 800EDC58
  c->r[5]=c->r[5]+0x00000002u; // 800EDC5C
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDC60
  W16(c->r[5]+0x00000000u,c->r[4]); // 800EDC64
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC68
  c->r[4]=c->r[4]+0x00000002u; // 800EDC6C
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 800EDC70
  W16(c->r[4]+0x00000000u,c->r[3]); // 800EDC74
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC78
  c->r[3]=c->r[3]+0x00000002u; // 800EDC7C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDC80
  W16(c->r[3]+0x00000000u,c->r[28]); // 800EDC84
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC88
  c->r[3]=c->r[3]+0x00000002u; // 800EDC8C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDC90
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EDC94
  c->r[3]=R32(c->r[13]+0xFFFFA8B4u); // 800EDC98
  c->r[3]=c->r[3]+0x00000002u; // 800EDC9C
  W32(c->r[13]+0xFFFFA8B4u,c->r[3]); // 800EDCA0
  W16(c->r[3]+0x00000000u,c->r[29]); // 800EDCA4
  c->r[4]=R32(c->r[13]+0xFFFFA8B4u); // 800EDCA8
  c->r[3]=R32(c->r[13]+0xFFFFA8ACu); // 800EDCAC
  c->r[5]=c->r[4]+0x00000002u; // 800EDCB0
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDCB4
  c->r[0]=c->r[3]+0x00000494u; // 800EDCB8
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800EDCBC
L_800EDCC0:;
  c->r[0]=0u+0x0000000Eu; // 800EDCC0
  W16(c->r[5]+0x00000000u,c->r[0]); // 800EDCC4
  c->r[3]=c->r[31]|c->r[31]; // 800EDCC8
  c->r[4]=0u+0x00000080u; // 800EDCCC
  c->r[5]=R32(c->r[13]+0xFFFFA8B4u); // 800EDCD0
  c->r[6]=R32(c->r[13]+0xFFFFA8ACu); // 800EDCD4
  c->r[5]=c->r[5]+0x00000002u; // 800EDCD8
  W32(c->r[13]+0xFFFFA8B4u,c->r[5]); // 800EDCDC
  c->r[0]=c->r[6]+0x0000001Eu; // 800EDCE0
  W32(c->r[13]+0xFFFFA8ACu,c->r[0]); // 800EDCE4
  c->lr=0x800EDCECu; f_800C7780(c); // 800EDCE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDCEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDCF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDCF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EDCF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EDCFC
  c->lr=c->r[0]; // 800EDD00
  c->r[1]=c->r[1]+0x00000020u; // 800EDD04
  return; // 800EDD08
}

// __AXClInit
void f_800EDD10(Ctx* __restrict c) {
  trace_call(0x800EDD10u);
  c->r[6]=0u+0x802F0000u; // 800EDD10
  c->r[4]=0u+0x802B0000u; // 800EDD14
  c->r[7]=0u+0x00000000u; // 800EDD18
  c->r[3]=0u+0x00010000u; // 800EDD1C
  c->r[0]=c->r[3]+0xFFFF8000u; // 800EDD20
  c->r[6]=c->r[6]+0x00003360u; // 800EDD24
  c->r[4]=c->r[4]+0x000015C0u; // 800EDD28
  c->r[5]=0u+0x00000001u; // 800EDD2C
  c->r[3]=0u+0x0000000Au; // 800EDD30
  W32(c->r[13]+0xFFFFA8B0u,c->r[7]); // 800EDD34
  W32(c->r[13]+0xFFFFA8B8u,c->r[7]); // 800EDD38
  W32(c->r[13]+0xFFFFA8B4u,c->r[6]); // 800EDD3C
  W32(c->r[13]+0xFFFFA8A8u,c->r[5]); // 800EDD40
  W32(c->r[13]+0xFFFFA8A4u,c->r[4]); // 800EDD44
  W16(c->r[13]+0xFFFFA8A0u,c->r[3]); // 800EDD48
  W16(c->r[13]+0xFFFFA89Eu,c->r[0]); // 800EDD4C
  W16(c->r[13]+0xFFFFA89Cu,c->r[0]); // 800EDD50
  W16(c->r[13]+0xFFFFA89Au,c->r[0]); // 800EDD54
  W16(c->r[13]+0xFFFFA898u,c->r[0]); // 800EDD58
  return; // 800EDD5C
}

// AXSetMode
void f_800EDD60(Ctx* __restrict c) {
  trace_call(0x800EDD60u);
  W32(c->r[13]+0xFFFFA8B0u,c->r[3]); // 800EDD60
  return; // 800EDD64
}

// AXGetMode
void f_800EDD70(Ctx* __restrict c) {
  trace_call(0x800EDD70u);
  c->r[3]=R16(c->r[13]+0xFFFFA89Cu); // 800EDD70
  return; // 800EDD74
}

// AXSetCompressor
void f_800EDD80(Ctx* __restrict c) {
  trace_call(0x800EDD80u);
  c->r[3]=R16(c->r[13]+0xFFFFA89Au); // 800EDD80
  return; // 800EDD84
}

// AXGetAuxAReturnVolume
void f_800EDD90(Ctx* __restrict c) {
  trace_call(0x800EDD90u);
  c->r[3]=R16(c->r[13]+0xFFFFA898u); // 800EDD90
  return; // 800EDD94
}

// AXSetMasterVolume
void f_800EDDA0(Ctx* __restrict c) {
  trace_call(0x800EDDA0u);
  cmpu(c,0,c->r[3],0x00008000u); // 800EDDA0
  if (!crb(c,1)) { goto L_800EDDB0; } // 800EDDA4
  c->r[3]=0u+0x00010000u; // 800EDDA8
  c->r[3]=c->r[3]+0xFFFF8000u; // 800EDDAC
L_800EDDB0:;
  W16(c->r[13]+0xFFFFA89Eu,c->r[3]); // 800EDDB0
  return; // 800EDDB4
}

// AXSetAuxAReturnVolume
void f_800EDDC0(Ctx* __restrict c) {
  trace_call(0x800EDDC0u);
  W16(c->r[13]+0xFFFFA89Cu,c->r[3]); // 800EDDC0
  return; // 800EDDC4
}

// AXSetAuxBReturnVolume
void f_800EDDD0(Ctx* __restrict c) {
  trace_call(0x800EDDD0u);
  W16(c->r[13]+0xFFFFA89Au,c->r[3]); // 800EDDD0
  return; // 800EDDD4
}

// AXSetAuxCReturnVolume
void f_800EDDE0(Ctx* __restrict c) {
  trace_call(0x800EDDE0u);
  W16(c->r[13]+0xFFFFA898u,c->r[3]); // 800EDDE0
  return; // 800EDDE4
}

// __AXOutNewFrame
void f_800EDDF0(Ctx* __restrict c) {
  trace_call(0x800EDDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDDF0
  c->r[0]=c->lr; // 800EDDF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EDDF8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EDDFC
  c->r[31]=0u+0x802F0000u; // 800EDE00
  c->r[31]=c->r[31]+0x00003460u; // 800EDE04
  W32(c->r[1]+0x00000028u,c->r[30]); // 800EDE08
  W32(c->r[1]+0x00000024u,c->r[29]); // 800EDE0C
  c->lr=0x800EDE14u; f_800D0510(c); // 800EDE10
  c->r[5]=c->r[31]+0x00000000u; // 800EDE14
  W32(c->r[31]+0x00000000u,c->r[3]); // 800EDE18
  W32(c->r[5]+0x00000004u,c->r[4]); // 800EDE1C
  c->lr=0x800EDE24u; f_800EC050(c); // 800EDE20
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800EDE24
  c->r[0]=R32(c->r[13]+0xFFFFA8D0u); // 800EDE28
  c->r[3]=addc(c,~c->r[3],0x00000060u,1); // 800EDE2C
  cmpu(c,0,c->r[0],0x00000001u); // 800EDE30
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)3797); // 800EDE34
  if (!crb(c,2)) { goto L_800EDE48; } // 800EDE38
  c->r[3]=0u+0x00000000u; // 800EDE3C
  c->lr=0x800EDE44u; f_800EEFC0(c); // 800EDE40
  goto L_800EDE50; // 800EDE44
L_800EDE48:;
  c->r[3]=0u+0x00005F50u; // 800EDE48
  c->lr=0x800EDE50u; f_800EEFC0(c); // 800EDE4C
L_800EDE50:;
  c->lr=0x800EDE54u; f_800EE720(c); // 800EDE50
  c->lr=0x800EDE58u; f_800ED320(c); // 800EDE54
  c->r[4]=0u+0xBABE0000u; // 800EDE58
  c->r[29]=c->r[3]|c->r[3]; // 800EDE5C
  c->r[3]=c->r[4]+0x00000080u; // 800EDE60
  c->lr=0x800EDE68u; f_800F2190(c); // 800EDE64
L_800EDE68:;
  c->lr=0x800EDE6Cu; f_800F2150(c); // 800EDE68
  cmps(c,0,(int32_t)c->r[3],0); // 800EDE6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800EDE68; } // 800EDE70
  c->r[3]=c->r[29]|c->r[29]; // 800EDE74
  c->lr=0x800EDE7Cu; f_800F2190(c); // 800EDE78
L_800EDE7C:;
  c->lr=0x800EDE80u; f_800F2150(c); // 800EDE7C
  cmps(c,0,(int32_t)c->r[3],0); // 800EDE80
  if (!crb(c,2)) { IRQCHK(c); goto L_800EDE7C; } // 800EDE84
  c->lr=0x800EDE8Cu; f_800EC5A0(c); // 800EDE88
  c->lr=0x800EDE90u; f_800D0510(c); // 800EDE8C
  c->r[29]=c->r[31]+0x00000000u; // 800EDE90
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 800EDE94
  W32(c->r[29]+0x00000008u,c->r[3]); // 800EDE98
  c->lr=0x800EDEA0u; f_800ECDB0(c); // 800EDE9C
  c->lr=0x800EDEA4u; f_800D0510(c); // 800EDEA0
  W32(c->r[29]+0x00000014u,c->r[4]); // 800EDEA4
  W32(c->r[29]+0x00000010u,c->r[3]); // 800EDEA8
  c->lr=0x800EDEB0u; f_800D0510(c); // 800EDEAC
  c->r[12]=R32(c->r[13]+0xFFFFA8ECu); // 800EDEB0
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 800EDEB4
  cmps(c,0,(int32_t)c->r[12],0); // 800EDEB8
  W32(c->r[29]+0x00000018u,c->r[3]); // 800EDEBC
  if (crb(c,2)) { goto L_800EDECC; } // 800EDEC0
  c->ctr=c->r[12]; // 800EDEC4
  if (true) { c->lr=0x800EDECCu; dispatch(c,c->ctr); } // 800EDEC8
L_800EDECC:;
  c->lr=0x800EDED0u; f_800D0510(c); // 800EDECC
  c->r[7]=R32(c->r[13]+0xFFFFA8C8u); // 800EDED0
  c->r[8]=c->r[31]+0x00000000u; // 800EDED4
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EDED8
  c->r[5]=c->r[31]+0x00000040u; // 800EDEDC
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800EDEE0
  c->r[7]=c->r[7]+0x00000012u; // 800EDEE4
  c->r[6]=c->r[5]+c->r[6]; // 800EDEE8
  W32(c->r[8]+0x00000024u,c->r[4]); // 800EDEEC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800EDEF0
  c->r[5]=c->r[6]+0x00000168u; // 800EDEF4
  c->r[4]=c->r[6]+0x000002D0u; // 800EDEF8
  c->r[0]=c->r[6]+0x00000438u; // 800EDEFC
  W32(c->r[8]+0x00000020u,c->r[3]); // 800EDF00
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EDF04
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800EDF08
  W32(c->r[1]+0x00000010u,c->r[4]); // 800EDF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDF10
  if (crb(c,0)) { goto L_800EDF1C; } // 800EDF14
  c->r[7]=0u+0x00000000u; // 800EDF18
L_800EDF1C:;
  c->r[4]=R32(c->r[13]+0xFFFFA8C4u); // 800EDF1C
  c->r[3]=R32(c->r[13]+0xFFFFA8C8u); // 800EDF20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800EDF24
  if (crb(c,0)) { goto L_800EDF3C; } // 800EDF28
  c->r[0]=c->r[3]+0x00000012u; // 800EDF2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800EDF30
  if (!crb(c,0)) { goto L_800EDF3C; } // 800EDF34
  W32(c->r[13]+0xFFFFA8C4u,c->r[7]); // 800EDF38
L_800EDF3C:;
  c->r[0]=R32(c->r[13]+0xFFFFA8F8u); // 800EDF3C
  c->r[29]=c->r[31]+0x000008E0u; // 800EDF40
  W32(c->r[13]+0xFFFFA8C8u,c->r[7]); // 800EDF44
  c->r[3]=c->r[31]+0x000005E0u; // 800EDF48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 800EDF4C
  c->r[5]=c->r[1]+0x00000008u; // 800EDF50
  c->r[4]=c->r[29]+c->r[0]; // 800EDF54
  c->lr=0x800EDF5Cu; f_800ED350(c); // 800EDF58
  c->r[0]=R32(c->r[13]+0xFFFFA8D0u); // 800EDF5C
  c->r[3]=R32(c->r[13]+0xFFFFA8F8u); // 800EDF60
  cmpu(c,0,c->r[0],0x00000001u); // 800EDF64
  c->r[0]=c->r[3]+0x00000001u; // 800EDF68
  W32(c->r[13]+0xFFFFA8F8u,c->r[0]); // 800EDF6C
  if (!crb(c,2)) { goto L_800EDF98; } // 800EDF70
  c->r[3]=0u+0xAAAB0000u; // 800EDF74
  c->r[4]=R32(c->r[13]+0xFFFFA8F8u); // 800EDF78
  c->r[0]=c->r[3]+0xFFFFAAABu; // 800EDF7C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 800EDF80
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800EDF84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800EDF88
  c->r[0]=c->r[4]-c->r[0]; // 800EDF8C
  W32(c->r[13]+0xFFFFA8F8u,c->r[0]); // 800EDF90
  goto L_800EDFB8; // 800EDF94
L_800EDF98:;
  c->r[0]=R32(c->r[13]+0xFFFFA8F8u); // 800EDF98
  c->r[4]=0u+0x00000180u; // 800EDF9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800EDFA0
  W32(c->r[13]+0xFFFFA8F8u,c->r[0]); // 800EDFA4
  c->r[0]=R32(c->r[13]+0xFFFFA8F8u); // 800EDFA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 800EDFAC
  c->r[3]=c->r[29]+c->r[0]; // 800EDFB0
  c->lr=0x800EDFB8u; f_800EBFB0(c); // 800EDFB4
L_800EDFB8:;
  c->lr=0x800EDFBCu; f_800D0510(c); // 800EDFB8
  c->r[29]=c->r[31]+0x00000000u; // 800EDFBC
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 800EDFC0
  W32(c->r[29]+0x00000028u,c->r[3]); // 800EDFC4
  c->lr=0x800EDFCCu; f_800EEA60(c); // 800EDFC8
  W32(c->r[29]+0x00000030u,c->r[3]); // 800EDFCC
  c->lr=0x800EDFD4u; f_800EF810(c); // 800EDFD0
  cmps(c,0,(int32_t)c->r[3],0); // 800EDFD4
  if (crb(c,2)) { goto L_800EE030; } // 800EDFD8
  c->r[0]=0u+0x00000007u; // 800EDFDC
  c->ctr=c->r[0]; // 800EDFE0
L_800EDFE4:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 800EDFE4
  W8(c->r[3]+0x00000000u,c->r[0]); // 800EDFE8
  c->r[0]=R8(c->r[29]+0x00000001u); // 800EDFEC
  W8(c->r[3]+0x00000001u,c->r[0]); // 800EDFF0
  c->r[0]=R8(c->r[29]+0x00000002u); // 800EDFF4
  W8(c->r[3]+0x00000002u,c->r[0]); // 800EDFF8
  c->r[0]=R8(c->r[29]+0x00000003u); // 800EDFFC
  W8(c->r[3]+0x00000003u,c->r[0]); // 800EE000
  c->r[0]=R8(c->r[29]+0x00000004u); // 800EE004
  W8(c->r[3]+0x00000004u,c->r[0]); // 800EE008
  c->r[0]=R8(c->r[29]+0x00000005u); // 800EE00C
  W8(c->r[3]+0x00000005u,c->r[0]); // 800EE010
  c->r[0]=R8(c->r[29]+0x00000006u); // 800EE014
  W8(c->r[3]+0x00000006u,c->r[0]); // 800EE018
  c->r[0]=R8(c->r[29]+0x00000007u); // 800EE01C
  c->r[29]=c->r[29]+0x00000008u; // 800EE020
  W8(c->r[3]+0x00000007u,c->r[0]); // 800EE024
  c->r[3]=c->r[3]+0x00000008u; // 800EE028
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDFE4; } // 800EE02C
L_800EE030:;
  c->r[3]=c->r[30]|c->r[30]; // 800EE030
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EE034
  c->r[30]=R32(c->r[1]+0x00000028u); // 800EE038
  c->r[29]=R32(c->r[1]+0x00000024u); // 800EE03C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE040
  c->lr=c->r[0]; // 800EE044
  c->r[1]=c->r[1]+0x00000030u; // 800EE048
  return; // 800EE04C
}

// __AXOutAiCallback
void f_800EE050(Ctx* __restrict c) {
  trace_call(0x800EE050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE050
  c->r[0]=c->lr; // 800EE054
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE058
  c->r[0]=R32(c->r[13]+0xFFFFA8E4u); // 800EE05C
  cmps(c,0,(int32_t)c->r[0],1); // 800EE060
  if (crb(c,2)) { goto L_800EE0F0; } // 800EE064
  c->r[0]=R32(c->r[13]+0xFFFFA8F0u); // 800EE068
  cmpu(c,0,c->r[0],0x00000001u); // 800EE06C
  if (!crb(c,2)) { goto L_800EE084; } // 800EE070
  c->r[0]=0u+0x00000000u; // 800EE074
  W32(c->r[13]+0xFFFFA8F0u,c->r[0]); // 800EE078
  c->lr=0x800EE080u; f_800EDDF0(c); // 800EE07C
  goto L_800EE098; // 800EE080
L_800EE084:;
  c->r[0]=0u+0x00000002u; // 800EE084
  c->r[3]=0u+0x802F0000u; // 800EE088
  W32(c->r[13]+0xFFFFA8F0u,c->r[0]); // 800EE08C
  c->r[3]=c->r[3]+0x000041C0u; // 800EE090
  c->lr=0x800EE098u; f_800F22F0(c); // 800EE094
L_800EE098:;
  c->r[0]=R32(c->r[13]+0xFFFFA8D0u); // 800EE098
  cmpu(c,0,c->r[0],0x00000001u); // 800EE09C
  if (!crb(c,2)) { goto L_800EE0F0; } // 800EE0A0
  c->r[0]=R32(c->r[13]+0xFFFFA8F4u); // 800EE0A4
  c->r[3]=0u+0x802F0000u; // 800EE0A8
  c->r[3]=c->r[3]+0x00003D40u; // 800EE0AC
  c->r[4]=0u+0x00000180u; // 800EE0B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 800EE0B4
  c->r[3]=c->r[3]+c->r[0]; // 800EE0B8
  c->lr=0x800EE0C0u; f_800EBFB0(c); // 800EE0BC
  c->r[4]=R32(c->r[13]+0xFFFFA8F4u); // 800EE0C0
  c->r[3]=0u+0xAAAB0000u; // 800EE0C4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 800EE0C8
  c->r[0]=R32(c->r[13]+0xFFFFA8F8u); // 800EE0CC
  c->r[4]=c->r[4]+0x00000001u; // 800EE0D0
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800EE0D4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800EE0D8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)3); // 800EE0DC
  c->r[4]=c->r[4]-c->r[3]; // 800EE0E0
  cmpu(c,0,c->r[4],c->r[0]); // 800EE0E4
  if (crb(c,2)) { goto L_800EE0F0; } // 800EE0E8
  W32(c->r[13]+0xFFFFA8F4u,c->r[4]); // 800EE0EC
L_800EE0F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE0F0
  c->lr=c->r[0]; // 800EE0F4
  c->r[1]=c->r[1]+0x00000010u; // 800EE0F8
  return; // 800EE0FC
}

// __AXDSPInitCallback
void f_800EE100(Ctx* __restrict c) {
  trace_call(0x800EE100u);
  c->r[0]=0u+0x00000001u; // 800EE100
  W32(c->r[13]+0xFFFFA8E8u,c->r[0]); // 800EE104
  return; // 800EE108
}

// __AXDSPResumeCallback
void f_800EE110(Ctx* __restrict c) {
  trace_call(0x800EE110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE110
  c->r[0]=c->lr; // 800EE114
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE118
  c->r[0]=R32(c->r[13]+0xFFFFA8F0u); // 800EE11C
  cmpu(c,0,c->r[0],0x00000002u); // 800EE120
  if (!crb(c,2)) { goto L_800EE14C; } // 800EE124
  c->r[0]=0u+0x00000000u; // 800EE128
  W32(c->r[13]+0xFFFFA8F0u,c->r[0]); // 800EE12C
  c->lr=0x800EE134u; f_800EDDF0(c); // 800EE130
  c->r[12]=R32(c->r[13]+0xFFFFA8C0u); // 800EE134
  cmps(c,0,(int32_t)c->r[12],0); // 800EE138
  if (crb(c,2)) { goto L_800EE154; } // 800EE13C
  c->ctr=c->r[12]; // 800EE140
  if (true) { c->lr=0x800EE148u; dispatch(c,c->ctr); } // 800EE144
  goto L_800EE154; // 800EE148
L_800EE14C:;
  c->r[0]=0u+0x00000001u; // 800EE14C
  W32(c->r[13]+0xFFFFA8F0u,c->r[0]); // 800EE150
L_800EE154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE154
  c->lr=c->r[0]; // 800EE158
  c->r[1]=c->r[1]+0x00000010u; // 800EE15C
  return; // 800EE160
}

// __AXDSPDoneCallback
void f_800EE170(Ctx* __restrict c) {
  trace_call(0x800EE170u);
  c->r[0]=0u+0x00000001u; // 800EE170
  W32(c->r[13]+0xFFFFA8E4u,c->r[0]); // 800EE174
  c->r[3]=c->r[13]+0xFFFFA8D8u; // 800EE178
  f_800CFAD0(c); return; // 800EE17C
}

// __AXDSPRequestCallback
void f_800EE180(Ctx* __restrict c) {
  trace_call(0x800EE180u);
  return; // 800EE180
}

// __AXOutInitDSP
void f_800EE190(Ctx* __restrict c) {
  stub_log(0x800EE190u);  return;
}

// __AXOutInit
void f_800EE280(Ctx* __restrict c) {
  trace_call(0x800EE280u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE280
  c->r[0]=c->lr; // 800EE284
  c->r[4]=0u+0x00000000u; // 800EE288
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE28C
  c->r[0]=0u+0x00000020u; // 800EE290
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EE294
  c->r[31]=0u+0x802F0000u; // 800EE298
  c->r[31]=c->r[31]+0x00003460u; // 800EE29C
  W32(c->r[13]+0xFFFFA8F8u,c->r[4]); // 800EE2A0
  c->r[5]=c->r[31]+0x000008E0u; // 800EE2A4
  W32(c->r[13]+0xFFFFA8F4u,c->r[4]); // 800EE2A8
  W32(c->r[13]+0xFFFFA8D0u,c->r[3]); // 800EE2AC
  W32(c->r[13]+0xFFFFA8E0u,c->r[4]); // 800EE2B0
  c->ctr=c->r[0]; // 800EE2B4
L_800EE2B8:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 800EE2B8
  W32(c->r[5]+0x00000004u,c->r[4]); // 800EE2BC
  W32(c->r[5]+0x00000008u,c->r[4]); // 800EE2C0
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800EE2C4
  W32(c->r[5]+0x00000010u,c->r[4]); // 800EE2C8
  W32(c->r[5]+0x00000014u,c->r[4]); // 800EE2CC
  W32(c->r[5]+0x00000018u,c->r[4]); // 800EE2D0
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 800EE2D4
  W32(c->r[5]+0x00000020u,c->r[4]); // 800EE2D8
  c->r[5]=c->r[5]+0x00000024u; // 800EE2DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE2B8; } // 800EE2E0
  c->r[3]=c->r[31]+0x000008E0u; // 800EE2E4
  c->r[4]=0u+0x00000480u; // 800EE2E8
  c->lr=0x800EE2F0u; f_800C7780(c); // 800EE2EC
  c->r[0]=0u+0x00000018u; // 800EE2F0
  c->r[4]=c->r[31]+0x000005E0u; // 800EE2F4
  c->r[3]=0u+0x00000000u; // 800EE2F8
  c->ctr=c->r[0]; // 800EE2FC
L_800EE300:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EE300
  W32(c->r[4]+0x00000004u,c->r[3]); // 800EE304
  W32(c->r[4]+0x00000008u,c->r[3]); // 800EE308
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800EE30C
  W32(c->r[4]+0x00000010u,c->r[3]); // 800EE310
  W32(c->r[4]+0x00000014u,c->r[3]); // 800EE314
  W32(c->r[4]+0x00000018u,c->r[3]); // 800EE318
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800EE31C
  c->r[4]=c->r[4]+0x00000020u; // 800EE320
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE300; } // 800EE324
  c->r[3]=c->r[31]+0x000005E0u; // 800EE328
  c->r[4]=0u+0x00000300u; // 800EE32C
  c->lr=0x800EE334u; f_800C7780(c); // 800EE330
  c->r[0]=0u+0x00000024u; // 800EE334
  c->r[4]=c->r[31]+0x00000040u; // 800EE338
  c->r[3]=0u+0x00000000u; // 800EE33C
  c->ctr=c->r[0]; // 800EE340
L_800EE344:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EE344
  W32(c->r[4]+0x00000004u,c->r[3]); // 800EE348
  W32(c->r[4]+0x00000008u,c->r[3]); // 800EE34C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800EE350
  W32(c->r[4]+0x00000010u,c->r[3]); // 800EE354
  W32(c->r[4]+0x00000014u,c->r[3]); // 800EE358
  W32(c->r[4]+0x00000018u,c->r[3]); // 800EE35C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800EE360
  W32(c->r[4]+0x00000020u,c->r[3]); // 800EE364
  W32(c->r[4]+0x00000024u,c->r[3]); // 800EE368
  c->r[4]=c->r[4]+0x00000028u; // 800EE36C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE344; } // 800EE370
  c->r[3]=c->r[31]+0x00000040u; // 800EE374
  c->r[4]=0u+0x000005A0u; // 800EE378
  c->lr=0x800EE380u; f_800C7780(c); // 800EE37C
  c->lr=0x800EE384u; f_800EE190(c); // 800EE380
  c->r[3]=0u+0x800F0000u; // 800EE384
  c->r[3]=c->r[3]+0xFFFFE050u; // 800EE388
  c->lr=0x800EE390u; f_800EBF60(c); // 800EE38C
  c->r[0]=R32(c->r[13]+0xFFFFA8D0u); // 800EE390
  c->r[7]=c->r[31]+0x00000040u; // 800EE394
  c->r[4]=0u+0x00000012u; // 800EE398
  c->r[3]=0u+0x000000B4u; // 800EE39C
  cmpu(c,0,c->r[0],0x00000001u); // 800EE3A0
  c->r[6]=c->r[7]+0x00000168u; // 800EE3A4
  c->r[5]=c->r[7]+0x000002D0u; // 800EE3A8
  c->r[0]=c->r[7]+0x00000438u; // 800EE3AC
  W32(c->r[1]+0x00000008u,c->r[7]); // 800EE3B0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800EE3B4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800EE3B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE3BC
  W32(c->r[13]+0xFFFFA8C4u,c->r[4]); // 800EE3C0
  W32(c->r[13]+0xFFFFA8C8u,c->r[4]); // 800EE3C4
  W32(c->r[13]+0xFFFFA8CCu,c->r[3]); // 800EE3C8
  if (!crb(c,2)) { goto L_800EE3E8; } // 800EE3CC
  c->r[4]=c->r[31]+0x000008E0u; // 800EE3D0
  c->r[3]=c->r[31]+0x000005E0u; // 800EE3D4
  c->r[4]=c->r[4]+0x00000300u; // 800EE3D8
  c->r[5]=c->r[1]+0x00000008u; // 800EE3DC
  c->lr=0x800EE3E4u; f_800ED350(c); // 800EE3E0
  goto L_800EE3FC; // 800EE3E4
L_800EE3E8:;
  c->r[4]=c->r[31]+0x000008E0u; // 800EE3E8
  c->r[3]=c->r[31]+0x000005E0u; // 800EE3EC
  c->r[4]=c->r[4]+0x00000180u; // 800EE3F0
  c->r[5]=c->r[1]+0x00000008u; // 800EE3F4
  c->lr=0x800EE3FCu; f_800ED350(c); // 800EE3F8
L_800EE3FC:;
  c->r[0]=R32(c->r[13]+0xFFFFA8D0u); // 800EE3FC
  c->r[4]=0u+0x00000001u; // 800EE400
  c->r[3]=0u+0x00000000u; // 800EE404
  W32(c->r[13]+0xFFFFA8F0u,c->r[4]); // 800EE408
  cmpu(c,0,c->r[0],0x00000001u); // 800EE40C
  W32(c->r[13]+0xFFFFA8ECu,c->r[3]); // 800EE410
  if (!crb(c,2)) { goto L_800EE440; } // 800EE414
  c->r[3]=R32(c->r[13]+0xFFFFA8F4u); // 800EE418
  c->r[0]=c->r[31]+0x000008E0u; // 800EE41C
  c->r[4]=0u+0x00000180u; // 800EE420
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 800EE424
  c->r[3]=c->r[0]+c->r[3]; // 800EE428
  c->lr=0x800EE430u; f_800EBFB0(c); // 800EE42C
  c->r[3]=R32(c->r[13]+0xFFFFA8F4u); // 800EE430
  c->r[0]=c->r[3]+0x00000001u; // 800EE434
  W32(c->r[13]+0xFFFFA8F4u,c->r[0]); // 800EE438
  goto L_800EE458; // 800EE43C
L_800EE440:;
  c->r[3]=R32(c->r[13]+0xFFFFA8F8u); // 800EE440
  c->r[0]=c->r[31]+0x000008E0u; // 800EE444
  c->r[4]=0u+0x00000180u; // 800EE448
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 800EE44C
  c->r[3]=c->r[0]+c->r[3]; // 800EE450
  c->lr=0x800EE458u; f_800EBFB0(c); // 800EE454
L_800EE458:;
  c->lr=0x800EE45Cu; f_800EC030(c); // 800EE458
  c->r[0]=0u+0x00000000u; // 800EE45C
  W32(c->r[13]+0xFFFFA8C0u,c->r[0]); // 800EE460
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EE464
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE468
  c->lr=c->r[0]; // 800EE46C
  c->r[1]=c->r[1]+0x00000020u; // 800EE470
  return; // 800EE474
}

// AXRegisterCallback
void f_800EE480(Ctx* __restrict c) {
  trace_call(0x800EE480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE480
  c->r[0]=c->lr; // 800EE484
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE48C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE490
  c->r[30]=c->r[3]|c->r[3]; // 800EE494
  c->r[31]=R32(c->r[13]+0xFFFFA8ECu); // 800EE498
  c->lr=0x800EE4A0u; f_800CBAA0(c); // 800EE49C
  W32(c->r[13]+0xFFFFA8ECu,c->r[30]); // 800EE4A0
  c->lr=0x800EE4A8u; f_800CBAE0(c); // 800EE4A4
  c->r[3]=c->r[31]|c->r[31]; // 800EE4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE4AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE4B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE4B4
  c->lr=c->r[0]; // 800EE4B8
  c->r[1]=c->r[1]+0x00000010u; // 800EE4BC
  return; // 800EE4C0
}

// AXRmtGetSamplesLeft
void f_800EE4D0(Ctx* __restrict c) {
  trace_call(0x800EE4D0u);
  c->r[3]=R32(c->r[13]+0xFFFFA8C8u); // 800EE4D0
  c->r[3]=addc(c,c->r[3],0xFFFFFFDCu,0); cr0(c,c->r[3]); // 800EE4D4
  if (!crb(c,0)) { goto L_800EE4E4; } // 800EE4D8
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE4DC
  c->r[3]=c->r[3]+c->r[0]; // 800EE4E0
L_800EE4E4:;
  c->r[0]=R32(c->r[13]+0xFFFFA8C4u); // 800EE4E4
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 800EE4E8
  if (!crb(c,0)) return; // 800EE4EC
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE4F0
  c->r[3]=c->r[3]+c->r[0]; // 800EE4F4
  return; // 800EE4F8
}

// AXRmtGetSamples
void f_800EE500(Ctx* __restrict c) {
  trace_call(0x800EE500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE500
  c->r[0]=c->lr; // 800EE504
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE508
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE50C
  c->r[6]=R32(c->r[13]+0xFFFFA8C8u); // 800EE510
  c->r[31]=addc(c,c->r[6],0xFFFFFFDCu,0); cr0(c,c->r[31]); // 800EE514
  if (!crb(c,0)) { goto L_800EE524; } // 800EE518
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE51C
  c->r[31]=c->r[31]+c->r[0]; // 800EE520
L_800EE524:;
  c->r[0]=R32(c->r[13]+0xFFFFA8C4u); // 800EE524
  c->r[31]=c->r[31]-c->r[0]; cr0(c,c->r[31]); // 800EE528
  if (!crb(c,0)) { goto L_800EE538; } // 800EE52C
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE530
  c->r[31]=c->r[31]+c->r[0]; // 800EE534
L_800EE538:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 800EE538
  if (!crb(c,1)) { goto L_800EE544; } // 800EE53C
  goto L_800EE548; // 800EE540
L_800EE544:;
  c->r[31]=c->r[5]|c->r[5]; // 800EE544
L_800EE548:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 800EE548
  c->r[5]=0u+0x802F0000u; // 800EE54C
  c->r[7]=R32(c->r[13]+0xFFFFA8C4u); // 800EE550
  c->r[5]=c->r[5]+0x000034A0u; // 800EE554
  c->r[5]=c->r[5]+c->r[0]; // 800EE558
  c->ctr=c->r[31]; // 800EE55C
  cmps(c,0,(int32_t)c->r[31],0); // 800EE560
  if (!crb(c,1)) { goto L_800EE590; } // 800EE564
L_800EE568:;
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800EE568
  c->r[7]=c->r[7]+0x00000001u; // 800EE56C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 800EE570
  W16(c->r[4]+0x00000000u,c->r[0]); // 800EE574
  c->r[4]=c->r[4]+0x00000002u; // 800EE578
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE57C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800EE580
  if (crb(c,0)) { goto L_800EE58C; } // 800EE584
  c->r[7]=0u+0x00000000u; // 800EE588
L_800EE58C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE568; } // 800EE58C
L_800EE590:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 800EE590
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE594
  c->r[3]=0u+0x802F0000u; // 800EE598
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800EE59C
  c->r[3]=c->r[3]+0x000034A0u; // 800EE5A0
  c->r[3]=c->r[3]+c->r[5]; // 800EE5A4
  c->lr=0x800EE5ACu; f_800C7750(c); // 800EE5A8
  c->r[3]=c->r[31]|c->r[31]; // 800EE5AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE5B4
  c->lr=c->r[0]; // 800EE5B8
  c->r[1]=c->r[1]+0x00000010u; // 800EE5BC
  return; // 800EE5C0
}

// AXRmtAdvancePtr
void f_800EE5D0(Ctx* __restrict c) {
  trace_call(0x800EE5D0u);
  c->r[4]=R32(c->r[13]+0xFFFFA8C8u); // 800EE5D0
  c->r[4]=addc(c,c->r[4],0xFFFFFFDCu,0); cr0(c,c->r[4]); // 800EE5D4
  if (!crb(c,0)) { goto L_800EE5E4; } // 800EE5D8
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE5DC
  c->r[4]=c->r[4]+c->r[0]; // 800EE5E0
L_800EE5E4:;
  c->r[0]=R32(c->r[13]+0xFFFFA8C4u); // 800EE5E4
  c->r[4]=c->r[4]-c->r[0]; cr0(c,c->r[4]); // 800EE5E8
  if (!crb(c,0)) { goto L_800EE5F8; } // 800EE5EC
  c->r[0]=R32(c->r[13]+0xFFFFA8CCu); // 800EE5F0
  c->r[4]=c->r[4]+c->r[0]; // 800EE5F4
L_800EE5F8:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800EE5F8
  if (!crb(c,1)) { goto L_800EE604; } // 800EE5FC
  c->r[3]=c->r[4]|c->r[4]; // 800EE600
L_800EE604:;
  c->r[0]=R32(c->r[13]+0xFFFFA8C4u); // 800EE604
  c->r[4]=R32(c->r[13]+0xFFFFA8CCu); // 800EE608
  c->r[0]=c->r[0]+c->r[3]; // 800EE60C
  W32(c->r[13]+0xFFFFA8C4u,c->r[0]); // 800EE610
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800EE614
  if (crb(c,0)) return; // 800EE618
  c->r[0]=c->r[0]-c->r[4]; // 800EE61C
  W32(c->r[13]+0xFFFFA8C4u,c->r[0]); // 800EE620
  return; // 800EE624
}

// __AXGetStudio
void f_800EE630(Ctx* __restrict c) {
  trace_call(0x800EE630u);
  c->r[3]=0u+0x802F0000u; // 800EE630
  c->r[3]=c->r[3]+0x00004260u; // 800EE634
  return; // 800EE638
}

// __AXDepopFadeMain
void f_800EE640(Ctx* __restrict c) {
  trace_call(0x800EE640u);
  c->r[6]=0u+0x2AAB0000u; // 800EE640
  c->r[7]=R32(c->r[3]+0x00000000u); // 800EE644
  c->r[0]=c->r[6]+0xFFFFAAABu; // 800EE648
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 800EE64C
  c->r[0]=sraw(c,c->r[0],4); // 800EE650
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800EE654
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 800EE658
  if (crb(c,2)) { goto L_800EE698; } // 800EE65C
  cmps(c,0,(int32_t)c->r[0],20); // 800EE660
  if (!crb(c,1)) { goto L_800EE66C; } // 800EE664
  c->r[0]=0u+0x00000014u; // 800EE668
L_800EE66C:;
  cmps(c,0,(int32_t)c->r[0],-20); // 800EE66C
  if (!crb(c,0)) { goto L_800EE678; } // 800EE670
  c->r[0]=0u+0xFFFFFFECu; // 800EE674
L_800EE678:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 800EE678
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800EE67C
  c->r[0]=0u-c->r[0]; // 800EE680
  c->r[4]=R32(c->r[3]+0x00000000u); // 800EE684
  c->r[4]=c->r[4]-c->r[6]; // 800EE688
  W32(c->r[3]+0x00000000u,c->r[4]); // 800EE68C
  W16(c->r[5]+0x00000000u,c->r[0]); // 800EE690
  return; // 800EE694
L_800EE698:;
  c->r[0]=0u+0x00000000u; // 800EE698
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE69C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE6A0
  W16(c->r[5]+0x00000000u,c->r[0]); // 800EE6A4
  return; // 800EE6A8
}

// __AXDepopFadeRmt
void f_800EE6B0(Ctx* __restrict c) {
  trace_call(0x800EE6B0u);
  c->r[6]=0u+0x38E40000u; // 800EE6B0
  c->r[7]=R32(c->r[3]+0x00000000u); // 800EE6B4
  c->r[0]=c->r[6]+0xFFFF8E39u; // 800EE6B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 800EE6BC
  c->r[0]=sraw(c,c->r[0],2); // 800EE6C0
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800EE6C4
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 800EE6C8
  if (crb(c,2)) { goto L_800EE708; } // 800EE6CC
  cmps(c,0,(int32_t)c->r[0],20); // 800EE6D0
  if (!crb(c,1)) { goto L_800EE6DC; } // 800EE6D4
  c->r[0]=0u+0x00000014u; // 800EE6D8
L_800EE6DC:;
  cmps(c,0,(int32_t)c->r[0],-20); // 800EE6DC
  if (!crb(c,0)) { goto L_800EE6E8; } // 800EE6E0
  c->r[0]=0u+0xFFFFFFECu; // 800EE6E4
L_800EE6E8:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 800EE6E8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 800EE6EC
  c->r[0]=0u-c->r[0]; // 800EE6F0
  c->r[4]=R32(c->r[3]+0x00000000u); // 800EE6F4
  c->r[4]=c->r[4]-c->r[6]; // 800EE6F8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800EE6FC
  W16(c->r[5]+0x00000000u,c->r[0]); // 800EE700
  return; // 800EE704
L_800EE708:;
  c->r[0]=0u+0x00000000u; // 800EE708
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE70C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE710
  W16(c->r[5]+0x00000000u,c->r[0]); // 800EE714
  return; // 800EE718
}

// __AXPrintStudio
void f_800EE720(Ctx* __restrict c) {
  trace_call(0x800EE720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE720
  c->r[0]=c->lr; // 800EE724
  c->r[3]=c->r[13]+0xFFFFA94Cu; // 800EE728
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE72C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE730
  c->r[31]=0u+0x802F0000u; // 800EE734
  c->r[4]=c->r[31]+0x00004260u; // 800EE738
  c->r[5]=c->r[4]+0x00000004u; // 800EE73C
  c->lr=0x800EE744u; f_800EE640(c); // 800EE740
  c->r[31]=c->r[31]+0x00004260u; // 800EE744
  c->r[3]=c->r[13]+0xFFFFA948u; // 800EE748
  c->r[4]=c->r[31]+0x00000006u; // 800EE74C
  c->r[5]=c->r[31]+0x0000000Au; // 800EE750
  c->lr=0x800EE758u; f_800EE640(c); // 800EE754
  c->r[4]=c->r[31]+0x0000000Cu; // 800EE758
  c->r[5]=c->r[31]+0x00000010u; // 800EE75C
  c->r[3]=c->r[13]+0xFFFFA944u; // 800EE760
  c->lr=0x800EE768u; f_800EE640(c); // 800EE764
  c->r[4]=c->r[31]+0x00000012u; // 800EE768
  c->r[5]=c->r[31]+0x00000016u; // 800EE76C
  c->r[3]=c->r[13]+0xFFFFA940u; // 800EE770
  c->lr=0x800EE778u; f_800EE640(c); // 800EE774
  c->r[4]=c->r[31]+0x00000018u; // 800EE778
  c->r[5]=c->r[31]+0x0000001Cu; // 800EE77C
  c->r[3]=c->r[13]+0xFFFFA93Cu; // 800EE780
  c->lr=0x800EE788u; f_800EE640(c); // 800EE784
  c->r[4]=c->r[31]+0x0000001Eu; // 800EE788
  c->r[5]=c->r[31]+0x00000022u; // 800EE78C
  c->r[3]=c->r[13]+0xFFFFA938u; // 800EE790
  c->lr=0x800EE798u; f_800EE640(c); // 800EE794
  c->r[4]=c->r[31]+0x00000024u; // 800EE798
  c->r[5]=c->r[31]+0x00000028u; // 800EE79C
  c->r[3]=c->r[13]+0xFFFFA934u; // 800EE7A0
  c->lr=0x800EE7A8u; f_800EE640(c); // 800EE7A4
  c->r[4]=c->r[31]+0x0000002Au; // 800EE7A8
  c->r[5]=c->r[31]+0x0000002Eu; // 800EE7AC
  c->r[3]=c->r[13]+0xFFFFA930u; // 800EE7B0
  c->lr=0x800EE7B8u; f_800EE640(c); // 800EE7B4
  c->r[4]=c->r[31]+0x00000030u; // 800EE7B8
  c->r[5]=c->r[31]+0x00000034u; // 800EE7BC
  c->r[3]=c->r[13]+0xFFFFA92Cu; // 800EE7C0
  c->lr=0x800EE7C8u; f_800EE640(c); // 800EE7C4
  c->r[4]=c->r[31]+0x00000036u; // 800EE7C8
  c->r[5]=c->r[31]+0x0000003Au; // 800EE7CC
  c->r[3]=c->r[13]+0xFFFFA928u; // 800EE7D0
  c->lr=0x800EE7D8u; f_800EE640(c); // 800EE7D4
  c->r[4]=c->r[31]+0x0000003Cu; // 800EE7D8
  c->r[5]=c->r[31]+0x00000040u; // 800EE7DC
  c->r[3]=c->r[13]+0xFFFFA924u; // 800EE7E0
  c->lr=0x800EE7E8u; f_800EE640(c); // 800EE7E4
  c->r[4]=c->r[31]+0x00000042u; // 800EE7E8
  c->r[5]=c->r[31]+0x00000046u; // 800EE7EC
  c->r[3]=c->r[13]+0xFFFFA920u; // 800EE7F0
  c->lr=0x800EE7F8u; f_800EE640(c); // 800EE7F4
  c->r[4]=c->r[31]+0x00000048u; // 800EE7F8
  c->r[5]=c->r[31]+0x0000004Cu; // 800EE7FC
  c->r[3]=c->r[13]+0xFFFFA91Cu; // 800EE800
  c->lr=0x800EE808u; f_800EE6B0(c); // 800EE804
  c->r[4]=c->r[31]+0x00000054u; // 800EE808
  c->r[5]=c->r[31]+0x00000058u; // 800EE80C
  c->r[3]=c->r[13]+0xFFFFA918u; // 800EE810
  c->lr=0x800EE818u; f_800EE6B0(c); // 800EE814
  c->r[4]=c->r[31]+0x00000060u; // 800EE818
  c->r[5]=c->r[31]+0x00000064u; // 800EE81C
  c->r[3]=c->r[13]+0xFFFFA914u; // 800EE820
  c->lr=0x800EE828u; f_800EE6B0(c); // 800EE824
  c->r[4]=c->r[31]+0x0000006Cu; // 800EE828
  c->r[5]=c->r[31]+0x00000070u; // 800EE82C
  c->r[3]=c->r[13]+0xFFFFA910u; // 800EE830
  c->lr=0x800EE838u; f_800EE6B0(c); // 800EE834
  c->r[4]=c->r[31]+0x0000004Eu; // 800EE838
  c->r[5]=c->r[31]+0x00000052u; // 800EE83C
  c->r[3]=c->r[13]+0xFFFFA90Cu; // 800EE840
  c->lr=0x800EE848u; f_800EE6B0(c); // 800EE844
  c->r[4]=c->r[31]+0x0000005Au; // 800EE848
  c->r[5]=c->r[31]+0x0000005Eu; // 800EE84C
  c->r[3]=c->r[13]+0xFFFFA908u; // 800EE850
  c->lr=0x800EE858u; f_800EE6B0(c); // 800EE854
  c->r[4]=c->r[31]+0x00000066u; // 800EE858
  c->r[5]=c->r[31]+0x0000006Au; // 800EE85C
  c->r[3]=c->r[13]+0xFFFFA904u; // 800EE860
  c->lr=0x800EE868u; f_800EE6B0(c); // 800EE864
  c->r[4]=c->r[31]+0x00000072u; // 800EE868
  c->r[5]=c->r[31]+0x00000076u; // 800EE86C
  c->r[3]=c->r[13]+0xFFFFA900u; // 800EE870
  c->lr=0x800EE878u; f_800EE6B0(c); // 800EE874
  c->r[3]=c->r[31]|c->r[31]; // 800EE878
  c->r[4]=0u+0x00000078u; // 800EE87C
  c->lr=0x800EE884u; f_800C7780(c); // 800EE880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE888
  c->lr=c->r[0]; // 800EE88C
  c->r[1]=c->r[1]+0x00000010u; // 800EE890
  return; // 800EE894
}

// __AXSPBInit
void f_800EE8A0(Ctx* __restrict c) {
  trace_call(0x800EE8A0u);
  c->r[0]=0u+0x00000000u; // 800EE8A0
  W32(c->r[13]+0xFFFFA900u,c->r[0]); // 800EE8A4
  W32(c->r[13]+0xFFFFA904u,c->r[0]); // 800EE8A8
  W32(c->r[13]+0xFFFFA908u,c->r[0]); // 800EE8AC
  W32(c->r[13]+0xFFFFA90Cu,c->r[0]); // 800EE8B0
  W32(c->r[13]+0xFFFFA910u,c->r[0]); // 800EE8B4
  W32(c->r[13]+0xFFFFA914u,c->r[0]); // 800EE8B8
  W32(c->r[13]+0xFFFFA918u,c->r[0]); // 800EE8BC
  W32(c->r[13]+0xFFFFA91Cu,c->r[0]); // 800EE8C0
  W32(c->r[13]+0xFFFFA920u,c->r[0]); // 800EE8C4
  W32(c->r[13]+0xFFFFA924u,c->r[0]); // 800EE8C8
  W32(c->r[13]+0xFFFFA928u,c->r[0]); // 800EE8CC
  W32(c->r[13]+0xFFFFA92Cu,c->r[0]); // 800EE8D0
  W32(c->r[13]+0xFFFFA930u,c->r[0]); // 800EE8D4
  W32(c->r[13]+0xFFFFA934u,c->r[0]); // 800EE8D8
  W32(c->r[13]+0xFFFFA938u,c->r[0]); // 800EE8DC
  W32(c->r[13]+0xFFFFA93Cu,c->r[0]); // 800EE8E0
  W32(c->r[13]+0xFFFFA940u,c->r[0]); // 800EE8E4
  W32(c->r[13]+0xFFFFA944u,c->r[0]); // 800EE8E8
  W32(c->r[13]+0xFFFFA948u,c->r[0]); // 800EE8EC
  W32(c->r[13]+0xFFFFA94Cu,c->r[0]); // 800EE8F0
  return; // 800EE8F4
}

// __AXDepopVoice
void f_800EE900(Ctx* __restrict c) {
  trace_call(0x800EE900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE904
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE908
  c->r[4]=R32(c->r[13]+0xFFFFA94Cu); // 800EE90C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000052u); // 800EE910
  c->r[6]=R32(c->r[13]+0xFFFFA940u); // 800EE914
  c->r[0]=c->r[4]+c->r[0]; // 800EE918
  W32(c->r[13]+0xFFFFA94Cu,c->r[0]); // 800EE91C
  c->r[5]=R32(c->r[13]+0xFFFFA934u); // 800EE920
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000054u); // 800EE924
  c->r[4]=R32(c->r[13]+0xFFFFA928u); // 800EE928
  c->r[0]=c->r[6]+c->r[0]; // 800EE92C
  W32(c->r[13]+0xFFFFA940u,c->r[0]); // 800EE930
  c->r[8]=R32(c->r[13]+0xFFFFA948u); // 800EE934
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000056u); // 800EE938
  c->r[7]=R32(c->r[13]+0xFFFFA93Cu); // 800EE93C
  c->r[0]=c->r[5]+c->r[0]; // 800EE940
  W32(c->r[13]+0xFFFFA934u,c->r[0]); // 800EE944
  c->r[6]=R32(c->r[13]+0xFFFFA930u); // 800EE948
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000058u); // 800EE94C
  c->r[5]=R32(c->r[13]+0xFFFFA924u); // 800EE950
  c->r[0]=c->r[4]+c->r[0]; // 800EE954
  W32(c->r[13]+0xFFFFA928u,c->r[0]); // 800EE958
  c->r[4]=R32(c->r[13]+0xFFFFA944u); // 800EE95C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Au); // 800EE960
  c->r[30]=R32(c->r[13]+0xFFFFA938u); // 800EE964
  c->r[0]=c->r[8]+c->r[0]; // 800EE968
  W32(c->r[13]+0xFFFFA948u,c->r[0]); // 800EE96C
  c->r[31]=R32(c->r[13]+0xFFFFA92Cu); // 800EE970
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Cu); // 800EE974
  c->r[12]=R32(c->r[13]+0xFFFFA920u); // 800EE978
  c->r[0]=c->r[7]+c->r[0]; // 800EE97C
  W32(c->r[13]+0xFFFFA93Cu,c->r[0]); // 800EE980
  c->r[11]=R32(c->r[13]+0xFFFFA91Cu); // 800EE984
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Eu); // 800EE988
  c->r[10]=R32(c->r[13]+0xFFFFA918u); // 800EE98C
  c->r[0]=c->r[6]+c->r[0]; // 800EE990
  W32(c->r[13]+0xFFFFA930u,c->r[0]); // 800EE994
  c->r[9]=R32(c->r[13]+0xFFFFA914u); // 800EE998
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 800EE99C
  c->r[8]=R32(c->r[13]+0xFFFFA910u); // 800EE9A0
  c->r[0]=c->r[5]+c->r[0]; // 800EE9A4
  W32(c->r[13]+0xFFFFA924u,c->r[0]); // 800EE9A8
  c->r[7]=R32(c->r[13]+0xFFFFA90Cu); // 800EE9AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000062u); // 800EE9B0
  c->r[6]=R32(c->r[13]+0xFFFFA908u); // 800EE9B4
  c->r[0]=c->r[4]+c->r[0]; // 800EE9B8
  W32(c->r[13]+0xFFFFA944u,c->r[0]); // 800EE9BC
  c->r[5]=R32(c->r[13]+0xFFFFA904u); // 800EE9C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800EE9C4
  c->r[4]=R32(c->r[13]+0xFFFFA900u); // 800EE9C8
  c->r[0]=c->r[30]+c->r[0]; // 800EE9CC
  W32(c->r[13]+0xFFFFA938u,c->r[0]); // 800EE9D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000066u); // 800EE9D4
  c->r[0]=c->r[31]+c->r[0]; // 800EE9D8
  W32(c->r[13]+0xFFFFA92Cu,c->r[0]); // 800EE9DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000068u); // 800EE9E0
  c->r[0]=c->r[12]+c->r[0]; // 800EE9E4
  W32(c->r[13]+0xFFFFA920u,c->r[0]); // 800EE9E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FAu); // 800EE9EC
  c->r[0]=c->r[11]+c->r[0]; // 800EE9F0
  W32(c->r[13]+0xFFFFA91Cu,c->r[0]); // 800EE9F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FCu); // 800EE9F8
  c->r[0]=c->r[10]+c->r[0]; // 800EE9FC
  W32(c->r[13]+0xFFFFA918u,c->r[0]); // 800EEA00
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FEu); // 800EEA04
  c->r[0]=c->r[9]+c->r[0]; // 800EEA08
  W32(c->r[13]+0xFFFFA914u,c->r[0]); // 800EEA0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000100u); // 800EEA10
  c->r[0]=c->r[8]+c->r[0]; // 800EEA14
  W32(c->r[13]+0xFFFFA910u,c->r[0]); // 800EEA18
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000102u); // 800EEA1C
  c->r[0]=c->r[7]+c->r[0]; // 800EEA20
  W32(c->r[13]+0xFFFFA90Cu,c->r[0]); // 800EEA24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000104u); // 800EEA28
  c->r[0]=c->r[6]+c->r[0]; // 800EEA2C
  W32(c->r[13]+0xFFFFA908u,c->r[0]); // 800EEA30
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000106u); // 800EEA34
  c->r[0]=c->r[5]+c->r[0]; // 800EEA38
  W32(c->r[13]+0xFFFFA904u,c->r[0]); // 800EEA3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000108u); // 800EEA40
  c->r[0]=c->r[4]+c->r[0]; // 800EEA44
  W32(c->r[13]+0xFFFFA900u,c->r[0]); // 800EEA48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEA4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EEA50
  c->r[1]=c->r[1]+0x00000010u; // 800EEA54
  return; // 800EEA58
}

// __AXGetNumVoices
void f_800EEA60(Ctx* __restrict c) {
  trace_call(0x800EEA60u);
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 800EEA60
  return; // 800EEA64
}

// __AXServiceVPB
void f_800EEA70(Ctx* __restrict c) {
  trace_call(0x800EEA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA70
  c->r[0]=c->lr; // 800EEA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EEA78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EEA7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EEA80
  c->r[30]=c->r[3]+0x00000028u; // 800EEA84
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EEA88
  W32(c->r[1]+0x00000010u,c->r[28]); // 800EEA8C
  c->r[28]=c->r[3]|c->r[3]; // 800EEA90
  c->r[5]=R32(c->r[13]+0xFFFFA960u); // 800EEA94
  c->r[4]=R32(c->r[13]+0xFFFFA950u); // 800EEA98
  c->r[0]=c->r[5]+0x00000001u; // 800EEA9C
  W32(c->r[13]+0xFFFFA960u,c->r[0]); // 800EEAA0
  c->r[0]=R32(c->r[3]+0x00000018u); // 800EEAA4
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800EEAA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EEAAC
  cmps(c,0,(int32_t)c->r[29],0); // 800EEAB0
  c->r[31]=c->r[4]+c->r[0]; // 800EEAB4
  if (!crb(c,2)) { goto L_800EEAE0; } // 800EEAB8
  c->r[0]=R16(c->r[31]+0x00000010u); // 800EEABC
  W16(c->r[30]+0x00000010u,c->r[0]); // 800EEAC0
  c->r[0]=R16(c->r[31]+0x0000006Au); // 800EEAC4
  W16(c->r[30]+0x0000006Au,c->r[0]); // 800EEAC8
  c->r[0]=R16(c->r[31]+0x0000007Au); // 800EEACC
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800EEAD0
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 800EEAD4
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 800EEAD8
  goto L_800EEFA0; // 800EEADC
L_800EEAE0:;
  c->r[0]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[0]); // 800EEAE0
  if (crb(c,2)) { goto L_800EEAFC; } // 800EEAE4
  c->r[3]=c->r[31]|c->r[31]; // 800EEAE8
  c->r[4]=c->r[30]|c->r[30]; // 800EEAEC
  c->r[5]=0u+0x00000140u; // 800EEAF0
  c->lr=0x800EEAF8u; f_80004364(c); // 800EEAF4
  goto L_800EEFA0; // 800EEAF8
L_800EEAFC:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 800EEAFC
  if (crb(c,2)) { goto L_800EEB14; } // 800EEB00
  c->r[0]=R16(c->r[30]+0x00000008u); // 800EEB04
  W16(c->r[31]+0x00000008u,c->r[0]); // 800EEB08
  c->r[0]=R16(c->r[30]+0x0000000Au); // 800EEB0C
  W16(c->r[31]+0x0000000Au,c->r[0]); // 800EEB10
L_800EEB14:;
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 800EEB14
  if (crb(c,2)) { goto L_800EEB24; } // 800EEB18
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800EEB1C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800EEB20
L_800EEB24:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 800EEB24
  if (crb(c,2)) { goto L_800EEB38; } // 800EEB28
  c->r[0]=R16(c->r[30]+0x00000010u); // 800EEB2C
  W16(c->r[31]+0x00000010u,c->r[0]); // 800EEB30
  goto L_800EEB40; // 800EEB34
L_800EEB38:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 800EEB38
  W16(c->r[30]+0x00000010u,c->r[0]); // 800EEB3C
L_800EEB40:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 800EEB40
  if (crb(c,2)) { goto L_800EEB50; } // 800EEB44
  c->r[0]=R16(c->r[30]+0x00000012u); // 800EEB48
  W16(c->r[31]+0x00000012u,c->r[0]); // 800EEB4C
L_800EEB50:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 800EEB50
  if (crb(c,2)) { goto L_800EEB68; } // 800EEB54
  c->r[3]=c->r[31]+0x00000014u; // 800EEB58
  c->r[4]=c->r[30]+0x00000014u; // 800EEB5C
  c->r[5]=0u+0x00000030u; // 800EEB60
  c->lr=0x800EEB68u; f_80004364(c); // 800EEB64
L_800EEB68:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 800EEB68
  if (crb(c,2)) { goto L_800EEB84; } // 800EEB6C
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 800EEB70
  W16(c->r[31]+0x0000004Eu,c->r[0]); // 800EEB74
  c->r[0]=R16(c->r[30]+0x00000050u); // 800EEB78
  W16(c->r[31]+0x00000050u,c->r[0]); // 800EEB7C
  goto L_800EEC0C; // 800EEB80
L_800EEB84:;
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 800EEB84
  if (crb(c,2)) { goto L_800EEC0C; } // 800EEB88
  c->r[3]=R16(c->r[30]+0x00000044u); // 800EEB8C
  c->r[0]=0u+0x00000000u; // 800EEB90
  W16(c->r[31]+0x00000044u,c->r[3]); // 800EEB94
  c->r[3]=R16(c->r[30]+0x00000046u); // 800EEB98
  W16(c->r[31]+0x00000046u,c->r[3]); // 800EEB9C
  c->r[3]=R16(c->r[30]+0x00000048u); // 800EEBA0
  W16(c->r[31]+0x00000048u,c->r[3]); // 800EEBA4
  c->r[3]=R16(c->r[30]+0x0000004Au); // 800EEBA8
  W16(c->r[31]+0x0000004Au,c->r[3]); // 800EEBAC
  c->r[3]=R16(c->r[30]+0x0000004Cu); // 800EEBB0
  W16(c->r[31]+0x0000004Cu,c->r[3]); // 800EEBB4
  c->r[3]=R16(c->r[30]+0x0000004Eu); // 800EEBB8
  W16(c->r[31]+0x0000004Eu,c->r[3]); // 800EEBBC
  c->r[3]=R16(c->r[30]+0x00000050u); // 800EEBC0
  W16(c->r[31]+0x00000050u,c->r[3]); // 800EEBC4
  c->r[3]=R32(c->r[28]+0x00000024u); // 800EEBC8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EEBCC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800EEBD0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800EEBD4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EEBD8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EEBDC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800EEBE0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800EEBE4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800EEBE8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800EEBEC
  W32(c->r[3]+0x00000024u,c->r[0]); // 800EEBF0
  W32(c->r[3]+0x00000028u,c->r[0]); // 800EEBF4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800EEBF8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800EEBFC
  W32(c->r[3]+0x00000034u,c->r[0]); // 800EEC00
  W32(c->r[3]+0x00000038u,c->r[0]); // 800EEC04
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800EEC08
L_800EEC0C:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 800EEC0C
  if (crb(c,2)) { goto L_800EEC24; } // 800EEC10
  c->r[3]=c->r[31]+0x00000052u; // 800EEC14
  c->r[4]=c->r[30]+0x00000052u; // 800EEC18
  c->r[5]=0u+0x00000018u; // 800EEC1C
  c->lr=0x800EEC24u; f_80004364(c); // 800EEC20
L_800EEC24:;
  c->r[0]=rotl(c->r[29],0)&0x00000200u; cr0(c,c->r[0]); // 800EEC24
  if (crb(c,2)) { goto L_800EEC40; } // 800EEC28
  c->r[0]=R16(c->r[31]+0x0000006Au); // 800EEC2C
  W16(c->r[30]+0x0000006Au,c->r[0]); // 800EEC30
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 800EEC34
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 800EEC38
  goto L_800EEC58; // 800EEC3C
L_800EEC40:;
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 800EEC40
  if (crb(c,2)) { goto L_800EEC58; } // 800EEC44
  c->r[0]=R16(c->r[30]+0x0000006Au); // 800EEC48
  W16(c->r[31]+0x0000006Au,c->r[0]); // 800EEC4C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 800EEC50
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 800EEC54
L_800EEC58:;
  c->r[0]=rotl(c->r[29],0)&0x00007800u; cr0(c,c->r[0]); // 800EEC58
  if (crb(c,2)) { goto L_800EECB0; } // 800EEC5C
  c->r[0]=rotl(c->r[29],0)&0x00000800u; cr0(c,c->r[0]); // 800EEC60
  if (crb(c,2)) { goto L_800EEC70; } // 800EEC64
  c->r[0]=R16(c->r[30]+0x0000006Eu); // 800EEC68
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 800EEC6C
L_800EEC70:;
  c->r[0]=rotl(c->r[29],0)&0x00001000u; cr0(c,c->r[0]); // 800EEC70
  if (crb(c,2)) { goto L_800EEC80; } // 800EEC74
  c->r[0]=R32(c->r[30]+0x00000072u); // 800EEC78
  W32(c->r[31]+0x00000072u,c->r[0]); // 800EEC7C
L_800EEC80:;
  c->r[0]=rotl(c->r[29],0)&0x00002000u; cr0(c,c->r[0]); // 800EEC80
  if (crb(c,2)) { goto L_800EEC90; } // 800EEC84
  c->r[0]=R32(c->r[30]+0x00000076u); // 800EEC88
  W32(c->r[31]+0x00000076u,c->r[0]); // 800EEC8C
L_800EEC90:;
  c->r[0]=rotl(c->r[29],0)&0x00004000u; cr0(c,c->r[0]); // 800EEC90
  if (crb(c,2)) { goto L_800EECA4; } // 800EEC94
  c->r[0]=R32(c->r[30]+0x0000007Au); // 800EEC98
  W32(c->r[31]+0x0000007Au,c->r[0]); // 800EEC9C
  goto L_800EECEC; // 800EECA0
L_800EECA4:;
  c->r[0]=R32(c->r[31]+0x0000007Au); // 800EECA4
  W32(c->r[30]+0x0000007Au,c->r[0]); // 800EECA8
  goto L_800EECEC; // 800EECAC
L_800EECB0:;
  c->r[0]=rotl(c->r[29],0)&0x00000400u; cr0(c,c->r[0]); // 800EECB0
  if (crb(c,2)) { goto L_800EECDC; } // 800EECB4
  c->r[0]=R32(c->r[30]+0x0000006Eu); // 800EECB8
  W32(c->r[31]+0x0000006Eu,c->r[0]); // 800EECBC
  c->r[0]=R32(c->r[30]+0x00000072u); // 800EECC0
  W32(c->r[31]+0x00000072u,c->r[0]); // 800EECC4
  c->r[0]=R32(c->r[30]+0x00000076u); // 800EECC8
  W32(c->r[31]+0x00000076u,c->r[0]); // 800EECCC
  c->r[0]=R32(c->r[30]+0x0000007Au); // 800EECD0
  W32(c->r[31]+0x0000007Au,c->r[0]); // 800EECD4
  goto L_800EECEC; // 800EECD8
L_800EECDC:;
  c->r[0]=R16(c->r[31]+0x0000007Au); // 800EECDC
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800EECE0
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 800EECE4
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 800EECE8
L_800EECEC:;
  c->r[0]=rotl(c->r[29],0)&0x00008000u; cr0(c,c->r[0]); // 800EECEC
  if (crb(c,2)) { goto L_800EED44; } // 800EECF0
  c->r[0]=R32(c->r[30]+0x0000007Eu); // 800EECF4
  W32(c->r[31]+0x0000007Eu,c->r[0]); // 800EECF8
  c->r[0]=R32(c->r[30]+0x00000082u); // 800EECFC
  W32(c->r[31]+0x00000082u,c->r[0]); // 800EED00
  c->r[0]=R32(c->r[30]+0x00000086u); // 800EED04
  W32(c->r[31]+0x00000086u,c->r[0]); // 800EED08
  c->r[0]=R32(c->r[30]+0x0000008Au); // 800EED0C
  W32(c->r[31]+0x0000008Au,c->r[0]); // 800EED10
  c->r[0]=R32(c->r[30]+0x0000008Eu); // 800EED14
  W32(c->r[31]+0x0000008Eu,c->r[0]); // 800EED18
  c->r[0]=R32(c->r[30]+0x00000092u); // 800EED1C
  W32(c->r[31]+0x00000092u,c->r[0]); // 800EED20
  c->r[0]=R32(c->r[30]+0x00000096u); // 800EED24
  W32(c->r[31]+0x00000096u,c->r[0]); // 800EED28
  c->r[0]=R32(c->r[30]+0x0000009Au); // 800EED2C
  W32(c->r[31]+0x0000009Au,c->r[0]); // 800EED30
  c->r[0]=R32(c->r[30]+0x0000009Eu); // 800EED34
  W32(c->r[31]+0x0000009Eu,c->r[0]); // 800EED38
  c->r[0]=R32(c->r[30]+0x000000A2u); // 800EED3C
  W32(c->r[31]+0x000000A2u,c->r[0]); // 800EED40
L_800EED44:;
  c->r[0]=rotl(c->r[29],0)&0x00020000u; cr0(c,c->r[0]); // 800EED44
  if (crb(c,2)) { goto L_800EED60; } // 800EED48
  c->r[0]=R16(c->r[30]+0x000000A6u); // 800EED4C
  W16(c->r[31]+0x000000A6u,c->r[0]); // 800EED50
  c->r[0]=R16(c->r[30]+0x000000A8u); // 800EED54
  W16(c->r[31]+0x000000A8u,c->r[0]); // 800EED58
  goto L_800EEDA0; // 800EED5C
L_800EED60:;
  c->r[0]=rotl(c->r[29],0)&0x00010000u; cr0(c,c->r[0]); // 800EED60
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED64
  c->r[0]=R16(c->r[30]+0x000000A6u); // 800EED68
  W16(c->r[31]+0x000000A6u,c->r[0]); // 800EED6C
  c->r[0]=R16(c->r[30]+0x000000A8u); // 800EED70
  W16(c->r[31]+0x000000A8u,c->r[0]); // 800EED74
  c->r[0]=R16(c->r[30]+0x000000AAu); // 800EED78
  W16(c->r[31]+0x000000AAu,c->r[0]); // 800EED7C
  c->r[0]=R16(c->r[30]+0x000000ACu); // 800EED80
  W16(c->r[31]+0x000000ACu,c->r[0]); // 800EED84
  c->r[0]=R16(c->r[30]+0x000000AEu); // 800EED88
  W16(c->r[31]+0x000000AEu,c->r[0]); // 800EED8C
  c->r[0]=R16(c->r[30]+0x000000B0u); // 800EED90
  W16(c->r[31]+0x000000B0u,c->r[0]); // 800EED94
  c->r[0]=R16(c->r[30]+0x000000B2u); // 800EED98
  W16(c->r[31]+0x000000B2u,c->r[0]); // 800EED9C
L_800EEDA0:;
  c->r[0]=rotl(c->r[29],0)&0x00040000u; cr0(c,c->r[0]); // 800EEDA0
  if (crb(c,2)) { goto L_800EEDC0; } // 800EEDA4
  c->r[0]=R16(c->r[30]+0x000000B4u); // 800EEDA8
  W16(c->r[31]+0x000000B4u,c->r[0]); // 800EEDAC
  c->r[0]=R16(c->r[30]+0x000000B6u); // 800EEDB0
  W16(c->r[31]+0x000000B6u,c->r[0]); // 800EEDB4
  c->r[0]=R16(c->r[30]+0x000000B8u); // 800EEDB8
  W16(c->r[31]+0x000000B8u,c->r[0]); // 800EEDBC
L_800EEDC0:;
  c->r[0]=rotl(c->r[29],0)&0x00100000u; cr0(c,c->r[0]); // 800EEDC0
  if (crb(c,2)) { goto L_800EEDDC; } // 800EEDC4
  c->r[0]=R16(c->r[30]+0x000000BEu); // 800EEDC8
  W16(c->r[31]+0x000000BEu,c->r[0]); // 800EEDCC
  c->r[0]=R16(c->r[30]+0x000000C0u); // 800EEDD0
  W16(c->r[31]+0x000000C0u,c->r[0]); // 800EEDD4
  goto L_800EEE04; // 800EEDD8
L_800EEDDC:;
  c->r[0]=rotl(c->r[29],0)&0x00080000u; cr0(c,c->r[0]); // 800EEDDC
  if (crb(c,2)) { goto L_800EEE04; } // 800EEDE0
  c->r[0]=R16(c->r[30]+0x000000BAu); // 800EEDE4
  W16(c->r[31]+0x000000BAu,c->r[0]); // 800EEDE8
  c->r[0]=R16(c->r[30]+0x000000BCu); // 800EEDEC
  W16(c->r[31]+0x000000BCu,c->r[0]); // 800EEDF0
  c->r[0]=R16(c->r[30]+0x000000BEu); // 800EEDF4
  W16(c->r[31]+0x000000BEu,c->r[0]); // 800EEDF8
  c->r[0]=R16(c->r[30]+0x000000C0u); // 800EEDFC
  W16(c->r[31]+0x000000C0u,c->r[0]); // 800EEE00
L_800EEE04:;
  c->r[0]=rotl(c->r[29],0)&0x00400000u; cr0(c,c->r[0]); // 800EEE04
  if (crb(c,2)) { goto L_800EEE38; } // 800EEE08
  c->r[0]=R16(c->r[30]+0x000000CCu); // 800EEE0C
  W16(c->r[31]+0x000000CCu,c->r[0]); // 800EEE10
  c->r[0]=R16(c->r[30]+0x000000CEu); // 800EEE14
  W16(c->r[31]+0x000000CEu,c->r[0]); // 800EEE18
  c->r[0]=R16(c->r[30]+0x000000D0u); // 800EEE1C
  W16(c->r[31]+0x000000D0u,c->r[0]); // 800EEE20
  c->r[0]=R16(c->r[30]+0x000000D2u); // 800EEE24
  W16(c->r[31]+0x000000D2u,c->r[0]); // 800EEE28
  c->r[0]=R16(c->r[30]+0x000000D4u); // 800EEE2C
  W16(c->r[31]+0x000000D4u,c->r[0]); // 800EEE30
  goto L_800EEE90; // 800EEE34
L_800EEE38:;
  c->r[0]=rotl(c->r[29],0)&0x00200000u; cr0(c,c->r[0]); // 800EEE38
  if (crb(c,2)) { goto L_800EEE90; } // 800EEE3C
  c->r[0]=R16(c->r[30]+0x000000C2u); // 800EEE40
  W16(c->r[31]+0x000000C2u,c->r[0]); // 800EEE44
  c->r[0]=R16(c->r[30]+0x000000C4u); // 800EEE48
  W16(c->r[31]+0x000000C4u,c->r[0]); // 800EEE4C
  c->r[0]=R16(c->r[30]+0x000000C6u); // 800EEE50
  W16(c->r[31]+0x000000C6u,c->r[0]); // 800EEE54
  c->r[0]=R16(c->r[30]+0x000000C8u); // 800EEE58
  W16(c->r[31]+0x000000C8u,c->r[0]); // 800EEE5C
  c->r[0]=R16(c->r[30]+0x000000CAu); // 800EEE60
  W16(c->r[31]+0x000000CAu,c->r[0]); // 800EEE64
  c->r[0]=R16(c->r[30]+0x000000CCu); // 800EEE68
  W16(c->r[31]+0x000000CCu,c->r[0]); // 800EEE6C
  c->r[0]=R16(c->r[30]+0x000000CEu); // 800EEE70
  W16(c->r[31]+0x000000CEu,c->r[0]); // 800EEE74
  c->r[0]=R16(c->r[30]+0x000000D0u); // 800EEE78
  W16(c->r[31]+0x000000D0u,c->r[0]); // 800EEE7C
  c->r[0]=R16(c->r[30]+0x000000D2u); // 800EEE80
  W16(c->r[31]+0x000000D2u,c->r[0]); // 800EEE84
  c->r[0]=R16(c->r[30]+0x000000D4u); // 800EEE88
  W16(c->r[31]+0x000000D4u,c->r[0]); // 800EEE8C
L_800EEE90:;
  c->r[0]=rotl(c->r[29],0)&0x00800000u; cr0(c,c->r[0]); // 800EEE90
  if (crb(c,2)) { goto L_800EEEA0; } // 800EEE94
  c->r[0]=R16(c->r[30]+0x000000D6u); // 800EEE98
  W16(c->r[31]+0x000000D6u,c->r[0]); // 800EEE9C
L_800EEEA0:;
  c->r[0]=rotl(c->r[29],0)&0x01000000u; cr0(c,c->r[0]); // 800EEEA0
  if (crb(c,2)) { goto L_800EEEB0; } // 800EEEA4
  c->r[0]=R16(c->r[30]+0x000000D8u); // 800EEEA8
  W16(c->r[31]+0x000000D8u,c->r[0]); // 800EEEAC
L_800EEEB0:;
  c->r[0]=rotl(c->r[29],0)&0x02000000u; cr0(c,c->r[0]); // 800EEEB0
  if (crb(c,2)) { goto L_800EEEC8; } // 800EEEB4
  c->r[3]=c->r[31]+0x000000DAu; // 800EEEB8
  c->r[4]=c->r[30]+0x000000DAu; // 800EEEBC
  c->r[5]=0u+0x00000020u; // 800EEEC0
  c->lr=0x800EEEC8u; f_80004364(c); // 800EEEC4
L_800EEEC8:;
  c->r[0]=rotl(c->r[29],0)&0x04000000u; cr0(c,c->r[0]); // 800EEEC8
  if (crb(c,2)) { goto L_800EEEE0; } // 800EEECC
  c->r[3]=c->r[31]+0x000000FAu; // 800EEED0
  c->r[4]=c->r[30]+0x000000FAu; // 800EEED4
  c->r[5]=0u+0x00000010u; // 800EEED8
  c->lr=0x800EEEE0u; f_80004364(c); // 800EEEDC
L_800EEEE0:;
  c->r[0]=rotl(c->r[29],0)&0x08000000u; cr0(c,c->r[0]); // 800EEEE0
  if (crb(c,2)) { goto L_800EEEF8; } // 800EEEE4
  c->r[3]=c->r[31]+0x0000010Au; // 800EEEE8
  c->r[4]=c->r[30]+0x0000010Au; // 800EEEEC
  c->r[5]=0u+0x0000000Au; // 800EEEF0
  c->lr=0x800EEEF8u; f_80004364(c); // 800EEEF4
L_800EEEF8:;
  c->r[0]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[0]); // 800EEEF8
  if (crb(c,2)) { goto L_800EEF14; } // 800EEEFC
  c->r[0]=R16(c->r[30]+0x00000118u); // 800EEF00
  W16(c->r[31]+0x00000118u,c->r[0]); // 800EEF04
  c->r[0]=R16(c->r[30]+0x0000011Au); // 800EEF08
  W16(c->r[31]+0x0000011Au,c->r[0]); // 800EEF0C
  goto L_800EEFA0; // 800EEF10
L_800EEF14:;
  c->r[0]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[0]); // 800EEF14
  if (crb(c,2)) { goto L_800EEF48; } // 800EEF18
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 800EEF1C
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 800EEF20
  c->r[0]=R16(c->r[30]+0x00000120u); // 800EEF24
  W16(c->r[31]+0x00000120u,c->r[0]); // 800EEF28
  c->r[0]=R16(c->r[30]+0x00000122u); // 800EEF2C
  W16(c->r[31]+0x00000122u,c->r[0]); // 800EEF30
  c->r[0]=R16(c->r[30]+0x00000124u); // 800EEF34
  W16(c->r[31]+0x00000124u,c->r[0]); // 800EEF38
  c->r[0]=R16(c->r[30]+0x00000126u); // 800EEF3C
  W16(c->r[31]+0x00000126u,c->r[0]); // 800EEF40
  goto L_800EEFA0; // 800EEF44
L_800EEF48:;
  c->r[0]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[0]); // 800EEF48
  if (crb(c,2)) { goto L_800EEFA0; } // 800EEF4C
  c->r[0]=R16(c->r[30]+0x00000114u); // 800EEF50
  W16(c->r[31]+0x00000114u,c->r[0]); // 800EEF54
  c->r[0]=R16(c->r[30]+0x00000116u); // 800EEF58
  W16(c->r[31]+0x00000116u,c->r[0]); // 800EEF5C
  c->r[0]=R16(c->r[30]+0x00000118u); // 800EEF60
  W16(c->r[31]+0x00000118u,c->r[0]); // 800EEF64
  c->r[0]=R16(c->r[30]+0x0000011Au); // 800EEF68
  W16(c->r[31]+0x0000011Au,c->r[0]); // 800EEF6C
  c->r[0]=R16(c->r[30]+0x0000011Cu); // 800EEF70
  W16(c->r[31]+0x0000011Cu,c->r[0]); // 800EEF74
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 800EEF78
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 800EEF7C
  c->r[0]=R16(c->r[30]+0x00000120u); // 800EEF80
  W16(c->r[31]+0x00000120u,c->r[0]); // 800EEF84
  c->r[0]=R16(c->r[30]+0x00000122u); // 800EEF88
  W16(c->r[31]+0x00000122u,c->r[0]); // 800EEF8C
  c->r[0]=R16(c->r[30]+0x00000124u); // 800EEF90
  W16(c->r[31]+0x00000124u,c->r[0]); // 800EEF94
  c->r[0]=R16(c->r[30]+0x00000126u); // 800EEF98
  W16(c->r[31]+0x00000126u,c->r[0]); // 800EEF9C
L_800EEFA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EEFA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EEFA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EEFA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EEFAC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EEFB0
  c->lr=c->r[0]; // 800EEFB4
  c->r[1]=c->r[1]+0x00000020u; // 800EEFB8
  return; // 800EEFBC
}

// __AXSyncPBs
void f_800EEFC0(Ctx* __restrict c) {
  trace_call(0x800EEFC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEFC0
  c->r[0]=c->lr; // 800EEFC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EEFC8
  c->r[11]=c->r[1]+0x00000030u; // 800EEFCC
  c->lr=0x800EEFD4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EEFD0
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EEFD4
  c->r[25]=c->r[3]|c->r[3]; // 800EEFD8
  c->r[29]=0u+0x00000000u; // 800EEFDC
  W32(c->r[13]+0xFFFFA960u,c->r[29]); // 800EEFE0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EEFE4
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EEFE8
  c->lr=0x800EEFF0u; f_800C7750(c); // 800EEFEC
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EEFF0
  c->r[3]=R32(c->r[13]+0xFFFFA954u); // 800EEFF4
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800EEFF8
  c->lr=0x800EF000u; f_800C7750(c); // 800EEFFC
  c->lr=0x800EF004u; f_800ED310(c); // 800EF000
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF004
  c->r[31]=0u+0x802B0000u; // 800EF008
  c->r[30]=0u+0x802B0000u; // 800EF00C
  c->r[27]=0u+0x0000001Fu; // 800EF010
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)600); // 800EF014
  c->r[31]=c->r[31]+0x000015B0u; // 800EF018
  c->r[30]=c->r[30]+0x00001530u; // 800EF01C
  c->r[0]=c->r[3]+c->r[0]; // 800EF020
  c->r[3]=c->r[0]+c->r[25]; // 800EF024
  c->r[28]=c->r[3]+0x00000020u; // 800EF028
L_800EF02C:;
  c->r[3]=c->r[27]|c->r[27]; // 800EF02C
  c->lr=0x800EF034u; f_800EC580(c); // 800EF030
  c->r[26]=c->r[3]|c->r[3]; // 800EF034
  goto L_800EF22C; // 800EF038
L_800EF03C:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 800EF03C
  cmpu(c,0,c->r[0],0x00000001u); // 800EF040
  if (!crb(c,2)) { goto L_800EF04C; } // 800EF044
  c->r[28]=c->r[28]+0x00000081u; // 800EF048
L_800EF04C:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 800EF04C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF050
  if (crb(c,2)) { goto L_800EF06C; } // 800EF054
  c->r[0]=R32(c->r[26]+0x00000018u); // 800EF058
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF05C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EF060
  c->r[3]=c->r[3]+c->r[0]; // 800EF064
  c->lr=0x800EF06Cu; f_800EE900(c); // 800EF068
L_800EF06C:;
  c->r[0]=R16(c->r[26]+0x00000038u); // 800EF06C
  cmpu(c,0,c->r[0],0x00000001u); // 800EF070
  if (!crb(c,2)) { goto L_800EF218; } // 800EF074
  c->r[0]=R16(c->r[26]+0x000000E2u); // 800EF078
  c->r[28]=c->r[28]+0x00000183u; // 800EF07C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF080
  if (crb(c,2)) { goto L_800EF08C; } // 800EF084
  c->r[28]=c->r[28]+0x00000135u; // 800EF088
L_800EF08C:;
  c->r[0]=R16(c->r[26]+0x000000EAu); // 800EF08C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF090
  if (crb(c,2)) { goto L_800EF09C; } // 800EF094
  c->r[28]=c->r[28]+0x00000400u; // 800EF098
L_800EF09C:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 800EF09C
  cmpu(c,0,c->r[0],0x00000001u); // 800EF0A0
  if (!crb(c,2)) { goto L_800EF0AC; } // 800EF0A4
  c->r[28]=c->r[28]+0x0000001Bu; // 800EF0A8
L_800EF0AC:;
  c->r[3]=R16(c->r[26]+0x00000030u); // 800EF0AC
  c->r[0]=R16(c->r[26]+0x000000CEu); // 800EF0B0
  cmps(c,0,(int32_t)c->r[3],0); // 800EF0B4
  c->r[4]=R16(c->r[26]+0x000000D0u); // 800EF0B8
  c->r[4]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 800EF0BC
  if (!crb(c,2)) { goto L_800EF0DC; } // 800EF0C0
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 800EF0C4
  c->r[3]=c->r[3]+0x00010000u; // 800EF0C8
  c->r[0]=c->r[3]+0xFFFF8000u; // 800EF0CC
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800EF0D0
  c->r[0]=c->r[3]+0x00000619u; // 800EF0D4
  goto L_800EF0FC; // 800EF0D8
L_800EF0DC:;
  cmpu(c,0,c->r[3],0x00000001u); // 800EF0DC
  c->r[0]=0u+0x0000025Du; // 800EF0E0
  if (!crb(c,2)) { goto L_800EF0FC; } // 800EF0E4
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 800EF0E8
  c->r[3]=c->r[3]+0x00010000u; // 800EF0EC
  c->r[0]=c->r[3]+0xFFFF8000u; // 800EF0F0
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800EF0F4
  c->r[0]=c->r[3]+0x000005BAu; // 800EF0F8
L_800EF0FC:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 800EF0FC
  c->r[28]=c->r[28]+c->r[0]; // 800EF100
  c->r[0]=R16(c->r[26]+0x000000FEu); // 800EF104
  c->r[5]=rotl(c->r[4],13)&0x0000007Cu; // 800EF108
  c->r[3]=rotl(c->r[4],2)&0x0000007Cu; // 800EF10C
  c->r[6]=rotl(c->r[4],8)&0x0000007Cu; // 800EF110
  c->r[4]=rotl(c->r[4],18)&0x0000007Cu; // 800EF114
  cmpu(c,0,c->r[0],0x00000001u); // 800EF118
  c->r[5]=R32(c->r[30]+c->r[5]); // 800EF11C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EF120
  c->r[6]=R32(c->r[30]+c->r[6]); // 800EF124
  c->r[4]=R32(c->r[30]+c->r[4]); // 800EF128
  c->r[0]=c->r[5]+c->r[0]; // 800EF12C
  c->r[3]=c->r[28]+c->r[6]; // 800EF130
  c->r[0]=c->r[4]+c->r[0]; // 800EF134
  c->r[28]=c->r[3]+c->r[0]; // 800EF138
  if (!crb(c,2)) { goto L_800EF1C8; } // 800EF13C
  c->r[0]=R16(c->r[26]+0x0000013Cu); // 800EF140
  c->r[28]=c->r[28]+0x00000265u; // 800EF144
  cmpu(c,0,c->r[0],0x00000001u); // 800EF148
  if (!crb(c,2)) { goto L_800EF158; } // 800EF14C
  c->r[28]=c->r[28]+0x00000076u; // 800EF150
  goto L_800EF164; // 800EF154
L_800EF158:;
  cmpu(c,0,c->r[0],0x00000002u); // 800EF158
  if (!crb(c,2)) { goto L_800EF164; } // 800EF15C
  c->r[28]=c->r[28]+0x00000342u; // 800EF160
L_800EF164:;
  c->r[3]=R16(c->r[26]+0x00000100u); // 800EF164
  c->r[4]=rotl(c->r[3],30)&0x0000000Cu; // 800EF168
  c->r[0]=rotl(c->r[3],2)&0x0000000Cu; // 800EF16C
  c->r[4]=R32(c->r[31]+c->r[4]); // 800EF170
  c->r[9]=rotl(c->r[3],20)&0x0000000Cu; // 800EF174
  c->r[0]=R32(c->r[31]+c->r[0]); // 800EF178
  c->r[8]=rotl(c->r[3],22)&0x0000000Cu; // 800EF17C
  c->r[7]=rotl(c->r[3],24)&0x0000000Cu; // 800EF180
  c->r[6]=rotl(c->r[3],26)&0x0000000Cu; // 800EF184
  c->r[5]=rotl(c->r[3],28)&0x0000000Cu; // 800EF188
  c->r[3]=rotl(c->r[3],0)&0x0000000Cu; // 800EF18C
  c->r[7]=R32(c->r[31]+c->r[7]); // 800EF190
  c->r[0]=c->r[4]+c->r[0]; // 800EF194
  c->r[3]=R32(c->r[31]+c->r[3]); // 800EF198
  c->r[9]=R32(c->r[31]+c->r[9]); // 800EF19C
  c->r[7]=c->r[28]+c->r[7]; // 800EF1A0
  c->r[8]=R32(c->r[31]+c->r[8]); // 800EF1A4
  c->r[0]=c->r[3]+c->r[0]; // 800EF1A8
  c->r[6]=R32(c->r[31]+c->r[6]); // 800EF1AC
  c->r[4]=R32(c->r[31]+c->r[5]); // 800EF1B0
  c->r[8]=c->r[9]+c->r[8]; // 800EF1B4
  c->r[3]=c->r[8]+c->r[7]; // 800EF1B8
  c->r[4]=c->r[6]+c->r[4]; // 800EF1BC
  c->r[0]=c->r[4]+c->r[0]; // 800EF1C0
  c->r[28]=c->r[3]+c->r[0]; // 800EF1C4
L_800EF1C8:;
  c->r[0]=R32(c->r[13]+0xFFFFA968u); // 800EF1C8
  cmpu(c,0,c->r[0],c->r[28]); // 800EF1CC
  if (!crb(c,1)) { goto L_800EF1E0; } // 800EF1D0
  c->r[3]=c->r[26]|c->r[26]; // 800EF1D4
  c->lr=0x800EF1DCu; f_800EEA70(c); // 800EF1D8
  goto L_800EF220; // 800EF1DC
L_800EF1E0:;
  c->r[0]=R32(c->r[26]+0x00000018u); // 800EF1E0
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF1E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EF1E8
  c->r[25]=c->r[3]+c->r[0]; // 800EF1EC
  c->r[0]=R16(c->r[25]+0x00000010u); // 800EF1F0
  cmpu(c,0,c->r[0],0x00000001u); // 800EF1F4
  if (!crb(c,2)) { goto L_800EF204; } // 800EF1F8
  c->r[3]=c->r[25]|c->r[25]; // 800EF1FC
  c->lr=0x800EF204u; f_800EE900(c); // 800EF200
L_800EF204:;
  W16(c->r[26]+0x00000038u,c->r[29]); // 800EF204
  c->r[3]=c->r[26]|c->r[26]; // 800EF208
  W16(c->r[25]+0x00000010u,c->r[29]); // 800EF20C
  c->lr=0x800EF214u; f_800EC720(c); // 800EF210
  goto L_800EF220; // 800EF214
L_800EF218:;
  c->r[3]=c->r[26]|c->r[26]; // 800EF218
  c->lr=0x800EF220u; f_800EEA70(c); // 800EF21C
L_800EF220:;
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 800EF220
  W32(c->r[26]+0x00000020u,c->r[29]); // 800EF224
  c->r[26]=R32(c->r[26]+0x00000000u); // 800EF228
L_800EF22C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800EF22C
  if (!crb(c,2)) { IRQCHK(c); goto L_800EF03C; } // 800EF230
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 800EF234
  if (!crb(c,2)) { IRQCHK(c); goto L_800EF02C; } // 800EF238
  W32(c->r[13]+0xFFFFA964u,c->r[28]); // 800EF23C
  c->r[3]=0u+0x00000000u; // 800EF240
  c->lr=0x800EF248u; f_800EC580(c); // 800EF244
  c->r[25]=c->r[3]|c->r[3]; // 800EF248
  c->r[26]=0u+0x00000000u; // 800EF24C
  goto L_800EF290; // 800EF250
L_800EF254:;
  c->r[0]=R32(c->r[25]+0x00000020u); // 800EF254
  cmps(c,0,(int32_t)c->r[0],0); // 800EF258
  if (crb(c,2)) { goto L_800EF274; } // 800EF25C
  c->r[0]=R32(c->r[25]+0x00000018u); // 800EF260
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF264
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EF268
  c->r[3]=c->r[3]+c->r[0]; // 800EF26C
  c->lr=0x800EF274u; f_800EE900(c); // 800EF270
L_800EF274:;
  W32(c->r[25]+0x00000020u,c->r[26]); // 800EF274
  c->r[0]=R32(c->r[25]+0x00000018u); // 800EF278
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF27C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EF280
  c->r[3]=c->r[3]+c->r[0]; // 800EF284
  W16(c->r[3]+0x00000010u,c->r[26]); // 800EF288
  c->r[25]=R32(c->r[25]+0x00000000u); // 800EF28C
L_800EF290:;
  cmps(c,0,(int32_t)c->r[25],0); // 800EF290
  if (!crb(c,2)) { IRQCHK(c); goto L_800EF254; } // 800EF294
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF298
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF29C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EF2A0
  c->lr=0x800EF2A8u; f_800C7780(c); // 800EF2A4
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF2A8
  c->r[3]=R32(c->r[13]+0xFFFFA954u); // 800EF2AC
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800EF2B0
  c->lr=0x800EF2B8u; f_800C7780(c); // 800EF2B4
  c->r[11]=c->r[1]+0x00000030u; // 800EF2B8
  c->lr=0x800EF2C0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF2BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF2C0
  c->lr=c->r[0]; // 800EF2C4
  c->r[1]=c->r[1]+0x00000030u; // 800EF2C8
  return; // 800EF2CC
}

// __AXGetPBs
void f_800EF2D0(Ctx* __restrict c) {
  trace_call(0x800EF2D0u);
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF2D0
  return; // 800EF2D4
}

// __AXSetPBDefault
void f_800EF2E0(Ctx* __restrict c) {
  trace_call(0x800EF2E0u);
  c->r[4]=0u+0x18A80000u; // 800EF2E0
  c->r[5]=0u+0x00000000u; // 800EF2E4
  c->r[0]=c->r[4]+0x00000024u; // 800EF2E8
  W16(c->r[3]+0x00000038u,c->r[5]); // 800EF2EC
  W16(c->r[3]+0x0000006Cu,c->r[5]); // 800EF2F0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800EF2F4
  W16(c->r[3]+0x000000E2u,c->r[5]); // 800EF2F8
  W16(c->r[3]+0x000000EAu,c->r[5]); // 800EF2FC
  W16(c->r[3]+0x000000FEu,c->r[5]); // 800EF300
  W16(c->r[3]+0x0000013Cu,c->r[5]); // 800EF304
  W16(c->r[3]+0x00000132u,c->r[5]); // 800EF308
  W16(c->r[3]+0x00000134u,c->r[5]); // 800EF30C
  W16(c->r[3]+0x00000136u,c->r[5]); // 800EF310
  W16(c->r[3]+0x00000138u,c->r[5]); // 800EF314
  W16(c->r[3]+0x0000013Au,c->r[5]); // 800EF318
  return; // 800EF31C
}

// __AXVPBInit
void f_800EF320(Ctx* __restrict c) {
  trace_call(0x800EF320u);
  c->r[5]=0u+0x802F0000u; // 800EF320
  c->r[4]=0u+0x80300000u; // 800EF324
  c->r[3]=0u+0x80300000u; // 800EF328
  c->r[0]=0u+0x00000060u; // 800EF32C
  c->r[5]=c->r[5]+0x000042E0u; // 800EF330
  c->r[4]=c->r[4]+0xFFFFBAE0u; // 800EF334
  c->r[3]=c->r[3]+0xFFFFD2E0u; // 800EF338
  W32(c->r[13]+0xFFFFA95Cu,c->r[0]); // 800EF33C
  W32(c->r[13]+0xFFFFA950u,c->r[5]); // 800EF340
  W32(c->r[13]+0xFFFFA954u,c->r[4]); // 800EF344
  W32(c->r[13]+0xFFFFA958u,c->r[3]); // 800EF348
  f_800EF350(c); return; // 800EF34C
}

// __AXVPBInitCommon
void f_800EF350(Ctx* __restrict c) {
  trace_call(0x800EF350u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF350
  c->r[0]=c->lr; // 800EF354
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF358
  c->r[11]=c->r[1]+0x00000030u; // 800EF35C
  c->lr=0x800EF364u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF360
  c->r[4]=0u+0x80000000u; // 800EF364
  c->r[3]=0u+0x89050000u; // 800EF368
  c->r[4]=R32(c->r[4]+0x000000F8u); // 800EF36C
  c->r[5]=c->r[3]+0xFFFFFD51u; // 800EF370
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF374
  c->r[3]=0u+0x00000000u; // 800EF378
  c->r[5]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 800EF37C
  W32(c->r[13]+0xFFFFA964u,c->r[3]); // 800EF380
  c->r[7]=R32(c->r[13]+0xFFFFA950u); // 800EF384
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 800EF388
  c->r[0]=c->r[4]-c->r[5]; // 800EF38C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800EF390
  c->r[0]=c->r[0]+c->r[5]; // 800EF394
  cmps(c,0,(int32_t)c->r[6],0); // 800EF398
  c->r[0]=rotl(c->r[0],23)&0x007FFFFFu; // 800EF39C
  W32(c->r[13]+0xFFFFA968u,c->r[0]); // 800EF3A0
  if (crb(c,2)) { goto L_800EF3F4; } // 800EF3A4
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800EF3A8
  c->ctr=c->r[0]; // 800EF3AC
  if (crb(c,2)) { goto L_800EF3E4; } // 800EF3B0
L_800EF3B4:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 800EF3B4
  W32(c->r[7]+0x00000004u,c->r[3]); // 800EF3B8
  W32(c->r[7]+0x00000008u,c->r[3]); // 800EF3BC
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 800EF3C0
  W32(c->r[7]+0x00000010u,c->r[3]); // 800EF3C4
  W32(c->r[7]+0x00000014u,c->r[3]); // 800EF3C8
  W32(c->r[7]+0x00000018u,c->r[3]); // 800EF3CC
  W32(c->r[7]+0x0000001Cu,c->r[3]); // 800EF3D0
  c->r[7]=c->r[7]+0x00000020u; // 800EF3D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF3B4; } // 800EF3D8
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 800EF3DC
  if (crb(c,2)) { goto L_800EF3F4; } // 800EF3E0
L_800EF3E4:;
  c->ctr=c->r[6]; // 800EF3E4
L_800EF3E8:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 800EF3E8
  c->r[7]=c->r[7]+0x00000004u; // 800EF3EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF3E8; } // 800EF3F0
L_800EF3F4:;
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF3F4
  c->r[3]=0u+0x00000000u; // 800EF3F8
  c->r[4]=R32(c->r[13]+0xFFFFA954u); // 800EF3FC
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; cr0(c,c->r[5]); // 800EF400
  if (crb(c,2)) { goto L_800EF454; } // 800EF404
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800EF408
  c->ctr=c->r[0]; // 800EF40C
  if (crb(c,2)) { goto L_800EF444; } // 800EF410
L_800EF414:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EF414
  W32(c->r[4]+0x00000004u,c->r[3]); // 800EF418
  W32(c->r[4]+0x00000008u,c->r[3]); // 800EF41C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800EF420
  W32(c->r[4]+0x00000010u,c->r[3]); // 800EF424
  W32(c->r[4]+0x00000014u,c->r[3]); // 800EF428
  W32(c->r[4]+0x00000018u,c->r[3]); // 800EF42C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800EF430
  c->r[4]=c->r[4]+0x00000020u; // 800EF434
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF414; } // 800EF438
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 800EF43C
  if (crb(c,2)) { goto L_800EF454; } // 800EF440
L_800EF444:;
  c->ctr=c->r[5]; // 800EF444
L_800EF448:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EF448
  c->r[4]=c->r[4]+0x00000004u; // 800EF44C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF448; } // 800EF450
L_800EF454:;
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF454
  c->r[3]=0u+0x00000000u; // 800EF458
  c->r[4]=R32(c->r[13]+0xFFFFA958u); // 800EF45C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)90); // 800EF460
  cmps(c,0,(int32_t)c->r[5],0); // 800EF464
  if (crb(c,2)) { goto L_800EF4BC; } // 800EF468
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800EF46C
  c->ctr=c->r[0]; // 800EF470
  if (crb(c,2)) { goto L_800EF4A8; } // 800EF474
L_800EF478:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EF478
  W32(c->r[4]+0x00000004u,c->r[3]); // 800EF47C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800EF480
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800EF484
  W32(c->r[4]+0x00000010u,c->r[3]); // 800EF488
  W32(c->r[4]+0x00000014u,c->r[3]); // 800EF48C
  W32(c->r[4]+0x00000018u,c->r[3]); // 800EF490
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800EF494
  c->r[4]=c->r[4]+0x00000020u; // 800EF498
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF478; } // 800EF49C
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 800EF4A0
  if (crb(c,2)) { goto L_800EF4BC; } // 800EF4A4
L_800EF4A8:;
  c->ctr=c->r[5]; // 800EF4A8
  c->r[0]=c->r[0]|0x00000000u; // 800EF4AC
L_800EF4B0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EF4B0
  c->r[4]=c->r[4]+0x00000004u; // 800EF4B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF4B0; } // 800EF4B8
L_800EF4BC:;
  c->r[3]=0u+0x18A80000u; // 800EF4BC
  c->r[31]=0u+0x00000000u; // 800EF4C0
  c->r[29]=c->r[3]+0x00000024u; // 800EF4C4
  c->r[27]=0u+0x00000000u; // 800EF4C8
  c->r[26]=0u+0x00000000u; // 800EF4CC
  c->r[25]=0u+0x00000000u; // 800EF4D0
  c->r[28]=0u+0x00000000u; // 800EF4D4
  c->r[30]=0u+0x00000001u; // 800EF4D8
  goto L_800EF5AC; // 800EF4DC
L_800EF4E0:;
  c->r[0]=R32(c->r[13]+0xFFFFA958u); // 800EF4E0
  c->r[5]=R32(c->r[13]+0xFFFFA950u); // 800EF4E4
  c->r[4]=R32(c->r[13]+0xFFFFA954u); // 800EF4E8
  c->r[3]=c->r[0]+c->r[25]; // 800EF4EC
  c->r[5]=c->r[5]+c->r[27]; // 800EF4F0
  W32(c->r[3]+0x00000018u,c->r[31]); // 800EF4F4
  c->r[6]=c->r[4]+c->r[26]; // 800EF4F8
  W32(c->r[3]+0x00000024u,c->r[6]); // 800EF4FC
  W16(c->r[3]+0x00000038u,c->r[28]); // 800EF500
  W16(c->r[3]+0x0000006Cu,c->r[28]); // 800EF504
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 800EF508
  W16(c->r[3]+0x000000E2u,c->r[28]); // 800EF50C
  W16(c->r[3]+0x000000EAu,c->r[28]); // 800EF510
  W16(c->r[3]+0x000000FEu,c->r[28]); // 800EF514
  W16(c->r[3]+0x0000013Cu,c->r[28]); // 800EF518
  W16(c->r[3]+0x00000132u,c->r[28]); // 800EF51C
  W16(c->r[3]+0x00000134u,c->r[28]); // 800EF520
  W16(c->r[3]+0x00000136u,c->r[28]); // 800EF524
  W16(c->r[3]+0x00000138u,c->r[28]); // 800EF528
  W16(c->r[3]+0x0000013Au,c->r[28]); // 800EF52C
  c->r[4]=R32(c->r[13]+0xFFFFA95Cu); // 800EF530
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800EF534
  cmpu(c,0,c->r[31],c->r[0]); // 800EF538
  if (!crb(c,2)) { goto L_800EF554; } // 800EF53C
  W16(c->r[5]+0x00000002u,c->r[28]); // 800EF540
  W16(c->r[5]+0x00000000u,c->r[28]); // 800EF544
  W16(c->r[3]+0x0000002Au,c->r[28]); // 800EF548
  W16(c->r[3]+0x00000028u,c->r[28]); // 800EF54C
  goto L_800EF56C; // 800EF550
L_800EF554:;
  c->r[0]=c->r[5]+0x00000140u; // 800EF554
  c->r[4]=rotl(c->r[0],16)&0x0000FFFFu; // 800EF558
  W16(c->r[3]+0x00000028u,c->r[4]); // 800EF55C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 800EF560
  W16(c->r[5]+0x00000000u,c->r[4]); // 800EF564
  W16(c->r[5]+0x00000002u,c->r[0]); // 800EF568
L_800EF56C:;
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 800EF56C
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 800EF570
  c->r[4]=rotl(c->r[6],16)&0x0000FFFFu; // 800EF574
  W16(c->r[3]+0x0000002Eu,c->r[5]); // 800EF578
  W16(c->r[5]+0x00000004u,c->r[0]); // 800EF57C
  W16(c->r[5]+0x00000006u,c->r[5]); // 800EF580
  W16(c->r[3]+0x0000006Eu,c->r[4]); // 800EF584
  W16(c->r[3]+0x00000070u,c->r[6]); // 800EF588
  W16(c->r[5]+0x00000046u,c->r[4]); // 800EF58C
  W16(c->r[5]+0x00000048u,c->r[6]); // 800EF590
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 800EF594
  c->lr=0x800EF59Cu; f_800EC700(c); // 800EF598
  c->r[27]=c->r[27]+0x00000140u; // 800EF59C
  c->r[26]=c->r[26]+0x00000040u; // 800EF5A0
  c->r[25]=c->r[25]+0x00000168u; // 800EF5A4
  c->r[31]=c->r[31]+0x00000001u; // 800EF5A8
L_800EF5AC:;
  c->r[0]=R32(c->r[13]+0xFFFFA95Cu); // 800EF5AC
  cmpu(c,0,c->r[31],c->r[0]); // 800EF5B0
  if (crb(c,0)) { IRQCHK(c); goto L_800EF4E0; } // 800EF5B4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800EF5B8
  c->r[3]=R32(c->r[13]+0xFFFFA950u); // 800EF5BC
  c->lr=0x800EF5C4u; f_800C7780(c); // 800EF5C0
  c->r[11]=c->r[1]+0x00000030u; // 800EF5C4
  c->lr=0x800EF5CCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF5C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF5CC
  c->lr=c->r[0]; // 800EF5D0
  c->r[1]=c->r[1]+0x00000030u; // 800EF5D4
  return; // 800EF5D8
}

// AXSetVoiceState
void f_800EF5E0(Ctx* __restrict c) {
  trace_call(0x800EF5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF5E0
  c->r[0]=c->lr; // 800EF5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF5E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF5EC
  c->r[31]=c->r[4]|c->r[4]; // 800EF5F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF5F4
  c->r[30]=c->r[3]|c->r[3]; // 800EF5F8
  c->lr=0x800EF600u; f_800CBAA0(c); // 800EF5FC
  c->r[0]=R16(c->r[30]+0x00000038u); // 800EF600
  cmpu(c,0,c->r[0],c->r[31]); // 800EF604
  if (!crb(c,2)) { goto L_800EF614; } // 800EF608
  c->lr=0x800EF610u; f_800CBAE0(c); // 800EF60C
  goto L_800EF638; // 800EF610
L_800EF614:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800EF614
  cmps(c,0,(int32_t)c->r[31],0); // 800EF618
  W16(c->r[30]+0x00000038u,c->r[31]); // 800EF61C
  c->r[0]=c->r[0]|0x00000004u; // 800EF620
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800EF624
  if (!crb(c,2)) { goto L_800EF634; } // 800EF628
  c->r[0]=0u+0x00000001u; // 800EF62C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800EF630
L_800EF634:;
  c->lr=0x800EF638u; f_800CBAE0(c); // 800EF634
L_800EF638:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF638
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF63C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF640
  c->lr=c->r[0]; // 800EF644
  c->r[1]=c->r[1]+0x00000010u; // 800EF648
  return; // 800EF64C
}

// AXSetVoiceAddr
void f_800EF650(Ctx* __restrict c) {
  trace_call(0x800EF650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF650
  c->r[0]=c->lr; // 800EF654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF65C
  c->r[31]=c->r[4]|c->r[4]; // 800EF660
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF664
  c->r[30]=c->r[3]|c->r[3]; // 800EF668
  c->lr=0x800EF670u; f_800CBAA0(c); // 800EF66C
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EF670
  W32(c->r[30]+0x00000096u,c->r[0]); // 800EF674
  c->r[0]=R32(c->r[31]+0x00000004u); // 800EF678
  W32(c->r[30]+0x0000009Au,c->r[0]); // 800EF67C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EF680
  W32(c->r[30]+0x0000009Eu,c->r[0]); // 800EF684
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800EF688
  W32(c->r[30]+0x000000A2u,c->r[0]); // 800EF68C
  c->r[0]=R16(c->r[31]+0x00000002u); // 800EF690
  cmps(c,0,(int32_t)c->r[0],10); // 800EF694
  if (crb(c,2)) { goto L_800EF6A8; } // 800EF698
  cmps(c,0,(int32_t)c->r[0],25); // 800EF69C
  if (crb(c,2)) { goto L_800EF6DC; } // 800EF6A0
  goto L_800EF70C; // 800EF6A4
L_800EF6A8:;
  c->r[4]=0u+0x00000000u; // 800EF6A8
  c->r[0]=0u+0x08000000u; // 800EF6AC
  W32(c->r[30]+0x000000A6u,c->r[4]); // 800EF6B0
  W32(c->r[30]+0x000000AAu,c->r[4]); // 800EF6B4
  W32(c->r[30]+0x000000AEu,c->r[4]); // 800EF6B8
  W32(c->r[30]+0x000000B2u,c->r[4]); // 800EF6BC
  W32(c->r[30]+0x000000B6u,c->r[4]); // 800EF6C0
  W32(c->r[30]+0x000000BAu,c->r[4]); // 800EF6C4
  W32(c->r[30]+0x000000BEu,c->r[4]); // 800EF6C8
  W32(c->r[30]+0x000000C2u,c->r[4]); // 800EF6CC
  W32(c->r[30]+0x000000C6u,c->r[0]); // 800EF6D0
  W32(c->r[30]+0x000000CAu,c->r[4]); // 800EF6D4
  goto L_800EF70C; // 800EF6D8
L_800EF6DC:;
  c->r[4]=0u+0x00000000u; // 800EF6DC
  c->r[0]=0u+0x01000000u; // 800EF6E0
  W32(c->r[30]+0x000000A6u,c->r[4]); // 800EF6E4
  W32(c->r[30]+0x000000AAu,c->r[4]); // 800EF6E8
  W32(c->r[30]+0x000000AEu,c->r[4]); // 800EF6EC
  W32(c->r[30]+0x000000B2u,c->r[4]); // 800EF6F0
  W32(c->r[30]+0x000000B6u,c->r[4]); // 800EF6F4
  W32(c->r[30]+0x000000BAu,c->r[4]); // 800EF6F8
  W32(c->r[30]+0x000000BEu,c->r[4]); // 800EF6FC
  W32(c->r[30]+0x000000C2u,c->r[4]); // 800EF700
  W32(c->r[30]+0x000000C6u,c->r[0]); // 800EF704
  W32(c->r[30]+0x000000CAu,c->r[4]); // 800EF708
L_800EF70C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800EF70C
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 800EF710
  c->r[0]=c->r[0]|0x00008400u; // 800EF714
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800EF718
  c->lr=0x800EF720u; f_800CBAE0(c); // 800EF71C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF720
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF724
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF728
  c->lr=c->r[0]; // 800EF72C
  c->r[1]=c->r[1]+0x00000010u; // 800EF730
  return; // 800EF734
}

// AXGetLpfCoefs
void f_800EF740(Ctx* __restrict c) {
  trace_call(0x800EF740u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF740
  c->r[0]=c->lr; // 800EF744
  {uint32_t ea=c->r[2]+0xFFFF9B58u; c->f[3]=RF64(ea);} // 800EF748
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF74C
  c->r[0]=0u+0x43300000u; // 800EF750
  {uint32_t ea=c->r[2]+0xFFFF9B44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF754
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800EF758
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF75C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EF760
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800EF764
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EF768
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800EF76C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EF770
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800EF774
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EF778
  c->r[31]=c->r[5]|c->r[5]; // 800EF77C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF780
  c->r[30]=c->r[4]|c->r[4]; // 800EF784
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800EF788
  c->lr=0x800EF790u; f_80228040(c); // 800EF78C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800EF790
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF794
  {uint32_t ea=c->r[2]+0xFFFF9B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF798
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 800EF79C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 800EF7A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800EF7A4
  c->lr=0x800EF7ACu; f_802287F4(c); // 800EF7A8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800EF7AC
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF7B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800EF7B4
  c->f[1]=-c->f[1]; // 800EF7B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800EF7BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800EF7C0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800EF7C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF7C8
  W16(c->r[31]+0x00000000u,c->r[0]); // 800EF7CC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800EF7D0
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 800EF7D4
  W16(c->r[30]+0x00000000u,c->r[0]); // 800EF7D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800EF7DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EF7E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EF7E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EF7E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF7EC
  c->lr=c->r[0]; // 800EF7F0
  c->r[1]=c->r[1]+0x00000030u; // 800EF7F4
  return; // 800EF7F8
}

// AXSetMaxDspCycles
void f_800EF800(Ctx* __restrict c) {
  trace_call(0x800EF800u);
  c->r[3]=R32(c->r[13]+0xFFFFA95Cu); // 800EF800
  return; // 800EF804
}

// __AXGetCurrentProfile
void f_800EF810(Ctx* __restrict c) {
  trace_call(0x800EF810u);
  c->r[0]=R32(c->r[13]+0xFFFFA970u); // 800EF810
  cmps(c,0,(int32_t)c->r[0],0); // 800EF814
  if (crb(c,2)) { goto L_800EF848; } // 800EF818
  c->r[5]=R32(c->r[13]+0xFFFFA974u); // 800EF81C
  c->r[3]=R32(c->r[13]+0xFFFFA978u); // 800EF820
  c->r[4]=c->r[5]+0x00000001u; // 800EF824
  c->r[6]=R32(c->r[13]+0xFFFFA97Cu); // 800EF828
  c->r[0]=divwu(c->r[4],c->r[3]); // 800EF82C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800EF830
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 800EF834
  c->r[0]=c->r[4]-c->r[0]; // 800EF838
  W32(c->r[13]+0xFFFFA974u,c->r[0]); // 800EF83C
  c->r[3]=c->r[6]+c->r[3]; // 800EF840
  return; // 800EF844
L_800EF848:;
  c->r[3]=0u+0x00000000u; // 800EF848
  return; // 800EF84C
}

// AXFXReverbHiInit
void f_800EF850(Ctx* __restrict c) {
  trace_call(0x800EF850u);
  {uint32_t ea=c->r[3]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 800EF850
  c->r[0]=0u+0x00000000u; // 800EF854
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF858
  c->r[4]=0u+0x00000005u; // 800EF85C
  {uint32_t ea=c->r[3]+0x00000150u; c->f[6]=c->ps1[6]=RF32(ea);} // 800EF860
  {uint32_t ea=c->r[3]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 800EF864
  {uint32_t ea=c->r[3]+0x00000154u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EF868
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EF86C
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF870
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF874
  W32(c->r[3]+0x00000110u,c->r[4]); // 800EF878
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[7]);} // 800EF87C
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[7]);} // 800EF880
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800EF884
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[6]);} // 800EF888
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 800EF88C
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[4]);} // 800EF890
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 800EF894
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[2]);} // 800EF898
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 800EF89C
  W32(c->r[3]+0x00000138u,c->r[0]); // 800EF8A0
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 800EF8A4
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 800EF8A8
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[2]);} // 800EF8AC
  f_800EF900(c); return; // 800EF8B0
}

// AXFXReverbHiShutdown
void f_800EF8C0(Ctx* __restrict c) {
  trace_call(0x800EF8C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF8C0
  c->r[0]=c->lr; // 800EF8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF8C8
  c->lr=0x800EF8D0u; f_800EFAA0(c); // 800EF8CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF8D0
  c->r[3]=0u+0x00000001u; // 800EF8D4
  c->lr=c->r[0]; // 800EF8D8
  c->r[1]=c->r[1]+0x00000010u; // 800EF8DC
  return; // 800EF8E0
}

// AXFXReverbHiCallback
void f_800EF8F0(Ctx* __restrict c) {
  trace_call(0x800EF8F0u);
  f_800EFB00(c); return; // 800EF8F0
}

// AXFXReverbHiExpInit
void f_800EF900(Ctx* __restrict c) {
  trace_call(0x800EF900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF900
  c->r[0]=c->lr; // 800EF904
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EF90C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF910
  c->r[30]=c->r[3]|c->r[3]; // 800EF914
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EF918
  c->lr=0x800EF920u; f_800CBAA0(c); // 800EF91C
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF920
  c->r[0]=0u+0x00000001u; // 800EF924
  {uint32_t ea=c->r[2]+0xFFFF9B6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF928
  c->r[31]=c->r[3]|c->r[3]; // 800EF92C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800EF930
  fcmp(c,0,c->f[1],c->f[0]); // 800EF934
  if (!crb(c,0)) { goto L_800EF970; } // 800EF938
  c->lr=0x800EF940u; f_800CBAA0(c); // 800EF93C
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800EF940
  c->r[29]=c->r[3]|c->r[3]; // 800EF944
  c->r[3]=c->r[30]|c->r[30]; // 800EF948
  c->r[0]=c->r[0]|0x00000001u; // 800EF94C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800EF950
  c->lr=0x800EF958u; f_800F02E0(c); // 800EF954
  c->r[3]=c->r[29]|c->r[29]; // 800EF958
  c->lr=0x800EF960u; f_800CBAE0(c); // 800EF95C
  c->r[3]=c->r[31]|c->r[31]; // 800EF960
  c->lr=0x800EF968u; f_800CBAE0(c); // 800EF964
  c->r[3]=0u+0x00000000u; // 800EF968
  goto L_800EFA80; // 800EF96C
L_800EF970:;
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF970
  c->r[3]=0u+0x802B0000u; // 800EF974
  c->r[3]=c->r[3]+0x00004580u; // 800EF978
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 800EF97C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800EF980
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800EF984
  c->lr=0x800EF98Cu; f_80217784(c); // 800EF988
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EF98C
  c->r[4]=0u+0x802B0000u; // 800EF990
  c->r[4]=c->r[4]+0x00004640u; // 800EF994
  c->r[3]=c->r[30]|c->r[30]; // 800EF998
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800EF99C
  W32(c->r[30]+0x00000080u,c->r[0]); // 800EF9A0
  c->r[0]=R32(c->r[4]+0x000000C4u); // 800EF9A4
  W32(c->r[30]+0x00000084u,c->r[0]); // 800EF9A8
  c->r[0]=R32(c->r[4]+0x000000C8u); // 800EF9AC
  W32(c->r[30]+0x00000088u,c->r[0]); // 800EF9B0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800EF9B4
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800EF9B8
  c->r[0]=R32(c->r[4]+0x000000D0u); // 800EF9BC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 800EF9C0
  c->r[0]=R32(c->r[4]+0x000000D4u); // 800EF9C4
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800EF9C8
  c->r[0]=R32(c->r[4]+0x000000D8u); // 800EF9CC
  W32(c->r[30]+0x000000F0u,c->r[0]); // 800EF9D0
  c->r[0]=R32(c->r[4]+0x000000DCu); // 800EF9D4
  W32(c->r[30]+0x000000F4u,c->r[0]); // 800EF9D8
  c->lr=0x800EF9E0u; f_800F0030(c); // 800EF9DC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF9E0
  if (!crb(c,2)) { goto L_800EFA1C; } // 800EF9E4
  c->lr=0x800EF9ECu; f_800CBAA0(c); // 800EF9E8
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800EF9EC
  c->r[29]=c->r[3]|c->r[3]; // 800EF9F0
  c->r[3]=c->r[30]|c->r[30]; // 800EF9F4
  c->r[0]=c->r[0]|0x00000001u; // 800EF9F8
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800EF9FC
  c->lr=0x800EFA04u; f_800F02E0(c); // 800EFA00
  c->r[3]=c->r[29]|c->r[29]; // 800EFA04
  c->lr=0x800EFA0Cu; f_800CBAE0(c); // 800EFA08
  c->r[3]=c->r[31]|c->r[31]; // 800EFA0C
  c->lr=0x800EFA14u; f_800CBAE0(c); // 800EFA10
  c->r[3]=0u+0x00000000u; // 800EFA14
  goto L_800EFA80; // 800EFA18
L_800EFA1C:;
  c->r[3]=c->r[30]|c->r[30]; // 800EFA1C
  c->lr=0x800EFA24u; f_800F01B0(c); // 800EFA20
  c->r[3]=c->r[30]|c->r[30]; // 800EFA24
  c->lr=0x800EFA2Cu; f_800F0400(c); // 800EFA28
  cmps(c,0,(int32_t)c->r[3],0); // 800EFA2C
  if (!crb(c,2)) { goto L_800EFA68; } // 800EFA30
  c->lr=0x800EFA38u; f_800CBAA0(c); // 800EFA34
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800EFA38
  c->r[29]=c->r[3]|c->r[3]; // 800EFA3C
  c->r[3]=c->r[30]|c->r[30]; // 800EFA40
  c->r[0]=c->r[0]|0x00000001u; // 800EFA44
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800EFA48
  c->lr=0x800EFA50u; f_800F02E0(c); // 800EFA4C
  c->r[3]=c->r[29]|c->r[29]; // 800EFA50
  c->lr=0x800EFA58u; f_800CBAE0(c); // 800EFA54
  c->r[3]=c->r[31]|c->r[31]; // 800EFA58
  c->lr=0x800EFA60u; f_800CBAE0(c); // 800EFA5C
  c->r[3]=0u+0x00000000u; // 800EFA60
  goto L_800EFA80; // 800EFA64
L_800EFA68:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800EFA68
  c->r[3]=c->r[31]|c->r[31]; // 800EFA6C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800EFA70
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800EFA74
  c->lr=0x800EFA7Cu; f_800CBAE0(c); // 800EFA78
  c->r[3]=0u+0x00000001u; // 800EFA7C
L_800EFA80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFA80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EFA84
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EFA88
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EFA8C
  c->lr=c->r[0]; // 800EFA90
  c->r[1]=c->r[1]+0x00000020u; // 800EFA94
  return; // 800EFA98
}

// AXFXReverbHiExpShutdown
void f_800EFAA0(Ctx* __restrict c) {
  trace_call(0x800EFAA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFAA0
  c->r[0]=c->lr; // 800EFAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFAA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFAAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFAB0
  c->r[30]=c->r[3]|c->r[3]; // 800EFAB4
  c->lr=0x800EFABCu; f_800CBAA0(c); // 800EFAB8
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800EFABC
  c->r[31]=c->r[3]|c->r[3]; // 800EFAC0
  c->r[3]=c->r[30]|c->r[30]; // 800EFAC4
  c->r[0]=c->r[0]|0x00000001u; // 800EFAC8
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800EFACC
  c->lr=0x800EFAD4u; f_800F02E0(c); // 800EFAD0
  c->r[3]=c->r[31]|c->r[31]; // 800EFAD4
  c->lr=0x800EFADCu; f_800CBAE0(c); // 800EFAD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFAE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFAE4
  c->lr=c->r[0]; // 800EFAE8
  c->r[1]=c->r[1]+0x00000010u; // 800EFAEC
  return; // 800EFAF0
}

// AXFXReverbHiExpCallback
void f_800EFB00(Ctx* __restrict c) {
  trace_call(0x800EFB00u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB00
  c->r[0]=c->lr; // 800EFB04
  W32(c->r[1]+0x00000074u,c->r[0]); // 800EFB08
  c->r[11]=c->r[1]+0x00000070u; // 800EFB0C
  c->lr=0x800EFB14u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EFB10
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 800EFB14
  cmps(c,0,(int32_t)c->r[0],0); // 800EFB18
  if (crb(c,2)) { goto L_800EFB2C; } // 800EFB1C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800EFB20
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 800EFB24
  goto L_800F000C; // 800EFB28
L_800EFB2C:;
  c->r[7]=R32(c->r[4]+0x00000138u); // 800EFB2C
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EFB30
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EFB34
  cmps(c,0,(int32_t)c->r[7],0); // 800EFB38
  c->r[0]=R32(c->r[3]+0x00000008u); // 800EFB3C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800EFB40
  W32(c->r[1]+0x00000030u,c->r[5]); // 800EFB44
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EFB48
  if (crb(c,2)) { goto L_800EFB68; } // 800EFB4C
  c->r[5]=R32(c->r[7]+0x00000000u); // 800EFB50
  c->r[3]=R32(c->r[7]+0x00000004u); // 800EFB54
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EFB58
  W32(c->r[1]+0x00000008u,c->r[5]); // 800EFB5C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800EFB60
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EFB64
L_800EFB68:;
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 800EFB68
  cmps(c,0,(int32_t)c->r[7],0); // 800EFB6C
  if (crb(c,2)) { goto L_800EFB80; } // 800EFB70
  c->r[3]=R32(c->r[7]+0x00000000u); // 800EFB74
  c->r[5]=R32(c->r[7]+0x00000004u); // 800EFB78
  c->r[6]=R32(c->r[7]+0x00000008u); // 800EFB7C
L_800EFB80:;
  {uint32_t ea=c->r[2]+0xFFFF9B70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFB80
  c->r[31]=0u+0x00000000u; // 800EFB84
  {uint32_t ea=c->r[4]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFB88
  c->r[29]=0u+0x00000000u; // 800EFB8C
  {uint32_t ea=c->r[2]+0xFFFF9B74u; c->f[5]=c->ps1[5]=RF32(ea);} // 800EFB90
  c->r[0]=0u+0x43300000u; // 800EFB94
  {uint32_t ea=c->r[4]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EFB98
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 800EFB9C
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFBA0
  c->r[30]=0u+0x00000003u; // 800EFBA4
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFBA8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 800EFBAC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EFBB0
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 800EFBB4
  {uint32_t ea=c->r[2]+0xFFFF9B80u; c->f[0]=RF64(ea);} // 800EFBB8
  c->r[0]=c->r[0]|0x00000000u; // 800EFBBC
L_800EFBC0:;
  c->r[9]=c->r[4]|c->r[4]; // 800EFBC0
  c->r[10]=c->r[4]|c->r[4]; // 800EFBC4
  c->r[11]=c->r[4]|c->r[4]; // 800EFBC8
  c->r[7]=c->r[1]+0x00000008u; // 800EFBCC
  c->r[8]=c->r[1]+0x0000002Cu; // 800EFBD0
  c->r[12]=c->r[1]+0x00000014u; // 800EFBD4
  c->ctr=c->r[30]; // 800EFBD8
  c->r[0]=c->r[0]|0x00000000u; // 800EFBDC
L_800EFBE0:;
  c->r[26]=R32(c->r[4]+0x00000138u); // 800EFBE0
  cmps(c,0,(int32_t)c->r[26],0); // 800EFBE4
  if (crb(c,2)) { goto L_800EFC20; } // 800EFBE8
  c->r[27]=R32(c->r[7]+0x00000000u); // 800EFBEC
  c->r[28]=R32(c->r[8]+0x00000000u); // 800EFBF0
  c->r[26]=R32(c->r[27]+0x00000000u); // 800EFBF4
  c->r[27]=c->r[27]+0x00000004u; // 800EFBF8
  c->r[28]=R32(c->r[28]+0x00000000u); // 800EFBFC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800EFC00
  c->r[26]=c->r[28]+c->r[26]; // 800EFC04
  c->r[26]=c->r[26]^0x80000000u; // 800EFC08
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 800EFC0C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 800EFC10
  W32(c->r[7]+0x00000000u,c->r[27]); // 800EFC14
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 800EFC18
  goto L_800EFC3C; // 800EFC1C
L_800EFC20:;
  c->r[26]=R32(c->r[8]+0x00000000u); // 800EFC20
  W32(c->r[1]+0x00000040u,c->r[0]); // 800EFC24
  c->r[26]=R32(c->r[26]+0x00000000u); // 800EFC28
  c->r[26]=c->r[26]^0x80000000u; // 800EFC2C
  W32(c->r[1]+0x00000044u,c->r[26]); // 800EFC30
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 800EFC34
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 800EFC38
L_800EFC3C:;
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 800EFC3C
  c->r[27]=R32(c->r[4]+0x00000010u); // 800EFC40
  c->r[26]=R32(c->r[4]+0x00000014u); // 800EFC44
  c->r[28]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800EFC48
  c->r[25]=R32(c->r[9]+0x00000000u); // 800EFC4C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFC50
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 800EFC54
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800EFC58
  {uint32_t ea=c->r[25]+c->r[28]; c->f[8]=c->ps1[8]=RF32(ea);} // 800EFC5C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 800EFC60
  {uint32_t ea=c->r[25]+c->r[27]; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFC64
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 800EFC68
  {uint32_t ea=c->r[4]+0x00000028u; c->f[10]=c->ps1[10]=RF32(ea);} // 800EFC6C
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 800EFC70
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 800EFC74
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[11]);} // 800EFC78
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[9]); // 800EFC7C
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 800EFC80
  c->r[27]=R32(c->r[4]+0x0000003Cu); // 800EFC84
  cmps(c,0,(int32_t)c->r[27],0); // 800EFC88
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 800EFC8C
  if (crb(c,2)) { goto L_800EFCAC; } // 800EFC90
  c->r[27]=R32(c->r[4]+0x00000038u); // 800EFC94
  c->r[28]=R32(c->r[9]+0x0000002Cu); // 800EFC98
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFC9C
  {uint32_t ea=c->r[28]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 800EFCA0
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[11]);} // 800EFCA4
  goto L_800EFCB0; // 800EFCA8
L_800EFCAC:;
  c->f[9]=c->f[11]; // 800EFCAC
L_800EFCB0:;
  c->r[27]=R32(c->r[4]+0x00000068u); // 800EFCB0
  c->r[25]=R32(c->r[10]+0x00000044u); // 800EFCB4
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFCB8
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800EFCBC
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 800EFCC0
  {uint32_t ea=c->r[2]+0xFFFF9B6Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800EFCC4
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 800EFCC8
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 800EFCCC
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 800EFCD0
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 800EFCD4
  c->r[27]=R32(c->r[4]+0x0000006Cu); // 800EFCD8
  c->r[26]=R32(c->r[10]+0x00000048u); // 800EFCDC
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFCE0
  {uint32_t ea=c->r[4]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 800EFCE4
  {uint32_t ea=c->r[26]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 800EFCE8
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 800EFCEC
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 800EFCF0
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 800EFCF4
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 800EFCF8
  c->r[27]=R32(c->r[4]+0x00000070u); // 800EFCFC
  c->r[28]=R32(c->r[10]+0x0000004Cu); // 800EFD00
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFD04
  {uint32_t ea=c->r[4]+0x00000094u; c->f[7]=c->ps1[7]=RF32(ea);} // 800EFD08
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 800EFD0C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 800EFD10
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 800EFD14
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 800EFD18
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 800EFD1C
  c->r[27]=R32(c->r[4]+0x000000B0u); // 800EFD20
  c->r[25]=R32(c->r[11]+0x00000098u); // 800EFD24
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFD28
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 800EFD2C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 800EFD30
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 800EFD34
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 800EFD38
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 800EFD3C
  c->r[27]=R32(c->r[4]+0x000000B4u); // 800EFD40
  c->r[26]=R32(c->r[11]+0x0000009Cu); // 800EFD44
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFD48
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 800EFD4C
  {uint32_t ea=c->r[26]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 800EFD50
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 800EFD54
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 800EFD58
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 800EFD5C
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 800EFD60
  {uint32_t ea=c->r[9]+0x000000FCu; c->f[7]=c->ps1[7]=RF32(ea);} // 800EFD64
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 800EFD68
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 800EFD6C
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 800EFD70
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 800EFD74
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[9]);} // 800EFD78
  c->r[27]=R32(c->r[9]+0x000000D4u); // 800EFD7C
  c->r[28]=R32(c->r[9]+0x000000C8u); // 800EFD80
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EFD84
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 800EFD88
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 800EFD8C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 800EFD90
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 800EFD94
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 800EFD98
  c->r[27]=R32(c->r[9]+0x000000D4u); // 800EFD9C
  c->r[27]=c->r[27]+0x00000001u; // 800EFDA0
  W32(c->r[9]+0x000000D4u,c->r[27]); // 800EFDA4
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 800EFDA8
  c->r[28]=R32(c->r[9]+0x000000E0u); // 800EFDAC
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[7]);} // 800EFDB0
  cmpu(c,0,c->r[27],c->r[28]); // 800EFDB4
  if (crb(c,0)) { goto L_800EFDC0; } // 800EFDB8
  W32(c->r[9]+0x000000D4u,c->r[29]); // 800EFDBC
L_800EFDC0:;
  {uint32_t ea=c->r[12]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 800EFDC0
  c->r[7]=c->r[7]+0x00000004u; // 800EFDC4
  c->r[8]=c->r[8]+0x00000004u; // 800EFDC8
  c->r[9]=c->r[9]+0x00000004u; // 800EFDCC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 800EFDD0
  c->r[10]=c->r[10]+0x0000000Cu; // 800EFDD4
  c->r[11]=c->r[11]+0x00000008u; // 800EFDD8
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 800EFDDC
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[2]);} // 800EFDE0
  c->r[12]=c->r[12]+0x00000004u; // 800EFDE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EFBE0; } // 800EFDE8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[12]=c->ps1[12]=RF32(ea);} // 800EFDEC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 800EFDF0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 800EFDF4
  c->f[2]=c->ps1[2]=S(c->f[12]+c->f[11]); // 800EFDF8
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 800EFDFC
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[11]); // 800EFE00
  c->r[8]=R32(c->r[1]+0x00000034u); // 800EFE04
  c->r[11]=c->r[12]+0x00000004u; // 800EFE08
  c->r[10]=R32(c->r[1]+0x00000030u); // 800EFE0C
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[6]); // 800EFE10
  c->r[7]=c->r[8]+0x00000004u; // 800EFE14
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[6]); // 800EFE18
  c->r[9]=c->r[10]+0x00000004u; // 800EFE1C
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFE20
  c->f[13]=c->ps1[13]=S(c->f[10]+c->f[12]); // 800EFE24
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 800EFE28
  W32(c->r[1]+0x0000002Cu,c->r[11]); // 800EFE2C
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 800EFE30
  c->f[7]=c->ps1[7]=S(c->f[13]*c->f[6]); // 800EFE34
  W32(c->r[1]+0x00000034u,c->r[7]); // 800EFE38
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 800EFE3C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 800EFE40
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 800EFE44
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800EFE48
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 800EFE4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 800EFE50
  c->r[11]=R32(c->r[1]+0x00000044u); // 800EFE54
  W32(c->r[12]+0x00000000u,c->r[11]); // 800EFE58
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFE5C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 800EFE60
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 800EFE64
  W32(c->r[1]+0x00000030u,c->r[9]); // 800EFE68
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800EFE6C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800EFE70
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 800EFE74
  W32(c->r[10]+0x00000000u,c->r[7]); // 800EFE78
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFE7C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 800EFE80
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800EFE84
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 800EFE88
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800EFE8C
  W32(c->r[8]+0x00000000u,c->r[7]); // 800EFE90
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 800EFE94
  cmps(c,0,(int32_t)c->r[7],0); // 800EFE98
  if (crb(c,2)) { goto L_800EFEF4; } // 800EFE9C
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFEA0
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 800EFEA4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800EFEA8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 800EFEAC
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800EFEB0
  W32(c->r[3]+0x00000000u,c->r[7]); // 800EFEB4
  c->r[3]=c->r[3]+0x00000004u; // 800EFEB8
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFEBC
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 800EFEC0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800EFEC4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 800EFEC8
  c->r[7]=R32(c->r[1]+0x00000044u); // 800EFECC
  W32(c->r[5]+0x00000000u,c->r[7]); // 800EFED0
  c->r[5]=c->r[5]+0x00000004u; // 800EFED4
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EFED8
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 800EFEDC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800EFEE0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800EFEE4
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 800EFEE8
  W32(c->r[6]+0x00000000u,c->r[7]); // 800EFEEC
  c->r[6]=c->r[6]+0x00000004u; // 800EFEF0
L_800EFEF4:;
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 800EFEF4
  c->r[8]=c->r[7]+0x00000001u; // 800EFEF8
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 800EFEFC
  c->r[7]=R32(c->r[4]+0x00000018u); // 800EFF00
  cmpu(c,0,c->r[8],c->r[7]); // 800EFF04
  if (crb(c,0)) { goto L_800EFF10; } // 800EFF08
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800EFF0C
L_800EFF10:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 800EFF10
  c->r[8]=c->r[7]+0x00000001u; // 800EFF14
  W32(c->r[4]+0x00000010u,c->r[8]); // 800EFF18
  c->r[7]=R32(c->r[4]+0x00000018u); // 800EFF1C
  cmpu(c,0,c->r[8],c->r[7]); // 800EFF20
  if (crb(c,0)) { goto L_800EFF2C; } // 800EFF24
  W32(c->r[4]+0x00000010u,c->r[29]); // 800EFF28
L_800EFF2C:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 800EFF2C
  c->r[9]=c->r[4]+0x00000008u; // 800EFF30
  c->r[8]=c->r[7]+0x00000001u; // 800EFF34
  W32(c->r[4]+0x00000014u,c->r[8]); // 800EFF38
  c->r[7]=R32(c->r[4]+0x00000018u); // 800EFF3C
  cmpu(c,0,c->r[8],c->r[7]); // 800EFF40
  if (crb(c,0)) { goto L_800EFF4C; } // 800EFF44
  W32(c->r[9]+0x0000000Cu,c->r[29]); // 800EFF48
L_800EFF4C:;
  c->r[8]=R32(c->r[4]+0x0000003Cu); // 800EFF4C
  cmps(c,0,(int32_t)c->r[8],0); // 800EFF50
  if (crb(c,2)) { goto L_800EFF70; } // 800EFF54
  c->r[7]=R32(c->r[4]+0x00000038u); // 800EFF58
  c->r[7]=c->r[7]+0x00000001u; // 800EFF5C
  W32(c->r[4]+0x00000038u,c->r[7]); // 800EFF60
  cmpu(c,0,c->r[7],c->r[8]); // 800EFF64
  if (crb(c,0)) { goto L_800EFF70; } // 800EFF68
  W32(c->r[4]+0x00000038u,c->r[29]); // 800EFF6C
L_800EFF70:;
  c->r[7]=R32(c->r[4]+0x00000068u); // 800EFF70
  c->r[8]=c->r[7]+0x00000001u; // 800EFF74
  W32(c->r[4]+0x00000068u,c->r[8]); // 800EFF78
  c->r[7]=R32(c->r[4]+0x00000074u); // 800EFF7C
  cmpu(c,0,c->r[8],c->r[7]); // 800EFF80
  if (crb(c,0)) { goto L_800EFF8C; } // 800EFF84
  W32(c->r[4]+0x00000068u,c->r[29]); // 800EFF88
L_800EFF8C:;
  c->r[7]=R32(c->r[4]+0x0000006Cu); // 800EFF8C
  c->r[8]=c->r[7]+0x00000001u; // 800EFF90
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 800EFF94
  c->r[7]=R32(c->r[4]+0x00000078u); // 800EFF98
  cmpu(c,0,c->r[8],c->r[7]); // 800EFF9C
  if (crb(c,0)) { goto L_800EFFA8; } // 800EFFA0
  W32(c->r[4]+0x0000006Cu,c->r[29]); // 800EFFA4
L_800EFFA8:;
  c->r[7]=R32(c->r[4]+0x00000070u); // 800EFFA8
  c->r[9]=c->r[4]+0x00000008u; // 800EFFAC
  c->r[8]=c->r[7]+0x00000001u; // 800EFFB0
  W32(c->r[4]+0x00000070u,c->r[8]); // 800EFFB4
  c->r[7]=R32(c->r[4]+0x0000007Cu); // 800EFFB8
  cmpu(c,0,c->r[8],c->r[7]); // 800EFFBC
  if (crb(c,0)) { goto L_800EFFC8; } // 800EFFC0
  W32(c->r[9]+0x00000068u,c->r[29]); // 800EFFC4
L_800EFFC8:;
  c->r[7]=R32(c->r[4]+0x000000B0u); // 800EFFC8
  c->r[8]=c->r[7]+0x00000001u; // 800EFFCC
  W32(c->r[4]+0x000000B0u,c->r[8]); // 800EFFD0
  c->r[7]=R32(c->r[4]+0x000000B8u); // 800EFFD4
  cmpu(c,0,c->r[8],c->r[7]); // 800EFFD8
  if (crb(c,0)) { goto L_800EFFE4; } // 800EFFDC
  W32(c->r[4]+0x000000B0u,c->r[29]); // 800EFFE0
L_800EFFE4:;
  c->r[7]=R32(c->r[4]+0x000000B4u); // 800EFFE4
  c->r[8]=c->r[7]+0x00000001u; // 800EFFE8
  W32(c->r[4]+0x000000B4u,c->r[8]); // 800EFFEC
  c->r[7]=R32(c->r[4]+0x000000BCu); // 800EFFF0
  cmpu(c,0,c->r[8],c->r[7]); // 800EFFF4
  if (crb(c,0)) { goto L_800F0000; } // 800EFFF8
  W32(c->r[4]+0x000000B4u,c->r[29]); // 800EFFFC
L_800F0000:;
  c->r[31]=c->r[31]+0x00000001u; // 800F0000
  cmpu(c,0,c->r[31],0x00000060u); // 800F0004
  if (crb(c,0)) { IRQCHK(c); goto L_800EFBC0; } // 800F0008
L_800F000C:;
  c->r[11]=c->r[1]+0x00000070u; // 800F000C
  c->lr=0x800F0014u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0010
  c->r[0]=R32(c->r[1]+0x00000074u); // 800F0014
  c->lr=c->r[0]; // 800F0018
  c->r[1]=c->r[1]+0x00000070u; // 800F001C
  return; // 800F0020
}

// __AllocDelayLine
void f_800F0030(Ctx* __restrict c) {
  trace_call(0x800F0030u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0030
  c->r[0]=c->lr; // 800F0034
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0038
  c->r[11]=c->r[1]+0x00000030u; // 800F003C
  c->lr=0x800F0044u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0040
  c->r[23]=c->r[3]|c->r[3]; // 800F0044
  c->r[24]=0u+0x00000000u; // 800F0048
  c->r[30]=c->r[23]|c->r[23]; // 800F004C
  c->r[31]=0u+0x00000000u; // 800F0050
  c->r[29]=c->r[23]|c->r[23]; // 800F0054
  c->r[28]=c->r[23]|c->r[23]; // 800F0058
L_800F005C:;
  c->r[0]=R32(c->r[23]+0x0000001Cu); // 800F005C
  c->r[12]=R32(c->r[13]+0xFFFF9080u); // 800F0060
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0064
  c->ctr=c->r[12]; // 800F0068
  if (true) { c->lr=0x800F0070u; dispatch(c,c->ctr); } // 800F006C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0070
  W32(c->r[30]+0x00000000u,c->r[3]); // 800F0074
  if (!crb(c,2)) { goto L_800F0084; } // 800F0078
  c->r[3]=0u+0x00000000u; // 800F007C
  goto L_800F018C; // 800F0080
L_800F0084:;
  c->r[0]=R32(c->r[23]+0x00000040u); // 800F0084
  cmps(c,0,(int32_t)c->r[0],0); // 800F0088
  if (crb(c,2)) { goto L_800F00B4; } // 800F008C
  c->r[12]=R32(c->r[13]+0xFFFF9080u); // 800F0090
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0094
  c->ctr=c->r[12]; // 800F0098
  if (true) { c->lr=0x800F00A0u; dispatch(c,c->ctr); } // 800F009C
  cmps(c,0,(int32_t)c->r[3],0); // 800F00A0
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800F00A4
  if (!crb(c,2)) { goto L_800F00B8; } // 800F00A8
  c->r[3]=0u+0x00000000u; // 800F00AC
  goto L_800F018C; // 800F00B0
L_800F00B4:;
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 800F00B4
L_800F00B8:;
  c->r[26]=c->r[23]|c->r[23]; // 800F00B8
  c->r[27]=c->r[29]|c->r[29]; // 800F00BC
  c->r[25]=0u+0x00000000u; // 800F00C0
L_800F00C4:;
  c->r[0]=R32(c->r[26]+0x00000080u); // 800F00C4
  c->r[12]=R32(c->r[13]+0xFFFF9080u); // 800F00C8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F00CC
  c->ctr=c->r[12]; // 800F00D0
  if (true) { c->lr=0x800F00D8u; dispatch(c,c->ctr); } // 800F00D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F00D8
  W32(c->r[27]+0x00000044u,c->r[3]); // 800F00DC
  if (!crb(c,2)) { goto L_800F00EC; } // 800F00E0
  c->r[3]=0u+0x00000000u; // 800F00E4
  goto L_800F018C; // 800F00E8
L_800F00EC:;
  c->r[25]=c->r[25]+0x00000001u; // 800F00EC
  c->r[27]=c->r[27]+0x00000004u; // 800F00F0
  cmpu(c,0,c->r[25],0x00000003u); // 800F00F4
  c->r[26]=c->r[26]+0x00000004u; // 800F00F8
  if (crb(c,0)) { IRQCHK(c); goto L_800F00C4; } // 800F00FC
  c->r[27]=c->r[23]|c->r[23]; // 800F0100
  c->r[26]=c->r[28]|c->r[28]; // 800F0104
  c->r[25]=0u+0x00000000u; // 800F0108
L_800F010C:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 800F010C
  c->r[12]=R32(c->r[13]+0xFFFF9080u); // 800F0110
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0114
  c->ctr=c->r[12]; // 800F0118
  if (true) { c->lr=0x800F0120u; dispatch(c,c->ctr); } // 800F011C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0120
  W32(c->r[26]+0x00000098u,c->r[3]); // 800F0124
  if (!crb(c,2)) { goto L_800F0134; } // 800F0128
  c->r[3]=0u+0x00000000u; // 800F012C
  goto L_800F018C; // 800F0130
L_800F0134:;
  c->r[25]=c->r[25]+0x00000001u; // 800F0134
  c->r[26]=c->r[26]+0x00000004u; // 800F0138
  cmpu(c,0,c->r[25],0x00000002u); // 800F013C
  c->r[27]=c->r[27]+0x00000004u; // 800F0140
  if (crb(c,0)) { IRQCHK(c); goto L_800F010C; } // 800F0144
  c->r[0]=R32(c->r[30]+0x000000ECu); // 800F0148
  c->r[12]=R32(c->r[13]+0xFFFF9080u); // 800F014C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0150
  c->ctr=c->r[12]; // 800F0154
  if (true) { c->lr=0x800F015Cu; dispatch(c,c->ctr); } // 800F0158
  cmps(c,0,(int32_t)c->r[3],0); // 800F015C
  W32(c->r[30]+0x000000C8u,c->r[3]); // 800F0160
  if (!crb(c,2)) { goto L_800F0170; } // 800F0164
  c->r[3]=0u+0x00000000u; // 800F0168
  goto L_800F018C; // 800F016C
L_800F0170:;
  c->r[24]=c->r[24]+0x00000001u; // 800F0170
  c->r[29]=c->r[29]+0x0000000Cu; // 800F0174
  cmpu(c,0,c->r[24],0x00000003u); // 800F0178
  c->r[28]=c->r[28]+0x00000008u; // 800F017C
  c->r[30]=c->r[30]+0x00000004u; // 800F0180
  if (crb(c,0)) { IRQCHK(c); goto L_800F005C; } // 800F0184
  c->r[3]=0u+0x00000001u; // 800F0188
L_800F018C:;
  c->r[11]=c->r[1]+0x00000030u; // 800F018C
  c->lr=0x800F0194u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0190
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F0194
  c->lr=c->r[0]; // 800F0198
  c->r[1]=c->r[1]+0x00000030u; // 800F019C
  return; // 800F01A0
}

// __BzeroDelayLines
void f_800F01B0(Ctx* __restrict c) {
  trace_call(0x800F01B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F01B0
  c->r[0]=c->lr; // 800F01B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F01B8
  c->r[11]=c->r[1]+0x00000030u; // 800F01BC
  c->lr=0x800F01C4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F01C0
  c->r[24]=c->r[3]|c->r[3]; // 800F01C4
  c->r[25]=0u+0x00000000u; // 800F01C8
  c->r[31]=c->r[24]|c->r[24]; // 800F01CC
  c->r[30]=c->r[24]|c->r[24]; // 800F01D0
  c->r[29]=c->r[24]|c->r[24]; // 800F01D4
L_800F01D8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F01D8
  cmps(c,0,(int32_t)c->r[3],0); // 800F01DC
  if (crb(c,2)) { goto L_800F01F4; } // 800F01E0
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 800F01E4
  c->r[4]=0u+0x00000000u; // 800F01E8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F01EC
  c->lr=0x800F01F4u; f_800046B4(c); // 800F01F0
L_800F01F4:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800F01F4
  cmps(c,0,(int32_t)c->r[3],0); // 800F01F8
  if (crb(c,2)) { goto L_800F0210; } // 800F01FC
  c->r[0]=R32(c->r[24]+0x00000040u); // 800F0200
  c->r[4]=0u+0x00000000u; // 800F0204
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0208
  c->lr=0x800F0210u; f_800046B4(c); // 800F020C
L_800F0210:;
  c->r[27]=c->r[30]|c->r[30]; // 800F0210
  c->r[28]=c->r[24]|c->r[24]; // 800F0214
  c->r[26]=0u+0x00000000u; // 800F0218
L_800F021C:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 800F021C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0220
  if (crb(c,2)) { goto L_800F0238; } // 800F0224
  c->r[0]=R32(c->r[28]+0x00000080u); // 800F0228
  c->r[4]=0u+0x00000000u; // 800F022C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0230
  c->lr=0x800F0238u; f_800046B4(c); // 800F0234
L_800F0238:;
  c->r[26]=c->r[26]+0x00000001u; // 800F0238
  c->r[28]=c->r[28]+0x00000004u; // 800F023C
  cmpu(c,0,c->r[26],0x00000003u); // 800F0240
  c->r[27]=c->r[27]+0x00000004u; // 800F0244
  if (crb(c,0)) { IRQCHK(c); goto L_800F021C; } // 800F0248
  c->r[28]=c->r[29]|c->r[29]; // 800F024C
  c->r[27]=c->r[24]|c->r[24]; // 800F0250
  c->r[26]=0u+0x00000000u; // 800F0254
L_800F0258:;
  c->r[3]=R32(c->r[28]+0x00000098u); // 800F0258
  cmps(c,0,(int32_t)c->r[3],0); // 800F025C
  if (crb(c,2)) { goto L_800F0274; } // 800F0260
  c->r[0]=R32(c->r[27]+0x000000C0u); // 800F0264
  c->r[4]=0u+0x00000000u; // 800F0268
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F026C
  c->lr=0x800F0274u; f_800046B4(c); // 800F0270
L_800F0274:;
  c->r[26]=c->r[26]+0x00000001u; // 800F0274
  c->r[27]=c->r[27]+0x00000004u; // 800F0278
  cmpu(c,0,c->r[26],0x00000002u); // 800F027C
  c->r[28]=c->r[28]+0x00000004u; // 800F0280
  if (crb(c,0)) { IRQCHK(c); goto L_800F0258; } // 800F0284
  c->r[3]=R32(c->r[31]+0x000000C8u); // 800F0288
  cmps(c,0,(int32_t)c->r[3],0); // 800F028C
  if (crb(c,2)) { goto L_800F02A4; } // 800F0290
  c->r[0]=R32(c->r[31]+0x000000ECu); // 800F0294
  c->r[4]=0u+0x00000000u; // 800F0298
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F029C
  c->lr=0x800F02A4u; f_800046B4(c); // 800F02A0
L_800F02A4:;
  c->r[25]=c->r[25]+0x00000001u; // 800F02A4
  c->r[30]=c->r[30]+0x0000000Cu; // 800F02A8
  cmpu(c,0,c->r[25],0x00000003u); // 800F02AC
  c->r[29]=c->r[29]+0x00000008u; // 800F02B0
  c->r[31]=c->r[31]+0x00000004u; // 800F02B4
  if (crb(c,0)) { IRQCHK(c); goto L_800F01D8; } // 800F02B8
  c->r[11]=c->r[1]+0x00000030u; // 800F02BC
  c->lr=0x800F02C4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F02C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F02C4
  c->lr=c->r[0]; // 800F02C8
  c->r[1]=c->r[1]+0x00000030u; // 800F02CC
  return; // 800F02D0
}

// __FreeDelayLine
void f_800F02E0(Ctx* __restrict c) {
  trace_call(0x800F02E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F02E0
  c->r[0]=c->lr; // 800F02E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F02E8
  c->r[11]=c->r[1]+0x00000030u; // 800F02EC
  c->lr=0x800F02F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F02F0
  c->r[25]=0u+0x00000000u; // 800F02F4
  c->r[30]=c->r[3]|c->r[3]; // 800F02F8
  c->r[31]=0u+0x00000000u; // 800F02FC
  c->r[29]=c->r[3]|c->r[3]; // 800F0300
  c->r[28]=c->r[3]|c->r[3]; // 800F0304
L_800F0308:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800F0308
  cmps(c,0,(int32_t)c->r[3],0); // 800F030C
  if (crb(c,2)) { goto L_800F0324; } // 800F0310
  c->r[12]=R32(c->r[13]+0xFFFF9084u); // 800F0314
  c->ctr=c->r[12]; // 800F0318
  if (true) { c->lr=0x800F0320u; dispatch(c,c->ctr); } // 800F031C
  W32(c->r[30]+0x00000000u,c->r[31]); // 800F0320
L_800F0324:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800F0324
  cmps(c,0,(int32_t)c->r[3],0); // 800F0328
  if (crb(c,2)) { goto L_800F0340; } // 800F032C
  c->r[12]=R32(c->r[13]+0xFFFF9084u); // 800F0330
  c->ctr=c->r[12]; // 800F0334
  if (true) { c->lr=0x800F033Cu; dispatch(c,c->ctr); } // 800F0338
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 800F033C
L_800F0340:;
  c->r[27]=c->r[29]|c->r[29]; // 800F0340
  c->r[26]=0u+0x00000000u; // 800F0344
L_800F0348:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 800F0348
  cmps(c,0,(int32_t)c->r[3],0); // 800F034C
  if (crb(c,2)) { goto L_800F0364; } // 800F0350
  c->r[12]=R32(c->r[13]+0xFFFF9084u); // 800F0354
  c->ctr=c->r[12]; // 800F0358
  if (true) { c->lr=0x800F0360u; dispatch(c,c->ctr); } // 800F035C
  W32(c->r[27]+0x00000044u,c->r[31]); // 800F0360
L_800F0364:;
  c->r[26]=c->r[26]+0x00000001u; // 800F0364
  c->r[27]=c->r[27]+0x00000004u; // 800F0368
  cmpu(c,0,c->r[26],0x00000003u); // 800F036C
  if (crb(c,0)) { IRQCHK(c); goto L_800F0348; } // 800F0370
  c->r[27]=c->r[28]|c->r[28]; // 800F0374
  c->r[26]=0u+0x00000000u; // 800F0378
L_800F037C:;
  c->r[3]=R32(c->r[27]+0x00000098u); // 800F037C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0380
  if (crb(c,2)) { goto L_800F0398; } // 800F0384
  c->r[12]=R32(c->r[13]+0xFFFF9084u); // 800F0388
  c->ctr=c->r[12]; // 800F038C
  if (true) { c->lr=0x800F0394u; dispatch(c,c->ctr); } // 800F0390
  W32(c->r[27]+0x00000098u,c->r[31]); // 800F0394
L_800F0398:;
  c->r[26]=c->r[26]+0x00000001u; // 800F0398
  c->r[27]=c->r[27]+0x00000004u; // 800F039C
  cmpu(c,0,c->r[26],0x00000002u); // 800F03A0
  if (crb(c,0)) { IRQCHK(c); goto L_800F037C; } // 800F03A4
  c->r[3]=R32(c->r[30]+0x000000C8u); // 800F03A8
  cmps(c,0,(int32_t)c->r[3],0); // 800F03AC
  if (crb(c,2)) { goto L_800F03C4; } // 800F03B0
  c->r[12]=R32(c->r[13]+0xFFFF9084u); // 800F03B4
  c->ctr=c->r[12]; // 800F03B8
  if (true) { c->lr=0x800F03C0u; dispatch(c,c->ctr); } // 800F03BC
  W32(c->r[30]+0x000000C8u,c->r[31]); // 800F03C0
L_800F03C4:;
  c->r[25]=c->r[25]+0x00000001u; // 800F03C4
  c->r[29]=c->r[29]+0x0000000Cu; // 800F03C8
  cmpu(c,0,c->r[25],0x00000003u); // 800F03CC
  c->r[28]=c->r[28]+0x00000008u; // 800F03D0
  c->r[30]=c->r[30]+0x00000004u; // 800F03D4
  if (crb(c,0)) { IRQCHK(c); goto L_800F0308; } // 800F03D8
  c->r[11]=c->r[1]+0x00000030u; // 800F03DC
  c->lr=0x800F03E4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F03E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F03E4
  c->lr=c->r[0]; // 800F03E8
  c->r[1]=c->r[1]+0x00000030u; // 800F03EC
  return; // 800F03F0
}

// __InitParams
void f_800F0400(Ctx* __restrict c) {
  trace_call(0x800F0400u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0400
  c->r[0]=c->lr; // 800F0404
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F0408
  c->r[11]=c->r[1]+0x00000030u; // 800F040C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800F0410
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800F0414
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800F0418
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800F041C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 800F0420
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 800F0424
  c->lr=0x800F042Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0428
  c->r[4]=R32(c->r[3]+0x00000110u); // 800F042C
  c->r[31]=0u+0x802B0000u; // 800F0430
  c->r[30]=c->r[3]|c->r[3]; // 800F0434
  cmpu(c,0,c->r[4],0x00000008u); // 800F0438
  c->r[31]=c->r[31]+0x00004580u; // 800F043C
  if (crb(c,0)) { goto L_800F044C; } // 800F0440
  c->r[3]=0u+0x00000000u; // 800F0444
  goto L_800F06F4; // 800F0448
L_800F044C:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[4]=c->ps1[4]=RF32(ea);} // 800F044C
  {uint32_t ea=c->r[2]+0xFFFF9B6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0450
  fcmp(c,0,c->f[4],c->f[2]); // 800F0454
  if (crb(c,0)) { goto L_800F0468; } // 800F0458
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F045C
  fcmp(c,0,c->f[4],c->f[0]); // 800F0460
  if (!crb(c,1)) { goto L_800F0470; } // 800F0464
L_800F0468:;
  c->r[3]=0u+0x00000000u; // 800F0468
  goto L_800F06F4; // 800F046C
L_800F0470:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 800F0470
  cmpu(c,0,c->r[0],0x00000006u); // 800F0474
  if (crb(c,0)) { goto L_800F0484; } // 800F0478
  c->r[3]=0u+0x00000000u; // 800F047C
  goto L_800F06F4; // 800F0480
L_800F0484:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0484
  fcmp(c,0,c->f[0],c->f[2]); // 800F0488
  if (!crb(c,0)) { goto L_800F0498; } // 800F048C
  c->r[3]=0u+0x00000000u; // 800F0490
  goto L_800F06F4; // 800F0494
L_800F0498:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0498
  fcmp(c,0,c->f[0],c->f[2]); // 800F049C
  if (crb(c,0)) { goto L_800F04B0; } // 800F04A0
  {uint32_t ea=c->r[2]+0xFFFF9B70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F04A4
  fcmp(c,0,c->f[0],c->f[1]); // 800F04A8
  if (!crb(c,1)) { goto L_800F04B8; } // 800F04AC
L_800F04B0:;
  c->r[3]=0u+0x00000000u; // 800F04B0
  goto L_800F06F4; // 800F04B4
L_800F04B8:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F04B8
  fcmp(c,0,c->f[0],c->f[2]); // 800F04BC
  if (crb(c,0)) { goto L_800F04CC; } // 800F04C0
  fcmp(c,0,c->f[0],c->f[1]); // 800F04C4
  if (!crb(c,1)) { goto L_800F04D4; } // 800F04C8
L_800F04CC:;
  c->r[3]=0u+0x00000000u; // 800F04CC
  goto L_800F06F4; // 800F04D0
L_800F04D4:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F04D4
  fcmp(c,0,c->f[0],c->f[2]); // 800F04D8
  if (crb(c,0)) { goto L_800F04E8; } // 800F04DC
  fcmp(c,0,c->f[0],c->f[1]); // 800F04E0
  if (!crb(c,1)) { goto L_800F04F0; } // 800F04E4
L_800F04E8:;
  c->r[3]=0u+0x00000000u; // 800F04E8
  goto L_800F06F4; // 800F04EC
L_800F04F0:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F04F0
  fcmp(c,0,c->f[3],c->f[2]); // 800F04F4
  if (crb(c,0)) { goto L_800F0504; } // 800F04F8
  fcmp(c,0,c->f[3],c->f[1]); // 800F04FC
  if (!crb(c,1)) { goto L_800F050C; } // 800F0500
L_800F0504:;
  c->r[3]=0u+0x00000000u; // 800F0504
  goto L_800F06F4; // 800F0508
L_800F050C:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F050C
  fcmp(c,0,c->f[0],c->f[2]); // 800F0510
  if (crb(c,0)) { goto L_800F0520; } // 800F0514
  fcmp(c,0,c->f[0],c->f[1]); // 800F0518
  if (!crb(c,1)) { goto L_800F0528; } // 800F051C
L_800F0520:;
  c->r[3]=0u+0x00000000u; // 800F0520
  goto L_800F06F4; // 800F0524
L_800F0528:;
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0528
  fcmp(c,0,c->f[0],c->f[2]); // 800F052C
  if (crb(c,0)) { goto L_800F053C; } // 800F0530
  fcmp(c,0,c->f[0],c->f[1]); // 800F0534
  if (!crb(c,1)) { goto L_800F0544; } // 800F0538
L_800F053C:;
  c->r[3]=0u+0x00000000u; // 800F053C
  goto L_800F06F4; // 800F0540
L_800F0544:;
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0544
  fcmp(c,0,c->f[0],c->f[2]); // 800F0548
  if (crb(c,0)) { goto L_800F0558; } // 800F054C
  fcmp(c,0,c->f[0],c->f[1]); // 800F0550
  if (!crb(c,1)) { goto L_800F0560; } // 800F0554
L_800F0558:;
  c->r[3]=0u+0x00000000u; // 800F0558
  goto L_800F06F4; // 800F055C
L_800F0560:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800F0560
  c->r[9]=c->r[31]+0x00000000u; // 800F0564
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0568
  c->r[5]=c->r[31]+0x00000060u; // 800F056C
  {uint32_t ea=c->r[2]+0xFFFF9B74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0570
  c->r[27]=0u+0x00000000u; // 800F0574
  c->r[7]=c->r[9]+c->r[8]; // 800F0578
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 800F057C
  c->r[6]=R32(c->r[7]+0x00000008u); // 800F0580
  c->r[4]=c->r[5]+c->r[8]; // 800F0584
  W32(c->r[3]+0x00000018u,c->r[6]); // 800F0588
  c->r[0]=R32(c->r[9]+c->r[8]); // 800F058C
  c->r[0]=c->r[6]-c->r[0]; // 800F0590
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F0594
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0598
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800F059C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800F05A0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800F05A4
  c->r[0]=R32(c->r[7]+0x00000004u); // 800F05A8
  c->r[0]=c->r[6]-c->r[0]; // 800F05AC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800F05B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F05B4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800F05B8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800F05BC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800F05C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800F05C4
  c->r[0]=c->r[6]-c->r[0]; // 800F05C8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800F05CC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F05D0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800F05D4
  W32(c->r[3]+0x00000038u,c->r[27]); // 800F05D8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800F05DC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800F05E0
  c->lr=0x800F05E8u; f_80217784(c); // 800F05E4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F05E8
  c->r[26]=c->r[30]|c->r[30]; // 800F05EC
  {uint32_t ea=c->r[2]+0xFFFF9BA0u; c->f[29]=RF64(ea);} // 800F05F0
  c->r[28]=c->r[31]+0x000000C0u; // 800F05F4
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[30]=c->ps1[30]=RF32(ea);} // 800F05F8
  c->r[24]=0u+0x00000000u; // 800F05FC
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F0600
  c->r[25]=0u+0x00000000u; // 800F0604
  c->r[29]=0u+0x43300000u; // 800F0608
L_800F060C:;
  W32(c->r[26]+0x00000068u,c->r[27]); // 800F060C
  {uint32_t ea=c->r[2]+0xFFFF9B90u; c->f[1]=RF64(ea);} // 800F0610
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 800F0614
  W32(c->r[1]+0x00000008u,c->r[29]); // 800F0618
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800F061C
  c->r[0]=c->r[25]+c->r[0]; // 800F0620
  c->r[0]=R32(c->r[28]+c->r[0]); // 800F0624
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F0628
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800F062C
  W32(c->r[26]+0x00000074u,c->r[0]); // 800F0630
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 800F0634
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0638
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 800F063C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800F0640
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 800F0644
  c->lr=0x800F064Cu; f_802285A4(c); // 800F0648
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800F064C
  c->r[24]=c->r[24]+0x00000001u; // 800F0650
  cmpu(c,0,c->r[24],0x00000003u); // 800F0654
  c->r[25]=c->r[25]+0x00000004u; // 800F0658
  {uint32_t ea=c->r[26]+0x0000008Cu; WF32(ea,c->f[0]);} // 800F065C
  c->r[26]=c->r[26]+0x00000004u; // 800F0660
  if (crb(c,0)) { IRQCHK(c); goto L_800F060C; } // 800F0664
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 800F0668
  c->r[4]=0u+0x00000000u; // 800F066C
  W32(c->r[30]+0x000000B0u,c->r[4]); // 800F0670
  c->r[3]=c->r[31]+0x000000C0u; // 800F0674
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800F0678
  {uint32_t ea=c->r[2]+0xFFFF9B70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F067C
  c->r[3]=c->r[3]+c->r[0]; // 800F0680
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0684
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800F0688
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800F068C
  {uint32_t ea=c->r[2]+0xFFFF9B98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0690
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800F0694
  {uint32_t ea=c->r[30]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0698
  W32(c->r[30]+0x000000B4u,c->r[4]); // 800F069C
  fcmp(c,0,c->f[1],c->f[0]); // 800F06A0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800F06A4
  W32(c->r[30]+0x000000BCu,c->r[0]); // 800F06A8
  W32(c->r[30]+0x000000D4u,c->r[4]); // 800F06AC
  c->r[0]=R32(c->r[3]+0x00000014u); // 800F06B0
  W32(c->r[30]+0x000000E0u,c->r[0]); // 800F06B4
  W32(c->r[30]+0x000000D8u,c->r[4]); // 800F06B8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F06BC
  W32(c->r[30]+0x000000E4u,c->r[0]); // 800F06C0
  W32(c->r[30]+0x000000DCu,c->r[4]); // 800F06C4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F06C8
  W32(c->r[30]+0x000000E8u,c->r[0]); // 800F06CC
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[2]);} // 800F06D0
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 800F06D4
  if (!crb(c,1)) { goto L_800F06E0; } // 800F06D8
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 800F06DC
L_800F06E0:;
  {uint32_t ea=c->r[2]+0xFFFF9B6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F06E0
  c->r[3]=0u+0x00000001u; // 800F06E4
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 800F06E8
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 800F06EC
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 800F06F0
L_800F06F4:;
  c->r[11]=c->r[1]+0x00000030u; // 800F06F4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800F06F8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800F06FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800F0700
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800F0704
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 800F0708
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 800F070C
  c->lr=0x800F0714u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0710
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F0714
  c->lr=c->r[0]; // 800F0718
  c->r[1]=c->r[1]+0x00000060u; // 800F071C
  return; // 800F0720
}

// fn_800F0730
void f_800F0730(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800F0730
  c->r[3]=R32(c->r[13]+0xFFFF8F10u); // 800F0734
  f_800C6FF0(c); return; // 800F0738
}

// fn_800F0740
void f_800F0740(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800F0740
  c->r[3]=R32(c->r[13]+0xFFFF8F10u); // 800F0744
  f_800C70F0(c); return; // 800F0748
}

// fn_800F0750
void f_800F0750(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF9080u,c->r[3]); // 800F0750
  W32(c->r[13]+0xFFFF9084u,c->r[4]); // 800F0754
  return; // 800F0758
}

// fn_800F0760
void f_800F0760(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF9080u); // 800F0760
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0764
  c->r[0]=R32(c->r[13]+0xFFFF9084u); // 800F0768
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F076C
  return; // 800F0770
}

// FindContainHeap_
void f_800F0780(Ctx* __restrict c) {
  trace_call(0x800F0780u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0780
  c->r[0]=c->lr; // 800F0784
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0788
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F078C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0790
  c->r[30]=c->r[3]|c->r[3]; // 800F0794
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0798
  c->r[29]=0u+0x00000000u; // 800F079C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F07A0
  c->r[28]=c->r[4]|c->r[4]; // 800F07A4
  goto L_800F0884; // 800F07A8
L_800F07AC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F07AC
  cmpu(c,0,c->r[0],c->r[28]); // 800F07B0
  if (crb(c,1)) { goto L_800F0884; } // 800F07B4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F07B8
  cmpu(c,0,c->r[28],c->r[0]); // 800F07BC
  if (!crb(c,0)) { goto L_800F0884; } // 800F07C0
  c->r[31]=0u+0x00000000u; // 800F07C4
  goto L_800F0854; // 800F07C8
L_800F07CC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F07CC
  cmpu(c,0,c->r[0],c->r[28]); // 800F07D0
  if (crb(c,1)) { goto L_800F0854; } // 800F07D4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F07D8
  cmpu(c,0,c->r[28],c->r[0]); // 800F07DC
  if (!crb(c,0)) { goto L_800F0854; } // 800F07E0
  c->r[30]=0u+0x00000000u; // 800F07E4
  goto L_800F0824; // 800F07E8
L_800F07EC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F07EC
  cmpu(c,0,c->r[0],c->r[28]); // 800F07F0
  if (crb(c,1)) { goto L_800F0824; } // 800F07F4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F07F8
  cmpu(c,0,c->r[28],c->r[0]); // 800F07FC
  if (!crb(c,0)) { goto L_800F0824; } // 800F0800
  c->r[4]=c->r[28]|c->r[28]; // 800F0804
  c->r[3]=c->r[3]+0x0000000Cu; // 800F0808
  c->lr=0x800F0810u; f_800F0780(c); // 800F080C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0810
  if (crb(c,2)) { goto L_800F081C; } // 800F0814
  goto L_800F0840; // 800F0818
L_800F081C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F081C
  goto L_800F0840; // 800F0820
L_800F0824:;
  c->r[4]=c->r[30]|c->r[30]; // 800F0824
  c->r[3]=c->r[31]+0x0000000Cu; // 800F0828
  c->lr=0x800F0830u; f_800F18B0(c); // 800F082C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0830
  c->r[30]=c->r[3]|c->r[3]; // 800F0834
  if (!crb(c,2)) { IRQCHK(c); goto L_800F07EC; } // 800F0838
  c->r[3]=0u+0x00000000u; // 800F083C
L_800F0840:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0840
  if (crb(c,2)) { goto L_800F084C; } // 800F0844
  goto L_800F0870; // 800F0848
L_800F084C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F084C
  goto L_800F0870; // 800F0850
L_800F0854:;
  c->r[4]=c->r[31]|c->r[31]; // 800F0854
  c->r[3]=c->r[29]+0x0000000Cu; // 800F0858
  c->lr=0x800F0860u; f_800F18B0(c); // 800F085C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0860
  c->r[31]=c->r[3]|c->r[3]; // 800F0864
  if (!crb(c,2)) { IRQCHK(c); goto L_800F07CC; } // 800F0868
  c->r[3]=0u+0x00000000u; // 800F086C
L_800F0870:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0870
  if (crb(c,2)) { goto L_800F087C; } // 800F0874
  goto L_800F08A0; // 800F0878
L_800F087C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F087C
  goto L_800F08A0; // 800F0880
L_800F0884:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0884
  c->r[4]=c->r[29]|c->r[29]; // 800F0888
  c->lr=0x800F0890u; f_800F18B0(c); // 800F088C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0890
  c->r[29]=c->r[3]|c->r[3]; // 800F0894
  if (!crb(c,2)) { IRQCHK(c); goto L_800F07AC; } // 800F0898
  c->r[3]=0u+0x00000000u; // 800F089C
L_800F08A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F08A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F08A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F08A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F08AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F08B0
  c->lr=c->r[0]; // 800F08B4
  c->r[1]=c->r[1]+0x00000020u; // 800F08B8
  return; // 800F08BC
}

// MEMiInitHeapHead
void f_800F08C0(Ctx* __restrict c) {
  trace_call(0x800F08C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F08C0
  c->r[0]=c->lr; // 800F08C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F08C8
  c->r[11]=c->r[1]+0x00000020u; // 800F08CC
  c->lr=0x800F08D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F08D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F08D4
  c->r[0]=0u+0x00000000u; // 800F08D8
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800F08DC
  c->r[27]=c->r[3]|c->r[3]; // 800F08E0
  W32(c->r[3]+0x00000018u,c->r[5]); // 800F08E4
  c->r[4]=0u+0x00000004u; // 800F08E8
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800F08EC
  W32(c->r[3]+0x00000038u,c->r[0]); // 800F08F0
  c->r[3]=c->r[3]+0x0000000Cu; // 800F08F4
  c->lr=0x800F08FCu; f_800F17B0(c); // 800F08F8
  c->r[0]=R32(c->r[13]+0xFFFFA980u); // 800F08FC
  cmps(c,0,(int32_t)c->r[0],0); // 800F0900
  if (!crb(c,2)) { goto L_800F092C; } // 800F0904
  c->r[3]=0u+0x80300000u; // 800F0908
  c->r[4]=0u+0x00000004u; // 800F090C
  c->r[3]=c->r[3]+0x000059E0u; // 800F0910
  c->lr=0x800F0918u; f_800F17B0(c); // 800F0914
  c->r[3]=0u+0x80300000u; // 800F0918
  c->r[3]=c->r[3]+0x000059F0u; // 800F091C
  c->lr=0x800F0924u; f_800CCD10(c); // 800F0920
  c->r[0]=0u+0x00000001u; // 800F0924
  W32(c->r[13]+0xFFFFA980u,c->r[0]); // 800F0928
L_800F092C:;
  c->r[3]=c->r[27]+0x00000020u; // 800F092C
  c->lr=0x800F0934u; f_800CCD10(c); // 800F0930
  c->r[3]=0u+0x80300000u; // 800F0934
  c->r[3]=c->r[3]+0x000059F0u; // 800F0938
  c->lr=0x800F0940u; f_800CCD50(c); // 800F093C
  c->r[31]=0u+0x80300000u; // 800F0940
  c->r[30]=0u+0x00000000u; // 800F0944
  c->r[28]=c->r[31]+0x000059E0u; // 800F0948
  goto L_800F0A28; // 800F094C
L_800F0950:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F0950
  cmpu(c,0,c->r[0],c->r[27]); // 800F0954
  if (crb(c,1)) { goto L_800F0A28; } // 800F0958
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F095C
  cmpu(c,0,c->r[27],c->r[0]); // 800F0960
  if (!crb(c,0)) { goto L_800F0A28; } // 800F0964
  c->r[31]=0u+0x00000000u; // 800F0968
  goto L_800F09F8; // 800F096C
L_800F0970:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F0970
  cmpu(c,0,c->r[0],c->r[27]); // 800F0974
  if (crb(c,1)) { goto L_800F09F8; } // 800F0978
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F097C
  cmpu(c,0,c->r[27],c->r[0]); // 800F0980
  if (!crb(c,0)) { goto L_800F09F8; } // 800F0984
  c->r[29]=0u+0x00000000u; // 800F0988
  goto L_800F09C8; // 800F098C
L_800F0990:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F0990
  cmpu(c,0,c->r[0],c->r[27]); // 800F0994
  if (crb(c,1)) { goto L_800F09C8; } // 800F0998
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F099C
  cmpu(c,0,c->r[27],c->r[0]); // 800F09A0
  if (!crb(c,0)) { goto L_800F09C8; } // 800F09A4
  c->r[4]=c->r[27]|c->r[27]; // 800F09A8
  c->r[3]=c->r[3]+0x0000000Cu; // 800F09AC
  c->lr=0x800F09B4u; f_800F0780(c); // 800F09B0
  cmps(c,0,(int32_t)c->r[3],0); // 800F09B4
  if (crb(c,2)) { goto L_800F09C0; } // 800F09B8
  goto L_800F09E4; // 800F09BC
L_800F09C0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F09C0
  goto L_800F09E4; // 800F09C4
L_800F09C8:;
  c->r[4]=c->r[29]|c->r[29]; // 800F09C8
  c->r[3]=c->r[31]+0x0000000Cu; // 800F09CC
  c->lr=0x800F09D4u; f_800F18B0(c); // 800F09D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F09D4
  c->r[29]=c->r[3]|c->r[3]; // 800F09D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0990; } // 800F09DC
  c->r[3]=0u+0x00000000u; // 800F09E0
L_800F09E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F09E4
  if (crb(c,2)) { goto L_800F09F0; } // 800F09E8
  goto L_800F0A14; // 800F09EC
L_800F09F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F09F0
  goto L_800F0A14; // 800F09F4
L_800F09F8:;
  c->r[4]=c->r[31]|c->r[31]; // 800F09F8
  c->r[3]=c->r[30]+0x0000000Cu; // 800F09FC
  c->lr=0x800F0A04u; f_800F18B0(c); // 800F0A00
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A04
  c->r[31]=c->r[3]|c->r[3]; // 800F0A08
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0970; } // 800F0A0C
  c->r[3]=0u+0x00000000u; // 800F0A10
L_800F0A14:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A14
  if (crb(c,2)) { goto L_800F0A20; } // 800F0A18
  goto L_800F0A44; // 800F0A1C
L_800F0A20:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0A20
  goto L_800F0A44; // 800F0A24
L_800F0A28:;
  c->r[4]=c->r[30]|c->r[30]; // 800F0A28
  c->r[3]=c->r[31]+0x000059E0u; // 800F0A2C
  c->lr=0x800F0A34u; f_800F18B0(c); // 800F0A30
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A34
  c->r[30]=c->r[3]|c->r[3]; // 800F0A38
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0950; } // 800F0A3C
  c->r[3]=0u+0x00000000u; // 800F0A40
L_800F0A44:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A44
  if (crb(c,2)) { goto L_800F0A50; } // 800F0A48
  c->r[28]=c->r[3]+0x0000000Cu; // 800F0A4C
L_800F0A50:;
  c->r[3]=c->r[28]|c->r[28]; // 800F0A50
  c->r[4]=c->r[27]|c->r[27]; // 800F0A54
  c->lr=0x800F0A5Cu; f_800F17D0(c); // 800F0A58
  c->r[3]=0u+0x80300000u; // 800F0A5C
  c->r[3]=c->r[3]+0x000059F0u; // 800F0A60
  c->lr=0x800F0A68u; f_800CCE30(c); // 800F0A64
  c->r[11]=c->r[1]+0x00000020u; // 800F0A68
  c->lr=0x800F0A70u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0A6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0A70
  c->lr=c->r[0]; // 800F0A74
  c->r[1]=c->r[1]+0x00000020u; // 800F0A78
  return; // 800F0A7C
}

// MEMiFinalizeHeap
void f_800F0A80(Ctx* __restrict c) {
  trace_call(0x800F0A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0A80
  c->r[0]=c->lr; // 800F0A84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0A88
  c->r[11]=c->r[1]+0x00000020u; // 800F0A8C
  c->lr=0x800F0A94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0A90
  c->r[4]=0u+0x80300000u; // 800F0A94
  c->r[27]=c->r[3]|c->r[3]; // 800F0A98
  c->r[3]=c->r[4]+0x000059F0u; // 800F0A9C
  c->lr=0x800F0AA4u; f_800CCD50(c); // 800F0AA0
  c->r[31]=0u+0x80300000u; // 800F0AA4
  c->r[30]=0u+0x00000000u; // 800F0AA8
  c->r[28]=c->r[31]+0x000059E0u; // 800F0AAC
  goto L_800F0B8C; // 800F0AB0
L_800F0AB4:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F0AB4
  cmpu(c,0,c->r[0],c->r[27]); // 800F0AB8
  if (crb(c,1)) { goto L_800F0B8C; } // 800F0ABC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F0AC0
  cmpu(c,0,c->r[27],c->r[0]); // 800F0AC4
  if (!crb(c,0)) { goto L_800F0B8C; } // 800F0AC8
  c->r[31]=0u+0x00000000u; // 800F0ACC
  goto L_800F0B5C; // 800F0AD0
L_800F0AD4:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F0AD4
  cmpu(c,0,c->r[0],c->r[27]); // 800F0AD8
  if (crb(c,1)) { goto L_800F0B5C; } // 800F0ADC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F0AE0
  cmpu(c,0,c->r[27],c->r[0]); // 800F0AE4
  if (!crb(c,0)) { goto L_800F0B5C; } // 800F0AE8
  c->r[29]=0u+0x00000000u; // 800F0AEC
  goto L_800F0B2C; // 800F0AF0
L_800F0AF4:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800F0AF4
  cmpu(c,0,c->r[0],c->r[27]); // 800F0AF8
  if (crb(c,1)) { goto L_800F0B2C; } // 800F0AFC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800F0B00
  cmpu(c,0,c->r[27],c->r[0]); // 800F0B04
  if (!crb(c,0)) { goto L_800F0B2C; } // 800F0B08
  c->r[4]=c->r[27]|c->r[27]; // 800F0B0C
  c->r[3]=c->r[3]+0x0000000Cu; // 800F0B10
  c->lr=0x800F0B18u; f_800F0780(c); // 800F0B14
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B18
  if (crb(c,2)) { goto L_800F0B24; } // 800F0B1C
  goto L_800F0B48; // 800F0B20
L_800F0B24:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0B24
  goto L_800F0B48; // 800F0B28
L_800F0B2C:;
  c->r[4]=c->r[29]|c->r[29]; // 800F0B2C
  c->r[3]=c->r[31]+0x0000000Cu; // 800F0B30
  c->lr=0x800F0B38u; f_800F18B0(c); // 800F0B34
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B38
  c->r[29]=c->r[3]|c->r[3]; // 800F0B3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0AF4; } // 800F0B40
  c->r[3]=0u+0x00000000u; // 800F0B44
L_800F0B48:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B48
  if (crb(c,2)) { goto L_800F0B54; } // 800F0B4C
  goto L_800F0B78; // 800F0B50
L_800F0B54:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0B54
  goto L_800F0B78; // 800F0B58
L_800F0B5C:;
  c->r[4]=c->r[31]|c->r[31]; // 800F0B5C
  c->r[3]=c->r[30]+0x0000000Cu; // 800F0B60
  c->lr=0x800F0B68u; f_800F18B0(c); // 800F0B64
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B68
  c->r[31]=c->r[3]|c->r[3]; // 800F0B6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0AD4; } // 800F0B70
  c->r[3]=0u+0x00000000u; // 800F0B74
L_800F0B78:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B78
  if (crb(c,2)) { goto L_800F0B84; } // 800F0B7C
  goto L_800F0BA8; // 800F0B80
L_800F0B84:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0B84
  goto L_800F0BA8; // 800F0B88
L_800F0B8C:;
  c->r[4]=c->r[30]|c->r[30]; // 800F0B8C
  c->r[3]=c->r[31]+0x000059E0u; // 800F0B90
  c->lr=0x800F0B98u; f_800F18B0(c); // 800F0B94
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B98
  c->r[30]=c->r[3]|c->r[3]; // 800F0B9C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0AB4; } // 800F0BA0
  c->r[3]=0u+0x00000000u; // 800F0BA4
L_800F0BA8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0BA8
  if (crb(c,2)) { goto L_800F0BB4; } // 800F0BAC
  c->r[28]=c->r[3]+0x0000000Cu; // 800F0BB0
L_800F0BB4:;
  c->r[3]=c->r[28]|c->r[28]; // 800F0BB4
  c->r[4]=c->r[27]|c->r[27]; // 800F0BB8
  c->lr=0x800F0BC0u; f_800F1840(c); // 800F0BBC
  c->r[3]=0u+0x80300000u; // 800F0BC0
  c->r[3]=c->r[3]+0x000059F0u; // 800F0BC4
  c->lr=0x800F0BCCu; f_800CCE30(c); // 800F0BC8
  c->r[0]=0u+0x00000000u; // 800F0BCC
  W32(c->r[27]+0x00000000u,c->r[0]); // 800F0BD0
  c->r[11]=c->r[1]+0x00000020u; // 800F0BD4
  c->lr=0x800F0BDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0BD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0BDC
  c->lr=c->r[0]; // 800F0BE0
  c->r[1]=c->r[1]+0x00000020u; // 800F0BE4
  return; // 800F0BE8
}

// AllocUsedBlockFromFreeBlock_
void f_800F0BF0(Ctx* __restrict c) {
  trace_call(0x800F0BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0BF0
  c->r[0]=c->lr; // 800F0BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0BF8
  c->r[11]=c->r[1]+0x00000020u; // 800F0BFC
  c->lr=0x800F0C04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0C00
  c->r[8]=R32(c->r[4]+0x00000008u); // 800F0C04
  c->r[30]=c->r[6]+c->r[5]; // 800F0C08
  c->r[6]=R16(c->r[4]+0x00000002u); // 800F0C0C
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 800F0C10
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F0C14
  cmps(c,0,(int32_t)c->r[8],0); // 800F0C18
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 800F0C1C
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 800F0C20
  c->r[6]=c->r[4]+c->r[0]; // 800F0C24
  c->r[27]=c->r[5]|c->r[5]; // 800F0C28
  c->r[26]=c->r[3]|c->r[3]; // 800F0C2C
  c->r[28]=c->r[7]|c->r[7]; // 800F0C30
  c->r[31]=c->r[29]|c->r[29]; // 800F0C34
  c->r[5]=c->r[4]-c->r[9]; // 800F0C38
  c->r[6]=c->r[6]+0x00000010u; // 800F0C3C
  if (crb(c,2)) { goto L_800F0C4C; } // 800F0C40
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 800F0C44
  goto L_800F0C50; // 800F0C48
L_800F0C4C:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 800F0C4C
L_800F0C50:;
  cmps(c,0,(int32_t)c->r[10],0); // 800F0C50
  if (crb(c,2)) { goto L_800F0C60; } // 800F0C54
  W32(c->r[10]+0x00000008u,c->r[8]); // 800F0C58
  goto L_800F0C64; // 800F0C5C
L_800F0C60:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 800F0C60
L_800F0C64:;
  c->r[0]=c->r[29]-c->r[5]; // 800F0C64
  cmpu(c,0,c->r[0],0x00000014u); // 800F0C68
  if (crb(c,0)) { goto L_800F0C84; } // 800F0C6C
  cmps(c,0,(int32_t)c->r[7],0); // 800F0C70
  if (!crb(c,2)) { goto L_800F0C8C; } // 800F0C74
  c->r[0]=R16(c->r[3]+0x00000012u); // 800F0C78
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800F0C7C
  if (!crb(c,2)) { goto L_800F0C8C; } // 800F0C80
L_800F0C84:;
  c->r[31]=c->r[5]|c->r[5]; // 800F0C84
  goto L_800F0CE8; // 800F0C88
L_800F0C8C:;
  c->r[0]=0u+0x00004652u; // 800F0C8C
  W16(c->r[5]+0x00000000u,c->r[0]); // 800F0C90
  c->r[4]=0u+0x00000000u; // 800F0C94
  cmps(c,0,(int32_t)c->r[8],0); // 800F0C98
  W16(c->r[5]+0x00000002u,c->r[4]); // 800F0C9C
  c->r[0]=c->r[5]+0x00000010u; // 800F0CA0
  c->r[0]=c->r[29]-c->r[0]; // 800F0CA4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800F0CA8
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800F0CAC
  W32(c->r[5]+0x00000008u,c->r[8]); // 800F0CB0
  if (crb(c,2)) { goto L_800F0CC4; } // 800F0CB4
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800F0CB8
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 800F0CBC
  goto L_800F0CCC; // 800F0CC0
L_800F0CC4:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800F0CC4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800F0CC8
L_800F0CCC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F0CCC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800F0CD0
  if (crb(c,2)) { goto L_800F0CE0; } // 800F0CD4
  W32(c->r[4]+0x00000008u,c->r[5]); // 800F0CD8
  goto L_800F0CE4; // 800F0CDC
L_800F0CE0:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800F0CE0
L_800F0CE4:;
  c->r[8]=c->r[5]|c->r[5]; // 800F0CE4
L_800F0CE8:;
  c->r[0]=c->r[6]-c->r[30]; // 800F0CE8
  cmpu(c,0,c->r[0],0x00000014u); // 800F0CEC
  if (crb(c,0)) { goto L_800F0D08; } // 800F0CF0
  cmpu(c,0,c->r[7],0x00000001u); // 800F0CF4
  if (!crb(c,2)) { goto L_800F0D10; } // 800F0CF8
  c->r[0]=R16(c->r[3]+0x00000012u); // 800F0CFC
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800F0D00
  if (!crb(c,2)) { goto L_800F0D10; } // 800F0D04
L_800F0D08:;
  c->r[30]=c->r[6]|c->r[6]; // 800F0D08
  goto L_800F0D68; // 800F0D0C
L_800F0D10:;
  c->r[0]=0u+0x00004652u; // 800F0D10
  W16(c->r[30]+0x00000000u,c->r[0]); // 800F0D14
  c->r[4]=0u+0x00000000u; // 800F0D18
  cmps(c,0,(int32_t)c->r[8],0); // 800F0D1C
  W16(c->r[30]+0x00000002u,c->r[4]); // 800F0D20
  c->r[0]=c->r[30]+0x00000010u; // 800F0D24
  c->r[0]=c->r[6]-c->r[0]; // 800F0D28
  W32(c->r[30]+0x00000004u,c->r[0]); // 800F0D2C
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800F0D30
  W32(c->r[30]+0x00000008u,c->r[8]); // 800F0D34
  if (crb(c,2)) { goto L_800F0D48; } // 800F0D38
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800F0D3C
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 800F0D40
  goto L_800F0D50; // 800F0D44
L_800F0D48:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800F0D48
  W32(c->r[3]+0x00000000u,c->r[30]); // 800F0D4C
L_800F0D50:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F0D50
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800F0D54
  if (crb(c,2)) { goto L_800F0D64; } // 800F0D58
  W32(c->r[4]+0x00000008u,c->r[30]); // 800F0D5C
  goto L_800F0D68; // 800F0D60
L_800F0D64:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 800F0D64
L_800F0D68:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800F0D68
  c->r[5]=c->r[30]-c->r[31]; // 800F0D6C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F0D70
  if (crb(c,2)) { goto L_800F0D84; } // 800F0D74
  c->r[3]=c->r[31]|c->r[31]; // 800F0D78
  c->r[4]=0u+0x00000000u; // 800F0D7C
  c->lr=0x800F0D84u; f_800046B4(c); // 800F0D80
L_800F0D84:;
  c->r[5]=0u+0x00000000u; // 800F0D84
  c->r[4]=c->r[29]+0x00000010u; // 800F0D88
  c->r[3]=c->r[5]|c->r[5]; // 800F0D8C
  c->r[6]=0u+0x00005544u; // 800F0D90
  c->r[4]=c->r[30]-c->r[4]; // 800F0D94
  c->r[0]=c->r[29]-c->r[31]; // 800F0D98
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 800F0D9C
  W16(c->r[29]+0x00000000u,c->r[6]); // 800F0DA0
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 800F0DA4
  W32(c->r[29]+0x00000004u,c->r[4]); // 800F0DA8
  W32(c->r[29]+0x00000008u,c->r[5]); // 800F0DAC
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 800F0DB0
  W16(c->r[29]+0x00000002u,c->r[3]); // 800F0DB4
  c->r[0]=R16(c->r[26]+0x00000010u); // 800F0DB8
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 800F0DBC
  W16(c->r[29]+0x00000002u,c->r[3]); // 800F0DC0
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800F0DC4
  W32(c->r[29]+0x00000008u,c->r[4]); // 800F0DC8
  cmps(c,0,(int32_t)c->r[4],0); // 800F0DCC
  if (crb(c,2)) { goto L_800F0DE0; } // 800F0DD0
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800F0DD4
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800F0DD8
  goto L_800F0DE8; // 800F0DDC
L_800F0DE0:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800F0DE0
  W32(c->r[26]+0x00000008u,c->r[29]); // 800F0DE4
L_800F0DE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0DE8
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800F0DEC
  if (crb(c,2)) { goto L_800F0DFC; } // 800F0DF0
  W32(c->r[3]+0x00000008u,c->r[29]); // 800F0DF4
  goto L_800F0E00; // 800F0DF8
L_800F0DFC:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 800F0DFC
L_800F0E00:;
  c->r[11]=c->r[1]+0x00000020u; // 800F0E00
  c->r[3]=c->r[27]|c->r[27]; // 800F0E04
  c->lr=0x800F0E0Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0E08
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0E0C
  c->lr=c->r[0]; // 800F0E10
  c->r[1]=c->r[1]+0x00000020u; // 800F0E14
  return; // 800F0E18
}

// AllocFromHead_
void f_800F0E20(Ctx* __restrict c) {
  trace_call(0x800F0E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E20
  c->r[0]=c->lr; // 800F0E24
  c->r[3]=c->r[3]+0x0000003Cu; // 800F0E28
  c->r[6]=c->r[4]|c->r[4]; // 800F0E2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0E30
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800F0E34
  c->r[9]=~(c->r[0]|c->r[0]); // 800F0E38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0E3C
  c->r[31]=0u+0x00000000u; // 800F0E40
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0E44
  c->r[30]=0u+0xFFFFFFFFu; // 800F0E48
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0E4C
  c->r[29]=0u+0x00000000u; // 800F0E50
  c->r[7]=R16(c->r[3]+0x00000012u); // 800F0E54
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F0E58
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 800F0E5C
  c->r[0]=cntlz(c->r[0]); // 800F0E60
  c->r[11]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F0E64
  goto L_800F0EB8; // 800F0E68
L_800F0E6C:;
  c->r[8]=c->r[12]+0x00000010u; // 800F0E6C
  c->r[10]=R32(c->r[12]+0x00000004u); // 800F0E70
  c->r[7]=c->r[5]+c->r[8]; // 800F0E74
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800F0E78
  c->r[7]=c->r[9]&c->r[0]; // 800F0E7C
  c->r[0]=c->r[7]-c->r[8]; // 800F0E80
  c->r[0]=c->r[4]+c->r[0]; // 800F0E84
  cmpu(c,0,c->r[10],c->r[0]); // 800F0E88
  if (crb(c,0)) { goto L_800F0EB4; } // 800F0E8C
  cmpu(c,0,c->r[30],c->r[10]); // 800F0E90
  if (!crb(c,1)) { goto L_800F0EB4; } // 800F0E94
  cmps(c,0,(int32_t)c->r[11],0); // 800F0E98
  c->r[31]=c->r[12]|c->r[12]; // 800F0E9C
  c->r[30]=c->r[10]|c->r[10]; // 800F0EA0
  c->r[29]=c->r[7]|c->r[7]; // 800F0EA4
  if (!crb(c,2)) { goto L_800F0EC0; } // 800F0EA8
  cmpu(c,0,c->r[10],c->r[4]); // 800F0EAC
  if (crb(c,2)) { goto L_800F0EC0; } // 800F0EB0
L_800F0EB4:;
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0EB4
L_800F0EB8:;
  cmps(c,0,(int32_t)c->r[12],0); // 800F0EB8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0E6C; } // 800F0EBC
L_800F0EC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0EC0
  if (crb(c,2)) { goto L_800F0EDC; } // 800F0EC4
  c->r[4]=c->r[31]|c->r[31]; // 800F0EC8
  c->r[5]=c->r[29]|c->r[29]; // 800F0ECC
  c->r[7]=0u+0x00000000u; // 800F0ED0
  c->lr=0x800F0ED8u; f_800F0BF0(c); // 800F0ED4
  goto L_800F0EE0; // 800F0ED8
L_800F0EDC:;
  c->r[3]=0u+0x00000000u; // 800F0EDC
L_800F0EE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0EE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0EE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0EE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0EEC
  c->lr=c->r[0]; // 800F0EF0
  c->r[1]=c->r[1]+0x00000020u; // 800F0EF4
  return; // 800F0EF8
}

