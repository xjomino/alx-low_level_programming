#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * printing lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char k;
	int j;

	j = 0;

	while (j < 10)
	{
		k = 'a';

		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
