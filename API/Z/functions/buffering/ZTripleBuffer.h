/* Z Kit - functioms/buffering/ZTripleBuffer.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2012 Remis.
Copyright (C) 2014 Manuel Sainz de Baranda y Goñi.

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

#ifndef _Z_functions_buffering_ZTripleBuffer_H_
#define _Z_functions_buffering_ZTripleBuffer_H_

#include <Z/types/buffering.h>
#include <Z/functions/base/value.h>


static Z_INLINE void z_triple_buffer_initialize(
	ZTripleBuffer* object,
	void const*    buffers,
	zusize	       buffer_size
)
	{
	object->buffers[0] = (zuint8 *)buffers;
	object->buffers[1] = (zuint8 *)buffers + buffer_size;
	object->buffers[2] = (zuint8 *)buffers + buffer_size * 2;
	object->flags	   = 6;
	}


static Z_INLINE void *z_triple_buffer_production_buffer(ZTripleBuffer const *object)
	{return object->buffers[(object->flags & 48) >> 4];}


static Z_INLINE void *z_triple_buffer_consumption_buffer(ZTripleBuffer const *object)
	{return object->buffers[object->flags & 3];}


static Z_INLINE void *z_triple_buffer_produce(ZTripleBuffer *object)
	{
	zuint8 flags, new_flags;

	do	{
		flags = object->flags;
		new_flags = 64 | ((flags & 12) << 2) | ((flags & 48) >> 2) | (flags & 3);
		}
	while (!z_uint8_atomic_set_if_equal(&object->flags, flags, new_flags));

	return object->buffers[(new_flags & 48) >> 4];
	}


static Z_INLINE void *z_triple_buffer_consume(ZTripleBuffer *object)
	{
	zuint8 flags, new_flags;

	do	{
		if (!((flags = object->flags) & 64)) return NULL;
		new_flags = (flags & 48) | ((flags & 3) << 2) | ((flags & 12) >> 2);
		}
	while (!z_uint8_atomic_set_if_equal(&object->flags, flags, new_flags));

	return object->buffers[new_flags & 3];;
	}


#endif /* _Z_functions_buffering_ZTripleBuffer_H_ */
