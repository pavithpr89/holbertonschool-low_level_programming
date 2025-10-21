#include <stdio.h>
#include "main.h"

int main(void)
{
	int x = 10, y = 20;

	printf("Before swap: x = %d, y = %d\n", x, y);
	swap_int(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);

	return (0);
}
