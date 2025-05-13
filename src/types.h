#ifndef _TYPES_H__
#define _TYPES_H__

#ifndef NULL
#define NULL ((void *)0)
#endif

#define true ((_Bool)1)
#define false ((_Bool)0)

#ifndef UINT8_MIN
#define UINT8_MIN 0x0
#endif
#ifndef UINT16_MIN
#define UINT16_MIN 0x0
#endif
#define UINT32_MIN 0x0
#define UINT64_MIN 0x0
#define UINT128_MIN 0x0

#define UINT8_MAX 0xFF
#define UINT16_MAX 0xFFFF
#define UINT32_MAX 0xFFFFFFFF
#define UINT64_MAX 0xFFFFFFFFFFFFFFFF
#define UINT128_MAX ((__uint128_t) - 1)

#define INT8_MIN (-0x7F - 1)
#define INT16_MIN (-0x7FFF - 1)
#define INT32_MIN (-0x7FFFFFFF - 1)
#define INT64_MIN (-0x7FFFFFFFFFFFFFFF - 1)
#define INT128_MIN (-(((__int128_t)1 << 127) - 1) - 1)

#define INT8_MAX 0x7F
#define INT16_MAX 0x7FFF
#define INT32_MAX 0x7FFFFFFF
#define INT64_MAX 0x7FFFFFFFFFFFFFFF
#define INT128_MAX (((__int128_t)1 << 127) - 1)

typedef unsigned long size_t;
typedef __int128_t int128_t;
typedef __uint128_t uint128_t;
typedef unsigned long long uint64_t;
typedef long long int64_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef short unsigned int uint16_t;
typedef short int int16_t;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef unsigned char byte;
typedef _Bool bool;

#endif	// _TYPES_H__
