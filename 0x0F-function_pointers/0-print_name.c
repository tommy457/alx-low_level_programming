#include "function_pointers.h"

/**
 * _strlen - function calculate the length of string
 * @s: string
 *
 * Return: len
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * f - function that prints a name
 * @s: string
 *
 * Return: Nothing
 */
void f(char *s)
{
	unsigned int i, len = _strlen(s);

	for (i = 0; i <= len; i++)
		_putchar(s[i]);
}


/**
 * print_name - function that prints a name
 * @name: string
 * @f: pointer to func
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
