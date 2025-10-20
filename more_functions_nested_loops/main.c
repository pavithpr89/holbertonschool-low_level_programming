#include "main.h"
#include <stdio.h>

int main(void)
{
	int result;

	result = mul(5, 3);
	printf("%d\n", result);  /* 15 */

	result = mul(-4, 6);
	printf("%d\n", result);  /* -24 */

	result = mul(0, 10);
	printf("%d\n", result);  /* 0 */

	return (0);
}
