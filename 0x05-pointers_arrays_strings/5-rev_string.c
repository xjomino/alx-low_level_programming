#include "main.h"
/**
 *rev_string - prints reverse of string
 *@s: points to the string
 */
void rev_string(char *s)
{
	int k, j, m;
	char x;

	for (k = 0; s[k] != '\0'; k++)
		;

	j = k;
	for (--k, m = 0; m < j / 2; --k, m++)
	{
		x = s[m];
		s[m] = s[k];
		s[k] = x;
	}
}
