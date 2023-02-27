#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @str: the string which length is to be returned
 * Return: length of string
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
	len++;
	return (len);
}
