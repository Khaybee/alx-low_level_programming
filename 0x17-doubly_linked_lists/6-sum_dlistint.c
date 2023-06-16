#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a linked list
 * @head: pointer to the head node
 *
 * Return: 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *now = head;

	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}

	return (sum);
}
