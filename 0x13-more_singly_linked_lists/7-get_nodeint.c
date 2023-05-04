#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of the node, starting at 0
 *
 * Return: pointer to nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node;

	node = head;
	while (node != NULL)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}
