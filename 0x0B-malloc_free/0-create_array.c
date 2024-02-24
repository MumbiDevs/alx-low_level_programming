#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    /* Check if size is 0 */
    if (size == 0)
    {
        return NULL;
    }

    /* Allocate memory for the array */
    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
    {
        return NULL; /* Memory allocation failed */
    }

    /* Initialize the array with the specific character */
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }

    return array;
}
