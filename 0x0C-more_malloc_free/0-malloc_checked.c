#include <stdlib.h>
#include <stdio.h> // for exit and EXIT_FAILURE

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails, the program exits with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(98); // Terminate the program with status 98
    }

    return ptr;
}
