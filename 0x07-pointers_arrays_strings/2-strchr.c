#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the source
 * @c: the charater
 * Return:  pointer to the first occurrence of the character c in the string s
 * or a NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);

	}
	return (0);
}
