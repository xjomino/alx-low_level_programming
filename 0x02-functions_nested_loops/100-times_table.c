#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0
 *@n: number of times table
 */
void print_times_table(int n)
{
	int k, b, c;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			for (b = 0; b <= n; b++)
			{
				c = k * b;
				if (b == 0)
				{
					_putchar(c + '0');
				} else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
