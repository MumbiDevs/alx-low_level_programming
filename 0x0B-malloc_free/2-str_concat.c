#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    int len_s1 = 0, len_s2 = 0, i, j;

    /* If s1 is NULL, treat it as an empty string */
    if (s1 == NULL)
        s1 = "";
    
    /* If s2 is NULL, treat it as an empty string */
    if (s2 == NULL)
        s2 = "";

    /* Calculate the length of s1 */
    while (s1[len_s1] != '\0')
        len_s1++;

    /* Calculate the length of s2 */
    while (s2[len_s2] != '\0')
        len_s2++;

    /* Allocate memory for the concatenated string */
    concat_str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (concat_str == NULL)
        return NULL; /* Memory allocation failed */

    /* Copy s1 to the concatenated string */
    for (i = 0; i < len_s1; i++)
        concat_str[i] = s1[i];

    /* Copy s2 to the concatenated string */
    for (j = 0; j < len_s2; j++)
        concat_str[i++] = s2[j];

    concat_str[i] = '\0'; /* Null-terminate the concatenated string */

    return concat_str;
}
