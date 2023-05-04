#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to pointer of first node of listint_t
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	node = tmp->next;
	tmp->next = node->next;
	free(node);
	return (1);
}
