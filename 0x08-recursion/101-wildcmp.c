#include <stdio.h>
#include "main.h"

/**
 * wildcmp - Compare two strings allowing '*' as a wildcard.
 * @s1: The first string.
 * @s2: The second string with '*' as a wildcard.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2) {
    if (*s2 == '*') {
        if (*(s2 + 1) == '*') {
            return wildcmp(s1, s2 + 1); /* Skip consecutive '*'.*/
        }
        while (*s1 != '\0') {
            if (wildcmp(s1, s2 + 1)) {
                return 1; /* Matched the remaining of s2 with s1. */
            }
            s1++;
        }
        return wildcmp(s1, s2 + 1); /* Skip '*' in s2. */
    }

    if (*s1 == '\0' && *s2 == '\0') {
        return 1; /* Both strings are empty, considered identical. */
    }

    if (*s1 == *s2) {
        return wildcmp(s1 + 1, s2 + 1); /* Continue comparing the next characters. */
    }

    return 0; /* Characters don't match. */
}
