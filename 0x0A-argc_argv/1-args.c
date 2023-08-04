#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to this program
 * @argc: number of arguments placed
 * @argv: array of arguments placed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
