/**
 * _strspn - function
 * @s: segmentation
 * @accept: compare strings
 * Return: returns value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0' && s[a] != accept[b])
			b++;
		if (accept[b] == '\0')
			return (a);
		a++;
	}
	return (a);
}
