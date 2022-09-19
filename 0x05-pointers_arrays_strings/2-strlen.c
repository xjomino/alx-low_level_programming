#include "main.h"
/**
 *_strlen - gives the lenth of a string
 * @s: checks the string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
