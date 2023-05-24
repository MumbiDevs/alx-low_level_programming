#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs arithmetic operations based on command-line arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 98 on incorrect usage, 99 on division/modulo by 0.
 */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return 98;
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return 99;
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return 98;
	}

	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	    argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		return 99;
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return 99;
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return 0;
}
