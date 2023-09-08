#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);
/**
 * hash_table_set - addes new node to hash table.
 * @ht: hash table.
 * @key: key to look for.
 * @value: value associated with the key
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new_node;
	char *value_cpy;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size) % ht->size;

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			value_cpy = strdup(value);
			if (value_cpy == NULL)
			{
				return (0);
			}
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
/**
 * create_node - creates a new node in.
 * @key: key to add.
 * @value: value associated with the key
 *
 * Return: pointer to new node or 0.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}
	new_node->next = NULL;

	return (new_node);
}
