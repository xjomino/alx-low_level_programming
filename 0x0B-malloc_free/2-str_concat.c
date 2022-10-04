#include "main.h"
#include <stdlib.h>
/**
 * str_concat -function that
 * concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if string = Null,,a pointer
 * if _strdup returns pointer or NULL if it fail
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int k, j, l1, l2;

	k = 0;
	j = 0;
	l1 = 0;
	l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s3 == NULL)
		return (NULL);
	k = 0;
	j = 0;
	if (s1)
	{
		while (k < l1)
		{
			s3[k] = s1[k];
			k++;
		}
	}
	if (s2)
	{
		while (k < (l1 + l2))
		{
			s3[k] = s2[j];
			k++;
			j++;
		}
	}
	s3[k] = '\0';
	return (s3);
}

