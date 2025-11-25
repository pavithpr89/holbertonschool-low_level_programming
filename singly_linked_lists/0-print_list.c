#include "lists.h"

/**
 * print_string - prints a string using _putchar
 * @s: string to print
 */
void print_string(const char *s)
{
int i = 0;

while (s[i])
{
_putchar(s[i]);
i++;
}
}

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(unsigned int n)
{
if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
_putchar('[');

if (h->str == NULL)
{
_putchar('0');
_putchar(']');
_putchar(' ');
print_string("(nil)");
}
else
{
print_number(h->len);
_putchar(']');
_putchar(' ');
print_string(h->str);
}

_putchar('\n');

count++;
h = h->next;
}

return (count);
}
