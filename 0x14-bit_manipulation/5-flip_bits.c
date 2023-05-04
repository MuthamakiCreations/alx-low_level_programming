#include "main.h"
#include <stdio.h>

/**
 * flip_bits - converts one no to another
 * @n: this is the first no
 * @m: this is the second no to be converted
 * Return: flipbits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long inti x;
	int y;

	x = n ^ m;
	y = 0;

	while (x)
	{
		y++;
		x &= (x - 1);
	}

	return (y);
}
