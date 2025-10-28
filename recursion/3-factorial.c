#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to find the factorial of
 *
 * Description: This function uses recursion to calculate
 * the factorial of a number. If n is lower than 0, it
 * returns -1 to indicate an error.
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
