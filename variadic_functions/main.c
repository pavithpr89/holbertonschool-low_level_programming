#include "variadic_functions.h"
#include <stddef.h>

int main(void)
{
	print_all("ceis", 'H', 0, 3.14, "Holberton");
	print_all("sfcis", "Hi", 2.5, 'A', 42, NULL);
	print_all(NULL);
	return (0);
}
