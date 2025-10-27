#include "main.h"

/**
 * main - test the _strchr function
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "Holberton School";
	char *ptr;

	ptr = _strchr(s, 'S');

	if (ptr)
	{
		while (*ptr)
		{
			_putchar(*ptr);
			ptr++;
		}
	}
	else
	{
		_putchar('N');
		_putchar('U');
		_putchar('L');
		_putchar('L');
	}
	_putchar('\n');

	return (0);
}
