#include <stdio.h>
#include "main.h"

/**
 * find_sqrt - Finds the square root of a number using binary search
 * @n: The number to find the square root of
 * @start: The lower bound of the search range
 * @end: The upper bound of the search range
 *
 * Return: The square root of n if it exists, otherwise -1
 */
int find_sqrt(int n, int start, int end)
{
    int mid;

    if (end >= start)
    {
        mid = (start + end) / 2;

        if (mid * mid == n)
            return mid;

        if (mid * mid > n)
            return find_sqrt(n, start, mid - 1);

        return find_sqrt(n, mid + 1, end);
    }

    return -1;
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return find_sqrt(n, 0, n);
}
