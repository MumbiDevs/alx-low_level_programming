#include <stdio.h>
#include "main.h"

int factorial(int n)
{
    if (n < 0)
    {
        return -1; /* Error: n is less than 0. */
    }
    int result = 1;
    int i;

    for (i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
