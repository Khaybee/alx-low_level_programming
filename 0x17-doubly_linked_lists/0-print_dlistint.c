#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a linked list.
 * @h: a pointer to a node
 *
 * Return: the number nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t iterate = 0;
	const dlistint_t *now = h;

	while (now != NULL)
	{
		printf("%d\n", now->n);
		iterate++;
		now = now->next;
	}

	return (iterate);
}
