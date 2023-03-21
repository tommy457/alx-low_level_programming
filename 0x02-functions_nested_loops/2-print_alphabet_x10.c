#include "main.h"
/**
 * print_alphabet_x10 - print alphabets a-z 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
