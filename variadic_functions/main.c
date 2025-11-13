#include "variadic_functions.h"
#include <stddef.h>  /* For NULL */

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    print_numbers(NULL, 3, 10, 20, 30);
    return (0);
}
