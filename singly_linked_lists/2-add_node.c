#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head || !str)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

/* Duplicate the string */
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

/* Store the string length */
new_node->len = strlen(str);

/* Insert at the beginning */
new_node->next = *head;
*head = new_node;

return (new_node);
}
