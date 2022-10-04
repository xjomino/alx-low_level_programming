#include "main.h"
#include <stdlib.h>
/**
 * _strdup -function that returns a pointer
 * to a newly allocated space in memory.
 * which contains a copy of the string.
 * given as a parameter.
 * @str: size of array to create
 * Return: NULL if str = Null,,a pointer
 * if _strdup returns pointer or NULL if it fails
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int k, j;

	k = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	while ((ptr[k] = str[k]) != '\0')
	{
		k++;
	}
	return (ptr);
}

