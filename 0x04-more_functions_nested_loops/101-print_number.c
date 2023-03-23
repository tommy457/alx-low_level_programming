#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int var = n;

	if (n < 0)
	{
		_putchar('-');
		var = -var;
	}

	if (var / 10)
	{
		print_number(var / 10);
	}
	_putchar((var % 10) + '0');
}
