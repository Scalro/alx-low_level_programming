#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates memor
  * @b: size
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
