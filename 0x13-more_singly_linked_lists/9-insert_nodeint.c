#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nu node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the nu node is added
 * @n: data to insert in the nu node
 *
 * Return: pointer to the nu node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nu;
	listint_t *tmp = *head;

	nu = malloc(sizeof(listint_t));
	if (!nu || !head)
		return (NULL);

	nu->n = n;
	nu->next = NULL;

	if (idx == 0)
	{
		nu->next = *head;
		*head = nu;
		return (nu);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nu->next = tmp->next;
			tmp->next = nu;
			return (nu);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
