#include "main.h"
/**
 *puts_half -prints half the string
 *followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		;
	k++;
	for (k /= 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
