#include "main.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string
 *         NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat_str;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Determine the length of the concatenated string */
	if (n >= len2)
		concat_len = len1 + len2;
	else
		concat_len = len1 + n;

	/* Allocate memory for the concatenated string */
	concat_str = malloc((concat_len + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into the concatenated string */
	strcpy(concat_str, s1);

	/* Concatenate the first n bytes of s2 (or the entire s2 if n >= len2) */
	strncat(concat_str, s2, n);

	return (concat_str);
}

int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	unsigned int n = 5;

	char *concatenated = string_nconcat(s1, s2, n);
	if (concatenated != NULL)
	{
		printf("Concatenated string: %s\n", concatenated);
		free(concatenated);
	}

	return 0;
}
