#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y. If y is less than 0, return -1.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1; /* Error: y is less than 0. */
    }
    
    if (y == 0)
    {
        return 1; /* Base case: x^0 is 1. */
    }

    return x * _pow_recursion(x, y - 1); /* Recursive calculation of x^y. */
}
