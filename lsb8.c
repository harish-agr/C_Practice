
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
	uint32_t ip = 0X1234;
	uint8_t key = 0;

	key = ip % (UINT8_MAX + 1);
	printf("\n  IP:%x key:%x \n", ip, key);
	printf("\n  IP:%x key:%"PRIu8"\n", ip, key);


    ip = 0X3456;
    key = 0;
	key = (uint8_t) ip;
	printf("\n  IP:%x key:%x \n", ip, key);
	printf("\n  IP:%x key:%"PRIu8"\n", ip, key);

	return 0;
}
