#include "main.h"
/**
 * _isalpha - check if c is alphabetic character
 * @c: The letter to be checked
 * Return: 1 if c is alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
