/* Z Kit C API - inspection/floating-point.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_floating_point_H__
#define __Z_inspection_floating_point_H__

#include <Z/inspection/language.h>
#include <Z/macros/pasting.h>

#if Z_LANGUAGE_HAS_TYPE(C, DOUBLE)

#	ifndef Z_FLOATING_POINT_VALUE_FORMAT_DOUBLE /* UDC */
#		ifndef Z_COMPILER_VALUE_FORMAT_DOUBLE
#			error "double value format not defined."
#		endif

#		define Z_FLOATING_POINT_VALUE_FORMAT_DOUBLE Z_COMPILER_VALUE_FORMAT_DOUBLE
#	endif

#	if Z_FLOATING_POINT_VALUE_FORMAT_DOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY16
#		define Z_FLOATING_POINT_LITERAL_FLOAT16		Z_SAME
#		define Z_FLOATING_POINT_TYPE_FLOAT16		double
#		define Z_FLOATING_POINT_VALUE_TYPE_FLOAT16	Z_VALUE_TYPE_DOUBLE
#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_DOUBLE Z_VALUE_TYPE_FLOAT16

#	elif Z_FLOATING_POINT_VALUE_FORMAT_DOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY32
#		define Z_FLOATING_POINT_LITERAL_FLOAT32		Z_SAME
#		define Z_FLOATING_POINT_TYPE_FLOAT32		double
#		define Z_FLOATING_POINT_VALUE_TYPE_FLOAT32	Z_VALUE_TYPE_DOUBLE
#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_DOUBLE Z_VALUE_TYPE_FLOAT32

#	elif Z_FLOATING_POINT_VALUE_FORMAT_DOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY64
#		define Z_FLOATING_POINT_LITERAL_FLOAT64		Z_SAME
#		define Z_FLOATING_POINT_TYPE_FLOAT64		double
#		define Z_FLOATING_POINT_VALUE_TYPE_FLOAT64	Z_VALUE_TYPE_DOUBLE
#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_DOUBLE Z_VALUE_TYPE_FLOAT64
#	endif

#endif

#if Z_LANGUAGE_HAS_TYPE(C, FLOAT)

#	ifndef Z_FLOATING_POINT_VALUE_FORMAT_FLOAT /* UDC */
#		ifndef Z_COMPILER_VALUE_FORMAT_FLOAT
#			error "float value format not defined."
#		endif

#		define Z_FLOATING_POINT_VALUE_FORMAT_FLOAT Z_COMPILER_VALUE_FORMAT_FLOAT
#	endif

#	if Z_FLOATING_POINT_VALUE_FORMAT_FLOAT == Z_VALUE_FORMAT_IEEE_754_BINARY16

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT16
#			define Z_FLOATING_POINT_LITERAL_FLOAT16	   Z_SUFFIX_F
#			define Z_FLOATING_POINT_TYPE_FLOAT16	   float
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT16 Z_VALUE_TYPE_FLOAT
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_FLOAT Z_VALUE_TYPE_FLOAT16


#	elif Z_FLOATING_POINT_VALUE_FORMAT_FLOAT == Z_VALUE_FORMAT_IEEE_754_BINARY32

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT32
#			define Z_FLOATING_POINT_LITERAL_FLOAT32	   Z_SUFFIX_F
#			define Z_FLOATING_POINT_TYPE_FLOAT32	   float
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT32 Z_VALUE_TYPE_FLOAT
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_FLOAT Z_VALUE_TYPE_FLOAT32

#	elif Z_FLOATING_POINT_VALUE_FORMAT_FLOAT == Z_VALUE_FORMAT_IEEE_754_BINARY64

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT64
#			define Z_FLOATING_POINT_LITERAL_FLOAT64	   Z_SUFFIX_F
#			define Z_FLOATING_POINT_TYPE_FLOAT64	   float
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT64 Z_VALUE_TYPE_FLOAT
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_FLOAT Z_VALUE_TYPE_FLOAT64
#	endif

#endif

#if Z_LANGUAGE_HAS_TYPE(C, LDOUBLE) || Z_LANGUAGE_HAS_TYPE(CPP, LDOUBLE)

