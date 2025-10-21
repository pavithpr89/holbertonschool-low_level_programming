#include "main.h"

/**
 * fizzbuzz - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Uses only _putchar to output
 */
void fizzbuzz(void)
{
int i, n;
char *word;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
word = "FizzBuzz";
else if (i % 3 == 0)
word = "Fizz";
else if (i % 5 == 0)
word = "Buzz";
else
{
/* Print numbers digit by digit */
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');

if (i != 100)
_putchar(' ');
continue;
}

/* Print Fizz/Buzz/FizzBuzz */
for (n = 0; word[n]; n++)
_putchar(word[n]);

if (i != 100)
_putchar(' ');
}
_putchar('\n');
}
