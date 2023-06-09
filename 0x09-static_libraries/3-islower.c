#include "main.h"
/**
 * _islower - check if c is lowercase
 * @c: The letter to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
