#include "main.h"

/**
 * main - test the leet function
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Leet speak is cool!";
	int i;

	leet(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
