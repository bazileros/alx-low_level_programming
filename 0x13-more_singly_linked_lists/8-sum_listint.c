#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the listint_t list
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
