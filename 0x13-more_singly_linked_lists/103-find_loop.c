/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return (slow);
    }

    return (NULL);
}
