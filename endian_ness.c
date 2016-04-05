/* 
	A simple program to find endian-ness of a Machine.
	Tested on X86_64(LE), MPIS(BE)
	Author: Jagadeesh Pagadala
	Date: 05-04-2016
*/
	
#include <stdio.h>
#include <stddef.h>

int main()
{
	int x = 0X0A0B0C0D;
	char *a = (char*)&x; 

	if(*a == 0XD ) {
		printf("\nLittle Endian\n");
	}else if (*a == 0XA) {
		printf("\nBig Endian\n");
	}

	return 0;
}
