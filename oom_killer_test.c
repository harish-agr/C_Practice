/*
*
* What will happen when we run this program,,,,
* this program starts eating up the VM not Physical mem..... 
* As result of this other processes can't run and after some time,
* OOM killer will kill this process based on rank value.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("Hi");
	while(1)
	{
		malloc(10);
	}
	return 0;
}