#	ifndef Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE /* UDC */
#		ifndef Z_COMPILER_VALUE_FORMAT_LDOUBLE
#			/*error "long double value format not defined."*/
#			define Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE Z_VALUE_FORMAT_X87_BINARY128
#		endif

#		/*define Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE Z_COMPILER_VALUE_FORMAT_LDOUBLE*/
#	endif

#	if Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY16

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT16
#			define Z_FLOATING_POINT_LITERAL_FLOAT16	   Z_SUFFIX_L
#			define Z_FLOATING_POINT_TYPE_FLOAT16	   long double
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT16 Z_VALUE_TYPE_LDOUBLE
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT16

#	elif Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY32

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT32
#			define Z_FLOATING_POINT_LITERAL_FLOAT32	   Z_SUFFIX_L
#			define Z_FLOATING_POINT_TYPE_FLOAT32	   long double
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT32 Z_VALUE_TYPE_LDOUBLE
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT32

#	elif Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY64

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT64
#			define Z_FLOATING_POINT_LITERAL_FLOAT64	   Z_SUFFIX_L
#			define Z_FLOATING_POINT_TYPE_FLOAT64	   long double
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT64 Z_VALUE_TYPE_LDOUBLE
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT64

#	elif Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_IEEE_754_BINARY128

#		ifndef Z_FLOATING_POINT_TYPE_FLOAT128
#			define Z_FLOATING_POINT_LITERAL_FLOAT128    Z_SUFFIX_L
#			define Z_FLOATING_POINT_TYPE_FLOAT128	    long double
#			define Z_FLOATING_POINT_VALUE_TYPE_FLOAT128 Z_VALUE_TYPE_LDOUBLE
#		endif

#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT128

#	elif Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_X87_BINARY80
#		define Z_FLOATING_POINT_LITERAL_FLOAT80_X87	 Z_SUFFIX_L
#		define Z_FLOATING_POINT_TYPE_FLOAT80_X87	 long double
#		define Z_FLOATING_POINT_VALUE_TYPE_FLOAT80_X87	 Z_VALUE_TYPE_LDOUBLE
#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT80_X87

#	elif Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_X87_BINARY96
#		define Z_FLOATING_POINT_LITERAL_FLOAT96_X87	 Z_SUFFIX_L
#		define Z_FLOATING_POINT_TYPE_FLOAT96_X87	 long double
#		define Z_FLOATING_POINT_VALUE_TYPE_FLOAT96_X87	 Z_VALUE_TYPE_LDOUBLE
#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT96_X87

#	elif Z_FLOATING_POINT_VALUE_FORMAT_LDOUBLE == Z_VALUE_FORMAT_X87_BINARY128
#		define Z_FLOATING_POINT_LITERAL_FLOAT128_X87	 Z_SUFFIX_L
#		define Z_FLOATING_POINT_TYPE_FLOAT128_X87	 long double
#		define Z_FLOATING_POINT_VALUE_TYPE_FLOAT128_X87	 Z_VALUE_TYPE_LDOUBLE
#		define Z_FLOATING_POINT_FIXED_VALUE_TYPE_LDOUBLE Z_VALUE_TYPE_FLOAT128_X87
#	endif

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT16) && Z_COMPILER_HAS_TYPE(FLOAT16)

#	if Z_COMPILER_HAS_LITERAL(FLOAT16)
#		define Z_FLOATING_POINT_LITERAL_FLOAT16 Z_COMPILER_LITERAL(FLOAT16)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT16 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT16	   Z_COMPILER_TYPE(FLOAT16)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT16 Z_VALUE_TYPE_FLOAT16

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT32) && Z_COMPILER_HAS_TYPE(FLOAT32)

#	if Z_COMPILER_HAS_LITERAL(FLOAT32)
#		define Z_FLOATING_POINT_LITERAL_FLOAT32 Z_COMPILER_LITERAL(FLOAT32)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT32 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT32	   Z_COMPILER_TYPE(FLOAT32)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT32 Z_VALUE_TYPE_FLOAT32

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT64) && Z_COMPILER_HAS_TYPE(FLOAT64)

