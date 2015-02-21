/*
* Author: Jagadeesh Pagadala
* Description: size of an variable without using sizeof operator
*
*/
#include <stdio.h>

int main()
{
    int a;
    printf(" &a %p &a+1 %p \n", &a, (&a+1));
    printf("sizeof a %d \n", sizeof(a));
    printf("size of a %d \n", ((&a+1)-&a));

    return 0;
}
