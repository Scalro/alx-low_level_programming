#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function prototype
 * @s1: string 1
 * @s2: string 2
 * Return: return value
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1cnt, s2cnt, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1cnt = 0; s1[s1cnt]; s1cnt++)
		;
	for (s2cnt = 0; s2[s2cnt]; s2cnt++)
		;
	sizeBuffer = s1cnt + s2cnt + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
		i < s1cnt ? (p[i] = s1[i]) : (p[i] = s2[i - s1cnt]);
	return (p);
}
