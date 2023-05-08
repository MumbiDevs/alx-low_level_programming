#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Print a chessboard to the console using a 2D array of
 *                    characters
 *
 * @a: The 2D array of characters representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
    int row, col;

    /* Iterate through each row and column of the array */
    for (row = 0; row < 8; row++)
    {
        for (col = 0; col < 8; col++)
        {
            /* Print the current element in the array */
            printf("%c", a[row][col]);
        }

        /* Move to the next row and print a newline character */
        printf("\n");
    }
}
