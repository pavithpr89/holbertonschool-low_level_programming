#include <stdio.h>
#include "main.h"

int main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "ABCD";

	rev_string(str1);
	rev_string(str2);

	printf("%s\n", str1); /* Output: !dlrow ,olleH */
	printf("%s\n", str2); /* Output: DCBA */
	return (0);
}
