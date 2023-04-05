#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: points to the node
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *delete;
	int result;

	if (*head == NULL)
	{
		return (0);
	}

		result = (*head)->n;
		delete = (*head)->next;
		free(*head);
		*head = delete;

	return (result);
}
