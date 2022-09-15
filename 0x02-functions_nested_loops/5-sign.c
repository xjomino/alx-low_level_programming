#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: the int being checked
 * Return: 1 if n > 0, if not 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}