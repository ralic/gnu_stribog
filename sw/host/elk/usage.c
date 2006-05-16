/*elk the LPC21x programmer: copyleft and help output
This program is a part of the stribog host software section

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

Copyright (C) 2006 D.Ineiev <ineiev@yahoo.co.uk>*/
#include"usage.h"
#include<stdio.h>
void usage(void)
{printf("elk 0?7 ("__DATE__") the LPC2138 programmer (hardly functional)\n\n"
"This program is a part of the stribog host software section\n\n"
"This program is free software; you can redistribute it and/or modify\n"
"it under the terms of the GNU General Public License as published by\n"
"the Free Software Foundation; either version 2 of the License, or\n"
"(at your option) any later version.\n\n"
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n\n"
"You should have received a copy of the GNU General Public License\n"
"along with this program; if not, write to the Free Software\n"
"Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA\n\n"
"Copyright (C) 2006 D.Ineiev <ineiev@yahoo.co.uk>\n\n"
"usage: elk [port [cryst. freq in kHz]]\n"
" default port on GNU/Linux is /dev/ttyS0; on Win32 is COM1\n"
" default frequency is 14746\n"
" on GNU/Linux the port baud rate is set according to the crystal frequency;\n"
" on Win32 it is 115200\n"
"elk runs interactively; here is some commands:\n"
" j: read part ID;              k: read version\n"
" s: synchronize;               l: load and run RAM-based program\n"
" u: unlock uC for writing;     p: prepare to erase ROM\n"
" e: erase ROM;                 b: load ROM-based program\n"
" r: dump MCU memory on screen; q: quit\n"
"For more info, see elk sources and LPC21xx bootstrap loader documentation\n\n"
  );
}
