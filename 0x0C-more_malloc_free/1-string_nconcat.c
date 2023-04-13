#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1 : string 1
 * @s2 : string 2
 * @n : number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	l2 = 0;
	while (s1[l1] != ('\0'))
		l1++;
	while (s2[l2] != ('\0'))
		l2++;

	sum = malloc(l1 + n + 1);
	if (sum == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < l1 + n; i++)/* no need to add +1 l1 "abc" = 3 # 2 */
	{/* s0 = a s1 = b s2 = c s3 = '\0' */
		if (i < l1)
			sum[i] = s1[i];
		else
		{
			sum[i] = s2[j];
			j++;
		}
	}
	sum[i] = '\0';
	return (sum);
}
