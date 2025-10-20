#include "main.h"
#include <stdio.h>

int main(void)
{
int r;

r = print_sign(98);
_putchar(',');
_putchar(' ');
printf("%d\n", r);

r = print_sign(0);
_putchar(',');
_putchar(' ');
printf("%d\n", r);

r = print_sign(-1);
_putchar(',');
_putchar(' ');
printf("%d\n", r);

return (0);
}
