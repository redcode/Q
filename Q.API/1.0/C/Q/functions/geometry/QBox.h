/* Q API - functions/geometry/QBox.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_functions_geometry_QBox_H__
#define __Q_functions_geometry_QBox_H__

#include <Q/functions/geometry/constructors.h>
#include <Q/functions/Q3D.h>

#ifndef Q_BOX_EXPORT
#	define Q_BOX_EXPORT Q_INLINE
#endif


#define Q_IMPLEMENTATION_BOX(Type, type, _)					\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_are_equal(Q##Type##Box a, Q##Type##Box b)		\
	{									\
	return	q_3d_##type##_are_equal(a.point, b.point) &&			\
		q_3d_##type##_are_equal(a.size,  b.size );			\
	}									\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_contains(Q##Type##Box a, Q##Type##Box b)		\
	{									\
	return	b.point.x	     >= a.point.x	     &&			\
		b.point.y	     >= a.point.y	     &&			\
		b.point.z	     >= a.point.z	     &&			\
		b.point.x + b.size.x <= a.point.x + a.size.x &&			\
		b.point.y + b.size.y <= a.point.y + a.size.y &&			\
		b.point.z + b.size.z <= a.point.z + a.size.z;			\
	}									\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_collision(Q##Type##Box a, Q##Type##Box b)		\
	{									\
	return	a.point.x < b.point.x + b.size.x &&				\
		b.point.x < a.point.x + a.size.x &&				\
		a.point.y < b.point.y + b.size.y &&				\
		b.point.y < a.point.y + a.size.y &&				\
		a.point.z < b.point.z + b.size.z &&				\
		b.point.z < a.point.z + a.size.z;				\
	}									\
										\
										\
Q_BOX_EXPORT									\
Q##Type##Box q_##type##_box_intersection(Q##Type##Box a, Q##Type##Box b)	\
	{									\
	q##type x1, x2, y1, y2, z1, z2;						\
										\
	return	(x1 = q_##type##_maximum(a.point.x, b.point.x))	      <=	\
		(x2 = q_##type##_minimum					\
			(a.point.x + a.size.x, b.point.x + b.size.x)) &&	\
		(y1 = q_##type##_maximum(a.point.y, b.point.y))	      <=	\
		(y2 = q_##type##_minimum					\
			(a.point.y + a.size.y, b.point.y + b.size.y)) &&	\
		(z1 = q_##type##_maximum(a.point.z, b.point.z))	      <=	\
		(z2 = q_##type##_minimum					\
			(a.point.z + a.size.z, b.point.z + b.size.z))		\
										\
		? q_##type##_box(x1, y1, z1, x2 - x1, y2 - y1, z2 - z1)		\
		: q_##type##_box_zero;						\
	}									\
										\
										\
Q_BOX_EXPORT									\
Q##Type##Box q_##type##_box_union(Q##Type##Box a, Q##Type##Box b)		\
	{									\
	Q##Type##Box result;							\
										\
	result.point = q_3d_##type##_minimum(a.point, b.point);			\
										\
	result.size.x =								\
	q_##type##_maximum(a.point.x + a.size.x, b.point.x + b.size.x) -	\
	result.point.x;								\
										\
	result.size.y =								\
	q_##type##_maximum(a.point.y + a.size.y, b.point.y + b.size.y) -	\
	result.point.y;								\
										\
	result.size.z =								\
	q_##type##_maximum(a.point.z + a.size.z, b.point.z + b.size.z) -	\
	result.point.z;								\
										\
	return result;								\
	}									\
										\
										\
Q_BOX_EXPORT									\
Q##Type##Box q_##type##_box_from_vertices(Q3D##Type a, Q3D##Type b)		\
	{									\
	Q3D##Type minimum = q_3d_##type##_minimum(a, b);			\
	Q3D##Type maximum = q_3d_##type##_maximum(a, b);			\
										\
	return q_##type##_box							\
		(minimum.x,  minimum.y, minimum.z,				\
		 maximum.x - minimum.x,						\
		 maximum.y - minimum.y,						\
		 maximum.z - minimum.z);					\
	}									\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_is_zero(Q##Type##Box box)				\
	{									\
	return	q_3d_##type##_is_zero(box.point) &&				\
		q_3d_##type##_is_zero(box.size);				\
	}									\
										\
										\
Q_BOX_EXPORT									\
Q3D##Type q_##type##_box_center(Q##Type##Box box)				\
	{									\
	return q_3d_##type							\
		(box.point.x + box.size.x / _(2.0),				\
		 box.point.y + box.size.y / _(2.0),				\
		 box.point.z + box.size.z / _(2.0));				\
	}									\
										\
										\
Q_BOX_EXPORT									\
Q##Type##Sphere q_##type##_box_inner_sphere(Q##Type##Box box)			\
	{									\
	Q##Type##Sphere result;							\
										\
	result.point = q_##type##_box_center(box);				\
										\
	result.radius =								\
	q_##type##_minimum							\
		(q_##type##_minimum(box.size.x, box.size.y), box.size.z)	\
	/ _(2.0);								\
										\
	return result;								\
	}									\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_contains_point(Q##Type##Box box, Q3D##Type point)	\
	{									\
	return	point.x >= box.point.x		    &&				\
		point.y >= box.point.y		    &&				\
		point.z >= box.point.z		    &&				\
		point.x <  box.point.x + box.size.x &&				\
		point.y <  box.point.y + box.size.y &&				\
		point.z <  box.point.z + box.size.z;				\
	}									\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_contains_line_segment(					\
	Q##Type##Box	box,							\
	Q3D##Type##Line	line_segment						\
)										\
	{									\
	return	q_##type##_box_contains_point(box, line_segment.a) &&		\
		q_##type##_box_contains_point(box, line_segment.b);		\
	}									\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_contains_sphere(					\
	Q##Type##Box	box,							\
	Q##Type##Sphere	sphere							\
)										\
	{									\
	return	sphere.point.x - sphere.radius >= box.point.x		   &&	\
		sphere.point.y - sphere.radius >= box.point.y		   &&	\
		sphere.point.z - sphere.radius >= box.point.z		   &&	\
		sphere.point.x + sphere.radius <  box.point.x + box.size.x &&	\
		sphere.point.y + sphere.radius <  box.point.y + box.size.y &&	\
		sphere.point.z + sphere.radius <  box.point.z + box.size.z;	\
	}


Q_IMPLEMENTATION_BOX(Float,   float,   Q_FLOAT	)
Q_IMPLEMENTATION_BOX(Double,  double,  Q_DOUBLE	)
Q_IMPLEMENTATION_BOX(LDouble, ldouble, Q_LDOUBLE)


/* MARK: - Default real type definitions */

