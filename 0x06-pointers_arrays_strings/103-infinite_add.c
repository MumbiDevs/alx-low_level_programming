#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    char n1[] = "123456789";
    char n2[] = "987654321";
    char r[20];
    char *result;

    result = infinite_add(n1, n2, r, sizeof(r));

    if (result != 0)
    {
        printf("%s + %s = %s\n", n1, n2, result);
    }
    else
    {
        printf("Error: result does not fit in buffer\n");
    }

    return (0);
}
