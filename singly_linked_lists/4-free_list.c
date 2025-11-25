#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;   /* store next node */
free(head->str);    /* free duplicated string */
free(head);         /* free current node */
head = tmp;         /* move to next node */
}
}
