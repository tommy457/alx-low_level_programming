#include "main.h"

/**
 * *_strncpy - copies a string.
 * @src: string to be copied
 * @dest: string to be copied to
 * @n: bytes from src;
 *
 * Return: a pointer of the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	dest[j] = '\0';

	return (dest);
}
