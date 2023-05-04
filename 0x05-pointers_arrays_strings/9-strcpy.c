#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: Pointer to the buffer where the string will be copied.
 * @src: Pointer to the string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copy each character of src to dest */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Copy the terminating null byte to dest */
    dest[i] = '\0';

    /* Return a pointer to dest */
    return dest;
}
