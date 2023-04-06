#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - function
 * @s: count
 * Return: returns value
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * checker - function for is_palindrome
 * @str: string
 * @len: string lenght
 * @count: counter of recursion
 * Return: returns value
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checker
 * @s: the string to check
 * Return: returns value
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
