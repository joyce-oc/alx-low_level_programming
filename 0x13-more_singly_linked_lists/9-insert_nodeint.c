#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer value to store in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    /* Create the new node and initialize its values */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    /* If idx is 0, make the new node the new head */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    /* Traverse the list to find the node before the specified index */
    for (i = 0; current != NULL && i < idx - 1; i++)
        current = current->next;

    /* If the index is out of range, free the new_node and return NULL */
    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node between the current and the next node */
    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}

