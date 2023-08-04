#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - appends n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to append to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;
    unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
    /* Calculate the lengths of s1 and s2*/
    if (s1 != NULL)
    {
        while (s1[len1])
            len1++;
    }
    if (s2 != NULL)
    {
        while (s2[len2])
            len2++;
    }
    /*
     * Determine the size of the allocated memory based
     * on n and the lengths of s1 and s2
     */
    if (n < len2)
        s = malloc(sizeof(char) * (len1 + n + 1));
    else
        s = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!s)
        return (NULL);
    /* Copy s1 to the concatenated string*/
    while (i < len1)
    {
        s[i] = s1[i];
        i++;
    }
    /* Concatenate n bytes from s2 to the concatenated string*/
    while (n < len2 && i < (len1 + n))
        s[i++] = s2[j++];
    /* Concatenate the remaining bytes from s2 to the concatenated string*/
    while (n >= len2 && i < (len1 + len2))
        s[i++] = s2[j++];
    s[i] = '\0';
    return (s);
}
