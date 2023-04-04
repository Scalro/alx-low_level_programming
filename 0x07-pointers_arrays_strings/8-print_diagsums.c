#include <stdio.h>
/**
 * print_diagsums - function that prints sum of two diagonals
 * @a: an array pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, sump, sumb;

	sump = sumb = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sump += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumb += a[i];
	printf("%d, %d\n", sump, sumb);
}
