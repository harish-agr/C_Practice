/*
* A simple program to convert Little Endian to Bigendian.
* Author: Jagadeesh Pagadala
* Date: 6-4-2016
*/

#include <stdio.h>
#include <arpa/inet.h>
#include <stdint.h>

int le_to_be(int a)
{
	int tmp = 0;
	tmp = (a>>24 & 0X000000FF) | (a>>8 & 0X0000FF00) | (a<<24 & 0XFF000000) | (a<<8 & 0X00FF0000);
	tmp = (a>>8 ) | (a<<8); 
	return;
}

int main()
{
	uint16_t a = 0XABCD;
	uint16_t b = 0;
	uint16_t c = 0;
	b = le_to_be(a); 
	c = ntohs(b); /* Just to verify my conversion is correct or not.*/
	printf("\n %x \n %x \n %x \n", a, b, c);
	return 0;
}
