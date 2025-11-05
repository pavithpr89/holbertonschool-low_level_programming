#include <stddef.h>
#include "dog.h"

/**
 * main - test the print_dog function
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog = {"Ghost", 4.75, "Jon Snow"};
	struct dog stray = {NULL, 3.2, NULL};

	print_dog(&my_dog);
	print_dog(&stray);
	print_dog(NULL);

	return (0);
}
