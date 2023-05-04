#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */

void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }

    putchar('\n');
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */

int main(void)
{
    char str[] = "Hello, world!";

    _puts(str);

    return (0);
}
