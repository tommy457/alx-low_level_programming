#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int num1 = 0;

	while (num1 <= 99)
	{
		int num2 = 0;

		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(32);
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 98 || num2 != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
