#include "main.h"

/**
 * main - tests the print_diagsums function
 *
 * Return: Always 0
 */
int main(void)
{
	int matrix[3][3] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
	};

	print_diagsums((int *)matrix, 3);

	return (0);
}
