#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1);
    return (0);
}
