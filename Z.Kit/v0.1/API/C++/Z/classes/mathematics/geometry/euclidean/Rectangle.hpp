/* Z Kit C++ API - classes/mathematics/geometry/euclidean/Rectangle.hpp
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_classes_mathematics_geometry_euclidean_Rectangle_HPP__
#define __Z_classes_mathematics_geometry_euclidean_Rectangle_HPP__

#include <Z/classes/base/Value2D.hpp>
#include <Z/types/mathematics.h>


namespace Zeta {namespace Mixins {namespace Rectangle {

#	define Z_THIS ((Rectangle *)this)

	template <class Rectangle, class T, UInt T_number_set> struct Partial;


	// MARK: - Partial implementation for integer types


	template <class Rectangle, class T>
	struct Partial<Rectangle, T, Z_NUMBER_SET_Z> {

		Z_CT_MEMBER(CPP11) Rectangle bottom_right_quarter() const
			{
			return Rectangle
				(Z_THIS->point.x + Z_THIS->size.x / T(2), Z_THIS->point.y,
				 Z_THIS->size.x  - Z_THIS->size.x / T(2), Z_THIS->size.y / T(2));
			}


		Z_CT_MEMBER(CPP11) Rectangle right_half() const
			{
			return Rectangle
				(Z_THIS->point.x + Z_THIS->size.x / T(2), Z_THIS->point.y,
				 Z_THIS->size.x  - Z_THIS->size.x / T(2), Z_THIS->size.y);
			}


		Z_CT_MEMBER(CPP11) Rectangle top_half() const
			{
			return Rectangle
				(Z_THIS->point.x, Z_THIS->point.y + Z_THIS->size.y / T(2),
				 Z_THIS->size.x,  Z_THIS->size.y  - Z_THIS->size.y / T(2));
			}


		Z_CT_MEMBER(CPP11) Rectangle top_left_quarter() const
			{
			return Rectangle
				(Z_THIS->point.x,	Z_THIS->point.y + Z_THIS->size.y / T(2),
				 Z_THIS->size.x / T(2), Z_THIS->size.y  - Z_THIS->size.y / T(2));
			}


		Z_CT_MEMBER(CPP11) Rectangle top_right_quarter() const
			{
			return Rectangle
				(Z_THIS->point + Z_THIS->size / T(2),
				 Z_THIS->size  - Z_THIS->size / T(2));
			}
	};


	// MARK: - Partial implementation for real types


	template <class Rectangle, class T>
	struct Partial<Rectangle, T, Z_NUMBER_SET_R> {

		Z_CT_MEMBER(CPP11) Zeta::Value2D<T> absolute_point_to_unit(const Zeta::Value2D<T> &point) const
			{return (point - Z_THIS->point) / Z_THIS->size;}


		Z_CT_MEMBER(CPP11) Rectangle bottom_right_quarter() const
			{
			return Rectangle
				(Z_THIS->point.x + Z_THIS->size.x / T(2), Z_THIS->point.y,
				 Z_THIS->size / T(2));
			}


		/*Z_CT_MEMBER(CPP11) Boolean contains(const Circle<T> &circle) const
			{
			return	circle.point - circle.radius >= Z_THIS->point &&
				circle.point + circle.radius <= Z_THIS->point + Z_THIS->size;
			}*/


		/*Z_CT_MEMBER(CPP11) Circle<T> inner_circle() const
			{return Circle<T>(Z_THIS->center(), Z_THIS->size.inner_minimum() / T(2));}*/


		Z_CT_MEMBER(CPP11) Rectangle right_half() const
			{
			return Rectangle
				(Z_THIS->point.x + Z_THIS->size.x / T(2), Z_THIS->point.y,
				 Z_THIS->size.x / T(2), Z_THIS->size.y);
			}


		Z_CT_MEMBER(CPP11) Rectangle top_half() const
			{
			return Rectangle
				(Z_THIS->point.x, Z_THIS->point.y + Z_THIS->size.y / T(2),
				 Z_THIS->size.x,  Z_THIS->size.y / T(2));
			}


		Z_CT_MEMBER(CPP11) Rectangle top_left_quarter() const
			{
			return Rectangle
				(Z_THIS->point.x, Z_THIS->point.y + Z_THIS->size.y / T(2),
				 Z_THIS->size / T(2));
			}


		Z_CT_MEMBER(CPP11) Rectangle top_right_quarter() const
			{return Rectangle(Z_THIS->point + Z_THIS->size / T(2), Z_THIS->size / T(2));}


		Z_CT_MEMBER(CPP11) Zeta::Value2D<T> unit_point_to_absolute(const Zeta::Value2D<T> &point) const
			{return point * Z_THIS->size + Z_THIS->point;}
	};


