#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure or if ac is 0 or av is NULL, returns NULL.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n';
		k++;
	}
	concatenated[k] = '\0';

	return (concatenated);
}
