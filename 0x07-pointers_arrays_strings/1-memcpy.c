#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 *
 * @dest: pointer to the destination memory area.
 * @src: pointer to the source memory area.
 * @n: the number of bytes to copy.
 *
 * Return: pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    return memcpy(dest, src, n);
}
