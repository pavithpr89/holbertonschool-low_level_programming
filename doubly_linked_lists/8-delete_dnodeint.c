#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (!head || !*head)
return (-1);

current = *head;

/* If we want to delete the head */
if (index == 0)
{
*head = current->next;
if (*head)
(*head)->prev = NULL;
free(current);
return (1);
}

/* Traverse to the node at index */
for (i = 0; current && i < index; i++)
current = current->next;

if (!current) /* index is out of range */
return (-1);

/* Re-link the previous and next nodes */
if (current->prev)
current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;

free(current);
return (1);
}
