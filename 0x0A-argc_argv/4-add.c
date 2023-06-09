#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers..
 * @argc: number of arguments
 * @argv: string pointer array to the arguments.
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	for (i = 1; i < argc; i++)
	{

		if (atoi(argv[i]))
		{
			res += atoi(argv[i]);

		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
