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

#ifndef UINT32_MIN
#define UINT32_MIN 0x0
#endif

#ifndef UINT64_MIN
#define UINT64_MIN 0x0
#endif

#ifndef UINT128_MIN
#define UINT128_MIN 0x0
#endif

#ifndef UINT8_MAX
#define UINT8_MAX 0xFF
#endif

#ifndef UINT16_MAX
#define UINT16_MAX 0xFFFF
#endif

#ifndef UINT32_MAX
#define UINT32_MAX 0xFFFFFFFF
#endif

#ifndef UINT64_MAX
#define UINT64_MAX 0xFFFFFFFFFFFFFFFF
#endif

#ifndef UINT128_MAX
#define UINT128_MAX ((__uint128_t) - 1)
#endif

#ifndef INT8_MIN
#define INT8_MIN (-0x7F - 1)
#endif

#ifndef INT16_MIN
#define INT16_MIN (-0x7FFF - 1)
#endif

#ifndef INT32_MIN
#define INT32_MIN (-0x7FFFFFFF - 1)
#endif

#ifndef INT64_MIN
#define INT64_MIN (-0x7FFFFFFFFFFFFFFF - 1)
#endif

#ifndef INT128_MIN
#define INT128_MIN (-(((__int128_t)1 << 127) - 1) - 1)
#endif

#ifndef INT8_MAX
#define INT8_MAX 0x7F
#endif

#ifndef INT16_MAX
#define INT16_MAX 0x7FFF
#endif

#ifndef INT32_MAX
#define INT32_MAX 0x7FFFFFFF
#endif

#ifndef INT64_MAX
#define INT64_MAX 0x7FFFFFFFFFFFFFFF
#endif

#ifndef INT128_MAX
#define INT128_MAX (((__int128_t)1 << 127) - 1)
#endif

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
