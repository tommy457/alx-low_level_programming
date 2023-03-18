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
			int num3 = 0;

			while (num3 <= 9)
			{
				if (num3 > num2 && num2 > num)
				{
					putchar (num + 48);
					putchar (num2 + 48);
					putchar (num3 + 48);
					if (num != 7 || num2 != 8 || num3 != 9)
					{
						putchar (44);
						putchar (32);
					}
				}
				num3++;
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
