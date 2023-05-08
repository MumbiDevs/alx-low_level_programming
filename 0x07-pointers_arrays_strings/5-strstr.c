#include <stdio.h>
#include "main.h"

/**
 * _strstr - Find the first occurrence of the substring needle in the
 *            string haystack
 *
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    /* Handle edge cases */
    if (*needle == '\0')
    {
        return (haystack);
    }
    if (*haystack == '\0')
    {
        return (NULL);
    }

    /* Iterate through haystack until the end */
    while (*haystack != '\0')
    {
        /* Check if current character matches first character of needle */
        if (*haystack == *needle)
        {
            /* Initialize pointers to current positions in haystack and needle */
            char *haystack_ptr = haystack;
            char *needle_ptr = needle;

            /* Iterate through haystack and needle until they don't match */
            while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
            {
                haystack_ptr++;
                needle_ptr++;
            }

            /* If needle_ptr reaches the end of needle, then we found the substring */
            if (*needle_ptr == '\0')
            {
                return (haystack);
            }
        }

        /* Move to next character in haystack */
        haystack++;
    }

    /* Substring not found */
    return (NULL);
}
