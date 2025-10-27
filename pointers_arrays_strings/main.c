#include "main.h"

/**
 * main - test the _memset function
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[10];
	unsigned int i;

	_memset(buffer, 'X', 10);

	for (i = 0; i < 10; i++)
	{
		_putchar(buffer[i]);
	}
	_putchar('\n');

	return (0);
}
