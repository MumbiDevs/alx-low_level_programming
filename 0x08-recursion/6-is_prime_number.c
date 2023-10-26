#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0; /* 0 and 1 are not prime numbers. */
    }
    
    if (n <= 3)
    {
        return 1; /* 2 and 3 are prime numbers. */
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0; /* Divisible by 2 or 3, not prime. */
    }

    int i = 5;
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0; /* Divisible by i or i+2, not prime. */
        }
        i += 6;
    }

    return 1; /* 'n' is a prime number. */
}
