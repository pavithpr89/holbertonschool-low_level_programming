#include "main.h"

/**
 * main - test the _strcat function
 *
 * Return: Always 0
 */
int main(void)
{
	char dest[50] = "Hello, ";
	char *src = "World!";
	int i;

	_strcat(dest, src);

	/* Print concatenated string using _putchar */
	i = 0;
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
