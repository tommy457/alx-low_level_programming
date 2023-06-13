#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenate all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, m, j, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}



	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[m++] = av[i][j];
		}
		str[m++] = '\n';
	}
	str[len] = '\0';
	return (str);

}


