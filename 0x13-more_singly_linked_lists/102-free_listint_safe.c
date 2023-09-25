#include <stdlib.h> 
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next_node;
    size_t node_count = 0;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        node_count++;
        next_node = current->next;
        free(current);
        current = next_node;

        /* Detect a loop and break the loop to avoid infinite recursion */
        if (current == *h)
        {
            *h = NULL;
            break;
        }
    }

    return (node_count);
}

