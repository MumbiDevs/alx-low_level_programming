#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return NULL;

	/* Calculate the total size to allocate */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return NULL;

	/* Set the allocated memory to zero */
	memset(ptr, 0, total_size);

	return ptr;
}

int main(void)
{
	unsigned int nmemb = 5;
	unsigned int size = sizeof(int);

	int *arr = _calloc(nmemb, size);
	if (arr != NULL)
	{
		printf("Allocated array:\n");
		for (unsigned int i = 0; i < nmemb; i++)
			printf("%d ", arr[i]);
		printf("\n");

		free(arr);
	}

	return 0;
}
