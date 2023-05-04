#include "main.h"

/**
 * rev_string - Reverses a given string in place.
 *
 * @s: Pointer to the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
    int len = 0;
    int i, j;
    char temp;

    /* Find the length of the string */
    while (*(s + len) != '\0')
    {
        len++;
    }

    /* Swap characters from start and end of string until halfway */
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = temp;
    }
}
