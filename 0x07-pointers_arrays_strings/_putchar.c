#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: prints the character
 * Return: returns a value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
