#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int number to print in binary
 *
 * Description: This function prints the binary representation of an
 * unsigned long int number without using arrays, malloc, or the %
 * or / operators, using for loops.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i;

    if (n == 0)
    {
        printf("0");
        return;
    }

    for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
