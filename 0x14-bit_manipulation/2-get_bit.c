#include "main.h"

/**
 * get_bit - get bit in a specific index
 * @n : the number
 * @index : the index
 * Return: return the bit value 0 or 1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	num = n >> index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n == 0 && index == 0)
		return (0);

	if ((num & 1) == 0)
		return (0);
	else
		return (1);


}
