#ifndef BONES_LIBC_STRING_H
#define BONES_LIBC_STRING_H

#include "stdint.h"

#if defined(__GNUC__)

    static inline void* memset(void* ptr, int value, size_t size) {
        return __builtin_memset(ptr, value, size);
    }

    static inline void* memmove(void* dst, const char* src, size_t size) {
        return __builtin_memmove(dst, src, size);
    }

    static inline void* memcpy(void* dst, const char* src, size_t size) {
        return __builtin_memcpy(dst, src, size);
    }

    static inline size_t strlen(const char* str) {
        return __builtin_strlen(str);
    }
    
#else
    #error string.h depends on gcc
#endif

#endif
