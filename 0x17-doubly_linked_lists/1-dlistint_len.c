#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h != NULL)
    {
        nodes++;
        h = h->next;
    }

    return nodes;
}
