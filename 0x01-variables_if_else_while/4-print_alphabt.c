#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if ((alp != 'e') && (alp != 'q'))
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
