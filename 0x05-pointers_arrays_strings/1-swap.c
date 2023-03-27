#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * and updates the value it points to to 98.
 * @a: the pointer to first integer
 * @b: the pointer to second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
