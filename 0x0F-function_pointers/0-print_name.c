#include <stdio.h>
#include "function_pointers.h"

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
