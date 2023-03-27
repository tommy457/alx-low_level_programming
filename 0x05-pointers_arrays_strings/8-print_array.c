#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: the number of elements of the array to be printed
 * @a: array to be printed
 * Return: Nothing
**/

void print_array(int *a, int n)
{
	int i = 0;

	while (n > 0)
	{
		printf("%d", a[i]);
		i++;
		n--;
		if (n >= 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
