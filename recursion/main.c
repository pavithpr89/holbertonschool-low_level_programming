#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _pow_recursion(2, 3));  /* Output: 8 */
	printf("%d\n", _pow_recursion(5, 0));  /* Output: 1 */
	printf("%d\n", _pow_recursion(3, -2)); /* Output: -1 */
	return (0);
}
