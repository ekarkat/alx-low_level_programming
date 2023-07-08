#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	hash_node_t *node;
    char *value;
	
	ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	printf("%lu\n", ht->size);
	node = ht->array[key_index((unsigned char *) "betty", 1024)];
	value = node->value;
	printf("%s\n", value);
	return (EXIT_SUCCESS);
}