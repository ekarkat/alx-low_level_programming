#include "main.h"

/**
 * _strcpy - function cpy
 * @dest : destination
 * @src : source
 * Return: reurn 0
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while ((*dest++ = *src++) != '\0')
	{
	}
	*dest = '\0';
	return (original_dest);
}
