#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 */

void puts_half(char *str)
{
	int i, n, ln;

	ln = 0;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
		ln++;
	}

	n = (ln / 2);
	if ((ln % 2) == 1)
		n = ((ln + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
