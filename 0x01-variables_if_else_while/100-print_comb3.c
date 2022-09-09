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

	for (b = 48; b <= 56; b++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > b)
			{
				putchar(b);
				putchar(k);
				if (b != 56 || k != 57)
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
