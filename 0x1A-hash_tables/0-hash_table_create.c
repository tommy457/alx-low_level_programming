#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: pointer to the newly created hash table or NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable;

	HashTable = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	HashTable->size = size;
	HashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (HashTable->array == NULL)
		return (NULL);
	return (HashTable);
}

