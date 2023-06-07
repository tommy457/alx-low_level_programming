#include "main.h"

int check_palindrome(char *s, int left, int right);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function Checks if a string is palindrome.
 * @s: string
 *
 * Return: 1 if s is palindrome, 0 otherwisw
 */
int is_palindrome(char *s)
{
	int j = _strlen_recursion(s) - 1;
	int i = 0;

	if (j == 0)
		return (1);

	return (check_palindrome(s, i, j));
}

/**
 * check_palindrome - helper function Checks if a string is palindrome.
 * @s: string.
 * @left: number.
 * @right: number.
 * Return: 0 or 1.
 */
int check_palindrome(char *s, int left, int right)
{
	if (left > right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * _strlen_recursion - helper function that returns the length of a string
 * @s: string
 * Return: len of s
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
