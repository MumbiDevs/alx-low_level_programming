#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return (0);

    while (*b != '\0')
    {
        if (*b == '0' || *b == '1')
        {
            result = result * 2 + (*b - '0');
            b++;
        }
        else
        {
            return (0); /* Invalid character encountered */
        }
    }

    return (result);
}

int main(void)
{
    const char *binary_string = "101010"; /* Example binary string */
    unsigned int result = binary_to_uint(binary_string);
    printf("Binary %s is equivalent to unsigned int: %u\n", binary_string, result);
    return (0);
}
