/*LPC2138 register and some bit definitions
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

Copyright (C) 2006 D.Ineiev <ineiev@yahoo.co.uk>*/
/*System Control Block*/
/*External Interrupts*/
#define EXTINT		(*((volatile unsigned*)(0xE01FC140)))
#define EXTINT_EINT0		(1<<0)
#define EXTINT_EINT1		(1<<1)
#define EXTINT_EINT2		(1<<2)
#define EXTINT_EINT3		(1<<3)
#define EXTWAKE		(*((volatile unsigned*)(0xE01FC144)))
#define EXTWAKE0	(1<<0)
#define EXTWAKE1	(1<<1)
#define EXTWAKE2	(1<<2)
#define EXTWAKE3	(1<<3)
#define BODWAKE		(1<<14)
#define RTCWAKE		(1<<15)
#define EXTMODE		(*((volatile unsigned*)(0xE01FC148)))
#define EXTMODE0	(1<<0)
#define EXTMODE1	(1<<1)
#define EXTMODE2	(1<<2)
#define EXTMODE3	(1<<3)
#define EXTPOLAR	(*((volatile unsigned*)(0xE01FC14C)))
#define EXPOLAR0	(1<<0)
#define EXPOLAR1	(1<<1)
#define EXPOLAR2	(1<<2)
#define EXPOLAR3	(1<<3)
/*Memory Mapping Control*/
#define MEMMAP		(*((volatile unsigned*)(0xE01FC040)))
#define MEMMAP0		(1<<0)
#define MEMMAP1		(1<<1)
#define MEMMAP_BOOTLOADER	(0)
#define MEMMAP_USERFLASH	MEMMAP0
#define MEMMAP_USERRAM	MEMMAP1
/*Phase Locked Loop*/
#define PLLCON		(*((volatile unsigned*)(0xE01FC080)))
#define PLLCON_PLLE	(1<<0)
#define PLLCON_PLLC	(1<<1)
#define PLLCFG		(*((volatile unsigned*)(0xE01FC084)))
#define MSEL(a)		((a-1)&0x1F)
#define PSEL_1		(0<<5)
#define PSEL_2		(1<<5)
#define PSEL_4		(2<<5)
#define PSEL_8		(3<<5)
#define PLLSTAT		(*((volatile unsigned*)(0xE01FC088)))
#define PLLSTAT_PLLE	(1<<8)
#define PLLSTAT_PLLC	(1<<9)
#define PLLSTAT_PLOCK	(1<<10)
#define PLLFEED		(*((volatile unsigned*)(0xE01FC08C)))
#define PLLFEED_FIRST	(0xAA)
#define PLLFEED_SECOND	(0x55)
/*Power Control*/
#define PCON		(*((volatile unsigned*)(0xE01FC0C0)))
#define PCON_IDL		(1<<0)
#define PCON_PD		(1<<1)
#define PCON_PDBOD		(1<<2)
#define PCONP		(*((volatile unsigned*)(0xE01FC0C4)))
#define PCTIM0		(1<<1)
#define PCTIM1		(1<<2)
#define PCUART0		(1<<3)
#define PCUART1		(1<<4)
#define PCPWM0		(1<<5)
#define PCI2C0		(1<<7)
#define PCSPI0		(1<<8)
#define PCRTC		(1<<9)
#define PCSPI1		(1<<10)
#define PCAD0		(1<<12)
#define PCI2C1		(1<<19)
#define PCAD1		(1<<20)
/*VPB Divider*/
#define VPBDIV		(*((volatile unsigned*)(0xE01FC100)))
#define VPBDIV_ONE_FORTH	(0)
#define VPBDIV_ONE		(1)
#define VPBDIV_ONE_HALF		(2)
/*Reset*/
#define RSID		(*((volatile unsigned*)(0xE01FC180)))
#define RSID_POR		(1<<0)
#define RSID_EXTR		(1<<1)
#define RSID_WDTR		(1<<2)
#define RSID_BODR		(1<<3)
/*Code Security/Debugging*/
#define CSPR		(*((volatile unsigned*)(0xE01FC184)))
/*Memory Acceleration Module*/
#define MAMCR		(*((volatile unsigned*)(0xE01FC000)))
#define MAM_DISABLED	(0)
#define MAM_PARTIAL	(1)
#define MAM_FULL	(2)
#define MAMTIM		(*((volatile unsigned*)(0xE01FC004)))
#define MAM_FETCH_1CLK	(1)
#define MAM_FETCH_2CLK	(2)
#define MAM_FETCH_3CLK	(3)
#define MAM_FETCH_4CLK	(4)
#define MAM_FETCH_5CLK	(5)
#define MAM_FETCH_6CLK	(6)
#define MAM_FETCH_7CLK	(7)
/*Vectored Interrupt Controller*/
#define VICIRQStatus		(*((volatile unsigned*)(0xFFFFF000)))
#define VICFIQStatus		(*((volatile unsigned*)(0xFFFFF004)))
#define VICRawIntr		(*((volatile unsigned*)(0xFFFFF008)))
#define VICIntSelect		(*((volatile unsigned*)(0xFFFFF00C)))
#define VICIntEnable		(*((volatile unsigned*)(0xFFFFF010)))
#define VICIntEnClear		(*((volatile unsigned*)(0xFFFFF014)))
#define VICSoftInt		(*((volatile unsigned*)(0xFFFFF018)))
#define VIC_AD1		(21)
#define VIC_BOD		(20)
#define VIC_I2C1	(19)
#define VIC_AD0		(18)
#define VIC_EINT3	(17)
#define VIC_EINT2	(16)
#define VIC_EINT1	(15)
#define VIC_EINT0	(14)
#define VIC_RTC		(13)
#define VIC_PLL		(12)
#define VIC_SPI1	(11)
#define VIC_SSP		(11)
#define VIC_SPI0	(10)
#define VIC_I2C0	(9)
#define VIC_PWM0	(8)
#define VIC_UART1	(7)
#define VIC_UART0	(6)
#define VIC_TIMER1	(5)
#define VIC_TIMER0	(4)
#define VIC_ARMCore1	(3)
#define VIC_ARMCore0	(2)
#define VIC_SWI		(1)
#define VIC_WDT		(0)
#define VICSoftIntClear		(*((volatile unsigned*)(0xFFFFF01C)))
#define VICProtection		(*((volatile unsigned*)(0xFFFFF020)))
#define VICProtection_public 	(0)
#define VICProtection_protected	(1)
#define VICVectAddr		(*((volatile unsigned*)(0xFFFFF030)))
#define VICDefVectAddr		(*((volatile unsigned*)(0xFFFFF034)))
#define VICVectAddr0		(*((volatile unsigned*)(0xFFFFF100)))
#define VICVectAddr1		(*((volatile unsigned*)(0xFFFFF104)))
#define VICVectAddr2		(*((volatile unsigned*)(0xFFFFF108)))
#define VICVectAddr3		(*((volatile unsigned*)(0xFFFFF10C)))
#define VICVectAddr4		(*((volatile unsigned*)(0xFFFFF110)))
#define VICVectAddr5		(*((volatile unsigned*)(0xFFFFF114)))
#define VICVectAddr6		(*((volatile unsigned*)(0xFFFFF118)))
#define VICVectAddr7		(*((volatile unsigned*)(0xFFFFF11C)))
#define VICVectAddr8		(*((volatile unsigned*)(0xFFFFF120)))
#define VICVectAddr9		(*((volatile unsigned*)(0xFFFFF124)))
#define VICVectAddr10		(*((volatile unsigned*)(0xFFFFF128)))
#define VICVectAddr11		(*((volatile unsigned*)(0xFFFFF12C)))
#define VICVectAddr12		(*((volatile unsigned*)(0xFFFFF130)))
#define VICVectAddr13		(*((volatile unsigned*)(0xFFFFF134)))
#define VICVectAddr14		(*((volatile unsigned*)(0xFFFFF138)))
#define VICVectAddr15		(*((volatile unsigned*)(0xFFFFF13C)))
#define VIC_CntlEnable		(1<<5)
#define VICVectCntl0		(*((volatile unsigned*)(0xFFFFF200)))
#define VICVectCntl1		(*((volatile unsigned*)(0xFFFFF204)))
#define VICVectCntl2		(*((volatile unsigned*)(0xFFFFF208)))
#define VICVectCntl3		(*((volatile unsigned*)(0xFFFFF20C)))
#define VICVectCntl4		(*((volatile unsigned*)(0xFFFFF210)))
#define VICVectCntl5		(*((volatile unsigned*)(0xFFFFF214)))
#define VICVectCntl6		(*((volatile unsigned*)(0xFFFFF218)))
#define VICVectCntl7		(*((volatile unsigned*)(0xFFFFF21C)))
#define VICVectCntl8		(*((volatile unsigned*)(0xFFFFF220)))
#define VICVectCntl9		(*((volatile unsigned*)(0xFFFFF224)))
#define VICVectCntl10		(*((volatile unsigned*)(0xFFFFF228)))
#define VICVectCntl11		(*((volatile unsigned*)(0xFFFFF22C)))
#define VICVectCntl12		(*((volatile unsigned*)(0xFFFFF230)))
#define VICVectCntl13		(*((volatile unsigned*)(0xFFFFF234)))
#define VICVectCntl14		(*((volatile unsigned*)(0xFFFFF238)))
#define VICVectCntl15		(*((volatile unsigned*)(0xFFFFF23C)))
/*Pin Control Module*/
#define PINSEL0		(*((volatile unsigned*)(0xE002C000)))
#define PINSEL0_00MASK	(~(3<<0))
#define PINSEL0_TXD0MASK	PINSEL0_00MASK
#define PINSEL0_PWM1_00MASK	PINSEL0_00MASK
#define PINSEL0_TXD0	(1<<0)
#define PINSEL0_PWM1_00	(2<<0)
#define PINSEL0_01MASK	(~(3<<2))
#define PINSEL0_RXD0MASK	PINSEL0_01MASK
#define PINSEL0_PWM3_01MASK	PINSEL0_01MASK
#define PINSEL0_EINT0_01MASK	PINSEL0_01MASK
#define PINSEL0_RXD0	(1<<2)
#define PINSEL0_PWM3	(2<<2)
#define PINSEL0_EINT0	(3<<2)
#define PINSEL0_02MASK		(~(3<<4))
#define PINSEL0_CAP00_02MASK	PINSEL0_02MASK
#define PINSEL0_SCL0MASK	PINSEL0_02MASK
#define PINSEL0_SCL0		(1<<4)
#define PINSEL0_CAP00_02	(2<<4)
#define PINSEL0_SDA0	(1<<6)
#define PINSEL0_MAT00	(2<<6)
#define PINSEL0_EINT1	(3<<6)
#define PINSEL0_04MASK		(~(3<<8))
#define PINSEL0_CAP01_04MASK	PINSEL0_04MASK
#define PINSEL0_SCK0MASK	PINSEL0_04MASK
#define PINSEL0_AD06MASK	PINSEL0_04MASK
#define PINSEL0_SCK0		(1<<8)
#define PINSEL0_CAP01_04	(2<<8)
#define PINSEL0_AD06		(3<<8)
#define PINSEL0_05MASK		(~(3<<10))
#define PINSEL0_MAT01_05MASK	PINSEL0_05MASK
#define PINSEL0_MISO0MASK	PINSEL0_05MASK
#define PINSEL0_AD07MASK	PINSEL0_05MASK
#define PINSEL0_MISO0_05	(1<<10)
#define PINSEL0_MAT01_05	(2<<10)
#define PINSEL0_AD07		(3<<10)
#define PINSEL0_06MASK		(~(3<<12))
#define PINSEL0_MOSI0MASK	PINSEL0_06MASK
#define PINSEL0_CAP02_06MASK	PINSEL0_06MASK
#define PINSEL0_AD10MASK	PINSEL0_06MASK
#define PINSEL0_MOSI0		(1<<12)
#define PINSEL0_CAP02_06	(2<<12)
#define PINSEL0_AD10		(3<<12)
#define PINSEL0_SSEL0	(1<<14)
#define PINSEL0_PWM2	(2<<14)
#define PINSEL0_EINT2	(3<<14)
#define PINSEL0_08MASK		(~(3<<16))
#define PINSEL0_TXD1MASK	PINSEL0_08MASK
#define PINSEL0_PWM4MASK	PINSEL0_08MASK
#define PINSEL0_AD11MASK	PINSEL0_08MASK
#define PINSEL0_TXD1	(1<<16)
#define PINSEL0_PWM4	(2<<16)
#define PINSEL0_AD11	(3<<16)
#define PINSEL0_09MASK	(~(3<<18))
#define PINSEL0_RXD1MASK	PINSEL0_09MASK
#define PINSEL0_PWM6MASK	PINSEL0_09MASK
#define PINSEL0_EINT3MASK	PINSEL0_09MASK
#define PINSEL0_RXD1	(1<<18)
#define PINSEL0_PWM6	(2<<18)
#define PINSEL0_EINT3	(3<<18)
#define PINSEL0_10MASK	(~(3<<20))
#define PINSEL0_RTS1MASK	PINSEL0_10MASK
#define PINSEL0_CAP10MASK	PINSEL0_10MASK
#define PINSEL0_AD12MASK	PINSEL0_10MASK
#define PINSEL0_RTS1	(1<<20)
#define PINSEL0_CAP10	(2<<20)
#define PINSEL0_AD12	(3<<20)
#define PINSEL0_CTS1	(1<<22)
#define PINSEL0_CAP11	(2<<22)
#define PINSEL0_SCL1	(3<<22)
#define PINSEL0_DSR1	(1<<24)
#define PINSEL0_MAT10	(2<<24)
#define PINSEL0_AD13	(3<<24)
#define PINSEL0_DTR1	(1<<26)
#define PINSEL0_MAT11	(2<<26)
#define PINSEL0_AD14	(3<<26)
#define PINSEL0_DCD1	(1<<28)
//#define PINSEL0_EINT1	(2<<28)
#define PINSEL0_RI1	(1<<30)
//#define PINSEL0_EINT2	(2<<30)
#define PINSEL0_AD15	(3<<30)
#define PINSEL1		(*((volatile unsigned*)(0xE002C004)))
#define PINSEL1_EINT0		(1<<0)
#define PINSEL1_MAT02_P016	(2<<0)
#define PINSEL1_CAP02_P016	(3<<0)
#define PINSEL1_17MASK		(~(3<<2))
#define PINSEL1_CAP12_P017MASK	PINSEL1_17MASK
#define PINSEL1_SCK_P017MASK	PINSEL1_17MASK
#define PINSEL1_MAT12_P017MASK	PINSEL1_17MASK
#define PINSEL1_CAP12_P017	(1<<2)
#define PINSEL1_SCK		(2<<2)
#define PINSEL1_MAT12_P017	(3<<2)
#define PINSEL1_CAP13_P018	(1<<4)
#define PINSEL1_MISO		(2<<4)
#define PINSEL1_MAT13_P018	(3<<4)
#define PINSEL1_MAT12_P019	(1<<6)
#define PINSEL1_MOSI		(2<<6)
#define PINSEL1_CAP12_P019	(3<<6)
#define PINSEL1_20MASK		(~(3<<8))
#define PINSEL1_MAT13_P020MASK	PINSEL1_20MASK
#define PINSEL1_SSELMASK	PINSEL1_20MASK
#define PINSEL1_EINT3_P20MASK	PINSEL1_20MASK
#define PINSEL1_MAT13_P020	(1<<8)
#define PINSEL1_SSEL		(2<<8)
#define PINSEL1_EINT3_P20	(3<<8)
#define PINSEL1_21MASK		(~(3<<10))
#define PINSEL1_PWM5MASK	PINSEL1_21MASK
#define PINSEL1_AD16MASK	PINSEL1_21MASK
#define PINSEL1_CAP13_P21MASK	PINSEL1_21MASK
#define PINSEL1_PWM5		(1<<10)
#define PINSEL1_AD16		(2<<10)
#define PINSEL1_CAP13_P21	(3<<10)
#define PINSEL1_22MASK		(~(3<<12))
#define PINSEL1_AD17MASK	PINSEL1_22MASK
#define PINSEL1_CAP00_P022MASK	PINSEL1_22MASK
#define PINSEL1_MAT00_P022MASK	PINSEL1_22MASK
#define PINSEL1_AD17		(1<<12)
#define PINSEL1_CAP00_P022	(2<<12)
#define PINSEL1_MAT00_P022	(3<<12)
#define PINSEL1_25MASK		(~(3<<18))
#define PINSEL1_AD04MASK	PINSEL1_25MASK
#define PINSEL1_DACMASK		PINSEL1_25MASK
#define PINSEL1_AD04		(1<<18)
#define PINSEL1_DAC		(2<<18)
#define PINSEL1_26MASK		(~(3<<20))
#define PINSEL1_AD05MASK	PINSEL1_26MASK
#define PINSEL1_AD05		(1<<20)
#define PINSEL1_27MASK		(~(3<<22))
#define PINSEL1_AD00MASK	PINSEL1_27MASK
#define PINSEL1_CAP01_P027MASK	PINSEL1_27MASK
#define PINSEL1_MAT01_P027MASK	PINSEL1_27MASK
#define PINSEL1_AD00		(1<<22)
#define PINSEL1_CAP01_P027	(2<<22)
#define PINSEL1_MAT01_P027	(3<<22)
#define PINSEL1_28MASK		(~(3<<24))
#define PINSEL1_AD01MASK	PINSEL1_28MASK
#define PINSEL1_CAP02_P028MASK	PINSEL1_28MASK
#define PINSEL1_MAT02_P028MASK	PINSEL1_28MASK
#define PINSEL1_AD01		(1<<24)
#define PINSEL1_CAP02_P028	(2<<24)
#define PINSEL1_MAT02_P028	(3<<24)
#define PINSEL1_29MASK		(~(3<<26))
#define PINSEL1_AD02MASK	PINSEL1_29MASK
#define PINSEL1_CAP03_P029MASK	PINSEL1_29MASK
#define PINSEL1_MAT03_P029MASK	PINSEL1_29MASK
#define PINSEL1_AD02		(1<<26)
#define PINSEL1_CAP03_P029	(2<<26)
#define PINSEL1_MAT03_P029	(3<<26)
#define PINSEL1_30MASK		(~(3<<28))
#define PINSEL1_AD03MASK	PINSEL1_30MASK
#define PINSEL1_EINT3_P030MASK	PINSEL1_30MASK
#define PINSEL1_CAP00_P030MASK	PINSEL1_30MASK
#define PINSEL1_AD03		(1<<28)
#define PINSEL1_EINT3_P030	(2<<28)
#define PINSEL1_CAP00_P030	(3<<28)
#define PINSEL2		(*((volatile unsigned*)(0xE002C014)))
#define PINSEL2_DEBUG	(1<<2)
#define PINSEL2_TRACE	(1<<3)
/*General Purpose IO*/
#define IO0PIN		(*((volatile unsigned*)(0xE0028000)))
#define IO0SET		(*((volatile unsigned*)(0xE0028004)))
#define IO0DIR		(*((volatile unsigned*)(0xE0028008)))
#define IO0CLR		(*((volatile unsigned*)(0xE002800C)))
#define IO1PIN		(*((volatile unsigned*)(0xE0028010)))
#define IO1SET		(*((volatile unsigned*)(0xE0028014)))
#define IO1DIR		(*((volatile unsigned*)(0xE0028018)))
#define IO1CLR		(*((volatile unsigned*)(0xE002801C)))
/*UART0*/
#define U0RBR		(*((volatile unsigned*)(0xE000C000)))
#define U0THR		(*((volatile unsigned*)(0xE000C000)))
#define U0DLL		(*((volatile unsigned*)(0xE000C000)))
#define U0DLM		(*((volatile unsigned*)(0xE000C004)))
#define U0IER		(*((volatile unsigned*)(0xE000C004)))
#define UxIERrx		(1)
#define UxIERtx		(2)
#define UxIERerr	(3)
#define U1IERmodem	(4)
#define U0IIR		(*((volatile unsigned*)(0xE000C008)))
#define UxIIRnopending	(1)
#define UxIIRidentmask	(7<<1)
#define UxIIR_RLS	(3<<1)
#define UxIIR_RDA	(2<<1)
#define UxIIR_THRE	(1<<1)
#define U0FCR		(*((volatile unsigned*)(0xE000C008)))
#define UxFCRfifoenable	(1)
#define UxFCRrxreset	(2)
#define UxFCRtxreset	(4)
#define UxFCR1sym	(0)
#define UxFCR4sym	(0x40)
#define UxFCR8sym	(0x80)
#define UxFCR14sym	(0xC0)
#define U0LCR		(*((volatile unsigned*)(0xE000C00C)))
#define Uxbitmask	(3)
#define Ux5bit		(0)
#define Ux6bit		(1)
#define Ux7bit		(2)
#define Ux8bit		(3)
#define Uxstopmask	(4)
#define Ux1stop		(0)
#define Ux2stop		(4)
#define UxParityEnable	(8)
#define UxParityMask	(0x30)
#define UxOdd		(0)
#define UxEven		(0x10)
#define UxMark		(0x20)
#define UxClear		(0x30)
#define UxBreak		(0x40)
#define UxDLAB		(0x80)
#define U0LSR		(*((volatile unsigned*)(0xE000C014)))
#define UxLSR_RDR	(1<<0)
#define UxLSR_THRE	(1<<5)
#define U0SCR		(*((volatile unsigned*)(0xE000C01C)))
#define U0TER		(*((volatile unsigned*)(0xE000C030)))
/*UART1*/
#define U1RBR		(*((volatile unsigned*)(0xE0010000)))
#define U1THR		(*((volatile unsigned*)(0xE0010000)))
#define U1DLL		(*((volatile unsigned*)(0xE0010000)))
#define U1DLM		(*((volatile unsigned*)(0xE0010004)))
#define U1IER		(*((volatile unsigned*)(0xE0010004)))
#define U1IIR		(*((volatile unsigned*)(0xE0010008)))
#define U1FCR		(*((volatile unsigned*)(0xE0010008)))
#define U1LCR		(*((volatile unsigned*)(0xE001000C)))
#define U1MCR		(*((volatile unsigned*)(0xE0010010)))
#define U1LSR		(*((volatile unsigned*)(0xE0010014)))
#define U1MSR		(*((volatile unsigned*)(0xE0010018)))
#define U1SCR		(*((volatile unsigned*)(0xE001001C)))
#define U1TER		(*((volatile unsigned*)(0xE0010030)))
/*I2C*/
#define I2C0CONSET	(*((volatile unsigned*)(0xE001C000)))
#define I2C0STAT	(*((volatile unsigned*)(0xE001C004)))
#define I2C0DAT		(*((volatile unsigned*)(0xE001C008)))
#define I2C0ADR		(*((volatile unsigned*)(0xE001C00C)))
#define I2C0SCLH	(*((volatile unsigned*)(0xE001C010)))
#define I2C0SCLL	(*((volatile unsigned*)(0xE001C014)))
#define I2C0CONCLR	(*((volatile unsigned*)(0xE001C018)))

