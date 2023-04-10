#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  no of bits to flip to get from one number to another
 * @int1: first number
 * @int2: second number to convert to
 * Return: number of bits that is needed to flip
 */

unsigned int flip_bits(unsigned long int int1, unsigned long int int2)
{
	unsigned long int diff;
	int counter;

	diff = int1 ^ int2;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

