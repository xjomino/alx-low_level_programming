#include "main.h"
#include <stdio.h>
/**
 * _strchr - fills memory with a constant byte.
 * @s: string to searched
 * @c: character to be checked
 * Return: when found or null
 */
char *_strchr(char *s, char c)
{
	int k;

	while (1)
	{
		k = *s++;
		if (k == c)
		{
			return (s - 1);
		}
		if (k == 0)
		{
			return (NULL);
		}
	}
	return (0);
}
