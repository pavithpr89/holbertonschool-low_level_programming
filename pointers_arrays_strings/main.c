#include "main.h"
#include <stdio.h>

/**
 * main - test the _atoi function
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[] = "  -123abc45";
	char s2[] = "---+--+1234ab567";
	char s3[] = "abc";
	char s4[] = "+42";
	char s5[] = "  00098";

	printf("%d\n", _atoi(s1)); /* -123 */
	printf("%d\n", _atoi(s2)); /* -1234 */
	printf("%d\n", _atoi(s3)); /* 0 */
	printf("%d\n", _atoi(s4)); /* 42 */
	printf("%d\n", _atoi(s5)); /* 98 */

	return (0);
}
