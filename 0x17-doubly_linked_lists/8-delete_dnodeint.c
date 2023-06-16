#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a linked list.
 * @head: pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *now;

	if (head == NULL || *head == NULL)
		return (-1);

	now = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(now);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (now == NULL)
			return (-1);
		now = now->next;
	}
	if (now == NULL)
		return (-1);

	if (now->prev != NULL)
		now->prev->next = now->next;

	if (now->next != NULL)
		now->next->prev = now->prev;

	free(now);
	return (1);
}
