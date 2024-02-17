#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int number to print in binary
 *
 * Description: This function prints the binary representation of an
 * unsigned long int number without using arrays, malloc, or the %
 * or / operators, using for loops.
 */
void print_binary(unsigned long int n)
{
    int i;
    int size = sizeof(unsigned long int) * 8; /* Assuming 8 bits per byte */

    if (n == 0)
    {
        putchar('0');
        putchar('\n');
        return;
    }

    for (i = size - 1; i >= 0; i--)
    {
        if ((n >> i) & 1)
            break;
    }

    for (; i >= 0; i--)
    {
        putchar((n >> i) & 1 ? '1' : '0');
    }

    putchar('\n');
}
