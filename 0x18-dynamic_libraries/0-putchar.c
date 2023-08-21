#include <unistd.h>

/**
 * _putchar - outputs a character to the standard output
 * @c: The character to be displayed
 *
 * Return: Returns 1 on success.
 *         On failure, returns -1 and sets errno accordingly.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
