#include "main.h"

/**
 * ln - determine the lenght of a tring
 * @s : the string
 * Return: the lenght of the string
 */
int ln(char *s)
{
	if (*s != '\0')
		return (1 + ln(s + 1));
	return (0);
}

/**
 * test - test if s1 == s2
 * @s1 : string 1
 * @l : lenght
 * @i : index 0 plus
 * Return: 1 if identical otherwise 0
 */
int test(char *s1, int l, int i)
{
	if (i > (l / 2))
		return (1);

	if (*(s1 + i) != *(s1 + l - i))
		return (0);
	else
		return (test(s1, l, i + 1));
}

/**
 * is_palindrome - check if a string is palindrome
 * @s : the string
 * Return: return 1 if the string is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int d;

	d = ln(s) - 1;
	return (test(s, d, 0));
}
