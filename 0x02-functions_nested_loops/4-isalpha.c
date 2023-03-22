#include "main.h"
/**
 * _isalpha - function that prints alphabets
 * @c: parameter to be printed
 * Return: 1 if it is lower case
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
