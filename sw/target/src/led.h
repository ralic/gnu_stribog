/*LPC2138 led routines
This file has been written for the stribog project.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Copyright (C) 2006, 2007 D.Ineiev <ineiev@yahoo.co.uk>*/
void init_led(void);/*FIXME: I want these functions to be inlined,
		      but I don't want to include lpc2138.h everywhere*/
void led0_set(void);void led0_clr(void);
void led1_set(void);void led1_clr(void);
