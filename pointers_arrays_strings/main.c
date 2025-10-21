#include <stdio.h>
#include "main.h"

int main(void)
{
	char src[] = "Hello, world!";
	char dest[50];

	_strcpy(dest, src);
	printf("Copied string: %s\n", dest); /* Output: Hello, world! */

	return (0);
}
