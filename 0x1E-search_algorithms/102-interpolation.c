#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers
 * using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, probe;

	if (!array)
		return (-1);

	while (start <= end)
	{
		probe = start + (end - start) * (value - array[start]) /
			(array[end] - array[start]);
		if (value >= array[start] && value <= array[end])
		{
			printf("Value checked array[%lu] = [%d]\n", probe, array[probe]);

			if (array[probe] == value)
				return (probe);

			else if (array[probe] < value)
				start = probe + 1;

			else
				end = probe - 1;
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", probe);
			return (-1);
		}
	}
	return (-1);
}
