#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
