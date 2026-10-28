#pragma once
#include <cstdint>
#include <string>

std::string tev_shader_source(const uint32_t* bp);
uint64_t tev_shader_key(const uint32_t* bp);

// platform
bool gl_platform_init(int w, int h);      // create context (+window if available)
void gl_platform_make_current();
void gl_platform_release();             // give up the GL context before another host thread takes over
void gl_platform_present(unsigned tex, int w, int h);   // show a finished frame
bool gl_platform_poll();                  // pump events; false = quit requested

void gx_flush();            // submit the pending draw batch
void gx_state_changing();  // pixel-pipeline state is about to change
