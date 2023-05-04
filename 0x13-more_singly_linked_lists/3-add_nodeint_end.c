#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the nu element
 *
 * Return: pointer to the nu node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nu;
	listint_t *temp = *head;

	nu = malloc(sizeof(listint_t));
	if (!nu)
		return (NULL);

	nu->n = n;
	nu->next = NULL;

	if (*head == NULL)
	{
		*head = nu;
		return (nu);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nu;

	return (nu);
}

