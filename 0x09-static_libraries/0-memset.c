#include "main.h"

/**
 * _memset - Populate a memory block with a designated value.
 * @s: The memory to be filled will start at the address
 * @b: the desired value
 * @n: Amount of bytes that need to be modified.
 *
 * Return: Updated the array with a new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n > 0)
    {
        *ptr = b;
        ptr++;
        n--;
    }
    return (s);
}
