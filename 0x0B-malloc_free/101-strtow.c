#include <stdlib.h>

int count_words(char *str);
int word_length(char *str);
void free_words(char **words, int count);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
    char **words;
    int word_count, i, j, k, len, index;

    /* Return NULL if str is NULL or empty */
    if (str == NULL || *str == '\0')
        return NULL;

    /* Count the number of words in str */
    word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    /* Allocate memory for the array of strings (words) */
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL; /* Memory allocation failed */

    /* Split the string into words */
    index = 0;
    for (i = 0; i < word_count; i++)
    {
        /* Skip leading spaces */
        while (*str == ' ')
            str++;

        /* Calculate the length of the word */
        len = word_length(str);

        /* Allocate memory for the word */
        words[index] = (char *)malloc((len + 1) * sizeof(char));
        if (words[index] == NULL)
        {
            /* Free memory allocated for previous words */
            free_words(words, index);
            free(words);
            return NULL; /* Memory allocation failed */
        }

        /* Copy the word to the array */
        for (j = 0, k = 0; j < len; j++, k++)
        {
            words[index][k] = str[j];
        }
        words[index][k] = '\0'; /* Null-terminate the word */
        index++;

        /* Move to the next word */
        str += len;
    }

    words[index] = NULL; /* Null-terminate the array of words */

    return words;
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i] != '\0')
    {
        /* Skip leading spaces */
        while (str[i] == ' ')
            i++;

        /* Count the word */
        if (str[i] != '\0')
        {
            count++;
            /* Move to the end of the word */
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    return count;
}

/**
 * word_length - Calculates the length of a word
 * @str: The string containing the word
 *
 * Return: The length of the word
 */
int word_length(char *str)
{
    int len = 0;

    while (str[len] != ' ' && str[len] != '\0')
        len++;

    return len;
}

/**
 * free_words - Frees memory allocated for words
 * @words: The array of words
 * @count: The number of words
 */
void free_words(char **words, int count)
{
    int i;

    for (i = 0; i < count; i++)
        free(words[i]);
}
