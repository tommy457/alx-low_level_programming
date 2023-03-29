#include "main.h"

/**
 * string_toupper - replace all lowercase letters to uppercase
 * @s: The string that will be checked for lowercase letters
 *
 * Return: The resulting string s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
