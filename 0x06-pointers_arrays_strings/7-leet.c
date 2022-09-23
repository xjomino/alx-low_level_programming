#include "main.h"
/**
 * leet - changes lettes aAeEoOtTlL to 1337
 * @m: string aaray
 * Return: string
 */
char *leet(char *m)
{
	int k;
	int b;

	char *n = "aAeEoOtTlI";
	char *c = "4433007711";

	for (k = 0; m[k] != '\0'; k++)
	{
		for (b = 0; b < 10; b++)
		{
			if (m[k] == n[b])
			{
				m[k] = c[b];
			}
		}
	}
	return (m);
}
