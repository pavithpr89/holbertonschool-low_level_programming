#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("Test 1 (2 * 3):\n");
	system("./mul 2 3");
	printf("\nTest 2 (10 * 5):\n");
	system("./mul 10 5");
	printf("\nTest 3 (wrong args):\n");
	system("./mul 5");
	return (0);
}
