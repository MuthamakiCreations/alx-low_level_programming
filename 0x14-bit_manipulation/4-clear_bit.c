#include "main.h"
#include <stdio.h>

/**
 * unset_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int unset_bit(unsigned long int *p, unsigned int index)
{
	unsigned long int n;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (n = 1; hold > 0; n *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*p -= n;

	return (1);
}

