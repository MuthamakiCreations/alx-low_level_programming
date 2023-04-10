#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @int1: decimal number passed by pointer
 * @int2: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *int1, unsigned int int2)
{
	unsigned long int int3;

	if (int2 > 64)
		return (-1);

	for (int3 = 1; int2 > 0; int2--, int3 *= 2)
		;
	*int1 += int3;

	return (1);
}

