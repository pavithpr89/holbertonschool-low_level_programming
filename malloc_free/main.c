#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer;

	buffer = create_array(10, 'H');
	if (buffer == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	for (int i = 0; i < 10; i++)
		_putchar(buffer[i]);
	_putchar('\n');

	free(buffer);
	return (0);
}
