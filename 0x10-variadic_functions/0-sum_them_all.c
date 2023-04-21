#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum numbers
 * @n : the number of args
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int sum;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);

	va_end(list);
	return (sum);
}
