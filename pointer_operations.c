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
	int array[10] = {0,1,2,3,4,5,6,7,8,9}; /*print &arrary is (int (*)[10]) 0x7fffffffdd00 */
	int *pa = (int*)&array; /*0x7fffffffdd00*/
	int value1 = 0, value2 = 0, value3 = 0;
	
	printf("\n pa= %p &array= %p \n", pa, &array);
	value1 = *pa++;/* pa will be derefenced and then pa is incramented pa will become 0x7fffffffdd04*/
	printf("\n pa= %p  value1 = %d\n", pa, value1);
	value2 = *++pa;/* pa is increamented first 0x7fffffffdd08, and then pa will be dereferenced*/
	printf("\n pa= %p  value2 = %d\n", pa, value2);
	value3 = ++*pa;/* pa will be dereferenced, value is increamented and stored in same location.... pa will remains 0x7fffffffdd08*/
	printf("\n pa= %p  value3 = %d\n", pa, value3);
#if 0
	/*
	(gdb) s
	18		value = *pa++;/* pa will be derefenced and then pa is incramented pa will become 0x7fffffffdd04*/
	(gdb) p value
	$3 = 0
	(gdb) s
	19		value = *++pa;/* pa is increamented first 0x7fffffffdd08, and then pa will be dereferenced*/
	(gdb) p value 
	$4 = 0
	(gdb) p *pa 
	$5 = 1
	(gdb) p pa 
	$6 = (int *) 0x7fffffffdd04
	(gdb) s
	20		value = ++*pa;/* pa will be dereferenced and increamented*/
	(gdb) p pa 
	$7 = (int *) 0x7fffffffdd08
	(gdb) p &pa 
	$8 = (int **) 0x7fffffffdd30
	(gdb) p *pa 
	$9 = 2
	(gdb) s
	22		return 0;
	(gdb) p value 
	$10 = 3
	(gdb) p pa
	$11 = (int *) 0x7fffffffdd08
	(gdb) p *pa 
	$12 = 3
	(gdb) p array
	$13 = {0, 1, 3, 3, 4, 5, 6, 7, 8, 9}
	(gdb) p &array
	$14 = (int (*)[10]) 0x7fffffffdd00
	(gdb) 

	*/
#endif
	/********************************************************************
	**************************pointer arithmetics************************/
	int Array[100] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr1 = &Array[0]; 
	int *ptr2 = &Array[2];
	int units = 0;

	units = ptr2  - ptr1; /* 2 no of int elements*/
	printf("\n ptr2%p -  ptr1%p = %d\n", ptr2, ptr1, units);

	units = ptr1  - ptr2; /* -2 */ 
	printf("\n ptr1%p -  ptr2%p = %d\n", ptr1, ptr2, units);

	ptr2 = ptr1 + 1; /* add 1*(sizeofptr1)*/
	printf("\n ptr2 = %p ptr1 = %p \n", ptr2, ptr1);
#if 0
	NOTE: same type of pointers can participate in substraction.
	difference always gives the no of units not no of bytes.	
#endif 

	return 0;
}
