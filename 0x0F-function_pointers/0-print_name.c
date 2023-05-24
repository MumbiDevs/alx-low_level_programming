#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer to the function that prints the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

/**
 * print_name_function - Prints the provided name.
 * @name: The name to be printed.
 *
 * Return: void
 */
void print_name_function(char *name)
{
	if (name)
		printf("Name: %s\n", name);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char name[] = "John Doe";

	print_name(name, print_name_function);

	return 0;
}
