#include <stdio.h>

/**
 * main - prints the name of the file it was compiled with.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("the name of the file it was compiled from: %s\n", __FILE__);
	return (0);
}
