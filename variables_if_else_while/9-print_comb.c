#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *        separated by ", ", in ascending order, followed by a new line
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
putchar(44), putchar(32); /* ',' and ' ' */
}
}

putchar(10); /* newline */

return (0);
}
