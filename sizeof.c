/*
* Author: Jagadeesh Pagadala
* Description: size of an variable without using sizeof operator
* NOTE: sizeof is an operator,,,, not a macro or not a function. It is
* implemented in gcc. And sizeof is run time.
*
*/
#include <stdio.h>
/*****************************************************************************
*	((&x+1)-(&x)) gives 1 always since it gives no of units between. 
*
******************************************************************************/
/*when an element is passed */
#define size_of(x) ((size_t)(&x+1) -(size_t)(&x))
/*
or 
#define size_of(x) ((char*)(&x+1) -(char*)(&x))
*/

/*when a data type is passed*/
#define sizeof(x) ((size_t)&((x*)0)[1])

/*TODO: Find a generic way such that it works for both cases*/
int main()
{
    int int_a;
    long long_a;
    char char_a;
    struct a {
	int x;
	char y;
	float w;
    }test;


    printf("sizeof a int_a: %d \n", size_of(int_a));
    printf("sizeof a long_a: %d \n", size_of(long_a));
    printf("sizeof a char_a: %d \n", size_of(char_a));
    printf("sizeof a struct a: %d \n", sizeof(struct a));

    return 0;
}
