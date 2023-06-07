#include "main.h"

int _sqrt(int num, int i);

/**
 * _sqrt_recursion - function that returns the natural square r of a number.
 * @n: number
 *
 * Return: -1 If n does not have a natural square r.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, i));
}


/**
 * _sqrt - helper function for natural square root of a number.
 * @num: square root number.
 * @i: root
 *
 * Return: -1 if the number does not have a natural square root,
 */
int _sqrt(int num, int i)
{
	if ((i * i) == num)
		return (i);

	if (i == num / 2)
		return (-1);

	return (_sqrt(num, i + 1));
}

