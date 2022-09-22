#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: upto the nth value to add
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int b;

	for (k = 0; dest[k] != '\0'; k++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--)
	{
		dest[k] = src[b];
		k++;
	}
	return (dest);
}
