/* Z Kit - formats/floating-point/IEEE 754.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.

This library is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this library.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef _Z_formats_floating_point_IEEE_754_H_
#define _Z_formats_floating_point_IEEE_754_H_

/* MARK: - binary16 */

#define Z_IEEE_754_BINARY16_BITS			    16			/* OK */
#define Z_IEEE_754_BINARY16_BIAS			    15			/* OK */
#define Z_IEEE_754_BINARY16_EPSILON			    0.00097656		/* OK */
#define Z_IEEE_754_BINARY16_MINIMUM			    5.96046448e-08	/* OK */
#define Z_IEEE_754_BINARY16_MAXIMUM			    65504.0		/* OK */
#define Z_IEEE_754_BINARY16_NORMALIZED_MINIMUM		    6.10351562e-05	/* OK */
#define Z_IEEE_754_BINARY16_DECIMAL_DIGITS		    3
#define Z_IEEE_754_BINARY16_SIGNIFICAND_OFFSET		    0			/* OK */
#define Z_IEEE_754_BINARY16_SIGNIFICAND_BITS		    10			/* OK */
#define Z_IEEE_754_BINARY16_SIGNIFICAND_DIGITS		    11			/* OK */
#define Z_IEEE_754_BINARY16_EXPONENT_OFFSET		    10			/* OK */
#define Z_IEEE_754_BINARY16_EXPONENT_BITS		    5			/* OK */
#define Z_IEEE_754_BINARY16_EXPONENT_RADIX		    2			/* OK */
#define Z_IEEE_754_BINARY16_EXPONENT_MINIMUM		    -14
#define Z_IEEE_754_BINARY16_EXPONENT_MAXIMUM		    15			/* OK */
#define Z_IEEE_754_BINARY16_EXPONENT_10_MINIMUM		    -4
#define Z_IEEE_754_BINARY16_EXPONENT_10_MAXIMUM		    4
#define Z_IEEE_754_BINARY16_SIGN_OFFSET			    15			/* OK */
#define Z_IEEE_754_BINARY16_SIGN_BITS			    1			/* OK */

/* MARK: - binary32 */

#define Z_IEEE_754_BINARY32_BITS			    32			/* OK */
#define Z_IEEE_754_BINARY32_BIAS			    127			/* OK */
#define Z_IEEE_754_BINARY32_EPSILON			    1.192092896e-07	/* OK */
#define Z_IEEE_754_BINARY32_MINIMUM			    1.175494351e-38	/* OK */
#define Z_IEEE_754_BINARY32_MAXIMUM			    3.402823466e+38	/* OK */
#define Z_IEEE_754_BINARY32_DECIMAL_DIGITS		    6			/* OK */
#define Z_IEEE_754_BINARY32_SIGNIFICAND_OFFSET		    0			/* OK */
#define Z_IEEE_754_BINARY32_SIGNIFICAND_BITS		    23			/* OK */
#define Z_IEEE_754_BINARY32_SIGNIFICAND_DIGITS		    24			/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_OFFSET		    23			/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_BITS		    8			/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_RADIX		    2			/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_MINIMUM		    -125		/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_MAXIMUM		    128			/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_10_MINIMUM		    -37			/* OK */
#define Z_IEEE_754_BINARY32_EXPONENT_10_MAXIMUM		    38			/* OK */
#define Z_IEEE_754_BINARY32_SIGN_OFFSET			    31			/* OK */
#define Z_IEEE_754_BINARY32_SIGN_BITS			    1			/* OK */

/* MARK: - binary64 */

#define Z_IEEE_754_BINARY64_BITS			    64			/* OK */
#define Z_IEEE_754_BINARY64_BIAS			    1023		/* OK */
#define Z_IEEE_754_BINARY64_EPSILON			    2.2204460492503131e-16 /* OK */
#define Z_IEEE_754_BINARY64_MINIMUM			    2.2250738585072014e-308 /* OK */
#define Z_IEEE_754_BINARY64_MAXIMUM			    1.7976931348623158e+308 /* OK */
#define Z_IEEE_754_BINARY64_DECIMAL_DIGITS		    15			/* OK */
#define Z_IEEE_754_BINARY64_SIGNIFICAND_OFFSET		    0			/* OK */
#define Z_IEEE_754_BINARY64_SIGNIFICAND_BITS		    52			/* OK */
#define Z_IEEE_754_BINARY64_SIGNIFICAND_DIGITS		    53			/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_OFFSET		    52			/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_BITS		    11			/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_RADIX		    2			/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_MINIMUM		    -1021		/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_MAXIMUM		    1024		/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_10_MINIMUM		    -307		/* OK */
#define Z_IEEE_754_BINARY64_EXPONENT_10_MAXIMUM		    308			/* OK */
#define Z_IEEE_754_BINARY64_SIGN_OFFSET			    63			/* OK */
#define Z_IEEE_754_BINARY64_SIGN_BITS			    1			/* OK */

/* MARK: - binary128 */

