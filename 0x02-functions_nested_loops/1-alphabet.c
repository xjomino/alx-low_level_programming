#include "main.h"
/**
 * print_alphabet - Entry point
 * printing lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
}
