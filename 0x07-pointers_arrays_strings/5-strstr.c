#include "main.h"
#include <stdio.h>
/**
 * _strstr - fills memory with a constant byte.
 * @haystack: string to searched
 * @needle: substring being checked
 * Return: when found or null
 */
char *_strstr(char *haystack, char *needle)
{
	int k;
	int m;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[k + m] != needle[m])
				break;
		}
		if (!needle[m])
			return (&haystack[k]);
	}
	return (NULL);
}
