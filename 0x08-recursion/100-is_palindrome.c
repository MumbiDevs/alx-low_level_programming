#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end);
int is_palindrome(char *s) {
    if (s == NULL) {
        return 0; // Handle the case of a NULL string.
    }

    int len = strlen(s);

    if (len <= 1) {
        return 1; // A string with 0 or 1 character is a palindrome.
    }

    return is_palindrome_recursive(s, 0, len - 1);
}

int is_palindrome_recursive(char *s, int start, int end) {
    if (start >= end) {
        return 1; // Base case: It's a palindrome.
    }

    if (s[start] != s[end]) {
        return 0; // Characters at the current positions don't match.
    }

    return is_palindrome_recursive(s, start + 1, end - 1);
}
