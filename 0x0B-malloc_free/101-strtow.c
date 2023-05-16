#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: On success, a pointer to an array of strings (words).
 *         On failure or if str is NULL or an empty string, returns NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, len = 0, word_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
		if (str[i] != ' ')
			len++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			word_len++;
		if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] == '\0'))
		{
			words[j] = malloc((word_len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			for (k = 0; k < word_len; k++)
				words[j][k] = str[i - word_len + 1 + k];
			words[j][k] = '\0';
			j++;
			word_len = 0;
		}
	}
	words[j] = NULL;

	return (words);
}
