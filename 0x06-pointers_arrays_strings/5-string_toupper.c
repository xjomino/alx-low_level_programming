#include "main.h"
/**
 * string_toupper- changes all lowercase
 * to lowercase
 * @m: string aaray
 * Return: string
 */
char *string_toupper(char *m)
{
	int k;

	for (k = 0; m[k] != '\0'; k++)
	{
		if (m[k] >= 'a' && m[k] <= 'z')
			m[k] = m[k] - 32;
	}
	return (m);
}
