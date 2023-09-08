#include "hash_tables.h"

/**
 * key_index - creates a hash table.
 * @size: size of the array.
 * @key: key to look for.
 *
 * Return: index of a key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
