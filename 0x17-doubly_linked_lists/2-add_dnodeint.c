#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - It adds a node to the head of the linked list
 * @head: Head of the linked list
 * @n: The int element of the linked list
 * Return: Pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}