#	undef Z_THIS

}}}


namespace Zeta {template <class T> struct Rectangle: Mixins::Rectangle::Partial<Rectangle<T>, T, Type<T>::number_set> {

	typedef typename ZTypeFixedSigned(ZRectangle, T) Base;

	Value2D<T> point, size;


	Z_INLINE_MEMBER Rectangle() {}

	Z_CT_MEMBER(CPP11) Rectangle(const Value2D<T> &point, const Value2D<T> &size) : point(point),  size(size)	    {}
	Z_CT_MEMBER(CPP11) Rectangle(const Value2D<T> &point, T size_x, T size_y)     : point(point),  size(size_x, size_y) {}
	Z_CT_MEMBER(CPP11) Rectangle(const Value2D<T> &point, T size)		      : point(point),  size(size)	    {}
	Z_CT_MEMBER(CPP11) Rectangle(T x, T y, const Value2D<T> &size)		      : point(x, y),   size(size)	    {}
	Z_CT_MEMBER(CPP11) Rectangle(T x, T y, T size_x, T size_y)		      : point(x, y),   size(size_x, size_y) {}
	Z_CT_MEMBER(CPP11) Rectangle(T x, T y, T size)				      : point(x, y),   size(size)	    {}
	Z_CT_MEMBER(CPP11) Rectangle(T point, const Value2D<T> &size)		      : point(point),  size(size)	    {}
	Z_CT_MEMBER(CPP11) Rectangle(const Value2D<T> &size)			      : point(T(0)),   size(size)	    {}
	Z_CT_MEMBER(CPP11) Rectangle(T size_x, T size_y)			      : point(T(0)),   size(size_x, size_y) {}
	Z_CT_MEMBER(CPP11) Rectangle(T size)					      : point(T(0)),   size(size)	    {}

	Z_INLINE_MEMBER Rectangle(const Base &rectangle) {(*(Base *)this) = rectangle;}


	static Z_CT_MEMBER(CPP14) Rectangle from_vertices(const Value2D<T> &a, const Value2D<T> &b)
		{
		Value2D<T> minimum = Value2D<T>::minimum(a, b);

		return Rectangle(minimum, Value2D<T>::maximum(a, b) - minimum);
		}


	Z_CT_MEMBER(CPP11) operator Boolean() const {return this->point || this->size;}
	Z_INLINE_MEMBER    operator Base&  () const {return *((Base *)this);}


	Z_CT_MEMBER(CPP11) Boolean operator ==(const Rectangle &rectangle) const
		{return	point == rectangle.point && size == rectangle.size;}


	Z_CT_MEMBER(CPP11) Boolean operator !=(const Rectangle &rectangle) const
		{return	point != rectangle.point || size != rectangle.size;}


	// Intersection
	Z_CT_MEMBER(CPP14) Rectangle operator &(const Rectangle &rectangle) const
		{
		T x1, x2, y1, y2;

		return	(x1 = maximum<T>(point.x,	   rectangle.point.x)) <=
			(x2 = minimum<T>(point.x + size.x, rectangle.point.x + rectangle.size.x)) &&
			(y1 = maximum<T>(point.y,	   rectangle.point.y)) <=
			(y2 = minimum<T>(point.y + size.y, rectangle.point.y + rectangle.size.y))

			? Rectangle(x1, y1, x2 - x1, y2 - y1)
			: Rectangle(T(0));
		}


