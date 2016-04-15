/*****************************************************************************
*	Description	:	pointer operations	
*	Author		:	Jagadeesh Pagadala
*	Date		:	15-04-2016
*
*****************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	int *p = &a;
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	int *pa = (int*)&array;
	
	*pa++;
	*++pa;
	++*pa;

	return 0;
}
