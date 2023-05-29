#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * print_dog - Prints the information of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

int main(void)
{
	struct dog my_dog = {"Buddy", 3.5, "John"};
	struct dog *dog_ptr = NULL;

	printf("Printing dog:\n");
	print_dog(&my_dog);

	printf("\nPrinting NULL dog:\n");
	print_dog(dog_ptr);

	return 0;
}
