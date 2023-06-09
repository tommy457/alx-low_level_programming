#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments.
 * @argv: string pointer array to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
