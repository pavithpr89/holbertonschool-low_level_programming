#include "main.h"

/**
 * print_square - prints a square using the character #
 * @size: size of the square
 *
 * Description: prints a square of '#' characters followed by a newline.
 * If size is 0 or less, prints only a newline.
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');

_putchar('\n');
}
}
