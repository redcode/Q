/* Z Kit C API - inspection/language.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_language_H__
#define __Z_inspection_language_H__

#include <Z/keys/language.h>
#include <Z/inspection/C.h>
#include <Z/inspection/compiler.h>

/* MARK: - Objective-C++ */

#if defined(__cplusplus) && (defined(__OBJC__) || defined(__OBJC2__))

#	include <Z/inspection/C++.h>
#	include <Z/inspection/Objective-C.h>

#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_CPP

#	define Z_LANGUAGE_HAS(WHAT)				   \
		(!(defined Z_COMPILER_C_LACKS_##WHAT)		&& \
		 !(defined Z_COMPILER_CPP_LACKS_##WHAT)		&& \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_##WHAT) && \
		 ((defined Z_C_HAS_##WHAT)			|| \
		  (defined Z_CPP_HAS_##WHAT)			|| \
		  (defined Z_OBJECTIVE_C_HAS_##WHAT)		|| \
		  (defined Z_COMPILER_C_HAS_##WHAT)		|| \
		  (defined Z_COMPILER_CPP_HAS_##WHAT)		|| \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_##WHAT)))

#	define Z_LANGUAGE_HAS_TYPE(WHICH)				 \
		(!(defined Z_COMPILER_C_LACKS_TYPE_##WHICH)	      && \
		 !(defined Z_COMPILER_CPP_LACKS_TYPE_##WHICH)	      && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_TYPE_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_##WHICH)		      || \
		  (defined Z_CPP_HAS_TYPE_##WHICH)		      || \
		  (defined Z_OBJECTIVE_C_HAS_TYPE_##WHICH)	      || \
		  (defined Z_COMPILER_C_HAS_TYPE_##WHICH)	      || \
		  (defined Z_COMPILER_CPP_HAS_TYPE_##WHICH)	      || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_TYPE_##WHICH)))

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(WHICH)				   \
		(!(defined Z_COMPILER_C_LACKS_TYPE_QUALIFIER_##WHICH)		&& \
		 !(defined Z_COMPILER_CPP_LACKS_TYPE_QUALIFIER_##WHICH)		&& \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_TYPE_QUALIFIER_##WHICH)	&& \
		 ((defined Z_C_HAS_TYPE_QUALIFIER_##WHICH)			|| \
		  (defined Z_CPP_HAS_TYPE_QUALIFIER_##WHICH)			|| \
		  (defined Z_OBJECTIVE_C_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_COMPILER_C_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_COMPILER_CPP_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_TYPE_QUALIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(WHICH)				  \
		(!(defined Z_COMPILER_C_LACKS_STORAGE_CLASS_##WHICH)	       && \
		 !(defined Z_COMPILER_CPP_LACKS_STORAGE_CLASS_##WHICH)	       && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_STORAGE_CLASS_##WHICH) && \
		 ((defined Z_C_HAS_STORAGE_CLASS_##WHICH)		       || \
		  (defined Z_CPP_HAS_STORAGE_CLASS_##WHICH)		       || \
		  (defined Z_OBJECTIVE_C_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_COMPILER_C_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_COMPILER_CPP_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_STORAGE_CLASS_##WHICH)))

#	define Z_LANGUAGE_HAS_SPECIFIER(WHICH)				      \
		(!(defined Z_COMPILER_C_LACKS_SPECIFIER_##WHICH)	   && \
		 !(defined Z_COMPILER_CPP_LACKS_SPECIFIER_##WHICH)	   && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_SPECIFIER_##WHICH) && \
		 ((defined Z_C_HAS_SPECIFIER_##WHICH)			   || \
		  (defined Z_CPP_HAS_SPECIFIER_##WHICH)			   || \
		  (defined Z_OBJECTIVE_C_HAS_SPECIFIER_##WHICH)		   || \
		  (defined Z_COMPILER_C_HAS_SPECIFIER_##WHICH)		   || \
		  (defined Z_COMPILER_CPP_HAS_SPECIFIER_##WHICH)	   || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_SPECIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_OPERATOR(WHICH)				     \
		(!(defined Z_COMPILER_C_LACKS_OPERATOR_##WHICH)		  && \
		 !(defined Z_COMPILER_CPP_LACKS_OPERATOR_##WHICH)	  && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_OPERATOR_##WHICH) && \
		 ((defined Z_C_HAS_OPERATOR_##WHICH)			  || \
		  (defined Z_CPP_HAS_OPERATOR_##WHICH)			  || \
		  (defined Z_OBJECTIVE_C_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_COMPILER_C_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_COMPILER_CPP_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_OPERATOR_##WHICH)))

/* MARK: - Objective-C */

#elif defined(__OBJC__) || defined(__OBJC2__)

#	include <Z/inspection/Objective-C.h>

#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_C

#	define Z_LANGUAGE_HAS(WHAT)				   \
		(!(defined Z_COMPILER_C_LACKS_##WHAT)		&& \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_##WHAT) && \
		 ((defined Z_C_HAS_##WHAT)			|| \
		  (defined Z_OBJECTIVE_C_HAS_##WHAT)		|| \
		  (defined Z_COMPILER_C_HAS_##WHAT)		|| \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_##WHAT)))

#	define Z_LANGUAGE_HAS_TYPE(WHICH)				 \
		(!(defined Z_COMPILER_C_LACKS_TYPE_##WHICH)	      && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_TYPE_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_##WHICH)		      || \
		  (defined Z_OBJECTIVE_C_HAS_TYPE_##WHICH)	      || \
		  (defined Z_COMPILER_C_HAS_TYPE_##WHICH)	      || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_TYPE_##WHICH)))

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(WHICH)				   \
		(!(defined Z_COMPILER_C_LACKS_TYPE_QUALIFIER_##WHICH)		&& \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_TYPE_QUALIFIER_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_QUALIFIER_##WHICH)			|| \
		  (defined Z_OBJECTIVE_C_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_COMPILER_C_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_TYPE_QUALIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(WHICH)				  \
		(!(defined Z_COMPILER_C_LACKS_STORAGE_CLASS_##WHICH)	       && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_STORAGE_CLASS_##WHICH) && \
		 ((defined Z_C_HAS_STORAGE_CLASS_##WHICH)		       || \
		  (defined Z_OBJECTIVE_C_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_COMPILER_C_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_STORAGE_CLASS_##WHICH)))

#	define Z_LANGUAGE_HAS_SPECIFIER(WHICH)				      \
		(!(defined Z_COMPILER_C_LACKS_SPECIFIER_##WHICH)	   && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_SPECIFIER_##WHICH) && \
		 ((defined Z_C_HAS_SPECIFIER_##WHICH)			   || \
		  (defined Z_OBJECTIVE_C_HAS_SPECIFIER_##WHICH)		   || \
		  (defined Z_COMPILER_C_HAS_SPECIFIER_##WHICH)		   || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_SPECIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_OPERATOR(WHICH)				     \
		(!(defined Z_COMPILER_C_LACKS_OPERATOR_##WHICH)		  && \
		 !(defined Z_COMPILER_OBJECTIVE_C_LACKS_OPERATOR_##WHICH) && \
		 ((defined Z_C_HAS_OPERATOR_##WHICH)			  || \
		  (defined Z_OBJECTIVE_C_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_COMPILER_C_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_COMPILER_OBJECTIVE_C_HAS_OPERATOR_##WHICH)))

/* MARK: - C++ */

#elif defined(__cplusplus)

#	include <Z/inspection/C++.h>

#	define Z_LANGUAGE Z_LANGUAGE_CPP

#	define Z_LANGUAGE_HAS(WHAT)			   \
		(!(defined Z_COMPILER_C_LACKS_##WHAT)	&& \
		 !(defined Z_COMPILER_CPP_LACKS_##WHAT) && \
		 ((defined Z_C_HAS_##WHAT)		|| \
		  (defined Z_CPP_HAS_##WHAT)		|| \
		  (defined Z_COMPILER_C_HAS_##WHAT)	|| \
		  (defined Z_COMPILER_CPP_HAS_##WHAT)))

#	define Z_LANGUAGE_HAS_TYPE(WHICH)			 \
		(!(defined Z_COMPILER_C_LACKS_TYPE_##WHICH)   && \
		 !(defined Z_COMPILER_CPP_LACKS_TYPE_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_##WHICH)	      || \
		  (defined Z_CPP_HAS_TYPE_##WHICH)	      || \
		  (defined Z_COMPILER_C_HAS_TYPE_##WHICH)     || \
		  (defined Z_COMPILER_CPP_HAS_TYPE_##WHICH)))

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(WHICH)			   \
		(!(defined Z_COMPILER_C_LACKS_TYPE_QUALIFIER_##WHICH)	&& \
		 !(defined Z_COMPILER_CPP_LACKS_TYPE_QUALIFIER_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_CPP_HAS_TYPE_QUALIFIER_##WHICH)		|| \
		  (defined Z_COMPILER_C_HAS_TYPE_QUALIFIER_##WHICH)	|| \
		  (defined Z_COMPILER_CPP_HAS_TYPE_QUALIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(WHICH)			  \
		(!(defined Z_COMPILER_C_LACKS_STORAGE_CLASS_##WHICH)   && \
		 !(defined Z_COMPILER_CPP_LACKS_STORAGE_CLASS_##WHICH) && \
		 ((defined Z_C_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_CPP_HAS_STORAGE_CLASS_##WHICH)	       || \
		  (defined Z_COMPILER_C_HAS_STORAGE_CLASS_##WHICH)     || \
		  (defined Z_COMPILER_CPP_HAS_STORAGE_CLASS_##WHICH)))

#	define Z_LANGUAGE_HAS_SPECIFIER(WHICH)			      \
		(!(defined Z_COMPILER_C_LACKS_SPECIFIER_##WHICH)   && \
		 !(defined Z_COMPILER_CPP_LACKS_SPECIFIER_##WHICH) && \
		 ((defined Z_C_HAS_SPECIFIER_##WHICH)		   || \
		  (defined Z_CPP_HAS_SPECIFIER_##WHICH)		   || \
		  (defined Z_COMPILER_C_HAS_SPECIFIER_##WHICH)	   || \
		  (defined Z_COMPILER_CPP_HAS_SPECIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_OPERATOR(WHICH)			     \
		(!(defined Z_COMPILER_C_LACKS_OPERATOR_##WHICH)	  && \
		 !(defined Z_COMPILER_CPP_LACKS_OPERATOR_##WHICH) && \
		 ((defined Z_C_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_CPP_HAS_OPERATOR_##WHICH)		  || \
		  (defined Z_COMPILER_C_HAS_OPERATOR_##WHICH)	  || \
		  (defined Z_COMPILER_CPP_HAS_OPERATOR_##WHICH)))

/* MARK: - C */

#else

#	define Z_LANGUAGE Z_LANGUAGE_C

#	define Z_LANGUAGE_HAS(WHAT)			 \
		(!(defined Z_COMPILER_C_LACKS_##WHAT) && \
		 ((defined Z_C_HAS_##WHAT)	      || \
		  (defined Z_COMPILER_C_HAS_##WHAT)))

#	define Z_LANGUAGE_HAS_TYPE(WHICH)		       \
		(!(defined Z_COMPILER_C_LACKS_TYPE_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_##WHICH)	    || \
		  (defined Z_COMPILER_C_HAS_TYPE_##WHICH)))

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(WHICH)			 \
		(!(defined Z_COMPILER_C_LACKS_TYPE_QUALIFIER_##WHICH) && \
		 ((defined Z_C_HAS_TYPE_QUALIFIER_##WHICH)	      || \
		  (defined Z_COMPILER_C_HAS_TYPE_QUALIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(WHICH)			\
		(!(defined Z_COMPILER_C_LACKS_STORAGE_CLASS_##WHICH) && \
		 ((defined Z_C_HAS_STORAGE_CLASS_##WHICH)	     || \
		  (defined Z_COMPILER_C_HAS_STORAGE_CLASS_##WHICH)))

#	define Z_LANGUAGE_HAS_SPECIFIER(WHICH)			    \
		(!(defined Z_COMPILER_C_LACKS_SPECIFIER_##WHICH) && \
		 ((defined Z_C_HAS_SPECIFIER_##WHICH)		 || \
		  (defined Z_COMPILER_C_HAS_SPECIFIER_##WHICH)))

#	define Z_LANGUAGE_HAS_OPERATOR(WHICH)			   \
		(!(defined Z_COMPILER_C_LACKS_OPERATOR_##WHICH) && \
		 ((defined Z_C_HAS_OPERATOR_##WHICH)		|| \
		  (defined Z_COMPILER_C_HAS_OPERATOR_##WHICH)))

#endif

#endif /* __Z_inspection_language_H__ */
