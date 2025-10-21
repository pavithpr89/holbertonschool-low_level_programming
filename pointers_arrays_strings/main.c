#include "main.h"

int main(void)
{
	puts_half("Hello, world!"); /* Output: world! */
	puts_half("ABCDE");          /* Output: CDE */
	puts_half("ABCD");           /* Output: CD */
	return (0);
}
