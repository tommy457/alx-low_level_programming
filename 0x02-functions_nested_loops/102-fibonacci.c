#include <stdio.h>
/**
 * main - Print first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long one = 1, two = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", one);
		else if (i == 1)
			printf(", %ld", two);
		else
		{
			two += one;
			one = two - one;
			printf(", %ld", two);
		}

		++i;
	}

	printf("\n");
	return (0);
}
