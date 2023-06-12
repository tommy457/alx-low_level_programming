#include <stdlib.h>
#include "main.h"

/**
 * _strdup - eturns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: stringr
 * Return: NULL if str = NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *arr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		arr[i] = str[i];

	arr[len] = '\0';

	return (arr);
}
