#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: intger
 *
 * Return: pointer to the allocated memory or 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	exit(98);
}
