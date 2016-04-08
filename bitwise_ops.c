/*****************************************************************************
*	Description	:	Bitwise Ops
*	Author		:	Jagadeesh Pagadala
*	Date		:	08-04-2016
*
*****************************************************************************/

/*
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

#include <stdio.h>
#include <inttypes.h>

int main()
{
	uint16_t a = -0XA;
	a = a << 1;
	a = a >> 1;
	return 0;
}
