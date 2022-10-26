#include <stdio.h>
/**
 * main - prints the first 50 fibonacci
 * numbrs starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int a, b, k, aa, ab, ba, bb;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (k = 1; k <= 91; k++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}
	aa = a / 1000000000;
	ab = a % 1000000000;
	ba = b / 1000000000;
	bb = b / 1000000000;

	for (k = 92; k < 99; k++)
	{
		printf(", %lu", ba + (bb / 1000000000));
		printf("%lu", bb % 1000000000);
		ba = ba + aa;
		aa = ba - aa;
		bb = bb + ab;
		ab = bb - ab;
	}
	printf("\n");

	return (0);
}
