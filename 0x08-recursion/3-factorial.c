#include "main.h"
/**
 * factorial - a function returning factorial
 * @n: factorial to be returned
 * Return: returns n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
