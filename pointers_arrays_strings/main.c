#include "main.h"
#include <stdio.h>

/**
 * main - test the _strpbrk function
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello world";
	char *accept = "ow";
	char *result;

	result = _strpbrk(s, accept);

	if (result != 0)
		printf("First matching byte: %s\n", result);
	else
		printf("No match found\n");

	return (0);
}
