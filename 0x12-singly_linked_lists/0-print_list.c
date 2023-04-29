#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

/* This code below is a function named print_list which takes in a pointer to a list_t list as its only parameter. The function prints all the elements of the list and returns the number of nodes that have been printed. 

The first line of the function declares a size_t variable to store the number of nodes printed. This variable is initialized to 0. 

The function then enters a while loop which will run while the pointer h is not NULL. Inside the while loop, an if-else statement is used to check if the str element of the list node is NULL. If it is, it prints "[0] (nil)\n" to the console. Otherwise, it prints "[%u] %s\n", h->len, h->str to the console. 

At the end of the loop, the pointer h istHE set to point to the next list node, the size_t variable is incremented, and the loop runs again. 

Once the pointer h is NULL, indicating that all nodes have been printed, the function returns the value of the size_t variable. */

size_t print_list(const list_t *h)
{
 size_t s = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 s++;
 }

 return (s);
}
