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
	char *key;

	ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	printf("the size of the table is : %lu\n", ht->size);
	node = ht->array[key_index((unsigned char *) "betty", 1024)];
	value = node->value;
	key = node->key;
	printf("the index of %s is %lu\n", "betty", key_index((unsigned char *) "betty", 1024));
	printf("the vlaue is \t%s\n", value);
	printf("the key is \t%s\n", key);
	
	printf("-------------------------------\n");
    hash_table_set(ht, "betty", "vape");
	printf("the index of %s is %lu\n", "betty", key_index((unsigned char *) "betty", 1024));
	printf("the vlaue is \t%s\n", node->value);
	printf("the key is \t%s\n", node->key);
	printf("the vlaue is \t%s\n", node->next->value);
	printf("the key is \t%s\n", node->next->key);


	
	return (EXIT_SUCCESS);
}