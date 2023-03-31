#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @strc: string
 * Return: the pointer to dest
 */

char *string_toupper(char *strc)
{
	int i;

	for (i = 0; strc[i] != '\0'; i++)
	{
		if ((strc[i] >= 97) && (strc[i] <= 122))
			strc[i] = strc[i] - 32;
	}

	return (strc);
}
