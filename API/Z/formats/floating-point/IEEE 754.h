/* Z Kit - formats/floating-point/IEEE 754.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//__/__| Kit
Copyright (C) 2006-2020 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_formats_floating_point_IEEE_754_H
#define Z_formats_floating_point_IEEE_754_H

#define Z_IEEE_754_BINARY16_BITS		     16
#define Z_IEEE_754_BINARY16_BIAS		     15
#define Z_IEEE_754_BINARY16_DIGITS_10		      3
#define Z_IEEE_754_BINARY16_MAXIMUM_DIGITS_10	      5
#define Z_IEEE_754_BINARY16_RADIX		      2
#define Z_IEEE_754_BINARY16_SIGNIFICAND_DIGITS	     11
#define Z_IEEE_754_BINARY16_EXPONENT_MAXIMUM	     15
#define Z_IEEE_754_BINARY16_EXPONENT_MINIMUM	    -14
#define Z_IEEE_754_BINARY16_EXPONENT_10_MAXIMUM	      4
#define Z_IEEE_754_BINARY16_EXPONENT_10_MINIMUM	     -3 /* correct? */
#define Z_IEEE_754_BINARY16_EPSILON		      9.765625e-4 /* correct? */
#define Z_IEEE_754_BINARY16_MAXIMUM		  65504.0
#define Z_IEEE_754_BINARY16_MINIMUM		      6.103515625e-5
#define Z_IEEE_754_BINARY16_DENORMAL_MINIMUM	      5.9604644775390625e-8

#define Z_IEEE_754_BINARY32_BITS		     32
#define Z_IEEE_754_BINARY32_BIAS		    127
#define Z_IEEE_754_BINARY32_DIGITS_10		      6
#define Z_IEEE_754_BINARY32_MAXIMUM_DIGITS_10	      9
#define Z_IEEE_754_BINARY32_RADIX		      2
#define Z_IEEE_754_BINARY32_SIGNIFICAND_DIGITS	     24
#define Z_IEEE_754_BINARY32_EXPONENT_MAXIMUM	    127
#define Z_IEEE_754_BINARY32_EXPONENT_MINIMUM	   -126
#define Z_IEEE_754_BINARY32_EXPONENT_10_MAXIMUM	     38
#define Z_IEEE_754_BINARY32_EXPONENT_10_MINIMUM	    -37
#define Z_IEEE_754_BINARY32_EPSILON		      1.192092896e-7
#define Z_IEEE_754_BINARY32_MAXIMUM		      3.402823466e+38
#define Z_IEEE_754_BINARY32_MINIMUM		      1.175494351e-38
#define Z_IEEE_754_BINARY32_DENORMAL_MINIMUM	      1.401298460e-45

#define Z_IEEE_754_BINARY64_BITS		     64
#define Z_IEEE_754_BINARY64_BIAS		   1023
#define Z_IEEE_754_BINARY64_DIGITS_10		     15
#define Z_IEEE_754_BINARY64_MAXIMUM_DIGITS_10	     17
#define Z_IEEE_754_BINARY64_RADIX		      2
#define Z_IEEE_754_BINARY64_SIGNIFICAND_DIGITS	     53
#define Z_IEEE_754_BINARY64_EXPONENT_MAXIMUM	   1023
#define Z_IEEE_754_BINARY64_EXPONENT_MINIMUM	  -1022
#define Z_IEEE_754_BINARY64_EXPONENT_10_MAXIMUM	    308
#define Z_IEEE_754_BINARY64_EXPONENT_10_MINIMUM	   -307
#define Z_IEEE_754_BINARY64_EPSILON		      2.2204460492503131e-16
#define Z_IEEE_754_BINARY64_MAXIMUM		      1.7976931348623158e+308
#define Z_IEEE_754_BINARY64_MINIMUM		      2.2250738585072014e-308
#define Z_IEEE_754_BINARY64_DENORMAL_MINIMUM	      4.9406564584124654e-324

