#include "main.h"
#include <stdio.h>

void _bit_on_or_off(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number.
 * @n: integerr.
 *
 * Return: NA.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_bit_on_or_off(n);
}

/**
 * _bit_on_or_off - checks if bit is on or off.
 * @n: integer.
 *
 * Return: NA.
 */
void _bit_on_or_off(unsigned long int n)
{
	if (n < 1)
		return;

	_bit_on_or_off(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
