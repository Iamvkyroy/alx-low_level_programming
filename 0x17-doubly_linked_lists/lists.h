#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>

/**
 * struct dlistint_s - The doubly linked list
 * @n: The integer
 * @prev: The points to the previous node
 * @next: The points to the next node
 *
 * Description: The doubly linked list node structure
 * for the Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
void free_dlistint(dlistint_t *head);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
