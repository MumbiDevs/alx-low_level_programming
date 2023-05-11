#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number, using recursion
 *
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of the number, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
