#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("Test 1:\n");
	system("./args");
	printf("\nTest 2:\n");
	system("./args hello");
	printf("\nTest 3:\n");
	system("./args one two three");
	return (0);
}
