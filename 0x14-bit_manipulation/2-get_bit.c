#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: intger.
 * @index: intger
 *
 * Return: 0, 1 or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0)
	{
		n >>= 1;
		if (n < 1)
			return (-1);
		index--;
	}
	if (n & 1)
		return (1);
	else
		return (0);
}
