#include <stdio.h>
#include "main.h"

/**
 * _strlen - Calculates and prints the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s)
    {
        length++;
        s++;
    }

    printf("The length of the string is: %d\n", length);
    return length;
}

int main(void)
{
    char *str = "Hello, World!";
    _strlen(str);
    return (0);
}
