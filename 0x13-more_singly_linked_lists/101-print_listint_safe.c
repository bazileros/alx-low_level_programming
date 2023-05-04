#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tmp = head;
	const listint_t *list = head;

	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		if (tmp <= tmp->next)
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			break;
		}
		tmp = tmp->next;
	}

	free((void *)list);
	exit(98);
	return (count);
}