#	if Z_COMPILER_HAS_LITERAL(FLOAT64)
#		define Z_FLOATING_POINT_LITERAL_FLOAT64 Z_COMPILER_LITERAL(FLOAT64)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT64 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT64	   Z_COMPILER_TYPE(FLOAT64)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT64 Z_VALUE_TYPE_FLOAT64

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT128) && Z_COMPILER_HAS_TYPE(FLOAT128)

#	if Z_COMPILER_HAS_LITERAL(FLOAT128)
#		define Z_FLOATING_POINT_LITERAL_FLOAT128 Z_COMPILER_LITERAL(FLOAT128)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT128 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT128	    Z_COMPILER_TYPE(FLOAT128)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT128 Z_VALUE_TYPE_FLOAT128

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT80_X87) && Z_COMPILER_HAS_TYPE(FLOAT80_X87)

#	if Z_COMPILER_HAS_LITERAL(FLOAT80_X87)
#		define Z_FLOATING_POINT_LITERAL_FLOAT80_X87 Z_COMPILER_LITERAL(FLOAT80_X87)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT80_X87 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT80_X87       Z_COMPILER_TYPE(FLOAT80_X87)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT80_X87 Z_VALUE_TYPE_FLOAT80_X87

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT96_X87) && Z_COMPILER_HAS_TYPE(FLOAT96_X87)

#	if Z_COMPILER_HAS_LITERAL(FLOAT96_X87)
#		define Z_FLOATING_POINT_LITERAL_FLOAT96_X87 Z_COMPILER_LITERAL(FLOAT96_X87)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT96_X87 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT96_X87       Z_COMPILER_TYPE(FLOAT96_X87)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT96_X87 Z_VALUE_TYPE_FLOAT96_X87

#endif

#if !defined(Z_FLOATING_POINT_TYPE_FLOAT128_X87) && Z_COMPILER_HAS_TYPE(FLOAT128_X87)

#	if Z_COMPILER_HAS_LITERAL(FLOAT128_X87)
#		define Z_FLOATING_POINT_LITERAL_FLOAT128_X87 Z_COMPILER_LITERAL(FLOAT128_X87)
#	else
#		define Z_FLOATING_POINT_LITERAL_FLOAT128_X87 Z_SAME
#	endif

#	define Z_FLOATING_POINT_TYPE_FLOAT128_X87	Z_COMPILER_TYPE(FLOAT128_X87)
#	define Z_FLOATING_POINT_VALUE_TYPE_FLOAT128_X87 Z_VALUE_TYPE_FLOAT128_X87

#endif

#define Z_APPEND_FLOATING_POINT_FLOAT16(to)		  to##IEEE_754_BINARY16
#define Z_INSERT_FLOATING_POINT_FLOAT16(left, right)	  left##IEEE_754_BINARY16##right

#define Z_APPEND_FLOATING_POINT_FLOAT32(to)		  to##IEEE_754_BINARY32
#define Z_INSERT_FLOATING_POINT_FLOAT32(left, right)	  left##IEEE_754_BINARY32##right

#define Z_APPEND_FLOATING_POINT_FLOAT64(to)		  to##IEEE_754_BINARY64
#define Z_INSERT_FLOATING_POINT_FLOAT64(left, right)	  left##IEEE_754_BINARY64##right

#define Z_APPEND_FLOATING_POINT_FLOAT128(to)		  to##IEEE_754_BINARY128
#define Z_INSERT_FLOATING_POINT_FLOAT128(left, right)	  left##IEEI_754_BINARY128##right

#define Z_APPEND_FLOATING_POINT_FLOAT80_X87(to)		  to##X87_BINARY80
#define Z_INSERT_FLOATING_POINT_FLOAT80_X87(left, right)  left##X87_BINARY80##right

#define Z_APPEND_FLOATING_POINT_FLOAT96_X87(to)		  to##X87_BINARY96
#define Z_INSERT_FLOATING_POINT_FLOAT96_X87(left, right)  left##X87_BINARY96##right

