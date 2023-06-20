#include "main.h"
#include <stddef.h>

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: 2end string
 * @n: bytes
 * Return: return result to dest
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
