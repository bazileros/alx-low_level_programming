#include "lists.h"

/**
 * add_nodeint - adds a nu node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that nu node
 *
 * Return: pointer to the nu node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nu;

	nu = malloc(sizeof(listint_t));
	if (!nu)
		return (NULL);

	nu->n = n;
	nu->next = *head;
	*head = nu;

	return (nu);
}

