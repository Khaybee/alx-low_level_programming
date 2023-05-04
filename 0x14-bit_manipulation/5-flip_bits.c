#include "main.h"

/**
 * flip_bits - function returns the num of bits you would need to flip numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor_num = n ^ m;

	while (xor_num != 0)
	{
		counter++;
		xor_num &= (xor_num - 1);
	}
	return (counter);
}
