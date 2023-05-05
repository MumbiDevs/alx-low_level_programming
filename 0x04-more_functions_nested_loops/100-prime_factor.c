#include "main.h"

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a given number
 *
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
unsigned long largest_prime_factor(unsigned long n)
{
    unsigned long i, max;

    max = 2;

    while (n % 2 == 0)
    {
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            max = i;
            n /= i;
        }
    }

    if (n > 2)
    {
        max = n;
    }

    return max;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long n = 612852475143;
    unsigned long largest = largest_prime_factor(n);

    printf("%lu\n", largest);

    return 0;
}
