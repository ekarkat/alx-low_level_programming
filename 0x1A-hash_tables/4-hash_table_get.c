#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht : hash table
 * @key : the key
 * Return: the value assosieted
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			break;
		node = node->next;
	}
	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
