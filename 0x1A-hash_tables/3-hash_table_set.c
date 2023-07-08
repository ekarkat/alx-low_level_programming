#include "hash_tables.h"
#include <string.h>

/**
 * add_node_head - add node at the head of a list
 * @key : the key
 * @value : the value
 * @head : the head of the list
*/

int add_node_head(hash_node_t *head, const char *key, const char *value)
{

}

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
	char *value_cp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);
	node->value = value_cp; 
	node->key = key;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		
	}	
}
