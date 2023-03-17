#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar (num);
		putchar (44);
		putchar (32);
		num++;
	}
	putchar('\n');
	return (0);
}
