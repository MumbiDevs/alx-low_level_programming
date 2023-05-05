/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store the result
 * @size_r: Size of the result buffer
 *
 * Return: Pointer to the result buffer, or 0 if the result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int sum = 0;
    int i, j;

    /* Make sure the result buffer is large enough to hold the sum */
    if (len1 + len2 > size_r - 1)
    {
        return (0);
    }

    /* Add the numbers digit by digit, starting from the least significant digit */
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
    {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[i + j + 1] = (sum % 10) + '0';
    }

    /* Add the null terminator to the result buffer */
    r[len1 + len2] = '\0';

    /* Reverse the order of the digits in the result buffer */
    for (i = 0, j = len1 + len2 - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return (r);
}
