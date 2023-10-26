#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n'); /* Print a new line */
        return;
    }

    putchar(*s); /* Print the current character */
    _puts_recursion(s + 1); /* Recursively call the function with the next character */
}

int main()
{
    char *str = "Hello, World!";
    _puts_recursion(str);
    return (0);
}
