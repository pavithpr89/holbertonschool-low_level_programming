#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: size of the triangle
 *
 * Description: prints a triangle of '#' characters followed by a newline.
 * If size is 0 or less, prints only a newline.
 */
void print_triangle(int size)
{
int row, space, hash;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
/* print leading spaces */
for (space = size - row; space > 0; space--)
_putchar(' ');

/* print '#' characters */
for (hash = 0; hash < row; hash++)
_putchar('#');

/* newline at end of row */
_putchar('\n');
}
}
