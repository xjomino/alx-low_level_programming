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
	{
		for (b = 'z'; b >= 'a'; b--)
			putchar(b);
	}
	putchar('\n');
	return (0);
}
