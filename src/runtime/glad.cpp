#ifdef _WIN32
#include "glad.h"
#include <cstdio>
#define GL_DEFINE(t, n) t p_##n = nullptr;
GL_FUNCS(GL_DEFINE)
// SDL_GL_GetProcAddress falls back to opengl32.dll exports for GL 1.1 entry points.
bool gl_load(void* (*getproc)(const char*)) {
  bool ok = true;
#define GL_LOAD(t, n) p_##n = (t)getproc(#n); if (!p_##n) { fprintf(stderr, "[gl] missing " #n "\n"); ok = false; }
  GL_FUNCS(GL_LOAD)
  return ok;
}
#endif
