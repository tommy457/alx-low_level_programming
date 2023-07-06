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

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n & (1 << index))
		return (1);

	return (0);
}
