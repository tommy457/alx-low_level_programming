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

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
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
