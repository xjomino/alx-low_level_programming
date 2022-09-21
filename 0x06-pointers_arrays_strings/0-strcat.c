#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int b;

	for (k = 0; dest[k] != '\0'; k++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[k] = src[b];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
