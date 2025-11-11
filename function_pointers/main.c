#include <stdio.h>
#include "function_pointers.h"

int is_98(int elem)
{
	return (elem == 98);
}

int is_negative(int elem)
{
	return (elem < 0);
}

int main(void)
{
	int array[] = {0, -1, 98, 402, 1024, -4096};
	int index;

	index = int_index(array, 6, is_98);
	printf("Index of 98: %d\n", index);

	index = int_index(array, 6, is_negative);
	printf("Index of first negative: %d\n", index);

	index = int_index(array, 6, NULL);
	printf("Index (NULL cmp): %d\n", index);

	return (0);
}
