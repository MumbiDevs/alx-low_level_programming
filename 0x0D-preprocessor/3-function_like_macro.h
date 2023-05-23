#include <stdio.h>

/**
 * ABS - Computes the absolute value of a number
 * @x: The number to compute the absolute value of
 *
 * Description: This macro evaluates the absolute value of the given number.
 *              It returns the absolute value of a signed integer, floating-point,
 *              or character constant.
 */
#define ABS(x) (((x) < 0) ? -(x) : (x))

int main(void)
{
	int num = -98;
	float fnum = 98.0;

	printf("Absolute value of %d: %d\n", num, ABS(num));
	printf("Absolute value of %.2f: %.2f\n", fnum, ABS(fnum));

	return 0;
}
