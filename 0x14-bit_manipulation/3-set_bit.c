#include "main.h"

/**
 * sets_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */

int sets_bit(unsigned long int *p, unsigned int int2)
{
	unsigned long int int3;

	if (index > 64)
		return (-1);

	for (int3 = 1; int2 > 0; int2--, int3 *= 2)
		;
	*p += int3;

	return (1);
}

