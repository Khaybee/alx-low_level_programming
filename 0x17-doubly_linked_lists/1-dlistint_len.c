#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: a pointer to the node.
 *
 * Return: Returns the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t iterate = 0;
	const dlistint_t *now = h;

	while (now != NULL)
	{
		iterate++;
		now = now->next;
	}

	return (iterate);
}
