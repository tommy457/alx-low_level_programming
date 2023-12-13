#include "search_algos.h"

int linear_search_(int *array, size_t start, size_t end, int value);
/**
 * jump_search - Searches for a value in an array of integers
 * using the Jump search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, end = size - 1, i, jump = sqrt(size);

	if (!array)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] < value)
		{
			idx = i;
			end = i + jump;
		}
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", idx, end);

	if (end >= size)
		end = size - 1;
	return (linear_search_(array, idx, end, value));
}

/**
 * linear_search_ - Searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @start: index where to start searching.
 * @end: index where to stop searching.
 * @value: value to search for.
 *
 * Return: first index where value is located or - 1.
 */

int linear_search_(int *array, size_t start, size_t end, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = start; idx <= end; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
