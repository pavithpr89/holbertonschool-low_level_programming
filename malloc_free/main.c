#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **grid;
	int i, j;

	grid = alloc_grid(3, 4);
	if (grid == NULL)
	{
		printf("Failed to allocate grid\n");
		return (1);
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			grid[i][j] = i + j;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}

	free_grid(grid, 4);
	return (0);
}
