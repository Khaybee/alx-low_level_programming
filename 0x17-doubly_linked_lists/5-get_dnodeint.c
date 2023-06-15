#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index -  function returns the nth node of a linked list
 * @head: pointer to head node
 * @index: index of the node starting from 0
 *
 * Return: the index or NULL is it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterate = 0;
	dlistint_t *now = head;

	while (now != NULL && iterate < index)
	{
		now = now->next;
		iterate++;
	}

	return (now);
}
