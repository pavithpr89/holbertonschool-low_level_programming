#include "variadic_functions.h"
#include <stddef.h> /* For NULL */

int main(void)
{
	print_strings(", ", 3, "Hello", "Holberton", "World");
	print_strings(" - ", 5, "One", NULL, "Three", "Four", NULL);
	print_strings(NULL, 2, "OnlyOne", "OnlyTwo");
	return (0);
}
