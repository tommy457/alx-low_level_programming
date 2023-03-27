#include "main.h"

/**
 * print_rev - function that prints a string, followed by a new line, to stdout
 * @s: the string to be reverced
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
