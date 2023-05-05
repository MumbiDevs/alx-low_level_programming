#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer to print
 * @size: size of the buffer
 *
 * Description: This function prints the content of size bytes of the buffer
 * pointed by b, 10 bytes per line. Each line starts with the position of the
 * first byte of the line in hexadecimal (8 chars), separated by a space. Then,
 * it shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time,
 * separated by a space. Finally, it shows the content of the buffer. If the byte
 * is a printable character, it prints the character, otherwise it prints a dot.
 * Each line ends with a new line character \n. If size is 0 or less, the output
 * is a new line only \n.
 **/
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", *(b + j));
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (k = i; k < i + 10; k++)
		{
			if (k >= size)
				break;

			if (*(b + k) >= 32 && *(b + k) <= 126)
				printf("%c", *(b + k));
			else
				printf(".");
		}

		printf("\n");
	}
}
