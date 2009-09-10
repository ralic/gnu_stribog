v 20050820 1
T 155 15900 8 10 1 1 0 0 1
description=stribog the attitude determination platform: additional boards (obsolete)
T 155 15100 8 10 1 1 0 0 1
comment=Copyright (C) 2006, 2009 Ineiev <ineiev@berlios.de>
T 155 14700 8 10 1 1 0 0 1
documentation=This project is free design; you can redistribute it and/or modify
T 155 14500 8 10 1 1 0 0 1
documentation=it under the terms of the GNU General Public License as published by
T 155 14300 8 10 1 1 0 0 1
documentation=the Free Software Foundation; either version 3 of the License, or
T 155 14100 8 10 1 1 0 0 1
documentation=(at your option) any later version.
T 155 13800 8 10 1 1 0 0 1
documentation=This program is distributed in the hope that it will be useful,
T 155 13600 8 10 1 1 0 0 1
documentation=but WITHOUT ANY WARRANTY; without even the implied warranty of
T 155 13400 8 10 1 1 0 0 1
documentation=MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
T 155 13200 8 10 1 1 0 0 1
documentation=GNU General Public License for more details.
T 155 12900 8 10 1 1 0 0 1
documentation=You should have received a copy of the GNU General Public License
T 155 12700 8 10 1 1 0 0 1
documentation=along with this program. If not, see <http://www.gnu.org/licenses/>.
T 155 15600 8 10 1 1 0 0 1
description=revision date: 11IX2009
C 8900 11450 1 0 0 adxl210.sym
{
T 9300 16350 5 10 1 1 0 0 1
refdes=U1
}
C 3000 4800 1 0 0 adxrs300.sym
{
T 4700 8650 5 10 1 1 0 0 1
refdes=U2
}
C 7400 15450 1 90 1 capacitor-1s.sym
{
T 7400 15250 5 10 1 1 0 0 1
refdes=C1
T 7400 14750 5 10 1 1 180 6 1
value=0.1
}
C 8000 15250 1 0 0 resistor-2s.sym
{
T 8200 15550 5 10 1 1 0 0 1
refdes=R1
T 8400 15050 5 10 1 1 0 0 1
value=1M
}
C 8900 13550 1 0 0 gnd-1s.sym
N 9000 13850 9000 14850 4
N 9000 14350 7200 14350 4
N 7200 14350 7200 14550 4
N 7200 15850 7200 15450 4
N 9000 15350 8900 15350 4
N 8000 15350 8000 14350 4
N 6800 15850 9000 15850 4
{
T 6400 15800 5 10 1 1 0 0 1
netname=+5V
}
C 11000 14050 1 90 1 capacitor-1s.sym
{
T 11000 13850 5 10 1 1 0 0 1
refdes=C2
T 11000 13350 5 10 1 1 180 6 1
value=0.1
}
C 12000 14650 1 90 1 capacitor-1s.sym
{
T 12000 14450 5 10 1 1 0 0 1
refdes=C3
T 12000 13950 5 10 1 1 180 6 1
value=0.1
}
N 10800 14050 10800 14350 4
N 10800 14850 11800 14850 4
N 11800 14850 11800 14650 4
C 10700 12550 1 0 0 gnd-1s.sym
N 10800 12850 10800 13150 4
N 11800 13750 11800 12950 4
N 11800 12950 10800 12950 4
N 10800 15850 11600 15850 4
{
T 11700 15800 5 10 1 1 0 0 1
netname=Zout
}
N 4200 9700 4400 9700 4
N 4200 9700 4200 10600 4
{
T 4150 10750 5 10 1 1 0 0 1
netname=+5V
}
N 6500 7400 6500 7600 4
N 6500 7600 7650 7600 4
{
T 7700 7550 5 10 1 1 0 0 1
netname=+5V
}
C 7500 7450 1 90 1 capacitor-1s.sym
{
T 7500 7250 5 10 1 1 0 0 1
refdes=C4
T 7500 6750 5 10 1 1 180 6 1
value=0.1
}
N 7300 7450 7300 7600 4
C 3100 6050 1 0 0 gnd-1s.sym
N 7300 6200 7300 6550 4
N 6000 6500 7300 6500 4
N 6500 6500 6500 7000 4
N 3200 6400 5600 6400 4
N 3200 6350 3200 7000 4
N 7300 6200 3800 6200 4
N 3800 6200 3800 6400 4
C 2600 7900 1 90 1 capacitor-1s.sym
{
T 2600 7700 5 10 1 1 0 0 1
refdes=C5
T 2600 7200 5 10 1 1 180 6 1
value=0.1
}
N 3300 8200 3300 8000 4
N 3300 8000 2400 8000 4
N 2400 8000 2400 7900 4
N 2400 7000 3300 7000 4
C 2650 10300 1 270 0 gnd-1s.sym
C 3100 10400 1 180 1 capacitor-1s.sym
{
T 3200 10300 5 10 1 1 0 0 1
refdes=C6
T 4000 10300 5 10 1 1 0 6 1
value=0.1
}
N 4000 10200 4200 10200 4
N 3100 10200 2950 10200 4
N 4200 6500 4400 6500 4
N 3300 9700 3300 9200 4
N 2550 9700 3800 9700 4
N 6500 9700 6500 9200 4
N 6500 8600 6500 8800 4
N 6500 8800 7000 8800 4
C 7200 9700 1 90 1 capacitor-1s.sym
{
T 7200 9500 5 10 1 1 0 0 1
refdes=C7
T 7200 9000 5 10 1 1 180 6 1
value=0.022
}
N 6000 9700 7000 9700 4
C 5800 10700 1 90 1 capacitor-1s.sym
{
T 5800 10500 5 10 1 1 0 0 1
refdes=C8
T 5800 10000 5 10 1 1 180 6 1
value=0.022
}
N 5600 9800 5600 9700 4
N 5600 9700 5400 9700 4
N 4800 9700 5000 9700 4
N 5000 9700 5000 10700 4
N 5000 10700 5600 10700 4
C 6800 8400 1 180 1 capacitor-1s.sym
{
T 6900 8300 5 10 1 1 0 0 1
refdes=C9
T 7950 8300 5 10 1 1 0 6 1
value=0.047
}
N 6500 8000 6500 8200 4
N 6500 8200 6800 8200 4
C 2150 9000 1 180 1 capacitor-1s.sym
{
T 2050 8500 5 10 1 1 0 0 1
refdes=C10
T 3000 8400 5 10 1 1 0 6 1
value=0.01
}
N 3300 8600 3300 8800 4
N 3300 8800 3050 8800 4
N 3300 9200 2150 9200 4
N 2150 9200 2150 8800 4
C 1650 9600 1 0 0 resistor-2s.sym
{
T 1850 9900 5 10 1 1 0 0 1
refdes=R2
T 1850 9400 5 10 1 1 0 0 1
value=42k; 0.1%
}
C 500 9600 1 0 0 resistor-2s.sym
{
T 700 9900 5 10 1 1 0 0 1
refdes=R3
T 600 9400 5 10 1 1 0 0 1
value=68k; 0.1%
}
N 1650 9700 1400 9700 4
C 100 9800 1 270 0 gnd-1s.sym
N 500 9700 400 9700 4
C 3400 5400 1 0 0 resistor-2s.sym
{
T 3600 5700 5 10 1 1 0 0 1
refdes=R4
T 3500 5200 5 10 1 1 0 0 1
value=220k
}
N 4300 5500 4400 5500 4
N 4400 5500 4400 6500 4
N 3400 5500 3100 5500 4
{
T 2850 5450 5 10 1 1 0 0 1
netname=Tz
}
N 1500 9700 1500 10150 4
{
T 1400 10250 5 10 1 1 0 0 1
netname=wz
}
C 9800 6200 1 0 0 adxrs300.sym
{
T 11500 10050 5 10 1 1 0 0 1
refdes=U3
}
N 11000 11100 11200 11100 4
N 11000 11100 11000 12000 4
{
T 10950 12150 5 10 1 1 0 0 1
netname=+5V
}
N 13300 8800 13300 9000 4
N 13300 9000 14450 9000 4
{
T 14500 8950 5 10 1 1 0 0 1
netname=+5V
}
C 14300 8850 1 90 1 capacitor-1s.sym
{
T 14300 8650 5 10 1 1 0 0 1
refdes=C11
T 14300 8150 5 10 1 1 180 6 1
value=0.1
}
N 14100 8850 14100 9000 4
C 9900 7400 1 0 0 gnd-1s.sym
N 14100 7600 14100 7950 4
N 12800 7900 14100 7900 4
N 13300 7900 13300 8400 4
N 10600 7800 10000 7800 4
N 10000 7700 10000 8400 4
N 14100 7600 10600 7600 4
C 9400 9300 1 90 1 capacitor-1s.sym
{
T 9400 9100 5 10 1 1 0 0 1
refdes=C12
T 9400 8600 5 10 1 1 180 6 1
value=0.1
}
N 10100 9600 10100 9400 4
N 10100 9400 9200 9400 4
N 9200 9400 9200 9300 4
N 9200 8400 10100 8400 4
C 9450 11700 1 270 0 gnd-1s.sym
C 9900 11800 1 180 1 capacitor-1s.sym
{
T 9900 11900 5 10 1 1 0 0 1
refdes=C13
T 10800 11700 5 10 1 1 0 6 1
value=0.1
}
N 10800 11600 11000 11600 4
N 9900 11600 9750 11600 4
N 11000 7900 11200 7900 4
N 10100 11100 10100 10600 4
N 9350 11100 10600 11100 4
N 13300 11100 13300 10600 4
N 13300 10000 13300 10200 4
N 13300 10200 13800 10200 4
C 14000 11100 1 90 1 capacitor-1s.sym
{
T 14000 10900 5 10 1 1 0 0 1
refdes=C14
T 14000 10400 5 10 1 1 180 6 1
value=0.022
}
N 12800 11100 13800 11100 4
C 12600 12100 1 90 1 capacitor-1s.sym
{
T 12600 11900 5 10 1 1 0 0 1
refdes=C15
T 12600 11400 5 10 1 1 180 6 1
value=0.022
}
N 12400 11200 12400 11100 4
N 12400 11100 12200 11100 4
N 11600 11100 11800 11100 4
N 11800 11100 11800 12100 4
N 11800 12100 12400 12100 4
C 13600 9800 1 180 1 capacitor-1s.sym
{
T 13600 9800 5 10 1 1 0 0 1
refdes=C16
T 14750 9700 5 10 1 1 0 6 1
value=0.047
}
N 13300 9400 13300 9600 4
N 13300 9600 13600 9600 4
N 14500 9600 15000 9600 4
C 8950 10400 1 180 1 capacitor-1s.sym
{
T 8850 9900 5 10 1 1 0 0 1
refdes=C17
T 9800 9800 5 10 1 1 0 6 1
value=0.01
}
N 10100 10000 10100 10200 4
N 10100 10200 9850 10200 4
N 10100 10600 8950 10600 4
N 8950 10600 8950 10200 4
C 8450 11000 1 0 0 resistor-2s.sym
{
T 8650 11300 5 10 1 1 0 0 1
refdes=R5
T 8650 10800 5 10 1 1 0 0 1
value=42k; 0.1%
}
C 7300 11000 1 0 0 resistor-2s.sym
{
T 7500 11300 5 10 1 1 0 0 1
refdes=R6
T 7400 10800 5 10 1 1 0 0 1
value=68k; 0.1%
}
N 8450 11100 8200 11100 4
C 6900 11200 1 270 0 gnd-1s.sym
N 7300 11100 7200 11100 4
C 10200 6800 1 0 0 resistor-2s.sym
{
T 10400 7100 5 10 1 1 0 0 1
refdes=R7
T 10300 6600 5 10 1 1 0 0 1
value=220k
}
N 11100 6900 11200 6900 4
N 11200 6900 11200 7900 4
N 10200 6900 9900 6900 4
{
T 9650 6850 5 10 1 1 0 0 1
netname=Ty
}
N 8300 11100 8300 11550 4
{
T 8200 11650 5 10 1 1 0 0 1
netname=wy
}
C 15350 10200 1 0 0 adxrs300.sym
{
T 17050 14050 5 10 1 1 0 0 1
refdes=U4
}
N 16550 15100 16750 15100 4
N 16550 15100 16550 16000 4
{
T 16500 16150 5 10 1 1 0 0 1
netname=+5V
}
N 18850 12800 18850 13000 4
N 18850 13000 20000 13000 4
{
T 20050 12950 5 10 1 1 0 0 1
netname=+5V
}
C 19850 12850 1 90 1 capacitor-1s.sym
{
T 19850 12650 5 10 1 1 0 0 1
refdes=C18
T 19850 12150 5 10 1 1 180 6 1
value=0.1
}
N 19650 12850 19650 13000 4
C 15450 11400 1 0 0 gnd-1s.sym
N 19650 11600 19650 11950 4
N 18350 11900 19650 11900 4
N 18850 11900 18850 12400 4
N 16150 11800 15550 11800 4
N 15550 11700 15550 12400 4
N 19650 11600 16150 11600 4
C 14950 13300 1 90 1 capacitor-1s.sym
{
T 14950 13100 5 10 1 1 0 0 1
refdes=C19
T 14950 12600 5 10 1 1 180 6 1
value=0.1
}
N 15650 13600 15650 13400 4
N 15650 13400 14750 13400 4
N 14750 13400 14750 13300 4
N 14750 12400 15650 12400 4
C 15000 15700 1 270 0 gnd-1s.sym
C 15450 15800 1 180 1 capacitor-1s.sym
{
T 15450 15900 5 10 1 1 0 0 1
refdes=C20
T 16350 15700 5 10 1 1 0 6 1
value=0.1
}
N 16350 15600 16550 15600 4
N 15450 15600 15300 15600 4
N 16550 11900 16750 11900 4
N 15650 15100 15650 14600 4
N 14900 15100 16150 15100 4
N 18850 15100 18850 14600 4
N 18850 14000 18850 14200 4
N 18850 14200 19350 14200 4
C 19550 15100 1 90 1 capacitor-1s.sym
{
T 19550 14900 5 10 1 1 0 0 1
refdes=C21
T 19550 14400 5 10 1 1 180 6 1
value=0.022
}
N 18350 15100 19350 15100 4
C 18150 16100 1 90 1 capacitor-1s.sym
{
T 18150 15900 5 10 1 1 0 0 1
refdes=C22
T 18150 15400 5 10 1 1 180 6 1
value=0.022
}
N 17950 15200 17950 15100 4
N 17950 15100 17750 15100 4
N 17150 15100 17350 15100 4
N 17350 15100 17350 16100 4
N 17350 16100 17950 16100 4
C 19150 13800 1 180 1 capacitor-1s.sym
{
T 19150 13800 5 10 1 1 0 0 1
refdes=C23
T 20300 13700 5 10 1 1 0 6 1
value=0.047
}
N 18850 13400 18850 13600 4
N 18850 13600 19150 13600 4
C 14500 14400 1 180 1 capacitor-1s.sym
{
T 14400 13900 5 10 1 1 0 0 1
refdes=C24
T 15450 13800 5 10 1 1 0 6 1
value=0.01
}
N 15650 14000 15650 14200 4
N 15650 14200 15400 14200 4
N 15650 14600 14500 14600 4
N 14500 14600 14500 14200 4
C 14000 15000 1 0 0 resistor-2s.sym
{
T 14200 15300 5 10 1 1 0 0 1
refdes=R8
T 14200 14800 5 10 1 1 0 0 1
value=42k; 0.1%
}
C 12850 15000 1 0 0 resistor-2s.sym
{
T 13050 15300 5 10 1 1 0 0 1
refdes=R9
T 12950 14800 5 10 1 1 0 0 1
value=68k; 0.1%
}
N 14000 15100 13750 15100 4
C 12450 15200 1 270 0 gnd-1s.sym
N 12850 15100 12750 15100 4
C 15750 10800 1 0 0 resistor-2s.sym
{
T 15950 11100 5 10 1 1 0 0 1
refdes=R10
T 15850 10600 5 10 1 1 0 0 1
value=220k
}
N 16650 10900 16750 10900 4
N 16750 10900 16750 11900 4
N 15750 10900 15450 10900 4
{
T 15200 10850 5 10 1 1 0 0 1
netname=Tx
}
N 13850 15100 13850 15550 4
{
T 13750 15650 5 10 1 1 0 0 1
netname=wx
}
N 5600 6400 5600 6500 4
N 5400 6500 5400 6400 4
N 5000 6500 5000 6400 4
N 4800 6500 4800 6400 4
N 3800 6500 3800 6400 4
N 10600 7600 10600 7900 4
N 11600 7800 11600 7900 4
N 11800 7800 11800 7900 4
N 12200 7800 12200 7900 4
N 10600 7800 12400 7800 4
N 12400 7800 12400 7900 4
N 16150 11600 16150 11900 4
N 17150 11800 17150 11900 4
N 17350 11800 17350 11900 4
N 17750 11800 17750 11900 4
N 16150 11800 17950 11800 4
N 17950 11800 17950 11900 4
N 15000 9600 15000 7900 4
N 15000 7900 14100 7900 4
N 7700 8200 8200 8200 4
N 8200 8200 8200 6500 4
N 7300 6500 8200 6500 4
N 20050 13600 20600 13600 4
N 20600 13600 20600 11900 4
N 20600 11900 19650 11900 4
