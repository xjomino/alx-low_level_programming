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
	int x;

	for (b = 48; b < 58; b++)
	{
		for (k = 49; k < 58; k++)
		{
			for (x = 50; x < 58; x++)
			{
				if (x > k && k > b)
				{
					putchar(b);
					putchar(k);
					putchar(x);
					if (b != 55 || k != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
