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
	int i, j, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
