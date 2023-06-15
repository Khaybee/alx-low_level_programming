#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a list
 * @head: pointer to a head node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *now = head;
	dlistint_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
