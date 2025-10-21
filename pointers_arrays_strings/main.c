#include <stdio.h>
#include "main.h"

int main(void)
{
	int num = 0;

	printf("Before: %d\n", num);
	reset_to_98(&num);
	printf("After: %d\n", num);

	return (0);
}
