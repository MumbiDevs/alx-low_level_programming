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
    int num1, num2, result;

    /* Check if the number of arguments is not equal to 3 (program name + 2 numbers) */
    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    /* Convert command-line arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Multiply the two numbers */
    result = num1 * num2;

    /* Print the result */
    printf("%d\n", result);

    return 0;
}
