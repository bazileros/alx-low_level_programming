#include <stdlib.h>
#include "dog.h"

/**
* _strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int name_len = _strlen(name);
int owner_len = _strlen(owner);

dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return NULL;

new_dog->name = malloc(sizeof(char) * (name_len + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return NULL;
}
_strcpy(new_dog->name, name);

new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return NULL;
}
_strcpy(new_dog->owner, owner);

new_dog->age = age;

return new_dog;
}

