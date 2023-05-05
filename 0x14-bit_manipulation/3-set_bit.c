#include "main.h"

/**
 * set_bit - get bit in a specific index
 * @n : the number
 * @index : the index
 * Return: return the bit value 0 or 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | 1;
	return (1);
}
