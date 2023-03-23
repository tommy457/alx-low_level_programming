#include "main.h"
#include "_putchar.c"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size:  is the size of the square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = size;
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
