#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * on error, -1, and errno is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
