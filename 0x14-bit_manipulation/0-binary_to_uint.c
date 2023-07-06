#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number.
 *
 * Return: converted number, 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int idx = 0, num = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (idx < i)
	{
		num = num << 1;
		if (b[idx] == '1')
			num += 1;
		idx++;
	}
	return (num);
}
