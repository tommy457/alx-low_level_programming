#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @src: the string to be copied
 *
 * Return: *dest
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
