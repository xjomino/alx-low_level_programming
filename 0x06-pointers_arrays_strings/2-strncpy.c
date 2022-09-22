#include "main.h"
/**
 * _strncpy - copies a strings
 * @dest: destination to be copied to
 * @src: string to be copied
 * @n: upto the nth value to copy
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0' && k < n; k++)
		dest[k] = src[k];
	for (; n > k; k++)
		dest[k] = '\0';
	return (dest);
}
