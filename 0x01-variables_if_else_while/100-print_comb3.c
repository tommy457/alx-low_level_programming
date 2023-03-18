#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		int num2 = 0;

		while (num2 <= 9)
		{
			if (num2 > num)
			{
				putchar (num + 48);
				putchar (num2 + 48);
				if (num != 8 || num2 != 9)
				{
					putchar (44);
					putchar (32);
				}
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
