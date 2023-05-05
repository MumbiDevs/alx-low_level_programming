#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a given number
 *
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
