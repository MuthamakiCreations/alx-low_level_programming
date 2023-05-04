#include "main.h"

/**
 * set_bit - set bit value to 1 for a given index
 * @n: the decimal number from the pointer
 * @index: index positions, counting from 0
 * Return: 1 if success, -1 if theres an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
