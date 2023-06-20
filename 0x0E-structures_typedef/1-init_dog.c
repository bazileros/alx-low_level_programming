#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*
* Description: This function initializes the members of a struct dog.
*              If @d is NULL, it allocates memory for a new struct dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
/* Error handling if memory allocation fails */
printf("Failed to allocate memory for struct dog.\n");
return;
}
}

d->name = name;
d->age = age;
d->owner = owner;
}

