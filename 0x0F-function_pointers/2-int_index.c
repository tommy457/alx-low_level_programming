#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer ti func
 *
 * Return: index of integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	if (size > 0 && cmp != NULL && array != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
