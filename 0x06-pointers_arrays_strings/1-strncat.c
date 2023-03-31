#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: number of characters to append.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destln = 0;
	int srcln = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destln++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcln++;
	for (i = 0 ; i < n ; i++)
		dest[destln + i] = src[i];
	return (dest);
}
