#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of list
 * @head: pointer to a head node
 * @n: new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));

	if (added == NULL)
	{
		return (NULL);
	}

	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		added->prev = NULL;
		*head = added;
	}
	else
	{
		dlistint_t *now = *head;

		while (now->next != NULL)
		{
			now = now->next;
		}

		now->next = added;
		added->prev = now;
	}

	return (added);
}
