#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and prints the last digit
 *              of the number with additional information.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    srand(time(0));

    n = rand();
    last_digit = n % 10;

    printf("Last digit of %d is ", n);

    if (last_digit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (last_digit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
