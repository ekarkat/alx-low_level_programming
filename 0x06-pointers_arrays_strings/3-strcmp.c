#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the diffrence
 */

int _strcmp(char *s1, char *s2)
{
	int i, df;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	df = (str1[i] - str2[i])
	return (df);
}
