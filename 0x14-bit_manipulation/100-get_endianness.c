#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *) &x;

	if (*ptr == 1)
	{
	/* The least significant byte is stored first (little endian) */

	return (1);
	}
	else
	{
	/* The most significant byte is stored first (big endian) */

	return (0);
	}
}
