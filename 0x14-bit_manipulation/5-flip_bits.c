#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to be flipped to convert
 *             one number to another.
 * @n: The first number.
 * @m: The second number to convert to.
 *
 * Return: The number of bits that needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int diff = n ^ m; // XOR to find differing bits
    unsigned int counter = 0; // Counter to count the set bits

    // Iterate through the differing bits, clearing the least significant set bit in each iteration
    while (diff)
    {
        counter++; // Increment the counter for each set bit
        diff &= (diff - 1); // Clear the least significant set bit
    }

    return counter; // Return the count of set bits
}
