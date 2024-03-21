#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *new_node, *current;

    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    current = *h;
    for (i = 0; current != NULL && i < idx - 1; i++)
        current = current->next;

    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return new_node;
}
