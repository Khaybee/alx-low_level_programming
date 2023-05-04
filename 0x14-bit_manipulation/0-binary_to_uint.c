#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string
 *
 * Return: unsigned int or 0 if b is NULL.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int org_num;
	int lent;
	int bin;

	if (b == 0)
	{
		return (0);
	}

	org_num = 0;

	for (lent = 0; b[lent] != '\0'; lent++)
		;

	for (lent--, bin = 1; lent >= 0; lent--, bin *= 2)
	{
		if (b[lent] != '0' && b[lent] != '1')
		{
			return (0);
		}

		if (b[lent] & 1)
		{
			org_num += bin;
		}
	}

	return (org_num);
}
