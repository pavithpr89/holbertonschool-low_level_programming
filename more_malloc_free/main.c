#include "main.h"
#include <stdio.h>

int main(void)
{
	int *arr;
	unsigned int i;

	arr = _calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]); /* Output: 0 0 0 0 0 */
	printf("\n");

	free(arr);
	return (0);
}
