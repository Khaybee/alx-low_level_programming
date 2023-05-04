#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the given bit.
 * @index: the index of the bit.
 *
 * Return: value of the bitat index or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
