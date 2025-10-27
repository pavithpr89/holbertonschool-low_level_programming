#include "main.h"

/**
 * main - test the _memcpy function
 *
 * Return: Always 0
 */
int main(void)
{
	char src[10] = "Holberton";
	char dest[10];
	unsigned int i;

	_memcpy(dest, src, 10);

	for (i = 0; i < 10; i++)
	{
		_putchar(dest[i]);
	}
	_putchar('\n');

	return (0);
}
