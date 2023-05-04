#include "main.h"

/**
 * puts_half - Prints the second half of a given string.
 *
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
    int len = 0, start;

    /* Find the length of the string */
    while (*(str + len) != '\0')
    {
        len++;
    }

    /* Determine the starting index based on even/odd string length */
    if (len % 2 == 0)
    {
        start = len / 2;
    }
    else
    {
        start = (len - 1) / 2;
    }

    /* Print the second half of the string */
    for (; start < len; start++)
    {
        _putchar(*(str + start));
    }

    _putchar('\n');
}
