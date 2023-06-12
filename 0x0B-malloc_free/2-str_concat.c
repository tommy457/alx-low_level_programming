#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: stringr
 * @s2: stringr
 * Return:  pointer to the s1 + s2 or NULLs
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	arr = malloc(sizeof(char) * (len));

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		arr[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		arr[j++] = s2[i];

	return (arr);
}
