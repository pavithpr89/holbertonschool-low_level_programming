#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s;
	char str[] = "Hello, world!";

	s = _strdup(str);
	if (s == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("%s\n", s);

	free(s);
	return (0);
}
