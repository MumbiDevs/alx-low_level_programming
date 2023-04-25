#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number, prints the last digit of the number,
 * and provides additional information about the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator with current time */
	n = rand() - RAND_MAX / 2; /* Generate a random number */

	/* Print the original number and the last digit */
	printf("Last digit of %d is %d ", n, n % 10);

	/* Determine the properties of the last digit */
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
j	return (0);
}
