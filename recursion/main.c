#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _sqrt_recursion(25));  /* Output: 5 */
	printf("%d\n", _sqrt_recursion(16));  /* Output: 4 */
	printf("%d\n", _sqrt_recursion(10));  /* Output: -1 */
	printf("%d\n", _sqrt_recursion(-4));  /* Output: -1 */
	return (0);
}
