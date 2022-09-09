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
		for (b = 'a'; b <= 'z'; b++)
			putchar(b);
		for (b = 'A'; b <= 'Z'; b++)
			putchar(b);
	}
	putchar('\n');
	return (0);
}
