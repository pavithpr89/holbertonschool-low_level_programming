#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s;

	s = malloc_checked(10);
	if (s != NULL)
	{
		printf("Memory allocated successfully\n");
		free(s);
	}

	return (0);
}
