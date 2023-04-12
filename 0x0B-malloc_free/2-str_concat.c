#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1 : string 1
 * @s2 : string 2
 * Return: null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int ln1, ln2;
	char *merge;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	for (ln1 = 0; s1[ln1] != '\0'; ln1++)
		ln1++;
	for (ln2 = 0; s2[ln2] != '\0'; ln2++)
		ln2++;

	merge = malloc(ln1 + ln2 + 1);

	if (merge == NULL)
		return (NULL);
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		merge[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		merge[i] = s2[j];
		i++;
	}
	merge[i] = '\0';

	return (merge);
}
