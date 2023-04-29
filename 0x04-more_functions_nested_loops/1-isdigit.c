#include <stdio.h>
#include (main.h)

int _isdigit(int c);

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (_isdigit(c)) {
        printf("%c is a digit\n", c);
    } else {
        printf("%c is not a digit\n", c);
    }
    return 0;
}

int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}
