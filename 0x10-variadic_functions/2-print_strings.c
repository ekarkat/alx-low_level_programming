#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator : separator
 * @n : number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lust;
	unsigned int i;
	char *str;

	va_start(lust, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(lust, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	va_end(lust);
	printf("\n");
}
