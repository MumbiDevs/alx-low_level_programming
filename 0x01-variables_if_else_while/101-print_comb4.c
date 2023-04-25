#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits,
 * following the specified requirements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i < 7 || (i == 7 && j < 8) || (i == 7 && j == 8 && k < 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
