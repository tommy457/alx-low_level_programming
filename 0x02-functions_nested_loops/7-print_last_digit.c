#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: The number to be checked
 * Return: n%10 if n > 0,3 (-n)%10 if n < 0.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else if (n < 0)
	{
		return ((-n) % 10);
	}
}
