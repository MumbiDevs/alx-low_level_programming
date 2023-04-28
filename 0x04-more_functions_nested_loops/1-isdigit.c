#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (_isdigit(c)) {
        printf("The character '%c' is a digit.\n", c);
    } else {
        printf("The character '%c' is not a digit.\n", c);
    }
    return 0;
}
