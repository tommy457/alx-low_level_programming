#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 *
 * Return: NA.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *prev;
	hash_table_t *_ht = ht;

	if (!ht)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				prev = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = prev;
			}
		}
		i++;
	}
	free(_ht->array);
	free(_ht);
}
