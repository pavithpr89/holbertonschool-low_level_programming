#include <stdio.h>

/**
 * main - Prints all combinations of two single-digit numbers
 *        separated by ", ", followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

i = 0;
while (i <= 8)
{
j = i + 1;
while (j <= 9)
{
putchar(i + 48);  /* first digit */
putchar(j + 48);  /* second digit */
if (i != 8 || j != 9)
putchar(44), putchar(32);  /* ',' and space */
j++;
}
i++;
}
putchar(10);  /* newline */

return (0);
}
