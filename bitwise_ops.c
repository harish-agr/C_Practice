/*****************************************************************************
*	Description	:	Bitwise Ops
*	Author		:	Jagadeesh Pagadala
*	Date		:	08-04-2016
*
*****************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main()
{
	uint16_t a = -0XA;
	a = a << 1;
	a = a >> 1;
	/*****************
	****************** Bit shift operators on signed num summary *************

	Breakpoint 1, main () at bitwise_ops.c:13
	13		uint16_t a = -0XA;	
	(gdb) s
	14		a = a << 1;	
	(gdb) p a 
	$1 = 65526
	(gdb) p /t a 
	$2 = 1111111111110110
	(gdb) s
	15		a = a >> 1;
	(gdb) p a 
	$3 = 65516		-------> -20
	(gdb) p /t a
	$4 = 1111111111101100	-------> LSB filled with 0 
	(gdb) s
	16		return 0;
	(gdb) p a 
	$5 = 32758		-------> -10
	(gdb) p /t a
	$6 = 111111111110110	-------> MSB filled with sign bit(1)
	(gdb) s
	17	}
	(gdb) 
	*/


	int16_t b = 0XA;
	b = b << 1;
	b = b >> 1;
	/* Bit shift operations on unsigned num...
	LSB and MSB are filled with 0 in Left shitf and Right shift

	Breakpoint 2, main () at bitwise_ops.c:44
	44		int16_t b = 0XA;
	(gdb) p b
	$1 = 0
	(gdb) s
	45		b = b << 1;
	(gdb) p b
	$2 = 10
	(gdb) p /t b 
	$3 = 1010
	(gdb) s
	46		b = b >> 1;
	(gdb) p b 
	$4 = 20
	(gdb) p /t b 
	$5 = 10100
	(gdb) s
	47		return 0;
	(gdb) p b 
	$6 = 10
	(gdb) p /t b 
	$7 = 1010
	(gdb) s
	48	}
	(gdb) 
	*/

	return 0;
}
