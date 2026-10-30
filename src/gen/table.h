#pragma once
#include "ppc.h"
struct FnEntry { uint32_t addr, size; GuestFn fn; const char* name; };
extern const FnEntry FN_TABLE[]; extern const unsigned FN_COUNT;
