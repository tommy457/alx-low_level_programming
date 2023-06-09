#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments.
 * @argv: string pointer array to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}
