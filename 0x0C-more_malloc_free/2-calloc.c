#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocate memory for array, using malloc
 * @nmemb: intger
 * @size: intger
 *
 * Return: pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *len;
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	len = ptr;

	for (i = 0; i < nmemb ; i++)
	{
		len[i] = 0;
	}

	return (ptr);
}
