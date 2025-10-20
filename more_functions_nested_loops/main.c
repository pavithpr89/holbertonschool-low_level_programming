#include "main.h"
#include <stdio.h>

int main(void)
{
	char c;

	c = 'A';
	printf("%d\n", _isupper(c));  /* should print 1 */
	c = 'a';
	printf("%d\n", _isupper(c));  /* should print 0 */
	return (0);
}
