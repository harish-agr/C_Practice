/*
* Simple program to find offset of a member in structure.
* Author: jagadeesh Pagadala
* Date: 5-4-2016
*
* NOTE: Use gcc <a.c> -fpack-struct=2 to see the difference in size
*/

#include <stdio.h>

#define offsetof(s_type, mem) \
	((size_t)&((s_type*)0)->mem)

int main()
{
	struct a {
		int x;
		int y;
		char z;
		int w;
	};

	struct a *test;

	printf("\n offset of First variable is %d\n", offsetof(struct a, x));
	printf("\n offset of second variable is %d\n", offsetof(struct a, y));
	printf("\n offset of third variable is %d\n", offsetof(struct a, z));
	printf("\n offset of fourth variable is %d\n", offsetof(struct a, w));
	printf("\n offset of First variable is %d \n", ((char*)(&test->z)-(char*)(test)));
	printf("\n size of strcut %d \n", sizeof(struct a));

	return 0;
}
