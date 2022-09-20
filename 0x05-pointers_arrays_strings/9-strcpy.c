#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte to a buffer
 * dest
 * @dest: to be copied to
 * @src: to be copied from
 * Return: dest which is a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
	dest[k]	= src[k];
	}
	dest[k] = '\0';
	return (dest);
}
