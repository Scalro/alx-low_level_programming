#include "main.h"
#include <stdio.h>
/**
  * checker - checks recursively is_prime_number
  * @n: iterator
  * @base: base num
  * Return: returns value
  */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
/**
  * is_prime_number - checks prime number
  * @n: the number to check
  * Return: ruturns value
  */
int is_prime_number(int n)
{
	return (checker(2, n));
}
