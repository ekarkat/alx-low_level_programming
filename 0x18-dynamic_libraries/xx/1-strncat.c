#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: 2end string
 * @n: bytes
 * Return: return result to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
	}
	return (dest);
}
