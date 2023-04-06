#include "main.h"
#include <stdio.h>
/**
 * checker - checks input
 * @n: number sq
 * @base: base number
 * Return: returns sq rt
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - function
 * @n: number to check
 * Return: returns sq root n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
