#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: initial memory area
 * @src: memory area to be added
 * @n: upto to the nth number
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
