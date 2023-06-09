#include <stdlib.h>
#include "main.h"

/**
 * _get_words_count - counts number of words in a string
 * @s: s
 * Return: words count
 */
int _get_words_count(char *s)

{
	int i, words;

	for (i = words = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && s[i + 1] == ' ')
			words += 1;
	}
	return (words);
}

/**
 * _get_words_len - helper function that counts length of a string.
 * @s: string
 * @start: intger
 * Return: length
 */

int _get_words_len(int start, char *s)
{
	int i, len = 0;

	for (i = start; s[i] != ' '; i++)
		len++;

	return (len);

}

/**
 * strtow - function that splits a string into words.
 * @str: string
 * Return: pointer to an array of strings (words) or NULL
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, k, words, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = _get_words_count(str);

	arr = malloc(sizeof(char *) * words);

	if (arr == NULL || words == 0)
	{
		free(arr);
		return (NULL);
	}
	i = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ' && (str[j - 1] == ' ' || j == 0))
		{
			len = _get_words_len(j, str);
			arr[i] = malloc(sizeof(char) * len);
			if (arr[i] == NULL)
			{
				for (; i > 0; i--)
					free(arr[i]);
				free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (k = 0; k < len; k++)
			{
				arr[i][k] = str[k + j];
			}
			arr[i][k] = '\0';
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
