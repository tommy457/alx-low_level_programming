#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: intger
 * @max: intger
 *
 * Return: pointer to array of integers or NULL
 *
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i, len;


	if (min > max)
		return (NULL);


	if (min < 0 && max < 0)
		len = (min - max) * -1;

	else
		len = max - min;

	arr = malloc((len + 1) * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}


	for (i = 0; i < len ; i++, min++)
	{
		arr[i] = min;
	}
	arr[len] = max;
	return (arr);
}
