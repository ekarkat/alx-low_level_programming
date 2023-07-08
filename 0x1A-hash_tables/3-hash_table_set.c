#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht : hash_table
 * @key : the key
 * @value : the value
 * Return: index
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t *));
	

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{	
		node->value = strdup(value);
		node->key = strdup(key);
		node->next = NULL;

		ht->array[index] = node;
		return (1);
	}
	else
	{
		node->key = ht->array[index]->key;
		node->value = ht->array[index]->value;
		node->next = ht->array[index]->next;
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = node;

		return (1);
	}
	return (0);
}
