#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints name
 * @name : the name
 * @
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
