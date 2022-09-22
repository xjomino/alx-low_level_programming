#include "main.h"
/**
 * _strcmp - copies a strings
 * @s1: string to be compared to s2
 * @s2: string to be compared with s1
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' || s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
	}
	return (0);
}
