#include "hash_tables.h"

/**
 * hash_table_delete -a function that deletes a hash table.
 * @ht : the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int index = 0;

	for (; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
