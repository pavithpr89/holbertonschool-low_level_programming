#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *arr;
	int i;

	arr = array_range(5, 10);
	if (arr == NULL)
	{
		printf("Failed to create array\n");
		return (1);
	}

	for (i = 0; i <= 10 - 5; i++)
		printf("%d ", arr[i]); /* Output: 5 6 7 8 9 10 */
	printf("\n");

	free(arr);
	return (0);
}
