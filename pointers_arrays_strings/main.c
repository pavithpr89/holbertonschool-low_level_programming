#include "main.h"

/**
 * main - test the reverse_array function
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int i;

	reverse_array(arr, 5);

	/* Print reversed array using _putchar */
	for (i = 0; i < 5; i++)
	{
		_putchar(arr[i] + '0'); /* convert int to char for printing */
	}
	_putchar('\n');

	return (0);
}
