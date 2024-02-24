#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: Array of strings containing the arguments
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, len, total_len = 0, index = 0;

    /* Check if ac is 0 or av is NULL */
    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            len++;
            total_len++;
        }
        total_len++; /* Account for '\n' */
    }

    /* Allocate memory for the concatenated string */
    str = (char *)malloc((total_len + 1) * sizeof(char));
    if (str == NULL)
        return NULL; /* Memory allocation failed */

    /* Copy each argument followed by '\n' to the concatenated string */
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            str[index++] = av[i][len++];
        }
        str[index++] = '\n'; /* Append '\n' */
    }
    str[index] = '\0'; /* Null-terminate the concatenated string */

    return str;
}
