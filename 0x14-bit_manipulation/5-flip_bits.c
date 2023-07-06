#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: intger.
 * @m: intger
 *
 * Return: intger.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
			i++;
		xor >>= 1;
	}
	return (i);
}
