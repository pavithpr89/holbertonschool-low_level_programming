#include "main.h"

/**
 * main - test the _strcmp function
 *
 * Return: Always 0
 */
int main(void)
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	char *str3 = "World";
	int res;

	/* Compare str1 and str2 */
	res = _strcmp(str1, str2); /* should be 0 */
	if (res == 0)
		_putchar('0');
	_putchar('\n');

	/* Compare str1 and str3 */
	res = _strcmp(str1, str3); /* negative */
	if (res < 0)
		_putchar('-');
	_putchar('\n');

	/* Compare str3 and str1 */
	res = _strcmp(str3, str1); /* positive */
	if (res > 0)
		_putchar('+');
	_putchar('\n');

	return (0);
}
