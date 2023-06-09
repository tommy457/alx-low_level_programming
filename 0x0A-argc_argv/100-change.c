#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change.
 * @argc: number of arguments.
 * @argv: string pointer array to the arguments.
 *
 * Return: 0 or 1
 */


int main(int argc, char **argv)
{
	int i, result, sum = 0, COINS[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]);

	if (result < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)

		if (result / COINS[i])
		{
			sum += result / COINS[i];
			result %= COINS[i];
		}
	printf("%d\n", sum);
	return (0);
}
