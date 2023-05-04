/* Insert a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) {
    listint_t *new_node;
    listint_t *current;
    listint_t *prev;
    unsigned int i = 0;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    current = *head;
    prev = NULL;

    if (idx == 0) {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    while (current != NULL && i < idx) {
        prev = current;
        current = current->next;
        i++;
    }

    if (current == NULL)
        return (NULL);

    prev->next = new_node;
    new_node->next = current;

    return (new_node);
}
