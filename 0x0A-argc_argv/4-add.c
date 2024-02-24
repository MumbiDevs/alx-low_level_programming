#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i, j;

    /* If no arguments are passed, print 0 and return */
    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    /* Iterate through command-line arguments */
    for (i = 1; i < argc; i++)
    {
        /* Check each character of the argument */
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            /* If a non-digit character is found, print error and return */
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return 1;
            }
        }

        /* Convert the argument to an integer and add it to the sum */
        sum += atoi(argv[i]);
    }

    /* Print the sum */
    printf("%d\n", sum);

    return 0;
}
