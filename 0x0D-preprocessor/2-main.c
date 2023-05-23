#include <stdio.h>

/**
 * printFileName - Prints the name of the file it was compiled from
 */
void printFileName(void)
{
	printf("Compiled from file: %s\n", __FILE__);
}

/**
 * main - Entry point of the program
 *
 * Description: Calls the printFileName function to print the file name.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printFileName();
	return 0;
}
