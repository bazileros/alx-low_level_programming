#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *node;
	size_t count;

	if (h == NULL)
		return (0);
	node = *h;
	count = 0;
	while (node)
	{
		count++;
		temp = node;
		node = node->next;
		free(temp);
	}
	*h = NULL;
	return (count);
}
