/**
 * _strpbrk - matches any character specified
 * @s: the checked string
 * @accept: the characters set
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
				return (s + j);
			i++;
		}

		j++;
	}
	return (0);

}
