#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Test 1: no arguments\n");
	system("./add");
	printf("\nTest 2: 1 2 3\n");
	system("./add 1 2 3");
	printf("\nTest 3: 5 10 20\n");
	system("./add 5 10 20");
	printf("\nTest 4: invalid argument 3a\n");
	system("./add 3a 5");
	printf("\nTest 5: single number 42\n");
	system("./add 42");
	return (0);
}
