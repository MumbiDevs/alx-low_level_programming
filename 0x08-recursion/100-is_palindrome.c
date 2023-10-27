#include <stdio.h>
#include "stdio.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s) {
    int len, i, j;

    if (s == NULL) {
        return 0; /* Handle the case of a NULL string. */
    }

    len = 0;
    while (s[len] != '\0') {
        len++;
    }

    i = 0;
    j = len - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return 0; /* The string is not a palindrome. */
        }
        i++;
        j--;
    }

    return 1; /* The string is a palindrome. */
}
