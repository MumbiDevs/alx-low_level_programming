#include <stdio.h>
#include "main.h"

int factorial(int n)
{
    int result = 1; // Declare variables at the beginning of the function.

    if (n < 0)
    {
        return -1; /* Error: n is less than 0. */
    }

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
