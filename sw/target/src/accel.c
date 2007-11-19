#include"accel.h"/*LPC2138: accelerometers PWM input*/
#include"../include/lpc2138.h"
#include"mutex.h"
enum accel_constants
{channels=3/*if this changes the qu() and init_accel() should change, too */,
 resolution=14,res_mask=((1<<resolution)-1),res_cycle=res_mask+1
};
unsigned accel_error_count;/* error count for this module */
static mutex data_read;/* unlocks on data updates */
/*The next times are stamped with timer0*/
static unsigned periods[channels];/* current PWM periods */
static unsigned duty_cycles[channels];/* current pulse widths */
static unsigned t0[channels];/* pulse begins */
static unsigned a[channels];/* duty cycles scaled to [0..res_mask] interval */
const unsigned*
get_accel(void)
{unsigned i;if(lock(&data_read))return 0;
 for(i=0;i<channels;i++)
  if(periods[i]>duty_cycles[i])
   a[i]=((duty_cycles[i]<<resolution)/periods[i]);
  else{a[i]=0;++accel_error_count;}
 return a;
}static unsigned inline
diff(unsigned t1,unsigned t0)
{return res_mask&((t1&res_mask)-(t0&res_mask)+res_cycle);}
static void qu(void)__attribute__((interrupt("IRQ")));static void
qu(void)
{static int edges[channels];
 if(T0IR&TxIR_CR0)
 {if(edges[0])
  {T0CCR=(T0CCR&~TxCAP0FE)|TxCAP0RE;periods[2]=diff(T0CR0,t0[2]);
   t0[2]=T0CR0;unlock(&data_read);
  }else{T0CCR=(T0CCR&~TxCAP0RE)|TxCAP0FE;duty_cycles[2]=diff(T0CR0,t0[2]);}
  edges[0]^=1;T0IR=TxIR_CR0;
 }
 if(T0IR&TxIR_CR1)
 {if(edges[1])
  {T0CCR=(T0CCR&~TxCAP1FE)|TxCAP1RE;periods[0]=diff(T0CR1,t0[0]);
   t0[0]=T0CR1;unlock(&data_read);
  }else{T0CCR=(T0CCR&~TxCAP1RE)|TxCAP1FE;duty_cycles[0]=diff(T0CR1,t0[0]);}
  edges[1]^=1;T0IR=TxIR_CR1;
 }
 if(T0IR&TxIR_CR2)
 {if(edges[2])
  {T0CCR=(T0CCR&~TxCAP2FE)|TxCAP2RE;periods[1]=diff(T0CR2,t0[1]);
   t0[1]=T0CR2;unlock(&data_read);
  }else{T0CCR=(T0CCR&~TxCAP2RE)|TxCAP2FE;duty_cycles[1]=diff(T0CR2,t0[1]);}
  edges[2]^=1;T0IR=TxIR_CR2;
 }VICVectAddr=0;
}void
init_accel(int pr)
{PINSEL0&=PINSEL0_CAP00_02MASK&PINSEL0_CAP01_04MASK&PINSEL0_CAP02_06MASK;
 PINSEL0|=PINSEL0_CAP00_02|PINSEL0_CAP01_04|PINSEL0_CAP02_06;
 T0PR=pr;/*min frequency 1000/(pr+1) Hz*/T0TCR=0x1;
 T0CCR=TxCAP0RE|TxCAP0I|TxCAP1RE|TxCAP1I|TxCAP2RE|TxCAP2I;
 VICVectAddr3=(unsigned)qu;VICVectCntl3=VIC_CntlEnable|VIC_TIMER0;
 VICIntEnable=1<<VIC_TIMER0;lock(&data_read);accel_error_count=0;
}/*This file is a part of stribog

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

Copyright (C) 2006, 2007 Ineiev<ineiev@users.sourceforge.net>, super V 93*/
