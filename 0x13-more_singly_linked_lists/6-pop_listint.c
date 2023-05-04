#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * pop_listint - Deletes the head node of a listint_t linked list 
 * and returns the head node’s data.
 * @head: Head of the linked list.
 *
 * Return: head node’s data.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (!head || !*head)
        return (0);

    temp = *head;
    data = temp->n;
    *head = temp->next;
    free(temp);

    return (data);
}
