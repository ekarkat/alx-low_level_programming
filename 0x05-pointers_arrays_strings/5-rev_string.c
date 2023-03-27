#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char new;
	int n;
	int i;

	i = 0;
	n = 0;
	new = s[0];
	while (s[n] != '\0')
	n++;
	for (; i < n; i++)
	{
		n--;
		new = s[i];
		s[i] = s[n];
		s[n] = new;
	}
}
