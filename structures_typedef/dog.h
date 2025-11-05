#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - structure describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: stores information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif /* DOG_H */
