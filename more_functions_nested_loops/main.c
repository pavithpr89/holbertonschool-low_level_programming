#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("%d\n", _isdigit('5')); /* 1 */
	printf("%d\n", _isdigit('a')); /* 0 */
	printf("%d\n", _isdigit('0')); /* 1 */
	printf("%d\n", _isdigit('9')); /* 1 */
	printf("%d\n", _isdigit('x')); /* 0 */
	return (0);
}
