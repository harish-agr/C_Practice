/*****************************************************************************
*	Description	:	container_of implementation	
*	Author		:	Jagadeesh Pagadala
*	Date		:	15-04-2016
*
*****************************************************************************/

#include <stdio.h>

#define offset_of(T,mem) \
	({(size_t) &(((T*)0)->mem);	\
	})

#define container_of(T, mem, address) \
	({T *tmp;			\
	address - offset_of(T,mem);})

int main()
{
	struct test{
		int a;
		float b;
		char c;
	}t;
	int a;
	printf("\n container_of(a)= %x\n", container_of(struct test, c, &t.c ));
	return 0;
}