#define Z_IEEE_754_BINARY128_BITS			    128			/* OK */
#define Z_IEEE_754_BINARY128_BIAS			    16383		/* OK */
#define Z_IEEE_754_BINARY128_EPSILON			    1.92592994438723585305597794258492732e-34
							  /*1.925929944387235853055977942584927319e-34*/
#define Z_IEEE_754_BINARY128_MINIMUM			    3.36210314311209350626267781732175260e-4932
							  /*3.362103143112093506262677817321752603e-4932 */
#define Z_IEEE_754_BINARY128_MAXIMUM			    1.18973149535723176508575932662800702e+4932
							  /*1.189731495357231765085759326628007016e+4932*/
#define Z_IEEE_754_BINARY128_DECIMAL_DIGITS		    33			/* OK */
#define Z_IEEE_754_BINARY128_SIGNIFICAND_OFFSET		    0			/* OK */
#define Z_IEEE_754_BINARY128_SIGNIFICAND_BITS		    112			/* OK */
#define Z_IEEE_754_BINARY128_SIGNIFICAND_DIGITS		    113			/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_OFFSET		    112			/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_BITS		    15			/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_RADIX		    2			/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_MINIMUM		    -16381		/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_MAXIMUM		    16384		/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_10_MINIMUM	    -4931		/* OK */
#define Z_IEEE_754_BINARY128_EXPONENT_10_MAXIMUM	    4932		/* OK */
#define Z_IEEE_754_BINARY128_SIGN_OFFSET		    127			/* OK */
#define Z_IEEE_754_BINARY128_SIGN_BITS			    1			/* OK */

/* MARK: - decimal32 */

#define Z_IEEE_754_DECIMAL32_BITS			    32			/* OK */
#define Z_IEEE_754_DECIMAL32_BIAS			    101			/* OK */
#define Z_IEEE_754_DECIMAL32_EPSILON			    1e-6
#define Z_IEEE_754_DECIMAL32_MINIMUM_POSITIVE		    1e-95
#define Z_IEEE_754_DECIMAL32_MINIMUM_POSITIVE_DENORMALIZED  0.000001e-95
#define Z_IEEE_754_DECIMAL32_MAXIMUM			    9.999999e+96
#define Z_IEEE_754_DECIMAL32_SIGNIFICAND_DIGITS		    7			/* OK */
#define Z_IEEE_754_DECIMAL32_EXPONENT_MINIMUM		    -95
#define Z_IEEE_754_DECIMAL32_EXPONENT_MAXIMUM		    96
#define Z_IEEE_754_DECIMAL32_SIGN_OFFSET		    31
#define Z_IEEE_754_DECIMAL32_SIGN_BITS			    1			/* OK */

/* MARK: - decimal64 */

#define Z_IEEE_754_DECIMAL64_BITS			    64			/* OK */
#define Z_IEEE_754_DECIMAL64_BIAS			    398			/* OK */
#define Z_IEEE_754_DECIMAL64_EPSILON			    1e-15
#define Z_IEEE_754_DECIMAL64_MINIMUM_POSITIVE		    1e-383
#define Z_IEEE_754_DECIMAL64_MINIMUM_POSITIVE_DENORMALIZED  0.000000000000001e-383
#define Z_IEEE_754_DECIMAL64_MAXIMUM			    9.999999999999999e+384
#define Z_IEEE_754_DECIMAL64_SIGNIFICAND_DIGITS		    16			/* OK */
#define Z_IEEE_754_DECIMAL64_EXPONENT_MINIMUM		    -383
#define Z_IEEE_754_DECIMAL64_EXPONENT_MAXIMUM		    384
#define Z_IEEE_754_DECIMAL64_SIGN_OFFSET		    63			/* OK */
#define Z_IEEE_754_DECIMAL64_SIGN_BITS			    1			/* OK */

/* MARK: - decimal128 */

#define Z_IEEE_754_DECIMAL128_BITS			    128			/* OK */
#define Z_IEEE_754_DECIMAL128_BIAS			    6176		/* OK */
#define Z_IEEE_754_DECIMAL128_EPSILON			    1e-33
#define Z_IEEE_754_DECIMAL128_MINIMUM_POSITIVE		    1e-6143
#define Z_IEEE_754_DECIMAL128_MINIMUM_POSITIVE_DENORMALIZED 0.000000000000000000000000000000001e-6143
#define Z_IEEE_754_DECIMAL128_MAXIMUM			    9.999999999999999999999999999999999e+6144
#define Z_IEEE_754_DECIMAL128_SIGNIFICAND_DIGITS	    34			/* OK */
#define Z_IEEE_754_DECIMAL128_EXPONENT_MINIMUM		    -6143
#define Z_IEEE_754_DECIMAL128_EXPONENT_MAXIMUM		    6144
#define Z_IEEE_754_DECIMAL128_SIGN_OFFSET		    127			/* OK */
#define Z_IEEE_754_DECIMAL128_SIGN_BITS			    1			/* OK */

#endif /* _Z_formats_floating_point_IEEE_754_H_ */
