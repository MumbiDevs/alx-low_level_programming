#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix
 *                  of integers
 *
 * @a: The pointer to the first element of the matrix
 * @size: The size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    /* Iterate through each element of the matrix */
    for (i = 0; i < size * size; i++)
    {
        /* If the element is on the main diagonal, add it to sum1 */
        if (i % (size + 1) == 0)
        {
            sum1 += *(a + i);
        }

        /* If the element is on the secondary diagonal, add it to sum2 */
        if (i % (size - 1) == 0 && i != 0 && i != size * (size - 1))
        {
            sum2 += *(a + i);
        }
    }

    /* Print the sums */
    printf("Sum of main diagonal: %d\n", sum1);
    printf("Sum of secondary diagonal: %d\n", sum2);
}
