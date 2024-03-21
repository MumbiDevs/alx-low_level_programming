#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    if (current == NULL)
        return -1;

    if (current->next != NULL)
        current->next->prev = current->prev;
    if (current->prev != NULL)
        current->prev->next = current->next;

    free(current);

    return 1;
}
