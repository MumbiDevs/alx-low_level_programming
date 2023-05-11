#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they are identical or if s2
 *           contains wildcard characters that can replace any string.
 *
 * @s1: A pointer to the first string to compare.
 * @s2: A pointer to the second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		if (*s1 == '\0')
			return (0);

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
