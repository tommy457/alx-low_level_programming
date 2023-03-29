#include "main.h"
#include "string.h"

/**
 * *_strcat - concatenates 2 strings.
 * @src: string to be appended
 * @dest: string to be appended to
 * @n: bytes from src;
 *
 * Return: a pointer of the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i = strlen(dest);

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
