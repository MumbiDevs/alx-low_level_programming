#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number and store it in n
    n = rand() % (2 * RAND_MAX) - RAND_MAX;

    // Print the randomly generated number
    printf("The number: %d\n", n);

    // Check if the number is positive, zero, or negative and print the corresponding message
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return 0;
}
