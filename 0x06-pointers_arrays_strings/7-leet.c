#include "main.h"

/**
 * *leet  - encodes a string into 1337
 * @s: The string that will be encoded
 *
 * Return: The resulting string s.
 */

char *leet(char *s)
{
	int i = 0, j;
	char arr[] = "a4e3o0t7l7A4E3O0T7L1";

	while (s[i] != '\0')
	{
		j = 0;
		while (j <= 20)
		{
			if (s[i] == arr[j])
			{
				s[i] = arr[j + 1];
				break;
			}
			j += 2;
		}
		i++;
	}
	return (s);
}
