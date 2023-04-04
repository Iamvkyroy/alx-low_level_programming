#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node on the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node
 * or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *vky;

vky = malloc(sizeof(listint_t));
if (vky == NULL)
return (NULL);

vky->n = n;
vky->next = *head;
*head = vky;

return (vky);
}
