#include <stdio.h>

/**
 * _putchar - Custom putchar function to print characters to stdout
 * @c: The character to be printed
 *
 * Return: The printed character on success, -1 on error
 */
int _putchar(char c)
{
	return putchar(c);
}

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, followed by a newline
 *
 * Description: This function prints the lowercase alphabet (from 'a' to 'z')
 * ten times, using the _putchar function. It then prints a newline character
 * to create a newline at the end of each set of alphabets.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i; /* Variable to count the number of times to print alphabet */
	char c; /* Variable to store each character of the alphabet */

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
