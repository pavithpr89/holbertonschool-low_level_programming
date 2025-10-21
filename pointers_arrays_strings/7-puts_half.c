#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int length = 0, start, i;

/* find the length of the string */
while (str[length] != '\0')
length++;

/* calculate the starting index */
if (length % 2 == 0)
start = length / 2;
else
start = (length + 1) / 2;

/* print the second half */
for (i = start; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
