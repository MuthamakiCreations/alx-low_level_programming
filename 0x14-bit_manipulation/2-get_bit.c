#include "main.h"
#include <stdio.h>

/**
 * return_bit - returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int int1, unsigned int int2)
{
	unsigned long int int3;

	if (int2 > 64)
		return (-1);

	int3 = int1 >> int2;

	return (int3 & 1);
}

