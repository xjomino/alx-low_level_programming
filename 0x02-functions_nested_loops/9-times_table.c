#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int k, b, c;

	for (k = 0; k < 10; k++)
	{
		for (b = 0; b < 10; b++)
		{
			c = k * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			} else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
