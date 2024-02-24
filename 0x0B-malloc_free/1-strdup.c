#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int len, i;

    /* Return NULL if str is NULL */
    if (str == NULL)
        return NULL;

    /* Calculate the length of the string */
    for (len = 0; str[len] != '\0'; len++)
        ;

    /* Allocate memory for the duplicated string */
    dup_str = (char *)malloc((len + 1) * sizeof(char));
    if (dup_str == NULL)
        return NULL; /* Memory allocation failed */

    /* Copy the string */
    for (i = 0; i < len; i++)
    {
        dup_str[i] = str[i];
    }
    dup_str[len] = '\0'; /* Null-terminate the duplicated string */

    return dup_str;
}
