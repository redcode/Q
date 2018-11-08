/* Z Kit - inspection/CPU.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
-------------------------------------------------------------------------------
This library is  free software: you can redistribute it  and/or modify it under
the terms  of the GNU  Lesser General Public License  as published by  the Free
Software Foundation, either  version 3 of the License, or  (at your option) any
later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received  a copy of the GNU Lesser General Public License along
with this library. If not, see <http://www.gnu.org/licenses/>.
---------------------------------------------------------------------------- */

#ifndef _Z_inspection_CPU_H_
#define _Z_inspection_CPU_H_

#include <Z/keys/hardware/CPU/architecture.h>
#include <Z/keys/endianness.h>
#include <Z/keys/value.h>
#include <Z/inspection/compiler.h>

#ifndef Z_CPU_ARCHITECTURE /* UDC */
#	ifdef Z_COMPILER_CPU_ARCHITECTURE
#		define Z_CPU_ARCHITECTURE Z_COMPILER_CPU_ARCHITECTURE
#	else
#		include <Z/inspection/CPU/detection.h>
#	endif
#endif

#if !defined(Z_CPU_ARCHITECTURE)
#	error "CPU architecture not defined."

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_6502
#	include <Z/inspection/CPU/modules/6502.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_AARCH32
#	include <Z/inspection/CPU/modules/AArch32.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_AARCH64
#	include <Z/inspection/CPU/modules/AArch64.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ALPHA
#	include <Z/inspection/CPU/modules/Alpha.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_BLACKFIN
#	include <Z/inspection/CPU/modules/Blackfin.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_CONVEX
#	include <Z/inspection/CPU/modules/Convex.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_EPIPHANY
#	include <Z/inspection/CPU/modules/Epiphany.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ESA_370
#	include <Z/inspection/CPU/modules/ESA-370.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ESA_390
#	include <Z/inspection/CPU/modules/ESA-390.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_HEXAGON
#	include <Z/inspection/CPU/modules/Hexagon.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ITANIUM
#	include <Z/inspection/CPU/modules/Itanium.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_LANAI
#	include <Z/inspection/CPU/modules/Lanai.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_M68K
#	include <Z/inspection/CPU/modules/M68K.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MIPS
#	include <Z/inspection/CPU/modules/MIPS.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MIPS64
#	include <Z/inspection/CPU/modules/MIPS64.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MSP430
#	include <Z/inspection/CPU/modules/MSP430.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_PA_RISC
#	include <Z/inspection/CPU/modules/PA-RISC.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_PA_RISC_2
#	include <Z/inspection/CPU/modules/PA-RISC 2.0.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_POWERPC_32BIT
#	include <Z/inspection/CPU/modules/PowerPC 32-bit.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_POWERPC_64BIT
#	include <Z/inspection/CPU/modules/PowerPC 64-bit.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SPARC
#	include <Z/inspection/CPU/modules/SPARC.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SPARC_V9
#	include <Z/inspection/CPU/modules/SPARC V9.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SUPERH
#	include <Z/inspection/CPU/modules/SuperH.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SUPERH_5
#	include <Z/inspection/CPU/modules/SuperH 5.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_16
#	include <Z/inspection/CPU/modules/x86-16.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_32
#	include <Z/inspection/CPU/modules/x86-32.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_64
#	include <Z/inspection/CPU/modules/x86-64.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_Z_ARCHITECTURE
#	include <Z/inspection/CPU/modules/z-Architecture.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_Z80
#	include <Z/inspection/CPU/modules/Z80.h>

#else
#	error "CPU architecture not supported."

#endif

#include <Z/inspection/CPU/completion.h>

#if Z_CPU_INTEGER_ENDIANNESS != Z_ENDIANNESS_MIXED

#	define Z_CPU_INTEGER_ENDIANNESS_16BIT  Z_CPU_INTEGER_ENDIANNESS
#	define Z_CPU_INTEGER_ENDIANNESS_32BIT  Z_CPU_INTEGER_ENDIANNESS
#	define Z_CPU_INTEGER_ENDIANNESS_64BIT  Z_CPU_INTEGER_ENDIANNESS
#	define Z_CPU_INTEGER_ENDIANNESS_128BIT Z_CPU_INTEGER_ENDIANNESS

#else

#	if defined(Z_CPU_INTEGER_ENDIANNESS_16BIT) && Z_CPU_INTEGER_ENDIANNESS_16BIT == Z_ENDIANNESS_MIXED
#		undef Z_CPU_INTEGER_ENDIANNESS_16BIT
#	endif

