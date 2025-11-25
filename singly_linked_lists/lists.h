#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <unistd.h>

/**
 * struct list_s - singly linked list
 * @str: string - malloc'd
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
void free_list(list_t *head);
int _putchar(char c);

#endif
