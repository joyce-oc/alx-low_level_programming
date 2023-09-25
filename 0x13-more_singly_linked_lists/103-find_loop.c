#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* If the slow and fast pointers meet, there is a loop */
        if (slow == fast)
        {
            /* Move slow back to the head and advance both pointers at the same rate */
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            /* Return the address of the node where the loop starts */
            return slow;
        }
    }

    /* If no loop is found, return NULL */
    return NULL;
}

