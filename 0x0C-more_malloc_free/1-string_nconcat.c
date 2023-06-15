#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: intger
 *
 * Return: pointer to the allocated memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int i, len, j;

	if (*s2 == NULL)
		return(s1)

	len = strlen(s1);
	str = malloc((n + len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; i < n + len; i++, j++)
	{
		str[i] = s2[j];
	}
	str[n + len] = '\0';
	return (str);


}
