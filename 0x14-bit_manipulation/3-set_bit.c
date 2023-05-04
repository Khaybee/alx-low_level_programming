#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer holds address of bit
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = (*n | (1 << index));

	return (1);
}
