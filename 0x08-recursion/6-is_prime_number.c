#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number is prime recursively.
 * @n: The number to be checked.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
    {
        return 0; /* 0 and 1 are not prime numbers. */
    }
    
    if (divisor == 1)
    {
        return 1; /* 2 is prime. */
    }

    if (n % divisor == 0)
    {
        return 0; /* Divisible by divisor, not prime. */
    }

    return is_prime_recursive(n, divisor - 1); /* Check with the next divisor. */
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
    return is_prime_recursive(n, n - 1);
}
