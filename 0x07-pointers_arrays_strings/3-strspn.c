#include "main.h"
/**
 * _strspn - fills memory with a constant byte.
 * @s: string to be checked
 * @accept: characters being searched
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int k;
	int c;
	int acc;
	int f = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		acc = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[k] == accept[c])
			{
				f++;
				acc = 1;
			}
		}
		if (acc == 0)
		{
			return (f);
		}
	}
	return (0);
}
