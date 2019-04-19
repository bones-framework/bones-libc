#ifndef BONES_LIBC_STRING_H
#define BONES_LIBC_STRING_H

#include "stdint.h"

#if defined(__GNUC__)

// #define LIBC_BUILTIN_WRAPPER(func, ret_type, ...) \
//     ret_type func(__VA_ARGS__) __attribute__((weak, alias("__builtin_" #func)))

//     LIBC_BUILTIN_WRAPPER(memset, void*, void* ptr, int value, size_t size);
//     LIBC_BUILTIN_WRAPPER(memmove, void*, void* dst, const void* src, size_t size);
//     LIBC_BUILTIN_WRAPPER(memcpy, void*, void* dst, const void* src, size_t size);

//     LIBC_BUILTIN_WRAPPER(strlen, size_t, const char* str);

// #undef LIBC_BUILTIN_WRAPPER

    #define memset __builtin_memset
    #define memmove __builtin_memmove
    #define memcpy __builtin_memcpy

    #define strlen __builtin_strlen
    
#else
    #error string.h depends on gcc
#endif

#endif
