#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome using recursion.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s) {
    if (s == NULL || *s == '\0') {
        return 1; // An empty string is a palindrome.
    }

    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    return check_palindrome(s, 0, len - 1);
}

/**
 * check_palindrome - Helper function to check if a substring of a string is a palindrome recursively.
 * @s: The input string.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1; // Base case: It's a palindrome.
    }

    if (s[start] != s[end]) {
        return 0; // Characters at the current positions don't match.
    }

    return check_palindrome(s, start + 1, end - 1);
}
