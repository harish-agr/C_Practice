/*
* Author: Jagadeesh Pagadala
* Description: size of an variable without using sizeof operator
*
*/
#include <stdio.h>
/*****************************************************************************
*	((&x+1)-(&x)) gives 1 always since it gives no of units between. 
*
******************************************************************************/
#define size_of(x) ((char*)(&x+1) -(char*)(&x))

int main()
{
    int int_a;
    long long_a;
    char char_a;

    printf("sizeof a int_a: %d \n", size_of(int_a));
    printf("sizeof a long_a: %d \n", size_of(long_a));
    printf("sizeof a char_a: %d \n", size_of(char_a));

    return 0;
}
