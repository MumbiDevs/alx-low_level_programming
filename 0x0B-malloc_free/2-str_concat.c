#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int s1_len, s2_len, concat_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = s1_len + s2_len;

	concatenated = malloc((concat_len + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < s2_len; j++, i++)
		concatenated[i] = s2[j];

	concatenated[concat_len] = '\0';

	return (concatenated);
}
