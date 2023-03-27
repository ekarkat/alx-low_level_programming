#include "main.h"

/**
 * swap_int - swap two integers
 * @a: pointer that poin to a
 * @b: pointer tha point o b
*/

int swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *c;
}