#define I2C1CONSET	(*((volatile unsigned*)(0xE005C000)))
#define I2C1STAT	(*((volatile unsigned*)(0xE005C004)))
#define I2C1DAT		(*((volatile unsigned*)(0xE005C008)))
#define I2C1ADR		(*((volatile unsigned*)(0xE005C00C)))
#define I2C1SCLH	(*((volatile unsigned*)(0xE005C010)))
#define I2C1SCLL	(*((volatile unsigned*)(0xE005C014)))
#define I2C1CONCLR	(*((volatile unsigned*)(0xE005C018)))
/*SPI*/
#define S0PCR		(*((volatile unsigned*)(0xE0020000)))
#define S0PSR		(*((volatile unsigned*)(0xE0020004)))
#define S0PDR		(*((volatile unsigned*)(0xE0020008)))
#define S0PCCR		(*((volatile unsigned*)(0xE002000C)))
#define S0PINT		(*((volatile unsigned*)(0xE002001C)))
/*SSP (SPI1)*/
#define SSPCR0		(*((volatile unsigned*)(0xE0068000)))
#define SSPCR1		(*((volatile unsigned*)(0xE0068004)))
#define SSPDR		(*((volatile unsigned*)(0xE0068008)))
#define SSPSR		(*((volatile unsigned*)(0xE006800C)))
#define SSPCPSR		(*((volatile unsigned*)(0xE0068010)))
#define SSPIMSC		(*((volatile unsigned*)(0xE0068014)))
#define SSPRIS		(*((volatile unsigned*)(0xE0068018)))
#define SSPMIS		(*((volatile unsigned*)(0xE006801C)))
#define SSPICR		(*((volatile unsigned*)(0xE0068020)))
/*Timer*/
#define T0IR		(*((volatile unsigned*)(0xE0004000)))
#define TxIR_MR0	(1<<0)
#define TxIR_MR1	(1<<1)
#define TxIR_MR2	(1<<2)
#define TxIR_MR3	(1<<3)
#define TxIR_CR0	(1<<4)
#define TxIR_CR1	(1<<5)
#define TxIR_CR2	(1<<6)
#define TxIR_CR3	(1<<7)
#define T0TCR		(*((volatile unsigned*)(0xE0004004)))
#define T0TC		(*((volatile unsigned*)(0xE0004008)))
#define T0PR		(*((volatile unsigned*)(0xE000400C)))
#define T0PC		(*((volatile unsigned*)(0xE0004010)))
#define T0MCR		(*((volatile unsigned*)(0xE0004014)))
#define T0MR0		(*((volatile unsigned*)(0xE0004018)))
#define T0MR1		(*((volatile unsigned*)(0xE000401C)))
#define T0MR2		(*((volatile unsigned*)(0xE0004020)))
#define T0MR3		(*((volatile unsigned*)(0xE0004024)))
#define T0CCR		(*((volatile unsigned*)(0xE0004028)))
#define TxCAP0RE	(1<<0)
#define TxCAP0FE	(1<<1)
#define TxCAP0I		(1<<2)
#define TxCAP1RE	(1<<3)
#define TxCAP1FE	(1<<4)
#define TxCAP1I		(1<<5)
#define TxCAP2RE	(1<<6)
#define TxCAP2FE	(1<<7)
#define TxCAP2I		(1<<8)
#define TxCAP3RE	(1<<9)
#define TxCAP3FE	(1<<10)
#define TxCAP3I		(1<<11)
#define T0CR0		(*((volatile unsigned*)(0xE000402C)))
#define T0CR1		(*((volatile unsigned*)(0xE0004030)))
#define T0CR2		(*((volatile unsigned*)(0xE0004034)))
#define T0CR3		(*((volatile unsigned*)(0xE0004038)))
#define T0EMR		(*((volatile unsigned*)(0xE000403C)))
#define T0CTCR		(*((volatile unsigned*)(0xE0004070)))
#define T1IR		(*((volatile unsigned*)(0xE0008000)))
#define T1TCR		(*((volatile unsigned*)(0xE0008004)))
#define T1TC		(*((volatile unsigned*)(0xE0008008)))
#define T1PR		(*((volatile unsigned*)(0xE000800C)))
#define T1PC		(*((volatile unsigned*)(0xE0008010)))
#define T1MCR		(*((volatile unsigned*)(0xE0008014)))
#define T1MR0		(*((volatile unsigned*)(0xE0008018)))
#define T1MR1		(*((volatile unsigned*)(0xE000801C)))
#define T1MR2		(*((volatile unsigned*)(0xE0008020)))
#define T1MR3		(*((volatile unsigned*)(0xE0008024)))
#define T1CCR		(*((volatile unsigned*)(0xE0008028)))
#define T1CR0		(*((volatile unsigned*)(0xE000802C)))
#define T1CR1		(*((volatile unsigned*)(0xE0008030)))
#define T1CR2		(*((volatile unsigned*)(0xE0008034)))
#define T1CR3		(*((volatile unsigned*)(0xE0008038)))
#define T1EMR		(*((volatile unsigned*)(0xE000803C)))
#define T1CTCR		(*((volatile unsigned*)(0xE0008070)))
/*Pulse With Modulator*/
#define PWMIR		(*((volatile unsigned*)(0xE0014000)))
#define PWMTCR		(*((volatile unsigned*)(0xE0014004)))
#define PWMTC		(*((volatile unsigned*)(0xE0014008)))
#define PWMPR		(*((volatile unsigned*)(0xE001400C)))
#define PWMPC		(*((volatile unsigned*)(0xE0014010)))
#define PWMMCR		(*((volatile unsigned*)(0xE0014014)))
#define PWMMR0		(*((volatile unsigned*)(0xE0014018)))
#define PWMMR1		(*((volatile unsigned*)(0xE001401C)))
#define PWMMR2		(*((volatile unsigned*)(0xE0014020)))
#define PWMMR3		(*((volatile unsigned*)(0xE0014024)))
#define PWMMR4		(*((volatile unsigned*)(0xE0014040)))
#define PWMMR5		(*((volatile unsigned*)(0xE0014044)))
#define PWMMR6		(*((volatile unsigned*)(0xE0014048)))
#define PWMPCR		(*((volatile unsigned*)(0xE001404C)))
#define PWMLER		(*((volatile unsigned*)(0xE0014050)))
/*Analog-to-Digital Converter*/
#define AD0CR		(*((volatile unsigned*)(0xE0034000)))
#define AD_BURST	(1<<16)
#define AD_PDN		(1<<21)
#define AD_STARTNOW	(1<<24)
#define AD0DR		(*((volatile unsigned*)(0xE0034004)))
#define AD_DONE		(1<<31)
#define AD1CR		(*((volatile unsigned*)(0xE0060000)))
#define AD1DR		(*((volatile unsigned*)(0xE0060004)))
#define ADGSR		(*((volatile unsigned*)(0xE0034008)))
/*Digital-to-Analog Converter*/
#define DACR		(*((volatile unsigned*)(0xE006C000)))
/*Real Time Clock*/
#define RTCILR		(*((volatile unsigned*)(0xE0024000)))
#define RTCCTC		(*((volatile unsigned*)(0xE0024004)))
#define RTCCCR		(*((volatile unsigned*)(0xE0024008)))
#define RTCCIIR		(*((volatile unsigned*)(0xE002400C)))
#define RTCAMR		(*((volatile unsigned*)(0xE0024010)))
#define RTCCTIME0	(*((volatile unsigned*)(0xE0024014)))
#define RTCCTIME1	(*((volatile unsigned*)(0xE0024018)))
#define RTCCTIME2	(*((volatile unsigned*)(0xE002401C)))
#define RTCSEC		(*((volatile unsigned*)(0xE0024020)))
#define RTCMIN		(*((volatile unsigned*)(0xE0024024)))
#define RTCHOUR		(*((volatile unsigned*)(0xE0024028)))
#define RTCDOM		(*((volatile unsigned*)(0xE002402C)))
#define RTCDOW		(*((volatile unsigned*)(0xE0024030)))
#define RTCDOY		(*((volatile unsigned*)(0xE0024034)))
#define RTCMONTH	(*((volatile unsigned*)(0xE0024038)))
#define RTCYEAR		(*((volatile unsigned*)(0xE002403C)))
#define RTCALSEC	(*((volatile unsigned*)(0xE0024060)))
#define RTCALMIN	(*((volatile unsigned*)(0xE0024064)))
#define RTCALHOUR	(*((volatile unsigned*)(0xE0024068)))
#define RTCALDOM	(*((volatile unsigned*)(0xE002406C)))
#define RTCALDOW	(*((volatile unsigned*)(0xE0024070)))
#define RTCALDOY	(*((volatile unsigned*)(0xE0024074)))
#define RTCALMON	(*((volatile unsigned*)(0xE0024078)))
#define RTCALYEAR	(*((volatile unsigned*)(0xE002407C)))
#define RTCPREINT	(*((volatile unsigned*)(0xE0024080)))
#define RTCPREFRAC	(*((volatile unsigned*)(0xE0024084)))
/*Watchdog Timer*/
#define WDMOD		(*((volatile unsigned*)(0xE0000000)))
#define WDTC		(*((volatile unsigned*)(0xE0000004)))
#define WDFEED		(*((volatile unsigned*)(0xE0000008)))
#define WDTV		(*((volatile unsigned*)(0xE000000C)))
