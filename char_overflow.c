/*****************************************************************************
* Description	: signed and unsigned char 
* Author	: Jagadeesh Pagadala
* Date		: 10-04-2016	
*
******************************************************************************/


#include <stdio.h>

int main()
{
//	char i = 0; /***** Case 1 *****/
	unsigned char i = 0; /***** Case 2 *****/

	for(i=0;i<255;i++)
		printf("\n char %c int %d\n", i , i);
/*
	First Case  char i;
	char ^@ int 0
	char ^A int 1
	char ^B int 2
	char ^C int 3
	char ^D int 4
	char ^E int 5
	char ^F int 6
	char ^G int 7
	char ^H int 8
	char    int 9   Keeps on going like 127 ---> -128 -127 -126 ---> 0 --> 127 
	Since the condition never fails... enters into an infinite loop.
*/

/*
	Second case unsigned char i;
	Loop starts at 0 and ends at 255. no infinte loop.
*/

	return 0;
}
