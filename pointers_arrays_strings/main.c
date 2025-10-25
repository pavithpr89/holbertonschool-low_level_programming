#include "main.h"

/**
 * main - test the cap_string function
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "hello! how are you? i am fine. (really)";
	int i;

	cap_string(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
