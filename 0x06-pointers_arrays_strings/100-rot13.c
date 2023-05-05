#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
    int i, j;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; alphabet[j] != '\0'; j++)
        {
            if (str[i] == alphabet[j])
            {
                str[i] = rot13[j];
                break;
            }
        }
    }

    return str;
}
