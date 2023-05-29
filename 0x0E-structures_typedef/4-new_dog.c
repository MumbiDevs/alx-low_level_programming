#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * new_dog - Creates a new dog with the given information.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy;
	char *owner_copy;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return NULL;

	/* Allocate memory for the name */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL) {
		free(new_dog_ptr);
		return NULL;
	}

	/* Allocate memory for the owner */
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL) {
		free(name_copy);
		free(new_dog_ptr);
		return NULL;
	}

	/* Copy the name and owner */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Set the dog's properties */
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return new_dog_ptr;
}

int main(void)
{
	dog_t *my_dog = new_dog("Buddy", 3.5, "John");

	if (my_dog != NULL) {
		printf("New dog created successfully!\n");
		printf("Name: %s\n", my_dog->name);
		printf("Age: %.1f\n", my_dog->age);
		printf("Owner: %s\n", my_dog->owner);
	} else {
		printf("Failed to create a new dog.\n");
	}

	return 0;
}
