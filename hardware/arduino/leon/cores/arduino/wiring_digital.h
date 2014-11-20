/*
  wiring_digital.h - header file for Arduino digital I/O functions
  Copyright (c) 2013 NavSpark.

  This library is free software; you can redistribute it under the terms
  of the GNU Lesser General Public License as published by the Free Software
  Foundation; either version 2.1 of the License, or (at your option) any
  later version.

  This library is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this library; if not, write to the Free Software Foundation,
  Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

	Created 25 December 2013 by Ming-Jen Chen

	$Id$
*/

#ifndef _WIRING_DIGITAL_
#define _WIRING_DIGITAL_

#include "stdint.h"

typedef	struct _gpio_conf
{
  uint8_t	pin;
  uint8_t	io_capability; // bit-0 for INPUT capability, bit-1 for OUTPUT capability
  uint8_t io_mode; // initial value: 0xff
  uint8_t	intr_mode; // initial value: 0xff
	void (*isrFunc)(); // initial value: NULL
} sGPIOConf, *pGPIOConf;

#ifdef __cplusplus
extern "C" {
#endif

// declarations for public functions
extern void pinMode( uint8_t pin, uint8_t mode );
extern void digitalWrite( uint8_t pin, uint8_t val );
extern int digitalRead( uint8_t pin );

#ifdef __cplusplus
}
#endif

#endif // _WIRING_DIGITAL_
