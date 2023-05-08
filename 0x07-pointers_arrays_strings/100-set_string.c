#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to the string to set
 * @to: String to set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
