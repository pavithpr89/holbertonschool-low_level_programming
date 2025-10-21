#include "main.h"

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5};

	print_array(arr, 6); /* Output: 0, 1, 2, 3, 4, 5 */
	print_array(arr, 3); /* Output: 0, 1, 2 */
	return (0);
}
