#include "main.h"
#include <stddef.h>

/**
 * _strchr - find first occurrence of a character in a string
 * @s: input string
 * @c: character to search for
 * Return: pointer to the first occurrence of the character
 * or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

return (NULL);
}

