#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer to the string to search.
 * @accept: pointer to the string of characters to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *temp = accept;
        while (*temp != '\0')
        {
            if (*s == *temp)
            {
                return s;
            }
            temp++;
        }
        s++;
    }
    return NULL;
}
