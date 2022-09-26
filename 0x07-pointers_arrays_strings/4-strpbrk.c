#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - fills memory with a constant byte.
 * @s: string to searched
 * @accept: characters to be checked
 * Return: when found or null
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	int m;

	for (k = 0; *s != '\0'; k++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
