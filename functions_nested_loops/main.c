#include "main.h"
#include <stdio.h>

int main(void)
{
    int result;

    result = add(5, 7);
    printf("%d\n", result);  /* 12 */

    result = add(-3, 10);
    printf("%d\n", result);  /* 7 */

    return (0);
}
