#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int rep = 1UL  << (sizeof(unsigned long int) * 8 - 1);
	int count = 0;

	while (rep != 0)
	{
		if ((n & rep) != 0)
		{
			_putchar('1');
			count = 1;
		}
		else if (count == 1)
		{
			_putchar('0');
		}
	rep >>= 1;
	}

	if (!count)
	{
		putchar('0');
	}
}