	// Union
	Z_CT_MEMBER(CPP14) Rectangle operator |(const Rectangle &rectangle) const
		{
		Rectangle result;

		result.point = point.minimum(rectangle.point);
		result.size  = (point + size).maximum(rectangle.point + rectangle.size) - result.point;

		return result;
		}


	Z_INLINE_MEMBER Rectangle &operator &=(const Rectangle &rectangle) {return *this = *this & rectangle;}
	Z_INLINE_MEMBER Rectangle &operator |=(const Rectangle &rectangle) {return *this = *this | rectangle;}

	Z_CT_MEMBER(CPP11) Rectangle operator +(const Value2D<T> &value) const {return Rectangle(point + value, size);}
	Z_CT_MEMBER(CPP11) Rectangle operator -(const Value2D<T> &value) const {return Rectangle(point - value, size);}
	Z_CT_MEMBER(CPP11) Rectangle operator *(const Value2D<T> &value) const {return Rectangle(point * value, size);}
	Z_CT_MEMBER(CPP11) Rectangle operator /(const Value2D<T> &value) const {return Rectangle(point / value, size);}

	Z_INLINE_MEMBER Rectangle &operator +=(const Value2D<T> &value) {return *this = *this + value;}
	Z_INLINE_MEMBER Rectangle &operator -=(const Value2D<T> &value) {return *this = *this - value;}
	Z_INLINE_MEMBER Rectangle &operator *=(const Value2D<T> &value) {return *this = *this * value;}
	Z_INLINE_MEMBER Rectangle &operator /=(const Value2D<T> &value) {return *this = *this / value;}

	Z_CT_MEMBER(CPP11) Rectangle operator +(T scalar) const {return Value2D<T>(point + scalar, size);}
	Z_CT_MEMBER(CPP11) Rectangle operator -(T scalar) const {return Value2D<T>(point - scalar, size);}
	Z_CT_MEMBER(CPP11) Rectangle operator *(T scalar) const {return Value2D<T>(point * scalar, size);}
	Z_CT_MEMBER(CPP11) Rectangle operator /(T scalar) const {return Value2D<T>(point / scalar, size);}

	Z_INLINE_MEMBER Rectangle &operator +=(T scalar) {return *this = *this + scalar;}
	Z_INLINE_MEMBER Rectangle &operator -=(T scalar) {return *this = *this - scalar;}
	Z_INLINE_MEMBER Rectangle &operator *=(T scalar) {return *this = *this * scalar;}
	Z_INLINE_MEMBER Rectangle &operator /=(T scalar) {return *this = *this / scalar;}

	Z_INLINE_MEMBER T  operator[](int index) const {return ((T *)this)[index];}
	Z_INLINE_MEMBER T &operator[](int index)       {return ((T *)this)[index];}


#	ifdef Z_USE_CG_GEOMETRY

		Z_CT_MEMBER(CPP11) Rectangle(const CGRect &rectangle)
		: point(rectangle.origin), size(rectangle.size) {}


		Z_CT_MEMBER(CPP14) operator CGRect() const
			{
			CGRect result = {
				{CGFloat(point.x), CGFloat(point.y)},
				{CGFloat(size.x),  CGFloat(size.y)}
			};

			return result;
			}

#	endif


#	if	defined(Z_USE_NS_GEOMETRY)			     && \
		Z_LANGUAGE == Z_LANGUAGE_OBJECTIVE_CPP		     && \
		(!defined(Z_USE_CG_GEOMETRY)			     || \
		 !defined(NSGEOMETRY_TYPES_SAME_AS_CGGEOMETRY_TYPES) || \
		  !NSGEOMETRY_TYPES_SAME_AS_CGGEOMETRY_TYPES)

		Z_CT_MEMBER(CPP11) Rectangle(const NSRect &rectangle)
		: point(rectangle.origin), size(rectangle.size) {}


