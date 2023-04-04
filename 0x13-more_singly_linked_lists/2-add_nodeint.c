#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: pointer to the first node in the linked list
 * @n: to store in new node
 *
 * Return: address of the new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*creat a new node*/

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
