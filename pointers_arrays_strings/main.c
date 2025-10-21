#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "Hello, world!";

	printf("Length of \"%s\" is %d\n", str, _strlen(str));
	return (0);
}
