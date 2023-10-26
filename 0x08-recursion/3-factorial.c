#include <stdio.h>
#include "main.h"

/* Function to calculate the factorial */
int factorial(int n)
{
    if (n < 0)
    {
        return -1; /* Error: n is less than 0. */
    }
    int result = 1;
    int i;

    for (i = 1; i <= n; i++)
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
