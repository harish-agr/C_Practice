/*****************************************************************************
*	Description	:	usage of typeof	
*	Author		:	Jagadeesh Pagadala
*	Date		:	15-04-2016
*
*****************************************************************************/

#include <stdio.h>

int main()
{
	typedef struct {
		int a;
		int b;
	}tmp;
	int x = 10;
	typeof(x) z;
	typeof(tmp) t1 = {10,50};
	tmp t2; 

	z = 6;

	printf("\n  sizeof(z):%d   \n", z);

	return 0;
}
