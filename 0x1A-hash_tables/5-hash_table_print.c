#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 *
 * Return: NA.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char flag = 0;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': ", node->key);
				printf("'%s'", node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
