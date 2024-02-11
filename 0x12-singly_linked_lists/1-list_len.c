#include "your_header_file.h"  /* Include the header file where list_t is defined */
#include <stddef.h>  /* Include for size_t definition */

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;  /* Initialize count to 0 */
    const list_t *current = h;  /* Start from the head of the list */

    /* Iterate through each node of the list */
    while (current != NULL)
    {
        /* Increment count for each node */
        count++;

        /* Move to the next node */
        current = current->next;
    }

    /* Return the total count */
    return count;
}
