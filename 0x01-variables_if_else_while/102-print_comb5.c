#include <stdio.h>
/**
 * main - Entry point
 * printing random numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int k;

	for (b = 0; b < 100; b++)
	{
		for (k = 0; k < 100; k++)
		{
			if (k < b)
			{
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (b != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
