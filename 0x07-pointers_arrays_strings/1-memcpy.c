/**
 * _memcpy - function to copy memory
 * @dest: pointing memory
 * @src: pointing the source memory
 * @n: bytes to be copied
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
