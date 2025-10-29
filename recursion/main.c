#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", is_prime_number(1));   /* Output: 0 */
	printf("%d\n", is_prime_number(2));   /* Output: 1 */
	printf("%d\n", is_prime_number(3));   /* Output: 1 */
	printf("%d\n", is_prime_number(4));   /* Output: 0 */
	printf("%d\n", is_prime_number(17));  /* Output: 1 */
	printf("%d\n", is_prime_number(25));  /* Output: 0 */
	return (0);
}
