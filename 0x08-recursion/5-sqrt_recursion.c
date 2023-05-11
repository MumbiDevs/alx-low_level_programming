#include "main.h"

/**
 * find_sqrt - finds the natural square root of a number
 * between a given range, using recursion
 *
 * @n: the number to find the natural square root of
 * @start: the starting point of the range to search
 * @end: the ending point of the range to search
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */

int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (find_sqrt(n, start, mid - 1));
	}
	else
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (mid);
		}
		else
		{
			return (find_sqrt(n, mid + 1, end));
		}
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number,
 * using recursion
 *
 * @n: the number to find the natural square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1, n));
	}
}
