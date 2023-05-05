#include "main.h"
#include <stdio.h>

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (_isupper(c)) {
        printf("The character '%c' is uppercase.\n", c);
    } else {
        printf("The character '%c' is not uppercase.\n", c);
    }
    return 0;
}
