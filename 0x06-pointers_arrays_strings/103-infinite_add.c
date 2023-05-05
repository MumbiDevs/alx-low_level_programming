#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int lenr = size_r - 1; // leave room for the null terminator
    int carry = 0;
    
    // iterate over the two input strings from right to left
    while (len1 > 0 || len2 > 0)
    {
        int d1 = (len1 > 0) ? (n1[--len1] - '0') : 0;
        int d2 = (len2 > 0) ? (n2[--len2] - '0') : 0;
        int sum = d1 + d2 + carry;
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        if (lenr <= 0) {
            return 0; // result too large for buffer
        }
        r[--lenr] = sum + '0';
    }
    
    // add any leftover carry over at the end
    if (carry > 0)
    {
        if (lenr <= 0) {
            return 0; // result too large for buffer
        }
        r[--lenr] = carry + '0';
    }
    
    // pad the result with leading zeroes if necessary
    while (lenr > 0 && lenr < size_r - 1)
    {
        r[--lenr] = '0';
    }
    
    // add null terminator and return pointer to result
    r[size_r - 1] = '\0';
    return &r[lenr];
}
