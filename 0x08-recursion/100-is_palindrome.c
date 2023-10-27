#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s) {
    if (s == NULL) {
        return 0; // Handle the case of a NULL string.
    }

    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0; // The string is not a palindrome.
        }
    }

    return 1; // The string is a palindrome.
}

int main() {
    char str1[] = "racecar";
    char str2[] = "hello";
    char str3[] = "";

    printf("%s is a palindrome: %d\n", str1, is_palindrome(str1));
    printf("%s is a palindrome: %d\n", str2, is_palindrome(str2));
    printf("An empty string is a palindrome: %d\n", is_palindrome(str3));

    return 0;
}
