#include "main.h"
/**
 * _strncmp - function comparing two strings
 * @s1: string check
 * @s2: string check
 * @b: bytes to check
 * Return: returns values
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int j;
	for (j = 0; j <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; j++)
	{
		s1++;
		s2++;
	}
	return (j - b);
}
/**
 * _strstr - function for a second string
 * @haystack: str
 * @needle: str
 * Return: return a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int l;

	l = 0;
	while (needle[l] != '\0')
		l++;

	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, l) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
