#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    // Check if the array is NULL
    if (array == NULL) {
        return -1;
    }

    // Loop through each element in the array
    for (size_t i = 0; i < size; i++) {
        // Print the current value being checked
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);

        // If the current element is the value we're searching for, return its index
        if (array[i] == value) {
            return i;
        }
    }

    // If the value is not found, return -1
    return -1;
}
