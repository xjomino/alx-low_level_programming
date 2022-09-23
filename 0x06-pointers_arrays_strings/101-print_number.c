#include "main.h"
/**
 * print_number- prints an integer
 * @n: nth interger
 */
void print_number(int n)
{
	int k;

	if (n < 0)
	{
		k = -n;
		_putchar('-');
	} else
	{
		k = n;
	}
	if (n / 10)
		print_number(k /10);
	_putchar((k %10) + '0');
}
