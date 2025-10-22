#include "main.h"

/**
 * main - test the _strncpy function
 *
 * Return: Always 0
 */
int main(void)
{
char src[] = "Hello";
	char dest[10];
	int i;

	/* Copy at most 8 bytes */
	_strncpy(dest, src, 8);

	/* Print the resulting buffer using _putchar */
	for (i = 0; i < 8; i++)
		_putchar(dest[i]);

	_putchar('\n');

	return (0);
}
