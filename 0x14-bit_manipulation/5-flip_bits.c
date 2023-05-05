#include "main.h"

/**
 * flip_bits - get bit in a specific index
 * @n : the number
 * @m : the second
 * Return: return the bit value 0 or 1
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int count = 0;

	num = m^n;
	while (num > 0)
	{
		if ((num & 1) == 1)
			count++;
		num >>= 1;
	}
	return (count);
}