		Z_CT_MEMBER(CPP14) operator NSRect() const
			{
			NSRect result = {
				{CGFloat(point.x), CGFloat(point.y)},
				{CGFloat(size.x),  CGFloat(size.y)}
			};

			return result;
			}

#	endif


#	ifdef Z_USE_COCOS2D_X

		Z_INLINE_MEMBER Rectangle(const cocos2d::Rect &rectangle)
		: point(rectangle.origin), size(rectangle.size) {}


		Z_INLINE_MEMBER operator cocos2d::Rect() const
			{
			return cocos2d::Rect
				(float(point.x), float(point.y),
				 float(size.x),  float(size.y));
			}

#	endif


	Z_CT_MEMBER(CPP11) Rectangle align_in_bottom_center(const Value2D<T> &size) const
		{return Rectangle(this->point.x + (this->size.x - size.x) / T(2), this->point.y, size);}


	Z_CT_MEMBER(CPP11) Rectangle align_in_bottom_left(const Value2D<T> &size) const
		{return Rectangle(this->point, size);}


	Z_CT_MEMBER(CPP11) Rectangle align_in_bottom_right(const Value2D<T> &size) const
		{return Rectangle(this->point.x + this->size.x - size.x, this->point.y, size);}


	Z_CT_MEMBER(CPP11) Rectangle align_in_center(const Value2D<T> &size) const
		{return Rectangle(this->point + (this->size - size) / T(2), size);}


	Z_CT_MEMBER(CPP11) Rectangle align_in_center_left(const Value2D<T> &size) const
		{return Rectangle(this->point.x, this->point.y + (this->size.y - size.y) / T(2), size);}


	Z_CT_MEMBER(CPP11) Rectangle align_in_center_right(const Value2D<T> &size) const
		{
		return Rectangle
			(this->point.x +  this->size.x - size.x,
			 this->point.y + (this->size.y - size.y) / T(2),
			 size);
		}


	Z_CT_MEMBER(CPP11) Rectangle align_in_top_center(const Value2D<T> &size) const
		{
		return Rectangle
			(this->point.x + (this->size.x - size.x) / T(2),
			 this->point.y +  this->size.y - size.y,
			 size);
		}


	Z_CT_MEMBER(CPP11) Rectangle align_in_top_left(const Value2D<T> &size) const
		{return Rectangle(this->point.x, this->point.y + this->size.y - size.y, size);}


	Z_CT_MEMBER(CPP11) Rectangle align_in_top_right(const Value2D<T> &size) const
		{return Rectangle(this->point + this->size - size, size);}


	Z_CT_MEMBER(CPP11) Value2D<T> bottom_center() const
		{return Value2D<T>(point.x + size.x / T(2), point.y);}


	Z_CT_MEMBER(CPP11) Rectangle bottom_half() const
		{return Rectangle(point, size.x, size.y / T(2));}


	Z_CT_MEMBER(CPP11) Value2D<T> bottom_left() const
		{return point;}


	Z_CT_MEMBER(CPP11) Rectangle bottom_left_quarter() const
		{return Rectangle(point, size / T(2));}


	Z_CT_MEMBER(CPP11) Value2D<T> bottom_right() const
		{return Value2D<T>(point.x + size.x, point.y);}


	Z_CT_MEMBER(CPP11) Value2D<T> center() const
		{return point + size / T(2);}


	Z_CT_MEMBER(CPP11) Value2D<T> center_left() const
		{return Value2D<T>(point.x, point.y + size.y / T(2));}


	Z_CT_MEMBER(CPP11) Value2D<T> center_right() const
		{return Value2D<T>(point.x + size.x, point.y + size.y / T(2));}


	Z_CT_MEMBER(CPP11) Boolean contains(const Rectangle &rectangle) const
		{
		return	rectangle.point		     	     >= point		 &&
			rectangle.point.x + rectangle.size.x <= point.x + size.x &&
			rectangle.point.y + rectangle.size.y <= point.y + size.y;
		}


	/*Z_CT_MEMBER(CPP11) Boolean contains(const AABR<T> &aabr) const
		{
		return	aabr.a.x >= point.x	     && aabr.a.y >= point.y &&
			aabr.b.x <= point.x + size.x && aabr.b.y <= point.y + size.y;
		}*/


