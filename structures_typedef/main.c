#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code for free_dog
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	if (my_dog == NULL)
	{
		printf("Failed to create dog\n");
		return (1);
	}

	printf("My dog: %s is %.2f years old and belongs to %s\n",
	       my_dog->name, my_dog->age, my_dog->owner);

	free_dog(my_dog);

	return (0);
}
