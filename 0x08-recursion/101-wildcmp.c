#include "main.h"

/**
 * ln - count character
 * @s : string
 * Return: char number
 */
int ln(char *s)
{
        if (*s !='\0')
                return (1 + ln(s + 1));
	        return (0);
}
/**
 * find - return the match index inside a string
 * @s1 : string
 * @sc2 : the character
 * @i : starting index
 * @j : independent index
 * Return: the index
 */
int find(char *s1, char sc2, int i, int j)
{
	if (i == 0)
		return (1);
	else if (sc2 == *(s1 + i))
		return (i);
	else
		return (find(s1, sc2, i - 1, j));

}
/**
 * test - check if sterings identical
 * @s1 : string 1
 * @s2 : string 2
 * @i : starting index for s1
 * @j : starting index for s2
 * Return: 1 if identical, otherwise 0
 */
int test(char *s1, char *s2, int i, int j)
{
	int d = ln(s1) - 1;

	if (*(s2 + j) == '*' && *(s2 + j + 1) == '\0')
		return (1);

	if (*(s1 + i) == '\0' && *(s2 + j) == '\0')
		return (1);

	if (*(s1 + i) == *(s2 + j))
		return (test(s1, s2, i + 1, j + 1));

	else if (*(s2 + j) == '*')
	{
		if (*(s2 + j + 1) == '*')
			return (test(s1, s2, i, j + 1));
		i = find(s1, *(s2 + j + 1), d, j) - 1;
		return (test(s1, s2, i + 1, j + 1));
	}

	else
		return (0);
}
/**
 * wildcmp - compares two strings
 * @s1 : first string
 * @s2 : 2end string
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (test(s1, s2, 0, 0));
}
