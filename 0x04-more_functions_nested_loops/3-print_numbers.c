#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, except for 2 and 4.
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        _putchar(i + '0');
    }
    _putchar('\n');
}
