#include "main.h"

/**
 * main - test the string_toupper function
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Hello, World!";
	int i;

	string_toupper(str);

	/* Print resulting string using _putchar */
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
