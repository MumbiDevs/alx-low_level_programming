#include <stdio.h>
#include "main.h"

int factorial(int n)
{
    if (n < 0)
    {
        return -1; /* Error: n is less than 0. */
    }

    if (n == 0 || n == 1)
    {
        return 1; /* Base case: factorial of 0 or 1 is 1. */
    }

    return n * factorial(n - 1); /* Recursive calculation of factorial. */
}
