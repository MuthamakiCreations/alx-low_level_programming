#include "main.h"

/**
 * get_endianness - look for endianness
 * Return: return a 0 if there's big endian and 1 if small endian
 */

int get_endianness(void)
{
	int x;

	x = 1;
	if (*(char *)&x == 1)
		return (1);
	else
		return (0);
}
