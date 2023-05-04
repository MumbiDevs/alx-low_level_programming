#include "main.h"

/**
 * print_rev - prints a given string in reverse order followed by a new line
 * @s: pointer to the string to be printed in reverse order
 *
 * Return: void
 */
void print_rev(char *s)
{
    int len = 0;
    int i;

    /* Find the length of the string */
    while (*(s + len) != '\0')
    {
        len++;
    }

    /* Print the string in reverse order */
    for (i = len - 1; i >= 0; i--)
    {
        _putchar(*(s + i));
    }

    _putchar('\n');
}
