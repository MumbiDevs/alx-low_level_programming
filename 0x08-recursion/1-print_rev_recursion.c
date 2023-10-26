#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return; /* Base case: Do nothing when the end of the string is reached. */
    }

    _print_rev_recursion(s + 1); /* Recursively call the function with the next character. */
    putchar(*s); /* Print the current character in reverse order. */
}

int main(void)
{
    char *str = "Hello, World!";
    _print_rev_recursion(str);
    putchar('\n'); /* Print a new line after reversing the string. */
    return (0);
}
