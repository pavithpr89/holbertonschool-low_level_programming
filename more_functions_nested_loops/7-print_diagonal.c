#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print '\'
 *
 * Description: prints a diagonal line of '\' characters followed by a newline.
 * If n is 0 or less, only prints a newline.
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');  /* spaces before backslash */

_putchar('\\');     /* backslash for diagonal */
_putchar('\n');
}
}
