#include "main.h"
/**
 * _strlen_recursion - function returning lenght
 * @s: the string to count
 * Return: returns srting
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
