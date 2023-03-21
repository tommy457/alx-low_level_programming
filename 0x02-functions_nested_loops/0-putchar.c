#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char ch[] = "_putchar";

	for (int i = 0 ; i <= 7 ; i++)
	{
		putchar (ch[i]);
	}
	putchar ('\n');
	return (0);
}
