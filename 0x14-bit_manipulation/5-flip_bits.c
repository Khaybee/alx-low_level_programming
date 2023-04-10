#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits neede to flip
 * @n: first number
 * @m: second number to get to
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int how_many = 0;
	unsigned long int a = n ^ m;

	while (a != 0)
	{
		if (a & 1)
		{
			how_many++;
		}
		a >>= 1;
	}
	return (how_many);
}

