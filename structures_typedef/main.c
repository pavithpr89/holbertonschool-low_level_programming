#include <stdio.h>
#include <stddef.h>  /* for NULL */
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog = {"Puppy", 3.5, "Pav"};
	struct dog stray = {NULL, 4.2, NULL};

	print_dog(&my_dog);
	print_dog(&stray);
	print_dog(NULL);

	return (0);
}
