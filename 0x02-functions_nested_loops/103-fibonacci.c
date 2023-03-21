#include <stdio.h>
/**
  * main - Prints the sum of Even Fibonacci numbers
  *
  * Return: Nothing
  */
int main(void)
{
	int i = 0;
	long one = 1, two = 2, sum = two;

	while (two + one < 4000000)
	{
		two += one;

		if (two % 2 == 0)
			sum += two;

		one = two - one;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}

