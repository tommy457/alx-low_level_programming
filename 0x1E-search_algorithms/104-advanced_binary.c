#include "search_algos.h"

int binary_search_rec(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t start, size_t end);

/**
 * advanced_binary - Searches for a value in an array of integers
 * using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located or -1.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_rec(array, 0, size - 1, value));
}

/**
 * binary_search_rec - Reucurive function that searches for a value in an
 * array of integers.
 *
 * @array: pointer to the first element of the array.
 * @left: index where to start searching.
 * @right: index where to stop searching
 * @value: value to search for.
 *
 * Return: first index where value is located or -1.
 */

int binary_search_rec(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (left > right)
		return (-1);

	print_array(array, left, right);
	middle = (right + left) / 2;

	if (array[middle] == value && (middle == left || array[middle - 1] != value))
		return (middle);

	else if (array[middle] >= value)
		return (binary_search_rec(array, left, middle, value));

	else
		return (binary_search_rec(array, middle + 1, right, value));

	return (-1);
}

/**
 * print_array - Function that prints an array of integers.
 *
 * @array: pointer to the first element of the array.
 * @start: index where to start printing.
 * @end: index where to stop printing
 *
 * Return: NA.
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t idx;

	printf("Searching in array: ");

	for (idx = start; idx < end; idx++)
		printf("%d, ", array[idx]);

	printf("%d\n", array[idx]);
}
