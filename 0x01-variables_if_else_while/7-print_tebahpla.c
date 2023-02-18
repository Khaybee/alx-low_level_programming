#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
