#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */
int main(void)
{
	char ch[] = "_putchar\n";
	int i = 0;

	while (i <= 8)
	{
		_putchar(ch[i]);
		i++;
	}
	return (0);
}
