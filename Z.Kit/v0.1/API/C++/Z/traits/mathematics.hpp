/* Z Kit C++ API - traits/mathematics.hpp
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_traits_mathematics_HPP__
#define __Z_traits_mathematics_HPP__

namespace ZKit {
	template <int N> struct Factorial    {enum {value = N * Factorial<N - 1>::value};};
	template <>	 struct Factorial<0> {enum {value = 1};};
}

#endif // __Z_traits_mathematics_HPP__