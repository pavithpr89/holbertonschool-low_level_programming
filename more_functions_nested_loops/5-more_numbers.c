#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
int row, num;

for (row = 0; row < 10; row++)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
_putchar('1'); /* first _putchar for tens place */

_putchar((num % 10) + '0'); /* second/third _putchar for units place */
}
_putchar('\n'); /* _putchar for newline */
}
}
