#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to the string to search.
 * @accept: pointer to the string of characters to search for.
 *
 * Return: the number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int len = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                len++;
                break;
            }
        }
        if (accept[j] == '\0')
        {
            break;
        }
    }
    return len;
}
