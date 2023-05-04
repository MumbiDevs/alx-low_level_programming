#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return (len);
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */

int main(void)
{
    char str[] = "Hello, world!";
    int len = _strlen(str);

    printf("Length of string \"%s\": %d\l
