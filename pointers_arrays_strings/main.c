#include "main.h"

/**
 * main - test the _strncat function
 *
 * Return: Always 0
 */
int main(void)
{
	char dest[20] = "Hello, ";
	char *src = "World!";
	char *result;
	int i;

	result = _strncat(dest, src, 3); /* append at most 3 bytes from src */

	/* Print the resulting string using _putchar */
	i = 0;
	while (result[i] != '\0')
	{
		_putchar(result[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
