/**
 * _strpbrk - function that search for a string
 * @s: pointer
 * @accept: an array
 * Return: return a value
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (0);
}
