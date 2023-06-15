#include <stdio.h>
#include <stddef.h>
#include "lists.h"

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
