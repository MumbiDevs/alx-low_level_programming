#include "list.h"  /* Include the header file where list_t is defined */
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: void
 */
void print_list(list_t *head)
{
    list_t *current = head;  /* Start from the head of the list */

    /* Iterate through each node of the list */
    while (current != NULL)
    {
        /* Print the data of the current node */
        printf("%s\n", current->str);

        /* Move to the next node */
        current = current->next;
    }
}
