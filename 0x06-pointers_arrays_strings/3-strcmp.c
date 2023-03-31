#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: diffrence between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, df;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	df = (s1[i] - s2[i]);
	return (df);
}
