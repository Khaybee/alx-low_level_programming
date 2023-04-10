#include  <stdio.h>
#include "main.h"

/**
 * clear_bit - sets  the value of a bit tozero at a given index
 * @n: a pointer to the bit to be set
 * @index: the index to be set
 * Return: 1 if it works, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{

		return (-1);
	}
	else
		(*n &= ~(1UL << index));
	{
		return (1);
	}
}
