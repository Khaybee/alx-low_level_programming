#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: pointer to the list_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t poi = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		poi++;
	}
	return (poi);
}
