#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code for new_dog
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

	printf("Name: %s\nAge: %.2f\nOwner: %s\n",
	       my_dog->name, my_dog->age, my_dog->owner);

	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);

	return (0);
}
