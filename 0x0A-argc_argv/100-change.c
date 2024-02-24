#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
    int cents, coins = 0;

    /* Check if exactly 1 argument is passed */
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    /* Convert argument to an integer */
    cents = atoi(argv[1]);

    /* Check if the amount is negative */
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    /* Calculate the minimum number of coins */
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else if (cents >= 2)
        {
            cents -= 2;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }

    /* Print the minimum number of coins */
    printf("%d\n", coins);

    return 0;
}
