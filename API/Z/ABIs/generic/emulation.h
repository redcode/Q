/* Z Kit - ABIs/generic/emulation.h
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

#ifndef _Z_ABIs_generic_emulation_H_
#define _Z_ABIs_generic_emulation_H_

#include <Z/types/generic functions.h>
#include <Z/macros/key.h>

#define Z_EMULATOR_FUNCTION_POWER		0
#define Z_EMULATOR_FUNCTION_RESET		1
#define Z_EMULATOR_FUNCTION_RUN			2
#define Z_EMULATOR_FUNCTION_RUN_ONE_SCANLINE
#define Z_EMULATOR_FUNCTION_RUN_ONE_FRAME
#define Z_EMULATOR_FUNCTION_WILL_READ_STATE	3
#define Z_EMULATOR_FUNCTION_DID_WRITE_STATE	4
#define Z_EMULATOR_FUNCTION_HALT		8
#define Z_EMULATOR_FUNCTION_NMI			4
#define Z_EMULATOR_FUNCTION_IRQ			5
#define Z_EMULATOR_FUNCTION_IRQ_DATA		9
#define Z_EMULATOR_FUNCTION_READ_8BIT		6
#define Z_EMULATOR_FUNCTION_READ_16BIT
#define Z_EMULATOR_FUNCTION_READ_32BIT
#define Z_EMULATOR_FUNCTION_READ_64BIT
#define Z_EMULATOR_FUNCTION_READ_128BIT
#define Z_EMULATOR_FUNCTION_READ_256BIT
#define Z_EMULATOR_FUNCTION_READ_512BIT
#define Z_EMULATOR_FUNCTION_READ_1024BIT
#define Z_EMULATOR_FUNCTION_WRITE_8BIT		20
#define Z_EMULATOR_FUNCTION_WRITE_16BIT
#define Z_EMULATOR_FUNCTION_WRITE_32BIT
#define Z_EMULATOR_FUNCTION_WRITE_64BIT
#define Z_EMULATOR_FUNCTION_WRITE_128BIT
#define Z_EMULATOR_FUNCTION_WRITE_256BIT
#define Z_EMULATOR_FUNCTION_WRITE_512BIT
#define Z_EMULATOR_FUNCTION_WRITE_1024BIT
#define Z_EMULATOR_FUNCTION_IN_8BIT		30
#define Z_EMULATOR_FUNCTION_IN_16BIT
#define Z_EMULATOR_FUNCTION_IN_32BIT
#define Z_EMULATOR_FUNCTION_IN_64BIT
#define Z_EMULATOR_FUNCTION_IN_128BIT
#define Z_EMULATOR_FUNCTION_IN_256BIT
#define Z_EMULATOR_FUNCTION_IN_512BIT
#define Z_EMULATOR_FUNCTION_IN_1024BIT
#define Z_EMULATOR_FUNCTION_OUT_8BIT		40
#define Z_EMULATOR_FUNCTION_OUT_16BIT
#define Z_EMULATOR_FUNCTION_OUT_32BIT
#define Z_EMULATOR_FUNCTION_OUT_64BIT
#define Z_EMULATOR_FUNCTION_OUT_128BIT
#define Z_EMULATOR_FUNCTION_OUT_256BIT
#define Z_EMULATOR_FUNCTION_OUT_512BIT
#define Z_EMULATOR_FUNCTION_OUT_1024BIT

#define Z_KEY_BITS_EMULATOR_FUNCTION 8

typedef struct {
	zuintptr id;

	struct {zusize cycles;
		/* ... */
	} context;
} ZEmulatorComponent;

Z_DEFINE_STRICT_STRUCTURE (
	zchar const* domain_identifier;
	zchar const* unit_identifier;
) ZEmulatorDependency;

typedef ZContextDo ZEmulatorFunction;

Z_DEFINE_STRICT_STRUCTURE (
	ZKey(EMULATOR_FUNCTION) key;
	ZPointer		component;
) ZEmulatorExport;

Z_DEFINE_STRICT_STRUCTURE (
	ZKey(EMULATOR_FUNCTION) key;
	zusize			offset;
) ZEmulatorInstanceImport;

typedef ZEmulatorExport		ZCPUEmulatorExport;
typedef ZEmulatorInstanceImport ZCPUEmulatorInstanceImport;

Z_DEFINE_STRICT_STRUCTURE (
	zusize			       dependency_count;
	ZEmulatorDependency const*     dependencies;
	zusize			       export_count;
	ZEmulatorExport const*	       exports;
	zusize			       instance_size;
	zusize			       instance_state_offset;
	zusize			       instance_state_size;
	zusize			       instance_import_count;
	ZEmulatorInstanceImport const* instance_imports;
) ZCPUEmulatorABI;

/*typedef struct {
} ZMachineEmulatorABI;*/

typedef zusize (* ZEmulatorRun)	 (void*    object,
				  zusize   cycles);

typedef void   (* ZEmulatorPower)(void*    object,
				  zboolean power_state);

typedef ZContextDo ZEmulatorWillReadState;
typedef ZContextDo ZEmulatorDidWriteState;

#endif /* _Z_ABIs_generic_emulation_H_ */
