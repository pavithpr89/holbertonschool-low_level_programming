#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits
 *        separated by ", ", followed by a new line
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
putchar(i + 48);                                 /* first digit */
putchar(j + 48 + ((i != 8 || j != 9) ? 0 : 0));  /* second digit */
putchar((i != 8 || j != 9) ? 44 : 10);           /* ',' or newline */
putchar((i != 8 || j != 9) ? 32 : 0);            /* space or nothing */
}
}

return (0);
}
