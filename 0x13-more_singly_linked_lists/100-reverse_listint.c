#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position
 * @head: Pointer to the pointer of the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
 listint_t *aux, *tmp;
 unsigned int i;

 if (!*head)
  return (-1);

 aux = *head;

 if (index == 0)
 {
  *head = aux->next;
  free(aux);
  return (1);
 }

 for (i = 0; aux && i < index - 1; i++)
  aux = aux->next;

 if (!aux || !(aux->next))
  return (-1);
 
 tmp = aux->next;
 aux->next = tmp->next;
 free(tmp);

 return (1);
}
