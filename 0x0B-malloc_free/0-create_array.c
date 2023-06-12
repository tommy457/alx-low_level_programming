#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: charecter
 * Return: NULL if size = 0, pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	while (size--)
		arr[size] = c;
	if (arr)
		return (arr);
	return (NULL);
}
