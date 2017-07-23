/* Z Kit C API - inspection/floating point.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_floating_point_H__
#define __Z_inspection_floating_point_H__

#include <Z/keys/floating point.h>
#include <Z/inspection/CPU.h>
#include <Z/inspection/language.h>
#include <Z/macros/pasting.h>

#define Z_INSPECTING_FLOATING_POINT

#if	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_AARCH32    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_AARCH64    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ALPHA	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ITANIUM    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_M68K	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MIPS	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MIPS64	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_PA_RISC    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_PA_RISC_2  || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_POWERPC_32 || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_POWERPC_64 || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SPARC	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SPARC_V9   || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SUPERH	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SUPERH_5   || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_32	    || \
	Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_64

#	include <Z/formats/floating point/IEEE 754.h>

#	if Z_LANGUAGE_HAS_TYPE(C, FLOAT)
#		define Z_FLOATING_POINT_BITS_FLOAT	32
#		define Z_FLOATING_POINT_TYPE_FLOAT32	float
#		define Z_FLOATING_POINT_LITERAL_FLOAT32	Z_SUFFIX_F

#		define Z_PREPEND_FLOATING_POINT_FLOAT32(RIGHT) Z_IEEE_754_BINARY32##RIGHT
#	endif

#	if Z_LANGUAGE_HAS_TYPE(C, DOUBLE)
#		define Z_FLOATING_POINT_BITS_DOUBLE	64
#		define Z_FLOATING_POINT_TYPE_FLOAT64	double
#		define Z_FLOATING_POINT_LITERAL_FLOAT64	Z_SAME

#		define Z_PREPEND_FLOATING_POINT_FLOAT64(RIGHT) Z_IEEE_754_BINARY64##RIGHT
#	endif

#endif

/* TODO */

#	if Z_LANGUAGE_HAS_TYPE(C, LDOUBLE)
#		define Z_FLOATING_POINT_BITS_LDOUBLE	 128
#		define Z_FLOATING_POINT_TYPE_FLOAT128	 long double
#		define Z_FLOATING_POINT_LITERAL_FLOAT128 Z_SUFFIX_L

#		define Z_PREPEND_FLOATING_POINT_FLOAT128(RIGHT) Z_IEEE_754_BINARY128##RIGHT
#	endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT16
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT16 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT16 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT24
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT24 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT24 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT32
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT32 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT32 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT48
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT48 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT48 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT64
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT64 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT64 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT72
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT72 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT72 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT80
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT80 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT80 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT96
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT96 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT96 FALSE
#endif

#ifdef Z_FLOATING_POINT_TYPE_FLOAT128
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT128 TRUE
#else
#	define Z_FLOATING_POINT_HAS_TYPE_FLOAT128 FALSE
#endif

#define Z_FLOATING_POINT_HAS_TYPE(	     TYPE) Z_FLOATING_POINT_HAS_TYPE_##TYPE
#define Z_FLOATING_POINT_TYPE(		     TYPE) Z_FLOATING_POINT_TYPE_##TYPE
#define Z_FLOATING_POINT_LITERAL(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE
#define Z_FLOATING_POINT_VALUE_TYPE(	     TYPE)
#define Z_FLOATING_POINT_VALUE_FORMAT(	     TYPE)
#define Z_FLOATING_POINT_BITS(		     TYPE) Z_FLOATING_POINT_BITS_##TYPE
#define Z_FLOATING_POINT_BIAS(		     TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_BIAS	       )
#define Z_FLOATING_POINT_DECIMAL_DIGITS(     TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_DECIMAL_DIGITS     )
#define Z_FLOATING_POINT_SIGNIFICAND_OFFSET( TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_SIGNIFICAND_OFFSET )
#define Z_FLOATING_POINT_SIGNIFICAND_BITS(   TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_SIGNIFICAND_BITS   )
#define Z_FLOATING_POINT_SIGNIFICAND_DIGITS( TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_SIGNIFICAND_DIGITS )
#define Z_FLOATING_POINT_EXPONENT_OFFSET(    TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_OFFSET    )
#define Z_FLOATING_POINT_EXPONENT_BITS(	     TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_BITS      )
#define Z_FLOATING_POINT_EXPONENT_RADIX(     TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_RADIX     )
#define Z_FLOATING_POINT_EXPONENT_MINIMUM(   TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_MINIMUM   )
#define Z_FLOATING_POINT_EXPONENT_MAXIMUM(   TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_MAXIMUM   )
#define Z_FLOATING_POINT_EXPONENT_10_MINIMUM(TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_10_MINIMUM)
#define Z_FLOATING_POINT_EXPONENT_10_MAXIMUM(TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_EXPONENT_10_MAXIMUM)
#define Z_FLOATING_POINT_SIGN_OFFSET(	     TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_SIGN_OFFSET	       )
#define Z_FLOATING_POINT_SIGN_BITS(	     TYPE) Z_PREPEND_FLOATING_POINT_##TYPE(_SIGN_BITS	       )
#define Z_FLOATING_POINT_EPSILON(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_EPSILON))
#define Z_FLOATING_POINT_MINIMUM(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MINIMUM))
#define Z_FLOATING_POINT_MAXIMUM(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM))

#define Z_FLOATING_POINT_INFINITY(TYPE) \
	(Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM)) + \
	 Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM)))

#define Z_FLOATING_POINT_NAN(TYPE) \
	((Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM))  + \
	  Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM))) - \
	 (Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM))  + \
	  Z_FLOATING_POINT_LITERAL_##TYPE(Z_PREPEND_FLOATING_POINT_##TYPE(_MAXIMUM))))


/*#if Z_FLOATING_POINT_HAS_TYPE(FLOAT16)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT24)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT32)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT48)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT64)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT72)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT80)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT96)
#endif

#if Z_FLOATING_POINT_HAS_TYPE(FLOAT128)
#endif*/

#endif /* __Z_inspection_floating_point_H__ */
