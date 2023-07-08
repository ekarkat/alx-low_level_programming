#include "hash_tables.h"
/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht : the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	char *delim = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node != NULL)
		{
			printf("%s'%s': '%s'", delim, node->key, node->value);
			delim = ", ";
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
