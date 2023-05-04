#include "main.h"
#include <stdio.h>
/**
 * get_bit - featch the value of the bit at a given index
 * @n: the no to be evaluated
 * @index: index of the bit counting from 0
 * Return: The Value of a bit at a given  index and -1 for an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = n >> index;

	return (x & 1);
}
