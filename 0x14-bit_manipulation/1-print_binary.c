#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int int1)
{
	unsigned long int int2;
	int int3;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (int2 = n, int3 = 0; (int2 >>= 1) > 0; int3++)
		;

	for (; int3 >= 0; int3--)
	{
		if ((n >> int3) & 1)
			printf("1");
		else
			printf("0");
	}
}

