#include "main.h"

/**
 * reverse_array - concatenates 2 strings.
 * @a: array to be reverced
 * @n: number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int len, tmp, i, j;

	i = n / 2;
	len = n - 1;
	j = 0;
	while (j < i)
	{
		tmp = a[j];
		a[j] = a[len - j];
		a[len - j] = tmp;
		j++;
	}
}
