#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-function that
 * concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to concatenate
 * Return: NULL if string = Null,,a pointer
 * if _strdup returns pointer or NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n < l2)
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s3)
		return (NULL);
	while (k < l1)
	{
		s3[k] = s1[k];
		k++;
	}
	while (n < l2 && k < (l1 + n))
		s3[k++] = s2[j++];
	while (n >= l2 && k < (l1 + l2))
		s3[k++] = s2[j++];
	s3[k++] = '\0';
	return (s3);
}
