/*************************************************************************
*	Description	:	swapping without using 3rd variable
*	Author		:	Jagadeesh Pagadala
*	Date		:	08-04-2016		
*************************************************************************/

/*************************************************************************
	Note: this swapping can be applied to signed or unsigned numbers.
**************************************************************************/
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 6;

	printf("\n Befor swap a=%d b=%d \n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("\n After swap a=%d b=%d \n", a, b);

	printf("\n Befor swap a=%d b=%d \n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n After swap a=%d b=%d \n", a, b);

	/********************************************************/
	int c = -5;
	int d = 6;
	/***** (OR) int c= 5 ; signed int d=6 ****/

	printf("\n Befor swap c=%d d=%d \n", c, d);
	c = c ^ d;
	d = c ^ d;
	c = d ^ d;
	printf("\n After swap c=%d d=%d \n", c, d);

	/********************************************************/
	unsigned int e = 5;
	int f = -6;

	printf("\n Befor swap e=%d f=%d \n", e, f);
	e = e ^ f;
	f = e ^ f;
	e = e ^ f;
	printf("\n After swap e=%d f=%d \n", e, f);

	return 0;
}
