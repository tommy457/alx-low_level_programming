#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string to printed
 *
 * Return: Nothing
**/

void puts_half(char *str)
{
	int i, len = strlen(str);

	if (len % 2 != 0)
	{
		i = (len / 2) + 1;
	}
	else
	{
		i = len / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
