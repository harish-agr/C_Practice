/*****************************************************************************
* 	Description: Finding string length (excluding '\0' char)
*	Author: Jagadeesh Pagadala
*	Date: 08-04-2016
*
******************************************************************************/

#include <stdio.h>
#include "strlen.h"

int str_len(char *str)
{
	int len=0;

	while(*str++ != '\0') {
		len++;
	}
	return len;
}

int main()
{
	int len = 0;
	char *my_name_is = "My Name is Jagadeesh"; /* This will be stored in 
					Code segment of the program
					Address is 0x400694 */
	char MY_NAME[] = "My Name is Siva"; /* This will be stored in Data Segment 
					Address is 0x7fffffffdd20 */
	
 	printf("\n strlen(%s) is: %d\n", my_name_is, str_len(my_name_is));	
 	printf("\n strlen(%s) is: %d\n", MY_NAME, str_len(MY_NAME));	


	return 0;
}
