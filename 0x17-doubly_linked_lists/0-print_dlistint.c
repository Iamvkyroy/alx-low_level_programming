#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - It prints the elements of doubly linked list
 * @h: The linked list
 *
 * Return: The num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nbr_nodes = 0;
const dlistint_t *current = h;

while (current != NULL)
{
printf("%i\n", current->n);
current = current->next;
nbr_nodes++;
}

return (nbr_nodes);
}
