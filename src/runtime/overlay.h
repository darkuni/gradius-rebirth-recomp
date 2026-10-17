#pragma once
enum { OV_KEY_UP, OV_KEY_DOWN, OV_KEY_LEFT, OV_KEY_RIGHT, OV_KEY_OK, OV_KEY_BACK };
enum { OV_NONE, OV_FULLSCREEN, OV_VSYNC, OV_QUIT };
bool overlay_open();
void overlay_toggle();
int overlay_input(int key);          // emulation/window thread
void overlay_draw(int ww, int wh);   // presentation thread, GL context current
extern char g_perf_text[128];
