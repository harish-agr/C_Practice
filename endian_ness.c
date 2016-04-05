#include <stdio.h>
#include <stddef.h>

int main()
{
	int x = 0XABCD;
	char *a = (char*)&x; 

	if(a[0] == 0XD + '0') {
		printf("\nLittle Endian\n");
	}else if (*a == 0XA) {
		printf("\nBig Endian\n");
	}

	return 0;
}
