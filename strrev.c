/**********************************************************************
*	Description:	String reversal
*	Author: Jagadeesh Pagadala	
*	Date: 08-04-2016
*
**********************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRING "I LOVE LILNUX"
int str_len(char *str)
{
	int len=0;

	while(*str++ != '\0') {
	len++;
	}

	return len;
}


char *str_ncpy(char *dst,  char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++) {
		dst[i] = src[i];
	}
	for (; i < n; i++)
		dst[i] = '\0';
	return dst;
}

char *str_rev(char* str)
{
	int len; 
	char tmp;
	int i;

	len = strlen(str);
	for (i=0; i<len/2; i++) {
		tmp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = tmp;
	}
	printf("\n len: %d\n",len);
	return str;
}

void free_mem(void *ptr)
{
	if(free_mem)
		free(ptr);
}

int main()
{
	char *string = "Jagadeesh";
	char string1[] = "Jagadeesh";
	char *malloc_string = NULL;
	
	malloc_string = malloc(str_len(STRING)+1);
	str_ncpy(malloc_string, STRING, str_len(STRING)+1);
	/* Below string can't be processed as string is stored in code segment*/
	/*printf("\n reverse of (%s) is %s \n", string, str_rev(string));*/ 
	printf("\n reverse of (%s) is ", string1);
	printf(" : %s \n", str_rev(string1));
	printf("\n reverse of (%s) is ", malloc_string);
	printf(" : %s \n", str_rev(malloc_string));

	free_mem(malloc_string);	
	return 0;
}
