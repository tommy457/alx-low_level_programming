#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: pointer to a func
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (size > 0 && action != NULL && array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
