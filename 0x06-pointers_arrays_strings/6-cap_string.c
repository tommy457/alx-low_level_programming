#include "main.h"
/**
 * cap_string - capitalizes all words of arr string
 * @s: The string that will be capitalized
 * Return: The resulting string s.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char arr[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (s[i] >= 'arr' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (arr[j] == s[i - 1])
						s[i] -= 32;
				}
			}
		}
		i++;
	}
	return (s);
}