#if defined(Q_USE_REAL_FLOAT)

#	define q_box_are_equal			q_float_box_are_equal
#	define q_box_contains			q_float_box_contains
#	define q_box_collision			q_float_box_collision
#	define q_box_intersection		q_float_box_intersection
#	define q_box_union			q_float_box_union
#	define q_box_from_vertices		q_float_box_from_vertices
#	define q_box_is_zero			q_float_box_is_zero
#	define q_box_center			q_float_box_center
#	define q_box_inner_sphere		q_float_box_inner_sphere
#	define q_box_contains_point		q_float_box_contains_point
#	define q_box_contains_line_segment	q_float_box_contains_line_segment
#	define q_box_contains_sphere		q_float_box_contains_sphere

#elif defined(Q_USE_REAL_LDOUBLE)

#	define q_box_are_equal			q_ldouble_box_are_equal
#	define q_box_contains			q_ldouble_box_contains
#	define q_box_collision			q_ldouble_box_collision
#	define q_box_intersection		q_ldouble_box_intersection
#	define q_box_union			q_ldouble_box_union
#	define q_box_from_vertices		q_ldouble_box_from_vertices
#	define q_box_is_zero			q_ldouble_box_is_zero
#	define q_box_center			q_ldouble_box_center
#	define q_box_inner_sphere		q_ldouble_box_inner_sphere
#	define q_box_contains_point		q_ldouble_box_contains_point
#	define q_box_contains_line_segment	q_ldouble_box_contains_line_segment
#	define q_box_contains_sphere		q_ldouble_box_contains_sphere

#else

#	define q_box_are_equal			q_double_box_are_equal
#	define q_box_contains			q_double_box_contains
#	define q_box_collision			q_double_box_collision
#	define q_box_intersection		q_double_box_intersection
#	define q_box_union			q_double_box_union
#	define q_box_from_vertices		q_double_box_from_vertices
#	define q_box_is_zero			q_double_box_is_zero
#	define q_box_center			q_double_box_center
#	define q_box_inner_sphere		q_double_box_inner_sphere
#	define q_box_contains_point		q_double_box_contains_point
#	define q_box_contains_line_segment	q_double_box_contains_line_segment
#	define q_box_contains_sphere		q_double_box_contains_sphere

#endif

#endif /* __Q_functions_geometry_QBox_H__ */