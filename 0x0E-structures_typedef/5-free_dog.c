#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

int main(void)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL) {
		printf("Failed to allocate memory for the dog.\n");
		return 1;
	}

	/* Assign values to the dog's properties */
	my_dog->name = "Buddy";
	my_dog->age = 3.5;
	my_dog->owner = "John";

	/* Free the dog's memory */
	free_dog(my_dog);

	return 0;
}
