#include <stdio.h>
#include "main.h"

#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: The size of the array.
 * @c: The character used for initialization.
 *
 * Return: On success, a pointer to the array. On failure or if size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
    	return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
