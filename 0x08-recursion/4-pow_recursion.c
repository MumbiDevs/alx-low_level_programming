#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y, using recursion
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
