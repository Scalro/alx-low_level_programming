/**
 * _strchr - function to locate a character
 * @s: pointer to string
 * @c: character to locate
 * Return: returns s + 1
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
