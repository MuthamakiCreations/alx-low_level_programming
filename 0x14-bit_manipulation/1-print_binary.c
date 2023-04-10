#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int int1
	int int2;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (int1 = n, int2 = 0; (int1 >>= 1) > 0; int2++)
		;

	for (; int2 >= 0; int2--)
	{
		if ((n >> int2) & 1)
			printf("1");
		else
			printf("0");
	}
}

