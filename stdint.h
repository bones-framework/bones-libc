#ifndef BONES_LIBC_STDINT_H
#define BONES_LIBC_STDINT_H

#include <limits.h>

typedef signed char         int8_t;
typedef signed short        int16_t;
typedef signed int          int32_t;
typedef signed long long    int64_t;

typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned int        uint32_t;
typedef unsigned long long  uint64_t;

typedef signed long         intptr_t;
typedef unsigned long       uintptr_t;

typedef signed long         ssize_t;
typedef unsigned long       size_t;

#define INT8_MIN    (-1-0x7f)
#define INT16_MIN   (-1-0x7fff)
#define INT32_MIN   (-1-0x7fffffff)
#define INT64_MIN   (-1-0x7fffffffffffffff)
#define INTPTR_MIN  LONG_MIN
#define SSIZE_MIN   LONG_MIN

#define INT8_MAX    (0x7f)
#define INT16_MAX   (0x7fff)
#define INT32_MAX   (0x7fffffff)
#define INT64_MAX   (0x7fffffffffffffff)
#define INTPTR_MAX  LONG_MAX
#define SSIZE_MAX   LONG_MAX

#define UINT8_MAX   (0xff)
#define UINT16_MAX  (0xffff)
#define UINT32_MAX  (0xffffffffu)
#define UINT64_MAX  (0xffffffffffffffffu)
#define UINTPTR_MAX ULONG_MAX
#define SIZE_MAX    ULONG_MAX

#endif
