/*save_wd example
Copyright (C) 2008,2009\
 Ineiev<ineiev@users.berlios.de>, super V 93
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
#if HAVE_CONFIG_H
# include<config.h>
#endif
#include<stdio.h>
#if HAVE_UNISTD_H
# include<unistd.h>
#endif
#include"save_wd.h"
int main(void)
{const char file_name[]="test.txt";FILE*f=fopen(file_name,"w");
 if(!f)printf("can't create file\n");else{fprintf(f,"test\n");fclose(f);}
 printf("save_wd:     %i\n",save_wd());
 printf("chdir ..:    %i\n",chdir(".."));
 f=fopen(file_name,"r");
 if(f){printf("we seem not to have change dir\n");fclose(f);}
 printf("reload_wd:      %i\n",reload_wd());
 f=fopen(file_name,"r");
 if(!f)printf("we seem not to return back\n");
 else{fclose(f);remove(file_name);}close_wd();return 0;
}
