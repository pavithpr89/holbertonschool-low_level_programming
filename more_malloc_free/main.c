#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *result;

	result = string_nconcat("Hello", "World!", 3);
	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("%s\n", result); /* Output: HelloWor */

	free(result);
	return (0);
}
