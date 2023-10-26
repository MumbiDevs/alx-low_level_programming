#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n'.
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess; /* Square root found. */
    }
    else if (guess * guess > n)
    {
        return -1; /* n does not have a natural square root. */
    }
    else
    {
        return find_sqrt(n, guess + 1); /* Continue searching. */
    }
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of 'n'. If n does not have a natural
 * square root, return -1.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; /* Error: n is negative, no natural square root. */
    }

    if (n == 0 || n == 1)
    {
        return n; /* Base case: the square root of 0 or 1 is itself. */
    }

    return find_sqrt(n, 1); /* Call helper function to find square root. */
}
