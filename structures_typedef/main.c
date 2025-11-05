#include <stddef.h>
#include "dog.h"

/**
 * main - test init_dog and print_dog
 *
 * Return: 0 on success
 */
int main(void)
{
	struct dog my_dog;
	struct dog stray;

	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
	print_dog(&my_dog);

	init_dog(&stray, NULL, 4.2, NULL);
	print_dog(&stray);

	print_dog(NULL);

	return (0);
}
