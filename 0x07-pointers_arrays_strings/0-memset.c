/**
 * _memset - function for memory
 * @s: points the memory location
 * @b: byte to be filled
 * @n: number of bytes filled
 * Return: it returns a value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
