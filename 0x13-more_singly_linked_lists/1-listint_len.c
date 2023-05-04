#include <lists.h>
/*
 * This function returns the number of elements in a linked listint_t list.
 *
 * Input:
 *      *h: A pointer to the head of the linked list.
 *
 * Output:
 *      The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t NumbR = 0;
    const listint_t *current = h;

    while (current != NULL)
    {
        NumbR++;
        current = current->next;
    }

    return NumbR;
}
