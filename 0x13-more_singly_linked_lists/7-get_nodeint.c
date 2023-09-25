#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve (starting at 0).
 * Return: A pointer to the nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *current = head;

    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    return (i == index ? current : NULL);
}
