#include "main.h"
#include <stdio.h>

/**
 * main - tests the _strstr function
 *
 * Return: Always 0
 */
int main(void)
{
	char *haystack = "hello world";
	char *needle = "world";
	char *result;

	result = _strstr(haystack, needle);

	if (result != 0)
		printf("Substring found: %s\n", result);
	else
		printf("Substring not found\n");

	return (0);
}
