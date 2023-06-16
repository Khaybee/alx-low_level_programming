#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer to node
 * @idx: index of new node
 * @n: node
 *
 * Return: the address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added;
	dlistint_t *now;
	unsigned int iterate;

	if (h == NULL)
	return (NULL);
	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	added->prev = NULL;
	added->next = NULL;
	if (idx == 0)
	{
		added->next = *h;
		if (*h != NULL)
			(*h)->prev = added;
		return (*h = added);
	}
	now = *h;
	for (iterate = 0; iterate < idx - 1; iterate++)
	{
		if (now == NULL)
		{
			free(added);
			return (NULL);
		}
		now = now->next;
	}
	if (now == NULL)
	{
		free(added);
		return (NULL);
	}
	added->prev = now;
	added->next = now->next;
	if (now->next != NULL)
		now->next->prev = added;
	now->next = added;
	return (added);
}
