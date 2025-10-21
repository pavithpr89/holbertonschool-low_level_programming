#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print '_'
 *
 * Description: prints a line of '_' characters followed by a newline.
 * If n is 0 or less, only prints a newline.
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
_putchar('_');

_putchar('\n');
}
