#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - It returns the nth node of listint_t linked list.
 * @head: The head of the linked list
 * @index: The node index to return
 * Return: The node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}
