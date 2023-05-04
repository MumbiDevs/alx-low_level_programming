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

    /* Find the length of the string manually */
    while (*(s + len) != '\0')
    {
        len++;
    }

    /* Print the string in reverse order */
    for (int i = len - 1; i >= 0; i--)
    {
        _putchar(*(s + i));
    }

    _putchar('\n');
}
