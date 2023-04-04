#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @n: to store the new node
 * @head: the first node in the linked list
 *
 * Return: the address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *now = *head;

	lastNode = malloc(sizeof(listint_t));

	if (lastNode == NULL)
	{
		return (NULL);
	}

	lastNode->n = n;
	lastNode->next = NULL;

	/* If head is NULL, it is an empty list */

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}

	while (now->next)
		now = now->next;

	now->next = lastNode;

	return (lastNode);
}
