#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    /* If index is 0, delete the current head node */
    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }

    /* Traverse to the node just before the index */
    for (i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    /* If the index is out of range or the node doesn't exist, return -1 */
    if (current == NULL || current->next == NULL)
        return (-1);

    /* Delete the node at the specified index */
    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

