#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: The number to be checked
 * Return: n%10 if n > 0,3 (-n)%10 if n < 0.
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
	{
		last_d *= -1;
	}
	_putchar (last_d + '0');
	return (last_d);
}
