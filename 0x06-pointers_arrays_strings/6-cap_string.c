#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122
			str[i] = str[i] - 97 + 65;
	}

	return (str)
}
