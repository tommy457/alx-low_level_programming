#include "main.h"

/**
 * _prime - helper function Checks if a number is prime.
 * @i: number.
 * @j: number.
 *
 * Return: 0 or 1.
 */
int _prime(int i, int j)
{
	if (i % j == 0)
		return (0);
	if (j == i / 2)
		return (1);
	return (_prime(i, j + 1));
}

/**
 * is_prime_number - Check for prime number.
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int j = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (_prime(n, j));
}
