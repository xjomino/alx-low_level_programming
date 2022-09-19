#include "main.h"
/**
 *_puts - prints to stdout
 * @str: points to the string
*/
void _puts(char *str)
{
	int k;

	k = 0;
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
