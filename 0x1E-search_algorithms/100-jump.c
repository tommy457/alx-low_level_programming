#include "search_algos.h"

int linear_search_(int *array, size_t start, size_t end, int value);
/**
 * jump_search - Searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx, jump = sqrt(size);

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx += jump)
	{

		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] <= value && array[idx + jump] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", idx, idx + jump);
			return (linear_search_(array, idx, idx + jump, value));
		}
		if (idx + jump > size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", idx, idx + jump);
			return (linear_search_(array, idx, size - 1, value));
		}

	}
	return (-1);
}

/**
 * linear_search_ - Searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @start: start index.
 * @end: stop index.
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
