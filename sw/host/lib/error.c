/*GNU-like error messages
Copyright (C) 2008, 2009 Ineiev<ineiev@users.sourceforge.net>, super V 93
This program is a part of the stribog host software section

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/
#include<stribog_error.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
static const char*program_name=0;
static int skipped_source_chars=0;
void
error_(const char*fmt,...)
{va_list ap;va_start(ap,fmt);vfprintf(stderr,fmt,ap);va_end(ap);}
void
output_prefix_for_error(void)
{if(program_name)error_("%s:",program_name);}
void
error_location(const char*file,int line)
{error_("%s:%i: ",file+skipped_source_chars,line);}
void
init_error_dir(const char*prog_name,const char*srcdir)
{program_name=prog_name;
 if(srcdir)skipped_source_chars=strlen(srcdir)+1;
}
