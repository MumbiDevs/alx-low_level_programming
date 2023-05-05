#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
