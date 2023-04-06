#include "main.h"
#include <stdio.h>

/**
 * flip_bits -returns the number of bits you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int int_c;
	int int_d;

	int_c = n ^ m;
	int_d = 0;

	while (int_c)
	{
		int_d++;
		int_c &= (int_d - 1);
	}

	return (int_d);
}

