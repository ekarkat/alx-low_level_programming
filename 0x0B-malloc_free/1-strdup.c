#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str : string
 * Return: return pointer or null if memory is insufficient
 */

char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(str));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
