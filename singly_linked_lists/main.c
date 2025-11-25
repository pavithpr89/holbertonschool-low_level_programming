#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str);

int main(void)
{
	list_t *head = NULL;

	add_node(&head, "Holberton");
	add_node(&head, "School");
	add_node(&head, NULL);

	print_list(head);

	return (0);
}
