#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size : the size of the hash table
 * Return: the pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (; index < size; index++)
		hash_table->array[index] = NULL;

	return (hash_table);
}
