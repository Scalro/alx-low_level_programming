#include "main.h"
/**
 * _print_rev_recursion - function to print string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
