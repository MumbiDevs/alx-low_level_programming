#include <stdio.h>
#include "dog.h"

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Buddy", 3.5, "John");

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return 0;
}
