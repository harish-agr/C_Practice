/*****************************************************************************
*	Description	:	Usage of function pointers
*	Author		:	Jagadeesh Pagadala
*	Date		:	08-07-2016
*
*****************************************************************************/

#include <stdio.h>

int f(int a, int b)
{
	return a + b;
}

int *f1(int* a)
{
	return a;
}
int main()
{
	int (*fp)(int, int);
	int *(*fp1)(int*);

	fp = f;
	fp1 = f1;
	
	printf("\n fp=%p \n", fp);	
	printf("\n fp1=%p \n", fp1);	
	
	printf("\n 4+8 = %d\n", fp(4, 8));

	return 0;
}
