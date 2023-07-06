#include "main.h"

/**
 * get_endianness - checks the endianness of a machine.
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);

	return (0);
}
