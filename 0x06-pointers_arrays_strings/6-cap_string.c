#include "main.h"
/**
 * cap_string - changes all lowercase
 * to lowercase
 * @m: string aaray
 * Return: string
 */
char *cap_string(char *m)
{
	int k;
	int b;
	char n[] = {'.', ' ', '!', ',', '?', '(', ')', '{', '}', '\n', '\t'
		, ';', '"'};
	for (k = 0; m[k] != '\0'; k++)
	{
		if (m[k] >= 'a' && m[k] <= 'z')
			m[k] = m[k] - 32;
		for (b = 0; b < 13; b++)
		{
			if (m[k] == n[b])
			{
				if (m[k + 1] >= 'a' && m[k + 1] <= 'Z')
				{
					m[k + 1] = -32;
				}
			}
		}
	}
	return (m);
}
