#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: upto to the nth number
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
/**
 * *_calloc- allocates memory for an array
 * using malloc
 * @nmemb: Number of items in array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
