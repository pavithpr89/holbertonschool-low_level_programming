#include "main.h"

/**
 * main - test the _strspn function
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello world";
	char *accept = "helowrd";
	unsigned int n;

	n = _strspn(s, accept);

	/* Print the number using _putchar */
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
	_putchar('\n');

	return (0);
}
