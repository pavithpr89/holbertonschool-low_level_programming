#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *result;

	result = str_concat("Hello", "World!");
	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("%s\n", result); /* Output: HelloWorld! */

	free(result);
	return (0);
}
