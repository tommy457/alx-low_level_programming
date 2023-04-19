#include "main.h"

int _sqrt(int num, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, root));
}

/**
 * _sqrt - natural square root of a number.
 * @num: square root number
 * @root: root
 *
 * Return: If the number does not have a natural square root, return -1.
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (_sqrt(num, root + 1));
}