#	if !defined(Z_CPU_INTEGER_ENDIANNESS_16BIT) && defined(Z_COMPILER_CPU_INTEGER_ENDIANNESS_16BIT)
#		define Z_CPU_INTEGER_ENDIANNESS_16BIT Z_COMPILER_CPU_INTEGER_ENDIANNESS_16BIT
#	endif

#	if defined(Z_CPU_INTEGER_ENDIANNESS_32BIT) && Z_CPU_INTEGER_ENDIANNESS_32BIT == Z_ENDIANNESS_MIXED
#		undef Z_CPU_INTEGER_ENDIANNESS_32BIT
#	endif

#	if !defined(Z_CPU_INTEGER_ENDIANNESS_32BIT) && defined(Z_COMPILER_CPU_INTEGER_ENDIANNESS_32BIT)
#		define Z_CPU_INTEGER_ENDIANNESS_32BIT Z_COMPILER_CPU_INTEGER_ENDIANNESS_32BIT
#	endif

#	if defined(Z_CPU_INTEGER_ENDIANNESS_64BIT) && Z_CPU_INTEGER_ENDIANNESS_64BIT == Z_ENDIANNESS_MIXED
#		undef Z_CPU_INTEGER_ENDIANNESS_64BIT
#	endif

#	if !defined(Z_CPU_INTEGER_ENDIANNESS_64BIT) && defined(Z_COMPILER_CPU_INTEGER_ENDIANNESS_64BIT)
#		define Z_CPU_INTEGER_ENDIANNESS_64BIT Z_COMPILER_CPU_INTEGER_ENDIANNESS_64BIT
#	endif

#	if defined(Z_CPU_INTEGER_ENDIANNESS_128BIT) && Z_CPU_INTEGER_ENDIANNESS_128BIT == Z_ENDIANNESS_MIXED
#		undef Z_CPU_INTEGER_ENDIANNESS_128BIT
#	endif

#	if !defined(Z_CPU_INTEGER_ENDIANNESS_128BIT) && defined(Z_COMPILER_CPU_INTEGER_ENDIANNESS_128BIT)
#		define Z_CPU_INTEGER_ENDIANNESS_128BIT Z_COMPILER_CPU_INTEGER_ENDIANNESS_128BIT
#	endif

#endif

#ifdef Z_CPU_INTEGER_FORMAT

#	if Z_CPU_INTEGER_FORMAT == Z_INTEGER_FORMAT_2S_COMPLEMENT

#		define Z_CPU_INTEGER_FORMAT_8BIT   Z_VALUE_FORMAT_8BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_16BIT  Z_VALUE_FORMAT_16BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_32BIT  Z_VALUE_FORMAT_32BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_64BIT  Z_VALUE_FORMAT_64BIT_2S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_128BIT Z_VALUE_FORMAT_128BIT_2S_COMPLEMENT_INTEGER

#	elif Z_CPU_INTEGER_FORMAT == Z_INTEGER_FORMAT_1S_COMPLEMENT

#		define Z_CPU_INTEGER_FORMAT_8BIT   Z_VALUE_FORMAT_8BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_16BIT  Z_VALUE_FORMAT_16BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_32BIT  Z_VALUE_FORMAT_32BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_64BIT  Z_VALUE_FORMAT_64BIT_1S_COMPLEMENT_INTEGER
#		define Z_CPU_INTEGER_FORMAT_128BIT Z_VALUE_FORMAT_128BIT_1S_COMPLEMENT_INTEGER

#	endif

#endif

#define Z_CPU_ARCHITECTURE_STRING Z_APPEND_CPU_ARCHITECTURE(Z_CPU_ARCHITECTURE_STRING_)

#define Z_CPU_HAS(	  WHAT	) Z_CPU_HAS_##WHAT
#define Z_CPU_HAS_ISA(	  WHICH	) Z_CPU_HAS_ISA_##WHICH
#define Z_CPU_HAS_INTEGER(bits	) Z_CPU_HAS_INTEGER_##bits##BIT
#define Z_CPU_HAS_REAL(	  FORMAT) Z_CPY_HAS_REAL_##FORMAT
#define Z_CPU_BITS(	  WHAT	) Z_CPU_BITS_##WHAT

#define Z_CPU_ENDIANNESS(TYPE, bits) Z_CPU_##TYPE##_ENDIANNESS_##bits##BIT
#define Z_CPU_FORMAT(	 TYPE, bits) Z_CPU_##TYPE##_FORMAT_##bits##BIT

#endif /* _Z_inspection_CPU_H_ */
