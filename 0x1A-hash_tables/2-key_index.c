#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key
 * @size : the size of the table
 * Return: return the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
