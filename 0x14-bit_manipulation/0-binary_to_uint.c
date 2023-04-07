#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string to be converted
 * Return: the converted number, or 0 if b != 0 or 1 or b = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int cont = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; b++)
	{
		if (b[i] == '0')
		{
			cont <<= 1;
		}
		else if (b[i] == '1')
		{
			cont <<= 1;	/* Multiply by 2 (shift left) */
			cont |= 1;	/* Set the least significant bit to 1 */
		}
		else
		{
			return (0);
		}
	}

	return (cont);
}
