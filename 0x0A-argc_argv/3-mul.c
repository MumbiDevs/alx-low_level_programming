#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
        int num1, num2, result;

        /* Check for the correct number of arguments */
        if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }

        /* Convert the arguments to integers */
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);

        /* Multiply the numbers */
        result = num1 * num2;

        /* Print the result */
        printf("%d\n", result);

        return (0);
}
