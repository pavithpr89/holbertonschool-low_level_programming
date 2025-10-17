#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the last digit of a random number
*
* Return: 0
*/
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;

printf("Last digit of %d is %d and is %s\n", n, last_digit,
(last_digit > 5) ? "greater than 5" :
(last_digit == 0) ? "0" : "less than 6 and not 0");

return (0);
}