	/*Z_CT_MEMBER(CPP11) Boolean contains(const Circle<T> &circle) const
		{
		return	circle.point.x - circle.radius >= point.x	   &&
			circle.point.y - circle.radius >= point.y	   &&
			circle.point.x + circle.radius <= point.x + size.x &&
			circle.point.y + circle.radius <= point.y + size.y;
		}*/


	Z_CT_MEMBER(CPP11) Boolean contains(const Value2D<T> &point) const
		{
		return	point	>= this->point			&&
			point.x <= this->point.x + this->size.x &&
			point.y <= this->point.y + this->size.y;
		}


	/*Z_CT_MEMBER(CPP11) Boolean contains(const Line2D<T> &line_segment) const
		{return contains(line_segment.a) && contains(line_segment.b);}*/


	Z_INLINE_MEMBER Rectangle &correct()
		{
		if (size.x < T(0)) point.x -= (size.x = -size.x);
		if (size.y < T(0)) point.y -= (size.y = -size.y);
		return *this;
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_bottom_center(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle
			(this->point.x + (this->size.x - fitting_size.x) / T(2), this->point.y,
			 fitting_size);
		}


	Z_CT_MEMBER(CPP11) Rectangle fit_in_bottom_left(const Value2D<T> &size) const
		{return Value2D<T>(this->point, size.fit(this->size));}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_bottom_right(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle
			(this->point.x + this->size.x - fitting_size.x, this->point.y,
			 fitting_size);
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_center(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle(this->point + (this->size - fitting_size) / T(2), fitting_size);
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_center_left(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle
			(this->point.x, this->point.y + (this->size.y - fitting_size.y) / T(2),
			 fitting_size);
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_center_right(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle
			(this->point.x +  this->size.x - fitting_size.x,
			 this->point.y + (this->size.y - fitting_size.y) / T(2),
			 fitting_size);
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_top_center(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle
			(this->point.x + (this->size.x - fitting_size.x) / T(2),
			 this->point.y +  this->size.y - fitting_size.y,
			 fitting_size);
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_top_left(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle
			(this->point.x, this->point.y + this->size.y - fitting_size.y,
			 fitting_size);
		}


	Z_CT_MEMBER(CPP14) Rectangle fit_in_top_right(const Value2D<T> &size) const
		{
		Value2D<T> fitting_size = size.fit(this->size);

		return Rectangle(this->point + this->size - fitting_size, fitting_size);
		}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_bottom_center(const Value2D<T> &delta) const
		{return Rectangle(point.x - delta.x / T(2), point.y, size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_bottom_left(const Value2D<T> &delta) const
		{return Rectangle(point, size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_bottom_right(const Value2D<T> &delta) const
		{return Rectangle(point.x - delta.x, point.y, size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_center(const Value2D<T> &delta) const
		{return Rectangle(point - delta / T(2), size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_center_left(const Value2D<T> &delta) const
		{return Rectangle(point.x, point.y - delta.y / T(2), size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_center_right(const Value2D<T> &delta) const
		{return Rectangle(point.x - delta.x, point.y - delta.y / T(2), size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_top_center(const Value2D<T> &delta) const
		{return Rectangle(point.x - delta.x / T(2), point.y - delta.y, size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_top_left(const Value2D<T> &delta) const
		{return Rectangle(point.x, point.y - delta.y, size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_from_top_right(const Value2D<T> &delta) const
		{return Rectangle(point - delta, size + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_in_x_from_center(T delta) const
		{return Rectangle(point.x - delta / T(2), point.y, size.x + delta, size.y);}


	Z_CT_MEMBER(CPP11) Rectangle grow_in_x_from_left(T delta) const
		{return Rectangle(point, size.x + delta, size.y);}


	Z_CT_MEMBER(CPP11) Rectangle grow_in_x_from_right(T delta) const
		{return Rectangle(point.x - delta, point.y, size.x + delta, size.y);}


	Z_CT_MEMBER(CPP11) Rectangle grow_in_y_from_bottom(T delta) const
		{return Rectangle(point, size.x, size.y + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_in_y_from_center(T delta) const
		{return Rectangle(point.x, point.y - delta / T(2), size.x, size.y + delta);}


	Z_CT_MEMBER(CPP11) Rectangle grow_in_y_from_top(T delta) const
		{return Rectangle(point.x, point.y - delta, size.x, size.y + delta);}


	Z_CT_MEMBER(CPP11) Boolean intersects(const Rectangle &rectangle) const
		{
		return	point.x		 < rectangle.point.x + rectangle.size.x &&
			point.x + size.x > rectangle.point.x &&
			point.y		 < rectangle.point.y + rectangle.size.y &&
			point.y + size.y > rectangle.point.y;
		}


	Z_CT_MEMBER(CPP11) Boolean is_zero() const
		{return point.is_zero() && size.is_zero();}


	Z_CT_MEMBER(CPP11) Rectangle left_half() const
		{return Rectangle(point, size.x / T(2), size.y);}


	Z_CT_MEMBER(CPP11) T maximum_x() const {return point.x + size.x;}
	Z_CT_MEMBER(CPP11) T maximum_y() const {return point.y + size.y;}
	Z_CT_MEMBER(CPP11) T middle_x () const {return point.x + size.x / T(2);}
	Z_CT_MEMBER(CPP11) T middle_y () const {return point.y + size.y / T(2);}
	Z_CT_MEMBER(CPP11) T minimum_x() const {return point.x;}
	Z_CT_MEMBER(CPP11) T minimum_y() const {return point.y;}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_bottom_center(const Value2D<T> &delta) const
		{return Rectangle(point.x + delta.x / T(2), point.y, size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_bottom_left(const Value2D<T> &delta) const
		{return Rectangle(point, size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_bottom_right(const Value2D<T> &delta) const
		{return Rectangle(point.x + delta.x, point.y, size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_center(const Value2D<T> &delta) const
		{return Rectangle(point + delta / T(2), size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_center_left(const Value2D<T> &delta) const
		{return Rectangle(point.x, point.y + delta.y / T(2), size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_center_right(const Value2D<T> &delta) const
		{return Rectangle(point.x + delta.x, point.y + delta.y / T(2), size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_top_center(const Value2D<T> &delta) const
		{return Rectangle(point.x + delta.x / T(2), point.y + delta.y, size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_top_left(const Value2D<T> &delta) const
		{return Rectangle(point.x, point.y + delta.y, size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_from_top_right(const Value2D<T> &delta) const
		{return Rectangle(point + delta, size - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_in_x_from_center(T delta) const
		{return Rectangle(point.x + delta / T(2), point.y, size.x - delta, size.y);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_in_x_from_left(T delta) const
		{return Rectangle(point, size.x - delta, size.y);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_in_x_from_right(T delta) const
		{return Rectangle(point.x + delta, point.y, size.x - delta, size.y);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_in_y_from_bottom(T delta) const
		{return Rectangle(point, size.x, size.y - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_in_y_from_center(T delta) const
		{return Rectangle(point.x, point.y + delta / T(2), size.x, size.y - delta);}


	Z_CT_MEMBER(CPP11) Rectangle shrink_in_y_from_top(T delta) const
		{return Rectangle(point.x, point.y + delta, size.x, size.y - delta);}


	Z_INLINE_MEMBER void swap(Rectangle &rectangle)
		{Zeta::swap<Base>((Base *)this, (Base *)&rectangle);}


	Z_CT_MEMBER(CPP11) Value2D<T> top_center() const
		{return Value2D<T>(point.x + size.x / T(2), point.y + size.y);}


	Z_CT_MEMBER(CPP11) Value2D<T> top_left() const
		{return Value2D<T>(point.x, point.y + size.y);}


	Z_CT_MEMBER(CPP11) Value2D<T> top_right() const
		{return point + size;}
};}


#endif // __Z_classes_mathematics_geometry_euclidean_Rectangle_HPP__
