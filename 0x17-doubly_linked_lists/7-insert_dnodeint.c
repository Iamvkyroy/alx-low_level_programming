#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - It inserts node at a specific index
 * @h: The head of the linked list
 * @idx: The index of a new node
 * @n: The value of the new node
 * Return: The inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return NULL;

	dlistint_t *current = *h;

	/* Special case: insert at the beginning (idx == 0) */
	if (idx == 0)
	{
		dlistint_t *new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return NULL;

		new->n = n;
		new->prev = NULL;
		new->next = current;

		if (current != NULL)
			current->prev = new;

		*h = new; // Update the head pointer to the new node

		return new;
	}

	/* Find the node at the specified index */
	while (idx > 1)
	{
		if (current == NULL)
			return NULL; /* Out of range */

		current = current->next;
		idx--;
	}

	if (current == NULL)
		return NULL; /* Out of range */

	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;

	new->n = n;
	new->prev = current;
	new->next = current->next;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return new;
}
