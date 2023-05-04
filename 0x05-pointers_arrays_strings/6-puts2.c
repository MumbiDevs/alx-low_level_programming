#include "main.h"

/**
 * puts2 - Prints every other character of a given string.
 *
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
    int i;

    /* Print every other character starting with the first */
    for (i = 0; *(str + i) != '\0'; i += 2)
    {
        _putchar(*(str + i));
    }

    _putchar('\n');
}
