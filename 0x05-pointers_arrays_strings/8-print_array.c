#include "main.h"

/**
 * print_array - Prints n elements of an integer array.
 *
 * @a: Pointer to the integer array to be printed.
 * @n: Number of elements to print.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        /* Print the current element followed by a comma and space */
        if (i != 0)
        {
            _putchar(',');
            _putchar(' ');
        }
        _putchar(a[i] + '0');
    }

    _putchar('\n');
}
