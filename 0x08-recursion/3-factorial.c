#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of 'n'. If 'n' is less than 0, return -1.
 */
int factorial(int n)
{
    if (n < 0)
    {
        return -1; /* Error: n is less than 0. */
    }
    else if (n == 0 || n == 1)
    {
        return 1; /* Base case: factorial of 0 or 1 is 1. */
    }
    else
    {
        int result = 1;
        int i;

        for (i = 2; i <= n; i++)
        {
            result *= i;
        }

        return result;
    }
}

int main(void)
{
    int num = 5;
    int result = factorial(num);

    if (result == -1)
    {
        printf("Error: Input is less than 0\n");
    }
    else
    {
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}
