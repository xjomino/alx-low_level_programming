#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int m, k, b;

	m = 0
	k = size - 1
	while (m < size)
	{
		k = size - 1 - m;
		b = m + 1;
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		while (b > 0)
		{
			_putchar('#');
			b--;
		}
			_putchar('\n');
			m++;
	}
	if (size <= 0)
		_putchar('\n');
}
