#include <stdio.h>

/**
 * main - Find and print largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int factor = 3;
	long int prime = 612852475143;
	long int prime_factor = 0;

	while (prime != 1)
	{
		if (prime % factor == 0)
		{
			prime = prime / factor;
			if (factor > prime_factor)
				prime_factor = factor;

		}
		else
			factor++;
	}
	printf("%ld\n", prime_factor);
	return (0);
}
