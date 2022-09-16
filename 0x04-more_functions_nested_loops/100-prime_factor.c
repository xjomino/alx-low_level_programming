#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int k;
	long int max;
	long int b;

	k = 612852475143;
	max = -1;

	while (k % 2 == 0)
	{
		max = 2;
		k /= 2;
	}
	for (b = 3; b <= sqrt(n); b = b + 2)
	{
		while (k % b == 0)
		{
			max = b;
			k = k / b;
		}
	}
	if (k > 2)
		max = k;

	printf("%ld\n", max);
	return (0);
}
