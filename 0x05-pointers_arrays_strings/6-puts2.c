#include "main.h"

/**
 * puts2 -prints every other , starting with the 1 character,
 * @str: string to printed
 *
 * Return: Nothing
**/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
