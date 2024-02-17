#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal number
 * @index: index position to change, starting from 0
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1); /* Index out of bounds */

	mask = 1UL << index; /* Create a mask with the bit at index set to 1 */

	*n &= ~mask; /* Set the bit at index to 0 */

	return (1);
}
