#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct dog to print
*
* Description: This function prints the members of a struct dog.
*              If any member is NULL, it prints "(nil)" instead.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

char *name = d->name != NULL ? d->name : "(nil)";
char *owner = d->owner != NULL ? d->owner : "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}

