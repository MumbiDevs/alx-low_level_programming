#include "main.h"

/**
 * calculate_sqrt - Calculate the natural square root of a number.
 * @n: The number to calculate the natural square root of.
 * @guess: The guess for the square root.
 *
 * Return: The natural square root of @n.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the natural square root of.
 *
 * Return: The natural square root of @n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}
