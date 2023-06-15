#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a node at the beiginning of a list
 * @head: a pointer to the head of a list
 * @n: new node
 *
 * Return: address of new element or NULL if fail.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));

	if (added == NULL)
	{
		return (NULL);
	}

	added->n = n;
	added->prev = NULL;
	added->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = added;
	}

		*head = added;

	return (added);
}
