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
    if (n < 0)
    {
        return -1; // Error: n is less than 0.
    }
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
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
