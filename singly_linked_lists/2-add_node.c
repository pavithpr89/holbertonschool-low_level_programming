#include "lists.h"

/**
 * _strdup_no_strlen - duplicates a string without using strlen
 * @str: string to duplicate
 * Return: pointer to new string or NULL
 */
char *_strdup_no_strlen(const char *str)
{
char *dup;
int len = 0, i;

if (!str)
return (NULL);

while (str[len])
len++;

dup = malloc(len + 1);
if (!dup)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';

return (dup);
}

/**
 * add_node - adds a new node at the beginning of list
 * @head: pointer to head pointer
 * @str: string to store in node
 * Return: address of new node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = _strdup_no_strlen(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->next = *head;
*head = new_node;

return (new_node);
}
