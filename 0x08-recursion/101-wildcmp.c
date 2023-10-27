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
    if (*s2 == '\0') {
        return (*s1 == '\0'); /* If s2 is empty, s1 must also be empty for a match. */
    }

    if (*s2 == '*') {
        if (wildcmp(s1, s2 + 1)) {
            return 1; /+ '*' matches an empty string in s1. */
        }
        if (*s1 != '\0' && wildcmp(s1 + 1, s2)) {
            return 1; /* '*' matches a character in s1.*/
        }
        return 0; /* '*' doesn't match, so s1 and s2 are not identical. */
    }

    if (*s1 == *s2) {
        return wildcmp(s1 + 1, s2 + 1); /* Continue comparing the next characters. */
    }

    return 0; /* Characters don't match. */
}
