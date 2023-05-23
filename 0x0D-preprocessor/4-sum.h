#include <stdio.h>

/**
 * SUM - Computes the sum of two numbers
 * @x: The first number
 * @y: The second number
 *
 * Description: This macro evaluates the sum of the given numbers.
 *              It returns the result of adding the two numbers together.
 */
#define sum(x, y) ((x) + (y))

int main(void)
{
	int a = 5;
	int b = 7;

	printf("Sum of %d and %d: %d\n", a, b, SUM(a, b));

	return 0;
}
