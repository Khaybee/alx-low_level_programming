#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to  bit
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bin;

	if (index > 63)
	{
		return (-1);
	}

	bin = 1 << index;

	if (*n & bin)
		*n ^= bin;

	return (1);
}
