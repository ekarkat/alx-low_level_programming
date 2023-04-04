/**
 * _strspn - Locates a character in a string
 * @s: string
 * @accept: accepted bytes
 * Return: number of bytes
 **/

unsigned int _strspn(char *s, char *accept)

{
	int n;
	int i;

	n = 0;
	while (s[j] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				n++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (n);
		}

		j++;
	}

	return (n);
}