#define Z_APPEND_FLOATING_POINT_FLOAT128_X87(to)	  to##X87_BINARY128
#define Z_INSERT_FLOATING_POINT_FLOAT128_X87(left, right) left##X87_BINARY128##right

#define Z_FLOATING_POINT_HAS_TYPE(	     TYPE) Z_FLOATING_POINT_HAS_TYPE_##TYPE
#define Z_FLOATING_POINT_LITERAL(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE
#define Z_FLOATING_POINT_TYPE(		     TYPE) Z_FLOATING_POINT_TYPE_##TYPE
#define Z_FLOATING_POINT_VALUE_TYPE(	     TYPE) Z_FLOATING_POINT_VALUE_TYPE_##TYPE
#define Z_FLOATING_POINT_FIXED_VALUE_TYPE(   TYPE) Z_FLOATING_POINT_FIXED_VALUE_TYPE_##TYPE
#define Z_FLOATING_POINT_VALUE_FORMAT(	     TYPE) Z_FLOATING_POINT_VALUE_FORMAT_##TYPE
#define Z_FLOATING_POINT_BIAS(		     TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _BIAS		  )
#define Z_FLOATING_POINT_DECIMAL_DIGITS(     TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _DECIMAL_DIGITS	  )
#define Z_FLOATING_POINT_SIGNIFICAND_OFFSET( TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _SIGNIFICAND_OFFSET )
#define Z_FLOATING_POINT_SIGNIFICAND_BITS(   TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _SIGNIFICAND_BITS	  )
#define Z_FLOATING_POINT_SIGNIFICAND_DIGITS( TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _SIGNIFICAND_DIGITS )
#define Z_FLOATING_POINT_EXPONENT_OFFSET(    TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_OFFSET	  )
#define Z_FLOATING_POINT_EXPONENT_BITS(	     TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_BITS	  )
#define Z_FLOATING_POINT_EXPONENT_RADIX(     TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_RADIX	  )
#define Z_FLOATING_POINT_EXPONENT_MINIMUM(   TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_MINIMUM	  )
#define Z_FLOATING_POINT_EXPONENT_MAXIMUM(   TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_MAXIMUM	  )
#define Z_FLOATING_POINT_EXPONENT_10_MINIMUM(TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_10_MINIMUM)
#define Z_FLOATING_POINT_EXPONENT_10_MAXIMUM(TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EXPONENT_10_MAXIMUM)
#define Z_FLOATING_POINT_SIGN_OFFSET(	     TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _SIGN_OFFSET	  )
#define Z_FLOATING_POINT_SIGN_BITS(	     TYPE) Z_INSERT_FLOATING_POINT_##TYPE(Z_, _SIGN_BITS	  )
#define Z_FLOATING_POINT_EPSILON(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _EPSILON))
#define Z_FLOATING_POINT_MINIMUM(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MINIMUM))
#define Z_FLOATING_POINT_MAXIMUM(	     TYPE) Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM))

#define Z_FLOATING_POINT_INFINITY(TYPE) \
	(Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM)) + \
	 Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM)))

#define Z_FLOATING_POINT_NAN(TYPE) \
	((Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM))  + \
	  Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM))) - \
	 (Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM))  + \
	  Z_FLOATING_POINT_LITERAL_##TYPE(Z_INSERT_FLOATING_POINT_##TYPE(Z_, _MAXIMUM))))

#include <Z/inspection/floating-point/completion.h>

#if	Z_FLOATING_POINT_HAS_TYPE(FLOAT16 ) || \
	Z_FLOATING_POINT_HAS_TYPE(FLOAT32 ) || \
	Z_FLOATING_POINT_HAS_TYPE(FLOAT64 ) || \
	Z_FLOATING_POINT_HAS_TYPE(FLOAT128)

#	include <Z/formats/floating-point/IEEE 754.h>
#endif

#if	Z_FLOATING_POINT_HAS_TYPE(FLOAT80_X87 ) || \
	Z_FLOATING_POINT_HAS_TYPE(FLOAT96_X87 ) || \
	Z_FLOATING_POINT_HAS_TYPE(FLOAT128_X87)

#	include <Z/formats/floating-point/x87.h>
#endif

#endif /* __Z_inspection_floating_point_H__ */