#define Z_IEEE_754_BINARY128_BITS		    128
#define Z_IEEE_754_BINARY128_BIAS		  16383
#define Z_IEEE_754_BINARY128_DIGITS_10		     33
#define Z_IEEE_754_BINARY128_MAXIMUM_DIGITS_10	     36
#define Z_IEEE_754_BINARY128_RADIX		      2
#define Z_IEEE_754_BINARY128_SIGNIFICAND_DIGITS	    113
#define Z_IEEE_754_BINARY128_EXPONENT_MAXIMUM	  16383
#define Z_IEEE_754_BINARY128_EXPONENT_MINIMUM	 -16382
#define Z_IEEE_754_BINARY128_EXPONENT_10_MAXIMUM   4932
#define Z_IEEE_754_BINARY128_EXPONENT_10_MINIMUM  -4931
#define Z_IEEE_754_BINARY128_EPSILON		      1.92592994438723585305597794258492732e-34
#define Z_IEEE_754_BINARY128_MAXIMUM		      1.18973149535723176508575932662800702e+4932
#define Z_IEEE_754_BINARY128_MINIMUM		      3.36210314311209350626267781732175260e-4932
#define Z_IEEE_754_BINARY128_DENORMAL_MINIMUM	      6.47517511943802511092443895822764655e-4966

#define Z_IEEE_754_DECIMAL32_BITS		     32
#define Z_IEEE_754_DECIMAL32_BIAS		    101
#define Z_IEEE_754_DECIMAL32_DIGITS_10
#define Z_IEEE_754_DECIMAL32_MAXIMUM_DIGITS_10
#define Z_IEEE_754_DECIMAL32_RADIX		     10
#define Z_IEEE_754_DECIMAL32_SIGNIFICAND_DIGITS	      7
#define Z_IEEE_754_DECIMAL32_EXPONENT_MAXIMUM	     96
#define Z_IEEE_754_DECIMAL32_EXPONENT_MINIMUM	    -95
#define Z_IEEE_754_DECIMAL32_EXPONENT_10_MAXIMUM
#define Z_IEEE_754_DECIMAL32_EXPONENT_10_MINIMUM
#define Z_IEEE_754_DECIMAL32_EPSILON		      1e-6
#define Z_IEEE_754_DECIMAL32_MAXIMUM		      9.999999e+96
#define Z_IEEE_754_DECIMAL32_MINIMUM		      1e-95
#define Z_IEEE_754_DECIMAL32_DENORMAL_MINIMUM	      0.000001e-95

#define Z_IEEE_754_DECIMAL64_BITS		     64
#define Z_IEEE_754_DECIMAL64_BIAS		    398
#define Z_IEEE_754_DECIMAL64_DIGITS_10
#define Z_IEEE_754_DECIMAL64_MAXIMUM_DIGITS_10
#define Z_IEEE_754_DECIMAL64_RADIX		     10
#define Z_IEEE_754_DECIMAL64_SIGNIFICAND_DIGITS	     16
#define Z_IEEE_754_DECIMAL64_EXPONENT_MAXIMUM	    384
#define Z_IEEE_754_DECIMAL64_EXPONENT_MINIMUM	   -383
#define Z_IEEE_754_DECIMAL64_EXPONENT_10_MAXIMUM
#define Z_IEEE_754_DECIMAL64_EXPONENT_10_MINIMUM
#define Z_IEEE_754_DECIMAL64_EPSILON		      1e-15
#define Z_IEEE_754_DECIMAL64_MAXIMUM		      9.999999999999999e+384
#define Z_IEEE_754_DECIMAL64_MINIMUM		      1e-383
#define Z_IEEE_754_DECIMAL64_DENORMAL_MINIMUM	      0.000000000000001e-383

#define Z_IEEE_754_DECIMAL128_BITS		    128
#define Z_IEEE_754_DECIMAL128_BIAS		   6176
#define Z_IEEE_754_DECIMAL128_DIGITS_10
#define Z_IEEE_754_DECIMAL128_MAXIMUM_DIGITS_10
#define Z_IEEE_754_DECIMAL128_RADIX		     10
#define Z_IEEE_754_DECIMAL128_SIGNIFICAND_DIGITS     34
#define Z_IEEE_754_DECIMAL128_EXPONENT_MAXIMUM	   6144
#define Z_IEEE_754_DECIMAL128_EXPONENT_MINIMUM	  -6143
#define Z_IEEE_754_DECIMAL128_EXPONENT_10_MAXIMUM
#define Z_IEEE_754_DECIMAL128_EXPONENT_10_MINIMUM
#define Z_IEEE_754_DECIMAL128_EPSILON		      1e-33
#define Z_IEEE_754_DECIMAL128_MAXIMUM		      9.999999999999999999999999999999999e+6144
#define Z_IEEE_754_DECIMAL128_MINIMUM		      1e-6143
#define Z_IEEE_754_DECIMAL128_DENORMAL_MINIMUM	      0.000000000000000000000000000000001e-6143

#endif /* Z_formats_floating_point_IEEE_754_H */
