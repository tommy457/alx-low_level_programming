#include "main.h"
#include "_putchar.c"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: number
 * @y: number
 *
 * Return: x^y or -1 If y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
