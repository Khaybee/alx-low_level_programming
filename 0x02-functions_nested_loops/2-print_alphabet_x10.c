#include "main.h"

/**
 * main - A function that prints 10x the alphabet
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int num = 0;

	while (num <= 9)
	{
	 for (c = 'a'; c <= 'z'; c++)
	 {
		_putchar(c);
	 }
	 _putchar('\n');
	 num++;
	}
}
