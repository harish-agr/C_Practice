/*
* A simple program to convert Little Endian to Bigendian.
* Author: Jagadeesh Pagadala
* Date: 6-4-2016
*/

#include <stdio.h>
#include <arpa/inet.h>

int le_to_be(int a)
{
	int tmp = 0;
	tmp = (a>>24 & 0X000000FF) | (a>>8 & 0X0000FF00) | (a<<24 & 0XFF000000) | (a<<8 & 0X00FF0000);
	return;
}

int main()
{
//	int a = 0X0A0B0C0D;
	int a = 0XABCDEF98;
	int b = 0;
	int c = 0;
	b = le_to_be(a); 
	c = ntohl(b); /* Just to verify my conversion is correct or not.*/
	printf("\n %x \n %x \n %x \n", a, b, c);
	return 0;
}
