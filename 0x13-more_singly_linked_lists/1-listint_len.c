#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in linked list
 * @h: pointer to linked list
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
