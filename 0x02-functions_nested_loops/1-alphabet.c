#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Description: This function prints the lowercase alphabet (from 'a' to 'z')
 * using the putchar function. It then prints a newline character to create a
 * newline at the end of the alphabet.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c; /* Variable to store each character of the alphabet */

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
