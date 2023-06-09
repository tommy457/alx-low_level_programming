#include "main.h"
#include "string.h"

/**
 * *_strcat - concatenates two strings
 * @src: first string
 * @dest: second string
 *
 * Return: a pointer of the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int j, i = strlen(dest);

	for (j = 0 ; src[j] ; j++)
	{
		dest[i++] = src[j];
	}

	return (dest);
}
