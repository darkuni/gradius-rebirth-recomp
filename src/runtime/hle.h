// Shared declarations for HLE modules.
#pragma once
#include "ppc.h"
#include <functional>
#include <string>
#include <cstdio>

extern FILE* g_log;

// Guest helpers
std::string guest_str(uint32_t a);
std::string guest_format(Ctx* c, uint32_t fmt, int first_gpr);
static inline uint32_t phys_to_guest(uint32_t p) { return p ? (p | 0x80000000u) : 0; }

// Call a guest function with up to 8 integer args on a scratch copy of `c`.
uint32_t guest_call(Ctx* c, uint32_t fn, std::initializer_list<uint32_t> args);

// Deferred "interrupt" work. Delivered on a guest thread at the next safe
// point where interrupts are enabled.
void post_irq(std::function<void(Ctx*)> fn);
void post_irq_front(std::function<void(Ctx*)> fn);

// Threads
void threads_init_main(Ctx* c);
