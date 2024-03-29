#include "main.h"
#include <stdio.h>

/**
 * clear_bit - bit value set to 0 at a given index
 * @n: the pointer of the  decimal no changes
 * @index: index changes
 * Return: 1 if success, -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int y;

	if (index > 64)
		return (-1);
	y = index;
	for (x = 1; y > 0; x *= 2, y--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
