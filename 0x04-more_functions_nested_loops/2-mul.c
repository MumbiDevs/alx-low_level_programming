#include <stdio.h>

int mul(int a, int b) {
    return a * b;
}

int main() {
    int a = 5;
    int b = 10;
    int result = mul(a, b);
    printf("%d * %d = %d\n", a, b, result);
    return 0;
}
