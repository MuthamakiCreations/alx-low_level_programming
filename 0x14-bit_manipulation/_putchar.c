#include <unistd.h>

/**
 * _putchar - print char c to stdout
 * @c: print this char
 *
 * Return: 1. to be returned On success
 * On error, return -1, and appropriately set errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
