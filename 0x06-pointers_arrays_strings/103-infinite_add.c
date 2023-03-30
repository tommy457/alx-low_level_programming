#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number
 * @n2:second number
 * @r:store result
 * @size_r:size of stored result
 *
 * Return: 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, num1, num2;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	num1 = 0;

	for (i -= 1, j -= 1, k = 0; size_r ; i--, j--, k++)
	{
		num2 = num1;

		if (i >= 0)
			num2 += n1[i] - '0';
		if (j >= 0)
			num2 += n2[j] - '0';
		if (i < 0 && j < 0 && num2 == 0)
		{
			break;
		}
		num1 = num2 / 10;
		r[k] = num2 % 10 + '0';
	}
	r[k] = '\0';

	if (i >= 0 || j >= 0 || num1)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		num1 = r[k];
		r[k] = r[l];
		r[l] = num1;
	}
	return (r);
}
