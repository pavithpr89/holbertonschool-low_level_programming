#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 *        separated by ", ", in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + 48);
putchar(j + 48);
if (i != 8 || j != 9)
{
putchar(44);  /* ASCII for ',' */
putchar(32);  /* ASCII for space ' ' */
}
}
}

putchar(10);  /* ASCII for newline '\n' */

return (0);
}
