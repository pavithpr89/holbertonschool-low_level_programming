#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index `index` of
 *                            a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp, *current;
unsigned int i;

if (!head || !*head)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (*head)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; current && i < index; i++)
current = current->next;

if (!current)
return (-1);

tmp = current->prev;
tmp->next = current->next;

if (current->next)
current->next->prev = tmp;

free(current);
return (1);
}
