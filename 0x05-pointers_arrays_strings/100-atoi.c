#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, j, c, len, m, digit;

	k = 0;
	j = 0;
	c = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (k < len && m == 0)
	{
		if (s[k] == '-')
			++j;
		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (j % 2)
				digit = -digit;
			c = c * 10 + digit;
			m = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			m = 0;
		}
		k++;
	}
	if (m == 0)
		return (0);
	return (c);
}
