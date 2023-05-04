#include "lists.h"

/**
 * sums_listint - calculates the sums of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sums
 */
int sums_listint(listint_t *head)
{
	int sums = 0;
	listint_t *temp = head;

	while (temp)
	{
		sums += temp->n;
		temp = temp->next;
	}

	return (sums);
}
