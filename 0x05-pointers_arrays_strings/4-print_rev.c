#include "main.h"
/**
 *print_rev - prints reverse of string
 * @str: points to the string
*/
void print_rev(char *str)
{
	int k;

	k = 0;
	for (k = 0; str[k] != '\0'; k++)
		;
	for (--k; k >= 0; --k)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
