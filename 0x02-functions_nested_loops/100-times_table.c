#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int num1 = 0, num2, res, one, ten, hun;

	if (n >= 0 && n < 16)
	{
		while (num1 <= n)
		{
			num2 = 0;

			while (num2 <= n)
			{
				res = num1 * num2;
				one = res % 10;
				ten = res % 100 / 10;
				hun = res / 100;
				if (hun == 0 && num2 != 0)
				{
					_putchar(' ');
					if (ten == 0)
						_putchar(' ');
					else
						_putchar(ten + '0');
				}
				else if (hun != 0)
				{
					_putchar(hun + '0');
					_putchar(ten + '0');
				}
				_putchar(one + '0');
				if (num2 != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				num2++;
			}
			_putchar('\n');
			num1++;
		}
	}
}
