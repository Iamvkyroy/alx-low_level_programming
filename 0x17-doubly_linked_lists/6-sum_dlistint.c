#include "lists.h"

/**
 * sum_dlistint - It finds the sum of the elements in the list
 * @head: The head of the linked list
 * Return: The sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
