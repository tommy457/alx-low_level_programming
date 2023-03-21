#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num1_half1, num1_half2, num2_half1, num2_half2;
	unsigned long f_half, s_half;

	for (i = 0; i < 92; i++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);

	 num1 = num2;
		num2 = sum;
	}
	num1_half1 = num1 / 10000000000;
	num2_half1 = num2 / 10000000000;
	num1_half2 = num1 % 10000000000;
	num2_half2 = num2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		f_half = num1_half1 + num2_half1;
		s_half = num1_half2 + num2_half2;
		if (num1_half2 + num2_half2 > 9999999999)
		{
			f_half += 1;
			s_half %= 10000000000;
		}

		printf("%lu%lu", f_half, s_half);
		if (i != 98)
			printf(", ");

		num1_half1 = num2_half1;
		num1_half2 = num2_half2;
		num2_half1 = f_half;
		num2_half2 = s_half;
	}
	printf("\n");
	return (0);
}
