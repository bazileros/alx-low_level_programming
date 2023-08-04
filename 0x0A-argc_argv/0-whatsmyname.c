#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of this program
 * @argc: number of arguments placed
 * @argv: array of arguments placed
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", *argv);

    return (0);
}
