#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("Test 1:\n");
	system("./printargs");
	printf("\nTest 2:\n");
	system("./printargs hello");
	printf("\nTest 3:\n");
	system("./printargs this is a test");
	return (0);
}
