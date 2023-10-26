#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of 'n'. If 'n' is less than 0, return -1.
 */
int factorial(int n)
{
    int result = 1; // Declare variables at the beginning of the block.
    int i;

    if (n < 0)
    {
        return -1; /* Error: n is less than 0. */
    }

    for (i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
