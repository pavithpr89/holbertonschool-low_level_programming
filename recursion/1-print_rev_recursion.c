#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Description: This function uses recursion to print
 * a string in reverse order, one character at a time.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}
