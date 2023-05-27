#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         Terminate process with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}

	return (ptr);
}

int main(void)
{
	unsigned int size = 100;
	int *arr = malloc_checked(size * sizeof(int));

	/* Use the allocated memory */

	free(arr);
	return (0);
}
