/* Copyright (C) 1992 Free Software Foundation, Inc.
This file is part of the GNU C Library.

The GNU C Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public License as
published by the Free Software Foundation; either version 2 of the
License, or (at your option) any later version.

The GNU C Library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with the GNU C Library; see the file COPYING.LIB.  If
not, write to the Free Software Foundation, Inc., 675 Mass Ave,
Cambridge, MA 02139, USA.  */

#ifndef _IEEE854_H
#define _IEEE854_H

#include <endian.h>

union ieee854_double
  {
    long double d;
    
    /* This is the IEEE 854 double-extended-precision format.  */
    struct
      {
#if	__BYTE_ORDER == __BIG_ENDIAN
	unsigned int negative:1;
	unsigned int exponent:15;
	unsigned int empty:16;
	unsigned int mantissa0:32;
	unsigned int mantissa1:32;
#endif
#if	__BYTE_ORDER == __LITTLE_ENDIAN
	unsigned int mantissa1:32;
	unsigned int mantissa0:32;
	unsigned int exponent:15;
	unsigned int negative:1;
	unsigned int empty:16;
#endif
      } ieee;
    
    /* This is for NaNs in the IEEE 854 double-extended-precision format.  */
    struct
      {
#if	__BYTE_ORDER == __BIG_ENDIAN
	unsigned int negative:1;
	unsigned int exponent:15;
	unsigned int empty:16;
	unsigned int one:1;
	unsigned int quiet_nan:1;
	unsigned int mantissa0:30;
	unsigned int mantissa1:32;
#endif
#if	__BYTE_ORDER == __LITTLE_ENDIAN
	unsigned int mantissa1:32;
	unsigned int mantissa0:30;
	unsigned int quiet_nan:1;
	unsigned int one:1;
	unsigned int exponent:15;
	unsigned int negative:1;
	unsigned int empty:16;
#endif
      } ieee_nan;
  };

#define _IEEE854_DOUBLE_BIAS 0x3fff

#endif	/* _IEEE854_H */
